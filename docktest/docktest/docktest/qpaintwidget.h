#ifndef QPAINTWIDGET_H
#define QPAINTWIDGET_H

#include <QWidget>
#include "ui_qpaintwidget.h"

class QPaintWidget : public QWidget
{
	Q_OBJECT

public:
	QPaintWidget(QWidget *parent = 0);
	~QPaintWidget();
protected slots:
void paintEvent(QPaintEvent * event);
private:
	Ui::QPaintWidget ui;
};

#endif // QPAINTWIDGET_H
