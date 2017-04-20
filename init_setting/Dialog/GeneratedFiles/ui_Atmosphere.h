/********************************************************************************
** Form generated from reading UI file 'Atmosphere.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATMOSPHERE_H
#define UI_ATMOSPHERE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Atmosphere_Dialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_Exec;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_4;
    QListWidget *listWidget_2;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_7;
    QListWidget *listWidget_3;
    QSpacerItem *verticalSpacer_6;
    QWidget *tab_3;
    QGridLayout *gridLayout_6;
    QLineEdit *lineEdit_5;
    QLabel *label_17;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QSpacerItem *horizontalSpacer_10;
    QLineEdit *lineEdit_11;
    QLabel *label_8;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_16;
    QSpacerItem *verticalSpacer_15;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_14;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_19;
    QWidget *tab_4;
    QGridLayout *gridLayout_8;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *horizontalSpacer_18;
    QGridLayout *gridLayout_7;
    QLabel *label_22;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_12;
    QLabel *label_21;
    QLabel *label_23;
    QLabel *label_19;
    QLabel *label_18;
    QLineEdit *lineEdit_13;
    QLabel *label_24;
    QLabel *label_20;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *verticalSpacer_13;

    void setupUi(QDialog *Atmosphere_Dialog)
    {
        if (Atmosphere_Dialog->objectName().isEmpty())
            Atmosphere_Dialog->setObjectName(QStringLiteral("Atmosphere_Dialog"));
        Atmosphere_Dialog->resize(673, 557);
        gridLayout = new QGridLayout(Atmosphere_Dialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(252, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_Exec = new QPushButton(Atmosphere_Dialog);
        pushButton_Exec->setObjectName(QStringLiteral("pushButton_Exec"));

        horizontalLayout->addWidget(pushButton_Exec);

        pushButton = new QPushButton(Atmosphere_Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(89, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalLayout->setStretch(0, 5);
        horizontalLayout->setStretch(3, 2);

        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        tabWidget = new QTabWidget(Atmosphere_Dialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        listWidget = new QListWidget(tab);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout_2->addWidget(listWidget, 0, 1, 2, 2);

        horizontalSpacer = new QSpacerItem(241, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 3, 1, 2);

        verticalSpacer = new QSpacerItem(20, 170, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 2, 1, 1, 1);

        listWidget_2 = new QListWidget(tab);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));

        gridLayout_2->addWidget(listWidget_2, 3, 1, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        gridLayout_2->addLayout(verticalLayout, 3, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        verticalSpacer_7 = new QSpacerItem(20, 88, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);

        listWidget_3 = new QListWidget(tab_2);
        new QListWidgetItem(listWidget_3);
        new QListWidgetItem(listWidget_3);
        new QListWidgetItem(listWidget_3);
        new QListWidgetItem(listWidget_3);
        new QListWidgetItem(listWidget_3);
        new QListWidgetItem(listWidget_3);
        new QListWidgetItem(listWidget_3);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget_3->sizePolicy().hasHeightForWidth());
        listWidget_3->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(listWidget_3, 0, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 226, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_6, 1, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_6 = new QGridLayout(tab_3);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        lineEdit_5 = new QLineEdit(tab_3);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout_6->addWidget(lineEdit_5, 9, 3, 1, 2);

        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_6->addWidget(label_17, 11, 2, 1, 1);

        lineEdit_3 = new QLineEdit(tab_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_6->addWidget(lineEdit_3, 5, 3, 1, 2);

        horizontalSpacer_8 = new QSpacerItem(222, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_8, 7, 5, 1, 1);

        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_6->addWidget(label_7, 9, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(222, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_7, 5, 5, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(222, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_9, 9, 5, 1, 1);

        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_6->addWidget(label_6, 7, 2, 1, 1);

        lineEdit_4 = new QLineEdit(tab_3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout_6->addWidget(lineEdit_4, 7, 3, 1, 2);

        horizontalSpacer_10 = new QSpacerItem(222, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_10, 11, 5, 1, 1);

        lineEdit_11 = new QLineEdit(tab_3);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));

        gridLayout_6->addWidget(lineEdit_11, 11, 3, 1, 2);

        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_6->addWidget(label_8, 5, 2, 1, 1);

        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_6->addWidget(label_4, 3, 2, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_12, 0, 2, 1, 2);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_16, 7, 1, 1, 1);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_15, 7, 0, 2, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_13, 8, 2, 1, 3);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_14, 6, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(222, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 3, 5, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(222, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 4, 5, 1, 1);

        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_6->addWidget(label_5, 4, 2, 1, 1);

        lineEdit_2 = new QLineEdit(tab_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_6->addWidget(lineEdit_2, 4, 3, 1, 2);

        lineEdit = new QLineEdit(tab_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_6->addWidget(lineEdit, 3, 3, 1, 2);

        verticalSpacer_14 = new QSpacerItem(20, 95, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_14, 12, 4, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_11, 10, 2, 1, 3);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_19, 1, 2, 1, 2);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_8 = new QGridLayout(tab_4);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        horizontalSpacer_17 = new QSpacerItem(363, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_17, 0, 1, 1, 2);

        horizontalSpacer_18 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_18, 1, 2, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_22 = new QLabel(tab_4);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_7->addWidget(label_22, 2, 0, 1, 1);

        lineEdit_14 = new QLineEdit(tab_4);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));

        gridLayout_7->addWidget(lineEdit_14, 3, 1, 1, 1);

        lineEdit_12 = new QLineEdit(tab_4);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));

        gridLayout_7->addWidget(lineEdit_12, 1, 1, 1, 1);

        label_21 = new QLabel(tab_4);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_7->addWidget(label_21, 2, 2, 1, 1);

        label_23 = new QLabel(tab_4);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_7->addWidget(label_23, 3, 2, 1, 1);

        label_19 = new QLabel(tab_4);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_7->addWidget(label_19, 1, 0, 1, 1);

        label_18 = new QLabel(tab_4);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_7->addWidget(label_18, 0, 0, 1, 1);

        lineEdit_13 = new QLineEdit(tab_4);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));

        gridLayout_7->addWidget(lineEdit_13, 2, 1, 1, 1);

        label_24 = new QLabel(tab_4);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_7->addWidget(label_24, 3, 0, 1, 1);

        label_20 = new QLabel(tab_4);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_7->addWidget(label_20, 1, 2, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 2, 1, 2, 1);

        horizontalSpacer_16 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_16, 2, 3, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(109, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_15, 3, 0, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 306, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_13, 4, 1, 1, 1);

        tabWidget->addTab(tab_4, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(Atmosphere_Dialog);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Atmosphere_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Atmosphere_Dialog)
    {
        Atmosphere_Dialog->setWindowTitle(QApplication::translate("Atmosphere_Dialog", "Atmosphere", Q_NULLPTR));
        pushButton_Exec->setText(QApplication::translate("Atmosphere_Dialog", "Execute", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Atmosphere_Dialog", "Cancel", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Atmosphere_Dialog", "1 Tropical Atmosphere", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Atmosphere_Dialog", "2 Mid-Latitude Summer", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("Atmosphere_Dialog", "3 Mid-Latitude Winter", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("Atmosphere_Dialog", "4 Sub-Arctic Summer", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("Atmosphere_Dialog", "5 Sub-Arctic Winter", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("Atmosphere_Dialog", "6 1976 U.S. Standard", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("Atmosphere_Dialog", "Atmospheric Model:", Q_NULLPTR));

        const bool __sortingEnabled1 = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem6 = listWidget_2->item(0);
        ___qlistwidgetitem6->setText(QApplication::translate("Atmosphere_Dialog", "1 Horizontal (constant-pressure) path", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem7 = listWidget_2->item(1);
        ___qlistwidgetitem7->setText(QApplication::translate("Atmosphere_Dialog", "2 Slant Paths Between Two Arbitrary Altitudes(ITYPE=2)", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem8 = listWidget_2->item(2);
        ___qlistwidgetitem8->setText(QApplication::translate("Atmosphere_Dialog", "3 Slant Paths to Space (ITYPE = 3)", Q_NULLPTR));
        listWidget_2->setSortingEnabled(__sortingEnabled1);

        label_2->setText(QApplication::translate("Atmosphere_Dialog", "<html><head/><body><p>Atmospheric Model:</p><p>of-sight(LOS)</p><p>path(ITYPE)</p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Atmosphere_Dialog", "Atmosphere Model", Q_NULLPTR));
        label_3->setText(QApplication::translate("Atmosphere_Dialog", "<html><head/><body><p>MAIN AEROSOL AND</p><p>CLOUD OPTIONS</p></body></html>", Q_NULLPTR));

        const bool __sortingEnabled2 = listWidget_3->isSortingEnabled();
        listWidget_3->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem9 = listWidget_3->item(0);
        ___qlistwidgetitem9->setText(QApplication::translate("Atmosphere_Dialog", "0 No aerosol or cloud attenuation included in the calculation", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem10 = listWidget_3->item(1);
        ___qlistwidgetitem10->setText(QApplication::translate("Atmosphere_Dialog", "1 RURAL extinction, default VIS = 23 km", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem11 = listWidget_3->item(2);
        ___qlistwidgetitem11->setText(QApplication::translate("Atmosphere_Dialog", "2 RURAL extinction, default VIS = 5 km", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem12 = listWidget_3->item(3);
        ___qlistwidgetitem12->setText(QApplication::translate("Atmosphere_Dialog", "3 NAVY MARITIME extinction.  Sets VIS based on wind speed and relative humidity", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem13 = listWidget_3->item(4);
        ___qlistwidgetitem13->setText(QApplication::translate("Atmosphere_Dialog", "4 MARITIME extinction, default VIS = 23 km", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem14 = listWidget_3->item(5);
        ___qlistwidgetitem14->setText(QApplication::translate("Atmosphere_Dialog", "5 URBAN extinction, default VIS = 5 km", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem15 = listWidget_3->item(6);
        ___qlistwidgetitem15->setText(QApplication::translate("Atmosphere_Dialog", "6 TROPOSPHERIC extinction, default VIS = 50 km", Q_NULLPTR));
        listWidget_3->setSortingEnabled(__sortingEnabled2);

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Atmosphere_Dialog", "Main Aerosol and Cloud Options", Q_NULLPTR));
        lineEdit_5->setText(QApplication::translate("Atmosphere_Dialog", "60", Q_NULLPTR));
        label_17->setText(QApplication::translate("Atmosphere_Dialog", "<html><head/><body><p>RO,Radius of the earth (km)</p><p>at the particular latitude :</p></body></html>", Q_NULLPTR));
        lineEdit_3->setText(QApplication::translate("Atmosphere_Dialog", "45", Q_NULLPTR));
        label_7->setText(QApplication::translate("Atmosphere_Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Beta</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">(Earth center angle </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">subtended by H1 and H2):</p></body></html>", Q_NULLPTR));
        label_6->setText(QApplication::translate("Atmosphere_Dialog", "Range\n"
"(Path Length):", Q_NULLPTR));
        lineEdit_4->setText(QApplication::translate("Atmosphere_Dialog", "60", Q_NULLPTR));
        lineEdit_11->setText(QApplication::translate("Atmosphere_Dialog", "60", Q_NULLPTR));
        label_8->setText(QApplication::translate("Atmosphere_Dialog", "Angle:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Atmosphere_Dialog", "H1,Initial altitude (km):", Q_NULLPTR));
        label_5->setText(QApplication::translate("Atmosphere_Dialog", "H2, Final altitude (km) ", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("Atmosphere_Dialog", "60", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("Atmosphere_Dialog", "0", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Atmosphere_Dialog", "Line of Sight Geometry", Q_NULLPTR));
        label_22->setText(QApplication::translate("Atmosphere_Dialog", "Min", Q_NULLPTR));
        lineEdit_14->setText(QApplication::translate("Atmosphere_Dialog", "10", Q_NULLPTR));
        lineEdit_12->setText(QApplication::translate("Atmosphere_Dialog", "1", Q_NULLPTR));
        label_21->setText(QApplication::translate("Atmosphere_Dialog", "um", Q_NULLPTR));
        label_23->setText(QApplication::translate("Atmosphere_Dialog", "um", Q_NULLPTR));
        label_19->setText(QApplication::translate("Atmosphere_Dialog", "Max", Q_NULLPTR));
        label_18->setText(QApplication::translate("Atmosphere_Dialog", "Wavelength(um):", Q_NULLPTR));
        lineEdit_13->setText(QApplication::translate("Atmosphere_Dialog", "10", Q_NULLPTR));
        label_24->setText(QApplication::translate("Atmosphere_Dialog", "Step", Q_NULLPTR));
        label_20->setText(QApplication::translate("Atmosphere_Dialog", "um", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Atmosphere_Dialog", "Wave length Range", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Atmosphere_Dialog: public Ui_Atmosphere_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATMOSPHERE_H
