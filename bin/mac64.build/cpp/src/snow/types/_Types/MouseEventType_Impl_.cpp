#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_MouseEventType_Impl_
#include <snow/types/_Types/MouseEventType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void MouseEventType_Impl__obj::__construct()
{
	return null();
}

//MouseEventType_Impl__obj::~MouseEventType_Impl__obj() { }

Dynamic MouseEventType_Impl__obj::__CreateEmpty() { return  new MouseEventType_Impl__obj; }
hx::ObjectPtr< MouseEventType_Impl__obj > MouseEventType_Impl__obj::__new()
{  hx::ObjectPtr< MouseEventType_Impl__obj > _result_ = new MouseEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic MouseEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseEventType_Impl__obj > _result_ = new MouseEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

int MouseEventType_Impl__obj::me_unknown;

int MouseEventType_Impl__obj::me_move;

int MouseEventType_Impl__obj::me_down;

int MouseEventType_Impl__obj::me_up;

int MouseEventType_Impl__obj::me_wheel;

::String MouseEventType_Impl__obj::toString( int this1){
	HX_STACK_FRAME("snow.types._Types.MouseEventType_Impl_","toString",0x93b05637,"snow.types._Types.MouseEventType_Impl_.toString","snow/types/Types.hx",935,0x72b41ce7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(936)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(936)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(936)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(937)
			tmp1 = HX_HCSTRING("me_unknown","\x63","\xf4","\x26","\x34");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(938)
			tmp1 = HX_HCSTRING("me_move","\x98","\x00","\x21","\x12");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(939)
			tmp1 = HX_HCSTRING("me_down","\xe9","\x15","\x2e","\x0c");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(940)
			tmp1 = HX_HCSTRING("me_up","\x22","\x44","\xb8","\x05");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(941)
			tmp1 = HX_HCSTRING("me_wheel","\x34","\xed","\x13","\x88");
		}
		;break;
		default: {
			HX_STACK_LINE(942)
			tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
		}
	}
	HX_STACK_LINE(936)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MouseEventType_Impl__obj,toString,return )


MouseEventType_Impl__obj::MouseEventType_Impl__obj()
{
}

bool MouseEventType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &MouseEventType_Impl__obj::me_unknown,HX_HCSTRING("me_unknown","\x63","\xf4","\x26","\x34")},
	{hx::fsInt,(void *) &MouseEventType_Impl__obj::me_move,HX_HCSTRING("me_move","\x98","\x00","\x21","\x12")},
	{hx::fsInt,(void *) &MouseEventType_Impl__obj::me_down,HX_HCSTRING("me_down","\xe9","\x15","\x2e","\x0c")},
	{hx::fsInt,(void *) &MouseEventType_Impl__obj::me_up,HX_HCSTRING("me_up","\x22","\x44","\xb8","\x05")},
	{hx::fsInt,(void *) &MouseEventType_Impl__obj::me_wheel,HX_HCSTRING("me_wheel","\x34","\xed","\x13","\x88")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MouseEventType_Impl__obj::me_unknown,"me_unknown");
	HX_MARK_MEMBER_NAME(MouseEventType_Impl__obj::me_move,"me_move");
	HX_MARK_MEMBER_NAME(MouseEventType_Impl__obj::me_down,"me_down");
	HX_MARK_MEMBER_NAME(MouseEventType_Impl__obj::me_up,"me_up");
	HX_MARK_MEMBER_NAME(MouseEventType_Impl__obj::me_wheel,"me_wheel");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MouseEventType_Impl__obj::me_unknown,"me_unknown");
	HX_VISIT_MEMBER_NAME(MouseEventType_Impl__obj::me_move,"me_move");
	HX_VISIT_MEMBER_NAME(MouseEventType_Impl__obj::me_down,"me_down");
	HX_VISIT_MEMBER_NAME(MouseEventType_Impl__obj::me_up,"me_up");
	HX_VISIT_MEMBER_NAME(MouseEventType_Impl__obj::me_wheel,"me_wheel");
};

#endif

hx::Class MouseEventType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("me_unknown","\x63","\xf4","\x26","\x34"),
	HX_HCSTRING("me_move","\x98","\x00","\x21","\x12"),
	HX_HCSTRING("me_down","\xe9","\x15","\x2e","\x0c"),
	HX_HCSTRING("me_up","\x22","\x44","\xb8","\x05"),
	HX_HCSTRING("me_wheel","\x34","\xed","\x13","\x88"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void MouseEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.MouseEventType_Impl_","\x43","\xb8","\x25","\x99");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MouseEventType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MouseEventType_Impl__obj >;
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

void MouseEventType_Impl__obj::__boot()
{
	me_unknown= (int)0;
	me_move= (int)1;
	me_down= (int)2;
	me_up= (int)3;
	me_wheel= (int)4;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
