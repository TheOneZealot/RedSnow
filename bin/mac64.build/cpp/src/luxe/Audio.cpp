#include <hxcpp.h>

#ifndef INCLUDED_luxe_Audio
#include <luxe/Audio.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
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
namespace luxe{

Void Audio_obj::__construct(::luxe::Engine _core)
{
HX_STACK_FRAME("luxe.Audio","new",0x2e60e1f0,"luxe.Audio.new","luxe/Audio.hx",20,0xbb0b1481)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
{
	HX_STACK_LINE(20)
	this->core = _core;
}
;
	return null();
}

//Audio_obj::~Audio_obj() { }

Dynamic Audio_obj::__CreateEmpty() { return  new Audio_obj; }
hx::ObjectPtr< Audio_obj > Audio_obj::__new(::luxe::Engine _core)
{  hx::ObjectPtr< Audio_obj > _result_ = new Audio_obj();
	_result_->__construct(_core);
	return _result_;}

Dynamic Audio_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Audio_obj > _result_ = new Audio_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Audio_obj::on( int _event,Dynamic _handler){
{
		HX_STACK_FRAME("luxe.Audio","on",0xe819b18f,"luxe.Audio.on","luxe/Audio.hx",26,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(27)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		int tmp2 = _event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		Dynamic tmp3 = _handler;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		tmp1->on_Int(tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,on,(void))

bool Audio_obj::off( int _event,Dynamic _handler){
	HX_STACK_FRAME("luxe.Audio","off",0x2e61a4ff,"luxe.Audio.off","luxe/Audio.hx",30,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_LINE(31)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	int tmp2 = _event;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	Dynamic tmp3 = _handler;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	bool tmp4 = tmp1->off_Int(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(31)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,off,return )

Void Audio_obj::emit( int _event,Dynamic _handle){
{
		HX_STACK_FRAME("luxe.Audio","emit",0x6077eac3,"luxe.Audio.emit","luxe/Audio.hx",34,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_LINE(35)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		int tmp2 = _event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		Dynamic tmp3 = _handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		tmp1->emit_Int(tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,emit,(void))

Dynamic Audio_obj::play( ::snow::systems::audio::AudioSource _source,Dynamic __o__volume,Dynamic __o__paused){
Dynamic _volume = __o__volume.Default(((Float)1.0));
Dynamic _paused = __o__paused.Default(false);
	HX_STACK_FRAME("luxe.Audio","play",0x67bc7a64,"luxe.Audio.play","luxe/Audio.hx",38,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_source,"_source")
	HX_STACK_ARG(_volume,"_volume")
	HX_STACK_ARG(_paused,"_paused")
{
		HX_STACK_LINE(39)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		::snow::systems::audio::AudioSource tmp2 = _source;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		Dynamic tmp3 = _volume;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		Dynamic tmp4 = _paused;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(39)
		Dynamic tmp5 = tmp1->play(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,play,return )

Dynamic Audio_obj::loop( ::snow::systems::audio::AudioSource _source,Dynamic __o__volume,Dynamic __o__paused){
Dynamic _volume = __o__volume.Default(((Float)1.0));
Dynamic _paused = __o__paused.Default(false);
	HX_STACK_FRAME("luxe.Audio","loop",0x6519f2d4,"luxe.Audio.loop","luxe/Audio.hx",42,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_source,"_source")
	HX_STACK_ARG(_volume,"_volume")
	HX_STACK_ARG(_paused,"_paused")
{
		HX_STACK_LINE(43)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		::snow::systems::audio::AudioSource tmp2 = _source;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		Dynamic tmp3 = _volume;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		Dynamic tmp4 = _paused;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(43)
		Dynamic tmp5 = tmp1->loop(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(43)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,loop,return )

Void Audio_obj::pause( Dynamic _handle){
{
		HX_STACK_FRAME("luxe.Audio","pause",0x55f86c86,"luxe.Audio.pause","luxe/Audio.hx",46,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_LINE(47)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		Dynamic tmp2 = _handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		tmp1->pause(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,pause,(void))

Void Audio_obj::unpause( Dynamic _handle){
{
		HX_STACK_FRAME("luxe.Audio","unpause",0x2c05e78d,"luxe.Audio.unpause","luxe/Audio.hx",50,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_LINE(51)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		Dynamic tmp2 = _handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		tmp1->unpause(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,unpause,(void))

Void Audio_obj::stop( Dynamic _handle){
{
		HX_STACK_FRAME("luxe.Audio","stop",0x69be3c72,"luxe.Audio.stop","luxe/Audio.hx",54,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_LINE(55)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		Dynamic tmp2 = _handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		tmp1->stop(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,stop,(void))

Void Audio_obj::volume( Dynamic _handle,Float _volume){
{
		HX_STACK_FRAME("luxe.Audio","volume",0x5335724a,"luxe.Audio.volume","luxe/Audio.hx",58,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_ARG(_volume,"_volume")
		HX_STACK_LINE(59)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		Dynamic tmp2 = _handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		Float tmp3 = _volume;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		tmp1->volume(tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,volume,(void))

Void Audio_obj::pan( Dynamic _handle,Float _pan){
{
		HX_STACK_FRAME("luxe.Audio","pan",0x2e6262ed,"luxe.Audio.pan","luxe/Audio.hx",62,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_ARG(_pan,"_pan")
		HX_STACK_LINE(63)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		Dynamic tmp2 = _handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		Float tmp3 = _pan;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		tmp1->pan(tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,pan,(void))

Void Audio_obj::pitch( Dynamic _handle,Float _pitch){
{
		HX_STACK_FRAME("luxe.Audio","pitch",0x5b415150,"luxe.Audio.pitch","luxe/Audio.hx",66,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_ARG(_pitch,"_pitch")
		HX_STACK_LINE(67)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		Dynamic tmp2 = _handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		Float tmp3 = _pitch;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		tmp1->pitch(tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,pitch,(void))

Void Audio_obj::position( Dynamic _handle,Float _position){
{
		HX_STACK_FRAME("luxe.Audio","position",0x3253e519,"luxe.Audio.position","luxe/Audio.hx",70,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_ARG(_position,"_position")
		HX_STACK_LINE(71)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		Dynamic tmp2 = _handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		Float tmp3 = _position;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		tmp1->position(tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,position,(void))

int Audio_obj::state_of( Dynamic _handle){
	HX_STACK_FRAME("luxe.Audio","state_of",0xc6e0a635,"luxe.Audio.state_of","luxe/Audio.hx",74,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(75)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	Dynamic tmp2 = _handle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	int tmp3 = tmp1->state_of(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(75)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,state_of,return )

bool Audio_obj::loop_of( Dynamic _handle){
	HX_STACK_FRAME("luxe.Audio","loop_of",0x929300e2,"luxe.Audio.loop_of","luxe/Audio.hx",78,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(79)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	Dynamic tmp2 = _handle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	bool tmp3 = tmp1->loop_of(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(79)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,loop_of,return )

::snow::systems::audio::AudioInstance Audio_obj::instance_of( Dynamic _handle){
	HX_STACK_FRAME("luxe.Audio","instance_of",0x5bf2a451,"luxe.Audio.instance_of","luxe/Audio.hx",82,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(83)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	Dynamic tmp2 = _handle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	::snow::systems::audio::AudioInstance tmp3 = tmp1->instance_of(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(83)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,instance_of,return )

Float Audio_obj::volume_of( Dynamic _handle){
	HX_STACK_FRAME("luxe.Audio","volume_of",0x67700f2c,"luxe.Audio.volume_of","luxe/Audio.hx",86,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(87)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(87)
	Dynamic tmp2 = _handle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	Float tmp3 = tmp1->volume_of(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(87)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,volume_of,return )

Float Audio_obj::pan_of( Dynamic _handle){
	HX_STACK_FRAME("luxe.Audio","pan_of",0xdeb6e669,"luxe.Audio.pan_of","luxe/Audio.hx",90,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(91)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	Dynamic tmp2 = _handle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	Float tmp3 = tmp1->pan_of(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(91)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,pan_of,return )

Float Audio_obj::pitch_of( Dynamic _handle){
	HX_STACK_FRAME("luxe.Audio","pitch_of",0x22d0d7e6,"luxe.Audio.pitch_of","luxe/Audio.hx",94,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(95)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	Dynamic tmp2 = _handle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	Float tmp3 = tmp1->pitch_of(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(95)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,pitch_of,return )

Float Audio_obj::position_of( Dynamic _handle){
	HX_STACK_FRAME("luxe.Audio","position_of",0x323807bd,"luxe.Audio.position_of","luxe/Audio.hx",98,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(99)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	Dynamic tmp2 = _handle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(99)
	Float tmp3 = tmp1->position_of(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(99)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,position_of,return )

Void Audio_obj::suspend( ){
{
		HX_STACK_FRAME("luxe.Audio","suspend",0x696c490c,"luxe.Audio.suspend","luxe/Audio.hx",102,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_LINE(103)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(103)
		tmp1->suspend();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,suspend,(void))

Void Audio_obj::resume( ){
{
		HX_STACK_FRAME("luxe.Audio","resume",0xfc66b21d,"luxe.Audio.resume","luxe/Audio.hx",106,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_LINE(107)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		tmp1->resume();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,resume,(void))

bool Audio_obj::get_active( ){
	HX_STACK_FRAME("luxe.Audio","get_active",0xea54f1ff,"luxe.Audio.get_active","luxe/Audio.hx",112,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_LINE(112)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	bool tmp2 = tmp1->active;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(112)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,get_active,return )

bool Audio_obj::set_active( bool _val){
	HX_STACK_FRAME("luxe.Audio","set_active",0xedd29073,"luxe.Audio.set_active","luxe/Audio.hx",113,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(113)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	bool tmp2 = tmp1->active = _val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,set_active,return )

Void Audio_obj::init( ){
{
		HX_STACK_FRAME("luxe.Audio","init",0x631d8780,"luxe.Audio.init","luxe/Log.hx",138,0xe5312153)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,init,(void))

Void Audio_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Audio","destroy",0x96a3468a,"luxe.Audio.destroy","luxe/Log.hx",138,0xe5312153)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,destroy,(void))

Void Audio_obj::process( ){
{
		HX_STACK_FRAME("luxe.Audio","process",0x6367bbff,"luxe.Audio.process","luxe/Audio.hx",129,0xbb0b1481)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,process,(void))


Audio_obj::Audio_obj()
{
}

void Audio_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Audio);
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_END_CLASS();
}

void Audio_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(core,"core");
}

Dynamic Audio_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { return on_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"off") ) { return off_dyn(); }
		if (HX_FIELD_EQ(inName,"pan") ) { return pan_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"emit") ) { return emit_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"pitch") ) { return pitch_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { if (inCallProp == hx::paccAlways) return get_active(); }
		if (HX_FIELD_EQ(inName,"volume") ) { return volume_dyn(); }
		if (HX_FIELD_EQ(inName,"pan_of") ) { return pan_of_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unpause") ) { return unpause_dyn(); }
		if (HX_FIELD_EQ(inName,"loop_of") ) { return loop_of_dyn(); }
		if (HX_FIELD_EQ(inName,"suspend") ) { return suspend_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position_dyn(); }
		if (HX_FIELD_EQ(inName,"state_of") ) { return state_of_dyn(); }
		if (HX_FIELD_EQ(inName,"pitch_of") ) { return pitch_of_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"volume_of") ) { return volume_of_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_active") ) { return get_active_dyn(); }
		if (HX_FIELD_EQ(inName,"set_active") ) { return set_active_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"instance_of") ) { return instance_of_dyn(); }
		if (HX_FIELD_EQ(inName,"position_of") ) { return position_of_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Audio_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Engine >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { if (inCallProp == hx::paccAlways) return set_active(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Audio_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Engine*/ ,(int)offsetof(Audio_obj,core),HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	HX_HCSTRING("on","\x1f","\x61","\x00","\x00"),
	HX_HCSTRING("off","\x6f","\x93","\x54","\x00"),
	HX_HCSTRING("emit","\x53","\x9e","\x15","\x43"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("unpause","\xfd","\xcd","\xe8","\xb9"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"),
	HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"),
	HX_HCSTRING("pitch","\xc0","\xbb","\xa0","\xc2"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("state_of","\xc5","\x61","\x87","\x5f"),
	HX_HCSTRING("loop_of","\x52","\xe7","\x75","\x20"),
	HX_HCSTRING("instance_of","\xc1","\x82","\x21","\x29"),
	HX_HCSTRING("volume_of","\x9c","\x71","\xad","\x60"),
	HX_HCSTRING("pan_of","\xf9","\x9d","\xd4","\xea"),
	HX_HCSTRING("pitch_of","\x76","\x93","\x77","\xbb"),
	HX_HCSTRING("position_of","\x2d","\xe6","\x66","\xff"),
	HX_HCSTRING("suspend","\x7c","\x2f","\x4f","\xf7"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("get_active","\x8f","\xb1","\xcd","\x06"),
	HX_HCSTRING("set_active","\x03","\x50","\x4b","\x0a"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
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

void Audio_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Audio","\xfe","\x69","\x75","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
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

} // end namespace luxe
