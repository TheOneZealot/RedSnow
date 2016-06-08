#include <hxcpp.h>

#ifndef INCLUDED_opengl__GL_IntRef_Impl_
#include <opengl/_GL/IntRef_Impl_.h>
#endif
namespace opengl{
namespace _GL{

Void IntRef_Impl__obj::__construct()
{
	return null();
}

//IntRef_Impl__obj::~IntRef_Impl__obj() { }

Dynamic IntRef_Impl__obj::__CreateEmpty() { return  new IntRef_Impl__obj; }
hx::ObjectPtr< IntRef_Impl__obj > IntRef_Impl__obj::__new()
{  hx::ObjectPtr< IntRef_Impl__obj > _result_ = new IntRef_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic IntRef_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntRef_Impl__obj > _result_ = new IntRef_Impl__obj();
	_result_->__construct();
	return _result_;}

::cpp::Pointer< int > IntRef_Impl__obj::fromInt( int _val){
	HX_STACK_FRAME("opengl._GL.IntRef_Impl_","fromInt",0xdbe27ce4,"opengl._GL.IntRef_Impl_.fromInt","opengl/GL.hx",13,0xd15e80d9)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(13)
	return ::cpp::Pointer< int >(::cpp::Pointer_obj::addressOf(_val));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IntRef_Impl__obj,fromInt,return )


IntRef_Impl__obj::IntRef_Impl__obj()
{
}

bool IntRef_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntRef_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntRef_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class IntRef_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromInt","\xa5","\xdd","\xfa","\x57"),
	::String(null()) };

void IntRef_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("opengl._GL.IntRef_Impl_","\xad","\x28","\x4b","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &IntRef_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< IntRef_Impl__obj >;
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
} // end namespace _GL
