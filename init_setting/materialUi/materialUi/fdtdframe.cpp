
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
#include <QCheckBox>
#include <qdebug>
#include "FdtdFrame.h"
#include <QMessageBox>


FdtdFrame::FdtdFrame(QWidget *parent)
	:QDialog(parent) 
{
	QVBoxLayout *mainLayout = new QVBoxLayout();
	this->setLayout(mainLayout);

	QCheckBox *checkbox = new QCheckBox("Activate the finite difference time domain FDTD solver");

	mainLayout->addWidget(checkbox);


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
 
}

FdtdFrame::~FdtdFrame()
{
	
}


void FdtdFrame::onRunButtonClicked()
{
	QMessageBox::warning(this, "", "");
}