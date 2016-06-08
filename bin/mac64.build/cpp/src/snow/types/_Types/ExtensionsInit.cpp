#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_ExtensionsInit
#include <snow/types/_Types/ExtensionsInit.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void ExtensionsInit_obj::__construct()
{
	return null();
}

//ExtensionsInit_obj::~ExtensionsInit_obj() { }

Dynamic ExtensionsInit_obj::__CreateEmpty() { return  new ExtensionsInit_obj; }
hx::ObjectPtr< ExtensionsInit_obj > ExtensionsInit_obj::__new()
{  hx::ObjectPtr< ExtensionsInit_obj > _result_ = new ExtensionsInit_obj();
	_result_->__construct();
	return _result_;}

Dynamic ExtensionsInit_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExtensionsInit_obj > _result_ = new ExtensionsInit_obj();
	_result_->__construct();
	return _result_;}


ExtensionsInit_obj::ExtensionsInit_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExtensionsInit_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExtensionsInit_obj::__mClass,"__mClass");
};

#endif

hx::Class ExtensionsInit_obj::__mClass;

void ExtensionsInit_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.ExtensionsInit","\x98","\x73","\xac","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ExtensionsInit_obj >;
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

} // end namespace snow
} // end namespace types
} // end namespace _Types
