#include <hxcpp.h>

#include "hxMath.h"
#include "linc_openal.h"
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_openal_ALError
#include <openal/ALError.h>
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
#ifndef INCLUDED_snow_core_native_audio_NativeAudioData
#include <snow/core/native/audio/NativeAudioData.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Audio
#include <snow/modules/interfaces/Audio.h>
#endif
#ifndef INCLUDED_snow_modules_openal_ALSound
#include <snow/modules/openal/ALSound.h>
#endif
#ifndef INCLUDED_snow_modules_openal_ALStream
#include <snow/modules/openal/ALStream.h>
#endif
#ifndef INCLUDED_snow_modules_openal_Audio
#include <snow/modules/openal/Audio.h>
#endif
#ifndef INCLUDED_snow_systems_audio_Audio
#include <snow/systems/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_systems_audio_AudioInstance
#include <snow/systems/audio/AudioInstance.h>
#endif
#ifndef INCLUDED_snow_systems_audio_AudioSource
#include <snow/systems/audio/AudioSource.h>
#endif
#ifndef INCLUDED_snow_types_AudioData
#include <snow/types/AudioData.h>
#endif
#ifndef INCLUDED_snow_types_SystemEvent
#include <snow/types/SystemEvent.h>
#endif
namespace snow{
namespace modules{
namespace openal{

Void Audio_obj::__construct(::snow::Snow _app)
{
HX_STACK_FRAME("snow.modules.openal.Audio","new",0x5594ed81,"snow.modules.openal.Audio.new","snow/modules/openal/Audio.hx",22,0x042b6f4e)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
{
	HX_STACK_LINE(33)
	this->active = false;
	HX_STACK_LINE(27)
	this->handle_seq = (int)0;
	HX_STACK_LINE(37)
	this->app = _app;
	HX_STACK_LINE(38)
	::haxe::ds::IntMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		::haxe::ds::IntMap tmp1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		::haxe::ds::IntMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		tmp = tmp2;
	}
	HX_STACK_LINE(38)
	this->instances = tmp;
	HX_STACK_LINE(39)
	::haxe::ds::ObjectMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		::haxe::ds::ObjectMap tmp2 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		::haxe::ds::ObjectMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(39)
	this->buffers = tmp1;
	HX_STACK_LINE(42)
	::cpp::Pointer< ALCdevice > tmp2 = ::cpp::Pointer< ALCdevice >(alcOpenDevice(null()));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	this->device = tmp2;
	HX_STACK_LINE(44)
	::cpp::Pointer< ALCdevice > tmp3 = this->device;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(44)
	if ((tmp4)){
		HX_STACK_LINE(45)
		::String tmp5 = HX_HCSTRING("    i / openal / failed / didn't create device!","\x6b","\x01","\x0d","\x3b");		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),45,HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		::haxe::Log_obj::trace(tmp5,tmp6);
		HX_STACK_LINE(46)
		return null();
	}
	HX_STACK_LINE(51)
	::cpp::Pointer< ALCdevice > tmp5 = this->device;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(51)
	::cpp::Pointer< ALCcontext > tmp6 = ::cpp::Pointer< ALCcontext >(linc::openal::createContext(tmp5,null()));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(51)
	this->context = tmp6;
	HX_STACK_LINE(54)
	::cpp::Pointer< ALCcontext > tmp7 = this->context;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(54)
	alcMakeContextCurrent(tmp7);
	HX_STACK_LINE(57)
	this->active = true;
}
;
	return null();
}

//Audio_obj::~Audio_obj() { }

Dynamic Audio_obj::__CreateEmpty() { return  new Audio_obj; }
hx::ObjectPtr< Audio_obj > Audio_obj::__new(::snow::Snow _app)
{  hx::ObjectPtr< Audio_obj > _result_ = new Audio_obj();
	_result_->__construct(_app);
	return _result_;}

Dynamic Audio_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Audio_obj > _result_ = new Audio_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *Audio_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::snow::modules::interfaces::Audio_obj)) return operator ::snow::modules::interfaces::Audio_obj *();
	return super::__ToInterface(inType);
}

Audio_obj::operator ::snow::modules::interfaces::Audio_obj *()
	{ return new ::snow::modules::interfaces::Audio_delegate_< Audio_obj >(this); }
Void Audio_obj::onevent( ::snow::types::SystemEvent event){
{
		HX_STACK_FRAME("snow.modules.openal.Audio","onevent",0xa1a1b83c,"snow.modules.openal.Audio.onevent","snow/modules/openal/Audio.hx",61,0x042b6f4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(63)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		if ((tmp1)){
			HX_STACK_LINE(63)
			return null();
		}
		HX_STACK_LINE(65)
		bool tmp2 = (event->type == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		if ((tmp2)){
			HX_STACK_LINE(66)
			::snow::Snow tmp3 = this->app;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			Dynamic tmp4 = this->on_instance_destroyed_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			tmp3->audio->on_Int((int)1,tmp4);
			HX_STACK_LINE(67)
			::snow::Snow tmp5 = this->app;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			Dynamic tmp6 = this->on_source_destroyed_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			tmp5->audio->on_snow_systems_audio_AudioSource((int)2,tmp6);
		}
		HX_STACK_LINE(70)
		bool tmp3 = (event->type == (int)3);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		if ((tmp3)){
			HX_STACK_LINE(71)
			::snow::Snow tmp4 = this->app;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(71)
			bool tmp5 = tmp4->audio->active;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(71)
			if ((tmp5)){
				HX_STACK_LINE(73)
				::haxe::ds::IntMap tmp6 = this->instances;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				Dynamic tmp7 = tmp6->keys();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(73)
				for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp7);  __it->hasNext(); ){
					Dynamic _handle = __it->next();
					{
						HX_STACK_LINE(74)
						::haxe::ds::IntMap tmp8 = this->instances;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(74)
						Dynamic tmp9 = _handle;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(74)
						::snow::modules::openal::ALSound tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(74)
						::snow::modules::openal::ALSound _snd = tmp10;		HX_STACK_VAR(_snd,"_snd");
						HX_STACK_LINE(75)
						_snd->tick();
						HX_STACK_LINE(78)
						bool tmp11 = _snd->looping;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(78)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(78)
						if ((tmp11)){
							HX_STACK_LINE(78)
							::snow::types::AudioData tmp13 = _snd->source->data;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(78)
							::snow::types::AudioData tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(78)
							bool tmp15 = tmp14->is_stream;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(78)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(78)
							tmp12 = !(tmp16);
						}
						else{
							HX_STACK_LINE(78)
							tmp12 = false;
						}
						HX_STACK_LINE(78)
						if ((tmp12)){
							HX_STACK_LINE(79)
							Float tmp13 = _snd->current_time;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(79)
							Float tmp14 = _snd->source->duration();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(79)
							bool tmp15 = (tmp13 >= tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(79)
							if ((tmp15)){
								HX_STACK_LINE(80)
								_snd->current_time = ((Float)0.0);
								HX_STACK_LINE(81)
								::snow::Snow tmp16 = this->app;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(81)
								Dynamic tmp17 = _handle;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(81)
								tmp16->audio->emit_Int((int)0,tmp17);
							}
						}
						HX_STACK_LINE(85)
						bool tmp13 = _snd->instance->has_ended();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(85)
						if ((tmp13)){
							HX_STACK_LINE(86)
							::snow::Snow tmp14 = this->app;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(86)
							Dynamic tmp15 = _handle;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(86)
							tmp14->audio->emit_Int((int)0,tmp15);
							HX_STACK_LINE(87)
							_snd->instance->destroy();
						}
					}
;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,onevent,(void))

Void Audio_obj::on_source_destroyed( ::snow::systems::audio::AudioSource _source){
{
		HX_STACK_FRAME("snow.modules.openal.Audio","on_source_destroyed",0x88cdadb6,"snow.modules.openal.Audio.on_source_destroyed","snow/modules/openal/Audio.hx",95,0x042b6f4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_source,"_source")
		HX_STACK_LINE(98)
		::haxe::ds::ObjectMap tmp = this->buffers;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		::snow::systems::audio::AudioSource tmp1 = _source;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		Dynamic _buffer = tmp2;		HX_STACK_VAR(_buffer,"_buffer");
		HX_STACK_LINE(99)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			int a = _buffer;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(99)
			tmp3 = (a != null());
		}
		HX_STACK_LINE(99)
		if ((tmp3)){
			HX_STACK_LINE(101)
			Dynamic tmp4 = _buffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(101)
			linc::openal::deleteBuffer(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,on_source_destroyed,(void))

Void Audio_obj::on_instance_destroyed( Dynamic _handle){
{
		HX_STACK_FRAME("snow.modules.openal.Audio","on_instance_destroyed",0x6142ab30,"snow.modules.openal.Audio.on_instance_destroyed","snow/modules/openal/Audio.hx",106,0x042b6f4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_LINE(110)
		::haxe::ds::IntMap tmp = this->instances;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		::snow::modules::openal::ALSound tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		::snow::modules::openal::ALSound _snd = tmp2;		HX_STACK_VAR(_snd,"_snd");
		HX_STACK_LINE(112)
		bool tmp3 = (_snd != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		if ((tmp3)){
			HX_STACK_LINE(114)
			_snd->destroy();
			HX_STACK_LINE(115)
			_snd = null();
		}
		HX_STACK_LINE(118)
		::haxe::ds::IntMap tmp4 = this->instances;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		Dynamic tmp5 = _handle;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(118)
		tmp4->remove(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,on_instance_destroyed,(void))

Void Audio_obj::shutdown( ){
{
		HX_STACK_FRAME("snow.modules.openal.Audio","shutdown",0xf568a7d5,"snow.modules.openal.Audio.shutdown","snow/modules/openal/Audio.hx",122,0x042b6f4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(124)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		if ((tmp1)){
			HX_STACK_LINE(124)
			return null();
		}
		HX_STACK_LINE(126)
		::haxe::ds::IntMap tmp2 = this->instances;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		Dynamic tmp3 = tmp2->iterator();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		for(::cpp::FastIterator_obj< ::snow::modules::openal::ALSound > *__it = ::cpp::CreateFastIterator< ::snow::modules::openal::ALSound >(tmp3);  __it->hasNext(); ){
			::snow::modules::openal::ALSound _snd = __it->next();
			_snd->instance->destroy();
		}
		HX_STACK_LINE(130)
		::haxe::ds::ObjectMap tmp4 = this->buffers;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		Dynamic tmp5 = tmp4->iterator();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(130)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp5);  __it->hasNext(); ){
			int _buffer = __it->next();
			{
				HX_STACK_LINE(131)
				int tmp6 = _buffer;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(131)
				linc::openal::deleteBuffer(tmp6);
			}
;
		}
		HX_STACK_LINE(134)
		alcMakeContextCurrent(((::cpp::Pointer< ALCcontext >)(null())));
		HX_STACK_LINE(137)
		::cpp::Pointer< ALCcontext > tmp6 = this->context;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(137)
		alcDestroyContext(tmp6);
		HX_STACK_LINE(140)
		::cpp::Pointer< ALCdevice > tmp7 = this->device;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(140)
		alcCloseDevice(tmp7);
		HX_STACK_LINE(143)
		this->buffers = null();
		HX_STACK_LINE(144)
		this->instances = null();
		HX_STACK_LINE(145)
		this->device = null();
		HX_STACK_LINE(146)
		this->context = null();
		HX_STACK_LINE(148)
		::snow::Snow tmp8 = this->app;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(148)
		Dynamic tmp9 = this->on_instance_destroyed_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(148)
		tmp8->audio->off_Int((int)1,tmp9);
		HX_STACK_LINE(149)
		::snow::Snow tmp10 = this->app;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(149)
		Dynamic tmp11 = this->on_source_destroyed_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(149)
		tmp10->audio->off_snow_systems_audio_AudioSource((int)2,tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,shutdown,(void))

Void Audio_obj::suspend( ){
{
		HX_STACK_FRAME("snow.modules.openal.Audio","suspend",0x201bf11d,"snow.modules.openal.Audio.suspend","snow/modules/openal/Audio.hx",153,0x042b6f4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(155)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(155)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		if ((tmp1)){
			HX_STACK_LINE(155)
			return null();
		}
		HX_STACK_LINE(166)
		::cpp::Pointer< ALCcontext > tmp2 = this->context;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(166)
		alcSuspendContext(tmp2);
		HX_STACK_LINE(167)
		alcMakeContextCurrent(((::cpp::Pointer< ALCcontext >)(null())));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,suspend,(void))

Void Audio_obj::resume( ){
{
		HX_STACK_FRAME("snow.modules.openal.Audio","resume",0xf2e3772c,"snow.modules.openal.Audio.resume","snow/modules/openal/Audio.hx",171,0x042b6f4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(173)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		if ((tmp1)){
			HX_STACK_LINE(173)
			return null();
		}
		HX_STACK_LINE(182)
		::cpp::Pointer< ALCcontext > tmp2 = this->context;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		alcProcessContext(tmp2);
		HX_STACK_LINE(183)
		::cpp::Pointer< ALCcontext > tmp3 = this->context;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		alcMakeContextCurrent(tmp3);
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,resume,(void))

::snow::modules::openal::ALSound Audio_obj::snd_of( Dynamic _handle){
	HX_STACK_FRAME("snow.modules.openal.Audio","snd_of",0x7ddf28ec,"snow.modules.openal.Audio.snd_of","snow/modules/openal/Audio.hx",190,0x042b6f4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(192)
	::haxe::ds::IntMap tmp = this->instances;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	::snow::modules::openal::ALSound tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(192)
	::snow::modules::openal::ALSound tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(192)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,snd_of,return )

Dynamic Audio_obj::play( ::snow::systems::audio::AudioSource _source,Float _volume,bool _paused){
	HX_STACK_FRAME("snow.modules.openal.Audio","play",0x8e128db3,"snow.modules.openal.Audio.play","snow/modules/openal/Audio.hx",197,0x042b6f4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_source,"_source")
	HX_STACK_ARG(_volume,"_volume")
	HX_STACK_ARG(_paused,"_paused")
	HX_STACK_LINE(199)
	{
		HX_STACK_LINE(199)
		bool tmp = (_source == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		if ((tmp)){
			HX_STACK_LINE(199)
			::String tmp1 = HX_HCSTRING("_source was null","\x44","\xf7","\xd9","\x83");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(199)
			::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(199)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(200)
	{
		HX_STACK_LINE(200)
		bool tmp = (_source->data == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		if ((tmp)){
			HX_STACK_LINE(200)
			::String tmp1 = HX_HCSTRING("_source.data was null","\xa0","\xcc","\xae","\xf1");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(200)
			::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(200)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(202)
	int tmp = this->handle_seq;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	int _handle = tmp;		HX_STACK_VAR(_handle,"_handle");
	HX_STACK_LINE(203)
	int tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	::snow::systems::audio::AudioInstance tmp2 = _source->instance(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(203)
	::snow::systems::audio::AudioInstance _inst = tmp2;		HX_STACK_VAR(_inst,"_inst");
	HX_STACK_LINE(207)
	::snow::modules::openal::ALSound tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(207)
	{
		HX_STACK_LINE(207)
		bool tmp4 = _source->data->is_stream;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(207)
		bool _g = tmp4;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(207)
		bool tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(207)
		bool _switch_1 = (tmp5);
		if (  ( _switch_1==false)){
			HX_STACK_LINE(208)
			tmp3 = ::snow::modules::openal::ALSound_obj::__new(hx::ObjectPtr<OBJ_>(this),_source,_inst);
		}
		else if (  ( _switch_1==true)){
			HX_STACK_LINE(209)
			tmp3 = ::snow::modules::openal::ALStream_obj::__new(hx::ObjectPtr<OBJ_>(this),_source,_inst);
		}
	}
	HX_STACK_LINE(207)
	::snow::modules::openal::ALSound _snd = tmp3;		HX_STACK_VAR(_snd,"_snd");
	HX_STACK_LINE(212)
	_snd->init();
	HX_STACK_LINE(213)
	::haxe::ds::IntMap tmp4 = this->instances;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(213)
	int tmp5 = _handle;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(213)
	::snow::modules::openal::ALSound tmp6 = _snd;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(213)
	tmp4->set(tmp5,tmp6);
	HX_STACK_LINE(215)
	int tmp7 = _snd->alsource;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(215)
	Float tmp8 = _volume;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(215)
	alSourcef(tmp7,(int)4106,tmp8);
	HX_STACK_LINE(217)
	bool tmp9 = _paused;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(217)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(217)
	if ((tmp10)){
		HX_STACK_LINE(218)
		int tmp11 = _snd->alsource;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(218)
		alSourcePlay(tmp11);
	}
	HX_STACK_LINE(222)
	{
		HX_STACK_LINE(222)
		int tmp11 = alGetError();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(222)
		int _err = tmp11;		HX_STACK_VAR(_err,"_err");
		HX_STACK_LINE(222)
		bool tmp12 = (_err != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(222)
		if ((tmp12)){
			HX_STACK_LINE(222)
			::String tmp13 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _err);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(222)
			::String tmp14 = (tmp13 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(222)
			::String tmp15 = (tmp14 + HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(222)
			::String tmp16 = (tmp15 + HX_HCSTRING(": failed with ","\x5d","\x20","\x68","\x1b"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(222)
			int tmp17 = _err;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(222)
			::String tmp18 = ::openal::ALError_obj::desc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(222)
			::String tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(222)
			::String _s = tmp19;		HX_STACK_VAR(_s,"_s");
			HX_STACK_LINE(222)
			::String tmp20 = _s;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(222)
			Dynamic tmp21 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),439,HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac"),HX_HCSTRING("err","\x65","\x07","\x4d","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(222)
			::haxe::Log_obj::trace(tmp20,tmp21);
			HX_STACK_LINE(222)
			::String tmp22 = _s;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(222)
			HX_STACK_DO_THROW(tmp22);
		}
		else{
			HX_STACK_LINE(222)
			Dynamic();
		}
	}
	HX_STACK_LINE(224)
	(this->handle_seq)++;
	HX_STACK_LINE(226)
	int tmp11 = _handle;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(226)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,play,return )

Dynamic Audio_obj::loop( ::snow::systems::audio::AudioSource _source,Float _volume,bool _paused){
	HX_STACK_FRAME("snow.modules.openal.Audio","loop",0x8b700623,"snow.modules.openal.Audio.loop","snow/modules/openal/Audio.hx",232,0x042b6f4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_source,"_source")
	HX_STACK_ARG(_volume,"_volume")
	HX_STACK_ARG(_paused,"_paused")
	HX_STACK_LINE(234)
	::snow::systems::audio::AudioSource tmp = _source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(234)
	Float tmp1 = _volume;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(234)
	bool tmp2 = _paused;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(234)
	Dynamic tmp3 = this->play(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(234)
	Dynamic _handle = tmp3;		HX_STACK_VAR(_handle,"_handle");
	HX_STACK_LINE(235)
	::haxe::ds::IntMap tmp4 = this->instances;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(235)
	Dynamic tmp5 = _handle;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(235)
	::snow::modules::openal::ALSound tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(235)
	::snow::modules::openal::ALSound _snd = tmp6;		HX_STACK_VAR(_snd,"_snd");
	HX_STACK_LINE(236)
	_snd->looping = true;
	HX_STACK_LINE(238)
	::snow::types::AudioData tmp7 = _snd->source->data;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(238)
	bool tmp8 = tmp7->is_stream;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(238)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(238)
	if ((tmp9)){
		HX_STACK_LINE(239)
		int tmp10 = _snd->alsource;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(239)
		alSourcei(tmp10,(int)4103,(int)1);
	}
	HX_STACK_LINE(244)
	{
		HX_STACK_LINE(244)
		int tmp10 = alGetError();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(244)
		int _err = tmp10;		HX_STACK_VAR(_err,"_err");
		HX_STACK_LINE(244)
		bool tmp11 = (_err != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(244)
		if ((tmp11)){
			HX_STACK_LINE(244)
			::String tmp12 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _err);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(244)
			::String tmp13 = (tmp12 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(244)
			::String tmp14 = (tmp13 + HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(244)
			::String tmp15 = (tmp14 + HX_HCSTRING(": failed with ","\x5d","\x20","\x68","\x1b"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(244)
			int tmp16 = _err;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(244)
			::String tmp17 = ::openal::ALError_obj::desc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(244)
			::String tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(244)
			::String _s = tmp18;		HX_STACK_VAR(_s,"_s");
			HX_STACK_LINE(244)
			::String tmp19 = _s;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(244)
			Dynamic tmp20 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),439,HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac"),HX_HCSTRING("err","\x65","\x07","\x4d","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(244)
			::haxe::Log_obj::trace(tmp19,tmp20);
			HX_STACK_LINE(244)
			::String tmp21 = _s;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(244)
			HX_STACK_DO_THROW(tmp21);
		}
		else{
			HX_STACK_LINE(244)
			Dynamic();
		}
	}
	HX_STACK_LINE(246)
	Dynamic tmp10 = _handle;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(246)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,loop,return )

Void Audio_obj::pause( Dynamic _handle){
{
		HX_STACK_FRAME("snow.modules.openal.Audio","pause",0xbaf33e57,"snow.modules.openal.Audio.pause","snow/modules/openal/Audio.hx",250,0x042b6f4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_LINE(252)
		::haxe::ds::IntMap tmp = this->instances;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(252)
		Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(252)
		::snow::modules::openal::ALSound tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(252)
		::snow::modules::openal::ALSound _snd = tmp2;		HX_STACK_VAR(_snd,"_snd");
		HX_STACK_LINE(253)
		bool tmp3 = (_snd == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(253)
		if ((tmp3)){
			HX_STACK_LINE(253)
			return null();
		}
		HX_STACK_LINE(257)
		int tmp4 = _snd->alsource;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(257)
		alSourcePause(tmp4);
		HX_STACK_LINE(259)
		{
			HX_STACK_LINE(259)
			int tmp5 = alGetError();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(259)
			int _err = tmp5;		HX_STACK_VAR(_err,"_err");
			HX_STACK_LINE(259)
			bool tmp6 = (_err != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(259)
			if ((tmp6)){
				HX_STACK_LINE(259)
				::String tmp7 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _err);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(259)
				::String tmp8 = (tmp7 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(259)
				::String tmp9 = (tmp8 + HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(259)
				::String tmp10 = (tmp9 + HX_HCSTRING(": failed with ","\x5d","\x20","\x68","\x1b"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(259)
				int tmp11 = _err;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(259)
				::String tmp12 = ::openal::ALError_obj::desc(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(259)
				::String tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(259)
				::String _s = tmp13;		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(259)
				::String tmp14 = _s;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(259)
				Dynamic tmp15 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),439,HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac"),HX_HCSTRING("err","\x65","\x07","\x4d","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(259)
				::haxe::Log_obj::trace(tmp14,tmp15);
				HX_STACK_LINE(259)
				::String tmp16 = _s;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(259)
				HX_STACK_DO_THROW(tmp16);
			}
			else{
				HX_STACK_LINE(259)
				Dynamic();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,pause,(void))

Void Audio_obj::unpause( Dynamic _handle){
{
		HX_STACK_FRAME("snow.modules.openal.Audio","unpause",0xe2b58f9e,"snow.modules.openal.Audio.unpause","snow/modules/openal/Audio.hx",263,0x042b6f4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_LINE(265)
		::haxe::ds::IntMap tmp = this->instances;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(265)
		Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(265)
		::snow::modules::openal::ALSound tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(265)
		::snow::modules::openal::ALSound _snd = tmp2;		HX_STACK_VAR(_snd,"_snd");
		HX_STACK_LINE(266)
		bool tmp3 = (_snd == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(266)
		if ((tmp3)){
			HX_STACK_LINE(266)
			return null();
		}
		HX_STACK_LINE(270)
		int tmp4 = _snd->alsource;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(270)
		alSourcePlay(tmp4);
		HX_STACK_LINE(272)
		{
			HX_STACK_LINE(272)
			int tmp5 = alGetError();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(272)
			int _err = tmp5;		HX_STACK_VAR(_err,"_err");
			HX_STACK_LINE(272)
			bool tmp6 = (_err != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(272)
			if ((tmp6)){
				HX_STACK_LINE(272)
				::String tmp7 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _err);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(272)
				::String tmp8 = (tmp7 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(272)
				::String tmp9 = (tmp8 + HX_HCSTRING("unpause","\xfd","\xcd","\xe8","\xb9"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(272)
				::String tmp10 = (tmp9 + HX_HCSTRING(": failed with ","\x5d","\x20","\x68","\x1b"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(272)
				int tmp11 = _err;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(272)
				::String tmp12 = ::openal::ALError_obj::desc(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(272)
				::String tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(272)
				::String _s = tmp13;		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(272)
				::String tmp14 = _s;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(272)
				Dynamic tmp15 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),439,HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac"),HX_HCSTRING("err","\x65","\x07","\x4d","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(272)
				::haxe::Log_obj::trace(tmp14,tmp15);
				HX_STACK_LINE(272)
				::String tmp16 = _s;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(272)
				HX_STACK_DO_THROW(tmp16);
			}
			else{
				HX_STACK_LINE(272)
				Dynamic();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,unpause,(void))

Void Audio_obj::stop( Dynamic _handle){
{
		HX_STACK_FRAME("snow.modules.openal.Audio","stop",0x90144fc1,"snow.modules.openal.Audio.stop","snow/modules/openal/Audio.hx",276,0x042b6f4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_LINE(278)
		::haxe::ds::IntMap tmp = this->instances;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(278)
		Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(278)
		::snow::modules::openal::ALSound tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(278)
		::snow::modules::openal::ALSound _snd = tmp2;		HX_STACK_VAR(_snd,"_snd");
		HX_STACK_LINE(279)
		bool tmp3 = (_snd == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(279)
		if ((tmp3)){
			HX_STACK_LINE(279)
			return null();
		}
		HX_STACK_LINE(283)
		int tmp4 = _snd->alsource;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(283)
		alSourceStop(tmp4);
		HX_STACK_LINE(285)
		{
			HX_STACK_LINE(285)
			int tmp5 = alGetError();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(285)
			int _err = tmp5;		HX_STACK_VAR(_err,"_err");
			HX_STACK_LINE(285)
			bool tmp6 = (_err != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(285)
			if ((tmp6)){
				HX_STACK_LINE(285)
				::String tmp7 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _err);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(285)
				::String tmp8 = (tmp7 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(285)
				::String tmp9 = (tmp8 + HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(285)
				::String tmp10 = (tmp9 + HX_HCSTRING(": failed with ","\x5d","\x20","\x68","\x1b"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(285)
				int tmp11 = _err;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(285)
				::String tmp12 = ::openal::ALError_obj::desc(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(285)
				::String tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(285)
				::String _s = tmp13;		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(285)
				::String tmp14 = _s;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(285)
				Dynamic tmp15 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),439,HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac"),HX_HCSTRING("err","\x65","\x07","\x4d","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(285)
				::haxe::Log_obj::trace(tmp14,tmp15);
				HX_STACK_LINE(285)
				::String tmp16 = _s;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(285)
				HX_STACK_DO_THROW(tmp16);
			}
			else{
				HX_STACK_LINE(285)
				Dynamic();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,stop,(void))

Void Audio_obj::volume( Dynamic _handle,Float _volume){
{
		HX_STACK_FRAME("snow.modules.openal.Audio","volume",0x49b23759,"snow.modules.openal.Audio.volume","snow/modules/openal/Audio.hx",290,0x042b6f4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_ARG(_volume,"_volume")
		HX_STACK_LINE(292)
		::haxe::ds::IntMap tmp = this->instances;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(292)
		::snow::modules::openal::ALSound tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(292)
		::snow::modules::openal::ALSound _snd = tmp2;		HX_STACK_VAR(_snd,"_snd");
		HX_STACK_LINE(293)
		bool tmp3 = (_snd == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(293)
		if ((tmp3)){
			HX_STACK_LINE(293)
			return null();
		}
		HX_STACK_LINE(297)
		int tmp4 = _snd->alsource;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(297)
		Float tmp5 = _volume;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(297)
		alSourcef(tmp4,(int)4106,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,volume,(void))

Void Audio_obj::pan( Dynamic _handle,Float _pan){
{
		HX_STACK_FRAME("snow.modules.openal.Audio","pan",0x55966e7e,"snow.modules.openal.Audio.pan","snow/modules/openal/Audio.hx",304,0x042b6f4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_ARG(_pan,"_pan")
		HX_STACK_LINE(306)
		::haxe::ds::IntMap tmp = this->instances;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(306)
		Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(306)
		::snow::modules::openal::ALSound tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(306)
		::snow::modules::openal::ALSound _snd = tmp2;		HX_STACK_VAR(_snd,"_snd");
		HX_STACK_LINE(307)
		bool tmp3 = (_snd == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(307)
		if ((tmp3)){
			HX_STACK_LINE(307)
			return null();
		}
		HX_STACK_LINE(311)
		_snd->pan = _pan;
		HX_STACK_LINE(313)
		int tmp4 = _snd->alsource;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(313)
		Float tmp5 = (_pan - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(313)
		Float tmp6 = (tmp5 * ((Float)1.5707));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(313)
		Float tmp7 = ::Math_obj::cos(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(313)
		Float tmp8 = (_pan + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(313)
		Float tmp9 = (tmp8 * ((Float)1.5707));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(313)
		Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(313)
		alSource3f(tmp4,(int)4100,tmp7,(int)0,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,pan,(void))

Void Audio_obj::pitch( Dynamic _handle,Float _pitch){
{
		HX_STACK_FRAME("snow.modules.openal.Audio","pitch",0xc03c2321,"snow.modules.openal.Audio.pitch","snow/modules/openal/Audio.hx",318,0x042b6f4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_ARG(_pitch,"_pitch")
		HX_STACK_LINE(320)
		::haxe::ds::IntMap tmp = this->instances;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(320)
		Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(320)
		::snow::modules::openal::ALSound tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(320)
		::snow::modules::openal::ALSound _snd = tmp2;		HX_STACK_VAR(_snd,"_snd");
		HX_STACK_LINE(321)
		bool tmp3 = (_snd == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(321)
		if ((tmp3)){
			HX_STACK_LINE(321)
			return null();
		}
		HX_STACK_LINE(325)
		int tmp4 = _snd->alsource;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(325)
		Float tmp5 = _pitch;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(325)
		alSourcef(tmp4,(int)4099,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,pitch,(void))

Void Audio_obj::position( Dynamic _handle,Float _time){
{
		HX_STACK_FRAME("snow.modules.openal.Audio","position",0x55574be8,"snow.modules.openal.Audio.position","snow/modules/openal/Audio.hx",330,0x042b6f4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_ARG(_time,"_time")
		HX_STACK_LINE(332)
		::haxe::ds::IntMap tmp = this->instances;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(332)
		Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(332)
		::snow::modules::openal::ALSound tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(332)
		::snow::modules::openal::ALSound _snd = tmp2;		HX_STACK_VAR(_snd,"_snd");
		HX_STACK_LINE(333)
		bool tmp3 = (_snd == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(333)
		if ((tmp3)){
			HX_STACK_LINE(333)
			return null();
		}
		HX_STACK_LINE(337)
		Float tmp4 = _time;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(337)
		_snd->position(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,position,(void))

Float Audio_obj::volume_of( Dynamic _handle){
	HX_STACK_FRAME("snow.modules.openal.Audio","volume_of",0xe7669d7d,"snow.modules.openal.Audio.volume_of","snow/modules/openal/Audio.hx",342,0x042b6f4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(344)
	::haxe::ds::IntMap tmp = this->instances;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(344)
	Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(344)
	::snow::modules::openal::ALSound tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(344)
	::snow::modules::openal::ALSound _snd = tmp2;		HX_STACK_VAR(_snd,"_snd");
	HX_STACK_LINE(345)
	bool tmp3 = (_snd == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(345)
	if ((tmp3)){
		HX_STACK_LINE(345)
		return ((Float)0.0);
	}
	HX_STACK_LINE(347)
	int tmp4 = _snd->alsource;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(347)
	Float tmp5 = linc::openal::getSourcef(tmp4,(int)4106);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(347)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,volume_of,return )

Float Audio_obj::pan_of( Dynamic _handle){
	HX_STACK_FRAME("snow.modules.openal.Audio","pan_of",0xd533ab78,"snow.modules.openal.Audio.pan_of","snow/modules/openal/Audio.hx",352,0x042b6f4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(354)
	::haxe::ds::IntMap tmp = this->instances;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(354)
	Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(354)
	::snow::modules::openal::ALSound tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(354)
	::snow::modules::openal::ALSound _snd = tmp2;		HX_STACK_VAR(_snd,"_snd");
	HX_STACK_LINE(355)
	bool tmp3 = (_snd == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(355)
	if ((tmp3)){
		HX_STACK_LINE(355)
		return ((Float)0.0);
	}
	HX_STACK_LINE(357)
	Float tmp4 = _snd->pan;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(357)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,pan_of,return )

Float Audio_obj::pitch_of( Dynamic _handle){
	HX_STACK_FRAME("snow.modules.openal.Audio","pitch_of",0x45d43eb5,"snow.modules.openal.Audio.pitch_of","snow/modules/openal/Audio.hx",362,0x042b6f4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(364)
	::haxe::ds::IntMap tmp = this->instances;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(364)
	Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(364)
	::snow::modules::openal::ALSound tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(364)
	::snow::modules::openal::ALSound _snd = tmp2;		HX_STACK_VAR(_snd,"_snd");
	HX_STACK_LINE(365)
	bool tmp3 = (_snd == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(365)
	if ((tmp3)){
		HX_STACK_LINE(365)
		return ((Float)0.0);
	}
	HX_STACK_LINE(367)
	int tmp4 = _snd->alsource;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(367)
	Float tmp5 = linc::openal::getSourcef(tmp4,(int)4099);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(367)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,pitch_of,return )

Float Audio_obj::position_of( Dynamic _handle){
	HX_STACK_FRAME("snow.modules.openal.Audio","position_of",0x87ab8c4e,"snow.modules.openal.Audio.position_of","snow/modules/openal/Audio.hx",372,0x042b6f4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(374)
	::haxe::ds::IntMap tmp = this->instances;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(374)
	Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(374)
	::snow::modules::openal::ALSound tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(374)
	::snow::modules::openal::ALSound _snd = tmp2;		HX_STACK_VAR(_snd,"_snd");
	HX_STACK_LINE(375)
	bool tmp3 = (_snd == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(375)
	if ((tmp3)){
		HX_STACK_LINE(375)
		return ((Float)0.0);
	}
	HX_STACK_LINE(377)
	Float tmp4 = _snd->position_of();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(377)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,position_of,return )

int Audio_obj::state_of( Dynamic _handle){
	HX_STACK_FRAME("snow.modules.openal.Audio","state_of",0xe9e40d04,"snow.modules.openal.Audio.state_of","snow/modules/openal/Audio.hx",382,0x042b6f4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(384)
	::haxe::ds::IntMap tmp = this->instances;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(384)
	Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(384)
	::snow::modules::openal::ALSound tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(384)
	::snow::modules::openal::ALSound _snd = tmp2;		HX_STACK_VAR(_snd,"_snd");
	HX_STACK_LINE(385)
	bool tmp3 = (_snd == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(385)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(385)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(385)
	if ((tmp4)){
		HX_STACK_LINE(385)
		::snow::Snow tmp6 = this->app;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(385)
		::snow::Snow tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(385)
		bool tmp8 = tmp7->audio->active;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(385)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(385)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(385)
		tmp5 = !(tmp10);
	}
	else{
		HX_STACK_LINE(385)
		tmp5 = true;
	}
	HX_STACK_LINE(385)
	if ((tmp5)){
		HX_STACK_LINE(385)
		return (int)-1;
	}
	HX_STACK_LINE(387)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(387)
	{
		HX_STACK_LINE(387)
		int tmp7 = _snd->alsource;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(387)
		int tmp8 = linc::openal::getSourcei(tmp7,(int)4112);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(387)
		int _g = tmp8;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(387)
		int tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(387)
		switch( (int)(tmp9)){
			case (int)4114: {
				HX_STACK_LINE(388)
				tmp6 = (int)1;
			}
			;break;
			case (int)4115: {
				HX_STACK_LINE(389)
				tmp6 = (int)0;
			}
			;break;
			case (int)4116: case (int)4113: {
				HX_STACK_LINE(390)
				tmp6 = (int)2;
			}
			;break;
			default: {
				HX_STACK_LINE(391)
				tmp6 = (int)-1;
			}
		}
	}
	HX_STACK_LINE(387)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,state_of,return )

bool Audio_obj::loop_of( Dynamic _handle){
	HX_STACK_FRAME("snow.modules.openal.Audio","loop_of",0x4942a8f3,"snow.modules.openal.Audio.loop_of","snow/modules/openal/Audio.hx",397,0x042b6f4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(399)
	::haxe::ds::IntMap tmp = this->instances;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(399)
	Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(399)
	::snow::modules::openal::ALSound tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(399)
	::snow::modules::openal::ALSound _snd = tmp2;		HX_STACK_VAR(_snd,"_snd");
	HX_STACK_LINE(400)
	bool tmp3 = (_snd == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(400)
	if ((tmp3)){
		HX_STACK_LINE(400)
		return false;
	}
	HX_STACK_LINE(402)
	bool tmp4 = _snd->looping;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(402)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,loop_of,return )

::snow::systems::audio::AudioInstance Audio_obj::instance_of( Dynamic _handle){
	HX_STACK_FRAME("snow.modules.openal.Audio","instance_of",0xb16628e2,"snow.modules.openal.Audio.instance_of","snow/modules/openal/Audio.hx",407,0x042b6f4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(409)
	::haxe::ds::IntMap tmp = this->instances;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(409)
	Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(409)
	::snow::modules::openal::ALSound tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(409)
	::snow::modules::openal::ALSound _snd = tmp2;		HX_STACK_VAR(_snd,"_snd");
	HX_STACK_LINE(410)
	bool tmp3 = (_snd == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(410)
	if ((tmp3)){
		HX_STACK_LINE(410)
		return null();
	}
	HX_STACK_LINE(412)
	::snow::systems::audio::AudioInstance tmp4 = _snd->instance;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(412)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,instance_of,return )

::snow::api::Promise Audio_obj::data_from_load( ::String _path,Dynamic __o__is_stream,Dynamic _format){
Dynamic _is_stream = __o__is_stream.Default(false);
	HX_STACK_FRAME("snow.modules.openal.Audio","data_from_load",0x59e63f45,"snow.modules.openal.Audio.data_from_load","snow/modules/openal/Audio.hx",419,0x042b6f4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_is_stream,"_is_stream")
	HX_STACK_ARG(_format,"_format")
{
		HX_STACK_LINE(421)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(421)
		::String tmp1 = _path;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(421)
		Dynamic tmp2 = _is_stream;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(421)
		Dynamic tmp3 = _format;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(421)
		::snow::api::Promise tmp4 = ::snow::core::native::audio::NativeAudioData_obj::data_from_load(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(421)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,data_from_load,return )

::snow::api::Promise Audio_obj::data_from_bytes( ::String _id,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format){
	HX_STACK_FRAME("snow.modules.openal.Audio","data_from_bytes",0x9439de6c,"snow.modules.openal.Audio.data_from_bytes","snow/modules/openal/Audio.hx",426,0x042b6f4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_ARG(_format,"_format")
	HX_STACK_LINE(428)
	::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(428)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(428)
	::snow::api::buffers::ArrayBufferView tmp2 = _bytes;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(428)
	Dynamic tmp3 = _format;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(428)
	::snow::api::Promise tmp4 = ::snow::core::native::audio::NativeAudioData_obj::data_from_bytes(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(428)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,data_from_bytes,return )

Void Audio_obj::err( ::String reason){
{
		HX_STACK_FRAME("snow.modules.openal.Audio","err",0x558e2486,"snow.modules.openal.Audio.err","snow/modules/openal/Audio.hx",435,0x042b6f4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(reason,"reason")
		HX_STACK_LINE(436)
		int tmp = alGetError();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(436)
		int _err = tmp;		HX_STACK_VAR(_err,"_err");
		HX_STACK_LINE(437)
		bool tmp1 = (_err != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(437)
		if ((tmp1)){
			HX_STACK_LINE(438)
			::String tmp2 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _err);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(438)
			::String tmp3 = (tmp2 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(438)
			::String tmp4 = reason;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(438)
			::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(438)
			::String tmp6 = (tmp5 + HX_HCSTRING(": failed with ","\x5d","\x20","\x68","\x1b"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(438)
			int tmp7 = _err;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(438)
			::String tmp8 = ::openal::ALError_obj::desc(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(438)
			::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(438)
			::String _s = tmp9;		HX_STACK_VAR(_s,"_s");
			HX_STACK_LINE(439)
			::String tmp10 = _s;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(439)
			Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),439,HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac"),HX_HCSTRING("err","\x65","\x07","\x4d","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(439)
			::haxe::Log_obj::trace(tmp10,tmp11);
			HX_STACK_LINE(440)
			::String tmp12 = _s;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(440)
			HX_STACK_DO_THROW(tmp12);
		}
		else{
			HX_STACK_LINE(138)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,err,(void))

Float Audio_obj::half_pi;


Audio_obj::Audio_obj()
{
}

void Audio_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Audio);
	HX_MARK_MEMBER_NAME(device,"device");
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(handle_seq,"handle_seq");
	HX_MARK_MEMBER_NAME(instances,"instances");
	HX_MARK_MEMBER_NAME(buffers,"buffers");
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void Audio_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(device,"device");
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(handle_seq,"handle_seq");
	HX_VISIT_MEMBER_NAME(instances,"instances");
	HX_VISIT_MEMBER_NAME(buffers,"buffers");
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(active,"active");
}

Dynamic Audio_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		if (HX_FIELD_EQ(inName,"pan") ) { return pan_dyn(); }
		if (HX_FIELD_EQ(inName,"err") ) { return err_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"pitch") ) { return pitch_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return device; }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"snd_of") ) { return snd_of_dyn(); }
		if (HX_FIELD_EQ(inName,"volume") ) { return volume_dyn(); }
		if (HX_FIELD_EQ(inName,"pan_of") ) { return pan_of_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
		if (HX_FIELD_EQ(inName,"buffers") ) { return buffers; }
		if (HX_FIELD_EQ(inName,"onevent") ) { return onevent_dyn(); }
		if (HX_FIELD_EQ(inName,"suspend") ) { return suspend_dyn(); }
		if (HX_FIELD_EQ(inName,"unpause") ) { return unpause_dyn(); }
		if (HX_FIELD_EQ(inName,"loop_of") ) { return loop_of_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shutdown") ) { return shutdown_dyn(); }
		if (HX_FIELD_EQ(inName,"position") ) { return position_dyn(); }
		if (HX_FIELD_EQ(inName,"pitch_of") ) { return pitch_of_dyn(); }
		if (HX_FIELD_EQ(inName,"state_of") ) { return state_of_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { return instances; }
		if (HX_FIELD_EQ(inName,"volume_of") ) { return volume_of_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"handle_seq") ) { return handle_seq; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"position_of") ) { return position_of_dyn(); }
		if (HX_FIELD_EQ(inName,"instance_of") ) { return instance_of_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"data_from_load") ) { return data_from_load_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"data_from_bytes") ) { return data_from_bytes_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"on_source_destroyed") ) { return on_source_destroyed_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"on_instance_destroyed") ) { return on_instance_destroyed_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Audio_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast< ::cpp::Pointer< ALCdevice > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< ::cpp::Pointer< ALCcontext > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffers") ) { buffers=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { instances=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"handle_seq") ) { handle_seq=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Audio_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("device","\x96","\xdc","\x77","\x71"));
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	outFields->push(HX_HCSTRING("handle_seq","\x48","\x58","\xef","\x72"));
	outFields->push(HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b"));
	outFields->push(HX_HCSTRING("buffers","\x73","\xa3","\x90","\xb1"));
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< ALCdevice >*/ ,(int)offsetof(Audio_obj,device),HX_HCSTRING("device","\x96","\xdc","\x77","\x71")},
	{hx::fsObject /*::cpp::Pointer< ALCcontext >*/ ,(int)offsetof(Audio_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsInt,(int)offsetof(Audio_obj,handle_seq),HX_HCSTRING("handle_seq","\x48","\x58","\xef","\x72")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Audio_obj,instances),HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(Audio_obj,buffers),HX_HCSTRING("buffers","\x73","\xa3","\x90","\xb1")},
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(Audio_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsBool,(int)offsetof(Audio_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Audio_obj::half_pi,HX_HCSTRING("half_pi","\x45","\x20","\x51","\x20")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("device","\x96","\xdc","\x77","\x71"),
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("handle_seq","\x48","\x58","\xef","\x72"),
	HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b"),
	HX_HCSTRING("buffers","\x73","\xa3","\x90","\xb1"),
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("onevent","\x9b","\xf6","\xd4","\x78"),
	HX_HCSTRING("on_source_destroyed","\x95","\x7e","\x54","\x61"),
	HX_HCSTRING("on_instance_destroyed","\xcf","\xb1","\xc6","\x85"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("suspend","\x7c","\x2f","\x4f","\xf7"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("snd_of","\x6d","\x1b","\x80","\x93"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("unpause","\xfd","\xcd","\xe8","\xb9"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"),
	HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"),
	HX_HCSTRING("pitch","\xc0","\xbb","\xa0","\xc2"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("volume_of","\x9c","\x71","\xad","\x60"),
	HX_HCSTRING("pan_of","\xf9","\x9d","\xd4","\xea"),
	HX_HCSTRING("pitch_of","\x76","\x93","\x77","\xbb"),
	HX_HCSTRING("position_of","\x2d","\xe6","\x66","\xff"),
	HX_HCSTRING("state_of","\xc5","\x61","\x87","\x5f"),
	HX_HCSTRING("loop_of","\x52","\xe7","\x75","\x20"),
	HX_HCSTRING("instance_of","\xc1","\x82","\x21","\x29"),
	HX_HCSTRING("data_from_load","\xc6","\x1a","\x6f","\x90"),
	HX_HCSTRING("data_from_bytes","\xcb","\x13","\x71","\x15"),
	HX_HCSTRING("err","\x65","\x07","\x4d","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Audio_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Audio_obj::half_pi,"half_pi");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Audio_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Audio_obj::half_pi,"half_pi");
};

#endif

hx::Class Audio_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("half_pi","\x45","\x20","\x51","\x20"),
	::String(null()) };

void Audio_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Audio_obj >;
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

void Audio_obj::__boot()
{
	half_pi= ((Float)1.5707);
}

} // end namespace snow
} // end namespace modules
} // end namespace openal
