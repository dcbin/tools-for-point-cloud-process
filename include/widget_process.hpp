#ifndef WIDGET_PROCESS_HPP
#define WIDGET_PROCESS_HPP

#include "process_widget.hpp"  // 包含生成的头文件
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <pcl-1.10/pcl/io/pcd_io.h>
#include <pcl-1.10/pcl/point_cloud.h>
#include <pcl-1.10/pcl/point_types.h>
#include <pcl-1.10/pcl/impl/point_types.hpp>
#include <pcl-1.10/pcl/filters/voxel_grid.h>
#include <pcl-1.10/pcl/filters/statistical_outlier_removal.h>
#include <pcl-1.10/pcl/segmentation/sac_segmentation.h>
#include <pcl/filters/extract_indices.h>
#include <stack>

class WidgetProcess : public QWidget {
    Q_OBJECT

public:
    explicit WidgetProcess(QWidget *parent = nullptr);
    ~WidgetProcess();

signals:
    /**
     * @brief process_finished 传递处理后的点云
     * @param cloud 处理后的点云
     */
    void process_finished(pcl::PointCloud<pcl::PointXYZI>::Ptr cloud);

private slots:

    /**
     * @brief voxel_filter_button 体素滤波的槽函数
     */
    void voxel_filter_button();

    /**
     * @brief outlier_filter_button 离群点滤波的槽函数
     */
    void outlier_filter_button();

    /**
     * @brief ground_delete_button 地面去除的槽函数
     */
    void ground_delete_button();

    /**
     * @brief segment_button 点云分割的槽函数
     */
    void segment_button();

    /**
     * @brief withdraw_button 撤销操作的槽函数,撤销后需要发送process_finished信号,并更新主界面
     */
    void withdraw_button();

public:
    /**
     * @brief 接收主界面传来的点云数据
     */
    void receive_cloud(pcl::PointCloud<pcl::PointXYZI>::Ptr &cloud);

    /**
     * @brief 更新撤回按钮状态,每次处理点云后调用
     */
    void update_withdraw_button();

private:
    Ui::ProcessWidget *ui_process;  // 指向界面的指针
    pcl::PointCloud<pcl::PointXYZI>::Ptr current_cloud;  // 当前点云
    std::stack<pcl::PointCloud<pcl::PointXYZI>::Ptr> cloud_stack;  // 点云处理栈
};

#endif  // WIDGET_HPP
