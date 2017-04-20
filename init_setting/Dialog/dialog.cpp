#include "dialog.h"
#include <QFile>
#include <QDomDocument>
#include <QMessageBox>
#include <QTextStream>

Dialog::Dialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

Dialog::~Dialog()
{

}

Assign_Material_Dlg::Assign_Material_Dlg(QWidget *parent)
: QDialog(parent)
{
	ui.setupUi(this);
	read_material();
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(onclose()));
	connect(ui.pushButton_Save, SIGNAL(clicked()), this, SLOT(on_save()));
}

Assign_Material_Dlg::~Assign_Material_Dlg()
{
}

Atmosphere_Dlg::Atmosphere_Dlg(int indx, QWidget *parent)
: QDialog(parent)
{
	ui.setupUi(this);
	ui.tabWidget->setCurrentIndex(indx);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(onclose()));
	connect(ui.pushButton_Exec, SIGNAL(clicked()), this, SLOT(on_exec()));

}

Atmosphere_Dlg::~Atmosphere_Dlg()
{

}

Check_Dlg::Check_Dlg(QWidget *parent)
: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(onclose()));

}

Check_Dlg::~Check_Dlg()
{

}

Import_Heat_Source_Dlg::Import_Heat_Source_Dlg(QWidget *parent)
: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(onclose()));
	connect(ui.pushButton_Ok, SIGNAL(clicked()), this, SLOT(onclose()));

}

Import_Heat_Source_Dlg::~Import_Heat_Source_Dlg()
{

}

Set_Dlg::Set_Dlg(QWidget *parent)
: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(onclose()));

}

Set_Dlg::~Set_Dlg()
{

}


void Assign_Material_Dlg::onclose()
{
	close();
}


void Atmosphere_Dlg::onclose()
{
	close();
}


void Check_Dlg::onclose()
{
	close();
}


void Import_Heat_Source_Dlg::onclose()
{
	close();
}


void Set_Dlg::onclose()
{
	close();
}


void Assign_Material_Dlg::read_material()
{
	QString path = QCoreApplication::applicationDirPath() + "/materials.xml";
	QDomDocument doc;
	QFile file(path);
	file.open(QIODevice::ReadOnly);
	doc.setContent(file.readAll());
	file.close();

	QDomElement root = doc.documentElement();//读取根节点

	if (root.childNodes().count() < 1)
	{
		QMessageBox::information(this, "info", "No Material");
		//exit(0);
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
	ui.listWidget->addItems(namelist);
}

Eidt_Material_Dlg::Eidt_Material_Dlg(QWidget *parent)
: QDialog(parent)
{
	ui.setupUi(this);
	read_material();
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(onclose()));
	connect(ui.listWidget, SIGNAL(currentTextChanged(const QString &)), this, SLOT(onmaterial_changed(const QString &)));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(onsave()));
}

Eidt_Material_Dlg::~Eidt_Material_Dlg()
{

}

void Eidt_Material_Dlg::onclose()
{
	close();
}


void Eidt_Material_Dlg::read_material()
{
	QString path = QCoreApplication::applicationDirPath() + "/materials.xml";
	QDomDocument doc;
	QFile file(path);
	file.open(QIODevice::ReadOnly);
	doc.setContent(file.readAll());
	file.close();

	QDomElement root = doc.documentElement();//读取根节点

	if (root.childNodes().count() < 1)
	{
		QMessageBox::information(this, "info", "No Material");
		//exit(0);
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
	ui.listWidget->addItems(namelist);
}

void Eidt_Material_Dlg::onsave()
{
	QString path = QCoreApplication::applicationDirPath() + "/materials.xml";
	QDomDocument doc;
	QDomProcessingInstruction instruction = doc.createProcessingInstruction("xml", "version=\"1.0\" encoding=\"UTF-8\"");//暂时不是很明确是做什么用的
	doc.appendChild(instruction);

	QFile file(path);
	file.open(QIODevice::ReadOnly);
	doc.setContent(file.readAll());
	file.close();

	QDomElement root = doc.documentElement();//读取根节点
	if (root.isNull())
	{
		root = doc.createElement("My_Material");//首次创建根节点
		doc.appendChild(root);
	}

	QDomNode node = root.firstChild();//读取第一个子节点  
	while (!node.isNull())
	{
		QString tagName = node.toElement().tagName();
		if (tagName.compare(ui.listWidget->currentItem()->text()) == 0) //若已经存在同名材料则覆盖
		{
			node.toElement().setAttribute("Reflectivity", ui.lineEdit_Ref->text());
			node.toElement().setAttribute("Thermal_Conductivity", ui.lineEdit_TC->text());
			node.toElement().setAttribute("Emissivity", ui.lineEdit_Emi->text());
			node.toElement().setAttribute("Density", ui.lineEdit_Den->text());
			node.toElement().setAttribute("Specific_Heat", ui.lineEdit_SH->text());
		}
		node = node.nextSibling();//读取下一个兄弟节点  
	}

	file.open(QIODevice::WriteOnly | QIODevice::Truncate);
	QTextStream text(&file);
	text.setCodec("UTF-8");
	doc.save(text, 2, QDomNode::EncodingFromTextStream);
	file.close();

}

void Eidt_Material_Dlg::onmaterial_changed(const QString& text)
{
	QString path = QCoreApplication::applicationDirPath() + "/materials.xml";

	QDomDocument doc;
	QFile file(path);
	file.open(QIODevice::ReadOnly);
	doc.setContent(file.readAll());
	file.close();

	QDomElement root = doc.documentElement();//读取根节点
	QDomNode node = root.firstChild();//读取第一个子节点  
	while (!node.isNull())
	{
		QString name = node.toElement().tagName();
		if (text == name)
		{
			QString tmp;
			tmp = node.toElement().attribute("Reflectivity");
			ui.lineEdit_Ref->setText(tmp);

			tmp = node.toElement().attribute("Thermal_Conductivity");
			ui.lineEdit_TC->setText(tmp);

			tmp = node.toElement().attribute("Emissivity");
			ui.lineEdit_Emi->setText(tmp);

			tmp = node.toElement().attribute("Density");
			ui.lineEdit_Den->setText(tmp);

			tmp = node.toElement().attribute("Specific_Heat");
			ui.lineEdit_SH->setText(tmp);
			break;
		}
		node = node.nextSibling();//读取下一个兄弟节点  
	}

}

void Import_Heat_Source_Dlg::on_Ok()
{
	close();
}


void Assign_Material_Dlg::on_save()
{
	close();
}


int Atmosphere_Dlg::on_exec()
{
	return 0;
}
