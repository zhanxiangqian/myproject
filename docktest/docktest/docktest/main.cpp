#include "docktest.h"
#include "desktop.h"
#include <QtWidgets/QApplication>
#include <QStyleFactory>
#include "qpaintwidget.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QStringList b = QStyleFactory::keys();
	QApplication::setStyle(QStyleFactory::create(b[1])); // styleName 就是上图所列
	QApplication::setPalette(QApplication::style()->standardPalette()); // 选择风格默认颜色
	DeskTop w;
	//QPaintWidget w;
	//w.setGeometry(20,20,20,20);
	w.show();
	return a.exec();
}
