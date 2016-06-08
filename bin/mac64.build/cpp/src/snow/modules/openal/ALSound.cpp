#include <hxcpp.h>

#include "linc_openal.h"
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_openal_ALError
#include <openal/ALError.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Audio
#include <snow/modules/interfaces/Audio.h>
#endif
#ifndef INCLUDED_snow_modules_openal_ALSound
#include <snow/modules/openal/ALSound.h>
#endif
#ifndef INCLUDED_snow_modules_openal_Audio
#include <snow/modules/openal/Audio.h>
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
namespace snow{
namespace modules{
namespace openal{

Void ALSound_obj::__construct(::snow::modules::openal::Audio _module,::snow::systems::audio::AudioSource _source,::snow::systems::audio::AudioInstance _instance)
{
HX_STACK_FRAME("snow.modules.openal.ALSound","new",0xc9fa6bef,"snow.modules.openal.ALSound.new","snow/modules/openal/ALSound.hx",13,0x9aca6660)
HX_STACK_THIS(this)
HX_STACK_ARG(_module,"_module")
HX_STACK_ARG(_source,"_source")
HX_STACK_ARG(_instance,"_instance")
{
	HX_STACK_LINE(25)
	this->current_time = ((Float)0.0);
	HX_STACK_LINE(24)
	this->looping = false;
	HX_STACK_LINE(23)
	this->pan = ((Float)0.0);
	HX_STACK_LINE(29)
	this->module = _module;
	HX_STACK_LINE(30)
	this->source = _source;
	HX_STACK_LINE(31)
	this->instance = _instance;
	HX_STACK_LINE(33)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		int tmp1 = linc::openal::genSource();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		int _source1 = tmp1;		HX_STACK_VAR(_source1,"_source1");
		HX_STACK_LINE(33)
		int tmp2 = _source1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		alSourcef(tmp2,(int)4106,((Float)1.0));
		HX_STACK_LINE(33)
		int tmp3 = _source1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		alSourcei(tmp3,(int)4103,(int)0);
		HX_STACK_LINE(33)
		int tmp4 = _source1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		alSourcef(tmp4,(int)4099,((Float)1.0));
		HX_STACK_LINE(33)
		int tmp5 = _source1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		alSource3f(tmp5,(int)4100,((Float)0.0),((Float)0.0),((Float)0.0));
		HX_STACK_LINE(33)
		int tmp6 = _source1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(33)
		alSource3f(tmp6,(int)4102,((Float)0.0),((Float)0.0),((Float)0.0));
		HX_STACK_LINE(33)
		tmp = _source1;
	}
	HX_STACK_LINE(33)
	this->alsource = tmp;
	HX_STACK_LINE(34)
	int tmp1 = this->source_format();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	this->alformat = tmp1;
}
;
	return null();
}

//ALSound_obj::~ALSound_obj() { }

Dynamic ALSound_obj::__CreateEmpty() { return  new ALSound_obj; }
hx::ObjectPtr< ALSound_obj > ALSound_obj::__new(::snow::modules::openal::Audio _module,::snow::systems::audio::AudioSource _source,::snow::systems::audio::AudioInstance _instance)
{  hx::ObjectPtr< ALSound_obj > _result_ = new ALSound_obj();
	_result_->__construct(_module,_source,_instance);
	return _result_;}

Dynamic ALSound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ALSound_obj > _result_ = new ALSound_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void ALSound_obj::init( ){
{
		HX_STACK_FRAME("snow.modules.openal.ALSound","init",0xeddcbca1,"snow.modules.openal.ALSound.init","snow/modules/openal/ALSound.hx",38,0x9aca6660)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		::snow::modules::openal::Audio tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		::snow::systems::audio::AudioSource tmp1 = this->source;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		Dynamic tmp2 = tmp->buffers->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		int _buffer = tmp2;		HX_STACK_VAR(_buffer,"_buffer");
		HX_STACK_LINE(42)
		bool tmp3 = (_buffer == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		if ((tmp3)){
			HX_STACK_LINE(44)
			::snow::systems::audio::AudioSource tmp4 = this->source;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			::snow::types::AudioData _data = tmp4->data;		HX_STACK_VAR(_data,"_data");
			HX_STACK_LINE(48)
			int tmp5 = linc::openal::genBuffer();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(48)
			_buffer = tmp5;
			HX_STACK_LINE(50)
			bool tmp6 = (_data->samples != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(50)
			if ((tmp6)){
				HX_STACK_LINE(51)
				int tmp7 = _buffer;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(51)
				int tmp8 = this->alformat;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(51)
				int tmp9 = _data->rate;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(51)
				Array< unsigned char > tmp10 = _data->samples->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(51)
				int tmp11 = _data->samples->byteOffset;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(51)
				int tmp12 = _data->samples->byteLength;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(51)
				linc::openal::bufferData(tmp7,tmp8,tmp9,tmp10,tmp11,tmp12);
			}
			else{
				HX_STACK_LINE(53)
				_buffer = (int)0;
				HX_STACK_LINE(54)
				::String tmp7 = (HX_HCSTRING(" > new buffer ","\x5e","\x9c","\x40","\x95") + _data->id);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(54)
				::String tmp8 = (tmp7 + HX_HCSTRING(" / created with AL.NONE buffer!","\xeb","\x26","\x08","\x8f"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(54)
				::String tmp9 = (HX_HCSTRING("  i / AL sound / ","\x2f","\x96","\xe3","\x01") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(54)
				Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("ALSound.hx","\x5a","\xb9","\xce","\x65"),54,HX_HCSTRING("snow.modules.openal.ALSound","\x7d","\x48","\x64","\xd6"),HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(54)
				::haxe::Log_obj::trace(tmp9,tmp10);
			}
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				int tmp7 = alGetError();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(57)
				int _err = tmp7;		HX_STACK_VAR(_err,"_err");
				HX_STACK_LINE(57)
				bool tmp8 = (_err != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(57)
				if ((tmp8)){
					HX_STACK_LINE(57)
					::String tmp9 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _err);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(57)
					::String tmp10 = (tmp9 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(57)
					::String tmp11 = (tmp10 + HX_HCSTRING("new buffer","\xc0","\x90","\xf4","\x72"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(57)
					::String tmp12 = (tmp11 + HX_HCSTRING(": failed with ","\x5d","\x20","\x68","\x1b"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(57)
					int tmp13 = _err;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(57)
					::String tmp14 = ::openal::ALError_obj::desc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(57)
					::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(57)
					::String _s = tmp15;		HX_STACK_VAR(_s,"_s");
					HX_STACK_LINE(57)
					::String tmp16 = _s;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(57)
					Dynamic tmp17 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),439,HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac"),HX_HCSTRING("err","\x65","\x07","\x4d","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(57)
					::haxe::Log_obj::trace(tmp16,tmp17);
					HX_STACK_LINE(57)
					::String tmp18 = _s;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(57)
					HX_STACK_DO_THROW(tmp18);
				}
				else{
					HX_STACK_LINE(57)
					Dynamic();
				}
			}
			HX_STACK_LINE(59)
			::snow::modules::openal::Audio tmp7 = this->module;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(59)
			::snow::systems::audio::AudioSource tmp8 = this->source;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(59)
			int tmp9 = _buffer;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(59)
			tmp7->buffers->set(tmp8,tmp9);
		}
		HX_STACK_LINE(63)
		int tmp4 = this->alsource;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		int tmp5 = _buffer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		alSourcei(tmp4,(int)4105,tmp5);
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			int tmp6 = alGetError();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(65)
			int _err = tmp6;		HX_STACK_VAR(_err,"_err");
			HX_STACK_LINE(65)
			bool tmp7 = (_err != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(65)
			if ((tmp7)){
				HX_STACK_LINE(65)
				::String tmp8 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _err);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(65)
				::String tmp9 = (tmp8 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(65)
				::String tmp10 = (tmp9 + HX_HCSTRING("attach buffer","\xfb","\xcb","\xca","\x4c"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(65)
				::String tmp11 = (tmp10 + HX_HCSTRING(": failed with ","\x5d","\x20","\x68","\x1b"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(65)
				int tmp12 = _err;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(65)
				::String tmp13 = ::openal::ALError_obj::desc(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(65)
				::String tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(65)
				::String _s = tmp14;		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(65)
				::String tmp15 = _s;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(65)
				Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),439,HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac"),HX_HCSTRING("err","\x65","\x07","\x4d","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(65)
				::haxe::Log_obj::trace(tmp15,tmp16);
				HX_STACK_LINE(65)
				::String tmp17 = _s;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(65)
				HX_STACK_DO_THROW(tmp17);
			}
			else{
				HX_STACK_LINE(65)
				Dynamic();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ALSound_obj,init,(void))

Void ALSound_obj::position( Float _time){
{
		HX_STACK_FRAME("snow.modules.openal.ALSound","position",0xc58abeba,"snow.modules.openal.ALSound.position","snow/modules/openal/ALSound.hx",69,0x9aca6660)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_time,"_time")
		HX_STACK_LINE(71)
		int tmp = this->alsource;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		Float tmp1 = _time;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		alSourcef(tmp,(int)4132,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALSound_obj,position,(void))

Float ALSound_obj::position_of( ){
	HX_STACK_FRAME("snow.modules.openal.ALSound","position_of",0xde7a28bc,"snow.modules.openal.ALSound.position_of","snow/modules/openal/ALSound.hx",75,0x9aca6660)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	int tmp = this->alsource;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	Float tmp1 = linc::openal::getSourcef(tmp,(int)4132);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ALSound_obj,position_of,return )

Void ALSound_obj::destroy( ){
{
		HX_STACK_FRAME("snow.modules.openal.ALSound","destroy",0x2b633c09,"snow.modules.openal.ALSound.destroy","snow/modules/openal/ALSound.hx",81,0x9aca6660)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		int tmp = this->alsource;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		alSourceStop(tmp);
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			int tmp1 = alGetError();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(85)
			int _err = tmp1;		HX_STACK_VAR(_err,"_err");
			HX_STACK_LINE(85)
			bool tmp2 = (_err != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(85)
			if ((tmp2)){
				HX_STACK_LINE(85)
				::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _err);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(85)
				::String tmp4 = (tmp3 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(85)
				::String tmp5 = (tmp4 + HX_HCSTRING("stop source","\x39","\x7d","\x47","\xe7"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(85)
				::String tmp6 = (tmp5 + HX_HCSTRING(": failed with ","\x5d","\x20","\x68","\x1b"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(85)
				int tmp7 = _err;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(85)
				::String tmp8 = ::openal::ALError_obj::desc(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(85)
				::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(85)
				::String _s = tmp9;		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(85)
				::String tmp10 = _s;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(85)
				Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),439,HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac"),HX_HCSTRING("err","\x65","\x07","\x4d","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(85)
				::haxe::Log_obj::trace(tmp10,tmp11);
				HX_STACK_LINE(85)
				::String tmp12 = _s;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(85)
				HX_STACK_DO_THROW(tmp12);
			}
			else{
				HX_STACK_LINE(85)
				Dynamic();
			}
		}
		HX_STACK_LINE(87)
		int tmp1 = this->alsource;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		linc::openal::deleteSource(tmp1);
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			int tmp2 = alGetError();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(89)
			int _err = tmp2;		HX_STACK_VAR(_err,"_err");
			HX_STACK_LINE(89)
			bool tmp3 = (_err != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(89)
			if ((tmp3)){
				HX_STACK_LINE(89)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _err);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(89)
				::String tmp5 = (tmp4 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(89)
				::String tmp6 = (tmp5 + HX_HCSTRING("delete source","\x30","\xf4","\x18","\xf6"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(89)
				::String tmp7 = (tmp6 + HX_HCSTRING(": failed with ","\x5d","\x20","\x68","\x1b"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(89)
				int tmp8 = _err;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(89)
				::String tmp9 = ::openal::ALError_obj::desc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(89)
				::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(89)
				::String _s = tmp10;		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(89)
				::String tmp11 = _s;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(89)
				Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),439,HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac"),HX_HCSTRING("err","\x65","\x07","\x4d","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(89)
				::haxe::Log_obj::trace(tmp11,tmp12);
				HX_STACK_LINE(89)
				::String tmp13 = _s;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(89)
				HX_STACK_DO_THROW(tmp13);
			}
			else{
				HX_STACK_LINE(89)
				Dynamic();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ALSound_obj,destroy,(void))

Void ALSound_obj::tick( ){
{
		HX_STACK_FRAME("snow.modules.openal.ALSound","tick",0xf51e44ee,"snow.modules.openal.ALSound.tick","snow/modules/openal/ALSound.hx",95,0x9aca6660)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		::snow::systems::audio::AudioInstance tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		tmp->tick();
		HX_STACK_LINE(98)
		::snow::modules::openal::Audio tmp1 = this->module;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		::luxe::Engine tmp2 = tmp1->app->host;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		hx::AddEq(this->current_time,tmp2->tick_delta);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ALSound_obj,tick,(void))

int ALSound_obj::new_source( ){
	HX_STACK_FRAME("snow.modules.openal.ALSound","new_source",0xe5ba426b,"snow.modules.openal.ALSound.new_source","snow/modules/openal/ALSound.hx",104,0x9aca6660)
	HX_STACK_THIS(this)
	HX_STACK_LINE(105)
	int tmp = linc::openal::genSource();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	int _source = tmp;		HX_STACK_VAR(_source,"_source");
	HX_STACK_LINE(106)
	int tmp1 = _source;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	alSourcef(tmp1,(int)4106,((Float)1.0));
	HX_STACK_LINE(107)
	int tmp2 = _source;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(107)
	alSourcei(tmp2,(int)4103,(int)0);
	HX_STACK_LINE(108)
	int tmp3 = _source;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(108)
	alSourcef(tmp3,(int)4099,((Float)1.0));
	HX_STACK_LINE(109)
	int tmp4 = _source;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(109)
	alSource3f(tmp4,(int)4100,((Float)0.0),((Float)0.0),((Float)0.0));
	HX_STACK_LINE(110)
	int tmp5 = _source;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(110)
	alSource3f(tmp5,(int)4102,((Float)0.0),((Float)0.0),((Float)0.0));
	HX_STACK_LINE(111)
	int tmp6 = _source;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(111)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(ALSound_obj,new_source,return )

Void ALSound_obj::err( ::String reason){
{
		HX_STACK_FRAME("snow.modules.openal.ALSound","err",0xc9f3a2f4,"snow.modules.openal.ALSound.err","snow/modules/openal/ALSound.hx",115,0x9aca6660)
		HX_STACK_THIS(this)
		HX_STACK_ARG(reason,"reason")
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			int tmp = alGetError();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(115)
			int _err = tmp;		HX_STACK_VAR(_err,"_err");
			HX_STACK_LINE(115)
			bool tmp1 = (_err != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(115)
			if ((tmp1)){
				HX_STACK_LINE(115)
				::String tmp2 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _err);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(115)
				::String tmp3 = (tmp2 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(115)
				::String tmp4 = reason;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(115)
				::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(115)
				::String tmp6 = (tmp5 + HX_HCSTRING(": failed with ","\x5d","\x20","\x68","\x1b"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(115)
				int tmp7 = _err;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(115)
				::String tmp8 = ::openal::ALError_obj::desc(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(115)
				::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(115)
				::String _s = tmp9;		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(115)
				::String tmp10 = _s;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(115)
				Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),439,HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac"),HX_HCSTRING("err","\x65","\x07","\x4d","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(115)
				::haxe::Log_obj::trace(tmp10,tmp11);
				HX_STACK_LINE(115)
				::String tmp12 = _s;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(115)
				HX_STACK_DO_THROW(tmp12);
			}
			else{
				HX_STACK_LINE(115)
				Dynamic();
			}
		}
		HX_STACK_LINE(115)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALSound_obj,err,(void))

int ALSound_obj::source_format( ){
	HX_STACK_FRAME("snow.modules.openal.ALSound","source_format",0x2ae5d5aa,"snow.modules.openal.ALSound.source_format","snow/modules/openal/ALSound.hx",118,0x9aca6660)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	int _format = (int)4353;		HX_STACK_VAR(_format,"_format");
	HX_STACK_LINE(122)
	int _bits_per_sample = (int)16;		HX_STACK_VAR(_bits_per_sample,"_bits_per_sample");
	HX_STACK_LINE(124)
	::snow::systems::audio::AudioSource tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	int tmp1 = tmp->data->channels;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	bool tmp2 = (tmp1 > (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(124)
	if ((tmp2)){
		HX_STACK_LINE(125)
		bool tmp3 = (_bits_per_sample == (int)8);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(125)
		if ((tmp3)){
			HX_STACK_LINE(126)
			_format = (int)4354;
			HX_STACK_LINE(138)
			Dynamic();
		}
		else{
			HX_STACK_LINE(129)
			_format = (int)4355;
			HX_STACK_LINE(138)
			Dynamic();
		}
	}
	else{
		HX_STACK_LINE(133)
		bool tmp3 = (_bits_per_sample == (int)8);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		if ((tmp3)){
			HX_STACK_LINE(134)
			_format = (int)4352;
			HX_STACK_LINE(138)
			Dynamic();
		}
		else{
			HX_STACK_LINE(137)
			_format = (int)4353;
			HX_STACK_LINE(138)
			Dynamic();
		}
	}
	HX_STACK_LINE(143)
	int tmp3 = _format;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(143)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ALSound_obj,source_format,return )


ALSound_obj::ALSound_obj()
{
}

void ALSound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ALSound);
	HX_MARK_MEMBER_NAME(instance,"instance");
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_MEMBER_NAME(module,"module");
	HX_MARK_MEMBER_NAME(alsource,"alsource");
	HX_MARK_MEMBER_NAME(alformat,"alformat");
	HX_MARK_MEMBER_NAME(pan,"pan");
	HX_MARK_MEMBER_NAME(looping,"looping");
	HX_MARK_MEMBER_NAME(current_time,"current_time");
	HX_MARK_END_CLASS();
}

void ALSound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(instance,"instance");
	HX_VISIT_MEMBER_NAME(source,"source");
	HX_VISIT_MEMBER_NAME(module,"module");
	HX_VISIT_MEMBER_NAME(alsource,"alsource");
	HX_VISIT_MEMBER_NAME(alformat,"alformat");
	HX_VISIT_MEMBER_NAME(pan,"pan");
	HX_VISIT_MEMBER_NAME(looping,"looping");
	HX_VISIT_MEMBER_NAME(current_time,"current_time");
}

Dynamic ALSound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return pan; }
		if (HX_FIELD_EQ(inName,"err") ) { return err_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"tick") ) { return tick_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { return source; }
		if (HX_FIELD_EQ(inName,"module") ) { return module; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"looping") ) { return looping; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		if (HX_FIELD_EQ(inName,"alsource") ) { return alsource; }
		if (HX_FIELD_EQ(inName,"alformat") ) { return alformat; }
		if (HX_FIELD_EQ(inName,"position") ) { return position_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"new_source") ) { return new_source_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"position_of") ) { return position_of_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"current_time") ) { return current_time; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"source_format") ) { return source_format_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ALSound_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { pan=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast< ::snow::systems::audio::AudioSource >(); return inValue; }
		if (HX_FIELD_EQ(inName,"module") ) { module=inValue.Cast< ::snow::modules::openal::Audio >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"looping") ) { looping=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::snow::systems::audio::AudioInstance >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alsource") ) { alsource=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alformat") ) { alformat=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"current_time") ) { current_time=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ALSound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"));
	outFields->push(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));
	outFields->push(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));
	outFields->push(HX_HCSTRING("alsource","\x06","\x08","\x5d","\x69"));
	outFields->push(HX_HCSTRING("alformat","\x62","\xe6","\xb9","\x34"));
	outFields->push(HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"));
	outFields->push(HX_HCSTRING("looping","\xfe","\x7c","\x7d","\x20"));
	outFields->push(HX_HCSTRING("current_time","\x13","\x5d","\xec","\xb3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::systems::audio::AudioInstance*/ ,(int)offsetof(ALSound_obj,instance),HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{hx::fsObject /*::snow::systems::audio::AudioSource*/ ,(int)offsetof(ALSound_obj,source),HX_HCSTRING("source","\xdb","\xb0","\x31","\x32")},
	{hx::fsObject /*::snow::modules::openal::Audio*/ ,(int)offsetof(ALSound_obj,module),HX_HCSTRING("module","\xac","\x34","\xd3","\xc0")},
	{hx::fsInt,(int)offsetof(ALSound_obj,alsource),HX_HCSTRING("alsource","\x06","\x08","\x5d","\x69")},
	{hx::fsInt,(int)offsetof(ALSound_obj,alformat),HX_HCSTRING("alformat","\x62","\xe6","\xb9","\x34")},
	{hx::fsFloat,(int)offsetof(ALSound_obj,pan),HX_HCSTRING("pan","\x5d","\x51","\x55","\x00")},
	{hx::fsBool,(int)offsetof(ALSound_obj,looping),HX_HCSTRING("looping","\xfe","\x7c","\x7d","\x20")},
	{hx::fsFloat,(int)offsetof(ALSound_obj,current_time),HX_HCSTRING("current_time","\x13","\x5d","\xec","\xb3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),
	HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"),
	HX_HCSTRING("alsource","\x06","\x08","\x5d","\x69"),
	HX_HCSTRING("alformat","\x62","\xe6","\xb9","\x34"),
	HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"),
	HX_HCSTRING("looping","\xfe","\x7c","\x7d","\x20"),
	HX_HCSTRING("current_time","\x13","\x5d","\xec","\xb3"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("position_of","\x2d","\xe6","\x66","\xff"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("tick","\x5d","\xc3","\xfc","\x4c"),
	HX_HCSTRING("new_source","\x1a","\xbe","\x59","\x10"),
	HX_HCSTRING("err","\x65","\x07","\x4d","\x00"),
	HX_HCSTRING("source_format","\x5b","\x91","\x91","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALSound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALSound_obj::__mClass,"__mClass");
};

#endif

hx::Class ALSound_obj::__mClass;

void ALSound_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.modules.openal.ALSound","\x7d","\x48","\x64","\xd6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ALSound_obj >;
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
} // end namespace modules
} // end namespace openal
