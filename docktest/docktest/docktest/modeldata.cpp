#include "modeldata.h"
#include "assert.h"

ModelType::ModelType(Analysis_Type ana_type, Model_Type mod_type): QObject(0)
{
	m_typemap.insert("3D",TriD);
	m_typemap.insert("Plane Stess",Plane_Stess);
	m_typemap.insert("Plane Strain",Plane_Strain);
	m_typemap.insert("Axis Symmetric",Axis_Symmetric);
	m_typemap.insert("Volumetric Elements",Volumetric_Elements);
	m_typemap.insert("Euler Beam",Euler_Beam);
	m_typemap.insert("Timoshenko Beam",Timoshenko_Beam);
	m_typemap.insert("DKT(Discrete Kirchhohoff Theory)",DKT);
	m_typemap.insert("DST(Discrete Shear Theory)",DST);

	m_mod_type = mod_type;
	m_ana_type = ana_type;
	m_dim = get_dim(mod_type);
}

ModelType::~ModelType()
{

}

void ModelType::set_analysis_type(Analysis_Type type)
{
	m_ana_type = type;
}

Model_Type ModelType::get_model_type()
{
	return m_mod_type;
}

QStringList ModelType::get_name_list()
{
	QStringList aname_list;
   switch(m_ana_type)
   {
   case Linear_Elatic:
	   aname_list.append(m_typemap.key(TriD));
	   aname_list.append(m_typemap.key(Plane_Stess));
	   aname_list.append(m_typemap.key(Plane_Strain));
	   aname_list.append(m_typemap.key(Axis_Symmetric));
	   break;
   case Modal_Analysis:
	   aname_list.append(m_typemap.key(Volumetric_Elements));
	   aname_list.append(m_typemap.key(Plane_Stess));
	   aname_list.append(m_typemap.key(Plane_Strain));
	   aname_list.append(m_typemap.key(Axis_Symmetric));
	   break;
   case Linear_Theric:
	   aname_list.append(m_typemap.key(TriD));
	   aname_list.append(m_typemap.key(Plane));
	   break;
   case Crack_Analysis:
	   aname_list.append(m_typemap.key(TriD));
	   aname_list.append(m_typemap.key(Plane_Stess));
	   aname_list.append(m_typemap.key(Plane_Strain));
	   aname_list.append(m_typemap.key(Axis_Symmetric));
	   break;
   default:
	   break;
   }
   return aname_list;
}

void ModelType::set_model_type(QString type_name /* = TriD */)
{
	Model_Type type = trans_to_Model_Type(type_name);
	if (type != m_mod_type)
	{
		m_mod_type = Model_Type(type);
		m_dim = get_dim(type);
		emit_model_change();
	}
}

Dim_Type ModelType::get_dim(Model_Type type)
{
	Dim_Type dim = One_Dim;
	switch(type)
	{
	case TriD: 
		dim = Three_Dim;
		break;
	case Euler_Beam:
	case Timoshenko_Beam:
		dim = One_Dim;
		break;
	case Plane:
	case Plane_Stess:
	case Plane_Strain:
	case Axis_Symmetric:
	case Volumetric_Elements:
	case DKT:
	case DST:
		dim = Two_Dim;
		break;
	default:
		break;
	}
	return dim;
}

void ModelType::emit_model_change()
{
  emit model_change(m_mod_type);
}


ModelData::ModelData(QObject *parent)
	: QObject(parent)
{
	m_group_type = Invalided;
}

ModelData::~ModelData()
{

}


void ModelData::reset()
{
	reset_model_type();
}


void ModelData::set_group_type(Group_Type type)
{
	if (m_group_type != type)
	{
		m_group_type = type;
		reset_boundaries_conditions();
	}
}


void ModelData::reset_model_type()
{
	m_group_type = Invalided;
	reset_boundaries_conditions();
}

void ModelData::reset_boundaries_conditions()
{


	emit_date_change();
}

void ModelData::emit_date_change()
{
	emit data_change();
}

Model_Type ModelType:: trans_to_Model_Type(QString model_name)
{
	assert(m_typemap.find(model_name) != m_typemap.end());
	return m_typemap.find(model_name).value();
}

QString ModelType::trans_to_Model_String(Model_Type type)
{
	return m_typemap.key(type);
}
