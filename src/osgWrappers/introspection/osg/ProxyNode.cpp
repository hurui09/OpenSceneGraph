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

#include <osg/BoundingSphere>
#include <osg/CopyOp>
#include <osg/Node>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/ProxyNode>
#include <osg/Referenced>
#include <osg/Vec3>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osg::ProxyNode::CenterMode)
	I_DeclaringFile("osg/ProxyNode");
	I_EnumLabel(osg::ProxyNode::USE_BOUNDING_SPHERE_CENTER);
	I_EnumLabel(osg::ProxyNode::USER_DEFINED_CENTER);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osg::ProxyNode::LoadingExternalReferenceMode)
	I_DeclaringFile("osg/ProxyNode");
	I_EnumLabel(osg::ProxyNode::LOAD_IMMEDIATELY);
	I_EnumLabel(osg::ProxyNode::DEFER_LOADING_TO_DATABASE_PAGER);
	I_EnumLabel(osg::ProxyNode::NO_AUTOMATIC_LOADING);
END_REFLECTOR

TYPE_NAME_ALIAS(osg::BoundingSphere::vec_type, osg::ProxyNode::vec_type)

TYPE_NAME_ALIAS(osg::BoundingSphere::value_type, osg::ProxyNode::value_type)

BEGIN_OBJECT_REFLECTOR(osg::ProxyNode)
	I_DeclaringFile("osg/ProxyNode");
	I_BaseType(osg::Group);
	I_Constructor0(____ProxyNode,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::ProxyNode &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____ProxyNode__C5_ProxyNode_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "clone an object of the same type as the node. ",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "return a clone of a node, with Object* return type. ",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the node's class type. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the node's library. ",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "Visitor Pattern : calls the apply method of a NodeVisitor with this node's type. ",
	          "");
	I_Method1(void, traverse, IN, osg::NodeVisitor &, x,
	          Properties::VIRTUAL,
	          __void__traverse__NodeVisitor_R1,
	          "Traverse downwards : calls children's accept method with NodeVisitor. ",
	          "");
	I_Method1(bool, addChild, IN, osg::Node *, child,
	          Properties::VIRTUAL,
	          __bool__addChild__Node_P1,
	          "Add Node to Group. ",
	          "If node is not NULL and is not contained in Group then increment its reference count, add it to the child list and dirty the bounding sphere to force it to recompute on next getBound() and return true for success. Otherwise return false. Scene nodes can't be added as child nodes. ");
	I_Method2(bool, addChild, IN, osg::Node *, child, IN, const std::string &, filename,
	          Properties::VIRTUAL,
	          __bool__addChild__Node_P1__C5_std_string_R1,
	          "",
	          "");
	I_Method2(bool, removeChildren, IN, unsigned int, pos, IN, unsigned int, numChildrenToRemove,
	          Properties::VIRTUAL,
	          __bool__removeChildren__unsigned_int__unsigned_int,
	          "Remove children from Group. ",
	          "Note, must be override by subclasses of Group which add per child attributes. ");
	I_Method1(void, setDatabaseOptions, IN, osg::Referenced *, options,
	          Properties::NON_VIRTUAL,
	          __void__setDatabaseOptions__osg_Referenced_P1,
	          "Set the optional database osgDB::Options object to use when loaded children. ",
	          "");
	I_Method0(osg::Referenced *, getDatabaseOptions,
	          Properties::NON_VIRTUAL,
	          __osg_Referenced_P1__getDatabaseOptions,
	          "Get the optional database osgDB::Options object used when loaded children. ",
	          "");
	I_Method0(const osg::Referenced *, getDatabaseOptions,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Referenced_P1__getDatabaseOptions,
	          "Get the optional database osgDB::Options object used when loaded children. ",
	          "");
	I_Method1(void, setDatabasePath, IN, const std::string &, path,
	          Properties::NON_VIRTUAL,
	          __void__setDatabasePath__C5_std_string_R1,
	          "Set the database path to prepend to children's filenames. ",
	          "");
	I_Method0(const std::string &, getDatabasePath,
	          Properties::NON_VIRTUAL,
	          __C5_std_string_R1__getDatabasePath,
	          "Get the database path used to prepend to children's filenames. ",
	          "");
	I_Method2(void, setFileName, IN, unsigned int, childNo, IN, const std::string &, filename,
	          Properties::NON_VIRTUAL,
	          __void__setFileName__unsigned_int__C5_std_string_R1,
	          "",
	          "");
	I_Method1(const std::string &, getFileName, IN, unsigned int, childNo,
	          Properties::NON_VIRTUAL,
	          __C5_std_string_R1__getFileName__unsigned_int,
	          "",
	          "");
	I_Method0(unsigned int, getNumFileNames,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumFileNames,
	          "",
	          "");
	I_Method1(osg::ref_ptr< osg::Referenced > &, getDatabaseRequest, IN, unsigned int, childNo,
	          Properties::NON_VIRTUAL,
	          __osg_ref_ptrT1_osg_Referenced__R1__getDatabaseRequest__unsigned_int,
	          "Return the DatabaseRequest object used by the DatabasePager to keep track of file load requests being carried on behalf of the DatabasePager. ",
	          "Note, in normal OSG usage you should not set this value yourself, as this will be managed by the osgDB::DatabasePager. ");
	I_Method1(const osg::ref_ptr< osg::Referenced > &, getDatabaseRequest, IN, unsigned int, childNo,
	          Properties::NON_VIRTUAL,
	          __C5_osg_ref_ptrT1_osg_Referenced__R1__getDatabaseRequest__unsigned_int,
	          "Return the const DatabaseRequest object. ",
	          "");
	I_Method1(void, setCenterMode, IN, osg::ProxyNode::CenterMode, mode,
	          Properties::NON_VIRTUAL,
	          __void__setCenterMode__CenterMode,
	          "Set how the center of object should be determined when computed which child is active. ",
	          "");
	I_Method0(osg::ProxyNode::CenterMode, getCenterMode,
	          Properties::NON_VIRTUAL,
	          __CenterMode__getCenterMode,
	          "Get how the center of object should be determined when computed which child is active. ",
	          "");
	I_Method1(void, setLoadingExternalReferenceMode, IN, osg::ProxyNode::LoadingExternalReferenceMode, mode,
	          Properties::NON_VIRTUAL,
	          __void__setLoadingExternalReferenceMode__LoadingExternalReferenceMode,
	          "Set how the child loading is done. ",
	          "");
	I_Method0(osg::ProxyNode::LoadingExternalReferenceMode, getLoadingExternalReferenceMode,
	          Properties::NON_VIRTUAL,
	          __LoadingExternalReferenceMode__getLoadingExternalReferenceMode,
	          "Get the setted mode of loading. ",
	          "");
	I_Method1(void, setCenter, IN, const osg::Vec3 &, center,
	          Properties::NON_VIRTUAL,
	          __void__setCenter__C5_Vec3_R1,
	          "Sets the object-space point which defines the center of the osg::ProxyNode. ",
	          "center is affected by any transforms in the hierarchy above the osg::ProxyNode. ");
	I_Method0(const osg::ProxyNode::vec_type &, getCenter,
	          Properties::NON_VIRTUAL,
	          __C5_vec_type_R1__getCenter,
	          "return the ProxyNode center point. ",
	          "");
	I_Method1(void, setRadius, IN, osg::ProxyNode::value_type, radius,
	          Properties::NON_VIRTUAL,
	          __void__setRadius__value_type,
	          "Set the object-space reference radius of the volume enclosed by the ProxyNode. ",
	          "Used to determine the bounding sphere of the ProxyNode in the absence of any children. ");
	I_Method0(osg::ProxyNode::value_type, getRadius,
	          Properties::NON_VIRTUAL,
	          __value_type__getRadius,
	          "Get the object-space radius of the volume enclosed by the ProxyNode. ",
	          "");
	I_Method0(osg::BoundingSphere, computeBound,
	          Properties::VIRTUAL,
	          __BoundingSphere__computeBound,
	          "Compute the bounding sphere around Node's geometry or children. ",
	          "This method is automatically called by getBound() when the bounding sphere has been marked dirty via dirtyBound(). ");
	I_ProtectedMethod1(void, expandFileNameListTo, IN, unsigned int, pos,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__expandFileNameListTo__unsigned_int,
	                   "",
	                   "");
	I_SimpleProperty(const osg::Vec3 &, Center, 
	                 0, 
	                 __void__setCenter__C5_Vec3_R1);
	I_SimpleProperty(osg::ProxyNode::CenterMode, CenterMode, 
	                 __CenterMode__getCenterMode, 
	                 __void__setCenterMode__CenterMode);
	I_SimpleProperty(osg::Referenced *, DatabaseOptions, 
	                 __osg_Referenced_P1__getDatabaseOptions, 
	                 __void__setDatabaseOptions__osg_Referenced_P1);
	I_SimpleProperty(const std::string &, DatabasePath, 
	                 __C5_std_string_R1__getDatabasePath, 
	                 __void__setDatabasePath__C5_std_string_R1);
	I_ArrayProperty(const std::string &, FileName, 
	                __C5_std_string_R1__getFileName__unsigned_int, 
	                __void__setFileName__unsigned_int__C5_std_string_R1, 
	                __unsigned_int__getNumFileNames, 
	                0, 
	                0, 
	                0);
	I_SimpleProperty(osg::ProxyNode::LoadingExternalReferenceMode, LoadingExternalReferenceMode, 
	                 __LoadingExternalReferenceMode__getLoadingExternalReferenceMode, 
	                 __void__setLoadingExternalReferenceMode__LoadingExternalReferenceMode);
	I_SimpleProperty(osg::ProxyNode::value_type, Radius, 
	                 __value_type__getRadius, 
	                 __void__setRadius__value_type);
END_REFLECTOR

