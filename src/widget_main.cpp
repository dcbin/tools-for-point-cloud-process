#include "widget_main.hpp"

WidgetMain::WidgetMain(QWidget *parent)
      : QWidget(parent), ui(new Ui::mainWidget),
        viewer_src(new pcl::visualization::PCLVisualizer("viewer_left", false)),
        viewer_right(new pcl::visualization::PCLVisualizer("viewer_right", false))
{
    // 初始化界面
    ui->setupUi(this);
    this->ui->srcCloudWidget->SetRenderWindow(viewer_src->getRenderWindow());
    this->ui->rightCloudWidget->SetRenderWindow(viewer_right->getRenderWindow());
    viewer_src->setupInteractor(this->ui->srcCloudWidget->GetInteractor(), this->ui->srcCloudWidget->GetRenderWindow());
    viewer_right->setupInteractor(this->ui->rightCloudWidget->GetInteractor(), this->ui->rightCloudWidget->GetRenderWindow());
    
    // 初始禁用处理按钮和保存按钮
    this -> ui -> processButton -> setEnabled(false);
    this -> ui -> saveButton -> setEnabled(false);
    // 连接信号和槽
    connect(ui -> loadSrcPcdButton, SIGNAL(clicked()), this, SLOT(load_src_pcd()));
    connect(ui -> exitButton, SIGNAL(clicked()), this, SLOT(exit_program()));
    connect(ui -> saveButton, SIGNAL(clicked()), this, SLOT(save_cloud()));
    connect(ui -> processButton, SIGNAL(clicked()), this, SLOT(process_cloud()));
}

WidgetMain::~WidgetMain() {
    delete ui;
}

void WidgetMain::load_src_pcd() {
    // 如果处理窗口已经打开，则提示关闭处理窗口
    if(this->process_window != nullptr){
        QMessageBox::warning(this, "提示", "请先关闭点云处理窗口！");
        return;
    }

    // 打开文件对话框
    QString file_name = QFileDialog::getOpenFileName(this, "请选择PCD文件", "/home", "PCD Files(*.pcd)");
    if (file_name.isEmpty()) {
        return;
    }

    // 加载点云文件
    pcl::PointCloud<pcl::PointXYZI>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZI>);
    if (pcl::io::loadPCDFile<pcl::PointXYZI>(file_name.toStdString(), *cloud) == -1) {
        QMessageBox::warning(this, "错误", "无法加载点云文件！");
        return;
    }

    this->cloud_src = cloud;
    // // 检查强度值范围
    // float min_intensity = std::numeric_limits<float>::max();
    // float max_intensity = std::numeric_limits<float>::lowest();
    // for (const auto& point : cloud->points) {
    //     if (!std::isnan(point.intensity)) {
    //         min_intensity = std::min(min_intensity, point.intensity);
    //         max_intensity = std::max(max_intensity, point.intensity);
    //     }
    // }
    // qDebug() << "Intensity range: [" << min_intensity << ", " << max_intensity << "]";

    // 使用强度字段为点云着色
    pcl::visualization::PointCloudColorHandlerGenericField<pcl::PointXYZI> intensity_color(cloud, "intensity");
    if (!intensity_color.isCapable()) {
        QMessageBox::warning(this, "错误", "点云不包含强度信息！");
        return;
    }

    // 显示点云处理按钮
    ui -> processButton -> setEnabled(true);

    // 清理所有点云
    viewer_src->removeAllPointClouds();
    // 添加点云
    viewer_src->addPointCloud<pcl::PointXYZI>(cloud, intensity_color, "cloud");
    // 重置相机视角
    viewer_src->resetCamera();
    this -> ui -> srcCloudWidget -> update();
}

void WidgetMain::save_cloud() {
    // 打开文件对话框
    QString file_name = QFileDialog::getSaveFileName(this, "请选择保存路径", "/home", "PCD Files(*.pcd)");
    if (file_name.isEmpty()) {
        return;
    }

    // viewer_right -> getPointCloud<pcl::PointXYZI>(*cloud);
    if (pcl::io::savePCDFileASCII(file_name.toStdString(), *this->cloud_processed) == -1) {
        QMessageBox::warning(this, "错误", "无法保存点云文件！");
        return;
    }
    QMessageBox::information(this, "提示", "点云保存成功！");
}


void WidgetMain::process_cloud(){

    if (this->cloud_src == nullptr) {
        QMessageBox::warning(this, "错误", "尚未加载点云！");
        return;
    }

    if(this->process_window == nullptr){
        // 创建子窗口
        this->process_window = new WidgetProcess(nullptr);
        // 使用close()关闭窗口时，自动销毁窗口指针
        process_window -> setAttribute(Qt::WA_DeleteOnClose);

        // 将点云传递给子窗口
        process_window->receive_cloud(this->cloud_src);

        // 直接叉掉子窗口，或者调用close()关闭子窗口时，销毁子窗口指针
        connect(process_window, &QWidget::destroyed, this, [this]() {
            this ->process_window = nullptr; // 窗口关闭后，重置指针
        });

        // 连接子窗口处理完成的信号
        connect(process_window, &WidgetProcess::process_finished, this, &WidgetMain::receive_processed_cloud);
        // 显示子窗口
        process_window->show();
    }
    else{
        QMessageBox::warning(this, "提示", "窗口已经打开！");
    }
}

void WidgetMain::receive_processed_cloud(pcl::PointCloud<pcl::PointXYZI>::Ptr cloud) {
    this->cloud_processed = cloud;
    // 使用强度字段为点云着色
    pcl::visualization::PointCloudColorHandlerGenericField<pcl::PointXYZI> intensity_color(this->cloud_processed, "intensity");
    if (!intensity_color.isCapable()) {
        QMessageBox::warning(this, "错误", "点云不包含强度信息！");
        return;
    }

    // 显示保存按钮
    ui -> saveButton -> setEnabled(true);

    // 清理所有点云
    viewer_right->removeAllPointClouds();
    // 添加点云
    viewer_right->addPointCloud<pcl::PointXYZI>(this->cloud_processed, intensity_color, "cloud");
    // 重置相机视角
    viewer_right->resetCamera();
    this -> ui -> rightCloudWidget -> update();
}

void WidgetMain::exit_program() {
    // if (this->process_window != nullptr) {
    //     QMessageBox::warning(this, "提示", "请先关闭点云处理窗口！");
    //     return;
    // }
    // exit(0);
    this->close();
}

void WidgetMain::closeEvent(QCloseEvent *event){
    // 检查子界面是否仍然打开
    if (this->process_window != nullptr) {
        QMessageBox::warning(this, "提示", "请先关闭点云处理窗口！");
        event->ignore(); // 阻止主界面关闭
        return;
    }

    // 如果子界面已关闭，则允许主界面关闭
    event->accept();
}
