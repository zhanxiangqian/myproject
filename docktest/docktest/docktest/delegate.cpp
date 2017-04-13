
#include <QComboBox>
#include <QLineEdit>
#include <QString>
#include <QDebug>
#include <QStyleOptionButton>
#include "delegate.h"
#include <QString>
int g_num = 0;
Delegate::Delegate(QObject *parent)
:QStyledItemDelegate(parent)
{
}

Delegate::~Delegate()
{

}
#include <QStyle>
QWidget *Delegate::createEditor(QWidget * parent, const QStyleOptionViewItem & option, const QModelIndex & index) const
{ 
	int sun = QStyle::State_Sunken;
	QVariant a (sun);
	int con = a.toInt();
	qDebug() << "Delegate::createEditor"<<g_num;
// 	if (index.column() == 1)
// 	{
// 		//caseNames = GLOBAL_CM.getCaseName()
// 			//#print 'createEditor', caseNames
// 		QComboBox* comb = (QComboBox*)parent;
// 		comb->addItems(QStringList("caseNames"));
// 		return comb;
// 	}
// 	else
// 	{
// 		return (QLineEdit*)parent;
// 	}
    QLineEdit* pl_e = new QLineEdit(parent);
	QString str("DelegateCombobox");
	return pl_e;
}

void Delegate::setEditorData(QWidget * editor, const QModelIndex & index) const
{
//#set val
// 	QString text = "abc";
// 	QStringList l = text.split('##');
// 	if (index.column() == 1)
// 	{
// 		QComboBox* control = (QComboBox*)editor;
// 		//caseNames = GLOBAL_CM.getCaseName()
// 		if (l[index.column()] != "" )
// 		{
// 		//	control->setCurrentIndex(caseNames.index(l[index.column()]));
// 			control->setCurrentIndex(1);
// 		}
// 		
// 	}
// 	else
// 	{
// 		QLineEdit* control = (QLineEdit*)editor;
// 		//control->setText(l[index.column()]);
// 		control->setText("xx");
//  	}
	
}
void Delegate::setdata(int idx)
{
	QString name = sender()->objectName();
	int a = idx;
}
void Delegate::setModelData(QWidget * editor, QAbstractItemModel * model, const QModelIndex & index) const
{
 	QString ori_text = "abc";
// 	QStringList l = ori_text.split('##');
// 	if (index.column() == 1)
// 	{
// 		QComboBox* control = (QComboBox*)editor;
// 		l[index.column()] = QString(control->currentText());
// 	}
// 	else
// 	{
// 		QLineEdit* control = (QLineEdit*)editor;
// 		l[index.column()] = QString(control->text());
// 	}
// 	
// 	QString	s = '##';
	//s = s.join(l);

}

ButtonDelegate::ButtonDelegate(QObject *parent):QStyledItemDelegate(parent)
{

}
ButtonDelegate::~ButtonDelegate()
{

}
void ButtonDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index)const
{
	QStyleOptionButton* button = m_btns.value(index);
	if (!button) {
		button = new QStyleOptionButton();
		button->rect = option.rect.adjusted(8, 2, -2, -2);
		button->text = "X";
		button->state |= QStyle::State_Enabled;

		(const_cast<ButtonDelegate *>(this))->m_btns.insert(index, button);
	}
	painter->save();
	qDebug()<<"ButtonDelegate ##################    paint ";
	if (option.state & QStyle::State_Selected) {
		painter->fillRect(option.rect, option.palette.highlight());

	}
	QApplication::style()->drawControl(QStyle::CE_PushButton, button, painter);

	painter->restore();
//	qobject_cast<QWidget*>(this->parent())->style()->drawControl(QStyle::CE_PushButton, button, painter);





// 	QStylePainter p(qobject_cast<QWidget*>(this->parent()));
// 	QStyleOptionButton *op = new QStyleOptionButton();
// 	op->rect = option.rect.adjusted(4, 4, -4, -4);
// 	op->text = "X";
// 
//  	p.drawControl(QStyle::CE_PushButton, *op);

}

bool ButtonDelegate::editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index)
{
	if (event->type() == QEvent::MouseButtonPress) {

		QMouseEvent* e =(QMouseEvent*)event;

		if (option.rect.adjusted(8, 2, -2, -2).contains(e->x(), e->y()) && m_btns.contains(index)) {
			m_btns.value(index)->state |= QStyle::State_Sunken;
		}
		return true;
	}
	if (event->type() == QEvent::MouseButtonRelease) {
		QMouseEvent* e =(QMouseEvent*)event;

		if (option.rect.adjusted(8, 2, -2, -2).contains(e->x(), e->y()) && m_btns.contains(index)) {
			m_btns.value(index)->state &= (~QStyle::State_Sunken);

		}
		return true;

	}
	else
	{
		return QStyledItemDelegate::editorEvent(event,model, option, index);
	}
}

QWidget * ButtonDelegate::createEditor(QWidget * parent, const QStyleOptionViewItem & option, const QModelIndex & index) const
{
	return QStyledItemDelegate::createEditor(parent,option, index);
}

DelegateCombobox::DelegateCombobox(QWidget *parent/* = 0*/):QComboBox(parent)
{
	int a = 1;
}

DelegateCombobox::~DelegateCombobox()
{
	//disconnect();
	//QComboBox::~QComboBox();
}


Parent::Parent(int a)
{
	parentnum = new int(a);

}

Parent::~Parent()
{
	delete parentnum;

}

Child::Child(int a):Parent(a)
{
	childnum = new int(a);
  //Parent::Parent(a);
}

Child::~Child()
{
	delete childnum;
}