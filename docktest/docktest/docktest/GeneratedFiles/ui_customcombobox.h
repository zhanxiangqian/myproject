/********************************************************************************
** Form generated from reading UI file 'customcombobox.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMCOMBOBOX_H
#define UI_CUSTOMCOMBOBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_CustomComboBox
{
public:

    void setupUi(QComboBox *CustomComboBox)
    {
        if (CustomComboBox->objectName().isEmpty())
            CustomComboBox->setObjectName(QStringLiteral("CustomComboBox"));
        CustomComboBox->resize(400, 300);

        retranslateUi(CustomComboBox);

        QMetaObject::connectSlotsByName(CustomComboBox);
    } // setupUi

    void retranslateUi(QComboBox *CustomComboBox)
    {
        CustomComboBox->setWindowTitle(QApplication::translate("CustomComboBox", "CustomComboBox", 0));
    } // retranslateUi

};

namespace Ui {
    class CustomComboBox: public Ui_CustomComboBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMCOMBOBOX_H
