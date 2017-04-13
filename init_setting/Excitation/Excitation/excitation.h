#ifndef EXCITATION_H
#define EXCITATION_H

#include <QtWidgets/QDialog>
#include "ui_excitation.h"

class Excitation : public QDialog
{
	Q_OBJECT

public:
	Excitation(QWidget *parent = 0);
	~Excitation();
public slots:
	void onRadio1(bool b);
	void onRadio2(bool b);
	void onTypeChange(int indx);
	void onclicked(bool b);
private:
	bool radiostate1;
	QRadioButton *prad1;
	QRadioButton *prad2;
	bool radiostate2;
	Ui::ExcitationClass ui;
};

#endif // EXCITATION_H
