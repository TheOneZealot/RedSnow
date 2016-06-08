#include <hxcpp.h>

#ifndef INCLUDED_opengl_GLObject
#include <opengl/GLObject.h>
#endif
#ifndef INCLUDED_opengl__WebGL_GLRenderbuffer_Impl_
#include <opengl/_WebGL/GLRenderbuffer_Impl_.h>
#endif
namespace opengl{
namespace _WebGL{

Void GLRenderbuffer_Impl__obj::__construct()
{
	return null();
}

//GLRenderbuffer_Impl__obj::~GLRenderbuffer_Impl__obj() { }

Dynamic GLRenderbuffer_Impl__obj::__CreateEmpty() { return  new GLRenderbuffer_Impl__obj; }
hx::ObjectPtr< GLRenderbuffer_Impl__obj > GLRenderbuffer_Impl__obj::__new()
{  hx::ObjectPtr< GLRenderbuffer_Impl__obj > _result_ = new GLRenderbuffer_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic GLRenderbuffer_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLRenderbuffer_Impl__obj > _result_ = new GLRenderbuffer_Impl__obj();
	_result_->__construct();
	return _result_;}

::opengl::GLObject GLRenderbuffer_Impl__obj::_new( int _id){
	HX_STACK_FRAME("opengl._WebGL.GLRenderbuffer_Impl_","_new",0x32fd9f7f,"opengl._WebGL.GLRenderbuffer_Impl_._new","opengl/WebGL.hx",971,0x584405a5)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(971)
	::opengl::GLObject tmp = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(971)
	::opengl::GLObject tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(971)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLRenderbuffer_Impl__obj,_new,return )

int GLRenderbuffer_Impl__obj::toInt( ::opengl::GLObject this1){
	HX_STACK_FRAME("opengl._WebGL.GLRenderbuffer_Impl_","toInt",0x82ec0e56,"opengl._WebGL.GLRenderbuffer_Impl_.toInt","opengl/WebGL.hx",972,0x584405a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(972)
	bool tmp = (this1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(972)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(972)
	if ((tmp)){
		HX_STACK_LINE(972)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(972)
		tmp1 = this1->id;
	}
	HX_STACK_LINE(972)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLRenderbuffer_Impl__obj,toInt,return )

::opengl::GLObject GLRenderbuffer_Impl__obj::fromInt( int _id){
	HX_STACK_FRAME("opengl._WebGL.GLRenderbuffer_Impl_","fromInt",0xee22fa47,"opengl._WebGL.GLRenderbuffer_Impl_.fromInt","opengl/WebGL.hx",973,0x584405a5)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(973)
	::opengl::GLObject tmp = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(973)
	::opengl::GLObject tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(973)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLRenderbuffer_Impl__obj,fromInt,return )

Dynamic GLRenderbuffer_Impl__obj::toDynamic( ::opengl::GLObject this1){
	HX_STACK_FRAME("opengl._WebGL.GLRenderbuffer_Impl_","toDynamic",0xeb8be066,"opengl._WebGL.GLRenderbuffer_Impl_.toDynamic","opengl/WebGL.hx",974,0x584405a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(974)
	bool tmp = (this1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(974)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(974)
	if ((tmp)){
		HX_STACK_LINE(974)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(974)
		tmp1 = this1->id;
	}
	HX_STACK_LINE(974)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLRenderbuffer_Impl__obj,toDynamic,return )

::opengl::GLObject GLRenderbuffer_Impl__obj::fromDynamic( Dynamic _id){
	HX_STACK_FRAME("opengl._WebGL.GLRenderbuffer_Impl_","fromDynamic",0x17a618d7,"opengl._WebGL.GLRenderbuffer_Impl_.fromDynamic","opengl/WebGL.hx",975,0x584405a5)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(975)
	::opengl::GLObject tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(975)
	{
		HX_STACK_LINE(975)
		int _id1 = _id;		HX_STACK_VAR(_id1,"_id1");
		HX_STACK_LINE(975)
		::opengl::GLObject tmp1 = ::opengl::GLObject_obj::__new(_id1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(975)
		tmp = tmp1;
	}
	HX_STACK_LINE(975)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLRenderbuffer_Impl__obj,fromDynamic,return )

::String GLRenderbuffer_Impl__obj::toString( ::opengl::GLObject this1){
	HX_STACK_FRAME("opengl._WebGL.GLRenderbuffer_Impl_","toString",0x055fc1ca,"opengl._WebGL.GLRenderbuffer_Impl_.toString","opengl/WebGL.hx",976,0x584405a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(976)
	bool tmp = (this1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(976)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(976)
	if ((tmp)){
		HX_STACK_LINE(976)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(976)
		tmp1 = this1->id;
	}
	HX_STACK_LINE(976)
	::String tmp2 = (HX_HCSTRING("GLRenderbuffer(","\x2d","\x4d","\x5b","\x45") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(976)
	::String tmp3 = (tmp2 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(976)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLRenderbuffer_Impl__obj,toString,return )


GLRenderbuffer_Impl__obj::GLRenderbuffer_Impl__obj()
{
}

bool GLRenderbuffer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toDynamic") ) { outValue = toDynamic_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromDynamic") ) { outValue = fromDynamic_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLRenderbuffer_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLRenderbuffer_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class GLRenderbuffer_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("toInt","\x34","\xbe","\x11","\x14"),
	HX_HCSTRING("fromInt","\xa5","\xdd","\xfa","\x57"),
	HX_HCSTRING("toDynamic","\x44","\xd7","\xa9","\x65"),
	HX_HCSTRING("fromDynamic","\x35","\x03","\x56","\xce"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void GLRenderbuffer_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("opengl._WebGL.GLRenderbuffer_Impl_","\x10","\x0b","\x7e","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLRenderbuffer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLRenderbuffer_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace opengl
} // end namespace _WebGL
