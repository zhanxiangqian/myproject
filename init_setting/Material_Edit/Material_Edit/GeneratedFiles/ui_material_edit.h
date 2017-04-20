/********************************************************************************
** Form generated from reading UI file 'material_edit.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATERIAL_EDIT_H
#define UI_MATERIAL_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Material_EditClass
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_TC;
    QLabel *label_8;
    QLabel *label_5;
    QLineEdit *lineEdit_Emi;
    QLabel *label_6;
    QLineEdit *lineEdit_Den;
    QLabel *label_9;
    QLabel *label_7;
    QLineEdit *lineEdit_SH;
    QLabel *label_10;
    QLineEdit *lineEdit_Ref;
    QLineEdit *lineEdit_Name;
    QComboBox *comboBox;
    QPushButton *pushButton_del;

    void setupUi(QDialog *Material_EditClass)
    {
        if (Material_EditClass->objectName().isEmpty())
            Material_EditClass->setObjectName(QStringLiteral("Material_EditClass"));
        Material_EditClass->resize(312, 250);
        gridLayout_2 = new QGridLayout(Material_EditClass);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(210, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton = new QPushButton(Material_EditClass);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 1, 2, 1, 1);

        groupBox = new QGroupBox(Material_EditClass);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 2);

        lineEdit_TC = new QLineEdit(groupBox);
        lineEdit_TC->setObjectName(QStringLiteral("lineEdit_TC"));

        gridLayout->addWidget(lineEdit_TC, 2, 2, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 2, 3, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        lineEdit_Emi = new QLineEdit(groupBox);
        lineEdit_Emi->setObjectName(QStringLiteral("lineEdit_Emi"));

        gridLayout->addWidget(lineEdit_Emi, 3, 2, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        lineEdit_Den = new QLineEdit(groupBox);
        lineEdit_Den->setObjectName(QStringLiteral("lineEdit_Den"));

        gridLayout->addWidget(lineEdit_Den, 4, 2, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 4, 3, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        lineEdit_SH = new QLineEdit(groupBox);
        lineEdit_SH->setObjectName(QStringLiteral("lineEdit_SH"));

        gridLayout->addWidget(lineEdit_SH, 5, 2, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 5, 3, 1, 1);

        lineEdit_Ref = new QLineEdit(groupBox);
        lineEdit_Ref->setObjectName(QStringLiteral("lineEdit_Ref"));

        gridLayout->addWidget(lineEdit_Ref, 1, 2, 1, 1);

        lineEdit_Name = new QLineEdit(groupBox);
        lineEdit_Name->setObjectName(QStringLiteral("lineEdit_Name"));

        gridLayout->addWidget(lineEdit_Name, 0, 1, 1, 2);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 3);

        pushButton_del = new QPushButton(Material_EditClass);
        pushButton_del->setObjectName(QStringLiteral("pushButton_del"));

        gridLayout_2->addWidget(pushButton_del, 1, 1, 1, 1);


        retranslateUi(Material_EditClass);

        QMetaObject::connectSlotsByName(Material_EditClass);
    } // setupUi

    void retranslateUi(QDialog *Material_EditClass)
    {
        Material_EditClass->setWindowTitle(QApplication::translate("Material_EditClass", "Material_Edit", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Material_EditClass", "Save", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Material_EditClass", "Parameters", Q_NULLPTR));
        label->setText(QApplication::translate("Material_EditClass", "Name:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Material_EditClass", "Reflectivity:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Material_EditClass", "Thermal Conductivity:", Q_NULLPTR));
        lineEdit_TC->setText(QApplication::translate("Material_EditClass", "80.2", Q_NULLPTR));
        label_8->setText(QApplication::translate("Material_EditClass", "<html><head/><body><p><span style=\" font-size:10pt;\">W/(\302\260K\302\267m)</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("Material_EditClass", "Emissivity:", Q_NULLPTR));
        lineEdit_Emi->setText(QApplication::translate("Material_EditClass", "0.5", Q_NULLPTR));
        label_6->setText(QApplication::translate("Material_EditClass", "Density:", Q_NULLPTR));
        lineEdit_Den->setText(QApplication::translate("Material_EditClass", "7874", Q_NULLPTR));
        label_9->setText(QApplication::translate("Material_EditClass", "<html><head/><body><p><span style=\" font-size:10pt;\">kg/m</span><span style=\" font-size:10pt; vertical-align:super;\">3</span></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("Material_EditClass", "Specific Heat:", Q_NULLPTR));
        lineEdit_SH->setText(QApplication::translate("Material_EditClass", "440", Q_NULLPTR));
        label_10->setText(QApplication::translate("Material_EditClass", "<html><head/><body><p><span style=\" font-size:10pt;\">J/(\302\260K\302\267kg)</span></p></body></html>", Q_NULLPTR));
        lineEdit_Ref->setText(QApplication::translate("Material_EditClass", "0.5", Q_NULLPTR));
        lineEdit_Name->setText(QApplication::translate("Material_EditClass", "Undefine", Q_NULLPTR));
        pushButton_del->setText(QApplication::translate("Material_EditClass", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Material_EditClass: public Ui_Material_EditClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATERIAL_EDIT_H
