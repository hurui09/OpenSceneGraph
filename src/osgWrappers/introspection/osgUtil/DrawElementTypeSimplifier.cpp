// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Geode>
#include <osg/Geometry>
#include <osgUtil/DrawElementTypeSimplifier>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_VALUE_REFLECTOR(osgUtil::DrawElementTypeSimplifier)
	I_DeclaringFile("osgUtil/DrawElementTypeSimplifier");
	I_Constructor0(____DrawElementTypeSimplifier,
	               "",
	               "");
	I_Method1(void, simplify, IN, osg::Geometry &, geometry,
	          Properties::NON_VIRTUAL,
	          __void__simplify__osg_Geometry_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgUtil::DrawElementTypeSimplifierVisitor)
	I_DeclaringFile("osgUtil/DrawElementTypeSimplifier");
	I_BaseType(osg::NodeVisitor);
	I_Constructor0(____DrawElementTypeSimplifierVisitor,
	               "",
	               "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the library name/namespapce of the visitor's. ",
	          "Should be defined by derived classes. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the visitor's class type. ",
	          "Should be defined by derived classes. ");
	I_Method1(void, apply, IN, osg::Geode &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_Geode_R1,
	          "",
	          "");
END_REFLECTOR

