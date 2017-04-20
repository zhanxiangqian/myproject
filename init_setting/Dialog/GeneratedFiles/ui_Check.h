/********************************************************************************
** Form generated from reading UI file 'Check.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECK_H
#define UI_CHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Check_Dialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *Check_Dialog)
    {
        if (Check_Dialog->objectName().isEmpty())
            Check_Dialog->setObjectName(QStringLiteral("Check_Dialog"));
        Check_Dialog->resize(249, 152);
        gridLayout = new QGridLayout(Check_Dialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(72, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        label_2 = new QLabel(Check_Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(23, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        pushButton = new QPushButton(Check_Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 2, 1, 1);


        retranslateUi(Check_Dialog);

        QMetaObject::connectSlotsByName(Check_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Check_Dialog)
    {
        Check_Dialog->setWindowTitle(QApplication::translate("Check_Dialog", "Check", Q_NULLPTR));
        label_2->setText(QApplication::translate("Check_Dialog", "It's ready to simulation", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Check_Dialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Check_Dialog: public Ui_Check_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK_H
