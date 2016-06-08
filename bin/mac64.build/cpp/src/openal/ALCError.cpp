#include <hxcpp.h>

#ifndef INCLUDED_openal_ALCError
#include <openal/ALCError.h>
#endif
namespace openal{

Void ALCError_obj::__construct()
{
	return null();
}

//ALCError_obj::~ALCError_obj() { }

Dynamic ALCError_obj::__CreateEmpty() { return  new ALCError_obj; }
hx::ObjectPtr< ALCError_obj > ALCError_obj::__new()
{  hx::ObjectPtr< ALCError_obj > _result_ = new ALCError_obj();
	_result_->__construct();
	return _result_;}

Dynamic ALCError_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ALCError_obj > _result_ = new ALCError_obj();
	_result_->__construct();
	return _result_;}

::String ALCError_obj::NO_ERROR;

::String ALCError_obj::INVALID_DEVICE;

::String ALCError_obj::INVALID_CONTEXT;

::String ALCError_obj::INVALID_ENUM;

::String ALCError_obj::INVALID_VALUE;

::String ALCError_obj::OUT_OF_MEMORY;

::String ALCError_obj::UNKNOWN_ERROR;

::String ALCError_obj::desc( int error){
	HX_STACK_FRAME("openal.ALCError","desc",0xfc60b8d6,"openal.ALCError.desc","openal/AL.hx",414,0x05c85919)
	HX_STACK_ARG(error,"error")
	HX_STACK_LINE(416)
	int tmp = error;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(416)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(416)
	switch( (int)(tmp)){
		case (int)40961: {
			HX_STACK_LINE(417)
			tmp1 = ::openal::ALCError_obj::INVALID_DEVICE;
		}
		;break;
		case (int)40962: {
			HX_STACK_LINE(418)
			tmp1 = ::openal::ALCError_obj::INVALID_CONTEXT;
		}
		;break;
		case (int)40963: {
			HX_STACK_LINE(419)
			tmp1 = ::openal::ALCError_obj::INVALID_ENUM;
		}
		;break;
		case (int)40964: {
			HX_STACK_LINE(420)
			tmp1 = ::openal::ALCError_obj::INVALID_VALUE;
		}
		;break;
		case (int)40965: {
			HX_STACK_LINE(421)
			tmp1 = ::openal::ALCError_obj::OUT_OF_MEMORY;
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(422)
			tmp1 = ::openal::ALCError_obj::NO_ERROR;
		}
		;break;
		default: {
			HX_STACK_LINE(423)
			::String tmp2 = ::openal::ALCError_obj::UNKNOWN_ERROR;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(423)
			::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(423)
			::String tmp4 = (tmp3 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(423)
			int tmp5 = error;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(423)
			::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(423)
			tmp1 = (tmp6 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
		}
	}
	HX_STACK_LINE(416)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALCError_obj,desc,return )


ALCError_obj::ALCError_obj()
{
}

bool ALCError_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"desc") ) { outValue = desc_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { outValue = NO_ERROR; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { outValue = INVALID_ENUM; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { outValue = INVALID_VALUE; return true;  }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { outValue = OUT_OF_MEMORY; return true;  }
		if (HX_FIELD_EQ(inName,"UNKNOWN_ERROR") ) { outValue = UNKNOWN_ERROR; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"INVALID_DEVICE") ) { outValue = INVALID_DEVICE; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"INVALID_CONTEXT") ) { outValue = INVALID_CONTEXT; return true;  }
	}
	return false;
}

bool ALCError_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { NO_ERROR=ioValue.Cast< ::String >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { INVALID_ENUM=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { INVALID_VALUE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { OUT_OF_MEMORY=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"UNKNOWN_ERROR") ) { UNKNOWN_ERROR=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"INVALID_DEVICE") ) { INVALID_DEVICE=ioValue.Cast< ::String >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"INVALID_CONTEXT") ) { INVALID_CONTEXT=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &ALCError_obj::NO_ERROR,HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f")},
	{hx::fsString,(void *) &ALCError_obj::INVALID_DEVICE,HX_HCSTRING("INVALID_DEVICE","\x3e","\x84","\xa5","\x93")},
	{hx::fsString,(void *) &ALCError_obj::INVALID_CONTEXT,HX_HCSTRING("INVALID_CONTEXT","\x27","\xa1","\x3c","\xdf")},
	{hx::fsString,(void *) &ALCError_obj::INVALID_ENUM,HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13")},
	{hx::fsString,(void *) &ALCError_obj::INVALID_VALUE,HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0")},
	{hx::fsString,(void *) &ALCError_obj::OUT_OF_MEMORY,HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1")},
	{hx::fsString,(void *) &ALCError_obj::UNKNOWN_ERROR,HX_HCSTRING("UNKNOWN_ERROR","\xd3","\xad","\x44","\xaa")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALCError_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ALCError_obj::NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(ALCError_obj::INVALID_DEVICE,"INVALID_DEVICE");
	HX_MARK_MEMBER_NAME(ALCError_obj::INVALID_CONTEXT,"INVALID_CONTEXT");
	HX_MARK_MEMBER_NAME(ALCError_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(ALCError_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(ALCError_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(ALCError_obj::UNKNOWN_ERROR,"UNKNOWN_ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALCError_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ALCError_obj::NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(ALCError_obj::INVALID_DEVICE,"INVALID_DEVICE");
	HX_VISIT_MEMBER_NAME(ALCError_obj::INVALID_CONTEXT,"INVALID_CONTEXT");
	HX_VISIT_MEMBER_NAME(ALCError_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(ALCError_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(ALCError_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(ALCError_obj::UNKNOWN_ERROR,"UNKNOWN_ERROR");
};

#endif

hx::Class ALCError_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f"),
	HX_HCSTRING("INVALID_DEVICE","\x3e","\x84","\xa5","\x93"),
	HX_HCSTRING("INVALID_CONTEXT","\x27","\xa1","\x3c","\xdf"),
	HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"),
	HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"),
	HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"),
	HX_HCSTRING("UNKNOWN_ERROR","\xd3","\xad","\x44","\xaa"),
	HX_HCSTRING("desc","\x51","\x5e","\x66","\x42"),
	::String(null()) };

void ALCError_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openal.ALCError","\x09","\x14","\xa2","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ALCError_obj::__GetStatic;
	__mClass->mSetStaticField = &ALCError_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ALCError_obj >;
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

void ALCError_obj::__boot()
{
	NO_ERROR= HX_HCSTRING("ALC.NO_ERROR: No Error","\x6f","\x5b","\x50","\x5c");
	INVALID_DEVICE= HX_HCSTRING("ALC.INVALID_DEVICE: Invalid device (or no device?)","\x43","\x25","\xbc","\x4c");
	INVALID_CONTEXT= HX_HCSTRING("ALC.INVALID_CONTEXT: Invalid context (or no context?)","\x60","\xc0","\xe8","\xa0");
	INVALID_ENUM= HX_HCSTRING("ALC.INVALID_ENUM: Invalid enum value","\x40","\x33","\xd5","\x8b");
	INVALID_VALUE= HX_HCSTRING("ALC.INVALID_VALUE: Invalid param value","\x5c","\x64","\x5d","\xf4");
	OUT_OF_MEMORY= HX_HCSTRING("ALC.OUT_OF_MEMORY: OpenAL has run out of memory","\x3a","\x21","\xed","\x0c");
	UNKNOWN_ERROR= HX_HCSTRING("ALC.NO_ERROR: Unknown Error","\xec","\x9f","\x63","\xc9");
}

} // end namespace openal
