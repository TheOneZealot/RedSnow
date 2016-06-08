#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_AudioState_Impl_
#include <snow/types/_Types/AudioState_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void AudioState_Impl__obj::__construct()
{
	return null();
}

//AudioState_Impl__obj::~AudioState_Impl__obj() { }

Dynamic AudioState_Impl__obj::__CreateEmpty() { return  new AudioState_Impl__obj; }
hx::ObjectPtr< AudioState_Impl__obj > AudioState_Impl__obj::__new()
{  hx::ObjectPtr< AudioState_Impl__obj > _result_ = new AudioState_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic AudioState_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioState_Impl__obj > _result_ = new AudioState_Impl__obj();
	_result_->__construct();
	return _result_;}

int AudioState_Impl__obj::as_invalid;

int AudioState_Impl__obj::as_paused;

int AudioState_Impl__obj::as_playing;

int AudioState_Impl__obj::as_stopped;

::String AudioState_Impl__obj::toString( int this1){
	HX_STACK_FRAME("snow.types._Types.AudioState_Impl_","toString",0x5c17396b,"snow.types._Types.AudioState_Impl_.toString","snow/types/Types.hx",282,0x72b41ce7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(283)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(283)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(283)
	switch( (int)(tmp)){
		case (int)-1: {
			HX_STACK_LINE(284)
			tmp1 = HX_HCSTRING("as_invalid","\x6a","\xcb","\xa9","\x13");
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(285)
			tmp1 = HX_HCSTRING("as_paused","\x9b","\x5f","\x1d","\xfd");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(286)
			tmp1 = HX_HCSTRING("as_playing","\xe1","\xff","\x79","\x62");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(287)
			tmp1 = HX_HCSTRING("as_stopped","\x80","\xc2","\xc3","\x1b");
		}
		;break;
		default: {
			HX_STACK_LINE(288)
			tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
		}
	}
	HX_STACK_LINE(283)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioState_Impl__obj,toString,return )


AudioState_Impl__obj::AudioState_Impl__obj()
{
}

bool AudioState_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &AudioState_Impl__obj::as_invalid,HX_HCSTRING("as_invalid","\x6a","\xcb","\xa9","\x13")},
	{hx::fsInt,(void *) &AudioState_Impl__obj::as_paused,HX_HCSTRING("as_paused","\x9b","\x5f","\x1d","\xfd")},
	{hx::fsInt,(void *) &AudioState_Impl__obj::as_playing,HX_HCSTRING("as_playing","\xe1","\xff","\x79","\x62")},
	{hx::fsInt,(void *) &AudioState_Impl__obj::as_stopped,HX_HCSTRING("as_stopped","\x80","\xc2","\xc3","\x1b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioState_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AudioState_Impl__obj::as_invalid,"as_invalid");
	HX_MARK_MEMBER_NAME(AudioState_Impl__obj::as_paused,"as_paused");
	HX_MARK_MEMBER_NAME(AudioState_Impl__obj::as_playing,"as_playing");
	HX_MARK_MEMBER_NAME(AudioState_Impl__obj::as_stopped,"as_stopped");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioState_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AudioState_Impl__obj::as_invalid,"as_invalid");
	HX_VISIT_MEMBER_NAME(AudioState_Impl__obj::as_paused,"as_paused");
	HX_VISIT_MEMBER_NAME(AudioState_Impl__obj::as_playing,"as_playing");
	HX_VISIT_MEMBER_NAME(AudioState_Impl__obj::as_stopped,"as_stopped");
};

#endif

hx::Class AudioState_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("as_invalid","\x6a","\xcb","\xa9","\x13"),
	HX_HCSTRING("as_paused","\x9b","\x5f","\x1d","\xfd"),
	HX_HCSTRING("as_playing","\xe1","\xff","\x79","\x62"),
	HX_HCSTRING("as_stopped","\x80","\xc2","\xc3","\x1b"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void AudioState_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.AudioState_Impl_","\x8f","\x0b","\x78","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AudioState_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AudioState_Impl__obj >;
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

void AudioState_Impl__obj::__boot()
{
	as_invalid= (int)-1;
	as_paused= (int)0;
	as_playing= (int)1;
	as_stopped= (int)2;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
