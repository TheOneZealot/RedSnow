#include <hxcpp.h>

#include "linc_sdl.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_core_native_audio_AudioDataPCM
#include <snow/core/native/audio/AudioDataPCM.h>
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

Void AudioDataPCM_obj::__construct(::snow::Snow _app,::cpp::Pointer< SDL_RWops > _handle,Dynamic _opt)
{
HX_STACK_FRAME("snow.core.native.audio.AudioDataPCM","new",0xf9799d37,"snow.core.native.audio.AudioDataPCM.new","snow/core/native/audio/AudioDataPCM.hx",12,0x3523d5f7)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
HX_STACK_ARG(_handle,"_handle")
HX_STACK_ARG(_opt,"_opt")
{
	HX_STACK_LINE(14)
	this->handle = _handle;
	HX_STACK_LINE(16)
	::snow::Snow tmp = _app;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	Dynamic tmp1 = _opt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//AudioDataPCM_obj::~AudioDataPCM_obj() { }

Dynamic AudioDataPCM_obj::__CreateEmpty() { return  new AudioDataPCM_obj; }
hx::ObjectPtr< AudioDataPCM_obj > AudioDataPCM_obj::__new(::snow::Snow _app,::cpp::Pointer< SDL_RWops > _handle,Dynamic _opt)
{  hx::ObjectPtr< AudioDataPCM_obj > _result_ = new AudioDataPCM_obj();
	_result_->__construct(_app,_handle,_opt);
	return _result_;}

Dynamic AudioDataPCM_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioDataPCM_obj > _result_ = new AudioDataPCM_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void AudioDataPCM_obj::destroy( ){
{
		HX_STACK_FRAME("snow.core.native.audio.AudioDataPCM","destroy",0x9da8b151,"snow.core.native.audio.AudioDataPCM.destroy","snow/core/native/audio/AudioDataPCM.hx",20,0x3523d5f7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		::cpp::Pointer< SDL_RWops > tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		if ((tmp1)){
			HX_STACK_LINE(23)
			::snow::Snow tmp2 = this->app;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(23)
			::snow::modules::sdl::IO tmp3 = tmp2->io->module;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(23)
			::cpp::Pointer< SDL_RWops > tmp4 = this->handle;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(23)
			tmp3->file_close(tmp4);
			HX_STACK_LINE(24)
			this->handle = null();
		}
		HX_STACK_LINE(27)
		this->app = null();
		HX_STACK_LINE(28)
		this->handle = null();
	}
return null();
}


bool AudioDataPCM_obj::seek( int _to){
	HX_STACK_FRAME("snow.core.native.audio.AudioDataPCM","seek",0x543df4c1,"snow.core.native.audio.AudioDataPCM.seek","snow/core/native/audio/AudioDataPCM.hx",32,0x3523d5f7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_to,"_to")
	HX_STACK_LINE(34)
	::cpp::Pointer< SDL_RWops > tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	if ((tmp1)){
		HX_STACK_LINE(34)
		return false;
	}
	HX_STACK_LINE(36)
	::snow::Snow tmp2 = this->app;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	::snow::modules::sdl::IO tmp3 = tmp2->io->module;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	::cpp::Pointer< SDL_RWops > tmp4 = this->handle;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(36)
	int tmp5 = _to;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(36)
	int tmp6 = tmp3->file_seek(tmp4,tmp5,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(36)
	int _result = tmp6;		HX_STACK_VAR(_result,"_result");
	HX_STACK_LINE(38)
	bool tmp7 = (_result == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(38)
	return tmp7;
}


Array< int > AudioDataPCM_obj::portion( ::snow::api::buffers::ArrayBufferView _into,int _start,int _len,Array< int > _into_result){
	HX_STACK_FRAME("snow.core.native.audio.AudioDataPCM","portion",0xfcce753e,"snow.core.native.audio.AudioDataPCM.portion","snow/core/native/audio/AudioDataPCM.hx",42,0x3523d5f7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_into,"_into")
	HX_STACK_ARG(_start,"_start")
	HX_STACK_ARG(_len,"_len")
	HX_STACK_ARG(_into_result,"_into_result")
	HX_STACK_LINE(50)
	::cpp::Pointer< SDL_RWops > tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	if ((tmp1)){
		HX_STACK_LINE(50)
		_into_result[(int)0] = (int)0;
		HX_STACK_LINE(50)
		_into_result[(int)1] = (int)1;
		HX_STACK_LINE(50)
		return _into_result;
	}
	HX_STACK_LINE(52)
	bool tmp2 = (_start != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	if ((tmp2)){
		HX_STACK_LINE(53)
		int tmp3 = _start;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		this->seek(tmp3);
	}
	HX_STACK_LINE(56)
	bool _complete = false;		HX_STACK_VAR(_complete,"_complete");
	HX_STACK_LINE(57)
	int _read_len = _len;		HX_STACK_VAR(_read_len,"_read_len");
	HX_STACK_LINE(58)
	::snow::Snow tmp3 = this->app;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	::snow::modules::sdl::IO tmp4 = tmp3->io->module;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(58)
	::cpp::Pointer< SDL_RWops > tmp5 = this->handle;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(58)
	int tmp6 = tmp4->file_tell(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(58)
	int _cur_pos = tmp6;		HX_STACK_VAR(_cur_pos,"_cur_pos");
	HX_STACK_LINE(59)
	int tmp7 = this->length;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(59)
	int tmp8 = _cur_pos;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(59)
	int tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(59)
	int _distance_to_end = tmp9;		HX_STACK_VAR(_distance_to_end,"_distance_to_end");
	HX_STACK_LINE(61)
	bool tmp10 = (_distance_to_end <= _read_len);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(61)
	if ((tmp10)){
		HX_STACK_LINE(62)
		_read_len = _distance_to_end;
		HX_STACK_LINE(63)
		_complete = true;
	}
	HX_STACK_LINE(66)
	bool tmp11 = (_read_len <= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(66)
	if ((tmp11)){
		HX_STACK_LINE(66)
		_into_result[(int)0] = (int)0;
		HX_STACK_LINE(66)
		_into_result[(int)1] = (int)1;
		HX_STACK_LINE(66)
		return _into_result;
	}
	HX_STACK_LINE(68)
	::String tmp12 = (HX_HCSTRING("pcm / reading ","\xab","\x20","\x47","\x6e") + _read_len);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(68)
	::String tmp13 = (tmp12 + HX_HCSTRING(" bytes from ","\xe1","\x01","\xae","\x16"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(68)
	int tmp14 = _start;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(68)
	::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(68)
	::String tmp16 = (HX_HCSTRING("i / audiodatapcm / ","\xef","\xd8","\x2d","\x9b") + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(68)
	Dynamic tmp17 = hx::SourceInfo(HX_HCSTRING("AudioDataPCM.hx","\x04","\xea","\x6c","\x55"),68,HX_HCSTRING("snow.core.native.audio.AudioDataPCM","\xc5","\x35","\x8f","\x3c"),HX_HCSTRING("portion","\xe7","\xf0","\xab","\x83"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(68)
	::haxe::Log_obj::trace(tmp16,tmp17);
	HX_STACK_LINE(71)
	int tmp18 = (int(_read_len) & int((int)3));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(71)
	int _byte_gap = tmp18;		HX_STACK_VAR(_byte_gap,"_byte_gap");
	HX_STACK_LINE(73)
	int _n_elements = (int)1;		HX_STACK_VAR(_n_elements,"_n_elements");
	HX_STACK_LINE(74)
	::snow::Snow tmp19 = this->app;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(74)
	::snow::modules::sdl::IO tmp20 = tmp19->io->module;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(74)
	::cpp::Pointer< SDL_RWops > tmp21 = this->handle;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(74)
	::snow::api::buffers::ArrayBufferView tmp22 = _into;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(74)
	int tmp23 = _read_len;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(74)
	int tmp24 = _n_elements;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(74)
	int tmp25 = tmp20->file_read(tmp21,tmp22,tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(74)
	int _elements_read = tmp25;		HX_STACK_VAR(_elements_read,"_elements_read");
	HX_STACK_LINE(78)
	bool tmp26 = (_elements_read == (int)0);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(78)
	if ((tmp26)){
		HX_STACK_LINE(78)
		_complete = true;
	}
	HX_STACK_LINE(80)
	::String tmp27 = (HX_HCSTRING("pcm / total read ","\xb7","\xa1","\x25","\x61") + _read_len);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(80)
	::String tmp28 = (tmp27 + HX_HCSTRING(" bytes, complete? ","\x39","\x30","\x7f","\xa4"));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(80)
	bool tmp29 = _complete;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(80)
	::String tmp30 = ::Std_obj::string(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(80)
	::String tmp31 = (tmp28 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(80)
	::String tmp32 = (HX_HCSTRING("i / audiodatapcm / ","\xef","\xd8","\x2d","\x9b") + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(80)
	Dynamic tmp33 = hx::SourceInfo(HX_HCSTRING("AudioDataPCM.hx","\x04","\xea","\x6c","\x55"),80,HX_HCSTRING("snow.core.native.audio.AudioDataPCM","\xc5","\x35","\x8f","\x3c"),HX_HCSTRING("portion","\xe7","\xf0","\xab","\x83"));		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(80)
	::haxe::Log_obj::trace(tmp32,tmp33);
	HX_STACK_LINE(82)
	int tmp34 = _read_len;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(82)
	_into_result[(int)0] = tmp34;
	HX_STACK_LINE(83)
	bool tmp35 = _complete;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(83)
	int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(83)
	if ((tmp35)){
		HX_STACK_LINE(83)
		tmp36 = (int)1;
	}
	else{
		HX_STACK_LINE(83)
		tmp36 = (int)0;
	}
	HX_STACK_LINE(83)
	_into_result[(int)1] = tmp36;
	HX_STACK_LINE(85)
	return _into_result;
}



AudioDataPCM_obj::AudioDataPCM_obj()
{
}

void AudioDataPCM_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioDataPCM);
	HX_MARK_MEMBER_NAME(handle,"handle");
	::snow::types::AudioData_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AudioDataPCM_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	::snow::types::AudioData_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AudioDataPCM_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"seek") ) { return seek_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"portion") ) { return portion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioDataPCM_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< ::cpp::Pointer< SDL_RWops > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioDataPCM_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< SDL_RWops >*/ ,(int)offsetof(AudioDataPCM_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("seek","\x78","\x85","\x50","\x4c"),
	HX_HCSTRING("portion","\xe7","\xf0","\xab","\x83"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioDataPCM_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioDataPCM_obj::__mClass,"__mClass");
};

#endif

hx::Class AudioDataPCM_obj::__mClass;

void AudioDataPCM_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.core.native.audio.AudioDataPCM","\xc5","\x35","\x8f","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioDataPCM_obj >;
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
