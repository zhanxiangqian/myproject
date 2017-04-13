#ifndef DELEGATE_H_
#define DELEGATE_H_

#include <QObject>
#include <QStyledItemDelegate>
#include <QComboBox>
class Delegate;
class  DelegateCombobox:public QComboBox
{
	Q_OBJECT
public:
	DelegateCombobox(QWidget *parent);
	~DelegateCombobox();
};

class  Delegate : public QStyledItemDelegate
{
	Q_OBJECT
public:
	Delegate(QObject *parent = 0);
	~Delegate();

public:
	virtual QWidget * createEditor(QWidget * parent, const QStyleOptionViewItem & option, const QModelIndex & index) const;
	virtual void setEditorData(QWidget * editor, const QModelIndex & index) const;
	virtual void setModelData(QWidget * editor, QAbstractItemModel * model, const QModelIndex & index) const;
public slots:
	void setdata(int idx);
private:
	QComboBox* m_pcomb;
};

#include <QApplication>
#include <QMouseEvent>
#include <QDialog>
#include <QPainter>
#include <QStyleOption>
#include <QStylePainter>

class ButtonDelegate : public QStyledItemDelegate
{
	Q_OBJECT
public:
	ButtonDelegate(QObject *parent );
	~ButtonDelegate();

	void paint(QPainter *painter,
		const QStyleOptionViewItem &option, const QModelIndex &index) const Q_DECL_OVERRIDE;
	bool editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index);
	virtual QWidget * createEditor(QWidget * parent, const QStyleOptionViewItem & option, const QModelIndex & index) const;

	QMap<QModelIndex, QStyleOptionButton*> m_btns;
};

class Parent
{
public:
	Parent(int a);
	virtual ~Parent();
	int *parentnum;

};

class Child : public Parent
{
public:
	Child(int a);
	~Child();
	int *childnum;
};
#endif