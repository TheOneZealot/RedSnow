#include <hxcpp.h>

#include "linc_timestamp.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Audio
#include <luxe/Audio.h>
#endif
#ifndef INCLUDED_luxe_Camera
#include <luxe/Camera.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Events
#include <luxe/Events.h>
#endif
#ifndef INCLUDED_luxe_IO
#include <luxe/IO.h>
#endif
#ifndef INCLUDED_luxe_Input
#include <luxe/Input.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Physics
#include <luxe/Physics.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_Scene
#include <luxe/Scene.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Timer
#include <luxe/Timer.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_core_Runtime
#include <snow/core/Runtime.h>
#endif
#ifndef INCLUDED_snow_core_native_Runtime
#include <snow/core/native/Runtime.h>
#endif
#ifndef INCLUDED_snow_modules_sdl_Runtime
#include <snow/modules/sdl/Runtime.h>
#endif

Void Luxe_obj::__construct()
{
	return null();
}

//Luxe_obj::~Luxe_obj() { }

Dynamic Luxe_obj::__CreateEmpty() { return  new Luxe_obj; }
hx::ObjectPtr< Luxe_obj > Luxe_obj::__new()
{  hx::ObjectPtr< Luxe_obj > _result_ = new Luxe_obj();
	_result_->__construct();
	return _result_;}

Dynamic Luxe_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Luxe_obj > _result_ = new Luxe_obj();
	_result_->__construct();
	return _result_;}

::luxe::Engine Luxe_obj::core;

::luxe::Debug Luxe_obj::debug;

::luxe::IO Luxe_obj::io;

::luxe::Draw Luxe_obj::draw;

::luxe::Audio Luxe_obj::audio;

::luxe::Timer Luxe_obj::timer;

::luxe::Events Luxe_obj::events;

::luxe::Input Luxe_obj::input;

::luxe::Scene Luxe_obj::scene;

::luxe::utils::Utils Luxe_obj::utils;

::luxe::Physics Luxe_obj::physics;

::luxe::Camera Luxe_obj::camera;

::luxe::Resources Luxe_obj::resources;

::phoenix::Renderer Luxe_obj::renderer;

Void Luxe_obj::on( int event,Dynamic handler){
{
		HX_STACK_FRAME("Luxe","on",0x7b1beab7,"Luxe.on","Luxe.hx",103,0x7b1be4a8)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(104)
		::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		int tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		tmp->emitter->on(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Luxe_obj,on,(void))

bool Luxe_obj::off( int event,Dynamic handler){
	HX_STACK_FRAME("Luxe","off",0x3d516ed7,"Luxe.off","Luxe.hx",108,0x7b1be4a8)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(109)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	int tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(109)
	Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(109)
	bool tmp3 = tmp->emitter->off(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(109)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Luxe_obj,off,return )

Void Luxe_obj::next( Dynamic func){
{
		HX_STACK_FRAME("Luxe","next",0x6945a48b,"Luxe.next","Luxe.hx",115,0x7b1be4a8)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(115)
		bool tmp = (func != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		if ((tmp)){
			HX_STACK_LINE(115)
			Dynamic tmp1 = func;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(115)
			::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,next,(void))

Void Luxe_obj::shutdown( ){
{
		HX_STACK_FRAME("Luxe","shutdown",0x59b2c82e,"Luxe.shutdown","Luxe.hx",120,0x7b1be4a8)
		HX_STACK_LINE(122)
		::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		tmp->shutdown();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,shutdown,(void))

Void Luxe_obj::showConsole( bool _show){
{
		HX_STACK_FRAME("Luxe","showConsole",0xc5540b42,"Luxe.showConsole","Luxe.hx",127,0x7b1be4a8)
		HX_STACK_ARG(_show,"_show")
		HX_STACK_LINE(129)
		::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		bool tmp1 = _show;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(129)
		tmp->debug->set_visible(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,showConsole,(void))

::snow::Snow Luxe_obj::get_snow( ){
	HX_STACK_FRAME("Luxe","get_snow",0xbab8e9a4,"Luxe.get_snow","Luxe.hx",135,0x7b1be4a8)
	HX_STACK_LINE(135)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	::snow::Snow tmp1 = tmp->app;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(135)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_snow,return )

::luxe::Screen Luxe_obj::get_screen( ){
	HX_STACK_FRAME("Luxe","get_screen",0x36878ccd,"Luxe.get_screen","Luxe.hx",136,0x7b1be4a8)
	HX_STACK_LINE(136)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	::luxe::Screen tmp1 = tmp->screen;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_screen,return )

Float Luxe_obj::get_time( ){
	HX_STACK_FRAME("Luxe","get_time",0xbb5e532e,"Luxe.get_time","Luxe.hx",137,0x7b1be4a8)
	HX_STACK_LINE(137)
	Float tmp = linc::timestamp::now();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	Float tmp1 = ::snow::modules::sdl::Runtime_obj::timestamp_start;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(137)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_time,return )

::String Luxe_obj::get_version( ){
	HX_STACK_FRAME("Luxe","get_version",0xd2ceca97,"Luxe.get_version","Luxe.hx",138,0x7b1be4a8)
	HX_STACK_LINE(138)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	::String tmp1 = tmp->version;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_version,return )

::String Luxe_obj::get_build( ){
	HX_STACK_FRAME("Luxe","get_build",0xe1df90ed,"Luxe.get_build","Luxe.hx",139,0x7b1be4a8)
	HX_STACK_LINE(139)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	::String tmp1 = tmp->build;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(139)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_build,return )

Float Luxe_obj::get_dt( ){
	HX_STACK_FRAME("Luxe","get_dt",0xb22c2471,"Luxe.get_dt","Luxe.hx",141,0x7b1be4a8)
	HX_STACK_LINE(141)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	Float tmp1 = tmp->frame_delta;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(141)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_dt,return )

Float Luxe_obj::get_frame_start( ){
	HX_STACK_FRAME("Luxe","get_frame_start",0xb314228f,"Luxe.get_frame_start","Luxe.hx",142,0x7b1be4a8)
	HX_STACK_LINE(142)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	Float tmp1 = tmp->frame_start;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(142)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_frame_start,return )

Float Luxe_obj::get_frame_start_prev( ){
	HX_STACK_FRAME("Luxe","get_frame_start_prev",0xf12911e3,"Luxe.get_frame_start_prev","Luxe.hx",143,0x7b1be4a8)
	HX_STACK_LINE(143)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	Float tmp1 = tmp->frame_start_prev;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(143)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_frame_start_prev,return )

Float Luxe_obj::get_frame_max_delta( ){
	HX_STACK_FRAME("Luxe","get_frame_max_delta",0xc304958a,"Luxe.get_frame_max_delta","Luxe.hx",144,0x7b1be4a8)
	HX_STACK_LINE(144)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	Float tmp1 = tmp->frame_max_delta;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(144)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_frame_max_delta,return )

Float Luxe_obj::get_update_rate( ){
	HX_STACK_FRAME("Luxe","get_update_rate",0xda8e7715,"Luxe.get_update_rate","Luxe.hx",145,0x7b1be4a8)
	HX_STACK_LINE(145)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	Float tmp1 = tmp->update_rate;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_update_rate,return )

Float Luxe_obj::get_tick_start( ){
	HX_STACK_FRAME("Luxe","get_tick_start",0xc1b4f8a1,"Luxe.get_tick_start","Luxe.hx",146,0x7b1be4a8)
	HX_STACK_LINE(146)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	Float tmp1 = tmp->tick_start;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_tick_start,return )

Float Luxe_obj::get_tick_start_prev( ){
	HX_STACK_FRAME("Luxe","get_tick_start_prev",0x702cfa91,"Luxe.get_tick_start_prev","Luxe.hx",147,0x7b1be4a8)
	HX_STACK_LINE(147)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	Float tmp1 = tmp->tick_start_prev;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_tick_start_prev,return )

Float Luxe_obj::get_tick_delta( ){
	HX_STACK_FRAME("Luxe","get_tick_delta",0x14d06c37,"Luxe.get_tick_delta","Luxe.hx",148,0x7b1be4a8)
	HX_STACK_LINE(148)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	Float tmp1 = tmp->tick_delta;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_tick_delta,return )

Float Luxe_obj::get_timescale( ){
	HX_STACK_FRAME("Luxe","get_timescale",0xcc0e349c,"Luxe.get_timescale","Luxe.hx",149,0x7b1be4a8)
	HX_STACK_LINE(149)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	Float tmp1 = tmp->timescale;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_timescale,return )

Float Luxe_obj::get_sim_time( ){
	HX_STACK_FRAME("Luxe","get_sim_time",0x20556116,"Luxe.get_sim_time","Luxe.hx",150,0x7b1be4a8)
	HX_STACK_LINE(150)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	Float tmp1 = tmp->sim_time;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_sim_time,return )

Float Luxe_obj::get_sim_delta( ){
	HX_STACK_FRAME("Luxe","get_sim_delta",0xf150bacf,"Luxe.get_sim_delta","Luxe.hx",151,0x7b1be4a8)
	HX_STACK_LINE(151)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	Float tmp1 = tmp->sim_delta;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(151)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_sim_delta,return )

Float Luxe_obj::get_fixed_delta( ){
	HX_STACK_FRAME("Luxe","get_fixed_delta",0x4418c6ac,"Luxe.get_fixed_delta","Luxe.hx",152,0x7b1be4a8)
	HX_STACK_LINE(152)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	Float tmp1 = tmp->fixed_delta;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_fixed_delta,return )

bool Luxe_obj::get_fixed_timestep( ){
	HX_STACK_FRAME("Luxe","get_fixed_timestep",0xb5eb87a5,"Luxe.get_fixed_timestep","Luxe.hx",153,0x7b1be4a8)
	HX_STACK_LINE(153)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	bool tmp1 = tmp->fixed_timestep;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_fixed_timestep,return )

Float Luxe_obj::get_fixed_alpha( ){
	HX_STACK_FRAME("Luxe","get_fixed_alpha",0x8e888612,"Luxe.get_fixed_alpha","Luxe.hx",154,0x7b1be4a8)
	HX_STACK_LINE(154)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	Float tmp1 = tmp->fixed_alpha;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_fixed_alpha,return )

Float Luxe_obj::get_fixed_frame_time( ){
	HX_STACK_FRAME("Luxe","get_fixed_frame_time",0x8bcd016b,"Luxe.get_fixed_frame_time","Luxe.hx",155,0x7b1be4a8)
	HX_STACK_LINE(155)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	Float tmp1 = tmp->fixed_frame_time;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(155)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_fixed_frame_time,return )

Float Luxe_obj::set_timescale( Float _val){
	HX_STACK_FRAME("Luxe","set_timescale",0x111416a8,"Luxe.set_timescale","Luxe.hx",157,0x7b1be4a8)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(157)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	Float tmp1 = tmp->timescale = _val;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_timescale,return )

Float Luxe_obj::set_fixed_delta( Float _val){
	HX_STACK_FRAME("Luxe","set_fixed_delta",0x3fe443b8,"Luxe.set_fixed_delta","Luxe.hx",158,0x7b1be4a8)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(158)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	Float tmp1 = tmp->fixed_delta = _val;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_fixed_delta,return )

Float Luxe_obj::set_update_rate( Float _val){
	HX_STACK_FRAME("Luxe","set_update_rate",0xd659f421,"Luxe.set_update_rate","Luxe.hx",159,0x7b1be4a8)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(159)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	Float tmp1 = tmp->update_rate = _val;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(159)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_update_rate,return )

bool Luxe_obj::set_fixed_timestep( bool _val){
	HX_STACK_FRAME("Luxe","set_fixed_timestep",0x929aba19,"Luxe.set_fixed_timestep","Luxe.hx",160,0x7b1be4a8)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(160)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	bool tmp1 = tmp->fixed_timestep = _val;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_fixed_timestep,return )

Float Luxe_obj::set_frame_max_delta( Float _val){
	HX_STACK_FRAME("Luxe","set_frame_max_delta",0xffa18896,"Luxe.set_frame_max_delta","Luxe.hx",161,0x7b1be4a8)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(161)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	Float tmp1 = tmp->frame_max_delta = _val;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(161)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_frame_max_delta,return )

Float Luxe_obj::set_fixed_frame_time( Float _val){
	HX_STACK_FRAME("Luxe","set_fixed_frame_time",0x5884b8df,"Luxe.set_fixed_frame_time","Luxe.hx",162,0x7b1be4a8)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(162)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	Float tmp1 = tmp->fixed_frame_time = _val;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(162)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_fixed_frame_time,return )


Luxe_obj::Luxe_obj()
{
}

bool Luxe_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"io") ) { outValue = io; return true;  }
		if (HX_FIELD_EQ(inName,"dt") ) { if (inCallProp == hx::paccAlways) { outValue = get_dt(); return true; } }
		if (HX_FIELD_EQ(inName,"on") ) { outValue = on_dyn(); return true;  }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"off") ) { outValue = off_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { outValue = core; return true;  }
		if (HX_FIELD_EQ(inName,"draw") ) { outValue = draw; return true;  }
		if (HX_FIELD_EQ(inName,"snow") ) { if (inCallProp == hx::paccAlways) { outValue = get_snow(); return true; } }
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == hx::paccAlways) { outValue = get_time(); return true; } }
		if (HX_FIELD_EQ(inName,"next") ) { outValue = next_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { outValue = debug; return true;  }
		if (HX_FIELD_EQ(inName,"audio") ) { outValue = audio; return true;  }
		if (HX_FIELD_EQ(inName,"timer") ) { outValue = timer; return true;  }
		if (HX_FIELD_EQ(inName,"input") ) { outValue = input; return true;  }
		if (HX_FIELD_EQ(inName,"scene") ) { outValue = scene; return true;  }
		if (HX_FIELD_EQ(inName,"utils") ) { outValue = utils; return true;  }
		if (HX_FIELD_EQ(inName,"build") ) { if (inCallProp == hx::paccAlways) { outValue = get_build(); return true; } }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { outValue = events; return true;  }
		if (HX_FIELD_EQ(inName,"camera") ) { outValue = camera; return true;  }
		if (HX_FIELD_EQ(inName,"screen") ) { if (inCallProp == hx::paccAlways) { outValue = get_screen(); return true; } }
		if (HX_FIELD_EQ(inName,"get_dt") ) { outValue = get_dt_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"physics") ) { outValue = physics; return true;  }
		if (HX_FIELD_EQ(inName,"version") ) { if (inCallProp == hx::paccAlways) { outValue = get_version(); return true; } }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { outValue = renderer; return true;  }
		if (HX_FIELD_EQ(inName,"sim_time") ) { if (inCallProp == hx::paccAlways) { outValue = get_sim_time(); return true; } }
		if (HX_FIELD_EQ(inName,"shutdown") ) { outValue = shutdown_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_snow") ) { outValue = get_snow_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_time") ) { outValue = get_time_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resources") ) { outValue = resources; return true;  }
		if (HX_FIELD_EQ(inName,"timescale") ) { if (inCallProp == hx::paccAlways) { outValue = get_timescale(); return true; } }
		if (HX_FIELD_EQ(inName,"sim_delta") ) { if (inCallProp == hx::paccAlways) { outValue = get_sim_delta(); return true; } }
		if (HX_FIELD_EQ(inName,"get_build") ) { outValue = get_build_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tick_start") ) { if (inCallProp == hx::paccAlways) { outValue = get_tick_start(); return true; } }
		if (HX_FIELD_EQ(inName,"tick_delta") ) { if (inCallProp == hx::paccAlways) { outValue = get_tick_delta(); return true; } }
		if (HX_FIELD_EQ(inName,"get_screen") ) { outValue = get_screen_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frame_start") ) { if (inCallProp == hx::paccAlways) { outValue = get_frame_start(); return true; } }
		if (HX_FIELD_EQ(inName,"update_rate") ) { if (inCallProp == hx::paccAlways) { outValue = get_update_rate(); return true; } }
		if (HX_FIELD_EQ(inName,"fixed_delta") ) { if (inCallProp == hx::paccAlways) { outValue = get_fixed_delta(); return true; } }
		if (HX_FIELD_EQ(inName,"fixed_alpha") ) { if (inCallProp == hx::paccAlways) { outValue = get_fixed_alpha(); return true; } }
		if (HX_FIELD_EQ(inName,"showConsole") ) { outValue = showConsole_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_version") ) { outValue = get_version_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_sim_time") ) { outValue = get_sim_time_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_timescale") ) { outValue = get_timescale_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_sim_delta") ) { outValue = get_sim_delta_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_timescale") ) { outValue = set_timescale_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fixed_timestep") ) { if (inCallProp == hx::paccAlways) { outValue = get_fixed_timestep(); return true; } }
		if (HX_FIELD_EQ(inName,"get_tick_start") ) { outValue = get_tick_start_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_tick_delta") ) { outValue = get_tick_delta_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"frame_max_delta") ) { if (inCallProp == hx::paccAlways) { outValue = get_frame_max_delta(); return true; } }
		if (HX_FIELD_EQ(inName,"tick_start_prev") ) { if (inCallProp == hx::paccAlways) { outValue = get_tick_start_prev(); return true; } }
		if (HX_FIELD_EQ(inName,"get_frame_start") ) { outValue = get_frame_start_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_update_rate") ) { outValue = get_update_rate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_fixed_delta") ) { outValue = get_fixed_delta_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_fixed_alpha") ) { outValue = get_fixed_alpha_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_fixed_delta") ) { outValue = set_fixed_delta_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_update_rate") ) { outValue = set_update_rate_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"frame_start_prev") ) { if (inCallProp == hx::paccAlways) { outValue = get_frame_start_prev(); return true; } }
		if (HX_FIELD_EQ(inName,"fixed_frame_time") ) { if (inCallProp == hx::paccAlways) { outValue = get_fixed_frame_time(); return true; } }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_fixed_timestep") ) { outValue = get_fixed_timestep_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_fixed_timestep") ) { outValue = set_fixed_timestep_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_frame_max_delta") ) { outValue = get_frame_max_delta_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_tick_start_prev") ) { outValue = get_tick_start_prev_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_frame_max_delta") ) { outValue = set_frame_max_delta_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_frame_start_prev") ) { outValue = get_frame_start_prev_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_fixed_frame_time") ) { outValue = get_fixed_frame_time_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_fixed_frame_time") ) { outValue = set_fixed_frame_time_dyn(); return true;  }
	}
	return false;
}

bool Luxe_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"io") ) { io=ioValue.Cast< ::luxe::IO >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=ioValue.Cast< ::luxe::Engine >(); return true; }
		if (HX_FIELD_EQ(inName,"draw") ) { draw=ioValue.Cast< ::luxe::Draw >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { debug=ioValue.Cast< ::luxe::Debug >(); return true; }
		if (HX_FIELD_EQ(inName,"audio") ) { audio=ioValue.Cast< ::luxe::Audio >(); return true; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=ioValue.Cast< ::luxe::Timer >(); return true; }
		if (HX_FIELD_EQ(inName,"input") ) { input=ioValue.Cast< ::luxe::Input >(); return true; }
		if (HX_FIELD_EQ(inName,"scene") ) { scene=ioValue.Cast< ::luxe::Scene >(); return true; }
		if (HX_FIELD_EQ(inName,"utils") ) { utils=ioValue.Cast< ::luxe::utils::Utils >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { events=ioValue.Cast< ::luxe::Events >(); return true; }
		if (HX_FIELD_EQ(inName,"camera") ) { camera=ioValue.Cast< ::luxe::Camera >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"physics") ) { physics=ioValue.Cast< ::luxe::Physics >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=ioValue.Cast< ::phoenix::Renderer >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resources") ) { resources=ioValue.Cast< ::luxe::Resources >(); return true; }
		if (HX_FIELD_EQ(inName,"timescale") ) { if (inCallProp == hx::paccAlways)  ioValue = set_timescale(ioValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"update_rate") ) { if (inCallProp == hx::paccAlways)  ioValue = set_update_rate(ioValue); }
		if (HX_FIELD_EQ(inName,"fixed_delta") ) { if (inCallProp == hx::paccAlways)  ioValue = set_fixed_delta(ioValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fixed_timestep") ) { if (inCallProp == hx::paccAlways)  ioValue = set_fixed_timestep(ioValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"frame_max_delta") ) { if (inCallProp == hx::paccAlways)  ioValue = set_frame_max_delta(ioValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fixed_frame_time") ) { if (inCallProp == hx::paccAlways)  ioValue = set_fixed_frame_time(ioValue); }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::luxe::Engine*/ ,(void *) &Luxe_obj::core,HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{hx::fsObject /*::luxe::Debug*/ ,(void *) &Luxe_obj::debug,HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7")},
	{hx::fsObject /*::luxe::IO*/ ,(void *) &Luxe_obj::io,HX_HCSTRING("io","\xe6","\x5b","\x00","\x00")},
	{hx::fsObject /*::luxe::Draw*/ ,(void *) &Luxe_obj::draw,HX_HCSTRING("draw","\x04","\x2c","\x70","\x42")},
	{hx::fsObject /*::luxe::Audio*/ ,(void *) &Luxe_obj::audio,HX_HCSTRING("audio","\xd6","\x78","\x80","\x27")},
	{hx::fsObject /*::luxe::Timer*/ ,(void *) &Luxe_obj::timer,HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{hx::fsObject /*::luxe::Events*/ ,(void *) &Luxe_obj::events,HX_HCSTRING("events","\x19","\x4f","\x6a","\x96")},
	{hx::fsObject /*::luxe::Input*/ ,(void *) &Luxe_obj::input,HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsObject /*::luxe::Scene*/ ,(void *) &Luxe_obj::scene,HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78")},
	{hx::fsObject /*::luxe::utils::Utils*/ ,(void *) &Luxe_obj::utils,HX_HCSTRING("utils","\x31","\xaa","\xde","\xaa")},
	{hx::fsObject /*::luxe::Physics*/ ,(void *) &Luxe_obj::physics,HX_HCSTRING("physics","\xc7","\x38","\x51","\xbe")},
	{hx::fsObject /*::luxe::Camera*/ ,(void *) &Luxe_obj::camera,HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7")},
	{hx::fsObject /*::luxe::Resources*/ ,(void *) &Luxe_obj::resources,HX_HCSTRING("resources","\xe5","\xd7","\xb0","\x39")},
	{hx::fsObject /*::phoenix::Renderer*/ ,(void *) &Luxe_obj::renderer,HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Luxe_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Luxe_obj::core,"core");
	HX_MARK_MEMBER_NAME(Luxe_obj::debug,"debug");
	HX_MARK_MEMBER_NAME(Luxe_obj::io,"io");
	HX_MARK_MEMBER_NAME(Luxe_obj::draw,"draw");
	HX_MARK_MEMBER_NAME(Luxe_obj::audio,"audio");
	HX_MARK_MEMBER_NAME(Luxe_obj::timer,"timer");
	HX_MARK_MEMBER_NAME(Luxe_obj::events,"events");
	HX_MARK_MEMBER_NAME(Luxe_obj::input,"input");
	HX_MARK_MEMBER_NAME(Luxe_obj::scene,"scene");
	HX_MARK_MEMBER_NAME(Luxe_obj::utils,"utils");
	HX_MARK_MEMBER_NAME(Luxe_obj::physics,"physics");
	HX_MARK_MEMBER_NAME(Luxe_obj::camera,"camera");
	HX_MARK_MEMBER_NAME(Luxe_obj::resources,"resources");
	HX_MARK_MEMBER_NAME(Luxe_obj::renderer,"renderer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Luxe_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Luxe_obj::core,"core");
	HX_VISIT_MEMBER_NAME(Luxe_obj::debug,"debug");
	HX_VISIT_MEMBER_NAME(Luxe_obj::io,"io");
	HX_VISIT_MEMBER_NAME(Luxe_obj::draw,"draw");
	HX_VISIT_MEMBER_NAME(Luxe_obj::audio,"audio");
	HX_VISIT_MEMBER_NAME(Luxe_obj::timer,"timer");
	HX_VISIT_MEMBER_NAME(Luxe_obj::events,"events");
	HX_VISIT_MEMBER_NAME(Luxe_obj::input,"input");
	HX_VISIT_MEMBER_NAME(Luxe_obj::scene,"scene");
	HX_VISIT_MEMBER_NAME(Luxe_obj::utils,"utils");
	HX_VISIT_MEMBER_NAME(Luxe_obj::physics,"physics");
	HX_VISIT_MEMBER_NAME(Luxe_obj::camera,"camera");
	HX_VISIT_MEMBER_NAME(Luxe_obj::resources,"resources");
	HX_VISIT_MEMBER_NAME(Luxe_obj::renderer,"renderer");
};

#endif

hx::Class Luxe_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7"),
	HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"),
	HX_HCSTRING("utils","\x31","\xaa","\xde","\xaa"),
	HX_HCSTRING("physics","\xc7","\x38","\x51","\xbe"),
	HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"),
	HX_HCSTRING("resources","\xe5","\xd7","\xb0","\x39"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("on","\x1f","\x61","\x00","\x00"),
	HX_HCSTRING("off","\x6f","\x93","\x54","\x00"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("showConsole","\xda","\x87","\x71","\xf5"),
	HX_HCSTRING("get_snow","\x0c","\x1e","\x12","\xcc"),
	HX_HCSTRING("get_screen","\x35","\xab","\xe4","\x37"),
	HX_HCSTRING("get_time","\x96","\x87","\xb7","\xcc"),
	HX_HCSTRING("get_version","\x2f","\x47","\xec","\x02"),
	HX_HCSTRING("get_build","\x85","\x37","\x94","\xfe"),
	HX_HCSTRING("get_dt","\xd9","\xee","\x2f","\xa3"),
	HX_HCSTRING("get_frame_start","\x27","\xcb","\x87","\xea"),
	HX_HCSTRING("get_frame_start_prev","\x4b","\x42","\xb3","\x93"),
	HX_HCSTRING("get_frame_max_delta","\x22","\x6a","\x54","\x06"),
	HX_HCSTRING("get_update_rate","\xad","\x1f","\x02","\x12"),
	HX_HCSTRING("get_tick_start","\x09","\x6b","\xa5","\x1c"),
	HX_HCSTRING("get_tick_start_prev","\x29","\xcf","\x7c","\xb3"),
	HX_HCSTRING("get_tick_delta","\x9f","\xde","\xc0","\x6f"),
	HX_HCSTRING("get_timescale","\x34","\x07","\xf6","\x5b"),
	HX_HCSTRING("get_sim_time","\x7e","\xe9","\x04","\x0a"),
	HX_HCSTRING("get_sim_delta","\x67","\x8d","\x38","\x81"),
	HX_HCSTRING("get_fixed_delta","\x44","\x6f","\x8c","\x7b"),
	HX_HCSTRING("get_fixed_timestep","\x0d","\x4e","\xa9","\xd8"),
	HX_HCSTRING("get_fixed_alpha","\xaa","\x2e","\xfc","\xc5"),
	HX_HCSTRING("get_fixed_frame_time","\xd3","\x31","\x57","\x2e"),
	HX_HCSTRING("set_timescale","\x40","\xe9","\xfb","\xa0"),
	HX_HCSTRING("set_fixed_delta","\x50","\xec","\x57","\x77"),
	HX_HCSTRING("set_update_rate","\xb9","\x9c","\xcd","\x0d"),
	HX_HCSTRING("set_fixed_timestep","\x81","\x80","\x58","\xb5"),
	HX_HCSTRING("set_frame_max_delta","\x2e","\x5d","\xf1","\x42"),
	HX_HCSTRING("set_fixed_frame_time","\x47","\xe9","\x0e","\xfb"),
	::String(null()) };

void Luxe_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Luxe","\xd6","\x67","\x95","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Luxe_obj::__GetStatic;
	__mClass->mSetStaticField = &Luxe_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Luxe_obj >;
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

