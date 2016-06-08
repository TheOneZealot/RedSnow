#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_WindowEventType_Impl_
#include <snow/types/_Types/WindowEventType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void WindowEventType_Impl__obj::__construct()
{
	return null();
}

//WindowEventType_Impl__obj::~WindowEventType_Impl__obj() { }

Dynamic WindowEventType_Impl__obj::__CreateEmpty() { return  new WindowEventType_Impl__obj; }
hx::ObjectPtr< WindowEventType_Impl__obj > WindowEventType_Impl__obj::__new()
{  hx::ObjectPtr< WindowEventType_Impl__obj > _result_ = new WindowEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic WindowEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WindowEventType_Impl__obj > _result_ = new WindowEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

int WindowEventType_Impl__obj::we_unknown;

int WindowEventType_Impl__obj::we_shown;

int WindowEventType_Impl__obj::we_hidden;

int WindowEventType_Impl__obj::we_exposed;

int WindowEventType_Impl__obj::we_moved;

int WindowEventType_Impl__obj::we_resized;

int WindowEventType_Impl__obj::we_size_changed;

int WindowEventType_Impl__obj::we_minimized;

int WindowEventType_Impl__obj::we_maximized;

int WindowEventType_Impl__obj::we_restored;

int WindowEventType_Impl__obj::we_enter;

int WindowEventType_Impl__obj::we_leave;

int WindowEventType_Impl__obj::we_focus_gained;

int WindowEventType_Impl__obj::we_focus_lost;

int WindowEventType_Impl__obj::we_close;

::String WindowEventType_Impl__obj::toString( int this1){
	HX_STACK_FRAME("snow.types._Types.WindowEventType_Impl_","toString",0x2ba9332a,"snow.types._Types.WindowEventType_Impl_.toString","snow/types/Types.hx",1142,0x72b41ce7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1143)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1143)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1143)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(1144)
			tmp1 = HX_HCSTRING("we_unknown","\x19","\xa3","\x0f","\xb7");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(1145)
			tmp1 = HX_HCSTRING("we_shown","\xa0","\xb6","\x79","\x76");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(1146)
			tmp1 = HX_HCSTRING("we_hidden","\xbb","\xe6","\x2b","\x5a");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(1147)
			tmp1 = HX_HCSTRING("we_exposed","\x2f","\xe9","\xf6","\xfe");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(1148)
			tmp1 = HX_HCSTRING("we_moved","\x02","\xfa","\xb7","\x06");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(1149)
			tmp1 = HX_HCSTRING("we_resized","\x7f","\xdb","\x07","\x39");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(1150)
			tmp1 = HX_HCSTRING("we_size_changed","\x47","\x8e","\x40","\x39");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(1151)
			tmp1 = HX_HCSTRING("we_minimized","\xd5","\xbc","\xfc","\xeb");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(1152)
			tmp1 = HX_HCSTRING("we_maximized","\x67","\xcf","\x3f","\xc2");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(1153)
			tmp1 = HX_HCSTRING("we_restored","\xe7","\x1a","\x05","\xfc");
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(1154)
			tmp1 = HX_HCSTRING("we_enter","\xe7","\x9a","\xd8","\x6a");
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(1155)
			tmp1 = HX_HCSTRING("we_leave","\xc6","\x62","\xa5","\x6c");
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(1156)
			tmp1 = HX_HCSTRING("we_focus_gained","\x76","\x3d","\x1b","\x38");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(1157)
			tmp1 = HX_HCSTRING("we_focus_lost","\xbc","\x5a","\x87","\x59");
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(1158)
			tmp1 = HX_HCSTRING("we_close","\x87","\x45","\xb5","\x42");
		}
		;break;
		default: {
			HX_STACK_LINE(1159)
			tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
		}
	}
	HX_STACK_LINE(1143)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WindowEventType_Impl__obj,toString,return )


WindowEventType_Impl__obj::WindowEventType_Impl__obj()
{
}

bool WindowEventType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::we_unknown,HX_HCSTRING("we_unknown","\x19","\xa3","\x0f","\xb7")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::we_shown,HX_HCSTRING("we_shown","\xa0","\xb6","\x79","\x76")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::we_hidden,HX_HCSTRING("we_hidden","\xbb","\xe6","\x2b","\x5a")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::we_exposed,HX_HCSTRING("we_exposed","\x2f","\xe9","\xf6","\xfe")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::we_moved,HX_HCSTRING("we_moved","\x02","\xfa","\xb7","\x06")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::we_resized,HX_HCSTRING("we_resized","\x7f","\xdb","\x07","\x39")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::we_size_changed,HX_HCSTRING("we_size_changed","\x47","\x8e","\x40","\x39")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::we_minimized,HX_HCSTRING("we_minimized","\xd5","\xbc","\xfc","\xeb")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::we_maximized,HX_HCSTRING("we_maximized","\x67","\xcf","\x3f","\xc2")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::we_restored,HX_HCSTRING("we_restored","\xe7","\x1a","\x05","\xfc")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::we_enter,HX_HCSTRING("we_enter","\xe7","\x9a","\xd8","\x6a")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::we_leave,HX_HCSTRING("we_leave","\xc6","\x62","\xa5","\x6c")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::we_focus_gained,HX_HCSTRING("we_focus_gained","\x76","\x3d","\x1b","\x38")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::we_focus_lost,HX_HCSTRING("we_focus_lost","\xbc","\x5a","\x87","\x59")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::we_close,HX_HCSTRING("we_close","\x87","\x45","\xb5","\x42")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::we_unknown,"we_unknown");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::we_shown,"we_shown");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::we_hidden,"we_hidden");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::we_exposed,"we_exposed");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::we_moved,"we_moved");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::we_resized,"we_resized");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::we_size_changed,"we_size_changed");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::we_minimized,"we_minimized");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::we_maximized,"we_maximized");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::we_restored,"we_restored");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::we_enter,"we_enter");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::we_leave,"we_leave");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::we_focus_gained,"we_focus_gained");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::we_focus_lost,"we_focus_lost");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::we_close,"we_close");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::we_unknown,"we_unknown");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::we_shown,"we_shown");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::we_hidden,"we_hidden");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::we_exposed,"we_exposed");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::we_moved,"we_moved");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::we_resized,"we_resized");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::we_size_changed,"we_size_changed");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::we_minimized,"we_minimized");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::we_maximized,"we_maximized");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::we_restored,"we_restored");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::we_enter,"we_enter");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::we_leave,"we_leave");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::we_focus_gained,"we_focus_gained");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::we_focus_lost,"we_focus_lost");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::we_close,"we_close");
};

#endif

hx::Class WindowEventType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("we_unknown","\x19","\xa3","\x0f","\xb7"),
	HX_HCSTRING("we_shown","\xa0","\xb6","\x79","\x76"),
	HX_HCSTRING("we_hidden","\xbb","\xe6","\x2b","\x5a"),
	HX_HCSTRING("we_exposed","\x2f","\xe9","\xf6","\xfe"),
	HX_HCSTRING("we_moved","\x02","\xfa","\xb7","\x06"),
	HX_HCSTRING("we_resized","\x7f","\xdb","\x07","\x39"),
	HX_HCSTRING("we_size_changed","\x47","\x8e","\x40","\x39"),
	HX_HCSTRING("we_minimized","\xd5","\xbc","\xfc","\xeb"),
	HX_HCSTRING("we_maximized","\x67","\xcf","\x3f","\xc2"),
	HX_HCSTRING("we_restored","\xe7","\x1a","\x05","\xfc"),
	HX_HCSTRING("we_enter","\xe7","\x9a","\xd8","\x6a"),
	HX_HCSTRING("we_leave","\xc6","\x62","\xa5","\x6c"),
	HX_HCSTRING("we_focus_gained","\x76","\x3d","\x1b","\x38"),
	HX_HCSTRING("we_focus_lost","\xbc","\x5a","\x87","\x59"),
	HX_HCSTRING("we_close","\x87","\x45","\xb5","\x42"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void WindowEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.WindowEventType_Impl_","\xb0","\x45","\xa8","\x64");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WindowEventType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< WindowEventType_Impl__obj >;
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

void WindowEventType_Impl__obj::__boot()
{
	we_unknown= (int)0;
	we_shown= (int)1;
	we_hidden= (int)2;
	we_exposed= (int)3;
	we_moved= (int)4;
	we_resized= (int)5;
	we_size_changed= (int)6;
	we_minimized= (int)7;
	we_maximized= (int)8;
	we_restored= (int)9;
	we_enter= (int)10;
	we_leave= (int)11;
	we_focus_gained= (int)12;
	we_focus_lost= (int)13;
	we_close= (int)14;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
