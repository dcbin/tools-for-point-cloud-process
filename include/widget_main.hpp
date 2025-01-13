#ifndef WIDGET_MAIN_HPP
#define WIDGET_MAIN_HPP

#include "main_widget.hpp"
#include "widget_process.hpp"
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QtGui/QCloseEvent>
#include <vtk-7.1/vtkRenderWindow.h>
#include <pcl-1.10/pcl/visualization/pcl_visualizer.h>
#include <pcl-1.10/pcl/io/pcd_io.h>
#include <pcl-1.10/pcl/point_cloud.h>
#include <pcl-1.10/pcl/point_types.h>
#include <pcl-1.10/pcl/impl/point_types.hpp>

class WidgetMain : public QWidget {
    Q_OBJECT

public:
    explicit WidgetMain(QWidget *parent = nullptr);
    ~WidgetMain();
    void closeEvent(QCloseEvent *event) override;

private slots:

    /**
     * @brief load_src_pcd 读取点云的槽函数
     */
    void load_src_pcd();
    
    /**
     * @brief process_cloud 处理点云的槽函数
     */
    void process_cloud();

    /**
     * @brief exit_program 退出程序的槽函数
     */
    void exit_program();

    /**
     * @brief save_cloud 保存点云的槽函数
     */
    void save_cloud();

    /**
     * @brief receive_cloud 接收处理后的点云
     * @param cloud 处理后的点云
     */
    void receive_processed_cloud(pcl::PointCloud<pcl::PointXYZI>::Ptr cloud);

private:
    Ui::mainWidget *ui;  // 指向界面的指针
    pcl::PointCloud<pcl::PointXYZI>::Ptr cloud_src;  // 源点云
    pcl::PointCloud<pcl::PointXYZI>::Ptr cloud_processed;  // 处理后的点云
    pcl::visualization::PCLVisualizer::Ptr viewer_src;  // 源点云的可视化对象
    pcl::visualization::PCLVisualizer::Ptr viewer_right;  // 处理后的点云的可视化对象
    WidgetProcess *process_window = nullptr;  // 处理界面
};

#endif  // WIDGET_HPP
