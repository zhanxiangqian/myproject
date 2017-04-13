#ifndef TEXT_H
#define TEXT_H

#include <QtWidgets/QMainWindow>
#include "ui_text.h"

class text : public QMainWindow
{
	Q_OBJECT

public:
	text(QWidget *parent = 0);
	~text();

private:
	Ui::textClass ui;
};

#endif // TEXT_H
