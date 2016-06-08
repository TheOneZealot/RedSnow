#include <hxcpp.h>

#ifndef INCLUDED_snow_api_buffers_ArrayBufferIO
#include <snow/api/buffers/ArrayBufferIO.h>
#endif
#ifndef INCLUDED_snow_api_buffers_DataView
#include <snow/api/buffers/DataView.h>
#endif
#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
#endif
namespace snow{
namespace api{
namespace buffers{

Void DataView_obj::__construct(Array< unsigned char > buffer,hx::Null< int >  __o_byteOffset,Dynamic byteLength)
{
HX_STACK_FRAME("snow.api.buffers.DataView","new",0xcb6445bb,"snow.api.buffers.DataView.new","snow/api/buffers/DataView.hx",112,0x80e9fc72)
HX_STACK_THIS(this)
HX_STACK_ARG(buffer,"buffer")
HX_STACK_ARG(__o_byteOffset,"byteOffset")
HX_STACK_ARG(byteLength,"byteLength")
int byteOffset = __o_byteOffset.Default(0);
{
	HX_STACK_LINE(114)
	bool tmp = (byteOffset < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	if ((tmp)){
		HX_STACK_LINE(114)
		::snow::api::buffers::TAError tmp1 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("DataView: byteOffset can't be negative","\x5f","\xe5","\xbd","\x90"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		HX_STACK_DO_THROW(tmp1);
	}
	HX_STACK_LINE(116)
	int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
	HX_STACK_LINE(117)
	int tmp1 = (bufferByteLength - byteOffset);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	int viewByteLength = tmp1;		HX_STACK_VAR(viewByteLength,"viewByteLength");
	HX_STACK_LINE(119)
	bool tmp2 = (byteOffset > bufferByteLength);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(119)
	if ((tmp2)){
		HX_STACK_LINE(119)
		::snow::api::buffers::TAError tmp3 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("DataView: byteOffset is past the buffer byte length","\x75","\x51","\x2c","\xe8"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(121)
	bool tmp3 = (byteLength != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(121)
	if ((tmp3)){
		HX_STACK_LINE(123)
		bool tmp4 = (byteLength < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		if ((tmp4)){
			HX_STACK_LINE(123)
			::snow::api::buffers::TAError tmp5 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("DataView: specified byteLength must be positive","\x2c","\x71","\x0d","\xfc"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(123)
			HX_STACK_DO_THROW(tmp5);
		}
		HX_STACK_LINE(125)
		viewByteLength = byteLength;
		HX_STACK_LINE(127)
		int tmp5 = (byteOffset + viewByteLength);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(127)
		int tmp6 = bufferByteLength;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(127)
		bool tmp7 = (tmp5 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(127)
		if ((tmp7)){
			HX_STACK_LINE(127)
			::snow::api::buffers::TAError tmp8 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("DataView: specified range would exceed the given buffer","\x8b","\x80","\x1c","\x0d"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(127)
			HX_STACK_DO_THROW(tmp8);
		}
	}
	HX_STACK_LINE(131)
	this->buffer = buffer;
	HX_STACK_LINE(132)
	this->byteLength = viewByteLength;
	HX_STACK_LINE(133)
	this->byteOffset = byteOffset;
}
;
	return null();
}

//DataView_obj::~DataView_obj() { }

Dynamic DataView_obj::__CreateEmpty() { return  new DataView_obj; }
hx::ObjectPtr< DataView_obj > DataView_obj::__new(Array< unsigned char > buffer,hx::Null< int >  __o_byteOffset,Dynamic byteLength)
{  hx::ObjectPtr< DataView_obj > _result_ = new DataView_obj();
	_result_->__construct(buffer,__o_byteOffset,byteLength);
	return _result_;}

Dynamic DataView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DataView_obj > _result_ = new DataView_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

int DataView_obj::getInt8( int byteOffset){
	HX_STACK_FRAME("snow.api.buffers.DataView","getInt8",0xf2a3b2fa,"snow.api.buffers.DataView.getInt8","snow/api/buffers/DataView.hx",138,0x80e9fc72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_LINE(139)
	int tmp = ::__hxcpp_memory_get_byte(this->buffer,byteOffset);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DataView_obj,getInt8,return )

int DataView_obj::getInt16( int byteOffset){
	HX_STACK_FRAME("snow.api.buffers.DataView","getInt16",0x5c98e1e3,"snow.api.buffers.DataView.getInt16","snow/api/buffers/DataView.hx",143,0x80e9fc72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_LINE(144)
	Array< unsigned char > tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	int tmp1 = byteOffset;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(144)
	int tmp2 = ::snow::api::buffers::ArrayBufferIO_obj::getInt16(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(144)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DataView_obj,getInt16,return )

int DataView_obj::getInt32( int byteOffset){
	HX_STACK_FRAME("snow.api.buffers.DataView","getInt32",0x5c98e39d,"snow.api.buffers.DataView.getInt32","snow/api/buffers/DataView.hx",148,0x80e9fc72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_LINE(149)
	int tmp = ::__hxcpp_memory_get_i32(this->buffer,byteOffset);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DataView_obj,getInt32,return )

int DataView_obj::getUint8( int byteOffset){
	HX_STACK_FRAME("snow.api.buffers.DataView","getUint8",0x421573ad,"snow.api.buffers.DataView.getUint8","snow/api/buffers/DataView.hx",153,0x80e9fc72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_LINE(154)
	int tmp = ::__hxcpp_memory_get_byte(this->buffer,byteOffset);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	Dynamic tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DataView_obj,getUint8,return )

int DataView_obj::getUint16( int byteOffset){
	HX_STACK_FRAME("snow.api.buffers.DataView","getUint16",0x90afbdd0,"snow.api.buffers.DataView.getUint16","snow/api/buffers/DataView.hx",158,0x80e9fc72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_LINE(159)
	int tmp = ::__hxcpp_memory_get_ui16(this->buffer,byteOffset);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	int tmp1 = (int(tmp) & int((int)65535));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(159)
	Dynamic tmp2 = ((Dynamic)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(159)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DataView_obj,getUint16,return )

int DataView_obj::getUint32( int byteOffset){
	HX_STACK_FRAME("snow.api.buffers.DataView","getUint32",0x90afbf8a,"snow.api.buffers.DataView.getUint32","snow/api/buffers/DataView.hx",163,0x80e9fc72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_LINE(164)
	Dynamic tmp = ::__hxcpp_memory_get_ui32(this->buffer,byteOffset);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DataView_obj,getUint32,return )

Float DataView_obj::getFloat32( int byteOffset){
	HX_STACK_FRAME("snow.api.buffers.DataView","getFloat32",0x5370d34a,"snow.api.buffers.DataView.getFloat32","snow/api/buffers/DataView.hx",168,0x80e9fc72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_LINE(169)
	Float tmp = ::__hxcpp_memory_get_float(this->buffer,byteOffset);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DataView_obj,getFloat32,return )

Float DataView_obj::getFloat64( int byteOffset){
	HX_STACK_FRAME("snow.api.buffers.DataView","getFloat64",0x5370d5e9,"snow.api.buffers.DataView.getFloat64","snow/api/buffers/DataView.hx",173,0x80e9fc72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_LINE(174)
	Float tmp = ::__hxcpp_memory_get_double(this->buffer,byteOffset);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DataView_obj,getFloat64,return )

Void DataView_obj::setInt8( int byteOffset,int value){
{
		HX_STACK_FRAME("snow.api.buffers.DataView","setInt8",0xe5a54406,"snow.api.buffers.DataView.setInt8","snow/api/buffers/DataView.hx",181,0x80e9fc72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byteOffset,"byteOffset")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(181)
		::__hxcpp_memory_set_byte(this->buffer,byteOffset,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DataView_obj,setInt8,(void))

Void DataView_obj::setInt16( int byteOffset,int value){
{
		HX_STACK_FRAME("snow.api.buffers.DataView","setInt16",0x0af63b57,"snow.api.buffers.DataView.setInt16","snow/api/buffers/DataView.hx",185,0x80e9fc72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byteOffset,"byteOffset")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(186)
		Array< unsigned char > tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		int tmp1 = byteOffset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(186)
		::snow::api::buffers::ArrayBufferIO_obj::setInt16(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DataView_obj,setInt16,(void))

Void DataView_obj::setInt32( int byteOffset,int value){
{
		HX_STACK_FRAME("snow.api.buffers.DataView","setInt32",0x0af63d11,"snow.api.buffers.DataView.setInt32","snow/api/buffers/DataView.hx",191,0x80e9fc72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byteOffset,"byteOffset")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(191)
		::__hxcpp_memory_set_i32(this->buffer,byteOffset,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DataView_obj,setInt32,(void))

Void DataView_obj::setUint8( int byteOffset,int value){
{
		HX_STACK_FRAME("snow.api.buffers.DataView","setUint8",0xf072cd21,"snow.api.buffers.DataView.setUint8","snow/api/buffers/DataView.hx",196,0x80e9fc72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byteOffset,"byteOffset")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(196)
		::__hxcpp_memory_set_byte(this->buffer,byteOffset,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DataView_obj,setUint8,(void))

Void DataView_obj::setUint16( int byteOffset,int value){
{
		HX_STACK_FRAME("snow.api.buffers.DataView","setUint16",0x7400a9dc,"snow.api.buffers.DataView.setUint16","snow/api/buffers/DataView.hx",201,0x80e9fc72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byteOffset,"byteOffset")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(201)
		::__hxcpp_memory_set_ui16(this->buffer,byteOffset,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DataView_obj,setUint16,(void))

Void DataView_obj::setUint32( int byteOffset,int value){
{
		HX_STACK_FRAME("snow.api.buffers.DataView","setUint32",0x7400ab96,"snow.api.buffers.DataView.setUint32","snow/api/buffers/DataView.hx",206,0x80e9fc72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byteOffset,"byteOffset")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(206)
		::__hxcpp_memory_set_ui32(this->buffer,byteOffset,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DataView_obj,setUint32,(void))

Void DataView_obj::setFloat32( int byteOffset,Float value){
{
		HX_STACK_FRAME("snow.api.buffers.DataView","setFloat32",0x56ee71be,"snow.api.buffers.DataView.setFloat32","snow/api/buffers/DataView.hx",211,0x80e9fc72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byteOffset,"byteOffset")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(211)
		::__hxcpp_memory_set_float(this->buffer,byteOffset,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DataView_obj,setFloat32,(void))

Void DataView_obj::setFloat64( int byteOffset,Float value){
{
		HX_STACK_FRAME("snow.api.buffers.DataView","setFloat64",0x56ee745d,"snow.api.buffers.DataView.setFloat64","snow/api/buffers/DataView.hx",216,0x80e9fc72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byteOffset,"byteOffset")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(216)
		::__hxcpp_memory_set_double(this->buffer,byteOffset,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DataView_obj,setFloat64,(void))


DataView_obj::DataView_obj()
{
}

void DataView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataView);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(byteLength,"byteLength");
	HX_MARK_MEMBER_NAME(byteOffset,"byteOffset");
	HX_MARK_END_CLASS();
}

void DataView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(byteLength,"byteLength");
	HX_VISIT_MEMBER_NAME(byteOffset,"byteOffset");
}

Dynamic DataView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getInt8") ) { return getInt8_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt8") ) { return setInt8_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getInt16") ) { return getInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"getInt32") ) { return getInt32_dyn(); }
		if (HX_FIELD_EQ(inName,"getUint8") ) { return getUint8_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt16") ) { return setInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt32") ) { return setInt32_dyn(); }
		if (HX_FIELD_EQ(inName,"setUint8") ) { return setUint8_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getUint16") ) { return getUint16_dyn(); }
		if (HX_FIELD_EQ(inName,"getUint32") ) { return getUint32_dyn(); }
		if (HX_FIELD_EQ(inName,"setUint16") ) { return setUint16_dyn(); }
		if (HX_FIELD_EQ(inName,"setUint32") ) { return setUint32_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { return byteLength; }
		if (HX_FIELD_EQ(inName,"byteOffset") ) { return byteOffset; }
		if (HX_FIELD_EQ(inName,"getFloat32") ) { return getFloat32_dyn(); }
		if (HX_FIELD_EQ(inName,"getFloat64") ) { return getFloat64_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat32") ) { return setFloat32_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat64") ) { return setFloat64_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DataView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< Array< unsigned char > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byteOffset") ) { byteOffset=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"));
	outFields->push(HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< unsigned char >*/ ,(int)offsetof(DataView_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsInt,(int)offsetof(DataView_obj,byteLength),HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")},
	{hx::fsInt,(int)offsetof(DataView_obj,byteOffset),HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"),
	HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"),
	HX_HCSTRING("getInt8","\x1f","\xf4","\x3d","\x18"),
	HX_HCSTRING("getInt16","\x1e","\xa1","\xf7","\x1d"),
	HX_HCSTRING("getInt32","\xd8","\xa2","\xf7","\x1d"),
	HX_HCSTRING("getUint8","\xe8","\x32","\x74","\x03"),
	HX_HCSTRING("getUint16","\x35","\x52","\x38","\x02"),
	HX_HCSTRING("getUint32","\xef","\x53","\x38","\x02"),
	HX_HCSTRING("getFloat32","\x45","\x17","\x6a","\x39"),
	HX_HCSTRING("getFloat64","\xe4","\x19","\x6a","\x39"),
	HX_HCSTRING("setInt8","\x2b","\x85","\x3f","\x0b"),
	HX_HCSTRING("setInt16","\x92","\xfa","\x54","\xcc"),
	HX_HCSTRING("setInt32","\x4c","\xfc","\x54","\xcc"),
	HX_HCSTRING("setUint8","\x5c","\x8c","\xd1","\xb1"),
	HX_HCSTRING("setUint16","\x41","\x3e","\x89","\xe5"),
	HX_HCSTRING("setUint32","\xfb","\x3f","\x89","\xe5"),
	HX_HCSTRING("setFloat32","\xb9","\xb5","\xe7","\x3c"),
	HX_HCSTRING("setFloat64","\x58","\xb8","\xe7","\x3c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DataView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DataView_obj::__mClass,"__mClass");
};

#endif

hx::Class DataView_obj::__mClass;

void DataView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.api.buffers.DataView","\x49","\x4c","\x52","\x1f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DataView_obj >;
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
