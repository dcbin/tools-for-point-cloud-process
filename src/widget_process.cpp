#include "widget_process.hpp"


WidgetProcess::WidgetProcess(QWidget *parent)
      : QWidget(parent), ui_process(new Ui::ProcessWidget),
        current_cloud(new pcl::PointCloud<pcl::PointXYZI>)
{
    ui_process->setupUi(this);
    connect(ui_process->voxelButton, SIGNAL(clicked()), this, SLOT(voxel_filter_button()));
    connect(ui_process->outlierDelButton, SIGNAL(clicked()), this, SLOT(outlier_filter_button()));
    connect(ui_process->groundDelButton, SIGNAL(clicked()), this, SLOT(ground_delete_button()));
    connect(ui_process->segmentButton, SIGNAL(clicked()), this, SLOT(segment_button()));
    connect(ui_process->returnButton, &QPushButton::clicked, this, &QWidget::close);
    connect(ui_process->withdrawButton, SIGNAL(clicked()), this, SLOT(withdraw_button()));
    ui_process->withdrawButton->setEnabled(false);
}

WidgetProcess::~WidgetProcess() {
    delete ui_process;
}

void WidgetProcess::voxel_filter_button() {
    if (this->cloud_stack.empty()) {
        QMessageBox::warning(this, "错误", "尚未加载点云！");
        return;
    }

    // 获取栈顶点云作为当前点云
    this->current_cloud = this->cloud_stack.top();

    // 获取用户输入的体素网格叶子大小
    bool ok;
    double voxel_size = this->ui_process->voxelSizeLineEdit->text().toDouble(&ok);

    if (!ok || voxel_size <= 0) {
        QMessageBox::warning(this, "错误", "请输入有效的体素栅格大小！");
        return;
    }

    // 使用体素滤波
    pcl::VoxelGrid<pcl::PointXYZI> voxel_filter;
    voxel_filter.setInputCloud(this->current_cloud);
    voxel_filter.setLeafSize(voxel_size, voxel_size, voxel_size);

    pcl::PointCloud<pcl::PointXYZI>::Ptr filtered_cloud(new pcl::PointCloud<pcl::PointXYZI>);
    voxel_filter.filter(*filtered_cloud);

    if (filtered_cloud->empty()) {
        QMessageBox::warning(this, "错误", "滤波后点云为空！");
        return;
    }

    // 将处理后的点云压入栈中
    this->cloud_stack.push(filtered_cloud);

    // 发送处理完成信号
    emit process_finished(this->cloud_stack.top());

    // 更新撤回按钮状态
    this->update_withdraw_button();

    QMessageBox::information(this, "提示", "体素滤波完成！");
}


void WidgetProcess::outlier_filter_button() {
    if(this->cloud_stack.empty()){
        QMessageBox::warning(this, "错误", "尚未加载点云！");
        return;
    }

    // 获取栈顶点云作为当前点云
    this->current_cloud = this->cloud_stack.top();

    // 获取用户输入的参数
    bool ok;
    int meanK = this->ui_process->meanKLineEdit->text().toInt(&ok);
    double stddevMulThresh = this->ui_process->stdLineEdit->text().toDouble(&ok);

    if (!ok) {
        QMessageBox::warning(this, "错误", "请输入有效的参数！");
        return;
    }
    // 使用统计滤波去除离群点
    pcl::PointCloud<pcl::PointXYZI>::Ptr cloud_filtered(new pcl::PointCloud<pcl::PointXYZI>);
    pcl::StatisticalOutlierRemoval<pcl::PointXYZI> sor;
    sor.setInputCloud(this->current_cloud);
    sor.setMeanK(meanK);
    sor.setStddevMulThresh(stddevMulThresh);
    sor.filter(*cloud_filtered);
    if(cloud_filtered->empty()){
        QMessageBox::warning(this, "错误", "滤波后点云为空！");
        return;
    }

    // 将处理后的点云压入栈中
    this->cloud_stack.push(cloud_filtered);

    // 发送处理完成信号
    emit process_finished(this->cloud_stack.top());
    // 更新撤回按钮状态
    this->update_withdraw_button();
}

void WidgetProcess::ground_delete_button() {
    // 检查点云栈是否为空
    if (this->cloud_stack.empty()) {
        QMessageBox::warning(this, "错误", "尚未加载点云！");
        return;
    }

    // 获取用户选择的算法
    QString selected_algorithm = ui_process->groundComboBox->currentText();

    // 获取用户输入的距离阈值
    bool ok;
    double distance_threshold = ui_process->disThreshHoldLineEdit->text().toDouble(&ok);
    if (!ok || distance_threshold <= 0) {
        QMessageBox::warning(this, "错误", "请输入有效的距离阈值！");
        return;
    }

    // 获取栈顶点云
    this->current_cloud = this->cloud_stack.top();

    // 执行选定的算法
    pcl::PointIndices::Ptr inliers(new pcl::PointIndices());
    pcl::ModelCoefficients::Ptr coefficients(new pcl::ModelCoefficients());
    pcl::SACSegmentation<pcl::PointXYZI> seg;

    if (selected_algorithm == "RANSAC") {
        seg.setMethodType(pcl::SAC_RANSAC);
    } else if (selected_algorithm == "LMEDS") {
        seg.setMethodType(pcl::SAC_LMEDS);
    } else if (selected_algorithm == "MSAC") {
        seg.setMethodType(pcl::SAC_MSAC);
    } else {
        QMessageBox::warning(this, "错误", "未知算法！");
        return;
    }

    // 设置通用参数
    seg.setOptimizeCoefficients(true);
    seg.setModelType(pcl::SACMODEL_PLANE);
    seg.setDistanceThreshold(distance_threshold);
    seg.setInputCloud(this->current_cloud);
    seg.segment(*inliers, *coefficients);

    if (inliers->indices.empty()) {
        QMessageBox::warning(this, "错误", "未找到任何地面点！");
        return;
    }

    // 提取非地面点
    pcl::ExtractIndices<pcl::PointXYZI> extract;
    extract.setInputCloud(this->current_cloud);
    extract.setIndices(inliers);
    extract.setNegative(true);  // 提取非地面点
    pcl::PointCloud<pcl::PointXYZI>::Ptr filtered_cloud(new pcl::PointCloud<pcl::PointXYZI>());
    extract.filter(*filtered_cloud);

    // 更新点云栈
    this->cloud_stack.push(filtered_cloud);

    // 发射信号更新显示
    emit process_finished(filtered_cloud);

    // 更新撤回按钮状态
    this->update_withdraw_button();

    QMessageBox::information(this, "提示", "地面去除完成！");
}


void WidgetProcess::segment_button() {
    QMessageBox::information(this, "提示", "点云分割！");
}

void WidgetProcess::withdraw_button() {
    if (this->cloud_stack.size() > 1) {
        // qDebug() << "撤回前栈顶点云大小：" << this->cloud_stack.top()->size();
        this->cloud_stack.pop();
        // qDebug() << "撤回后栈顶点云大小：" << cloud_stack.top()->size();
        emit process_finished(cloud_stack.top());
        this->update_withdraw_button();
        return;
    }
}


void WidgetProcess::receive_cloud(pcl::PointCloud<pcl::PointXYZI>::Ptr &cloud) {
    this->cloud_stack.push(cloud);
}

void WidgetProcess::update_withdraw_button() {
    if(this->cloud_stack.size() > 1){
        this->ui_process->withdrawButton->setEnabled(true);
    }
    else{
        this->ui_process->withdrawButton->setEnabled(false);
    }
}