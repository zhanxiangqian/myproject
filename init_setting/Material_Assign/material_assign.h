#ifndef MATERIAL_ASSIGN_H
#define MATERIAL_ASSIGN_H

#include <QtWidgets/QDialog>
#include "ui_material_assign.h"

class Material_Assign : public QDialog
{
	Q_OBJECT

public:
	Material_Assign(QWidget *parent = 0);
	~Material_Assign();

private:
	Ui::Material_AssignClass ui;
public slots:
	void onvalue_changed(int val);
public:
	void read_material();
};

#endif // MATERIAL_ASSIGN_H
