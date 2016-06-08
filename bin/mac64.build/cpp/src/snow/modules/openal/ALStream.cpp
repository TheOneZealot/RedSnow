#include <hxcpp.h>

#include "linc_openal.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openal_ALError
#include <openal/ALError.h>
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
namespace snow{
namespace modules{
namespace openal{

Void ALStream_obj::__construct(::snow::modules::openal::Audio _module,::snow::systems::audio::AudioSource _source,::snow::systems::audio::AudioInstance _instance)
{
HX_STACK_FRAME("snow.modules.openal.ALStream","new",0xd6e82304,"snow.modules.openal.ALStream.new","snow/modules/openal/ALStream.hx",13,0x4d99680d)
HX_STACK_THIS(this)
HX_STACK_ARG(_module,"_module")
HX_STACK_ARG(_source,"_source")
HX_STACK_ARG(_instance,"_instance")
{
	HX_STACK_LINE(157)
	this->data_get_result = Array_obj< int >::__new().Add((int)0).Add((int)0);
	HX_STACK_LINE(22)
	this->duration = ((Float)0.0);
	HX_STACK_LINE(20)
	this->buffers_left = (int)0;
	HX_STACK_LINE(26)
	::snow::modules::openal::Audio tmp = _module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	::snow::systems::audio::AudioSource tmp1 = _source;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	::snow::systems::audio::AudioInstance tmp2 = _instance;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(28)
	::snow::systems::audio::AudioSource tmp3 = this->source;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	Float tmp4 = tmp3->duration();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	this->duration = tmp4;
}
;
	return null();
}

//ALStream_obj::~ALStream_obj() { }

Dynamic ALStream_obj::__CreateEmpty() { return  new ALStream_obj; }
hx::ObjectPtr< ALStream_obj > ALStream_obj::__new(::snow::modules::openal::Audio _module,::snow::systems::audio::AudioSource _source,::snow::systems::audio::AudioInstance _instance)
{  hx::ObjectPtr< ALStream_obj > _result_ = new ALStream_obj();
	_result_->__construct(_module,_source,_instance);
	return _result_;}

Dynamic ALStream_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ALStream_obj > _result_ = new ALStream_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void ALStream_obj::init( ){
{
		HX_STACK_FRAME("snow.modules.openal.ALStream","init",0x30ef37ec,"snow.modules.openal.ALStream.init","snow/modules/openal/ALStream.hx",32,0x4d99680d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			Array< int > _g = Array_obj< int >::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(36)
			{
				HX_STACK_LINE(36)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(36)
				::snow::systems::audio::AudioSource tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(36)
				int _g1 = tmp->stream_buffer_count;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(36)
				while((true)){
					HX_STACK_LINE(36)
					bool tmp1 = (_g2 < _g1);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(36)
					bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(36)
					if ((tmp2)){
						HX_STACK_LINE(36)
						break;
					}
					HX_STACK_LINE(36)
					int tmp3 = (_g2)++;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(36)
					int i = tmp3;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(36)
					_g->push((int)0);
				}
			}
			HX_STACK_LINE(36)
			this->buffers = _g;
		}
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			Array< int > into = this->buffers;		HX_STACK_VAR(into,"into");
			HX_STACK_LINE(37)
			int _i = (int)0;		HX_STACK_VAR(_i,"_i");
			HX_STACK_LINE(37)
			while((true)){
				HX_STACK_LINE(37)
				int tmp = _i;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(37)
				::snow::systems::audio::AudioSource tmp1 = this->source;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(37)
				int tmp2 = tmp1->stream_buffer_count;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(37)
				bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(37)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(37)
				if ((tmp4)){
					HX_STACK_LINE(37)
					break;
				}
				HX_STACK_LINE(37)
				int tmp5 = linc::openal::genBuffer();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(37)
				into[_i] = tmp5;
				HX_STACK_LINE(37)
				++(_i);
			}
			HX_STACK_LINE(37)
			this->buffers = into;
		}
		HX_STACK_LINE(38)
		::snow::api::buffers::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(38)
			::snow::api::buffers::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(38)
			{
				HX_STACK_LINE(38)
				::snow::systems::audio::AudioSource tmp2 = this->source;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(38)
				int _elements = tmp2->stream_buffer_length;		HX_STACK_VAR(_elements,"_elements");
				HX_STACK_LINE(38)
				bool tmp3 = (_elements < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(38)
				if ((tmp3)){
					HX_STACK_LINE(38)
					_elements = (int)0;
				}
				HX_STACK_LINE(38)
				::snow::api::buffers::ArrayBufferView tmp4 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(38)
				::snow::api::buffers::ArrayBufferView _view = tmp4;		HX_STACK_VAR(_view,"_view");
				HX_STACK_LINE(38)
				int tmp5 = (_elements * _view->bytesPerElement);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(38)
				int _bytelen = tmp5;		HX_STACK_VAR(_bytelen,"_bytelen");
				HX_STACK_LINE(38)
				_view->byteOffset = (int)0;
				HX_STACK_LINE(38)
				_view->byteLength = _bytelen;
				HX_STACK_LINE(38)
				Array< unsigned char > tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(38)
				{
					HX_STACK_LINE(38)
					Array< unsigned char > this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(38)
					this2 = Array_obj< unsigned char >::__new();
					HX_STACK_LINE(38)
					bool tmp7 = (_bytelen > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(38)
					if ((tmp7)){
						HX_STACK_LINE(38)
						int tmp8 = (_bytelen - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(38)
						this2[tmp8] = (int)0;
					}
					HX_STACK_LINE(38)
					tmp6 = this2;
				}
				HX_STACK_LINE(38)
				_view->buffer = tmp6;
				HX_STACK_LINE(38)
				_view->length = _elements;
				HX_STACK_LINE(38)
				tmp1 = _view;
			}
			HX_STACK_LINE(38)
			this1 = tmp1;
			HX_STACK_LINE(38)
			tmp = this1;
		}
		HX_STACK_LINE(38)
		this->buffer_data = tmp;
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			int tmp1 = alGetError();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(40)
			int _err = tmp1;		HX_STACK_VAR(_err,"_err");
			HX_STACK_LINE(40)
			bool tmp2 = (_err != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(40)
			if ((tmp2)){
				HX_STACK_LINE(40)
				::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _err);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(40)
				::String tmp4 = (tmp3 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(40)
				::snow::systems::audio::AudioSource tmp5 = this->source;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(40)
				int tmp6 = tmp5->stream_buffer_count;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(40)
				::String tmp7 = (HX_HCSTRING("generated ","\xb1","\xad","\x60","\x4e") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(40)
				::String tmp8 = (tmp7 + HX_HCSTRING(" buffers","\x53","\xe7","\xde","\xd7"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(40)
				::String tmp9 = (tmp4 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(40)
				::String tmp10 = (tmp9 + HX_HCSTRING(": failed with ","\x5d","\x20","\x68","\x1b"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(40)
				int tmp11 = _err;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(40)
				::String tmp12 = ::openal::ALError_obj::desc(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(40)
				::String tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(40)
				::String _s = tmp13;		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(40)
				::String tmp14 = _s;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(40)
				Dynamic tmp15 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),439,HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac"),HX_HCSTRING("err","\x65","\x07","\x4d","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(40)
				::haxe::Log_obj::trace(tmp14,tmp15);
				HX_STACK_LINE(40)
				::String tmp16 = _s;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(40)
				HX_STACK_DO_THROW(tmp16);
			}
			else{
				HX_STACK_LINE(40)
				Dynamic();
			}
		}
		HX_STACK_LINE(42)
		::snow::systems::audio::AudioInstance tmp1 = this->instance;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		tmp1->data_seek((int)0);
		HX_STACK_LINE(44)
		this->init_queue(null());
	}
return null();
}


Void ALStream_obj::destroy( ){
{
		HX_STACK_FRAME("snow.modules.openal.ALStream","destroy",0x1e62a19e,"snow.modules.openal.ALStream.destroy","snow/modules/openal/ALStream.hx",50,0x4d99680d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			int tmp = alGetError();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(54)
			int _err = tmp;		HX_STACK_VAR(_err,"_err");
			HX_STACK_LINE(54)
			bool tmp1 = (_err != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(54)
			if ((tmp1)){
				HX_STACK_LINE(54)
				::String tmp2 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _err);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(54)
				::String tmp3 = (tmp2 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(54)
				::String tmp4 = (tmp3 + HX_HCSTRING("pre source stop","\xea","\x11","\x2b","\xf1"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(54)
				::String tmp5 = (tmp4 + HX_HCSTRING(": failed with ","\x5d","\x20","\x68","\x1b"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(54)
				int tmp6 = _err;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				::String tmp7 = ::openal::ALError_obj::desc(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(54)
				::String tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(54)
				::String _s = tmp8;		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(54)
				::String tmp9 = _s;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(54)
				Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),439,HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac"),HX_HCSTRING("err","\x65","\x07","\x4d","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(54)
				::haxe::Log_obj::trace(tmp9,tmp10);
				HX_STACK_LINE(54)
				::String tmp11 = _s;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(54)
				HX_STACK_DO_THROW(tmp11);
			}
			else{
				HX_STACK_LINE(54)
				Dynamic();
			}
		}
		HX_STACK_LINE(56)
		int tmp = this->alsource;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		alSourceStop(tmp);
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			int tmp1 = alGetError();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(58)
			int _err = tmp1;		HX_STACK_VAR(_err,"_err");
			HX_STACK_LINE(58)
			bool tmp2 = (_err != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(58)
			if ((tmp2)){
				HX_STACK_LINE(58)
				::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _err);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(58)
				::String tmp4 = (tmp3 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(58)
				::String tmp5 = (tmp4 + HX_HCSTRING("pre flush queue","\xb8","\x23","\x3a","\x3c"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(58)
				::String tmp6 = (tmp5 + HX_HCSTRING(": failed with ","\x5d","\x20","\x68","\x1b"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(58)
				int tmp7 = _err;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(58)
				::String tmp8 = ::openal::ALError_obj::desc(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(58)
				::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(58)
				::String _s = tmp9;		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(58)
				::String tmp10 = _s;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(58)
				Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),439,HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac"),HX_HCSTRING("err","\x65","\x07","\x4d","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(58)
				::haxe::Log_obj::trace(tmp10,tmp11);
				HX_STACK_LINE(58)
				::String tmp12 = _s;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(58)
				HX_STACK_DO_THROW(tmp12);
			}
			else{
				HX_STACK_LINE(58)
				Dynamic();
			}
		}
		HX_STACK_LINE(60)
		this->flush_queue();
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			int tmp1 = alGetError();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(62)
			int _err = tmp1;		HX_STACK_VAR(_err,"_err");
			HX_STACK_LINE(62)
			bool tmp2 = (_err != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(62)
			if ((tmp2)){
				HX_STACK_LINE(62)
				::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _err);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(62)
				::String tmp4 = (tmp3 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(62)
				::String tmp5 = (tmp4 + HX_HCSTRING("post flush queue","\x75","\x2f","\x45","\xa5"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(62)
				::String tmp6 = (tmp5 + HX_HCSTRING(": failed with ","\x5d","\x20","\x68","\x1b"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(62)
				int tmp7 = _err;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(62)
				::String tmp8 = ::openal::ALError_obj::desc(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(62)
				::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				::String _s = tmp9;		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(62)
				::String tmp10 = _s;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(62)
				Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),439,HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac"),HX_HCSTRING("err","\x65","\x07","\x4d","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(62)
				::haxe::Log_obj::trace(tmp10,tmp11);
				HX_STACK_LINE(62)
				::String tmp12 = _s;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(62)
				HX_STACK_DO_THROW(tmp12);
			}
			else{
				HX_STACK_LINE(62)
				Dynamic();
			}
		}
		HX_STACK_LINE(65)
		this->super::destroy();
		HX_STACK_LINE(67)
		while((true)){
			HX_STACK_LINE(67)
			int tmp1 = this->buffers->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(67)
			bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(67)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(67)
			if ((tmp3)){
				HX_STACK_LINE(67)
				break;
			}
			HX_STACK_LINE(68)
			Dynamic tmp4 = this->buffers->pop();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(68)
			Dynamic b = tmp4;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(69)
			Dynamic tmp5 = b;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(69)
			linc::openal::deleteBuffer(tmp5);
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				int tmp6 = alGetError();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(70)
				int _err = tmp6;		HX_STACK_VAR(_err,"_err");
				HX_STACK_LINE(70)
				bool tmp7 = (_err != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(70)
				if ((tmp7)){
					HX_STACK_LINE(70)
					::String tmp8 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _err);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(70)
					::String tmp9 = (tmp8 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(70)
					::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(70)
					{
						HX_STACK_LINE(70)
						int this1 = b;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(70)
						Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(70)
						{
							HX_STACK_LINE(70)
							int _int = this1;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(70)
							bool tmp12 = (_int < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(70)
							if ((tmp12)){
								HX_STACK_LINE(70)
								tmp11 = (((Float)4294967296.0) + _int);
							}
							else{
								HX_STACK_LINE(70)
								tmp11 = (_int + ((Float)0.0));
							}
						}
						HX_STACK_LINE(70)
						tmp10 = ::Std_obj::string(tmp11);
					}
					HX_STACK_LINE(70)
					::String tmp11 = (HX_HCSTRING("delete buffer ","\x2b","\x4a","\x04","\x58") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(70)
					::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(70)
					::String tmp13 = (tmp12 + HX_HCSTRING(": failed with ","\x5d","\x20","\x68","\x1b"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(70)
					int tmp14 = _err;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(70)
					::String tmp15 = ::openal::ALError_obj::desc(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(70)
					::String tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(70)
					::String _s = tmp16;		HX_STACK_VAR(_s,"_s");
					HX_STACK_LINE(70)
					::String tmp17 = _s;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(70)
					Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),439,HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac"),HX_HCSTRING("err","\x65","\x07","\x4d","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(70)
					::haxe::Log_obj::trace(tmp17,tmp18);
					HX_STACK_LINE(70)
					::String tmp19 = _s;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(70)
					HX_STACK_DO_THROW(tmp19);
				}
				else{
					HX_STACK_LINE(70)
					Dynamic();
				}
			}
		}
		HX_STACK_LINE(73)
		this->buffers = null();
		HX_STACK_LINE(74)
		::snow::api::buffers::ArrayBufferView tmp1 = this->buffer_data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		tmp1->buffer = null();
		HX_STACK_LINE(75)
		this->buffer_data = null();
	}
return null();
}


Float ALStream_obj::position_of( ){
	HX_STACK_FRAME("snow.modules.openal.ALStream","position_of",0x00447cd1,"snow.modules.openal.ALStream.position_of","snow/modules/openal/ALStream.hx",80,0x4d99680d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	Float tmp = this->current_time;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	int tmp1 = this->alsource;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	Float tmp2 = linc::openal::getSourcef(tmp1,(int)4132);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(82)
	return tmp3;
}


Void ALStream_obj::position( Float _time){
{
		HX_STACK_FRAME("snow.modules.openal.ALStream","position",0x72043b85,"snow.modules.openal.ALStream.position","snow/modules/openal/ALStream.hx",86,0x4d99680d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_time,"_time")
		HX_STACK_LINE(88)
		int tmp = this->alsource;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		int tmp1 = linc::openal::getSourcei(tmp,(int)4112);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		bool tmp2 = ((int)4114 == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		bool _playing = tmp2;		HX_STACK_VAR(_playing,"_playing");
		HX_STACK_LINE(91)
		int tmp3 = this->alsource;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		alSourceStop(tmp3);
		HX_STACK_LINE(92)
		this->flush_queue();
		HX_STACK_LINE(95)
		bool tmp4 = (_time < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(95)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(95)
		if ((tmp4)){
			HX_STACK_LINE(95)
			tmp5 = (int)0;
		}
		else{
			HX_STACK_LINE(95)
			Float tmp6 = _time;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(95)
			Float tmp7 = this->duration;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(95)
			bool tmp8 = (tmp6 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(95)
			if ((tmp8)){
				HX_STACK_LINE(95)
				tmp5 = this->duration;
			}
			else{
				HX_STACK_LINE(95)
				tmp5 = _time;
			}
		}
		HX_STACK_LINE(95)
		_time = tmp5;
		HX_STACK_LINE(97)
		this->current_time = _time;
		HX_STACK_LINE(99)
		bool tmp6 = _playing;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(99)
		if ((tmp6)){
			HX_STACK_LINE(99)
			int tmp7 = this->alsource;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(99)
			alSourcePlay(tmp7);
		}
	}
return null();
}


::String ALStream_obj::state_str( ){
	HX_STACK_FRAME("snow.modules.openal.ALStream","state_str",0xb84f25e7,"snow.modules.openal.ALStream.state_str","snow/modules/openal/ALStream.hx",105,0x4d99680d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	{
		HX_STACK_LINE(106)
		int tmp1 = this->alsource;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		int tmp2 = linc::openal::getSourcei(tmp1,(int)4112);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(106)
		int tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		switch( (int)(tmp3)){
			case (int)4113: {
				HX_STACK_LINE(107)
				tmp = HX_HCSTRING("INITIAL","\x64","\xe4","\x72","\x4b");
			}
			;break;
			case (int)4114: {
				HX_STACK_LINE(108)
				tmp = HX_HCSTRING("PLAYING","\x4e","\xe3","\xeb","\x09");
			}
			;break;
			case (int)4115: {
				HX_STACK_LINE(109)
				tmp = HX_HCSTRING("PAUSED","\xae","\xec","\x06","\xa2");
			}
			;break;
			case (int)4116: {
				HX_STACK_LINE(110)
				tmp = HX_HCSTRING("STOPPED","\xed","\xa5","\x35","\xc3");
			}
			;break;
			default: {
				HX_STACK_LINE(111)
				tmp = HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61");
			}
		}
	}
	HX_STACK_LINE(106)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ALStream_obj,state_str,return )

int ALStream_obj::state_now( ){
	HX_STACK_FRAME("snow.modules.openal.ALStream","state_now",0xb84b564c,"snow.modules.openal.ALStream.state_now","snow/modules/openal/ALStream.hx",115,0x4d99680d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(116)
	int tmp = this->alsource;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	int tmp1 = linc::openal::getSourcei(tmp,(int)4112);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ALStream_obj,state_now,return )

bool ALStream_obj::state_is( int _state){
	HX_STACK_FRAME("snow.modules.openal.ALStream","state_is",0x0690f774,"snow.modules.openal.ALStream.state_is","snow/modules/openal/ALStream.hx",119,0x4d99680d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_state,"_state")
	HX_STACK_LINE(120)
	int tmp = _state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	int tmp1 = this->alsource;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	int tmp2 = linc::openal::getSourcei(tmp1,(int)4112);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(120)
	bool tmp3 = (tmp == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(120)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ALStream_obj,state_is,return )

Void ALStream_obj::init_queue( Dynamic __o__start){
Dynamic _start = __o__start.Default(-1);
	HX_STACK_FRAME("snow.modules.openal.ALStream","init_queue",0xda4dc5be,"snow.modules.openal.ALStream.init_queue","snow/modules/openal/ALStream.hx",125,0x4d99680d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_start,"_start")
{
		HX_STACK_LINE(127)
		bool tmp = (_start != (int)-1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		if ((tmp)){
			HX_STACK_LINE(127)
			::snow::systems::audio::AudioInstance tmp1 = this->instance;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(127)
			Dynamic tmp2 = _start;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(127)
			tmp1->data_seek(tmp2);
		}
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(129)
			::snow::systems::audio::AudioSource tmp1 = this->source;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(129)
			int _g = tmp1->stream_buffer_count;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(129)
			while((true)){
				HX_STACK_LINE(129)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(129)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(129)
				if ((tmp3)){
					HX_STACK_LINE(129)
					break;
				}
				HX_STACK_LINE(129)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(129)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(130)
				int tmp5 = this->buffers->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(130)
				this->fill_buffer(tmp5);
				HX_STACK_LINE(131)
				int tmp6 = this->alsource;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(131)
				int tmp7 = this->buffers->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(131)
				linc::openal::sourceQueueBuffer(tmp6,tmp7);
				HX_STACK_LINE(132)
				{
					HX_STACK_LINE(132)
					int tmp8 = alGetError();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(132)
					int _err = tmp8;		HX_STACK_VAR(_err,"_err");
					HX_STACK_LINE(132)
					bool tmp9 = (_err != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(132)
					if ((tmp9)){
						HX_STACK_LINE(132)
						::String tmp10 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _err);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(132)
						::String tmp11 = (tmp10 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(132)
						Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(132)
						{
							HX_STACK_LINE(132)
							int tmp13 = this->buffers->__get(i);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(132)
							int _int = tmp13;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(132)
							bool tmp14 = (_int < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(132)
							if ((tmp14)){
								HX_STACK_LINE(132)
								tmp12 = (((Float)4294967296.0) + _int);
							}
							else{
								HX_STACK_LINE(132)
								tmp12 = (_int + ((Float)0.0));
							}
						}
						HX_STACK_LINE(132)
						::String tmp13 = ::Std_obj::string(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(132)
						::String tmp14 = (HX_HCSTRING("queue buffer ","\x91","\xed","\x5a","\xa1") + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(132)
						::String tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(132)
						::String tmp16 = (tmp15 + HX_HCSTRING(": failed with ","\x5d","\x20","\x68","\x1b"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(132)
						int tmp17 = _err;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(132)
						::String tmp18 = ::openal::ALError_obj::desc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(132)
						::String tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(132)
						::String _s = tmp19;		HX_STACK_VAR(_s,"_s");
						HX_STACK_LINE(132)
						::String tmp20 = _s;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(132)
						Dynamic tmp21 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),439,HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac"),HX_HCSTRING("err","\x65","\x07","\x4d","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(132)
						::haxe::Log_obj::trace(tmp20,tmp21);
						HX_STACK_LINE(132)
						::String tmp22 = _s;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(132)
						HX_STACK_DO_THROW(tmp22);
					}
					else{
						HX_STACK_LINE(132)
						Dynamic();
					}
				}
			}
		}
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			int tmp1 = alGetError();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(135)
			int _err = tmp1;		HX_STACK_VAR(_err,"_err");
			HX_STACK_LINE(135)
			bool tmp2 = (_err != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(135)
			if ((tmp2)){
				HX_STACK_LINE(135)
				::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _err);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(135)
				::String tmp4 = (tmp3 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(135)
				::String tmp5 = (tmp4 + HX_HCSTRING("init_queue","\xe2","\xbb","\x82","\x29"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(135)
				::String tmp6 = (tmp5 + HX_HCSTRING(": failed with ","\x5d","\x20","\x68","\x1b"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(135)
				int tmp7 = _err;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(135)
				::String tmp8 = ::openal::ALError_obj::desc(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(135)
				::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(135)
				::String _s = tmp9;		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(135)
				::String tmp10 = _s;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(135)
				Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),439,HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac"),HX_HCSTRING("err","\x65","\x07","\x4d","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(135)
				::haxe::Log_obj::trace(tmp10,tmp11);
				HX_STACK_LINE(135)
				::String tmp12 = _s;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(135)
				HX_STACK_DO_THROW(tmp12);
			}
			else{
				HX_STACK_LINE(135)
				Dynamic();
			}
		}
		HX_STACK_LINE(139)
		::snow::systems::audio::AudioSource tmp1 = this->source;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		this->buffers_left = tmp1->stream_buffer_count;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALStream_obj,init_queue,(void))

Void ALStream_obj::flush_queue( ){
{
		HX_STACK_FRAME("snow.modules.openal.ALStream","flush_queue",0xd16f393a,"snow.modules.openal.ALStream.flush_queue","snow/modules/openal/ALStream.hx",143,0x4d99680d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(145)
		int tmp = this->alsource;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(145)
		int tmp1 = linc::openal::getSourcei(tmp,(int)4117);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(145)
		int queued = tmp1;		HX_STACK_VAR(queued,"queued");
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(149)
			while((true)){
				HX_STACK_LINE(149)
				bool tmp2 = (_g < queued);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(149)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(149)
				if ((tmp3)){
					HX_STACK_LINE(149)
					break;
				}
				HX_STACK_LINE(149)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(149)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(150)
				int tmp5 = this->alsource;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(150)
				linc::openal::sourceUnqueueBuffer(tmp5);
			}
		}
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			int tmp2 = alGetError();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(153)
			int _err = tmp2;		HX_STACK_VAR(_err,"_err");
			HX_STACK_LINE(153)
			bool tmp3 = (_err != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(153)
			if ((tmp3)){
				HX_STACK_LINE(153)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _err);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(153)
				::String tmp5 = (tmp4 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(153)
				::String tmp6 = (tmp5 + HX_HCSTRING("flush_queue","\x96","\xa2","\x91","\xd0"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(153)
				::String tmp7 = (tmp6 + HX_HCSTRING(": failed with ","\x5d","\x20","\x68","\x1b"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(153)
				int tmp8 = _err;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(153)
				::String tmp9 = ::openal::ALError_obj::desc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(153)
				::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(153)
				::String _s = tmp10;		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(153)
				::String tmp11 = _s;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(153)
				Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),439,HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac"),HX_HCSTRING("err","\x65","\x07","\x4d","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(153)
				::haxe::Log_obj::trace(tmp11,tmp12);
				HX_STACK_LINE(153)
				::String tmp13 = _s;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(153)
				HX_STACK_DO_THROW(tmp13);
			}
			else{
				HX_STACK_LINE(153)
				Dynamic();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ALStream_obj,flush_queue,(void))

bool ALStream_obj::fill_buffer( int _buffer){
	HX_STACK_FRAME("snow.modules.openal.ALStream","fill_buffer",0x9633bd20,"snow.modules.openal.ALStream.fill_buffer","snow/modules/openal/ALStream.hx",158,0x4d99680d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_buffer,"_buffer")
	HX_STACK_LINE(161)
	::snow::systems::audio::AudioInstance tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	::snow::api::buffers::ArrayBufferView tmp1 = this->buffer_data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(161)
	::snow::systems::audio::AudioSource tmp2 = this->source;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(161)
	int tmp3 = tmp2->stream_buffer_length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(161)
	Array< int > _read = tmp->data_get(tmp1,(int)-1,tmp3,this->data_get_result);		HX_STACK_VAR(_read,"_read");
	HX_STACK_LINE(162)
	int tmp4 = _read->__get((int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(162)
	int _amount = tmp4;		HX_STACK_VAR(_amount,"_amount");
	HX_STACK_LINE(167)
	bool tmp5 = (_amount > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(167)
	if ((tmp5)){
		HX_STACK_LINE(168)
		int tmp6 = _buffer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(168)
		int tmp7 = this->alformat;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(168)
		::snow::systems::audio::AudioSource tmp8 = this->source;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(168)
		int tmp9 = tmp8->data->rate;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(168)
		::snow::api::buffers::ArrayBufferView tmp10 = this->buffer_data;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(168)
		Array< unsigned char > tmp11 = tmp10->buffer;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(168)
		::snow::api::buffers::ArrayBufferView tmp12 = this->buffer_data;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(168)
		int tmp13 = tmp12->byteOffset;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(168)
		int tmp14 = _amount;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(168)
		linc::openal::bufferData(tmp6,tmp7,tmp9,tmp11,tmp13,tmp14);
	}
	HX_STACK_LINE(173)
	int tmp6 = _read->__get((int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(173)
	bool tmp7 = (tmp6 == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(173)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(ALStream_obj,fill_buffer,return )

Void ALStream_obj::tick( ){
{
		HX_STACK_FRAME("snow.modules.openal.ALStream","tick",0x3830c039,"snow.modules.openal.ALStream.tick","snow/modules/openal/ALStream.hx",179,0x4d99680d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		::snow::systems::audio::AudioInstance tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		tmp->tick();
		HX_STACK_LINE(183)
		int tmp1 = this->alsource;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(183)
		int tmp2 = linc::openal::getSourcei(tmp1,(int)4112);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		bool tmp3 = ((int)4114 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(183)
		if ((tmp4)){
			HX_STACK_LINE(184)
			return null();
		}
		HX_STACK_LINE(187)
		bool still_streaming = true;		HX_STACK_VAR(still_streaming,"still_streaming");
		HX_STACK_LINE(191)
		int tmp5 = this->alsource;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(191)
		int tmp6 = linc::openal::getSourcei(tmp5,(int)4118);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(191)
		int processed_buffers = tmp6;		HX_STACK_VAR(processed_buffers,"processed_buffers");
		HX_STACK_LINE(196)
		int tmp7 = processed_buffers;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(196)
		::snow::systems::audio::AudioSource tmp8 = this->source;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(196)
		int tmp9 = tmp8->stream_buffer_count;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(196)
		bool tmp10 = (tmp7 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(196)
		if ((tmp10)){
			HX_STACK_LINE(196)
			::snow::systems::audio::AudioSource tmp11 = this->source;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(196)
			processed_buffers = tmp11->stream_buffer_count;
		}
		HX_STACK_LINE(197)
		while((true)){
			HX_STACK_LINE(197)
			bool tmp11 = (processed_buffers > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(197)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(197)
			if ((tmp12)){
				HX_STACK_LINE(197)
				break;
			}
			HX_STACK_LINE(199)
			int tmp13 = this->alsource;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(199)
			int tmp14 = linc::openal::sourceUnqueueBuffer(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(199)
			int _buffer = tmp14;		HX_STACK_VAR(_buffer,"_buffer");
			HX_STACK_LINE(203)
			int tmp15 = _buffer;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(203)
			int tmp16 = linc::openal::getBufferi(tmp15,(int)8196);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(203)
			int _buffer_size = tmp16;		HX_STACK_VAR(_buffer_size,"_buffer_size");
			HX_STACK_LINE(205)
			::snow::systems::audio::AudioSource tmp17 = this->source;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(205)
			int tmp18 = _buffer_size;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(205)
			Float tmp19 = tmp17->bytes_to_seconds(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(205)
			hx::AddEq(this->current_time,tmp19);
			HX_STACK_LINE(212)
			int tmp20 = _buffer;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(212)
			bool tmp21 = this->fill_buffer(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(212)
			bool _complete = tmp21;		HX_STACK_VAR(_complete,"_complete");
			HX_STACK_LINE(214)
			bool tmp22 = this->looping;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(214)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(214)
			bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(214)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(214)
			if ((tmp24)){
				HX_STACK_LINE(214)
				tmp25 = _complete;
			}
			else{
				HX_STACK_LINE(214)
				tmp25 = false;
			}
			HX_STACK_LINE(214)
			bool skip_queue = tmp25;		HX_STACK_VAR(skip_queue,"skip_queue");
			HX_STACK_LINE(217)
			Float tmp26 = this->position_of();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(217)
			Float tmp27 = this->duration;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(217)
			bool tmp28 = (tmp26 >= tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(217)
			bool at_end = tmp28;		HX_STACK_VAR(at_end,"at_end");
			HX_STACK_LINE(218)
			bool tmp29 = at_end;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(218)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(218)
			if ((tmp29)){
				HX_STACK_LINE(218)
				tmp30 = this->looping;
			}
			else{
				HX_STACK_LINE(218)
				tmp30 = false;
			}
			HX_STACK_LINE(218)
			if ((tmp30)){
				HX_STACK_LINE(219)
				this->current_time = (int)0;
				HX_STACK_LINE(220)
				::snow::modules::openal::Audio tmp31 = this->module;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(220)
				::snow::systems::audio::Audio tmp32 = tmp31->app->audio;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(220)
				::snow::systems::audio::AudioInstance tmp33 = this->instance;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(220)
				Dynamic tmp34 = tmp33->handle;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(220)
				tmp32->emit_Int((int)0,tmp34);
			}
			HX_STACK_LINE(223)
			bool tmp31 = _complete;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(223)
			if ((tmp31)){
				HX_STACK_LINE(225)
				bool tmp32 = this->looping;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(225)
				if ((tmp32)){
					HX_STACK_LINE(226)
					::snow::systems::audio::AudioInstance tmp33 = this->instance;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(226)
					tmp33->data_seek((int)0);
				}
				else{
					HX_STACK_LINE(228)
					(this->buffers_left)--;
					HX_STACK_LINE(230)
					int tmp33 = this->buffers_left;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(230)
					bool tmp34 = (tmp33 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(230)
					if ((tmp34)){
						HX_STACK_LINE(231)
						still_streaming = false;
					}
					else{
						HX_STACK_LINE(233)
						skip_queue = false;
					}
				}
			}
			HX_STACK_LINE(239)
			bool tmp32 = skip_queue;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(239)
			bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(239)
			if ((tmp33)){
				HX_STACK_LINE(240)
				int tmp34 = this->alsource;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(240)
				int tmp35 = _buffer;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(240)
				linc::openal::sourceQueueBuffer(tmp34,tmp35);
			}
			HX_STACK_LINE(244)
			(processed_buffers)--;
		}
		HX_STACK_LINE(248)
		bool tmp11 = still_streaming;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(248)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(248)
		if ((tmp12)){
			HX_STACK_LINE(249)
			int tmp13 = this->alsource;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(249)
			alSourceStop(tmp13);
		}
	}
return null();
}



ALStream_obj::ALStream_obj()
{
}

void ALStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ALStream);
	HX_MARK_MEMBER_NAME(buffers,"buffers");
	HX_MARK_MEMBER_NAME(buffer_data,"buffer_data");
	HX_MARK_MEMBER_NAME(buffers_left,"buffers_left");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(data_get_result,"data_get_result");
	::snow::modules::openal::ALSound_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ALStream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffers,"buffers");
	HX_VISIT_MEMBER_NAME(buffer_data,"buffer_data");
	HX_VISIT_MEMBER_NAME(buffers_left,"buffers_left");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(data_get_result,"data_get_result");
	::snow::modules::openal::ALSound_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ALStream_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"tick") ) { return tick_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buffers") ) { return buffers; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		if (HX_FIELD_EQ(inName,"position") ) { return position_dyn(); }
		if (HX_FIELD_EQ(inName,"state_is") ) { return state_is_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"state_str") ) { return state_str_dyn(); }
		if (HX_FIELD_EQ(inName,"state_now") ) { return state_now_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"init_queue") ) { return init_queue_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buffer_data") ) { return buffer_data; }
		if (HX_FIELD_EQ(inName,"position_of") ) { return position_of_dyn(); }
		if (HX_FIELD_EQ(inName,"flush_queue") ) { return flush_queue_dyn(); }
		if (HX_FIELD_EQ(inName,"fill_buffer") ) { return fill_buffer_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buffers_left") ) { return buffers_left; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"data_get_result") ) { return data_get_result; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ALStream_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"buffers") ) { buffers=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buffer_data") ) { buffer_data=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buffers_left") ) { buffers_left=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"data_get_result") ) { data_get_result=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ALStream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buffers","\x73","\xa3","\x90","\xb1"));
	outFields->push(HX_HCSTRING("buffer_data","\x09","\x95","\x92","\xff"));
	outFields->push(HX_HCSTRING("buffers_left","\x93","\x1f","\x0c","\xc6"));
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("data_get_result","\xdb","\x0b","\x4e","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(ALStream_obj,buffers),HX_HCSTRING("buffers","\x73","\xa3","\x90","\xb1")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(ALStream_obj,buffer_data),HX_HCSTRING("buffer_data","\x09","\x95","\x92","\xff")},
	{hx::fsInt,(int)offsetof(ALStream_obj,buffers_left),HX_HCSTRING("buffers_left","\x93","\x1f","\x0c","\xc6")},
	{hx::fsFloat,(int)offsetof(ALStream_obj,duration),HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(ALStream_obj,data_get_result),HX_HCSTRING("data_get_result","\xdb","\x0b","\x4e","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buffers","\x73","\xa3","\x90","\xb1"),
	HX_HCSTRING("buffer_data","\x09","\x95","\x92","\xff"),
	HX_HCSTRING("buffers_left","\x93","\x1f","\x0c","\xc6"),
	HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("position_of","\x2d","\xe6","\x66","\xff"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("state_str","\x43","\x40","\xf1","\x36"),
	HX_HCSTRING("state_now","\xa8","\x70","\xed","\x36"),
	HX_HCSTRING("state_is","\x98","\x5c","\x87","\x5f"),
	HX_HCSTRING("init_queue","\xe2","\xbb","\x82","\x29"),
	HX_HCSTRING("flush_queue","\x96","\xa2","\x91","\xd0"),
	HX_HCSTRING("data_get_result","\xdb","\x0b","\x4e","\x46"),
	HX_HCSTRING("fill_buffer","\x7c","\x26","\x56","\x95"),
	HX_HCSTRING("tick","\x5d","\xc3","\xfc","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALStream_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALStream_obj::__mClass,"__mClass");
};

#endif

hx::Class ALStream_obj::__mClass;

void ALStream_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.modules.openal.ALStream","\x12","\x91","\x59","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ALStream_obj >;
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
