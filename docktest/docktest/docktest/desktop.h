#ifndef DESKTOP_H
#define DESKTOP_H

#include <QtWidgets/QMainWindow>
#include "ui_test.h"
#include "modeldata.h"
class DeskTop:public QMainWindow
{
	Q_OBJECT

public:
	DeskTop(QWidget *parent = 0);
	~DeskTop();
	ModelData* m_pdata;
private:
	Ui::MainWindow ui;
	void initUI();
public slots:
	void setradiobtn();
	void onLineEditChanged(const QString & text);
	void reset(Model_Type b);
	void updateUI();
};

#endif // DOCKTEST_H
