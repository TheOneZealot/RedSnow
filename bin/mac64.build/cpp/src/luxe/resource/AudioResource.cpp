#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_luxe_resource_AudioResource
#include <luxe/resource/AudioResource.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
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
#ifndef INCLUDED_snow_systems_audio_AudioSource
#include <snow/systems/audio/AudioSource.h>
#endif
#ifndef INCLUDED_snow_types_AudioData
#include <snow/types/AudioData.h>
#endif
namespace luxe{
namespace resource{

Void AudioResource_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.resource.AudioResource","new",0x98d548ae,"luxe.resource.AudioResource.new","luxe/resource/Resource.hx",363,0x204e02c8)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(368)
	this->is_stream = false;
	HX_STACK_LINE(372)
	{
		HX_STACK_LINE(372)
		bool tmp = (_options == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(372)
		if ((tmp)){
			HX_STACK_LINE(372)
			::String tmp1 = HX_HCSTRING("_options was null","\x3f","\x38","\x24","\xa1");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(372)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(372)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(374)
	_options->__FieldRef(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c")) = (int)8;
	HX_STACK_LINE(376)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(376)
	super::__construct(tmp);
	HX_STACK_LINE(378)
	this->asset = _options->__Field(HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"), hx::paccDynamic );
	HX_STACK_LINE(379)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(379)
	{
		HX_STACK_LINE(379)
		bool tmp2 = (_options->__Field(HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(379)
		if ((tmp2)){
			HX_STACK_LINE(379)
			_options->__FieldRef(HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6")) = false;
		}
		HX_STACK_LINE(379)
		tmp1 = _options->__Field(HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6"), hx::paccDynamic );
	}
	HX_STACK_LINE(379)
	this->is_stream = tmp1;
	HX_STACK_LINE(381)
	::snow::systems::assets::AssetAudio tmp2 = this->asset;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(381)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(381)
	if ((tmp3)){
		HX_STACK_LINE(382)
		::luxe::Engine tmp4 = ::Luxe_obj::core;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(382)
		::snow::Snow tmp5 = tmp4->app;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(382)
		::snow::systems::assets::AssetAudio tmp6 = this->asset;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(382)
		::snow::types::AudioData tmp7 = tmp6->audio;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(382)
		::snow::systems::audio::AudioSource tmp8 = ::snow::systems::audio::AudioSource_obj::__new(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(382)
		this->source = tmp8;
	}
}
;
	return null();
}

//AudioResource_obj::~AudioResource_obj() { }

Dynamic AudioResource_obj::__CreateEmpty() { return  new AudioResource_obj; }
hx::ObjectPtr< AudioResource_obj > AudioResource_obj::__new(Dynamic _options)
{  hx::ObjectPtr< AudioResource_obj > _result_ = new AudioResource_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic AudioResource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioResource_obj > _result_ = new AudioResource_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::snow::api::Promise AudioResource_obj::reload( ){
	HX_STACK_FRAME("luxe.resource.AudioResource","reload",0x77277fcb,"luxe.resource.AudioResource.reload","luxe/resource/Resource.hx",387,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(387)
	::luxe::resource::AudioResource _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(389)
	{
		HX_STACK_LINE(389)
		int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(389)
		bool tmp1 = (tmp != (int)6);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(389)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(389)
		if ((tmp2)){
			HX_STACK_LINE(389)
			::String tmp3 = HX_HCSTRING("state != ResourceState.destroyed","\x79","\xbe","\xa0","\xbf");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(389)
			::luxe::DebugError tmp4 = ::luxe::DebugError_obj::assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(389)
			HX_STACK_DO_THROW(tmp4);
		}
	}
	HX_STACK_LINE(391)
	this->clear();

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::luxe::resource::AudioResource,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/resource/Resource.hx",393,0x204e02c8)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(395)
			_g->set_state((int)2);
			HX_STACK_LINE(397)
			::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(397)
			::snow::systems::assets::Assets tmp1 = tmp->app->assets;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(397)
			::String tmp2 = _g->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(397)
			bool tmp3 = _g->is_stream;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(397)
			::snow::api::Promise tmp4 = ::snow::systems::assets::AssetAudio_obj::load(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(397)
			::snow::api::Promise get = tmp4;		HX_STACK_VAR(get,"get");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::luxe::resource::AudioResource,_g,Dynamic,resolve)
			int __ArgCount() const { return 1; }
			Void run(::snow::systems::assets::AssetAudio _asset){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","luxe/resource/Resource.hx",399,0x204e02c8)
				HX_STACK_ARG(_asset,"_asset")
				{
					HX_STACK_LINE(401)
					_g->asset = _asset;
					HX_STACK_LINE(402)
					::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(402)
					::snow::Snow tmp6 = tmp5->app;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(402)
					::snow::types::AudioData tmp7 = _g->asset->audio;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(402)
					::snow::systems::audio::AudioSource tmp8 = ::snow::systems::audio::AudioSource_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(402)
					_g->source = tmp8;
					HX_STACK_LINE(403)
					_g->set_state((int)3);
					HX_STACK_LINE(404)
					::luxe::resource::AudioResource tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(404)
					resolve(tmp9);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(399)
			get->then( Dynamic(new _Function_2_1(_g,resolve)),null());

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_2,::luxe::resource::AudioResource,_g,Dynamic,reject)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _error){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","luxe/resource/Resource.hx",408,0x204e02c8)
				HX_STACK_ARG(_error,"_error")
				{
					HX_STACK_LINE(410)
					_g->set_state((int)4);
					HX_STACK_LINE(411)
					Dynamic tmp5 = _error;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(411)
					reject(tmp5);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(408)
			get->error( Dynamic(new _Function_2_2(_g,reject)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(393)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(393)
	return tmp;
}


Void AudioResource_obj::clear( ){
{
		HX_STACK_FRAME("luxe.resource.AudioResource","clear",0x1e66195b,"luxe.resource.AudioResource.clear","luxe/resource/Resource.hx",419,0x204e02c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(421)
		::snow::systems::assets::AssetAudio tmp = this->asset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(421)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(421)
		if ((tmp1)){
			HX_STACK_LINE(422)
			::snow::systems::assets::AssetAudio tmp2 = this->asset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(422)
			tmp2->destroy();
			HX_STACK_LINE(423)
			this->asset = null();
		}
		HX_STACK_LINE(426)
		::snow::systems::audio::AudioSource tmp2 = this->source;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(426)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(426)
		if ((tmp3)){
			HX_STACK_LINE(427)
			::snow::systems::audio::AudioSource tmp4 = this->source;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(427)
			tmp4->destroy();
			HX_STACK_LINE(428)
			this->source = null();
		}
	}
return null();
}



AudioResource_obj::AudioResource_obj()
{
}

void AudioResource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioResource);
	HX_MARK_MEMBER_NAME(asset,"asset");
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_MEMBER_NAME(is_stream,"is_stream");
	::luxe::resource::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AudioResource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(asset,"asset");
	HX_VISIT_MEMBER_NAME(source,"source");
	HX_VISIT_MEMBER_NAME(is_stream,"is_stream");
	::luxe::resource::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AudioResource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { return asset; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { return source; }
		if (HX_FIELD_EQ(inName,"reload") ) { return reload_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"is_stream") ) { return is_stream; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioResource_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { asset=inValue.Cast< ::snow::systems::assets::AssetAudio >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast< ::snow::systems::audio::AudioSource >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"is_stream") ) { is_stream=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioResource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"));
	outFields->push(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));
	outFields->push(HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::systems::assets::AssetAudio*/ ,(int)offsetof(AudioResource_obj,asset),HX_HCSTRING("asset","\xf0","\x69","\x39","\x26")},
	{hx::fsObject /*::snow::systems::audio::AudioSource*/ ,(int)offsetof(AudioResource_obj,source),HX_HCSTRING("source","\xdb","\xb0","\x31","\x32")},
	{hx::fsBool,(int)offsetof(AudioResource_obj,is_stream),HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"),
	HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),
	HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6"),
	HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioResource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioResource_obj::__mClass,"__mClass");
};

#endif

hx::Class AudioResource_obj::__mClass;

void AudioResource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.resource.AudioResource","\xbc","\x19","\x44","\xc4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioResource_obj >;
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
} // end namespace resource
