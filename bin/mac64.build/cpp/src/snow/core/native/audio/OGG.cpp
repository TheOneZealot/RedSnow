#include <hxcpp.h>

#include "hxMath.h"
#include "linc_ogg.h"
#include "linc_sdl.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_ogg__Ogg_Ogg_helper
#include <ogg/_Ogg/Ogg_helper.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
#endif
#ifndef INCLUDED_snow_core_native_audio_AudioDataOGG
#include <snow/core/native/audio/AudioDataOGG.h>
#endif
#ifndef INCLUDED_snow_core_native_audio_OGG
#include <snow/core/native/audio/OGG.h>
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

Void OGG_obj::__construct()
{
	return null();
}

//OGG_obj::~OGG_obj() { }

Dynamic OGG_obj::__CreateEmpty() { return  new OGG_obj; }
hx::ObjectPtr< OGG_obj > OGG_obj::__new()
{  hx::ObjectPtr< OGG_obj > _result_ = new OGG_obj();
	_result_->__construct();
	return _result_;}

Dynamic OGG_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OGG_obj > _result_ = new OGG_obj();
	_result_->__construct();
	return _result_;}

::snow::types::AudioData OGG_obj::from_file( ::snow::Snow app,::String _path,bool _is_stream){
	HX_STACK_FRAME("snow.core.native.audio.OGG","from_file",0x14a07c87,"snow.core.native.audio.OGG.from_file","snow/core/native/audio/AudioDataOGG.hx",120,0x186b83e2)
	HX_STACK_ARG(app,"app")
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_is_stream,"_is_stream")
	HX_STACK_LINE(124)
	::snow::modules::sdl::IO tmp = app->io->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	::String tmp1 = _path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	::cpp::Pointer< SDL_RWops > tmp2 = tmp->file_handle(tmp1,HX_HCSTRING("rb","\xb0","\x63","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(124)
	::cpp::Pointer< SDL_RWops > _handle = tmp2;		HX_STACK_VAR(_handle,"_handle");
	HX_STACK_LINE(126)
	::snow::Snow tmp3 = app;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(126)
	::cpp::Pointer< SDL_RWops > tmp4 = _handle;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(126)
	::String tmp5 = _path;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(126)
	bool tmp6 = _is_stream;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(126)
	::snow::types::AudioData tmp7 = ::snow::core::native::audio::OGG_obj::from_file_handle(tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(126)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OGG_obj,from_file,return )

::snow::types::AudioData OGG_obj::from_bytes( ::snow::Snow app,::String _path,::snow::api::buffers::ArrayBufferView _bytes){
	HX_STACK_FRAME("snow.core.native.audio.OGG","from_bytes",0xb4cba400,"snow.core.native.audio.OGG.from_bytes","snow/core/native/audio/AudioDataOGG.hx",131,0x186b83e2)
	HX_STACK_ARG(app,"app")
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_LINE(135)
	::snow::modules::sdl::IO tmp = app->io->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	::snow::api::buffers::ArrayBufferView tmp1 = _bytes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(135)
	int tmp2 = _bytes->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(135)
	::cpp::Pointer< SDL_RWops > tmp3 = tmp->file_handle_from_mem(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(135)
	::cpp::Pointer< SDL_RWops > _handle = tmp3;		HX_STACK_VAR(_handle,"_handle");
	HX_STACK_LINE(137)
	::snow::Snow tmp4 = app;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(137)
	::cpp::Pointer< SDL_RWops > tmp5 = _handle;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(137)
	::String tmp6 = _path;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(137)
	::snow::types::AudioData tmp7 = ::snow::core::native::audio::OGG_obj::from_file_handle(tmp4,tmp5,tmp6,false);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(137)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OGG_obj,from_bytes,return )

::snow::types::AudioData OGG_obj::from_file_handle( ::snow::Snow app,::cpp::Pointer< SDL_RWops > _handle,::String _path,bool _is_stream){
	HX_STACK_FRAME("snow.core.native.audio.OGG","from_file_handle",0x7eb5c7a0,"snow.core.native.audio.OGG.from_file_handle","snow/core/native/audio/AudioDataOGG.hx",141,0x186b83e2)
	HX_STACK_ARG(app,"app")
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_is_stream,"_is_stream")
	HX_STACK_LINE(143)
	bool tmp = (_handle == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	if ((tmp)){
		HX_STACK_LINE(143)
		return null();
	}
	HX_STACK_LINE(145)
	::cpp::Pointer< OggVorbis_File > tmp1 = ::cpp::Pointer< OggVorbis_File >(linc::ogg::newOggVorbisFile());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	::cpp::Pointer< OggVorbis_File > _ogg_file = tmp1;		HX_STACK_VAR(_ogg_file,"_ogg_file");
	HX_STACK_LINE(147)
	::snow::Snow tmp2 = app;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(147)
	::cpp::Pointer< SDL_RWops > tmp3 = _handle;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(147)
	::cpp::Pointer< OggVorbis_File > tmp4 = _ogg_file;		HX_STACK_VAR(tmp4,"tmp4");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &_path,bool &_is_stream){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/core/native/audio/AudioDataOGG.hx",147,0x186b83e2)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , _path,false);
				__result->Add(HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6") , _is_stream,false);
				__result->Add(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd") , ((Dynamic)((int)2)),false);
				__result->Add(HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83") , null(),false);
				__result->Add(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f") , (int)0,false);
				__result->Add(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a") , (int)0,false);
				__result->Add(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(147)
	Dynamic tmp5 = _Function_1_1::Block(_path,_is_stream);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(147)
	::snow::core::native::audio::AudioDataOGG tmp6 = ::snow::core::native::audio::AudioDataOGG_obj::__new(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(147)
	::snow::core::native::audio::AudioDataOGG _ogg = tmp6;		HX_STACK_VAR(_ogg,"_ogg");
	HX_STACK_LINE(159)
	::snow::core::native::audio::AudioDataOGG tmp7 = _ogg;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(159)
	::cpp::Pointer< OggVorbis_File > tmp8 = _ogg_file;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(160)
	Dynamic tmp9 = ::snow::core::native::audio::OGG_obj::ogg_read_dyn();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(160)
	Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(161)
	Dynamic tmp11 = ::snow::core::native::audio::OGG_obj::ogg_seek_dyn();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(161)
	Dynamic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(163)
	Dynamic tmp13 = ::snow::core::native::audio::OGG_obj::ogg_tell_dyn();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(163)
	Dynamic tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
	struct _Function_1_2{
		inline static Dynamic Block( Dynamic &tmp10,Dynamic &tmp12,Dynamic &tmp14){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/core/native/audio/AudioDataOGG.hx",159,0x186b83e2)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("read_fn","\xd1","\x5d","\xda","\x02") , tmp10,false);
				__result->Add(HX_HCSTRING("seek_fn","\xef","\xa4","\xaa","\x7e") , tmp12,false);
				__result->Add(HX_HCSTRING("close_fn","\xaf","\xfa","\x4c","\x85") , null(),false);
				__result->Add(HX_HCSTRING("tell_fn","\xd6","\x61","\xb7","\xb0") , tmp14,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(159)
	Dynamic tmp15 = _Function_1_2::Block(tmp10,tmp12,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(159)
	int tmp16 = ::ogg::_Ogg::Ogg_helper_obj::ov_open_callbacks(tmp7,tmp8,null(),(int)0,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(159)
	int _ogg_result = tmp16;		HX_STACK_VAR(_ogg_result,"_ogg_result");
	HX_STACK_LINE(168)
	bool tmp17 = (_ogg_result < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(168)
	if ((tmp17)){
		HX_STACK_LINE(170)
		::snow::modules::sdl::IO tmp18 = app->io->module;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(170)
		::cpp::Pointer< SDL_RWops > tmp19 = _handle;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(170)
		tmp18->file_close(tmp19);
		HX_STACK_LINE(172)
		::String tmp20 = (HX_HCSTRING("/ snow / ogg file failed to open!? / result:","\x2c","\x45","\x6a","\x35") + _ogg_result);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(172)
		::String tmp21 = (tmp20 + HX_HCSTRING(" code: ","\x33","\x21","\xe4","\xf3"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(172)
		int tmp22 = _ogg_result;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(172)
		::String tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(172)
		switch( (int)(tmp22)){
			case (int)-133: {
				HX_STACK_LINE(172)
				tmp23 = HX_HCSTRING("OV_EBADHEADER","\x65","\xf7","\x93","\xe6");
			}
			;break;
			case (int)-137: {
				HX_STACK_LINE(172)
				tmp23 = HX_HCSTRING("OV_EBADLINK","\xd2","\x7b","\x44","\x1f");
			}
			;break;
			case (int)-136: {
				HX_STACK_LINE(172)
				tmp23 = HX_HCSTRING("OV_EBADPACKET","\x60","\x45","\x2c","\xcd");
			}
			;break;
			case (int)-129: {
				HX_STACK_LINE(172)
				tmp23 = HX_HCSTRING("OV_EFAULT","\xb5","\xf0","\xcc","\xcd");
			}
			;break;
			case (int)-130: {
				HX_STACK_LINE(172)
				tmp23 = HX_HCSTRING("OV_EIMPL","\x4d","\xb1","\xcf","\x85");
			}
			;break;
			case (int)-131: {
				HX_STACK_LINE(172)
				tmp23 = HX_HCSTRING("OV_EINVAL","\xef","\x2c","\x99","\x90");
			}
			;break;
			case (int)-138: {
				HX_STACK_LINE(172)
				tmp23 = HX_HCSTRING("OV_ENOSEEK","\xe6","\xe5","\xa4","\x86");
			}
			;break;
			case (int)-135: {
				HX_STACK_LINE(172)
				tmp23 = HX_HCSTRING("OV_ENOTAUDIO","\xd0","\x0f","\x66","\x49");
			}
			;break;
			case (int)-132: {
				HX_STACK_LINE(172)
				tmp23 = HX_HCSTRING("OV_ENOTVORBIS","\xf9","\x86","\x3a","\xea");
			}
			;break;
			case (int)-2: {
				HX_STACK_LINE(172)
				tmp23 = HX_HCSTRING("OV_EOF","\x44","\x4a","\xa7","\x59");
			}
			;break;
			case (int)-128: {
				HX_STACK_LINE(172)
				tmp23 = HX_HCSTRING("OV_EREAD","\xc3","\x7d","\xbc","\x8b");
			}
			;break;
			case (int)-134: {
				HX_STACK_LINE(172)
				tmp23 = HX_HCSTRING("OV_EVERSION","\xab","\xd2","\x9b","\x0c");
			}
			;break;
			case (int)-1: {
				HX_STACK_LINE(172)
				tmp23 = HX_HCSTRING("OV_FALSE","\x2b","\xd1","\xeb","\x13");
			}
			;break;
			case (int)-3: {
				HX_STACK_LINE(172)
				tmp23 = HX_HCSTRING("OV_HOLE","\x98","\x5a","\xb5","\x1a");
			}
			;break;
			default: {
				HX_STACK_LINE(172)
				tmp23 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _ogg_result);
			}
		}
		HX_STACK_LINE(172)
		::String tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(172)
		::String tmp25 = (HX_HCSTRING("i / audiodataogg / ","\xda","\x86","\x75","\x7e") + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(172)
		Dynamic tmp26 = hx::SourceInfo(HX_HCSTRING("AudioDataOGG.hx","\xef","\x97","\xb4","\x38"),172,HX_HCSTRING("snow.core.native.audio.OGG","\xc4","\x70","\xe0","\x5d"),HX_HCSTRING("from_file_handle","\xb6","\x98","\xc1","\x23"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(172)
		::haxe::Log_obj::trace(tmp25,tmp26);
		HX_STACK_LINE(174)
		return null();
	}
	HX_STACK_LINE(178)
	::cpp::Pointer< OggVorbis_File > tmp18 = _ogg_file;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(178)
	vorbis_info* tmp19 = ov_info(tmp18,(int)-1);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(178)
	vorbis_info* _ogg_info = tmp19;		HX_STACK_VAR(_ogg_info,"_ogg_info");
	HX_STACK_LINE(203)
	int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(203)
	{
		HX_STACK_LINE(203)
		::cpp::Pointer< OggVorbis_File > tmp21 = _ogg_file;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(203)
		cpp::Int64Struct tmp22 = ov_pcm_total(tmp21,(int)-1);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(203)
		cpp::Int64Struct x = tmp22;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(203)
		int tmp23 = (int((int)((x)&0xffffffff)) >> int((int)31));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(203)
		int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(203)
		bool tmp25 = ((int)(((cpp::Int64)(x))>>32) != tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(203)
		bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(203)
		if ((tmp26)){
			HX_STACK_LINE(203)
			HX_STACK_DO_THROW(HX_HCSTRING("Overflow","\x62","\x9f","\xed","\x1a"));
		}
		HX_STACK_LINE(203)
		tmp20 = (int)((x)&0xffffffff);
	}
	HX_STACK_LINE(203)
	int tmp21 = _ogg_info->channels;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(203)
	int tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(203)
	int tmp23 = (tmp22 * (int)2);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(203)
	int _total_pcm_length = tmp23;		HX_STACK_VAR(_total_pcm_length,"_total_pcm_length");
	HX_STACK_LINE(205)
	_ogg->channels = _ogg_info->channels;
	HX_STACK_LINE(206)
	int tmp24 = _ogg_info->rate;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(206)
	int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(206)
	_ogg->rate = tmp25;
	HX_STACK_LINE(207)
	_ogg->length = _total_pcm_length;
	HX_STACK_LINE(208)
	int tmp26 = _ogg_info->bitrate_nominal;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(208)
	int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(208)
	int _bitrate = tmp27;		HX_STACK_VAR(_bitrate,"_bitrate");
	HX_STACK_LINE(210)
	_ogg->seek((int)0);
	HX_STACK_LINE(212)
	::cpp::Pointer< OggVorbis_File > tmp28 = _ogg_file;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(212)
	Dynamic tmp29 = linc::ogg::ov_comment(tmp28,(int)-1);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(212)
	Dynamic _comment = tmp29;		HX_STACK_VAR(_comment,"_comment");
	HX_STACK_LINE(214)
	{
		HX_STACK_LINE(214)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(214)
		Array< ::String > _g1 = _comment->__Field(HX_HCSTRING("comments","\x34","\x99","\xfa","\xc0"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(214)
		while((true)){
			HX_STACK_LINE(214)
			bool tmp30 = (_g < _g1->length);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(214)
			bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(214)
			if ((tmp31)){
				HX_STACK_LINE(214)
				break;
			}
			HX_STACK_LINE(214)
			::String tmp32 = _g1->__get(_g);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(214)
			::String c = tmp32;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(214)
			++(_g);
			HX_STACK_LINE(171)
			Dynamic();
		}
	}
	HX_STACK_LINE(218)
	bool tmp30 = _is_stream;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(218)
	bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(218)
	if ((tmp31)){
		HX_STACK_LINE(220)
		::snow::api::buffers::ArrayBufferView tmp32;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(220)
		{
			HX_STACK_LINE(220)
			::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(220)
			::snow::api::buffers::ArrayBufferView tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(220)
			{
				HX_STACK_LINE(220)
				int _elements = _total_pcm_length;		HX_STACK_VAR(_elements,"_elements");
				HX_STACK_LINE(220)
				bool tmp34 = (_elements < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(220)
				if ((tmp34)){
					HX_STACK_LINE(220)
					_elements = (int)0;
				}
				HX_STACK_LINE(220)
				::snow::api::buffers::ArrayBufferView tmp35 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(220)
				::snow::api::buffers::ArrayBufferView _view = tmp35;		HX_STACK_VAR(_view,"_view");
				HX_STACK_LINE(220)
				int tmp36 = (_elements * _view->bytesPerElement);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(220)
				int _bytelen = tmp36;		HX_STACK_VAR(_bytelen,"_bytelen");
				HX_STACK_LINE(220)
				_view->byteOffset = (int)0;
				HX_STACK_LINE(220)
				_view->byteLength = _bytelen;
				HX_STACK_LINE(220)
				Array< unsigned char > tmp37;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(220)
				{
					HX_STACK_LINE(220)
					Array< unsigned char > this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(220)
					this2 = Array_obj< unsigned char >::__new();
					HX_STACK_LINE(220)
					bool tmp38 = (_bytelen > (int)0);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(220)
					if ((tmp38)){
						HX_STACK_LINE(220)
						int tmp39 = (_bytelen - (int)1);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(220)
						this2[tmp39] = (int)0;
					}
					HX_STACK_LINE(220)
					tmp37 = this2;
				}
				HX_STACK_LINE(220)
				_view->buffer = tmp37;
				HX_STACK_LINE(220)
				_view->length = _elements;
				HX_STACK_LINE(220)
				tmp33 = _view;
			}
			HX_STACK_LINE(220)
			this1 = tmp33;
			HX_STACK_LINE(220)
			tmp32 = this1;
		}
		HX_STACK_LINE(220)
		_ogg->samples = tmp32;
		HX_STACK_LINE(221)
		::snow::api::buffers::ArrayBufferView tmp33 = _ogg->samples;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(221)
		int tmp34 = _total_pcm_length;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(221)
		_ogg->portion(tmp33,(int)0,tmp34,Array_obj< int >::__new());
	}
	else{
		HX_STACK_LINE(138)
		Dynamic();
	}
	HX_STACK_LINE(226)
	::snow::core::native::audio::AudioDataOGG tmp32 = _ogg;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(226)
	return tmp32;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(OGG_obj,from_file_handle,return )

::String OGG_obj::code( int _code){
	HX_STACK_FRAME("snow.core.native.audio.OGG","code",0x6aafa917,"snow.core.native.audio.OGG.code","snow/core/native/audio/AudioDataOGG.hx",233,0x186b83e2)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(234)
	int tmp = _code;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(234)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(234)
	switch( (int)(tmp)){
		case (int)-133: {
			HX_STACK_LINE(235)
			tmp1 = HX_HCSTRING("OV_EBADHEADER","\x65","\xf7","\x93","\xe6");
		}
		;break;
		case (int)-137: {
			HX_STACK_LINE(236)
			tmp1 = HX_HCSTRING("OV_EBADLINK","\xd2","\x7b","\x44","\x1f");
		}
		;break;
		case (int)-136: {
			HX_STACK_LINE(237)
			tmp1 = HX_HCSTRING("OV_EBADPACKET","\x60","\x45","\x2c","\xcd");
		}
		;break;
		case (int)-129: {
			HX_STACK_LINE(238)
			tmp1 = HX_HCSTRING("OV_EFAULT","\xb5","\xf0","\xcc","\xcd");
		}
		;break;
		case (int)-130: {
			HX_STACK_LINE(239)
			tmp1 = HX_HCSTRING("OV_EIMPL","\x4d","\xb1","\xcf","\x85");
		}
		;break;
		case (int)-131: {
			HX_STACK_LINE(240)
			tmp1 = HX_HCSTRING("OV_EINVAL","\xef","\x2c","\x99","\x90");
		}
		;break;
		case (int)-138: {
			HX_STACK_LINE(241)
			tmp1 = HX_HCSTRING("OV_ENOSEEK","\xe6","\xe5","\xa4","\x86");
		}
		;break;
		case (int)-135: {
			HX_STACK_LINE(242)
			tmp1 = HX_HCSTRING("OV_ENOTAUDIO","\xd0","\x0f","\x66","\x49");
		}
		;break;
		case (int)-132: {
			HX_STACK_LINE(243)
			tmp1 = HX_HCSTRING("OV_ENOTVORBIS","\xf9","\x86","\x3a","\xea");
		}
		;break;
		case (int)-2: {
			HX_STACK_LINE(244)
			tmp1 = HX_HCSTRING("OV_EOF","\x44","\x4a","\xa7","\x59");
		}
		;break;
		case (int)-128: {
			HX_STACK_LINE(245)
			tmp1 = HX_HCSTRING("OV_EREAD","\xc3","\x7d","\xbc","\x8b");
		}
		;break;
		case (int)-134: {
			HX_STACK_LINE(246)
			tmp1 = HX_HCSTRING("OV_EVERSION","\xab","\xd2","\x9b","\x0c");
		}
		;break;
		case (int)-1: {
			HX_STACK_LINE(247)
			tmp1 = HX_HCSTRING("OV_FALSE","\x2b","\xd1","\xeb","\x13");
		}
		;break;
		case (int)-3: {
			HX_STACK_LINE(248)
			tmp1 = HX_HCSTRING("OV_HOLE","\x98","\x5a","\xb5","\x1a");
		}
		;break;
		default: {
			HX_STACK_LINE(249)
			tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _code);
		}
	}
	HX_STACK_LINE(234)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OGG_obj,code,return )

int OGG_obj::ogg_read( ::snow::core::native::audio::AudioDataOGG _ogg,int size,int nmemb,Array< unsigned char > data){
	HX_STACK_FRAME("snow.core.native.audio.OGG","ogg_read",0x50730970,"snow.core.native.audio.OGG.ogg_read","snow/core/native/audio/AudioDataOGG.hx",259,0x186b83e2)
	HX_STACK_ARG(_ogg,"_ogg")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(nmemb,"nmemb")
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(261)
	int tmp = (size * nmemb);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(261)
	int _total = tmp;		HX_STACK_VAR(_total,"_total");
	HX_STACK_LINE(262)
	::snow::api::buffers::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(262)
	{
		HX_STACK_LINE(262)
		int _byteLength = data->length;		HX_STACK_VAR(_byteLength,"_byteLength");
		HX_STACK_LINE(262)
		{
			HX_STACK_LINE(262)
			::snow::api::buffers::ArrayBufferView tmp2 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(262)
			::snow::api::buffers::ArrayBufferView _view = tmp2;		HX_STACK_VAR(_view,"_view");
			HX_STACK_LINE(262)
			int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
			HX_STACK_LINE(262)
			bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(262)
			if ((tmp3)){
				HX_STACK_LINE(262)
				::snow::api::buffers::TAError tmp4 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(262)
				HX_STACK_DO_THROW(tmp4);
			}
			HX_STACK_LINE(262)
			int tmp4 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(262)
			bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(262)
			if ((tmp5)){
				HX_STACK_LINE(262)
				::snow::api::buffers::TAError tmp6 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(262)
				HX_STACK_DO_THROW(tmp6);
			}
			HX_STACK_LINE(262)
			int _src_bytelen = data->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
			HX_STACK_LINE(262)
			int tmp6 = _byteLength;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(262)
			int _new_range = tmp6;		HX_STACK_VAR(_new_range,"_new_range");
			HX_STACK_LINE(262)
			bool tmp7 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(262)
			if ((tmp7)){
				HX_STACK_LINE(262)
				::snow::api::buffers::TAError tmp8 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(262)
				HX_STACK_DO_THROW(tmp8);
			}
			HX_STACK_LINE(262)
			_view->buffer = data;
			HX_STACK_LINE(262)
			_view->byteOffset = (int)0;
			HX_STACK_LINE(262)
			_view->byteLength = _byteLength;
			HX_STACK_LINE(262)
			Float tmp8 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(262)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(262)
			_view->length = tmp9;
			HX_STACK_LINE(262)
			tmp1 = _view;
		}
	}
	HX_STACK_LINE(262)
	::snow::api::buffers::ArrayBufferView _buffer = tmp1;		HX_STACK_VAR(_buffer,"_buffer");
	HX_STACK_LINE(266)
	::snow::systems::io::IO tmp2 = _ogg->app->io;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(266)
	::cpp::Pointer< SDL_RWops > tmp3 = _ogg->handle;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(266)
	int tmp4 = tmp2->module->file_size(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(266)
	int _file_size = tmp4;		HX_STACK_VAR(_file_size,"_file_size");
	HX_STACK_LINE(267)
	::snow::systems::io::IO tmp5 = _ogg->app->io;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(267)
	::cpp::Pointer< SDL_RWops > tmp6 = _ogg->handle;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(267)
	int tmp7 = tmp5->module->file_tell(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(267)
	int _file_cur = tmp7;		HX_STACK_VAR(_file_cur,"_file_cur");
	HX_STACK_LINE(268)
	int tmp8 = (_file_size - _file_cur);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(268)
	int tmp9 = _total;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(268)
	Float tmp10 = ::Math_obj::min(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(268)
	int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(268)
	int _read_size = tmp11;		HX_STACK_VAR(_read_size,"_read_size");
	HX_STACK_LINE(270)
	::snow::systems::io::IO tmp12 = _ogg->app->io;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(270)
	::cpp::Pointer< SDL_RWops > tmp13 = _ogg->handle;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(270)
	::snow::api::buffers::ArrayBufferView tmp14 = _buffer;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(270)
	int tmp15 = _read_size;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(270)
	int tmp16 = tmp12->module->file_read(tmp13,tmp14,tmp15,(int)1);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(270)
	int _read_n = tmp16;		HX_STACK_VAR(_read_n,"_read_n");
	HX_STACK_LINE(271)
	int tmp17 = (_read_n * _read_size);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(271)
	int _read = tmp17;		HX_STACK_VAR(_read,"_read");
	HX_STACK_LINE(275)
	int tmp18 = _read;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(275)
	return tmp18;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(OGG_obj,ogg_read,return )

Void OGG_obj::ogg_seek( ::snow::core::native::audio::AudioDataOGG _ogg,int offset,int whence){
{
		HX_STACK_FRAME("snow.core.native.audio.OGG","ogg_seek",0x511c4392,"snow.core.native.audio.OGG.ogg_seek","snow/core/native/audio/AudioDataOGG.hx",280,0x186b83e2)
		HX_STACK_ARG(_ogg,"_ogg")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(whence,"whence")
		HX_STACK_LINE(284)
		int tmp = whence;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(284)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(284)
		switch( (int)(tmp)){
			case (int)1: {
				HX_STACK_LINE(285)
				tmp1 = (int)1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(286)
				tmp1 = (int)2;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(287)
				tmp1 = (int)0;
			}
			;break;
		}
		HX_STACK_LINE(284)
		int _w = tmp1;		HX_STACK_VAR(_w,"_w");
		HX_STACK_LINE(290)
		::snow::systems::io::IO tmp2 = _ogg->app->io;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(290)
		::cpp::Pointer< SDL_RWops > tmp3 = _ogg->handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(290)
		int tmp4 = offset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(290)
		int tmp5 = _w;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(290)
		tmp2->module->file_seek(tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OGG_obj,ogg_seek,(void))

int OGG_obj::ogg_tell( ::snow::core::native::audio::AudioDataOGG _ogg){
	HX_STACK_FRAME("snow.core.native.audio.OGG","ogg_tell",0x51c5804b,"snow.core.native.audio.OGG.ogg_tell","snow/core/native/audio/AudioDataOGG.hx",295,0x186b83e2)
	HX_STACK_ARG(_ogg,"_ogg")
	HX_STACK_LINE(297)
	::snow::systems::io::IO tmp = _ogg->app->io;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	::cpp::Pointer< SDL_RWops > tmp1 = _ogg->handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(297)
	int tmp2 = tmp->module->file_tell(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(297)
	int res = tmp2;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(301)
	int tmp3 = res;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(301)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OGG_obj,ogg_tell,return )


OGG_obj::OGG_obj()
{
}

bool OGG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { outValue = code_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ogg_read") ) { outValue = ogg_read_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ogg_seek") ) { outValue = ogg_seek_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ogg_tell") ) { outValue = ogg_tell_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"from_file") ) { outValue = from_file_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"from_bytes") ) { outValue = from_bytes_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"from_file_handle") ) { outValue = from_file_handle_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OGG_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OGG_obj::__mClass,"__mClass");
};

#endif

hx::Class OGG_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("from_file","\xb1","\x64","\x28","\x18"),
	HX_HCSTRING("from_bytes","\x96","\xe0","\x2e","\xc8"),
	HX_HCSTRING("from_file_handle","\xb6","\x98","\xc1","\x23"),
	HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"),
	HX_HCSTRING("ogg_read","\x86","\xd4","\x7c","\xb5"),
	HX_HCSTRING("ogg_seek","\xa8","\x0e","\x26","\xb6"),
	HX_HCSTRING("ogg_tell","\x61","\x4b","\xcf","\xb6"),
	::String(null()) };

void OGG_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.core.native.audio.OGG","\xc4","\x70","\xe0","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OGG_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< OGG_obj >;
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
