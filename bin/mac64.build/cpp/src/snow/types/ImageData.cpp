#include <hxcpp.h>

#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_types_ImageData
#include <snow/types/ImageData.h>
#endif
namespace snow{
namespace types{

Void ImageData_obj::__construct(::snow::Snow _app,Dynamic _options)
{
HX_STACK_FRAME("snow.types.ImageData","new",0xeecb2a57,"snow.types.ImageData.new","snow/types/Types.hx",158,0x72b41ce7)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(174)
	this->bpp_source = (int)4;
	HX_STACK_LINE(172)
	this->bpp = (int)4;
	HX_STACK_LINE(170)
	this->height_actual = (int)0;
	HX_STACK_LINE(168)
	this->width_actual = (int)0;
	HX_STACK_LINE(166)
	this->height = (int)0;
	HX_STACK_LINE(164)
	this->width = (int)0;
	HX_STACK_LINE(162)
	this->id = HX_HCSTRING("ImageData","\x05","\xcb","\x6a","\xc6");
	HX_STACK_LINE(180)
	this->app = _app;
	HX_STACK_LINE(182)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	{
		HX_STACK_LINE(182)
		bool tmp1 = (_options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(182)
		if ((tmp1)){
			HX_STACK_LINE(182)
			::String tmp2 = this->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(182)
			_options->__FieldRef(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")) = tmp2;
		}
		HX_STACK_LINE(182)
		tmp = _options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(182)
	this->id = tmp;
	HX_STACK_LINE(183)
	this->width = _options->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
	HX_STACK_LINE(184)
	this->height = _options->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
	HX_STACK_LINE(185)
	this->width_actual = _options->__Field(HX_HCSTRING("width_actual","\xe7","\x12","\xf5","\xde"), hx::paccDynamic );
	HX_STACK_LINE(186)
	this->height_actual = _options->__Field(HX_HCSTRING("height_actual","\x26","\x2f","\x9e","\xa1"), hx::paccDynamic );
	HX_STACK_LINE(187)
	this->bpp = _options->__Field(HX_HCSTRING("bpp","\xe2","\xbe","\x4a","\x00"), hx::paccDynamic );
	HX_STACK_LINE(188)
	this->bpp_source = _options->__Field(HX_HCSTRING("bpp_source","\xd8","\x83","\xda","\x8c"), hx::paccDynamic );
	HX_STACK_LINE(189)
	::snow::api::buffers::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	{
		HX_STACK_LINE(189)
		bool tmp2 = (_options->__Field(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		if ((tmp2)){
			HX_STACK_LINE(189)
			::snow::api::buffers::ArrayBufferView tmp3 = this->pixels;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(189)
			_options->__FieldRef(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c")) = tmp3;
		}
		HX_STACK_LINE(189)
		tmp1 = _options->__Field(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"), hx::paccDynamic );
	}
	HX_STACK_LINE(189)
	this->pixels = tmp1;
	HX_STACK_LINE(191)
	_options = null();
}
;
	return null();
}

//ImageData_obj::~ImageData_obj() { }

Dynamic ImageData_obj::__CreateEmpty() { return  new ImageData_obj; }
hx::ObjectPtr< ImageData_obj > ImageData_obj::__new(::snow::Snow _app,Dynamic _options)
{  hx::ObjectPtr< ImageData_obj > _result_ = new ImageData_obj();
	_result_->__construct(_app,_options);
	return _result_;}

Dynamic ImageData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageData_obj > _result_ = new ImageData_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void ImageData_obj::destroy( ){
{
		HX_STACK_FRAME("snow.types.ImageData","destroy",0xfc174e71,"snow.types.ImageData.destroy","snow/types/Types.hx",195,0x72b41ce7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(197)
		this->id = null();
		HX_STACK_LINE(198)
		::snow::api::buffers::ArrayBufferView tmp = this->pixels;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		tmp->buffer = null();
		HX_STACK_LINE(199)
		this->pixels = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ImageData_obj,destroy,(void))

::String ImageData_obj::toString( ){
	HX_STACK_FRAME("snow.types.ImageData","toString",0xffdaf755,"snow.types.ImageData.toString","snow/types/Types.hx",203,0x72b41ce7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(203)
	::String tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	::String tmp1 = (HX_HCSTRING("{ \"ImageData\":true, \"id\":","\x13","\x91","\x35","\x15") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	::String tmp2 = (tmp1 + HX_HCSTRING(", \"width\":","\xf0","\xc3","\xad","\x34"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(203)
	int tmp3 = this->width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(203)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(203)
	::String tmp5 = (tmp4 + HX_HCSTRING(", \"height\":","\xad","\x8a","\xe4","\x66"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(203)
	int tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(203)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(203)
	::String tmp8 = (tmp7 + HX_HCSTRING(", \"width_actual\":","\x2d","\x6c","\xe5","\x85"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(203)
	int tmp9 = this->width_actual;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(203)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(203)
	::String tmp11 = (tmp10 + HX_HCSTRING(", \"height_actual\":","\x10","\xa7","\xf1","\xe4"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(203)
	int tmp12 = this->height_actual;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(203)
	::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(203)
	::String tmp14 = (tmp13 + HX_HCSTRING(", \"bpp\":","\x4c","\x93","\x1e","\x57"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(203)
	int tmp15 = this->bpp;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(203)
	::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(203)
	::String tmp17 = (tmp16 + HX_HCSTRING(", \"bpp_source\":","\xde","\xd3","\xdf","\x8f"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(203)
	int tmp18 = this->bpp_source;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(203)
	::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(203)
	::String tmp20 = (tmp19 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(203)
	return tmp20;
}


HX_DEFINE_DYNAMIC_FUNC0(ImageData_obj,toString,return )


ImageData_obj::ImageData_obj()
{
}

void ImageData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageData);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width_actual,"width_actual");
	HX_MARK_MEMBER_NAME(height_actual,"height_actual");
	HX_MARK_MEMBER_NAME(bpp,"bpp");
	HX_MARK_MEMBER_NAME(bpp_source,"bpp_source");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_END_CLASS();
}

void ImageData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width_actual,"width_actual");
	HX_VISIT_MEMBER_NAME(height_actual,"height_actual");
	HX_VISIT_MEMBER_NAME(bpp,"bpp");
	HX_VISIT_MEMBER_NAME(bpp_source,"bpp_source");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
}

Dynamic ImageData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		if (HX_FIELD_EQ(inName,"bpp") ) { return bpp; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"pixels") ) { return pixels; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bpp_source") ) { return bpp_source; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"width_actual") ) { return width_actual; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"height_actual") ) { return height_actual; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ImageData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bpp") ) { bpp=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bpp_source") ) { bpp_source=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"width_actual") ) { width_actual=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"height_actual") ) { height_actual=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("width_actual","\xe7","\x12","\xf5","\xde"));
	outFields->push(HX_HCSTRING("height_actual","\x26","\x2f","\x9e","\xa1"));
	outFields->push(HX_HCSTRING("bpp","\xe2","\xbe","\x4a","\x00"));
	outFields->push(HX_HCSTRING("bpp_source","\xd8","\x83","\xda","\x8c"));
	outFields->push(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(ImageData_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsString,(int)offsetof(ImageData_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(ImageData_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(ImageData_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(ImageData_obj,width_actual),HX_HCSTRING("width_actual","\xe7","\x12","\xf5","\xde")},
	{hx::fsInt,(int)offsetof(ImageData_obj,height_actual),HX_HCSTRING("height_actual","\x26","\x2f","\x9e","\xa1")},
	{hx::fsInt,(int)offsetof(ImageData_obj,bpp),HX_HCSTRING("bpp","\xe2","\xbe","\x4a","\x00")},
	{hx::fsInt,(int)offsetof(ImageData_obj,bpp_source),HX_HCSTRING("bpp_source","\xd8","\x83","\xda","\x8c")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(ImageData_obj,pixels),HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("width_actual","\xe7","\x12","\xf5","\xde"),
	HX_HCSTRING("height_actual","\x26","\x2f","\x9e","\xa1"),
	HX_HCSTRING("bpp","\xe2","\xbe","\x4a","\x00"),
	HX_HCSTRING("bpp_source","\xd8","\x83","\xda","\x8c"),
	HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageData_obj::__mClass,"__mClass");
};

#endif

hx::Class ImageData_obj::__mClass;

void ImageData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types.ImageData","\xe5","\xb2","\x8b","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ImageData_obj >;
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
