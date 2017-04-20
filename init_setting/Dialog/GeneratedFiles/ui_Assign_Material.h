/********************************************************************************
** Form generated from reading UI file 'Assign_Material.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSIGN_MATERIAL_H
#define UI_ASSIGN_MATERIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Assign_Material_Dialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QPushButton *pushButton_Save;
    QSpacerItem *horizontalSpacer_3;
    QListWidget *listWidget;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Assign_Material_Dialog)
    {
        if (Assign_Material_Dialog->objectName().isEmpty())
            Assign_Material_Dialog->setObjectName(QStringLiteral("Assign_Material_Dialog"));
        Assign_Material_Dialog->resize(281, 174);
        gridLayout = new QGridLayout(Assign_Material_Dialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Assign_Material_Dialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(62, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 3, 1, 1);

        pushButton = new QPushButton(Assign_Material_Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 4, 1, 1, 1);

        pushButton_Save = new QPushButton(Assign_Material_Dialog);
        pushButton_Save->setObjectName(QStringLiteral("pushButton_Save"));

        gridLayout->addWidget(pushButton_Save, 4, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(72, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 1, 1, 1);

        listWidget = new QListWidget(Assign_Material_Dialog);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 0, 1, 3, 3);

        horizontalSpacer = new QSpacerItem(27, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 72, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(Assign_Material_Dialog);

        QMetaObject::connectSlotsByName(Assign_Material_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Assign_Material_Dialog)
    {
        Assign_Material_Dialog->setWindowTitle(QApplication::translate("Assign_Material_Dialog", "Assign Material", Q_NULLPTR));
        label->setText(QApplication::translate("Assign_Material_Dialog", "Name:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Assign_Material_Dialog", "Cancel", Q_NULLPTR));
        pushButton_Save->setText(QApplication::translate("Assign_Material_Dialog", "Save", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Assign_Material_Dialog: public Ui_Assign_Material_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSIGN_MATERIAL_H
