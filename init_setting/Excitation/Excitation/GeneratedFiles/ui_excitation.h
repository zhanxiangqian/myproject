/********************************************************************************
** Form generated from reading UI file 'excitation.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCITATION_H
#define UI_EXCITATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExcitationClass
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ExcitationClass)
    {
        if (ExcitationClass->objectName().isEmpty())
            ExcitationClass->setObjectName(QStringLiteral("ExcitationClass"));
        ExcitationClass->resize(366, 187);
        verticalLayout = new QVBoxLayout(ExcitationClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(ExcitationClass);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        comboBox = new QComboBox(ExcitationClass);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(comboBox);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 10);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        radioButton = new QRadioButton(ExcitationClass);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        sizePolicy1.setHeightForWidth(radioButton->sizePolicy().hasHeightForWidth());
        radioButton->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(ExcitationClass);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        sizePolicy1.setHeightForWidth(radioButton_2->sizePolicy().hasHeightForWidth());
        radioButton_2->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(radioButton_2);


        verticalLayout->addLayout(horizontalLayout_2);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(ExcitationClass);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(ExcitationClass);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_3 = new QLabel(ExcitationClass);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lineEdit_2 = new QLineEdit(ExcitationClass);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_4 = new QLabel(ExcitationClass);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        lineEdit_3 = new QLineEdit(ExcitationClass);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);


        verticalLayout->addLayout(formLayout);

        verticalSpacer_2 = new QSpacerItem(20, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(ExcitationClass);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(ExcitationClass);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 2);
        verticalLayout->setStretch(5, 1);

        retranslateUi(ExcitationClass);

        QMetaObject::connectSlotsByName(ExcitationClass);
    } // setupUi

    void retranslateUi(QDialog *ExcitationClass)
    {
        ExcitationClass->setWindowTitle(QApplication::translate("ExcitationClass", "Excitation", Q_NULLPTR));
        label->setText(QApplication::translate("ExcitationClass", "Type", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ExcitationClass", "Plane wave", Q_NULLPTR)
         << QApplication::translate("ExcitationClass", "Voltage source", Q_NULLPTR)
         << QApplication::translate("ExcitationClass", "Wave guide", Q_NULLPTR)
         << QApplication::translate("ExcitationClass", "Current source", Q_NULLPTR)
         << QApplication::translate("ExcitationClass", "FEM model", Q_NULLPTR)
        );
        radioButton->setText(QApplication::translate("ExcitationClass", "Single incident wave", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("ExcitationClass", "Loop over multiple directions", Q_NULLPTR));
        label_2->setText(QApplication::translate("ExcitationClass", "\316\270range", Q_NULLPTR));
        label_3->setText(QApplication::translate("ExcitationClass", "\317\206range", Q_NULLPTR));
        label_4->setText(QApplication::translate("ExcitationClass", "Polarisation", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ExcitationClass", "Apply", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ExcitationClass", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ExcitationClass: public Ui_ExcitationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCITATION_H
