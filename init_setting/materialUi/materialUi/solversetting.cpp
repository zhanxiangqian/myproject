
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
#include "solversetting.h"

#include "poframe.h"
#include "goframe.h"
#include "momframe.h"
#include "fdtdframe.h"
#include "MlfmmFrame.h"

SolverSetting::SolverSetting(QWidget *parent)
	:QDialog(parent) 
{
	this->setWindowTitle("ConCerto-Solver");
	this->setMinimumHeight(250);
	this->setMinimumWidth(200);

	QVBoxLayout *mainLayout = new QVBoxLayout();
	this->setLayout(mainLayout);

	QTabWidget *tab = new QTabWidget();
	mainLayout->addWidget(tab);

	MomFrame *momFrame = new MomFrame();
	tab->addTab(momFrame, "MoM");

	FdtdFrame *fdtdFrame = new FdtdFrame();
	tab->addTab(fdtdFrame, "FDTD");

	MlfmmFrame *mlfmmFrame = new MlfmmFrame();
	tab->addTab(mlfmmFrame, "MLFMM");

	PoFrame *poFrame = new PoFrame();
	tab->addTab(poFrame, "Po");

	GoFrame *goFrame = new GoFrame();
	tab->addTab(goFrame, "GO");

	tab->tabBar()->setMinimumWidth(200);
}

SolverSetting::~SolverSetting()
{
	
}
