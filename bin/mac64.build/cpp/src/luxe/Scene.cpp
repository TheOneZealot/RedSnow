#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_Camera
#include <luxe/Camera.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
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
#ifndef INCLUDED_luxe_GamepadEvent
#include <luxe/GamepadEvent.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_InputEvent
#include <luxe/InputEvent.h>
#endif
#ifndef INCLUDED_luxe_KeyEvent
#include <luxe/KeyEvent.h>
#endif
#ifndef INCLUDED_luxe_MouseEvent
#include <luxe/MouseEvent.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Scene
#include <luxe/Scene.h>
#endif
#ifndef INCLUDED_luxe_TextEvent
#include <luxe/TextEvent.h>
#endif
#ifndef INCLUDED_luxe_TouchEvent
#include <luxe/TouchEvent.h>
#endif
#ifndef INCLUDED_luxe_components_Components
#include <luxe/components/Components.h>
#endif
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_SceneDebugView
#include <luxe/debug/SceneDebugView.h>
#endif
#ifndef INCLUDED_luxe_structural_OrderedMapIterator_String_luxe_Component
#include <luxe/structural/OrderedMapIterator_String_luxe_Component.h>
#endif
#ifndef INCLUDED_luxe_structural_OrderedMap_String_luxe_Component
#include <luxe/structural/OrderedMap_String_luxe_Component.h>
#endif
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_api_Timer
#include <snow/api/Timer.h>
#endif
#ifndef INCLUDED_snow_types_WindowEvent
#include <snow/types/WindowEvent.h>
#endif
namespace luxe{

Void Scene_obj::__construct(::String __o__name)
{
HX_STACK_FRAME("luxe.Scene","new",0x652ab566,"luxe.Scene.new","luxe/Scene.hx",10,0x14d4e1cb)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__name,"_name")
::String _name = __o__name.Default(HX_HCSTRING("untitled scene","\xd1","\x1d","\x02","\xcb"));
{
	HX_STACK_LINE(102)
	this->entity_count = (int)0;
	HX_STACK_LINE(33)
	this->_has_changed = false;
	HX_STACK_LINE(21)
	this->destroyed = false;
	HX_STACK_LINE(19)
	this->length = (int)0;
	HX_STACK_LINE(17)
	this->started = false;
	HX_STACK_LINE(15)
	this->inited = false;
	HX_STACK_LINE(39)
	::String tmp = _name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	super::__construct(tmp,null());
	HX_STACK_LINE(41)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(41)
	this->entities = tmp1;
	HX_STACK_LINE(43)
	this->_delayed_init_entities = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(44)
	this->_delayed_reset_entities = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		Dynamic tmp3 = this->init_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		tmp2->emitter->on((int)2,tmp3);
	}
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		Dynamic tmp3 = this->_destroy_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		tmp2->emitter->on((int)8,tmp3);
	}
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		Dynamic tmp3 = this->update_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		tmp2->emitter->on((int)6,tmp3);
	}
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		Dynamic tmp3 = this->prerender_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		tmp2->emitter->on((int)9,tmp3);
	}
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		Dynamic tmp3 = this->postrender_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		tmp2->emitter->on((int)11,tmp3);
	}
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		Dynamic tmp3 = this->render_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		tmp2->emitter->on((int)10,tmp3);
	}
	HX_STACK_LINE(54)
	{
		HX_STACK_LINE(54)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		Dynamic tmp3 = this->keydown_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		tmp2->emitter->on((int)12,tmp3);
	}
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		Dynamic tmp3 = this->keyup_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		tmp2->emitter->on((int)13,tmp3);
	}
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		Dynamic tmp3 = this->textinput_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		tmp2->emitter->on((int)14,tmp3);
	}
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		Dynamic tmp3 = this->inputup_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		tmp2->emitter->on((int)16,tmp3);
	}
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		Dynamic tmp3 = this->inputdown_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		tmp2->emitter->on((int)15,tmp3);
	}
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		Dynamic tmp3 = this->mouseup_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		tmp2->emitter->on((int)18,tmp3);
	}
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		Dynamic tmp3 = this->mousedown_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		tmp2->emitter->on((int)17,tmp3);
	}
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		Dynamic tmp3 = this->mousemove_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		tmp2->emitter->on((int)19,tmp3);
	}
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		Dynamic tmp3 = this->mousewheel_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		tmp2->emitter->on((int)20,tmp3);
	}
	HX_STACK_LINE(66)
	{
		HX_STACK_LINE(66)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		Dynamic tmp3 = this->touchup_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		tmp2->emitter->on((int)22,tmp3);
	}
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		Dynamic tmp3 = this->touchdown_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		tmp2->emitter->on((int)21,tmp3);
	}
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		Dynamic tmp3 = this->touchmove_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		tmp2->emitter->on((int)23,tmp3);
	}
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		Dynamic tmp3 = this->gamepadup_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		tmp2->emitter->on((int)26,tmp3);
	}
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		Dynamic tmp3 = this->gamepaddown_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		tmp2->emitter->on((int)25,tmp3);
	}
	HX_STACK_LINE(72)
	{
		HX_STACK_LINE(72)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		Dynamic tmp3 = this->gamepadaxis_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		tmp2->emitter->on((int)24,tmp3);
	}
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		Dynamic tmp3 = this->gamepaddevice_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		tmp2->emitter->on((int)27,tmp3);
	}
	HX_STACK_LINE(75)
	{
		HX_STACK_LINE(75)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		Dynamic tmp3 = this->windowmoved_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		tmp2->emitter->on((int)29,tmp3);
	}
	HX_STACK_LINE(76)
	{
		HX_STACK_LINE(76)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		Dynamic tmp3 = this->windowresized_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(76)
		tmp2->emitter->on((int)30,tmp3);
	}
	HX_STACK_LINE(77)
	{
		HX_STACK_LINE(77)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		Dynamic tmp3 = this->windowsized_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		tmp2->emitter->on((int)31,tmp3);
	}
	HX_STACK_LINE(78)
	{
		HX_STACK_LINE(78)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		Dynamic tmp3 = this->windowminimized_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(78)
		tmp2->emitter->on((int)32,tmp3);
	}
	HX_STACK_LINE(79)
	{
		HX_STACK_LINE(79)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		Dynamic tmp3 = this->windowrestored_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		tmp2->emitter->on((int)33,tmp3);
	}
	HX_STACK_LINE(82)
	::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	bool tmp3 = tmp2->inited;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(82)
	if ((tmp3)){
		HX_STACK_LINE(83)
		this->init(null());
	}
	HX_STACK_LINE(86)
	::luxe::Engine tmp4 = ::Luxe_obj::core;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(86)
	::luxe::debug::SceneDebugView tmp5 = tmp4->debug->get_view(HX_HCSTRING("Scenes","\xc7","\xbd","\x60","\x73"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(86)
	::luxe::debug::SceneDebugView _view = tmp5;		HX_STACK_VAR(_view,"_view");
	HX_STACK_LINE(87)
	bool tmp6 = (_view != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(87)
	if ((tmp6)){
		HX_STACK_LINE(88)
		_view->add_scene(hx::ObjectPtr<OBJ_>(this));
	}
}
;
	return null();
}

//Scene_obj::~Scene_obj() { }

Dynamic Scene_obj::__CreateEmpty() { return  new Scene_obj; }
hx::ObjectPtr< Scene_obj > Scene_obj::__new(::String __o__name)
{  hx::ObjectPtr< Scene_obj > _result_ = new Scene_obj();
	_result_->__construct(__o__name);
	return _result_;}

Dynamic Scene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scene_obj > _result_ = new Scene_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Scene_obj::handle_duplicate_warning( ::String _name){
{
		HX_STACK_FRAME("luxe.Scene","handle_duplicate_warning",0x3544440b,"luxe.Scene.handle_duplicate_warning","luxe/Scene.hx",94,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(95)
		::haxe::ds::StringMap tmp = this->entities;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		if ((tmp2)){
			HX_STACK_LINE(96)
			::String tmp3 = this->get_name();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(96)
			::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(96)
			::String tmp5 = (tmp4 + HX_HCSTRING(" / adding a second entity named ","\x25","\x7f","\xee","\xd9"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(96)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(96)
			::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(96)
			::String tmp8 = (tmp7 + HX_HCSTRING("!\n                This will replace the existing one, possibly leaving the previous one in limbo.","\x8a","\x82","\xfa","\x6f"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(96)
			::String tmp9 = (HX_HCSTRING("    i / scene / ","\xcd","\x27","\xce","\x13") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(96)
			Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),96,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("handle_duplicate_warning","\xd1","\x8a","\x7d","\x4b"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(96)
			::haxe::Log_obj::trace(tmp9,tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,handle_duplicate_warning,(void))

Void Scene_obj::add( ::luxe::Entity entity){
{
		HX_STACK_FRAME("luxe.Scene","add",0x6520d727,"luxe.Scene.add","luxe/Scene.hx",103,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(entity,"entity")
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			bool tmp = (entity == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(105)
			if ((tmp)){
				HX_STACK_LINE(230)
				::String tmp1 = HX_HCSTRING(" ( can't put entity in a scene if the entity is null.","\x59","\x09","\x49","\xef");		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(230)
				::String tmp2 = (tmp1 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(105)
				::String tmp3 = (HX_HCSTRING("entity was null","\x7b","\xc9","\xa5","\xaf") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(105)
				::luxe::DebugError tmp4 = ::luxe::DebugError_obj::null_assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(105)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			::String tmp = entity->get_name();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(109)
			::String _name = tmp;		HX_STACK_VAR(_name,"_name");
			HX_STACK_LINE(109)
			::haxe::ds::StringMap tmp1 = this->entities;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(109)
			::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(109)
			bool tmp3 = tmp1->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(109)
			if ((tmp3)){
				HX_STACK_LINE(109)
				::String tmp4 = this->get_name();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(109)
				::String tmp5 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(109)
				::String tmp6 = (tmp5 + HX_HCSTRING(" / adding a second entity named ","\x25","\x7f","\xee","\xd9"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(109)
				::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(109)
				::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(109)
				::String tmp9 = (tmp8 + HX_HCSTRING("!\n                This will replace the existing one, possibly leaving the previous one in limbo.","\x8a","\x82","\xfa","\x6f"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(109)
				::String tmp10 = (HX_HCSTRING("    i / scene / ","\xcd","\x27","\xce","\x13") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(109)
				Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),96,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("handle_duplicate_warning","\xd1","\x8a","\x7d","\x4b"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(109)
				::haxe::Log_obj::trace(tmp10,tmp11);
			}
		}
		HX_STACK_LINE(111)
		entity->set_scene(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(112)
		entity->set_scene_root(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			::String tmp = entity->get_name();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(113)
			::String key = tmp;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(113)
			::haxe::ds::StringMap tmp1 = this->entities;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(113)
			::String tmp2 = key;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(113)
			::luxe::Entity tmp3 = entity;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(113)
			tmp1->set(tmp2,tmp3);
		}
		HX_STACK_LINE(114)
		(this->entity_count)++;
		HX_STACK_LINE(117)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		if ((tmp)){
			HX_STACK_LINE(119)
			::luxe::Entity tmp1 = entity;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(119)
			this->_delayed_init_entities->push(tmp1);
		}
		HX_STACK_LINE(122)
		bool tmp1 = this->started;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		if ((tmp1)){
			HX_STACK_LINE(124)
			::luxe::Entity tmp2 = entity;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(124)
			this->_delayed_reset_entities->push(tmp2);
		}
		HX_STACK_LINE(127)
		this->_has_changed = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,add,(void))

bool Scene_obj::remove( ::luxe::Entity entity){
	HX_STACK_FRAME("luxe.Scene","remove",0x2b461efe,"luxe.Scene.remove","luxe/Scene.hx",132,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(entity,"entity")
	HX_STACK_LINE(134)
	{
		HX_STACK_LINE(134)
		bool tmp = (entity == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		if ((tmp)){
			HX_STACK_LINE(230)
			::String tmp1 = HX_HCSTRING(" ( can't remove entity from a scene if the entity is null.","\x09","\x82","\x06","\xc0");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(230)
			::String tmp2 = (tmp1 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(134)
			::String tmp3 = (HX_HCSTRING("entity was null","\x7b","\xc9","\xa5","\xaf") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(134)
			::luxe::DebugError tmp4 = ::luxe::DebugError_obj::null_assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(134)
			HX_STACK_DO_THROW(tmp4);
		}
	}
	HX_STACK_LINE(136)
	this->_has_changed = true;
	HX_STACK_LINE(138)
	::luxe::Scene tmp = entity->get_scene();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	bool tmp1 = (tmp == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	if ((tmp1)){
		HX_STACK_LINE(141)
		entity->set_scene(null());
		HX_STACK_LINE(142)
		(this->entity_count)--;
		HX_STACK_LINE(143)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		{
			HX_STACK_LINE(143)
			::String tmp3 = entity->get_name();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(143)
			::String key = tmp3;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(143)
			::haxe::ds::StringMap tmp4 = this->entities;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(143)
			::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(143)
			tmp2 = tmp4->remove(tmp5);
		}
		HX_STACK_LINE(143)
		return tmp2;
	}
	else{
		HX_STACK_LINE(147)
		::String tmp2 = entity->get_name();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		::String tmp3 = (HX_HCSTRING("can't remove the entity(`","\xe3","\x42","\x84","\x53") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(147)
		::String tmp4 = (tmp3 + HX_HCSTRING("`) from this scene(`","\x21","\x06","\x3b","\x37"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(147)
		::String tmp5 = this->get_name();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(147)
		::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(147)
		::String tmp7 = (tmp6 + HX_HCSTRING("`), it is not mine (entity.scene != this)","\xa0","\x9b","\x14","\xb5"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(147)
		::String tmp8 = (HX_HCSTRING("    i / scene / ","\xcd","\x27","\xce","\x13") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(147)
		Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),147,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(147)
		::haxe::Log_obj::trace(tmp8,tmp9);
		HX_STACK_LINE(148)
		return false;
	}
	HX_STACK_LINE(152)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,remove,return )

Dynamic Scene_obj::get( ::String _name){
	HX_STACK_FRAME("luxe.Scene","get",0x6525659c,"luxe.Scene.get","luxe/Scene.hx",156,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(158)
	::haxe::ds::StringMap tmp = this->entities;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	::luxe::Entity tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(158)
	Dynamic tmp3 = ((Dynamic)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(158)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,get,return )

Void Scene_obj::empty( ){
{
		HX_STACK_FRAME("luxe.Scene","empty",0xe3f8ed13,"luxe.Scene.empty","luxe/Scene.hx",167,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(171)
		int tmp = this->entity_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(171)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(171)
		if ((tmp1)){
			HX_STACK_LINE(181)
			::haxe::ds::StringMap tmp2 = this->entities;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(181)
			Dynamic tmp3 = tmp2->iterator();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(181)
			for(::cpp::FastIterator_obj< ::luxe::Entity > *__it = ::cpp::CreateFastIterator< ::luxe::Entity >(tmp3);  __it->hasNext(); ){
				::luxe::Entity entity = __it->next();
				{
					HX_STACK_LINE(182)
					bool tmp4 = (entity != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(182)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(182)
					if ((tmp4)){
						HX_STACK_LINE(182)
						::luxe::Entity tmp6 = entity;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(182)
						::luxe::Camera tmp7 = ::Luxe_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(182)
						::luxe::Camera tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(182)
						tmp5 = (tmp6 != tmp8);
					}
					else{
						HX_STACK_LINE(182)
						tmp5 = false;
					}
					HX_STACK_LINE(182)
					if ((tmp5)){
						HX_STACK_LINE(184)
						entity->destroy(null());
						HX_STACK_LINE(185)
						entity = null();
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,empty,(void))

Array< ::Dynamic > Scene_obj::get_named_like( ::String _name,Array< ::Dynamic > into){
	HX_STACK_FRAME("luxe.Scene","get_named_like",0x42ca57e0,"luxe.Scene.get_named_like","luxe/Scene.hx",203,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(into,"into")
	HX_STACK_LINE(205)
	int tmp = this->entity_count;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	if ((tmp1)){
		HX_STACK_LINE(206)
		::String tmp2 = (HX_HCSTRING("^((?:","\x79","\xa1","\x39","\x3a") + _name);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		::String tmp3 = (tmp2 + HX_HCSTRING(")[.]{1})","\x63","\xe3","\x56","\x33"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(206)
		::EReg tmp4 = ::EReg_obj::__new(tmp3,HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(206)
		::EReg _filter = tmp4;		HX_STACK_VAR(_filter,"_filter");
		HX_STACK_LINE(207)
		::haxe::ds::StringMap tmp5 = this->entities;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(207)
		Dynamic tmp6 = tmp5->iterator();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(207)
		for(::cpp::FastIterator_obj< ::luxe::Entity > *__it = ::cpp::CreateFastIterator< ::luxe::Entity >(tmp6);  __it->hasNext(); ){
			::luxe::Entity _entity = __it->next();
			{
				HX_STACK_LINE(208)
				::String tmp7 = _entity->get_name();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(208)
				bool tmp8 = _filter->match(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(208)
				if ((tmp8)){
					HX_STACK_LINE(209)
					::luxe::Entity tmp9 = _entity;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(209)
					into->push(tmp9);
				}
			}
;
		}
	}
	HX_STACK_LINE(214)
	return into;
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,get_named_like,return )

Void Scene_obj::render( Dynamic _){
{
		HX_STACK_FRAME("luxe.Scene","render",0x2be6ee10,"luxe.Scene.render","luxe/Scene.hx",222,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(222)
		this->emit((int)10,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,render,(void))

Void Scene_obj::prerender( Dynamic _){
{
		HX_STACK_FRAME("luxe.Scene","prerender",0x8547753f,"luxe.Scene.prerender","luxe/Scene.hx",228,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(228)
		this->emit((int)9,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,prerender,(void))

Void Scene_obj::postrender( Dynamic _){
{
		HX_STACK_FRAME("luxe.Scene","postrender",0x1efbdf70,"luxe.Scene.postrender","luxe/Scene.hx",234,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(234)
		this->emit((int)11,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,postrender,(void))

Void Scene_obj::keydown( ::luxe::KeyEvent e){
{
		HX_STACK_FRAME("luxe.Scene","keydown",0x70831d87,"luxe.Scene.keydown","luxe/Scene.hx",240,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(244)
		::luxe::KeyEvent tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(244)
		this->emit((int)12,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,keydown,(void))

Void Scene_obj::keyup( ::luxe::KeyEvent e){
{
		HX_STACK_FRAME("luxe.Scene","keyup",0x531d8840,"luxe.Scene.keyup","luxe/Scene.hx",248,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(252)
		::luxe::KeyEvent tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(252)
		this->emit((int)13,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,keyup,(void))

Void Scene_obj::textinput( ::luxe::TextEvent e){
{
		HX_STACK_FRAME("luxe.Scene","textinput",0x19ef51c3,"luxe.Scene.textinput","luxe/Scene.hx",256,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(260)
		::luxe::TextEvent tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(260)
		this->emit((int)14,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,textinput,(void))

Void Scene_obj::mousedown( ::luxe::MouseEvent e){
{
		HX_STACK_FRAME("luxe.Scene","mousedown",0x59faf28d,"luxe.Scene.mousedown","luxe/Scene.hx",266,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(270)
		::luxe::MouseEvent tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		this->emit((int)17,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,mousedown,(void))

Void Scene_obj::mousewheel( ::luxe::MouseEvent e){
{
		HX_STACK_FRAME("luxe.Scene","mousewheel",0x4d882010,"luxe.Scene.mousewheel","luxe/Scene.hx",274,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(278)
		::luxe::MouseEvent tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(278)
		this->emit((int)20,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,mousewheel,(void))

Void Scene_obj::mouseup( ::luxe::MouseEvent e){
{
		HX_STACK_FRAME("luxe.Scene","mouseup",0x7f87efc6,"luxe.Scene.mouseup","luxe/Scene.hx",282,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(286)
		::luxe::MouseEvent tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(286)
		this->emit((int)18,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,mouseup,(void))

Void Scene_obj::mousemove( ::luxe::MouseEvent e){
{
		HX_STACK_FRAME("luxe.Scene","mousemove",0x5feddd3c,"luxe.Scene.mousemove","luxe/Scene.hx",290,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(294)
		::luxe::MouseEvent tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		this->emit((int)19,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,mousemove,(void))

Void Scene_obj::touchdown( ::luxe::TouchEvent event){
{
		HX_STACK_FRAME("luxe.Scene","touchdown",0x7312c927,"luxe.Scene.touchdown","luxe/Scene.hx",300,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(302)
		::luxe::TouchEvent tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(302)
		this->emit((int)21,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,touchdown,(void))

Void Scene_obj::touchup( ::luxe::TouchEvent event){
{
		HX_STACK_FRAME("luxe.Scene","touchup",0x980d0be0,"luxe.Scene.touchup","luxe/Scene.hx",306,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(308)
		::luxe::TouchEvent tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(308)
		this->emit((int)22,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,touchup,(void))

Void Scene_obj::touchmove( ::luxe::TouchEvent event){
{
		HX_STACK_FRAME("luxe.Scene","touchmove",0x7905b3d6,"luxe.Scene.touchmove","luxe/Scene.hx",312,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(314)
		::luxe::TouchEvent tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(314)
		this->emit((int)23,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,touchmove,(void))

Void Scene_obj::gamepadaxis( ::luxe::GamepadEvent event){
{
		HX_STACK_FRAME("luxe.Scene","gamepadaxis",0xf55ebcc8,"luxe.Scene.gamepadaxis","luxe/Scene.hx",320,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(322)
		::luxe::GamepadEvent tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(322)
		this->emit((int)24,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,gamepadaxis,(void))

Void Scene_obj::gamepadup( ::luxe::GamepadEvent event){
{
		HX_STACK_FRAME("luxe.Scene","gamepadup",0xb549dec2,"luxe.Scene.gamepadup","luxe/Scene.hx",326,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(328)
		::luxe::GamepadEvent tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(328)
		this->emit((int)26,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,gamepadup,(void))

Void Scene_obj::gamepaddown( ::luxe::GamepadEvent event){
{
		HX_STACK_FRAME("luxe.Scene","gamepaddown",0xf7539889,"luxe.Scene.gamepaddown","luxe/Scene.hx",332,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(334)
		::luxe::GamepadEvent tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(334)
		this->emit((int)25,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,gamepaddown,(void))

Void Scene_obj::gamepaddevice( ::luxe::GamepadEvent event){
{
		HX_STACK_FRAME("luxe.Scene","gamepaddevice",0x6323147d,"luxe.Scene.gamepaddevice","luxe/Scene.hx",338,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(340)
		::luxe::GamepadEvent tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(340)
		this->emit((int)27,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,gamepaddevice,(void))

Void Scene_obj::windowmoved( ::snow::types::WindowEvent event){
{
		HX_STACK_FRAME("luxe.Scene","windowmoved",0x79774d49,"luxe.Scene.windowmoved","luxe/Scene.hx",347,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(349)
		::snow::types::WindowEvent tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(349)
		this->emit((int)29,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,windowmoved,(void))

Void Scene_obj::windowresized( ::snow::types::WindowEvent event){
{
		HX_STACK_FRAME("luxe.Scene","windowresized",0x58b7ce86,"luxe.Scene.windowresized","luxe/Scene.hx",353,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(355)
		::snow::types::WindowEvent tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(355)
		this->emit((int)30,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,windowresized,(void))

Void Scene_obj::windowsized( ::snow::types::WindowEvent event){
{
		HX_STACK_FRAME("luxe.Scene","windowsized",0xe9ea8999,"luxe.Scene.windowsized","luxe/Scene.hx",359,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(361)
		::snow::types::WindowEvent tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(361)
		this->emit((int)31,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,windowsized,(void))

Void Scene_obj::windowminimized( ::snow::types::WindowEvent event){
{
		HX_STACK_FRAME("luxe.Scene","windowminimized",0x4dd4bf9c,"luxe.Scene.windowminimized","luxe/Scene.hx",365,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(367)
		::snow::types::WindowEvent tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(367)
		this->emit((int)32,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,windowminimized,(void))

Void Scene_obj::windowrestored( ::snow::types::WindowEvent event){
{
		HX_STACK_FRAME("luxe.Scene","windowrestored",0x9649ce00,"luxe.Scene.windowrestored","luxe/Scene.hx",371,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(373)
		::snow::types::WindowEvent tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(373)
		this->emit((int)33,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,windowrestored,(void))

Void Scene_obj::inputdown( ::luxe::InputEvent _event){
{
		HX_STACK_FRAME("luxe.Scene","inputdown",0x74d0f6f2,"luxe.Scene.inputdown","luxe/Scene.hx",379,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(381)
		::luxe::InputEvent tmp = _event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(381)
		this->emit((int)15,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,inputdown,(void))

Void Scene_obj::inputup( ::luxe::InputEvent _event){
{
		HX_STACK_FRAME("luxe.Scene","inputup",0x9333a0eb,"luxe.Scene.inputup","luxe/Scene.hx",385,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(387)
		::luxe::InputEvent tmp = _event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(387)
		this->emit((int)16,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,inputup,(void))

Void Scene_obj::_destroy( Dynamic _){
{
		HX_STACK_FRAME("luxe.Scene","_destroy",0xd16dabb5,"luxe.Scene._destroy","luxe/Scene.hx",395,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(395)
		this->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,_destroy,(void))

Void Scene_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Scene","destroy",0xe39b0d00,"luxe.Scene.destroy","luxe/Scene.hx",399,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(401)
		{
			HX_STACK_LINE(401)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(401)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(401)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(401)
			if ((tmp2)){
				HX_STACK_LINE(401)
				::String tmp3 = this->get_name();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(401)
				::String tmp4 = (HX_HCSTRING("scene / destroying repeatedly `","\xba","\x55","\xac","\x9d") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(401)
				::String tmp5 = (tmp4 + HX_HCSTRING("`","\x60","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(214)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(214)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(401)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(401)
				::luxe::DebugError tmp9 = ::luxe::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(401)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(405)
		this->destroyed = true;
		HX_STACK_LINE(407)
		::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(407)
		Dynamic tmp1 = this->init_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(407)
		tmp->emitter->off((int)2,tmp1);
		HX_STACK_LINE(408)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(408)
		Dynamic tmp3 = this->_destroy_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(408)
		tmp2->emitter->off((int)8,tmp3);
		HX_STACK_LINE(409)
		::luxe::Engine tmp4 = ::Luxe_obj::core;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(409)
		Dynamic tmp5 = this->update_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(409)
		tmp4->emitter->off((int)6,tmp5);
		HX_STACK_LINE(411)
		::luxe::Engine tmp6 = ::Luxe_obj::core;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(411)
		Dynamic tmp7 = this->prerender_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(411)
		tmp6->emitter->off((int)9,tmp7);
		HX_STACK_LINE(412)
		::luxe::Engine tmp8 = ::Luxe_obj::core;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(412)
		Dynamic tmp9 = this->postrender_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(412)
		tmp8->emitter->off((int)11,tmp9);
		HX_STACK_LINE(413)
		::luxe::Engine tmp10 = ::Luxe_obj::core;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(413)
		Dynamic tmp11 = this->render_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(413)
		tmp10->emitter->off((int)10,tmp11);
		HX_STACK_LINE(415)
		::luxe::Engine tmp12 = ::Luxe_obj::core;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(415)
		Dynamic tmp13 = this->keydown_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(415)
		tmp12->emitter->off((int)12,tmp13);
		HX_STACK_LINE(416)
		::luxe::Engine tmp14 = ::Luxe_obj::core;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(416)
		Dynamic tmp15 = this->keyup_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(416)
		tmp14->emitter->off((int)13,tmp15);
		HX_STACK_LINE(417)
		::luxe::Engine tmp16 = ::Luxe_obj::core;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(417)
		Dynamic tmp17 = this->textinput_dyn();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(417)
		tmp16->emitter->off((int)14,tmp17);
		HX_STACK_LINE(419)
		::luxe::Engine tmp18 = ::Luxe_obj::core;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(419)
		Dynamic tmp19 = this->inputup_dyn();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(419)
		tmp18->emitter->off((int)16,tmp19);
		HX_STACK_LINE(420)
		::luxe::Engine tmp20 = ::Luxe_obj::core;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(420)
		Dynamic tmp21 = this->inputdown_dyn();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(420)
		tmp20->emitter->off((int)15,tmp21);
		HX_STACK_LINE(422)
		::luxe::Engine tmp22 = ::Luxe_obj::core;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(422)
		Dynamic tmp23 = this->mouseup_dyn();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(422)
		tmp22->emitter->off((int)18,tmp23);
		HX_STACK_LINE(423)
		::luxe::Engine tmp24 = ::Luxe_obj::core;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(423)
		Dynamic tmp25 = this->mousedown_dyn();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(423)
		tmp24->emitter->off((int)17,tmp25);
		HX_STACK_LINE(424)
		::luxe::Engine tmp26 = ::Luxe_obj::core;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(424)
		Dynamic tmp27 = this->mousemove_dyn();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(424)
		tmp26->emitter->off((int)19,tmp27);
		HX_STACK_LINE(425)
		::luxe::Engine tmp28 = ::Luxe_obj::core;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(425)
		Dynamic tmp29 = this->mousewheel_dyn();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(425)
		tmp28->emitter->off((int)20,tmp29);
		HX_STACK_LINE(427)
		::luxe::Engine tmp30 = ::Luxe_obj::core;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(427)
		Dynamic tmp31 = this->touchup_dyn();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(427)
		tmp30->emitter->off((int)22,tmp31);
		HX_STACK_LINE(428)
		::luxe::Engine tmp32 = ::Luxe_obj::core;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(428)
		Dynamic tmp33 = this->touchdown_dyn();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(428)
		tmp32->emitter->off((int)21,tmp33);
		HX_STACK_LINE(429)
		::luxe::Engine tmp34 = ::Luxe_obj::core;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(429)
		Dynamic tmp35 = this->touchmove_dyn();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(429)
		tmp34->emitter->off((int)23,tmp35);
		HX_STACK_LINE(431)
		::luxe::Engine tmp36 = ::Luxe_obj::core;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(431)
		Dynamic tmp37 = this->gamepadup_dyn();		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(431)
		tmp36->emitter->off((int)26,tmp37);
		HX_STACK_LINE(432)
		::luxe::Engine tmp38 = ::Luxe_obj::core;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(432)
		Dynamic tmp39 = this->gamepaddown_dyn();		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(432)
		tmp38->emitter->off((int)25,tmp39);
		HX_STACK_LINE(433)
		::luxe::Engine tmp40 = ::Luxe_obj::core;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(433)
		Dynamic tmp41 = this->gamepadaxis_dyn();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(433)
		tmp40->emitter->off((int)24,tmp41);
		HX_STACK_LINE(434)
		::luxe::Engine tmp42 = ::Luxe_obj::core;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(434)
		Dynamic tmp43 = this->gamepaddevice_dyn();		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(434)
		tmp42->emitter->off((int)27,tmp43);
		HX_STACK_LINE(436)
		::luxe::Engine tmp44 = ::Luxe_obj::core;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(436)
		Dynamic tmp45 = this->windowmoved_dyn();		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(436)
		tmp44->emitter->off((int)29,tmp45);
		HX_STACK_LINE(437)
		::luxe::Engine tmp46 = ::Luxe_obj::core;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(437)
		Dynamic tmp47 = this->windowresized_dyn();		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(437)
		tmp46->emitter->off((int)30,tmp47);
		HX_STACK_LINE(438)
		::luxe::Engine tmp48 = ::Luxe_obj::core;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(438)
		Dynamic tmp49 = this->windowsized_dyn();		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(438)
		tmp48->emitter->off((int)31,tmp49);
		HX_STACK_LINE(439)
		::luxe::Engine tmp50 = ::Luxe_obj::core;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(439)
		Dynamic tmp51 = this->windowminimized_dyn();		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(439)
		tmp50->emitter->off((int)32,tmp51);
		HX_STACK_LINE(440)
		::luxe::Engine tmp52 = ::Luxe_obj::core;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(440)
		Dynamic tmp53 = this->windowrestored_dyn();		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(440)
		tmp52->emitter->off((int)33,tmp53);
		HX_STACK_LINE(442)
		this->emit((int)8,null());
		HX_STACK_LINE(444)
		::luxe::Engine tmp54 = ::Luxe_obj::core;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(444)
		::luxe::debug::SceneDebugView tmp55 = tmp54->debug->get_view(HX_HCSTRING("Scenes","\xc7","\xbd","\x60","\x73"));		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(444)
		::luxe::debug::SceneDebugView _view = tmp55;		HX_STACK_VAR(_view,"_view");
		HX_STACK_LINE(445)
		bool tmp56 = (_view != null());		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(445)
		if ((tmp56)){
			HX_STACK_LINE(446)
			_view->remove_scene(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,destroy,(void))

bool Scene_obj::_do_init( ){
	HX_STACK_FRAME("luxe.Scene","_do_init",0x45b3463f,"luxe.Scene._do_init","luxe/Scene.hx",451,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(453)
	int tmp = this->get_length();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(453)
	int _before_count = tmp;		HX_STACK_VAR(_before_count,"_before_count");
	HX_STACK_LINE(455)
	int tmp1 = this->entity_count;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(455)
	bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(455)
	if ((tmp2)){
		HX_STACK_LINE(456)
		::haxe::ds::StringMap tmp3 = this->entities;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(456)
		Dynamic tmp4 = tmp3->iterator();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(456)
		for(::cpp::FastIterator_obj< ::luxe::Entity > *__it = ::cpp::CreateFastIterator< ::luxe::Entity >(tmp4);  __it->hasNext(); ){
			::luxe::Entity entity = __it->next();
			{
				HX_STACK_LINE(457)
				bool tmp5 = (entity != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(457)
				if ((tmp5)){
					HX_STACK_LINE(458)
					bool tmp6 = entity->inited;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(458)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(458)
					if ((tmp7)){
						HX_STACK_LINE(460)
						entity->init();
						HX_STACK_LINE(460)
						entity->emit((int)2,null());
						HX_STACK_LINE(460)
						bool tmp8 = (entity->component_count > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(460)
						if ((tmp8)){
							HX_STACK_LINE(460)
							::luxe::structural::OrderedMap_String_luxe_Component tmp9 = entity->_components->components;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(460)
							::luxe::structural::OrderedMapIterator_String_luxe_Component tmp10 = ::luxe::structural::OrderedMapIterator_String_luxe_Component_obj::__new(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(460)
							::luxe::structural::OrderedMapIterator_String_luxe_Component _g = tmp10;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(460)
							while((true)){
								HX_STACK_LINE(460)
								int tmp11 = _g->index;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(460)
								int tmp12 = _g->map->_keys->length;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(460)
								bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(460)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(460)
								if ((tmp14)){
									HX_STACK_LINE(460)
									break;
								}
								HX_STACK_LINE(460)
								::luxe::Component tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(460)
								{
									HX_STACK_LINE(460)
									int tmp16 = (_g->index)++;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(460)
									::String tmp17 = _g->map->_keys->__get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(460)
									::String key = tmp17;		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(460)
									::haxe::ds::StringMap tmp18 = _g->map->map;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(460)
									::String tmp19 = key;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(460)
									::luxe::Component tmp20 = tmp18->get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(460)
									tmp15 = tmp20;
								}
								HX_STACK_LINE(460)
								::luxe::Component _component = tmp15;		HX_STACK_VAR(_component,"_component");
								HX_STACK_LINE(460)
								_component->init();
							}
						}
						HX_STACK_LINE(460)
						int tmp9 = entity->children->length;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(460)
						bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(460)
						if ((tmp10)){
							HX_STACK_LINE(460)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(460)
							Array< ::Dynamic > _g1 = entity->children;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(460)
							while((true)){
								HX_STACK_LINE(460)
								bool tmp11 = (_g < _g1->length);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(460)
								bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(460)
								if ((tmp12)){
									HX_STACK_LINE(460)
									break;
								}
								HX_STACK_LINE(460)
								::luxe::Entity tmp13 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(460)
								::luxe::Entity _child = tmp13;		HX_STACK_VAR(_child,"_child");
								HX_STACK_LINE(460)
								++(_g);
								HX_STACK_LINE(460)
								_child->_init();
							}
						}
						HX_STACK_LINE(460)
						entity->inited = true;
					}
				}
			}
;
		}
	}
	HX_STACK_LINE(466)
	int tmp3 = this->get_length();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(466)
	int _after_count = tmp3;		HX_STACK_VAR(_after_count,"_after_count");
	HX_STACK_LINE(468)
	bool tmp4 = (_before_count != _after_count);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(468)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,_do_init,return )

Void Scene_obj::init( Dynamic _){
{
		HX_STACK_FRAME("luxe.Scene","init",0x1cecbb4a,"luxe.Scene.init","luxe/Scene.hx",474,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(476)
		bool _keep_going = true;		HX_STACK_VAR(_keep_going,"_keep_going");
		HX_STACK_LINE(478)
		while((true)){
			HX_STACK_LINE(478)
			bool tmp = _keep_going;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(478)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(478)
			if ((tmp1)){
				HX_STACK_LINE(478)
				break;
			}
			HX_STACK_LINE(479)
			bool tmp2 = this->_do_init();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(479)
			_keep_going = tmp2;
		}
		HX_STACK_LINE(482)
		this->inited = true;
		HX_STACK_LINE(484)
		this->emit((int)2,null());
		HX_STACK_LINE(486)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,init,(void))

Void Scene_obj::reset( ){
{
		HX_STACK_FRAME("luxe.Scene","reset",0x5ae6fc55,"luxe.Scene.reset","luxe/Scene.hx",491,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(493)
		this->started = false;
		HX_STACK_LINE(495)
		this->emit((int)3,null());
		HX_STACK_LINE(497)
		this->started = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,reset,(void))

Void Scene_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.Scene","update",0xadc308c3,"luxe.Scene.update","luxe/Scene.hx",501,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(503)
		::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(503)
		::String tmp1 = this->get_name();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(503)
		::String tmp2 = (HX_HCSTRING("scene.","\x62","\x49","\xcc","\x3e") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(503)
		tmp->debug->start(tmp2,null());
		HX_STACK_LINE(506)
		this->handle_delayed_additions();
		HX_STACK_LINE(508)
		Float tmp3 = dt;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(508)
		this->emit((int)6,tmp3);
		HX_STACK_LINE(511)
		int tmp4 = this->entity_count;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(511)
		bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(511)
		if ((tmp5)){
			HX_STACK_LINE(512)
			::haxe::ds::StringMap tmp6 = this->entities;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(512)
			Dynamic tmp7 = tmp6->iterator();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(512)
			for(::cpp::FastIterator_obj< ::luxe::Entity > *__it = ::cpp::CreateFastIterator< ::luxe::Entity >(tmp7);  __it->hasNext(); ){
				::luxe::Entity entity = __it->next();
				{
					HX_STACK_LINE(513)
					bool tmp8 = (entity != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(513)
					if ((tmp8)){
						HX_STACK_LINE(514)
						bool tmp9 = entity->destroyed;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(514)
						if ((tmp9)){
							HX_STACK_LINE(514)
							Dynamic();
						}
						else{
							HX_STACK_LINE(514)
							bool tmp10 = entity->get_active();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(514)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(514)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(514)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(514)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(514)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(514)
							if ((tmp14)){
								HX_STACK_LINE(514)
								bool tmp16 = entity->inited;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(514)
								bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(514)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(514)
								tmp15 = !(tmp18);
							}
							else{
								HX_STACK_LINE(514)
								tmp15 = true;
							}
							HX_STACK_LINE(514)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(514)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(514)
							if ((tmp16)){
								HX_STACK_LINE(514)
								bool tmp18 = entity->started;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(514)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(514)
								tmp17 = !(tmp19);
							}
							else{
								HX_STACK_LINE(514)
								tmp17 = true;
							}
							HX_STACK_LINE(514)
							if ((tmp17)){
								HX_STACK_LINE(514)
								Dynamic();
							}
							else{
								HX_STACK_LINE(514)
								{
									HX_STACK_LINE(514)
									::phoenix::Transform tmp18 = entity->get_transform();		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(514)
									::phoenix::Transform _this = tmp18;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(514)
									bool tmp19 = (_this->parent != null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(514)
									if ((tmp19)){
										HX_STACK_LINE(514)
										bool tmp20 = _this->parent->dirty;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(514)
										if ((tmp20)){
											HX_STACK_LINE(514)
											_this->parent->clean();
										}
									}
									HX_STACK_LINE(514)
									bool tmp20 = _this->dirty;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(514)
									bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(514)
									if ((tmp20)){
										HX_STACK_LINE(514)
										bool tmp22 = _this->_cleaning;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(514)
										bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(514)
										tmp21 = !(tmp23);
									}
									else{
										HX_STACK_LINE(514)
										tmp21 = false;
									}
									HX_STACK_LINE(514)
									if ((tmp21)){
										HX_STACK_LINE(514)
										_this->clean();
									}
								}
								HX_STACK_LINE(514)
								Float tmp18 = dt;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(514)
								entity->update(tmp18);
								HX_STACK_LINE(514)
								bool tmp19 = (entity->events != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(514)
								if ((tmp19)){
									HX_STACK_LINE(514)
									entity->events->process();
								}
								HX_STACK_LINE(514)
								bool tmp20 = (entity->component_count > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(514)
								if ((tmp20)){
									HX_STACK_LINE(514)
									::luxe::structural::OrderedMap_String_luxe_Component tmp21 = entity->_components->components;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(514)
									::luxe::structural::OrderedMapIterator_String_luxe_Component tmp22 = ::luxe::structural::OrderedMapIterator_String_luxe_Component_obj::__new(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(514)
									::luxe::structural::OrderedMapIterator_String_luxe_Component _g = tmp22;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(514)
									while((true)){
										HX_STACK_LINE(514)
										int tmp23 = _g->index;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(514)
										int tmp24 = _g->map->_keys->length;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(514)
										bool tmp25 = (tmp23 < tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(514)
										bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(514)
										if ((tmp26)){
											HX_STACK_LINE(514)
											break;
										}
										HX_STACK_LINE(514)
										::luxe::Component tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(514)
										{
											HX_STACK_LINE(514)
											int tmp28 = (_g->index)++;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(514)
											::String tmp29 = _g->map->_keys->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(514)
											::String key = tmp29;		HX_STACK_VAR(key,"key");
											HX_STACK_LINE(514)
											::haxe::ds::StringMap tmp30 = _g->map->map;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(514)
											::String tmp31 = key;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(514)
											::luxe::Component tmp32 = tmp30->get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(514)
											tmp27 = tmp32;
										}
										HX_STACK_LINE(514)
										::luxe::Component _component = tmp27;		HX_STACK_VAR(_component,"_component");
										HX_STACK_LINE(514)
										Float tmp28 = dt;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(514)
										_component->update(tmp28);
									}
								}
								HX_STACK_LINE(514)
								bool tmp21 = (entity->children != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(514)
								bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(514)
								if ((tmp21)){
									HX_STACK_LINE(514)
									int tmp23 = entity->children->length;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(514)
									int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(514)
									tmp22 = (tmp24 > (int)0);
								}
								else{
									HX_STACK_LINE(514)
									tmp22 = false;
								}
								HX_STACK_LINE(514)
								if ((tmp22)){
									HX_STACK_LINE(514)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(514)
									Array< ::Dynamic > _g1 = entity->children;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(514)
									while((true)){
										HX_STACK_LINE(514)
										bool tmp23 = (_g < _g1->length);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(514)
										bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(514)
										if ((tmp24)){
											HX_STACK_LINE(514)
											break;
										}
										HX_STACK_LINE(514)
										::luxe::Entity tmp25 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(514)
										::luxe::Entity _child = tmp25;		HX_STACK_VAR(_child,"_child");
										HX_STACK_LINE(514)
										++(_g);
										HX_STACK_LINE(514)
										Float tmp26 = dt;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(514)
										_child->_update(tmp26);
									}
								}
							}
						}
					}
				}
;
			}
		}
		HX_STACK_LINE(519)
		::luxe::Engine tmp6 = ::Luxe_obj::core;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(519)
		::String tmp7 = this->get_name();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(519)
		::String tmp8 = (HX_HCSTRING("scene.","\x62","\x49","\xcc","\x3e") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(519)
		tmp6->debug->end(tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,update,(void))

Void Scene_obj::handle_delayed_additions( ){
{
		HX_STACK_FRAME("luxe.Scene","handle_delayed_additions",0xbf640c7d,"luxe.Scene.handle_delayed_additions","luxe/Scene.hx",523,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(525)
		int tmp = this->_delayed_init_entities->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(525)
		bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(525)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(525)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(525)
		if ((tmp2)){
			HX_STACK_LINE(525)
			int tmp4 = this->_delayed_reset_entities->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(525)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(525)
			tmp3 = (tmp5 != (int)0);
		}
		else{
			HX_STACK_LINE(525)
			tmp3 = true;
		}
		HX_STACK_LINE(525)
		if ((tmp3)){
			HX_STACK_LINE(138)
			Dynamic();
		}
		HX_STACK_LINE(529)
		int tmp4 = this->_delayed_init_entities->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(529)
		bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(529)
		if ((tmp5)){
			HX_STACK_LINE(530)
			{
				HX_STACK_LINE(530)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(530)
				Array< ::Dynamic > _g1 = this->_delayed_init_entities;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(530)
				while((true)){
					HX_STACK_LINE(530)
					bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(530)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(530)
					if ((tmp7)){
						HX_STACK_LINE(530)
						break;
					}
					HX_STACK_LINE(530)
					::luxe::Entity tmp8 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(530)
					::luxe::Entity entity = tmp8;		HX_STACK_VAR(entity,"entity");
					HX_STACK_LINE(530)
					++(_g);
					HX_STACK_LINE(531)
					bool tmp9 = entity->destroyed;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(531)
					if ((tmp9)){
						HX_STACK_LINE(531)
						continue;
					}
					HX_STACK_LINE(532)
					bool tmp10 = entity->inited;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(532)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(532)
					if ((tmp11)){
						HX_STACK_LINE(534)
						entity->init();
						HX_STACK_LINE(534)
						entity->emit((int)2,null());
						HX_STACK_LINE(534)
						bool tmp12 = (entity->component_count > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(534)
						if ((tmp12)){
							HX_STACK_LINE(534)
							::luxe::structural::OrderedMap_String_luxe_Component tmp13 = entity->_components->components;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(534)
							::luxe::structural::OrderedMapIterator_String_luxe_Component tmp14 = ::luxe::structural::OrderedMapIterator_String_luxe_Component_obj::__new(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(534)
							::luxe::structural::OrderedMapIterator_String_luxe_Component _g2 = tmp14;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(534)
							while((true)){
								HX_STACK_LINE(534)
								int tmp15 = _g2->index;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(534)
								int tmp16 = _g2->map->_keys->length;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(534)
								bool tmp17 = (tmp15 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(534)
								bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(534)
								if ((tmp18)){
									HX_STACK_LINE(534)
									break;
								}
								HX_STACK_LINE(534)
								::luxe::Component tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(534)
								{
									HX_STACK_LINE(534)
									int tmp20 = (_g2->index)++;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(534)
									::String tmp21 = _g2->map->_keys->__get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(534)
									::String key = tmp21;		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(534)
									::haxe::ds::StringMap tmp22 = _g2->map->map;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(534)
									::String tmp23 = key;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(534)
									::luxe::Component tmp24 = tmp22->get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(534)
									tmp19 = tmp24;
								}
								HX_STACK_LINE(534)
								::luxe::Component _component = tmp19;		HX_STACK_VAR(_component,"_component");
								HX_STACK_LINE(534)
								_component->init();
							}
						}
						HX_STACK_LINE(534)
						int tmp13 = entity->children->length;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(534)
						bool tmp14 = (tmp13 > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(534)
						if ((tmp14)){
							HX_STACK_LINE(534)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(534)
							Array< ::Dynamic > _g11 = entity->children;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(534)
							while((true)){
								HX_STACK_LINE(534)
								bool tmp15 = (_g2 < _g11->length);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(534)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(534)
								if ((tmp16)){
									HX_STACK_LINE(534)
									break;
								}
								HX_STACK_LINE(534)
								::luxe::Entity tmp17 = _g11->__get(_g2).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(534)
								::luxe::Entity _child = tmp17;		HX_STACK_VAR(_child,"_child");
								HX_STACK_LINE(534)
								++(_g2);
								HX_STACK_LINE(534)
								_child->_init();
							}
						}
						HX_STACK_LINE(534)
						entity->inited = true;
					}
					else{
						HX_STACK_LINE(138)
						Dynamic();
					}
				}
			}
			HX_STACK_LINE(539)
			this->_delayed_init_entities = null();
			HX_STACK_LINE(540)
			this->_delayed_init_entities = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(543)
		int tmp6 = this->_delayed_reset_entities->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(543)
		bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(543)
		if ((tmp7)){
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(544)
				Array< ::Dynamic > _g1 = this->_delayed_reset_entities;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(544)
				while((true)){
					HX_STACK_LINE(544)
					bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(544)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(544)
					if ((tmp9)){
						HX_STACK_LINE(544)
						break;
					}
					HX_STACK_LINE(544)
					::luxe::Entity tmp10 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(544)
					::luxe::Entity entity = tmp10;		HX_STACK_VAR(entity,"entity");
					HX_STACK_LINE(544)
					++(_g);
					HX_STACK_LINE(545)
					bool tmp11 = entity->destroyed;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(545)
					if ((tmp11)){
						HX_STACK_LINE(545)
						continue;
					}
					HX_STACK_LINE(547)
					{
						HX_STACK_LINE(547)
						entity->onreset();
						HX_STACK_LINE(547)
						entity->emit((int)3,null());
						HX_STACK_LINE(547)
						bool tmp12 = (entity->component_count > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(547)
						if ((tmp12)){
							HX_STACK_LINE(547)
							::luxe::structural::OrderedMap_String_luxe_Component tmp13 = entity->_components->components;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(547)
							::luxe::structural::OrderedMapIterator_String_luxe_Component tmp14 = ::luxe::structural::OrderedMapIterator_String_luxe_Component_obj::__new(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(547)
							::luxe::structural::OrderedMapIterator_String_luxe_Component _g2 = tmp14;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(547)
							while((true)){
								HX_STACK_LINE(547)
								int tmp15 = _g2->index;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(547)
								int tmp16 = _g2->map->_keys->length;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(547)
								bool tmp17 = (tmp15 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(547)
								bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(547)
								if ((tmp18)){
									HX_STACK_LINE(547)
									break;
								}
								HX_STACK_LINE(547)
								::luxe::Component tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(547)
								{
									HX_STACK_LINE(547)
									int tmp20 = (_g2->index)++;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(547)
									::String tmp21 = _g2->map->_keys->__get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(547)
									::String key = tmp21;		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(547)
									::haxe::ds::StringMap tmp22 = _g2->map->map;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(547)
									::String tmp23 = key;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(547)
									::luxe::Component tmp24 = tmp22->get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(547)
									tmp19 = tmp24;
								}
								HX_STACK_LINE(547)
								::luxe::Component _component = tmp19;		HX_STACK_VAR(_component,"_component");
								HX_STACK_LINE(547)
								_component->onreset();
							}
						}
						HX_STACK_LINE(547)
						int tmp13 = entity->children->length;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(547)
						bool tmp14 = (tmp13 > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(547)
						if ((tmp14)){
							HX_STACK_LINE(547)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(547)
							Array< ::Dynamic > _g11 = entity->children;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(547)
							while((true)){
								HX_STACK_LINE(547)
								bool tmp15 = (_g2 < _g11->length);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(547)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(547)
								if ((tmp16)){
									HX_STACK_LINE(547)
									break;
								}
								HX_STACK_LINE(547)
								::luxe::Entity tmp17 = _g11->__get(_g2).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(547)
								::luxe::Entity _child = tmp17;		HX_STACK_VAR(_child,"_child");
								HX_STACK_LINE(547)
								++(_g2);
								HX_STACK_LINE(547)
								_child->_reset(null());
								HX_STACK_LINE(547)
								Dynamic();
							}
						}
						HX_STACK_LINE(547)
						{
							HX_STACK_LINE(547)
							Float _rate = entity->fixed_rate;		HX_STACK_VAR(_rate,"_rate");
							HX_STACK_LINE(547)
							{
								HX_STACK_LINE(547)
								bool tmp15 = (entity->fixed_rate_timer != null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(547)
								if ((tmp15)){
									HX_STACK_LINE(547)
									entity->fixed_rate_timer->stop();
									HX_STACK_LINE(547)
									entity->fixed_rate_timer = null();
								}
							}
							HX_STACK_LINE(547)
							bool tmp15 = (_rate != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(547)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(547)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(547)
							if ((tmp16)){
								HX_STACK_LINE(547)
								::luxe::Entity tmp18 = entity->get_parent();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(547)
								::luxe::Entity tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(547)
								::luxe::Entity tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(547)
								tmp17 = (tmp20 == null());
							}
							else{
								HX_STACK_LINE(547)
								tmp17 = false;
							}
							HX_STACK_LINE(547)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(547)
							if ((tmp17)){
								HX_STACK_LINE(547)
								bool tmp19 = entity->destroyed;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(547)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(547)
								tmp18 = !(tmp20);
							}
							else{
								HX_STACK_LINE(547)
								tmp18 = false;
							}
							HX_STACK_LINE(547)
							if ((tmp18)){
								HX_STACK_LINE(547)
								::snow::api::Timer tmp19 = ::snow::api::Timer_obj::__new(_rate);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(547)
								entity->fixed_rate_timer = tmp19;
								HX_STACK_LINE(547)
								entity->fixed_rate_timer->run = entity->_fixed_update_dyn();
							}
						}
						HX_STACK_LINE(547)
						entity->started = true;
					}
				}
			}
			HX_STACK_LINE(549)
			this->_delayed_reset_entities = null();
			HX_STACK_LINE(550)
			this->_delayed_reset_entities = Array_obj< ::Dynamic >::__new();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,handle_delayed_additions,(void))

int Scene_obj::get_length( ){
	HX_STACK_FRAME("luxe.Scene","get_length",0x88bd6c69,"luxe.Scene.get_length","luxe/Scene.hx",555,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(557)
	::haxe::ds::StringMap tmp = this->entities;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(557)
	Dynamic tmp1 = ((Dynamic)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(557)
	int tmp2 = ::Lambda_obj::count(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(557)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_length,return )

::String Scene_obj::toString( ){
	HX_STACK_FRAME("luxe.Scene","toString",0xab9df5e6,"luxe.Scene.toString","luxe/Scene.hx",561,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(563)
	::String tmp = this->get_name();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(563)
	::String tmp1 = (HX_HCSTRING("luxe Scene: ","\x68","\x44","\x23","\xa6") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(563)
	::String tmp2 = (tmp1 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(563)
	int tmp3 = this->get_length();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(563)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(563)
	::String tmp5 = (tmp4 + HX_HCSTRING(" entities / id: ","\xb1","\x20","\xb8","\xc4"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(563)
	::String tmp6 = this->get_id();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(563)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(563)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,toString,return )


Scene_obj::Scene_obj()
{
}

void Scene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene);
	HX_MARK_MEMBER_NAME(entities,"entities");
	HX_MARK_MEMBER_NAME(inited,"inited");
	HX_MARK_MEMBER_NAME(started,"started");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(destroyed,"destroyed");
	HX_MARK_MEMBER_NAME(_delayed_init_entities,"_delayed_init_entities");
	HX_MARK_MEMBER_NAME(_delayed_reset_entities,"_delayed_reset_entities");
	HX_MARK_MEMBER_NAME(_has_changed,"_has_changed");
	HX_MARK_MEMBER_NAME(entity_count,"entity_count");
	::luxe::Objects_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(entities,"entities");
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(started,"started");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(destroyed,"destroyed");
	HX_VISIT_MEMBER_NAME(_delayed_init_entities,"_delayed_init_entities");
	HX_VISIT_MEMBER_NAME(_delayed_reset_entities,"_delayed_reset_entities");
	HX_VISIT_MEMBER_NAME(_has_changed,"_has_changed");
	HX_VISIT_MEMBER_NAME(entity_count,"entity_count");
	::luxe::Objects_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Scene_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"keyup") ) { return keyup_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp == hx::paccAlways ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { return started; }
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseup") ) { return mouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"touchup") ) { return touchup_dyn(); }
		if (HX_FIELD_EQ(inName,"inputup") ) { return inputup_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"entities") ) { return entities; }
		if (HX_FIELD_EQ(inName,"_destroy") ) { return _destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_do_init") ) { return _do_init_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { return destroyed; }
		if (HX_FIELD_EQ(inName,"prerender") ) { return prerender_dyn(); }
		if (HX_FIELD_EQ(inName,"textinput") ) { return textinput_dyn(); }
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"mousemove") ) { return mousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"touchdown") ) { return touchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"touchmove") ) { return touchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepadup") ) { return gamepadup_dyn(); }
		if (HX_FIELD_EQ(inName,"inputdown") ) { return inputdown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"postrender") ) { return postrender_dyn(); }
		if (HX_FIELD_EQ(inName,"mousewheel") ) { return mousewheel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gamepadaxis") ) { return gamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepaddown") ) { return gamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"windowmoved") ) { return windowmoved_dyn(); }
		if (HX_FIELD_EQ(inName,"windowsized") ) { return windowsized_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_has_changed") ) { return _has_changed; }
		if (HX_FIELD_EQ(inName,"entity_count") ) { return entity_count; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepaddevice") ) { return gamepaddevice_dyn(); }
		if (HX_FIELD_EQ(inName,"windowresized") ) { return windowresized_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_named_like") ) { return get_named_like_dyn(); }
		if (HX_FIELD_EQ(inName,"windowrestored") ) { return windowrestored_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"windowminimized") ) { return windowminimized_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_delayed_init_entities") ) { return _delayed_init_entities; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_delayed_reset_entities") ) { return _delayed_reset_entities; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"handle_duplicate_warning") ) { return handle_duplicate_warning_dyn(); }
		if (HX_FIELD_EQ(inName,"handle_delayed_additions") ) { return handle_delayed_additions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Scene_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { started=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"entities") ) { entities=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { destroyed=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_has_changed") ) { _has_changed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"entity_count") ) { entity_count=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_delayed_init_entities") ) { _delayed_init_entities=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_delayed_reset_entities") ) { _delayed_reset_entities=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("entities","\x41","\x96","\x95","\x92"));
	outFields->push(HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"));
	outFields->push(HX_HCSTRING("started","\x41","\x29","\x1b","\x35"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4"));
	outFields->push(HX_HCSTRING("_delayed_init_entities","\x34","\xe8","\x4b","\xde"));
	outFields->push(HX_HCSTRING("_delayed_reset_entities","\xcd","\x49","\xde","\xfc"));
	outFields->push(HX_HCSTRING("_has_changed","\xd0","\xe1","\x93","\x65"));
	outFields->push(HX_HCSTRING("entity_count","\x73","\x1b","\xa6","\xcf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Scene_obj,entities),HX_HCSTRING("entities","\x41","\x96","\x95","\x92")},
	{hx::fsBool,(int)offsetof(Scene_obj,inited),HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97")},
	{hx::fsBool,(int)offsetof(Scene_obj,started),HX_HCSTRING("started","\x41","\x29","\x1b","\x35")},
	{hx::fsInt,(int)offsetof(Scene_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsBool,(int)offsetof(Scene_obj,destroyed),HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Scene_obj,_delayed_init_entities),HX_HCSTRING("_delayed_init_entities","\x34","\xe8","\x4b","\xde")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Scene_obj,_delayed_reset_entities),HX_HCSTRING("_delayed_reset_entities","\xcd","\x49","\xde","\xfc")},
	{hx::fsBool,(int)offsetof(Scene_obj,_has_changed),HX_HCSTRING("_has_changed","\xd0","\xe1","\x93","\x65")},
	{hx::fsInt,(int)offsetof(Scene_obj,entity_count),HX_HCSTRING("entity_count","\x73","\x1b","\xa6","\xcf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("entities","\x41","\x96","\x95","\x92"),
	HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"),
	HX_HCSTRING("started","\x41","\x29","\x1b","\x35"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4"),
	HX_HCSTRING("_delayed_init_entities","\x34","\xe8","\x4b","\xde"),
	HX_HCSTRING("_delayed_reset_entities","\xcd","\x49","\xde","\xfc"),
	HX_HCSTRING("_has_changed","\xd0","\xe1","\x93","\x65"),
	HX_HCSTRING("handle_duplicate_warning","\xd1","\x8a","\x7d","\x4b"),
	HX_HCSTRING("entity_count","\x73","\x1b","\xa6","\xcf"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("get_named_like","\x26","\x8b","\x54","\xbc"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("prerender","\xb9","\x07","\x36","\x2f"),
	HX_HCSTRING("postrender","\xb6","\x77","\xcd","\x25"),
	HX_HCSTRING("keydown","\x81","\x3d","\x6e","\xb1"),
	HX_HCSTRING("keyup","\xba","\xd5","\xfe","\xde"),
	HX_HCSTRING("textinput","\x3d","\xe4","\xdd","\xc3"),
	HX_HCSTRING("mousedown","\x07","\x85","\xe9","\x03"),
	HX_HCSTRING("mousewheel","\x56","\xb8","\x59","\x54"),
	HX_HCSTRING("mouseup","\xc0","\x0f","\x73","\xc0"),
	HX_HCSTRING("mousemove","\xb6","\x6f","\xdc","\x09"),
	HX_HCSTRING("touchdown","\xa1","\x5b","\x01","\x1d"),
	HX_HCSTRING("touchup","\xda","\x2b","\xf8","\xd8"),
	HX_HCSTRING("touchmove","\x50","\x46","\xf4","\x22"),
	HX_HCSTRING("gamepadaxis","\xc2","\x61","\xf2","\xe5"),
	HX_HCSTRING("gamepadup","\x3c","\x71","\x38","\x5f"),
	HX_HCSTRING("gamepaddown","\x83","\x3d","\xe7","\xe7"),
	HX_HCSTRING("gamepaddevice","\xf7","\x6b","\xa5","\x5b"),
	HX_HCSTRING("windowmoved","\x43","\xf2","\x0a","\x6a"),
	HX_HCSTRING("windowresized","\x00","\x26","\x3a","\x51"),
	HX_HCSTRING("windowsized","\x93","\x2e","\x7e","\xda"),
	HX_HCSTRING("windowminimized","\x96","\x69","\x37","\x2d"),
	HX_HCSTRING("windowrestored","\x46","\x01","\xd4","\x0f"),
	HX_HCSTRING("inputdown","\x6c","\x89","\xbf","\x1e"),
	HX_HCSTRING("inputup","\xe5","\xc0","\x1e","\xd4"),
	HX_HCSTRING("_destroy","\x7b","\x86","\x3e","\x5e"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("_do_init","\x05","\x21","\x84","\xd2"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("handle_delayed_additions","\x43","\x53","\x9d","\xd5"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

#endif

hx::Class Scene_obj::__mClass;

void Scene_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Scene_obj >;
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
