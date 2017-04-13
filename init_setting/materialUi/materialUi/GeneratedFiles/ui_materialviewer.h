/********************************************************************************
** Form generated from reading UI file 'materialviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATERIALVIEWER_H
#define UI_MATERIALVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QListWidget *listWidget;
    QFrame *matFrame;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QFrame *snchartFrame;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(476, 565);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(Dialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        listWidget = new QListWidget(Dialog);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setMaximumSize(QSize(150, 220));

        horizontalLayout->addWidget(listWidget);


        verticalLayout_2->addLayout(horizontalLayout);

        matFrame = new QFrame(Dialog);
        matFrame->setObjectName(QStringLiteral("matFrame"));
        matFrame->setFrameShape(QFrame::StyledPanel);
        matFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(matFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(matFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label_5 = new QLabel(matFrame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setPixmap(QPixmap(QString::fromUtf8("1.png")));

        horizontalLayout_2->addWidget(label_5);

        lineEdit = new QLineEdit(matFrame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(matFrame);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        label_6 = new QLabel(matFrame);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        lineEdit_2 = new QLineEdit(matFrame);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(matFrame);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        label_7 = new QLabel(matFrame);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        lineEdit_3 = new QLineEdit(matFrame);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_4->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(matFrame);

        snchartFrame = new QFrame(Dialog);
        snchartFrame->setObjectName(QStringLiteral("snchartFrame"));
        snchartFrame->setEnabled(true);
        snchartFrame->setMinimumSize(QSize(0, 0));
        snchartFrame->setFrameShape(QFrame::StyledPanel);
        snchartFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(snchartFrame);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));

        horizontalLayout_5->addLayout(verticalLayout_3);


        verticalLayout_2->addWidget(snchartFrame);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_6->addWidget(pushButton);

        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_6->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_6);

        matFrame->raise();
        label->raise();
        snchartFrame->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog", "Mode", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Simple", Q_NULLPTR)
         << QApplication::translate("Dialog", "Costom", Q_NULLPTR)
        );

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Dialog", "Alumina", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Dialog", "Beeswax", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("Dialog", "Bladder", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("Dialog", "Blood", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("Dialog", "Bone", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("Dialog", "Brass", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_2->setText(QApplication::translate("Dialog", "Relative pemittivity    ", Q_NULLPTR));
        label_5->setText(QString());
        label_3->setText(QApplication::translate("Dialog", "Dielectric loss tangent", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog", "Conductivity (s/m)", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog", "Apply", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Dialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATERIALVIEWER_H
