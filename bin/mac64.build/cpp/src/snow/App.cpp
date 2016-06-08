#include <hxcpp.h>

#include "linc_timestamp.h"
#ifndef INCLUDED_Sys
#include <Sys.h>
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
#ifndef INCLUDED_snow_types_ModState
#include <snow/types/ModState.h>
#endif
#ifndef INCLUDED_snow_types_SystemEvent
#include <snow/types/SystemEvent.h>
#endif
namespace snow{

Void App_obj::__construct()
{
HX_STACK_FRAME("snow.App","new",0x90aac908,"snow.App.new","snow/App.hx",10,0xf7b8a629)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(64)
	this->next_tick = ((Float)0);
	HX_STACK_LINE(58)
	this->fixed_overflow = ((Float)0.0);
	HX_STACK_LINE(56)
	this->fixed_frame_time = ((Float)0.0167);
	HX_STACK_LINE(54)
	this->fixed_timestep = false;
	HX_STACK_LINE(52)
	this->fixed_alpha = ((Float)1.0);
	HX_STACK_LINE(47)
	this->sim_time = ((Float)0);
	HX_STACK_LINE(45)
	this->sim_delta = ((Float)0.0166666666666666664);
	HX_STACK_LINE(42)
	this->frame_max_delta = ((Float)0.25);
	HX_STACK_LINE(40)
	this->frame_delta = ((Float)0.0166666666666666664);
	HX_STACK_LINE(38)
	this->frame_start_prev = ((Float)0.0);
	HX_STACK_LINE(36)
	this->frame_start = ((Float)0.0166666666666666664);
	HX_STACK_LINE(33)
	this->tick_delta = ((Float)0.0166666666666666664);
	HX_STACK_LINE(31)
	this->tick_start_prev = ((Float)0.0);
	HX_STACK_LINE(29)
	this->tick_start = ((Float)0.0166666666666666664);
	HX_STACK_LINE(24)
	this->update_rate = ((Float)0);
	HX_STACK_LINE(22)
	this->fixed_delta = ((Float)0);
	HX_STACK_LINE(20)
	this->timescale = ((Float)1);
}
;
	return null();
}

//App_obj::~App_obj() { }

Dynamic App_obj::__CreateEmpty() { return  new App_obj; }
hx::ObjectPtr< App_obj > App_obj::__new()
{  hx::ObjectPtr< App_obj > _result_ = new App_obj();
	_result_->__construct();
	return _result_;}

Dynamic App_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< App_obj > _result_ = new App_obj();
	_result_->__construct();
	return _result_;}

Dynamic App_obj::config( Dynamic _config){
	HX_STACK_FRAME("snow.App","config",0xed32371a,"snow.App.config","snow/App.hx",70,0xf7b8a629)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_config,"_config")
	HX_STACK_LINE(70)
	Dynamic tmp = _config;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(App_obj,config,return )

Void App_obj::ready( ){
{
		HX_STACK_FRAME("snow.App","ready",0x753f130b,"snow.App.ready","snow/App.hx",72,0xf7b8a629)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,ready,(void))

Void App_obj::update( Float dt){
{
		HX_STACK_FRAME("snow.App","update",0xac656661,"snow.App.update","snow/App.hx",74,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(App_obj,update,(void))

Void App_obj::tick( Float dt){
{
		HX_STACK_FRAME("snow.App","tick",0x08bf5db5,"snow.App.tick","snow/App.hx",76,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(App_obj,tick,(void))

Void App_obj::ondestroy( ){
{
		HX_STACK_FRAME("snow.App","ondestroy",0xb8d6a463,"snow.App.ondestroy","snow/App.hx",78,0xf7b8a629)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,ondestroy,(void))

Void App_obj::onevent( ::snow::types::SystemEvent event){
{
		HX_STACK_FRAME("snow.App","onevent",0x07596343,"snow.App.onevent","snow/App.hx",80,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(App_obj,onevent,(void))

Void App_obj::ontickstart( ){
{
		HX_STACK_FRAME("snow.App","ontickstart",0x0f08438e,"snow.App.ontickstart","snow/App.hx",83,0xf7b8a629)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,ontickstart,(void))

Void App_obj::ontickend( ){
{
		HX_STACK_FRAME("snow.App","ontickend",0xaf357007,"snow.App.ontickend","snow/App.hx",85,0xf7b8a629)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,ontickend,(void))

Void App_obj::onkeydown( int keycode,int scancode,bool repeat,::snow::types::ModState mod,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.App","onkeydown",0x45beb4ea,"snow.App.onkeydown","snow/App.hx",88,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keycode,"keycode")
		HX_STACK_ARG(scancode,"scancode")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(mod,"mod")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(App_obj,onkeydown,(void))

Void App_obj::onkeyup( int keycode,int scancode,bool repeat,::snow::types::ModState mod,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.App","onkeyup",0x709370e3,"snow.App.onkeyup","snow/App.hx",90,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keycode,"keycode")
		HX_STACK_ARG(scancode,"scancode")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(mod,"mod")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(App_obj,onkeyup,(void))

Void App_obj::ontextinput( ::String text,int start,int length,int type,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.App","ontextinput",0x66c9c7e6,"snow.App.ontextinput","snow/App.hx",92,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(length,"length")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(App_obj,ontextinput,(void))

Void App_obj::onmousedown( int x,int y,int button,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.App","onmousedown",0xa6d568b0,"snow.App.onmousedown","snow/App.hx",95,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(App_obj,onmousedown,(void))

Void App_obj::onmouseup( int x,int y,int button,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.App","onmouseup",0x54c38729,"snow.App.onmouseup","snow/App.hx",97,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(App_obj,onmouseup,(void))

Void App_obj::onmousewheel( Float x,Float y,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.App","onmousewheel",0x3fd5088d,"snow.App.onmousewheel","snow/App.hx",99,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(App_obj,onmousewheel,(void))

Void App_obj::onmousemove( int x,int y,int xrel,int yrel,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.App","onmousemove",0xacc8535f,"snow.App.onmousemove","snow/App.hx",101,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(xrel,"xrel")
		HX_STACK_ARG(yrel,"yrel")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(App_obj,onmousemove,(void))

Void App_obj::ontouchdown( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("snow.App","ontouchdown",0xbfed3f4a,"snow.App.ontouchdown","snow/App.hx",104,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(App_obj,ontouchdown,(void))

Void App_obj::ontouchup( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("snow.App","ontouchup",0x6d48a343,"snow.App.ontouchup","snow/App.hx",106,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(App_obj,ontouchup,(void))

Void App_obj::ontouchmove( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("snow.App","ontouchmove",0xc5e029f9,"snow.App.ontouchmove","snow/App.hx",108,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(App_obj,ontouchmove,(void))

Void App_obj::ongamepadaxis( int gamepad,int axis,Float value,Float timestamp){
{
		HX_STACK_FRAME("snow.App","ongamepadaxis",0x065d41ab,"snow.App.ongamepadaxis","snow/App.hx",111,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(App_obj,ongamepadaxis,(void))

Void App_obj::ongamepaddown( int gamepad,int button,Float value,Float timestamp){
{
		HX_STACK_FRAME("snow.App","ongamepaddown",0x08521d6c,"snow.App.ongamepaddown","snow/App.hx",113,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(App_obj,ongamepaddown,(void))

Void App_obj::ongamepadup( int gamepad,int button,Float value,Float timestamp){
{
		HX_STACK_FRAME("snow.App","ongamepadup",0x022454e5,"snow.App.ongamepadup","snow/App.hx",115,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(App_obj,ongamepadup,(void))

Void App_obj::ongamepaddevice( int gamepad,::String id,int type,Float timestamp){
{
		HX_STACK_FRAME("snow.App","ongamepaddevice",0x9476d820,"snow.App.ongamepaddevice","snow/App.hx",118,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(timestamp,"timestamp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(App_obj,ongamepaddevice,(void))

Void App_obj::internal_init( ){
{
		HX_STACK_FRAME("snow.App","internal_init",0x2c38ed3a,"snow.App.internal_init","snow/App.hx",121,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_LINE(123)
		this->sim_time = (int)0;
		HX_STACK_LINE(124)
		Float tmp = ((Float)0.0166666666666666664);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		this->fixed_frame_time = tmp;
		HX_STACK_LINE(126)
		Float tmp1 = linc::timestamp::now();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		Float tmp2 = ::snow::modules::sdl::Runtime_obj::timestamp_start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		this->tick_start = tmp3;
		HX_STACK_LINE(127)
		Float tmp4 = this->tick_start;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(127)
		Float tmp5 = this->fixed_frame_time;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(127)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(127)
		this->tick_start_prev = tmp6;
		HX_STACK_LINE(128)
		Float tmp7 = this->fixed_frame_time;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(128)
		this->tick_delta = tmp7;
		HX_STACK_LINE(130)
		Float tmp8 = linc::timestamp::now();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(130)
		Float tmp9 = ::snow::modules::sdl::Runtime_obj::timestamp_start;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(130)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(130)
		this->frame_start = tmp10;
		HX_STACK_LINE(131)
		Float tmp11 = this->frame_start;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(131)
		Float tmp12 = this->fixed_frame_time;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(131)
		Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(131)
		this->frame_start_prev = tmp13;
		HX_STACK_LINE(132)
		Float tmp14 = this->fixed_frame_time;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(132)
		Float tmp15 = this->sim_delta = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(132)
		this->frame_delta = tmp15;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,internal_init,(void))

Void App_obj::internal_tick( ){
{
		HX_STACK_FRAME("snow.App","internal_tick",0x337a7587,"snow.App.internal_tick","snow/App.hx",136,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		this->ontickstart();
		HX_STACK_LINE(140)
		Float tmp = linc::timestamp::now();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		Float tmp1 = ::snow::modules::sdl::Runtime_obj::timestamp_start;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		this->tick_start = tmp2;
		HX_STACK_LINE(141)
		Float tmp3 = this->tick_start;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(141)
		Float tmp4 = this->tick_start_prev;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(141)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(141)
		this->tick_delta = tmp5;
		HX_STACK_LINE(142)
		Float tmp6 = this->tick_start;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(142)
		this->tick_start_prev = tmp6;
		HX_STACK_LINE(144)
		bool tmp7 = this->fixed_timestep;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(144)
		if ((tmp7)){
			HX_STACK_LINE(145)
			Float tmp8 = linc::timestamp::now();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(145)
			Float tmp9 = ::snow::modules::sdl::Runtime_obj::timestamp_start;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(145)
			Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(145)
			this->frame_start = tmp10;
			HX_STACK_LINE(145)
			Float tmp11 = this->frame_start;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(145)
			Float tmp12 = this->frame_start_prev;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(145)
			Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(145)
			this->frame_delta = tmp13;
			HX_STACK_LINE(145)
			Float tmp14 = this->frame_start;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(145)
			this->frame_start_prev = tmp14;
			HX_STACK_LINE(145)
			Float tmp15 = this->frame_delta;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(145)
			Float tmp16 = this->timescale;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(145)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(145)
			this->sim_delta = tmp17;
			HX_STACK_LINE(145)
			Float tmp18 = this->sim_delta;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(145)
			Float tmp19 = this->frame_max_delta;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(145)
			bool tmp20 = (tmp18 > tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(145)
			if ((tmp20)){
				HX_STACK_LINE(145)
				Float tmp21 = this->frame_max_delta;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(145)
				this->sim_delta = tmp21;
			}
			HX_STACK_LINE(145)
			Float tmp21 = this->sim_delta;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(145)
			hx::AddEq(this->fixed_overflow,tmp21);
			HX_STACK_LINE(145)
			Float tmp22 = this->fixed_frame_time;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(145)
			Float tmp23 = this->timescale;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(145)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(145)
			Float _slice = tmp24;		HX_STACK_VAR(_slice,"_slice");
			HX_STACK_LINE(145)
			while((true)){
				HX_STACK_LINE(145)
				Float tmp25 = this->fixed_overflow;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(145)
				Float tmp26 = this->fixed_frame_time;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(145)
				bool tmp27 = (tmp25 >= tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(145)
				bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(145)
				if ((tmp28)){
					HX_STACK_LINE(145)
					break;
				}
				HX_STACK_LINE(145)
				Float tmp29 = _slice;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(145)
				this->update(tmp29);
				HX_STACK_LINE(145)
				hx::AddEq(this->sim_time,_slice);
				HX_STACK_LINE(145)
				hx::SubEq(this->fixed_overflow,_slice);
			}
			HX_STACK_LINE(145)
			Float tmp25 = this->fixed_overflow;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(145)
			Float tmp26 = this->fixed_frame_time;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(145)
			Float tmp27 = (Float(tmp25) / Float(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(145)
			this->fixed_alpha = tmp27;
		}
		else{
			HX_STACK_LINE(147)
			this->internal_tick_default();
		}
		HX_STACK_LINE(150)
		Float tmp8 = this->tick_delta;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(150)
		this->tick(tmp8);
		HX_STACK_LINE(152)
		this->ontickend();
		HX_STACK_LINE(155)
		::Sys_obj::sleep((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,internal_tick,(void))

Void App_obj::internal_tick_default( ){
{
		HX_STACK_FRAME("snow.App","internal_tick_default",0xa54206c9,"snow.App.internal_tick_default","snow/App.hx",161,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_LINE(163)
		Float tmp = this->update_rate;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(163)
		if ((tmp1)){
			HX_STACK_LINE(165)
			Float tmp2 = linc::timestamp::now();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(165)
			Float tmp3 = ::snow::modules::sdl::Runtime_obj::timestamp_start;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(165)
			Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(165)
			Float tmp5 = this->next_tick;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(165)
			bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(165)
			if ((tmp6)){
				HX_STACK_LINE(166)
				return null();
			}
			HX_STACK_LINE(169)
			Float tmp7 = linc::timestamp::now();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(169)
			Float tmp8 = ::snow::modules::sdl::Runtime_obj::timestamp_start;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(169)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(169)
			Float tmp10 = this->update_rate;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(169)
			Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(169)
			this->next_tick = tmp11;
		}
		HX_STACK_LINE(173)
		Float tmp2 = this->tick_start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(173)
		this->frame_start = tmp2;
		HX_STACK_LINE(174)
		Float tmp3 = this->frame_start;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(174)
		Float tmp4 = this->frame_start_prev;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(174)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(174)
		this->frame_delta = tmp5;
		HX_STACK_LINE(175)
		Float tmp6 = this->frame_start;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(175)
		this->frame_start_prev = tmp6;
		HX_STACK_LINE(177)
		Float tmp7 = this->frame_delta;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(177)
		Float tmp8 = this->frame_max_delta;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(177)
		bool tmp9 = (tmp7 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(177)
		if ((tmp9)){
			HX_STACK_LINE(178)
			Float tmp10 = this->frame_max_delta;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(178)
			this->frame_delta = tmp10;
		}
		HX_STACK_LINE(181)
		Float tmp10 = this->fixed_delta;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(181)
		bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(181)
		Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(181)
		if ((tmp11)){
			HX_STACK_LINE(181)
			tmp12 = this->frame_delta;
		}
		else{
			HX_STACK_LINE(181)
			tmp12 = this->fixed_delta;
		}
		HX_STACK_LINE(181)
		Float _used_delta = tmp12;		HX_STACK_VAR(_used_delta,"_used_delta");
		HX_STACK_LINE(182)
		Float tmp13 = this->timescale;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(182)
		hx::MultEq(_used_delta,tmp13);
		HX_STACK_LINE(183)
		this->sim_delta = _used_delta;
		HX_STACK_LINE(185)
		hx::AddEq(this->sim_time,_used_delta);
		HX_STACK_LINE(186)
		Float tmp14 = _used_delta;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(186)
		this->update(tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,internal_tick_default,(void))

Void App_obj::internal_tick_fixed_timestep( ){
{
		HX_STACK_FRAME("snow.App","internal_tick_fixed_timestep",0x5966903c,"snow.App.internal_tick_fixed_timestep","snow/App.hx",190,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_LINE(192)
		Float tmp = linc::timestamp::now();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		Float tmp1 = ::snow::modules::sdl::Runtime_obj::timestamp_start;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		this->frame_start = tmp2;
		HX_STACK_LINE(193)
		Float tmp3 = this->frame_start;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		Float tmp4 = this->frame_start_prev;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(193)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(193)
		this->frame_delta = tmp5;
		HX_STACK_LINE(194)
		Float tmp6 = this->frame_start;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(194)
		this->frame_start_prev = tmp6;
		HX_STACK_LINE(196)
		Float tmp7 = this->frame_delta;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(196)
		Float tmp8 = this->timescale;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(196)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(196)
		this->sim_delta = tmp9;
		HX_STACK_LINE(197)
		Float tmp10 = this->sim_delta;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(197)
		Float tmp11 = this->frame_max_delta;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(197)
		bool tmp12 = (tmp10 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(197)
		if ((tmp12)){
			HX_STACK_LINE(198)
			Float tmp13 = this->frame_max_delta;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(198)
			this->sim_delta = tmp13;
		}
		HX_STACK_LINE(201)
		Float tmp13 = this->sim_delta;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(201)
		hx::AddEq(this->fixed_overflow,tmp13);
		HX_STACK_LINE(203)
		Float tmp14 = this->fixed_frame_time;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(203)
		Float tmp15 = this->timescale;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(203)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(203)
		Float _slice = tmp16;		HX_STACK_VAR(_slice,"_slice");
		HX_STACK_LINE(204)
		while((true)){
			HX_STACK_LINE(204)
			Float tmp17 = this->fixed_overflow;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(204)
			Float tmp18 = this->fixed_frame_time;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(204)
			bool tmp19 = (tmp17 >= tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(204)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(204)
			if ((tmp20)){
				HX_STACK_LINE(204)
				break;
			}
			HX_STACK_LINE(206)
			Float tmp21 = _slice;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(206)
			this->update(tmp21);
			HX_STACK_LINE(207)
			hx::AddEq(this->sim_time,_slice);
			HX_STACK_LINE(208)
			hx::SubEq(this->fixed_overflow,_slice);
		}
		HX_STACK_LINE(212)
		Float tmp17 = this->fixed_overflow;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(212)
		Float tmp18 = this->fixed_frame_time;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(212)
		Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(212)
		this->fixed_alpha = tmp19;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,internal_tick_fixed_timestep,(void))


App_obj::App_obj()
{
}

void App_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(App);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(timescale,"timescale");
	HX_MARK_MEMBER_NAME(fixed_delta,"fixed_delta");
	HX_MARK_MEMBER_NAME(update_rate,"update_rate");
	HX_MARK_MEMBER_NAME(tick_start,"tick_start");
	HX_MARK_MEMBER_NAME(tick_start_prev,"tick_start_prev");
	HX_MARK_MEMBER_NAME(tick_delta,"tick_delta");
	HX_MARK_MEMBER_NAME(frame_start,"frame_start");
	HX_MARK_MEMBER_NAME(frame_start_prev,"frame_start_prev");
	HX_MARK_MEMBER_NAME(frame_delta,"frame_delta");
	HX_MARK_MEMBER_NAME(frame_max_delta,"frame_max_delta");
	HX_MARK_MEMBER_NAME(sim_delta,"sim_delta");
	HX_MARK_MEMBER_NAME(sim_time,"sim_time");
	HX_MARK_MEMBER_NAME(fixed_alpha,"fixed_alpha");
	HX_MARK_MEMBER_NAME(fixed_timestep,"fixed_timestep");
	HX_MARK_MEMBER_NAME(fixed_frame_time,"fixed_frame_time");
	HX_MARK_MEMBER_NAME(fixed_overflow,"fixed_overflow");
	HX_MARK_MEMBER_NAME(next_tick,"next_tick");
	HX_MARK_END_CLASS();
}

void App_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(timescale,"timescale");
	HX_VISIT_MEMBER_NAME(fixed_delta,"fixed_delta");
	HX_VISIT_MEMBER_NAME(update_rate,"update_rate");
	HX_VISIT_MEMBER_NAME(tick_start,"tick_start");
	HX_VISIT_MEMBER_NAME(tick_start_prev,"tick_start_prev");
	HX_VISIT_MEMBER_NAME(tick_delta,"tick_delta");
	HX_VISIT_MEMBER_NAME(frame_start,"frame_start");
	HX_VISIT_MEMBER_NAME(frame_start_prev,"frame_start_prev");
	HX_VISIT_MEMBER_NAME(frame_delta,"frame_delta");
	HX_VISIT_MEMBER_NAME(frame_max_delta,"frame_max_delta");
	HX_VISIT_MEMBER_NAME(sim_delta,"sim_delta");
	HX_VISIT_MEMBER_NAME(sim_time,"sim_time");
	HX_VISIT_MEMBER_NAME(fixed_alpha,"fixed_alpha");
	HX_VISIT_MEMBER_NAME(fixed_timestep,"fixed_timestep");
	HX_VISIT_MEMBER_NAME(fixed_frame_time,"fixed_frame_time");
	HX_VISIT_MEMBER_NAME(fixed_overflow,"fixed_overflow");
	HX_VISIT_MEMBER_NAME(next_tick,"next_tick");
}

Dynamic App_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tick") ) { return tick_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onevent") ) { return onevent_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sim_time") ) { return sim_time; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timescale") ) { return timescale; }
		if (HX_FIELD_EQ(inName,"sim_delta") ) { return sim_delta; }
		if (HX_FIELD_EQ(inName,"next_tick") ) { return next_tick; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"ontickend") ) { return ontickend_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchup") ) { return ontouchup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tick_start") ) { return tick_start; }
		if (HX_FIELD_EQ(inName,"tick_delta") ) { return tick_delta; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fixed_delta") ) { return fixed_delta; }
		if (HX_FIELD_EQ(inName,"update_rate") ) { return update_rate; }
		if (HX_FIELD_EQ(inName,"frame_start") ) { return frame_start; }
		if (HX_FIELD_EQ(inName,"frame_delta") ) { return frame_delta; }
		if (HX_FIELD_EQ(inName,"fixed_alpha") ) { return fixed_alpha; }
		if (HX_FIELD_EQ(inName,"ontickstart") ) { return ontickstart_dyn(); }
		if (HX_FIELD_EQ(inName,"ontextinput") ) { return ontextinput_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchdown") ) { return ontouchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchmove") ) { return ontouchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadup") ) { return ongamepadup_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ongamepadaxis") ) { return ongamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepaddown") ) { return ongamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"internal_init") ) { return internal_init_dyn(); }
		if (HX_FIELD_EQ(inName,"internal_tick") ) { return internal_tick_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fixed_timestep") ) { return fixed_timestep; }
		if (HX_FIELD_EQ(inName,"fixed_overflow") ) { return fixed_overflow; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"tick_start_prev") ) { return tick_start_prev; }
		if (HX_FIELD_EQ(inName,"frame_max_delta") ) { return frame_max_delta; }
		if (HX_FIELD_EQ(inName,"ongamepaddevice") ) { return ongamepaddevice_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"frame_start_prev") ) { return frame_start_prev; }
		if (HX_FIELD_EQ(inName,"fixed_frame_time") ) { return fixed_frame_time; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"internal_tick_default") ) { return internal_tick_default_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"internal_tick_fixed_timestep") ) { return internal_tick_fixed_timestep_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic App_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sim_time") ) { sim_time=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timescale") ) { timescale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sim_delta") ) { sim_delta=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next_tick") ) { next_tick=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tick_start") ) { tick_start=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tick_delta") ) { tick_delta=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fixed_delta") ) { fixed_delta=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"update_rate") ) { update_rate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame_start") ) { frame_start=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame_delta") ) { frame_delta=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fixed_alpha") ) { fixed_alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fixed_timestep") ) { fixed_timestep=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fixed_overflow") ) { fixed_overflow=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"tick_start_prev") ) { tick_start_prev=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame_max_delta") ) { frame_max_delta=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"frame_start_prev") ) { frame_start_prev=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fixed_frame_time") ) { fixed_frame_time=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void App_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("timescale","\x5d","\x33","\x92","\x9a"));
	outFields->push(HX_HCSTRING("fixed_delta","\xad","\xb7","\xaa","\xba"));
	outFields->push(HX_HCSTRING("update_rate","\x16","\x68","\x20","\x51"));
	outFields->push(HX_HCSTRING("tick_start","\xc0","\xe2","\xaf","\xa6"));
	outFields->push(HX_HCSTRING("tick_start_prev","\x12","\x00","\x72","\x28"));
	outFields->push(HX_HCSTRING("tick_delta","\x56","\x56","\xcb","\xf9"));
	outFields->push(HX_HCSTRING("frame_start","\x90","\x13","\xa6","\x29"));
	outFields->push(HX_HCSTRING("frame_start_prev","\x42","\xdd","\x48","\x75"));
	outFields->push(HX_HCSTRING("frame_delta","\x26","\x87","\xc1","\x7c"));
	outFields->push(HX_HCSTRING("frame_max_delta","\x0b","\x9b","\x49","\x7b"));
	outFields->push(HX_HCSTRING("sim_delta","\x90","\xb9","\xd4","\xbf"));
	outFields->push(HX_HCSTRING("sim_time","\x75","\x35","\xeb","\x54"));
	outFields->push(HX_HCSTRING("fixed_alpha","\x13","\x77","\x1a","\x05"));
	outFields->push(HX_HCSTRING("fixed_timestep","\x44","\x6d","\x0f","\x3d"));
	outFields->push(HX_HCSTRING("fixed_frame_time","\xca","\xcc","\xec","\x0f"));
	outFields->push(HX_HCSTRING("fixed_overflow","\xad","\x12","\x67","\x7c"));
	outFields->push(HX_HCSTRING("next_tick","\x69","\x89","\x25","\x14"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(App_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsFloat,(int)offsetof(App_obj,timescale),HX_HCSTRING("timescale","\x5d","\x33","\x92","\x9a")},
	{hx::fsFloat,(int)offsetof(App_obj,fixed_delta),HX_HCSTRING("fixed_delta","\xad","\xb7","\xaa","\xba")},
	{hx::fsFloat,(int)offsetof(App_obj,update_rate),HX_HCSTRING("update_rate","\x16","\x68","\x20","\x51")},
	{hx::fsFloat,(int)offsetof(App_obj,tick_start),HX_HCSTRING("tick_start","\xc0","\xe2","\xaf","\xa6")},
	{hx::fsFloat,(int)offsetof(App_obj,tick_start_prev),HX_HCSTRING("tick_start_prev","\x12","\x00","\x72","\x28")},
	{hx::fsFloat,(int)offsetof(App_obj,tick_delta),HX_HCSTRING("tick_delta","\x56","\x56","\xcb","\xf9")},
	{hx::fsFloat,(int)offsetof(App_obj,frame_start),HX_HCSTRING("frame_start","\x90","\x13","\xa6","\x29")},
	{hx::fsFloat,(int)offsetof(App_obj,frame_start_prev),HX_HCSTRING("frame_start_prev","\x42","\xdd","\x48","\x75")},
	{hx::fsFloat,(int)offsetof(App_obj,frame_delta),HX_HCSTRING("frame_delta","\x26","\x87","\xc1","\x7c")},
	{hx::fsFloat,(int)offsetof(App_obj,frame_max_delta),HX_HCSTRING("frame_max_delta","\x0b","\x9b","\x49","\x7b")},
	{hx::fsFloat,(int)offsetof(App_obj,sim_delta),HX_HCSTRING("sim_delta","\x90","\xb9","\xd4","\xbf")},
	{hx::fsFloat,(int)offsetof(App_obj,sim_time),HX_HCSTRING("sim_time","\x75","\x35","\xeb","\x54")},
	{hx::fsFloat,(int)offsetof(App_obj,fixed_alpha),HX_HCSTRING("fixed_alpha","\x13","\x77","\x1a","\x05")},
	{hx::fsBool,(int)offsetof(App_obj,fixed_timestep),HX_HCSTRING("fixed_timestep","\x44","\x6d","\x0f","\x3d")},
	{hx::fsFloat,(int)offsetof(App_obj,fixed_frame_time),HX_HCSTRING("fixed_frame_time","\xca","\xcc","\xec","\x0f")},
	{hx::fsFloat,(int)offsetof(App_obj,fixed_overflow),HX_HCSTRING("fixed_overflow","\xad","\x12","\x67","\x7c")},
	{hx::fsFloat,(int)offsetof(App_obj,next_tick),HX_HCSTRING("next_tick","\x69","\x89","\x25","\x14")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("timescale","\x5d","\x33","\x92","\x9a"),
	HX_HCSTRING("fixed_delta","\xad","\xb7","\xaa","\xba"),
	HX_HCSTRING("update_rate","\x16","\x68","\x20","\x51"),
	HX_HCSTRING("tick_start","\xc0","\xe2","\xaf","\xa6"),
	HX_HCSTRING("tick_start_prev","\x12","\x00","\x72","\x28"),
	HX_HCSTRING("tick_delta","\x56","\x56","\xcb","\xf9"),
	HX_HCSTRING("frame_start","\x90","\x13","\xa6","\x29"),
	HX_HCSTRING("frame_start_prev","\x42","\xdd","\x48","\x75"),
	HX_HCSTRING("frame_delta","\x26","\x87","\xc1","\x7c"),
	HX_HCSTRING("frame_max_delta","\x0b","\x9b","\x49","\x7b"),
	HX_HCSTRING("sim_delta","\x90","\xb9","\xd4","\xbf"),
	HX_HCSTRING("sim_time","\x75","\x35","\xeb","\x54"),
	HX_HCSTRING("fixed_alpha","\x13","\x77","\x1a","\x05"),
	HX_HCSTRING("fixed_timestep","\x44","\x6d","\x0f","\x3d"),
	HX_HCSTRING("fixed_frame_time","\xca","\xcc","\xec","\x0f"),
	HX_HCSTRING("fixed_overflow","\xad","\x12","\x67","\x7c"),
	HX_HCSTRING("next_tick","\x69","\x89","\x25","\x14"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("tick","\x5d","\xc3","\xfc","\x4c"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onevent","\x9b","\xf6","\xd4","\x78"),
	HX_HCSTRING("ontickstart","\xe6","\x62","\x8c","\xec"),
	HX_HCSTRING("ontickend","\x5f","\x89","\x3e","\x25"),
	HX_HCSTRING("onkeydown","\x42","\xce","\xc7","\xbb"),
	HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"),
	HX_HCSTRING("ontextinput","\x3e","\xe7","\x4d","\x44"),
	HX_HCSTRING("onmousedown","\x08","\x88","\x59","\x84"),
	HX_HCSTRING("onmouseup","\x81","\xa0","\xcc","\xca"),
	HX_HCSTRING("onmousewheel","\x35","\x56","\xec","\x35"),
	HX_HCSTRING("onmousemove","\xb7","\x72","\x4c","\x8a"),
	HX_HCSTRING("ontouchdown","\xa2","\x5e","\x71","\x9d"),
	HX_HCSTRING("ontouchup","\x9b","\xbc","\x51","\xe3"),
	HX_HCSTRING("ontouchmove","\x51","\x49","\x64","\xa3"),
	HX_HCSTRING("ongamepadaxis","\x03","\xe7","\xa9","\x64"),
	HX_HCSTRING("ongamepaddown","\xc4","\xc2","\x9e","\x66"),
	HX_HCSTRING("ongamepadup","\x3d","\x74","\xa8","\xdf"),
	HX_HCSTRING("ongamepaddevice","\x78","\x83","\x39","\x9b"),
	HX_HCSTRING("internal_init","\x92","\x92","\x85","\x8a"),
	HX_HCSTRING("internal_tick","\xdf","\x1a","\xc7","\x91"),
	HX_HCSTRING("internal_tick_default","\x21","\xc4","\x37","\x4b"),
	HX_HCSTRING("internal_tick_fixed_timestep","\xe4","\xad","\xa9","\x73"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(App_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(App_obj::__mClass,"__mClass");
};

#endif

hx::Class App_obj::__mClass;

void App_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.App","\x16","\xe5","\xc7","\x94");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< App_obj >;
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
