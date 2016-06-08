#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_AssetType_Impl_
#include <snow/types/_Types/AssetType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void AssetType_Impl__obj::__construct()
{
	return null();
}

//AssetType_Impl__obj::~AssetType_Impl__obj() { }

Dynamic AssetType_Impl__obj::__CreateEmpty() { return  new AssetType_Impl__obj; }
hx::ObjectPtr< AssetType_Impl__obj > AssetType_Impl__obj::__new()
{  hx::ObjectPtr< AssetType_Impl__obj > _result_ = new AssetType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic AssetType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetType_Impl__obj > _result_ = new AssetType_Impl__obj();
	_result_->__construct();
	return _result_;}

int AssetType_Impl__obj::at_unknown;

int AssetType_Impl__obj::at_bytes;

int AssetType_Impl__obj::at_text;

int AssetType_Impl__obj::at_json;

int AssetType_Impl__obj::at_image;

int AssetType_Impl__obj::at_audio;

::String AssetType_Impl__obj::toString( int this1){
	HX_STACK_FRAME("snow.types._Types.AssetType_Impl_","toString",0xe543b804,"snow.types._Types.AssetType_Impl_.toString","snow/types/Types.hx",122,0x72b41ce7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(123)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(124)
			tmp1 = HX_HCSTRING("at_unknown","\xfe","\x7c","\xce","\x8c");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(125)
			tmp1 = HX_HCSTRING("at_bytes","\xdf","\x5c","\x56","\x3d");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(126)
			tmp1 = HX_HCSTRING("at_text","\xb9","\xc2","\x12","\x23");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(127)
			tmp1 = HX_HCSTRING("at_json","\x34","\x38","\x81","\x1c");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(128)
			tmp1 = HX_HCSTRING("at_image","\xcf","\x73","\x27","\x3d");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(129)
			tmp1 = HX_HCSTRING("at_audio","\x4a","\xcd","\x3e","\xa7");
		}
		;break;
		default: {
			HX_STACK_LINE(130)
			tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
		}
	}
	HX_STACK_LINE(123)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetType_Impl__obj,toString,return )


AssetType_Impl__obj::AssetType_Impl__obj()
{
}

bool AssetType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &AssetType_Impl__obj::at_unknown,HX_HCSTRING("at_unknown","\xfe","\x7c","\xce","\x8c")},
	{hx::fsInt,(void *) &AssetType_Impl__obj::at_bytes,HX_HCSTRING("at_bytes","\xdf","\x5c","\x56","\x3d")},
	{hx::fsInt,(void *) &AssetType_Impl__obj::at_text,HX_HCSTRING("at_text","\xb9","\xc2","\x12","\x23")},
	{hx::fsInt,(void *) &AssetType_Impl__obj::at_json,HX_HCSTRING("at_json","\x34","\x38","\x81","\x1c")},
	{hx::fsInt,(void *) &AssetType_Impl__obj::at_image,HX_HCSTRING("at_image","\xcf","\x73","\x27","\x3d")},
	{hx::fsInt,(void *) &AssetType_Impl__obj::at_audio,HX_HCSTRING("at_audio","\x4a","\xcd","\x3e","\xa7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::at_unknown,"at_unknown");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::at_bytes,"at_bytes");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::at_text,"at_text");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::at_json,"at_json");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::at_image,"at_image");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::at_audio,"at_audio");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::at_unknown,"at_unknown");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::at_bytes,"at_bytes");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::at_text,"at_text");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::at_json,"at_json");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::at_image,"at_image");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::at_audio,"at_audio");
};

#endif

hx::Class AssetType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("at_unknown","\xfe","\x7c","\xce","\x8c"),
	HX_HCSTRING("at_bytes","\xdf","\x5c","\x56","\x3d"),
	HX_HCSTRING("at_text","\xb9","\xc2","\x12","\x23"),
	HX_HCSTRING("at_json","\x34","\x38","\x81","\x1c"),
	HX_HCSTRING("at_image","\xcf","\x73","\x27","\x3d"),
	HX_HCSTRING("at_audio","\x4a","\xcd","\x3e","\xa7"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void AssetType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.AssetType_Impl_","\x16","\xc4","\x99","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AssetType_Impl__obj >;
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

void AssetType_Impl__obj::__boot()
{
	at_unknown= (int)0;
	at_bytes= (int)1;
	at_text= (int)2;
	at_json= (int)3;
	at_image= (int)4;
	at_audio= (int)5;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
