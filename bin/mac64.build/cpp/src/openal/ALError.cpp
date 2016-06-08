#include <hxcpp.h>

#ifndef INCLUDED_openal_ALError
#include <openal/ALError.h>
#endif
namespace openal{

Void ALError_obj::__construct()
{
	return null();
}

//ALError_obj::~ALError_obj() { }

Dynamic ALError_obj::__CreateEmpty() { return  new ALError_obj; }
hx::ObjectPtr< ALError_obj > ALError_obj::__new()
{  hx::ObjectPtr< ALError_obj > _result_ = new ALError_obj();
	_result_->__construct();
	return _result_;}

Dynamic ALError_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ALError_obj > _result_ = new ALError_obj();
	_result_->__construct();
	return _result_;}

::String ALError_obj::INVALID_NAME;

::String ALError_obj::INVALID_ENUM;

::String ALError_obj::INVALID_VALUE;

::String ALError_obj::INVALID_OPERATION;

::String ALError_obj::OUT_OF_MEMORY;

::String ALError_obj::desc( int error){
	HX_STACK_FRAME("openal.ALError","desc",0x25544e5b,"openal.ALError.desc","openal/AL.hx",388,0x05c85919)
	HX_STACK_ARG(error,"error")
	HX_STACK_LINE(390)
	bool tmp = (error == (int)40961);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(390)
	if ((tmp)){
		HX_STACK_LINE(390)
		::String tmp1 = ::openal::ALError_obj::INVALID_NAME;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(390)
		return tmp1;
	}
	HX_STACK_LINE(391)
	bool tmp1 = (error == (int)40962);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(391)
	if ((tmp1)){
		HX_STACK_LINE(391)
		::String tmp2 = ::openal::ALError_obj::INVALID_ENUM;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(391)
		return tmp2;
	}
	HX_STACK_LINE(392)
	bool tmp2 = (error == (int)40963);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(392)
	if ((tmp2)){
		HX_STACK_LINE(392)
		::String tmp3 = ::openal::ALError_obj::INVALID_VALUE;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(392)
		return tmp3;
	}
	HX_STACK_LINE(393)
	bool tmp3 = (error == (int)40964);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(393)
	if ((tmp3)){
		HX_STACK_LINE(393)
		::String tmp4 = ::openal::ALError_obj::INVALID_OPERATION;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(393)
		return tmp4;
	}
	HX_STACK_LINE(394)
	bool tmp4 = (error == (int)40965);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(394)
	if ((tmp4)){
		HX_STACK_LINE(394)
		::String tmp5 = ::openal::ALError_obj::OUT_OF_MEMORY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(394)
		return tmp5;
	}
	HX_STACK_LINE(396)
	return HX_HCSTRING("AL.NO_ERROR: No Error","\x5c","\xdb","\x9b","\x7b");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALError_obj,desc,return )


ALError_obj::ALError_obj()
{
}

bool ALError_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"desc") ) { outValue = desc_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"INVALID_NAME") ) { outValue = INVALID_NAME; return true;  }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { outValue = INVALID_ENUM; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { outValue = INVALID_VALUE; return true;  }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { outValue = OUT_OF_MEMORY; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { outValue = INVALID_OPERATION; return true;  }
	}
	return false;
}

bool ALError_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"INVALID_NAME") ) { INVALID_NAME=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { INVALID_ENUM=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { INVALID_VALUE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { OUT_OF_MEMORY=ioValue.Cast< ::String >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { INVALID_OPERATION=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &ALError_obj::INVALID_NAME,HX_HCSTRING("INVALID_NAME","\xf3","\x7b","\x59","\x19")},
	{hx::fsString,(void *) &ALError_obj::INVALID_ENUM,HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13")},
	{hx::fsString,(void *) &ALError_obj::INVALID_VALUE,HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0")},
	{hx::fsString,(void *) &ALError_obj::INVALID_OPERATION,HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29")},
	{hx::fsString,(void *) &ALError_obj::OUT_OF_MEMORY,HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALError_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ALError_obj::INVALID_NAME,"INVALID_NAME");
	HX_MARK_MEMBER_NAME(ALError_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(ALError_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(ALError_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_MARK_MEMBER_NAME(ALError_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALError_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ALError_obj::INVALID_NAME,"INVALID_NAME");
	HX_VISIT_MEMBER_NAME(ALError_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(ALError_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(ALError_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_VISIT_MEMBER_NAME(ALError_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
};

#endif

hx::Class ALError_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("INVALID_NAME","\xf3","\x7b","\x59","\x19"),
	HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"),
	HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"),
	HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29"),
	HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"),
	HX_HCSTRING("desc","\x51","\x5e","\x66","\x42"),
	::String(null()) };

void ALError_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openal.ALError","\xa4","\x6c","\x00","\x57");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ALError_obj::__GetStatic;
	__mClass->mSetStaticField = &ALError_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ALError_obj >;
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

void ALError_obj::__boot()
{
	INVALID_NAME= HX_HCSTRING("AL.INVALID_NAME: Invalid parameter name","\xc7","\x71","\xae","\xb1");
	INVALID_ENUM= HX_HCSTRING("AL.INVALID_ENUM: Invalid enum value","\xed","\xd7","\x93","\x79");
	INVALID_VALUE= HX_HCSTRING("AL.INVALID_VALUE: Invalid parameter value","\xe5","\xf1","\x73","\xb6");
	INVALID_OPERATION= HX_HCSTRING("AL.INVALID_OPERATION: Illegal operation or call","\x76","\xd3","\x4a","\x4b");
	OUT_OF_MEMORY= HX_HCSTRING("AL.OUT_OF_MEMORY: OpenAL has run out of memory","\xad","\x11","\x86","\xac");
}

} // end namespace openal
