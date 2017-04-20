#include "dialog.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QDialog *pdlg = NULL;
	if (argc == 1)
	{
		pdlg = new Assign_Material_Dlg();
	}
	else if (argc == 2)
	{
		QString arg = argv[1];
		if (arg == "Assign_Material")
		{
			pdlg = new Assign_Material_Dlg();
		}
		else if (arg == "Check")
		{
			pdlg = new Check_Dlg();

		}
		else if (arg == "Import_Heat_Source")
		{
			pdlg = new Import_Heat_Source_Dlg();
		}
		else if (arg == "Set")
		{
			pdlg = new Set_Dlg();
		}
		else if (arg == "Edit_Material")
		{
			pdlg = new Eidt_Material_Dlg();
		}
		else
		{
			pdlg = new Assign_Material_Dlg();
		}

	}
	else if (argc == 3)
	{
		QVariant tmp = argv[2];
		int indx = tmp.toInt();//Ë÷ÒýÊý×ÖÎª 0,1,2£¬3
		pdlg = new Atmosphere_Dlg(indx);
	}
	else
	{
		pdlg = new Assign_Material_Dlg();
	}
// 	Assign_Material_Dlg w;
	pdlg->show();
	int res = a.exec();
	delete pdlg;
	return res;
		
}
