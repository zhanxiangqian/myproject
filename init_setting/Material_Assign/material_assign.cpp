#include "material_assign.h"
#include <QVariant>
#include <QStringList>
#include <QDomDocument>
#include <QFile>
#include <QMessageBox>

Material_Assign::Material_Assign(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.spinBox->setMinimum(1);
	ui.spinBox->setValue(1);

	ui.comboBox->addItem("1");
	connect(ui.spinBox, SIGNAL(valueChanged(int)), this, SLOT(onvalue_changed(int)));
	read_material();
}

Material_Assign::~Material_Assign()
{

}


void Material_Assign::onvalue_changed(int val)
{
	QStringList numlist;
	QString num;
	QVariant val_num;
	for (int i = 0; i < val; i++)
	{
		val_num = i+1;
		num = val_num.toString();
		numlist.append(num);
	}
	int indx = ui.comboBox->currentIndex();
	ui.comboBox->clear();
	ui.comboBox->addItems(numlist);
	if (indx+1 < val)
	{
		ui.comboBox->setCurrentIndex(indx);
	}
	else
	{
		ui.comboBox->setCurrentIndex(0);
	}

}


void Material_Assign::read_material()
{
	QString path = QCoreApplication::applicationDirPath() + "/materials.xml";
	ui.pushButton->setText(tr("Save"));
	QDomDocument doc;
	QFile file(path);
	file.open(QIODevice::ReadOnly);
	doc.setContent(file.readAll());
	file.close();

	QDomElement root = doc.documentElement();//读取根节点

	if (root.childNodes().count() < 1)
	{
		QMessageBox::information(this, "info", "No Material");
		exit(0);
		//return;
	}

	QDomNode node = root.firstChild();//读取第一个子节点  
	QStringList namelist;
	bool is_existed = false;
	while (!node.isNull())
	{
		QString name = node.toElement().tagName();
		namelist.append(name);
		is_existed = true;
		QString tagName = node.toElement().tagName();
		node = node.nextSibling();//读取下一个兄弟节点  
	}
	//ui.comboBox = new QComboBox(this);
	ui.comboBox_2->addItems(namelist);
	this->setWindowTitle("Assign Material");
}
