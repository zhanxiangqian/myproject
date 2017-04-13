#ifndef MACRO_H
#define MACRO_H

#include <QMap>
#include "assert.h"
enum Analysis_Type
{
	Linear_Elatic = 0, Modal_Analysis, Linear_Theric, Crack_Analysis, Num_Ana_Type
};

//DKT : Discrete Kirchhoff Theory, DST : Discrete Shear Theory
enum Model_Type
{
	TriD = 0, 
	Plane, 
	Plane_Stess, 
	Plane_Strain, 
	Axis_Symmetric, 
	Volumetric_Elements, 
	Euler_Beam, 
	Timoshenko_Beam, 
	DKT, 
	DST, 
	Num_Model_Type
};

enum Group_Type
{
	Invalided = 0, Mesh_Groups, Geometry_Groups, Num_Group_Type
};

enum Dim_Type
{
	One_Dim = 0, Two_Dim, Three_Dim, Dim_Num
};
#endif