#ifndef DOCKTEST_H
#define DOCKTEST_H

#include <QtWidgets/QMainWindow>
#include "ui_docktest.h"

class docktest : public QMainWindow
{
	Q_OBJECT

public:
	docktest(QWidget *parent = 0);
	~docktest();

private:
	Ui::docktestClass ui;
};

#endif // DOCKTEST_H
