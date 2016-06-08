#include <hxcpp.h>

#include "linc_timestamp.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
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
#ifndef INCLUDED_snow_api_DebugError
#include <snow/api/DebugError.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_Promises
#include <snow/api/Promises.h>
#endif
#ifndef INCLUDED_snow_api_Timer
#include <snow/api/Timer.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_core_Extension
#include <snow/core/Extension.h>
#endif
#ifndef INCLUDED_snow_core_Runtime
#include <snow/core/Runtime.h>
#endif
#ifndef INCLUDED_snow_core_native_Runtime
#include <snow/core/native/Runtime.h>
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
#ifndef INCLUDED_snow_modules_sdl_Runtime
#include <snow/modules/sdl/Runtime.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetJSON
#include <snow/systems/assets/AssetJSON.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Assets
#include <snow/systems/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_systems_audio_Audio
#include <snow/systems/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_systems_input_Input
#include <snow/systems/input/Input.h>
#endif
#ifndef INCLUDED_snow_systems_io_IO
#include <snow/systems/io/IO.h>
#endif
#ifndef INCLUDED_snow_types_Config
#include <snow/types/Config.h>
#endif
#ifndef INCLUDED_snow_types_Error
#include <snow/types/Error.h>
#endif
#ifndef INCLUDED_snow_types_InputEvent
#include <snow/types/InputEvent.h>
#endif
#ifndef INCLUDED_snow_types_SystemEvent
#include <snow/types/SystemEvent.h>
#endif
#ifndef INCLUDED_snow_types_WindowEvent
#include <snow/types/WindowEvent.h>
#endif
namespace snow{

Void Snow_obj::__construct(::luxe::Engine _host)
{
HX_STACK_FRAME("snow.Snow","new",0x2ec45060,"snow.Snow.new","snow/Snow.hx",17,0x86524d2f)
HX_STACK_THIS(this)
HX_STACK_ARG(_host,"_host")
{
	HX_STACK_LINE(273)
	this->had_ready_event = false;
	HX_STACK_LINE(212)
	this->i = (int)0;
	HX_STACK_LINE(151)
	this->immediate_shutdown = false;
	HX_STACK_LINE(64)
	this->has_shutdown = false;
	HX_STACK_LINE(62)
	this->shutting_down = false;
	HX_STACK_LINE(59)
	this->debug = true;
	HX_STACK_LINE(54)
	this->platform = HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
	HX_STACK_LINE(28)
	this->ready = false;
	HX_STACK_LINE(26)
	this->freeze = false;
	HX_STACK_LINE(79)
	{
		HX_STACK_LINE(79)
		bool tmp = (_host == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		if ((tmp)){
			HX_STACK_LINE(230)
			::String tmp1 = HX_HCSTRING(" ( snow App instance was null!","\x5c","\x4b","\xe7","\x85");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(230)
			::String tmp2 = (tmp1 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(79)
			::String tmp3 = (HX_HCSTRING("_host was null","\xd7","\xcc","\x5b","\x83") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(79)
			::snow::api::DebugError tmp4 = ::snow::api::DebugError_obj::null_assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(79)
			HX_STACK_DO_THROW(tmp4);
		}
	}
	HX_STACK_LINE(85)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	if ((tmp)){
		HX_STACK_LINE(86)
		::String tmp1 = (HX_HCSTRING("log / level to ","\xdc","\xcc","\x48","\x9e") + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		::String tmp2 = (HX_HCSTRING("     i / snow / ","\x06","\xb3","\xeb","\x71") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Snow.hx","\xfb","\x3b","\xfd","\xae"),86,HX_HCSTRING("snow.Snow","\x6e","\xe0","\x04","\xa6"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(86)
		::haxe::Log_obj::trace(tmp2,tmp3);
		HX_STACK_LINE(23)
		::String _filter = null();		HX_STACK_VAR(_filter,"_filter");
		HX_STACK_LINE(26)
		::String _exclude = null();		HX_STACK_VAR(_exclude,"_exclude");
		HX_STACK_LINE(89)
		bool tmp4 = (_filter != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(89)
		if ((tmp4)){
			HX_STACK_LINE(89)
			::String tmp5 = (HX_HCSTRING("log / filter : ","\x41","\x69","\x13","\x1f") + _filter);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(89)
			::String tmp6 = (HX_HCSTRING("     i / snow / ","\x06","\xb3","\xeb","\x71") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(89)
			Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Snow.hx","\xfb","\x3b","\xfd","\xae"),89,HX_HCSTRING("snow.Snow","\x6e","\xe0","\x04","\xa6"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(89)
			::haxe::Log_obj::trace(tmp6,tmp7);
		}
		HX_STACK_LINE(90)
		bool tmp5 = (_exclude != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(90)
		if ((tmp5)){
			HX_STACK_LINE(90)
			::String tmp6 = (HX_HCSTRING("log / exclude : ","\x99","\x61","\xf3","\xe1") + _exclude);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(90)
			::String tmp7 = (HX_HCSTRING("     i / snow / ","\x06","\xb3","\xeb","\x71") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(90)
			Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Snow.hx","\xfb","\x3b","\xfd","\xae"),90,HX_HCSTRING("snow.Snow","\x6e","\xe0","\x04","\xa6"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(90)
			::haxe::Log_obj::trace(tmp7,tmp8);
		}
	}
	HX_STACK_LINE(93)
	this->host = _host;
	HX_STACK_LINE(94)
	::luxe::Engine tmp1 = this->host;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	tmp1->app = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(95)
	Dynamic tmp2 = this->default_config();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	this->config = tmp2;
	HX_STACK_LINE(101)
	::snow::types::SystemEvent tmp3 = ::snow::types::SystemEvent_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(101)
	this->sys_event = tmp3;
	HX_STACK_LINE(102)
	::snow::types::WindowEvent tmp4 = ::snow::types::WindowEvent_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(102)
	this->win_event = tmp4;
	HX_STACK_LINE(104)
	::snow::systems::io::IO tmp5 = ::snow::systems::io::IO_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(104)
	this->io = tmp5;
	HX_STACK_LINE(105)
	::snow::systems::input::Input tmp6 = ::snow::systems::input::Input_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(105)
	this->input = tmp6;
	HX_STACK_LINE(106)
	::snow::systems::audio::Audio tmp7 = ::snow::systems::audio::Audio_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(106)
	this->audio = tmp7;
	HX_STACK_LINE(107)
	::snow::systems::assets::Assets tmp8 = ::snow::systems::assets::Assets_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(107)
	this->assets = tmp8;
	HX_STACK_LINE(109)
	this->extensions = Array_obj< ::snow::core::Extension >::__new();
	HX_STACK_LINE(110)
	{
		HX_STACK_LINE(110)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(110)
		Array< ::String > _g1 = ::snow::types::Config_obj::extensions;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(110)
		while((true)){
			HX_STACK_LINE(110)
			bool tmp9 = (_g < _g1->length);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(110)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(110)
			if ((tmp10)){
				HX_STACK_LINE(110)
				break;
			}
			HX_STACK_LINE(110)
			::String tmp11 = _g1->__get(_g);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(110)
			::String _ext_type = tmp11;		HX_STACK_VAR(_ext_type,"_ext_type");
			HX_STACK_LINE(110)
			++(_g);
			HX_STACK_LINE(112)
			::String tmp12 = _ext_type;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(112)
			::hx::Class tmp13 = ::Type_obj::resolveClass(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(112)
			::hx::Class _class = tmp13;		HX_STACK_VAR(_class,"_class");
			HX_STACK_LINE(113)
			bool tmp14 = (_class == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(113)
			if ((tmp14)){
				HX_STACK_LINE(113)
				::String tmp15 = (HX_HCSTRING("Extension `","\x5f","\x65","\x2e","\x9d") + _ext_type);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(113)
				::String tmp16 = (tmp15 + HX_HCSTRING("`: Type not found via Type.resolveClass!","\xfe","\xa5","\x9a","\x68"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(113)
				::snow::types::Error tmp17 = ::snow::types::Error_obj::error(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(113)
				HX_STACK_DO_THROW(tmp17);
			}
			HX_STACK_LINE(115)
			::hx::Class tmp15 = _class;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(115)
			::snow::core::Extension tmp16 = ::Type_obj::createInstance(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(115)
			::snow::core::Extension _instance = tmp16;		HX_STACK_VAR(_instance,"_instance");
			HX_STACK_LINE(116)
			bool tmp17 = (_instance == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(116)
			if ((tmp17)){
				HX_STACK_LINE(116)
				::String tmp18 = (HX_HCSTRING("Extension `","\x5f","\x65","\x2e","\x9d") + _ext_type);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(116)
				::String tmp19 = (tmp18 + HX_HCSTRING("`: Instance was null on calling new()!","\xa0","\x8e","\x18","\x09"));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(116)
				::snow::types::Error tmp20 = ::snow::types::Error_obj::error(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(116)
				HX_STACK_DO_THROW(tmp20);
			}
			HX_STACK_LINE(118)
			::snow::core::Extension tmp18 = _instance;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(118)
			this->extensions->push(tmp18);
		}
	}
	HX_STACK_LINE(124)
	::snow::modules::sdl::Runtime tmp9 = ::snow::modules::sdl::Runtime_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(124)
	this->runtime = tmp9;
	HX_STACK_LINE(126)
	{
		HX_STACK_LINE(126)
		::String tmp10 = this->os;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(126)
		bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(126)
		if ((tmp11)){
			HX_STACK_LINE(230)
			::String tmp12 = HX_HCSTRING(" ( init - Runtime didn't set the app.os value!","\xa1","\x34","\x1e","\x4b");		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(230)
			::String tmp13 = (tmp12 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(126)
			::String tmp14 = (HX_HCSTRING("os was null","\x5a","\x33","\x12","\xa9") + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(126)
			::snow::api::DebugError tmp15 = ::snow::api::DebugError_obj::null_assertion(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(126)
			HX_STACK_DO_THROW(tmp15);
		}
	}
	HX_STACK_LINE(127)
	{
		HX_STACK_LINE(127)
		::String tmp10 = this->platform;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(127)
		bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(127)
		if ((tmp11)){
			HX_STACK_LINE(230)
			::String tmp12 = HX_HCSTRING(" ( init - Runtime didn't set the app.platform value!","\xb2","\xa0","\x74","\xa9");		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(230)
			::String tmp13 = (tmp12 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(127)
			::String tmp14 = (HX_HCSTRING("platform was null","\xeb","\xb7","\x7f","\xf3") + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(127)
			::snow::api::DebugError tmp15 = ::snow::api::DebugError_obj::null_assertion(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(127)
			HX_STACK_DO_THROW(tmp15);
		}
	}
	HX_STACK_LINE(131)
	this->dispatch_event((int)1);
	HX_STACK_LINE(132)
	::luxe::Engine tmp10 = this->host;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(132)
	tmp10->internal_init();
	HX_STACK_LINE(134)
	{
		HX_STACK_LINE(134)
		::snow::api::Promises_obj::step();
		HX_STACK_LINE(134)
		while((true)){
			HX_STACK_LINE(134)
			int tmp11 = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(134)
			bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(134)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(134)
			if ((tmp13)){
				HX_STACK_LINE(134)
				break;
			}
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				int tmp14 = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(134)
				int count = tmp14;		HX_STACK_VAR(count,"count");
				HX_STACK_LINE(134)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(134)
				while((true)){
					HX_STACK_LINE(134)
					bool tmp15 = (i < count);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(134)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(134)
					if ((tmp16)){
						HX_STACK_LINE(134)
						break;
					}
					HX_STACK_LINE(134)
					Dynamic tmp17 = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(134)
					tmp17().Cast< Void >();
					HX_STACK_LINE(134)
					++(i);
				}
			}
		}
		HX_STACK_LINE(134)
		while((true)){
			HX_STACK_LINE(134)
			int tmp11 = ::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(134)
			bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(134)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(134)
			if ((tmp13)){
				HX_STACK_LINE(134)
				break;
			}
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				int tmp14 = ::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(134)
				int count = tmp14;		HX_STACK_VAR(count,"count");
				HX_STACK_LINE(134)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(134)
				while((true)){
					HX_STACK_LINE(134)
					bool tmp15 = (i < count);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(134)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(134)
					if ((tmp16)){
						HX_STACK_LINE(134)
						break;
					}
					HX_STACK_LINE(134)
					Dynamic tmp17 = ::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(134)
					tmp17().Cast< Void >();
					HX_STACK_LINE(134)
					++(i);
				}
			}
		}
	}
	HX_STACK_LINE(137)
	this->dispatch_event((int)2);
	HX_STACK_LINE(139)
	{
		HX_STACK_LINE(139)
		::snow::api::Promises_obj::step();
		HX_STACK_LINE(139)
		while((true)){
			HX_STACK_LINE(139)
			int tmp11 = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(139)
			bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(139)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(139)
			if ((tmp13)){
				HX_STACK_LINE(139)
				break;
			}
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				int tmp14 = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(139)
				int count = tmp14;		HX_STACK_VAR(count,"count");
				HX_STACK_LINE(139)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(139)
				while((true)){
					HX_STACK_LINE(139)
					bool tmp15 = (i < count);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(139)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(139)
					if ((tmp16)){
						HX_STACK_LINE(139)
						break;
					}
					HX_STACK_LINE(139)
					Dynamic tmp17 = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(139)
					tmp17().Cast< Void >();
					HX_STACK_LINE(139)
					++(i);
				}
			}
		}
		HX_STACK_LINE(139)
		while((true)){
			HX_STACK_LINE(139)
			int tmp11 = ::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(139)
			bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(139)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(139)
			if ((tmp13)){
				HX_STACK_LINE(139)
				break;
			}
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				int tmp14 = ::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(139)
				int count = tmp14;		HX_STACK_VAR(count,"count");
				HX_STACK_LINE(139)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(139)
				while((true)){
					HX_STACK_LINE(139)
					bool tmp15 = (i < count);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(139)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(139)
					if ((tmp16)){
						HX_STACK_LINE(139)
						break;
					}
					HX_STACK_LINE(139)
					Dynamic tmp17 = ::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(139)
					tmp17().Cast< Void >();
					HX_STACK_LINE(139)
					++(i);
				}
			}
		}
	}
	HX_STACK_LINE(143)
	::snow::modules::sdl::Runtime tmp11 = this->runtime;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(143)
	bool tmp12 = tmp11->run();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(143)
	bool _should_exit = tmp12;		HX_STACK_VAR(_should_exit,"_should_exit");
	HX_STACK_LINE(144)
	bool tmp13 = _should_exit;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(144)
	bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(144)
	if ((tmp13)){
		HX_STACK_LINE(144)
		bool tmp15 = this->has_shutdown;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(144)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(144)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(144)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(144)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(144)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(144)
		bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(144)
		if ((tmp21)){
			HX_STACK_LINE(144)
			bool tmp22 = this->shutting_down;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(144)
			tmp20 = tmp22;
		}
		else{
			HX_STACK_LINE(144)
			tmp20 = true;
		}
		HX_STACK_LINE(144)
		bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(144)
		tmp14 = !(tmp22);
	}
	else{
		HX_STACK_LINE(144)
		tmp14 = false;
	}
	HX_STACK_LINE(144)
	if ((tmp14)){
		HX_STACK_LINE(145)
		this->shutdown();
	}
}
;
	return null();
}

//Snow_obj::~Snow_obj() { }

Dynamic Snow_obj::__CreateEmpty() { return  new Snow_obj; }
hx::ObjectPtr< Snow_obj > Snow_obj::__new(::luxe::Engine _host)
{  hx::ObjectPtr< Snow_obj > _result_ = new Snow_obj();
	_result_->__construct(_host);
	return _result_;}

Dynamic Snow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Snow_obj > _result_ = new Snow_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Snow_obj::shutdown( ){
{
		HX_STACK_FRAME("snow.Snow","shutdown",0x94cb7c96,"snow.Snow.shutdown","snow/Snow.hx",154,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(157)
		bool tmp = this->shutting_down;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		if ((tmp)){
			HX_STACK_LINE(158)
			::String tmp1 = HX_HCSTRING("     i / snow / shutdown / called again, already shutting down - ignoring","\xb0","\x9b","\xf8","\x8e");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(158)
			Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Snow.hx","\xfb","\x3b","\xfd","\xae"),158,HX_HCSTRING("snow.Snow","\x6e","\xe0","\x04","\xa6"),HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(158)
			::haxe::Log_obj::trace(tmp1,tmp2);
			HX_STACK_LINE(159)
			return null();
		}
		HX_STACK_LINE(162)
		{
			HX_STACK_LINE(162)
			bool tmp1 = this->has_shutdown;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(162)
			bool tmp2 = (tmp1 == false);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(162)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(162)
			if ((tmp3)){
				HX_STACK_LINE(214)
				::String tmp4 = HX_HCSTRING(" ( snow - calling shutdown more than once is disallowed","\xfb","\x2e","\xe4","\x68");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(214)
				::String tmp5 = (tmp4 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(162)
				::String tmp6 = (HX_HCSTRING("has_shutdown == false","\x48","\xe2","\x7a","\x15") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(162)
				::snow::api::DebugError tmp7 = ::snow::api::DebugError_obj::assertion(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(162)
				HX_STACK_DO_THROW(tmp7);
			}
		}
		HX_STACK_LINE(164)
		this->shutting_down = true;
		HX_STACK_LINE(166)
		::luxe::Engine tmp1 = this->host;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		tmp1->ondestroy();
		HX_STACK_LINE(168)
		this->dispatch_event((int)7);
		HX_STACK_LINE(170)
		::snow::systems::io::IO tmp2 = this->io;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		tmp2->shutdown();
		HX_STACK_LINE(171)
		::snow::systems::audio::Audio tmp3 = this->audio;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(171)
		tmp3->shutdown();
		HX_STACK_LINE(172)
		::snow::systems::assets::Assets tmp4 = this->assets;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(172)
		tmp4->shutdown();
		HX_STACK_LINE(173)
		::snow::systems::input::Input tmp5 = this->input;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(173)
		tmp5->shutdown();
		HX_STACK_LINE(175)
		::snow::modules::sdl::Runtime tmp6 = this->runtime;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(175)
		bool tmp7 = this->immediate_shutdown;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(175)
		tmp6->shutdown(tmp7);
		HX_STACK_LINE(177)
		this->has_shutdown = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,shutdown,(void))

Void Snow_obj::dispatch_event( int _type){
{
		HX_STACK_FRAME("snow.Snow","dispatch_event",0xb6d62595,"snow.Snow.dispatch_event","snow/Snow.hx",184,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_type,"_type")
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			::snow::types::SystemEvent tmp = this->sys_event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(186)
			::snow::types::SystemEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(186)
			_this->type = _type;
			HX_STACK_LINE(186)
			_this->window = null();
			HX_STACK_LINE(186)
			_this->input = null();
		}
		HX_STACK_LINE(188)
		::snow::types::SystemEvent tmp = this->sys_event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		this->onevent(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Snow_obj,dispatch_event,(void))

Void Snow_obj::dispatch_window_event( int _type,Float _timestamp,int _window_id,int _x,int _y){
{
		HX_STACK_FRAME("snow.Snow","dispatch_window_event",0x46494f30,"snow.Snow.dispatch_window_event","snow/Snow.hx",192,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_type,"_type")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			::snow::types::WindowEvent tmp = this->win_event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(194)
			::snow::types::WindowEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(194)
			_this->type = _type;
			HX_STACK_LINE(194)
			_this->timestamp = _timestamp;
			HX_STACK_LINE(194)
			_this->window_id = _window_id;
			HX_STACK_LINE(194)
			_this->x = _x;
			HX_STACK_LINE(194)
			_this->y = _y;
		}
		HX_STACK_LINE(195)
		{
			HX_STACK_LINE(195)
			::snow::types::SystemEvent tmp = this->sys_event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(195)
			::snow::types::SystemEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(195)
			_this->type = (int)8;
			HX_STACK_LINE(195)
			::snow::types::WindowEvent tmp1 = this->win_event;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(195)
			_this->window = tmp1;
			HX_STACK_LINE(195)
			_this->input = null();
		}
		HX_STACK_LINE(197)
		::snow::types::SystemEvent tmp = this->sys_event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		this->onevent(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Snow_obj,dispatch_window_event,(void))

Void Snow_obj::dispatch_input_event( ::snow::types::InputEvent _event){
{
		HX_STACK_FRAME("snow.Snow","dispatch_input_event",0x5d10a2a0,"snow.Snow.dispatch_input_event","snow/Snow.hx",202,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			::snow::types::SystemEvent tmp = this->sys_event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(204)
			::snow::types::SystemEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(204)
			_this->type = (int)9;
			HX_STACK_LINE(204)
			_this->window = null();
			HX_STACK_LINE(204)
			_this->input = _event;
		}
		HX_STACK_LINE(206)
		::snow::types::SystemEvent tmp = this->sys_event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		this->onevent(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Snow_obj,dispatch_input_event,(void))

Void Snow_obj::onevent( ::snow::types::SystemEvent _event){
{
		HX_STACK_FRAME("snow.Snow","onevent",0xe985769b,"snow.Snow.onevent","snow/Snow.hx",213,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			::snow::systems::io::IO tmp = this->io;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(222)
			::snow::types::SystemEvent tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(222)
			tmp->module->onevent(tmp1);
		}
		HX_STACK_LINE(223)
		::snow::systems::audio::Audio tmp = this->audio;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(223)
		::snow::types::SystemEvent tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(223)
		tmp->onevent(tmp1);
		HX_STACK_LINE(224)
		::snow::systems::input::Input tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(224)
		::snow::types::SystemEvent tmp3 = _event;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(224)
		tmp2->onevent(tmp3);
		HX_STACK_LINE(225)
		::luxe::Engine tmp4 = this->host;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(225)
		::snow::types::SystemEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(225)
		tmp4->onevent(tmp5);
		HX_STACK_LINE(227)
		this->i = (int)0;
		HX_STACK_LINE(227)
		while((true)){
			HX_STACK_LINE(227)
			int tmp6 = this->i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(227)
			int tmp7 = this->extensions->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(227)
			bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(227)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(227)
			if ((tmp9)){
				HX_STACK_LINE(227)
				break;
			}
			HX_STACK_LINE(228)
			int tmp10 = this->i;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(228)
			::snow::core::Extension tmp11 = this->extensions->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(228)
			::snow::types::SystemEvent tmp12 = _event;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(228)
			tmp11->onevent(tmp12);
			HX_STACK_LINE(229)
			++(this->i);
		}
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			int _g = _event->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(232)
			int tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(232)
			switch( (int)(tmp6)){
				case (int)2: {
					HX_STACK_LINE(234)
					::snow::Snow _g1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(234)
					{
						HX_STACK_LINE(234)
						bool tmp7 = this->had_ready_event;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(234)
						bool tmp8 = (tmp7 == false);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(234)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(234)
						if ((tmp9)){
							HX_STACK_LINE(234)
							::String tmp10 = HX_HCSTRING(" ( snow; the ready event should not be fired repeatedly","\x4e","\x08","\x69","\xa1");		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(234)
							::String tmp11 = (tmp10 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(234)
							::String tmp12 = (HX_HCSTRING("had_ready_event == false","\xf9","\x87","\xdf","\xe3") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(234)
							::snow::api::DebugError tmp13 = ::snow::api::DebugError_obj::assertion(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(234)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(234)
					this->had_ready_event = true;
					HX_STACK_LINE(234)
					::snow::api::Promise tmp7 = this->setup_configs();		HX_STACK_VAR(tmp7,"tmp7");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,::snow::Snow,_g1)
					int __ArgCount() const { return 1; }
					Void run(Dynamic _){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","snow/Snow.hx",234,0x86524d2f)
						HX_STACK_ARG(_,"_")
						{
							HX_STACK_LINE(234)
							_g1->runtime->ready();
							HX_STACK_LINE(234)
							_g1->host->ready();
							HX_STACK_LINE(234)
							_g1->ready = true;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(234)
					::snow::api::Promise tmp8 = tmp7->then( Dynamic(new _Function_3_1(_g1)),null());		HX_STACK_VAR(tmp8,"tmp8");

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
					int __ArgCount() const { return 1; }
					Void run(::String e){
						HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","snow/Snow.hx",234,0x86524d2f)
						HX_STACK_ARG(e,"e")
						{
							HX_STACK_LINE(234)
							::String tmp9 = (HX_HCSTRING("snow / cannot recover from error: ","\x23","\x3b","\xc4","\x75") + e);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(234)
							::snow::types::Error tmp10 = ::snow::types::Error_obj::init(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(234)
							HX_STACK_DO_THROW(tmp10);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(234)
					tmp8->error( Dynamic(new _Function_3_2()));
					HX_STACK_LINE(234)
					{
						HX_STACK_LINE(234)
						::snow::api::Promises_obj::step();
						HX_STACK_LINE(234)
						while((true)){
							HX_STACK_LINE(234)
							int tmp9 = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(234)
							bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(234)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(234)
							if ((tmp11)){
								HX_STACK_LINE(234)
								break;
							}
							HX_STACK_LINE(234)
							{
								HX_STACK_LINE(234)
								int tmp12 = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(234)
								int count = tmp12;		HX_STACK_VAR(count,"count");
								HX_STACK_LINE(234)
								int i = (int)0;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(234)
								while((true)){
									HX_STACK_LINE(234)
									bool tmp13 = (i < count);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(234)
									bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(234)
									if ((tmp14)){
										HX_STACK_LINE(234)
										break;
									}
									HX_STACK_LINE(234)
									Dynamic tmp15 = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(234)
									tmp15().Cast< Void >();
									HX_STACK_LINE(234)
									++(i);
								}
							}
						}
						HX_STACK_LINE(234)
						while((true)){
							HX_STACK_LINE(234)
							int tmp9 = ::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(234)
							bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(234)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(234)
							if ((tmp11)){
								HX_STACK_LINE(234)
								break;
							}
							HX_STACK_LINE(234)
							{
								HX_STACK_LINE(234)
								int tmp12 = ::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(234)
								int count = tmp12;		HX_STACK_VAR(count,"count");
								HX_STACK_LINE(234)
								int i = (int)0;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(234)
								while((true)){
									HX_STACK_LINE(234)
									bool tmp13 = (i < count);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(234)
									bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(234)
									if ((tmp14)){
										HX_STACK_LINE(234)
										break;
									}
									HX_STACK_LINE(234)
									Dynamic tmp15 = ::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(234)
									tmp15().Cast< Void >();
									HX_STACK_LINE(234)
									++(i);
								}
							}
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(235)
					bool tmp7 = this->freeze;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(235)
					if ((tmp7)){
						HX_STACK_LINE(235)
						Dynamic();
					}
					else{
						HX_STACK_LINE(235)
						::snow::api::Timer_obj::update();
						HX_STACK_LINE(235)
						::snow::api::Promises_obj::step();
						HX_STACK_LINE(235)
						{
							HX_STACK_LINE(235)
							int tmp8 = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(235)
							int count = tmp8;		HX_STACK_VAR(count,"count");
							HX_STACK_LINE(235)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(235)
							while((true)){
								HX_STACK_LINE(235)
								bool tmp9 = (i < count);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(235)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(235)
								if ((tmp10)){
									HX_STACK_LINE(235)
									break;
								}
								HX_STACK_LINE(235)
								Dynamic tmp11 = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(235)
								tmp11().Cast< Void >();
								HX_STACK_LINE(235)
								++(i);
							}
						}
						HX_STACK_LINE(235)
						bool tmp8 = this->shutting_down;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(235)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(235)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(235)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(235)
						if ((tmp10)){
							HX_STACK_LINE(235)
							tmp11 = this->ready;
						}
						else{
							HX_STACK_LINE(235)
							tmp11 = false;
						}
						HX_STACK_LINE(235)
						if ((tmp11)){
							HX_STACK_LINE(235)
							::luxe::Engine tmp12 = this->host;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(235)
							tmp12->internal_tick();
						}
						HX_STACK_LINE(235)
						{
							HX_STACK_LINE(235)
							int tmp12 = ::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(235)
							int count = tmp12;		HX_STACK_VAR(count,"count");
							HX_STACK_LINE(235)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(235)
							while((true)){
								HX_STACK_LINE(235)
								bool tmp13 = (i < count);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(235)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(235)
								if ((tmp14)){
									HX_STACK_LINE(235)
									break;
								}
								HX_STACK_LINE(235)
								Dynamic tmp15 = ::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(235)
								tmp15().Cast< Void >();
								HX_STACK_LINE(235)
								++(i);
							}
						}
					}
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(236)
					this->shutdown();
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(237)
					::String tmp7 = HX_HCSTRING("     i / snow / goodbye.","\x83","\xb2","\xeb","\xd4");		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(237)
					Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Snow.hx","\xfb","\x3b","\xfd","\xae"),237,HX_HCSTRING("snow.Snow","\x6e","\xe0","\x04","\xa6"),HX_HCSTRING("onevent","\x9b","\xf6","\xd4","\x78"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(237)
					::haxe::Log_obj::trace(tmp7,tmp8);
				}
				;break;
				case (int)11: {
					HX_STACK_LINE(240)
					this->immediate_shutdown = true;
					HX_STACK_LINE(241)
					this->shutdown();
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Snow_obj,onevent,(void))

Float Snow_obj::get_time( ){
	HX_STACK_FRAME("snow.Snow","get_time",0xf6770796,"snow.Snow.get_time","snow/Snow.hx",267,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(267)
	Float tmp = linc::timestamp::now();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(267)
	Float tmp1 = ::snow::modules::sdl::Runtime_obj::timestamp_start;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(267)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(267)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,get_time,return )

::String Snow_obj::get_uniqueid( ){
	HX_STACK_FRAME("snow.Snow","get_uniqueid",0xd043c935,"snow.Snow.get_uniqueid","snow/Snow.hx",268,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(268)
	::String tmp = this->make_uniqueid(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,get_uniqueid,return )

Void Snow_obj::on_ready_event( ){
{
		HX_STACK_FRAME("snow.Snow","on_ready_event",0xa531dd9e,"snow.Snow.on_ready_event","snow/Snow.hx",274,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(274)
		::snow::Snow _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(276)
		{
			HX_STACK_LINE(276)
			bool tmp = this->had_ready_event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(276)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(276)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(276)
			if ((tmp2)){
				HX_STACK_LINE(214)
				::String tmp3 = HX_HCSTRING(" ( snow; the ready event should not be fired repeatedly","\x4e","\x08","\x69","\xa1");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(214)
				::String tmp4 = (tmp3 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(276)
				::String tmp5 = (HX_HCSTRING("had_ready_event == false","\xf9","\x87","\xdf","\xe3") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(276)
				::snow::api::DebugError tmp6 = ::snow::api::DebugError_obj::assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(276)
				HX_STACK_DO_THROW(tmp6);
			}
		}
		HX_STACK_LINE(277)
		this->had_ready_event = true;
		HX_STACK_LINE(279)
		::snow::api::Promise tmp = this->setup_configs();		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::Snow,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/Snow.hx",279,0x86524d2f)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(283)
				_g->runtime->ready();
				HX_STACK_LINE(286)
				_g->host->ready();
				HX_STACK_LINE(289)
				_g->ready = true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(279)
		::snow::api::Promise tmp1 = tmp->then( Dynamic(new _Function_1_1(_g)),null());		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
		int __ArgCount() const { return 1; }
		Void run(::String e){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","snow/Snow.hx",291,0x86524d2f)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(293)
				::String tmp2 = (HX_HCSTRING("snow / cannot recover from error: ","\x23","\x3b","\xc4","\x75") + e);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(293)
				::snow::types::Error tmp3 = ::snow::types::Error_obj::init(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(293)
				HX_STACK_DO_THROW(tmp3);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(279)
		tmp1->error( Dynamic(new _Function_1_2()));
		HX_STACK_LINE(297)
		{
			HX_STACK_LINE(297)
			::snow::api::Promises_obj::step();
			HX_STACK_LINE(297)
			while((true)){
				HX_STACK_LINE(297)
				int tmp2 = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(297)
				bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(297)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(297)
				if ((tmp4)){
					HX_STACK_LINE(297)
					break;
				}
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					int tmp5 = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(297)
					int count = tmp5;		HX_STACK_VAR(count,"count");
					HX_STACK_LINE(297)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(297)
					while((true)){
						HX_STACK_LINE(297)
						bool tmp6 = (i < count);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(297)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(297)
						if ((tmp7)){
							HX_STACK_LINE(297)
							break;
						}
						HX_STACK_LINE(297)
						Dynamic tmp8 = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(297)
						tmp8().Cast< Void >();
						HX_STACK_LINE(297)
						++(i);
					}
				}
			}
			HX_STACK_LINE(297)
			while((true)){
				HX_STACK_LINE(297)
				int tmp2 = ::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(297)
				bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(297)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(297)
				if ((tmp4)){
					HX_STACK_LINE(297)
					break;
				}
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					int tmp5 = ::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(297)
					int count = tmp5;		HX_STACK_VAR(count,"count");
					HX_STACK_LINE(297)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(297)
					while((true)){
						HX_STACK_LINE(297)
						bool tmp6 = (i < count);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(297)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(297)
						if ((tmp7)){
							HX_STACK_LINE(297)
							break;
						}
						HX_STACK_LINE(297)
						Dynamic tmp8 = ::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(297)
						tmp8().Cast< Void >();
						HX_STACK_LINE(297)
						++(i);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,on_ready_event,(void))

Void Snow_obj::on_tick_event( ){
{
		HX_STACK_FRAME("snow.Snow","on_tick_event",0xb9bb08d8,"snow.Snow.on_tick_event","snow/Snow.hx",301,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(303)
		bool tmp = this->freeze;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(303)
		if ((tmp)){
			HX_STACK_LINE(303)
			return null();
		}
		HX_STACK_LINE(305)
		::snow::api::Timer_obj::update();
		HX_STACK_LINE(307)
		::snow::api::Promises_obj::step();
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			int tmp1 = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(309)
			int count = tmp1;		HX_STACK_VAR(count,"count");
			HX_STACK_LINE(309)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(309)
			while((true)){
				HX_STACK_LINE(309)
				bool tmp2 = (i < count);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(309)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(309)
				if ((tmp3)){
					HX_STACK_LINE(309)
					break;
				}
				HX_STACK_LINE(309)
				Dynamic tmp4 = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(309)
				tmp4().Cast< Void >();
				HX_STACK_LINE(309)
				++(i);
			}
		}
		HX_STACK_LINE(311)
		bool tmp1 = this->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(311)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(311)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(311)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(311)
		if ((tmp3)){
			HX_STACK_LINE(311)
			tmp4 = this->ready;
		}
		else{
			HX_STACK_LINE(311)
			tmp4 = false;
		}
		HX_STACK_LINE(311)
		if ((tmp4)){
			HX_STACK_LINE(312)
			::luxe::Engine tmp5 = this->host;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(312)
			tmp5->internal_tick();
		}
		HX_STACK_LINE(315)
		{
			HX_STACK_LINE(315)
			int tmp5 = ::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(315)
			int count = tmp5;		HX_STACK_VAR(count,"count");
			HX_STACK_LINE(315)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(315)
			while((true)){
				HX_STACK_LINE(315)
				bool tmp6 = (i < count);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(315)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(315)
				if ((tmp7)){
					HX_STACK_LINE(315)
					break;
				}
				HX_STACK_LINE(315)
				Dynamic tmp8 = ::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(315)
				tmp8().Cast< Void >();
				HX_STACK_LINE(315)
				++(i);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,on_tick_event,(void))

::snow::api::Promise Snow_obj::setup_configs( ){
	HX_STACK_FRAME("snow.Snow","setup_configs",0xf070606f,"snow.Snow.setup_configs","snow/Snow.hx",321,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(321)
	::snow::Snow _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(324)
	::String tmp = ::snow::types::Config_obj::app_config;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(324)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(324)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(324)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(324)
	if ((tmp2)){
		HX_STACK_LINE(324)
		::String tmp4 = ::snow::types::Config_obj::app_config;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(324)
		::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(324)
		tmp3 = (tmp5 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(324)
		tmp3 = true;
	}
	HX_STACK_LINE(324)
	if ((tmp3)){
		HX_STACK_LINE(326)
		{
			HX_STACK_LINE(326)
			::luxe::Engine tmp4 = this->host;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(326)
			Dynamic tmp5 = this->config;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(326)
			Dynamic tmp6 = tmp4->config(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(326)
			this->config = tmp6;
		}
		HX_STACK_LINE(328)
		::snow::api::Promise tmp4 = ::snow::api::Promise_obj::resolve(null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(328)
		return tmp4;
	}

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::Snow,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/Snow.hx",332,0x86524d2f)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(336)
			::snow::api::Promise tmp4 = _g->default_user_config();		HX_STACK_VAR(tmp4,"tmp4");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::snow::Snow,_g)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _user_conf){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/Snow.hx",338,0x86524d2f)
				HX_STACK_ARG(_user_conf,"_user_conf")
				{
					HX_STACK_LINE(338)
					_g->config->__FieldRef(HX_HCSTRING("user","\x4b","\x92","\xad","\x4d")) = _user_conf;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(336)
			::snow::api::Promise tmp5 = tmp4->then( Dynamic(new _Function_2_1(_g)),null());		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_2)
			int __ArgCount() const { return 1; }
			Void run(::String error){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","snow/Snow.hx",340,0x86524d2f)
				HX_STACK_ARG(error,"error")
				{
					HX_STACK_LINE(342)
					::String tmp6 = (HX_HCSTRING("config / failed / default user config JSON failed to parse. Cannot recover. ","\xf1","\xb0","\xa4","\xdb") + error);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(342)
					::snow::types::Error tmp7 = ::snow::types::Error_obj::init(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(342)
					HX_STACK_DO_THROW(tmp7);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(336)
			::snow::api::Promise tmp6 = tmp5->error( Dynamic(new _Function_2_2()));		HX_STACK_VAR(tmp6,"tmp6");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_3,::snow::Snow,_g,Dynamic,resolve)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","snow/Snow.hx",344,0x86524d2f)
				{
					HX_STACK_LINE(346)
					{
						HX_STACK_LINE(346)
						Dynamic tmp7 = _g->config;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(346)
						Dynamic tmp8 = _g->host->config(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(346)
						_g->config = tmp8;
					}
					HX_STACK_LINE(347)
					resolve();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(336)
			tmp6->then( Dynamic(new _Function_2_3(_g,resolve)),null());
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(332)
	::snow::api::Promise tmp4 = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(332)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,setup_configs,return )

Void Snow_obj::setup_host_config( ){
{
		HX_STACK_FRAME("snow.Snow","setup_host_config",0xcf90f9f7,"snow.Snow.setup_host_config","snow/Snow.hx",355,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(359)
		::luxe::Engine tmp = this->host;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(359)
		Dynamic tmp1 = this->config;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(359)
		Dynamic tmp2 = tmp->config(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(359)
		this->config = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,setup_host_config,(void))

::snow::api::Promise Snow_obj::default_user_config( ){
	HX_STACK_FRAME("snow.Snow","default_user_config",0x40da29b8,"snow.Snow.default_user_config","snow/Snow.hx",364,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(364)
	::snow::Snow _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::Snow,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/Snow.hx",369,0x86524d2f)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(371)
			::String tmp = _g->assets->root;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(371)
			::String tmp1 = ::snow::types::Config_obj::app_config;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(371)
			::String tmp2 = ::haxe::io::Path_obj::join(Array_obj< ::String >::__new().Add(tmp).Add(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(371)
			Dynamic tmp3 = ::snow::systems::assets::AssetJSON_obj::processor_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(371)
			::snow::api::Promise tmp4 = _g->io->data_flow(tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(371)
			::snow::api::Promise load = tmp4;		HX_STACK_VAR(load,"load");
			HX_STACK_LINE(373)
			Dynamic tmp5 = resolve;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(373)
			::snow::api::Promise tmp6 = load->then(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Dynamic,reject,Dynamic,resolve)
			int __ArgCount() const { return 1; }
			Void run(::snow::types::Error error){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/Snow.hx",374,0x86524d2f)
				HX_STACK_ARG(error,"error")
				{
					HX_STACK_LINE(374)
					switch( (int)(error->__Index())){
						case (int)2: {
							HX_STACK_LINE(374)
							Dynamic tmp7 = (::snow::types::Error(error))->__Param(0);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(374)
							Dynamic val = tmp7;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(375)
							{
								HX_STACK_LINE(376)
								::snow::types::Error tmp8 = error;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(376)
								reject(tmp8);
							}
						}
						;break;
						default: {
							HX_STACK_LINE(378)
							::snow::types::Error tmp7 = error;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(378)
							::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(378)
							::String tmp9 = (HX_HCSTRING("config / user config will be null! / ","\x1e","\x80","\xbe","\xd1") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(378)
							::String tmp10 = (HX_HCSTRING("     i / snow / ","\x06","\xb3","\xeb","\x71") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(378)
							Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Snow.hx","\xfb","\x3b","\xfd","\xae"),378,HX_HCSTRING("snow.Snow","\x6e","\xe0","\x04","\xa6"),HX_HCSTRING("default_user_config","\xb8","\xa9","\x69","\x49"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(378)
							::haxe::Log_obj::trace(tmp10,tmp11);
							HX_STACK_LINE(379)
							resolve(null());
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(373)
			tmp6->error( Dynamic(new _Function_2_1(reject,resolve)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(369)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(369)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,default_user_config,return )

Dynamic Snow_obj::default_config( ){
	HX_STACK_FRAME("snow.Snow","default_config",0xd69819c0,"snow.Snow.default_config","snow/Snow.hx",387,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(391)
	Dynamic tmp = this->default_window_config();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(392)
	Dynamic tmp1 = this->default_render_config();		HX_STACK_VAR(tmp1,"tmp1");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &tmp,Dynamic &tmp1){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",389,0x86524d2f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("user","\x4b","\x92","\xad","\x4d") , null(),false);
				__result->Add(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52") , tmp,false);
				__result->Add(HX_HCSTRING("render","\x56","\x6b","\x29","\x05") , tmp1,false);
				__result->Add(HX_HCSTRING("runtime","\xd8","\xb4","\x60","\xef") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(389)
	Dynamic tmp2 = _Function_1_1::Block(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(389)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,default_config,return )

Dynamic Snow_obj::default_render_config( ){
	HX_STACK_FRAME("snow.Snow","default_render_config",0xe3496c8d,"snow.Snow.default_render_config","snow/Snow.hx",399,0x86524d2f)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",411,0x86524d2f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("major","\x39","\xbd","\x1b","\x03") , (int)0,false);
				__result->Add(HX_HCSTRING("minor","\x35","\x7b","\x68","\x08") , (int)0,false);
				__result->Add(HX_HCSTRING("profile","\x29","\x49","\x49","\xf3") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(411)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",420,0x86524d2f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c") , (int)1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(420)
	Dynamic tmp1 = _Function_1_2::Block();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(420)
	Dynamic tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	struct _Function_1_3{
		inline static Dynamic Block( Dynamic &tmp,Dynamic &tmp2){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",403,0x86524d2f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , (int)0,false);
				__result->Add(HX_HCSTRING("stencil","\xfc","\xbd","\x03","\x80") , (int)0,false);
				__result->Add(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48") , (int)0,false);
				__result->Add(HX_HCSTRING("red_bits","\xf4","\xd7","\x46","\xd0") , (int)8,false);
				__result->Add(HX_HCSTRING("green_bits","\x42","\xa5","\xbf","\x35") , (int)8,false);
				__result->Add(HX_HCSTRING("blue_bits","\x0b","\x26","\x35","\x39") , (int)8,false);
				__result->Add(HX_HCSTRING("alpha_bits","\xc7","\xfa","\x9f","\x81") , (int)8,false);
				__result->Add(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21") , tmp,false);
				__result->Add(HX_HCSTRING("webgl","\xb9","\x4b","\xbc","\xc7") , tmp2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(403)
	Dynamic tmp3 = _Function_1_3::Block(tmp,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(403)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,default_render_config,return )

Dynamic Snow_obj::default_window_config( ){
	HX_STACK_FRAME("snow.Snow","default_window_config",0xa273eb33,"snow.Snow.default_window_config","snow/Snow.hx",428,0x86524d2f)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",432,0x86524d2f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("true_fullscreen","\xcc","\x26","\xf1","\xd0") , false,false);
				__result->Add(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9") , false,false);
				__result->Add(HX_HCSTRING("borderless","\x45","\x46","\x71","\x17") , false,false);
				__result->Add(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9") , true,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , (int)536805376,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , (int)536805376,false);
				__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , (int)960,false);
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)640,false);
				__result->Add(HX_HCSTRING("title","\x98","\x15","\x3b","\x10") , HX_HCSTRING("snow app","\x84","\x30","\x9f","\x8b"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(432)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(432)
	Dynamic conf = tmp;		HX_STACK_VAR(conf,"conf");
	HX_STACK_LINE(449)
	Dynamic tmp1 = conf;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(449)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,default_window_config,return )

bool Snow_obj::set_freeze( bool _freeze){
	HX_STACK_FRAME("snow.Snow","set_freeze",0x5bc91894,"snow.Snow.set_freeze","snow/Snow.hx",455,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_freeze,"_freeze")
	HX_STACK_LINE(457)
	this->freeze = _freeze;
	HX_STACK_LINE(459)
	bool tmp = _freeze;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(459)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(459)
	if ((tmp)){
		HX_STACK_LINE(459)
		tmp1 = (int)4;
	}
	else{
		HX_STACK_LINE(459)
		tmp1 = (int)5;
	}
	HX_STACK_LINE(459)
	this->dispatch_event(tmp1);
	HX_STACK_LINE(461)
	bool tmp2 = this->freeze;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(461)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Snow_obj,set_freeze,return )

Void Snow_obj::step( ){
{
		HX_STACK_FRAME("snow.Snow","step",0xc05b674c,"snow.Snow.step","snow/Snow.hx",467,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(469)
		::snow::api::Promises_obj::step();
		HX_STACK_LINE(471)
		while((true)){
			HX_STACK_LINE(471)
			int tmp = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(471)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(471)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(471)
			if ((tmp2)){
				HX_STACK_LINE(471)
				break;
			}
			HX_STACK_LINE(472)
			{
				HX_STACK_LINE(472)
				int tmp3 = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(472)
				int count = tmp3;		HX_STACK_VAR(count,"count");
				HX_STACK_LINE(472)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(472)
				while((true)){
					HX_STACK_LINE(472)
					bool tmp4 = (i < count);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(472)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(472)
					if ((tmp5)){
						HX_STACK_LINE(472)
						break;
					}
					HX_STACK_LINE(472)
					Dynamic tmp6 = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(472)
					tmp6().Cast< Void >();
					HX_STACK_LINE(472)
					++(i);
				}
			}
		}
		HX_STACK_LINE(475)
		while((true)){
			HX_STACK_LINE(475)
			int tmp = ::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(475)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(475)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(475)
			if ((tmp2)){
				HX_STACK_LINE(475)
				break;
			}
			HX_STACK_LINE(476)
			{
				HX_STACK_LINE(476)
				int tmp3 = ::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(476)
				int count = tmp3;		HX_STACK_VAR(count,"count");
				HX_STACK_LINE(476)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(476)
				while((true)){
					HX_STACK_LINE(476)
					bool tmp4 = (i < count);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(476)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(476)
					if ((tmp5)){
						HX_STACK_LINE(476)
						break;
					}
					HX_STACK_LINE(476)
					Dynamic tmp6 = ::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(476)
					tmp6().Cast< Void >();
					HX_STACK_LINE(476)
					++(i);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,step,(void))

Void Snow_obj::cycle_next_queue( ){
{
		HX_STACK_FRAME("snow.Snow","cycle_next_queue",0xfb89383e,"snow.Snow.cycle_next_queue","snow/Snow.hx",486,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(488)
		int tmp = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(488)
		int count = tmp;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(489)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(490)
		while((true)){
			HX_STACK_LINE(490)
			bool tmp1 = (i < count);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(490)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(490)
			if ((tmp2)){
				HX_STACK_LINE(490)
				break;
			}
			HX_STACK_LINE(491)
			Dynamic tmp3 = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(491)
			tmp3().Cast< Void >();
			HX_STACK_LINE(492)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,cycle_next_queue,(void))

Void Snow_obj::cycle_defer_queue( ){
{
		HX_STACK_FRAME("snow.Snow","cycle_defer_queue",0x85820f6b,"snow.Snow.cycle_defer_queue","snow/Snow.hx",497,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(499)
		int tmp = ::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(499)
		int count = tmp;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(500)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(501)
		while((true)){
			HX_STACK_LINE(501)
			bool tmp1 = (i < count);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(501)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(501)
			if ((tmp2)){
				HX_STACK_LINE(501)
				break;
			}
			HX_STACK_LINE(502)
			Dynamic tmp3 = ::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(502)
			tmp3().Cast< Void >();
			HX_STACK_LINE(503)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,cycle_defer_queue,(void))

Dynamic Snow_obj::copy_window_config( Dynamic _config){
	HX_STACK_FRAME("snow.Snow","copy_window_config",0x7adf9127,"snow.Snow.copy_window_config","snow/Snow.hx",511,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_config,"_config")
	HX_STACK_LINE(513)
	Dynamic tmp = _config->__Field(HX_HCSTRING("borderless","\x45","\x46","\x71","\x17"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(514)
	Dynamic tmp1 = _config->__Field(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(515)
	Dynamic tmp2 = _config->__Field(HX_HCSTRING("true_fullscreen","\xcc","\x26","\xf1","\xd0"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(516)
	Dynamic tmp3 = _config->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(517)
	Dynamic tmp4 = _config->__Field(HX_HCSTRING("no_input","\x4c","\x92","\x80","\x55"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(518)
	Dynamic tmp5 = _config->__Field(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(519)
	::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _config->__Field(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(520)
	Dynamic tmp7 = _config->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(521)
	Dynamic tmp8 = _config->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(522)
	Dynamic tmp9 = _config->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &tmp5,::String &tmp6,Dynamic &tmp9,Dynamic &tmp,Dynamic &tmp4,Dynamic &tmp2,Dynamic &tmp3,Dynamic &tmp1,Dynamic &tmp7,Dynamic &tmp8){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",512,0x86524d2f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("borderless","\x45","\x46","\x71","\x17") , tmp,false);
				__result->Add(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9") , tmp1,false);
				__result->Add(HX_HCSTRING("true_fullscreen","\xcc","\x26","\xf1","\xd0") , tmp2,false);
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , tmp3,false);
				__result->Add(HX_HCSTRING("no_input","\x4c","\x92","\x80","\x55") , tmp4,false);
				__result->Add(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9") , tmp5,false);
				__result->Add(HX_HCSTRING("title","\x98","\x15","\x3b","\x10") , tmp6,false);
				__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , tmp7,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp8,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp9,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(512)
	Dynamic tmp10 = _Function_1_1::Block(tmp5,tmp6,tmp9,tmp,tmp4,tmp2,tmp3,tmp1,tmp7,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(512)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(Snow_obj,copy_window_config,return )

Dynamic Snow_obj::copy_render_config( Dynamic _config){
	HX_STACK_FRAME("snow.Snow","copy_render_config",0xbbb51281,"snow.Snow.copy_render_config","snow/Snow.hx",527,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_config,"_config")
	HX_STACK_LINE(529)
	Dynamic tmp = _config->__Field(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(530)
	Dynamic tmp1 = _config->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(531)
	Dynamic tmp2 = _config->__Field(HX_HCSTRING("stencil","\xfc","\xbd","\x03","\x80"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(532)
	Dynamic tmp3 = _config->__Field(HX_HCSTRING("red_bits","\xf4","\xd7","\x46","\xd0"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(533)
	Dynamic tmp4 = _config->__Field(HX_HCSTRING("green_bits","\x42","\xa5","\xbf","\x35"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(534)
	Dynamic tmp5 = _config->__Field(HX_HCSTRING("blue_bits","\x0b","\x26","\x35","\x39"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(535)
	Dynamic tmp6 = _config->__Field(HX_HCSTRING("alpha_bits","\xc7","\xfa","\x9f","\x81"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(537)
	Dynamic tmp7 = _config->__Field(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"), hx::paccDynamic )->__Field(HX_HCSTRING("major","\x39","\xbd","\x1b","\x03"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(538)
	Dynamic tmp8 = _config->__Field(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"), hx::paccDynamic )->__Field(HX_HCSTRING("minor","\x35","\x7b","\x68","\x08"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(539)
	Dynamic tmp9 = _config->__Field(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"), hx::paccDynamic )->__Field(HX_HCSTRING("profile","\x29","\x49","\x49","\xf3"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &tmp9,Dynamic &tmp7,Dynamic &tmp8){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",536,0x86524d2f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("major","\x39","\xbd","\x1b","\x03") , tmp7,false);
				__result->Add(HX_HCSTRING("minor","\x35","\x7b","\x68","\x08") , tmp8,false);
				__result->Add(HX_HCSTRING("profile","\x29","\x49","\x49","\xf3") , tmp9,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(536)
	Dynamic tmp10 = _Function_1_1::Block(tmp9,tmp7,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
	struct _Function_1_2{
		inline static Dynamic Block( Dynamic &tmp5,Dynamic &tmp6,Dynamic &tmp,Dynamic &tmp4,Dynamic &tmp10,Dynamic &tmp2,Dynamic &tmp3,Dynamic &tmp1){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",528,0x86524d2f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48") , tmp,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp1,false);
				__result->Add(HX_HCSTRING("stencil","\xfc","\xbd","\x03","\x80") , tmp2,false);
				__result->Add(HX_HCSTRING("red_bits","\xf4","\xd7","\x46","\xd0") , tmp3,false);
				__result->Add(HX_HCSTRING("green_bits","\x42","\xa5","\xbf","\x35") , tmp4,false);
				__result->Add(HX_HCSTRING("blue_bits","\x0b","\x26","\x35","\x39") , tmp5,false);
				__result->Add(HX_HCSTRING("alpha_bits","\xc7","\xfa","\x9f","\x81") , tmp6,false);
				__result->Add(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21") , tmp10,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(528)
	Dynamic tmp11 = _Function_1_2::Block(tmp5,tmp6,tmp,tmp4,tmp10,tmp2,tmp3,tmp1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(528)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(Snow_obj,copy_render_config,return )

::String Snow_obj::make_uniqueid( Dynamic val){
	HX_STACK_FRAME("snow.Snow","make_uniqueid",0xca2724dd,"snow.Snow.make_uniqueid","snow/Snow.hx",544,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(548)
	bool tmp = (val == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(548)
	if ((tmp)){
		HX_STACK_LINE(550)
		int tmp1 = ::Std_obj::random((int)2147483647);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(550)
		val = tmp1;
	}
	HX_STACK_LINE(562)
	int tmp1 = hx::Mod(val,(int)62);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(562)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(562)
	int r = tmp2;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(563)
	Float tmp3 = (Float(val) / Float((int)62));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(563)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(563)
	int q = tmp4;		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(565)
	bool tmp5 = (q > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(565)
	if ((tmp5)){
		HX_STACK_LINE(565)
		int tmp6 = q;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(565)
		::String tmp7 = this->make_uniqueid(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(565)
		bool tmp8 = (r > (int)9);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(565)
		::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(565)
		if ((tmp8)){
			HX_STACK_LINE(565)
			int tmp10 = (r - (int)10);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(565)
			int tmp11 = ((int)65 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(565)
			int ascii = tmp11;		HX_STACK_VAR(ascii,"ascii");
			HX_STACK_LINE(565)
			bool tmp12 = (ascii > (int)90);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(565)
			if ((tmp12)){
				HX_STACK_LINE(565)
				hx::AddEq(ascii,(int)6);
			}
			HX_STACK_LINE(565)
			int tmp13 = ascii;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(565)
			tmp9 = ::String::fromCharCode(tmp13);
		}
		else{
			HX_STACK_LINE(565)
			int tmp10 = r;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(565)
			::String tmp11 = ::Std_obj::string(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(565)
			tmp9 = tmp11.charAt((int)0);
		}
		HX_STACK_LINE(565)
		::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(565)
		return tmp10;
	}
	HX_STACK_LINE(567)
	bool tmp6 = (r > (int)9);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(567)
	::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(567)
	if ((tmp6)){
		HX_STACK_LINE(567)
		int tmp8 = (r - (int)10);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(567)
		int tmp9 = ((int)65 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(567)
		int ascii = tmp9;		HX_STACK_VAR(ascii,"ascii");
		HX_STACK_LINE(567)
		bool tmp10 = (ascii > (int)90);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(567)
		if ((tmp10)){
			HX_STACK_LINE(567)
			hx::AddEq(ascii,(int)6);
		}
		HX_STACK_LINE(567)
		int tmp11 = ascii;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(567)
		tmp7 = ::String::fromCharCode(tmp11);
	}
	else{
		HX_STACK_LINE(567)
		int tmp8 = r;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(567)
		::String tmp9 = ::Std_obj::string(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(567)
		tmp7 = tmp9.charAt((int)0);
	}
	HX_STACK_LINE(567)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(567)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Snow_obj,make_uniqueid,return )

Void Snow_obj::next( Dynamic func){
{
		HX_STACK_FRAME("snow.Snow","next",0xbd0204f3,"snow.Snow.next","snow/Snow.hx",251,0x86524d2f)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(253)
		bool tmp = (func != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(253)
		if ((tmp)){
			HX_STACK_LINE(253)
			Dynamic tmp1 = func;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(253)
			::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Snow_obj,next,(void))

Void Snow_obj::defer( Dynamic func){
{
		HX_STACK_FRAME("snow.Snow","defer",0xe2b2cd72,"snow.Snow.defer","snow/Snow.hx",259,0x86524d2f)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(261)
		bool tmp = (func != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		if ((tmp)){
			HX_STACK_LINE(261)
			Dynamic tmp1 = func;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(261)
			::snow::Snow_obj::defer_queue->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Snow_obj,defer,(void))

Float Snow_obj::get_timestamp( ){
	HX_STACK_FRAME("snow.Snow","get_timestamp",0x374328ad,"snow.Snow.get_timestamp","snow/Snow.hx",269,0x86524d2f)
	HX_STACK_LINE(269)
	Float tmp = linc::timestamp::now();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(269)
	Float tmp1 = ::snow::modules::sdl::Runtime_obj::timestamp_start;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(269)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(269)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,get_timestamp,return )

cpp::ArrayBase Snow_obj::next_queue;

cpp::ArrayBase Snow_obj::defer_queue;


Snow_obj::Snow_obj()
{
}

void Snow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Snow);
	HX_MARK_MEMBER_NAME(host,"host");
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(freeze,"freeze");
	HX_MARK_MEMBER_NAME(ready,"ready");
	HX_MARK_MEMBER_NAME(runtime,"runtime");
	HX_MARK_MEMBER_NAME(io,"io");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(audio,"audio");
	HX_MARK_MEMBER_NAME(assets,"assets");
	HX_MARK_MEMBER_NAME(platform,"platform");
	HX_MARK_MEMBER_NAME(os,"os");
	HX_MARK_MEMBER_NAME(debug,"debug");
	HX_MARK_MEMBER_NAME(shutting_down,"shutting_down");
	HX_MARK_MEMBER_NAME(has_shutdown,"has_shutdown");
	HX_MARK_MEMBER_NAME(extensions,"extensions");
	HX_MARK_MEMBER_NAME(sys_event,"sys_event");
	HX_MARK_MEMBER_NAME(win_event,"win_event");
	HX_MARK_MEMBER_NAME(immediate_shutdown,"immediate_shutdown");
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(had_ready_event,"had_ready_event");
	HX_MARK_END_CLASS();
}

void Snow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(host,"host");
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(freeze,"freeze");
	HX_VISIT_MEMBER_NAME(ready,"ready");
	HX_VISIT_MEMBER_NAME(runtime,"runtime");
	HX_VISIT_MEMBER_NAME(io,"io");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(audio,"audio");
	HX_VISIT_MEMBER_NAME(assets,"assets");
	HX_VISIT_MEMBER_NAME(platform,"platform");
	HX_VISIT_MEMBER_NAME(os,"os");
	HX_VISIT_MEMBER_NAME(debug,"debug");
	HX_VISIT_MEMBER_NAME(shutting_down,"shutting_down");
	HX_VISIT_MEMBER_NAME(has_shutdown,"has_shutdown");
	HX_VISIT_MEMBER_NAME(extensions,"extensions");
	HX_VISIT_MEMBER_NAME(sys_event,"sys_event");
	HX_VISIT_MEMBER_NAME(win_event,"win_event");
	HX_VISIT_MEMBER_NAME(immediate_shutdown,"immediate_shutdown");
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(had_ready_event,"had_ready_event");
}

Dynamic Snow_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"io") ) { return io; }
		if (HX_FIELD_EQ(inName,"os") ) { return os; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"host") ) { return host; }
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == hx::paccAlways) return get_time(); }
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return ready; }
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		if (HX_FIELD_EQ(inName,"audio") ) { return audio; }
		if (HX_FIELD_EQ(inName,"debug") ) { return debug; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		if (HX_FIELD_EQ(inName,"freeze") ) { return freeze; }
		if (HX_FIELD_EQ(inName,"assets") ) { return assets; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"runtime") ) { return runtime; }
		if (HX_FIELD_EQ(inName,"onevent") ) { return onevent_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uniqueid") ) { if (inCallProp == hx::paccAlways) return get_uniqueid(); }
		if (HX_FIELD_EQ(inName,"platform") ) { return platform; }
		if (HX_FIELD_EQ(inName,"shutdown") ) { return shutdown_dyn(); }
		if (HX_FIELD_EQ(inName,"get_time") ) { return get_time_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sys_event") ) { return sys_event; }
		if (HX_FIELD_EQ(inName,"win_event") ) { return win_event; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"extensions") ) { return extensions; }
		if (HX_FIELD_EQ(inName,"set_freeze") ) { return set_freeze_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"has_shutdown") ) { return has_shutdown; }
		if (HX_FIELD_EQ(inName,"get_uniqueid") ) { return get_uniqueid_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shutting_down") ) { return shutting_down; }
		if (HX_FIELD_EQ(inName,"on_tick_event") ) { return on_tick_event_dyn(); }
		if (HX_FIELD_EQ(inName,"setup_configs") ) { return setup_configs_dyn(); }
		if (HX_FIELD_EQ(inName,"make_uniqueid") ) { return make_uniqueid_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dispatch_event") ) { return dispatch_event_dyn(); }
		if (HX_FIELD_EQ(inName,"on_ready_event") ) { return on_ready_event_dyn(); }
		if (HX_FIELD_EQ(inName,"default_config") ) { return default_config_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"had_ready_event") ) { return had_ready_event; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cycle_next_queue") ) { return cycle_next_queue_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setup_host_config") ) { return setup_host_config_dyn(); }
		if (HX_FIELD_EQ(inName,"cycle_defer_queue") ) { return cycle_defer_queue_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"immediate_shutdown") ) { return immediate_shutdown; }
		if (HX_FIELD_EQ(inName,"copy_window_config") ) { return copy_window_config_dyn(); }
		if (HX_FIELD_EQ(inName,"copy_render_config") ) { return copy_render_config_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"default_user_config") ) { return default_user_config_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"dispatch_input_event") ) { return dispatch_input_event_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"dispatch_window_event") ) { return dispatch_window_event_dyn(); }
		if (HX_FIELD_EQ(inName,"default_render_config") ) { return default_render_config_dyn(); }
		if (HX_FIELD_EQ(inName,"default_window_config") ) { return default_window_config_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Snow_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { outValue = next_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"defer") ) { outValue = defer_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { if (inCallProp == hx::paccAlways) { outValue = get_timestamp(); return true; } }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"next_queue") ) { outValue = next_queue; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defer_queue") ) { outValue = defer_queue; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_timestamp") ) { outValue = get_timestamp_dyn(); return true;  }
	}
	return false;
}

Dynamic Snow_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< int >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"io") ) { io=inValue.Cast< ::snow::systems::io::IO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"os") ) { os=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"host") ) { host=inValue.Cast< ::luxe::Engine >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { ready=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::snow::systems::input::Input >(); return inValue; }
		if (HX_FIELD_EQ(inName,"audio") ) { audio=inValue.Cast< ::snow::systems::audio::Audio >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debug") ) { debug=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"freeze") ) { if (inCallProp == hx::paccAlways) return set_freeze(inValue);freeze=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"assets") ) { assets=inValue.Cast< ::snow::systems::assets::Assets >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"runtime") ) { runtime=inValue.Cast< ::snow::modules::sdl::Runtime >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"platform") ) { platform=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sys_event") ) { sys_event=inValue.Cast< ::snow::types::SystemEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"win_event") ) { win_event=inValue.Cast< ::snow::types::WindowEvent >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"extensions") ) { extensions=inValue.Cast< Array< ::snow::core::Extension > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"has_shutdown") ) { has_shutdown=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shutting_down") ) { shutting_down=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"had_ready_event") ) { had_ready_event=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"immediate_shutdown") ) { immediate_shutdown=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Snow_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"next_queue") ) { next_queue=ioValue.Cast< cpp::ArrayBase >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defer_queue") ) { defer_queue=ioValue.Cast< cpp::ArrayBase >(); return true; }
	}
	return false;
}

void Snow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("host","\x68","\xcf","\x12","\x45"));
	outFields->push(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"));
	outFields->push(HX_HCSTRING("freeze","\x57","\x8a","\x24","\xaf"));
	outFields->push(HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("uniqueid","\x2c","\x95","\xaa","\x5b"));
	outFields->push(HX_HCSTRING("runtime","\xd8","\xb4","\x60","\xef"));
	outFields->push(HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"));
	outFields->push(HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"));
	outFields->push(HX_HCSTRING("platform","\xb3","\xb2","\xf9","\x67"));
	outFields->push(HX_HCSTRING("os","\x24","\x61","\x00","\x00"));
	outFields->push(HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7"));
	outFields->push(HX_HCSTRING("shutting_down","\xdf","\xe7","\x30","\x20"));
	outFields->push(HX_HCSTRING("has_shutdown","\x5b","\xf9","\x20","\x9e"));
	outFields->push(HX_HCSTRING("extensions","\x14","\x7c","\x70","\x89"));
	outFields->push(HX_HCSTRING("sys_event","\x28","\x84","\x1a","\xeb"));
	outFields->push(HX_HCSTRING("win_event","\x77","\xb4","\xcd","\xd3"));
	outFields->push(HX_HCSTRING("immediate_shutdown","\xe4","\x59","\x91","\x69"));
	outFields->push(HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("had_ready_event","\xca","\xcd","\x0b","\x8e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Engine*/ ,(int)offsetof(Snow_obj,host),HX_HCSTRING("host","\x68","\xcf","\x12","\x45")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Snow_obj,config),HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7")},
	{hx::fsBool,(int)offsetof(Snow_obj,freeze),HX_HCSTRING("freeze","\x57","\x8a","\x24","\xaf")},
	{hx::fsBool,(int)offsetof(Snow_obj,ready),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6")},
	{hx::fsObject /*::snow::modules::sdl::Runtime*/ ,(int)offsetof(Snow_obj,runtime),HX_HCSTRING("runtime","\xd8","\xb4","\x60","\xef")},
	{hx::fsObject /*::snow::systems::io::IO*/ ,(int)offsetof(Snow_obj,io),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00")},
	{hx::fsObject /*::snow::systems::input::Input*/ ,(int)offsetof(Snow_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsObject /*::snow::systems::audio::Audio*/ ,(int)offsetof(Snow_obj,audio),HX_HCSTRING("audio","\xd6","\x78","\x80","\x27")},
	{hx::fsObject /*::snow::systems::assets::Assets*/ ,(int)offsetof(Snow_obj,assets),HX_HCSTRING("assets","\x83","\x48","\x03","\x4c")},
	{hx::fsString,(int)offsetof(Snow_obj,platform),HX_HCSTRING("platform","\xb3","\xb2","\xf9","\x67")},
	{hx::fsString,(int)offsetof(Snow_obj,os),HX_HCSTRING("os","\x24","\x61","\x00","\x00")},
	{hx::fsBool,(int)offsetof(Snow_obj,debug),HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7")},
	{hx::fsBool,(int)offsetof(Snow_obj,shutting_down),HX_HCSTRING("shutting_down","\xdf","\xe7","\x30","\x20")},
	{hx::fsBool,(int)offsetof(Snow_obj,has_shutdown),HX_HCSTRING("has_shutdown","\x5b","\xf9","\x20","\x9e")},
	{hx::fsObject /*Array< ::snow::core::Extension >*/ ,(int)offsetof(Snow_obj,extensions),HX_HCSTRING("extensions","\x14","\x7c","\x70","\x89")},
	{hx::fsObject /*::snow::types::SystemEvent*/ ,(int)offsetof(Snow_obj,sys_event),HX_HCSTRING("sys_event","\x28","\x84","\x1a","\xeb")},
	{hx::fsObject /*::snow::types::WindowEvent*/ ,(int)offsetof(Snow_obj,win_event),HX_HCSTRING("win_event","\x77","\xb4","\xcd","\xd3")},
	{hx::fsBool,(int)offsetof(Snow_obj,immediate_shutdown),HX_HCSTRING("immediate_shutdown","\xe4","\x59","\x91","\x69")},
	{hx::fsInt,(int)offsetof(Snow_obj,i),HX_HCSTRING("i","\x69","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(Snow_obj,had_ready_event),HX_HCSTRING("had_ready_event","\xca","\xcd","\x0b","\x8e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Snow_obj::next_queue,HX_HCSTRING("next_queue","\x05","\x12","\x6f","\xda")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Snow_obj::defer_queue,HX_HCSTRING("defer_queue","\xc4","\xc3","\xba","\xaf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("host","\x68","\xcf","\x12","\x45"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("freeze","\x57","\x8a","\x24","\xaf"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("runtime","\xd8","\xb4","\x60","\xef"),
	HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"),
	HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"),
	HX_HCSTRING("platform","\xb3","\xb2","\xf9","\x67"),
	HX_HCSTRING("os","\x24","\x61","\x00","\x00"),
	HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7"),
	HX_HCSTRING("shutting_down","\xdf","\xe7","\x30","\x20"),
	HX_HCSTRING("has_shutdown","\x5b","\xf9","\x20","\x9e"),
	HX_HCSTRING("extensions","\x14","\x7c","\x70","\x89"),
	HX_HCSTRING("sys_event","\x28","\x84","\x1a","\xeb"),
	HX_HCSTRING("win_event","\x77","\xb4","\xcd","\xd3"),
	HX_HCSTRING("immediate_shutdown","\xe4","\x59","\x91","\x69"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("dispatch_event","\x95","\xa5","\x76","\x78"),
	HX_HCSTRING("dispatch_window_event","\x30","\xcf","\xb8","\x31"),
	HX_HCSTRING("dispatch_input_event","\xa0","\x22","\x11","\xd2"),
	HX_HCSTRING("i","\x69","\x00","\x00","\x00"),
	HX_HCSTRING("onevent","\x9b","\xf6","\xd4","\x78"),
	HX_HCSTRING("get_time","\x96","\x87","\xb7","\xcc"),
	HX_HCSTRING("get_uniqueid","\x35","\x49","\xc4","\x10"),
	HX_HCSTRING("had_ready_event","\xca","\xcd","\x0b","\x8e"),
	HX_HCSTRING("on_ready_event","\x9e","\x5d","\xd2","\x66"),
	HX_HCSTRING("on_tick_event","\xd8","\x88","\xaa","\xe9"),
	HX_HCSTRING("setup_configs","\x6f","\xe0","\x5f","\x20"),
	HX_HCSTRING("setup_host_config","\xf7","\x79","\x40","\x6d"),
	HX_HCSTRING("default_user_config","\xb8","\xa9","\x69","\x49"),
	HX_HCSTRING("default_config","\xc0","\x99","\x38","\x98"),
	HX_HCSTRING("default_render_config","\x8d","\xec","\xb8","\xce"),
	HX_HCSTRING("default_window_config","\x33","\x6b","\xe3","\x8d"),
	HX_HCSTRING("set_freeze","\x94","\x98","\x29","\xa3"),
	HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"),
	HX_HCSTRING("cycle_next_queue","\x3e","\xb8","\x49","\xc6"),
	HX_HCSTRING("cycle_defer_queue","\x6b","\x8f","\x31","\x23"),
	HX_HCSTRING("copy_window_config","\x27","\x11","\xc0","\xd6"),
	HX_HCSTRING("copy_render_config","\x81","\x92","\x95","\x17"),
	HX_HCSTRING("make_uniqueid","\xdd","\xa4","\x16","\xfa"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Snow_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Snow_obj::next_queue,"next_queue");
	HX_MARK_MEMBER_NAME(Snow_obj::defer_queue,"defer_queue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Snow_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Snow_obj::next_queue,"next_queue");
	HX_VISIT_MEMBER_NAME(Snow_obj::defer_queue,"defer_queue");
};

#endif

hx::Class Snow_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("defer","\x72","\x4d","\x22","\xd7"),
	HX_HCSTRING("get_timestamp","\xad","\xa8","\x32","\x67"),
	HX_HCSTRING("next_queue","\x05","\x12","\x6f","\xda"),
	HX_HCSTRING("defer_queue","\xc4","\xc3","\xba","\xaf"),
	::String(null()) };

void Snow_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.Snow","\x6e","\xe0","\x04","\xa6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Snow_obj::__GetStatic;
	__mClass->mSetStaticField = &Snow_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Snow_obj >;
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

void Snow_obj::__boot()
{
	next_queue= cpp::ArrayBase_obj::__new();
	defer_queue= cpp::ArrayBase_obj::__new();
}

} // end namespace snow
