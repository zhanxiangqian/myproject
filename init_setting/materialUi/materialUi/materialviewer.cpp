
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QFileInfo>
#include <qdebug>
#include "materialviewer.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QLineSeries>
#include <QFileInfoList>
#include <QStringList>
#include <QBitmap>
MaterialViewer::MaterialViewer(QWidget *parent)
	:QDialog(parent) 
{
	this->setWindowTitle("ConCerto-Material");
	this->setMinimumHeight(400);
	this->setMinimumWidth(300);
	QVBoxLayout *mainLayout = new QVBoxLayout();
	this->setLayout(mainLayout);

	QHBoxLayout *firstLayout = new QHBoxLayout();
	QLabel *label = new QLabel("Mode");
	label->setAlignment(Qt::AlignCenter);
	QComboBox *comboBox = new QComboBox();
	comboBox->setMinimumWidth(100);
	comboBox->addItem("Simple");
	comboBox->addItem("Costom"); 
	
	listWidget = new QListWidget();
	//listWidget->setMaximumWidth(150);
	listWidget->setMaximumHeight(200);

	////////////////////////////////

	//QDir dir(".\\mat");
	QString path = QCoreApplication::applicationDirPath();
	QDir dir(path + ".\\mat");
	QStringList filters;
	filters << "*.xml";

	dir.setNameFilters(filters);

	QFileInfoList  flist = dir.entryInfoList();
	for each (QFileInfo var in flist)
	{
		if (var.isFile())
		{
			QString name = var.fileName();
			if (name.contains(".xml"))
			{
				name = name.remove(".xml");
			}
			listWidget->addItem(name);
		}

	}
	/////////////////////

	firstLayout->addWidget(label,2);
	firstLayout->addWidget(comboBox,3);
	firstLayout->addSpacerItem(new QSpacerItem(10, 0, QSizePolicy::Expanding));
	firstLayout->addWidget(listWidget,6);
	mainLayout->addLayout(firstLayout);

	matFrame =new QFrame();
	QVBoxLayout *secondLayout = new QVBoxLayout();
	matFrame->setLayout(secondLayout);
	mainLayout->addWidget(matFrame);

	mainLayout->addSpacerItem(new QSpacerItem(10, 50, QSizePolicy::Expanding));

	QHBoxLayout *sub1 = new QHBoxLayout();
	QLabel *label_2 = new QLabel("Relative pemittivity");
	label_2->setMinimumWidth(155);

	QLabel *pic1 = new QLabel();
	pic1->setMinimumWidth(80);
	QPixmap pix1(path + "./res/1.png");
	pix1.scaled(24, 24, Qt::IgnoreAspectRatio);
	QTransform transform1;
	transform1.scale(0.26, 0.26);
	pix1 = pix1.transformed(transform1);
	pic1->setPixmap(pix1);
	

	QLineEdit *lineEdit = new QLineEdit();
	sub1->addWidget(label_2);
	sub1->addWidget(pic1);
	sub1->addWidget(lineEdit);
	secondLayout->addLayout(sub1);

	QHBoxLayout *sub2 = new QHBoxLayout();
	QLabel *label_3 = new QLabel("Dielectric loss tangent");
	label_3->setMinimumWidth(155);
	QLabel *pic2 = new QLabel();
	pic2->setMinimumWidth(80);
	QPixmap pix2(path + "./res/2.png");
	pix2.scaled(24, 24, Qt::IgnoreAspectRatio);
	
	QTransform transform2;
	transform2.scale(0.4,0.32);
	pix2 = pix2.transformed(transform2);
	pic2->setPixmap(pix2);
	

	QLineEdit *lineEdit_2 = new QLineEdit();
	sub2->addWidget(label_3);
	sub2->addWidget(pic2);
	sub2->addWidget(lineEdit_2);
	secondLayout->addLayout(sub2);

	QHBoxLayout *sub3 = new QHBoxLayout();
	QLabel *label_4 = new QLabel("Conductivity (s/m)");	
	label_4->setMinimumWidth(155);
	QLabel *pic3 = new QLabel();
	pic3->setMinimumWidth(80);
	QPixmap pix3(path + "./res/3.png");
	pix3.scaled(24, 24,Qt::IgnoreAspectRatio);
	
	QTransform transform3;
	transform3.scale(0.20, 0.20);
	pix3 = pix3.transformed(transform3);
	pic3->setPixmap(pix3);


	QLineEdit *lineEdit_3 = new QLineEdit();
	sub3->addWidget(label_4);
	sub3->addWidget(pic3);
	sub3->addWidget(lineEdit_3);
	secondLayout->addLayout(sub3);

	snchartFrame = new QFrame();
	QVBoxLayout *thirdLayout = new QVBoxLayout();
	snchartFrame->setLayout(thirdLayout);
	mainLayout->addWidget(snchartFrame);
	snChart = new SNChart(this);
	thirdLayout->addWidget(snChart);
	snchartFrame->setMinimumSize(400, 200);

	QHBoxLayout *pathLayout = new QHBoxLayout();
	thirdLayout->addLayout(pathLayout);

	pathEdit = new QLineEdit();
	pathEdit->setText("");
	QPushButton *pathBtn = new QPushButton("...");
	pathLayout->addWidget(pathEdit);
	pathLayout->addWidget(pathBtn);

	matFrame2 = new QFrame();
	matFrame2Layout = new QVBoxLayout();
	matFrame2->setLayout(matFrame2Layout);
	mainLayout->addWidget(matFrame2);

	QHBoxLayout *fouthLayout = new QHBoxLayout();
	QPushButton *applyButton = new QPushButton("Apply");
	applyButton->setMaximumWidth(100);
	QPushButton *cancelButton = new QPushButton("Cancel");
	cancelButton->setMaximumWidth(100);
	fouthLayout->addWidget(applyButton);
	fouthLayout->addWidget(cancelButton);
	mainLayout->addLayout(fouthLayout);
 
 	connect(comboBox, SIGNAL(currentTextChanged(const QString &)), this, SLOT(omCurrentTextChanged(const QString &)));
 
 	comboBox->setCurrentIndex(0);
 	
 	connect(listWidget, SIGNAL(itemClicked(QListWidgetItem *)), this, SLOT(onItemClicked(QListWidgetItem *)));
 
 	snchartFrame->hide();
	matFrame->hide();
	matFrame2->show();

	
	connect(pathBtn, SIGNAL(clicked()), this, SLOT(onPathClicked()));

	connect(applyButton, SIGNAL(clicked()), this, SLOT(onApplyButtonClicked()));
	connect(cancelButton, SIGNAL(clicked()), qApp, SLOT(quit()));

	setChartFile(path + "\\mat\\1.txt");
}

MaterialViewer::~MaterialViewer()
{
	
}

void MaterialViewer::onApplyButtonClicked()
{
	QMessageBox::warning(this, "succ", "apply successful");

}

void MaterialViewer::setChartFile(QString fileName)
{
	//read
	QFile file(fileName);
	if (!file.open(QIODevice::ReadOnly))
		return;


	QLineSeries *s1 = new QLineSeries();
	float xmin = 0, xmax = 0, ymin = 0, ymax = 0;
	qint64 lineLength = 0;
	while (lineLength != -1)
	{
		char buf[128] = { 0 };
		lineLength = file.readLine(buf, sizeof(buf));
		float x, y;
		sscanf(buf, "%f%f", &x, &y);
		if (xmin > x)
		{
			xmin = x;
		}
		if (xmax < x)
		{
			xmax = x;
		}
		if (ymin > y)
		{
			ymin = y;
		}
		if (ymax < y)
		{
			ymax = y;
		}

		s1->append(x, y);
	}

	snChart->addSeries(s1);
	snChart->setXRange(xmin, xmax);
	snChart->setYRange(ymin, ymax);
}

void MaterialViewer::onPathClicked()
{
	QString path = QCoreApplication::applicationDirPath();


	QString fileName = QFileDialog::getOpenFileName(this,
		tr("Open File"), path + "\\mat", tr("Text Files (*.txt *.text )"));

	pathEdit->setText(fileName);
	setChartFile(fileName);
	
}

void MaterialViewer::omCurrentTextChanged(const QString & text)
{
	listWidget->clear();
	QStringList sl;
	if (text == "Simple")	
	{
		QDir dir("c:\\mat");
		QStringList filters;
		filters << "*.xml" ;

		dir.setNameFilters(filters);

		QFileInfoList  flist = dir.entryInfoList();
		for each (QFileInfo var in flist)
		{
			if (var.isFile())
			{
				QString name = var.fileName();
				if (name.contains(".xml"))
				{
					name = name.remove(".xml");
				}
				listWidget->addItem(name);
			}
			
		}
		
	}
	else if (text == "Costom")
	{
		sl << "Medium properties" << "Dielectric modeling";
		listWidget->addItems(sl);
	}

}

void MaterialViewer::setFile(QString filePath)
{
	QFileInfo fi(filePath);
	if (fi.exists())
	{
		domDoc.clear();

		QFile file(fi.absoluteFilePath());
		if (!file.open(QIODevice::ReadOnly))
			return;

		if (!domDoc.setContent(&file))
		{
			qDebug() << "not valid material file!";
			file.close();
			return;
		}
		file.close();
	}
	else
	{
		qDebug() << "not valid file!";
	}
}

void MaterialViewer::onItemClicked(QListWidgetItem *item)
{
	if (item->text() == "Dielectric modeling" )
	{
		snchartFrame->show();
		matFrame->hide();
		matFrame2->hide();
	}
	else if (item->text() == "Medium properties")
	{
		snchartFrame->hide();
		matFrame->show();
		matFrame2->hide();
	}
	else
	{//glass

		QString path = QCoreApplication::applicationDirPath();
		snchartFrame->hide();
		matFrame->hide();

	 
		path += "mat\\";
		path += listWidget->currentItem()->text();
		path += ".xml";
		setFile(path);
	
		updateWidgetsByXml(domDoc.documentElement() , matFrame2Layout, true);

		matFrame2->show();
				
	}

}

void MaterialViewer::updateWidgetsByXml(QDomElement& xml, QVBoxLayout *layout, bool clear)
{
	//delete before
	if (clear)
	{
		for each (QObject* var in widgetsList)
		{
			delete var;
		}
		widgetsList.clear();

		QList<QObject*> ol = layout->findChildren<QObject*>();//layout
		for each (QObject* var in ol)
		{
			delete var;
		}
	}


	//add new
	QDomNodeList items = xml.elementsByTagName("item");
	int cnt = items.count();
	for (int i = 0; i < cnt; i++)
	{
		QDomNode n = items.at(i);
		if (n.isElement())
		{
			updateByEachItem(n.toElement(), matFrame2Layout);
		}
	}
}

void MaterialViewer::updateByEachItem(QDomElement& xml, QVBoxLayout *layout)
{
	if (xml.isElement())
	{
		QDomNode matDetail = xml.firstChild();

		QWidget *w = NULL;
		QLabel *nameLabel = new QLabel();
		nameLabel->setMinimumWidth(150);
		QLabel *unit = new QLabel();
		unit->setMinimumHeight(20);

		while (!matDetail.isNull())//item details
		{
			if (matDetail.isElement())
			{
				QDomElement d = matDetail.toElement();

				if (d.tagName() == "desc")
				{
					nameLabel->setText(d.text());
				}
				else if (d.tagName() == "value")
				{
					w = new QLineEdit(d.text());
					w->setMaximumWidth(140);
				}
				else if (d.tagName() == "unit")
				{
					unit->setText(d.text());
				}
			}
			matDetail = matDetail.nextSibling();
		}

		widgetsList.push_back(nameLabel);
		widgetsList.push_back(w);
		widgetsList.push_back(unit);

		//layout->addWidget(nameLabel);

		QHBoxLayout *l = new QHBoxLayout();
		l->addWidget(nameLabel);
		l->addWidget(w);
		l->addWidget(unit);

		layout->addLayout(l);

	//	layout->addSpacerItem(new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding));
	}
}









