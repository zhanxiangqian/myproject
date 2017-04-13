#include "record.h"
#include <QButtonGroup>
Record::Record(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	QButtonGroup *pgroup1 = new QButtonGroup(this);
	QButtonGroup *pgroup2 = new QButtonGroup(this);

	radiostate1 = 0;
	radiostate2 = 0;
	prad1 = new QRadioButton();
	prad2 = new QRadioButton();

	pgroup1->addButton(ui.radioButton);
	pgroup1->addButton(prad1);
	prad1->hide();

	pgroup2->addButton(ui.radioButton_2);
	pgroup2->addButton(prad2);
	prad2->hide();
	this->setWindowTitle("Concerto-Record");
	connect(ui.radioButton, SIGNAL(clicked(bool)), this, SLOT(onRadio1(bool)));
	connect(ui.radioButton_2, SIGNAL(clicked(bool)), this, SLOT(onRadio2(bool)));
	connect(ui.pushButton, SIGNAL(clicked(bool)), this, SLOT(onclicked(bool)));
	connect(ui.pushButton_2, SIGNAL(clicked(bool)), this, SLOT(onclicked(bool)));
}

void Record::onclicked(bool b)
{
	close();
}

void Record::onRadio2(bool b)
{
	if (radiostate2)
	{
		prad2->setChecked(true);
	}
	else
	{
		ui.radioButton_2->setChecked(true);
	}
	radiostate2 = !radiostate2;
}

void Record::onRadio1(bool b)
{
	if (radiostate1)
	{
		prad1->setChecked(true);
	}
	else
	{
		ui.radioButton->setChecked(true);
	}
	radiostate1 = !radiostate1;
}

Record::~Record()
{

}
