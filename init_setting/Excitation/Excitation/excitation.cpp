#include "excitation.h"
#include <QButtonGroup>
#include <QSettings>
Excitation::Excitation(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	//QButtonGroup *pgroup1 = new QButtonGroup(this);
	//QButtonGroup *pgroup2 = new QButtonGroup(this);

	//radiostate1 = 0;
	//radiostate2 = 0;
	//prad1 = new QRadioButton();
	//prad2 = new QRadioButton();
	
	//pgroup1->addButton(ui.radioButton);
	//pgroup1->addButton(prad1);
	//prad1->hide();

	//pgroup2->addButton(ui.radioButton_2);
	//pgroup2->addButton(prad2);
	//prad2->hide();
	//connect(ui.radioButton, SIGNAL(clicked(bool)), this, SLOT(onRadio1(bool)));
	//connect(ui.radioButton_2, SIGNAL(clicked(bool)), this, SLOT(onRadio2(bool)));
	connect(ui.comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(onTypeChange(int)));
	connect(ui.pushButton, SIGNAL(clicked(bool)), this, SLOT(onclicked(bool)));
	connect(ui.pushButton_2, SIGNAL(clicked(bool)), this, SLOT(onclicked(bool)));
	ui.radioButton->setChecked(true);
	onTypeChange(0);
	this->setWindowTitle("Concerto-Excitation");

}

void Excitation::onclicked(bool b)
{
	/*QString path = QCoreApplication::applicationDirPath() + "\\excitation.ini";

	QSettings settings(path, QSettings::IniFormat);
	settings.value("start_frequency", 6.5);
	settings.value("end_frequency", 6.5);
	settings.value("number", 6.5);*/
	close();
}

void Excitation::onTypeChange(int indx)
{
	if (indx != 0)
	{
		ui.radioButton->hide();
		ui.radioButton_2->hide();
	}
	else
	{
		ui.radioButton->show();
		ui.radioButton_2->show();
	}
	switch (indx)
	{
		case 0:
			{
				  ui.label_2->setText("θrange");
				  ui.label_3->setText("φrange");
				  ui.label_4->setText("Polarisation");

				  ui.lineEdit->setText("0.0");
				  ui.lineEdit_2->setText("0.0");
				  ui.lineEdit_3->setText("0.0");
				  ui.label_4->show();
				  ui.lineEdit_3->show();
				  break;
			}
		case 1:
		{
				  ui.label_2->setText("Magnitude(V)");
				  ui.label_3->setText("Phase(degrees)");
				  ui.label_4->setText("Port impedance(0hm)");

				  ui.lineEdit->setText("1.0");
				  ui.lineEdit_2->setText("0.0");
				  ui.lineEdit_3->setText("50.0");
				  ui.label_4->show();
				  ui.lineEdit_3->show();


				  break;
		}	
		case 2:
		{
				  ui.label_2->setText("Magnitude");
				  ui.label_3->setText("Phase");
				  ui.label_4->setText("Rotation");

				  ui.lineEdit->setText("1.0");
				  ui.lineEdit_2->setText("0.0");
				  ui.lineEdit_3->setText("0.0");

				  ui.label_4->show();
				  ui.lineEdit_3->show();


				  break;
		}	
		case 3:
		{
				  ui.label_2->setText("Magnitude(A)");
				  ui.label_3->setText("Phase(degrees)");
				  ui.label_4->setText("Port impedance(0hm)");

				  ui.lineEdit->setText("1.0");
				  ui.lineEdit_2->setText("0.0");
				  ui.lineEdit_3->setText("50.0");

				  ui.label_4->show();
				  ui.lineEdit_3->show();

				  break;
		}	
		case 4:
		{
				  ui.label_2->setText("Magnitude");
				  ui.label_3->setText("Phase");

				  ui.lineEdit->setText("1.0");
				  ui.lineEdit_2->setText("0.0");

				  ui.label_4->hide();
				  ui.lineEdit_3->hide();

				  break;
		}
		default:
			break;
	}
}

void Excitation::onRadio2(bool b)
{
	/*if (radiostate2)
	{
		prad2->setChecked(true);
	}
	else
	{
		ui.radioButton_2->setChecked(true);
	}
	radiostate2 = !radiostate2;*/
}

void Excitation::onRadio1(bool b)
{
	/*if (radiostate1)
	{
		prad1->setChecked(true);
	}
	else
	{
		ui.radioButton->setChecked(true);
	}
	radiostate1 = !radiostate1;*/
}

Excitation::~Excitation()
{

}
