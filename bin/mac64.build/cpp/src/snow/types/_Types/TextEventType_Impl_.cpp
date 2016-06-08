#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_TextEventType_Impl_
#include <snow/types/_Types/TextEventType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void TextEventType_Impl__obj::__construct()
{
	return null();
}

//TextEventType_Impl__obj::~TextEventType_Impl__obj() { }

Dynamic TextEventType_Impl__obj::__CreateEmpty() { return  new TextEventType_Impl__obj; }
hx::ObjectPtr< TextEventType_Impl__obj > TextEventType_Impl__obj::__new()
{  hx::ObjectPtr< TextEventType_Impl__obj > _result_ = new TextEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic TextEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextEventType_Impl__obj > _result_ = new TextEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

int TextEventType_Impl__obj::te_unknown;

int TextEventType_Impl__obj::te_edit;

int TextEventType_Impl__obj::te_input;

::String TextEventType_Impl__obj::toString( int this1){
	HX_STACK_FRAME("snow.types._Types.TextEventType_Impl_","toString",0xe75afde7,"snow.types._Types.TextEventType_Impl_.toString","snow/types/Types.hx",1009,0x72b41ce7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1010)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1010)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1010)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(1011)
			tmp1 = HX_HCSTRING("te_unknown","\x7c","\x3b","\x30","\x76");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(1012)
			tmp1 = HX_HCSTRING("te_edit","\xd8","\x26","\xe5","\x2f");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(1013)
			tmp1 = HX_HCSTRING("te_input","\x7c","\x9b","\xd8","\x0c");
		}
		;break;
		default: {
			HX_STACK_LINE(1014)
			tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
		}
	}
	HX_STACK_LINE(1010)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEventType_Impl__obj,toString,return )


TextEventType_Impl__obj::TextEventType_Impl__obj()
{
}

bool TextEventType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &TextEventType_Impl__obj::te_unknown,HX_HCSTRING("te_unknown","\x7c","\x3b","\x30","\x76")},
	{hx::fsInt,(void *) &TextEventType_Impl__obj::te_edit,HX_HCSTRING("te_edit","\xd8","\x26","\xe5","\x2f")},
	{hx::fsInt,(void *) &TextEventType_Impl__obj::te_input,HX_HCSTRING("te_input","\x7c","\x9b","\xd8","\x0c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextEventType_Impl__obj::te_unknown,"te_unknown");
	HX_MARK_MEMBER_NAME(TextEventType_Impl__obj::te_edit,"te_edit");
	HX_MARK_MEMBER_NAME(TextEventType_Impl__obj::te_input,"te_input");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextEventType_Impl__obj::te_unknown,"te_unknown");
	HX_VISIT_MEMBER_NAME(TextEventType_Impl__obj::te_edit,"te_edit");
	HX_VISIT_MEMBER_NAME(TextEventType_Impl__obj::te_input,"te_input");
};

#endif

hx::Class TextEventType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("te_unknown","\x7c","\x3b","\x30","\x76"),
	HX_HCSTRING("te_edit","\xd8","\x26","\xe5","\x2f"),
	HX_HCSTRING("te_input","\x7c","\x9b","\xd8","\x0c"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void TextEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.TextEventType_Impl_","\x93","\xc6","\x2e","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextEventType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TextEventType_Impl__obj >;
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

void TextEventType_Impl__obj::__boot()
{
	te_unknown= (int)0;
	te_edit= (int)1;
	te_input= (int)2;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
