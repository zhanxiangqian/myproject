#include "material_edit.h"
#include <QSettings>
#include <QDoubleValidator>
#include <QRegExpValidator>
#include <QDomDocument>
#include <QFile>
#include <QTextStream>
#include <QComboBox>
#include <QGroupBox>
#include <QMessageBox>


#define  MAX 1.0e10
#define  MIN .0

#define  VALID_COLOR "white"
#define  INVALID_COLOR "red"
Material_Edit::Material_Edit(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	m_path = QCoreApplication::applicationDirPath() + "/materials.xml";
	ui.lineEdit_Name->setText("Undefined");
	QRegExp a = QRegExp("^\\w+$");
	QRegExpValidator *Reg = new QRegExpValidator(a);
	QDoubleValidator *dou_vld = new QDoubleValidator(this);
	dou_vld->setRange(MIN, MAX, 5);
	//dou_vld->setNotation(QDoubleValidator::StandardNotation);
	ui.lineEdit_Name->setValidator(Reg);
	ui.lineEdit_Ref->setValidator(dou_vld);
	ui.lineEdit_TC->setValidator(dou_vld);
	ui.lineEdit_Emi->setValidator(dou_vld);
	ui.lineEdit_Den->setValidator(dou_vld);
	ui.lineEdit_SH->setValidator(dou_vld);

	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(onoprate()));
	connect(ui.lineEdit_Name, SIGNAL(textChanged(const QString&)), this, SLOT(onvalidate(const QString&)));
	connect(ui.lineEdit_Ref, SIGNAL(textChanged(const QString&)), this, SLOT(onvalidate(const QString&)));
	connect(ui.lineEdit_TC, SIGNAL(textChanged(const QString&)), this, SLOT(onvalidate(const QString&)));
	connect(ui.lineEdit_Emi, SIGNAL(textChanged(const QString&)), this, SLOT(onvalidate(const QString&)));
	connect(ui.lineEdit_Den, SIGNAL(textChanged(const QString&)), this, SLOT(onvalidate(const QString&)));
	connect(ui.lineEdit_SH, SIGNAL(textChanged(const QString&)), this, SLOT(onvalidate(const QString&)));

}


void Material_Edit::init()//读取材料，用于edit
{
	ui.pushButton->setText(tr("Save"));
	QDomDocument doc;
	QFile file(m_path);
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
	ui.comboBox->addItems(namelist);
	ui.gridLayout->removeWidget(ui.lineEdit_Name);
	ui.gridLayout->addWidget(ui.comboBox, 0, 1, 1, 2);
// 	QGridLayout *lay = qobject_cast<QGridLayout *>(qobject_cast<QGroupBox*>(ui.lineEdit_Name->parent())->layout());
//	QGridLayout *lay = qobject_cast<QGridLayout *>(ui.lineEdit_Name->layout());
	ui.lineEdit_Name->hide();
// 	lay->removeWidget(ui.lineEdit_Name);
	//lay->addWidget(ui.comboBox, 0, 1);
	connect(ui.pushButton_del, SIGNAL(clicked()), this, SLOT(ondelete()));
	connect(ui.comboBox, SIGNAL(currentIndexChanged(const QString &)), this, SLOT(onmaterial_changed(const QString &)));
	this->setWindowTitle("Edit Material");

}



void Material_Edit::onmaterial_changed(const QString& text)
{
	QDomDocument doc;
	QFile file(m_path);
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

Material_Edit::~Material_Edit()
{

}


void Material_Edit::onoprate()
{
	QDomDocument doc;
	QDomProcessingInstruction instruction = doc.createProcessingInstruction("xml", "version=\"1.0\" encoding=\"UTF-8\"");//暂时不是很明确是做什么用的
	doc.appendChild(instruction);

	QFile file(m_path);
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
	bool is_existed = false;
	while (!node.isNull())
	{
		QString tagName = node.toElement().tagName();
		if (tagName.compare(ui.comboBox->currentText()) == 0) //若已经存在同名材料则覆盖
		{
			node.toElement().setAttribute("Reflectivity", ui.lineEdit_Ref->text());
			node.toElement().setAttribute("Thermal_Conductivity", ui.lineEdit_TC->text());
			node.toElement().setAttribute("Emissivity", ui.lineEdit_Emi->text());
			node.toElement().setAttribute("Density", ui.lineEdit_Den->text());
			node.toElement().setAttribute("Specific_Heat", ui.lineEdit_SH->text());
			is_existed = true;
		}
		node = node.nextSibling();//读取下一个兄弟节点  
	}
	if (!is_existed)//如果材料不存在则插入到第一个节点的位置
	{
		QDomElement name_elem = doc.createElement(ui.lineEdit_Name->text());
		root.appendChild(name_elem);
		name_elem.setAttribute("Reflectivity", ui.lineEdit_Ref->text());
		name_elem.setAttribute("Thermal_Conductivity", ui.lineEdit_TC->text());
		name_elem.setAttribute("Emissivity", ui.lineEdit_Emi->text());
		name_elem.setAttribute("Density", ui.lineEdit_Den->text());
		name_elem.setAttribute("Specific_Heat", ui.lineEdit_SH->text());
		QDomText t = doc.createTextNode(ui.lineEdit_Name->text());//创建一个文本节点（没啥用）
		name_elem.appendChild(t);
	}

	file.open(QIODevice::WriteOnly | QIODevice::Truncate);
	QTextStream text(&file);
	text.setCodec("UTF-8");
	doc.save(text, 2, QDomNode::EncodingFromTextStream);
	file.close();

}

void Material_Edit::ondelete()
{
	QDomDocument doc;
	QDomProcessingInstruction instruction = doc.createProcessingInstruction("xml", "version=\"1.0\" encoding=\"UTF-8\"");//暂时不是很明确是做什么用的
	doc.appendChild(instruction);

	QFile file(m_path);
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
	if (root.childNodes().count() < 2)
	{
		QMessageBox::information(this, "info", "Can not delete only one Material");
		return;
	}

	while (!node.isNull())
	{
		QString tagName = node.toElement().tagName();
		if (tagName.compare(ui.comboBox->currentText()) == 0) //若已经存在同名材料则覆盖
		{
			root.removeChild(node);
			ui.comboBox->removeItem(ui.comboBox->currentIndex());
			ui.comboBox->setCurrentText(ui.comboBox->itemText(0));
			break;
		}
		node = node.nextSibling();//读取下一个兄弟节点  
	}

	file.open(QIODevice::WriteOnly | QIODevice::Truncate);
	QTextStream text(&file);
	text.setCodec("UTF-8");
	doc.save(text, 2, QDomNode::EncodingFromTextStream);
	file.close();
}


void Material_Edit::onvalidate(const QString& text)
{
	QLineEdit *p = qobject_cast<QLineEdit*>(sender());
	int pos = 1;
	QString color = "background-color:%1";
	if (p->hasAcceptableInput())
	{
		color = color.arg(VALID_COLOR);
	}
	else
	{
		color = color.arg(INVALID_COLOR);
	}
	p->setStyleSheet(color);

}


Material_Add::Material_Add(QWidget *parent) : Material_Edit(parent)
{

}

Material_Add::~Material_Add()
{

}

void Material_Add::onoprate()
{
	QDomDocument doc;
	QDomProcessingInstruction instruction = doc.createProcessingInstruction("xml", "version=\"1.0\" encoding=\"UTF-8\"");//暂时不是很明确是做什么用的
	doc.appendChild(instruction);

	QFile file(m_path);
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
	bool is_existed = false;
	while (!node.isNull())
	{
		QString tagName = node.toElement().tagName();
		if (tagName.compare(ui.lineEdit_Name->text()) == 0) //若已经存在同名材料则覆盖
		{
			node.toElement().setAttribute("Reflectivity", ui.lineEdit_Ref->text());
			node.toElement().setAttribute("Thermal_Conductivity", ui.lineEdit_TC->text());
			node.toElement().setAttribute("Emissivity", ui.lineEdit_Emi->text());
			node.toElement().setAttribute("Density", ui.lineEdit_Den->text());
			node.toElement().setAttribute("Specific_Heat", ui.lineEdit_SH->text());
			is_existed = true;
		}
		node = node.nextSibling();//读取下一个兄弟节点  
	}
	if (!is_existed)//如果材料不存在则插入到第一个节点的位置
	{
		QDomElement name_elem = doc.createElement(ui.lineEdit_Name->text());
		root.appendChild(name_elem);
		name_elem.setAttribute("Reflectivity", ui.lineEdit_Ref->text());
		name_elem.setAttribute("Thermal_Conductivity", ui.lineEdit_TC->text());
		name_elem.setAttribute("Emissivity", ui.lineEdit_Emi->text());
		name_elem.setAttribute("Density", ui.lineEdit_Den->text());
		name_elem.setAttribute("Specific_Heat", ui.lineEdit_SH->text());
		QDomText t = doc.createTextNode(ui.lineEdit_Name->text());//创建一个文本节点（没啥用）
		name_elem.appendChild(t);
	}

	file.open(QIODevice::WriteOnly | QIODevice::Truncate);
	QTextStream text(&file);
	text.setCodec("UTF-8");
	doc.save(text, 2, QDomNode::EncodingFromTextStream);
	file.close();
}





void Material_Add::init()
{
	ui.pushButton->setText(tr("Add"));
	ui.pushButton_del->hide();
	ui.comboBox->hide();
	this->setWindowTitle("Add Material");
}
