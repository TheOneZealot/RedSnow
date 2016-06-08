#include <hxcpp.h>

#include "hxMath.h"
#include "linc_glew.h"
#include "linc_sdl.h"
#include "linc_timestamp.h"
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_sdl__SDL_SDL_helper
#include <sdl/_SDL/SDL_helper.h>
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
#ifndef INCLUDED_snow_systems_input_Input
#include <snow/systems/input/Input.h>
#endif
#ifndef INCLUDED_snow_types_Error
#include <snow/types/Error.h>
#endif
#ifndef INCLUDED_snow_types_ModState
#include <snow/types/ModState.h>
#endif
namespace snow{
namespace modules{
namespace sdl{

Void Runtime_obj::__construct(::snow::Snow _app)
{
HX_STACK_FRAME("snow.modules.sdl.Runtime","new",0xeed49065,"snow.modules.sdl.Runtime.new","snow/modules/sdl/Runtime.hx",13,0x0c37166e)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
{
	HX_STACK_LINE(302)
	this->window_h = (int)0;
	HX_STACK_LINE(301)
	this->window_w = (int)0;
	HX_STACK_LINE(145)
	this->window_dpr = ((Float)1.0);
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/modules/sdl/Runtime.hx",144,0x0c37166e)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , (int)0,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(144)
	this->_size = _Function_1_1::Block();
	HX_STACK_LINE(26)
	::snow::Snow tmp = _app;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	super::__construct(tmp);
	HX_STACK_LINE(27)
	Float tmp1 = linc::timestamp::now();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	::snow::modules::sdl::Runtime_obj::timestamp_start = tmp1;
	HX_STACK_LINE(28)
	this->name = HX_HCSTRING("sdl","\xbb","\x9a","\x57","\x00");
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/modules/sdl/Runtime.hx",30,0x0c37166e)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(30)
	Dynamic tmp2 = _Function_1_2::Block();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	::snow::Snow tmp3 = this->app;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	tmp3->config->__FieldRef(HX_HCSTRING("runtime","\xd8","\xb4","\x60","\xef")) = tmp2;
	HX_STACK_LINE(32)
	::haxe::ds::IntMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		::haxe::ds::IntMap tmp5 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(32)
		::haxe::ds::IntMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(32)
		tmp4 = tmp6;
	}
	HX_STACK_LINE(32)
	this->gamepads = tmp4;
	HX_STACK_LINE(33)
	::haxe::ds::IntMap tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		::haxe::ds::IntMap tmp6 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(33)
		::haxe::ds::IntMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(33)
		tmp5 = tmp7;
	}
	HX_STACK_LINE(33)
	this->joysticks = tmp5;
	HX_STACK_LINE(35)
	int tmp6 = SDL_Init((int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(35)
	int status = tmp6;		HX_STACK_VAR(status,"status");
	HX_STACK_LINE(36)
	bool tmp7 = (status != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(36)
	if ((tmp7)){
		HX_STACK_LINE(37)
		 const ::cpp::Char *  tmp8 = SDL_GetError();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(37)
		::String tmp9 = ((::String)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(37)
		::String tmp10 = (HX_HCSTRING("runtime / sdl / failed to init / `","\xb0","\xd2","\x4f","\xf2") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(37)
		::String tmp11 = (tmp10 + HX_HCSTRING("`","\x60","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(37)
		::snow::types::Error tmp12 = ::snow::types::Error_obj::init(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(37)
		HX_STACK_DO_THROW(tmp12);
	}
	HX_STACK_LINE(42)
	int tmp8 = SDL_InitSubSystem((int)32);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(42)
	int status1 = tmp8;		HX_STACK_VAR(status1,"status1");
	HX_STACK_LINE(43)
	bool tmp9 = (status1 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(43)
	if ((tmp9)){
		HX_STACK_LINE(44)
		 const ::cpp::Char *  tmp10 = SDL_GetError();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(44)
		::String tmp11 = ((::String)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(44)
		::String tmp12 = (HX_HCSTRING("runtime / sdl / failed to init video / `","\x4b","\xeb","\x37","\x21") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(44)
		::String tmp13 = (tmp12 + HX_HCSTRING("`","\x60","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(44)
		::snow::types::Error tmp14 = ::snow::types::Error_obj::init(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(44)
		HX_STACK_DO_THROW(tmp14);
	}
	else{
		HX_STACK_LINE(138)
		Dynamic();
	}
	HX_STACK_LINE(52)
	int tmp10 = SDL_InitSubSystem((int)8192);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(52)
	status1 = tmp10;
	HX_STACK_LINE(53)
	bool tmp11 = (status1 == (int)-1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(53)
	if ((tmp11)){
		HX_STACK_LINE(54)
		 const ::cpp::Char *  tmp12 = SDL_GetError();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(54)
		::String tmp13 = ((::String)(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(54)
		::String tmp14 = (HX_HCSTRING("sdl / Could not initialize controller : `","\xe4","\xe7","\x9f","\x97") + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(54)
		::String tmp15 = (tmp14 + HX_HCSTRING("`","\x60","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(54)
		::String tmp16 = (HX_HCSTRING("  i / runtime / ","\xc1","\xd9","\x78","\xba") + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(54)
		Dynamic tmp17 = hx::SourceInfo(HX_HCSTRING("Runtime.hx","\x06","\x29","\xa2","\x6c"),54,HX_HCSTRING("snow.modules.sdl.Runtime","\xf3","\x79","\x09","\xb1"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(54)
		::haxe::Log_obj::trace(tmp16,tmp17);
	}
	else{
		HX_STACK_LINE(138)
		Dynamic();
	}
	HX_STACK_LINE(61)
	int tmp12 = SDL_InitSubSystem((int)512);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(61)
	status1 = tmp12;
	HX_STACK_LINE(62)
	bool tmp13 = (status1 == (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(62)
	if ((tmp13)){
		HX_STACK_LINE(63)
		 const ::cpp::Char *  tmp14 = SDL_GetError();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(63)
		::String tmp15 = ((::String)(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(63)
		::String tmp16 = (HX_HCSTRING("sdl / Could not initialize joystick : `","\x84","\xa8","\xb7","\xee") + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(63)
		::String tmp17 = (tmp16 + HX_HCSTRING("`","\x60","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(63)
		::String tmp18 = (HX_HCSTRING("  i / runtime / ","\xc1","\xd9","\x78","\xba") + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(63)
		Dynamic tmp19 = hx::SourceInfo(HX_HCSTRING("Runtime.hx","\x06","\x29","\xa2","\x6c"),63,HX_HCSTRING("snow.modules.sdl.Runtime","\xf3","\x79","\x09","\xb1"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(63)
		::haxe::Log_obj::trace(tmp18,tmp19);
	}
	else{
		HX_STACK_LINE(138)
		Dynamic();
	}
	HX_STACK_LINE(70)
	int tmp14 = SDL_InitSubSystem((int)4096);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(70)
	status1 = tmp14;
	HX_STACK_LINE(71)
	bool tmp15 = (status1 == (int)-1);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(71)
	if ((tmp15)){
		HX_STACK_LINE(72)
		 const ::cpp::Char *  tmp16 = SDL_GetError();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(72)
		::String tmp17 = ((::String)(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(72)
		::String tmp18 = (HX_HCSTRING("sdl / Could not initialize haptic : `","\x1f","\x0c","\xd5","\x97") + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(72)
		::String tmp19 = (tmp18 + HX_HCSTRING("`","\x60","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(72)
		::String tmp20 = (HX_HCSTRING("  i / runtime / ","\xc1","\xd9","\x78","\xba") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(72)
		Dynamic tmp21 = hx::SourceInfo(HX_HCSTRING("Runtime.hx","\x06","\x29","\xa2","\x6c"),72,HX_HCSTRING("snow.modules.sdl.Runtime","\xf3","\x79","\x09","\xb1"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(72)
		::haxe::Log_obj::trace(tmp20,tmp21);
	}
	else{
		HX_STACK_LINE(138)
		Dynamic();
	}
	HX_STACK_LINE(138)
	Dynamic();
}
;
	return null();
}

//Runtime_obj::~Runtime_obj() { }

Dynamic Runtime_obj::__CreateEmpty() { return  new Runtime_obj; }
hx::ObjectPtr< Runtime_obj > Runtime_obj::__new(::snow::Snow _app)
{  hx::ObjectPtr< Runtime_obj > _result_ = new Runtime_obj();
	_result_->__construct(_app);
	return _result_;}

Dynamic Runtime_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Runtime_obj > _result_ = new Runtime_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Runtime_obj::ready( ){
{
		HX_STACK_FRAME("snow.modules.sdl.Runtime","ready",0x06ef2ba8,"snow.modules.sdl.Runtime.ready","snow/modules/sdl/Runtime.hx",88,0x0c37166e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		this->create_window();
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


bool Runtime_obj::run( ){
	HX_STACK_FRAME("snow.modules.sdl.Runtime","run",0xeed7a750,"snow.modules.sdl.Runtime.run","snow/modules/sdl/Runtime.hx",96,0x0c37166e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(100)
	bool tmp = this->run_loop();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	return tmp;
}


Void Runtime_obj::shutdown( Dynamic __o__immediate){
Dynamic _immediate = __o__immediate.Default(false);
	HX_STACK_FRAME("snow.modules.sdl.Runtime","shutdown",0x719c0a71,"snow.modules.sdl.Runtime.shutdown","snow/modules/sdl/Runtime.hx",104,0x0c37166e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_immediate,"_immediate")
{
		HX_STACK_LINE(106)
		Dynamic tmp = _immediate;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		if ((tmp1)){
			HX_STACK_LINE(107)
			{
				HX_STACK_LINE(107)
				::sdl::_SDL::SDL_helper_obj::quit();
				HX_STACK_LINE(107)
				SDL_Quit();
			}
			HX_STACK_LINE(138)
			Dynamic();
		}
		else{
			HX_STACK_LINE(138)
			Dynamic();
		}
	}
return null();
}


bool Runtime_obj::window_grab( bool enable){
	HX_STACK_FRAME("snow.modules.sdl.Runtime","window_grab",0xf119dec0,"snow.modules.sdl.Runtime.window_grab","snow/modules/sdl/Runtime.hx",115,0x0c37166e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(enable,"enable")
	HX_STACK_LINE(117)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	{
		HX_STACK_LINE(117)
		bool tmp1 = enable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		if ((tmp1)){
			HX_STACK_LINE(117)
			tmp2 = (int)1;
		}
		else{
			HX_STACK_LINE(117)
			tmp2 = (int)0;
		}
		HX_STACK_LINE(117)
		int _enable = tmp2;		HX_STACK_VAR(_enable,"_enable");
		HX_STACK_LINE(117)
		tmp = SDL_SetRelativeMouseMode((SDL_bool)_enable);
	}
	HX_STACK_LINE(117)
	int res = tmp;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(119)
	bool tmp1 = (res == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(119)
	return tmp1;
}


Void Runtime_obj::window_swap( ){
{
		HX_STACK_FRAME("snow.modules.sdl.Runtime","window_swap",0xf90c3987,"snow.modules.sdl.Runtime.window_swap","snow/modules/sdl/Runtime.hx",123,0x0c37166e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(125)
		::cpp::Pointer< SDL_Window > tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		SDL_GL_SwapWindow(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Runtime_obj,window_swap,(void))

bool Runtime_obj::window_fullscreen( bool enable,Dynamic __o_true_fullscreen){
Dynamic true_fullscreen = __o_true_fullscreen.Default(false);
	HX_STACK_FRAME("snow.modules.sdl.Runtime","window_fullscreen",0x2bd5f82f,"snow.modules.sdl.Runtime.window_fullscreen","snow/modules/sdl/Runtime.hx",129,0x0c37166e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(enable,"enable")
	HX_STACK_ARG(true_fullscreen,"true_fullscreen")
{
		HX_STACK_LINE(131)
		bool tmp = enable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		if ((tmp)){
			HX_STACK_LINE(131)
			tmp1 = (int)4097;
		}
		else{
			HX_STACK_LINE(131)
			tmp1 = (int)0;
		}
		HX_STACK_LINE(131)
		int flag = tmp1;		HX_STACK_VAR(flag,"flag");
		HX_STACK_LINE(133)
		Dynamic tmp2 = true_fullscreen;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		if ((tmp2)){
			HX_STACK_LINE(133)
			tmp3 = enable;
		}
		else{
			HX_STACK_LINE(133)
			tmp3 = false;
		}
		HX_STACK_LINE(133)
		if ((tmp3)){
			HX_STACK_LINE(134)
			hx::OrEq(flag,(int)1);
		}
		HX_STACK_LINE(137)
		::cpp::Pointer< SDL_Window > tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(137)
		int tmp5 = flag;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(137)
		int tmp6 = SDL_SetWindowFullscreen(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(137)
		bool tmp7 = (tmp6 == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(137)
		return tmp7;
	}
}


int Runtime_obj::window_width( ){
	HX_STACK_FRAME("snow.modules.sdl.Runtime","window_width",0x3601bc92,"snow.modules.sdl.Runtime.window_width","snow/modules/sdl/Runtime.hx",141,0x0c37166e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(141)
	int tmp = this->window_w;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	return tmp;
}


int Runtime_obj::window_height( ){
	HX_STACK_FRAME("snow.modules.sdl.Runtime","window_height",0xc1d2bbdb,"snow.modules.sdl.Runtime.window_height","snow/modules/sdl/Runtime.hx",142,0x0c37166e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(142)
	int tmp = this->window_h;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	return tmp;
}


Float Runtime_obj::window_device_pixel_ratio( ){
	HX_STACK_FRAME("snow.modules.sdl.Runtime","window_device_pixel_ratio",0x1967d0dd,"snow.modules.sdl.Runtime.window_device_pixel_ratio","snow/modules/sdl/Runtime.hx",146,0x0c37166e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(148)
	::cpp::Pointer< SDL_Window > tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	Dynamic tmp1 = this->_size;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	Dynamic tmp2 = linc::sdl::GL_GetDrawableSize(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(148)
	this->_size = tmp2;
	HX_STACK_LINE(149)
	Dynamic tmp3 = this->_size;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(149)
	int _pixel_height = tmp3->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_pixel_height,"_pixel_height");
	HX_STACK_LINE(151)
	::cpp::Pointer< SDL_Window > tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(151)
	Dynamic tmp5 = this->_size;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(151)
	Dynamic tmp6 = linc::sdl::getWindowSize(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(151)
	this->_size = tmp6;
	HX_STACK_LINE(152)
	Dynamic tmp7 = this->_size;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(152)
	int _device_height = tmp7->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_device_height,"_device_height");
	HX_STACK_LINE(154)
	Float tmp8 = (Float(_pixel_height) / Float(_device_height));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(154)
	return tmp8;
}


bool Runtime_obj::run_loop( ){
	HX_STACK_FRAME("snow.modules.sdl.Runtime","run_loop",0x766098f3,"snow.modules.sdl.Runtime.run_loop","snow/modules/sdl/Runtime.hx",167,0x0c37166e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(169)
	bool _done = true;		HX_STACK_VAR(_done,"_done");
	HX_STACK_LINE(181)
	while((true)){
		HX_STACK_LINE(181)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(181)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(181)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(181)
		if ((tmp3)){
			HX_STACK_LINE(181)
			break;
		}
		HX_STACK_LINE(183)
		this->loop((int)0);
	}
	HX_STACK_LINE(189)
	bool tmp = _done;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Runtime_obj,run_loop,return )

Void Runtime_obj::loop( int _){
{
		HX_STACK_FRAME("snow.modules.sdl.Runtime","loop",0x09deeabf,"snow.modules.sdl.Runtime.loop","snow/modules/sdl/Runtime.hx",193,0x0c37166e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(195)
		while((true)){
			HX_STACK_LINE(195)
			bool tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(195)
			{
				HX_STACK_LINE(195)
				SDL_PumpEvents();
				HX_STACK_LINE(195)
				tmp = SDL_HasEvents((int)0,(int)65535);
			}
			HX_STACK_LINE(195)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(195)
			if ((tmp1)){
				HX_STACK_LINE(195)
				break;
			}
			HX_STACK_LINE(197)
			::cpp::Struct<SDL_Event> tmp2 = linc::sdl::pollEvent();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(197)
			::cpp::Struct<SDL_Event> e = tmp2;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(199)
			::cpp::Struct<SDL_Event> tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(199)
			this->handle_input_ev(tmp3);
			HX_STACK_LINE(200)
			::cpp::Struct<SDL_Event> tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(200)
			this->handle_window_ev(tmp4);
			HX_STACK_LINE(202)
			bool tmp5 = (e->type == (int)256);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(202)
			if ((tmp5)){
				HX_STACK_LINE(203)
				::snow::Snow tmp6 = this->app;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(203)
				tmp6->dispatch_event((int)10);
			}
		}
		HX_STACK_LINE(208)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		tmp->dispatch_event((int)3);
		HX_STACK_LINE(210)
		::snow::Snow tmp1 = this->app;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(210)
		bool tmp2 = tmp1->has_shutdown;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(210)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(210)
		if ((tmp3)){
			HX_STACK_LINE(211)
			::cpp::Pointer< SDL_Window > tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(211)
			SDL_GL_SwapWindow(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Runtime_obj,loop,(void))

int Runtime_obj::event_watch( Dynamic _,::cpp::Struct<SDL_Event> e){
	HX_STACK_FRAME("snow.modules.sdl.Runtime","event_watch",0x7bbd022f,"snow.modules.sdl.Runtime.event_watch","snow/modules/sdl/Runtime.hx",219,0x0c37166e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_,"_")
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(221)
	int _type = (int)0;		HX_STACK_VAR(_type,"_type");
	HX_STACK_LINE(223)
	{
		HX_STACK_LINE(223)
		int _g = e->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(223)
		int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(223)
		switch( (int)(tmp)){
			case (int)257: {
				HX_STACK_LINE(225)
				_type = (int)11;
			}
			;break;
			case (int)258: {
				HX_STACK_LINE(227)
				_type = (int)12;
			}
			;break;
			case (int)259: {
				HX_STACK_LINE(229)
				_type = (int)13;
			}
			;break;
			case (int)260: {
				HX_STACK_LINE(231)
				_type = (int)14;
			}
			;break;
			case (int)261: {
				HX_STACK_LINE(233)
				_type = (int)15;
			}
			;break;
			case (int)262: {
				HX_STACK_LINE(235)
				_type = (int)16;
			}
			;break;
			default: {
				HX_STACK_LINE(237)
				return (int)0;
			}
		}
	}
	HX_STACK_LINE(240)
	::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(240)
	int tmp1 = _type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(240)
	tmp->dispatch_event(tmp1);
	HX_STACK_LINE(242)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC2(Runtime_obj,event_watch,return )

Void Runtime_obj::handle_window_ev( ::cpp::Struct<SDL_Event> e){
{
		HX_STACK_FRAME("snow.modules.sdl.Runtime","handle_window_ev",0x985ef2e4,"snow.modules.sdl.Runtime.handle_window_ev","snow/modules/sdl/Runtime.hx",248,0x0c37166e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(250)
		int tmp = e->window.data1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(250)
		int _data1 = tmp;		HX_STACK_VAR(_data1,"_data1");
		HX_STACK_LINE(251)
		int tmp1 = e->window.data2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(251)
		int _data2 = tmp1;		HX_STACK_VAR(_data2,"_data2");
		HX_STACK_LINE(253)
		bool tmp2 = (e->type == (int)512);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(253)
		if ((tmp2)){
			HX_STACK_LINE(254)
			int _type = (int)0;		HX_STACK_VAR(_type,"_type");
			HX_STACK_LINE(255)
			{
				HX_STACK_LINE(255)
				int tmp3 = e->window.event;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(255)
				int _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(255)
				int tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(255)
				switch( (int)(tmp4)){
					case (int)1: {
						HX_STACK_LINE(257)
						_type = (int)1;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(259)
						_type = (int)2;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(261)
						_type = (int)3;
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(263)
						_type = (int)4;
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(265)
						_type = (int)7;
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(267)
						_type = (int)8;
					}
					;break;
					case (int)9: {
						HX_STACK_LINE(269)
						_type = (int)9;
					}
					;break;
					case (int)10: {
						HX_STACK_LINE(271)
						_type = (int)10;
					}
					;break;
					case (int)11: {
						HX_STACK_LINE(273)
						_type = (int)11;
					}
					;break;
					case (int)12: {
						HX_STACK_LINE(275)
						_type = (int)12;
					}
					;break;
					case (int)13: {
						HX_STACK_LINE(277)
						_type = (int)13;
					}
					;break;
					case (int)14: {
						HX_STACK_LINE(279)
						_type = (int)14;
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(281)
						_type = (int)5;
						HX_STACK_LINE(282)
						Float tmp5 = this->window_device_pixel_ratio();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(282)
						this->window_dpr = tmp5;
						HX_STACK_LINE(283)
						Float tmp6 = this->window_dpr;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(283)
						int tmp7 = _data1;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(283)
						Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(283)
						int tmp9 = ::Math_obj::floor(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(283)
						int tmp10 = _data1 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(283)
						this->window_w = tmp10;
						HX_STACK_LINE(284)
						Float tmp11 = this->window_dpr;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(284)
						int tmp12 = _data2;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(284)
						Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(284)
						int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(284)
						int tmp15 = _data2 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(284)
						this->window_h = tmp15;
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(286)
						_type = (int)6;
						HX_STACK_LINE(287)
						Float tmp5 = this->window_device_pixel_ratio();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(287)
						this->window_dpr = tmp5;
						HX_STACK_LINE(288)
						Float tmp6 = this->window_dpr;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(288)
						int tmp7 = _data1;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(288)
						Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(288)
						int tmp9 = ::Math_obj::floor(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(288)
						int tmp10 = _data1 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(288)
						this->window_w = tmp10;
						HX_STACK_LINE(289)
						Float tmp11 = this->window_dpr;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(289)
						int tmp12 = _data2;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(289)
						Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(289)
						int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(289)
						int tmp15 = _data2 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(289)
						this->window_h = tmp15;
					}
					;break;
					case (int)0: {
					}
					;break;
				}
			}
			HX_STACK_LINE(294)
			bool tmp3 = (_type != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(294)
			if ((tmp3)){
				HX_STACK_LINE(295)
				::snow::Snow tmp4 = this->app;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(295)
				int tmp5 = _type;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(295)
				Float tmp6 = e->window.timestamp;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(295)
				Float tmp7 = (Float(tmp6) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(295)
				int tmp8 = e->window.windowID;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(295)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(295)
				int tmp10 = _data1;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(295)
				int tmp11 = _data2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(295)
				tmp4->dispatch_window_event(tmp5,tmp7,tmp9,tmp10,tmp11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Runtime_obj,handle_window_ev,(void))

int Runtime_obj::to_pixels( Float _value){
	HX_STACK_FRAME("snow.modules.sdl.Runtime","to_pixels",0x14e02276,"snow.modules.sdl.Runtime.to_pixels","snow/modules/sdl/Runtime.hx",304,0x0c37166e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(305)
	Float tmp = this->window_dpr;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(305)
	Float tmp1 = _value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(305)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(305)
	int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(305)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Runtime_obj,to_pixels,return )

Void Runtime_obj::create_window( ){
{
		HX_STACK_FRAME("snow.modules.sdl.Runtime","create_window",0x3f3e2e58,"snow.modules.sdl.Runtime.create_window","snow/modules/sdl/Runtime.hx",308,0x0c37166e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(312)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(312)
		Dynamic tmp1 = tmp->config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(312)
		Dynamic config = tmp1;		HX_STACK_VAR(config,"config");
		HX_STACK_LINE(314)
		::snow::Snow tmp2 = this->app;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(314)
		Dynamic tmp3 = tmp2->config->__Field(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(314)
		this->apply_GL_attr(tmp3);
		HX_STACK_LINE(316)
		this->window_w = config->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
		HX_STACK_LINE(317)
		this->window_h = config->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
		HX_STACK_LINE(319)
		::String tmp4 = ((::String)(config->__Field(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"), hx::paccDynamic )));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(319)
		Dynamic tmp5 = config->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(319)
		Dynamic tmp6 = config->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(319)
		Dynamic tmp7 = config->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(319)
		Dynamic tmp8 = config->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(319)
		Dynamic tmp9 = config;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(319)
		int tmp10 = this->window_flags(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(319)
		::cpp::Pointer< SDL_Window > tmp11 = ::cpp::Pointer< SDL_Window >(SDL_CreateWindow(tmp4,tmp5,tmp6,tmp7,tmp8,tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(319)
		this->window = tmp11;
		HX_STACK_LINE(321)
		::cpp::Pointer< SDL_Window > tmp12 = this->window;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(321)
		bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(321)
		if ((tmp13)){
			HX_STACK_LINE(322)
			 const ::cpp::Char *  tmp14 = SDL_GetError();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(322)
			::String tmp15 = ((::String)(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(322)
			::String tmp16 = (HX_HCSTRING("runtime / sdl / failed to create platform window, unable to recover / `","\xfd","\xc1","\x6d","\x8d") + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(322)
			::String tmp17 = (tmp16 + HX_HCSTRING("`","\x60","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(322)
			::snow::types::Error tmp18 = ::snow::types::Error_obj::error(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(322)
			HX_STACK_DO_THROW(tmp18);
		}
		HX_STACK_LINE(325)
		::cpp::Pointer< SDL_Window > tmp14 = this->window;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(325)
		int tmp15 = SDL_GetWindowID(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(325)
		int _id = tmp15;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(330)
		::cpp::Pointer< SDL_Window > tmp16 = this->window;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(330)
		bool tmp17 = this->create_render_context(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(330)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(330)
		if ((tmp18)){
			HX_STACK_LINE(331)
			 const ::cpp::Char *  tmp19 = SDL_GetError();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(331)
			::String tmp20 = ((::String)(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(331)
			::String tmp21 = (HX_HCSTRING("runtime / sdl / failed to create render context, unable to recover / `","\x0f","\x76","\x67","\xe8") + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(331)
			::String tmp22 = (tmp21 + HX_HCSTRING("`","\x60","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(331)
			::snow::types::Error tmp23 = ::snow::types::Error_obj::error(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(331)
			HX_STACK_DO_THROW(tmp23);
		}
		HX_STACK_LINE(334)
		::cpp::Pointer< SDL_Window > tmp19 = this->window;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(334)
		this->post_render_context(tmp19);
		HX_STACK_LINE(339)
		Dynamic tmp20 = config->__Field(HX_HCSTRING("borderless","\x45","\x46","\x71","\x17"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(339)
		Dynamic tmp21 = config->__Field(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(339)
		Dynamic tmp22 = config->__Field(HX_HCSTRING("true_fullscreen","\xcc","\x26","\xf1","\xd0"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(339)
		Dynamic tmp23 = config->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(339)
		Dynamic tmp24 = config->__Field(HX_HCSTRING("no_input","\x4c","\x92","\x80","\x55"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(339)
		Dynamic tmp25 = config->__Field(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(339)
		::String tmp26 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + config->__Field(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"), hx::paccDynamic ));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(339)
		Dynamic tmp27 = config->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(339)
		Dynamic tmp28 = config->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(339)
		Dynamic tmp29 = config->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &tmp22,Dynamic &tmp28,Dynamic &tmp20,Dynamic &tmp23,::String &tmp26,Dynamic &tmp21,Dynamic &tmp24,Dynamic &tmp25,Dynamic &tmp27,Dynamic &tmp29){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/modules/sdl/Runtime.hx",339,0x0c37166e)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("borderless","\x45","\x46","\x71","\x17") , tmp20,false);
					__result->Add(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9") , tmp21,false);
					__result->Add(HX_HCSTRING("true_fullscreen","\xcc","\x26","\xf1","\xd0") , tmp22,false);
					__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , tmp23,false);
					__result->Add(HX_HCSTRING("no_input","\x4c","\x92","\x80","\x55") , tmp24,false);
					__result->Add(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9") , tmp25,false);
					__result->Add(HX_HCSTRING("title","\x98","\x15","\x3b","\x10") , tmp26,false);
					__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , tmp27,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp28,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp29,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(339)
		Dynamic tmp30 = _Function_1_1::Block(tmp22,tmp28,tmp20,tmp23,tmp26,tmp21,tmp24,tmp25,tmp27,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(339)
		Dynamic actual_config = tmp30;		HX_STACK_VAR(actual_config,"actual_config");
		HX_STACK_LINE(340)
		Dynamic tmp31;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(340)
		{
			HX_STACK_LINE(340)
			::snow::Snow tmp32 = this->app;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(340)
			Dynamic tmp33 = tmp32->config->__Field(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(340)
			Dynamic _config = tmp33;		HX_STACK_VAR(_config,"_config");
			HX_STACK_LINE(340)
			Dynamic tmp34 = _config->__Field(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(340)
			Dynamic tmp35 = _config->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(340)
			Dynamic tmp36 = _config->__Field(HX_HCSTRING("stencil","\xfc","\xbd","\x03","\x80"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(340)
			Dynamic tmp37 = _config->__Field(HX_HCSTRING("red_bits","\xf4","\xd7","\x46","\xd0"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(340)
			Dynamic tmp38 = _config->__Field(HX_HCSTRING("green_bits","\x42","\xa5","\xbf","\x35"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(340)
			Dynamic tmp39 = _config->__Field(HX_HCSTRING("blue_bits","\x0b","\x26","\x35","\x39"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(340)
			Dynamic tmp40 = _config->__Field(HX_HCSTRING("alpha_bits","\xc7","\xfa","\x9f","\x81"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(340)
			Dynamic tmp41 = _config->__Field(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"), hx::paccDynamic )->__Field(HX_HCSTRING("major","\x39","\xbd","\x1b","\x03"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(340)
			Dynamic tmp42 = _config->__Field(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"), hx::paccDynamic )->__Field(HX_HCSTRING("minor","\x35","\x7b","\x68","\x08"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(340)
			Dynamic tmp43 = _config->__Field(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"), hx::paccDynamic )->__Field(HX_HCSTRING("profile","\x29","\x49","\x49","\xf3"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &tmp42,Dynamic &tmp41,Dynamic &tmp43){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/modules/sdl/Runtime.hx",340,0x0c37166e)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("major","\x39","\xbd","\x1b","\x03") , tmp41,false);
						__result->Add(HX_HCSTRING("minor","\x35","\x7b","\x68","\x08") , tmp42,false);
						__result->Add(HX_HCSTRING("profile","\x29","\x49","\x49","\xf3") , tmp43,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(340)
			Dynamic tmp44 = _Function_2_1::Block(tmp42,tmp41,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			struct _Function_2_2{
				inline static Dynamic Block( Dynamic &tmp44,Dynamic &tmp36,Dynamic &tmp38,Dynamic &tmp40,Dynamic &tmp34,Dynamic &tmp37,Dynamic &tmp39,Dynamic &tmp35){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/modules/sdl/Runtime.hx",340,0x0c37166e)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48") , tmp34,false);
						__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp35,false);
						__result->Add(HX_HCSTRING("stencil","\xfc","\xbd","\x03","\x80") , tmp36,false);
						__result->Add(HX_HCSTRING("red_bits","\xf4","\xd7","\x46","\xd0") , tmp37,false);
						__result->Add(HX_HCSTRING("green_bits","\x42","\xa5","\xbf","\x35") , tmp38,false);
						__result->Add(HX_HCSTRING("blue_bits","\x0b","\x26","\x35","\x39") , tmp39,false);
						__result->Add(HX_HCSTRING("alpha_bits","\xc7","\xfa","\x9f","\x81") , tmp40,false);
						__result->Add(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21") , tmp44,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(340)
			tmp31 = _Function_2_2::Block(tmp44,tmp36,tmp38,tmp40,tmp34,tmp37,tmp39,tmp35);
		}
		HX_STACK_LINE(340)
		Dynamic actual_render = tmp31;		HX_STACK_VAR(actual_render,"actual_render");
		HX_STACK_LINE(342)
		::cpp::Pointer< SDL_Window > tmp32 = this->window;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(342)
		Dynamic tmp33 = actual_config;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(342)
		Dynamic tmp34 = this->update_window_config(tmp32,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(342)
		actual_config = tmp34;
		HX_STACK_LINE(343)
		::cpp::Pointer< SDL_Window > tmp35 = this->window;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(343)
		Dynamic tmp36 = actual_render;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(343)
		Dynamic tmp37 = this->update_render_config(tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(343)
		actual_render = tmp37;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Runtime_obj,create_window,(void))

bool Runtime_obj::create_render_context( ::cpp::Pointer< SDL_Window > _window){
	HX_STACK_FRAME("snow.modules.sdl.Runtime","create_render_context",0x5e43e32e,"snow.modules.sdl.Runtime.create_render_context","snow/modules/sdl/Runtime.hx",347,0x0c37166e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_window,"_window")
	HX_STACK_LINE(349)
	::cpp::Pointer< SDL_Window > tmp = _window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(349)
	SDL_GLContext tmp1 = SDL_GL_CreateContext(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(349)
	this->gl = tmp1;
	HX_STACK_LINE(351)
	SDL_GLContext tmp2 = this->gl;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(351)
	bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(351)
	bool tmp4 = (tmp3 == false);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(351)
	bool _success = tmp4;		HX_STACK_VAR(_success,"_success");
	HX_STACK_LINE(355)
	bool tmp5 = _success;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(355)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Runtime_obj,create_render_context,return )

Void Runtime_obj::post_render_context( ::cpp::Pointer< SDL_Window > _window){
{
		HX_STACK_FRAME("snow.modules.sdl.Runtime","post_render_context",0xd5e12b0a,"snow.modules.sdl.Runtime.post_render_context","snow/modules/sdl/Runtime.hx",359,0x0c37166e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_window,"_window")
		HX_STACK_LINE(361)
		::cpp::Pointer< SDL_Window > tmp = _window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(361)
		SDL_GLContext tmp1 = this->gl;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(361)
		SDL_GL_MakeCurrent(tmp,tmp1);
		HX_STACK_LINE(364)
		int tmp2 = linc::glew::init();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(364)
		int _result = tmp2;		HX_STACK_VAR(_result,"_result");
		HX_STACK_LINE(365)
		bool tmp3 = (_result != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(365)
		if ((tmp3)){
			HX_STACK_LINE(366)
			int tmp4 = _result;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(366)
			::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(366)
			switch( (int)(tmp4)){
				case (int)0: {
					HX_STACK_LINE(366)
					tmp5 = HX_HCSTRING("No Error","\xa9","\x0a","\xf0","\x46");
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(366)
					tmp5 = HX_HCSTRING("Missing GL version","\xb7","\x70","\xed","\x9e");
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(366)
					tmp5 = HX_HCSTRING("Need at least OpenGL 1.1","\x1d","\xe4","\xcf","\xec");
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(366)
					tmp5 = HX_HCSTRING("Need at least GLX 1.2","\xee","\x38","\xd3","\x5f");
				}
				;break;
				default: {
					HX_STACK_LINE(366)
					tmp5 = HX_HCSTRING("Unknown error","\x92","\x0e","\x0f","\x10");
				}
			}
			HX_STACK_LINE(366)
			::String tmp6 = (HX_HCSTRING("runtime / sdl / failed to setup created render context, unable to recover / `","\x16","\x05","\xbc","\xdc") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(366)
			::String tmp7 = (tmp6 + HX_HCSTRING("`","\x60","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(366)
			::snow::types::Error tmp8 = ::snow::types::Error_obj::error(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(366)
			HX_STACK_DO_THROW(tmp8);
		}
		else{
			HX_STACK_LINE(138)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Runtime_obj,post_render_context,(void))

Void Runtime_obj::apply_GL_attr( Dynamic render){
{
		HX_STACK_FRAME("snow.modules.sdl.Runtime","apply_GL_attr",0xe29f69ff,"snow.modules.sdl.Runtime.apply_GL_attr","snow/modules/sdl/Runtime.hx",376,0x0c37166e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(render,"render")
		HX_STACK_LINE(380)
		{
			HX_STACK_LINE(380)
			int value = render->__Field(HX_HCSTRING("red_bits","\xf4","\xd7","\x46","\xd0"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(380)
			int tmp = value;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(380)
			SDL_GL_SetAttribute((SDL_GLattr)(int)0,tmp);
		}
		HX_STACK_LINE(381)
		{
			HX_STACK_LINE(381)
			int value = render->__Field(HX_HCSTRING("green_bits","\x42","\xa5","\xbf","\x35"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(381)
			int tmp = value;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(381)
			SDL_GL_SetAttribute((SDL_GLattr)(int)1,tmp);
		}
		HX_STACK_LINE(382)
		{
			HX_STACK_LINE(382)
			int value = render->__Field(HX_HCSTRING("blue_bits","\x0b","\x26","\x35","\x39"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(382)
			int tmp = value;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(382)
			SDL_GL_SetAttribute((SDL_GLattr)(int)2,tmp);
		}
		HX_STACK_LINE(383)
		{
			HX_STACK_LINE(383)
			int value = render->__Field(HX_HCSTRING("alpha_bits","\xc7","\xfa","\x9f","\x81"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(383)
			int tmp = value;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(383)
			SDL_GL_SetAttribute((SDL_GLattr)(int)3,tmp);
		}
		HX_STACK_LINE(384)
		SDL_GL_SetAttribute((SDL_GLattr)(int)5,(int)1);
		HX_STACK_LINE(386)
		bool tmp = (render->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(386)
		if ((tmp)){
			HX_STACK_LINE(388)
			int value = render->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(388)
			int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(388)
			SDL_GL_SetAttribute((SDL_GLattr)(int)6,tmp1);
		}
		HX_STACK_LINE(391)
		bool tmp1 = (render->__Field(HX_HCSTRING("stencil","\xfc","\xbd","\x03","\x80"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(391)
		if ((tmp1)){
			HX_STACK_LINE(393)
			int value = render->__Field(HX_HCSTRING("stencil","\xfc","\xbd","\x03","\x80"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(393)
			int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(393)
			SDL_GL_SetAttribute((SDL_GLattr)(int)7,tmp2);
		}
		HX_STACK_LINE(396)
		bool tmp2 = (render->__Field(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(396)
		if ((tmp2)){
			HX_STACK_LINE(398)
			SDL_GL_SetAttribute((SDL_GLattr)(int)13,(int)1);
			HX_STACK_LINE(399)
			{
				HX_STACK_LINE(399)
				int value = render->__Field(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(399)
				int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(399)
				SDL_GL_SetAttribute((SDL_GLattr)(int)14,tmp3);
			}
		}
		HX_STACK_LINE(404)
		{
			HX_STACK_LINE(404)
			Dynamic tmp3 = render->__Field(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"), hx::paccDynamic )->__Field(HX_HCSTRING("profile","\x29","\x49","\x49","\xf3"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(404)
			Dynamic _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(404)
			bool tmp4 = (_g != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(404)
			if ((tmp4)){
				HX_STACK_LINE(404)
				Dynamic tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(404)
				switch( (int)(tmp5)){
					case (int)0: {
						HX_STACK_LINE(407)
						SDL_GL_SetAttribute((SDL_GLattr)(int)21,(int)2);
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(410)
						SDL_GL_SetAttribute((SDL_GLattr)(int)15,(int)1);
						HX_STACK_LINE(411)
						SDL_GL_SetAttribute((SDL_GLattr)(int)21,(int)1);
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(414)
						SDL_GL_SetAttribute((SDL_GLattr)(int)15,(int)1);
						HX_STACK_LINE(415)
						SDL_GL_SetAttribute((SDL_GLattr)(int)21,(int)4);
						HX_STACK_LINE(417)
						Dynamic tmp6 = render->__Field(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"), hx::paccDynamic )->__Field(HX_HCSTRING("major","\x39","\xbd","\x1b","\x03"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(417)
						bool tmp7 = (tmp6 == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(417)
						if ((tmp7)){
							HX_STACK_LINE(418)
							render->__Field(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("major","\x39","\xbd","\x1b","\x03")) = (int)2;
							HX_STACK_LINE(419)
							render->__Field(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("minor","\x35","\x7b","\x68","\x08")) = (int)0;
						}
					}
					;break;
				}
			}
		}
		HX_STACK_LINE(424)
		Dynamic tmp3 = render->__Field(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"), hx::paccDynamic )->__Field(HX_HCSTRING("major","\x39","\xbd","\x1b","\x03"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(424)
		bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(424)
		if ((tmp4)){
			HX_STACK_LINE(426)
			{
				HX_STACK_LINE(426)
				Dynamic tmp5 = render->__Field(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"), hx::paccDynamic )->__Field(HX_HCSTRING("major","\x39","\xbd","\x1b","\x03"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(426)
				int value = tmp5;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(426)
				int tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(426)
				SDL_GL_SetAttribute((SDL_GLattr)(int)17,tmp6);
			}
			HX_STACK_LINE(427)
			{
				HX_STACK_LINE(427)
				Dynamic tmp5 = render->__Field(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"), hx::paccDynamic )->__Field(HX_HCSTRING("minor","\x35","\x7b","\x68","\x08"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(427)
				int value = tmp5;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(427)
				int tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(427)
				SDL_GL_SetAttribute((SDL_GLattr)(int)18,tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Runtime_obj,apply_GL_attr,(void))

int Runtime_obj::window_flags( Dynamic config){
	HX_STACK_FRAME("snow.modules.sdl.Runtime","window_flags",0x6e2b31d3,"snow.modules.sdl.Runtime.window_flags","snow/modules/sdl/Runtime.hx",432,0x0c37166e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(434)
	int flags = (int)0;		HX_STACK_VAR(flags,"flags");
	HX_STACK_LINE(436)
	hx::OrEq(flags,(int)2);
	HX_STACK_LINE(437)
	hx::OrEq(flags,(int)8192);
	HX_STACK_LINE(439)
	Dynamic tmp = config->__Field(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(439)
	if ((tmp)){
		HX_STACK_LINE(439)
		hx::OrEq(flags,(int)32);
	}
	HX_STACK_LINE(440)
	Dynamic tmp1 = config->__Field(HX_HCSTRING("borderless","\x45","\x46","\x71","\x17"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(440)
	if ((tmp1)){
		HX_STACK_LINE(440)
		hx::OrEq(flags,(int)16);
	}
	HX_STACK_LINE(442)
	Dynamic tmp2 = config->__Field(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(442)
	if ((tmp2)){
		HX_STACK_LINE(443)
		Dynamic tmp3 = config->__Field(HX_HCSTRING("true_fullscreen","\xcc","\x26","\xf1","\xd0"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(443)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(443)
		if ((tmp4)){
			HX_STACK_LINE(444)
			hx::OrEq(flags,(int)4097);
		}
		else{
		}
	}
	HX_STACK_LINE(452)
	int tmp3 = flags;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(452)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Runtime_obj,window_flags,return )

Dynamic Runtime_obj::update_window_config( ::cpp::Pointer< SDL_Window > _window,Dynamic config){
	HX_STACK_FRAME("snow.modules.sdl.Runtime","update_window_config",0x4b39b0d6,"snow.modules.sdl.Runtime.update_window_config","snow/modules/sdl/Runtime.hx",456,0x0c37166e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_window,"_window")
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(458)
	Dynamic tmp = config->__Field(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(458)
	if ((tmp)){
		HX_STACK_LINE(459)
		Dynamic tmp1 = config->__Field(HX_HCSTRING("true_fullscreen","\xcc","\x26","\xf1","\xd0"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(459)
		if ((tmp1)){
			HX_STACK_LINE(461)
			::cpp::Pointer< SDL_Window > tmp2 = _window;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(461)
			SDL_SetWindowFullscreen(tmp2,(int)1);
		}
	}
	HX_STACK_LINE(466)
	::cpp::Pointer< SDL_Window > tmp1 = _window;		HX_STACK_VAR(tmp1,"tmp1");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &config){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/modules/sdl/Runtime.hx",466,0x0c37166e)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , config->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , config->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(466)
	Dynamic tmp2 = _Function_1_1::Block(config);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(466)
	Dynamic tmp3 = linc::sdl::GL_GetDrawableSize(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(466)
	Dynamic size = tmp3;		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(467)
	::cpp::Pointer< SDL_Window > tmp4 = _window;		HX_STACK_VAR(tmp4,"tmp4");
	struct _Function_1_2{
		inline static Dynamic Block( Dynamic &config){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/modules/sdl/Runtime.hx",467,0x0c37166e)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , config->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , config->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(467)
	Dynamic tmp5 = _Function_1_2::Block(config);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(467)
	Dynamic tmp6 = linc::sdl::getWindowPosition(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(467)
	Dynamic pos = tmp6;		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(469)
	config->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = pos->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
	HX_STACK_LINE(470)
	config->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = pos->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
	HX_STACK_LINE(471)
	int tmp7 = this->window_w = size->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(471)
	config->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp7;
	HX_STACK_LINE(472)
	int tmp8 = this->window_h = size->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(472)
	config->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp8;
	HX_STACK_LINE(474)
	Float tmp9 = this->window_device_pixel_ratio();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(474)
	this->window_dpr = tmp9;
	HX_STACK_LINE(477)
	Dynamic tmp10 = config;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(477)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(Runtime_obj,update_window_config,return )

Dynamic Runtime_obj::update_render_config( ::cpp::Pointer< SDL_Window > _window,Dynamic render){
	HX_STACK_FRAME("snow.modules.sdl.Runtime","update_render_config",0x8c0f3230,"snow.modules.sdl.Runtime.update_render_config","snow/modules/sdl/Runtime.hx",481,0x0c37166e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_window,"_window")
	HX_STACK_ARG(render,"render")
	HX_STACK_LINE(483)
	int tmp = linc::sdl::GL_GetAttribute((int)14);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(483)
	render->__FieldRef(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")) = tmp;
	HX_STACK_LINE(484)
	int tmp1 = linc::sdl::GL_GetAttribute((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(484)
	render->__FieldRef(HX_HCSTRING("red_bits","\xf4","\xd7","\x46","\xd0")) = tmp1;
	HX_STACK_LINE(485)
	int tmp2 = linc::sdl::GL_GetAttribute((int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(485)
	render->__FieldRef(HX_HCSTRING("green_bits","\x42","\xa5","\xbf","\x35")) = tmp2;
	HX_STACK_LINE(486)
	int tmp3 = linc::sdl::GL_GetAttribute((int)2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(486)
	render->__FieldRef(HX_HCSTRING("blue_bits","\x0b","\x26","\x35","\x39")) = tmp3;
	HX_STACK_LINE(487)
	int tmp4 = linc::sdl::GL_GetAttribute((int)3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(487)
	render->__FieldRef(HX_HCSTRING("alpha_bits","\xc7","\xfa","\x9f","\x81")) = tmp4;
	HX_STACK_LINE(488)
	int tmp5 = linc::sdl::GL_GetAttribute((int)6);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(488)
	render->__FieldRef(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")) = tmp5;
	HX_STACK_LINE(489)
	int tmp6 = linc::sdl::GL_GetAttribute((int)7);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(489)
	render->__FieldRef(HX_HCSTRING("stencil","\xfc","\xbd","\x03","\x80")) = tmp6;
	HX_STACK_LINE(491)
	int tmp7 = linc::sdl::GL_GetAttribute((int)17);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(491)
	render->__Field(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("major","\x39","\xbd","\x1b","\x03")) = tmp7;
	HX_STACK_LINE(492)
	int tmp8 = linc::sdl::GL_GetAttribute((int)18);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(492)
	render->__Field(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("minor","\x35","\x7b","\x68","\x08")) = tmp8;
	HX_STACK_LINE(494)
	int tmp9 = linc::sdl::GL_GetAttribute((int)21);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(494)
	int profile = tmp9;		HX_STACK_VAR(profile,"profile");
	HX_STACK_LINE(495)
	int tmp10 = profile;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(495)
	switch( (int)(tmp10)){
		case (int)2: {
			HX_STACK_LINE(498)
			render->__Field(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("profile","\x29","\x49","\x49","\xf3")) = (int)0;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(501)
			render->__Field(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("profile","\x29","\x49","\x49","\xf3")) = (int)1;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(504)
			render->__Field(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("profile","\x29","\x49","\x49","\xf3")) = (int)2;
		}
		;break;
	}
	HX_STACK_LINE(508)
	Dynamic tmp11 = render;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(508)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC2(Runtime_obj,update_render_config,return )

Void Runtime_obj::handle_input_ev( ::cpp::Struct<SDL_Event> e){
{
		HX_STACK_FRAME("snow.modules.sdl.Runtime","handle_input_ev",0xa44b3f02,"snow.modules.sdl.Runtime.handle_input_ev","snow/modules/sdl/Runtime.hx",516,0x0c37166e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(516)
		int _g = e->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(516)
		int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(516)
		switch( (int)(tmp)){
			case (int)768: {
				HX_STACK_LINE(521)
				::snow::Snow tmp1 = this->app;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(522)
				SDL_Keysym tmp2 = e->key.keysym;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(522)
				int tmp3 = tmp2.sym;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(523)
				SDL_Keysym tmp4 = e->key.keysym;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(523)
				int tmp5 = tmp4.scancode;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(524)
				bool tmp6 = e->key.repeat;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(525)
				SDL_Keysym tmp7 = e->key.keysym;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(525)
				int tmp8 = tmp7.mod;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(525)
				::snow::types::ModState tmp9 = this->to_key_mod(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(526)
				Float tmp10 = e->key.timestamp;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(526)
				Float tmp11 = (Float(tmp10) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(527)
				int tmp12 = e->key.windowID;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(527)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(521)
				tmp1->input->dispatch_key_down_event(tmp3,tmp5,tmp6,tmp9,tmp11,tmp13);
			}
			;break;
			case (int)769: {
				HX_STACK_LINE(530)
				::snow::Snow tmp1 = this->app;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(531)
				SDL_Keysym tmp2 = e->key.keysym;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(531)
				int tmp3 = tmp2.sym;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(532)
				SDL_Keysym tmp4 = e->key.keysym;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(532)
				int tmp5 = tmp4.scancode;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(533)
				bool tmp6 = e->key.repeat;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(534)
				SDL_Keysym tmp7 = e->key.keysym;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(534)
				int tmp8 = tmp7.mod;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(534)
				::snow::types::ModState tmp9 = this->to_key_mod(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(535)
				Float tmp10 = e->key.timestamp;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(535)
				Float tmp11 = (Float(tmp10) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(536)
				int tmp12 = e->key.windowID;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(536)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(530)
				tmp1->input->dispatch_key_up_event(tmp3,tmp5,tmp6,tmp9,tmp11,tmp13);
			}
			;break;
			case (int)770: {
				HX_STACK_LINE(539)
				::snow::Snow tmp1 = this->app;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(540)
				 const ::cpp::Char *  tmp2 = e->edit.text;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(540)
				 const ::cpp::Char *  tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(540)
				::String tmp4 = ::String(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(541)
				::cpp::Int32 tmp5 = e->edit.start;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(542)
				::cpp::Int32 tmp6 = e->edit.length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(544)
				Float tmp7 = e->edit.timestamp;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(544)
				Float tmp8 = (Float(tmp7) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(545)
				int tmp9 = e->edit.windowID;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(545)
				int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(539)
				tmp1->input->dispatch_text_event(tmp4,tmp5,tmp6,(int)1,tmp8,tmp10);
			}
			;break;
			case (int)771: {
				HX_STACK_LINE(548)
				::snow::Snow tmp1 = this->app;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(549)
				 const ::cpp::Char *  tmp2 = e->text.text;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(549)
				 const ::cpp::Char *  tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(549)
				::String tmp4 = ::String(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(553)
				Float tmp5 = e->text.timestamp;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(553)
				Float tmp6 = (Float(tmp5) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(554)
				int tmp7 = e->text.windowID;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(554)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(548)
				tmp1->input->dispatch_text_event(tmp4,(int)0,(int)0,(int)2,tmp6,tmp8);
			}
			;break;
			case (int)1024: {
				HX_STACK_LINE(560)
				::snow::Snow tmp1 = this->app;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(561)
				Float tmp2 = this->window_dpr;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(561)
				int tmp3 = e->motion.x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(561)
				Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(561)
				int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(562)
				Float tmp6 = this->window_dpr;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(562)
				int tmp7 = e->motion.y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(562)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(562)
				int tmp9 = ::Math_obj::floor(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(563)
				Float tmp10 = this->window_dpr;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(563)
				int tmp11 = e->motion.xrel;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(563)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(563)
				int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(564)
				Float tmp14 = this->window_dpr;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(564)
				int tmp15 = e->motion.yrel;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(564)
				Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(564)
				int tmp17 = ::Math_obj::floor(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(565)
				Float tmp18 = e->motion.timestamp;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(565)
				Float tmp19 = (Float(tmp18) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(566)
				int tmp20 = e->motion.windowID;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(566)
				int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(560)
				tmp1->input->dispatch_mouse_move_event(tmp5,tmp9,tmp13,tmp17,tmp19,tmp21);
			}
			;break;
			case (int)1025: {
				HX_STACK_LINE(569)
				::snow::Snow tmp1 = this->app;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(570)
				Float tmp2 = this->window_dpr;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(570)
				int tmp3 = e->button.x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(570)
				Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(570)
				int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(571)
				Float tmp6 = this->window_dpr;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(571)
				int tmp7 = e->button.y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(571)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(571)
				int tmp9 = ::Math_obj::floor(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(572)
				int tmp10 = e->button.button;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(573)
				Float tmp11 = e->button.timestamp;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(573)
				Float tmp12 = (Float(tmp11) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(574)
				int tmp13 = e->button.windowID;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(574)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(569)
				tmp1->input->dispatch_mouse_down_event(tmp5,tmp9,tmp10,tmp12,tmp14);
			}
			;break;
			case (int)1026: {
				HX_STACK_LINE(577)
				::snow::Snow tmp1 = this->app;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(578)
				Float tmp2 = this->window_dpr;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(578)
				int tmp3 = e->button.x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(578)
				Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(578)
				int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(579)
				Float tmp6 = this->window_dpr;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(579)
				int tmp7 = e->button.y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(579)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(579)
				int tmp9 = ::Math_obj::floor(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(580)
				int tmp10 = e->button.button;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(581)
				Float tmp11 = e->button.timestamp;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(581)
				Float tmp12 = (Float(tmp11) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(582)
				int tmp13 = e->button.windowID;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(582)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(577)
				tmp1->input->dispatch_mouse_up_event(tmp5,tmp9,tmp10,tmp12,tmp14);
			}
			;break;
			case (int)1027: {
				HX_STACK_LINE(585)
				::snow::Snow tmp1 = this->app;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(586)
				int tmp2 = e->wheel.x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(587)
				int tmp3 = e->wheel.y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(588)
				Float tmp4 = e->wheel.timestamp;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(588)
				Float tmp5 = (Float(tmp4) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(589)
				int tmp6 = e->wheel.windowID;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(589)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(585)
				tmp1->input->dispatch_mouse_wheel_event(tmp2,tmp3,tmp5,tmp7);
			}
			;break;
			case (int)1792: {
				HX_STACK_LINE(595)
				::snow::Snow tmp1 = this->app;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(596)
				Float tmp2 = e->tfinger.x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(597)
				Float tmp3 = e->tfinger.y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(598)
				Float tmp4 = e->tfinger.dx;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(599)
				Float tmp5 = e->tfinger.dy;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(600)
				::cpp::Int64 tmp6 = e->tfinger.fingerId;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(600)
				int tmp7 = ((int)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(601)
				Float tmp8 = e->tfinger.timestamp;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(601)
				Float tmp9 = (Float(tmp8) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(595)
				tmp1->input->dispatch_touch_down_event(tmp2,tmp3,tmp4,tmp5,tmp7,tmp9);
			}
			;break;
			case (int)1793: {
				HX_STACK_LINE(604)
				::snow::Snow tmp1 = this->app;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(605)
				Float tmp2 = e->tfinger.x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(606)
				Float tmp3 = e->tfinger.y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(607)
				Float tmp4 = e->tfinger.dx;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(608)
				Float tmp5 = e->tfinger.dy;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(609)
				::cpp::Int64 tmp6 = e->tfinger.fingerId;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(609)
				int tmp7 = ((int)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(610)
				Float tmp8 = e->tfinger.timestamp;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(610)
				Float tmp9 = (Float(tmp8) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(604)
				tmp1->input->dispatch_touch_up_event(tmp2,tmp3,tmp4,tmp5,tmp7,tmp9);
			}
			;break;
			case (int)1794: {
				HX_STACK_LINE(613)
				::snow::Snow tmp1 = this->app;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(614)
				Float tmp2 = e->tfinger.x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(615)
				Float tmp3 = e->tfinger.y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(616)
				Float tmp4 = e->tfinger.dx;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(617)
				Float tmp5 = e->tfinger.dy;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(618)
				::cpp::Int64 tmp6 = e->tfinger.fingerId;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(618)
				int tmp7 = ((int)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(619)
				Float tmp8 = e->tfinger.timestamp;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(619)
				Float tmp9 = (Float(tmp8) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(613)
				tmp1->input->dispatch_touch_move_event(tmp2,tmp3,tmp4,tmp5,tmp7,tmp9);
			}
			;break;
			case (int)1536: {
				HX_STACK_LINE(626)
				int tmp1 = e->jaxis.which;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(626)
				bool tmp2 = SDL_IsGameController(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(626)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(626)
				if ((tmp3)){
					HX_STACK_LINE(628)
					int tmp4 = e->jaxis.value;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(628)
					int tmp5 = (tmp4 + (int)32768);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(628)
					int tmp6 = (int)65535;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(628)
					Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(628)
					Float _val = tmp7;		HX_STACK_VAR(_val,"_val");
					HX_STACK_LINE(629)
					Float tmp8 = ((Float)-0.5);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(629)
					Float tmp9 = _val;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(629)
					Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(629)
					Float tmp11 = (tmp10 * ((Float)2.0));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(629)
					Float _normalized_val = tmp11;		HX_STACK_VAR(_normalized_val,"_normalized_val");
					HX_STACK_LINE(630)
					::snow::Snow tmp12 = this->app;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(631)
					int tmp13 = e->jaxis.which;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(632)
					int tmp14 = e->jaxis.axis;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(633)
					Float tmp15 = _normalized_val;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(634)
					Float tmp16 = e->jaxis.timestamp;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(634)
					Float tmp17 = (Float(tmp16) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(630)
					tmp12->input->dispatch_gamepad_axis_event(tmp13,tmp14,tmp15,tmp17);
				}
			}
			;break;
			case (int)1539: {
				HX_STACK_LINE(640)
				int tmp1 = e->jbutton.which;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(640)
				bool tmp2 = SDL_IsGameController(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(640)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(640)
				if ((tmp3)){
					HX_STACK_LINE(641)
					::snow::Snow tmp4 = this->app;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(642)
					int tmp5 = e->jbutton.which;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(643)
					int tmp6 = e->jbutton.button;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(645)
					Float tmp7 = e->jbutton.timestamp;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(645)
					Float tmp8 = (Float(tmp7) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(641)
					tmp4->input->dispatch_gamepad_button_down_event(tmp5,tmp6,(int)1,tmp8);
				}
			}
			;break;
			case (int)1540: {
				HX_STACK_LINE(651)
				int tmp1 = e->jbutton.which;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(651)
				bool tmp2 = SDL_IsGameController(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(651)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(651)
				if ((tmp3)){
					HX_STACK_LINE(652)
					::snow::Snow tmp4 = this->app;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(653)
					int tmp5 = e->jbutton.which;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(654)
					int tmp6 = e->jbutton.button;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(656)
					Float tmp7 = e->jbutton.timestamp;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(656)
					Float tmp8 = (Float(tmp7) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(652)
					tmp4->input->dispatch_gamepad_button_up_event(tmp5,tmp6,(int)0,tmp8);
				}
			}
			;break;
			case (int)1541: {
				HX_STACK_LINE(662)
				int tmp1 = e->jdevice.which;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(662)
				bool tmp2 = SDL_IsGameController(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(662)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(662)
				if ((tmp3)){
					HX_STACK_LINE(663)
					int tmp4 = e->jdevice.which;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(663)
					::cpp::Pointer< SDL_Joystick > tmp5 = ::cpp::Pointer< SDL_Joystick >(SDL_JoystickOpen(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(663)
					::cpp::Pointer< SDL_Joystick > _joystick = tmp5;		HX_STACK_VAR(_joystick,"_joystick");
					HX_STACK_LINE(664)
					::haxe::ds::IntMap tmp6 = this->joysticks;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(664)
					int tmp7 = e->jdevice.which;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(664)
					::cpp::Pointer< SDL_Joystick > tmp8 = _joystick;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(664)
					tmp6->set(tmp7,tmp8);
					HX_STACK_LINE(666)
					::snow::Snow tmp9 = this->app;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(667)
					int tmp10 = e->jdevice.which;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(668)
					int tmp11 = e->jdevice.which;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(668)
					 const ::cpp::Char *  tmp12 = SDL_JoystickNameForIndex(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(668)
					::String tmp13 = ((::String)(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(670)
					Float tmp14 = e->jdevice.timestamp;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(670)
					Float tmp15 = (Float(tmp14) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(666)
					tmp9->input->dispatch_gamepad_device_event(tmp10,tmp13,(int)1,tmp15);
				}
			}
			;break;
			case (int)1542: {
				HX_STACK_LINE(675)
				int tmp1 = e->jdevice.which;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(675)
				bool tmp2 = SDL_IsGameController(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(675)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(675)
				if ((tmp3)){
					HX_STACK_LINE(676)
					::haxe::ds::IntMap tmp4 = this->joysticks;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(676)
					int tmp5 = e->jdevice.which;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(676)
					::cpp::Pointer< SDL_Joystick > tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(676)
					::cpp::Pointer< SDL_Joystick > _joystick = tmp6;		HX_STACK_VAR(_joystick,"_joystick");
					HX_STACK_LINE(677)
					::cpp::Pointer< SDL_Joystick > tmp7 = _joystick;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(677)
					SDL_JoystickClose(tmp7);
					HX_STACK_LINE(678)
					::haxe::ds::IntMap tmp8 = this->joysticks;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(678)
					int tmp9 = e->jdevice.which;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(678)
					tmp8->remove(tmp9);
					HX_STACK_LINE(680)
					::snow::Snow tmp10 = this->app;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(681)
					int tmp11 = e->jdevice.which;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(682)
					int tmp12 = e->jdevice.which;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(682)
					 const ::cpp::Char *  tmp13 = SDL_JoystickNameForIndex(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(682)
					::String tmp14 = ((::String)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(684)
					Float tmp15 = e->jdevice.timestamp;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(684)
					Float tmp16 = (Float(tmp15) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(680)
					tmp10->input->dispatch_gamepad_device_event(tmp11,tmp14,(int)2,tmp16);
				}
			}
			;break;
			case (int)1616: {
				HX_STACK_LINE(692)
				int tmp1 = e->caxis.value;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(692)
				int tmp2 = (tmp1 + (int)32768);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(692)
				int tmp3 = (int)65535;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(692)
				Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(692)
				Float _val = tmp4;		HX_STACK_VAR(_val,"_val");
				HX_STACK_LINE(693)
				Float tmp5 = ((Float)-0.5);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(693)
				Float tmp6 = _val;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(693)
				Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(693)
				Float tmp8 = (tmp7 * ((Float)2.0));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(693)
				Float _normalized_val = tmp8;		HX_STACK_VAR(_normalized_val,"_normalized_val");
				HX_STACK_LINE(694)
				::snow::Snow tmp9 = this->app;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(695)
				int tmp10 = e->caxis.which;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(696)
				int tmp11 = e->caxis.axis;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(697)
				Float tmp12 = _normalized_val;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(698)
				Float tmp13 = e->caxis.timestamp;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(698)
				Float tmp14 = (Float(tmp13) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(694)
				tmp9->input->dispatch_gamepad_axis_event(tmp10,tmp11,tmp12,tmp14);
			}
			;break;
			case (int)1617: {
				HX_STACK_LINE(701)
				::snow::Snow tmp1 = this->app;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(702)
				int tmp2 = e->cbutton.which;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(703)
				int tmp3 = e->cbutton.button;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(705)
				Float tmp4 = e->cbutton.timestamp;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(705)
				Float tmp5 = (Float(tmp4) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(701)
				tmp1->input->dispatch_gamepad_button_down_event(tmp2,tmp3,(int)1,tmp5);
			}
			;break;
			case (int)1618: {
				HX_STACK_LINE(708)
				::snow::Snow tmp1 = this->app;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(709)
				int tmp2 = e->cbutton.which;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(710)
				int tmp3 = e->cbutton.button;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(712)
				Float tmp4 = e->cbutton.timestamp;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(712)
				Float tmp5 = (Float(tmp4) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(708)
				tmp1->input->dispatch_gamepad_button_up_event(tmp2,tmp3,(int)0,tmp5);
			}
			;break;
			case (int)1619: {
				HX_STACK_LINE(716)
				int tmp1 = e->cdevice.which;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(716)
				::cpp::Pointer< SDL_GameController > tmp2 = ::cpp::Pointer< SDL_GameController >(SDL_GameControllerOpen(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(716)
				::cpp::Pointer< SDL_GameController > _gamepad = tmp2;		HX_STACK_VAR(_gamepad,"_gamepad");
				HX_STACK_LINE(717)
				::haxe::ds::IntMap tmp3 = this->gamepads;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(717)
				int tmp4 = e->cdevice.which;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(717)
				::cpp::Pointer< SDL_GameController > tmp5 = _gamepad;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(717)
				tmp3->set(tmp4,tmp5);
				HX_STACK_LINE(719)
				::snow::Snow tmp6 = this->app;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(720)
				int tmp7 = e->cdevice.which;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(721)
				int tmp8 = e->cdevice.which;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(721)
				 const ::cpp::Char *  tmp9 = SDL_GameControllerNameForIndex(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(721)
				::String tmp10 = ((::String)(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(723)
				Float tmp11 = e->cdevice.timestamp;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(723)
				Float tmp12 = (Float(tmp11) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(719)
				tmp6->input->dispatch_gamepad_device_event(tmp7,tmp10,(int)1,tmp12);
			}
			;break;
			case (int)1620: {
				HX_STACK_LINE(727)
				::haxe::ds::IntMap tmp1 = this->gamepads;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(727)
				int tmp2 = e->cdevice.which;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(727)
				::cpp::Pointer< SDL_GameController > tmp3 = tmp1->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(727)
				::cpp::Pointer< SDL_GameController > _gamepad = tmp3;		HX_STACK_VAR(_gamepad,"_gamepad");
				HX_STACK_LINE(728)
				::cpp::Pointer< SDL_GameController > tmp4 = _gamepad;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(728)
				SDL_GameControllerClose(tmp4);
				HX_STACK_LINE(729)
				::haxe::ds::IntMap tmp5 = this->gamepads;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(729)
				int tmp6 = e->cdevice.which;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(729)
				tmp5->remove(tmp6);
				HX_STACK_LINE(731)
				::snow::Snow tmp7 = this->app;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(732)
				int tmp8 = e->cdevice.which;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(733)
				int tmp9 = e->cdevice.which;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(733)
				 const ::cpp::Char *  tmp10 = SDL_GameControllerNameForIndex(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(733)
				::String tmp11 = ((::String)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(735)
				Float tmp12 = e->cdevice.timestamp;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(735)
				Float tmp13 = (Float(tmp12) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(731)
				tmp7->input->dispatch_gamepad_device_event(tmp8,tmp11,(int)2,tmp13);
			}
			;break;
			case (int)1621: {
				HX_STACK_LINE(738)
				::snow::Snow tmp1 = this->app;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(739)
				int tmp2 = e->cdevice.which;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(740)
				int tmp3 = e->cdevice.which;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(740)
				 const ::cpp::Char *  tmp4 = SDL_GameControllerNameForIndex(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(740)
				::String tmp5 = ((::String)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(742)
				Float tmp6 = e->cdevice.timestamp;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(742)
				Float tmp7 = (Float(tmp6) / Float(((Float)1000.0)));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(738)
				tmp1->input->dispatch_gamepad_device_event(tmp2,tmp5,(int)3,tmp7);
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Runtime_obj,handle_input_ev,(void))

::snow::types::ModState Runtime_obj::to_key_mod( int mod_value){
	HX_STACK_FRAME("snow.modules.sdl.Runtime","to_key_mod",0x55554d79,"snow.modules.sdl.Runtime.to_key_mod","snow/modules/sdl/Runtime.hx",751,0x0c37166e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mod_value,"mod_value")
	HX_STACK_LINE(753)
	bool tmp = (mod_value == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(753)
	::snow::Snow tmp1 = this->app;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(753)
	::snow::types::ModState tmp2 = tmp1->input->mod_state;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(753)
	tmp2->none = tmp;
	HX_STACK_LINE(755)
	bool tmp3 = (mod_value == (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(755)
	::snow::Snow tmp4 = this->app;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(755)
	::snow::types::ModState tmp5 = tmp4->input->mod_state;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(755)
	tmp5->lshift = tmp3;
	HX_STACK_LINE(756)
	bool tmp6 = (mod_value == (int)2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(756)
	::snow::Snow tmp7 = this->app;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(756)
	::snow::types::ModState tmp8 = tmp7->input->mod_state;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(756)
	tmp8->rshift = tmp6;
	HX_STACK_LINE(757)
	bool tmp9 = (mod_value == (int)64);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(757)
	::snow::Snow tmp10 = this->app;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(757)
	::snow::types::ModState tmp11 = tmp10->input->mod_state;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(757)
	tmp11->lctrl = tmp9;
	HX_STACK_LINE(758)
	bool tmp12 = (mod_value == (int)128);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(758)
	::snow::Snow tmp13 = this->app;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(758)
	::snow::types::ModState tmp14 = tmp13->input->mod_state;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(758)
	tmp14->rctrl = tmp12;
	HX_STACK_LINE(759)
	bool tmp15 = (mod_value == (int)256);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(759)
	::snow::Snow tmp16 = this->app;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(759)
	::snow::types::ModState tmp17 = tmp16->input->mod_state;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(759)
	tmp17->lalt = tmp15;
	HX_STACK_LINE(760)
	bool tmp18 = (mod_value == (int)512);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(760)
	::snow::Snow tmp19 = this->app;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(760)
	::snow::types::ModState tmp20 = tmp19->input->mod_state;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(760)
	tmp20->ralt = tmp18;
	HX_STACK_LINE(761)
	bool tmp21 = (mod_value == (int)1024);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(761)
	::snow::Snow tmp22 = this->app;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(761)
	::snow::types::ModState tmp23 = tmp22->input->mod_state;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(761)
	tmp23->lmeta = tmp21;
	HX_STACK_LINE(762)
	bool tmp24 = (mod_value == (int)2048);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(762)
	::snow::Snow tmp25 = this->app;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(762)
	::snow::types::ModState tmp26 = tmp25->input->mod_state;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(762)
	tmp26->rmeta = tmp24;
	HX_STACK_LINE(764)
	bool tmp27 = (mod_value == (int)4096);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(764)
	::snow::Snow tmp28 = this->app;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(764)
	::snow::types::ModState tmp29 = tmp28->input->mod_state;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(764)
	tmp29->num = tmp27;
	HX_STACK_LINE(765)
	bool tmp30 = (mod_value == (int)8192);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(765)
	::snow::Snow tmp31 = this->app;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(765)
	::snow::types::ModState tmp32 = tmp31->input->mod_state;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(765)
	tmp32->caps = tmp30;
	HX_STACK_LINE(766)
	bool tmp33 = (mod_value == (int)16384);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(766)
	::snow::Snow tmp34 = this->app;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(766)
	::snow::types::ModState tmp35 = tmp34->input->mod_state;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(766)
	tmp35->mode = tmp33;
	HX_STACK_LINE(768)
	bool tmp36 = (mod_value == (int)192);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(768)
	bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(768)
	bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(768)
	bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(768)
	if ((tmp38)){
		HX_STACK_LINE(768)
		tmp39 = (mod_value == (int)64);
	}
	else{
		HX_STACK_LINE(768)
		tmp39 = true;
	}
	HX_STACK_LINE(768)
	bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(768)
	bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(768)
	if ((tmp40)){
		HX_STACK_LINE(768)
		tmp41 = (mod_value == (int)128);
	}
	else{
		HX_STACK_LINE(768)
		tmp41 = true;
	}
	HX_STACK_LINE(768)
	::snow::Snow tmp42 = this->app;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(768)
	::snow::types::ModState tmp43 = tmp42->input->mod_state;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(768)
	tmp43->ctrl = tmp41;
	HX_STACK_LINE(769)
	bool tmp44 = (mod_value == (int)3);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(769)
	bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(769)
	bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(769)
	bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(769)
	if ((tmp46)){
		HX_STACK_LINE(769)
		tmp47 = (mod_value == (int)1);
	}
	else{
		HX_STACK_LINE(769)
		tmp47 = true;
	}
	HX_STACK_LINE(769)
	bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(769)
	bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(769)
	if ((tmp48)){
		HX_STACK_LINE(769)
		tmp49 = (mod_value == (int)2);
	}
	else{
		HX_STACK_LINE(769)
		tmp49 = true;
	}
	HX_STACK_LINE(769)
	::snow::Snow tmp50 = this->app;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(769)
	::snow::types::ModState tmp51 = tmp50->input->mod_state;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(769)
	tmp51->shift = tmp49;
	HX_STACK_LINE(770)
	bool tmp52 = (mod_value == (int)768);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(770)
	bool tmp53 = !(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(770)
	bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(770)
	bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(770)
	if ((tmp54)){
		HX_STACK_LINE(770)
		tmp55 = (mod_value == (int)256);
	}
	else{
		HX_STACK_LINE(770)
		tmp55 = true;
	}
	HX_STACK_LINE(770)
	bool tmp56 = !(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(770)
	bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(770)
	if ((tmp56)){
		HX_STACK_LINE(770)
		tmp57 = (mod_value == (int)512);
	}
	else{
		HX_STACK_LINE(770)
		tmp57 = true;
	}
	HX_STACK_LINE(770)
	::snow::Snow tmp58 = this->app;		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(770)
	::snow::types::ModState tmp59 = tmp58->input->mod_state;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(770)
	tmp59->alt = tmp57;
	HX_STACK_LINE(771)
	bool tmp60 = (mod_value == (int)3072);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(771)
	bool tmp61 = !(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(771)
	bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(771)
	bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(771)
	if ((tmp62)){
		HX_STACK_LINE(771)
		tmp63 = (mod_value == (int)1024);
	}
	else{
		HX_STACK_LINE(771)
		tmp63 = true;
	}
	HX_STACK_LINE(771)
	bool tmp64 = !(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(771)
	bool tmp65;		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(771)
	if ((tmp64)){
		HX_STACK_LINE(771)
		tmp65 = (mod_value == (int)2048);
	}
	else{
		HX_STACK_LINE(771)
		tmp65 = true;
	}
	HX_STACK_LINE(771)
	::snow::Snow tmp66 = this->app;		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(771)
	::snow::types::ModState tmp67 = tmp66->input->mod_state;		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(771)
	tmp67->meta = tmp65;
	HX_STACK_LINE(773)
	::snow::Snow tmp68 = this->app;		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(773)
	::snow::types::ModState tmp69 = tmp68->input->mod_state;		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(773)
	return tmp69;
}


HX_DEFINE_DYNAMIC_FUNC1(Runtime_obj,to_key_mod,return )

Float Runtime_obj::timestamp_start;

Float Runtime_obj::timestamp( ){
	HX_STACK_FRAME("snow.modules.sdl.Runtime","timestamp",0x5d4ae69b,"snow.modules.sdl.Runtime.timestamp","snow/modules/sdl/Runtime.hx",161,0x0c37166e)
	HX_STACK_LINE(163)
	Float tmp = linc::timestamp::now();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	Float tmp1 = ::snow::modules::sdl::Runtime_obj::timestamp_start;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(163)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Runtime_obj,timestamp,return )


Runtime_obj::Runtime_obj()
{
}

void Runtime_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Runtime);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(gamepads,"gamepads");
	HX_MARK_MEMBER_NAME(joysticks,"joysticks");
	HX_MARK_MEMBER_NAME(_size,"_size");
	HX_MARK_MEMBER_NAME(window_dpr,"window_dpr");
	HX_MARK_MEMBER_NAME(window_w,"window_w");
	HX_MARK_MEMBER_NAME(window_h,"window_h");
	::snow::core::native::Runtime_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Runtime_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(gamepads,"gamepads");
	HX_VISIT_MEMBER_NAME(joysticks,"joysticks");
	HX_VISIT_MEMBER_NAME(_size,"_size");
	HX_VISIT_MEMBER_NAME(window_dpr,"window_dpr");
	HX_VISIT_MEMBER_NAME(window_w,"window_w");
	HX_VISIT_MEMBER_NAME(window_h,"window_h");
	::snow::core::native::Runtime_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Runtime_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		if (HX_FIELD_EQ(inName,"_size") ) { return _size; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gamepads") ) { return gamepads; }
		if (HX_FIELD_EQ(inName,"shutdown") ) { return shutdown_dyn(); }
		if (HX_FIELD_EQ(inName,"run_loop") ) { return run_loop_dyn(); }
		if (HX_FIELD_EQ(inName,"window_w") ) { return window_w; }
		if (HX_FIELD_EQ(inName,"window_h") ) { return window_h; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"joysticks") ) { return joysticks; }
		if (HX_FIELD_EQ(inName,"to_pixels") ) { return to_pixels_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"window_dpr") ) { return window_dpr; }
		if (HX_FIELD_EQ(inName,"to_key_mod") ) { return to_key_mod_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"window_grab") ) { return window_grab_dyn(); }
		if (HX_FIELD_EQ(inName,"window_swap") ) { return window_swap_dyn(); }
		if (HX_FIELD_EQ(inName,"event_watch") ) { return event_watch_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"window_width") ) { return window_width_dyn(); }
		if (HX_FIELD_EQ(inName,"window_flags") ) { return window_flags_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"window_height") ) { return window_height_dyn(); }
		if (HX_FIELD_EQ(inName,"create_window") ) { return create_window_dyn(); }
		if (HX_FIELD_EQ(inName,"apply_GL_attr") ) { return apply_GL_attr_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handle_input_ev") ) { return handle_input_ev_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handle_window_ev") ) { return handle_window_ev_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"window_fullscreen") ) { return window_fullscreen_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"post_render_context") ) { return post_render_context_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"update_window_config") ) { return update_window_config_dyn(); }
		if (HX_FIELD_EQ(inName,"update_render_config") ) { return update_render_config_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"create_render_context") ) { return create_render_context_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"window_device_pixel_ratio") ) { return window_device_pixel_ratio_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Runtime_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { outValue = timestamp_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"timestamp_start") ) { outValue = timestamp_start; return true;  }
	}
	return false;
}

Dynamic Runtime_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_size") ) { _size=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::cpp::Pointer< SDL_Window > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gamepads") ) { gamepads=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window_w") ) { window_w=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window_h") ) { window_h=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"joysticks") ) { joysticks=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"window_dpr") ) { window_dpr=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Runtime_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"timestamp_start") ) { timestamp_start=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void Runtime_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("gamepads","\xb2","\xac","\x9e","\xcb"));
	outFields->push(HX_HCSTRING("joysticks","\x37","\xc4","\xb2","\xd7"));
	outFields->push(HX_HCSTRING("_size","\xa0","\xbc","\x64","\xff"));
	outFields->push(HX_HCSTRING("window_dpr","\x57","\xd4","\x14","\xdf"));
	outFields->push(HX_HCSTRING("window_w","\x28","\xc3","\xcd","\x7d"));
	outFields->push(HX_HCSTRING("window_h","\x19","\xc3","\xcd","\x7d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*SDL_GLContext*/ ,(int)offsetof(Runtime_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::cpp::Pointer< SDL_Window >*/ ,(int)offsetof(Runtime_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Runtime_obj,gamepads),HX_HCSTRING("gamepads","\xb2","\xac","\x9e","\xcb")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Runtime_obj,joysticks),HX_HCSTRING("joysticks","\x37","\xc4","\xb2","\xd7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Runtime_obj,_size),HX_HCSTRING("_size","\xa0","\xbc","\x64","\xff")},
	{hx::fsFloat,(int)offsetof(Runtime_obj,window_dpr),HX_HCSTRING("window_dpr","\x57","\xd4","\x14","\xdf")},
	{hx::fsInt,(int)offsetof(Runtime_obj,window_w),HX_HCSTRING("window_w","\x28","\xc3","\xcd","\x7d")},
	{hx::fsInt,(int)offsetof(Runtime_obj,window_h),HX_HCSTRING("window_h","\x19","\xc3","\xcd","\x7d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Runtime_obj::timestamp_start,HX_HCSTRING("timestamp_start","\xf9","\xd4","\x89","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("gamepads","\xb2","\xac","\x9e","\xcb"),
	HX_HCSTRING("joysticks","\x37","\xc4","\xb2","\xd7"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("window_grab","\xbb","\x11","\x22","\x55"),
	HX_HCSTRING("window_swap","\x82","\x6c","\x14","\x5d"),
	HX_HCSTRING("window_fullscreen","\x6a","\x19","\x9b","\x3c"),
	HX_HCSTRING("window_width","\x37","\x25","\x26","\x59"),
	HX_HCSTRING("window_height","\x96","\xe3","\x89","\x5e"),
	HX_HCSTRING("_size","\xa0","\xbc","\x64","\xff"),
	HX_HCSTRING("window_dpr","\x57","\xd4","\x14","\xdf"),
	HX_HCSTRING("window_device_pixel_ratio","\x18","\x25","\x59","\xb3"),
	HX_HCSTRING("run_loop","\x18","\x8b","\xd0","\x6f"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	HX_HCSTRING("event_watch","\x2a","\x35","\xc5","\xdf"),
	HX_HCSTRING("handle_window_ev","\x09","\x12","\xf5","\xca"),
	HX_HCSTRING("window_w","\x28","\xc3","\xcd","\x7d"),
	HX_HCSTRING("window_h","\x19","\xc3","\xcd","\x7d"),
	HX_HCSTRING("to_pixels","\xb1","\x10","\x64","\x5d"),
	HX_HCSTRING("create_window","\x13","\x56","\xf5","\xdb"),
	HX_HCSTRING("create_render_context","\xe9","\xbd","\x51","\xe7"),
	HX_HCSTRING("post_render_context","\x05","\x51","\x1d","\x7b"),
	HX_HCSTRING("apply_GL_attr","\xba","\x91","\x56","\x7f"),
	HX_HCSTRING("window_flags","\x78","\x9a","\x4f","\x91"),
	HX_HCSTRING("update_window_config","\x7b","\xc6","\x9e","\x3a"),
	HX_HCSTRING("update_render_config","\xd5","\x47","\x74","\x7b"),
	HX_HCSTRING("handle_input_ev","\x7d","\x0b","\xe8","\x3a"),
	HX_HCSTRING("to_key_mod","\xde","\xd2","\x41","\x80"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Runtime_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Runtime_obj::timestamp_start,"timestamp_start");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Runtime_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Runtime_obj::timestamp_start,"timestamp_start");
};

#endif

hx::Class Runtime_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("timestamp_start","\xf9","\xd4","\x89","\xfd"),
	HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"),
	::String(null()) };

void Runtime_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.modules.sdl.Runtime","\xf3","\x79","\x09","\xb1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Runtime_obj::__GetStatic;
	__mClass->mSetStaticField = &Runtime_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Runtime_obj >;
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

void Runtime_obj::__boot()
{
	timestamp_start= ((Float)0.0);
}

} // end namespace snow
} // end namespace modules
} // end namespace sdl
