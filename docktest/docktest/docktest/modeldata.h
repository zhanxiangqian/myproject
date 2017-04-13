#ifndef MODELDATA_H
#define MODELDATA_H

#include <QObject>
#include "macro.h"

class ModelType : public QObject
{
	Q_OBJECT
public:
	ModelType(Analysis_Type ana_type = Linear_Elatic, Model_Type mod_type = TriD);
	~ModelType();
	void set_analysis_type(Analysis_Type type = Linear_Elatic);
	Model_Type get_model_type();
	QStringList get_name_list();
	Dim_Type    get_dim(Model_Type type);
private:
	void emit_model_change();
	Model_Type trans_to_Model_Type(QString );
	QString trans_to_Model_String(Model_Type);
	QMap<QString, Model_Type> m_typemap;

	Analysis_Type m_ana_type;
	Model_Type    m_mod_type;
	Dim_Type           m_dim;//Œ¨∂»£¨1 2 3Œ¨
signals:
	void model_change(Model_Type);

public slots:
	void set_model_type(QString type_name);
};

class ModelData : public QObject
{
	Q_OBJECT

public:
	ModelData(QObject *parent = 0);
	~ModelData();
	ModelType m_type;
	Group_Type m_group_type;

	void set_group_type(Group_Type type);
private:

	void emit_date_change();

signals:
	void data_change();
	

public slots:
	//÷ÿ…Ë
	void reset();
	void reset_model_type();
	void reset_boundaries_conditions();
};

#endif // MODELDATA_H
