/********************************************************************************
** Form generated from reading UI file 'qpaintwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPAINTWIDGET_H
#define UI_QPAINTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QPaintWidget
{
public:

    void setupUi(QWidget *QPaintWidget)
    {
        if (QPaintWidget->objectName().isEmpty())
            QPaintWidget->setObjectName(QStringLiteral("QPaintWidget"));
        QPaintWidget->resize(400, 300);

        retranslateUi(QPaintWidget);

        QMetaObject::connectSlotsByName(QPaintWidget);
    } // setupUi

    void retranslateUi(QWidget *QPaintWidget)
    {
        QPaintWidget->setWindowTitle(QApplication::translate("QPaintWidget", "QPaintWidget", 0));
    } // retranslateUi

};

namespace Ui {
    class QPaintWidget: public Ui_QPaintWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPAINTWIDGET_H
