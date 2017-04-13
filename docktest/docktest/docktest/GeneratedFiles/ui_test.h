/********************************************************************************
** Form generated from reading UI file 'test.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_H
#define UI_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_11;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget_5;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout_10;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_4;
    QLabel *label_11;
    QWidget *widget_3;
    QLabel *label_15;
    QTableWidget *tableWidget_3;
    QLabel *label_16;
    QTableWidget *tableWidget_4;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_17;
    QDoubleSpinBox *doubleSpinBox_5;
    QLabel *label_18;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_19;
    QDoubleSpinBox *doubleSpinBox_6;
    QLabel *label_20;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_6;
    QLabel *label_21;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_10;
    QTableWidget *tableWidget;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit;
    QLabel *label_13;
    QTableWidget *tableWidget_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(740, 703);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_11 = new QHBoxLayout(centralwidget);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tableWidget_5 = new QTableWidget(widget);
        if (tableWidget_5->columnCount() < 2)
            tableWidget_5->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget_5->rowCount() < 2)
            tableWidget_5->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(1, __qtablewidgetitem3);
        tableWidget_5->setObjectName(QStringLiteral("tableWidget_5"));

        verticalLayout_2->addWidget(tableWidget_5);

        tableView = new QTableView(widget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_2->addWidget(tableView);


        horizontalLayout_11->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 740, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dockWidget->sizePolicy().hasHeightForWidth());
        dockWidget->setSizePolicy(sizePolicy);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        horizontalLayout_10 = new QHBoxLayout(dockWidgetContents);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        widget_2 = new QWidget(dockWidgetContents);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_6);

        comboBox_2 = new QComboBox(widget_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        sizePolicy.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(comboBox_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(30, 30));
        pushButton_2->setMaximumSize(QSize(30, 30));

        horizontalLayout_4->addWidget(pushButton_2);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(0, 20));
        label_7->setFrameShape(QFrame::Box);

        horizontalLayout_4->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        radioButton_3 = new QRadioButton(widget_2);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(radioButton_3->sizePolicy().hasHeightForWidth());
        radioButton_3->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(widget_2);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        sizePolicy2.setHeightForWidth(radioButton_4->sizePolicy().hasHeightForWidth());
        radioButton_4->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(radioButton_4);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_8 = new QLabel(widget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout->addWidget(label_8);

        doubleSpinBox_3 = new QDoubleSpinBox(widget_2);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));

        horizontalLayout->addWidget(doubleSpinBox_3);

        label_12 = new QLabel(widget_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout->addWidget(label_12);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_9 = new QLabel(widget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(label_9);

        doubleSpinBox_4 = new QDoubleSpinBox(widget_2);
        doubleSpinBox_4->setObjectName(QStringLiteral("doubleSpinBox_4"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(doubleSpinBox_4->sizePolicy().hasHeightForWidth());
        doubleSpinBox_4->setSizePolicy(sizePolicy4);
        doubleSpinBox_4->setMinimumSize(QSize(0, 20));
        doubleSpinBox_4->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_2->addWidget(doubleSpinBox_4);

        label_11 = new QLabel(widget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(label_11);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        label_15 = new QLabel(widget_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 190, 258, 16));
        tableWidget_3 = new QTableWidget(widget_3);
        if (tableWidget_3->columnCount() < 4)
            tableWidget_3->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        if (tableWidget_3->rowCount() < 2)
            tableWidget_3->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_3->setItem(0, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_3->setItem(0, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_3->setItem(0, 2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_3->setItem(0, 3, __qtablewidgetitem13);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(20, 220, 300, 100));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(tableWidget_3->sizePolicy().hasHeightForWidth());
        tableWidget_3->setSizePolicy(sizePolicy5);
        tableWidget_3->setMinimumSize(QSize(0, 100));
        tableWidget_3->setMaximumSize(QSize(16777215, 100));
        tableWidget_3->horizontalHeader()->setDefaultSectionSize(70);
        label_16 = new QLabel(widget_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(9, 371, 192, 16));
        tableWidget_4 = new QTableWidget(widget_3);
        if (tableWidget_4->columnCount() < 2)
            tableWidget_4->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        if (tableWidget_4->rowCount() < 2)
            tableWidget_4->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_4->setItem(0, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_4->setItem(0, 1, __qtablewidgetitem19);
        tableWidget_4->setObjectName(QStringLiteral("tableWidget_4"));
        tableWidget_4->setEnabled(true);
        tableWidget_4->setGeometry(QRect(9, 389, 256, 100));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(tableWidget_4->sizePolicy().hasHeightForWidth());
        tableWidget_4->setSizePolicy(sizePolicy6);
        tableWidget_4->setMinimumSize(QSize(0, 100));
        tableWidget_4->setMaximumSize(QSize(16777215, 100));
        pushButton_4 = new QPushButton(widget_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 588, 75, 23));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy7);
        pushButton_5 = new QPushButton(widget_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(91, 588, 75, 23));
        layoutWidget = new QWidget(widget_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 116, 216, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_5->addWidget(label_17);

        doubleSpinBox_5 = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_5->setObjectName(QStringLiteral("doubleSpinBox_5"));

        horizontalLayout_5->addWidget(doubleSpinBox_5);

        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_5->addWidget(label_18);

        layoutWidget_2 = new QWidget(widget_3);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 144, 240, 22));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(layoutWidget_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        sizePolicy3.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(label_19);

        doubleSpinBox_6 = new QDoubleSpinBox(layoutWidget_2);
        doubleSpinBox_6->setObjectName(QStringLiteral("doubleSpinBox_6"));
        sizePolicy3.setHeightForWidth(doubleSpinBox_6->sizePolicy().hasHeightForWidth());
        doubleSpinBox_6->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(doubleSpinBox_6);

        label_20 = new QLabel(layoutWidget_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        sizePolicy3.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(label_20);

        layoutWidget_4 = new QWidget(widget_3);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 54, 218, 32));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButton_6 = new QPushButton(layoutWidget_4);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setMinimumSize(QSize(30, 30));
        pushButton_6->setMaximumSize(QSize(30, 30));

        horizontalLayout_8->addWidget(pushButton_6);

        label_21 = new QLabel(layoutWidget_4);
        label_21->setObjectName(QStringLiteral("label_21"));
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);
        label_21->setMinimumSize(QSize(0, 20));
        label_21->setFrameShape(QFrame::Box);

        horizontalLayout_8->addWidget(label_21);


        horizontalLayout_2->addWidget(widget_3);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        label_10 = new QLabel(widget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout->addWidget(label_10);

        tableWidget = new QTableWidget(widget_2);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem23);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem28);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        sizePolicy5.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy5);
        tableWidget->setMinimumSize(QSize(0, 100));
        tableWidget->setMaximumSize(QSize(16777215, 100));
        tableWidget->setRowCount(2);
        tableWidget->horizontalHeader()->setDefaultSectionSize(70);

        verticalLayout->addWidget(tableWidget);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        label_13 = new QLabel(widget_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout->addWidget(label_13);

        tableWidget_2 = new QTableWidget(widget_2);
        if (tableWidget_2->columnCount() < 2)
            tableWidget_2->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem30);
        if (tableWidget_2->rowCount() < 2)
            tableWidget_2->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 1, __qtablewidgetitem34);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setEnabled(true);
        sizePolicy6.setHeightForWidth(tableWidget_2->sizePolicy().hasHeightForWidth());
        tableWidget_2->setSizePolicy(sizePolicy6);
        tableWidget_2->setMinimumSize(QSize(0, 100));
        tableWidget_2->setMaximumSize(QSize(16777215, 100));

        verticalLayout->addWidget(tableWidget_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(75, 25));
        pushButton->setMaximumSize(QSize(75, 25));

        horizontalLayout_9->addWidget(pushButton);

        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMinimumSize(QSize(75, 25));
        pushButton_3->setMaximumSize(QSize(75, 25));

        horizontalLayout_9->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_9);

        label_6->raise();
        comboBox_2->raise();
        label_10->raise();
        tableWidget->raise();
        label_13->raise();
        tableWidget_2->raise();
        lineEdit->raise();

        horizontalLayout_10->addWidget(widget_2);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_5->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\345\210\227", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_5->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\345\210\227", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_5->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_5->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", 0));
        label_6->setText(QApplication::translate("MainWindow", "What kind of model do you want to work?", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", 0));
        label_7->setText(QApplication::translate("MainWindow", "MeshName", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "Use Mesh Groups", 0));
        radioButton_4->setText(QApplication::translate("MainWindow", "Use Geometric Groups", 0));
        label_8->setText(QApplication::translate("MainWindow", "Young's Modulus(E)", 0));
        label_12->setText(QApplication::translate("MainWindow", "(E>=0)", 0));
        label_9->setText(QApplication::translate("MainWindow", "Poissen ratio(V)", 0));
        label_11->setText(QApplication::translate("MainWindow", "(-1<=v<=0.5)", 0));
        label_15->setText(QApplication::translate("MainWindow", "Adding imposed degrees of freedom on groups", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Group", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "DX", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "DY", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "DZ", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_3->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "-", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_3->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "+", 0));

        const bool __sortingEnabled = tableWidget_3->isSortingEnabled();
        tableWidget_3->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_3->item(0, 0);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Group1", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_3->item(0, 1);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_3->item(0, 2);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_3->item(0, 3);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "0", 0));
        tableWidget_3->setSortingEnabled(__sortingEnabled);

        label_16->setText(QApplication::translate("MainWindow", "Adding pressure on meshes groups", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "Group", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "Pressure", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_4->verticalHeaderItem(0);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "-", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_4->verticalHeaderItem(1);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "+", 0));

        const bool __sortingEnabled1 = tableWidget_4->isSortingEnabled();
        tableWidget_4->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_4->item(0, 0);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "Group1", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_4->item(0, 1);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "1", 0));
        tableWidget_4->setSortingEnabled(__sortingEnabled1);

        pushButton_4->setText(QApplication::translate("MainWindow", "Save", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Cancel", 0));
        label_17->setText(QApplication::translate("MainWindow", "Young's Modulus(E)", 0));
        label_18->setText(QApplication::translate("MainWindow", "(E>=0)", 0));
        label_19->setText(QApplication::translate("MainWindow", "Poissen ratio(V)", 0));
        label_20->setText(QApplication::translate("MainWindow", "(-1<=v<=0.5)", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "PushButton", 0));
        label_21->setText(QApplication::translate("MainWindow", "MeshName", 0));
        label_10->setText(QApplication::translate("MainWindow", "Adding imposed degrees of freedom on groups", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "Group", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "DX", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "DY", 0));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "DZ", 0));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "-", 0));

        const bool __sortingEnabled2 = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(0, 0);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "Group1", 0));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(0, 1);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(0, 2);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(0, 3);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "0", 0));
        tableWidget->setSortingEnabled(__sortingEnabled2);

        label_13->setText(QApplication::translate("MainWindow", "Adding pressure on meshes groups", 0));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "Group", 0));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "Pressure", 0));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "-", 0));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget_2->verticalHeaderItem(1);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "+", 0));

        const bool __sortingEnabled3 = tableWidget_2->isSortingEnabled();
        tableWidget_2->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget_2->item(0, 0);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "Group1", 0));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget_2->item(0, 1);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "1", 0));
        tableWidget_2->setSortingEnabled(__sortingEnabled3);

        pushButton->setText(QApplication::translate("MainWindow", "Save", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_H
