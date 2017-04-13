/********************************************************************************
** Form generated from reading UI file 'text.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXT_H
#define UI_TEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_textClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *textClass)
    {
        if (textClass->objectName().isEmpty())
            textClass->setObjectName(QStringLiteral("textClass"));
        textClass->resize(600, 400);
        centralWidget = new QWidget(textClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 70, 261, 61));
        textClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(textClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        textClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(textClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        textClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(textClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        textClass->setStatusBar(statusBar);

        retranslateUi(textClass);

        QMetaObject::connectSlotsByName(textClass);
    } // setupUi

    void retranslateUi(QMainWindow *textClass)
    {
        textClass->setWindowTitle(QApplication::translate("textClass", "text", Q_NULLPTR));
        label->setText(QApplication::translate("textClass", "<html><head/><body><p><span style=\" font-size:26pt; color:#ff0000;\">NO LICENSES!!</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class textClass: public Ui_textClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXT_H
