#include <hxcpp.h>

#ifndef INCLUDED_opengl_GLObject
#include <opengl/GLObject.h>
#endif
#ifndef INCLUDED_opengl__WebGL_GLBuffer_Impl_
#include <opengl/_WebGL/GLBuffer_Impl_.h>
#endif
namespace opengl{
namespace _WebGL{

Void GLBuffer_Impl__obj::__construct()
{
	return null();
}

//GLBuffer_Impl__obj::~GLBuffer_Impl__obj() { }

Dynamic GLBuffer_Impl__obj::__CreateEmpty() { return  new GLBuffer_Impl__obj; }
hx::ObjectPtr< GLBuffer_Impl__obj > GLBuffer_Impl__obj::__new()
{  hx::ObjectPtr< GLBuffer_Impl__obj > _result_ = new GLBuffer_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic GLBuffer_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLBuffer_Impl__obj > _result_ = new GLBuffer_Impl__obj();
	_result_->__construct();
	return _result_;}

::opengl::GLObject GLBuffer_Impl__obj::_new( int _id){
	HX_STACK_FRAME("opengl._WebGL.GLBuffer_Impl_","_new",0x7b0a8b15,"opengl._WebGL.GLBuffer_Impl_._new","opengl/WebGL.hx",944,0x584405a5)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(944)
	::opengl::GLObject tmp = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(944)
	::opengl::GLObject tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(944)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLBuffer_Impl__obj,_new,return )

int GLBuffer_Impl__obj::toInt( ::opengl::GLObject this1){
	HX_STACK_FRAME("opengl._WebGL.GLBuffer_Impl_","toInt",0x462d4600,"opengl._WebGL.GLBuffer_Impl_.toInt","opengl/WebGL.hx",945,0x584405a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(945)
	bool tmp = (this1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(945)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(945)
	if ((tmp)){
		HX_STACK_LINE(945)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(945)
		tmp1 = this1->id;
	}
	HX_STACK_LINE(945)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLBuffer_Impl__obj,toInt,return )

::opengl::GLObject GLBuffer_Impl__obj::fromInt( int _id){
	HX_STACK_FRAME("opengl._WebGL.GLBuffer_Impl_","fromInt",0xede0f071,"opengl._WebGL.GLBuffer_Impl_.fromInt","opengl/WebGL.hx",946,0x584405a5)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(946)
	::opengl::GLObject tmp = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(946)
	::opengl::GLObject tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(946)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLBuffer_Impl__obj,fromInt,return )

Dynamic GLBuffer_Impl__obj::toDynamic( ::opengl::GLObject this1){
	HX_STACK_FRAME("opengl._WebGL.GLBuffer_Impl_","toDynamic",0xcf533510,"opengl._WebGL.GLBuffer_Impl_.toDynamic","opengl/WebGL.hx",947,0x584405a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(947)
	bool tmp = (this1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(947)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(947)
	if ((tmp)){
		HX_STACK_LINE(947)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(947)
		tmp1 = this1->id;
	}
	HX_STACK_LINE(947)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLBuffer_Impl__obj,toDynamic,return )

::opengl::GLObject GLBuffer_Impl__obj::fromDynamic( Dynamic _id){
	HX_STACK_FRAME("opengl._WebGL.GLBuffer_Impl_","fromDynamic",0xfb6b6c01,"opengl._WebGL.GLBuffer_Impl_.fromDynamic","opengl/WebGL.hx",948,0x584405a5)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(948)
	::opengl::GLObject tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(948)
	{
		HX_STACK_LINE(948)
		int _id1 = _id;		HX_STACK_VAR(_id1,"_id1");
		HX_STACK_LINE(948)
		::opengl::GLObject tmp1 = ::opengl::GLObject_obj::__new(_id1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(948)
		tmp = tmp1;
	}
	HX_STACK_LINE(948)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLBuffer_Impl__obj,fromDynamic,return )

::String GLBuffer_Impl__obj::toString( ::opengl::GLObject this1){
	HX_STACK_FRAME("opengl._WebGL.GLBuffer_Impl_","toString",0xcbd93060,"opengl._WebGL.GLBuffer_Impl_.toString","opengl/WebGL.hx",949,0x584405a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(949)
	bool tmp = (this1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(949)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(949)
	if ((tmp)){
		HX_STACK_LINE(949)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(949)
		tmp1 = this1->id;
	}
	HX_STACK_LINE(949)
	::String tmp2 = (HX_HCSTRING("GLBuffer(","\x83","\xcb","\xcf","\xfa") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(949)
	::String tmp3 = (tmp2 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(949)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLBuffer_Impl__obj,toString,return )


GLBuffer_Impl__obj::GLBuffer_Impl__obj()
{
}

bool GLBuffer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(GLBuffer_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBuffer_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class GLBuffer_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("toInt","\x34","\xbe","\x11","\x14"),
	HX_HCSTRING("fromInt","\xa5","\xdd","\xfa","\x57"),
	HX_HCSTRING("toDynamic","\x44","\xd7","\xa9","\x65"),
	HX_HCSTRING("fromDynamic","\x35","\x03","\x56","\xce"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void GLBuffer_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("opengl._WebGL.GLBuffer_Impl_","\x3a","\xc7","\x84","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLBuffer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLBuffer_Impl__obj >;
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
