/********************************************************************************
** Form generated from reading UI file 'record.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORD_H
#define UI_RECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RecordClass
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *RecordClass)
    {
        if (RecordClass->objectName().isEmpty())
            RecordClass->setObjectName(QStringLiteral("RecordClass"));
        RecordClass->resize(303, 123);
        verticalLayout = new QVBoxLayout(RecordClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton = new QRadioButton(RecordClass);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(radioButton->sizePolicy().hasHeightForWidth());
        radioButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(RecordClass);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        sizePolicy.setHeightForWidth(radioButton_2->sizePolicy().hasHeightForWidth());
        radioButton_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(radioButton_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(RecordClass);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(RecordClass);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(RecordClass);

        QMetaObject::connectSlotsByName(RecordClass);
    } // setupUi

    void retranslateUi(QDialog *RecordClass)
    {
        RecordClass->setWindowTitle(QApplication::translate("RecordClass", "Record", Q_NULLPTR));
        radioButton->setText(QApplication::translate("RecordClass", "Far fields", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("RecordClass", "Near fields", Q_NULLPTR));
        pushButton->setText(QApplication::translate("RecordClass", "Apply", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("RecordClass", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RecordClass: public Ui_RecordClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORD_H
