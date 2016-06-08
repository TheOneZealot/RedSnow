#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_AudioEvent_Impl_
#include <snow/types/_Types/AudioEvent_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void AudioEvent_Impl__obj::__construct()
{
	return null();
}

//AudioEvent_Impl__obj::~AudioEvent_Impl__obj() { }

Dynamic AudioEvent_Impl__obj::__CreateEmpty() { return  new AudioEvent_Impl__obj; }
hx::ObjectPtr< AudioEvent_Impl__obj > AudioEvent_Impl__obj::__new()
{  hx::ObjectPtr< AudioEvent_Impl__obj > _result_ = new AudioEvent_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic AudioEvent_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioEvent_Impl__obj > _result_ = new AudioEvent_Impl__obj();
	_result_->__construct();
	return _result_;}

int AudioEvent_Impl__obj::ae_end;

int AudioEvent_Impl__obj::ae_destroyed;

int AudioEvent_Impl__obj::ae_destroyed_source;

::String AudioEvent_Impl__obj::toString( int this1){
	HX_STACK_FRAME("snow.types._Types.AudioEvent_Impl_","toString",0xb05b9982,"snow.types._Types.AudioEvent_Impl_.toString","snow/types/Types.hx",259,0x72b41ce7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(260)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(260)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(260)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(261)
			tmp1 = HX_HCSTRING("ae_end","\xc0","\xdf","\x2e","\x2f");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(262)
			tmp1 = HX_HCSTRING("ae_destroyed","\x7e","\x8d","\x12","\x11");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(263)
			tmp1 = HX_HCSTRING("ae_destroyed_source","\xbc","\x00","\x86","\xa5");
		}
		;break;
		default: {
			HX_STACK_LINE(264)
			tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
		}
	}
	HX_STACK_LINE(260)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioEvent_Impl__obj,toString,return )


AudioEvent_Impl__obj::AudioEvent_Impl__obj()
{
}

bool AudioEvent_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &AudioEvent_Impl__obj::ae_end,HX_HCSTRING("ae_end","\xc0","\xdf","\x2e","\x2f")},
	{hx::fsInt,(void *) &AudioEvent_Impl__obj::ae_destroyed,HX_HCSTRING("ae_destroyed","\x7e","\x8d","\x12","\x11")},
	{hx::fsInt,(void *) &AudioEvent_Impl__obj::ae_destroyed_source,HX_HCSTRING("ae_destroyed_source","\xbc","\x00","\x86","\xa5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioEvent_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AudioEvent_Impl__obj::ae_end,"ae_end");
	HX_MARK_MEMBER_NAME(AudioEvent_Impl__obj::ae_destroyed,"ae_destroyed");
	HX_MARK_MEMBER_NAME(AudioEvent_Impl__obj::ae_destroyed_source,"ae_destroyed_source");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioEvent_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AudioEvent_Impl__obj::ae_end,"ae_end");
	HX_VISIT_MEMBER_NAME(AudioEvent_Impl__obj::ae_destroyed,"ae_destroyed");
	HX_VISIT_MEMBER_NAME(AudioEvent_Impl__obj::ae_destroyed_source,"ae_destroyed_source");
};

#endif

hx::Class AudioEvent_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ae_end","\xc0","\xdf","\x2e","\x2f"),
	HX_HCSTRING("ae_destroyed","\x7e","\x8d","\x12","\x11"),
	HX_HCSTRING("ae_destroyed_source","\xbc","\x00","\x86","\xa5"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void AudioEvent_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.AudioEvent_Impl_","\x58","\x0a","\x3c","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AudioEvent_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AudioEvent_Impl__obj >;
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

void AudioEvent_Impl__obj::__boot()
{
	ae_end= (int)0;
	ae_destroyed= (int)1;
	ae_destroyed_source= (int)2;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
