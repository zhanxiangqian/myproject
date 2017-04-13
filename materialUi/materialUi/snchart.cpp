
#include <QLineSeries>
#include <QScatterSeries>
#include <QLogValueAxis>
#include <QValueAxis>
#include <QDebug>

#include "snchart.h"


ChartToolTip::ChartToolTip(QChart *chart) :QGraphicsItem(chart),
m_chart(chart)
{

}

void ChartToolTip::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
	Q_UNUSED(option)
	Q_UNUSED(widget)

	QRect rect(10, 10, 50, 50);
	QPainterPath path;
	path.addRoundedRect(rect, 5, 5);

	painter->setBrush(QColor(255, 255, 0));
	painter->drawPath(path);
	painter->drawText(rect, "1212xsx");
}

QRectF ChartToolTip::boundingRect() const
{
	QRect rect(10, 10, 50, 50);

	return rect;
}


SNChart::SNChart(QWidget *parent)
	:QGraphicsView(new QGraphicsScene, parent), m_chart(0)
{
	m_chart = new QChart();
	m_chart->setMinimumSize(400, 200);

	m_chart->legend()->hide();
	//m_chart->setTitle("SN Curve");
	

	QValueAxis *axisX = new QValueAxis;
	axisX->setLabelFormat("%.2e");
	axisX->setTitleText("Frequency");

	QValueAxis *axisY = new QValueAxis;
	axisY->setLabelFormat("%.2e");
	axisY->setTitleText("");

	// 	QLogValueAxis *axisY = new QLogValueAxis;
	// 	axisY->setLabelFormat("%e");
	// 	axisY->setTitleText("");
	//  	axisY->setBase(10);
	// 	axisY->setRange(100, 110);

	m_chart->addAxis(axisX, Qt::AlignBottom);//, Qt::AlignBottom
	m_chart->addAxis(axisY, Qt::AlignLeft);//, Qt::AlignLeft

	setRenderHint(QPainter::Antialiasing);
	scene()->addItem(m_chart);


}

SNChart::~SNChart()
{

}


void SNChart::resizeEvent(QResizeEvent *event)
{
		m_chart->resize(this->rect().width() - 10, this->rect().height() - 10);

 }

void SNChart::setXRange(float min,float max)
{
	m_chart->axisX()->setRange(min, max);
}

void SNChart::setYRange(float min, float max)
{
	m_chart->axisY()->setRange(min, max);
}

void SNChart::addSeries(QLineSeries* series)
{
	m_chart->removeAllSeries();
	m_chart->addSeries(series);

	series->attachAxis(m_chart->axisX());
	series->attachAxis(m_chart->axisY());
}

void SNChart::updateChart()
{
	QLineSeries *s1 = new QLineSeries();


	m_chart->addSeries(s1);

	QValueAxis *axisX = new QValueAxis;
	axisX->setLabelFormat("%.2e");
	axisX->setTitleText("Frequency");

	QValueAxis *axisY = new QValueAxis;
	axisY->setLabelFormat("%.2f");
	axisY->setTitleText("");

// 	QLogValueAxis *axisY = new QLogValueAxis;
// 	axisY->setLabelFormat("%e");
// 	axisY->setTitleText("");
//  	axisY->setBase(10);
// 	axisY->setRange(100, 110);

	m_chart->addAxis(axisX, Qt::AlignBottom);//, Qt::AlignBottom
	m_chart->addAxis(axisY, Qt::AlignLeft);//, Qt::AlignLeft

	s1->attachAxis(axisX);
	s1->attachAxis(axisY);

// 	QGraphicsSimpleTextItem *text = new QGraphicsSimpleTextItem(m_chart);
// 	text->setText("m=3.0");
// 	text->setPos(20, 20);
// 	text->setZValue(1);
	//scene()->addItem(text);

// 	ChartToolTip *tip = new ChartToolTip(m_chart);
// 	tip->setZValue(1);
// 	tip->setPos(50, 50);
	//scene()->addItem(tip);
	

}