#ifndef SUBTABMODEL_H
#define SUBTABMODEL_H

#include <QAbstractTableModel>
#include <QVariant>
class SubTabModel : public QAbstractTableModel
{
	Q_OBJECT

public:
	Qt::ItemFlags flags(const QModelIndex &index) const Q_DECL_OVERRIDE;
	SubTabModel(QObject *parent);
	int rowCount(const QModelIndex &parent  = QModelIndex()) const;
	int columnCount(const QModelIndex & parent = QModelIndex()) const;
	QVariant data(const QModelIndex &index, int role  = Qt::DisplayRole )const;
	~SubTabModel();

private:
	
};

#endif // SUBTABMODEL_H
