/********************************************************************************
** Form generated from reading UI file 'Edit_Material.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_MATERIAL_H
#define UI_EDIT_MATERIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Edit_Material_Dialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QListWidget *listWidget;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QLineEdit *lineEdit_Ref;
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
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Edit_Material_Dialog)
    {
        if (Edit_Material_Dialog->objectName().isEmpty())
            Edit_Material_Dialog->setObjectName(QStringLiteral("Edit_Material_Dialog"));
        Edit_Material_Dialog->resize(399, 327);
        gridLayout = new QGridLayout(Edit_Material_Dialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Edit_Material_Dialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        listWidget = new QListWidget(Edit_Material_Dialog);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 0, 2, 2, 4);

        verticalSpacer = new QSpacerItem(20, 129, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        label_3 = new QLabel(Edit_Material_Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_Ref = new QLineEdit(Edit_Material_Dialog);
        lineEdit_Ref->setObjectName(QStringLiteral("lineEdit_Ref"));

        gridLayout->addWidget(lineEdit_Ref, 2, 2, 1, 3);

        label_4 = new QLabel(Edit_Material_Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 2);

        lineEdit_TC = new QLineEdit(Edit_Material_Dialog);
        lineEdit_TC->setObjectName(QStringLiteral("lineEdit_TC"));

        gridLayout->addWidget(lineEdit_TC, 3, 2, 1, 3);

        label_8 = new QLabel(Edit_Material_Dialog);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 3, 6, 1, 1);

        label_5 = new QLabel(Edit_Material_Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        lineEdit_Emi = new QLineEdit(Edit_Material_Dialog);
        lineEdit_Emi->setObjectName(QStringLiteral("lineEdit_Emi"));

        gridLayout->addWidget(lineEdit_Emi, 4, 2, 1, 3);

        label_6 = new QLabel(Edit_Material_Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        lineEdit_Den = new QLineEdit(Edit_Material_Dialog);
        lineEdit_Den->setObjectName(QStringLiteral("lineEdit_Den"));

        gridLayout->addWidget(lineEdit_Den, 5, 2, 1, 3);

        label_9 = new QLabel(Edit_Material_Dialog);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 5, 6, 1, 1);

        label_7 = new QLabel(Edit_Material_Dialog);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        lineEdit_SH = new QLineEdit(Edit_Material_Dialog);
        lineEdit_SH->setObjectName(QStringLiteral("lineEdit_SH"));

        gridLayout->addWidget(lineEdit_SH, 6, 2, 1, 3);

        label_10 = new QLabel(Edit_Material_Dialog);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 6, 6, 1, 1);

        horizontalSpacer = new QSpacerItem(129, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 7, 0, 1, 3);

        pushButton = new QPushButton(Edit_Material_Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton, 7, 3, 1, 1);

        pushButton_2 = new QPushButton(Edit_Material_Dialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_2, 7, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(7, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 7, 5, 1, 1);


        retranslateUi(Edit_Material_Dialog);

        QMetaObject::connectSlotsByName(Edit_Material_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Edit_Material_Dialog)
    {
        Edit_Material_Dialog->setWindowTitle(QApplication::translate("Edit_Material_Dialog", "Edit Material", Q_NULLPTR));
        label->setText(QApplication::translate("Edit_Material_Dialog", "Name:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Edit_Material_Dialog", "Reflectivity:", Q_NULLPTR));
        lineEdit_Ref->setText(QApplication::translate("Edit_Material_Dialog", "0.5", Q_NULLPTR));
        label_4->setText(QApplication::translate("Edit_Material_Dialog", "Thermal Conductivity:", Q_NULLPTR));
        lineEdit_TC->setText(QApplication::translate("Edit_Material_Dialog", "80.2", Q_NULLPTR));
        label_8->setText(QApplication::translate("Edit_Material_Dialog", "<html><head/><body><p><span style=\" font-size:10pt;\">W/(\302\260K\302\267m)</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("Edit_Material_Dialog", "Emissivity:", Q_NULLPTR));
        lineEdit_Emi->setText(QApplication::translate("Edit_Material_Dialog", "0.5", Q_NULLPTR));
        label_6->setText(QApplication::translate("Edit_Material_Dialog", "Density:", Q_NULLPTR));
        lineEdit_Den->setText(QApplication::translate("Edit_Material_Dialog", "7874", Q_NULLPTR));
        label_9->setText(QApplication::translate("Edit_Material_Dialog", "<html><head/><body><p><span style=\" font-size:10pt;\">kg/m</span><span style=\" font-size:10pt; vertical-align:super;\">3</span></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("Edit_Material_Dialog", "Specific Heat:", Q_NULLPTR));
        lineEdit_SH->setText(QApplication::translate("Edit_Material_Dialog", "440", Q_NULLPTR));
        label_10->setText(QApplication::translate("Edit_Material_Dialog", "<html><head/><body><p><span style=\" font-size:10pt;\">J/(\302\260K\302\267kg)</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Edit_Material_Dialog", "Cancel", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Edit_Material_Dialog", "Save", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Edit_Material_Dialog: public Ui_Edit_Material_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_MATERIAL_H
