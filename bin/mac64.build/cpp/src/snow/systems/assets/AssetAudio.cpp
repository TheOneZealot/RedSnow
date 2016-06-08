#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_DebugError
#include <snow/api/DebugError.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Audio
#include <snow/modules/interfaces/Audio.h>
#endif
#ifndef INCLUDED_snow_modules_openal_Audio
#include <snow/modules/openal/Audio.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetAudio
#include <snow/systems/assets/AssetAudio.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Assets
#include <snow/systems/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_systems_audio_Audio
#include <snow/systems/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_types_AudioData
#include <snow/types/AudioData.h>
#endif
namespace snow{
namespace systems{
namespace assets{

Void AssetAudio_obj::__construct(::snow::systems::assets::Assets _system,::String _id,::snow::types::AudioData _audio)
{
HX_STACK_FRAME("snow.systems.assets.AssetAudio","new",0x7e0f49ee,"snow.systems.assets.AssetAudio.new","snow/systems/assets/Asset.hx",187,0x7a5509c3)
HX_STACK_THIS(this)
HX_STACK_ARG(_system,"_system")
HX_STACK_ARG(_id,"_id")
HX_STACK_ARG(_audio,"_audio")
{
	HX_STACK_LINE(189)
	::snow::systems::assets::Assets tmp = _system;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	super::__construct(tmp,tmp1,(int)5);
	HX_STACK_LINE(190)
	::snow::types::AudioData tmp2 = _audio;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(190)
	this->set_audio(tmp2);
}
;
	return null();
}

//AssetAudio_obj::~AssetAudio_obj() { }

Dynamic AssetAudio_obj::__CreateEmpty() { return  new AssetAudio_obj; }
hx::ObjectPtr< AssetAudio_obj > AssetAudio_obj::__new(::snow::systems::assets::Assets _system,::String _id,::snow::types::AudioData _audio)
{  hx::ObjectPtr< AssetAudio_obj > _result_ = new AssetAudio_obj();
	_result_->__construct(_system,_id,_audio);
	return _result_;}

Dynamic AssetAudio_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetAudio_obj > _result_ = new AssetAudio_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::snow::api::Promise AssetAudio_obj::reload( Dynamic __o__is_stream){
Dynamic _is_stream = __o__is_stream.Default(false);
	HX_STACK_FRAME("snow.systems.assets.AssetAudio","reload",0xe5b1c68b,"snow.systems.assets.AssetAudio.reload","snow/systems/assets/Asset.hx",197,0x7a5509c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_is_stream,"_is_stream")
{
		HX_STACK_LINE(197)
		::snow::systems::assets::AssetAudio _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(199)
		this->loaded = false;

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::snow::systems::assets::AssetAudio,_g,Dynamic,_is_stream)
		int __ArgCount() const { return 2; }
		Void run(Dynamic resolve,Dynamic reject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/systems/assets/Asset.hx",201,0x7a5509c3)
			HX_STACK_ARG(resolve,"resolve")
			HX_STACK_ARG(reject,"reject")
			{
				HX_STACK_LINE(203)
				::snow::Snow tmp = _g->_system->app;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(203)
				::snow::modules::openal::Audio tmp1 = tmp->audio->module;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(203)
				::String tmp2 = _g->_system->root;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(203)
				::String tmp3 = _g->id;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(203)
				::String tmp4 = ::haxe::io::Path_obj::join(Array_obj< ::String >::__new().Add(tmp2).Add(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(203)
				Dynamic tmp5 = _is_stream;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(203)
				::snow::api::Promise tmp6 = tmp1->data_from_load(tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(203)
				::snow::api::Promise _load = tmp6;		HX_STACK_VAR(_load,"_load");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::snow::systems::assets::AssetAudio,_g,Dynamic,resolve)
				int __ArgCount() const { return 1; }
				Void run(::snow::types::AudioData _audio){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/systems/assets/Asset.hx",206,0x7a5509c3)
					HX_STACK_ARG(_audio,"_audio")
					{
						HX_STACK_LINE(207)
						::snow::types::AudioData tmp7 = _audio;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(207)
						_g->set_audio(tmp7);
						HX_STACK_LINE(208)
						::snow::systems::assets::AssetAudio tmp8 = _g;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(208)
						resolve(tmp8);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(205)
				::snow::api::Promise tmp7 = _load->then( Dynamic(new _Function_2_1(_g,resolve)),null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(210)
				Dynamic tmp8 = reject;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(205)
				tmp7->error(tmp8);
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(201)
		::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g,_is_stream)));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(201)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(AssetAudio_obj,reload,return )

Void AssetAudio_obj::destroy( ){
{
		HX_STACK_FRAME("snow.systems.assets.AssetAudio","destroy",0xdad88588,"snow.systems.assets.AssetAudio.destroy","snow/systems/assets/Asset.hx",216,0x7a5509c3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(218)
		::snow::types::AudioData tmp = this->audio;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(218)
		tmp->destroy();
		HX_STACK_LINE(219)
		this->set_audio(null());
	}
return null();
}


::snow::api::Promise AssetAudio_obj::reload_from_bytes( ::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format){
	HX_STACK_FRAME("snow.systems.assets.AssetAudio","reload_from_bytes",0x62612d0a,"snow.systems.assets.AssetAudio.reload_from_bytes","snow/systems/assets/Asset.hx",224,0x7a5509c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_ARG(_format,"_format")
	HX_STACK_LINE(224)
	::snow::systems::assets::AssetAudio _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(226)
	this->loaded = false;

	HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,::snow::systems::assets::AssetAudio,_g,Dynamic,_format,::snow::api::buffers::ArrayBufferView,_bytes)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/systems/assets/Asset.hx",228,0x7a5509c3)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(230)
			::snow::Snow tmp = _g->_system->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(230)
			::snow::modules::openal::Audio tmp1 = tmp->audio->module;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(230)
			::String tmp2 = _g->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(230)
			::snow::api::buffers::ArrayBufferView tmp3 = _bytes;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(230)
			Dynamic tmp4 = _format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(230)
			::snow::api::Promise tmp5 = tmp1->data_from_bytes(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(230)
			::snow::api::Promise _load = tmp5;		HX_STACK_VAR(_load,"_load");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::snow::systems::assets::AssetAudio,_g,Dynamic,resolve)
			int __ArgCount() const { return 1; }
			Void run(::snow::types::AudioData _audio){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/systems/assets/Asset.hx",232,0x7a5509c3)
				HX_STACK_ARG(_audio,"_audio")
				{
					HX_STACK_LINE(233)
					::snow::types::AudioData tmp6 = _audio;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(233)
					_g->set_audio(tmp6);
					HX_STACK_LINE(234)
					::snow::systems::assets::AssetAudio tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(234)
					resolve(tmp7);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(232)
			::snow::api::Promise tmp6 = _load->then( Dynamic(new _Function_2_1(_g,resolve)),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(235)
			Dynamic tmp7 = reject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(232)
			tmp6->error(tmp7);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(228)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g,_format,_bytes)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(AssetAudio_obj,reload_from_bytes,return )

::snow::types::AudioData AssetAudio_obj::set_audio( ::snow::types::AudioData _audio){
	HX_STACK_FRAME("snow.systems.assets.AssetAudio","set_audio",0x007ed947,"snow.systems.assets.AssetAudio.set_audio","snow/systems/assets/Asset.hx",265,0x7a5509c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_audio,"_audio")
	HX_STACK_LINE(267)
	bool tmp = (_audio != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(267)
	this->loaded = tmp;
	HX_STACK_LINE(268)
	::snow::types::AudioData tmp1 = this->audio = _audio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetAudio_obj,set_audio,return )

::snow::api::Promise AssetAudio_obj::load( ::snow::systems::assets::Assets _system,::String _id,Dynamic __o__is_stream){
Dynamic _is_stream = __o__is_stream.Default(false);
	HX_STACK_FRAME("snow.systems.assets.AssetAudio","load",0xce067cd8,"snow.systems.assets.AssetAudio.load","snow/systems/assets/Asset.hx",243,0x7a5509c3)
	HX_STACK_ARG(_system,"_system")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_is_stream,"_is_stream")
{
		HX_STACK_LINE(245)
		{
			HX_STACK_LINE(245)
			bool tmp = (_id == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(245)
			if ((tmp)){
				HX_STACK_LINE(245)
				::String tmp1 = HX_HCSTRING("_id was null","\xc4","\x57","\x88","\xc5");		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(245)
				::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(245)
				HX_STACK_DO_THROW(tmp2);
			}
		}
		HX_STACK_LINE(246)
		{
			HX_STACK_LINE(246)
			bool tmp = (_system == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(246)
			if ((tmp)){
				HX_STACK_LINE(246)
				::String tmp1 = HX_HCSTRING("_system was null","\xb0","\xae","\xad","\x1a");		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(246)
				::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(246)
				HX_STACK_DO_THROW(tmp2);
			}
		}
		HX_STACK_LINE(248)
		::snow::systems::assets::AssetAudio tmp = ::snow::systems::assets::AssetAudio_obj::__new(_system,_id,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		Dynamic tmp1 = _is_stream;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		::snow::api::Promise tmp2 = tmp->reload(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(248)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AssetAudio_obj,load,return )

::snow::api::Promise AssetAudio_obj::load_from_bytes( ::snow::systems::assets::Assets _system,::String _id,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format){
	HX_STACK_FRAME("snow.systems.assets.AssetAudio","load_from_bytes",0x51102fdd,"snow.systems.assets.AssetAudio.load_from_bytes","snow/systems/assets/Asset.hx",252,0x7a5509c3)
	HX_STACK_ARG(_system,"_system")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_ARG(_format,"_format")
	HX_STACK_LINE(254)
	{
		HX_STACK_LINE(254)
		bool tmp = (_id == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(254)
		if ((tmp)){
			HX_STACK_LINE(254)
			::String tmp1 = HX_HCSTRING("_id was null","\xc4","\x57","\x88","\xc5");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(254)
			::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(254)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(255)
	{
		HX_STACK_LINE(255)
		bool tmp = (_bytes == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(255)
		if ((tmp)){
			HX_STACK_LINE(255)
			::String tmp1 = HX_HCSTRING("_bytes was null","\xd2","\x33","\xd5","\x32");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(255)
			::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(255)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(256)
	{
		HX_STACK_LINE(256)
		bool tmp = (_system == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(256)
		if ((tmp)){
			HX_STACK_LINE(256)
			::String tmp1 = HX_HCSTRING("_system was null","\xb0","\xae","\xad","\x1a");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(256)
			::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(256)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(258)
	::snow::systems::assets::AssetAudio tmp = ::snow::systems::assets::AssetAudio_obj::__new(_system,_id,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
	::snow::api::buffers::ArrayBufferView tmp1 = _bytes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(258)
	Dynamic tmp2 = _format;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(258)
	::snow::api::Promise tmp3 = tmp->reload_from_bytes(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(258)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AssetAudio_obj,load_from_bytes,return )


AssetAudio_obj::AssetAudio_obj()
{
}

void AssetAudio_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetAudio);
	HX_MARK_MEMBER_NAME(audio,"audio");
	::snow::systems::assets::Asset_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AssetAudio_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(audio,"audio");
	::snow::systems::assets::Asset_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AssetAudio_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"audio") ) { return audio; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reload") ) { return reload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_audio") ) { return set_audio_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"reload_from_bytes") ) { return reload_from_bytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool AssetAudio_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"load_from_bytes") ) { outValue = load_from_bytes_dyn(); return true;  }
	}
	return false;
}

Dynamic AssetAudio_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"audio") ) { if (inCallProp == hx::paccAlways) return set_audio(inValue);audio=inValue.Cast< ::snow::types::AudioData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetAudio_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::types::AudioData*/ ,(int)offsetof(AssetAudio_obj,audio),HX_HCSTRING("audio","\xd6","\x78","\x80","\x27")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"),
	HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("reload_from_bytes","\xfc","\x56","\x51","\xe1"),
	HX_HCSTRING("set_audio","\x39","\xc1","\x7a","\x4e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetAudio_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetAudio_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetAudio_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("load_from_bytes","\x4f","\x99","\xbd","\xfa"),
	::String(null()) };

void AssetAudio_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.systems.assets.AssetAudio","\xfc","\x7a","\x94","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetAudio_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetAudio_obj >;
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
