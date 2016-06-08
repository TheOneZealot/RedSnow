#include <hxcpp.h>

#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
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
#ifndef INCLUDED_snow_systems_assets_AssetJSON
#include <snow/systems/assets/AssetJSON.h>
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

Void AssetJSON_obj::__construct(::snow::systems::assets::Assets _system,::String _id,Dynamic _json)
{
HX_STACK_FRAME("snow.systems.assets.AssetJSON","new",0xd67e7c94,"snow.systems.assets.AssetJSON.new","snow/systems/assets/Asset.hx",414,0x7a5509c3)
HX_STACK_THIS(this)
HX_STACK_ARG(_system,"_system")
HX_STACK_ARG(_id,"_id")
HX_STACK_ARG(_json,"_json")
{
	HX_STACK_LINE(416)
	::snow::systems::assets::Assets tmp = _system;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(416)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(416)
	super::__construct(tmp,tmp1,(int)3);
	HX_STACK_LINE(417)
	Dynamic tmp2 = _json;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(417)
	this->set_json(tmp2);
}
;
	return null();
}

//AssetJSON_obj::~AssetJSON_obj() { }

Dynamic AssetJSON_obj::__CreateEmpty() { return  new AssetJSON_obj; }
hx::ObjectPtr< AssetJSON_obj > AssetJSON_obj::__new(::snow::systems::assets::Assets _system,::String _id,Dynamic _json)
{  hx::ObjectPtr< AssetJSON_obj > _result_ = new AssetJSON_obj();
	_result_->__construct(_system,_id,_json);
	return _result_;}

Dynamic AssetJSON_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetJSON_obj > _result_ = new AssetJSON_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::snow::api::Promise AssetJSON_obj::reload( ){
	HX_STACK_FRAME("snow.systems.assets.AssetJSON","reload",0xb7073fa5,"snow.systems.assets.AssetJSON.reload","snow/systems/assets/Asset.hx",424,0x7a5509c3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(424)
	::snow::systems::assets::AssetJSON _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::systems::assets::AssetJSON,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/systems/assets/Asset.hx",426,0x7a5509c3)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(428)
			::snow::Snow tmp = _g->_system->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(428)
			::String tmp1 = _g->_system->root;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(428)
			::String tmp2 = _g->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(428)
			::String tmp3 = ::haxe::io::Path_obj::join(Array_obj< ::String >::__new().Add(tmp1).Add(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(428)
			Dynamic tmp4 = ::snow::systems::assets::AssetJSON_obj::processor_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(428)
			::snow::api::Promise tmp5 = tmp->io->data_flow(tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::snow::systems::assets::AssetJSON,_g,Dynamic,resolve)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _json){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/systems/assets/Asset.hx",428,0x7a5509c3)
				HX_STACK_ARG(_json,"_json")
				{
					HX_STACK_LINE(430)
					Dynamic tmp6 = _json;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(430)
					_g->set_json(tmp6);
					HX_STACK_LINE(431)
					::snow::systems::assets::AssetJSON tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(431)
					resolve(tmp7);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(428)
			::snow::api::Promise tmp6 = tmp5->then( Dynamic(new _Function_2_1(_g,resolve)),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(433)
			Dynamic tmp7 = reject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(428)
			tmp6->error(tmp7);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(426)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(426)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AssetJSON_obj,reload,return )

Void AssetJSON_obj::destroy( ){
{
		HX_STACK_FRAME("snow.systems.assets.AssetJSON","destroy",0x344d032e,"snow.systems.assets.AssetJSON.destroy","snow/systems/assets/Asset.hx",440,0x7a5509c3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(440)
		this->set_json(null());
	}
return null();
}


Dynamic AssetJSON_obj::set_json( Dynamic _json){
	HX_STACK_FRAME("snow.systems.assets.AssetJSON","set_json",0x32b4ee71,"snow.systems.assets.AssetJSON.set_json","snow/systems/assets/Asset.hx",478,0x7a5509c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_json,"_json")
	HX_STACK_LINE(480)
	bool tmp = (_json != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(480)
	this->loaded = tmp;
	HX_STACK_LINE(481)
	Dynamic tmp1 = this->json = _json;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(481)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetJSON_obj,set_json,return )

::snow::api::Promise AssetJSON_obj::load( ::snow::systems::assets::Assets _system,::String _id){
	HX_STACK_FRAME("snow.systems.assets.AssetJSON","load",0xd6e39b72,"snow.systems.assets.AssetJSON.load","snow/systems/assets/Asset.hx",446,0x7a5509c3)
	HX_STACK_ARG(_system,"_system")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(448)
	::snow::systems::assets::AssetJSON tmp = ::snow::systems::assets::AssetJSON_obj::__new(_system,_id,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(448)
	::snow::api::Promise tmp1 = tmp->reload();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(448)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetJSON_obj,load,return )

::snow::api::Promise AssetJSON_obj::processor( ::snow::Snow _app,::String _id,::snow::api::buffers::ArrayBufferView _data){
	HX_STACK_FRAME("snow.systems.assets.AssetJSON","processor",0x82db8886,"snow.systems.assets.AssetJSON.processor","snow/systems/assets/Asset.hx",453,0x7a5509c3)
	HX_STACK_ARG(_app,"_app")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_data,"_data")
	HX_STACK_LINE(453)
	Array< ::Dynamic > _data1 = Array_obj< ::Dynamic >::__new().Add(_data);		HX_STACK_VAR(_data1,"_data1");
	HX_STACK_LINE(455)
	bool tmp = (_data1->__get((int)0).StaticCast< ::snow::api::buffers::ArrayBufferView >() == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(455)
	if ((tmp)){
		HX_STACK_LINE(455)
		::snow::types::Error tmp1 = ::snow::types::Error_obj::error(HX_HCSTRING("AssetJSON: data was null","\x36","\x36","\x57","\x6d"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(455)
		::snow::api::Promise tmp2 = ::snow::api::Promise_obj::reject(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(455)
		return tmp2;
	}

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_data1)
	int __ArgCount() const { return 2; }
	Dynamic run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/systems/assets/Asset.hx",457,0x7a5509c3)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(459)
			Dynamic _data_json = null();		HX_STACK_VAR(_data_json,"_data_json");
			HX_STACK_LINE(461)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(462)
				Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(462)
				{
					HX_STACK_LINE(462)
					Array< unsigned char > tmp2 = _data1->__get((int)0).StaticCast< ::snow::api::buffers::ArrayBufferView >()->buffer;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(462)
					::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::ofData(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(462)
					::String tmp4 = tmp3->toString();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(462)
					::String text = tmp4;		HX_STACK_VAR(text,"text");
					HX_STACK_LINE(462)
					::haxe::format::JsonParser tmp5 = ::haxe::format::JsonParser_obj::__new(text);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(462)
					tmp1 = tmp5->parseRec();
				}
				HX_STACK_LINE(462)
				_data_json = tmp1;
				HX_STACK_LINE(463)
				_data1[(int)0] = null();
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(465)
						_data1[(int)0] = null();
						HX_STACK_LINE(466)
						Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(466)
						::snow::types::Error tmp2 = ::snow::types::Error_obj::parse(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(466)
						Dynamic tmp3 = reject(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(466)
						return tmp3;
					}
				}
			}
			HX_STACK_LINE(469)
			Dynamic tmp1 = _data_json;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(469)
			Dynamic tmp2 = resolve(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(469)
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(457)
	::snow::api::Promise tmp1 = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_data1)));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(457)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AssetJSON_obj,processor,return )


AssetJSON_obj::AssetJSON_obj()
{
}

void AssetJSON_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetJSON);
	HX_MARK_MEMBER_NAME(json,"json");
	::snow::systems::assets::Asset_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AssetJSON_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(json,"json");
	::snow::systems::assets::Asset_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AssetJSON_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"json") ) { return json; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reload") ) { return reload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_json") ) { return set_json_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool AssetJSON_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

Dynamic AssetJSON_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"json") ) { if (inCallProp == hx::paccAlways) return set_json(inValue);json=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetJSON_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("json","\x28","\x42","\x68","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AssetJSON_obj,json),HX_HCSTRING("json","\x28","\x42","\x68","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("json","\x28","\x42","\x68","\x46"),
	HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("set_json","\x25","\x57","\x80","\x74"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetJSON_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetJSON_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetJSON_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("processor","\x52","\xbd","\x0b","\xd3"),
	::String(null()) };

void AssetJSON_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.systems.assets.AssetJSON","\xa2","\xe2","\x3f","\x56");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetJSON_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetJSON_obj >;
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
