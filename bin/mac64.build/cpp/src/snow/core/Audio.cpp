#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_core_Audio
#include <snow/core/Audio.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Audio
#include <snow/modules/interfaces/Audio.h>
#endif
#ifndef INCLUDED_snow_systems_audio_AudioInstance
#include <snow/systems/audio/AudioInstance.h>
#endif
#ifndef INCLUDED_snow_systems_audio_AudioSource
#include <snow/systems/audio/AudioSource.h>
#endif
#ifndef INCLUDED_snow_types_SystemEvent
#include <snow/types/SystemEvent.h>
#endif
namespace snow{
namespace core{

Void Audio_obj::__construct(::snow::Snow _app)
{
HX_STACK_FRAME("snow.core.Audio","new",0x796c0e64,"snow.core.Audio.new","snow/core/Audio.hx",10,0x9be785ec)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
{
	HX_STACK_LINE(13)
	this->active = false;
	HX_STACK_LINE(14)
	this->app = _app;
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
		HX_STACK_FRAME("snow.core.Audio","onevent",0x837e869f,"snow.core.Audio.onevent","snow/core/Audio.hx",15,0x9be785ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,onevent,(void))

Void Audio_obj::shutdown( ){
{
		HX_STACK_FRAME("snow.core.Audio","shutdown",0xb4c07012,"snow.core.Audio.shutdown","snow/core/Audio.hx",16,0x9be785ec)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,shutdown,(void))

Void Audio_obj::suspend( ){
{
		HX_STACK_FRAME("snow.core.Audio","suspend",0x01f8bf80,"snow.core.Audio.suspend","snow/core/Audio.hx",17,0x9be785ec)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,suspend,(void))

Void Audio_obj::resume( ){
{
		HX_STACK_FRAME("snow.core.Audio","resume",0x4c4bc629,"snow.core.Audio.resume","snow/core/Audio.hx",18,0x9be785ec)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,resume,(void))

::snow::api::Promise Audio_obj::data_from_load( ::String _path,Dynamic __o__is_stream,Dynamic _format){
Dynamic _is_stream = __o__is_stream.Default(false);
	HX_STACK_FRAME("snow.core.Audio","data_from_load",0x61e15342,"snow.core.Audio.data_from_load","snow/core/Audio.hx",20,0x9be785ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_is_stream,"_is_stream")
	HX_STACK_ARG(_format,"_format")
{
		HX_STACK_LINE(20)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,data_from_load,return )

::snow::api::Promise Audio_obj::data_from_bytes( ::String _id,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format){
	HX_STACK_FRAME("snow.core.Audio","data_from_bytes",0x87f047cf,"snow.core.Audio.data_from_bytes","snow/core/Audio.hx",21,0x9be785ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_ARG(_format,"_format")
	HX_STACK_LINE(21)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,data_from_bytes,return )

Dynamic Audio_obj::play( ::snow::systems::audio::AudioSource _source,Float _volume,bool _paused){
	HX_STACK_FRAME("snow.core.Audio","play",0xc6783370,"snow.core.Audio.play","snow/core/Audio.hx",23,0x9be785ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_source,"_source")
	HX_STACK_ARG(_volume,"_volume")
	HX_STACK_ARG(_paused,"_paused")
	HX_STACK_LINE(23)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,play,return )

Dynamic Audio_obj::loop( ::snow::systems::audio::AudioSource _source,Float _volume,bool _paused){
	HX_STACK_FRAME("snow.core.Audio","loop",0xc3d5abe0,"snow.core.Audio.loop","snow/core/Audio.hx",24,0x9be785ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_source,"_source")
	HX_STACK_ARG(_volume,"_volume")
	HX_STACK_ARG(_paused,"_paused")
	HX_STACK_LINE(24)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,loop,return )

Void Audio_obj::pause( Dynamic _handle){
{
		HX_STACK_FRAME("snow.core.Audio","pause",0xdb7e9dfa,"snow.core.Audio.pause","snow/core/Audio.hx",25,0x9be785ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,pause,(void))

Void Audio_obj::unpause( Dynamic _handle){
{
		HX_STACK_FRAME("snow.core.Audio","unpause",0xc4925e01,"snow.core.Audio.unpause","snow/core/Audio.hx",26,0x9be785ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,unpause,(void))

Void Audio_obj::stop( Dynamic _handle){
{
		HX_STACK_FRAME("snow.core.Audio","stop",0xc879f57e,"snow.core.Audio.stop","snow/core/Audio.hx",27,0x9be785ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,stop,(void))

Void Audio_obj::volume( Dynamic _handle,Float _volume){
{
		HX_STACK_FRAME("snow.core.Audio","volume",0xa31a8656,"snow.core.Audio.volume","snow/core/Audio.hx",29,0x9be785ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_ARG(_volume,"_volume")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,volume,(void))

Void Audio_obj::pan( Dynamic _handle,Float _pan){
{
		HX_STACK_FRAME("snow.core.Audio","pan",0x796d8f61,"snow.core.Audio.pan","snow/core/Audio.hx",30,0x9be785ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_ARG(_pan,"_pan")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,pan,(void))

Void Audio_obj::pitch( Dynamic _handle,Float _pitch){
{
		HX_STACK_FRAME("snow.core.Audio","pitch",0xe0c782c4,"snow.core.Audio.pitch","snow/core/Audio.hx",31,0x9be785ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_ARG(_pitch,"_pitch")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,pitch,(void))

Void Audio_obj::position( Dynamic _handle,Float _time){
{
		HX_STACK_FRAME("snow.core.Audio","position",0x14af1425,"snow.core.Audio.position","snow/core/Audio.hx",32,0x9be785ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_ARG(_time,"_time")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,position,(void))

Float Audio_obj::volume_of( Dynamic _handle){
	HX_STACK_FRAME("snow.core.Audio","volume_of",0x94de0aa0,"snow.core.Audio.volume_of","snow/core/Audio.hx",34,0x9be785ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(34)
	return ((Float)0.0);
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,volume_of,return )

Float Audio_obj::pan_of( Dynamic _handle){
	HX_STACK_FRAME("snow.core.Audio","pan_of",0x2e9bfa75,"snow.core.Audio.pan_of","snow/core/Audio.hx",35,0x9be785ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(35)
	return ((Float)0.0);
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,pan_of,return )

Float Audio_obj::pitch_of( Dynamic _handle){
	HX_STACK_FRAME("snow.core.Audio","pitch_of",0x052c06f2,"snow.core.Audio.pitch_of","snow/core/Audio.hx",36,0x9be785ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(36)
	return ((Float)0.0);
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,pitch_of,return )

Float Audio_obj::position_of( Dynamic _handle){
	HX_STACK_FRAME("snow.core.Audio","position_of",0x13b2c831,"snow.core.Audio.position_of","snow/core/Audio.hx",37,0x9be785ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(37)
	return ((Float)0.0);
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,position_of,return )

int Audio_obj::state_of( Dynamic _handle){
	HX_STACK_FRAME("snow.core.Audio","state_of",0xa93bd541,"snow.core.Audio.state_of","snow/core/Audio.hx",38,0x9be785ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(38)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,state_of,return )

bool Audio_obj::loop_of( Dynamic _handle){
	HX_STACK_FRAME("snow.core.Audio","loop_of",0x2b1f7756,"snow.core.Audio.loop_of","snow/core/Audio.hx",39,0x9be785ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(39)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,loop_of,return )

::snow::systems::audio::AudioInstance Audio_obj::instance_of( Dynamic _handle){
	HX_STACK_FRAME("snow.core.Audio","instance_of",0x3d6d64c5,"snow.core.Audio.instance_of","snow/core/Audio.hx",40,0x9be785ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(40)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,instance_of,return )

Dynamic Audio_obj::audio_format_from_path( ::String _path){
	HX_STACK_FRAME("snow.core.Audio","audio_format_from_path",0xeaf78ad7,"snow.core.Audio.audio_format_from_path","snow/core/Audio.hx",43,0x9be785ec)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_LINE(45)
	::String tmp = _path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	::String tmp1 = ::haxe::io::Path_obj::extension(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	::String _ext = tmp1;		HX_STACK_VAR(_ext,"_ext");
	HX_STACK_LINE(46)
	::String tmp2 = _ext;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	::String _switch_1 = (tmp2);
	if (  ( _switch_1==HX_HCSTRING("wav","\x2c","\xa1","\x5a","\x00"))){
		HX_STACK_LINE(47)
		tmp3 = ((Dynamic)((int)3));
	}
	else if (  ( _switch_1==HX_HCSTRING("ogg","\x4f","\x94","\x54","\x00"))){
		HX_STACK_LINE(48)
		tmp3 = ((Dynamic)((int)2));
	}
	else if (  ( _switch_1==HX_HCSTRING("pcm","\x1a","\x53","\x55","\x00"))){
		HX_STACK_LINE(49)
		tmp3 = ((Dynamic)((int)4));
	}
	else  {
		HX_STACK_LINE(50)
		tmp3 = ((Dynamic)((int)0));
	}
;
;
	HX_STACK_LINE(46)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,audio_format_from_path,return )


Audio_obj::Audio_obj()
{
}

void Audio_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Audio);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void Audio_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(active,"active");
}

Dynamic Audio_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		if (HX_FIELD_EQ(inName,"pan") ) { return pan_dyn(); }
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
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"volume") ) { return volume_dyn(); }
		if (HX_FIELD_EQ(inName,"pan_of") ) { return pan_of_dyn(); }
		break;
	case 7:
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
		if (HX_FIELD_EQ(inName,"volume_of") ) { return volume_of_dyn(); }
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
	}
	return super::__Field(inName,inCallProp);
}

bool Audio_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"audio_format_from_path") ) { outValue = audio_format_from_path_dyn(); return true;  }
	}
	return false;
}

Dynamic Audio_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Audio_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(Audio_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsBool,(int)offsetof(Audio_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("onevent","\x9b","\xf6","\xd4","\x78"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("suspend","\x7c","\x2f","\x4f","\xf7"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("data_from_load","\xc6","\x1a","\x6f","\x90"),
	HX_HCSTRING("data_from_bytes","\xcb","\x13","\x71","\x15"),
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
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Audio_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Audio_obj::__mClass,"__mClass");
};

#endif

hx::Class Audio_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("audio_format_from_path","\x5b","\x76","\x9e","\x5b"),
	::String(null()) };

void Audio_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.core.Audio","\x72","\x4c","\xec","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Audio_obj::__GetStatic;
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

} // end namespace snow
} // end namespace core
