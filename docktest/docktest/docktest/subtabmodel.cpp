#include "subtabmodel.h"
#include <QColor>
#include <QBrush>
#include <QPixmap>
#include <QPainter>
SubTabModel::SubTabModel(QObject *parent)
	: QAbstractTableModel(parent)
{

}

SubTabModel::~SubTabModel()
{

}

int SubTabModel::rowCount(const QModelIndex &parent /* = QModelIndex() */)const
{
	return 4;
}

int SubTabModel::columnCount(const QModelIndex & parent /* = QModelIndex() */)const
{
	return 4;
}
Qt::ItemFlags SubTabModel:: flags(const QModelIndex &index) const
{
	return Qt::ItemIsUserCheckable|Qt::ItemIsEnabled |Qt::ItemIsEditable;
}

QVariant SubTabModel::data(const QModelIndex &index, int role /* = Qt::DisplayRole */ )const
{
	QVariant res = QVariant();
	if (role == Qt::DisplayRole)
	{
		//res = 5;
	}
	if (role == Qt::ForegroundRole)
	{
		res = QBrush(QColor(255, 0, 0, 255));
	}
	if (role == Qt::ForegroundRole)
	{
		res = QBrush(QColor(255, 0, 0, 255));
	}

	if (role == Qt::CheckStateRole)
	{
		res = Qt::Unchecked;
	}
	
	if (role == Qt::DecorationRole)
	{
		QPixmap *p = new QPixmap(32,32);
		p->fill();
		QRect rct = p->rect();
		QPainter *paint = new QPainter(p);
		paint->drawText(rct, Qt::AlignCenter, tr("Qt:"));

 		res = QVariant(*p);
//		res = QVariant("Pressure");
	}
	return  res;
	//return  NULL;
}