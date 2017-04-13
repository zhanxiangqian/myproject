#ifndef MATERIALVIEWER_H_
#define MATERIALVIEWER_H_

#include <QDialog>
#include "ui_materialviewer.h"
#include "snchart.h"
#include <QDomElement>
#include <QDomDocument>
namespace Ui {
	class Dialog;
}
class  MaterialViewer : public QDialog
{
	Q_OBJECT
public:
	MaterialViewer(QWidget *parent = 0);
	~MaterialViewer();

public slots:
	void onPathClicked();
	void onApplyButtonClicked();
	void omCurrentTextChanged(const QString & text);
	void onItemClicked(QListWidgetItem *item);
	void updateWidgetsByXml(QDomElement& xml, QVBoxLayout *layout, bool clear);
	void updateByEachItem(QDomElement& xml, QVBoxLayout *layout);
	void setFile(QString filePath);
	void setChartFile(QString filename);
private:
	QFrame *rbFrame;
	QFrame *snchartFrame;
	QFrame *matFrame;
	QFrame *matFrame2;
	QListWidget *listWidget;
	SNChart *snChart;
	QVBoxLayout *matFrame2Layout;

	QList<QWidget*> widgetsList;
	QDomDocument domDoc;
	QLineEdit *pathEdit;
};

#endif