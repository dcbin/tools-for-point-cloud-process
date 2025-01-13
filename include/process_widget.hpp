/********************************************************************************
** Form generated from reading UI file 'processWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef PROCESS_WIDGET_HPP
#define PROCESS_WIDGET_HPP

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *meanKLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *stdLineEdit;
    QPushButton *outlierDelButton;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *voxelSizeLineEdit;
    QPushButton *voxelButton;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *groundComboBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *disThreshHoldLineEdit;
    QPushButton *groundDelButton;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QComboBox *segmentComboBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QLineEdit *disThreshHoldLineEdit_2;
    QPushButton *segmentButton;
    QPushButton *withdrawButton;
    QPushButton *returnButton;

    void setupUi(QWidget *ProcessWidget)
    {
        if (ProcessWidget->objectName().isEmpty())
            ProcessWidget->setObjectName(QString::fromUtf8("ProcessWidget"));
        ProcessWidget->resize(776, 513);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProcessWidget->sizePolicy().hasHeightForWidth());
        ProcessWidget->setSizePolicy(sizePolicy);
        ProcessWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(ProcessWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(ProcessWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QString::fromUtf8("        QWidget{\n"
"            border-color: rgb(85, 87, 83);\n"
"            border-width: 1px;\n"
"            border-style: solid;\n"
"        }"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setMinimumSize(QSize(0, 49));
        label_6->setMaximumSize(QSize(16777215, 49));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-width: 0px;\n"
" }"));

        verticalLayout->addWidget(label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(200, 0));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        meanKLineEdit = new QLineEdit(widget);
        meanKLineEdit->setObjectName(QString::fromUtf8("meanKLineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(meanKLineEdit->sizePolicy().hasHeightForWidth());
        meanKLineEdit->setSizePolicy(sizePolicy2);
        meanKLineEdit->setMinimumSize(QSize(150, 50));
        meanKLineEdit->setFont(font);

        horizontalLayout->addWidget(meanKLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, -1, -1);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(200, 50));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        stdLineEdit = new QLineEdit(widget);
        stdLineEdit->setObjectName(QString::fromUtf8("stdLineEdit"));
        sizePolicy2.setHeightForWidth(stdLineEdit->sizePolicy().hasHeightForWidth());
        stdLineEdit->setSizePolicy(sizePolicy2);
        stdLineEdit->setMinimumSize(QSize(150, 50));
        stdLineEdit->setFont(font);

        horizontalLayout_2->addWidget(stdLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        outlierDelButton = new QPushButton(widget);
        outlierDelButton->setObjectName(QString::fromUtf8("outlierDelButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(outlierDelButton->sizePolicy().hasHeightForWidth());
        outlierDelButton->setSizePolicy(sizePolicy3);
        outlierDelButton->setMinimumSize(QSize(0, 35));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        outlierDelButton->setFont(font1);
        outlierDelButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font-weight:bold;\n"
"	color: rgb(52, 101, 164);\n"
"    background-color:rgb(238, 238, 236); /*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
"    /* \350\276\271\346\241\206\345\256\275\345\272\246 */  \n"
"    border-width:0.5px;  \n"
"    /* \350\276\271\346\241\206\351\242\234\350\211\262 */  \n"
"    border-color:rgb(10,45,110);  \n"
"    /* \350\276\271\346\241\206\345\200\222\350\247\222 */  \n"
"    border-radius:10px; \n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\214\211\344\270\213\346\227\266\347\232\204\346\225\210\346\236\234 */ \n"
"QPushButton#pushButton:pressed \n"
"{  \n"
"    /* \346\224\271\345\217\230\350\203\214\346\231\257\350\211\262 */  \n"
"    background-color:rgb(40,85,20);  \n"
"    /* \344\275\277\346\226\207\345\255\227\346\234\211\344\270\200\347\202\271\347\247\273\345\212\250 */  \n"
"    padding-left:6px;  \n"
"    padding-top:6px;  \n"
"}\n"
"\n"
"\n"
"/*\351\274\240\346\240\207\346\202\254\346\265\256\346\227\266\347\232\204\346\225"
                        "\210\346\236\234*/\n"
"QPushButton:hover\n"
"{\n"
"	/*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
"	background-color: rgb(211, 215, 207);\n"
"    padding-left:8px;\n"
"    padding-top:8px;\n"
"}\n"
""));

        verticalLayout->addWidget(outlierDelButton);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(ProcessWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setStyleSheet(QString::fromUtf8("        QWidget{\n"
"            border-color: rgb(85, 87, 83);\n"
"            border-width: 1px;\n"
"            border-style: solid;\n"
"        }"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(0, 0));
        label_4->setMaximumSize(QSize(16777215, 49));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("        QLabel{\n"
"            border-width: 0px;\n"
"        }"));

        verticalLayout_2->addWidget(label_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setMinimumSize(QSize(200, 0));
        label_5->setFont(font);

        horizontalLayout_3->addWidget(label_5);

        voxelSizeLineEdit = new QLineEdit(widget_2);
        voxelSizeLineEdit->setObjectName(QString::fromUtf8("voxelSizeLineEdit"));
        sizePolicy2.setHeightForWidth(voxelSizeLineEdit->sizePolicy().hasHeightForWidth());
        voxelSizeLineEdit->setSizePolicy(sizePolicy2);
        voxelSizeLineEdit->setMinimumSize(QSize(150, 0));
        voxelSizeLineEdit->setFont(font);

        horizontalLayout_3->addWidget(voxelSizeLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        voxelButton = new QPushButton(widget_2);
        voxelButton->setObjectName(QString::fromUtf8("voxelButton"));
        sizePolicy3.setHeightForWidth(voxelButton->sizePolicy().hasHeightForWidth());
        voxelButton->setSizePolicy(sizePolicy3);
        voxelButton->setMinimumSize(QSize(0, 35));
        voxelButton->setFont(font1);
        voxelButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font-weight:bold;\n"
"	color: rgb(52, 101, 164);\n"
"    background-color:rgb(238, 238, 236); /*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
"    /* \350\276\271\346\241\206\345\256\275\345\272\246 */  \n"
"    border-width:0.5px;  \n"
"    /* \350\276\271\346\241\206\351\242\234\350\211\262 */  \n"
"    border-color:rgb(10,45,110);  \n"
"    /* \350\276\271\346\241\206\345\200\222\350\247\222 */  \n"
"    border-radius:10px; \n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\214\211\344\270\213\346\227\266\347\232\204\346\225\210\346\236\234 */ \n"
"QPushButton#pushButton:pressed \n"
"{  \n"
"    /* \346\224\271\345\217\230\350\203\214\346\231\257\350\211\262 */  \n"
"    background-color:rgb(40,85,20);  \n"
"    /* \344\275\277\346\226\207\345\255\227\346\234\211\344\270\200\347\202\271\347\247\273\345\212\250 */  \n"
"    padding-left:6px;  \n"
"    padding-top:6px;  \n"
"}\n"
"\n"
"\n"
"/*\351\274\240\346\240\207\346\202\254\346\265\256\346\227\266\347\232\204\346\225"
                        "\210\346\236\234*/\n"
"QPushButton:hover\n"
"{\n"
"	/*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
"	background-color: rgb(211, 215, 207);\n"
"    padding-left:8px;\n"
"    padding-top:8px;\n"
"}\n"
""));

        verticalLayout_2->addWidget(voxelButton);


        gridLayout->addWidget(widget_2, 0, 1, 1, 1);

        widget_3 = new QWidget(ProcessWidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        widget_3->setMinimumSize(QSize(0, 0));
        widget_3->setStyleSheet(QString::fromUtf8("        QWidget{\n"
"            border-color: rgb(85, 87, 83);\n"
"            border-width: 1px;\n"
"            border-style: solid;\n"
"        }"));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_8 = new QLabel(widget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setMinimumSize(QSize(0, 49));
        label_8->setMaximumSize(QSize(16777215, 49));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("        QLabel{\n"
"            border-width: 0px;\n"
"        }"));

        verticalLayout_3->addWidget(label_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setMinimumSize(QSize(140, 50));
        label_3->setFont(font);

        horizontalLayout_4->addWidget(label_3);

        groundComboBox = new QComboBox(widget_3);
        groundComboBox->addItem(QString());
        groundComboBox->addItem(QString());
        groundComboBox->addItem(QString());
        groundComboBox->setObjectName(QString::fromUtf8("groundComboBox"));
        sizePolicy2.setHeightForWidth(groundComboBox->sizePolicy().hasHeightForWidth());
        groundComboBox->setSizePolicy(sizePolicy2);
        groundComboBox->setMinimumSize(QSize(140, 50));
        groundComboBox->setFont(font);

        horizontalLayout_4->addWidget(groundComboBox);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(widget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setMinimumSize(QSize(183, 50));
        label_7->setFont(font);

        horizontalLayout_5->addWidget(label_7);

        disThreshHoldLineEdit = new QLineEdit(widget_3);
        disThreshHoldLineEdit->setObjectName(QString::fromUtf8("disThreshHoldLineEdit"));
        sizePolicy2.setHeightForWidth(disThreshHoldLineEdit->sizePolicy().hasHeightForWidth());
        disThreshHoldLineEdit->setSizePolicy(sizePolicy2);
        disThreshHoldLineEdit->setMinimumSize(QSize(140, 50));
        disThreshHoldLineEdit->setFont(font);

        horizontalLayout_5->addWidget(disThreshHoldLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_5);

        groundDelButton = new QPushButton(widget_3);
        groundDelButton->setObjectName(QString::fromUtf8("groundDelButton"));
        sizePolicy3.setHeightForWidth(groundDelButton->sizePolicy().hasHeightForWidth());
        groundDelButton->setSizePolicy(sizePolicy3);
        groundDelButton->setMinimumSize(QSize(0, 35));
        groundDelButton->setFont(font1);
        groundDelButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font-weight:bold;\n"
"	color: rgb(52, 101, 164);\n"
"    background-color:rgb(238, 238, 236); /*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
"    /* \350\276\271\346\241\206\345\256\275\345\272\246 */  \n"
"    border-width:0.5px;  \n"
"    /* \350\276\271\346\241\206\351\242\234\350\211\262 */  \n"
"    border-color:rgb(10,45,110);  \n"
"    /* \350\276\271\346\241\206\345\200\222\350\247\222 */  \n"
"    border-radius:10px; \n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\214\211\344\270\213\346\227\266\347\232\204\346\225\210\346\236\234 */ \n"
"QPushButton#pushButton:pressed \n"
"{  \n"
"    /* \346\224\271\345\217\230\350\203\214\346\231\257\350\211\262 */  \n"
"    background-color:rgb(40,85,20);  \n"
"    /* \344\275\277\346\226\207\345\255\227\346\234\211\344\270\200\347\202\271\347\247\273\345\212\250 */  \n"
"    padding-left:6px;  \n"
"    padding-top:6px;  \n"
"}\n"
"\n"
"\n"
"/*\351\274\240\346\240\207\346\202\254\346\265\256\346\227\266\347\232\204\346\225"
                        "\210\346\236\234*/\n"
"QPushButton:hover\n"
"{\n"
"	/*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
"	background-color: rgb(211, 215, 207);\n"
"    padding-left:8px;\n"
"    padding-top:8px;\n"
"}\n"
""));

        verticalLayout_3->addWidget(groundDelButton);


        gridLayout->addWidget(widget_3, 1, 0, 1, 1);

        widget_4 = new QWidget(ProcessWidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setMinimumSize(QSize(0, 0));
        widget_4->setStyleSheet(QString::fromUtf8("        QWidget{\n"
"            border-color: rgb(85, 87, 83);\n"
"            border-width: 1px;\n"
"            border-style: solid;\n"
"        }"));
        verticalLayout_4 = new QVBoxLayout(widget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_9 = new QLabel(widget_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setMinimumSize(QSize(0, 49));
        label_9->setMaximumSize(QSize(16777215, 49));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("        QLabel{\n"
"            border-width: 0px;\n"
"        }"));

        verticalLayout_4->addWidget(label_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_10 = new QLabel(widget_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);
        label_10->setMinimumSize(QSize(140, 50));
        label_10->setFont(font);

        horizontalLayout_6->addWidget(label_10);

        segmentComboBox = new QComboBox(widget_4);
        segmentComboBox->addItem(QString());
        segmentComboBox->addItem(QString());
        segmentComboBox->setObjectName(QString::fromUtf8("segmentComboBox"));
        sizePolicy2.setHeightForWidth(segmentComboBox->sizePolicy().hasHeightForWidth());
        segmentComboBox->setSizePolicy(sizePolicy2);
        segmentComboBox->setMinimumSize(QSize(140, 50));
        segmentComboBox->setFont(font);

        horizontalLayout_6->addWidget(segmentComboBox);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_11 = new QLabel(widget_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setMinimumSize(QSize(140, 50));
        label_11->setFont(font);

        horizontalLayout_7->addWidget(label_11);

        disThreshHoldLineEdit_2 = new QLineEdit(widget_4);
        disThreshHoldLineEdit_2->setObjectName(QString::fromUtf8("disThreshHoldLineEdit_2"));
        sizePolicy2.setHeightForWidth(disThreshHoldLineEdit_2->sizePolicy().hasHeightForWidth());
        disThreshHoldLineEdit_2->setSizePolicy(sizePolicy2);
        disThreshHoldLineEdit_2->setMinimumSize(QSize(140, 50));
        disThreshHoldLineEdit_2->setFont(font);

        horizontalLayout_7->addWidget(disThreshHoldLineEdit_2);


        verticalLayout_4->addLayout(horizontalLayout_7);

        segmentButton = new QPushButton(widget_4);
        segmentButton->setObjectName(QString::fromUtf8("segmentButton"));
        sizePolicy3.setHeightForWidth(segmentButton->sizePolicy().hasHeightForWidth());
        segmentButton->setSizePolicy(sizePolicy3);
        segmentButton->setMinimumSize(QSize(0, 35));
        segmentButton->setFont(font1);
        segmentButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font-weight:bold;\n"
"	color: rgb(52, 101, 164);\n"
"    background-color:rgb(238, 238, 236); /*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
"    /* \350\276\271\346\241\206\345\256\275\345\272\246 */  \n"
"    border-width:0.5px;  \n"
"    /* \350\276\271\346\241\206\351\242\234\350\211\262 */  \n"
"    border-color:rgb(10,45,110);  \n"
"    /* \350\276\271\346\241\206\345\200\222\350\247\222 */  \n"
"    border-radius:10px; \n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\214\211\344\270\213\346\227\266\347\232\204\346\225\210\346\236\234 */ \n"
"QPushButton#pushButton:pressed \n"
"{  \n"
"    /* \346\224\271\345\217\230\350\203\214\346\231\257\350\211\262 */  \n"
"    background-color:rgb(40,85,20);  \n"
"    /* \344\275\277\346\226\207\345\255\227\346\234\211\344\270\200\347\202\271\347\247\273\345\212\250 */  \n"
"    padding-left:6px;  \n"
"    padding-top:6px;  \n"
"}\n"
"\n"
"\n"
"/*\351\274\240\346\240\207\346\202\254\346\265\256\346\227\266\347\232\204\346\225"
                        "\210\346\236\234*/\n"
"QPushButton:hover\n"
"{\n"
"	/*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
"	background-color: rgb(211, 215, 207);\n"
"    padding-left:8px;\n"
"    padding-top:8px;\n"
"}\n"
""));

        verticalLayout_4->addWidget(segmentButton);


        gridLayout->addWidget(widget_4, 1, 1, 1, 1);

        withdrawButton = new QPushButton(ProcessWidget);
        withdrawButton->setObjectName(QString::fromUtf8("withdrawButton"));
        sizePolicy3.setHeightForWidth(withdrawButton->sizePolicy().hasHeightForWidth());
        withdrawButton->setSizePolicy(sizePolicy3);
        withdrawButton->setMinimumSize(QSize(0, 35));
        withdrawButton->setFont(font1);
        withdrawButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        gridLayout->addWidget(withdrawButton, 2, 0, 1, 1);

        returnButton = new QPushButton(ProcessWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        sizePolicy3.setHeightForWidth(returnButton->sizePolicy().hasHeightForWidth());
        returnButton->setSizePolicy(sizePolicy3);
        returnButton->setMinimumSize(QSize(0, 35));
        returnButton->setFont(font1);
        returnButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font-weight:bold;\n"
"	color: rgb(0, 0, 0);\n"
"    background-color:rgb(238, 238, 236); /*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
"    /* \350\276\271\346\241\206\345\256\275\345\272\246 */  \n"
"    border-width:0px;  \n"
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

        gridLayout->addWidget(returnButton, 2, 1, 1, 1);


        retranslateUi(ProcessWidget);

        QMetaObject::connectSlotsByName(ProcessWidget);
    } // setupUi

    void retranslateUi(QWidget *ProcessWidget)
    {
        ProcessWidget->setWindowTitle(QApplication::translate("ProcessWidget", "\347\202\271\344\272\221\345\244\204\347\220\206\350\217\234\345\215\225\346\240\217", nullptr));
        label_6->setText(QApplication::translate("ProcessWidget", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#3465a4;\">\347\273\237\350\256\241\346\273\244\346\263\242\345\216\273\351\231\244\347\246\273\347\276\244\347\202\271</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("ProcessWidget", "<html><head/><body><p>\350\257\267\350\276\223\345\205\245\350\277\221\351\202\273\347\202\271\346\225\260(\346\225\264\346\225\260):</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("ProcessWidget", "<html><head/><body><p>\350\257\267\350\276\223\345\205\245\346\226\271\345\267\256(\346\265\256\347\202\271\346\225\260):</p></body></html>", nullptr));
        outlierDelButton->setText(QApplication::translate("ProcessWidget", "\345\272\224\347\224\250", nullptr));
        label_4->setText(QApplication::translate("ProcessWidget", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#3465a4;\">\344\275\223\347\264\240\346\273\244\346\263\242\351\231\215\351\207\207\346\240\267</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("ProcessWidget", "<html><head/><body><p>\350\257\267\350\276\223\345\205\245\344\275\223\347\264\240\350\276\271\351\225\277(m):</p></body></html>", nullptr));
        voxelButton->setText(QApplication::translate("ProcessWidget", "\345\272\224\347\224\250", nullptr));
        label_8->setText(QApplication::translate("ProcessWidget", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#3465a4;\">\345\234\260\351\235\242\345\216\273\351\231\244</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("ProcessWidget", "<html><head/><body><p>\351\200\211\346\213\251\345\271\263\351\235\242\346\213\237\345\220\210\347\256\227\346\263\225\357\274\232</p></body></html>", nullptr));
        groundComboBox->setItemText(0, QApplication::translate("ProcessWidget", "RANSAC", nullptr));
        groundComboBox->setItemText(1, QApplication::translate("ProcessWidget", "LMEDS", nullptr));
        groundComboBox->setItemText(2, QApplication::translate("ProcessWidget", "MSAC", nullptr));

        label_7->setText(QApplication::translate("ProcessWidget", "<html><head/><body><p>\350\276\223\345\205\245\346\234\200\345\244\247\345\205\201\350\256\270\350\267\235\347\246\273\357\274\232</p></body></html>", nullptr));
        groundDelButton->setText(QApplication::translate("ProcessWidget", "\345\272\224\347\224\250", nullptr));
        label_9->setText(QApplication::translate("ProcessWidget", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#3465a4;\">\347\202\271\344\272\221\350\257\255\344\271\211\345\210\206\345\211\262</span></p></body></html>", nullptr));
        label_10->setText(QApplication::translate("ProcessWidget", "<html><head/><body><p>\351\200\211\346\213\251\345\210\206\345\211\262\347\275\221\347\273\234\357\274\232</p></body></html>", nullptr));
        segmentComboBox->setItemText(0, QApplication::translate("ProcessWidget", "PointNet", nullptr));
        segmentComboBox->setItemText(1, QApplication::translate("ProcessWidget", "PointNet++", nullptr));

        label_11->setText(QApplication::translate("ProcessWidget", "<html><head/><body><p>\346\234\200\345\244\247\345\205\201\350\256\270\350\267\235\347\246\273\357\274\232</p></body></html>", nullptr));
        segmentButton->setText(QApplication::translate("ProcessWidget", "\345\272\224\347\224\250", nullptr));
        withdrawButton->setText(QApplication::translate("ProcessWidget", "\346\222\244\351\224\200\345\275\223\345\211\215\346\223\215\344\275\234", nullptr));
        returnButton->setText(QApplication::translate("ProcessWidget", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProcessWidget: public Ui_ProcessWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PROCESS_WIDGET_H