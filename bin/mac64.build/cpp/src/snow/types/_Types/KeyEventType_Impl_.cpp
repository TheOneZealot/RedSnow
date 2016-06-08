#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_KeyEventType_Impl_
#include <snow/types/_Types/KeyEventType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void KeyEventType_Impl__obj::__construct()
{
	return null();
}

//KeyEventType_Impl__obj::~KeyEventType_Impl__obj() { }

Dynamic KeyEventType_Impl__obj::__CreateEmpty() { return  new KeyEventType_Impl__obj; }
hx::ObjectPtr< KeyEventType_Impl__obj > KeyEventType_Impl__obj::__new()
{  hx::ObjectPtr< KeyEventType_Impl__obj > _result_ = new KeyEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic KeyEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KeyEventType_Impl__obj > _result_ = new KeyEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

int KeyEventType_Impl__obj::ke_unknown;

int KeyEventType_Impl__obj::ke_down;

int KeyEventType_Impl__obj::ke_up;

::String KeyEventType_Impl__obj::toString( int this1){
	HX_STACK_FRAME("snow.types._Types.KeyEventType_Impl_","toString",0xa37b44b1,"snow.types._Types.KeyEventType_Impl_.toString","snow/types/Types.hx",910,0x72b41ce7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(911)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(911)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(911)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(912)
			tmp1 = HX_HCSTRING("ke_unknown","\xa5","\x04","\x92","\xb3");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(913)
			tmp1 = HX_HCSTRING("ke_down","\x67","\x28","\x03","\xb9");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(914)
			tmp1 = HX_HCSTRING("ke_up","\x20","\x1b","\xeb","\xde");
		}
		;break;
		default: {
			HX_STACK_LINE(915)
			tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
		}
	}
	HX_STACK_LINE(911)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(KeyEventType_Impl__obj,toString,return )


KeyEventType_Impl__obj::KeyEventType_Impl__obj()
{
}

bool KeyEventType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &KeyEventType_Impl__obj::ke_unknown,HX_HCSTRING("ke_unknown","\xa5","\x04","\x92","\xb3")},
	{hx::fsInt,(void *) &KeyEventType_Impl__obj::ke_down,HX_HCSTRING("ke_down","\x67","\x28","\x03","\xb9")},
	{hx::fsInt,(void *) &KeyEventType_Impl__obj::ke_up,HX_HCSTRING("ke_up","\x20","\x1b","\xeb","\xde")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(KeyEventType_Impl__obj::ke_unknown,"ke_unknown");
	HX_MARK_MEMBER_NAME(KeyEventType_Impl__obj::ke_down,"ke_down");
	HX_MARK_MEMBER_NAME(KeyEventType_Impl__obj::ke_up,"ke_up");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(KeyEventType_Impl__obj::ke_unknown,"ke_unknown");
	HX_VISIT_MEMBER_NAME(KeyEventType_Impl__obj::ke_down,"ke_down");
	HX_VISIT_MEMBER_NAME(KeyEventType_Impl__obj::ke_up,"ke_up");
};

#endif

hx::Class KeyEventType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ke_unknown","\xa5","\x04","\x92","\xb3"),
	HX_HCSTRING("ke_down","\x67","\x28","\x03","\xb9"),
	HX_HCSTRING("ke_up","\x20","\x1b","\xeb","\xde"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void KeyEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.KeyEventType_Impl_","\x09","\x81","\x1a","\xb2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &KeyEventType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< KeyEventType_Impl__obj >;
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

void KeyEventType_Impl__obj::__boot()
{
	ke_unknown= (int)0;
	ke_down= (int)1;
	ke_up= (int)2;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
