#include <hxcpp.h>

#ifndef INCLUDED_snow_types_Config
#include <snow/types/Config.h>
#endif
namespace snow{
namespace types{

Void Config_obj::__construct()
{
	return null();
}

//Config_obj::~Config_obj() { }

Dynamic Config_obj::__CreateEmpty() { return  new Config_obj; }
hx::ObjectPtr< Config_obj > Config_obj::__new()
{  hx::ObjectPtr< Config_obj > _result_ = new Config_obj();
	_result_->__construct();
	return _result_;}

Dynamic Config_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Config_obj > _result_ = new Config_obj();
	_result_->__construct();
	return _result_;}

::String Config_obj::app_runtime;

::String Config_obj::app_config;

::String Config_obj::app_ident;

::String Config_obj::app_main;

::String Config_obj::module_assets;

::String Config_obj::module_audio;

::String Config_obj::module_io;

Array< ::String > Config_obj::extensions;


Config_obj::Config_obj()
{
}

bool Config_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"app_main") ) { outValue = app_main; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"app_ident") ) { outValue = app_ident; return true;  }
		if (HX_FIELD_EQ(inName,"module_io") ) { outValue = module_io; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"app_config") ) { outValue = app_config; return true;  }
		if (HX_FIELD_EQ(inName,"extensions") ) { outValue = extensions; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"app_runtime") ) { outValue = app_runtime; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"module_audio") ) { outValue = module_audio; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"module_assets") ) { outValue = module_assets; return true;  }
	}
	return false;
}

bool Config_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"app_main") ) { app_main=ioValue.Cast< ::String >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"app_ident") ) { app_ident=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"module_io") ) { module_io=ioValue.Cast< ::String >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"app_config") ) { app_config=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"extensions") ) { extensions=ioValue.Cast< Array< ::String > >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"app_runtime") ) { app_runtime=ioValue.Cast< ::String >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"module_audio") ) { module_audio=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"module_assets") ) { module_assets=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Config_obj::app_runtime,HX_HCSTRING("app_runtime","\xfa","\x13","\x92","\x67")},
	{hx::fsString,(void *) &Config_obj::app_config,HX_HCSTRING("app_config","\xe0","\xb1","\x30","\x62")},
	{hx::fsString,(void *) &Config_obj::app_ident,HX_HCSTRING("app_ident","\x92","\x35","\x4f","\xd8")},
	{hx::fsString,(void *) &Config_obj::app_main,HX_HCSTRING("app_main","\xd7","\xef","\xe0","\xa0")},
	{hx::fsString,(void *) &Config_obj::module_assets,HX_HCSTRING("module_assets","\xf6","\x52","\x1a","\xb7")},
	{hx::fsString,(void *) &Config_obj::module_audio,HX_HCSTRING("module_audio","\xc3","\xbd","\x05","\x11")},
	{hx::fsString,(void *) &Config_obj::module_io,HX_HCSTRING("module_io","\xd9","\x70","\x1e","\x16")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Config_obj::extensions,HX_HCSTRING("extensions","\x14","\x7c","\x70","\x89")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Config_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Config_obj::app_runtime,"app_runtime");
	HX_MARK_MEMBER_NAME(Config_obj::app_config,"app_config");
	HX_MARK_MEMBER_NAME(Config_obj::app_ident,"app_ident");
	HX_MARK_MEMBER_NAME(Config_obj::app_main,"app_main");
	HX_MARK_MEMBER_NAME(Config_obj::module_assets,"module_assets");
	HX_MARK_MEMBER_NAME(Config_obj::module_audio,"module_audio");
	HX_MARK_MEMBER_NAME(Config_obj::module_io,"module_io");
	HX_MARK_MEMBER_NAME(Config_obj::extensions,"extensions");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Config_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Config_obj::app_runtime,"app_runtime");
	HX_VISIT_MEMBER_NAME(Config_obj::app_config,"app_config");
	HX_VISIT_MEMBER_NAME(Config_obj::app_ident,"app_ident");
	HX_VISIT_MEMBER_NAME(Config_obj::app_main,"app_main");
	HX_VISIT_MEMBER_NAME(Config_obj::module_assets,"module_assets");
	HX_VISIT_MEMBER_NAME(Config_obj::module_audio,"module_audio");
	HX_VISIT_MEMBER_NAME(Config_obj::module_io,"module_io");
	HX_VISIT_MEMBER_NAME(Config_obj::extensions,"extensions");
};

#endif

hx::Class Config_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("app_runtime","\xfa","\x13","\x92","\x67"),
	HX_HCSTRING("app_config","\xe0","\xb1","\x30","\x62"),
	HX_HCSTRING("app_ident","\x92","\x35","\x4f","\xd8"),
	HX_HCSTRING("app_main","\xd7","\xef","\xe0","\xa0"),
	HX_HCSTRING("module_assets","\xf6","\x52","\x1a","\xb7"),
	HX_HCSTRING("module_audio","\xc3","\xbd","\x05","\x11"),
	HX_HCSTRING("module_io","\xd9","\x70","\x1e","\x16"),
	HX_HCSTRING("extensions","\x14","\x7c","\x70","\x89"),
	::String(null()) };

void Config_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types.Config","\x02","\x37","\x18","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Config_obj::__GetStatic;
	__mClass->mSetStaticField = &Config_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Config_obj >;
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

void Config_obj::__boot()
{
	app_runtime= HX_HCSTRING("snow.modules.sdl.Runtime","\xf3","\x79","\x09","\xb1");
	app_config= HX_HCSTRING("config.json","\x54","\xdb","\x08","\xa4");
	app_ident= HX_HCSTRING("com.melsom.redsnow","\x30","\xff","\xa7","\xc1");
	app_main= HX_HCSTRING("luxe.Engine","\x9a","\x59","\xe2","\x5b");
	module_assets= HX_HCSTRING("snow.core.native.assets.Assets","\xdb","\x1f","\x9b","\xfa");
	module_audio= HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac");
	module_io= HX_HCSTRING("snow.modules.sdl.IO","\x8b","\xac","\xa3","\x60");
	extensions= Array_obj< ::String >::__new();
}

} // end namespace snow
} // end namespace types
