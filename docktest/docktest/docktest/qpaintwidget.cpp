#include "qpaintwidget.h"
#include <QDebug>
QPaintWidget::QPaintWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

QPaintWidget::~QPaintWidget()
{

}

void QPaintWidget::paintEvent(QPaintEvent * event)
{
	qDebug()<<" QPaintWidget  ### paintEvent ";
	QWidget::paintEvent(event);
}