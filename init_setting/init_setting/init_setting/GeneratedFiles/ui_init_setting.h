/********************************************************************************
** Form generated from reading UI file 'init_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INIT_SETTING_H
#define UI_INIT_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_init_settingClass
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *Fre;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLineEdit *lineEdit_4;
    QLabel *label_3;
    QLineEdit *lineEdit_5;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *init_settingClass)
    {
        if (init_settingClass->objectName().isEmpty())
            init_settingClass->setObjectName(QStringLiteral("init_settingClass"));
        init_settingClass->resize(481, 370);
        verticalLayout_3 = new QVBoxLayout(init_settingClass);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        Fre = new QTabWidget(init_settingClass);
        Fre->setObjectName(QStringLiteral("Fre"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton_2 = new QRadioButton(tab);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(tab);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        horizontalLayout->addWidget(radioButton_3);


        verticalLayout->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_3 = new QLineEdit(tab);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_3);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_4 = new QLineEdit(tab);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_4);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_5 = new QLineEdit(tab);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_5);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit);


        verticalLayout->addLayout(formLayout);


        verticalLayout_2->addLayout(verticalLayout);

        Fre->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_3 = new QHBoxLayout(tab_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        radioButton = new QRadioButton(tab_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        verticalLayout_4->addWidget(radioButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_4);

        Fre->addTab(tab_2, QString());

        verticalLayout_3->addWidget(Fre);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(init_settingClass);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(init_settingClass);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(init_settingClass);

        Fre->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(init_settingClass);
    } // setupUi

    void retranslateUi(QDialog *init_settingClass)
    {
        init_settingClass->setWindowTitle(QApplication::translate("init_settingClass", "init_setting", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("init_settingClass", "Simple frequency", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("init_settingClass", "Continuous range", Q_NULLPTR));
        label->setText(QApplication::translate("init_settingClass", "Frequency(GHz)", Q_NULLPTR));
        label_2->setText(QApplication::translate("init_settingClass", "Start frequency(GHz)", Q_NULLPTR));
        label_3->setText(QApplication::translate("init_settingClass", "End frequency(GHz)", Q_NULLPTR));
        label_4->setText(QApplication::translate("init_settingClass", "Number", Q_NULLPTR));
        Fre->setTabText(Fre->indexOf(tab), QApplication::translate("init_settingClass", "Frequency", Q_NULLPTR));
        radioButton->setText(QApplication::translate("init_settingClass", "Specify number of samples for export data", Q_NULLPTR));
        Fre->setTabText(Fre->indexOf(tab_2), QApplication::translate("init_settingClass", "Export", Q_NULLPTR));
        pushButton->setText(QApplication::translate("init_settingClass", "Apply", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("init_settingClass", "Cancle", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class init_settingClass: public Ui_init_settingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INIT_SETTING_H
