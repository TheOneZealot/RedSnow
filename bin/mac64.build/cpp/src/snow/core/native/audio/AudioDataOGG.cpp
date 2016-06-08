#include <hxcpp.h>

#include "linc_ogg.h"
#include "linc_sdl.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe__Int64_Int64_Impl_
#include <haxe/_Int64/Int64_Impl_.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_core_native_audio_AudioDataOGG
#include <snow/core/native/audio/AudioDataOGG.h>
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

Void AudioDataOGG_obj::__construct(::snow::Snow _app,::cpp::Pointer< SDL_RWops > _handle,::cpp::Pointer< OggVorbis_File > _oggfile,Dynamic _opt)
{
HX_STACK_FRAME("snow.core.native.audio.AudioDataOGG","new",0xf4ea1cec,"snow.core.native.audio.AudioDataOGG.new","snow/core/native/audio/AudioDataOGG.hx",15,0x186b83e2)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
HX_STACK_ARG(_handle,"_handle")
HX_STACK_ARG(_oggfile,"_oggfile")
HX_STACK_ARG(_opt,"_opt")
{
	HX_STACK_LINE(17)
	this->handle = _handle;
	HX_STACK_LINE(18)
	this->oggfile = _oggfile;
	HX_STACK_LINE(20)
	::snow::Snow tmp = _app;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	Dynamic tmp1 = _opt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//AudioDataOGG_obj::~AudioDataOGG_obj() { }

Dynamic AudioDataOGG_obj::__CreateEmpty() { return  new AudioDataOGG_obj; }
hx::ObjectPtr< AudioDataOGG_obj > AudioDataOGG_obj::__new(::snow::Snow _app,::cpp::Pointer< SDL_RWops > _handle,::cpp::Pointer< OggVorbis_File > _oggfile,Dynamic _opt)
{  hx::ObjectPtr< AudioDataOGG_obj > _result_ = new AudioDataOGG_obj();
	_result_->__construct(_app,_handle,_oggfile,_opt);
	return _result_;}

Dynamic AudioDataOGG_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioDataOGG_obj > _result_ = new AudioDataOGG_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void AudioDataOGG_obj::destroy( ){
{
		HX_STACK_FRAME("snow.core.native.audio.AudioDataOGG","destroy",0x2c4baf86,"snow.core.native.audio.AudioDataOGG.destroy","snow/core/native/audio/AudioDataOGG.hx",24,0x186b83e2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		::cpp::Pointer< SDL_RWops > tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		if ((tmp1)){
			HX_STACK_LINE(27)
			::snow::Snow tmp2 = this->app;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(27)
			::snow::modules::sdl::IO tmp3 = tmp2->io->module;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(27)
			::cpp::Pointer< SDL_RWops > tmp4 = this->handle;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(27)
			tmp3->file_close(tmp4);
		}
		HX_STACK_LINE(30)
		this->handle = null();
		HX_STACK_LINE(31)
		::cpp::Pointer< OggVorbis_File > tmp2 = this->oggfile;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		ov_clear(tmp2);
		HX_STACK_LINE(32)
		this->oggfile = null();
	}
return null();
}


bool AudioDataOGG_obj::seek( int _to){
	HX_STACK_FRAME("snow.core.native.audio.AudioDataOGG","seek",0x5b3d336c,"snow.core.native.audio.AudioDataOGG.seek","snow/core/native/audio/AudioDataOGG.hx",36,0x186b83e2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_to,"_to")
	HX_STACK_LINE(40)
	Float tmp = (Float(_to) / Float((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	cpp::Int64Struct tmp2 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	cpp::Int64Struct _to_samples = tmp2;		HX_STACK_VAR(_to_samples,"_to_samples");
	HX_STACK_LINE(41)
	::cpp::Pointer< OggVorbis_File > tmp3 = this->oggfile;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	cpp::Int64Struct tmp4 = _to_samples;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	int tmp5 = ov_pcm_seek(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(41)
	int res = tmp5;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(43)
	bool tmp6 = (res == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(43)
	return tmp6;
}


Array< int > AudioDataOGG_obj::portion( ::snow::api::buffers::ArrayBufferView _into,int _start,int _len,Array< int > _into_result){
	HX_STACK_FRAME("snow.core.native.audio.AudioDataOGG","portion",0x8b717373,"snow.core.native.audio.AudioDataOGG.portion","snow/core/native/audio/AudioDataOGG.hx",47,0x186b83e2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_into,"_into")
	HX_STACK_ARG(_start,"_start")
	HX_STACK_ARG(_len,"_len")
	HX_STACK_ARG(_into_result,"_into_result")
	HX_STACK_LINE(49)
	bool complete = false;		HX_STACK_VAR(complete,"complete");
	HX_STACK_LINE(50)
	int word = (int)2;		HX_STACK_VAR(word,"word");
	HX_STACK_LINE(51)
	int sgned = (int)1;		HX_STACK_VAR(sgned,"sgned");
	HX_STACK_LINE(52)
	int bit_stream = (int)1;		HX_STACK_VAR(bit_stream,"bit_stream");
	HX_STACK_LINE(54)
	int _read_len = _len;		HX_STACK_VAR(_read_len,"_read_len");
	HX_STACK_LINE(56)
	bool tmp = (_start != (int)-1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	if ((tmp)){
		HX_STACK_LINE(58)
		int tmp1 = _start;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		this->seek(tmp1);
	}
	HX_STACK_LINE(66)
	bool reading = true;		HX_STACK_VAR(reading,"reading");
	HX_STACK_LINE(67)
	int bytes_left = _read_len;		HX_STACK_VAR(bytes_left,"bytes_left");
	HX_STACK_LINE(68)
	int total_read = (int)0;		HX_STACK_VAR(total_read,"total_read");
	HX_STACK_LINE(69)
	int bytes_read = (int)0;		HX_STACK_VAR(bytes_read,"bytes_read");
	HX_STACK_LINE(70)
	int OGG_BUFFER_LENGTH = (int)128;		HX_STACK_VAR(OGG_BUFFER_LENGTH,"OGG_BUFFER_LENGTH");
	HX_STACK_LINE(72)
	while((true)){
		HX_STACK_LINE(72)
		bool tmp1 = reading;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		if ((tmp2)){
			HX_STACK_LINE(72)
			break;
		}
		HX_STACK_LINE(74)
		int _read_max = OGG_BUFFER_LENGTH;		HX_STACK_VAR(_read_max,"_read_max");
		HX_STACK_LINE(76)
		bool tmp3 = (bytes_left < _read_max);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(76)
		if ((tmp3)){
			HX_STACK_LINE(77)
			_read_max = bytes_left;
		}
		HX_STACK_LINE(81)
		::cpp::Pointer< OggVorbis_File > tmp4 = this->oggfile;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(81)
		Array< unsigned char > tmp5 = _into->buffer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(81)
		int tmp6 = total_read;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(81)
		int tmp7 = _read_max;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(81)
		int tmp8 = linc::ogg::ov_read(tmp4,tmp5,tmp6,tmp7,(int)0,(int)2,(int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(81)
		bytes_read = tmp8;
		HX_STACK_LINE(83)
		hx::AddEq(total_read,bytes_read);
		HX_STACK_LINE(84)
		hx::SubEq(bytes_left,bytes_read);
		HX_STACK_LINE(87)
		bool tmp9 = (bytes_read == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(87)
		if ((tmp9)){
			HX_STACK_LINE(88)
			reading = false;
			HX_STACK_LINE(89)
			complete = true;
		}
		HX_STACK_LINE(92)
		bool tmp10 = (total_read >= _read_len);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(92)
		if ((tmp10)){
			HX_STACK_LINE(93)
			reading = false;
		}
	}
	HX_STACK_LINE(100)
	bool tmp1 = (total_read != _read_len);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	if ((tmp1)){
		HX_STACK_LINE(101)
		int tmp2 = (int(_read_len) & int((int)3));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		int byte_gap = tmp2;		HX_STACK_VAR(byte_gap,"byte_gap");
	}
	HX_STACK_LINE(107)
	int tmp2 = total_read;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(107)
	_into_result[(int)0] = tmp2;
	HX_STACK_LINE(108)
	bool tmp3 = complete;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(108)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(108)
	if ((tmp3)){
		HX_STACK_LINE(108)
		tmp4 = (int)1;
	}
	else{
		HX_STACK_LINE(108)
		tmp4 = (int)0;
	}
	HX_STACK_LINE(108)
	_into_result[(int)1] = tmp4;
	HX_STACK_LINE(110)
	return _into_result;
}



AudioDataOGG_obj::AudioDataOGG_obj()
{
}

void AudioDataOGG_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioDataOGG);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(oggfile,"oggfile");
	::snow::types::AudioData_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AudioDataOGG_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(oggfile,"oggfile");
	::snow::types::AudioData_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AudioDataOGG_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"seek") ) { return seek_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"oggfile") ) { return oggfile; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"portion") ) { return portion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioDataOGG_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< ::cpp::Pointer< SDL_RWops > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"oggfile") ) { oggfile=inValue.Cast< ::cpp::Pointer< OggVorbis_File > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioDataOGG_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	outFields->push(HX_HCSTRING("oggfile","\x4b","\x36","\x92","\xc8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< SDL_RWops >*/ ,(int)offsetof(AudioDataOGG_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{hx::fsObject /*::cpp::Pointer< OggVorbis_File >*/ ,(int)offsetof(AudioDataOGG_obj,oggfile),HX_HCSTRING("oggfile","\x4b","\x36","\x92","\xc8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("oggfile","\x4b","\x36","\x92","\xc8"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("seek","\x78","\x85","\x50","\x4c"),
	HX_HCSTRING("portion","\xe7","\xf0","\xab","\x83"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioDataOGG_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioDataOGG_obj::__mClass,"__mClass");
};

#endif

hx::Class AudioDataOGG_obj::__mClass;

void AudioDataOGG_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.core.native.audio.AudioDataOGG","\xfa","\x76","\x8e","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioDataOGG_obj >;
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
