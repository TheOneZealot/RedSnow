#include <hxcpp.h>

#ifndef INCLUDED_luxe_importers_tiled_TiledImage
#include <luxe/importers/tiled/TiledImage.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledImageLayer
#include <luxe/importers/tiled/TiledImageLayer.h>
#endif
namespace luxe{
namespace importers{
namespace tiled{

Void TiledImage_obj::__construct(::luxe::importers::tiled::TiledImageLayer _image_layer,::String _format,::String _source,int _transparent_color,Dynamic _width,Dynamic _height)
{
HX_STACK_FRAME("luxe.importers.tiled.TiledImage","new",0x89ec01b4,"luxe.importers.tiled.TiledImage.new","luxe/importers/tiled/TiledImageLayer.hx",105,0x88cf54f2)
HX_STACK_THIS(this)
HX_STACK_ARG(_image_layer,"_image_layer")
HX_STACK_ARG(_format,"_format")
HX_STACK_ARG(_source,"_source")
HX_STACK_ARG(_transparent_color,"_transparent_color")
HX_STACK_ARG(_width,"_width")
HX_STACK_ARG(_height,"_height")
{
	HX_STACK_LINE(118)
	this->height = (int)0;
	HX_STACK_LINE(116)
	this->width = (int)0;
	HX_STACK_LINE(121)
	this->image_layer = _image_layer;
	HX_STACK_LINE(122)
	bool tmp = (_format == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	if ((tmp)){
		HX_STACK_LINE(122)
		tmp1 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	else{
		HX_STACK_LINE(122)
		tmp1 = _format;
	}
	HX_STACK_LINE(122)
	this->format = tmp1;
	HX_STACK_LINE(123)
	this->source = _source;
	HX_STACK_LINE(124)
	this->transparent_color = _transparent_color;
	HX_STACK_LINE(125)
	this->width = _width;
	HX_STACK_LINE(126)
	this->height = _height;
}
;
	return null();
}

//TiledImage_obj::~TiledImage_obj() { }

Dynamic TiledImage_obj::__CreateEmpty() { return  new TiledImage_obj; }
hx::ObjectPtr< TiledImage_obj > TiledImage_obj::__new(::luxe::importers::tiled::TiledImageLayer _image_layer,::String _format,::String _source,int _transparent_color,Dynamic _width,Dynamic _height)
{  hx::ObjectPtr< TiledImage_obj > _result_ = new TiledImage_obj();
	_result_->__construct(_image_layer,_format,_source,_transparent_color,_width,_height);
	return _result_;}

Dynamic TiledImage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledImage_obj > _result_ = new TiledImage_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}


TiledImage_obj::TiledImage_obj()
{
}

void TiledImage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledImage);
	HX_MARK_MEMBER_NAME(image_layer,"image_layer");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_MEMBER_NAME(transparent_color,"transparent_color");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_END_CLASS();
}

void TiledImage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(image_layer,"image_layer");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(source,"source");
	HX_VISIT_MEMBER_NAME(transparent_color,"transparent_color");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
}

Dynamic TiledImage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		if (HX_FIELD_EQ(inName,"source") ) { return source; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"image_layer") ) { return image_layer; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"transparent_color") ) { return transparent_color; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledImage_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"image_layer") ) { image_layer=inValue.Cast< ::luxe::importers::tiled::TiledImageLayer >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"transparent_color") ) { transparent_color=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledImage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("image_layer","\xad","\x5e","\x53","\x7f"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));
	outFields->push(HX_HCSTRING("transparent_color","\x76","\x2d","\x50","\x9d"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::importers::tiled::TiledImageLayer*/ ,(int)offsetof(TiledImage_obj,image_layer),HX_HCSTRING("image_layer","\xad","\x5e","\x53","\x7f")},
	{hx::fsString,(int)offsetof(TiledImage_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{hx::fsString,(int)offsetof(TiledImage_obj,source),HX_HCSTRING("source","\xdb","\xb0","\x31","\x32")},
	{hx::fsInt,(int)offsetof(TiledImage_obj,transparent_color),HX_HCSTRING("transparent_color","\x76","\x2d","\x50","\x9d")},
	{hx::fsInt,(int)offsetof(TiledImage_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(TiledImage_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("image_layer","\xad","\x5e","\x53","\x7f"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),
	HX_HCSTRING("transparent_color","\x76","\x2d","\x50","\x9d"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledImage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledImage_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledImage_obj::__mClass;

void TiledImage_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.importers.tiled.TiledImage","\xc2","\x57","\xfc","\xac");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledImage_obj >;
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

} // end namespace luxe
} // end namespace importers
} // end namespace tiled
