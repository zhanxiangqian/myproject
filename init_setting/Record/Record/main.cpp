#include "record.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Record w;
	w.show();
	return a.exec();
}
