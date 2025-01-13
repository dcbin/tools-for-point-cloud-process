#include "widget_main.hpp"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    WidgetMain widget;
    widget.show();  // 显示主窗口

    return app.exec();
}
