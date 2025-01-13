/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAIN_WIDGET_HPP
#define MAIN_WIDGET_HPP

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <vtk-7.1/QVTKWidget.h>

QT_BEGIN_NAMESPACE

class Ui_mainWidget
{
public:
    QGridLayout *gridLayout_3;
    QWidget *labelWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *srcCloudLabel;
    QLabel *processedCloudLabel;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QVTKWidget *srcCloudWidget;
    QVTKWidget *rightCloudWidget;
    QWidget *functionWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *functionAeraLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *loadSrcPcdButton;
    QPushButton *processButton;
    QPushButton *saveButton;
    QPushButton *exitButton;

    void setupUi(QWidget *mainWidget)
    {
        if (mainWidget->objectName().isEmpty())
            mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        mainWidget->resize(900, 650);
        mainWidget->setMinimumSize(QSize(900, 650));
        gridLayout_3 = new QGridLayout(mainWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        labelWidget = new QWidget(mainWidget);
        labelWidget->setObjectName(QString::fromUtf8("labelWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelWidget->sizePolicy().hasHeightForWidth());
        labelWidget->setSizePolicy(sizePolicy);
        labelWidget->setMinimumSize(QSize(880, 45));
        horizontalLayout_3 = new QHBoxLayout(labelWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        srcCloudLabel = new QLabel(labelWidget);
        srcCloudLabel->setObjectName(QString::fromUtf8("srcCloudLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        srcCloudLabel->setFont(font);

        horizontalLayout_3->addWidget(srcCloudLabel);

        processedCloudLabel = new QLabel(labelWidget);
        processedCloudLabel->setObjectName(QString::fromUtf8("processedCloudLabel"));
        processedCloudLabel->setFont(font);

        horizontalLayout_3->addWidget(processedCloudLabel);


        gridLayout_3->addWidget(labelWidget, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 5, 5, 5);
        srcCloudWidget = new QVTKWidget(mainWidget);
        srcCloudWidget->setObjectName(QString::fromUtf8("srcCloudWidget"));
        srcCloudWidget->setMinimumSize(QSize(400, 390));

        horizontalLayout_2->addWidget(srcCloudWidget);

        rightCloudWidget = new QVTKWidget(mainWidget);
        rightCloudWidget->setObjectName(QString::fromUtf8("rightCloudWidget"));
        rightCloudWidget->setMinimumSize(QSize(400, 390));

        horizontalLayout_2->addWidget(rightCloudWidget);


        verticalLayout->addLayout(horizontalLayout_2);

        functionWidget = new QWidget(mainWidget);
        functionWidget->setObjectName(QString::fromUtf8("functionWidget"));
        sizePolicy.setHeightForWidth(functionWidget->sizePolicy().hasHeightForWidth());
        functionWidget->setSizePolicy(sizePolicy);
        functionWidget->setMinimumSize(QSize(400, 100));
        functionWidget->setMaximumSize(QSize(16777215, 100));
        verticalLayout_2 = new QVBoxLayout(functionWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        functionAeraLabel = new QLabel(functionWidget);
        functionAeraLabel->setObjectName(QString::fromUtf8("functionAeraLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        functionAeraLabel->setFont(font1);

        verticalLayout_2->addWidget(functionAeraLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        loadSrcPcdButton = new QPushButton(functionWidget);
        loadSrcPcdButton->setObjectName(QString::fromUtf8("loadSrcPcdButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loadSrcPcdButton->sizePolicy().hasHeightForWidth());
        loadSrcPcdButton->setSizePolicy(sizePolicy1);
        loadSrcPcdButton->setMinimumSize(QSize(120, 40));
        loadSrcPcdButton->setFont(font1);
        loadSrcPcdButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    /* \350\276\271\346\241\206\345\256\275\345\272\246 */  \n"
"    border-width:0.5px;  \n"
"}\n"
"\n"
"\n"
"/*\351\274\240\346\240\207\346\202\254\346\265\256\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton:hover\n"
"{\n"
"	/*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
"	\n"
"	background-color: rgb(186, 189, 182);\n"
"    padding-left:8px;\n"
"    padding-top:8px;\n"
"}\n"
""));

        horizontalLayout->addWidget(loadSrcPcdButton);

        processButton = new QPushButton(functionWidget);
        processButton->setObjectName(QString::fromUtf8("processButton"));
        sizePolicy1.setHeightForWidth(processButton->sizePolicy().hasHeightForWidth());
        processButton->setSizePolicy(sizePolicy1);
        processButton->setMinimumSize(QSize(120, 40));
        processButton->setFont(font1);
        processButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    /* \350\276\271\346\241\206\345\256\275\345\272\246 */  \n"
"    border-width:0.5px;  \n"
"}\n"
"\n"
"\n"
"/*\351\274\240\346\240\207\346\202\254\346\265\256\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton:hover\n"
"{\n"
"	/*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
"	\n"
"	background-color: rgb(186, 189, 182);\n"
"    padding-left:8px;\n"
"    padding-top:8px;\n"
"}\n"
""));

        horizontalLayout->addWidget(processButton);

        saveButton = new QPushButton(functionWidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        sizePolicy1.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy1);
        saveButton->setMinimumSize(QSize(120, 40));
        saveButton->setFont(font1);
        saveButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    /* \350\276\271\346\241\206\345\256\275\345\272\246 */  \n"
"    border-width:0.5px;  \n"
"}\n"
"\n"
"\n"
"/*\351\274\240\346\240\207\346\202\254\346\265\256\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton:hover\n"
"{\n"
"	/*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
"	\n"
"	background-color: rgb(186, 189, 182);\n"
"    padding-left:8px;\n"
"    padding-top:8px;\n"
"}\n"
""));

        horizontalLayout->addWidget(saveButton);

        exitButton = new QPushButton(functionWidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        sizePolicy1.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy1);
        exitButton->setMinimumSize(QSize(120, 40));
        exitButton->setFont(font1);
        exitButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    /* \350\276\271\346\241\206\345\256\275\345\272\246 */  \n"
"    border-width:0.5px;  \n"
"}\n"
"\n"
"\n"
"/*\351\274\240\346\240\207\346\202\254\346\265\256\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton:hover\n"
"{\n"
"	/*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
"	\n"
"	background-color: rgb(186, 189, 182);\n"
"    padding-left:8px;\n"
"    padding-top:8px;\n"
"}\n"
""));

        horizontalLayout->addWidget(exitButton);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(functionWidget);


        gridLayout_3->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(mainWidget);

        QMetaObject::connectSlotsByName(mainWidget);
    } // setupUi

    void retranslateUi(QWidget *mainWidget)
    {
        mainWidget->setWindowTitle(QApplication::translate("mainWidget", "\347\202\271\344\272\221\345\244\204\347\220\206\347\263\273\347\273\237V1.0", nullptr));
        srcCloudLabel->setText(QApplication::translate("mainWidget", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#3465a4;\">\346\272\220\347\202\271\344\272\221</span></p></body></html>", nullptr));
        processedCloudLabel->setText(QApplication::translate("mainWidget", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#3465a4;\">\345\244\204\347\220\206\345\220\216\347\232\204\347\202\271\344\272\221</span></p></body></html>", nullptr));
        functionAeraLabel->setText(QApplication::translate("mainWidget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#3465a4;\">\345\212\237\350\203\275\345\214\272</span></p></body></html>", nullptr));
        loadSrcPcdButton->setText(QApplication::translate("mainWidget", "\350\257\273\345\217\226\347\202\271\344\272\221", nullptr));
        processButton->setText(QApplication::translate("mainWidget", "\347\202\271\344\272\221\345\244\204\347\220\206", nullptr));
        saveButton->setText(QApplication::translate("mainWidget", "\344\277\235\345\255\230\347\273\223\346\236\234", nullptr));
        exitButton->setText(QApplication::translate("mainWidget", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainWidget: public Ui_mainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAIN_WIDGET_H
