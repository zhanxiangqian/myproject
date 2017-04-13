#ifndef SLOTTEST_H
#define SLOTTEST_H

#include <QObject>
#include <QVBoxLayout>
#include <QComboBox>
class SlotTest : public QObject
{
	Q_OBJECT

public:
	SlotTest(QObject *parent = 0);
	~SlotTest();
	QComboBox* pcombobox;
private:
public slots:
	void testslot(int);
public:
	void place(QVBoxLayout*);
};

#endif // SLOTTEST_H
