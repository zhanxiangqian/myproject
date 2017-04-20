#ifndef DIALOG_H
#define DIALOG_H

#include <QtWidgets/QDialog>
#include "ui_dialog.h"
#include "ui_Assign_Material.h"
#include "ui_Atmosphere.h"
#include "ui_Check.h"
#include "ui_Import_Heat_Solver.h"
#include "ui_Set.h"
#include "ui_Edit_Material.h"

class Dialog : public QDialog
{
	Q_OBJECT

public:
	Dialog(QWidget *parent = 0);
	~Dialog();

private:
	Ui::DialogClass ui;
}; 

class Assign_Material_Dlg : public QDialog
{
	Q_OBJECT

public:
	Assign_Material_Dlg(QWidget *parent = 0);
	~Assign_Material_Dlg();

private:
	Ui::Assign_Material_Dialog ui;
public slots:
	void onclose();
public:
	void read_material();
	void on_save();
};

class Atmosphere_Dlg : public QDialog
{
	Q_OBJECT

public:
	Atmosphere_Dlg(int indx, QWidget *parent = 0);
	~Atmosphere_Dlg();

private:
	Ui::Atmosphere_Dialog ui;
public slots:
	void onclose();
	int on_exec();
};

class Check_Dlg : public QDialog
{
	Q_OBJECT

public:
	Check_Dlg(QWidget *parent = 0);
	~Check_Dlg();

private:
	Ui::Check_Dialog ui;
public slots:
	void onclose();
};

class Import_Heat_Source_Dlg : public QDialog
{
	Q_OBJECT

public:
	Import_Heat_Source_Dlg(QWidget *parent = 0);
	~Import_Heat_Source_Dlg();

private:
	Ui::Import_Heat_Dialog ui;
public slots:
	void onclose();
	void on_Ok();

};

class Set_Dlg : public QDialog
{
	Q_OBJECT

public:
	Set_Dlg(QWidget *parent = 0);
	~Set_Dlg();

private:
	Ui::Set_Dialog ui;
public slots:
	void onclose();
};

class Eidt_Material_Dlg : public QDialog
{
	Q_OBJECT

public:
	Eidt_Material_Dlg(QWidget *parent = 0);
	~Eidt_Material_Dlg();

private:
	Ui::Edit_Material_Dialog ui;
public slots:
	void onclose();
	void onsave();
	void onmaterial_changed(const QString& text);
public:
	void read_material();
};

#endif // DIALOG_H
