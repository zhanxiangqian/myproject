#include "text.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	text w;
	w.show();
	return a.exec();
}
