#include "init_setting.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QApplication::addLibraryPath("./plugins");
	init_setting w;
	w.show();
	return a.exec();
}
