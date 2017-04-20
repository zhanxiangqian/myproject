/********************************************************************************
** Form generated from reading UI file 'Set.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SET_H
#define UI_SET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Set_Dialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Set_Dialog)
    {
        if (Set_Dialog->objectName().isEmpty())
            Set_Dialog->setObjectName(QStringLiteral("Set_Dialog"));
        Set_Dialog->resize(304, 131);
        gridLayout = new QGridLayout(Set_Dialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton = new QPushButton(Set_Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 2, 1, 1);

        label = new QLabel(Set_Dialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        lineEdit = new QLineEdit(Set_Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);


        retranslateUi(Set_Dialog);

        QMetaObject::connectSlotsByName(Set_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Set_Dialog)
    {
        Set_Dialog->setWindowTitle(QApplication::translate("Set_Dialog", "Set", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Set_Dialog", "Ok", Q_NULLPTR));
        label->setText(QApplication::translate("Set_Dialog", "Number of Core:", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("Set_Dialog", "1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Set_Dialog: public Ui_Set_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_H
