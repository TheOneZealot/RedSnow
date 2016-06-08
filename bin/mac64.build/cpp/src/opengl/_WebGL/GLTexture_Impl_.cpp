#include <hxcpp.h>

#ifndef INCLUDED_opengl_GLObject
#include <opengl/GLObject.h>
#endif
#ifndef INCLUDED_opengl__WebGL_GLTexture_Impl_
#include <opengl/_WebGL/GLTexture_Impl_.h>
#endif
namespace opengl{
namespace _WebGL{

Void GLTexture_Impl__obj::__construct()
{
	return null();
}

//GLTexture_Impl__obj::~GLTexture_Impl__obj() { }

Dynamic GLTexture_Impl__obj::__CreateEmpty() { return  new GLTexture_Impl__obj; }
hx::ObjectPtr< GLTexture_Impl__obj > GLTexture_Impl__obj::__new()
{  hx::ObjectPtr< GLTexture_Impl__obj > _result_ = new GLTexture_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic GLTexture_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLTexture_Impl__obj > _result_ = new GLTexture_Impl__obj();
	_result_->__construct();
	return _result_;}

::opengl::GLObject GLTexture_Impl__obj::_new( int _id){
	HX_STACK_FRAME("opengl._WebGL.GLTexture_Impl_","_new",0x0e98000e,"opengl._WebGL.GLTexture_Impl_._new","opengl/WebGL.hx",989,0x584405a5)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(989)
	::opengl::GLObject tmp = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(989)
	::opengl::GLObject tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(989)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLTexture_Impl__obj,_new,return )

int GLTexture_Impl__obj::toInt( ::opengl::GLObject this1){
	HX_STACK_FRAME("opengl._WebGL.GLTexture_Impl_","toInt",0xce662ae7,"opengl._WebGL.GLTexture_Impl_.toInt","opengl/WebGL.hx",990,0x584405a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(990)
	bool tmp = (this1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(990)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(990)
	if ((tmp)){
		HX_STACK_LINE(990)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(990)
		tmp1 = this1->id;
	}
	HX_STACK_LINE(990)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLTexture_Impl__obj,toInt,return )

::opengl::GLObject GLTexture_Impl__obj::fromInt( int _id){
	HX_STACK_FRAME("opengl._WebGL.GLTexture_Impl_","fromInt",0xa1ca1d18,"opengl._WebGL.GLTexture_Impl_.fromInt","opengl/WebGL.hx",991,0x584405a5)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(991)
	::opengl::GLObject tmp = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(991)
	::opengl::GLObject tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(991)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLTexture_Impl__obj,fromInt,return )

Dynamic GLTexture_Impl__obj::toDynamic( ::opengl::GLObject this1){
	HX_STACK_FRAME("opengl._WebGL.GLTexture_Impl_","toDynamic",0x315e1977,"opengl._WebGL.GLTexture_Impl_.toDynamic","opengl/WebGL.hx",992,0x584405a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(992)
	bool tmp = (this1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(992)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(992)
	if ((tmp)){
		HX_STACK_LINE(992)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(992)
		tmp1 = this1->id;
	}
	HX_STACK_LINE(992)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLTexture_Impl__obj,toDynamic,return )

::opengl::GLObject GLTexture_Impl__obj::fromDynamic( Dynamic _id){
	HX_STACK_FRAME("opengl._WebGL.GLTexture_Impl_","fromDynamic",0x21457828,"opengl._WebGL.GLTexture_Impl_.fromDynamic","opengl/WebGL.hx",993,0x584405a5)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(993)
	::opengl::GLObject tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(993)
	{
		HX_STACK_LINE(993)
		int _id1 = _id;		HX_STACK_VAR(_id1,"_id1");
		HX_STACK_LINE(993)
		::opengl::GLObject tmp1 = ::opengl::GLObject_obj::__new(_id1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(993)
		tmp = tmp1;
	}
	HX_STACK_LINE(993)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLTexture_Impl__obj,fromDynamic,return )

::String GLTexture_Impl__obj::toString( ::opengl::GLObject this1){
	HX_STACK_FRAME("opengl._WebGL.GLTexture_Impl_","toString",0x83f715d9,"opengl._WebGL.GLTexture_Impl_.toString","opengl/WebGL.hx",994,0x584405a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(994)
	bool tmp = (this1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(994)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(994)
	if ((tmp)){
		HX_STACK_LINE(994)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(994)
		tmp1 = this1->id;
	}
	HX_STACK_LINE(994)
	::String tmp2 = (HX_HCSTRING("GLTexture(","\x32","\x1e","\xd3","\x33") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(994)
	::String tmp3 = (tmp2 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(994)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLTexture_Impl__obj,toString,return )


GLTexture_Impl__obj::GLTexture_Impl__obj()
{
}

bool GLTexture_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(GLTexture_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLTexture_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class GLTexture_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("toInt","\x34","\xbe","\x11","\x14"),
	HX_HCSTRING("fromInt","\xa5","\xdd","\xfa","\x57"),
	HX_HCSTRING("toDynamic","\x44","\xd7","\xa9","\x65"),
	HX_HCSTRING("fromDynamic","\x35","\x03","\x56","\xce"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void GLTexture_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("opengl._WebGL.GLTexture_Impl_","\xe1","\x74","\xfd","\x73");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLTexture_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLTexture_Impl__obj >;
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
