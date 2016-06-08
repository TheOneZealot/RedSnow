#include <hxcpp.h>

#ifndef INCLUDED_opengl_GLObject
#include <opengl/GLObject.h>
#endif
#ifndef INCLUDED_opengl__WebGL_GLShader_Impl_
#include <opengl/_WebGL/GLShader_Impl_.h>
#endif
namespace opengl{
namespace _WebGL{

Void GLShader_Impl__obj::__construct()
{
	return null();
}

//GLShader_Impl__obj::~GLShader_Impl__obj() { }

Dynamic GLShader_Impl__obj::__CreateEmpty() { return  new GLShader_Impl__obj; }
hx::ObjectPtr< GLShader_Impl__obj > GLShader_Impl__obj::__new()
{  hx::ObjectPtr< GLShader_Impl__obj > _result_ = new GLShader_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic GLShader_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLShader_Impl__obj > _result_ = new GLShader_Impl__obj();
	_result_->__construct();
	return _result_;}

::opengl::GLObject GLShader_Impl__obj::_new( int _id){
	HX_STACK_FRAME("opengl._WebGL.GLShader_Impl_","_new",0xa184a110,"opengl._WebGL.GLShader_Impl_._new","opengl/WebGL.hx",980,0x584405a5)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(980)
	::opengl::GLObject tmp = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(980)
	::opengl::GLObject tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(980)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLShader_Impl__obj,_new,return )

int GLShader_Impl__obj::toInt( ::opengl::GLObject this1){
	HX_STACK_FRAME("opengl._WebGL.GLShader_Impl_","toInt",0xca866ba5,"opengl._WebGL.GLShader_Impl_.toInt","opengl/WebGL.hx",981,0x584405a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(981)
	bool tmp = (this1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(981)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(981)
	if ((tmp)){
		HX_STACK_LINE(981)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(981)
		tmp1 = this1->id;
	}
	HX_STACK_LINE(981)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLShader_Impl__obj,toInt,return )

::opengl::GLObject GLShader_Impl__obj::fromInt( int _id){
	HX_STACK_FRAME("opengl._WebGL.GLShader_Impl_","fromInt",0x170a8956,"opengl._WebGL.GLShader_Impl_.fromInt","opengl/WebGL.hx",982,0x584405a5)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(982)
	::opengl::GLObject tmp = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(982)
	::opengl::GLObject tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(982)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLShader_Impl__obj,fromInt,return )

Dynamic GLShader_Impl__obj::toDynamic( ::opengl::GLObject this1){
	HX_STACK_FRAME("opengl._WebGL.GLShader_Impl_","toDynamic",0xc8c09135,"opengl._WebGL.GLShader_Impl_.toDynamic","opengl/WebGL.hx",983,0x584405a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(983)
	bool tmp = (this1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(983)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(983)
	if ((tmp)){
		HX_STACK_LINE(983)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(983)
		tmp1 = this1->id;
	}
	HX_STACK_LINE(983)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLShader_Impl__obj,toDynamic,return )

::opengl::GLObject GLShader_Impl__obj::fromDynamic( Dynamic _id){
	HX_STACK_FRAME("opengl._WebGL.GLShader_Impl_","fromDynamic",0x3003db66,"opengl._WebGL.GLShader_Impl_.fromDynamic","opengl/WebGL.hx",984,0x584405a5)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(984)
	::opengl::GLObject tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(984)
	{
		HX_STACK_LINE(984)
		int _id1 = _id;		HX_STACK_VAR(_id1,"_id1");
		HX_STACK_LINE(984)
		::opengl::GLObject tmp1 = ::opengl::GLObject_obj::__new(_id1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(984)
		tmp = tmp1;
	}
	HX_STACK_LINE(984)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLShader_Impl__obj,fromDynamic,return )

::String GLShader_Impl__obj::toString( ::opengl::GLObject this1){
	HX_STACK_FRAME("opengl._WebGL.GLShader_Impl_","toString",0xa7155fdb,"opengl._WebGL.GLShader_Impl_.toString","opengl/WebGL.hx",985,0x584405a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(985)
	bool tmp = (this1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(985)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(985)
	if ((tmp)){
		HX_STACK_LINE(985)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(985)
		tmp1 = this1->id;
	}
	HX_STACK_LINE(985)
	::String tmp2 = (HX_HCSTRING("GLShader(","\xbe","\xa9","\xc5","\xa8") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(985)
	::String tmp3 = (tmp2 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(985)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLShader_Impl__obj,toString,return )


GLShader_Impl__obj::GLShader_Impl__obj()
{
}

bool GLShader_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(GLShader_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLShader_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class GLShader_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("toInt","\x34","\xbe","\x11","\x14"),
	HX_HCSTRING("fromInt","\xa5","\xdd","\xfa","\x57"),
	HX_HCSTRING("toDynamic","\x44","\xd7","\xa9","\x65"),
	HX_HCSTRING("fromDynamic","\x35","\x03","\x56","\xce"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void GLShader_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("opengl._WebGL.GLShader_Impl_","\x1f","\x73","\x98","\x22");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLShader_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLShader_Impl__obj >;
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
