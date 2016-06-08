#include <hxcpp.h>

#ifndef INCLUDED_snow_api_buffers__ArrayBuffer_ArrayBuffer_Impl_
#include <snow/api/buffers/_ArrayBuffer/ArrayBuffer_Impl_.h>
#endif
namespace snow{
namespace api{
namespace buffers{
namespace _ArrayBuffer{

Void ArrayBuffer_Impl__obj::__construct()
{
	return null();
}

//ArrayBuffer_Impl__obj::~ArrayBuffer_Impl__obj() { }

Dynamic ArrayBuffer_Impl__obj::__CreateEmpty() { return  new ArrayBuffer_Impl__obj; }
hx::ObjectPtr< ArrayBuffer_Impl__obj > ArrayBuffer_Impl__obj::__new()
{  hx::ObjectPtr< ArrayBuffer_Impl__obj > _result_ = new ArrayBuffer_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ArrayBuffer_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayBuffer_Impl__obj > _result_ = new ArrayBuffer_Impl__obj();
	_result_->__construct();
	return _result_;}

Array< unsigned char > ArrayBuffer_Impl__obj::_new( int byteLength){
	HX_STACK_FRAME("snow.api.buffers._ArrayBuffer.ArrayBuffer_Impl_","_new",0x9fd11d90,"snow.api.buffers._ArrayBuffer.ArrayBuffer_Impl_._new","snow/api/buffers/ArrayBuffer.hx",16,0x87ad6cc2)
	HX_STACK_ARG(byteLength,"byteLength")
	HX_STACK_LINE(16)
	Array< unsigned char > this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(17)
	this1 = Array_obj< unsigned char >::__new();
	HX_STACK_LINE(18)
	bool tmp = (byteLength > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	if ((tmp)){
		HX_STACK_LINE(18)
		int tmp1 = (byteLength - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		this1[tmp1] = (int)0;
	}
	HX_STACK_LINE(16)
	Array< unsigned char > tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayBuffer_Impl__obj,_new,return )

int ArrayBuffer_Impl__obj::get_byteLength( Array< unsigned char > this1){
	HX_STACK_FRAME("snow.api.buffers._ArrayBuffer.ArrayBuffer_Impl_","get_byteLength",0x7c635f46,"snow.api.buffers._ArrayBuffer.ArrayBuffer_Impl_.get_byteLength","snow/api/buffers/ArrayBuffer.hx",21,0x87ad6cc2)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(22)
	int tmp = this1->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayBuffer_Impl__obj,get_byteLength,return )


ArrayBuffer_Impl__obj::ArrayBuffer_Impl__obj()
{
}

bool ArrayBuffer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_byteLength") ) { outValue = get_byteLength_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayBuffer_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayBuffer_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayBuffer_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_byteLength","\x57","\xa6","\x01","\xed"),
	::String(null()) };

void ArrayBuffer_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.api.buffers._ArrayBuffer.ArrayBuffer_Impl_","\x9f","\x46","\x9d","\x50");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayBuffer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ArrayBuffer_Impl__obj >;
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
} // end namespace api
} // end namespace buffers
} // end namespace _ArrayBuffer
