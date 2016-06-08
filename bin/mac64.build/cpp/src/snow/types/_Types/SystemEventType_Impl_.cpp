#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_SystemEventType_Impl_
#include <snow/types/_Types/SystemEventType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void SystemEventType_Impl__obj::__construct()
{
	return null();
}

//SystemEventType_Impl__obj::~SystemEventType_Impl__obj() { }

Dynamic SystemEventType_Impl__obj::__CreateEmpty() { return  new SystemEventType_Impl__obj; }
hx::ObjectPtr< SystemEventType_Impl__obj > SystemEventType_Impl__obj::__new()
{  hx::ObjectPtr< SystemEventType_Impl__obj > _result_ = new SystemEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic SystemEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SystemEventType_Impl__obj > _result_ = new SystemEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

int SystemEventType_Impl__obj::se_unknown;

int SystemEventType_Impl__obj::se_init;

int SystemEventType_Impl__obj::se_ready;

int SystemEventType_Impl__obj::se_tick;

int SystemEventType_Impl__obj::se_freeze;

int SystemEventType_Impl__obj::se_unfreeze;

int SystemEventType_Impl__obj::se_suspend;

int SystemEventType_Impl__obj::se_shutdown;

int SystemEventType_Impl__obj::se_window;

int SystemEventType_Impl__obj::se_input;

int SystemEventType_Impl__obj::se_quit;

int SystemEventType_Impl__obj::se_app_terminating;

int SystemEventType_Impl__obj::se_app_lowmemory;

int SystemEventType_Impl__obj::se_app_willenterbackground;

int SystemEventType_Impl__obj::se_app_didenterbackground;

int SystemEventType_Impl__obj::se_app_willenterforeground;

int SystemEventType_Impl__obj::se_app_didenterforeground;

::String SystemEventType_Impl__obj::toString( int this1){
	HX_STACK_FRAME("snow.types._Types.SystemEventType_Impl_","toString",0xaaa8fb29,"snow.types._Types.SystemEventType_Impl_.toString","snow/types/Types.hx",1085,0x72b41ce7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1086)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1086)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1086)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(1087)
			tmp1 = HX_HCSTRING("se_unknown","\x9d","\xc3","\xe5","\xb5");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(1088)
			tmp1 = HX_HCSTRING("se_init","\x1d","\x21","\xfc","\x08");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(1089)
			tmp1 = HX_HCSTRING("se_ready","\xb6","\x05","\x43","\xfc");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(1090)
			tmp1 = HX_HCSTRING("se_tick","\x6a","\xa9","\x3d","\x10");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(1091)
			tmp1 = HX_HCSTRING("se_freeze","\xa4","\xcd","\xf4","\x70");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(1092)
			tmp1 = HX_HCSTRING("se_unfreeze","\xfd","\x29","\x4d","\xba");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(1093)
			tmp1 = HX_HCSTRING("se_shutdown","\x23","\x6d","\xed","\x73");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(1094)
			tmp1 = HX_HCSTRING("se_window","\x3d","\xd7","\x5c","\x14");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(1095)
			tmp1 = HX_HCSTRING("se_input","\x5d","\x29","\xa6","\xd3");
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(1096)
			tmp1 = HX_HCSTRING("se_quit","\xdc","\x25","\x4b","\x0e");
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(1097)
			tmp1 = HX_HCSTRING("se_app_terminating","\x13","\xb9","\xf1","\x1d");
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(1098)
			tmp1 = HX_HCSTRING("se_app_lowmemory","\x8a","\x22","\xcd","\x92");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(1099)
			tmp1 = HX_HCSTRING("se_app_willenterbackground","\x69","\x64","\x7f","\xc1");
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(1100)
			tmp1 = HX_HCSTRING("se_app_didenterbackground","\x12","\xce","\x28","\x14");
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(1101)
			tmp1 = HX_HCSTRING("se_app_willenterforeground","\x3e","\xe9","\x50","\xac");
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(1102)
			tmp1 = HX_HCSTRING("se_app_didenterforeground","\xe7","\x52","\xfa","\xfe");
		}
		;break;
		default: {
			HX_STACK_LINE(1103)
			tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
		}
	}
	HX_STACK_LINE(1086)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemEventType_Impl__obj,toString,return )


SystemEventType_Impl__obj::SystemEventType_Impl__obj()
{
}

bool SystemEventType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::se_unknown,HX_HCSTRING("se_unknown","\x9d","\xc3","\xe5","\xb5")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::se_init,HX_HCSTRING("se_init","\x1d","\x21","\xfc","\x08")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::se_ready,HX_HCSTRING("se_ready","\xb6","\x05","\x43","\xfc")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::se_tick,HX_HCSTRING("se_tick","\x6a","\xa9","\x3d","\x10")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::se_freeze,HX_HCSTRING("se_freeze","\xa4","\xcd","\xf4","\x70")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::se_unfreeze,HX_HCSTRING("se_unfreeze","\xfd","\x29","\x4d","\xba")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::se_suspend,HX_HCSTRING("se_suspend","\x8f","\xcf","\xb9","\xcb")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::se_shutdown,HX_HCSTRING("se_shutdown","\x23","\x6d","\xed","\x73")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::se_window,HX_HCSTRING("se_window","\x3d","\xd7","\x5c","\x14")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::se_input,HX_HCSTRING("se_input","\x5d","\x29","\xa6","\xd3")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::se_quit,HX_HCSTRING("se_quit","\xdc","\x25","\x4b","\x0e")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::se_app_terminating,HX_HCSTRING("se_app_terminating","\x13","\xb9","\xf1","\x1d")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::se_app_lowmemory,HX_HCSTRING("se_app_lowmemory","\x8a","\x22","\xcd","\x92")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::se_app_willenterbackground,HX_HCSTRING("se_app_willenterbackground","\x69","\x64","\x7f","\xc1")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::se_app_didenterbackground,HX_HCSTRING("se_app_didenterbackground","\x12","\xce","\x28","\x14")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::se_app_willenterforeground,HX_HCSTRING("se_app_willenterforeground","\x3e","\xe9","\x50","\xac")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::se_app_didenterforeground,HX_HCSTRING("se_app_didenterforeground","\xe7","\x52","\xfa","\xfe")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::se_unknown,"se_unknown");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::se_init,"se_init");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::se_ready,"se_ready");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::se_tick,"se_tick");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::se_freeze,"se_freeze");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::se_unfreeze,"se_unfreeze");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::se_suspend,"se_suspend");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::se_shutdown,"se_shutdown");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::se_window,"se_window");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::se_input,"se_input");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::se_quit,"se_quit");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::se_app_terminating,"se_app_terminating");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::se_app_lowmemory,"se_app_lowmemory");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::se_app_willenterbackground,"se_app_willenterbackground");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::se_app_didenterbackground,"se_app_didenterbackground");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::se_app_willenterforeground,"se_app_willenterforeground");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::se_app_didenterforeground,"se_app_didenterforeground");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::se_unknown,"se_unknown");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::se_init,"se_init");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::se_ready,"se_ready");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::se_tick,"se_tick");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::se_freeze,"se_freeze");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::se_unfreeze,"se_unfreeze");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::se_suspend,"se_suspend");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::se_shutdown,"se_shutdown");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::se_window,"se_window");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::se_input,"se_input");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::se_quit,"se_quit");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::se_app_terminating,"se_app_terminating");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::se_app_lowmemory,"se_app_lowmemory");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::se_app_willenterbackground,"se_app_willenterbackground");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::se_app_didenterbackground,"se_app_didenterbackground");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::se_app_willenterforeground,"se_app_willenterforeground");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::se_app_didenterforeground,"se_app_didenterforeground");
};

#endif

hx::Class SystemEventType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("se_unknown","\x9d","\xc3","\xe5","\xb5"),
	HX_HCSTRING("se_init","\x1d","\x21","\xfc","\x08"),
	HX_HCSTRING("se_ready","\xb6","\x05","\x43","\xfc"),
	HX_HCSTRING("se_tick","\x6a","\xa9","\x3d","\x10"),
	HX_HCSTRING("se_freeze","\xa4","\xcd","\xf4","\x70"),
	HX_HCSTRING("se_unfreeze","\xfd","\x29","\x4d","\xba"),
	HX_HCSTRING("se_suspend","\x8f","\xcf","\xb9","\xcb"),
	HX_HCSTRING("se_shutdown","\x23","\x6d","\xed","\x73"),
	HX_HCSTRING("se_window","\x3d","\xd7","\x5c","\x14"),
	HX_HCSTRING("se_input","\x5d","\x29","\xa6","\xd3"),
	HX_HCSTRING("se_quit","\xdc","\x25","\x4b","\x0e"),
	HX_HCSTRING("se_app_terminating","\x13","\xb9","\xf1","\x1d"),
	HX_HCSTRING("se_app_lowmemory","\x8a","\x22","\xcd","\x92"),
	HX_HCSTRING("se_app_willenterbackground","\x69","\x64","\x7f","\xc1"),
	HX_HCSTRING("se_app_didenterbackground","\x12","\xce","\x28","\x14"),
	HX_HCSTRING("se_app_willenterforeground","\x3e","\xe9","\x50","\xac"),
	HX_HCSTRING("se_app_didenterforeground","\xe7","\x52","\xfa","\xfe"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void SystemEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.SystemEventType_Impl_","\x91","\x79","\x5d","\x5e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SystemEventType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SystemEventType_Impl__obj >;
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

void SystemEventType_Impl__obj::__boot()
{
	se_unknown= (int)0;
	se_init= (int)1;
	se_ready= (int)2;
	se_tick= (int)3;
	se_freeze= (int)4;
	se_unfreeze= (int)5;
	se_suspend= (int)6;
	se_shutdown= (int)7;
	se_window= (int)8;
	se_input= (int)9;
	se_quit= (int)10;
	se_app_terminating= (int)11;
	se_app_lowmemory= (int)12;
	se_app_willenterbackground= (int)13;
	se_app_didenterbackground= (int)14;
	se_app_willenterforeground= (int)15;
	se_app_didenterforeground= (int)16;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
