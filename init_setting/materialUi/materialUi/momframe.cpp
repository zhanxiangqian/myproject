
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


#include <QMessageBox>
#include <QProcess>
#include <qDebug>

#include "momframe.h"
MomFrame::MomFrame(QWidget *parent)
	:QDialog(parent) 
{
	pro = new QProcess(this);
	QVBoxLayout *mainLayout = new QVBoxLayout();
	this->setLayout(mainLayout);

	QCheckBox *checkbox = new QCheckBox("Save Mom with higher order basis functions");

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

	connect(pro, SIGNAL(started()), this, SLOT(onStarted()));
	connect(pro, SIGNAL(errorOccurred(QProcess::ProcessError)()), this, SLOT(onError(QProcess::ProcessError)));
}

MomFrame::~MomFrame()
{

}

void MomFrame::onStarted()
{
	QMessageBox::warning(this, "onStarted","");
	qDebug() << pro->state();

}

void MomFrame::onError(QProcess::ProcessError error)
{
	QMessageBox::warning(this, "onError","");
	qDebug() << error <<pro->state();

}

void MomFrame::onRunButtonClicked()
{
	QString progrem = QCoreApplication::applicationDirPath() + "/v.exe";
	//QString progrem = QCoreApplication::applicationDirPath() + "/RCS_Display";
	QMessageBox::warning(this, progrem, progrem);
	QStringList tmp;
 
	pro->start(progrem, tmp);
	qDebug() << pro->state();
	 
	
}