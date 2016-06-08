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
#ifndef INCLUDED_snow_core_native_audio_NativeAudioData
#include <snow/core/native/audio/NativeAudioData.h>
#endif
#ifndef INCLUDED_snow_core_native_audio_OGG
#include <snow/core/native/audio/OGG.h>
#endif
#ifndef INCLUDED_snow_core_native_audio_PCM
#include <snow/core/native/audio/PCM.h>
#endif
#ifndef INCLUDED_snow_core_native_audio_WAV
#include <snow/core/native/audio/WAV.h>
#endif
#ifndef INCLUDED_snow_types_AudioData
#include <snow/types/AudioData.h>
#endif
#ifndef INCLUDED_snow_types_Error
#include <snow/types/Error.h>
#endif
namespace snow{
namespace core{
namespace native{
namespace audio{

Void NativeAudioData_obj::__construct()
{
	return null();
}

//NativeAudioData_obj::~NativeAudioData_obj() { }

Dynamic NativeAudioData_obj::__CreateEmpty() { return  new NativeAudioData_obj; }
hx::ObjectPtr< NativeAudioData_obj > NativeAudioData_obj::__new()
{  hx::ObjectPtr< NativeAudioData_obj > _result_ = new NativeAudioData_obj();
	_result_->__construct();
	return _result_;}

Dynamic NativeAudioData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeAudioData_obj > _result_ = new NativeAudioData_obj();
	_result_->__construct();
	return _result_;}

::snow::api::Promise NativeAudioData_obj::data_from_load( ::snow::Snow app,::String _path,Dynamic __o__is_stream,Dynamic _format){
Dynamic _is_stream = __o__is_stream.Default(false);
	HX_STACK_FRAME("snow.core.native.audio.NativeAudioData","data_from_load",0xc78e8fb6,"snow.core.native.audio.NativeAudioData.data_from_load","snow/core/native/audio/NativeAudioData.hx",21,0x07c946e2)
	HX_STACK_ARG(app,"app")
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_is_stream,"_is_stream")
	HX_STACK_ARG(_format,"_format")
{
		HX_STACK_LINE(23)
		{
			HX_STACK_LINE(23)
			bool tmp = (_path == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(23)
			if ((tmp)){
				HX_STACK_LINE(23)
				::String tmp1 = HX_HCSTRING("_path was null","\xfa","\x86","\x48","\x96");		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(23)
				::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(23)
				HX_STACK_DO_THROW(tmp2);
			}
		}
		HX_STACK_LINE(25)
		bool tmp = (_format == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		if ((tmp)){
			HX_STACK_LINE(25)
			Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(25)
			{
				HX_STACK_LINE(25)
				::String tmp2 = _path;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(25)
				::String tmp3 = ::haxe::io::Path_obj::extension(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(25)
				::String _ext = tmp3;		HX_STACK_VAR(_ext,"_ext");
				HX_STACK_LINE(25)
				::String tmp4 = _ext;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(25)
				::String _switch_1 = (tmp4);
				if (  ( _switch_1==HX_HCSTRING("wav","\x2c","\xa1","\x5a","\x00"))){
					HX_STACK_LINE(25)
					tmp1 = ((Dynamic)((int)3));
				}
				else if (  ( _switch_1==HX_HCSTRING("ogg","\x4f","\x94","\x54","\x00"))){
					HX_STACK_LINE(25)
					tmp1 = ((Dynamic)((int)2));
				}
				else if (  ( _switch_1==HX_HCSTRING("pcm","\x1a","\x53","\x55","\x00"))){
					HX_STACK_LINE(25)
					tmp1 = ((Dynamic)((int)4));
				}
				else  {
					HX_STACK_LINE(25)
					tmp1 = ((Dynamic)((int)0));
				}
;
;
			}
			HX_STACK_LINE(25)
			_format = tmp1;
		}

		HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_1_1,::snow::Snow,app,::String,_path,Dynamic,_format,Dynamic,_is_stream)
		int __ArgCount() const { return 2; }
		Void run(Dynamic resolve,Dynamic reject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/core/native/audio/NativeAudioData.hx",27,0x07c946e2)
			HX_STACK_ARG(resolve,"resolve")
			HX_STACK_ARG(reject,"reject")
			{
				HX_STACK_LINE(29)
				::snow::Snow tmp1 = app;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(29)
				::String tmp2 = _path;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(29)
				Dynamic tmp3 = _is_stream;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(29)
				Dynamic tmp4 = _format;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(29)
				::snow::types::AudioData tmp5 = ::snow::core::native::audio::NativeAudioData_obj::data_from_load_direct(tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(29)
				::snow::types::AudioData _audio = tmp5;		HX_STACK_VAR(_audio,"_audio");
				HX_STACK_LINE(31)
				bool tmp6 = (_audio == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(31)
				if ((tmp6)){
					HX_STACK_LINE(32)
					::String tmp7 = (HX_HCSTRING("failed to load `","\xc8","\x23","\xec","\x54") + _path);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(32)
					::String tmp8 = (tmp7 + HX_HCSTRING("` as `","\x72","\x45","\x8a","\x0f"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(32)
					bool tmp9 = (_format != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(32)
					::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(32)
					if ((tmp9)){
						HX_STACK_LINE(32)
						Dynamic tmp11 = _format;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(32)
						switch( (int)(tmp11)){
							case (int)0: {
								HX_STACK_LINE(32)
								tmp10 = HX_HCSTRING("af_unknown","\xf0","\xbe","\x9a","\x03");
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(32)
								tmp10 = HX_HCSTRING("af_custom","\x0b","\xdb","\x9b","\x65");
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(32)
								tmp10 = HX_HCSTRING("af_ogg","\xb5","\x04","\x9d","\xc2");
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(32)
								tmp10 = HX_HCSTRING("af_wav","\x92","\x11","\xa3","\xc2");
							}
							;break;
							case (int)4: {
								HX_STACK_LINE(32)
								tmp10 = HX_HCSTRING("af_pcm","\x80","\xc3","\x9d","\xc2");
							}
							;break;
							default: {
								HX_STACK_LINE(32)
								tmp10 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _format);
							}
						}
					}
					else{
						HX_STACK_LINE(32)
						tmp10 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _format);
					}
					HX_STACK_LINE(32)
					::String tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(32)
					::String tmp12 = (tmp11 + HX_HCSTRING("` audio.","\x58","\xe6","\x82","\x0e"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(32)
					::snow::types::Error tmp13 = ::snow::types::Error_obj::error(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(32)
					reject(tmp13);
				}
				else{
					HX_STACK_LINE(34)
					::snow::types::AudioData tmp7 = _audio;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(34)
					resolve(tmp7);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(27)
		::snow::api::Promise tmp1 = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(app,_path,_format,_is_stream)));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeAudioData_obj,data_from_load,return )

::snow::api::Promise NativeAudioData_obj::data_from_bytes( ::snow::Snow app,::String _id,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format){
	HX_STACK_FRAME("snow.core.native.audio.NativeAudioData","data_from_bytes",0x19d7f0db,"snow.core.native.audio.NativeAudioData.data_from_bytes","snow/core/native/audio/NativeAudioData.hx",42,0x07c946e2)
	HX_STACK_ARG(app,"app")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_ARG(_format,"_format")
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		bool tmp = (_id == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		if ((tmp)){
			HX_STACK_LINE(44)
			::String tmp1 = HX_HCSTRING("_id was null","\xc4","\x57","\x88","\xc5");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(44)
			::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(44)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		bool tmp = (_bytes == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		if ((tmp)){
			HX_STACK_LINE(45)
			::String tmp1 = HX_HCSTRING("_bytes was null","\xd2","\x33","\xd5","\x32");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(45)
			::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(45)
			HX_STACK_DO_THROW(tmp2);
		}
	}

	HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_1_1,::snow::Snow,app,::String,_id,Dynamic,_format,::snow::api::buffers::ArrayBufferView,_bytes)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/core/native/audio/NativeAudioData.hx",47,0x07c946e2)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(49)
			::snow::Snow tmp = app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(49)
			::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(49)
			::snow::api::buffers::ArrayBufferView tmp2 = _bytes;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(49)
			Dynamic tmp3 = _format;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(49)
			::snow::types::AudioData tmp4 = ::snow::core::native::audio::NativeAudioData_obj::data_from_bytes_direct(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(49)
			::snow::types::AudioData _audio = tmp4;		HX_STACK_VAR(_audio,"_audio");
			HX_STACK_LINE(51)
			bool tmp5 = (_audio == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			if ((tmp5)){
				HX_STACK_LINE(52)
				::String tmp6 = (HX_HCSTRING("failed to load `","\xc8","\x23","\xec","\x54") + _id);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(52)
				::String tmp7 = (tmp6 + HX_HCSTRING("` from bytes as ","\x43","\x9a","\xda","\xab"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(52)
				bool tmp8 = (_format != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(52)
				::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(52)
				if ((tmp8)){
					HX_STACK_LINE(52)
					Dynamic tmp10 = _format;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(52)
					switch( (int)(tmp10)){
						case (int)0: {
							HX_STACK_LINE(52)
							tmp9 = HX_HCSTRING("af_unknown","\xf0","\xbe","\x9a","\x03");
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(52)
							tmp9 = HX_HCSTRING("af_custom","\x0b","\xdb","\x9b","\x65");
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(52)
							tmp9 = HX_HCSTRING("af_ogg","\xb5","\x04","\x9d","\xc2");
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(52)
							tmp9 = HX_HCSTRING("af_wav","\x92","\x11","\xa3","\xc2");
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(52)
							tmp9 = HX_HCSTRING("af_pcm","\x80","\xc3","\x9d","\xc2");
						}
						;break;
						default: {
							HX_STACK_LINE(52)
							tmp9 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _format);
						}
					}
				}
				else{
					HX_STACK_LINE(52)
					tmp9 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _format);
				}
				HX_STACK_LINE(52)
				::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(52)
				::String tmp11 = (tmp10 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(52)
				::snow::types::Error tmp12 = ::snow::types::Error_obj::error(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(52)
				reject(tmp12);
			}
			else{
				HX_STACK_LINE(54)
				::snow::types::AudioData tmp6 = _audio;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				resolve(tmp6);
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(47)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(app,_id,_format,_bytes)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeAudioData_obj,data_from_bytes,return )

::snow::types::AudioData NativeAudioData_obj::data_from_load_direct( ::snow::Snow app,::String _path,Dynamic __o__is_stream,Dynamic _format){
Dynamic _is_stream = __o__is_stream.Default(false);
	HX_STACK_FRAME("snow.core.native.audio.NativeAudioData","data_from_load_direct",0x68afcfd2,"snow.core.native.audio.NativeAudioData.data_from_load_direct","snow/core/native/audio/NativeAudioData.hx",64,0x07c946e2)
	HX_STACK_ARG(app,"app")
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_is_stream,"_is_stream")
	HX_STACK_ARG(_format,"_format")
{
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			bool tmp = (_path == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(66)
			if ((tmp)){
				HX_STACK_LINE(66)
				::String tmp1 = HX_HCSTRING("_path was null","\xfa","\x86","\x48","\x96");		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(66)
				::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(66)
				HX_STACK_DO_THROW(tmp2);
			}
		}
		HX_STACK_LINE(68)
		bool tmp = (_format == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		if ((tmp)){
			HX_STACK_LINE(68)
			Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(68)
			{
				HX_STACK_LINE(68)
				::String tmp2 = _path;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(68)
				::String tmp3 = ::haxe::io::Path_obj::extension(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(68)
				::String _ext = tmp3;		HX_STACK_VAR(_ext,"_ext");
				HX_STACK_LINE(68)
				::String tmp4 = _ext;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(68)
				::String _switch_2 = (tmp4);
				if (  ( _switch_2==HX_HCSTRING("wav","\x2c","\xa1","\x5a","\x00"))){
					HX_STACK_LINE(68)
					tmp1 = ((Dynamic)((int)3));
				}
				else if (  ( _switch_2==HX_HCSTRING("ogg","\x4f","\x94","\x54","\x00"))){
					HX_STACK_LINE(68)
					tmp1 = ((Dynamic)((int)2));
				}
				else if (  ( _switch_2==HX_HCSTRING("pcm","\x1a","\x53","\x55","\x00"))){
					HX_STACK_LINE(68)
					tmp1 = ((Dynamic)((int)4));
				}
				else  {
					HX_STACK_LINE(68)
					tmp1 = ((Dynamic)((int)0));
				}
;
;
			}
			HX_STACK_LINE(68)
			_format = tmp1;
		}
		HX_STACK_LINE(70)
		bool tmp1 = (_format != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		::snow::types::AudioData tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		if ((tmp1)){
			HX_STACK_LINE(70)
			Dynamic tmp3 = _format;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(70)
			switch( (int)(tmp3)){
				case (int)3: {
					HX_STACK_LINE(71)
					::snow::Snow tmp4 = app;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(71)
					::String tmp5 = _path;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(71)
					Dynamic tmp6 = _is_stream;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(71)
					tmp2 = ::snow::core::native::audio::WAV_obj::from_file(tmp4,tmp5,tmp6);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(72)
					::snow::Snow tmp4 = app;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(72)
					::String tmp5 = _path;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(72)
					Dynamic tmp6 = _is_stream;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(72)
					tmp2 = ::snow::core::native::audio::OGG_obj::from_file(tmp4,tmp5,tmp6);
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(73)
					::snow::Snow tmp4 = app;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(73)
					::String tmp5 = _path;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(73)
					Dynamic tmp6 = _is_stream;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(73)
					tmp2 = ::snow::core::native::audio::PCM_obj::from_file(tmp4,tmp5,tmp6);
				}
				;break;
				default: {
					HX_STACK_LINE(74)
					tmp2 = null();
				}
			}
		}
		else{
			HX_STACK_LINE(74)
			tmp2 = null();
		}
		HX_STACK_LINE(70)
		::snow::types::AudioData _info = tmp2;		HX_STACK_VAR(_info,"_info");
		HX_STACK_LINE(77)
		::snow::types::AudioData tmp3 = _info;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeAudioData_obj,data_from_load_direct,return )

::snow::types::AudioData NativeAudioData_obj::data_from_bytes_direct( ::snow::Snow app,::String _id,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format){
	HX_STACK_FRAME("snow.core.native.audio.NativeAudioData","data_from_bytes_direct",0x430f0d4d,"snow.core.native.audio.NativeAudioData.data_from_bytes_direct","snow/core/native/audio/NativeAudioData.hx",82,0x07c946e2)
	HX_STACK_ARG(app,"app")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_ARG(_format,"_format")
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		bool tmp = (_id == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		if ((tmp)){
			HX_STACK_LINE(84)
			::String tmp1 = HX_HCSTRING("_id was null","\xc4","\x57","\x88","\xc5");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(84)
			::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(85)
	{
		HX_STACK_LINE(85)
		bool tmp = (_bytes == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		if ((tmp)){
			HX_STACK_LINE(85)
			::String tmp1 = HX_HCSTRING("_bytes was null","\xd2","\x33","\xd5","\x32");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(85)
			::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(85)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(87)
	bool tmp = (_format == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	if ((tmp)){
		HX_STACK_LINE(87)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			::String tmp2 = _id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(87)
			::String tmp3 = ::haxe::io::Path_obj::extension(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(87)
			::String _ext = tmp3;		HX_STACK_VAR(_ext,"_ext");
			HX_STACK_LINE(87)
			::String tmp4 = _ext;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(87)
			::String _switch_3 = (tmp4);
			if (  ( _switch_3==HX_HCSTRING("wav","\x2c","\xa1","\x5a","\x00"))){
				HX_STACK_LINE(87)
				tmp1 = ((Dynamic)((int)3));
			}
			else if (  ( _switch_3==HX_HCSTRING("ogg","\x4f","\x94","\x54","\x00"))){
				HX_STACK_LINE(87)
				tmp1 = ((Dynamic)((int)2));
			}
			else if (  ( _switch_3==HX_HCSTRING("pcm","\x1a","\x53","\x55","\x00"))){
				HX_STACK_LINE(87)
				tmp1 = ((Dynamic)((int)4));
			}
			else  {
				HX_STACK_LINE(87)
				tmp1 = ((Dynamic)((int)0));
			}
;
;
		}
		HX_STACK_LINE(87)
		_format = tmp1;
	}
	HX_STACK_LINE(89)
	bool tmp1 = (_format != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	::snow::types::AudioData tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	if ((tmp1)){
		HX_STACK_LINE(89)
		Dynamic tmp3 = _format;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		switch( (int)(tmp3)){
			case (int)3: {
				HX_STACK_LINE(90)
				::snow::Snow tmp4 = app;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(90)
				::String tmp5 = _id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(90)
				::snow::api::buffers::ArrayBufferView tmp6 = _bytes;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(90)
				tmp2 = ::snow::core::native::audio::WAV_obj::from_bytes(tmp4,tmp5,tmp6);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(91)
				::snow::Snow tmp4 = app;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(91)
				::String tmp5 = _id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(91)
				::snow::api::buffers::ArrayBufferView tmp6 = _bytes;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(91)
				tmp2 = ::snow::core::native::audio::OGG_obj::from_bytes(tmp4,tmp5,tmp6);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(92)
				::snow::Snow tmp4 = app;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(92)
				::String tmp5 = _id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(92)
				::snow::api::buffers::ArrayBufferView tmp6 = _bytes;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(92)
				tmp2 = ::snow::core::native::audio::PCM_obj::from_bytes(tmp4,tmp5,tmp6);
			}
			;break;
			default: {
				HX_STACK_LINE(93)
				tmp2 = null();
			}
		}
	}
	else{
		HX_STACK_LINE(93)
		tmp2 = null();
	}
	HX_STACK_LINE(89)
	::snow::types::AudioData _info = tmp2;		HX_STACK_VAR(_info,"_info");
	HX_STACK_LINE(96)
	::snow::types::AudioData tmp3 = _info;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(96)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeAudioData_obj,data_from_bytes_direct,return )


NativeAudioData_obj::NativeAudioData_obj()
{
}

bool NativeAudioData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"data_from_load") ) { outValue = data_from_load_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"data_from_bytes") ) { outValue = data_from_bytes_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"data_from_load_direct") ) { outValue = data_from_load_direct_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"data_from_bytes_direct") ) { outValue = data_from_bytes_direct_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeAudioData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeAudioData_obj::__mClass,"__mClass");
};

#endif

hx::Class NativeAudioData_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("data_from_load","\xc6","\x1a","\x6f","\x90"),
	HX_HCSTRING("data_from_bytes","\xcb","\x13","\x71","\x15"),
	HX_HCSTRING("data_from_load_direct","\xc2","\xc6","\xed","\x72"),
	HX_HCSTRING("data_from_bytes_direct","\x5d","\x28","\x09","\x2f"),
	::String(null()) };

void NativeAudioData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.core.native.audio.NativeAudioData","\x7e","\x1d","\xf4","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeAudioData_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< NativeAudioData_obj >;
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
} // end namespace core
} // end namespace native
} // end namespace audio
