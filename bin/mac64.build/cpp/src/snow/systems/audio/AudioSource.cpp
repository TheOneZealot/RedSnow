#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
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
namespace systems{
namespace audio{

Void AudioSource_obj::__construct(::snow::Snow _app,::snow::types::AudioData _data)
{
HX_STACK_FRAME("snow.systems.audio.AudioSource","new",0x40843996,"snow.systems.audio.AudioSource.new","snow/systems/audio/AudioSource.hx",8,0x74a7e05d)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
HX_STACK_ARG(_data,"_data")
{
	HX_STACK_LINE(19)
	this->stream_buffer_count = (int)2;
	HX_STACK_LINE(16)
	this->stream_buffer_length = (int)176400;
	HX_STACK_LINE(27)
	this->app = _app;
	HX_STACK_LINE(28)
	this->data = _data;
	HX_STACK_LINE(30)
	this->instances = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//AudioSource_obj::~AudioSource_obj() { }

Dynamic AudioSource_obj::__CreateEmpty() { return  new AudioSource_obj; }
hx::ObjectPtr< AudioSource_obj > AudioSource_obj::__new(::snow::Snow _app,::snow::types::AudioData _data)
{  hx::ObjectPtr< AudioSource_obj > _result_ = new AudioSource_obj();
	_result_->__construct(_app,_data);
	return _result_;}

Dynamic AudioSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioSource_obj > _result_ = new AudioSource_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::snow::systems::audio::AudioInstance AudioSource_obj::instance( Dynamic _handle){
	HX_STACK_FRAME("snow.systems.audio.AudioSource","instance",0x7bd9929f,"snow.systems.audio.AudioSource.instance","snow/systems/audio/AudioSource.hx",35,0x74a7e05d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(37)
	::snow::systems::audio::AudioInstance tmp = ::snow::systems::audio::AudioInstance_obj::__new(hx::ObjectPtr<OBJ_>(this),_handle);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	::snow::systems::audio::AudioInstance _instance = tmp;		HX_STACK_VAR(_instance,"_instance");
	HX_STACK_LINE(39)
	::snow::systems::audio::AudioInstance tmp1 = _instance;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	int tmp2 = this->instances->indexOf(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	bool tmp3 = (tmp2 == (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	if ((tmp3)){
		HX_STACK_LINE(40)
		::snow::systems::audio::AudioInstance tmp4 = _instance;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		this->instances->push(tmp4);
	}
	HX_STACK_LINE(43)
	::snow::systems::audio::AudioInstance tmp4 = _instance;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,instance,return )

Float AudioSource_obj::bytes_to_seconds( int _bytes){
	HX_STACK_FRAME("snow.systems.audio.AudioSource","bytes_to_seconds",0x78a40c19,"snow.systems.audio.AudioSource.bytes_to_seconds","snow/systems/audio/AudioSource.hx",48,0x74a7e05d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_LINE(51)
	int _bits_per_sample = (int)16;		HX_STACK_VAR(_bits_per_sample,"_bits_per_sample");
	HX_STACK_LINE(52)
	bool tmp = (_bits_per_sample == (int)16);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	if ((tmp)){
		HX_STACK_LINE(52)
		tmp1 = (int)2;
	}
	else{
		HX_STACK_LINE(52)
		tmp1 = (int)1;
	}
	HX_STACK_LINE(52)
	int _word = tmp1;		HX_STACK_VAR(_word,"_word");
	HX_STACK_LINE(53)
	::snow::types::AudioData tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	int tmp3 = tmp2->rate;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	::snow::types::AudioData tmp4 = this->data;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(53)
	int tmp5 = tmp4->channels;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(53)
	int tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(53)
	int tmp7 = _word;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(53)
	int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(53)
	int _sample_frames = tmp8;		HX_STACK_VAR(_sample_frames,"_sample_frames");
	HX_STACK_LINE(55)
	Float tmp9 = (Float(_bytes) / Float(_sample_frames));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(55)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,bytes_to_seconds,return )

int AudioSource_obj::seconds_to_bytes( Float _seconds){
	HX_STACK_FRAME("snow.systems.audio.AudioSource","seconds_to_bytes",0x3f4e0971,"snow.systems.audio.AudioSource.seconds_to_bytes","snow/systems/audio/AudioSource.hx",60,0x74a7e05d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_seconds,"_seconds")
	HX_STACK_LINE(63)
	int _bits_per_sample = (int)16;		HX_STACK_VAR(_bits_per_sample,"_bits_per_sample");
	HX_STACK_LINE(64)
	bool tmp = (_bits_per_sample == (int)16);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	if ((tmp)){
		HX_STACK_LINE(64)
		tmp1 = (int)2;
	}
	else{
		HX_STACK_LINE(64)
		tmp1 = (int)1;
	}
	HX_STACK_LINE(64)
	int _word = tmp1;		HX_STACK_VAR(_word,"_word");
	HX_STACK_LINE(65)
	::snow::types::AudioData tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	int tmp3 = tmp2->rate;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	::snow::types::AudioData tmp4 = this->data;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(65)
	int tmp5 = tmp4->channels;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(65)
	int tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(65)
	int tmp7 = _word;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(65)
	int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(65)
	int _sample_frames = tmp8;		HX_STACK_VAR(_sample_frames,"_sample_frames");
	HX_STACK_LINE(67)
	Float tmp9 = (_seconds * _sample_frames);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(67)
	int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(67)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,seconds_to_bytes,return )

Float AudioSource_obj::duration( ){
	HX_STACK_FRAME("snow.systems.audio.AudioSource","duration",0x3686825e,"snow.systems.audio.AudioSource.duration","snow/systems/audio/AudioSource.hx",72,0x74a7e05d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	::snow::types::AudioData tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	Float tmp2 = this->bytes_to_seconds(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,duration,return )

Void AudioSource_obj::destroy( ){
{
		HX_STACK_FRAME("snow.systems.audio.AudioSource","destroy",0x67426930,"snow.systems.audio.AudioSource.destroy","snow/systems/audio/AudioSource.hx",78,0x74a7e05d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		int tmp = this->instances->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		int c = tmp;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(81)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(83)
		::snow::types::AudioData tmp1 = this->data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		::String tmp2 = tmp1->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		::String tmp3 = (HX_HCSTRING("destroy ","\xe6","\x2d","\xe1","\xd0") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		::String tmp4 = (tmp3 + HX_HCSTRING(", stream=","\xc9","\x2b","\x11","\x5e"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		::snow::types::AudioData tmp5 = this->data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		bool tmp6 = tmp5->is_stream;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(83)
		::String tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(83)
		::String tmp9 = (tmp8 + HX_HCSTRING(", instances=","\xb3","\x92","\xcc","\xd4"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(83)
		int tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(83)
		::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(83)
		::String tmp12 = (HX_HCSTRING("i / audiosource / ","\x08","\xf6","\x89","\x12") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(83)
		Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("AudioSource.hx","\x2d","\x7d","\xfa","\x43"),83,HX_HCSTRING("snow.systems.audio.AudioSource","\xa4","\x76","\x9e","\xc4"),HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(83)
		::haxe::Log_obj::trace(tmp12,tmp13);
		HX_STACK_LINE(85)
		::snow::Snow tmp14 = this->app;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(85)
		tmp14->audio->emit_snow_systems_audio_AudioSource((int)2,hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(87)
		while((true)){
			HX_STACK_LINE(87)
			bool tmp15 = (i < c);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(87)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(87)
			if ((tmp16)){
				HX_STACK_LINE(87)
				break;
			}
			HX_STACK_LINE(88)
			::snow::systems::audio::AudioInstance tmp17 = this->instances->pop().StaticCast< ::snow::systems::audio::AudioInstance >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(88)
			::snow::systems::audio::AudioInstance _instance = tmp17;		HX_STACK_VAR(_instance,"_instance");
			HX_STACK_LINE(89)
			_instance->destroy();
			HX_STACK_LINE(90)
			_instance = null();
			HX_STACK_LINE(91)
			(i)++;
		}
		HX_STACK_LINE(94)
		::snow::types::AudioData tmp15 = this->data;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(94)
		tmp15->destroy();
		HX_STACK_LINE(95)
		this->data = null();
		HX_STACK_LINE(96)
		this->instances = null();
		HX_STACK_LINE(97)
		this->app = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,destroy,(void))

Void AudioSource_obj::instance_killed( ::snow::systems::audio::AudioInstance _instance){
{
		HX_STACK_FRAME("snow.systems.audio.AudioSource","instance_killed",0xe0207c5d,"snow.systems.audio.AudioSource.instance_killed","snow/systems/audio/AudioSource.hx",102,0x74a7e05d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_instance,"_instance")
		HX_STACK_LINE(104)
		::snow::systems::audio::AudioInstance tmp = _instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		this->instances->remove(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,instance_killed,(void))


AudioSource_obj::AudioSource_obj()
{
}

void AudioSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioSource);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(stream_buffer_length,"stream_buffer_length");
	HX_MARK_MEMBER_NAME(stream_buffer_count,"stream_buffer_count");
	HX_MARK_MEMBER_NAME(instances,"instances");
	HX_MARK_END_CLASS();
}

void AudioSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(stream_buffer_length,"stream_buffer_length");
	HX_VISIT_MEMBER_NAME(stream_buffer_count,"stream_buffer_count");
	HX_VISIT_MEMBER_NAME(instances,"instances");
}

Dynamic AudioSource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance_dyn(); }
		if (HX_FIELD_EQ(inName,"duration") ) { return duration_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { return instances; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"instance_killed") ) { return instance_killed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bytes_to_seconds") ) { return bytes_to_seconds_dyn(); }
		if (HX_FIELD_EQ(inName,"seconds_to_bytes") ) { return seconds_to_bytes_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"stream_buffer_count") ) { return stream_buffer_count; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"stream_buffer_length") ) { return stream_buffer_length; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioSource_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::snow::types::AudioData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { instances=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"stream_buffer_count") ) { stream_buffer_count=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"stream_buffer_length") ) { stream_buffer_length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("stream_buffer_length","\x46","\x6e","\x35","\xc0"));
	outFields->push(HX_HCSTRING("stream_buffer_count","\x6f","\xb7","\xd9","\xd0"));
	outFields->push(HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(AudioSource_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsObject /*::snow::types::AudioData*/ ,(int)offsetof(AudioSource_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,stream_buffer_length),HX_HCSTRING("stream_buffer_length","\x46","\x6e","\x35","\xc0")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,stream_buffer_count),HX_HCSTRING("stream_buffer_count","\x6f","\xb7","\xd9","\xd0")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AudioSource_obj,instances),HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("stream_buffer_length","\x46","\x6e","\x35","\xc0"),
	HX_HCSTRING("stream_buffer_count","\x6f","\xb7","\xd9","\xd0"),
	HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("bytes_to_seconds","\x0f","\x7f","\x12","\xef"),
	HX_HCSTRING("seconds_to_bytes","\x67","\x7c","\xbc","\xb5"),
	HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("instance_killed","\x27","\x1a","\xdc","\x6d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
};

#endif

hx::Class AudioSource_obj::__mClass;

void AudioSource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.systems.audio.AudioSource","\xa4","\x76","\x9e","\xc4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioSource_obj >;
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
} // end namespace systems
} // end namespace audio
