#include "slottest.h"
#include <QComboBox>
#include <QMessageBox>
SlotTest::SlotTest(QObject *parent)
	: QObject(parent)
{
	pcombobox = new QComboBox();
	pcombobox->addItem("a");
	pcombobox->addItem("b");
	pcombobox->addItem("c");
	connect(pcombobox,SIGNAL(currentIndexChanged(int)),this,SLOT(testslot(int)));
}

SlotTest::~SlotTest()
{

}

void SlotTest::testslot(int index)
{
	QMessageBox::about(NULL,"a","a");
}
void SlotTest::place(QVBoxLayout*p)
{
	p->addWidget(pcombobox);
}
