#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_AudioFormatType_Impl_
#include <snow/types/_Types/AudioFormatType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void AudioFormatType_Impl__obj::__construct()
{
	return null();
}

//AudioFormatType_Impl__obj::~AudioFormatType_Impl__obj() { }

Dynamic AudioFormatType_Impl__obj::__CreateEmpty() { return  new AudioFormatType_Impl__obj; }
hx::ObjectPtr< AudioFormatType_Impl__obj > AudioFormatType_Impl__obj::__new()
{  hx::ObjectPtr< AudioFormatType_Impl__obj > _result_ = new AudioFormatType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic AudioFormatType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioFormatType_Impl__obj > _result_ = new AudioFormatType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic AudioFormatType_Impl__obj::af_unknown;

Dynamic AudioFormatType_Impl__obj::af_custom;

Dynamic AudioFormatType_Impl__obj::af_ogg;

Dynamic AudioFormatType_Impl__obj::af_wav;

Dynamic AudioFormatType_Impl__obj::af_pcm;

::String AudioFormatType_Impl__obj::toString( Dynamic this1){
	HX_STACK_FRAME("snow.types._Types.AudioFormatType_Impl_","toString",0x037be267,"snow.types._Types.AudioFormatType_Impl_.toString","snow/types/Types.hx",235,0x72b41ce7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(236)
	bool tmp = (this1 != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	if ((tmp)){
		HX_STACK_LINE(236)
		Dynamic tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(236)
		switch( (int)(tmp2)){
			case (int)0: {
				HX_STACK_LINE(237)
				tmp1 = HX_HCSTRING("af_unknown","\xf0","\xbe","\x9a","\x03");
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(238)
				tmp1 = HX_HCSTRING("af_custom","\x0b","\xdb","\x9b","\x65");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(239)
				tmp1 = HX_HCSTRING("af_ogg","\xb5","\x04","\x9d","\xc2");
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(240)
				tmp1 = HX_HCSTRING("af_wav","\x92","\x11","\xa3","\xc2");
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(241)
				tmp1 = HX_HCSTRING("af_pcm","\x80","\xc3","\x9d","\xc2");
			}
			;break;
			default: {
				HX_STACK_LINE(242)
				tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
			}
		}
	}
	else{
		HX_STACK_LINE(242)
		tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
	}
	HX_STACK_LINE(236)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioFormatType_Impl__obj,toString,return )


AudioFormatType_Impl__obj::AudioFormatType_Impl__obj()
{
}

bool AudioFormatType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &AudioFormatType_Impl__obj::af_unknown,HX_HCSTRING("af_unknown","\xf0","\xbe","\x9a","\x03")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AudioFormatType_Impl__obj::af_custom,HX_HCSTRING("af_custom","\x0b","\xdb","\x9b","\x65")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AudioFormatType_Impl__obj::af_ogg,HX_HCSTRING("af_ogg","\xb5","\x04","\x9d","\xc2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AudioFormatType_Impl__obj::af_wav,HX_HCSTRING("af_wav","\x92","\x11","\xa3","\xc2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AudioFormatType_Impl__obj::af_pcm,HX_HCSTRING("af_pcm","\x80","\xc3","\x9d","\xc2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioFormatType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AudioFormatType_Impl__obj::af_unknown,"af_unknown");
	HX_MARK_MEMBER_NAME(AudioFormatType_Impl__obj::af_custom,"af_custom");
	HX_MARK_MEMBER_NAME(AudioFormatType_Impl__obj::af_ogg,"af_ogg");
	HX_MARK_MEMBER_NAME(AudioFormatType_Impl__obj::af_wav,"af_wav");
	HX_MARK_MEMBER_NAME(AudioFormatType_Impl__obj::af_pcm,"af_pcm");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioFormatType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AudioFormatType_Impl__obj::af_unknown,"af_unknown");
	HX_VISIT_MEMBER_NAME(AudioFormatType_Impl__obj::af_custom,"af_custom");
	HX_VISIT_MEMBER_NAME(AudioFormatType_Impl__obj::af_ogg,"af_ogg");
	HX_VISIT_MEMBER_NAME(AudioFormatType_Impl__obj::af_wav,"af_wav");
	HX_VISIT_MEMBER_NAME(AudioFormatType_Impl__obj::af_pcm,"af_pcm");
};

#endif

hx::Class AudioFormatType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("af_unknown","\xf0","\xbe","\x9a","\x03"),
	HX_HCSTRING("af_custom","\x0b","\xdb","\x9b","\x65"),
	HX_HCSTRING("af_ogg","\xb5","\x04","\x9d","\xc2"),
	HX_HCSTRING("af_wav","\x92","\x11","\xa3","\xc2"),
	HX_HCSTRING("af_pcm","\x80","\xc3","\x9d","\xc2"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void AudioFormatType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.AudioFormatType_Impl_","\x13","\x72","\xbc","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AudioFormatType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AudioFormatType_Impl__obj >;
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

void AudioFormatType_Impl__obj::__boot()
{
	af_unknown= ((Dynamic)((int)0));
	af_custom= ((Dynamic)((int)1));
	af_ogg= ((Dynamic)((int)2));
	af_wav= ((Dynamic)((int)3));
	af_pcm= ((Dynamic)((int)4));
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
