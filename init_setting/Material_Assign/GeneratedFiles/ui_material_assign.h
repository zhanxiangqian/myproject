/********************************************************************************
** Form generated from reading UI file 'material_assign.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATERIAL_ASSIGN_H
#define UI_MATERIAL_ASSIGN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Material_AssignClass
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_3;
    QComboBox *comboBox;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Material_AssignClass)
    {
        if (Material_AssignClass->objectName().isEmpty())
            Material_AssignClass->setObjectName(QStringLiteral("Material_AssignClass"));
        Material_AssignClass->resize(371, 254);
        gridLayout_2 = new QGridLayout(Material_AssignClass);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(Material_AssignClass);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout_2->addWidget(spinBox);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 2);

        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 0, 2, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 3, 1, 1);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 2, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(161, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        verticalLayout->addWidget(groupBox_2);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(269, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        pushButton = new QPushButton(Material_AssignClass);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 1, 1, 1, 1);


        retranslateUi(Material_AssignClass);

        QMetaObject::connectSlotsByName(Material_AssignClass);
    } // setupUi

    void retranslateUi(QDialog *Material_AssignClass)
    {
        Material_AssignClass->setWindowTitle(QApplication::translate("Material_AssignClass", "Material_Assign", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Material_AssignClass", "Material", Q_NULLPTR));
        label->setText(QApplication::translate("Material_AssignClass", "Number of Layers:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Material_AssignClass", "Selected Layer:", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Material_AssignClass", "Layer Properties", Q_NULLPTR));
        label_4->setText(QApplication::translate("Material_AssignClass", "Material:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Material_AssignClass", "m", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("Material_AssignClass", "0.05", Q_NULLPTR));
        label_5->setText(QApplication::translate("Material_AssignClass", "Width:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Material_AssignClass", "Save", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Material_AssignClass: public Ui_Material_AssignClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATERIAL_ASSIGN_H
