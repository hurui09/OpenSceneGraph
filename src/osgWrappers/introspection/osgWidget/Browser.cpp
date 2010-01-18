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

#include <osgWidget/Browser>
#include <osgWidget/PdfReader>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgWidget::Browser)
	I_DeclaringFile("osgWidget/Browser");
	I_BaseType(osg::Geode);
	I_Constructor0(____Browser,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const std::string &, url, , IN, const osgWidget::GeometryHints &, hints, osgWidget::GeometryHints(),
	                           ____Browser__C5_std_string_R1__C5_GeometryHints_R1,
	                           "",
	                           "");
	I_MethodWithDefaults2(bool, assign, IN, osgWidget::BrowserImage *, browserImage, , IN, const osgWidget::GeometryHints &, hints, osgWidget::GeometryHints(),
	                      Properties::NON_VIRTUAL,
	                      __bool__assign__BrowserImage_P1__C5_GeometryHints_R1,
	                      "",
	                      "");
	I_MethodWithDefaults2(bool, open, IN, const std::string &, url, , IN, const osgWidget::GeometryHints &, hints, osgWidget::GeometryHints(),
	                      Properties::NON_VIRTUAL,
	                      __bool__open__C5_std_string_R1__C5_GeometryHints_R1,
	                      "",
	                      "");
	I_Method1(void, navigateTo, IN, const std::string &, url,
	          Properties::NON_VIRTUAL,
	          __void__navigateTo__C5_std_string_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgWidget::BrowserImage)
	I_DeclaringFile("osgWidget/Browser");
	I_BaseType(osg::Image);
	I_Constructor0(____BrowserImage,
	               "",
	               "");
	I_Method1(void, navigateTo, IN, const std::string &, url,
	          Properties::PURE_VIRTUAL,
	          __void__navigateTo__C5_std_string_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgWidget::BrowserManager)
	I_DeclaringFile("osgWidget/Browser");
	I_BaseType(osg::Object);
	I_StaticMethod0(osg::ref_ptr< osgWidget::BrowserManager > &, instance,
	                __osg_ref_ptrT1_BrowserManager__R1__instance_S,
	                "",
	                "");
	I_Method1(void, init, IN, const std::string &, application,
	          Properties::VIRTUAL,
	          __void__init__C5_std_string_R1,
	          "",
	          "");
	I_Method1(void, setApplication, IN, const std::string &, application,
	          Properties::NON_VIRTUAL,
	          __void__setApplication__C5_std_string_R1,
	          "",
	          "");
	I_Method0(const std::string &, getApplication,
	          Properties::NON_VIRTUAL,
	          __C5_std_string_R1__getApplication,
	          "",
	          "");
	I_Method3(osgWidget::BrowserImage *, createBrowserImage, IN, const std::string &, url, IN, int, width, IN, int, height,
	          Properties::VIRTUAL,
	          __BrowserImage_P1__createBrowserImage__C5_std_string_R1__int__int,
	          "",
	          "");
	I_ProtectedConstructor0(____BrowserManager,
	                        "",
	                        "");
	I_ProtectedConstructorWithDefaults2(IN, const osgWidget::BrowserManager &, rhs, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                                    ____BrowserManager__C5_BrowserManager_R1__C5_osg_CopyOp_R1,
	                                    "",
	                                    "");
	I_ProtectedMethod0(osg::Object *, cloneType,
	                   Properties::VIRTUAL,
	                   Properties::CONST,
	                   __osg_Object_P1__cloneType,
	                   "Clone the type of an object, with Object* return type. ",
	                   "Must be defined by derived classes. ");
	I_ProtectedMethod1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	                   Properties::VIRTUAL,
	                   Properties::CONST,
	                   __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	                   "Clone an object, with Object* return type. ",
	                   "Must be defined by derived classes. ");
	I_ProtectedMethod1(bool, isSameKindAs, IN, const osg::Object *, obj,
	                   Properties::VIRTUAL,
	                   Properties::CONST,
	                   __bool__isSameKindAs__C5_osg_Object_P1,
	                   "",
	                   "");
	I_ProtectedMethod0(const char *, libraryName,
	                   Properties::VIRTUAL,
	                   Properties::CONST,
	                   __C5_char_P1__libraryName,
	                   "return the name of the object's library. ",
	                   "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_ProtectedMethod0(const char *, className,
	                   Properties::VIRTUAL,
	                   Properties::CONST,
	                   __C5_char_P1__className,
	                   "return the name of the object's class type. ",
	                   "Must be defined by derived classes. ");
	I_SimpleProperty(const std::string &, Application, 
	                 __C5_std_string_R1__getApplication, 
	                 __void__setApplication__C5_std_string_R1);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgWidget::BrowserManager >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgWidget::BrowserManager *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgWidget::BrowserManager > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgWidget::BrowserManager *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgWidget::BrowserManager *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgWidget::BrowserManager > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgWidget::BrowserManager *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

