#include <hxcpp.h>

#include "linc_sdl.h"
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_core_native_audio_AudioDataWAV
#include <snow/core/native/audio/AudioDataWAV.h>
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

Void AudioDataWAV_obj::__construct(::snow::Snow _app,::cpp::Pointer< SDL_RWops > _handle,int _offset,Dynamic _opt)
{
HX_STACK_FRAME("snow.core.native.audio.AudioDataWAV","new",0x7e745c49,"snow.core.native.audio.AudioDataWAV.new","snow/core/native/audio/AudioDataWAV.hx",16,0xe0c91f25)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
HX_STACK_ARG(_handle,"_handle")
HX_STACK_ARG(_offset,"_offset")
HX_STACK_ARG(_opt,"_opt")
{
	HX_STACK_LINE(18)
	this->handle = _handle;
	HX_STACK_LINE(19)
	this->data_offset = _offset;
	HX_STACK_LINE(21)
	::snow::Snow tmp = _app;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	Dynamic tmp1 = _opt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//AudioDataWAV_obj::~AudioDataWAV_obj() { }

Dynamic AudioDataWAV_obj::__CreateEmpty() { return  new AudioDataWAV_obj; }
hx::ObjectPtr< AudioDataWAV_obj > AudioDataWAV_obj::__new(::snow::Snow _app,::cpp::Pointer< SDL_RWops > _handle,int _offset,Dynamic _opt)
{  hx::ObjectPtr< AudioDataWAV_obj > _result_ = new AudioDataWAV_obj();
	_result_->__construct(_app,_handle,_offset,_opt);
	return _result_;}

Dynamic AudioDataWAV_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioDataWAV_obj > _result_ = new AudioDataWAV_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void AudioDataWAV_obj::destroy( ){
{
		HX_STACK_FRAME("snow.core.native.audio.AudioDataWAV","destroy",0x0da56163,"snow.core.native.audio.AudioDataWAV.destroy","snow/core/native/audio/AudioDataWAV.hx",25,0xe0c91f25)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		::cpp::Pointer< SDL_RWops > tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		if ((tmp1)){
			HX_STACK_LINE(28)
			::snow::Snow tmp2 = this->app;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(28)
			::snow::modules::sdl::IO tmp3 = tmp2->io->module;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(28)
			::cpp::Pointer< SDL_RWops > tmp4 = this->handle;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(28)
			tmp3->file_close(tmp4);
		}
		HX_STACK_LINE(31)
		this->handle = null();
	}
return null();
}


bool AudioDataWAV_obj::seek( int _to){
	HX_STACK_FRAME("snow.core.native.audio.AudioDataWAV","seek",0x2aaa656f,"snow.core.native.audio.AudioDataWAV.seek","snow/core/native/audio/AudioDataWAV.hx",35,0xe0c91f25)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_to,"_to")
	HX_STACK_LINE(37)
	::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	::snow::modules::sdl::IO tmp1 = tmp->io->module;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	::cpp::Pointer< SDL_RWops > tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	int tmp3 = this->data_offset;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	int tmp4 = _to;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(37)
	int tmp6 = tmp1->file_seek(tmp2,tmp5,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(37)
	int _result = tmp6;		HX_STACK_VAR(_result,"_result");
	HX_STACK_LINE(39)
	bool tmp7 = (_result == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(39)
	return tmp7;
}


Array< int > AudioDataWAV_obj::portion( ::snow::api::buffers::ArrayBufferView _into,int _start,int _len,Array< int > _into_result){
	HX_STACK_FRAME("snow.core.native.audio.AudioDataWAV","portion",0x6ccb2550,"snow.core.native.audio.AudioDataWAV.portion","snow/core/native/audio/AudioDataWAV.hx",43,0xe0c91f25)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_into,"_into")
	HX_STACK_ARG(_start,"_start")
	HX_STACK_ARG(_len,"_len")
	HX_STACK_ARG(_into_result,"_into_result")
	HX_STACK_LINE(45)
	bool tmp = (_start != (int)-1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	if ((tmp)){
		HX_STACK_LINE(46)
		int tmp1 = _start;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		int tmp2 = this->data_offset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		this->seek(tmp3);
	}
	HX_STACK_LINE(49)
	bool _complete = false;		HX_STACK_VAR(_complete,"_complete");
	HX_STACK_LINE(50)
	int _read_len = _len;		HX_STACK_VAR(_read_len,"_read_len");
	HX_STACK_LINE(51)
	::snow::Snow tmp1 = this->app;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	::snow::modules::sdl::IO tmp2 = tmp1->io->module;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	::cpp::Pointer< SDL_RWops > tmp3 = this->handle;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(51)
	int tmp4 = tmp2->file_tell(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(51)
	int tmp5 = this->data_offset;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(51)
	int tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(51)
	int _current_pos = tmp6;		HX_STACK_VAR(_current_pos,"_current_pos");
	HX_STACK_LINE(52)
	int tmp7 = this->length;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(52)
	int tmp8 = _current_pos;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(52)
	int tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(52)
	int _distance_to_end = tmp9;		HX_STACK_VAR(_distance_to_end,"_distance_to_end");
	HX_STACK_LINE(54)
	bool tmp10 = (_distance_to_end <= _read_len);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(54)
	if ((tmp10)){
		HX_STACK_LINE(55)
		_read_len = _distance_to_end;
		HX_STACK_LINE(56)
		_complete = true;
	}
	HX_STACK_LINE(59)
	bool tmp11 = (_read_len <= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(59)
	if ((tmp11)){
		HX_STACK_LINE(60)
		_into_result[(int)0] = (int)0;
		HX_STACK_LINE(61)
		_into_result[(int)1] = (int)1;
		HX_STACK_LINE(62)
		return _into_result;
	}
	HX_STACK_LINE(68)
	int tmp12 = (int(_read_len) & int((int)3));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(68)
	int _byte_gap = tmp12;		HX_STACK_VAR(_byte_gap,"_byte_gap");
	HX_STACK_LINE(70)
	int _n_elements = (int)1;		HX_STACK_VAR(_n_elements,"_n_elements");
	HX_STACK_LINE(71)
	::snow::Snow tmp13 = this->app;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(71)
	::snow::modules::sdl::IO tmp14 = tmp13->io->module;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(71)
	::cpp::Pointer< SDL_RWops > tmp15 = this->handle;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(71)
	::snow::api::buffers::ArrayBufferView tmp16 = _into;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(71)
	int tmp17 = _read_len;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(71)
	int tmp18 = _n_elements;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(71)
	int tmp19 = tmp14->file_read(tmp15,tmp16,tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(71)
	int _elements_read = tmp19;		HX_STACK_VAR(_elements_read,"_elements_read");
	HX_STACK_LINE(75)
	bool tmp20 = (_elements_read == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(75)
	if ((tmp20)){
		HX_STACK_LINE(75)
		_complete = true;
	}
	HX_STACK_LINE(79)
	int tmp21 = _read_len;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(79)
	_into_result[(int)0] = tmp21;
	HX_STACK_LINE(80)
	bool tmp22 = _complete;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(80)
	int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(80)
	if ((tmp22)){
		HX_STACK_LINE(80)
		tmp23 = (int)1;
	}
	else{
		HX_STACK_LINE(80)
		tmp23 = (int)0;
	}
	HX_STACK_LINE(80)
	_into_result[(int)1] = tmp23;
	HX_STACK_LINE(82)
	return _into_result;
}



AudioDataWAV_obj::AudioDataWAV_obj()
{
}

void AudioDataWAV_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioDataWAV);
	HX_MARK_MEMBER_NAME(data_offset,"data_offset");
	HX_MARK_MEMBER_NAME(handle,"handle");
	::snow::types::AudioData_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AudioDataWAV_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data_offset,"data_offset");
	HX_VISIT_MEMBER_NAME(handle,"handle");
	::snow::types::AudioData_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AudioDataWAV_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"data_offset") ) { return data_offset; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioDataWAV_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< ::cpp::Pointer< SDL_RWops > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"data_offset") ) { data_offset=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioDataWAV_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data_offset","\x48","\xcc","\x50","\x43"));
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(AudioDataWAV_obj,data_offset),HX_HCSTRING("data_offset","\x48","\xcc","\x50","\x43")},
	{hx::fsObject /*::cpp::Pointer< SDL_RWops >*/ ,(int)offsetof(AudioDataWAV_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("data_offset","\x48","\xcc","\x50","\x43"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("seek","\x78","\x85","\x50","\x4c"),
	HX_HCSTRING("portion","\xe7","\xf0","\xab","\x83"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioDataWAV_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioDataWAV_obj::__mClass,"__mClass");
};

#endif

hx::Class AudioDataWAV_obj::__mClass;

void AudioDataWAV_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.core.native.audio.AudioDataWAV","\xd7","\x83","\x94","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioDataWAV_obj >;
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
