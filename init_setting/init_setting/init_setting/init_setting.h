#ifndef INIT_SETTING_H
#define INIT_SETTING_H

#include <QtWidgets/QDialog>
#include "ui_init_setting.h"

class init_setting : public QDialog
{
	Q_OBJECT

public:
	init_setting(QWidget *parent = 0);
	~init_setting();

public slots:
    void onRadioButton(bool b);
	void closewindow(bool b);
	void onapply(bool b);
private:
	Ui::init_settingClass ui;
};

#endif // INIT_SETTING_H
