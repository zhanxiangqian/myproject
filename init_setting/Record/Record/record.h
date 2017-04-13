#ifndef RECORD_H
#define RECORD_H

#include <QtWidgets/QDialog>
#include "ui_record.h"

class Record : public QDialog
{
	Q_OBJECT

public:
	Record(QWidget *parent = 0);
	~Record();

public slots:
	void onRadio1(bool b);
	void onRadio2(bool b);
	void onclicked(bool b);

private:
	bool radiostate1;
	QRadioButton *prad1;
	QRadioButton *prad2;
	bool radiostate2;

private:
	Ui::RecordClass ui;
};

#endif // RECORD_H
