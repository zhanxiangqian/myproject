
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
#include <QFileInfo>
#include <QTabWidget>
#include <qdebug>
#include "GoFrame.h"



GoFrame::GoFrame(QWidget *parent)
	:QDialog(parent) 
{


	QVBoxLayout *mainLayout = new QVBoxLayout();
	this->setLayout(mainLayout);


	QHBoxLayout *fouthLayout = new QHBoxLayout();
	QPushButton *runButton = new QPushButton("run");
	runButton->setMaximumWidth(80);
	QPushButton *cancelButton = new QPushButton("Cancel");
	cancelButton->setMaximumWidth(80);
	fouthLayout->addWidget(runButton);
	fouthLayout->addWidget(cancelButton);

	mainLayout->addLayout(fouthLayout);

	connect(runButton, SIGNAL(clicked()), this, SLOT(onRunButtonClicked()));
	connect(cancelButton, SIGNAL(clicked()), qApp, SLOT(quit()));



	//QCheckBox 
}

GoFrame::~GoFrame()
{
	
}

#include <QMessageBox>
void GoFrame::onRunButtonClicked()
{
	QMessageBox::warning(this, "", "");
}