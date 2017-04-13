
#include <QApplication>
#include "materialviewer.h"
#include "solversetting.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

	//MaterialViewer w;
	// w.show();

	 SolverSetting gs;
   gs.show();

    return a.exec();
}
