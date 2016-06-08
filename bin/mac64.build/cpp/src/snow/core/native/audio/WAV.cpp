#include <hxcpp.h>

#include "linc_sdl.h"
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_core_native_audio_AudioDataWAV
#include <snow/core/native/audio/AudioDataWAV.h>
#endif
#ifndef INCLUDED_snow_core_native_audio_WAV
#include <snow/core/native/audio/WAV.h>
#endif
#ifndef INCLUDED_snow_core_native_io_IO
#include <snow/core/native/io/IO.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_IO
#include <snow/modules/interfaces/IO.h>
#endif
#ifndef INCLUDED_snow_modules_sdl_IO
#include <snow/modules/sdl/IO.h>
#endif
#ifndef INCLUDED_snow_systems_io_IO
#include <snow/systems/io/IO.h>
#endif
#ifndef INCLUDED_snow_types_AudioData
#include <snow/types/AudioData.h>
#endif
namespace snow{
namespace core{
namespace native{
namespace audio{

Void WAV_obj::__construct()
{
	return null();
}

//WAV_obj::~WAV_obj() { }

Dynamic WAV_obj::__CreateEmpty() { return  new WAV_obj; }
hx::ObjectPtr< WAV_obj > WAV_obj::__new()
{  hx::ObjectPtr< WAV_obj > _result_ = new WAV_obj();
	_result_->__construct();
	return _result_;}

Dynamic WAV_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WAV_obj > _result_ = new WAV_obj();
	_result_->__construct();
	return _result_;}

::snow::types::AudioData WAV_obj::from_file( ::snow::Snow app,::String _path,bool _is_stream){
	HX_STACK_FRAME("snow.core.native.audio.WAV","from_file",0x45301fa4,"snow.core.native.audio.WAV.from_file","snow/core/native/audio/AudioDataWAV.hx",90,0xe0c91f25)
	HX_STACK_ARG(app,"app")
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_is_stream,"_is_stream")
	HX_STACK_LINE(92)
	::snow::modules::sdl::IO tmp = app->io->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	::String tmp1 = _path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	::cpp::Pointer< SDL_RWops > tmp2 = tmp->file_handle(tmp1,HX_HCSTRING("rb","\xb0","\x63","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	::cpp::Pointer< SDL_RWops > _handle = tmp2;		HX_STACK_VAR(_handle,"_handle");
	HX_STACK_LINE(94)
	::snow::Snow tmp3 = app;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(94)
	::cpp::Pointer< SDL_RWops > tmp4 = _handle;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(94)
	::String tmp5 = _path;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(94)
	bool tmp6 = _is_stream;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(94)
	::snow::types::AudioData tmp7 = ::snow::core::native::audio::WAV_obj::from_file_handle(tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(94)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(WAV_obj,from_file,return )

::snow::types::AudioData WAV_obj::from_bytes( ::snow::Snow app,::String _path,::snow::api::buffers::ArrayBufferView _bytes){
	HX_STACK_FRAME("snow.core.native.audio.WAV","from_bytes",0x01eaba43,"snow.core.native.audio.WAV.from_bytes","snow/core/native/audio/AudioDataWAV.hx",98,0xe0c91f25)
	HX_STACK_ARG(app,"app")
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_LINE(100)
	::snow::modules::sdl::IO tmp = app->io->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	::snow::api::buffers::ArrayBufferView tmp1 = _bytes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	int tmp2 = _bytes->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	::cpp::Pointer< SDL_RWops > tmp3 = tmp->file_handle_from_mem(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(100)
	::cpp::Pointer< SDL_RWops > _handle = tmp3;		HX_STACK_VAR(_handle,"_handle");
	HX_STACK_LINE(102)
	::snow::Snow tmp4 = app;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(102)
	::cpp::Pointer< SDL_RWops > tmp5 = _handle;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(102)
	::String tmp6 = _path;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(102)
	::snow::types::AudioData tmp7 = ::snow::core::native::audio::WAV_obj::from_file_handle(tmp4,tmp5,tmp6,false);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(102)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(WAV_obj,from_bytes,return )

::String WAV_obj::ID_DATA;

::String WAV_obj::ID_FMT;

::String WAV_obj::ID_WAVE;

::String WAV_obj::ID_RIFF;

::snow::types::AudioData WAV_obj::from_file_handle( ::snow::Snow app,::cpp::Pointer< SDL_RWops > _handle,::String _path,bool _is_stream){
	HX_STACK_FRAME("snow.core.native.audio.WAV","from_file_handle",0xa7677223,"snow.core.native.audio.WAV.from_file_handle","snow/core/native/audio/AudioDataWAV.hx",113,0xe0c91f25)
	HX_STACK_ARG(app,"app")
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_is_stream,"_is_stream")
	HX_STACK_LINE(115)
	bool tmp = (_handle == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	if ((tmp)){
		HX_STACK_LINE(115)
		return null();
	}
	HX_STACK_LINE(117)
	int _length = (int)0;		HX_STACK_VAR(_length,"_length");
	HX_STACK_LINE(118)
	::snow::Snow tmp1 = app;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(118)
	::cpp::Pointer< SDL_RWops > tmp2 = _handle;		HX_STACK_VAR(tmp2,"tmp2");
	struct _Function_1_1{
		inline static Dynamic Block( int &_length,::String &_path,bool &_is_stream){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/core/native/audio/AudioDataWAV.hx",118,0xe0c91f25)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , _path,false);
				__result->Add(HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6") , _is_stream,false);
				__result->Add(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd") , ((Dynamic)((int)3)),false);
				__result->Add(HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83") , null(),false);
				__result->Add(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f") , _length,false);
				__result->Add(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a") , (int)1,false);
				__result->Add(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b") , (int)44100,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(118)
	Dynamic tmp3 = _Function_1_1::Block(_length,_path,_is_stream);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(118)
	::snow::core::native::audio::AudioDataWAV tmp4 = ::snow::core::native::audio::AudioDataWAV_obj::__new(tmp1,tmp2,(int)0,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(118)
	::snow::core::native::audio::AudioDataWAV _info = tmp4;		HX_STACK_VAR(_info,"_info");
	HX_STACK_LINE(128)
	::snow::api::buffers::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(128)
	{
		HX_STACK_LINE(128)
		::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(128)
		::snow::api::buffers::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			int _elements = (int)12;		HX_STACK_VAR(_elements,"_elements");
			HX_STACK_LINE(128)
			bool tmp7 = (_elements < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(128)
			if ((tmp7)){
				HX_STACK_LINE(128)
				_elements = (int)0;
			}
			HX_STACK_LINE(128)
			::snow::api::buffers::ArrayBufferView tmp8 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(128)
			::snow::api::buffers::ArrayBufferView _view = tmp8;		HX_STACK_VAR(_view,"_view");
			HX_STACK_LINE(128)
			int tmp9 = (_elements * _view->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(128)
			int _bytelen = tmp9;		HX_STACK_VAR(_bytelen,"_bytelen");
			HX_STACK_LINE(128)
			_view->byteOffset = (int)0;
			HX_STACK_LINE(128)
			_view->byteLength = _bytelen;
			HX_STACK_LINE(128)
			Array< unsigned char > tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(128)
			{
				HX_STACK_LINE(128)
				Array< unsigned char > this2;		HX_STACK_VAR(this2,"this2");
				HX_STACK_LINE(128)
				this2 = Array_obj< unsigned char >::__new();
				HX_STACK_LINE(128)
				bool tmp11 = (_bytelen > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(128)
				if ((tmp11)){
					HX_STACK_LINE(128)
					int tmp12 = (_bytelen - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(128)
					this2[tmp12] = (int)0;
				}
				HX_STACK_LINE(128)
				tmp10 = this2;
			}
			HX_STACK_LINE(128)
			_view->buffer = tmp10;
			HX_STACK_LINE(128)
			_view->length = _elements;
			HX_STACK_LINE(128)
			tmp6 = _view;
		}
		HX_STACK_LINE(128)
		this1 = tmp6;
		HX_STACK_LINE(128)
		tmp5 = this1;
	}
	HX_STACK_LINE(128)
	::snow::api::buffers::ArrayBufferView _header = tmp5;		HX_STACK_VAR(_header,"_header");
	HX_STACK_LINE(129)
	::snow::modules::sdl::IO tmp6 = app->io->module;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(129)
	::cpp::Pointer< SDL_RWops > tmp7 = _handle;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(129)
	::snow::api::buffers::ArrayBufferView tmp8 = _header;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(129)
	tmp6->file_read(tmp7,tmp8,(int)12,(int)1);
	HX_STACK_LINE(131)
	Array< unsigned char > tmp9 = _header->buffer;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(131)
	::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::ofData(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(131)
	::haxe::io::Bytes _bytes = tmp10;		HX_STACK_VAR(_bytes,"_bytes");
	HX_STACK_LINE(132)
	::String tmp11 = _bytes->getString((int)0,(int)4);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(132)
	::String _file_id = tmp11;		HX_STACK_VAR(_file_id,"_file_id");
	HX_STACK_LINE(133)
	::String tmp12 = _bytes->getString((int)8,(int)4);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(133)
	::String _file_format = tmp12;		HX_STACK_VAR(_file_format,"_file_format");
	HX_STACK_LINE(135)
	_header = null();
	HX_STACK_LINE(136)
	_bytes = null();
	HX_STACK_LINE(138)
	::String tmp13 = _file_id;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(138)
	::String tmp14 = ::snow::core::native::audio::WAV_obj::ID_RIFF;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(138)
	bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(138)
	if ((tmp15)){
		HX_STACK_LINE(139)
		::String tmp16 = (HX_HCSTRING("assets / audio / wav / file `","\x2a","\x1d","\xef","\xec") + _path);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(139)
		::String tmp17 = (tmp16 + HX_HCSTRING("` has invalid header (id `","\x3f","\x47","\x67","\xb7"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(139)
		::String tmp18 = _file_id;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(139)
		::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(139)
		::String tmp20 = (tmp19 + HX_HCSTRING("`, expected RIFF)","\xbe","\x2d","\x7d","\x07"));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(139)
		::String tmp21 = (HX_HCSTRING("i / audiodatawav / ","\x1d","\x22","\xd3","\x46") + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(139)
		Dynamic tmp22 = hx::SourceInfo(HX_HCSTRING("AudioDataWAV.hx","\x32","\x33","\x12","\x01"),139,HX_HCSTRING("snow.core.native.audio.WAV","\xa1","\x7d","\xe6","\x5d"),HX_HCSTRING("from_file_handle","\xb6","\x98","\xc1","\x23"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(139)
		::haxe::Log_obj::trace(tmp21,tmp22);
		HX_STACK_LINE(140)
		return null();
	}
	HX_STACK_LINE(143)
	::String tmp16 = _file_format;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(143)
	::String tmp17 = ::snow::core::native::audio::WAV_obj::ID_WAVE;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(143)
	bool tmp18 = (tmp16 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(143)
	if ((tmp18)){
		HX_STACK_LINE(144)
		::String tmp19 = (HX_HCSTRING("assets / audio / wav / file `","\x2a","\x1d","\xef","\xec") + _path);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(144)
		::String tmp20 = (tmp19 + HX_HCSTRING("` has invalid header (id `","\x3f","\x47","\x67","\xb7"));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(144)
		::String tmp21 = _file_format;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(144)
		::String tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(144)
		::String tmp23 = (tmp22 + HX_HCSTRING("`, expected WAVE)","\x7c","\x82","\x40","\xe3"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(144)
		::String tmp24 = (HX_HCSTRING("i / audiodatawav / ","\x1d","\x22","\xd3","\x46") + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(144)
		Dynamic tmp25 = hx::SourceInfo(HX_HCSTRING("AudioDataWAV.hx","\x32","\x33","\x12","\x01"),144,HX_HCSTRING("snow.core.native.audio.WAV","\xa1","\x7d","\xe6","\x5d"),HX_HCSTRING("from_file_handle","\xb6","\x98","\xc1","\x23"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(144)
		::haxe::Log_obj::trace(tmp24,tmp25);
		HX_STACK_LINE(145)
		return null();
	}
	HX_STACK_LINE(148)
	bool _found_data = false;		HX_STACK_VAR(_found_data,"_found_data");
	HX_STACK_LINE(149)
	bool _found_format = false;		HX_STACK_VAR(_found_format,"_found_format");
	HX_STACK_LINE(150)
	int _limit = (int)0;		HX_STACK_VAR(_limit,"_limit");
	HX_STACK_LINE(152)
	while((true)){
		HX_STACK_LINE(152)
		bool tmp19 = _found_format;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(152)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(152)
		bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(152)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(152)
		bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(152)
		if ((tmp22)){
			HX_STACK_LINE(152)
			bool tmp24 = _found_data;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(152)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(152)
			tmp23 = !(tmp25);
		}
		else{
			HX_STACK_LINE(152)
			tmp23 = true;
		}
		HX_STACK_LINE(152)
		bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(152)
		if ((tmp24)){
			HX_STACK_LINE(152)
			break;
		}
		HX_STACK_LINE(154)
		::snow::Snow tmp25 = app;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(154)
		::cpp::Pointer< SDL_RWops > tmp26 = _handle;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(154)
		bool tmp27 = _is_stream;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(154)
		Dynamic tmp28 = ::snow::core::native::audio::WAV_obj::read_chunk(tmp25,tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(154)
		Dynamic _chunk = tmp28;		HX_STACK_VAR(_chunk,"_chunk");
		HX_STACK_LINE(156)
		::String tmp29 = _chunk->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(156)
		::String tmp30 = ::snow::core::native::audio::WAV_obj::ID_FMT;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(156)
		bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(156)
		if ((tmp31)){
			HX_STACK_LINE(157)
			_found_format = true;
			HX_STACK_LINE(167)
			Array< unsigned char > tmp32 = ((::snow::api::buffers::ArrayBufferView)(_chunk->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )))->buffer;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(167)
			::haxe::io::Bytes tmp33 = ::haxe::io::Bytes_obj::ofData(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(167)
			::haxe::io::Bytes _format = tmp33;		HX_STACK_VAR(_format,"_format");
			HX_STACK_LINE(168)
			int tmp34 = _format->b->__get((int)8);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(168)
			int tmp35 = (int)9;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(168)
			int tmp36 = _format->b->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(168)
			int tmp37 = (int(tmp36) << int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(168)
			int tmp38 = (int(tmp34) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(168)
			int tmp39 = (int)10;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(168)
			int tmp40 = _format->b->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(168)
			int tmp41 = (int(tmp40) << int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(168)
			int tmp42 = (int(tmp38) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(168)
			int tmp43 = (int)11;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(168)
			int tmp44 = _format->b->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(168)
			int tmp45 = (int(tmp44) << int((int)24));		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(168)
			int tmp46 = (int(tmp42) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(168)
			int _bitrate = tmp46;		HX_STACK_VAR(_bitrate,"_bitrate");
			HX_STACK_LINE(169)
			int tmp47 = _format->b->__get((int)14);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(169)
			int tmp48 = (int)15;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(169)
			int tmp49 = _format->b->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(169)
			int tmp50 = (int(tmp49) << int((int)8));		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(169)
			int tmp51 = (int(tmp47) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(169)
			int _bits_per_sample = tmp51;		HX_STACK_VAR(_bits_per_sample,"_bits_per_sample");
			HX_STACK_LINE(170)
			int tmp52 = _format->b->__get((int)2);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(170)
			int tmp53 = (int)3;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(170)
			int tmp54 = _format->b->__get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(170)
			int tmp55 = (int(tmp54) << int((int)8));		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(170)
			int tmp56 = (int(tmp52) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(170)
			_info->channels = tmp56;
			HX_STACK_LINE(171)
			int tmp57 = _format->b->__get((int)4);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(171)
			int tmp58 = (int)5;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(171)
			int tmp59 = _format->b->__get(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(171)
			int tmp60 = (int(tmp59) << int((int)8));		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(171)
			int tmp61 = (int(tmp57) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(171)
			int tmp62 = (int)6;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(171)
			int tmp63 = _format->b->__get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(171)
			int tmp64 = (int(tmp63) << int((int)16));		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(171)
			int tmp65 = (int(tmp61) | int(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(171)
			int tmp66 = (int)7;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(171)
			int tmp67 = _format->b->__get(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(171)
			int tmp68 = (int(tmp67) << int((int)24));		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(171)
			int tmp69 = (int(tmp65) | int(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(171)
			_info->rate = tmp69;
			HX_STACK_LINE(172)
			_format = null();
		}
		HX_STACK_LINE(175)
		::String tmp32 = _chunk->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(175)
		::String tmp33 = ::snow::core::native::audio::WAV_obj::ID_DATA;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(175)
		bool tmp34 = (tmp32 == tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(175)
		if ((tmp34)){
			HX_STACK_LINE(176)
			_found_data = true;
			HX_STACK_LINE(177)
			_info->samples = _chunk->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic );
			HX_STACK_LINE(178)
			_info->length = _chunk->__Field(HX_HCSTRING("data_length","\x9b","\xc9","\x18","\x82"), hx::paccDynamic );
			HX_STACK_LINE(179)
			_info->data_offset = _chunk->__Field(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"), hx::paccDynamic );
		}
		HX_STACK_LINE(182)
		_chunk->__FieldRef(HX_HCSTRING("data","\x2a","\x56","\x63","\x42")) = null();
		HX_STACK_LINE(183)
		_chunk = null();
		HX_STACK_LINE(185)
		++(_limit);
		HX_STACK_LINE(187)
		bool tmp35 = (_limit >= (int)32);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(187)
		if ((tmp35)){
			HX_STACK_LINE(187)
			break;
		}
	}
	HX_STACK_LINE(191)
	::snow::core::native::audio::AudioDataWAV tmp19 = _info;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(191)
	return tmp19;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(WAV_obj,from_file_handle,return )

Dynamic WAV_obj::read_chunk( ::snow::Snow app,::cpp::Pointer< SDL_RWops > _handle,bool _is_stream){
	HX_STACK_FRAME("snow.core.native.audio.WAV","read_chunk",0x404d5731,"snow.core.native.audio.WAV.read_chunk","snow/core/native/audio/AudioDataWAV.hx",195,0xe0c91f25)
	HX_STACK_ARG(app,"app")
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_ARG(_is_stream,"_is_stream")
	HX_STACK_LINE(197)
	int _header_size = (int)8;		HX_STACK_VAR(_header_size,"_header_size");
	HX_STACK_LINE(198)
	::snow::api::buffers::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	{
		HX_STACK_LINE(198)
		::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(198)
		::snow::api::buffers::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		{
			HX_STACK_LINE(198)
			int _elements = _header_size;		HX_STACK_VAR(_elements,"_elements");
			HX_STACK_LINE(198)
			bool tmp2 = (_elements < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(198)
			if ((tmp2)){
				HX_STACK_LINE(198)
				_elements = (int)0;
			}
			HX_STACK_LINE(198)
			::snow::api::buffers::ArrayBufferView tmp3 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(198)
			::snow::api::buffers::ArrayBufferView _view = tmp3;		HX_STACK_VAR(_view,"_view");
			HX_STACK_LINE(198)
			int tmp4 = (_elements * _view->bytesPerElement);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(198)
			int _bytelen = tmp4;		HX_STACK_VAR(_bytelen,"_bytelen");
			HX_STACK_LINE(198)
			_view->byteOffset = (int)0;
			HX_STACK_LINE(198)
			_view->byteLength = _bytelen;
			HX_STACK_LINE(198)
			Array< unsigned char > tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(198)
			{
				HX_STACK_LINE(198)
				Array< unsigned char > this2;		HX_STACK_VAR(this2,"this2");
				HX_STACK_LINE(198)
				this2 = Array_obj< unsigned char >::__new();
				HX_STACK_LINE(198)
				bool tmp6 = (_bytelen > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(198)
				if ((tmp6)){
					HX_STACK_LINE(198)
					int tmp7 = (_bytelen - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(198)
					this2[tmp7] = (int)0;
				}
				HX_STACK_LINE(198)
				tmp5 = this2;
			}
			HX_STACK_LINE(198)
			_view->buffer = tmp5;
			HX_STACK_LINE(198)
			_view->length = _elements;
			HX_STACK_LINE(198)
			tmp1 = _view;
		}
		HX_STACK_LINE(198)
		this1 = tmp1;
		HX_STACK_LINE(198)
		tmp = this1;
	}
	HX_STACK_LINE(198)
	::snow::api::buffers::ArrayBufferView _header = tmp;		HX_STACK_VAR(_header,"_header");
	HX_STACK_LINE(200)
	::snow::modules::sdl::IO tmp1 = app->io->module;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(200)
	::cpp::Pointer< SDL_RWops > tmp2 = _handle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(200)
	::snow::api::buffers::ArrayBufferView tmp3 = _header;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(200)
	int tmp4 = _header_size;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(200)
	tmp1->file_read(tmp2,tmp3,tmp4,(int)1);
	HX_STACK_LINE(202)
	Array< unsigned char > tmp5 = _header->buffer;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(202)
	::haxe::io::Bytes tmp6 = ::haxe::io::Bytes_obj::ofData(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(202)
	::haxe::io::Bytes _header_bytes = tmp6;		HX_STACK_VAR(_header_bytes,"_header_bytes");
	HX_STACK_LINE(203)
	::String tmp7 = _header_bytes->getString((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(203)
	::String _chunk_id = tmp7;		HX_STACK_VAR(_chunk_id,"_chunk_id");
	HX_STACK_LINE(204)
	int tmp8 = _header_bytes->b->__get((int)4);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(204)
	int tmp9 = (int)5;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(204)
	int tmp10 = _header_bytes->b->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(204)
	int tmp11 = (int(tmp10) << int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(204)
	int tmp12 = (int(tmp8) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(204)
	int tmp13 = (int)6;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(204)
	int tmp14 = _header_bytes->b->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(204)
	int tmp15 = (int(tmp14) << int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(204)
	int tmp16 = (int(tmp12) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(204)
	int tmp17 = (int)7;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(204)
	int tmp18 = _header_bytes->b->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(204)
	int tmp19 = (int(tmp18) << int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(204)
	int tmp20 = (int(tmp16) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(204)
	int _chunk_size = tmp20;		HX_STACK_VAR(_chunk_size,"_chunk_size");
	HX_STACK_LINE(206)
	_header = null();
	HX_STACK_LINE(207)
	_header_bytes = null();
	HX_STACK_LINE(209)
	::snow::api::buffers::ArrayBufferView _data = null();		HX_STACK_VAR(_data,"_data");
	HX_STACK_LINE(210)
	::snow::modules::sdl::IO tmp21 = app->io->module;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(210)
	::cpp::Pointer< SDL_RWops > tmp22 = _handle;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(210)
	int tmp23 = tmp21->file_tell(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(210)
	int _pos = tmp23;		HX_STACK_VAR(_pos,"_pos");
	HX_STACK_LINE(214)
	::String tmp24 = _chunk_id;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(214)
	::String tmp25 = ::snow::core::native::audio::WAV_obj::ID_DATA;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(214)
	bool tmp26 = (tmp24 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(214)
	bool _is_data = tmp26;		HX_STACK_VAR(_is_data,"_is_data");
	HX_STACK_LINE(215)
	::String tmp27 = _chunk_id;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(215)
	::String tmp28 = ::snow::core::native::audio::WAV_obj::ID_FMT;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(215)
	bool tmp29 = (tmp27 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(215)
	bool _is_fmt = tmp29;		HX_STACK_VAR(_is_fmt,"_is_fmt");
	HX_STACK_LINE(216)
	bool tmp30 = _is_data;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(216)
	bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(216)
	bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(216)
	if ((tmp31)){
		HX_STACK_LINE(216)
		tmp32 = _is_fmt;
	}
	else{
		HX_STACK_LINE(216)
		tmp32 = true;
	}
	HX_STACK_LINE(216)
	bool _should_read = tmp32;		HX_STACK_VAR(_should_read,"_should_read");
	HX_STACK_LINE(219)
	bool tmp33 = _is_data;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(219)
	bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(219)
	if ((tmp33)){
		HX_STACK_LINE(219)
		tmp34 = _is_stream;
	}
	else{
		HX_STACK_LINE(219)
		tmp34 = false;
	}
	HX_STACK_LINE(219)
	if ((tmp34)){
		HX_STACK_LINE(220)
		_should_read = false;
	}
	HX_STACK_LINE(223)
	bool tmp35 = _should_read;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(223)
	if ((tmp35)){
		HX_STACK_LINE(224)
		::snow::api::buffers::ArrayBufferView tmp36;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(224)
		{
			HX_STACK_LINE(224)
			::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(224)
			::snow::api::buffers::ArrayBufferView tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				int _elements = _chunk_size;		HX_STACK_VAR(_elements,"_elements");
				HX_STACK_LINE(224)
				bool tmp38 = (_elements < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(224)
				if ((tmp38)){
					HX_STACK_LINE(224)
					_elements = (int)0;
				}
				HX_STACK_LINE(224)
				::snow::api::buffers::ArrayBufferView tmp39 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(224)
				::snow::api::buffers::ArrayBufferView _view = tmp39;		HX_STACK_VAR(_view,"_view");
				HX_STACK_LINE(224)
				int tmp40 = (_elements * _view->bytesPerElement);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(224)
				int _bytelen = tmp40;		HX_STACK_VAR(_bytelen,"_bytelen");
				HX_STACK_LINE(224)
				_view->byteOffset = (int)0;
				HX_STACK_LINE(224)
				_view->byteLength = _bytelen;
				HX_STACK_LINE(224)
				Array< unsigned char > tmp41;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					Array< unsigned char > this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(224)
					this2 = Array_obj< unsigned char >::__new();
					HX_STACK_LINE(224)
					bool tmp42 = (_bytelen > (int)0);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(224)
					if ((tmp42)){
						HX_STACK_LINE(224)
						int tmp43 = (_bytelen - (int)1);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(224)
						this2[tmp43] = (int)0;
					}
					HX_STACK_LINE(224)
					tmp41 = this2;
				}
				HX_STACK_LINE(224)
				_view->buffer = tmp41;
				HX_STACK_LINE(224)
				_view->length = _elements;
				HX_STACK_LINE(224)
				tmp37 = _view;
			}
			HX_STACK_LINE(224)
			this1 = tmp37;
			HX_STACK_LINE(224)
			tmp36 = this1;
		}
		HX_STACK_LINE(224)
		_data = tmp36;
		HX_STACK_LINE(225)
		::snow::modules::sdl::IO tmp37 = app->io->module;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(225)
		::cpp::Pointer< SDL_RWops > tmp38 = _handle;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(225)
		::snow::api::buffers::ArrayBufferView tmp39 = _data;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(225)
		int tmp40 = _chunk_size;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(225)
		tmp37->file_read(tmp38,tmp39,tmp40,(int)1);
	}
	else{
		HX_STACK_LINE(227)
		::snow::modules::sdl::IO tmp36 = app->io->module;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(227)
		::cpp::Pointer< SDL_RWops > tmp37 = _handle;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(227)
		int tmp38 = (_pos + _header_size);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(227)
		int tmp39 = _chunk_size;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(227)
		int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(227)
		tmp36->file_seek(tmp37,tmp40,(int)0);
	}
	struct _Function_1_1{
		inline static Dynamic Block( int &_chunk_size,::snow::api::buffers::ArrayBufferView &_data,::String &_chunk_id,int &_pos){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/core/native/audio/AudioDataWAV.hx",230,0xe0c91f25)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , _chunk_id,false);
				__result->Add(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60") , _pos,false);
				__result->Add(HX_HCSTRING("data","\x2a","\x56","\x63","\x42") , _data,false);
				__result->Add(HX_HCSTRING("data_length","\x9b","\xc9","\x18","\x82") , _chunk_size,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(230)
	Dynamic tmp36 = _Function_1_1::Block(_chunk_size,_data,_chunk_id,_pos);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(230)
	return tmp36;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(WAV_obj,read_chunk,return )


WAV_obj::WAV_obj()
{
}

bool WAV_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ID_FMT") ) { outValue = ID_FMT; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ID_DATA") ) { outValue = ID_DATA; return true;  }
		if (HX_FIELD_EQ(inName,"ID_WAVE") ) { outValue = ID_WAVE; return true;  }
		if (HX_FIELD_EQ(inName,"ID_RIFF") ) { outValue = ID_RIFF; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"from_file") ) { outValue = from_file_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"from_bytes") ) { outValue = from_bytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"read_chunk") ) { outValue = read_chunk_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"from_file_handle") ) { outValue = from_file_handle_dyn(); return true;  }
	}
	return false;
}

bool WAV_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ID_FMT") ) { ID_FMT=ioValue.Cast< ::String >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ID_DATA") ) { ID_DATA=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"ID_WAVE") ) { ID_WAVE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"ID_RIFF") ) { ID_RIFF=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &WAV_obj::ID_DATA,HX_HCSTRING("ID_DATA","\x4e","\xa0","\x18","\xec")},
	{hx::fsString,(void *) &WAV_obj::ID_FMT,HX_HCSTRING("ID_FMT","\x89","\x6f","\x4d","\x96")},
	{hx::fsString,(void *) &WAV_obj::ID_WAVE,HX_HCSTRING("ID_WAVE","\xdd","\xaf","\xa7","\xf8")},
	{hx::fsString,(void *) &WAV_obj::ID_RIFF,HX_HCSTRING("ID_RIFF","\xdb","\xa2","\x5f","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WAV_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WAV_obj::ID_DATA,"ID_DATA");
	HX_MARK_MEMBER_NAME(WAV_obj::ID_FMT,"ID_FMT");
	HX_MARK_MEMBER_NAME(WAV_obj::ID_WAVE,"ID_WAVE");
	HX_MARK_MEMBER_NAME(WAV_obj::ID_RIFF,"ID_RIFF");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WAV_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WAV_obj::ID_DATA,"ID_DATA");
	HX_VISIT_MEMBER_NAME(WAV_obj::ID_FMT,"ID_FMT");
	HX_VISIT_MEMBER_NAME(WAV_obj::ID_WAVE,"ID_WAVE");
	HX_VISIT_MEMBER_NAME(WAV_obj::ID_RIFF,"ID_RIFF");
};

#endif

hx::Class WAV_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("from_file","\xb1","\x64","\x28","\x18"),
	HX_HCSTRING("from_bytes","\x96","\xe0","\x2e","\xc8"),
	HX_HCSTRING("ID_DATA","\x4e","\xa0","\x18","\xec"),
	HX_HCSTRING("ID_FMT","\x89","\x6f","\x4d","\x96"),
	HX_HCSTRING("ID_WAVE","\xdd","\xaf","\xa7","\xf8"),
	HX_HCSTRING("ID_RIFF","\xdb","\xa2","\x5f","\xf5"),
	HX_HCSTRING("from_file_handle","\xb6","\x98","\xc1","\x23"),
	HX_HCSTRING("read_chunk","\x84","\x7d","\x91","\x06"),
	::String(null()) };

void WAV_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.core.native.audio.WAV","\xa1","\x7d","\xe6","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WAV_obj::__GetStatic;
	__mClass->mSetStaticField = &WAV_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< WAV_obj >;
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

void WAV_obj::__boot()
{
	ID_DATA= HX_HCSTRING("data","\x2a","\x56","\x63","\x42");
	ID_FMT= HX_HCSTRING("fmt ","\x33","\xde","\xbe","\x43");
	ID_WAVE= HX_HCSTRING("WAVE","\xb9","\x2d","\xb3","\x39");
	ID_RIFF= HX_HCSTRING("RIFF","\xb7","\x20","\x6b","\x36");
}

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace audio
