#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
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
#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetText
#include <snow/systems/assets/AssetText.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Assets
#include <snow/systems/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_systems_io_IO
#include <snow/systems/io/IO.h>
#endif
#ifndef INCLUDED_snow_types_Error
#include <snow/types/Error.h>
#endif
namespace snow{
namespace systems{
namespace assets{

Void AssetText_obj::__construct(::snow::systems::assets::Assets _system,::String _id,::String _text)
{
HX_STACK_FRAME("snow.systems.assets.AssetText","new",0x44d521b9,"snow.systems.assets.AssetText.new","snow/systems/assets/Asset.hx",343,0x7a5509c3)
HX_STACK_THIS(this)
HX_STACK_ARG(_system,"_system")
HX_STACK_ARG(_id,"_id")
HX_STACK_ARG(_text,"_text")
{
	HX_STACK_LINE(345)
	::snow::systems::assets::Assets tmp = _system;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(345)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(345)
	super::__construct(tmp,tmp1,(int)2);
	HX_STACK_LINE(346)
	::String tmp2 = _text;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(346)
	this->set_text(tmp2);
}
;
	return null();
}

//AssetText_obj::~AssetText_obj() { }

Dynamic AssetText_obj::__CreateEmpty() { return  new AssetText_obj; }
hx::ObjectPtr< AssetText_obj > AssetText_obj::__new(::snow::systems::assets::Assets _system,::String _id,::String _text)
{  hx::ObjectPtr< AssetText_obj > _result_ = new AssetText_obj();
	_result_->__construct(_system,_id,_text);
	return _result_;}

Dynamic AssetText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetText_obj > _result_ = new AssetText_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::snow::api::Promise AssetText_obj::reload( ){
	HX_STACK_FRAME("snow.systems.assets.AssetText","reload",0x8b1a9fa0,"snow.systems.assets.AssetText.reload","snow/systems/assets/Asset.hx",353,0x7a5509c3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(353)
	::snow::systems::assets::AssetText _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::systems::assets::AssetText,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/systems/assets/Asset.hx",355,0x7a5509c3)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(357)
			::snow::Snow tmp = _g->_system->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(357)
			::String tmp1 = _g->_system->root;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(357)
			::String tmp2 = _g->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(357)
			::String tmp3 = ::haxe::io::Path_obj::join(Array_obj< ::String >::__new().Add(tmp1).Add(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(357)
			Dynamic tmp4 = ::snow::systems::assets::AssetText_obj::processor_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(357)
			::snow::api::Promise tmp5 = tmp->io->data_flow(tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::snow::systems::assets::AssetText,_g,Dynamic,resolve)
			int __ArgCount() const { return 1; }
			Void run(::String _text){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/systems/assets/Asset.hx",357,0x7a5509c3)
				HX_STACK_ARG(_text,"_text")
				{
					HX_STACK_LINE(359)
					::String tmp6 = _text;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(359)
					_g->set_text(tmp6);
					HX_STACK_LINE(360)
					::snow::systems::assets::AssetText tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(360)
					resolve(tmp7);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(357)
			::snow::api::Promise tmp6 = tmp5->then( Dynamic(new _Function_2_1(_g,resolve)),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(362)
			Dynamic tmp7 = reject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(357)
			tmp6->error(tmp7);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(355)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(355)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AssetText_obj,reload,return )

Void AssetText_obj::destroy( ){
{
		HX_STACK_FRAME("snow.systems.assets.AssetText","destroy",0xf12d9ed3,"snow.systems.assets.AssetText.destroy","snow/systems/assets/Asset.hx",369,0x7a5509c3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(369)
		this->set_text(null());
	}
return null();
}


::String AssetText_obj::set_text( ::String _text){
	HX_STACK_FRAME("snow.systems.assets.AssetText","set_text",0xc0ee0db1,"snow.systems.assets.AssetText.set_text","snow/systems/assets/Asset.hx",398,0x7a5509c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_text,"_text")
	HX_STACK_LINE(400)
	bool tmp = (_text != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(400)
	this->loaded = tmp;
	HX_STACK_LINE(401)
	::String tmp1 = this->text = _text;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(401)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetText_obj,set_text,return )

::snow::api::Promise AssetText_obj::load( ::snow::systems::assets::Assets _system,::String _id){
	HX_STACK_FRAME("snow.systems.assets.AssetText","load",0xf45d76ad,"snow.systems.assets.AssetText.load","snow/systems/assets/Asset.hx",375,0x7a5509c3)
	HX_STACK_ARG(_system,"_system")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(377)
	::snow::systems::assets::AssetText tmp = ::snow::systems::assets::AssetText_obj::__new(_system,_id,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(377)
	::snow::api::Promise tmp1 = tmp->reload();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(377)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetText_obj,load,return )

::snow::api::Promise AssetText_obj::processor( ::snow::Snow _app,::String _id,::snow::api::buffers::ArrayBufferView _data){
	HX_STACK_FRAME("snow.systems.assets.AssetText","processor",0xadd6176b,"snow.systems.assets.AssetText.processor","snow/systems/assets/Asset.hx",382,0x7a5509c3)
	HX_STACK_ARG(_app,"_app")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_data,"_data")
	HX_STACK_LINE(384)
	bool tmp = (_data == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(384)
	if ((tmp)){
		HX_STACK_LINE(384)
		::snow::types::Error tmp1 = ::snow::types::Error_obj::error(HX_HCSTRING("AssetText processor: data was null","\xff","\xb9","\x3d","\xb3"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(384)
		::snow::api::Promise tmp2 = ::snow::api::Promise_obj::reject(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(384)
		return tmp2;
	}
	HX_STACK_LINE(386)
	Array< unsigned char > tmp1 = _data->buffer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(386)
	::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::ofData(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(386)
	::String tmp3 = tmp2->toString();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(386)
	::String _string = tmp3;		HX_STACK_VAR(_string,"_string");
	HX_STACK_LINE(388)
	_data->buffer = null();
	HX_STACK_LINE(389)
	_data = null();
	HX_STACK_LINE(391)
	::String tmp4 = _string;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(391)
	::snow::api::Promise tmp5 = ::snow::api::Promise_obj::resolve(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(391)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AssetText_obj,processor,return )


AssetText_obj::AssetText_obj()
{
}

void AssetText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetText);
	HX_MARK_MEMBER_NAME(text,"text");
	::snow::systems::assets::Asset_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AssetText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	::snow::systems::assets::Asset_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AssetText_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reload") ) { return reload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool AssetText_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"processor") ) { outValue = processor_dyn(); return true;  }
	}
	return false;
}

Dynamic AssetText_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue);text=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(AssetText_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetText_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetText_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetText_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("processor","\x52","\xbd","\x0b","\xd3"),
	::String(null()) };

void AssetText_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.systems.assets.AssetText","\x47","\xd1","\xe9","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetText_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetText_obj >;
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
