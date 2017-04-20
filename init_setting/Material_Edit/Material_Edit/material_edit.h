#ifndef MATERIAL_EDIT_H
#define MATERIAL_EDIT_H

#include <QtWidgets/QDialog>
#include "ui_material_edit.h"
#include <QComboBox>
class Material_Edit : public QDialog
{
	Q_OBJECT

public:
	Material_Edit(QWidget *parent = 0);
	virtual ~Material_Edit();

protected:
	QString m_path;
	Ui::Material_EditClass ui;
public slots:
	virtual void onoprate();
	void onvalidate(const QString& text);
	void onmaterial_changed(const QString& text);
	void ondelete();

public:
	virtual void init();
};

class Material_Add : public Material_Edit
{
	Q_OBJECT

public:
	Material_Add(QWidget *parent = 0);
	virtual ~Material_Add();
public slots:
	virtual void onoprate();
	virtual void init();
};

#endif // MATERIAL_EDIT_H
