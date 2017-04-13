#include "customcombobox.h"
#include <QStandardItemModel>
CustomComboBox::CustomComboBox(QWidget *parent)
	: QComboBox(parent)
{
	ui.setupUi(this);
	m_pview = new QTreeView(this);

	QStandardItemModel* pmodel = new QStandardItemModel();
	setModel(pmodel);
	//pview->setItemsExpandable(false);
	QStandardItem* pitermroot = new QStandardItem("root");
	QStandardItem* piterroot1 = new QStandardItem("root1");
	QStandardItem* piterm1 = new QStandardItem("child1");
	QStandardItem* piterm2 = new QStandardItem("child2");

	setRootModelIndex(QModelIndex());
	pitermroot->appendRow(piterm1);
	pmodel->appendRow(pitermroot);
	pmodel->appendRow(piterroot1);
	pitermroot->appendRow(piterm2);

	setView(m_pview);

	m_pview->setHeaderHidden(true);
	m_pview->setItemsExpandable(false);
	m_pview->setRootIsDecorated(false);
	connect(this,SIGNAL(currentIndexChanged(QString)),this,SLOT(onindexchanged(QString)));

}

CustomComboBox::~CustomComboBox()
{

}


void CustomComboBox::showPopup(void)
{
	setRootModelIndex(QModelIndex());
	qobject_cast<QTreeView*>(view())->expandAll();
	QComboBox::showPopup();
}

void CustomComboBox::onindexchanged(QString index)
{
	QString a= index;
	return;
}