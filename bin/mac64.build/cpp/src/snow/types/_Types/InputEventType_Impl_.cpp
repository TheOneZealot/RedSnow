#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_InputEventType_Impl_
#include <snow/types/_Types/InputEventType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void InputEventType_Impl__obj::__construct()
{
	return null();
}

//InputEventType_Impl__obj::~InputEventType_Impl__obj() { }

Dynamic InputEventType_Impl__obj::__CreateEmpty() { return  new InputEventType_Impl__obj; }
hx::ObjectPtr< InputEventType_Impl__obj > InputEventType_Impl__obj::__new()
{  hx::ObjectPtr< InputEventType_Impl__obj > _result_ = new InputEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic InputEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InputEventType_Impl__obj > _result_ = new InputEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

int InputEventType_Impl__obj::ie_unknown;

int InputEventType_Impl__obj::ie_key;

int InputEventType_Impl__obj::ie_text;

int InputEventType_Impl__obj::ie_mouse;

int InputEventType_Impl__obj::ie_touch;

int InputEventType_Impl__obj::ie_gamepad;

int InputEventType_Impl__obj::ie_joystick;

::String InputEventType_Impl__obj::toString( int this1){
	HX_STACK_FRAME("snow.types._Types.InputEventType_Impl_","toString",0xa3bfcb1c,"snow.types._Types.InputEventType_Impl_.toString","snow/types/Types.hx",1182,0x72b41ce7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1183)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1183)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1183)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(1184)
			tmp1 = HX_HCSTRING("ie_unknown","\xe7","\x14","\xfd","\x32");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(1185)
			tmp1 = HX_HCSTRING("ie_key","\x7c","\x48","\x0e","\x62");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(1186)
			tmp1 = HX_HCSTRING("ie_text","\x30","\x0f","\x64","\x70");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(1187)
			tmp1 = HX_HCSTRING("ie_mouse","\x42","\x06","\xf5","\xe5");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(1188)
			tmp1 = HX_HCSTRING("ie_touch","\xdc","\x07","\xc3","\xed");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(1189)
			tmp1 = HX_HCSTRING("ie_gamepad","\xfe","\xd1","\x07","\xdb");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(1190)
			tmp1 = HX_HCSTRING("ie_joystick","\xbf","\x20","\x23","\x9c");
		}
		;break;
		default: {
			HX_STACK_LINE(1191)
			tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
		}
	}
	HX_STACK_LINE(1183)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InputEventType_Impl__obj,toString,return )


InputEventType_Impl__obj::InputEventType_Impl__obj()
{
}

bool InputEventType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &InputEventType_Impl__obj::ie_unknown,HX_HCSTRING("ie_unknown","\xe7","\x14","\xfd","\x32")},
	{hx::fsInt,(void *) &InputEventType_Impl__obj::ie_key,HX_HCSTRING("ie_key","\x7c","\x48","\x0e","\x62")},
	{hx::fsInt,(void *) &InputEventType_Impl__obj::ie_text,HX_HCSTRING("ie_text","\x30","\x0f","\x64","\x70")},
	{hx::fsInt,(void *) &InputEventType_Impl__obj::ie_mouse,HX_HCSTRING("ie_mouse","\x42","\x06","\xf5","\xe5")},
	{hx::fsInt,(void *) &InputEventType_Impl__obj::ie_touch,HX_HCSTRING("ie_touch","\xdc","\x07","\xc3","\xed")},
	{hx::fsInt,(void *) &InputEventType_Impl__obj::ie_gamepad,HX_HCSTRING("ie_gamepad","\xfe","\xd1","\x07","\xdb")},
	{hx::fsInt,(void *) &InputEventType_Impl__obj::ie_joystick,HX_HCSTRING("ie_joystick","\xbf","\x20","\x23","\x9c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::ie_unknown,"ie_unknown");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::ie_key,"ie_key");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::ie_text,"ie_text");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::ie_mouse,"ie_mouse");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::ie_touch,"ie_touch");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::ie_gamepad,"ie_gamepad");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::ie_joystick,"ie_joystick");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::ie_unknown,"ie_unknown");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::ie_key,"ie_key");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::ie_text,"ie_text");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::ie_mouse,"ie_mouse");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::ie_touch,"ie_touch");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::ie_gamepad,"ie_gamepad");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::ie_joystick,"ie_joystick");
};

#endif

hx::Class InputEventType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ie_unknown","\xe7","\x14","\xfd","\x32"),
	HX_HCSTRING("ie_key","\x7c","\x48","\x0e","\x62"),
	HX_HCSTRING("ie_text","\x30","\x0f","\x64","\x70"),
	HX_HCSTRING("ie_mouse","\x42","\x06","\xf5","\xe5"),
	HX_HCSTRING("ie_touch","\xdc","\x07","\xc3","\xed"),
	HX_HCSTRING("ie_gamepad","\xfe","\xd1","\x07","\xdb"),
	HX_HCSTRING("ie_joystick","\xbf","\x20","\x23","\x9c"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void InputEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.InputEventType_Impl_","\xfe","\x73","\x4c","\x50");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InputEventType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< InputEventType_Impl__obj >;
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

void InputEventType_Impl__obj::__boot()
{
	ie_unknown= (int)0;
	ie_key= (int)1;
	ie_text= (int)2;
	ie_mouse= (int)3;
	ie_touch= (int)4;
	ie_gamepad= (int)5;
	ie_joystick= (int)6;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
