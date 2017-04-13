#ifndef CUSTOMCOMBOBOX_H
#define CUSTOMCOMBOBOX_H

#include <QComboBox>
#include "ui_customcombobox.h"
#include <QTreeView>

class CustomComboBox : public QComboBox
{
	Q_OBJECT

public:
	CustomComboBox(QWidget *parent = 0);
	~CustomComboBox();

private:
	Ui::CustomComboBox ui;
public:
	virtual void showPopup(void);
private:
	QTreeView *m_pview;

public slots:
	void onindexchanged(QString index);
};

#endif // CUSTOMCOMBOBOX_H
