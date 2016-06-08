#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_core_native_assets_Assets
#include <snow/core/native/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Assets
#include <snow/modules/interfaces/Assets.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetAudio
#include <snow/systems/assets/AssetAudio.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetBytes
#include <snow/systems/assets/AssetBytes.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetImage
#include <snow/systems/assets/AssetImage.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetJSON
#include <snow/systems/assets/AssetJSON.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetText
#include <snow/systems/assets/AssetText.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Assets
#include <snow/systems/assets/Assets.h>
#endif
namespace snow{
namespace systems{
namespace assets{

Void Assets_obj::__construct(::snow::Snow _app)
{
HX_STACK_FRAME("snow.systems.assets.Assets","new",0xa4b6e92b,"snow.systems.assets.Assets.new","snow/systems/assets/Assets.hx",13,0xbd832986)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
{
	HX_STACK_LINE(17)
	this->root = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(35)
	this->app = _app;
	HX_STACK_LINE(36)
	::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	::snow::core::native::assets::Assets tmp1 = ::snow::core::native::assets::Assets_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	this->module = tmp1;
}
;
	return null();
}

//Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new(::snow::Snow _app)
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct(_app);
	return _result_;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Assets_obj::shutdown( ){
{
		HX_STACK_FRAME("snow.systems.assets.Assets","shutdown",0xbae423eb,"snow.systems.assets.Assets.shutdown","snow/systems/assets/Assets.hx",41,0xbd832986)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		::snow::core::native::assets::Assets tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		tmp->shutdown();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,shutdown,(void))

::String Assets_obj::path( ::String _id){
	HX_STACK_FRAME("snow.systems.assets.Assets","path",0x7ca47e7a,"snow.systems.assets.Assets.path","snow/systems/assets/Assets.hx",52,0xbd832986)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(52)
	::String tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	::String tmp2 = ::haxe::io::Path_obj::join(Array_obj< ::String >::__new().Add(tmp).Add(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,path,return )

::snow::api::Promise Assets_obj::bytes( ::String _id){
	HX_STACK_FRAME("snow.systems.assets.Assets","bytes",0x938b29f6,"snow.systems.assets.Assets.bytes","snow/systems/assets/Assets.hx",56,0xbd832986)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(56)
	::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::snow::api::Promise tmp1 = ::snow::systems::assets::AssetBytes_obj::load(hx::ObjectPtr<OBJ_>(this),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,bytes,return )

::snow::api::Promise Assets_obj::text( ::String _id){
	HX_STACK_FRAME("snow.systems.assets.Assets","text",0x7f4c6582,"snow.systems.assets.Assets.text","snow/systems/assets/Assets.hx",60,0xbd832986)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(60)
	::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	::snow::api::Promise tmp1 = ::snow::systems::assets::AssetText_obj::load(hx::ObjectPtr<OBJ_>(this),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,text,return )

::snow::api::Promise Assets_obj::json( ::String _id){
	HX_STACK_FRAME("snow.systems.assets.Assets","json",0x78badafd,"snow.systems.assets.Assets.json","snow/systems/assets/Assets.hx",64,0xbd832986)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(64)
	::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	::snow::api::Promise tmp1 = ::snow::systems::assets::AssetJSON_obj::load(hx::ObjectPtr<OBJ_>(this),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,json,return )

::snow::api::Promise Assets_obj::image( ::String _id){
	HX_STACK_FRAME("snow.systems.assets.Assets","image",0x935c40e6,"snow.systems.assets.Assets.image","snow/systems/assets/Assets.hx",68,0xbd832986)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(68)
	::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	::snow::api::Promise tmp1 = ::snow::systems::assets::AssetImage_obj::load(hx::ObjectPtr<OBJ_>(this),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,image,return )

::snow::api::Promise Assets_obj::image_from_bytes( ::String _id,::snow::api::buffers::ArrayBufferView _bytes){
	HX_STACK_FRAME("snow.systems.assets.Assets","image_from_bytes",0x3a40ea8f,"snow.systems.assets.Assets.image_from_bytes","snow/systems/assets/Assets.hx",72,0xbd832986)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_LINE(72)
	::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	::snow::api::buffers::ArrayBufferView tmp1 = _bytes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	::snow::api::Promise tmp2 = ::snow::systems::assets::AssetImage_obj::load_from_bytes(hx::ObjectPtr<OBJ_>(this),tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,image_from_bytes,return )

::snow::systems::assets::AssetImage Assets_obj::image_from_pixels( ::String _id,int _width,int _height,::snow::api::buffers::ArrayBufferView _pixels){
	HX_STACK_FRAME("snow.systems.assets.Assets","image_from_pixels",0x23c6ec89,"snow.systems.assets.Assets.image_from_pixels","snow/systems/assets/Assets.hx",76,0xbd832986)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_width,"_width")
	HX_STACK_ARG(_height,"_height")
	HX_STACK_ARG(_pixels,"_pixels")
	HX_STACK_LINE(76)
	::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	int tmp1 = _width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	int tmp2 = _height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(76)
	::snow::api::buffers::ArrayBufferView tmp3 = _pixels;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(76)
	::snow::systems::assets::AssetImage tmp4 = ::snow::systems::assets::AssetImage_obj::load_from_pixels(hx::ObjectPtr<OBJ_>(this),tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(76)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC4(Assets_obj,image_from_pixels,return )

::snow::api::Promise Assets_obj::audio( ::String _id,Dynamic __o__is_stream){
Dynamic _is_stream = __o__is_stream.Default(false);
	HX_STACK_FRAME("snow.systems.assets.Assets","audio",0xfd739a61,"snow.systems.assets.Assets.audio","snow/systems/assets/Assets.hx",80,0xbd832986)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_is_stream,"_is_stream")
{
		HX_STACK_LINE(80)
		::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		Dynamic tmp1 = _is_stream;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		::snow::api::Promise tmp2 = ::snow::systems::assets::AssetAudio_obj::load(hx::ObjectPtr<OBJ_>(this),tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,audio,return )

::snow::api::Promise Assets_obj::audio_from_bytes( ::String _id,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format){
	HX_STACK_FRAME("snow.systems.assets.Assets","audio_from_bytes",0x0d9fdcf4,"snow.systems.assets.Assets.audio_from_bytes","snow/systems/assets/Assets.hx",84,0xbd832986)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_ARG(_format,"_format")
	HX_STACK_LINE(84)
	::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	::snow::api::buffers::ArrayBufferView tmp1 = _bytes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	Dynamic tmp2 = _format;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	::snow::api::Promise tmp3 = ::snow::systems::assets::AssetAudio_obj::load_from_bytes(hx::ObjectPtr<OBJ_>(this),tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(84)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,audio_from_bytes,return )


Assets_obj::Assets_obj()
{
}

void Assets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Assets);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(module,"module");
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_END_CLASS();
}

void Assets_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(module,"module");
	HX_VISIT_MEMBER_NAME(app,"app");
}

Dynamic Assets_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		if (HX_FIELD_EQ(inName,"path") ) { return path_dyn(); }
		if (HX_FIELD_EQ(inName,"text") ) { return text_dyn(); }
		if (HX_FIELD_EQ(inName,"json") ) { return json_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes_dyn(); }
		if (HX_FIELD_EQ(inName,"image") ) { return image_dyn(); }
		if (HX_FIELD_EQ(inName,"audio") ) { return audio_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"module") ) { return module; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shutdown") ) { return shutdown_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"image_from_bytes") ) { return image_from_bytes_dyn(); }
		if (HX_FIELD_EQ(inName,"audio_from_bytes") ) { return audio_from_bytes_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"image_from_pixels") ) { return image_from_pixels_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Assets_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"module") ) { module=inValue.Cast< ::snow::core::native::assets::Assets >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Assets_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{hx::fsObject /*::snow::core::native::assets::Assets*/ ,(int)offsetof(Assets_obj,module),HX_HCSTRING("module","\xac","\x34","\xd3","\xc0")},
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(Assets_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"),
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"),
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("json","\x28","\x42","\x68","\x46"),
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("image_from_bytes","\x3a","\xe6","\x41","\x81"),
	HX_HCSTRING("image_from_pixels","\x7e","\x26","\xa2","\xfd"),
	HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"),
	HX_HCSTRING("audio_from_bytes","\x9f","\xd8","\xa0","\x54"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
};

#endif

hx::Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.systems.assets.Assets","\xb9","\x77","\xd2","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Assets_obj >;
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
} // end namespace systems
} // end namespace assets
