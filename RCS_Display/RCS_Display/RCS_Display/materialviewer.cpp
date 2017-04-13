
#include <QPushButton>

#include <QComboBox>
#include <QHBoxLayout>
#include <QTreeView>
#include <QStringList>
#include <QFileDialog>

#include <QScatterSeries>
#include <QLineSeries>
#include <QSplitter>
#include "materialviewer.h"
#include <QSettings>
#include <qmovie.h>



MaterialViewer::MaterialViewer(QWidget *parent)
	:QDialog(parent)
{
	delete this->layout();
	QHBoxLayout *hlayout = new QHBoxLayout(this);
	this->setLayout(hlayout);

	matTree = new QTreeView();
	QVBoxLayout *vrightLayout = new QVBoxLayout();

	plabel_isar = new QLabel();
	plabel_rcs = new QLabel();
	QWidget *pwidget_rcs = new QWidget();
	QHBoxLayout *ptmp = new QHBoxLayout();
	ptmp->addItem(new QSpacerItem(20,20));
	ptmp->addWidget(plabel_rcs);
	ptmp->addItem(new QSpacerItem(20, 20));
	//ptmp->setStretch(1, 1, 1);
	pwidget_rcs->setLayout(ptmp);


	QHBoxLayout *phlayout = new QHBoxLayout();
	phlayout->addWidget(new QLabel("ISAR"));
	QSpacerItem *space = new QSpacerItem(20, 40,QSizePolicy::Expanding);
	phlayout->addItem(space);
	phlayout->addWidget(new QLabel("Angle"));
	pline_edit = new QLineEdit();
	pline_edit->setMinimumWidth(40);
	pline_edit->setMaximumWidth(40);
	phlayout->addWidget(pline_edit);

	QVBoxLayout *pvlayout = new QVBoxLayout();

	QWidget *ptopright = new QWidget();
	ptopright->setLayout(pvlayout);
	pvlayout->addLayout(phlayout);
	pvlayout->addWidget(plabel_isar);
	ptopright->setMinimumWidth(320);
	ptopright->setMaximumWidth(320);


	QSplitter *spmain = new QSplitter(Qt::Horizontal, this);
	spmain->addWidget(matTree);

	QSplitter *spchild = new QSplitter(Qt::Vertical, NULL);
	spchild->addWidget(ptopright);
	spchild->addWidget(pwidget_rcs);
	spmain->addWidget(spchild);
	hlayout->addWidget(spmain);
	QString path = QCoreApplication::applicationDirPath() + "/Published_ISAR_Aircraft_Dataset";
	//QString path = "D:\\project\\RCS_Display\\RCS_Display\\RCS_Display\\Resources\\Published_ISAR_Aircraft_Dataset";
	fileMaterialModel = new FileMaterialModel(path, this);

	fileMaterialModel->setRootPath(path);

	//QStringList fliter;
	//fliter << "*.jpg";
	//fileMaterialModel->setNameFilters(fliter);
//	fileMaterialModel->setNameFilterDisables(false);

	matTree->setModel(fileMaterialModel);


	//QModelIndex index = fileMaterialModel->index(path);
//	matTree->expand(index);      //当前项展开
//	matTree->scrollTo(index);
	matTree->setRootIndex(fileMaterialModel->index(path));
	this->setWindowTitle("Concerto-Isar");
	this->setMinimumWidth(640);
	//this->setMaximumWidth(640);

	this->setMinimumHeight(480);
	connect(matTree, SIGNAL(clicked(const QModelIndex &)), this, SLOT(onMatTreeItemClicked(const QModelIndex &)));
}

MaterialViewer::~MaterialViewer()
{

}



void MaterialViewer::onMatTreeItemClicked(const QModelIndex &index)
{
	FileMaterialModel * fmmodel = (FileMaterialModel *) matTree->model();

	QVariant var = fmmodel->data(index, Qt::DisplayRole);//!!!

	QFileInfo fi(fmmodel->filePath(index));
	if (fi.isDir())
	{
		plabel_rcs->setText("");
	}
	else if (fi.isFile())
	{
		QString fullname = fi.absoluteFilePath();
		QMovie *p = new QMovie(fullname);
		//QPicture *pic = new QPicture();
		//pic->load(fullname);
		//QString path = QCoreApplication::applicationDirPath() + "/setting.ini";
		//QSettings settings(path, QSettings::IniFormat);
		//settings.setValue("path", fullname);
		plabel_isar->setMovie(p);
		p->start();
		//plabel_isar->setPicture(*pic);

		//QPixmap *pRCS = new QPixmap("D:\\project\\RCS_Display\\RCS_Display\\RCS_Display\\Resources\\Published_ISAR_Aircraft_Dataset\\Aircraft-1\\a1_img000_RCS.png");
		//pRCS->scaledToHeight(p->height());
		//pRCS->scaledToWidth(p->width());
		//plabel_rcs->setPixmap(*pRCS);
		plabel_rcs->setText("<html><head/><body><p><span style=\" font-size:26pt; color:#ff0000;\">NO LICENSES!!</span></p></body></html>");

		QString name = fi.fileName();
		QString tmp = name.right(7);
		QString tmpangle = tmp.left(3);
		QString angle = tmpangle;
		if (tmpangle.left(1) == "0")
		{
			angle = tmpangle.right(2);
			if (angle.left(1) == "0")
			{
				angle = tmpangle.right(1);
			}
		}
		angle += "°";
		pline_edit->setText(angle);
		//plabel_isar->update();
	}
}








