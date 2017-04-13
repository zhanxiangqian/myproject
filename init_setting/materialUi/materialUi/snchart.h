#ifndef SNCHART_H_
#define SNCHART_H_

#include <QGraphicsView>
#include <QGraphicsItem>
#include <QLineSeries>
#include <QtCharts/QChart>
using namespace QtCharts;

class ChartToolTip :public QGraphicsItem
{
public:
	ChartToolTip(QChart *parent);
	QRectF boundingRect() const;
	void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

private:
	QChart *m_chart;
};

class  SNChart : public QGraphicsView
{
Q_OBJECT
public:
	SNChart(QWidget *parent = 0);
	~SNChart();

	void resizeEvent(QResizeEvent *event);
 
	void addSeries(QLineSeries* series);
	void setXRange(float min, float max);
	void setYRange(float min, float max);
	void updateChart();
private:
	QChart *m_chart;

};

#endif
