#include "material_edit.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QString name = "1";
	Material_Edit *p = NULL;

	if (name == argv[argc - 1])
	{
		p = new Material_Add();
	}
	else
	{
		p = new Material_Edit();
	}
	p->init();
	p->show();
	int i = a.exec();
	delete p;
	return i;
}
