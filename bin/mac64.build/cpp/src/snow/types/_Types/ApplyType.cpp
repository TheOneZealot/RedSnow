#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_ApplyType
#include <snow/types/_Types/ApplyType.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void ApplyType_obj::__construct()
{
	return null();
}

//ApplyType_obj::~ApplyType_obj() { }

Dynamic ApplyType_obj::__CreateEmpty() { return  new ApplyType_obj; }
hx::ObjectPtr< ApplyType_obj > ApplyType_obj::__new()
{  hx::ObjectPtr< ApplyType_obj > _result_ = new ApplyType_obj();
	_result_->__construct();
	return _result_;}

Dynamic ApplyType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplyType_obj > _result_ = new ApplyType_obj();
	_result_->__construct();
	return _result_;}


ApplyType_obj::ApplyType_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplyType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplyType_obj::__mClass,"__mClass");
};

#endif

hx::Class ApplyType_obj::__mClass;

void ApplyType_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.ApplyType","\x74","\x9d","\x0d","\x6b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ApplyType_obj >;
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
