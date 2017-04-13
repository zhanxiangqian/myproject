

#include "filematerialmodel.h"


FileMaterialModel::FileMaterialModel(QString dirPath, QObject *parent) : QFileSystemModel(parent)
{

	rootPath = dirPath;
	//this->setRootPath(rootPath);

}

FileMaterialModel::FileMaterialModel(QObject *parent) : QFileSystemModel(parent)
{

}

FileMaterialModel::~FileMaterialModel()
{

}

QVariant FileMaterialModel::data(const QModelIndex &index, int role )const
{
	QVariant res;
	if (role == Qt::DisplayRole)
	{
		res = QFileSystemModel::data(index, Qt::DisplayRole);
		if (res.toString().contains(".jpg"))
		{
			res = res.toString().remove(".jpg");
		}
	}
	else if (role == Qt::DecorationRole)
	{
		res = QFileSystemModel::data(index, Qt::DisplayRole);
		if (res.toString().contains(".jpg"))
		{
			res = QVariant();
		}
		else
		{
			res = QFileSystemModel::data(index, role);
		}
	}
	else
	{
		res = QFileSystemModel::data(index, role);
	}
	return res;
 }


int FileMaterialModel::columnCount(const QModelIndex &parent) const
{
	return 1;
}

