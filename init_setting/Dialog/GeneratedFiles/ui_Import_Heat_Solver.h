/********************************************************************************
** Form generated from reading UI file 'Import_Heat_Solver.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORT_HEAT_SOLVER_H
#define UI_IMPORT_HEAT_SOLVER_H

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

class Ui_Import_Heat_Dialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Ok;
    QSpacerItem *verticalSpacer;
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton_path;
    QLabel *label;

    void setupUi(QDialog *Import_Heat_Dialog)
    {
        if (Import_Heat_Dialog->objectName().isEmpty())
            Import_Heat_Dialog->setObjectName(QStringLiteral("Import_Heat_Dialog"));
        Import_Heat_Dialog->resize(314, 175);
        gridLayout = new QGridLayout(Import_Heat_Dialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton = new QPushButton(Import_Heat_Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        pushButton_Ok = new QPushButton(Import_Heat_Dialog);
        pushButton_Ok->setObjectName(QStringLiteral("pushButton_Ok"));
        sizePolicy.setHeightForWidth(pushButton_Ok->sizePolicy().hasHeightForWidth());
        pushButton_Ok->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_Ok, 4, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 52, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        listWidget = new QListWidget(Import_Heat_Dialog);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 0, 1, 2, 2);

        lineEdit = new QLineEdit(Import_Heat_Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 3, 1, 1, 2);

        label_2 = new QLabel(Import_Heat_Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        pushButton_path = new QPushButton(Import_Heat_Dialog);
        pushButton_path->setObjectName(QStringLiteral("pushButton_path"));

        gridLayout->addWidget(pushButton_path, 2, 1, 1, 1);

        label = new QLabel(Import_Heat_Dialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(Import_Heat_Dialog);

        QMetaObject::connectSlotsByName(Import_Heat_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Import_Heat_Dialog)
    {
        Import_Heat_Dialog->setWindowTitle(QApplication::translate("Import_Heat_Dialog", "Import Heat Solver", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Import_Heat_Dialog", "Cancel", Q_NULLPTR));
        pushButton_Ok->setText(QApplication::translate("Import_Heat_Dialog", "Ok", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Import_Heat_Dialog", "Fluent", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Import_Heat_Dialog", "FLOWIC", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("Import_Heat_Dialog", "CFX", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_2->setText(QApplication::translate("Import_Heat_Dialog", "Path:", Q_NULLPTR));
        pushButton_path->setText(QApplication::translate("Import_Heat_Dialog", "...", Q_NULLPTR));
        label->setText(QApplication::translate("Import_Heat_Dialog", "CFD Software:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Import_Heat_Dialog: public Ui_Import_Heat_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORT_HEAT_SOLVER_H
