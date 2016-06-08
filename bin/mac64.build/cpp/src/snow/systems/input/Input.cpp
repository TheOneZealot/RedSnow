#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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
#ifndef INCLUDED_snow_systems_input_Input
#include <snow/systems/input/Input.h>
#endif
#ifndef INCLUDED_snow_types_GamepadEvent
#include <snow/types/GamepadEvent.h>
#endif
#ifndef INCLUDED_snow_types_InputEvent
#include <snow/types/InputEvent.h>
#endif
#ifndef INCLUDED_snow_types_KeyEvent
#include <snow/types/KeyEvent.h>
#endif
#ifndef INCLUDED_snow_types_ModState
#include <snow/types/ModState.h>
#endif
#ifndef INCLUDED_snow_types_MouseEvent
#include <snow/types/MouseEvent.h>
#endif
#ifndef INCLUDED_snow_types_SystemEvent
#include <snow/types/SystemEvent.h>
#endif
#ifndef INCLUDED_snow_types_TextEvent
#include <snow/types/TextEvent.h>
#endif
#ifndef INCLUDED_snow_types_TouchEvent
#include <snow/types/TouchEvent.h>
#endif
namespace snow{
namespace systems{
namespace input{

Void Input_obj::__construct(::snow::Snow _app)
{
HX_STACK_FRAME("snow.systems.input.Input","new",0x974ccfc3,"snow.systems.input.Input.new","snow/systems/input/Input.hx",11,0x9abd6a90)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
{
	HX_STACK_LINE(555)
	this->touch_count = (int)0;
	HX_STACK_LINE(17)
	this->gamepad_init_count = (int)16;
	HX_STACK_LINE(32)
	this->app = _app;
	HX_STACK_LINE(33)
	::snow::types::InputEvent tmp = ::snow::types::InputEvent_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	this->event = tmp;
	HX_STACK_LINE(34)
	::snow::types::KeyEvent tmp1 = ::snow::types::KeyEvent_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	this->key_event = tmp1;
	HX_STACK_LINE(35)
	::snow::types::TextEvent tmp2 = ::snow::types::TextEvent_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	this->text_event = tmp2;
	HX_STACK_LINE(36)
	::snow::types::MouseEvent tmp3 = ::snow::types::MouseEvent_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	this->mouse_event = tmp3;
	HX_STACK_LINE(37)
	::snow::types::TouchEvent tmp4 = ::snow::types::TouchEvent_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	this->touch_event = tmp4;
	HX_STACK_LINE(38)
	::snow::types::GamepadEvent tmp5 = ::snow::types::GamepadEvent_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(38)
	this->gamepad_event = tmp5;
	HX_STACK_LINE(39)
	::snow::types::ModState tmp6 = ::snow::types::ModState_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(39)
	this->mod_state = tmp6;
	HX_STACK_LINE(40)
	::snow::types::ModState tmp7 = this->mod_state;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(40)
	tmp7->none = true;
	HX_STACK_LINE(44)
	::haxe::ds::IntMap tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		::haxe::ds::IntMap tmp9 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(44)
		::haxe::ds::IntMap tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(44)
		tmp8 = tmp10;
	}
	HX_STACK_LINE(44)
	this->key_code_pressed = tmp8;
	HX_STACK_LINE(45)
	::haxe::ds::IntMap tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::haxe::ds::IntMap tmp10 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(45)
		::haxe::ds::IntMap tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(45)
		tmp9 = tmp11;
	}
	HX_STACK_LINE(45)
	this->key_code_down = tmp9;
	HX_STACK_LINE(46)
	::haxe::ds::IntMap tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::haxe::ds::IntMap tmp11 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(46)
		::haxe::ds::IntMap tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(46)
		tmp10 = tmp12;
	}
	HX_STACK_LINE(46)
	this->key_code_released = tmp10;
	HX_STACK_LINE(48)
	::haxe::ds::IntMap tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		::haxe::ds::IntMap tmp12 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(48)
		::haxe::ds::IntMap tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(48)
		tmp11 = tmp13;
	}
	HX_STACK_LINE(48)
	this->scan_code_pressed = tmp11;
	HX_STACK_LINE(49)
	::haxe::ds::IntMap tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		::haxe::ds::IntMap tmp13 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(49)
		::haxe::ds::IntMap tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(49)
		tmp12 = tmp14;
	}
	HX_STACK_LINE(49)
	this->scan_code_down = tmp12;
	HX_STACK_LINE(50)
	::haxe::ds::IntMap tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		::haxe::ds::IntMap tmp14 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(50)
		::haxe::ds::IntMap tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(50)
		tmp13 = tmp15;
	}
	HX_STACK_LINE(50)
	this->scan_code_released = tmp13;
	HX_STACK_LINE(54)
	::haxe::ds::IntMap tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(54)
	{
		HX_STACK_LINE(54)
		::haxe::ds::IntMap tmp15 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(54)
		::haxe::ds::IntMap tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(54)
		tmp14 = tmp16;
	}
	HX_STACK_LINE(54)
	this->mouse_button_pressed = tmp14;
	HX_STACK_LINE(55)
	::haxe::ds::IntMap tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		::haxe::ds::IntMap tmp16 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(55)
		::haxe::ds::IntMap tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(55)
		tmp15 = tmp17;
	}
	HX_STACK_LINE(55)
	this->mouse_button_down = tmp15;
	HX_STACK_LINE(56)
	::haxe::ds::IntMap tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		::haxe::ds::IntMap tmp17 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(56)
		::haxe::ds::IntMap tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(56)
		tmp16 = tmp18;
	}
	HX_STACK_LINE(56)
	this->mouse_button_released = tmp16;
	HX_STACK_LINE(60)
	::haxe::ds::IntMap tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		::haxe::ds::IntMap tmp18 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(60)
		::haxe::ds::IntMap tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(60)
		tmp17 = tmp19;
	}
	HX_STACK_LINE(60)
	this->gamepad_button_pressed = tmp17;
	HX_STACK_LINE(61)
	::haxe::ds::IntMap tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		::haxe::ds::IntMap tmp19 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(61)
		::haxe::ds::IntMap tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(61)
		tmp18 = tmp20;
	}
	HX_STACK_LINE(61)
	this->gamepad_button_down = tmp18;
	HX_STACK_LINE(62)
	::haxe::ds::IntMap tmp19;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		::haxe::ds::IntMap tmp20 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(62)
		::haxe::ds::IntMap tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(62)
		tmp19 = tmp21;
	}
	HX_STACK_LINE(62)
	this->gamepad_button_released = tmp19;
	HX_STACK_LINE(63)
	::haxe::ds::IntMap tmp20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		::haxe::ds::IntMap tmp21 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(63)
		::haxe::ds::IntMap tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(63)
		tmp20 = tmp22;
	}
	HX_STACK_LINE(63)
	this->gamepad_axis_values = tmp20;
	HX_STACK_LINE(65)
	{
		HX_STACK_LINE(65)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(65)
		int tmp21 = this->gamepad_init_count;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(65)
		int _g = tmp21;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(65)
		while((true)){
			HX_STACK_LINE(65)
			bool tmp22 = (_g1 < _g);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(65)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(65)
			if ((tmp23)){
				HX_STACK_LINE(65)
				break;
			}
			HX_STACK_LINE(65)
			int tmp24 = (_g1)++;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(65)
			int i = tmp24;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(66)
			{
				HX_STACK_LINE(66)
				::haxe::ds::IntMap tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(66)
				{
					HX_STACK_LINE(66)
					::haxe::ds::IntMap tmp26 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(66)
					::haxe::ds::IntMap tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(66)
					tmp25 = tmp27;
				}
				HX_STACK_LINE(66)
				::haxe::ds::IntMap value = tmp25;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(66)
				::haxe::ds::IntMap tmp26 = this->gamepad_button_pressed;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(66)
				int tmp27 = i;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(66)
				::haxe::ds::IntMap tmp28 = value;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(66)
				tmp26->set(tmp27,tmp28);
			}
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				::haxe::ds::IntMap tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					::haxe::ds::IntMap tmp26 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(67)
					::haxe::ds::IntMap tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(67)
					tmp25 = tmp27;
				}
				HX_STACK_LINE(67)
				::haxe::ds::IntMap value = tmp25;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(67)
				::haxe::ds::IntMap tmp26 = this->gamepad_button_down;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(67)
				int tmp27 = i;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(67)
				::haxe::ds::IntMap tmp28 = value;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(67)
				tmp26->set(tmp27,tmp28);
			}
			HX_STACK_LINE(68)
			{
				HX_STACK_LINE(68)
				::haxe::ds::IntMap tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(68)
				{
					HX_STACK_LINE(68)
					::haxe::ds::IntMap tmp26 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(68)
					::haxe::ds::IntMap tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(68)
					tmp25 = tmp27;
				}
				HX_STACK_LINE(68)
				::haxe::ds::IntMap value = tmp25;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(68)
				::haxe::ds::IntMap tmp26 = this->gamepad_button_released;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(68)
				int tmp27 = i;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(68)
				::haxe::ds::IntMap tmp28 = value;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(68)
				tmp26->set(tmp27,tmp28);
			}
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(69)
				::haxe::ds::IntMap tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(69)
				{
					HX_STACK_LINE(69)
					::haxe::ds::IntMap tmp26 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(69)
					::haxe::ds::IntMap tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(69)
					tmp25 = tmp27;
				}
				HX_STACK_LINE(69)
				::haxe::ds::IntMap value = tmp25;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(69)
				::haxe::ds::IntMap tmp26 = this->gamepad_axis_values;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(69)
				int tmp27 = i;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(69)
				::haxe::ds::IntMap tmp28 = value;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(69)
				tmp26->set(tmp27,tmp28);
			}
		}
	}
	HX_STACK_LINE(74)
	::haxe::ds::IntMap tmp21;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(74)
	{
		HX_STACK_LINE(74)
		::haxe::ds::IntMap tmp22 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(74)
		::haxe::ds::IntMap tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(74)
		tmp21 = tmp23;
	}
	HX_STACK_LINE(74)
	this->touches_down = tmp21;
}
;
	return null();
}

//Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new(::snow::Snow _app)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct(_app);
	return _result_;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Input_obj::shutdown( ){
{
		HX_STACK_FRAME("snow.systems.input.Input","shutdown",0x276b5653,"snow.systems.input.Input.shutdown","snow/systems/input/Input.hx",79,0x9abd6a90)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,shutdown,(void))

bool Input_obj::keypressed( int _code){
	HX_STACK_FRAME("snow.systems.input.Input","keypressed",0xf1544de0,"snow.systems.input.Input.keypressed","snow/systems/input/Input.hx",89,0x9abd6a90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(90)
	::haxe::ds::IntMap tmp = this->key_code_pressed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	int tmp1 = _code;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(90)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keypressed,return )

bool Input_obj::keyreleased( int _code){
	HX_STACK_FRAME("snow.systems.input.Input","keyreleased",0x3f45e3bf,"snow.systems.input.Input.keyreleased","snow/systems/input/Input.hx",94,0x9abd6a90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(95)
	::haxe::ds::IntMap tmp = this->key_code_released;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	int tmp1 = _code;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keyreleased,return )

bool Input_obj::keydown( int _code){
	HX_STACK_FRAME("snow.systems.input.Input","keydown",0x52fe2a64,"snow.systems.input.Input.keydown","snow/systems/input/Input.hx",99,0x9abd6a90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(100)
	::haxe::ds::IntMap tmp = this->key_code_down;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	int tmp1 = _code;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keydown,return )

bool Input_obj::scanpressed( int _code){
	HX_STACK_FRAME("snow.systems.input.Input","scanpressed",0x55aec928,"snow.systems.input.Input.scanpressed","snow/systems/input/Input.hx",104,0x9abd6a90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(105)
	::haxe::ds::IntMap tmp = this->scan_code_pressed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	int tmp1 = _code;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(105)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,scanpressed,return )

bool Input_obj::scanreleased( int _code){
	HX_STACK_FRAME("snow.systems.input.Input","scanreleased",0xaa174777,"snow.systems.input.Input.scanreleased","snow/systems/input/Input.hx",109,0x9abd6a90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(110)
	::haxe::ds::IntMap tmp = this->scan_code_released;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(110)
	int tmp1 = _code;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(110)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(110)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,scanreleased,return )

bool Input_obj::scandown( int _code){
	HX_STACK_FRAME("snow.systems.input.Input","scandown",0xe3f5521c,"snow.systems.input.Input.scandown","snow/systems/input/Input.hx",114,0x9abd6a90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(115)
	::haxe::ds::IntMap tmp = this->scan_code_down;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	int tmp1 = _code;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,scandown,return )

bool Input_obj::mousepressed( int _button){
	HX_STACK_FRAME("snow.systems.input.Input","mousepressed",0xa276775a,"snow.systems.input.Input.mousepressed","snow/systems/input/Input.hx",121,0x9abd6a90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(122)
	::haxe::ds::IntMap tmp = this->mouse_button_pressed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	int tmp1 = _button;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(122)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mousepressed,return )

bool Input_obj::mousereleased( int _button){
	HX_STACK_FRAME("snow.systems.input.Input","mousereleased",0x8c080505,"snow.systems.input.Input.mousereleased","snow/systems/input/Input.hx",126,0x9abd6a90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(127)
	::haxe::ds::IntMap tmp = this->mouse_button_released;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	int tmp1 = _button;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(127)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mousereleased,return )

bool Input_obj::mousedown( int _button){
	HX_STACK_FRAME("snow.systems.input.Input","mousedown",0x1af8b0aa,"snow.systems.input.Input.mousedown","snow/systems/input/Input.hx",131,0x9abd6a90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(132)
	::haxe::ds::IntMap tmp = this->mouse_button_down;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	int tmp1 = _button;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(132)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mousedown,return )

bool Input_obj::gamepadpressed( int _gamepad,int _button){
	HX_STACK_FRAME("snow.systems.input.Input","gamepadpressed",0xaed77d9e,"snow.systems.input.Input.gamepadpressed","snow/systems/input/Input.hx",138,0x9abd6a90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(140)
	::haxe::ds::IntMap tmp = this->gamepad_button_pressed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	int tmp1 = _gamepad;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	::haxe::ds::IntMap tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(140)
	::haxe::ds::IntMap _gamepad_state = tmp2;		HX_STACK_VAR(_gamepad_state,"_gamepad_state");
	HX_STACK_LINE(141)
	bool tmp3 = (_gamepad_state != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(141)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(141)
	if ((tmp3)){
		HX_STACK_LINE(141)
		int tmp5 = _button;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(141)
		tmp4 = _gamepad_state->exists(tmp5);
	}
	else{
		HX_STACK_LINE(141)
		tmp4 = false;
	}
	HX_STACK_LINE(141)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepadpressed,return )

bool Input_obj::gamepadreleased( int _gamepad,int _button){
	HX_STACK_FRAME("snow.systems.input.Input","gamepadreleased",0x548c7a41,"snow.systems.input.Input.gamepadreleased","snow/systems/input/Input.hx",146,0x9abd6a90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(148)
	::haxe::ds::IntMap tmp = this->gamepad_button_released;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	int tmp1 = _gamepad;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	::haxe::ds::IntMap tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(148)
	::haxe::ds::IntMap _gamepad_state = tmp2;		HX_STACK_VAR(_gamepad_state,"_gamepad_state");
	HX_STACK_LINE(149)
	bool tmp3 = (_gamepad_state != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(149)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(149)
	if ((tmp3)){
		HX_STACK_LINE(149)
		int tmp5 = _button;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(149)
		tmp4 = _gamepad_state->exists(tmp5);
	}
	else{
		HX_STACK_LINE(149)
		tmp4 = false;
	}
	HX_STACK_LINE(149)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepadreleased,return )

bool Input_obj::gamepaddown( int _gamepad,int _button){
	HX_STACK_FRAME("snow.systems.input.Input","gamepaddown",0x41d2d7e6,"snow.systems.input.Input.gamepaddown","snow/systems/input/Input.hx",154,0x9abd6a90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(156)
	::haxe::ds::IntMap tmp = this->gamepad_button_down;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	int tmp1 = _gamepad;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	::haxe::ds::IntMap tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(156)
	::haxe::ds::IntMap _gamepad_state = tmp2;		HX_STACK_VAR(_gamepad_state,"_gamepad_state");
	HX_STACK_LINE(157)
	bool tmp3 = (_gamepad_state != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(157)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(157)
	if ((tmp3)){
		HX_STACK_LINE(157)
		int tmp5 = _button;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(157)
		tmp4 = _gamepad_state->exists(tmp5);
	}
	else{
		HX_STACK_LINE(157)
		tmp4 = false;
	}
	HX_STACK_LINE(157)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepaddown,return )

Float Input_obj::gamepadaxis( int _gamepad,int _axis){
	HX_STACK_FRAME("snow.systems.input.Input","gamepadaxis",0x3fddfc25,"snow.systems.input.Input.gamepadaxis","snow/systems/input/Input.hx",162,0x9abd6a90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_axis,"_axis")
	HX_STACK_LINE(164)
	::haxe::ds::IntMap tmp = this->gamepad_axis_values;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	int tmp1 = _gamepad;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(164)
	::haxe::ds::IntMap tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	::haxe::ds::IntMap _gamepad_state = tmp2;		HX_STACK_VAR(_gamepad_state,"_gamepad_state");
	HX_STACK_LINE(165)
	bool tmp3 = (_gamepad_state != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(165)
	if ((tmp3)){
		HX_STACK_LINE(166)
		int tmp4 = _axis;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(166)
		bool tmp5 = _gamepad_state->exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(166)
		if ((tmp5)){
			HX_STACK_LINE(167)
			int tmp6 = _axis;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(167)
			Dynamic tmp7 = _gamepad_state->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(167)
			Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(167)
			return tmp8;
		}
	}
	HX_STACK_LINE(171)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepadaxis,return )

Void Input_obj::dispatch_key_down_event( int keycode,int scancode,bool repeat,::snow::types::ModState mod,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.systems.input.Input","dispatch_key_down_event",0x6350b525,"snow.systems.input.Input.dispatch_key_down_event","snow/systems/input/Input.hx",177,0x9abd6a90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keycode,"keycode")
		HX_STACK_ARG(scancode,"scancode")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(mod,"mod")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(181)
		bool tmp = repeat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(181)
		if ((tmp1)){
			HX_STACK_LINE(183)
			::haxe::ds::IntMap tmp2 = this->key_code_pressed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(183)
			int tmp3 = keycode;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(183)
			tmp2->set(tmp3,false);
			HX_STACK_LINE(185)
			::haxe::ds::IntMap tmp4 = this->key_code_down;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(185)
			int tmp5 = keycode;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(185)
			tmp4->set(tmp5,true);
			HX_STACK_LINE(187)
			::haxe::ds::IntMap tmp6 = this->scan_code_pressed;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(187)
			int tmp7 = scancode;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(187)
			tmp6->set(tmp7,false);
			HX_STACK_LINE(189)
			::haxe::ds::IntMap tmp8 = this->scan_code_down;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(189)
			int tmp9 = scancode;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(189)
			tmp8->set(tmp9,true);
		}
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			::snow::types::KeyEvent tmp2 = this->key_event;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(193)
			::snow::types::KeyEvent _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(193)
			_this->type = (int)1;
			HX_STACK_LINE(193)
			_this->keycode = keycode;
			HX_STACK_LINE(193)
			_this->scancode = scancode;
			HX_STACK_LINE(193)
			_this->repeat = repeat;
			HX_STACK_LINE(193)
			_this->mod = mod;
		}
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			::snow::types::InputEvent tmp2 = this->event;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(194)
			::snow::types::InputEvent _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				_this->type = (int)1;
				HX_STACK_LINE(194)
				_this->key = null();
				HX_STACK_LINE(194)
				_this->text = null();
				HX_STACK_LINE(194)
				_this->mouse = null();
				HX_STACK_LINE(194)
				_this->touch = null();
				HX_STACK_LINE(194)
				_this->gamepad = null();
				HX_STACK_LINE(194)
				_this->window_id = window_id;
				HX_STACK_LINE(194)
				_this->timestamp = timestamp;
			}
			HX_STACK_LINE(194)
			::snow::types::KeyEvent tmp3 = this->key_event;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(194)
			_this->key = tmp3;
		}
		HX_STACK_LINE(195)
		::snow::Snow tmp2 = this->app;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(195)
		::snow::types::InputEvent tmp3 = this->event;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(195)
		tmp2->dispatch_input_event(tmp3);
		HX_STACK_LINE(198)
		::snow::Snow tmp4 = this->app;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(198)
		int tmp5 = keycode;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(198)
		int tmp6 = scancode;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(198)
		bool tmp7 = repeat;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(198)
		::snow::types::ModState tmp8 = mod;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(198)
		Float tmp9 = timestamp;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(198)
		int tmp10 = window_id;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(198)
		tmp4->host->onkeydown(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,dispatch_key_down_event,(void))

Void Input_obj::dispatch_key_up_event( int keycode,int scancode,bool repeat,::snow::types::ModState mod,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.systems.input.Input","dispatch_key_up_event",0x220e19de,"snow.systems.input.Input.dispatch_key_up_event","snow/systems/input/Input.hx",203,0x9abd6a90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keycode,"keycode")
		HX_STACK_ARG(scancode,"scancode")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(mod,"mod")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(207)
		::haxe::ds::IntMap tmp = this->key_code_released;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		int tmp1 = keycode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		tmp->set(tmp1,false);
		HX_STACK_LINE(209)
		::haxe::ds::IntMap tmp2 = this->key_code_down;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(209)
		int tmp3 = keycode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(209)
		tmp2->remove(tmp3);
		HX_STACK_LINE(212)
		::haxe::ds::IntMap tmp4 = this->scan_code_released;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(212)
		int tmp5 = scancode;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(212)
		tmp4->set(tmp5,false);
		HX_STACK_LINE(214)
		::haxe::ds::IntMap tmp6 = this->scan_code_down;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(214)
		int tmp7 = scancode;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(214)
		tmp6->remove(tmp7);
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(218)
			::snow::types::KeyEvent tmp8 = this->key_event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(218)
			::snow::types::KeyEvent _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(218)
			_this->type = (int)2;
			HX_STACK_LINE(218)
			_this->keycode = keycode;
			HX_STACK_LINE(218)
			_this->scancode = scancode;
			HX_STACK_LINE(218)
			_this->repeat = repeat;
			HX_STACK_LINE(218)
			_this->mod = mod;
		}
		HX_STACK_LINE(219)
		{
			HX_STACK_LINE(219)
			::snow::types::InputEvent tmp8 = this->event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(219)
			::snow::types::InputEvent _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(219)
			{
				HX_STACK_LINE(219)
				_this->type = (int)1;
				HX_STACK_LINE(219)
				_this->key = null();
				HX_STACK_LINE(219)
				_this->text = null();
				HX_STACK_LINE(219)
				_this->mouse = null();
				HX_STACK_LINE(219)
				_this->touch = null();
				HX_STACK_LINE(219)
				_this->gamepad = null();
				HX_STACK_LINE(219)
				_this->window_id = window_id;
				HX_STACK_LINE(219)
				_this->timestamp = timestamp;
			}
			HX_STACK_LINE(219)
			::snow::types::KeyEvent tmp9 = this->key_event;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(219)
			_this->key = tmp9;
		}
		HX_STACK_LINE(220)
		::snow::Snow tmp8 = this->app;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(220)
		::snow::types::InputEvent tmp9 = this->event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(220)
		tmp8->dispatch_input_event(tmp9);
		HX_STACK_LINE(223)
		::snow::Snow tmp10 = this->app;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(223)
		int tmp11 = keycode;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(223)
		int tmp12 = scancode;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(223)
		bool tmp13 = repeat;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(223)
		::snow::types::ModState tmp14 = mod;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(223)
		Float tmp15 = timestamp;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(223)
		int tmp16 = window_id;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(223)
		tmp10->host->onkeyup(tmp11,tmp12,tmp13,tmp14,tmp15,tmp16);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,dispatch_key_up_event,(void))

Void Input_obj::dispatch_text_event( ::String text,int start,int length,int type,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.systems.input.Input","dispatch_text_event",0xa5cbb5d0,"snow.systems.input.Input.dispatch_text_event","snow/systems/input/Input.hx",228,0x9abd6a90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(length,"length")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(230)
		{
			HX_STACK_LINE(230)
			::snow::types::TextEvent tmp = this->text_event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(230)
			::snow::types::TextEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(230)
			_this->type = type;
			HX_STACK_LINE(230)
			_this->text = text;
			HX_STACK_LINE(230)
			_this->start = start;
			HX_STACK_LINE(230)
			_this->length = length;
		}
		HX_STACK_LINE(231)
		{
			HX_STACK_LINE(231)
			::snow::types::InputEvent tmp = this->event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(231)
			::snow::types::InputEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(231)
			{
				HX_STACK_LINE(231)
				_this->type = (int)2;
				HX_STACK_LINE(231)
				_this->key = null();
				HX_STACK_LINE(231)
				_this->text = null();
				HX_STACK_LINE(231)
				_this->mouse = null();
				HX_STACK_LINE(231)
				_this->touch = null();
				HX_STACK_LINE(231)
				_this->gamepad = null();
				HX_STACK_LINE(231)
				_this->window_id = window_id;
				HX_STACK_LINE(231)
				_this->timestamp = timestamp;
			}
			HX_STACK_LINE(231)
			::snow::types::TextEvent tmp1 = this->text_event;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(231)
			_this->text = tmp1;
		}
		HX_STACK_LINE(232)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		::snow::types::InputEvent tmp1 = this->event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(232)
		tmp->dispatch_input_event(tmp1);
		HX_STACK_LINE(234)
		::snow::Snow tmp2 = this->app;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(234)
		::String tmp3 = text;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(234)
		int tmp4 = start;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(234)
		int tmp5 = length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(234)
		int tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(234)
		Float tmp7 = timestamp;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(234)
		int tmp8 = window_id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(234)
		tmp2->host->ontextinput(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,dispatch_text_event,(void))

Void Input_obj::dispatch_mouse_move_event( int x,int y,int xrel,int yrel,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.systems.input.Input","dispatch_mouse_move_event",0xa3c0344e,"snow.systems.input.Input.dispatch_mouse_move_event","snow/systems/input/Input.hx",240,0x9abd6a90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(xrel,"xrel")
		HX_STACK_ARG(yrel,"yrel")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(242)
		{
			HX_STACK_LINE(242)
			::snow::types::MouseEvent tmp = this->mouse_event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(242)
			::snow::types::MouseEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(242)
			_this->type = (int)1;
			HX_STACK_LINE(242)
			_this->x = x;
			HX_STACK_LINE(242)
			_this->y = y;
			HX_STACK_LINE(242)
			_this->x_rel = xrel;
			HX_STACK_LINE(242)
			_this->y_rel = yrel;
			HX_STACK_LINE(242)
			_this->button = (int)0;
			HX_STACK_LINE(242)
			_this->wheel_x = (int)0;
			HX_STACK_LINE(242)
			_this->wheel_y = (int)0;
		}
		HX_STACK_LINE(243)
		{
			HX_STACK_LINE(243)
			::snow::types::InputEvent tmp = this->event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(243)
			::snow::types::InputEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(243)
			{
				HX_STACK_LINE(243)
				_this->type = (int)3;
				HX_STACK_LINE(243)
				_this->key = null();
				HX_STACK_LINE(243)
				_this->text = null();
				HX_STACK_LINE(243)
				_this->mouse = null();
				HX_STACK_LINE(243)
				_this->touch = null();
				HX_STACK_LINE(243)
				_this->gamepad = null();
				HX_STACK_LINE(243)
				_this->window_id = window_id;
				HX_STACK_LINE(243)
				_this->timestamp = timestamp;
			}
			HX_STACK_LINE(243)
			::snow::types::MouseEvent tmp1 = this->mouse_event;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(243)
			_this->mouse = tmp1;
		}
		HX_STACK_LINE(244)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(244)
		::snow::types::InputEvent tmp1 = this->event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(244)
		tmp->dispatch_input_event(tmp1);
		HX_STACK_LINE(246)
		::snow::Snow tmp2 = this->app;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(246)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(246)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(246)
		int tmp5 = xrel;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(246)
		int tmp6 = yrel;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(246)
		Float tmp7 = timestamp;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(246)
		int tmp8 = window_id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(246)
		tmp2->host->onmousemove(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,dispatch_mouse_move_event,(void))

Void Input_obj::dispatch_mouse_down_event( int x,int y,int button,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.systems.input.Input","dispatch_mouse_down_event",0x90959c5f,"snow.systems.input.Input.dispatch_mouse_down_event","snow/systems/input/Input.hx",251,0x9abd6a90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(254)
		::haxe::ds::IntMap tmp = this->mouse_button_pressed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(254)
		int tmp1 = button;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		tmp->set(tmp1,false);
		HX_STACK_LINE(256)
		::haxe::ds::IntMap tmp2 = this->mouse_button_down;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(256)
		int tmp3 = button;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(256)
		tmp2->set(tmp3,true);
		HX_STACK_LINE(258)
		{
			HX_STACK_LINE(258)
			::snow::types::MouseEvent tmp4 = this->mouse_event;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(258)
			::snow::types::MouseEvent _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(258)
			_this->type = (int)2;
			HX_STACK_LINE(258)
			_this->x = x;
			HX_STACK_LINE(258)
			_this->y = y;
			HX_STACK_LINE(258)
			_this->x_rel = (int)0;
			HX_STACK_LINE(258)
			_this->y_rel = (int)0;
			HX_STACK_LINE(258)
			_this->button = button;
			HX_STACK_LINE(258)
			_this->wheel_x = (int)0;
			HX_STACK_LINE(258)
			_this->wheel_y = (int)0;
		}
		HX_STACK_LINE(259)
		{
			HX_STACK_LINE(259)
			::snow::types::InputEvent tmp4 = this->event;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(259)
			::snow::types::InputEvent _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(259)
			{
				HX_STACK_LINE(259)
				_this->type = (int)3;
				HX_STACK_LINE(259)
				_this->key = null();
				HX_STACK_LINE(259)
				_this->text = null();
				HX_STACK_LINE(259)
				_this->mouse = null();
				HX_STACK_LINE(259)
				_this->touch = null();
				HX_STACK_LINE(259)
				_this->gamepad = null();
				HX_STACK_LINE(259)
				_this->window_id = window_id;
				HX_STACK_LINE(259)
				_this->timestamp = timestamp;
			}
			HX_STACK_LINE(259)
			::snow::types::MouseEvent tmp5 = this->mouse_event;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(259)
			_this->mouse = tmp5;
		}
		HX_STACK_LINE(260)
		::snow::Snow tmp4 = this->app;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(260)
		::snow::types::InputEvent tmp5 = this->event;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(260)
		tmp4->dispatch_input_event(tmp5);
		HX_STACK_LINE(262)
		::snow::Snow tmp6 = this->app;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(262)
		int tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(262)
		int tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(262)
		int tmp9 = button;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(262)
		Float tmp10 = timestamp;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(262)
		int tmp11 = window_id;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(262)
		tmp6->host->onmousedown(tmp7,tmp8,tmp9,tmp10,tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Input_obj,dispatch_mouse_down_event,(void))

Void Input_obj::dispatch_mouse_up_event( int x,int y,int button,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.systems.input.Input","dispatch_mouse_up_event",0x1e8cde98,"snow.systems.input.Input.dispatch_mouse_up_event","snow/systems/input/Input.hx",267,0x9abd6a90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(270)
		::haxe::ds::IntMap tmp = this->mouse_button_released;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		int tmp1 = button;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(270)
		tmp->set(tmp1,false);
		HX_STACK_LINE(272)
		::haxe::ds::IntMap tmp2 = this->mouse_button_down;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(272)
		int tmp3 = button;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(272)
		tmp2->remove(tmp3);
		HX_STACK_LINE(274)
		{
			HX_STACK_LINE(274)
			::snow::types::MouseEvent tmp4 = this->mouse_event;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(274)
			::snow::types::MouseEvent _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(274)
			_this->type = (int)3;
			HX_STACK_LINE(274)
			_this->x = x;
			HX_STACK_LINE(274)
			_this->y = y;
			HX_STACK_LINE(274)
			_this->x_rel = (int)0;
			HX_STACK_LINE(274)
			_this->y_rel = (int)0;
			HX_STACK_LINE(274)
			_this->button = button;
			HX_STACK_LINE(274)
			_this->wheel_x = (int)0;
			HX_STACK_LINE(274)
			_this->wheel_y = (int)0;
		}
		HX_STACK_LINE(275)
		{
			HX_STACK_LINE(275)
			::snow::types::InputEvent tmp4 = this->event;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(275)
			::snow::types::InputEvent _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(275)
			{
				HX_STACK_LINE(275)
				_this->type = (int)3;
				HX_STACK_LINE(275)
				_this->key = null();
				HX_STACK_LINE(275)
				_this->text = null();
				HX_STACK_LINE(275)
				_this->mouse = null();
				HX_STACK_LINE(275)
				_this->touch = null();
				HX_STACK_LINE(275)
				_this->gamepad = null();
				HX_STACK_LINE(275)
				_this->window_id = window_id;
				HX_STACK_LINE(275)
				_this->timestamp = timestamp;
			}
			HX_STACK_LINE(275)
			::snow::types::MouseEvent tmp5 = this->mouse_event;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(275)
			_this->mouse = tmp5;
		}
		HX_STACK_LINE(276)
		::snow::Snow tmp4 = this->app;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(276)
		::snow::types::InputEvent tmp5 = this->event;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(276)
		tmp4->dispatch_input_event(tmp5);
		HX_STACK_LINE(279)
		::snow::Snow tmp6 = this->app;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(279)
		int tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(279)
		int tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(279)
		int tmp9 = button;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(279)
		Float tmp10 = timestamp;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(279)
		int tmp11 = window_id;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(279)
		tmp6->host->onmouseup(tmp7,tmp8,tmp9,tmp10,tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Input_obj,dispatch_mouse_up_event,(void))

Void Input_obj::dispatch_mouse_wheel_event( Float x,Float y,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.systems.input.Input","dispatch_mouse_wheel_event",0x60e548d4,"snow.systems.input.Input.dispatch_mouse_wheel_event","snow/systems/input/Input.hx",284,0x9abd6a90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(286)
		{
			HX_STACK_LINE(286)
			::snow::types::MouseEvent tmp = this->mouse_event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(286)
			::snow::types::MouseEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(286)
			_this->type = (int)4;
			HX_STACK_LINE(286)
			_this->x = (int)0;
			HX_STACK_LINE(286)
			_this->y = (int)0;
			HX_STACK_LINE(286)
			_this->x_rel = (int)0;
			HX_STACK_LINE(286)
			_this->y_rel = (int)0;
			HX_STACK_LINE(286)
			_this->button = (int)0;
			HX_STACK_LINE(286)
			_this->wheel_x = x;
			HX_STACK_LINE(286)
			_this->wheel_y = y;
		}
		HX_STACK_LINE(287)
		{
			HX_STACK_LINE(287)
			::snow::types::InputEvent tmp = this->event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(287)
			::snow::types::InputEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(287)
			{
				HX_STACK_LINE(287)
				_this->type = (int)3;
				HX_STACK_LINE(287)
				_this->key = null();
				HX_STACK_LINE(287)
				_this->text = null();
				HX_STACK_LINE(287)
				_this->mouse = null();
				HX_STACK_LINE(287)
				_this->touch = null();
				HX_STACK_LINE(287)
				_this->gamepad = null();
				HX_STACK_LINE(287)
				_this->window_id = window_id;
				HX_STACK_LINE(287)
				_this->timestamp = timestamp;
			}
			HX_STACK_LINE(287)
			::snow::types::MouseEvent tmp1 = this->mouse_event;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(287)
			_this->mouse = tmp1;
		}
		HX_STACK_LINE(288)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(288)
		::snow::types::InputEvent tmp1 = this->event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(288)
		tmp->dispatch_input_event(tmp1);
		HX_STACK_LINE(290)
		::snow::Snow tmp2 = this->app;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(290)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(290)
		Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(290)
		Float tmp5 = timestamp;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(290)
		int tmp6 = window_id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(290)
		tmp2->host->onmousewheel(tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,dispatch_mouse_wheel_event,(void))

Void Input_obj::dispatch_touch_down_event( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("snow.systems.input.Input","dispatch_touch_down_event",0x6c1d2d05,"snow.systems.input.Input.dispatch_touch_down_event","snow/systems/input/Input.hx",295,0x9abd6a90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(297)
		::haxe::ds::IntMap tmp = this->touches_down;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(297)
		int tmp1 = touch_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(297)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(297)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(297)
		if ((tmp3)){
			HX_STACK_LINE(298)
			(this->touch_count)++;
			HX_STACK_LINE(299)
			::haxe::ds::IntMap tmp4 = this->touches_down;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(299)
			int tmp5 = touch_id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(299)
			tmp4->set(tmp5,true);
		}
		HX_STACK_LINE(302)
		{
			HX_STACK_LINE(302)
			::snow::types::TouchEvent tmp4 = this->touch_event;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(302)
			::snow::types::TouchEvent _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(302)
			_this->type = (int)2;
			HX_STACK_LINE(302)
			_this->touch_id = touch_id;
			HX_STACK_LINE(302)
			_this->x = x;
			HX_STACK_LINE(302)
			_this->y = y;
			HX_STACK_LINE(302)
			_this->dx = dx;
			HX_STACK_LINE(302)
			_this->dy = dy;
		}
		HX_STACK_LINE(303)
		{
			HX_STACK_LINE(303)
			::snow::types::InputEvent tmp4 = this->event;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(303)
			::snow::types::InputEvent _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(303)
				_this->type = (int)4;
				HX_STACK_LINE(303)
				_this->key = null();
				HX_STACK_LINE(303)
				_this->text = null();
				HX_STACK_LINE(303)
				_this->mouse = null();
				HX_STACK_LINE(303)
				_this->touch = null();
				HX_STACK_LINE(303)
				_this->gamepad = null();
				HX_STACK_LINE(303)
				_this->window_id = (int)0;
				HX_STACK_LINE(303)
				_this->timestamp = timestamp;
			}
			HX_STACK_LINE(303)
			::snow::types::TouchEvent tmp5 = this->touch_event;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(303)
			_this->touch = tmp5;
		}
		HX_STACK_LINE(304)
		::snow::Snow tmp4 = this->app;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(304)
		::snow::types::InputEvent tmp5 = this->event;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(304)
		tmp4->dispatch_input_event(tmp5);
		HX_STACK_LINE(306)
		::snow::Snow tmp6 = this->app;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(306)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(306)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(306)
		Float tmp9 = dx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(306)
		Float tmp10 = dy;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(306)
		int tmp11 = touch_id;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(306)
		Float tmp12 = timestamp;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(306)
		tmp6->host->ontouchdown(tmp7,tmp8,tmp9,tmp10,tmp11,tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,dispatch_touch_down_event,(void))

Void Input_obj::dispatch_touch_up_event( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("snow.systems.input.Input","dispatch_touch_up_event",0xa442d9be,"snow.systems.input.Input.dispatch_touch_up_event","snow/systems/input/Input.hx",311,0x9abd6a90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(313)
		{
			HX_STACK_LINE(313)
			::snow::types::TouchEvent tmp = this->touch_event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(313)
			::snow::types::TouchEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(313)
			_this->type = (int)3;
			HX_STACK_LINE(313)
			_this->touch_id = touch_id;
			HX_STACK_LINE(313)
			_this->x = x;
			HX_STACK_LINE(313)
			_this->y = y;
			HX_STACK_LINE(313)
			_this->dx = dx;
			HX_STACK_LINE(313)
			_this->dy = dy;
		}
		HX_STACK_LINE(314)
		{
			HX_STACK_LINE(314)
			::snow::types::InputEvent tmp = this->event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(314)
			::snow::types::InputEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(314)
			{
				HX_STACK_LINE(314)
				_this->type = (int)4;
				HX_STACK_LINE(314)
				_this->key = null();
				HX_STACK_LINE(314)
				_this->text = null();
				HX_STACK_LINE(314)
				_this->mouse = null();
				HX_STACK_LINE(314)
				_this->touch = null();
				HX_STACK_LINE(314)
				_this->gamepad = null();
				HX_STACK_LINE(314)
				_this->window_id = (int)0;
				HX_STACK_LINE(314)
				_this->timestamp = timestamp;
			}
			HX_STACK_LINE(314)
			::snow::types::TouchEvent tmp1 = this->touch_event;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(314)
			_this->touch = tmp1;
		}
		HX_STACK_LINE(315)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(315)
		::snow::types::InputEvent tmp1 = this->event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(315)
		tmp->dispatch_input_event(tmp1);
		HX_STACK_LINE(317)
		::snow::Snow tmp2 = this->app;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(317)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(317)
		Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(317)
		Float tmp5 = dx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(317)
		Float tmp6 = dy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(317)
		int tmp7 = touch_id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(317)
		Float tmp8 = timestamp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(317)
		tmp2->host->ontouchup(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
		HX_STACK_LINE(319)
		::haxe::ds::IntMap tmp9 = this->touches_down;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(319)
		int tmp10 = touch_id;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(319)
		bool tmp11 = tmp9->remove(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(319)
		if ((tmp11)){
			HX_STACK_LINE(320)
			(this->touch_count)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,dispatch_touch_up_event,(void))

Void Input_obj::dispatch_touch_move_event( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("snow.systems.input.Input","dispatch_touch_move_event",0x7f47c4f4,"snow.systems.input.Input.dispatch_touch_move_event","snow/systems/input/Input.hx",326,0x9abd6a90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(328)
		{
			HX_STACK_LINE(328)
			::snow::types::TouchEvent tmp = this->touch_event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(328)
			::snow::types::TouchEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(328)
			_this->type = (int)1;
			HX_STACK_LINE(328)
			_this->touch_id = touch_id;
			HX_STACK_LINE(328)
			_this->x = x;
			HX_STACK_LINE(328)
			_this->y = y;
			HX_STACK_LINE(328)
			_this->dx = dx;
			HX_STACK_LINE(328)
			_this->dy = dy;
		}
		HX_STACK_LINE(329)
		{
			HX_STACK_LINE(329)
			::snow::types::InputEvent tmp = this->event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(329)
			::snow::types::InputEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(329)
			{
				HX_STACK_LINE(329)
				_this->type = (int)4;
				HX_STACK_LINE(329)
				_this->key = null();
				HX_STACK_LINE(329)
				_this->text = null();
				HX_STACK_LINE(329)
				_this->mouse = null();
				HX_STACK_LINE(329)
				_this->touch = null();
				HX_STACK_LINE(329)
				_this->gamepad = null();
				HX_STACK_LINE(329)
				_this->window_id = (int)0;
				HX_STACK_LINE(329)
				_this->timestamp = timestamp;
			}
			HX_STACK_LINE(329)
			::snow::types::TouchEvent tmp1 = this->touch_event;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(329)
			_this->touch = tmp1;
		}
		HX_STACK_LINE(330)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(330)
		::snow::types::InputEvent tmp1 = this->event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(330)
		tmp->dispatch_input_event(tmp1);
		HX_STACK_LINE(332)
		::snow::Snow tmp2 = this->app;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(332)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(332)
		Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(332)
		Float tmp5 = dx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(332)
		Float tmp6 = dy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(332)
		int tmp7 = touch_id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(332)
		Float tmp8 = timestamp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(332)
		tmp2->host->ontouchmove(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,dispatch_touch_move_event,(void))

Void Input_obj::dispatch_gamepad_axis_event( int gamepad,int axis,Float value,Float timestamp){
{
		HX_STACK_FRAME("snow.systems.input.Input","dispatch_gamepad_axis_event",0x06ce9ae2,"snow.systems.input.Input.dispatch_gamepad_axis_event","snow/systems/input/Input.hx",337,0x9abd6a90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(339)
		{
			HX_STACK_LINE(339)
			::haxe::ds::IntMap tmp = this->gamepad_axis_values;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(339)
			int tmp1 = gamepad;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(339)
			bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(339)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(339)
			if ((tmp3)){
				HX_STACK_LINE(339)
				::String tmp4 = (HX_HCSTRING("gamepad with id ","\x2a","\x6c","\x0a","\x11") + gamepad);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(339)
				::String tmp5 = (tmp4 + HX_HCSTRING(" not pre-inited? Is gamepad_init_count too low, or the gamepad id not sequential from 0?","\xb4","\xc1","\x81","\xa4"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(214)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(214)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(339)
				::String tmp8 = (HX_HCSTRING("gamepad_axis_values.exists(gamepad)","\xe8","\x5d","\x72","\x49") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(339)
				::snow::api::DebugError tmp9 = ::snow::api::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(339)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(342)
		{
			HX_STACK_LINE(342)
			::haxe::ds::IntMap tmp = this->gamepad_axis_values;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(342)
			int tmp1 = gamepad;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(342)
			::haxe::ds::IntMap tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(342)
			::haxe::IMap this1 = tmp2;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(342)
			int tmp3 = axis;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(342)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(342)
			this1->set(tmp3,tmp4);
		}
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			::snow::types::GamepadEvent tmp = this->gamepad_event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(344)
			::snow::types::GamepadEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(344)
			_this->button = null();
			HX_STACK_LINE(344)
			_this->device_id = null();
			HX_STACK_LINE(344)
			_this->device_event = null();
			HX_STACK_LINE(344)
			_this->axis = axis;
			HX_STACK_LINE(344)
			_this->value = value;
			HX_STACK_LINE(344)
			_this->type = (int)1;
			HX_STACK_LINE(344)
			_this->gamepad = gamepad;
		}
		HX_STACK_LINE(345)
		{
			HX_STACK_LINE(345)
			::snow::types::InputEvent tmp = this->event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(345)
			::snow::types::InputEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(345)
			{
				HX_STACK_LINE(345)
				_this->type = (int)5;
				HX_STACK_LINE(345)
				_this->key = null();
				HX_STACK_LINE(345)
				_this->text = null();
				HX_STACK_LINE(345)
				_this->mouse = null();
				HX_STACK_LINE(345)
				_this->touch = null();
				HX_STACK_LINE(345)
				_this->gamepad = null();
				HX_STACK_LINE(345)
				_this->window_id = (int)0;
				HX_STACK_LINE(345)
				_this->timestamp = timestamp;
			}
			HX_STACK_LINE(345)
			::snow::types::GamepadEvent tmp1 = this->gamepad_event;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(345)
			_this->gamepad = tmp1;
		}
		HX_STACK_LINE(346)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(346)
		::snow::types::InputEvent tmp1 = this->event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(346)
		tmp->dispatch_input_event(tmp1);
		HX_STACK_LINE(348)
		::snow::Snow tmp2 = this->app;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(348)
		int tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(348)
		int tmp4 = axis;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(348)
		Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(348)
		Float tmp6 = timestamp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(348)
		tmp2->host->ongamepadaxis(tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,dispatch_gamepad_axis_event,(void))

Void Input_obj::dispatch_gamepad_button_down_event( int gamepad,int button,Float value,Float timestamp){
{
		HX_STACK_FRAME("snow.systems.input.Input","dispatch_gamepad_button_down_event",0xe2ec5a44,"snow.systems.input.Input.dispatch_gamepad_button_down_event","snow/systems/input/Input.hx",353,0x9abd6a90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(355)
		{
			HX_STACK_LINE(355)
			::haxe::ds::IntMap tmp = this->gamepad_button_pressed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(355)
			int tmp1 = gamepad;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(355)
			bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(355)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(355)
			if ((tmp3)){
				HX_STACK_LINE(355)
				::String tmp4 = (HX_HCSTRING("gamepad with id ","\x2a","\x6c","\x0a","\x11") + gamepad);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(355)
				::String tmp5 = (tmp4 + HX_HCSTRING(" not pre-inited? Is gamepad_init_count too low, or the gamepad id not sequential from 0?","\xb4","\xc1","\x81","\xa4"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(214)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(214)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(355)
				::String tmp8 = (HX_HCSTRING("gamepad_button_pressed.exists(gamepad)","\xf9","\xa9","\xbc","\x27") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(355)
				::snow::api::DebugError tmp9 = ::snow::api::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(355)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(356)
		{
			HX_STACK_LINE(356)
			::haxe::ds::IntMap tmp = this->gamepad_button_down;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(356)
			int tmp1 = gamepad;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(356)
			bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(356)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(356)
			if ((tmp3)){
				HX_STACK_LINE(356)
				::String tmp4 = (HX_HCSTRING("gamepad with id ","\x2a","\x6c","\x0a","\x11") + gamepad);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(356)
				::String tmp5 = (tmp4 + HX_HCSTRING(" not pre-inited? Is gamepad_init_count too low, or the gamepad id not sequential from 0?","\xb4","\xc1","\x81","\xa4"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(214)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(214)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(356)
				::String tmp8 = (HX_HCSTRING("gamepad_button_down.exists(gamepad)","\xf7","\xd1","\xd9","\x6e") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(356)
				::snow::api::DebugError tmp9 = ::snow::api::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(356)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(359)
		{
			HX_STACK_LINE(359)
			::haxe::ds::IntMap tmp = this->gamepad_button_pressed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(359)
			int tmp1 = gamepad;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(359)
			::haxe::ds::IntMap tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(359)
			::haxe::IMap this1 = tmp2;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(359)
			int tmp3 = button;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(359)
			this1->set(tmp3,false);
		}
		HX_STACK_LINE(361)
		{
			HX_STACK_LINE(361)
			::haxe::ds::IntMap tmp = this->gamepad_button_down;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(361)
			int tmp1 = gamepad;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(361)
			::haxe::ds::IntMap tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(361)
			::haxe::IMap this1 = tmp2;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(361)
			int tmp3 = button;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(361)
			this1->set(tmp3,true);
		}
		HX_STACK_LINE(363)
		{
			HX_STACK_LINE(363)
			::snow::types::GamepadEvent tmp = this->gamepad_event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(363)
			::snow::types::GamepadEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(363)
			_this->axis = null();
			HX_STACK_LINE(363)
			_this->device_id = null();
			HX_STACK_LINE(363)
			_this->device_event = null();
			HX_STACK_LINE(363)
			_this->type = (int)2;
			HX_STACK_LINE(363)
			_this->value = value;
			HX_STACK_LINE(363)
			_this->button = button;
			HX_STACK_LINE(363)
			_this->gamepad = gamepad;
		}
		HX_STACK_LINE(364)
		{
			HX_STACK_LINE(364)
			::snow::types::InputEvent tmp = this->event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(364)
			::snow::types::InputEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(364)
			{
				HX_STACK_LINE(364)
				_this->type = (int)5;
				HX_STACK_LINE(364)
				_this->key = null();
				HX_STACK_LINE(364)
				_this->text = null();
				HX_STACK_LINE(364)
				_this->mouse = null();
				HX_STACK_LINE(364)
				_this->touch = null();
				HX_STACK_LINE(364)
				_this->gamepad = null();
				HX_STACK_LINE(364)
				_this->window_id = (int)0;
				HX_STACK_LINE(364)
				_this->timestamp = timestamp;
			}
			HX_STACK_LINE(364)
			::snow::types::GamepadEvent tmp1 = this->gamepad_event;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(364)
			_this->gamepad = tmp1;
		}
		HX_STACK_LINE(365)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(365)
		::snow::types::InputEvent tmp1 = this->event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(365)
		tmp->dispatch_input_event(tmp1);
		HX_STACK_LINE(367)
		::snow::Snow tmp2 = this->app;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(367)
		int tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(367)
		int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(367)
		Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(367)
		Float tmp6 = timestamp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(367)
		tmp2->host->ongamepaddown(tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,dispatch_gamepad_button_down_event,(void))

Void Input_obj::dispatch_gamepad_button_up_event( int gamepad,int button,Float value,Float timestamp){
{
		HX_STACK_FRAME("snow.systems.input.Input","dispatch_gamepad_button_up_event",0x420fe93d,"snow.systems.input.Input.dispatch_gamepad_button_up_event","snow/systems/input/Input.hx",372,0x9abd6a90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(374)
		{
			HX_STACK_LINE(374)
			::haxe::ds::IntMap tmp = this->gamepad_button_released;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(374)
			int tmp1 = gamepad;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(374)
			bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(374)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(374)
			if ((tmp3)){
				HX_STACK_LINE(374)
				::String tmp4 = (HX_HCSTRING("gamepad with id ","\x2a","\x6c","\x0a","\x11") + gamepad);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(374)
				::String tmp5 = (tmp4 + HX_HCSTRING(" not pre-inited? Is gamepad_init_count too low, or the gamepad id not sequential from 0?","\xb4","\xc1","\x81","\xa4"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(214)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(214)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(374)
				::String tmp8 = (HX_HCSTRING("gamepad_button_released.exists(gamepad)","\xd2","\x1b","\x24","\x2b") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(374)
				::snow::api::DebugError tmp9 = ::snow::api::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(374)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(375)
		{
			HX_STACK_LINE(375)
			::haxe::ds::IntMap tmp = this->gamepad_button_down;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(375)
			int tmp1 = gamepad;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(375)
			bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(375)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(375)
			if ((tmp3)){
				HX_STACK_LINE(375)
				::String tmp4 = (HX_HCSTRING("gamepad with id ","\x2a","\x6c","\x0a","\x11") + gamepad);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(375)
				::String tmp5 = (tmp4 + HX_HCSTRING(" not pre-inited? Is gamepad_init_count too low, or the gamepad id not sequential from 0?","\xb4","\xc1","\x81","\xa4"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(214)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(214)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(375)
				::String tmp8 = (HX_HCSTRING("gamepad_button_down.exists(gamepad)","\xf7","\xd1","\xd9","\x6e") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(375)
				::snow::api::DebugError tmp9 = ::snow::api::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(375)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(378)
		{
			HX_STACK_LINE(378)
			::haxe::ds::IntMap tmp = this->gamepad_button_released;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(378)
			int tmp1 = gamepad;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(378)
			::haxe::ds::IntMap tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(378)
			::haxe::IMap this1 = tmp2;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(378)
			int tmp3 = button;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(378)
			this1->set(tmp3,false);
		}
		HX_STACK_LINE(380)
		{
			HX_STACK_LINE(380)
			::haxe::ds::IntMap tmp = this->gamepad_button_down;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(380)
			int tmp1 = gamepad;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(380)
			::haxe::ds::IntMap tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(380)
			::haxe::IMap this1 = tmp2;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(380)
			int tmp3 = button;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(380)
			this1->remove(tmp3);
		}
		HX_STACK_LINE(382)
		{
			HX_STACK_LINE(382)
			::snow::types::GamepadEvent tmp = this->gamepad_event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(382)
			::snow::types::GamepadEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(382)
			_this->axis = null();
			HX_STACK_LINE(382)
			_this->device_id = null();
			HX_STACK_LINE(382)
			_this->device_event = null();
			HX_STACK_LINE(382)
			_this->type = (int)3;
			HX_STACK_LINE(382)
			_this->value = value;
			HX_STACK_LINE(382)
			_this->button = button;
			HX_STACK_LINE(382)
			_this->gamepad = gamepad;
		}
		HX_STACK_LINE(383)
		{
			HX_STACK_LINE(383)
			::snow::types::InputEvent tmp = this->event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(383)
			::snow::types::InputEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(383)
			{
				HX_STACK_LINE(383)
				_this->type = (int)5;
				HX_STACK_LINE(383)
				_this->key = null();
				HX_STACK_LINE(383)
				_this->text = null();
				HX_STACK_LINE(383)
				_this->mouse = null();
				HX_STACK_LINE(383)
				_this->touch = null();
				HX_STACK_LINE(383)
				_this->gamepad = null();
				HX_STACK_LINE(383)
				_this->window_id = (int)0;
				HX_STACK_LINE(383)
				_this->timestamp = timestamp;
			}
			HX_STACK_LINE(383)
			::snow::types::GamepadEvent tmp1 = this->gamepad_event;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(383)
			_this->gamepad = tmp1;
		}
		HX_STACK_LINE(384)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(384)
		::snow::types::InputEvent tmp1 = this->event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(384)
		tmp->dispatch_input_event(tmp1);
		HX_STACK_LINE(386)
		::snow::Snow tmp2 = this->app;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(386)
		int tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(386)
		int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(386)
		Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(386)
		Float tmp6 = timestamp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(386)
		tmp2->host->ongamepadup(tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,dispatch_gamepad_button_up_event,(void))

Void Input_obj::dispatch_gamepad_device_event( int gamepad,::String id,int type,Float timestamp){
{
		HX_STACK_FRAME("snow.systems.input.Input","dispatch_gamepad_device_event",0xbebe1617,"snow.systems.input.Input.dispatch_gamepad_device_event","snow/systems/input/Input.hx",391,0x9abd6a90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(393)
		{
			HX_STACK_LINE(393)
			::snow::types::GamepadEvent tmp = this->gamepad_event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(393)
			::snow::types::GamepadEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(393)
			_this->axis = null();
			HX_STACK_LINE(393)
			_this->value = null();
			HX_STACK_LINE(393)
			_this->button = null();
			HX_STACK_LINE(393)
			_this->device_id = id;
			HX_STACK_LINE(393)
			_this->device_event = type;
			HX_STACK_LINE(393)
			_this->gamepad = gamepad;
			HX_STACK_LINE(393)
			_this->type = (int)4;
		}
		HX_STACK_LINE(394)
		{
			HX_STACK_LINE(394)
			::snow::types::InputEvent tmp = this->event;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(394)
			::snow::types::InputEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(394)
			{
				HX_STACK_LINE(394)
				_this->type = (int)5;
				HX_STACK_LINE(394)
				_this->key = null();
				HX_STACK_LINE(394)
				_this->text = null();
				HX_STACK_LINE(394)
				_this->mouse = null();
				HX_STACK_LINE(394)
				_this->touch = null();
				HX_STACK_LINE(394)
				_this->gamepad = null();
				HX_STACK_LINE(394)
				_this->window_id = (int)0;
				HX_STACK_LINE(394)
				_this->timestamp = timestamp;
			}
			HX_STACK_LINE(394)
			::snow::types::GamepadEvent tmp1 = this->gamepad_event;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(394)
			_this->gamepad = tmp1;
		}
		HX_STACK_LINE(395)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(395)
		::snow::types::InputEvent tmp1 = this->event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(395)
		tmp->dispatch_input_event(tmp1);
		HX_STACK_LINE(397)
		::snow::Snow tmp2 = this->app;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(397)
		int tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(397)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(397)
		int tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(397)
		Float tmp6 = timestamp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(397)
		tmp2->host->ongamepaddevice(tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,dispatch_gamepad_device_event,(void))

Void Input_obj::onevent( ::snow::types::SystemEvent _event){
{
		HX_STACK_FRAME("snow.systems.input.Input","onevent",0x1a64e37e,"snow.systems.input.Input.onevent","snow/systems/input/Input.hx",404,0x9abd6a90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(406)
		bool tmp = (_event->type == (int)3);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(406)
		if ((tmp)){
			HX_STACK_LINE(407)
			this->_update_keystate();
			HX_STACK_LINE(408)
			this->_update_gamepadstate();
			HX_STACK_LINE(409)
			this->_update_mousestate();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onevent,(void))

Void Input_obj::_update_mousestate( ){
{
		HX_STACK_FRAME("snow.systems.input.Input","_update_mousestate",0x351f4840,"snow.systems.input.Input._update_mousestate","snow/systems/input/Input.hx",418,0x9abd6a90)
		HX_STACK_THIS(this)
		HX_STACK_LINE(420)
		::haxe::ds::IntMap tmp = this->mouse_button_pressed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(420)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(420)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp1);  __it->hasNext(); ){
			int _code = __it->next();
			{
				HX_STACK_LINE(422)
				::haxe::ds::IntMap tmp2 = this->mouse_button_pressed;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(422)
				int tmp3 = _code;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(422)
				Dynamic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(422)
				Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(422)
				if ((tmp5)){
					HX_STACK_LINE(423)
					::haxe::ds::IntMap tmp6 = this->mouse_button_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(423)
					int tmp7 = _code;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(423)
					tmp6->remove(tmp7);
				}
				else{
					HX_STACK_LINE(425)
					::haxe::ds::IntMap tmp6 = this->mouse_button_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(425)
					int tmp7 = _code;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(425)
					tmp6->set(tmp7,true);
				}
			}
;
		}
		HX_STACK_LINE(430)
		::haxe::ds::IntMap tmp2 = this->mouse_button_released;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(430)
		Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(430)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp3);  __it->hasNext(); ){
			int _code = __it->next();
			{
				HX_STACK_LINE(432)
				::haxe::ds::IntMap tmp4 = this->mouse_button_released;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(432)
				int tmp5 = _code;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(432)
				Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(432)
				Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(432)
				if ((tmp7)){
					HX_STACK_LINE(433)
					::haxe::ds::IntMap tmp8 = this->mouse_button_released;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(433)
					int tmp9 = _code;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(433)
					tmp8->remove(tmp9);
				}
				else{
					HX_STACK_LINE(435)
					::haxe::ds::IntMap tmp8 = this->mouse_button_released;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(435)
					int tmp9 = _code;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(435)
					tmp8->set(tmp9,true);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,_update_mousestate,(void))

Void Input_obj::_update_gamepadstate( ){
{
		HX_STACK_FRAME("snow.systems.input.Input","_update_gamepadstate",0x8faa8144,"snow.systems.input.Input._update_gamepadstate","snow/systems/input/Input.hx",443,0x9abd6a90)
		HX_STACK_THIS(this)
		HX_STACK_LINE(445)
		::haxe::ds::IntMap tmp = this->gamepad_button_pressed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(445)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(445)
		for(::cpp::FastIterator_obj< ::haxe::ds::IntMap > *__it = ::cpp::CreateFastIterator< ::haxe::ds::IntMap >(tmp1);  __it->hasNext(); ){
			::haxe::ds::IntMap _gamepad_pressed = __it->next();
			{
				HX_STACK_LINE(446)
				Dynamic tmp2 = _gamepad_pressed->keys();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(446)
				for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp2);  __it->hasNext(); ){
					int _button = __it->next();
					{
						HX_STACK_LINE(448)
						int tmp3 = _button;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(448)
						Dynamic tmp4 = _gamepad_pressed->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(448)
						Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(448)
						if ((tmp5)){
							HX_STACK_LINE(449)
							int tmp6 = _button;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(449)
							_gamepad_pressed->remove(tmp6);
						}
						else{
							HX_STACK_LINE(451)
							int tmp6 = _button;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(451)
							_gamepad_pressed->set(tmp6,true);
						}
					}
;
				}
			}
;
		}
		HX_STACK_LINE(457)
		::haxe::ds::IntMap tmp2 = this->gamepad_button_released;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(457)
		Dynamic tmp3 = tmp2->iterator();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(457)
		for(::cpp::FastIterator_obj< ::haxe::ds::IntMap > *__it = ::cpp::CreateFastIterator< ::haxe::ds::IntMap >(tmp3);  __it->hasNext(); ){
			::haxe::ds::IntMap _gamepad_released = __it->next();
			{
				HX_STACK_LINE(458)
				Dynamic tmp4 = _gamepad_released->keys();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(458)
				for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp4);  __it->hasNext(); ){
					int _button = __it->next();
					{
						HX_STACK_LINE(460)
						int tmp5 = _button;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(460)
						Dynamic tmp6 = _gamepad_released->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(460)
						Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(460)
						if ((tmp7)){
							HX_STACK_LINE(461)
							int tmp8 = _button;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(461)
							_gamepad_released->remove(tmp8);
						}
						else{
							HX_STACK_LINE(463)
							int tmp8 = _button;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(463)
							_gamepad_released->set(tmp8,true);
						}
					}
;
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,_update_gamepadstate,(void))

Void Input_obj::_update_keystate( ){
{
		HX_STACK_FRAME("snow.systems.input.Input","_update_keystate",0x728fb586,"snow.systems.input.Input._update_keystate","snow/systems/input/Input.hx",472,0x9abd6a90)
		HX_STACK_THIS(this)
		HX_STACK_LINE(477)
		::haxe::ds::IntMap tmp = this->key_code_pressed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(477)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(477)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp1);  __it->hasNext(); ){
			int _code = __it->next();
			{
				HX_STACK_LINE(479)
				::haxe::ds::IntMap tmp2 = this->key_code_pressed;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(479)
				int tmp3 = _code;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(479)
				Dynamic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(479)
				Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(479)
				if ((tmp5)){
					HX_STACK_LINE(480)
					::haxe::ds::IntMap tmp6 = this->key_code_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(480)
					int tmp7 = _code;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(480)
					tmp6->remove(tmp7);
				}
				else{
					HX_STACK_LINE(482)
					::haxe::ds::IntMap tmp6 = this->key_code_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(482)
					int tmp7 = _code;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(482)
					tmp6->set(tmp7,true);
				}
			}
;
		}
		HX_STACK_LINE(490)
		::haxe::ds::IntMap tmp2 = this->key_code_released;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(490)
		Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(490)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp3);  __it->hasNext(); ){
			int _code = __it->next();
			{
				HX_STACK_LINE(492)
				::haxe::ds::IntMap tmp4 = this->key_code_released;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(492)
				int tmp5 = _code;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(492)
				Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(492)
				Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(492)
				if ((tmp7)){
					HX_STACK_LINE(493)
					::haxe::ds::IntMap tmp8 = this->key_code_released;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(493)
					int tmp9 = _code;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(493)
					tmp8->remove(tmp9);
				}
				else{
					HX_STACK_LINE(495)
					::haxe::ds::IntMap tmp8 = this->key_code_released;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(495)
					int tmp9 = _code;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(495)
					tmp8->set(tmp9,true);
				}
			}
;
		}
		HX_STACK_LINE(505)
		::haxe::ds::IntMap tmp4 = this->scan_code_pressed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(505)
		Dynamic tmp5 = tmp4->keys();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(505)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp5);  __it->hasNext(); ){
			int _code = __it->next();
			{
				HX_STACK_LINE(507)
				::haxe::ds::IntMap tmp6 = this->scan_code_pressed;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(507)
				int tmp7 = _code;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(507)
				Dynamic tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(507)
				Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(507)
				if ((tmp9)){
					HX_STACK_LINE(508)
					::haxe::ds::IntMap tmp10 = this->scan_code_pressed;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(508)
					int tmp11 = _code;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(508)
					tmp10->remove(tmp11);
				}
				else{
					HX_STACK_LINE(510)
					::haxe::ds::IntMap tmp10 = this->scan_code_pressed;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(510)
					int tmp11 = _code;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(510)
					tmp10->set(tmp11,true);
				}
			}
;
		}
		HX_STACK_LINE(518)
		::haxe::ds::IntMap tmp6 = this->scan_code_released;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(518)
		Dynamic tmp7 = tmp6->keys();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(518)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp7);  __it->hasNext(); ){
			int _code = __it->next();
			{
				HX_STACK_LINE(520)
				::haxe::ds::IntMap tmp8 = this->scan_code_released;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(520)
				int tmp9 = _code;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(520)
				Dynamic tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(520)
				Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(520)
				if ((tmp11)){
					HX_STACK_LINE(521)
					::haxe::ds::IntMap tmp12 = this->scan_code_released;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(521)
					int tmp13 = _code;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(521)
					tmp12->remove(tmp13);
				}
				else{
					HX_STACK_LINE(523)
					::haxe::ds::IntMap tmp12 = this->scan_code_released;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(523)
					int tmp13 = _code;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(523)
					tmp12->set(tmp13,true);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,_update_keystate,(void))


Input_obj::Input_obj()
{
}

void Input_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Input);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(gamepad_init_count,"gamepad_init_count");
	HX_MARK_MEMBER_NAME(event,"event");
	HX_MARK_MEMBER_NAME(key_event,"key_event");
	HX_MARK_MEMBER_NAME(text_event,"text_event");
	HX_MARK_MEMBER_NAME(mouse_event,"mouse_event");
	HX_MARK_MEMBER_NAME(touch_event,"touch_event");
	HX_MARK_MEMBER_NAME(gamepad_event,"gamepad_event");
	HX_MARK_MEMBER_NAME(mod_state,"mod_state");
	HX_MARK_MEMBER_NAME(key_code_down,"key_code_down");
	HX_MARK_MEMBER_NAME(key_code_pressed,"key_code_pressed");
	HX_MARK_MEMBER_NAME(key_code_released,"key_code_released");
	HX_MARK_MEMBER_NAME(scan_code_down,"scan_code_down");
	HX_MARK_MEMBER_NAME(scan_code_pressed,"scan_code_pressed");
	HX_MARK_MEMBER_NAME(scan_code_released,"scan_code_released");
	HX_MARK_MEMBER_NAME(mouse_button_down,"mouse_button_down");
	HX_MARK_MEMBER_NAME(mouse_button_pressed,"mouse_button_pressed");
	HX_MARK_MEMBER_NAME(mouse_button_released,"mouse_button_released");
	HX_MARK_MEMBER_NAME(gamepad_button_down,"gamepad_button_down");
	HX_MARK_MEMBER_NAME(gamepad_button_pressed,"gamepad_button_pressed");
	HX_MARK_MEMBER_NAME(gamepad_button_released,"gamepad_button_released");
	HX_MARK_MEMBER_NAME(gamepad_axis_values,"gamepad_axis_values");
	HX_MARK_MEMBER_NAME(touch_count,"touch_count");
	HX_MARK_MEMBER_NAME(touches_down,"touches_down");
	HX_MARK_END_CLASS();
}

void Input_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(gamepad_init_count,"gamepad_init_count");
	HX_VISIT_MEMBER_NAME(event,"event");
	HX_VISIT_MEMBER_NAME(key_event,"key_event");
	HX_VISIT_MEMBER_NAME(text_event,"text_event");
	HX_VISIT_MEMBER_NAME(mouse_event,"mouse_event");
	HX_VISIT_MEMBER_NAME(touch_event,"touch_event");
	HX_VISIT_MEMBER_NAME(gamepad_event,"gamepad_event");
	HX_VISIT_MEMBER_NAME(mod_state,"mod_state");
	HX_VISIT_MEMBER_NAME(key_code_down,"key_code_down");
	HX_VISIT_MEMBER_NAME(key_code_pressed,"key_code_pressed");
	HX_VISIT_MEMBER_NAME(key_code_released,"key_code_released");
	HX_VISIT_MEMBER_NAME(scan_code_down,"scan_code_down");
	HX_VISIT_MEMBER_NAME(scan_code_pressed,"scan_code_pressed");
	HX_VISIT_MEMBER_NAME(scan_code_released,"scan_code_released");
	HX_VISIT_MEMBER_NAME(mouse_button_down,"mouse_button_down");
	HX_VISIT_MEMBER_NAME(mouse_button_pressed,"mouse_button_pressed");
	HX_VISIT_MEMBER_NAME(mouse_button_released,"mouse_button_released");
	HX_VISIT_MEMBER_NAME(gamepad_button_down,"gamepad_button_down");
	HX_VISIT_MEMBER_NAME(gamepad_button_pressed,"gamepad_button_pressed");
	HX_VISIT_MEMBER_NAME(gamepad_button_released,"gamepad_button_released");
	HX_VISIT_MEMBER_NAME(gamepad_axis_values,"gamepad_axis_values");
	HX_VISIT_MEMBER_NAME(touch_count,"touch_count");
	HX_VISIT_MEMBER_NAME(touches_down,"touches_down");
}

Dynamic Input_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { return event; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"onevent") ) { return onevent_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shutdown") ) { return shutdown_dyn(); }
		if (HX_FIELD_EQ(inName,"scandown") ) { return scandown_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"key_event") ) { return key_event; }
		if (HX_FIELD_EQ(inName,"mod_state") ) { return mod_state; }
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"text_event") ) { return text_event; }
		if (HX_FIELD_EQ(inName,"keypressed") ) { return keypressed_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouse_event") ) { return mouse_event; }
		if (HX_FIELD_EQ(inName,"touch_event") ) { return touch_event; }
		if (HX_FIELD_EQ(inName,"keyreleased") ) { return keyreleased_dyn(); }
		if (HX_FIELD_EQ(inName,"scanpressed") ) { return scanpressed_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepaddown") ) { return gamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepadaxis") ) { return gamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"touch_count") ) { return touch_count; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scanreleased") ) { return scanreleased_dyn(); }
		if (HX_FIELD_EQ(inName,"mousepressed") ) { return mousepressed_dyn(); }
		if (HX_FIELD_EQ(inName,"touches_down") ) { return touches_down; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepad_event") ) { return gamepad_event; }
		if (HX_FIELD_EQ(inName,"mousereleased") ) { return mousereleased_dyn(); }
		if (HX_FIELD_EQ(inName,"key_code_down") ) { return key_code_down; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gamepadpressed") ) { return gamepadpressed_dyn(); }
		if (HX_FIELD_EQ(inName,"scan_code_down") ) { return scan_code_down; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"gamepadreleased") ) { return gamepadreleased_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_update_keystate") ) { return _update_keystate_dyn(); }
		if (HX_FIELD_EQ(inName,"key_code_pressed") ) { return key_code_pressed; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"key_code_released") ) { return key_code_released; }
		if (HX_FIELD_EQ(inName,"scan_code_pressed") ) { return scan_code_pressed; }
		if (HX_FIELD_EQ(inName,"mouse_button_down") ) { return mouse_button_down; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"gamepad_init_count") ) { return gamepad_init_count; }
		if (HX_FIELD_EQ(inName,"_update_mousestate") ) { return _update_mousestate_dyn(); }
		if (HX_FIELD_EQ(inName,"scan_code_released") ) { return scan_code_released; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"dispatch_text_event") ) { return dispatch_text_event_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepad_button_down") ) { return gamepad_button_down; }
		if (HX_FIELD_EQ(inName,"gamepad_axis_values") ) { return gamepad_axis_values; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_update_gamepadstate") ) { return _update_gamepadstate_dyn(); }
		if (HX_FIELD_EQ(inName,"mouse_button_pressed") ) { return mouse_button_pressed; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"dispatch_key_up_event") ) { return dispatch_key_up_event_dyn(); }
		if (HX_FIELD_EQ(inName,"mouse_button_released") ) { return mouse_button_released; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"gamepad_button_pressed") ) { return gamepad_button_pressed; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"dispatch_key_down_event") ) { return dispatch_key_down_event_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatch_mouse_up_event") ) { return dispatch_mouse_up_event_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatch_touch_up_event") ) { return dispatch_touch_up_event_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepad_button_released") ) { return gamepad_button_released; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"dispatch_mouse_move_event") ) { return dispatch_mouse_move_event_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatch_mouse_down_event") ) { return dispatch_mouse_down_event_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatch_touch_down_event") ) { return dispatch_touch_down_event_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatch_touch_move_event") ) { return dispatch_touch_move_event_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"dispatch_mouse_wheel_event") ) { return dispatch_mouse_wheel_event_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"dispatch_gamepad_axis_event") ) { return dispatch_gamepad_axis_event_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"dispatch_gamepad_device_event") ) { return dispatch_gamepad_device_event_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"dispatch_gamepad_button_up_event") ) { return dispatch_gamepad_button_up_event_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"dispatch_gamepad_button_down_event") ) { return dispatch_gamepad_button_down_event_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Input_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { event=inValue.Cast< ::snow::types::InputEvent >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"key_event") ) { key_event=inValue.Cast< ::snow::types::KeyEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mod_state") ) { mod_state=inValue.Cast< ::snow::types::ModState >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"text_event") ) { text_event=inValue.Cast< ::snow::types::TextEvent >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouse_event") ) { mouse_event=inValue.Cast< ::snow::types::MouseEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touch_event") ) { touch_event=inValue.Cast< ::snow::types::TouchEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touch_count") ) { touch_count=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touches_down") ) { touches_down=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepad_event") ) { gamepad_event=inValue.Cast< ::snow::types::GamepadEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_code_down") ) { key_code_down=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"scan_code_down") ) { scan_code_down=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"key_code_pressed") ) { key_code_pressed=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"key_code_released") ) { key_code_released=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scan_code_pressed") ) { scan_code_pressed=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouse_button_down") ) { mouse_button_down=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"gamepad_init_count") ) { gamepad_init_count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scan_code_released") ) { scan_code_released=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"gamepad_button_down") ) { gamepad_button_down=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gamepad_axis_values") ) { gamepad_axis_values=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"mouse_button_pressed") ) { mouse_button_pressed=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"mouse_button_released") ) { mouse_button_released=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"gamepad_button_pressed") ) { gamepad_button_pressed=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"gamepad_button_released") ) { gamepad_button_released=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("gamepad_init_count","\x3e","\x51","\x6f","\xcc"));
	outFields->push(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"));
	outFields->push(HX_HCSTRING("key_event","\x3a","\x1a","\x1f","\xd5"));
	outFields->push(HX_HCSTRING("text_event","\xc8","\x1b","\x08","\x74"));
	outFields->push(HX_HCSTRING("mouse_event","\x40","\xcf","\x9f","\x32"));
	outFields->push(HX_HCSTRING("touch_event","\x5a","\x00","\x4e","\xa2"));
	outFields->push(HX_HCSTRING("gamepad_event","\xbc","\x9e","\xd9","\x5b"));
	outFields->push(HX_HCSTRING("mod_state","\x94","\x51","\xfe","\x5b"));
	outFields->push(HX_HCSTRING("key_code_down","\x14","\xe2","\xe5","\x52"));
	outFields->push(HX_HCSTRING("key_code_pressed","\x30","\x84","\x2e","\x06"));
	outFields->push(HX_HCSTRING("key_code_released","\x6f","\x33","\x5b","\x69"));
	outFields->push(HX_HCSTRING("scan_code_down","\x72","\x17","\x32","\x08"));
	outFields->push(HX_HCSTRING("scan_code_pressed","\x92","\x7d","\xd3","\xee"));
	outFields->push(HX_HCSTRING("scan_code_released","\xcd","\x6f","\x10","\x11"));
	outFields->push(HX_HCSTRING("mouse_button_down","\xb5","\x4c","\x86","\x45"));
	outFields->push(HX_HCSTRING("mouse_button_pressed","\x2f","\xb4","\x97","\xf2"));
	outFields->push(HX_HCSTRING("mouse_button_released","\x90","\x02","\xfc","\x58"));
	outFields->push(HX_HCSTRING("gamepad_button_down","\x31","\xe1","\xea","\x9e"));
	outFields->push(HX_HCSTRING("gamepad_button_pressed","\x33","\x15","\x3e","\xb5"));
	outFields->push(HX_HCSTRING("gamepad_button_released","\x0c","\x85","\xea","\xe7"));
	outFields->push(HX_HCSTRING("gamepad_axis_values","\x22","\xbb","\xf8","\xda"));
	outFields->push(HX_HCSTRING("touch_count","\x0f","\x7d","\xec","\x76"));
	outFields->push(HX_HCSTRING("touches_down","\x34","\x5b","\x92","\xb5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(Input_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsInt,(int)offsetof(Input_obj,gamepad_init_count),HX_HCSTRING("gamepad_init_count","\x3e","\x51","\x6f","\xcc")},
	{hx::fsObject /*::snow::types::InputEvent*/ ,(int)offsetof(Input_obj,event),HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75")},
	{hx::fsObject /*::snow::types::KeyEvent*/ ,(int)offsetof(Input_obj,key_event),HX_HCSTRING("key_event","\x3a","\x1a","\x1f","\xd5")},
	{hx::fsObject /*::snow::types::TextEvent*/ ,(int)offsetof(Input_obj,text_event),HX_HCSTRING("text_event","\xc8","\x1b","\x08","\x74")},
	{hx::fsObject /*::snow::types::MouseEvent*/ ,(int)offsetof(Input_obj,mouse_event),HX_HCSTRING("mouse_event","\x40","\xcf","\x9f","\x32")},
	{hx::fsObject /*::snow::types::TouchEvent*/ ,(int)offsetof(Input_obj,touch_event),HX_HCSTRING("touch_event","\x5a","\x00","\x4e","\xa2")},
	{hx::fsObject /*::snow::types::GamepadEvent*/ ,(int)offsetof(Input_obj,gamepad_event),HX_HCSTRING("gamepad_event","\xbc","\x9e","\xd9","\x5b")},
	{hx::fsObject /*::snow::types::ModState*/ ,(int)offsetof(Input_obj,mod_state),HX_HCSTRING("mod_state","\x94","\x51","\xfe","\x5b")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,key_code_down),HX_HCSTRING("key_code_down","\x14","\xe2","\xe5","\x52")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,key_code_pressed),HX_HCSTRING("key_code_pressed","\x30","\x84","\x2e","\x06")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,key_code_released),HX_HCSTRING("key_code_released","\x6f","\x33","\x5b","\x69")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,scan_code_down),HX_HCSTRING("scan_code_down","\x72","\x17","\x32","\x08")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,scan_code_pressed),HX_HCSTRING("scan_code_pressed","\x92","\x7d","\xd3","\xee")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,scan_code_released),HX_HCSTRING("scan_code_released","\xcd","\x6f","\x10","\x11")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,mouse_button_down),HX_HCSTRING("mouse_button_down","\xb5","\x4c","\x86","\x45")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,mouse_button_pressed),HX_HCSTRING("mouse_button_pressed","\x2f","\xb4","\x97","\xf2")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,mouse_button_released),HX_HCSTRING("mouse_button_released","\x90","\x02","\xfc","\x58")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,gamepad_button_down),HX_HCSTRING("gamepad_button_down","\x31","\xe1","\xea","\x9e")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,gamepad_button_pressed),HX_HCSTRING("gamepad_button_pressed","\x33","\x15","\x3e","\xb5")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,gamepad_button_released),HX_HCSTRING("gamepad_button_released","\x0c","\x85","\xea","\xe7")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,gamepad_axis_values),HX_HCSTRING("gamepad_axis_values","\x22","\xbb","\xf8","\xda")},
	{hx::fsInt,(int)offsetof(Input_obj,touch_count),HX_HCSTRING("touch_count","\x0f","\x7d","\xec","\x76")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,touches_down),HX_HCSTRING("touches_down","\x34","\x5b","\x92","\xb5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("gamepad_init_count","\x3e","\x51","\x6f","\xcc"),
	HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"),
	HX_HCSTRING("key_event","\x3a","\x1a","\x1f","\xd5"),
	HX_HCSTRING("text_event","\xc8","\x1b","\x08","\x74"),
	HX_HCSTRING("mouse_event","\x40","\xcf","\x9f","\x32"),
	HX_HCSTRING("touch_event","\x5a","\x00","\x4e","\xa2"),
	HX_HCSTRING("gamepad_event","\xbc","\x9e","\xd9","\x5b"),
	HX_HCSTRING("mod_state","\x94","\x51","\xfe","\x5b"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("keypressed","\xe3","\x4a","\x1d","\xdb"),
	HX_HCSTRING("keyreleased","\x5c","\x49","\x5a","\xe5"),
	HX_HCSTRING("keydown","\x81","\x3d","\x6e","\xb1"),
	HX_HCSTRING("scanpressed","\xc5","\x2e","\xc3","\xfb"),
	HX_HCSTRING("scanreleased","\x3a","\xcb","\xdb","\x55"),
	HX_HCSTRING("scandown","\x5f","\xf8","\x95","\x27"),
	HX_HCSTRING("mousepressed","\x1d","\xfb","\x3a","\x4e"),
	HX_HCSTRING("mousereleased","\xe2","\xcb","\x36","\x2c"),
	HX_HCSTRING("mousedown","\x07","\x85","\xe9","\x03"),
	HX_HCSTRING("gamepadpressed","\x21","\xb8","\x96","\x37"),
	HX_HCSTRING("gamepadreleased","\x5e","\x72","\x20","\x73"),
	HX_HCSTRING("gamepaddown","\x83","\x3d","\xe7","\xe7"),
	HX_HCSTRING("gamepadaxis","\xc2","\x61","\xf2","\xe5"),
	HX_HCSTRING("dispatch_key_down_event","\x42","\x92","\xf5","\x8f"),
	HX_HCSTRING("dispatch_key_up_event","\xbb","\x85","\xda","\x71"),
	HX_HCSTRING("dispatch_text_event","\x6d","\x80","\x5a","\x1c"),
	HX_HCSTRING("dispatch_mouse_move_event","\xab","\x52","\x2c","\xe9"),
	HX_HCSTRING("dispatch_mouse_down_event","\xbc","\xba","\x01","\xd6"),
	HX_HCSTRING("dispatch_mouse_up_event","\xb5","\xbb","\x31","\x4b"),
	HX_HCSTRING("dispatch_mouse_wheel_event","\xd7","\xbb","\x13","\xda"),
	HX_HCSTRING("dispatch_touch_down_event","\x62","\x4b","\x89","\xb1"),
	HX_HCSTRING("dispatch_touch_up_event","\xdb","\xb6","\xe7","\xd0"),
	HX_HCSTRING("dispatch_touch_move_event","\x51","\xe3","\xb3","\xc4"),
	HX_HCSTRING("dispatch_gamepad_axis_event","\x7f","\xca","\x44","\x96"),
	HX_HCSTRING("dispatch_gamepad_button_down_event","\x47","\x08","\x1a","\x25"),
	HX_HCSTRING("dispatch_gamepad_button_up_event","\x80","\x00","\xd7","\x72"),
	HX_HCSTRING("dispatch_gamepad_device_event","\xf4","\x26","\xd5","\xbb"),
	HX_HCSTRING("onevent","\x9b","\xf6","\xd4","\x78"),
	HX_HCSTRING("_update_mousestate","\x43","\x80","\x81","\x34"),
	HX_HCSTRING("_update_gamepadstate","\x07","\x00","\x0d","\xd6"),
	HX_HCSTRING("_update_keystate","\xc9","\xd6","\x74","\x15"),
	HX_HCSTRING("key_code_down","\x14","\xe2","\xe5","\x52"),
	HX_HCSTRING("key_code_pressed","\x30","\x84","\x2e","\x06"),
	HX_HCSTRING("key_code_released","\x6f","\x33","\x5b","\x69"),
	HX_HCSTRING("scan_code_down","\x72","\x17","\x32","\x08"),
	HX_HCSTRING("scan_code_pressed","\x92","\x7d","\xd3","\xee"),
	HX_HCSTRING("scan_code_released","\xcd","\x6f","\x10","\x11"),
	HX_HCSTRING("mouse_button_down","\xb5","\x4c","\x86","\x45"),
	HX_HCSTRING("mouse_button_pressed","\x2f","\xb4","\x97","\xf2"),
	HX_HCSTRING("mouse_button_released","\x90","\x02","\xfc","\x58"),
	HX_HCSTRING("gamepad_button_down","\x31","\xe1","\xea","\x9e"),
	HX_HCSTRING("gamepad_button_pressed","\x33","\x15","\x3e","\xb5"),
	HX_HCSTRING("gamepad_button_released","\x0c","\x85","\xea","\xe7"),
	HX_HCSTRING("gamepad_axis_values","\x22","\xbb","\xf8","\xda"),
	HX_HCSTRING("touch_count","\x0f","\x7d","\xec","\x76"),
	HX_HCSTRING("touches_down","\x34","\x5b","\x92","\xb5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#endif

hx::Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.systems.input.Input","\x51","\x32","\x9b","\xe2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
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
} // end namespace input
