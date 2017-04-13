/********************************************************************************
** Form generated from reading UI file 'docktest.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKTEST_H
#define UI_DOCKTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_docktestClass
{
public:
    QAction *actionAaaa;
    QAction *actionMenu;
    QAction *actionAbc1;
    QWidget *centralWidget;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuAbc;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QComboBox *comboBox_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *dsa;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *docktestClass)
    {
        if (docktestClass->objectName().isEmpty())
            docktestClass->setObjectName(QStringLiteral("docktestClass"));
        docktestClass->resize(751, 701);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        docktestClass->setPalette(palette);
        docktestClass->setIconSize(QSize(240, 50));
        actionAaaa = new QAction(docktestClass);
        actionAaaa->setObjectName(QStringLiteral("actionAaaa"));
        actionAaaa->setCheckable(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/docktest/Resources/gl_view_fitall.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAaaa->setIcon(icon);
        actionMenu = new QAction(docktestClass);
        actionMenu->setObjectName(QStringLiteral("actionMenu"));
        actionMenu->setIcon(icon);
        actionAbc1 = new QAction(docktestClass);
        actionAbc1->setObjectName(QStringLiteral("actionAbc1"));
        actionAbc1->setIcon(icon);
        centralWidget = new QWidget(docktestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        docktestClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(docktestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setIconSize(QSize(10, 50));
        docktestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(docktestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        docktestClass->setStatusBar(statusBar);
        menuBar = new QMenuBar(docktestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 751, 23));
        menuAbc = new QMenu(menuBar);
        menuAbc->setObjectName(QStringLiteral("menuAbc"));
        docktestClass->setMenuBar(menuBar);
        dockWidget = new QDockWidget(docktestClass);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        QPalette palette1;
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush2(QColor(0, 255, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        dockWidget->setPalette(palette1);
        dockWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(dockWidgetContents);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setTextFormat(Qt::AutoText);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        verticalLayout_2->addWidget(comboBox_2);

        verticalSpacer_3 = new QSpacerItem(135, 221, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        verticalLayout->addWidget(widget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(27, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        dsa = new QPushButton(dockWidgetContents);
        dsa->setObjectName(QStringLiteral("dsa"));

        horizontalLayout->addWidget(dsa);

        pushButton_2 = new QPushButton(dockWidgetContents);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        dockWidget->setWidget(dockWidgetContents);
        docktestClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        mainToolBar->addAction(actionAaaa);
        mainToolBar->addAction(actionAbc1);
        menuBar->addAction(menuAbc->menuAction());
        menuAbc->addAction(actionAbc1);

        retranslateUi(docktestClass);

        QMetaObject::connectSlotsByName(docktestClass);
    } // setupUi

    void retranslateUi(QMainWindow *docktestClass)
    {
        docktestClass->setWindowTitle(QApplication::translate("docktestClass", "docktest", 0));
        actionAaaa->setText(QApplication::translate("docktestClass", "aaaa", 0));
        actionMenu->setText(QApplication::translate("docktestClass", "menu", 0));
        actionAbc1->setText(QApplication::translate("docktestClass", "abc1", 0));
        menuAbc->setTitle(QApplication::translate("docktestClass", "abc", 0));
        label_2->setText(QApplication::translate("docktestClass", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#0055ff;\">Isotropic linear elastic study</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("docktestClass", "Model definition", 0));
        label->setText(QApplication::translate("docktestClass", "what kind of model do you want to ", 0));
        dsa->setText(QApplication::translate("docktestClass", "OK", 0));
        pushButton_2->setText(QApplication::translate("docktestClass", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class docktestClass: public Ui_docktestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKTEST_H
