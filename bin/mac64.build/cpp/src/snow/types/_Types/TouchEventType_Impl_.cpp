#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_TouchEventType_Impl_
#include <snow/types/_Types/TouchEventType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void TouchEventType_Impl__obj::__construct()
{
	return null();
}

//TouchEventType_Impl__obj::~TouchEventType_Impl__obj() { }

Dynamic TouchEventType_Impl__obj::__CreateEmpty() { return  new TouchEventType_Impl__obj; }
hx::ObjectPtr< TouchEventType_Impl__obj > TouchEventType_Impl__obj::__new()
{  hx::ObjectPtr< TouchEventType_Impl__obj > _result_ = new TouchEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic TouchEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TouchEventType_Impl__obj > _result_ = new TouchEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

int TouchEventType_Impl__obj::te_unknown;

int TouchEventType_Impl__obj::te_move;

int TouchEventType_Impl__obj::te_down;

int TouchEventType_Impl__obj::te_up;

::String TouchEventType_Impl__obj::toString( int this1){
	HX_STACK_FRAME("snow.types._Types.TouchEventType_Impl_","toString",0x8b12d5d1,"snow.types._Types.TouchEventType_Impl_.toString","snow/types/Types.hx",960,0x72b41ce7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(961)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(961)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(961)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(962)
			tmp1 = HX_HCSTRING("te_unknown","\x7c","\x3b","\x30","\x76");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(963)
			tmp1 = HX_HCSTRING("te_move","\xdf","\x3f","\x37","\x35");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(964)
			tmp1 = HX_HCSTRING("te_down","\x30","\x55","\x44","\x2f");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(965)
			tmp1 = HX_HCSTRING("te_up","\xa9","\x53","\x86","\x0d");
		}
		;break;
		default: {
			HX_STACK_LINE(966)
			tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
		}
	}
	HX_STACK_LINE(961)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TouchEventType_Impl__obj,toString,return )


TouchEventType_Impl__obj::TouchEventType_Impl__obj()
{
}

bool TouchEventType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &TouchEventType_Impl__obj::te_unknown,HX_HCSTRING("te_unknown","\x7c","\x3b","\x30","\x76")},
	{hx::fsInt,(void *) &TouchEventType_Impl__obj::te_move,HX_HCSTRING("te_move","\xdf","\x3f","\x37","\x35")},
	{hx::fsInt,(void *) &TouchEventType_Impl__obj::te_down,HX_HCSTRING("te_down","\x30","\x55","\x44","\x2f")},
	{hx::fsInt,(void *) &TouchEventType_Impl__obj::te_up,HX_HCSTRING("te_up","\xa9","\x53","\x86","\x0d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TouchEventType_Impl__obj::te_unknown,"te_unknown");
	HX_MARK_MEMBER_NAME(TouchEventType_Impl__obj::te_move,"te_move");
	HX_MARK_MEMBER_NAME(TouchEventType_Impl__obj::te_down,"te_down");
	HX_MARK_MEMBER_NAME(TouchEventType_Impl__obj::te_up,"te_up");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TouchEventType_Impl__obj::te_unknown,"te_unknown");
	HX_VISIT_MEMBER_NAME(TouchEventType_Impl__obj::te_move,"te_move");
	HX_VISIT_MEMBER_NAME(TouchEventType_Impl__obj::te_down,"te_down");
	HX_VISIT_MEMBER_NAME(TouchEventType_Impl__obj::te_up,"te_up");
};

#endif

hx::Class TouchEventType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("te_unknown","\x7c","\x3b","\x30","\x76"),
	HX_HCSTRING("te_move","\xdf","\x3f","\x37","\x35"),
	HX_HCSTRING("te_down","\x30","\x55","\x44","\x2f"),
	HX_HCSTRING("te_up","\xa9","\x53","\x86","\x0d"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void TouchEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.TouchEventType_Impl_","\xe9","\x93","\x39","\x8c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TouchEventType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TouchEventType_Impl__obj >;
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

void TouchEventType_Impl__obj::__boot()
{
	te_unknown= (int)0;
	te_move= (int)1;
	te_down= (int)2;
	te_up= (int)3;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
