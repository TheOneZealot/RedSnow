#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_GamepadEventType_Impl_
#include <snow/types/_Types/GamepadEventType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void GamepadEventType_Impl__obj::__construct()
{
	return null();
}

//GamepadEventType_Impl__obj::~GamepadEventType_Impl__obj() { }

Dynamic GamepadEventType_Impl__obj::__CreateEmpty() { return  new GamepadEventType_Impl__obj; }
hx::ObjectPtr< GamepadEventType_Impl__obj > GamepadEventType_Impl__obj::__new()
{  hx::ObjectPtr< GamepadEventType_Impl__obj > _result_ = new GamepadEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic GamepadEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GamepadEventType_Impl__obj > _result_ = new GamepadEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

int GamepadEventType_Impl__obj::ge_unknown;

int GamepadEventType_Impl__obj::ge_axis;

int GamepadEventType_Impl__obj::ge_down;

int GamepadEventType_Impl__obj::ge_up;

int GamepadEventType_Impl__obj::ge_device;

::String GamepadEventType_Impl__obj::toString( int this1){
	HX_STACK_FRAME("snow.types._Types.GamepadEventType_Impl_","toString",0x42a317b3,"snow.types._Types.GamepadEventType_Impl_.toString","snow/types/Types.hx",986,0x72b41ce7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(987)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(987)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(987)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(988)
			tmp1 = HX_HCSTRING("ge_unknown","\x29","\x25","\x68","\xb2");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(989)
			tmp1 = HX_HCSTRING("ge_axis","\xa2","\x71","\xb8","\x10");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(990)
			tmp1 = HX_HCSTRING("ge_down","\x63","\x4d","\xad","\x12");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(991)
			tmp1 = HX_HCSTRING("ge_up","\x1c","\xc9","\x50","\x91");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(992)
			tmp1 = HX_HCSTRING("ge_device","\xd7","\x33","\xf7","\x4f");
		}
		;break;
		default: {
			HX_STACK_LINE(993)
			tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
		}
	}
	HX_STACK_LINE(987)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GamepadEventType_Impl__obj,toString,return )


GamepadEventType_Impl__obj::GamepadEventType_Impl__obj()
{
}

bool GamepadEventType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &GamepadEventType_Impl__obj::ge_unknown,HX_HCSTRING("ge_unknown","\x29","\x25","\x68","\xb2")},
	{hx::fsInt,(void *) &GamepadEventType_Impl__obj::ge_axis,HX_HCSTRING("ge_axis","\xa2","\x71","\xb8","\x10")},
	{hx::fsInt,(void *) &GamepadEventType_Impl__obj::ge_down,HX_HCSTRING("ge_down","\x63","\x4d","\xad","\x12")},
	{hx::fsInt,(void *) &GamepadEventType_Impl__obj::ge_up,HX_HCSTRING("ge_up","\x1c","\xc9","\x50","\x91")},
	{hx::fsInt,(void *) &GamepadEventType_Impl__obj::ge_device,HX_HCSTRING("ge_device","\xd7","\x33","\xf7","\x4f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GamepadEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GamepadEventType_Impl__obj::ge_unknown,"ge_unknown");
	HX_MARK_MEMBER_NAME(GamepadEventType_Impl__obj::ge_axis,"ge_axis");
	HX_MARK_MEMBER_NAME(GamepadEventType_Impl__obj::ge_down,"ge_down");
	HX_MARK_MEMBER_NAME(GamepadEventType_Impl__obj::ge_up,"ge_up");
	HX_MARK_MEMBER_NAME(GamepadEventType_Impl__obj::ge_device,"ge_device");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GamepadEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GamepadEventType_Impl__obj::ge_unknown,"ge_unknown");
	HX_VISIT_MEMBER_NAME(GamepadEventType_Impl__obj::ge_axis,"ge_axis");
	HX_VISIT_MEMBER_NAME(GamepadEventType_Impl__obj::ge_down,"ge_down");
	HX_VISIT_MEMBER_NAME(GamepadEventType_Impl__obj::ge_up,"ge_up");
	HX_VISIT_MEMBER_NAME(GamepadEventType_Impl__obj::ge_device,"ge_device");
};

#endif

hx::Class GamepadEventType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ge_unknown","\x29","\x25","\x68","\xb2"),
	HX_HCSTRING("ge_axis","\xa2","\x71","\xb8","\x10"),
	HX_HCSTRING("ge_down","\x63","\x4d","\xad","\x12"),
	HX_HCSTRING("ge_up","\x1c","\xc9","\x50","\x91"),
	HX_HCSTRING("ge_device","\xd7","\x33","\xf7","\x4f"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void GamepadEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.GamepadEventType_Impl_","\x47","\x16","\x01","\x10");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GamepadEventType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GamepadEventType_Impl__obj >;
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

void GamepadEventType_Impl__obj::__boot()
{
	ge_unknown= (int)0;
	ge_axis= (int)1;
	ge_down= (int)2;
	ge_up= (int)3;
	ge_device= (int)4;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
