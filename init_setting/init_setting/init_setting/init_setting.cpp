#include "init_setting.h"
#include <QSettings>
init_setting::init_setting(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->setWindowTitle("Concerto-Initial Setting");
	ui.radioButton_2->setChecked(true);
	ui.label->show();
	ui.lineEdit_3->show();
	ui.label_2->hide();
	ui.lineEdit_4->hide();
	ui.label_3->hide();
	ui.lineEdit_5->hide();

	QString path = QCoreApplication::applicationDirPath() + "/setting.ini";

	QSettings settings(path, QSettings::IniFormat);
	settings.beginGroup("Freq");
	int f_type = settings.value("f_type", 0).toInt();
	if (f_type == 0)
	{
		ui.radioButton_2->setChecked(true);
		ui.lineEdit_3->setText(settings.value("f_start", 0).toString());
		onRadioButton(true);
	}
	else
	{
		ui.radioButton_3->setChecked(true);
		ui.lineEdit_4->setText(settings.value("f_start", 0).toString());
		ui.lineEdit_5->setText(settings.value("f_end", 0).toString());
		ui.lineEdit->setText(settings.value("f_num", 0).toString());
		onRadioButton(true);
	}
	settings.endGroup();


	connect(ui.radioButton_2, SIGNAL(toggled(bool)), this, SLOT(onRadioButton(bool)));
	connect(ui.pushButton, SIGNAL(clicked(bool)), this, SLOT(onapply(bool)));
	connect(ui.pushButton_2, SIGNAL(clicked(bool)), this, SLOT(closewindow(bool)));
}

void init_setting::closewindow(bool b)
{
	close();
}

void init_setting::onapply(bool b)
{
	QString path = QCoreApplication::applicationDirPath() + "/setting.ini";

	QSettings settings(path, QSettings::IniFormat);
	settings.beginGroup("Freq");
	double f_start = .0;
	double f_step = .0;
	double f_end = .0;
	int f_num = 0;
	int f_type = 0;
	if (ui.radioButton_2->isChecked())
	{
		f_type = 0;
		f_start = ui.lineEdit_3->text().toDouble();
		f_end = f_start;
		f_num = 1;
		f_step = .0;
	}
	else
	{
		f_type = 1;
		f_start = ui.lineEdit_4->text().toDouble();
		f_num = ui.lineEdit->text().toInt();
		f_end = ui.lineEdit_5->text().toDouble();
		double num = f_num - 1;
		f_step = (ui.lineEdit_5->text().toDouble() - f_start) / num;
	}
	settings.setValue("f_type", f_type);
	settings.setValue("f_start", f_start);
	settings.setValue("f_step", f_step);
	settings.setValue("f_end", f_end);
	settings.setValue("f_num", f_num);
	settings.endGroup();
	close();
}
void init_setting::onRadioButton(bool b)
{
	if (ui.radioButton_2->isChecked())
	{
		ui.label->show();
		ui.lineEdit_3->show();
		ui.label_2->hide();
		ui.lineEdit_4->hide();
		ui.label_3->hide();
		ui.lineEdit_5->hide();
		ui.lineEdit->hide();
		ui.label_4->hide();
	}
	else
	{
		ui.label->hide();
		ui.lineEdit_3->hide();
		ui.label_2->show();
		ui.lineEdit_4->show();
		ui.label_3->show();
		ui.lineEdit_5->show();
		ui.label_4->show();
		ui.lineEdit->show();

	}
}

init_setting::~init_setting()
{

}
