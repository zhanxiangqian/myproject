#include "desktop.h"
#include <QStandardItemModel>
#include <QTreeView>
#include "slottest.h"
#include "subtabmodel.h"
DeskTop::DeskTop(QWidget *parent)
	: QMainWindow(parent)
{
	m_pdata = new ModelData();
	ui.setupUi(this);
	initUI();
	connect(ui.comboBox_2, SIGNAL(currentIndexChanged(QString)), &m_pdata->m_type, SLOT(set_model_type(QString)));
	connect(&m_pdata->m_type, SIGNAL(model_change(Model_Type)), this, SLOT(reset(Model_Type)));
	connect(m_pdata, SIGNAL(data_change()), this, SLOT(updateUI()));
}

DeskTop::~DeskTop()
{

}

void DeskTop::reset(Model_Type b)
{
	m_pdata->reset();
}
#include "customcombobox.h"
#include "delegate.h"
void DeskTop::initUI()
{
	ui.comboBox_2->clear();
	CustomComboBox *pbox = new CustomComboBox();
	qobject_cast<QWidget*>(ui.comboBox_2->parent())->layout()->addWidget(pbox);
	SlotTest *pt = new SlotTest();
	pt->place(ui.verticalLayout);
	SubTabModel *psub = new SubTabModel(this);
	ui.tableView->setModel(psub);

	Delegate *deleg = new Delegate(ui.tableView);
	ButtonDelegate *btndeleg = new ButtonDelegate(ui.tableView);
	ui.tableView->setItemDelegate(deleg);
	ui.tableView->setItemDelegateForColumn(3,btndeleg);

    ui.tableView->setModel(psub);
	ui.radioButton_3->setCheckable(false);
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(setradiobtn()));

	ui.lineEdit->setValidator(new QIntValidator(0, 1000, this)); //0, 1000为输入的数字值范围
	connect(ui.lineEdit,SIGNAL(textChanged(const QString&)),this,SLOT(onLineEditChanged(const QString&)));

	CustomComboBox *pbox0 = new CustomComboBox();
	pbox0->addItem("a");
	pbox0->addItem("b");
	ui.tableWidget_5->setCellWidget(0,0,pbox0);
	CustomComboBox *pbox1 = new CustomComboBox();
	pbox1->addItem("a");
	pbox1->addItem("b");
	ui.tableWidget_5->setCellWidget(0,1,pbox1);

	QPushButton *pbtn = new QPushButton();
	ui.tableWidget_5->setCellWidget(1,1,pbtn);
	//ui.comboBox_2->insertItems(0, m_pdata->m_type.get_name_list());
}

void DeskTop::onLineEditChanged(const QString & text)
{
	int a = 1;
	return;
}

void DeskTop::setradiobtn()
{
	bool b = ui.radioButton_3->isCheckable();
	ui.radioButton_3->setChecked(false);
}

void DeskTop::updateUI()
{

}
