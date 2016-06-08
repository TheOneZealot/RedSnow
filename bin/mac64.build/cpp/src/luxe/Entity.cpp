#include <hxcpp.h>

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
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
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
#ifndef INCLUDED_luxe_structural_OrderedMapIterator_String_luxe_Component
#include <luxe/structural/OrderedMapIterator_String_luxe_Component.h>
#endif
#ifndef INCLUDED_luxe_structural_OrderedMap_String_luxe_Component
#include <luxe/structural/OrderedMap_String_luxe_Component.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Spatial
#include <phoenix/Spatial.h>
#endif
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_api_Timer
#include <snow/api/Timer.h>
#endif
#ifndef INCLUDED_snow_types_WindowEvent
#include <snow/types/WindowEvent.h>
#endif
namespace luxe{

Void Entity_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.Entity","new",0x3aab5f6d,"luxe.Entity.new","luxe/Entity.hx",22,0x55caa482)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(250)
	this->component_count = (int)0;
	HX_STACK_LINE(45)
	this->active = true;
	HX_STACK_LINE(39)
	this->fixed_rate = ((Float)0);
	HX_STACK_LINE(36)
	this->started = false;
	HX_STACK_LINE(34)
	this->inited = false;
	HX_STACK_LINE(32)
	this->destroyed = false;
	HX_STACK_LINE(136)
	super::__construct(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"),null());
	HX_STACK_LINE(139)
	{
		HX_STACK_LINE(139)
		::luxe::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(139)
		::String tmp = _g->get_name();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		::String tmp1 = this->get_id();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		::String tmp2 = (HX_HCSTRING(".","\x2e","\x00","\x00","\x00") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		::String tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		_g->set_name(tmp3);
	}
	HX_STACK_LINE(141)
	this->options = _options;
	HX_STACK_LINE(145)
	::luxe::components::Components tmp = ::luxe::components::Components_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	this->_components = tmp;
	HX_STACK_LINE(146)
	this->children = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(147)
	::luxe::Events tmp1 = ::luxe::Events_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	this->events = tmp1;
	HX_STACK_LINE(149)
	Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(149)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(149)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(149)
	if ((tmp3)){
		HX_STACK_LINE(149)
		Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(149)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(149)
		tmp4 = (tmp6->__Field(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"), hx::paccDynamic ) != null());
	}
	else{
		HX_STACK_LINE(149)
		tmp4 = false;
	}
	HX_STACK_LINE(149)
	if ((tmp4)){
		HX_STACK_LINE(150)
		Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(150)
		this->set_transform(tmp5->__Field(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"), hx::paccDynamic ));
	}
	else{
		HX_STACK_LINE(152)
		::phoenix::Transform tmp5 = ::phoenix::Transform_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(152)
		this->set_transform(tmp5);
	}
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		::phoenix::Transform tmp5 = this->get_transform();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		::phoenix::Transform _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(156)
		bool tmp6 = (_this->_pos_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(156)
		if ((tmp6)){
			HX_STACK_LINE(156)
			_this->_pos_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(156)
		Dynamic tmp7 = this->set_pos_from_transform_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(156)
		_this->_pos_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
	HX_STACK_LINE(157)
	{
		HX_STACK_LINE(157)
		::phoenix::Transform tmp5 = this->get_transform();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(157)
		::phoenix::Transform _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(157)
		bool tmp6 = (_this->_scale_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(157)
		if ((tmp6)){
			HX_STACK_LINE(157)
			_this->_scale_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(157)
		Dynamic tmp7 = this->set_scale_from_transform_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(157)
		_this->_scale_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
	HX_STACK_LINE(158)
	{
		HX_STACK_LINE(158)
		::phoenix::Transform tmp5 = this->get_transform();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(158)
		::phoenix::Transform _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(158)
		bool tmp6 = (_this->_origin_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(158)
		if ((tmp6)){
			HX_STACK_LINE(158)
			_this->_origin_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(158)
		Dynamic tmp7 = this->set_origin_from_transform_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(158)
		_this->_origin_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
	HX_STACK_LINE(159)
	{
		HX_STACK_LINE(159)
		::phoenix::Transform tmp5 = this->get_transform();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(159)
		::phoenix::Transform _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(159)
		bool tmp6 = (_this->_parent_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(159)
		if ((tmp6)){
			HX_STACK_LINE(159)
			_this->_parent_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(159)
		Dynamic tmp7 = this->set_parent_from_transform_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(159)
		_this->_parent_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
	HX_STACK_LINE(160)
	{
		HX_STACK_LINE(160)
		::phoenix::Transform tmp5 = this->get_transform();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(160)
		::phoenix::Transform _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(160)
		bool tmp6 = (_this->_rotation_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(160)
		if ((tmp6)){
			HX_STACK_LINE(160)
			_this->_rotation_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(160)
		Dynamic tmp7 = this->set_rotation_from_transform_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(160)
		_this->_rotation_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
	HX_STACK_LINE(162)
	Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(162)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(162)
	if ((tmp6)){
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(166)
			Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(166)
			bool tmp8 = (tmp7->__Field(HX_HCSTRING("name_unique","\xc5","\xe1","\x83","\x6f"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(166)
			if ((tmp8)){
				HX_STACK_LINE(166)
				Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(166)
				tmp9->__FieldRef(HX_HCSTRING("name_unique","\xc5","\xe1","\x83","\x6f")) = false;
			}
			HX_STACK_LINE(166)
			Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(166)
			tmp9->__Field(HX_HCSTRING("name_unique","\xc5","\xe1","\x83","\x6f"), hx::paccDynamic );
		}
		HX_STACK_LINE(168)
		Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(168)
		bool tmp8 = (tmp7->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(168)
		if ((tmp8)){
			HX_STACK_LINE(169)
			Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(169)
			this->set_name(tmp9->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));
			HX_STACK_LINE(170)
			Dynamic tmp10 = this->options;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(170)
			if ((tmp10->__Field(HX_HCSTRING("name_unique","\xc5","\xe1","\x83","\x6f"), hx::paccDynamic ))){
				HX_STACK_LINE(171)
				::luxe::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(171)
				::String tmp11 = _g->get_name();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(171)
				::String tmp12 = this->get_id();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(171)
				::String tmp13 = (HX_HCSTRING(".","\x2e","\x00","\x00","\x00") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(171)
				::String tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(171)
				_g->set_name(tmp14);
			}
		}
		HX_STACK_LINE(176)
		Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(176)
		bool tmp10 = (tmp9->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(176)
		if ((tmp10)){
			HX_STACK_LINE(177)
			Dynamic tmp11 = this->options;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(177)
			::phoenix::Vector _op = tmp11->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(_op,"_op");
			HX_STACK_LINE(178)
			::phoenix::Vector tmp12 = ::phoenix::Vector_obj::__new(_op->x,_op->y,_op->z,_op->w);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(178)
			this->set_pos(tmp12);
		}
		HX_STACK_LINE(181)
		Dynamic tmp11 = this->options;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(181)
		bool tmp12 = (tmp11->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(181)
		if ((tmp12)){
			HX_STACK_LINE(182)
			Dynamic tmp13 = this->options;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(182)
			::phoenix::Vector _os = tmp13->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(_os,"_os");
			HX_STACK_LINE(183)
			::phoenix::Vector tmp14 = ::phoenix::Vector_obj::__new(_os->x,_os->y,_os->z,_os->w);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(183)
			this->set_scale(tmp14);
		}
		HX_STACK_LINE(190)
		bool _should_add = true;		HX_STACK_VAR(_should_add,"_should_add");
		HX_STACK_LINE(192)
		Dynamic tmp13 = this->options;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(192)
		bool tmp14 = (tmp13->__Field(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(192)
		if ((tmp14)){
			HX_STACK_LINE(193)
			Dynamic tmp15 = this->options;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(193)
			bool tmp16 = (tmp15->__Field(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10"), hx::paccDynamic ) == true);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(193)
			if ((tmp16)){
				HX_STACK_LINE(194)
				_should_add = false;
				HX_STACK_LINE(171)
				Dynamic();
			}
		}
		HX_STACK_LINE(199)
		Dynamic tmp15 = this->options;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(199)
		bool tmp16 = (tmp15->__Field(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(199)
		if ((tmp16)){
			HX_STACK_LINE(201)
			_should_add = false;
			HX_STACK_LINE(202)
			Dynamic tmp17 = this->options;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(202)
			this->set_parent(tmp17->__Field(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"), hx::paccDynamic ));
			HX_STACK_LINE(171)
			Dynamic();
		}
		HX_STACK_LINE(207)
		bool tmp17 = _should_add;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(207)
		if ((tmp17)){
			HX_STACK_LINE(209)
			Dynamic tmp18 = this->options;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(209)
			bool tmp19 = (tmp18->__Field(HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(209)
			if ((tmp19)){
				HX_STACK_LINE(210)
				Dynamic tmp20 = this->options;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(210)
				this->set_scene(tmp20->__Field(HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"), hx::paccDynamic ));
				HX_STACK_LINE(171)
				Dynamic();
			}
			else{
				HX_STACK_LINE(213)
				::luxe::Scene tmp20 = ::Luxe_obj::scene;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(213)
				this->set_scene(tmp20);
				HX_STACK_LINE(171)
				Dynamic();
			}
		}
	}
	else{
		HX_STACK_LINE(221)
		::luxe::Scene tmp7 = ::Luxe_obj::scene;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(221)
		this->set_scene(tmp7);
		HX_STACK_LINE(171)
		Dynamic();
	}
	HX_STACK_LINE(229)
	::luxe::Scene tmp7 = this->get_scene();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(229)
	bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(229)
	if ((tmp8)){
		HX_STACK_LINE(233)
		::luxe::Scene tmp9 = this->get_scene();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(233)
		tmp9->add(hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(171)
		Dynamic();
	}
	HX_STACK_LINE(171)
	Dynamic();
}
;
	return null();
}

//Entity_obj::~Entity_obj() { }

Dynamic Entity_obj::__CreateEmpty() { return  new Entity_obj; }
hx::ObjectPtr< Entity_obj > Entity_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Entity_obj > _result_ = new Entity_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Entity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Entity_obj > _result_ = new Entity_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Entity_obj::init( ){
{
		HX_STACK_FRAME("luxe.Entity","init",0x1800d763,"luxe.Entity.init","luxe/Entity.hx",73,0x55caa482)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,init,(void))

Void Entity_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.Entity","update",0xab291d1c,"luxe.Entity.update","luxe/Entity.hx",75,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,update,(void))

Void Entity_obj::onfixedupdate( Float rate){
{
		HX_STACK_FRAME("luxe.Entity","onfixedupdate",0xe3a5550b,"luxe.Entity.onfixedupdate","luxe/Entity.hx",77,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rate,"rate")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onfixedupdate,(void))

Void Entity_obj::onreset( ){
{
		HX_STACK_FRAME("luxe.Entity","onreset",0x64d911dd,"luxe.Entity.onreset","luxe/Entity.hx",80,0x55caa482)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,onreset,(void))

Void Entity_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.Entity","ondestroy",0xde639488,"luxe.Entity.ondestroy","luxe/Entity.hx",82,0x55caa482)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,ondestroy,(void))

Void Entity_obj::onkeyup( ::luxe::KeyEvent event){
{
		HX_STACK_FRAME("luxe.Entity","onkeyup",0x5d0f9dc8,"luxe.Entity.onkeyup","luxe/Entity.hx",85,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onkeyup,(void))

Void Entity_obj::onkeydown( ::luxe::KeyEvent event){
{
		HX_STACK_FRAME("luxe.Entity","onkeydown",0x6b4ba50f,"luxe.Entity.onkeydown","luxe/Entity.hx",87,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onkeydown,(void))

Void Entity_obj::ontextinput( ::luxe::TextEvent event){
{
		HX_STACK_FRAME("luxe.Entity","ontextinput",0xbd8ecb4b,"luxe.Entity.ontextinput","luxe/Entity.hx",89,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ontextinput,(void))

Void Entity_obj::oninputdown( ::luxe::InputEvent event){
{
		HX_STACK_FRAME("luxe.Entity","oninputdown",0x1870707a,"luxe.Entity.oninputdown","luxe/Entity.hx",92,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,oninputdown,(void))

Void Entity_obj::oninputup( ::luxe::InputEvent event){
{
		HX_STACK_FRAME("luxe.Entity","oninputup",0x8dfc2873,"luxe.Entity.oninputup","luxe/Entity.hx",94,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,oninputup,(void))

Void Entity_obj::onmousedown( ::luxe::MouseEvent event){
{
		HX_STACK_FRAME("luxe.Entity","onmousedown",0xfd9a6c15,"luxe.Entity.onmousedown","luxe/Entity.hx",97,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onmousedown,(void))

Void Entity_obj::onmouseup( ::luxe::MouseEvent event){
{
		HX_STACK_FRAME("luxe.Entity","onmouseup",0x7a50774e,"luxe.Entity.onmouseup","luxe/Entity.hx",99,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onmouseup,(void))

Void Entity_obj::onmousemove( ::luxe::MouseEvent event){
{
		HX_STACK_FRAME("luxe.Entity","onmousemove",0x038d56c4,"luxe.Entity.onmousemove","luxe/Entity.hx",101,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onmousemove,(void))

Void Entity_obj::onmousewheel( ::luxe::MouseEvent event){
{
		HX_STACK_FRAME("luxe.Entity","onmousewheel",0xd572fd88,"luxe.Entity.onmousewheel","luxe/Entity.hx",103,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onmousewheel,(void))

Void Entity_obj::ontouchdown( ::luxe::TouchEvent event){
{
		HX_STACK_FRAME("luxe.Entity","ontouchdown",0x16b242af,"luxe.Entity.ontouchdown","luxe/Entity.hx",106,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ontouchdown,(void))

Void Entity_obj::ontouchup( ::luxe::TouchEvent event){
{
		HX_STACK_FRAME("luxe.Entity","ontouchup",0x92d59368,"luxe.Entity.ontouchup","luxe/Entity.hx",108,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ontouchup,(void))

Void Entity_obj::ontouchmove( ::luxe::TouchEvent event){
{
		HX_STACK_FRAME("luxe.Entity","ontouchmove",0x1ca52d5e,"luxe.Entity.ontouchmove","luxe/Entity.hx",110,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ontouchmove,(void))

Void Entity_obj::ongamepadup( ::luxe::GamepadEvent event){
{
		HX_STACK_FRAME("luxe.Entity","ongamepadup",0x58e9584a,"luxe.Entity.ongamepadup","luxe/Entity.hx",113,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ongamepadup,(void))

Void Entity_obj::ongamepaddown( ::luxe::GamepadEvent event){
{
		HX_STACK_FRAME("luxe.Entity","ongamepaddown",0x5cea8411,"luxe.Entity.ongamepaddown","luxe/Entity.hx",115,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ongamepaddown,(void))

Void Entity_obj::ongamepadaxis( ::luxe::GamepadEvent event){
{
		HX_STACK_FRAME("luxe.Entity","ongamepadaxis",0x5af5a850,"luxe.Entity.ongamepadaxis","luxe/Entity.hx",117,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ongamepadaxis,(void))

Void Entity_obj::ongamepaddevice( ::luxe::GamepadEvent event){
{
		HX_STACK_FRAME("luxe.Entity","ongamepaddevice",0x8cf1f205,"luxe.Entity.ongamepaddevice","luxe/Entity.hx",119,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ongamepaddevice,(void))

Void Entity_obj::onwindowmoved( ::snow::types::WindowEvent event){
{
		HX_STACK_FRAME("luxe.Entity","onwindowmoved",0xdf0e38d1,"luxe.Entity.onwindowmoved","luxe/Entity.hx",122,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onwindowmoved,(void))

Void Entity_obj::onwindowresized( ::snow::types::WindowEvent event){
{
		HX_STACK_FRAME("luxe.Entity","onwindowresized",0x8286ac0e,"luxe.Entity.onwindowresized","luxe/Entity.hx",124,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onwindowresized,(void))

Void Entity_obj::onwindowsized( ::snow::types::WindowEvent event){
{
		HX_STACK_FRAME("luxe.Entity","onwindowsized",0x4f817521,"luxe.Entity.onwindowsized","luxe/Entity.hx",126,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onwindowsized,(void))

Void Entity_obj::onwindowminimized( ::snow::types::WindowEvent event){
{
		HX_STACK_FRAME("luxe.Entity","onwindowminimized",0xaf3c0f24,"luxe.Entity.onwindowminimized","luxe/Entity.hx",128,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onwindowminimized,(void))

Void Entity_obj::onwindowrestored( ::snow::types::WindowEvent event){
{
		HX_STACK_FRAME("luxe.Entity","onwindowrestored",0x017cc778,"luxe.Entity.onwindowrestored","luxe/Entity.hx",130,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onwindowrestored,(void))

Dynamic Entity_obj::add( Dynamic _component){
	HX_STACK_FRAME("luxe.Entity","add",0x3aa1812e,"luxe.Entity.add","luxe/Entity.hx",251,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_component,"_component")
	HX_STACK_LINE(252)
	(this->component_count)++;
	HX_STACK_LINE(253)
	::luxe::components::Components tmp = this->_components;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(253)
	Dynamic tmp1 = _component;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(253)
	Dynamic tmp2 = tmp->add(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(253)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,add,return )

bool Entity_obj::remove( ::String _name){
	HX_STACK_FRAME("luxe.Entity","remove",0x28ac3357,"luxe.Entity.remove","luxe/Entity.hx",257,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(258)
	(this->component_count)--;
	HX_STACK_LINE(259)
	::luxe::components::Components tmp = this->_components;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(259)
	::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(259)
	bool tmp2 = tmp->remove(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(259)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,remove,return )

Dynamic Entity_obj::get( ::String _name,Dynamic __o__in_children){
Dynamic _in_children = __o__in_children.Default(false);
	HX_STACK_FRAME("luxe.Entity","get",0x3aa60fa3,"luxe.Entity.get","luxe/Entity.hx",263,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_in_children,"_in_children")
{
		HX_STACK_LINE(264)
		::luxe::components::Components tmp = this->_components;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(264)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(264)
		Dynamic tmp2 = _in_children;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(264)
		Dynamic tmp3 = tmp->get(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(264)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,get,return )

cpp::ArrayBase Entity_obj::get_any( ::String _name,Dynamic __o__in_children,Dynamic __o__first_only){
Dynamic _in_children = __o__in_children.Default(false);
Dynamic _first_only = __o__first_only.Default(true);
	HX_STACK_FRAME("luxe.Entity","get_any",0xa1bf5d10,"luxe.Entity.get_any","luxe/Entity.hx",268,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_in_children,"_in_children")
	HX_STACK_ARG(_first_only,"_first_only")
{
		HX_STACK_LINE(269)
		::luxe::components::Components tmp = this->_components;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(269)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(269)
		Dynamic tmp2 = _in_children;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(269)
		Dynamic tmp3 = _first_only;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(269)
		return tmp->get_any(tmp1,tmp2,tmp3);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,get_any,return )

bool Entity_obj::has( ::String _name){
	HX_STACK_FRAME("luxe.Entity","has",0x3aa6ce67,"luxe.Entity.has","luxe/Entity.hx",273,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(274)
	::luxe::components::Components tmp = this->_components;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(274)
	::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(274)
	bool tmp2 = tmp->has(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(274)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,has,return )

Void Entity_obj::_init( ){
{
		HX_STACK_FRAME("luxe.Entity","_init",0x236f833c,"luxe.Entity._init","luxe/Entity.hx",282,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(289)
		this->init();
		HX_STACK_LINE(292)
		this->emit((int)2,null());
		HX_STACK_LINE(294)
		int tmp = this->component_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(294)
		if ((tmp1)){
			HX_STACK_LINE(296)
			::luxe::components::Components tmp2 = this->_components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(296)
			::luxe::structural::OrderedMap_String_luxe_Component tmp3 = tmp2->components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(296)
			::luxe::structural::OrderedMapIterator_String_luxe_Component tmp4 = ::luxe::structural::OrderedMapIterator_String_luxe_Component_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(296)
			::luxe::structural::OrderedMapIterator_String_luxe_Component _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(296)
			while((true)){
				HX_STACK_LINE(296)
				int tmp5 = _g->index;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(296)
				int tmp6 = _g->map->_keys->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(296)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(296)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(296)
				if ((tmp8)){
					HX_STACK_LINE(296)
					break;
				}
				HX_STACK_LINE(296)
				::luxe::Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					int tmp10 = (_g->index)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(296)
					::String tmp11 = _g->map->_keys->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(296)
					::String key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(296)
					::haxe::ds::StringMap tmp12 = _g->map->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(296)
					::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(296)
					::luxe::Component tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(296)
					tmp9 = tmp14;
				}
				HX_STACK_LINE(296)
				::luxe::Component _component = tmp9;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(298)
				_component->init();
			}
		}
		HX_STACK_LINE(303)
		int tmp2 = this->children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(303)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(303)
		if ((tmp3)){
			HX_STACK_LINE(304)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(304)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(304)
			while((true)){
				HX_STACK_LINE(304)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(304)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(304)
				if ((tmp5)){
					HX_STACK_LINE(304)
					break;
				}
				HX_STACK_LINE(304)
				::luxe::Entity tmp6 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(304)
				::luxe::Entity _child = tmp6;		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(304)
				++(_g);
				HX_STACK_LINE(306)
				_child->_init();
			}
		}
		HX_STACK_LINE(311)
		this->inited = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,_init,(void))

Void Entity_obj::_reset( Dynamic _){
{
		HX_STACK_FRAME("luxe.Entity","_reset",0x06d32823,"luxe.Entity._reset","luxe/Entity.hx",316,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(321)
		this->onreset();
		HX_STACK_LINE(323)
		this->emit((int)3,null());
		HX_STACK_LINE(325)
		int tmp = this->component_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(325)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(325)
		if ((tmp1)){
			HX_STACK_LINE(326)
			::luxe::components::Components tmp2 = this->_components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(326)
			::luxe::structural::OrderedMap_String_luxe_Component tmp3 = tmp2->components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(326)
			::luxe::structural::OrderedMapIterator_String_luxe_Component tmp4 = ::luxe::structural::OrderedMapIterator_String_luxe_Component_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(326)
			::luxe::structural::OrderedMapIterator_String_luxe_Component _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(326)
			while((true)){
				HX_STACK_LINE(326)
				int tmp5 = _g->index;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(326)
				int tmp6 = _g->map->_keys->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(326)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(326)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(326)
				if ((tmp8)){
					HX_STACK_LINE(326)
					break;
				}
				HX_STACK_LINE(326)
				::luxe::Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(326)
				{
					HX_STACK_LINE(326)
					int tmp10 = (_g->index)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(326)
					::String tmp11 = _g->map->_keys->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(326)
					::String key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(326)
					::haxe::ds::StringMap tmp12 = _g->map->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(326)
					::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(326)
					::luxe::Component tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(326)
					tmp9 = tmp14;
				}
				HX_STACK_LINE(326)
				::luxe::Component _component = tmp9;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(328)
				_component->onreset();
			}
		}
		HX_STACK_LINE(333)
		int tmp2 = this->children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(333)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(333)
		if ((tmp3)){
			HX_STACK_LINE(334)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(334)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(334)
			while((true)){
				HX_STACK_LINE(334)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(334)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(334)
				if ((tmp5)){
					HX_STACK_LINE(334)
					break;
				}
				HX_STACK_LINE(334)
				::luxe::Entity tmp6 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(334)
				::luxe::Entity _child = tmp6;		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(334)
				++(_g);
				HX_STACK_LINE(335)
				Dynamic tmp7 = _;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(335)
				_child->_reset(tmp7);
				HX_STACK_LINE(138)
				Dynamic();
			}
		}
		HX_STACK_LINE(341)
		{
			HX_STACK_LINE(341)
			Float tmp4 = this->fixed_rate;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(341)
			Float _rate = tmp4;		HX_STACK_VAR(_rate,"_rate");
			HX_STACK_LINE(341)
			{
				HX_STACK_LINE(341)
				::snow::api::Timer tmp5 = this->fixed_rate_timer;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(341)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(341)
				if ((tmp6)){
					HX_STACK_LINE(341)
					::snow::api::Timer tmp7 = this->fixed_rate_timer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(341)
					tmp7->stop();
					HX_STACK_LINE(341)
					this->fixed_rate_timer = null();
				}
			}
			HX_STACK_LINE(341)
			bool tmp5 = (_rate != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(341)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(341)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(341)
			if ((tmp6)){
				HX_STACK_LINE(341)
				::luxe::Entity tmp8 = this->get_parent();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(341)
				::luxe::Entity tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(341)
				::luxe::Entity tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(341)
				tmp7 = (tmp10 == null());
			}
			else{
				HX_STACK_LINE(341)
				tmp7 = false;
			}
			HX_STACK_LINE(341)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(341)
			if ((tmp7)){
				HX_STACK_LINE(341)
				bool tmp9 = this->destroyed;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(341)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(341)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(341)
				tmp8 = !(tmp11);
			}
			else{
				HX_STACK_LINE(341)
				tmp8 = false;
			}
			HX_STACK_LINE(341)
			if ((tmp8)){
				HX_STACK_LINE(341)
				::snow::api::Timer tmp9 = ::snow::api::Timer_obj::__new(_rate);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(341)
				this->fixed_rate_timer = tmp9;
				HX_STACK_LINE(341)
				Dynamic tmp10 = this->_fixed_update_dyn();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(341)
				::snow::api::Timer tmp11 = this->fixed_rate_timer;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(341)
				tmp11->run = tmp10;
			}
		}
		HX_STACK_LINE(344)
		this->started = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_reset,(void))

Void Entity_obj::destroy( Dynamic __o__from_parent){
Dynamic _from_parent = __o__from_parent.Default(false);
	HX_STACK_FRAME("luxe.Entity","destroy",0x9f86c687,"luxe.Entity.destroy","luxe/Entity.hx",349,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_from_parent,"_from_parent")
{
		HX_STACK_LINE(351)
		{
			HX_STACK_LINE(351)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(351)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(351)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(351)
			if ((tmp2)){
				HX_STACK_LINE(351)
				::String tmp3 = this->get_name();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(351)
				::String tmp4 = (HX_HCSTRING("entity / destroying repeatedly ","\x2f","\x49","\x13","\x93") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(214)
				::String tmp5 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(214)
				::String tmp6 = (tmp5 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(351)
				::String tmp7 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(351)
				::luxe::DebugError tmp8 = ::luxe::DebugError_obj::assertion(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(351)
				HX_STACK_DO_THROW(tmp8);
			}
		}
		HX_STACK_LINE(356)
		int tmp = this->children->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(356)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(356)
		if ((tmp1)){
			HX_STACK_LINE(357)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(357)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(357)
			while((true)){
				HX_STACK_LINE(357)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(357)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(357)
				if ((tmp3)){
					HX_STACK_LINE(357)
					break;
				}
				HX_STACK_LINE(357)
				::luxe::Entity tmp4 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(357)
				::luxe::Entity _child = tmp4;		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(357)
				++(_g);
				HX_STACK_LINE(359)
				_child->destroy(true);
				HX_STACK_LINE(360)
				_child = null();
			}
		}
		HX_STACK_LINE(364)
		int tmp2 = this->component_count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(364)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(364)
		if ((tmp3)){
			HX_STACK_LINE(365)
			::luxe::components::Components tmp4 = this->_components;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(365)
			::luxe::structural::OrderedMap_String_luxe_Component tmp5 = tmp4->components;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(365)
			::luxe::structural::OrderedMapIterator_String_luxe_Component tmp6 = ::luxe::structural::OrderedMapIterator_String_luxe_Component_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(365)
			::luxe::structural::OrderedMapIterator_String_luxe_Component _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(365)
			while((true)){
				HX_STACK_LINE(365)
				int tmp7 = _g->index;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(365)
				int tmp8 = _g->map->_keys->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(365)
				bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(365)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(365)
				if ((tmp10)){
					HX_STACK_LINE(365)
					break;
				}
				HX_STACK_LINE(365)
				::luxe::Component tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					int tmp12 = (_g->index)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(365)
					::String tmp13 = _g->map->_keys->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(365)
					::String key = tmp13;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(365)
					::haxe::ds::StringMap tmp14 = _g->map->map;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(365)
					::String tmp15 = key;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(365)
					::luxe::Component tmp16 = tmp14->get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(365)
					tmp11 = tmp16;
				}
				HX_STACK_LINE(365)
				::luxe::Component _component = tmp11;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(367)
				_component->onremoved();
				HX_STACK_LINE(369)
				_component->ondestroy();
				HX_STACK_LINE(370)
				_component = null();
			}
		}
		HX_STACK_LINE(374)
		this->children = null();
		HX_STACK_LINE(375)
		::luxe::components::Components tmp4 = this->_components;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(375)
		tmp4->destroy();
		HX_STACK_LINE(376)
		this->_components = null();
		HX_STACK_LINE(379)
		this->emit((int)8,null());
		HX_STACK_LINE(381)
		this->ondestroy();
		HX_STACK_LINE(384)
		::luxe::Entity tmp5 = this->get_parent();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(384)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(384)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(384)
		if ((tmp6)){
			HX_STACK_LINE(384)
			Dynamic tmp8 = _from_parent;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(384)
			Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(384)
			tmp7 = !(tmp9);
		}
		else{
			HX_STACK_LINE(384)
			tmp7 = false;
		}
		HX_STACK_LINE(384)
		if ((tmp7)){
			HX_STACK_LINE(386)
			::luxe::Entity tmp8 = this->get_parent();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(386)
			tmp8->_remove_child(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(390)
		{
			HX_STACK_LINE(390)
			::snow::api::Timer tmp8 = this->fixed_rate_timer;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(390)
			bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(390)
			if ((tmp9)){
				HX_STACK_LINE(390)
				::snow::api::Timer tmp10 = this->fixed_rate_timer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(390)
				tmp10->stop();
				HX_STACK_LINE(390)
				this->fixed_rate_timer = null();
			}
		}
		HX_STACK_LINE(393)
		this->destroyed = true;
		HX_STACK_LINE(394)
		this->inited = false;
		HX_STACK_LINE(395)
		this->started = false;
		HX_STACK_LINE(400)
		::luxe::Scene tmp8 = this->get_scene();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(400)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(400)
		if ((tmp9)){
			HX_STACK_LINE(401)
			::luxe::Scene tmp10 = this->get_scene();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(401)
			tmp10->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(405)
		::luxe::Events tmp10 = this->events;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(405)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(405)
		if ((tmp11)){
			HX_STACK_LINE(406)
			::luxe::Events tmp12 = this->events;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(406)
			tmp12->destroy();
			HX_STACK_LINE(407)
			this->events = null();
		}
		HX_STACK_LINE(410)
		::phoenix::Transform tmp12 = this->get_transform();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(410)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(410)
		if ((tmp13)){
			HX_STACK_LINE(411)
			::phoenix::Transform tmp14 = this->get_transform();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(411)
			tmp14->destroy();
			HX_STACK_LINE(412)
			this->set_transform(null());
		}
		HX_STACK_LINE(415)
		this->_emitter_destroy();
		HX_STACK_LINE(417)
		this->set_id(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,destroy,(void))

Void Entity_obj::_update( Float dt){
{
		HX_STACK_FRAME("luxe.Entity","_update",0x707d3135,"luxe.Entity._update","luxe/Entity.hx",422,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(424)
		bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(424)
		if ((tmp)){
			HX_STACK_LINE(426)
			return null();
		}
		HX_STACK_LINE(429)
		bool tmp1 = this->get_active();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(429)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(429)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(429)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(429)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(429)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(429)
		if ((tmp5)){
			HX_STACK_LINE(429)
			bool tmp7 = this->inited;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(429)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(429)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(429)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(429)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(429)
			tmp6 = !(tmp11);
		}
		else{
			HX_STACK_LINE(429)
			tmp6 = true;
		}
		HX_STACK_LINE(429)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(429)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(429)
		if ((tmp7)){
			HX_STACK_LINE(429)
			bool tmp9 = this->started;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(429)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(429)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(429)
			tmp8 = !(tmp11);
		}
		else{
			HX_STACK_LINE(429)
			tmp8 = true;
		}
		HX_STACK_LINE(429)
		if ((tmp8)){
			HX_STACK_LINE(430)
			return null();
		}
		HX_STACK_LINE(436)
		{
			HX_STACK_LINE(436)
			::phoenix::Transform tmp9 = this->get_transform();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(436)
			::phoenix::Transform _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(436)
			bool tmp10 = (_this->parent != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(436)
			if ((tmp10)){
				HX_STACK_LINE(436)
				bool tmp11 = _this->parent->dirty;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(436)
				if ((tmp11)){
					HX_STACK_LINE(436)
					_this->parent->clean();
				}
			}
			HX_STACK_LINE(436)
			bool tmp11 = _this->dirty;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(436)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(436)
			if ((tmp11)){
				HX_STACK_LINE(436)
				bool tmp13 = _this->_cleaning;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(436)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(436)
				tmp12 = !(tmp14);
			}
			else{
				HX_STACK_LINE(436)
				tmp12 = false;
			}
			HX_STACK_LINE(436)
			if ((tmp12)){
				HX_STACK_LINE(436)
				_this->clean();
			}
		}
		HX_STACK_LINE(439)
		Float tmp9 = dt;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(439)
		this->update(tmp9);
		HX_STACK_LINE(441)
		::luxe::Events tmp10 = this->events;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(441)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(441)
		if ((tmp11)){
			HX_STACK_LINE(443)
			::luxe::Events tmp12 = this->events;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(443)
			tmp12->process();
		}
		HX_STACK_LINE(447)
		int tmp12 = this->component_count;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(447)
		bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(447)
		if ((tmp13)){
			HX_STACK_LINE(448)
			::luxe::components::Components tmp14 = this->_components;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(448)
			::luxe::structural::OrderedMap_String_luxe_Component tmp15 = tmp14->components;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(448)
			::luxe::structural::OrderedMapIterator_String_luxe_Component tmp16 = ::luxe::structural::OrderedMapIterator_String_luxe_Component_obj::__new(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(448)
			::luxe::structural::OrderedMapIterator_String_luxe_Component _g = tmp16;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(448)
			while((true)){
				HX_STACK_LINE(448)
				int tmp17 = _g->index;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(448)
				int tmp18 = _g->map->_keys->length;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(448)
				bool tmp19 = (tmp17 < tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(448)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(448)
				if ((tmp20)){
					HX_STACK_LINE(448)
					break;
				}
				HX_STACK_LINE(448)
				::luxe::Component tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(448)
				{
					HX_STACK_LINE(448)
					int tmp22 = (_g->index)++;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(448)
					::String tmp23 = _g->map->_keys->__get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(448)
					::String key = tmp23;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(448)
					::haxe::ds::StringMap tmp24 = _g->map->map;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(448)
					::String tmp25 = key;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(448)
					::luxe::Component tmp26 = tmp24->get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(448)
					tmp21 = tmp26;
				}
				HX_STACK_LINE(448)
				::luxe::Component _component = tmp21;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(449)
				Float tmp22 = dt;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(449)
				_component->update(tmp22);
			}
		}
		HX_STACK_LINE(454)
		bool tmp14 = (this->children != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(454)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(454)
		if ((tmp14)){
			HX_STACK_LINE(454)
			int tmp16 = this->children->length;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(454)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(454)
			tmp15 = (tmp17 > (int)0);
		}
		else{
			HX_STACK_LINE(454)
			tmp15 = false;
		}
		HX_STACK_LINE(454)
		if ((tmp15)){
			HX_STACK_LINE(455)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(455)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(455)
			while((true)){
				HX_STACK_LINE(455)
				bool tmp16 = (_g < _g1->length);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(455)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(455)
				if ((tmp17)){
					HX_STACK_LINE(455)
					break;
				}
				HX_STACK_LINE(455)
				::luxe::Entity tmp18 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(455)
				::luxe::Entity _child = tmp18;		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(455)
				++(_g);
				HX_STACK_LINE(456)
				Float tmp19 = dt;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(456)
				_child->_update(tmp19);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_update,(void))

Void Entity_obj::_fixed_update( ){
{
		HX_STACK_FRAME("luxe.Entity","_fixed_update",0x8f91c8e0,"luxe.Entity._fixed_update","luxe/Entity.hx",465,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(467)
		bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(467)
		if ((tmp)){
			HX_STACK_LINE(468)
			return null();
		}
		HX_STACK_LINE(471)
		bool tmp1 = this->get_active();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(471)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(471)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(471)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(471)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(471)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(471)
		if ((tmp5)){
			HX_STACK_LINE(471)
			bool tmp7 = this->inited;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(471)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(471)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(471)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(471)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(471)
			tmp6 = !(tmp11);
		}
		else{
			HX_STACK_LINE(471)
			tmp6 = true;
		}
		HX_STACK_LINE(471)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(471)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(471)
		if ((tmp7)){
			HX_STACK_LINE(471)
			bool tmp9 = this->started;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(471)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(471)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(471)
			tmp8 = !(tmp11);
		}
		else{
			HX_STACK_LINE(471)
			tmp8 = true;
		}
		HX_STACK_LINE(471)
		if ((tmp8)){
			HX_STACK_LINE(472)
			return null();
		}
		HX_STACK_LINE(477)
		this->emit((int)7,null());
		HX_STACK_LINE(479)
		Float tmp9 = this->fixed_rate;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(479)
		this->onfixedupdate(tmp9);
		HX_STACK_LINE(481)
		int tmp10 = this->component_count;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(481)
		bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(481)
		if ((tmp11)){
			HX_STACK_LINE(482)
			::luxe::components::Components tmp12 = this->_components;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(482)
			::luxe::structural::OrderedMap_String_luxe_Component tmp13 = tmp12->components;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(482)
			::luxe::structural::OrderedMapIterator_String_luxe_Component tmp14 = ::luxe::structural::OrderedMapIterator_String_luxe_Component_obj::__new(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(482)
			::luxe::structural::OrderedMapIterator_String_luxe_Component _g = tmp14;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(482)
			while((true)){
				HX_STACK_LINE(482)
				int tmp15 = _g->index;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(482)
				int tmp16 = _g->map->_keys->length;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(482)
				bool tmp17 = (tmp15 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(482)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(482)
				if ((tmp18)){
					HX_STACK_LINE(482)
					break;
				}
				HX_STACK_LINE(482)
				::luxe::Component tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(482)
				{
					HX_STACK_LINE(482)
					int tmp20 = (_g->index)++;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(482)
					::String tmp21 = _g->map->_keys->__get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(482)
					::String key = tmp21;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(482)
					::haxe::ds::StringMap tmp22 = _g->map->map;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(482)
					::String tmp23 = key;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(482)
					::luxe::Component tmp24 = tmp22->get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(482)
					tmp19 = tmp24;
				}
				HX_STACK_LINE(482)
				::luxe::Component _component = tmp19;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(483)
				Float tmp20 = this->fixed_rate;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(483)
				_component->onfixedupdate(tmp20);
			}
		}
		HX_STACK_LINE(487)
		int tmp12 = this->children->length;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(487)
		bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(487)
		if ((tmp13)){
			HX_STACK_LINE(488)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(488)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(488)
			while((true)){
				HX_STACK_LINE(488)
				bool tmp14 = (_g < _g1->length);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(488)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(488)
				if ((tmp15)){
					HX_STACK_LINE(488)
					break;
				}
				HX_STACK_LINE(488)
				::luxe::Entity tmp16 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(488)
				::luxe::Entity _child = tmp16;		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(488)
				++(_g);
				HX_STACK_LINE(489)
				_child->_fixed_update();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,_fixed_update,(void))

::luxe::Emitter Entity_obj::_find_emit_source( Dynamic __o__from_unlisten){
Dynamic _from_unlisten = __o__from_unlisten.Default(false);
	HX_STACK_FRAME("luxe.Entity","_find_emit_source",0x482d2e6d,"luxe.Entity._find_emit_source","luxe/Entity.hx",497,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_from_unlisten,"_from_unlisten")
{
		HX_STACK_LINE(499)
		::luxe::Scene _source = null();		HX_STACK_VAR(_source,"_source");
		HX_STACK_LINE(501)
		::luxe::Scene tmp = this->get_scene();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(501)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(501)
		if ((tmp1)){
			HX_STACK_LINE(503)
			::luxe::Scene tmp2 = this->get_scene();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(503)
			_source = tmp2;
		}
		else{
			HX_STACK_LINE(505)
			::luxe::Entity tmp2 = this->get_parent();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(505)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(505)
			if ((tmp3)){
				HX_STACK_LINE(507)
				bool _looking = true;		HX_STACK_VAR(_looking,"_looking");
				HX_STACK_LINE(508)
				::luxe::Entity tmp4 = this->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(508)
				::luxe::Entity _parent = tmp4;		HX_STACK_VAR(_parent,"_parent");
				HX_STACK_LINE(510)
				while((true)){
					HX_STACK_LINE(510)
					bool tmp5 = _looking;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(510)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(510)
					if ((tmp6)){
						HX_STACK_LINE(510)
						break;
					}
					HX_STACK_LINE(513)
					::luxe::Scene tmp7 = _parent->get_scene();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(513)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(513)
					if ((tmp8)){
						HX_STACK_LINE(515)
						::luxe::Entity tmp9 = _parent->get_parent();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(515)
						bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(515)
						if ((tmp10)){
							HX_STACK_LINE(516)
							Dynamic tmp11 = _from_unlisten;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(516)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(516)
							if ((tmp12)){
								HX_STACK_LINE(517)
								::String tmp13 = HX_HCSTRING("   i / entity / entity has no parent or scene, currently no core events will reach it.","\xbc","\x45","\x22","\xef");		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(517)
								Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),517,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_find_emit_source","\xa0","\x42","\x92","\x24"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(517)
								::haxe::Log_obj::trace(tmp13,tmp14);
							}
							HX_STACK_LINE(519)
							_looking = false;
							HX_STACK_LINE(520)
							break;
						}
						else{
							HX_STACK_LINE(524)
							::luxe::Entity tmp11 = _parent->get_parent();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(524)
							_parent = tmp11;
						}
					}
					else{
						HX_STACK_LINE(529)
						::luxe::Scene tmp9 = _parent->get_scene();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(529)
						_source = tmp9;
						HX_STACK_LINE(530)
						_looking = false;
						HX_STACK_LINE(531)
						break;
					}
				}
			}
			else{
				HX_STACK_LINE(538)
				Dynamic tmp4 = _from_unlisten;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(538)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(538)
				if ((tmp5)){
					HX_STACK_LINE(539)
					::String tmp6 = HX_HCSTRING("   i / entity / entity has no parent or scene, currently no core events will reach it.","\xbc","\x45","\x22","\xef");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(539)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),539,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_find_emit_source","\xa0","\x42","\x92","\x24"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(539)
					::haxe::Log_obj::trace(tmp6,tmp7);
				}
			}
		}
		HX_STACK_LINE(543)
		::luxe::Scene tmp2 = _source;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(543)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_find_emit_source,return )

Void Entity_obj::_listen( int _event,Dynamic _handler,Dynamic __o__self){
Dynamic _self = __o__self.Default(false);
	HX_STACK_FRAME("luxe.Entity","_listen",0xd9717373,"luxe.Entity._listen","luxe/Entity.hx",548,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_ARG(_self,"_self")
{
		HX_STACK_LINE(558)
		Dynamic tmp = _self;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(558)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(558)
		if ((tmp1)){
			HX_STACK_LINE(559)
			int tmp2 = _event;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(559)
			Dynamic tmp3 = _handler;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(559)
			this->on(tmp2,tmp3);
		}
		HX_STACK_LINE(562)
		::luxe::Scene tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(562)
		{
			HX_STACK_LINE(562)
			::luxe::Scene _source = null();		HX_STACK_VAR(_source,"_source");
			HX_STACK_LINE(562)
			::luxe::Scene tmp3 = this->get_scene();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(562)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(562)
			if ((tmp4)){
				HX_STACK_LINE(562)
				::luxe::Scene tmp5 = this->get_scene();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(562)
				_source = tmp5;
			}
			else{
				HX_STACK_LINE(562)
				::luxe::Entity tmp5 = this->get_parent();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(562)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(562)
				if ((tmp6)){
					HX_STACK_LINE(562)
					bool _looking = true;		HX_STACK_VAR(_looking,"_looking");
					HX_STACK_LINE(562)
					::luxe::Entity tmp7 = this->get_parent();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(562)
					::luxe::Entity _parent = tmp7;		HX_STACK_VAR(_parent,"_parent");
					HX_STACK_LINE(562)
					while((true)){
						HX_STACK_LINE(562)
						bool tmp8 = _looking;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(562)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(562)
						if ((tmp9)){
							HX_STACK_LINE(562)
							break;
						}
						HX_STACK_LINE(562)
						::luxe::Scene tmp10 = _parent->get_scene();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(562)
						bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(562)
						if ((tmp11)){
							HX_STACK_LINE(562)
							::luxe::Entity tmp12 = _parent->get_parent();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(562)
							bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(562)
							if ((tmp13)){
								HX_STACK_LINE(562)
								bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(562)
								if ((tmp14)){
									HX_STACK_LINE(562)
									::String tmp15 = HX_HCSTRING("   i / entity / entity has no parent or scene, currently no core events will reach it.","\xbc","\x45","\x22","\xef");		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(562)
									Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),517,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_find_emit_source","\xa0","\x42","\x92","\x24"));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(562)
									::haxe::Log_obj::trace(tmp15,tmp16);
								}
								HX_STACK_LINE(562)
								_looking = false;
								HX_STACK_LINE(562)
								break;
							}
							else{
								HX_STACK_LINE(562)
								::luxe::Entity tmp14 = _parent->get_parent();		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(562)
								_parent = tmp14;
							}
						}
						else{
							HX_STACK_LINE(562)
							::luxe::Scene tmp12 = _parent->get_scene();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(562)
							_source = tmp12;
							HX_STACK_LINE(562)
							_looking = false;
							HX_STACK_LINE(562)
							break;
						}
					}
				}
				else{
					HX_STACK_LINE(562)
					bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(562)
					if ((tmp7)){
						HX_STACK_LINE(562)
						::String tmp8 = HX_HCSTRING("   i / entity / entity has no parent or scene, currently no core events will reach it.","\xbc","\x45","\x22","\xef");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(562)
						Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),539,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_find_emit_source","\xa0","\x42","\x92","\x24"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(562)
						::haxe::Log_obj::trace(tmp8,tmp9);
					}
				}
			}
			HX_STACK_LINE(562)
			tmp2 = _source;
		}
		HX_STACK_LINE(562)
		::luxe::Emitter _source = ((::luxe::Emitter)(tmp2));		HX_STACK_VAR(_source,"_source");
		HX_STACK_LINE(566)
		bool tmp3 = (_source != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(566)
		if ((tmp3)){
			HX_STACK_LINE(567)
			int tmp4 = _event;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(567)
			switch( (int)(tmp4)){
				case (int)13: {
					HX_STACK_LINE(569)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(569)
					Dynamic tmp6 = this->_keyup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(569)
					_source->on(tmp5,tmp6);
				}
				;break;
				case (int)12: {
					HX_STACK_LINE(570)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(570)
					Dynamic tmp6 = this->_keydown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(570)
					_source->on(tmp5,tmp6);
				}
				;break;
				case (int)14: {
					HX_STACK_LINE(571)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(571)
					Dynamic tmp6 = this->_textinput_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(571)
					_source->on(tmp5,tmp6);
				}
				;break;
				case (int)17: {
					HX_STACK_LINE(573)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(573)
					Dynamic tmp6 = this->_mousedown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(573)
					_source->on(tmp5,tmp6);
				}
				;break;
				case (int)18: {
					HX_STACK_LINE(574)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(574)
					Dynamic tmp6 = this->_mouseup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(574)
					_source->on(tmp5,tmp6);
				}
				;break;
				case (int)19: {
					HX_STACK_LINE(575)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(575)
					Dynamic tmp6 = this->_mousemove_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(575)
					_source->on(tmp5,tmp6);
				}
				;break;
				case (int)20: {
					HX_STACK_LINE(576)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(576)
					Dynamic tmp6 = this->_mousewheel_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(576)
					_source->on(tmp5,tmp6);
				}
				;break;
				case (int)21: {
					HX_STACK_LINE(578)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(578)
					Dynamic tmp6 = this->_touchdown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(578)
					_source->on(tmp5,tmp6);
				}
				;break;
				case (int)22: {
					HX_STACK_LINE(579)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(579)
					Dynamic tmp6 = this->_touchup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(579)
					_source->on(tmp5,tmp6);
				}
				;break;
				case (int)23: {
					HX_STACK_LINE(580)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(580)
					Dynamic tmp6 = this->_touchmove_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(580)
					_source->on(tmp5,tmp6);
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(582)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(582)
					Dynamic tmp6 = this->_inputup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(582)
					_source->on(tmp5,tmp6);
				}
				;break;
				case (int)15: {
					HX_STACK_LINE(583)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(583)
					Dynamic tmp6 = this->_inputdown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(583)
					_source->on(tmp5,tmp6);
				}
				;break;
				case (int)25: {
					HX_STACK_LINE(585)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(585)
					Dynamic tmp6 = this->_gamepaddown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(585)
					_source->on(tmp5,tmp6);
				}
				;break;
				case (int)26: {
					HX_STACK_LINE(586)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(586)
					Dynamic tmp6 = this->_gamepadup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(586)
					_source->on(tmp5,tmp6);
				}
				;break;
				case (int)24: {
					HX_STACK_LINE(587)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(587)
					Dynamic tmp6 = this->_gamepadaxis_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(587)
					_source->on(tmp5,tmp6);
				}
				;break;
				case (int)27: {
					HX_STACK_LINE(588)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(588)
					Dynamic tmp6 = this->_gamepaddevice_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(588)
					_source->on(tmp5,tmp6);
				}
				;break;
				case (int)29: {
					HX_STACK_LINE(590)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(590)
					Dynamic tmp6 = this->_windowmoved_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(590)
					_source->on(tmp5,tmp6);
				}
				;break;
				case (int)30: {
					HX_STACK_LINE(591)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(591)
					Dynamic tmp6 = this->_windowresized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(591)
					_source->on(tmp5,tmp6);
				}
				;break;
				case (int)31: {
					HX_STACK_LINE(592)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(592)
					Dynamic tmp6 = this->_windowsized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(592)
					_source->on(tmp5,tmp6);
				}
				;break;
				case (int)32: {
					HX_STACK_LINE(593)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(593)
					Dynamic tmp6 = this->_windowminimized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(593)
					_source->on(tmp5,tmp6);
				}
				;break;
				case (int)33: {
					HX_STACK_LINE(594)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(594)
					Dynamic tmp6 = this->_windowrestored_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(594)
					_source->on(tmp5,tmp6);
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,_listen,(void))

Void Entity_obj::_unlisten( int _event,Dynamic _handler,Dynamic __o__self){
Dynamic _self = __o__self.Default(false);
	HX_STACK_FRAME("luxe.Entity","_unlisten",0xe95ac58c,"luxe.Entity._unlisten","luxe/Entity.hx",604,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_ARG(_self,"_self")
{
		HX_STACK_LINE(606)
		::luxe::Scene tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(606)
		{
			HX_STACK_LINE(606)
			::luxe::Scene _source = null();		HX_STACK_VAR(_source,"_source");
			HX_STACK_LINE(606)
			::luxe::Scene tmp1 = this->get_scene();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(606)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(606)
			if ((tmp2)){
				HX_STACK_LINE(606)
				::luxe::Scene tmp3 = this->get_scene();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(606)
				_source = tmp3;
			}
			else{
				HX_STACK_LINE(606)
				::luxe::Entity tmp3 = this->get_parent();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(606)
				bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(606)
				if ((tmp4)){
					HX_STACK_LINE(606)
					bool _looking = true;		HX_STACK_VAR(_looking,"_looking");
					HX_STACK_LINE(606)
					::luxe::Entity tmp5 = this->get_parent();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(606)
					::luxe::Entity _parent = tmp5;		HX_STACK_VAR(_parent,"_parent");
					HX_STACK_LINE(606)
					while((true)){
						HX_STACK_LINE(606)
						bool tmp6 = _looking;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(606)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(606)
						if ((tmp7)){
							HX_STACK_LINE(606)
							break;
						}
						HX_STACK_LINE(606)
						::luxe::Scene tmp8 = _parent->get_scene();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(606)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(606)
						if ((tmp9)){
							HX_STACK_LINE(606)
							::luxe::Entity tmp10 = _parent->get_parent();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(606)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(606)
							if ((tmp11)){
								HX_STACK_LINE(606)
								bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(606)
								if ((tmp12)){
									HX_STACK_LINE(606)
									::String tmp13 = HX_HCSTRING("   i / entity / entity has no parent or scene, currently no core events will reach it.","\xbc","\x45","\x22","\xef");		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(606)
									Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),517,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_find_emit_source","\xa0","\x42","\x92","\x24"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(606)
									::haxe::Log_obj::trace(tmp13,tmp14);
								}
								HX_STACK_LINE(606)
								_looking = false;
								HX_STACK_LINE(606)
								break;
							}
							else{
								HX_STACK_LINE(606)
								::luxe::Entity tmp12 = _parent->get_parent();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(606)
								_parent = tmp12;
							}
						}
						else{
							HX_STACK_LINE(606)
							::luxe::Scene tmp10 = _parent->get_scene();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(606)
							_source = tmp10;
							HX_STACK_LINE(606)
							_looking = false;
							HX_STACK_LINE(606)
							break;
						}
					}
				}
				else{
					HX_STACK_LINE(606)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(606)
					if ((tmp5)){
						HX_STACK_LINE(606)
						::String tmp6 = HX_HCSTRING("   i / entity / entity has no parent or scene, currently no core events will reach it.","\xbc","\x45","\x22","\xef");		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(606)
						Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),539,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_find_emit_source","\xa0","\x42","\x92","\x24"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(606)
						::haxe::Log_obj::trace(tmp6,tmp7);
					}
				}
			}
			HX_STACK_LINE(606)
			tmp = _source;
		}
		HX_STACK_LINE(606)
		::luxe::Emitter _source = ((::luxe::Emitter)(tmp));		HX_STACK_VAR(_source,"_source");
		HX_STACK_LINE(610)
		Dynamic tmp1 = _self;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(610)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(610)
		if ((tmp2)){
			HX_STACK_LINE(611)
			int tmp3 = _event;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(611)
			Dynamic tmp4 = _handler;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(611)
			this->off(tmp3,tmp4);
		}
		HX_STACK_LINE(614)
		bool tmp3 = (_source != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(614)
		if ((tmp3)){
			HX_STACK_LINE(615)
			int tmp4 = _event;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(615)
			switch( (int)(tmp4)){
				case (int)13: {
					HX_STACK_LINE(617)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(617)
					Dynamic tmp6 = this->_keyup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(617)
					_source->off(tmp5,tmp6);
				}
				;break;
				case (int)12: {
					HX_STACK_LINE(618)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(618)
					Dynamic tmp6 = this->_keydown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(618)
					_source->off(tmp5,tmp6);
				}
				;break;
				case (int)14: {
					HX_STACK_LINE(619)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(619)
					Dynamic tmp6 = this->_textinput_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(619)
					_source->off(tmp5,tmp6);
				}
				;break;
				case (int)17: {
					HX_STACK_LINE(621)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(621)
					Dynamic tmp6 = this->_mousedown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(621)
					_source->off(tmp5,tmp6);
				}
				;break;
				case (int)18: {
					HX_STACK_LINE(622)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(622)
					Dynamic tmp6 = this->_mouseup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(622)
					_source->off(tmp5,tmp6);
				}
				;break;
				case (int)19: {
					HX_STACK_LINE(623)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(623)
					Dynamic tmp6 = this->_mousemove_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(623)
					_source->off(tmp5,tmp6);
				}
				;break;
				case (int)20: {
					HX_STACK_LINE(624)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(624)
					Dynamic tmp6 = this->_mousewheel_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(624)
					_source->off(tmp5,tmp6);
				}
				;break;
				case (int)21: {
					HX_STACK_LINE(626)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(626)
					Dynamic tmp6 = this->_touchdown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(626)
					_source->off(tmp5,tmp6);
				}
				;break;
				case (int)22: {
					HX_STACK_LINE(627)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(627)
					Dynamic tmp6 = this->_touchup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(627)
					_source->off(tmp5,tmp6);
				}
				;break;
				case (int)23: {
					HX_STACK_LINE(628)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(628)
					Dynamic tmp6 = this->_touchmove_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(628)
					_source->off(tmp5,tmp6);
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(630)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(630)
					Dynamic tmp6 = this->_inputup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(630)
					_source->off(tmp5,tmp6);
				}
				;break;
				case (int)15: {
					HX_STACK_LINE(631)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(631)
					Dynamic tmp6 = this->_inputdown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(631)
					_source->off(tmp5,tmp6);
				}
				;break;
				case (int)25: {
					HX_STACK_LINE(633)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(633)
					Dynamic tmp6 = this->_gamepaddown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(633)
					_source->off(tmp5,tmp6);
				}
				;break;
				case (int)26: {
					HX_STACK_LINE(634)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(634)
					Dynamic tmp6 = this->_gamepadup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(634)
					_source->off(tmp5,tmp6);
				}
				;break;
				case (int)24: {
					HX_STACK_LINE(635)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(635)
					Dynamic tmp6 = this->_gamepadaxis_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(635)
					_source->off(tmp5,tmp6);
				}
				;break;
				case (int)27: {
					HX_STACK_LINE(636)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(636)
					Dynamic tmp6 = this->_gamepaddevice_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(636)
					_source->off(tmp5,tmp6);
				}
				;break;
				case (int)29: {
					HX_STACK_LINE(638)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(638)
					Dynamic tmp6 = this->_windowmoved_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(638)
					_source->off(tmp5,tmp6);
				}
				;break;
				case (int)30: {
					HX_STACK_LINE(639)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(639)
					Dynamic tmp6 = this->_windowresized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(639)
					_source->off(tmp5,tmp6);
				}
				;break;
				case (int)31: {
					HX_STACK_LINE(640)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(640)
					Dynamic tmp6 = this->_windowsized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(640)
					_source->off(tmp5,tmp6);
				}
				;break;
				case (int)32: {
					HX_STACK_LINE(641)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(641)
					Dynamic tmp6 = this->_windowminimized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(641)
					_source->off(tmp5,tmp6);
				}
				;break;
				case (int)33: {
					HX_STACK_LINE(642)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(642)
					Dynamic tmp6 = this->_windowrestored_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(642)
					_source->off(tmp5,tmp6);
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,_unlisten,(void))

Void Entity_obj::_detach_scene( ){
{
		HX_STACK_FRAME("luxe.Entity","_detach_scene",0xe66c124c,"luxe.Entity._detach_scene","luxe/Entity.hx",652,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(654)
		::luxe::Scene tmp = this->get_scene();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(654)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(654)
		if ((tmp1)){
			HX_STACK_LINE(656)
			::luxe::Scene tmp2 = this->get_scene();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(656)
			Dynamic tmp3 = this->_reset_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(656)
			tmp2->off((int)3,tmp3);
			HX_STACK_LINE(657)
			::luxe::Scene tmp4 = this->get_scene();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(657)
			Dynamic tmp5 = this->destroy_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(657)
			tmp4->off((int)8,tmp5);
			HX_STACK_LINE(660)
			::luxe::Scene tmp6 = this->get_scene();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(660)
			Dynamic tmp7 = this->_keyup_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(660)
			tmp6->off((int)13,tmp7);
			HX_STACK_LINE(661)
			::luxe::Scene tmp8 = this->get_scene();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(661)
			Dynamic tmp9 = this->_keydown_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(661)
			tmp8->off((int)12,tmp9);
			HX_STACK_LINE(662)
			::luxe::Scene tmp10 = this->get_scene();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(662)
			Dynamic tmp11 = this->_textinput_dyn();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(662)
			tmp10->off((int)14,tmp11);
			HX_STACK_LINE(663)
			::luxe::Scene tmp12 = this->get_scene();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(663)
			Dynamic tmp13 = this->_mousedown_dyn();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(663)
			tmp12->off((int)17,tmp13);
			HX_STACK_LINE(664)
			::luxe::Scene tmp14 = this->get_scene();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(664)
			Dynamic tmp15 = this->_mouseup_dyn();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(664)
			tmp14->off((int)18,tmp15);
			HX_STACK_LINE(665)
			::luxe::Scene tmp16 = this->get_scene();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(665)
			Dynamic tmp17 = this->_mousemove_dyn();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(665)
			tmp16->off((int)19,tmp17);
			HX_STACK_LINE(666)
			::luxe::Scene tmp18 = this->get_scene();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(666)
			Dynamic tmp19 = this->_mousewheel_dyn();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(666)
			tmp18->off((int)20,tmp19);
			HX_STACK_LINE(667)
			::luxe::Scene tmp20 = this->get_scene();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(667)
			Dynamic tmp21 = this->_touchdown_dyn();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(667)
			tmp20->off((int)21,tmp21);
			HX_STACK_LINE(668)
			::luxe::Scene tmp22 = this->get_scene();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(668)
			Dynamic tmp23 = this->_touchup_dyn();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(668)
			tmp22->off((int)22,tmp23);
			HX_STACK_LINE(669)
			::luxe::Scene tmp24 = this->get_scene();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(669)
			Dynamic tmp25 = this->_touchmove_dyn();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(669)
			tmp24->off((int)23,tmp25);
			HX_STACK_LINE(670)
			::luxe::Scene tmp26 = this->get_scene();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(670)
			Dynamic tmp27 = this->_inputup_dyn();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(670)
			tmp26->off((int)16,tmp27);
			HX_STACK_LINE(671)
			::luxe::Scene tmp28 = this->get_scene();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(671)
			Dynamic tmp29 = this->_inputdown_dyn();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(671)
			tmp28->off((int)15,tmp29);
			HX_STACK_LINE(672)
			::luxe::Scene tmp30 = this->get_scene();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(672)
			Dynamic tmp31 = this->_gamepaddown_dyn();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(672)
			tmp30->off((int)25,tmp31);
			HX_STACK_LINE(673)
			::luxe::Scene tmp32 = this->get_scene();		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(673)
			Dynamic tmp33 = this->_gamepadup_dyn();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(673)
			tmp32->off((int)26,tmp33);
			HX_STACK_LINE(674)
			::luxe::Scene tmp34 = this->get_scene();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(674)
			Dynamic tmp35 = this->_gamepadaxis_dyn();		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(674)
			tmp34->off((int)24,tmp35);
			HX_STACK_LINE(675)
			::luxe::Scene tmp36 = this->get_scene();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(675)
			Dynamic tmp37 = this->_gamepaddevice_dyn();		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(675)
			tmp36->off((int)27,tmp37);
			HX_STACK_LINE(676)
			::luxe::Scene tmp38 = this->get_scene();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(676)
			Dynamic tmp39 = this->_windowmoved_dyn();		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(676)
			tmp38->off((int)29,tmp39);
			HX_STACK_LINE(677)
			::luxe::Scene tmp40 = this->get_scene();		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(677)
			Dynamic tmp41 = this->_windowresized_dyn();		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(677)
			tmp40->off((int)30,tmp41);
			HX_STACK_LINE(678)
			::luxe::Scene tmp42 = this->get_scene();		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(678)
			Dynamic tmp43 = this->_windowsized_dyn();		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(678)
			tmp42->off((int)31,tmp43);
			HX_STACK_LINE(679)
			::luxe::Scene tmp44 = this->get_scene();		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(679)
			Dynamic tmp45 = this->_windowminimized_dyn();		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(679)
			tmp44->off((int)32,tmp45);
			HX_STACK_LINE(680)
			::luxe::Scene tmp46 = this->get_scene();		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(680)
			Dynamic tmp47 = this->_windowrestored_dyn();		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(680)
			tmp46->off((int)33,tmp47);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,_detach_scene,(void))

Void Entity_obj::_attach_scene( ){
{
		HX_STACK_FRAME("luxe.Entity","_attach_scene",0xae36123e,"luxe.Entity._attach_scene","luxe/Entity.hx",686,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(688)
		::luxe::Scene tmp = this->get_scene();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(688)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(688)
		if ((tmp1)){
			HX_STACK_LINE(689)
			::luxe::Scene tmp2 = this->get_scene();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(689)
			Dynamic tmp3 = this->_reset_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(689)
			tmp2->on((int)3,tmp3);
			HX_STACK_LINE(690)
			::luxe::Scene tmp4 = this->get_scene();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(690)
			Dynamic tmp5 = this->destroy_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(690)
			tmp4->on((int)8,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,_attach_scene,(void))

Void Entity_obj::_keyup( ::luxe::KeyEvent _event){
{
		HX_STACK_FRAME("luxe.Entity","_keyup",0xff09b40e,"luxe.Entity._keyup","luxe/Entity.hx",697,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(699)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(699)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(699)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(699)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(699)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(699)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(699)
		if ((tmp4)){
			HX_STACK_LINE(699)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(699)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(699)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(699)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(699)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(699)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(699)
			tmp5 = true;
		}
		HX_STACK_LINE(699)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(699)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(699)
		if ((tmp6)){
			HX_STACK_LINE(699)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(699)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(699)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(699)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(699)
			tmp7 = true;
		}
		HX_STACK_LINE(699)
		if ((tmp7)){
			HX_STACK_LINE(700)
			return null();
		}
		HX_STACK_LINE(705)
		::luxe::KeyEvent tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(705)
		this->onkeyup(tmp8);
		HX_STACK_LINE(706)
		::luxe::KeyEvent tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(706)
		this->emit((int)13,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_keyup,(void))

Void Entity_obj::_keydown( ::luxe::KeyEvent _event){
{
		HX_STACK_FRAME("luxe.Entity","_keydown",0x10ac58d5,"luxe.Entity._keydown","luxe/Entity.hx",710,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(712)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(712)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(712)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(712)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(712)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(712)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(712)
		if ((tmp4)){
			HX_STACK_LINE(712)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(712)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(712)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(712)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(712)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(712)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(712)
			tmp5 = true;
		}
		HX_STACK_LINE(712)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(712)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(712)
		if ((tmp6)){
			HX_STACK_LINE(712)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(712)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(712)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(712)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(712)
			tmp7 = true;
		}
		HX_STACK_LINE(712)
		if ((tmp7)){
			HX_STACK_LINE(713)
			return null();
		}
		HX_STACK_LINE(718)
		::luxe::KeyEvent tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(718)
		this->onkeydown(tmp8);
		HX_STACK_LINE(719)
		::luxe::KeyEvent tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(719)
		this->emit((int)12,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_keydown,(void))

Void Entity_obj::_textinput( ::luxe::TextEvent _event){
{
		HX_STACK_FRAME("luxe.Entity","_textinput",0x03587c91,"luxe.Entity._textinput","luxe/Entity.hx",723,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(725)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(725)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(725)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(725)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(725)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(725)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(725)
		if ((tmp4)){
			HX_STACK_LINE(725)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(725)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(725)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(725)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(725)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(725)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(725)
			tmp5 = true;
		}
		HX_STACK_LINE(725)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(725)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(725)
		if ((tmp6)){
			HX_STACK_LINE(725)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(725)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(725)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(725)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(725)
			tmp7 = true;
		}
		HX_STACK_LINE(725)
		if ((tmp7)){
			HX_STACK_LINE(726)
			return null();
		}
		HX_STACK_LINE(731)
		::luxe::TextEvent tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(731)
		this->ontextinput(tmp8);
		HX_STACK_LINE(732)
		::luxe::TextEvent tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(732)
		this->emit((int)14,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_textinput,(void))

Void Entity_obj::_mousedown( ::luxe::MouseEvent _event){
{
		HX_STACK_FRAME("luxe.Entity","_mousedown",0x43641d5b,"luxe.Entity._mousedown","luxe/Entity.hx",739,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(741)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(741)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(741)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(741)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(741)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(741)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(741)
		if ((tmp4)){
			HX_STACK_LINE(741)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(741)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(741)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(741)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(741)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(741)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(741)
			tmp5 = true;
		}
		HX_STACK_LINE(741)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(741)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(741)
		if ((tmp6)){
			HX_STACK_LINE(741)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(741)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(741)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(741)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(741)
			tmp7 = true;
		}
		HX_STACK_LINE(741)
		if ((tmp7)){
			HX_STACK_LINE(742)
			return null();
		}
		HX_STACK_LINE(747)
		::luxe::MouseEvent tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(747)
		this->onmousedown(tmp8);
		HX_STACK_LINE(748)
		::luxe::MouseEvent tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(748)
		this->emit((int)17,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_mousedown,(void))

Void Entity_obj::_mouseup( ::luxe::MouseEvent _event){
{
		HX_STACK_FRAME("luxe.Entity","_mouseup",0x1fb12b14,"luxe.Entity._mouseup","luxe/Entity.hx",753,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(755)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(755)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(755)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(755)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(755)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(755)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(755)
		if ((tmp4)){
			HX_STACK_LINE(755)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(755)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(755)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(755)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(755)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(755)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(755)
			tmp5 = true;
		}
		HX_STACK_LINE(755)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(755)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(755)
		if ((tmp6)){
			HX_STACK_LINE(755)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(755)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(755)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(755)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(755)
			tmp7 = true;
		}
		HX_STACK_LINE(755)
		if ((tmp7)){
			HX_STACK_LINE(756)
			return null();
		}
		HX_STACK_LINE(761)
		::luxe::MouseEvent tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(761)
		this->onmouseup(tmp8);
		HX_STACK_LINE(762)
		::luxe::MouseEvent tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(762)
		this->emit((int)18,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_mouseup,(void))

Void Entity_obj::_mousewheel( ::luxe::MouseEvent _event){
{
		HX_STACK_FRAME("luxe.Entity","_mousewheel",0xa0246982,"luxe.Entity._mousewheel","luxe/Entity.hx",766,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(768)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(768)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(768)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(768)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(768)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(768)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(768)
		if ((tmp4)){
			HX_STACK_LINE(768)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(768)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(768)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(768)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(768)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(768)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(768)
			tmp5 = true;
		}
		HX_STACK_LINE(768)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(768)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(768)
		if ((tmp6)){
			HX_STACK_LINE(768)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(768)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(768)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(768)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(768)
			tmp7 = true;
		}
		HX_STACK_LINE(768)
		if ((tmp7)){
			HX_STACK_LINE(769)
			return null();
		}
		HX_STACK_LINE(774)
		::luxe::MouseEvent tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(774)
		this->onmousewheel(tmp8);
		HX_STACK_LINE(775)
		::luxe::MouseEvent tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(775)
		this->emit((int)20,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_mousewheel,(void))

Void Entity_obj::_mousemove( ::luxe::MouseEvent _event){
{
		HX_STACK_FRAME("luxe.Entity","_mousemove",0x4957080a,"luxe.Entity._mousemove","luxe/Entity.hx",779,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(781)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(781)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(781)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(781)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(781)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(781)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(781)
		if ((tmp4)){
			HX_STACK_LINE(781)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(781)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(781)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(781)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(781)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(781)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(781)
			tmp5 = true;
		}
		HX_STACK_LINE(781)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(781)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(781)
		if ((tmp6)){
			HX_STACK_LINE(781)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(781)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(781)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(781)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(781)
			tmp7 = true;
		}
		HX_STACK_LINE(781)
		if ((tmp7)){
			HX_STACK_LINE(782)
			return null();
		}
		HX_STACK_LINE(787)
		::luxe::MouseEvent tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(787)
		this->onmousemove(tmp8);
		HX_STACK_LINE(788)
		::luxe::MouseEvent tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(788)
		this->emit((int)19,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_mousemove,(void))

Void Entity_obj::_touchdown( ::luxe::TouchEvent _event){
{
		HX_STACK_FRAME("luxe.Entity","_touchdown",0x5c7bf3f5,"luxe.Entity._touchdown","luxe/Entity.hx",793,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(795)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(795)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(795)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(795)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(795)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(795)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(795)
		if ((tmp4)){
			HX_STACK_LINE(795)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(795)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(795)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(795)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(795)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(795)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(795)
			tmp5 = true;
		}
		HX_STACK_LINE(795)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(795)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(795)
		if ((tmp6)){
			HX_STACK_LINE(795)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(795)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(795)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(795)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(795)
			tmp7 = true;
		}
		HX_STACK_LINE(795)
		if ((tmp7)){
			HX_STACK_LINE(796)
			return null();
		}
		HX_STACK_LINE(801)
		::luxe::TouchEvent tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(801)
		this->ontouchdown(tmp8);
		HX_STACK_LINE(802)
		::luxe::TouchEvent tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(802)
		this->emit((int)21,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_touchdown,(void))

Void Entity_obj::_touchup( ::luxe::TouchEvent _event){
{
		HX_STACK_FRAME("luxe.Entity","_touchup",0x3836472e,"luxe.Entity._touchup","luxe/Entity.hx",806,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(808)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(808)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(808)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(808)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(808)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(808)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(808)
		if ((tmp4)){
			HX_STACK_LINE(808)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(808)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(808)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(808)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(808)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(808)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(808)
			tmp5 = true;
		}
		HX_STACK_LINE(808)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(808)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(808)
		if ((tmp6)){
			HX_STACK_LINE(808)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(808)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(808)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(808)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(808)
			tmp7 = true;
		}
		HX_STACK_LINE(808)
		if ((tmp7)){
			HX_STACK_LINE(809)
			return null();
		}
		HX_STACK_LINE(814)
		::luxe::TouchEvent tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(814)
		this->ontouchup(tmp8);
		HX_STACK_LINE(815)
		::luxe::TouchEvent tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(815)
		this->emit((int)22,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_touchup,(void))

Void Entity_obj::_touchmove( ::luxe::TouchEvent _event){
{
		HX_STACK_FRAME("luxe.Entity","_touchmove",0x626edea4,"luxe.Entity._touchmove","luxe/Entity.hx",819,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(821)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(821)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(821)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(821)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(821)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(821)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(821)
		if ((tmp4)){
			HX_STACK_LINE(821)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(821)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(821)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(821)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(821)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(821)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(821)
			tmp5 = true;
		}
		HX_STACK_LINE(821)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(821)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(821)
		if ((tmp6)){
			HX_STACK_LINE(821)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(821)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(821)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(821)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(821)
			tmp7 = true;
		}
		HX_STACK_LINE(821)
		if ((tmp7)){
			HX_STACK_LINE(822)
			return null();
		}
		HX_STACK_LINE(827)
		::luxe::TouchEvent tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(827)
		this->ontouchmove(tmp8);
		HX_STACK_LINE(828)
		::luxe::TouchEvent tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(828)
		this->emit((int)23,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_touchmove,(void))

Void Entity_obj::_gamepadaxis( ::luxe::GamepadEvent _event){
{
		HX_STACK_FRAME("luxe.Entity","_gamepadaxis",0xeb82b716,"luxe.Entity._gamepadaxis","luxe/Entity.hx",833,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(835)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(835)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(835)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(835)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(835)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(835)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(835)
		if ((tmp4)){
			HX_STACK_LINE(835)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(835)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(835)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(835)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(835)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(835)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(835)
			tmp5 = true;
		}
		HX_STACK_LINE(835)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(835)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(835)
		if ((tmp6)){
			HX_STACK_LINE(835)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(835)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(835)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(835)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(835)
			tmp7 = true;
		}
		HX_STACK_LINE(835)
		if ((tmp7)){
			HX_STACK_LINE(836)
			return null();
		}
		HX_STACK_LINE(841)
		::luxe::GamepadEvent tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(841)
		this->ongamepadaxis(tmp8);
		HX_STACK_LINE(842)
		::luxe::GamepadEvent tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(842)
		this->emit((int)24,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_gamepadaxis,(void))

Void Entity_obj::_gamepaddown( ::luxe::GamepadEvent _event){
{
		HX_STACK_FRAME("luxe.Entity","_gamepaddown",0xed7792d7,"luxe.Entity._gamepaddown","luxe/Entity.hx",846,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(848)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(848)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(848)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(848)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(848)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(848)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(848)
		if ((tmp4)){
			HX_STACK_LINE(848)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(848)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(848)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(848)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(848)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(848)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(848)
			tmp5 = true;
		}
		HX_STACK_LINE(848)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(848)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(848)
		if ((tmp6)){
			HX_STACK_LINE(848)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(848)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(848)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(848)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(848)
			tmp7 = true;
		}
		HX_STACK_LINE(848)
		if ((tmp7)){
			HX_STACK_LINE(849)
			return null();
		}
		HX_STACK_LINE(854)
		::luxe::GamepadEvent tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(854)
		this->ongamepaddown(tmp8);
		HX_STACK_LINE(855)
		::luxe::GamepadEvent tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(855)
		this->emit((int)25,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_gamepaddown,(void))

Void Entity_obj::_gamepadup( ::luxe::GamepadEvent _event){
{
		HX_STACK_FRAME("luxe.Entity","_gamepadup",0x9eb30990,"luxe.Entity._gamepadup","luxe/Entity.hx",859,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(861)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(861)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(861)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(861)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(861)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(861)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(861)
		if ((tmp4)){
			HX_STACK_LINE(861)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(861)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(861)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(861)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(861)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(861)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(861)
			tmp5 = true;
		}
		HX_STACK_LINE(861)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(861)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(861)
		if ((tmp6)){
			HX_STACK_LINE(861)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(861)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(861)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(861)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(861)
			tmp7 = true;
		}
		HX_STACK_LINE(861)
		if ((tmp7)){
			HX_STACK_LINE(862)
			return null();
		}
		HX_STACK_LINE(867)
		::luxe::GamepadEvent tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(867)
		this->ongamepadup(tmp8);
		HX_STACK_LINE(868)
		::luxe::GamepadEvent tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(868)
		this->emit((int)26,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_gamepadup,(void))

Void Entity_obj::_gamepaddevice( ::luxe::GamepadEvent _event){
{
		HX_STACK_FRAME("luxe.Entity","_gamepaddevice",0x25f4be4b,"luxe.Entity._gamepaddevice","luxe/Entity.hx",872,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(874)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(874)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(874)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(874)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(874)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(874)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(874)
		if ((tmp4)){
			HX_STACK_LINE(874)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(874)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(874)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(874)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(874)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(874)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(874)
			tmp5 = true;
		}
		HX_STACK_LINE(874)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(874)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(874)
		if ((tmp6)){
			HX_STACK_LINE(874)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(874)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(874)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(874)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(874)
			tmp7 = true;
		}
		HX_STACK_LINE(874)
		if ((tmp7)){
			HX_STACK_LINE(875)
			return null();
		}
		HX_STACK_LINE(880)
		::luxe::GamepadEvent tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(880)
		this->ongamepaddevice(tmp8);
		HX_STACK_LINE(881)
		::luxe::GamepadEvent tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(881)
		this->emit((int)27,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_gamepaddevice,(void))

Void Entity_obj::_windowmoved( ::snow::types::WindowEvent _event){
{
		HX_STACK_FRAME("luxe.Entity","_windowmoved",0x6f9b4797,"luxe.Entity._windowmoved","luxe/Entity.hx",887,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(889)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(889)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(889)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(889)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(889)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(889)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(889)
		if ((tmp4)){
			HX_STACK_LINE(889)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(889)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(889)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(889)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(889)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(889)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(889)
			tmp5 = true;
		}
		HX_STACK_LINE(889)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(889)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(889)
		if ((tmp6)){
			HX_STACK_LINE(889)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(889)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(889)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(889)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(889)
			tmp7 = true;
		}
		HX_STACK_LINE(889)
		if ((tmp7)){
			HX_STACK_LINE(890)
			return null();
		}
		HX_STACK_LINE(895)
		::snow::types::WindowEvent tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(895)
		this->onwindowmoved(tmp8);
		HX_STACK_LINE(896)
		::snow::types::WindowEvent tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(896)
		this->emit((int)29,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_windowmoved,(void))

Void Entity_obj::_windowresized( ::snow::types::WindowEvent _event){
{
		HX_STACK_FRAME("luxe.Entity","_windowresized",0x1b897854,"luxe.Entity._windowresized","luxe/Entity.hx",900,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(902)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(902)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(902)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(902)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(902)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(902)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(902)
		if ((tmp4)){
			HX_STACK_LINE(902)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(902)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(902)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(902)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(902)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(902)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(902)
			tmp5 = true;
		}
		HX_STACK_LINE(902)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(902)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(902)
		if ((tmp6)){
			HX_STACK_LINE(902)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(902)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(902)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(902)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(902)
			tmp7 = true;
		}
		HX_STACK_LINE(902)
		if ((tmp7)){
			HX_STACK_LINE(903)
			return null();
		}
		HX_STACK_LINE(908)
		::snow::types::WindowEvent tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(908)
		this->onwindowresized(tmp8);
		HX_STACK_LINE(909)
		::snow::types::WindowEvent tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(909)
		this->emit((int)30,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_windowresized,(void))

Void Entity_obj::_windowsized( ::snow::types::WindowEvent _event){
{
		HX_STACK_FRAME("luxe.Entity","_windowsized",0xe00e83e7,"luxe.Entity._windowsized","luxe/Entity.hx",913,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(915)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(915)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(915)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(915)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(915)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(915)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(915)
		if ((tmp4)){
			HX_STACK_LINE(915)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(915)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(915)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(915)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(915)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(915)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(915)
			tmp5 = true;
		}
		HX_STACK_LINE(915)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(915)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(915)
		if ((tmp6)){
			HX_STACK_LINE(915)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(915)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(915)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(915)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(915)
			tmp7 = true;
		}
		HX_STACK_LINE(915)
		if ((tmp7)){
			HX_STACK_LINE(916)
			return null();
		}
		HX_STACK_LINE(921)
		::snow::types::WindowEvent tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(921)
		this->onwindowsized(tmp8);
		HX_STACK_LINE(922)
		::snow::types::WindowEvent tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(922)
		this->emit((int)31,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_windowsized,(void))

Void Entity_obj::_windowminimized( ::snow::types::WindowEvent _event){
{
		HX_STACK_FRAME("luxe.Entity","_windowminimized",0xa7bef8ea,"luxe.Entity._windowminimized","luxe/Entity.hx",926,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(928)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(928)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(928)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(928)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(928)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(928)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(928)
		if ((tmp4)){
			HX_STACK_LINE(928)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(928)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(928)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(928)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(928)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(928)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(928)
			tmp5 = true;
		}
		HX_STACK_LINE(928)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(928)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(928)
		if ((tmp6)){
			HX_STACK_LINE(928)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(928)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(928)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(928)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(928)
			tmp7 = true;
		}
		HX_STACK_LINE(928)
		if ((tmp7)){
			HX_STACK_LINE(929)
			return null();
		}
		HX_STACK_LINE(934)
		::snow::types::WindowEvent tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(934)
		this->onwindowminimized(tmp8);
		HX_STACK_LINE(935)
		::snow::types::WindowEvent tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(935)
		this->emit((int)32,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_windowminimized,(void))

Void Entity_obj::_windowrestored( ::snow::types::WindowEvent _event){
{
		HX_STACK_FRAME("luxe.Entity","_windowrestored",0x4aecb872,"luxe.Entity._windowrestored","luxe/Entity.hx",939,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(941)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(941)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(941)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(941)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(941)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(941)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(941)
		if ((tmp4)){
			HX_STACK_LINE(941)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(941)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(941)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(941)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(941)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(941)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(941)
			tmp5 = true;
		}
		HX_STACK_LINE(941)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(941)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(941)
		if ((tmp6)){
			HX_STACK_LINE(941)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(941)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(941)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(941)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(941)
			tmp7 = true;
		}
		HX_STACK_LINE(941)
		if ((tmp7)){
			HX_STACK_LINE(942)
			return null();
		}
		HX_STACK_LINE(947)
		::snow::types::WindowEvent tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(947)
		this->onwindowrestored(tmp8);
		HX_STACK_LINE(948)
		::snow::types::WindowEvent tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(948)
		this->emit((int)33,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_windowrestored,(void))

Void Entity_obj::_inputdown( ::luxe::InputEvent _event){
{
		HX_STACK_FRAME("luxe.Entity","_inputdown",0x5e3a21c0,"luxe.Entity._inputdown","luxe/Entity.hx",954,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(956)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(956)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(956)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(956)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(956)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(956)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(956)
		if ((tmp4)){
			HX_STACK_LINE(956)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(956)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(956)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(956)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(956)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(956)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(956)
			tmp5 = true;
		}
		HX_STACK_LINE(956)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(956)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(956)
		if ((tmp6)){
			HX_STACK_LINE(956)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(956)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(956)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(956)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(956)
			tmp7 = true;
		}
		HX_STACK_LINE(956)
		if ((tmp7)){
			HX_STACK_LINE(957)
			return null();
		}
		HX_STACK_LINE(962)
		::luxe::InputEvent tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(962)
		this->oninputdown(tmp8);
		HX_STACK_LINE(963)
		::luxe::InputEvent tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(963)
		this->emit((int)15,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_inputdown,(void))

Void Entity_obj::_inputup( ::luxe::InputEvent _event){
{
		HX_STACK_FRAME("luxe.Entity","_inputup",0x335cdc39,"luxe.Entity._inputup","luxe/Entity.hx",967,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(969)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(969)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(969)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(969)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(969)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(969)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(969)
		if ((tmp4)){
			HX_STACK_LINE(969)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(969)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(969)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(969)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(969)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(969)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(969)
			tmp5 = true;
		}
		HX_STACK_LINE(969)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(969)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(969)
		if ((tmp6)){
			HX_STACK_LINE(969)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(969)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(969)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(969)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(969)
			tmp7 = true;
		}
		HX_STACK_LINE(969)
		if ((tmp7)){
			HX_STACK_LINE(970)
			return null();
		}
		HX_STACK_LINE(975)
		::luxe::InputEvent tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(975)
		this->oninputup(tmp8);
		HX_STACK_LINE(976)
		::luxe::InputEvent tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(976)
		this->emit((int)16,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_inputup,(void))

Float Entity_obj::get_fixed_rate( ){
	HX_STACK_FRAME("luxe.Entity","get_fixed_rate",0x56a59b27,"luxe.Entity.get_fixed_rate","luxe/Entity.hx",983,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(985)
	Float tmp = this->fixed_rate;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(985)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_fixed_rate,return )

Float Entity_obj::set_fixed_rate( Float _rate){
	HX_STACK_FRAME("luxe.Entity","set_fixed_rate",0x76c5839b,"luxe.Entity.set_fixed_rate","luxe/Entity.hx",989,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_rate,"_rate")
	HX_STACK_LINE(991)
	this->fixed_rate = _rate;
	HX_STACK_LINE(993)
	bool tmp = this->started;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(993)
	if ((tmp)){
		HX_STACK_LINE(994)
		{
			HX_STACK_LINE(994)
			::snow::api::Timer tmp1 = this->fixed_rate_timer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(994)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(994)
			if ((tmp2)){
				HX_STACK_LINE(994)
				::snow::api::Timer tmp3 = this->fixed_rate_timer;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(994)
				tmp3->stop();
				HX_STACK_LINE(994)
				this->fixed_rate_timer = null();
			}
		}
		HX_STACK_LINE(994)
		bool tmp1 = (_rate != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(994)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(994)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(994)
		if ((tmp2)){
			HX_STACK_LINE(994)
			::luxe::Entity tmp4 = this->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(994)
			::luxe::Entity tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(994)
			::luxe::Entity tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(994)
			tmp3 = (tmp6 == null());
		}
		else{
			HX_STACK_LINE(994)
			tmp3 = false;
		}
		HX_STACK_LINE(994)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(994)
		if ((tmp3)){
			HX_STACK_LINE(994)
			bool tmp5 = this->destroyed;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(994)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(994)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(994)
			tmp4 = !(tmp7);
		}
		else{
			HX_STACK_LINE(994)
			tmp4 = false;
		}
		HX_STACK_LINE(994)
		if ((tmp4)){
			HX_STACK_LINE(994)
			::snow::api::Timer tmp5 = ::snow::api::Timer_obj::__new(_rate);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(994)
			this->fixed_rate_timer = tmp5;
			HX_STACK_LINE(994)
			Dynamic tmp6 = this->_fixed_update_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(994)
			::snow::api::Timer tmp7 = this->fixed_rate_timer;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(994)
			tmp7->run = tmp6;
		}
	}
	HX_STACK_LINE(997)
	Float tmp1 = this->fixed_rate;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(997)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_fixed_rate,return )

Void Entity_obj::_stop_fixed_rate_timer( ){
{
		HX_STACK_FRAME("luxe.Entity","_stop_fixed_rate_timer",0xf4198482,"luxe.Entity._stop_fixed_rate_timer","luxe/Entity.hx",1001,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1003)
		::snow::api::Timer tmp = this->fixed_rate_timer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1003)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1003)
		if ((tmp1)){
			HX_STACK_LINE(1004)
			::snow::api::Timer tmp2 = this->fixed_rate_timer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1004)
			tmp2->stop();
			HX_STACK_LINE(1005)
			this->fixed_rate_timer = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,_stop_fixed_rate_timer,(void))

Void Entity_obj::_set_fixed_rate_timer( Float _rate){
{
		HX_STACK_FRAME("luxe.Entity","_set_fixed_rate_timer",0x33475eba,"luxe.Entity._set_fixed_rate_timer","luxe/Entity.hx",1010,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rate,"_rate")
		HX_STACK_LINE(1012)
		{
			HX_STACK_LINE(1012)
			::snow::api::Timer tmp = this->fixed_rate_timer;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1012)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1012)
			if ((tmp1)){
				HX_STACK_LINE(1012)
				::snow::api::Timer tmp2 = this->fixed_rate_timer;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1012)
				tmp2->stop();
				HX_STACK_LINE(1012)
				this->fixed_rate_timer = null();
			}
		}
		HX_STACK_LINE(1017)
		bool tmp = (_rate != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1017)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1017)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1017)
		if ((tmp1)){
			HX_STACK_LINE(1017)
			::luxe::Entity tmp3 = this->get_parent();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1017)
			::luxe::Entity tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1017)
			::luxe::Entity tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1017)
			tmp2 = (tmp5 == null());
		}
		else{
			HX_STACK_LINE(1017)
			tmp2 = false;
		}
		HX_STACK_LINE(1017)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1017)
		if ((tmp2)){
			HX_STACK_LINE(1017)
			bool tmp4 = this->destroyed;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1017)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1017)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1017)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(1017)
			tmp3 = false;
		}
		HX_STACK_LINE(1017)
		if ((tmp3)){
			HX_STACK_LINE(1018)
			::snow::api::Timer tmp4 = ::snow::api::Timer_obj::__new(_rate);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1018)
			this->fixed_rate_timer = tmp4;
			HX_STACK_LINE(1019)
			Dynamic tmp5 = this->_fixed_update_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1019)
			::snow::api::Timer tmp6 = this->fixed_rate_timer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1019)
			tmp6->run = tmp5;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_set_fixed_rate_timer,(void))

::luxe::structural::OrderedMap_String_luxe_Component Entity_obj::get_components( ){
	HX_STACK_FRAME("luxe.Entity","get_components",0x5c119f72,"luxe.Entity.get_components","luxe/Entity.hx",1026,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1027)
	::luxe::components::Components tmp = this->_components;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1027)
	::luxe::structural::OrderedMap_String_luxe_Component tmp1 = tmp->components;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1027)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_components,return )

Void Entity_obj::_add_child( ::luxe::Entity child){
{
		HX_STACK_FRAME("luxe.Entity","_add_child",0x04ab4a12,"luxe.Entity._add_child","luxe/Entity.hx",1033,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(1035)
		::luxe::Entity tmp = child;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1035)
		this->children->push(tmp);
		HX_STACK_LINE(1037)
		::luxe::Scene tmp1 = this->scene_root;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1037)
		child->set_scene_root(tmp1);
		HX_STACK_LINE(1042)
		::luxe::Scene tmp2 = child->get_scene();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1042)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1042)
		if ((tmp3)){
			HX_STACK_LINE(1044)
			::luxe::Scene tmp4 = child->get_scene();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1044)
			::luxe::Entity tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1044)
			bool tmp6 = tmp4->remove(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1044)
			bool _removed = tmp6;		HX_STACK_VAR(_removed,"_removed");
		}
		else{
			HX_STACK_LINE(1049)
			bool tmp4 = this->inited;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1049)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1049)
			if ((tmp4)){
				HX_STACK_LINE(1049)
				bool tmp6 = child->inited;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1049)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1049)
				tmp5 = !(tmp7);
			}
			else{
				HX_STACK_LINE(1049)
				tmp5 = false;
			}
			HX_STACK_LINE(1049)
			if ((tmp5)){
				HX_STACK_LINE(1050)
				::luxe::Scene tmp6 = this->scene_root;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1050)
				::luxe::Entity tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1050)
				tmp6->_delayed_init_entities->push(tmp7);
			}
			HX_STACK_LINE(1053)
			bool tmp6 = this->started;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1053)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1053)
			if ((tmp6)){
				HX_STACK_LINE(1053)
				bool tmp8 = child->started;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1053)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1053)
				tmp7 = !(tmp9);
			}
			else{
				HX_STACK_LINE(1053)
				tmp7 = false;
			}
			HX_STACK_LINE(1053)
			if ((tmp7)){
				HX_STACK_LINE(1054)
				::luxe::Scene tmp8 = this->scene_root;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1054)
				::luxe::Entity tmp9 = child;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1054)
				tmp8->_delayed_reset_entities->push(tmp9);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_add_child,(void))

Void Entity_obj::_remove_child( ::luxe::Entity child){
{
		HX_STACK_FRAME("luxe.Entity","_remove_child",0x54f46c4d,"luxe.Entity._remove_child","luxe/Entity.hx",1061,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(1063)
		::luxe::Entity tmp = child;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1063)
		this->children->remove(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_remove_child,(void))

Void Entity_obj::set_pos_from_transform( ::phoenix::Vector _pos){
{
		HX_STACK_FRAME("luxe.Entity","set_pos_from_transform",0x2a7e6b72,"luxe.Entity.set_pos_from_transform","luxe/Entity.hx",1069,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_pos,"_pos")
		HX_STACK_LINE(1072)
		int tmp = this->component_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1072)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1072)
		if ((tmp1)){
			HX_STACK_LINE(1073)
			::luxe::components::Components tmp2 = this->_components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1073)
			::luxe::structural::OrderedMap_String_luxe_Component tmp3 = tmp2->components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1073)
			::luxe::structural::OrderedMapIterator_String_luxe_Component tmp4 = ::luxe::structural::OrderedMapIterator_String_luxe_Component_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1073)
			::luxe::structural::OrderedMapIterator_String_luxe_Component _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1073)
			while((true)){
				HX_STACK_LINE(1073)
				int tmp5 = _g->index;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1073)
				int tmp6 = _g->map->_keys->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1073)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1073)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1073)
				if ((tmp8)){
					HX_STACK_LINE(1073)
					break;
				}
				HX_STACK_LINE(1073)
				::luxe::Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1073)
				{
					HX_STACK_LINE(1073)
					int tmp10 = (_g->index)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1073)
					::String tmp11 = _g->map->_keys->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1073)
					::String key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(1073)
					::haxe::ds::StringMap tmp12 = _g->map->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1073)
					::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1073)
					::luxe::Component tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1073)
					tmp9 = tmp14;
				}
				HX_STACK_LINE(1073)
				::luxe::Component _component = tmp9;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(1074)
				::phoenix::Vector tmp10 = _pos;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1074)
				_component->entity_pos_change(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_pos_from_transform,(void))

Void Entity_obj::set_rotation_from_transform( ::phoenix::Quaternion _rotation){
{
		HX_STACK_FRAME("luxe.Entity","set_rotation_from_transform",0xf7a74368,"luxe.Entity.set_rotation_from_transform","luxe/Entity.hx",1080,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rotation,"_rotation")
		HX_STACK_LINE(1083)
		int tmp = this->component_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1083)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1083)
		if ((tmp1)){
			HX_STACK_LINE(1084)
			::luxe::components::Components tmp2 = this->_components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1084)
			::luxe::structural::OrderedMap_String_luxe_Component tmp3 = tmp2->components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1084)
			::luxe::structural::OrderedMapIterator_String_luxe_Component tmp4 = ::luxe::structural::OrderedMapIterator_String_luxe_Component_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1084)
			::luxe::structural::OrderedMapIterator_String_luxe_Component _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1084)
			while((true)){
				HX_STACK_LINE(1084)
				int tmp5 = _g->index;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1084)
				int tmp6 = _g->map->_keys->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1084)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1084)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1084)
				if ((tmp8)){
					HX_STACK_LINE(1084)
					break;
				}
				HX_STACK_LINE(1084)
				::luxe::Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1084)
				{
					HX_STACK_LINE(1084)
					int tmp10 = (_g->index)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1084)
					::String tmp11 = _g->map->_keys->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1084)
					::String key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(1084)
					::haxe::ds::StringMap tmp12 = _g->map->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1084)
					::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1084)
					::luxe::Component tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1084)
					tmp9 = tmp14;
				}
				HX_STACK_LINE(1084)
				::luxe::Component _component = tmp9;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(1085)
				::phoenix::Quaternion tmp10 = _rotation;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1085)
				_component->entity_rotation_change(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_rotation_from_transform,(void))

Void Entity_obj::set_scale_from_transform( ::phoenix::Vector _scale){
{
		HX_STACK_FRAME("luxe.Entity","set_scale_from_transform",0x0154d33c,"luxe.Entity.set_scale_from_transform","luxe/Entity.hx",1091,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_LINE(1094)
		int tmp = this->component_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1094)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1094)
		if ((tmp1)){
			HX_STACK_LINE(1095)
			::luxe::components::Components tmp2 = this->_components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1095)
			::luxe::structural::OrderedMap_String_luxe_Component tmp3 = tmp2->components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1095)
			::luxe::structural::OrderedMapIterator_String_luxe_Component tmp4 = ::luxe::structural::OrderedMapIterator_String_luxe_Component_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1095)
			::luxe::structural::OrderedMapIterator_String_luxe_Component _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1095)
			while((true)){
				HX_STACK_LINE(1095)
				int tmp5 = _g->index;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1095)
				int tmp6 = _g->map->_keys->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1095)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1095)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1095)
				if ((tmp8)){
					HX_STACK_LINE(1095)
					break;
				}
				HX_STACK_LINE(1095)
				::luxe::Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1095)
				{
					HX_STACK_LINE(1095)
					int tmp10 = (_g->index)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1095)
					::String tmp11 = _g->map->_keys->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1095)
					::String key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(1095)
					::haxe::ds::StringMap tmp12 = _g->map->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1095)
					::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1095)
					::luxe::Component tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1095)
					tmp9 = tmp14;
				}
				HX_STACK_LINE(1095)
				::luxe::Component _component = tmp9;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(1096)
				::phoenix::Vector tmp10 = _scale;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1096)
				_component->entity_scale_change(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_scale_from_transform,(void))

Void Entity_obj::set_origin_from_transform( ::phoenix::Vector _origin){
{
		HX_STACK_FRAME("luxe.Entity","set_origin_from_transform",0x1a1cb7c0,"luxe.Entity.set_origin_from_transform","luxe/Entity.hx",1102,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_origin,"_origin")
		HX_STACK_LINE(1105)
		int tmp = this->component_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1105)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1105)
		if ((tmp1)){
			HX_STACK_LINE(1106)
			::luxe::components::Components tmp2 = this->_components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1106)
			::luxe::structural::OrderedMap_String_luxe_Component tmp3 = tmp2->components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1106)
			::luxe::structural::OrderedMapIterator_String_luxe_Component tmp4 = ::luxe::structural::OrderedMapIterator_String_luxe_Component_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1106)
			::luxe::structural::OrderedMapIterator_String_luxe_Component _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1106)
			while((true)){
				HX_STACK_LINE(1106)
				int tmp5 = _g->index;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1106)
				int tmp6 = _g->map->_keys->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1106)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1106)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1106)
				if ((tmp8)){
					HX_STACK_LINE(1106)
					break;
				}
				HX_STACK_LINE(1106)
				::luxe::Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1106)
				{
					HX_STACK_LINE(1106)
					int tmp10 = (_g->index)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1106)
					::String tmp11 = _g->map->_keys->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1106)
					::String key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(1106)
					::haxe::ds::StringMap tmp12 = _g->map->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1106)
					::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1106)
					::luxe::Component tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1106)
					tmp9 = tmp14;
				}
				HX_STACK_LINE(1106)
				::luxe::Component _component = tmp9;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(1107)
				::phoenix::Vector tmp10 = _origin;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1107)
				_component->entity_origin_change(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_origin_from_transform,(void))

Void Entity_obj::set_parent_from_transform( ::phoenix::Transform _parent){
{
		HX_STACK_FRAME("luxe.Entity","set_parent_from_transform",0xc1ab18fc,"luxe.Entity.set_parent_from_transform","luxe/Entity.hx",1113,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_parent,"_parent")
		HX_STACK_LINE(1116)
		int tmp = this->component_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1116)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1116)
		if ((tmp1)){
			HX_STACK_LINE(1117)
			::luxe::components::Components tmp2 = this->_components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1117)
			::luxe::structural::OrderedMap_String_luxe_Component tmp3 = tmp2->components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1117)
			::luxe::structural::OrderedMapIterator_String_luxe_Component tmp4 = ::luxe::structural::OrderedMapIterator_String_luxe_Component_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1117)
			::luxe::structural::OrderedMapIterator_String_luxe_Component _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1117)
			while((true)){
				HX_STACK_LINE(1117)
				int tmp5 = _g->index;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1117)
				int tmp6 = _g->map->_keys->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1117)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1117)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1117)
				if ((tmp8)){
					HX_STACK_LINE(1117)
					break;
				}
				HX_STACK_LINE(1117)
				::luxe::Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1117)
				{
					HX_STACK_LINE(1117)
					int tmp10 = (_g->index)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1117)
					::String tmp11 = _g->map->_keys->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1117)
					::String key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(1117)
					::haxe::ds::StringMap tmp12 = _g->map->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1117)
					::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1117)
					::luxe::Component tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1117)
					tmp9 = tmp14;
				}
				HX_STACK_LINE(1117)
				::luxe::Component _component = tmp9;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(1118)
				::phoenix::Transform tmp10 = _parent;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1118)
				_component->entity_parent_change(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_parent_from_transform,(void))

::phoenix::Vector Entity_obj::set_pos( ::phoenix::Vector _p){
	HX_STACK_FRAME("luxe.Entity","set_pos",0x94cc50c4,"luxe.Entity.set_pos","luxe/Entity.hx",1126,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(1128)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1128)
	{
		HX_STACK_LINE(1128)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1128)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1128)
		{
			HX_STACK_LINE(1128)
			::phoenix::Spatial _this1 = _this->local;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(1128)
			_this1->pos = _p;
			HX_STACK_LINE(1128)
			bool tmp2 = (_p != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1128)
			if ((tmp2)){
				HX_STACK_LINE(1128)
				::phoenix::Vector tmp3 = _this1->pos;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1128)
				Dynamic tmp4 = _this1->_pos_change_dyn();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1128)
				::phoenix::Vector_obj::Listen(tmp3,tmp4);
				HX_STACK_LINE(1128)
				{
					HX_STACK_LINE(1128)
					bool tmp5 = (_this1->pos_changed != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1128)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1128)
					if ((tmp5)){
						HX_STACK_LINE(1128)
						bool tmp7 = _this1->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1128)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1128)
						tmp6 = !(tmp8);
					}
					else{
						HX_STACK_LINE(1128)
						tmp6 = false;
					}
					HX_STACK_LINE(1128)
					if ((tmp6)){
						HX_STACK_LINE(1128)
						::phoenix::Vector tmp7 = _this1->pos;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1128)
						_this1->pos_changed(tmp7);
					}
				}
			}
			HX_STACK_LINE(1128)
			tmp = _this1->pos;
		}
	}
	HX_STACK_LINE(1128)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_pos,return )

::phoenix::Vector Entity_obj::get_pos( ){
	HX_STACK_FRAME("luxe.Entity","get_pos",0xa1cabfb8,"luxe.Entity.get_pos","luxe/Entity.hx",1132,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1134)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1134)
	{
		HX_STACK_LINE(1134)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1134)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1134)
		tmp = _this->local->pos;
	}
	HX_STACK_LINE(1134)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_pos,return )

::phoenix::Quaternion Entity_obj::set_rotation( ::phoenix::Quaternion _r){
	HX_STACK_FRAME("luxe.Entity","set_rotation",0x721fbc0e,"luxe.Entity.set_rotation","luxe/Entity.hx",1140,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_r,"_r")
	HX_STACK_LINE(1142)
	::phoenix::Quaternion tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1142)
	{
		HX_STACK_LINE(1142)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1142)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1142)
		{
			HX_STACK_LINE(1142)
			::phoenix::Spatial _this1 = _this->local;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(1142)
			_this1->rotation = _r;
			HX_STACK_LINE(1142)
			bool tmp2 = (_r != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1142)
			if ((tmp2)){
				HX_STACK_LINE(1142)
				{
					HX_STACK_LINE(1142)
					::phoenix::Quaternion _q = _this1->rotation;		HX_STACK_VAR(_q,"_q");
					HX_STACK_LINE(1142)
					Dynamic listener = _this1->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(1142)
					_q->listen_x = listener;
					HX_STACK_LINE(1142)
					_q->listen_y = listener;
					HX_STACK_LINE(1142)
					_q->listen_z = listener;
					HX_STACK_LINE(1142)
					_q->listen_w = listener;
				}
				HX_STACK_LINE(1142)
				{
					HX_STACK_LINE(1142)
					bool tmp3 = (_this1->rotation_changed != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1142)
					bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1142)
					if ((tmp3)){
						HX_STACK_LINE(1142)
						bool tmp5 = _this1->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1142)
						bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1142)
						tmp4 = !(tmp6);
					}
					else{
						HX_STACK_LINE(1142)
						tmp4 = false;
					}
					HX_STACK_LINE(1142)
					if ((tmp4)){
						HX_STACK_LINE(1142)
						::phoenix::Quaternion tmp5 = _this1->rotation;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1142)
						_this1->rotation_changed(tmp5);
					}
				}
			}
			HX_STACK_LINE(1142)
			tmp = _this1->rotation;
		}
	}
	HX_STACK_LINE(1142)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_rotation,return )

::phoenix::Quaternion Entity_obj::get_rotation( ){
	HX_STACK_FRAME("luxe.Entity","get_rotation",0x5d26989a,"luxe.Entity.get_rotation","luxe/Entity.hx",1146,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1148)
	::phoenix::Quaternion tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1148)
	{
		HX_STACK_LINE(1148)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1148)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1148)
		tmp = _this->local->rotation;
	}
	HX_STACK_LINE(1148)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_rotation,return )

::phoenix::Vector Entity_obj::set_scale( ::phoenix::Vector _s){
	HX_STACK_FRAME("luxe.Entity","set_scale",0x4f4cedba,"luxe.Entity.set_scale","luxe/Entity.hx",1154,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(1156)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1156)
	{
		HX_STACK_LINE(1156)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1156)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1156)
		{
			HX_STACK_LINE(1156)
			::phoenix::Spatial _this1 = _this->local;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(1156)
			_this1->scale = _s;
			HX_STACK_LINE(1156)
			bool tmp2 = (_s != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1156)
			if ((tmp2)){
				HX_STACK_LINE(1156)
				::phoenix::Vector tmp3 = _this1->scale;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1156)
				Dynamic tmp4 = _this1->_scale_change_dyn();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1156)
				::phoenix::Vector_obj::Listen(tmp3,tmp4);
				HX_STACK_LINE(1156)
				{
					HX_STACK_LINE(1156)
					bool tmp5 = (_this1->scale_changed != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1156)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1156)
					if ((tmp5)){
						HX_STACK_LINE(1156)
						bool tmp7 = _this1->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1156)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1156)
						tmp6 = !(tmp8);
					}
					else{
						HX_STACK_LINE(1156)
						tmp6 = false;
					}
					HX_STACK_LINE(1156)
					if ((tmp6)){
						HX_STACK_LINE(1156)
						::phoenix::Vector tmp7 = _this1->scale;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1156)
						_this1->scale_changed(tmp7);
					}
				}
			}
			HX_STACK_LINE(1156)
			tmp = _this1->scale;
		}
	}
	HX_STACK_LINE(1156)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_scale,return )

::phoenix::Vector Entity_obj::get_scale( ){
	HX_STACK_FRAME("luxe.Entity","get_scale",0x6bfc01ae,"luxe.Entity.get_scale","luxe/Entity.hx",1160,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1162)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1162)
	{
		HX_STACK_LINE(1162)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1162)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1162)
		tmp = _this->local->scale;
	}
	HX_STACK_LINE(1162)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_scale,return )

::phoenix::Vector Entity_obj::set_origin( ::phoenix::Vector _origin){
	HX_STACK_FRAME("luxe.Entity","set_origin",0x22de44b6,"luxe.Entity.set_origin","luxe/Entity.hx",1168,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_origin,"_origin")
	HX_STACK_LINE(1170)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1170)
	{
		HX_STACK_LINE(1170)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1170)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1170)
		{
			HX_STACK_LINE(1170)
			_this->dirty = true;
			HX_STACK_LINE(1170)
			bool tmp2 = _this->dirty;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1170)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1170)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1170)
			if ((tmp3)){
				HX_STACK_LINE(1170)
				bool tmp5 = _this->_setup;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1170)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1170)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1170)
				tmp4 = !(tmp7);
			}
			else{
				HX_STACK_LINE(1170)
				tmp4 = false;
			}
			HX_STACK_LINE(1170)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1170)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1170)
			if ((tmp5)){
				HX_STACK_LINE(1170)
				tmp6 = (_this->_dirty_handlers != null());
			}
			else{
				HX_STACK_LINE(1170)
				tmp6 = false;
			}
			HX_STACK_LINE(1170)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1170)
			if ((tmp6)){
				HX_STACK_LINE(1170)
				int tmp8 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1170)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1170)
				tmp7 = (tmp9 > (int)0);
			}
			else{
				HX_STACK_LINE(1170)
				tmp7 = false;
			}
			HX_STACK_LINE(1170)
			if ((tmp7)){
				HX_STACK_LINE(1170)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1170)
				cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1170)
				while((true)){
					HX_STACK_LINE(1170)
					bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1170)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1170)
					if ((tmp9)){
						HX_STACK_LINE(1170)
						break;
					}
					HX_STACK_LINE(1170)
					Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1170)
					Dynamic _handler = tmp10;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(1170)
					++(_g);
					HX_STACK_LINE(1170)
					bool tmp11 = (_handler != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1170)
					if ((tmp11)){
						HX_STACK_LINE(1170)
						::phoenix::Transform tmp12 = _this;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1170)
						_handler(tmp12).Cast< Void >();
					}
				}
			}
			HX_STACK_LINE(1170)
			_this->dirty;
		}
		HX_STACK_LINE(1170)
		_this->origin = _origin;
		HX_STACK_LINE(1170)
		bool tmp2 = (_this->_origin_handlers != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1170)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1170)
		if ((tmp2)){
			HX_STACK_LINE(1170)
			int tmp4 = _this->_origin_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1170)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1170)
			tmp3 = (tmp5 > (int)0);
		}
		else{
			HX_STACK_LINE(1170)
			tmp3 = false;
		}
		HX_STACK_LINE(1170)
		if ((tmp3)){
			HX_STACK_LINE(1170)
			::phoenix::Vector _origin1 = _this->origin;		HX_STACK_VAR(_origin1,"_origin1");
			HX_STACK_LINE(1170)
			{
				HX_STACK_LINE(1170)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1170)
				cpp::ArrayBase _g1 = _this->_origin_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1170)
				while((true)){
					HX_STACK_LINE(1170)
					bool tmp4 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1170)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1170)
					if ((tmp5)){
						HX_STACK_LINE(1170)
						break;
					}
					HX_STACK_LINE(1170)
					Dynamic tmp6 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1170)
					Dynamic _handler = tmp6;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(1170)
					++(_g);
					HX_STACK_LINE(1170)
					bool tmp7 = (_handler != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1170)
					if ((tmp7)){
						HX_STACK_LINE(1170)
						::phoenix::Vector tmp8 = _origin1;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1170)
						_handler(tmp8).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(1170)
		tmp = _this->origin;
	}
	HX_STACK_LINE(1170)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_origin,return )

::phoenix::Vector Entity_obj::get_origin( ){
	HX_STACK_FRAME("luxe.Entity","get_origin",0x1f60a642,"luxe.Entity.get_origin","luxe/Entity.hx",1175,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1177)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1177)
	{
		HX_STACK_LINE(1177)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1177)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1177)
		tmp = _this->origin;
	}
	HX_STACK_LINE(1177)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_origin,return )

::phoenix::Transform Entity_obj::set_transform( ::phoenix::Transform _transform){
	HX_STACK_FRAME("luxe.Entity","set_transform",0x4248a49c,"luxe.Entity.set_transform","luxe/Entity.hx",1183,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_transform,"_transform")
	HX_STACK_LINE(1185)
	::phoenix::Transform tmp = this->transform = _transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1185)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_transform,return )

::phoenix::Transform Entity_obj::get_transform( ){
	HX_STACK_FRAME("luxe.Entity","get_transform",0xfd42c290,"luxe.Entity.get_transform","luxe/Entity.hx",1190,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1192)
	::phoenix::Transform tmp = this->transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1192)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_transform,return )

::luxe::Entity Entity_obj::set_parent( ::luxe::Entity other){
	HX_STACK_FRAME("luxe.Entity","set_parent",0xc55b2ffa,"luxe.Entity.set_parent","luxe/Entity.hx",1198,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(1200)
	{
		HX_STACK_LINE(1200)
		bool tmp = (other != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1200)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1200)
		if ((tmp1)){
			HX_STACK_LINE(214)
			::String tmp2 = HX_HCSTRING(" ( Entity setting itself as parent makes no sense","\x46","\xc2","\x5f","\x7a");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(214)
			::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1200)
			::String tmp4 = (HX_HCSTRING("other != this","\xb2","\xe2","\x97","\xd0") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1200)
			::luxe::DebugError tmp5 = ::luxe::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1200)
			HX_STACK_DO_THROW(tmp5);
		}
	}
	HX_STACK_LINE(1206)
	::luxe::Entity tmp = this->get_parent();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1206)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1206)
	if ((tmp1)){
		HX_STACK_LINE(1207)
		::luxe::Entity tmp2 = this->get_parent();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1207)
		tmp2->_remove_child(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(1211)
	this->parent = other;
	HX_STACK_LINE(1215)
	::luxe::Entity tmp2 = this->get_parent();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1215)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1215)
	if ((tmp3)){
		HX_STACK_LINE(1216)
		::luxe::Entity tmp4 = this->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1216)
		tmp4->_add_child(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(1217)
		{
			HX_STACK_LINE(1217)
			::phoenix::Transform tmp5 = this->get_transform();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1217)
			::phoenix::Transform _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1217)
			::luxe::Entity tmp6 = this->get_parent();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1217)
			::phoenix::Transform tmp7 = tmp6->get_transform();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1217)
			::phoenix::Transform _p = tmp7;		HX_STACK_VAR(_p,"_p");
			HX_STACK_LINE(1217)
			{
				HX_STACK_LINE(1217)
				_this->dirty = true;
				HX_STACK_LINE(1217)
				bool tmp8 = _this->dirty;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1217)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1217)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1217)
				if ((tmp9)){
					HX_STACK_LINE(1217)
					bool tmp11 = _this->_setup;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1217)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1217)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1217)
					tmp10 = !(tmp13);
				}
				else{
					HX_STACK_LINE(1217)
					tmp10 = false;
				}
				HX_STACK_LINE(1217)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1217)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1217)
				if ((tmp11)){
					HX_STACK_LINE(1217)
					tmp12 = (_this->_dirty_handlers != null());
				}
				else{
					HX_STACK_LINE(1217)
					tmp12 = false;
				}
				HX_STACK_LINE(1217)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1217)
				if ((tmp12)){
					HX_STACK_LINE(1217)
					int tmp14 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1217)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1217)
					tmp13 = (tmp15 > (int)0);
				}
				else{
					HX_STACK_LINE(1217)
					tmp13 = false;
				}
				HX_STACK_LINE(1217)
				if ((tmp13)){
					HX_STACK_LINE(1217)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1217)
					cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1217)
					while((true)){
						HX_STACK_LINE(1217)
						bool tmp14 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1217)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1217)
						if ((tmp15)){
							HX_STACK_LINE(1217)
							break;
						}
						HX_STACK_LINE(1217)
						Dynamic tmp16 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1217)
						Dynamic _handler = tmp16;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(1217)
						++(_g);
						HX_STACK_LINE(1217)
						bool tmp17 = (_handler != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1217)
						if ((tmp17)){
							HX_STACK_LINE(1217)
							::phoenix::Transform tmp18 = _this;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1217)
							_handler(tmp18).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(1217)
				_this->dirty;
			}
			HX_STACK_LINE(1217)
			bool tmp8 = (_this->parent != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1217)
			if ((tmp8)){
				HX_STACK_LINE(1217)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(1217)
				bool tmp9 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1217)
				if ((tmp9)){
					HX_STACK_LINE(1217)
					false;
				}
				else{
					HX_STACK_LINE(1217)
					Dynamic tmp10 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1217)
					_this1->_clean_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp10);
				}
			}
			HX_STACK_LINE(1217)
			_this->parent = _p;
			HX_STACK_LINE(1217)
			bool tmp9 = (_this->_parent_handlers != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1217)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1217)
			if ((tmp9)){
				HX_STACK_LINE(1217)
				int tmp11 = _this->_parent_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1217)
				int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1217)
				tmp10 = (tmp12 > (int)0);
			}
			else{
				HX_STACK_LINE(1217)
				tmp10 = false;
			}
			HX_STACK_LINE(1217)
			if ((tmp10)){
				HX_STACK_LINE(1217)
				::phoenix::Transform _parent = _this->parent;		HX_STACK_VAR(_parent,"_parent");
				HX_STACK_LINE(1217)
				{
					HX_STACK_LINE(1217)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1217)
					cpp::ArrayBase _g1 = _this->_parent_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1217)
					while((true)){
						HX_STACK_LINE(1217)
						bool tmp11 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1217)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1217)
						if ((tmp12)){
							HX_STACK_LINE(1217)
							break;
						}
						HX_STACK_LINE(1217)
						Dynamic tmp13 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1217)
						Dynamic _handler = tmp13;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(1217)
						++(_g);
						HX_STACK_LINE(1217)
						bool tmp14 = (_handler != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1217)
						if ((tmp14)){
							HX_STACK_LINE(1217)
							::phoenix::Transform tmp15 = _parent;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1217)
							_handler(tmp15).Cast< Void >();
						}
					}
				}
			}
			HX_STACK_LINE(1217)
			bool tmp11 = (_this->parent != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1217)
			if ((tmp11)){
				HX_STACK_LINE(1217)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(1217)
				bool tmp12 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1217)
				if ((tmp12)){
					HX_STACK_LINE(1217)
					_this1->_clean_handlers = cpp::ArrayBase_obj::__new();
				}
				HX_STACK_LINE(1217)
				Dynamic tmp13 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1217)
				_this1->_clean_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp13);
			}
			HX_STACK_LINE(1217)
			_this->parent;
		}
	}
	else{
		HX_STACK_LINE(1219)
		::phoenix::Transform tmp4 = this->get_transform();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1219)
		::phoenix::Transform _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1219)
		{
			HX_STACK_LINE(1219)
			_this->dirty = true;
			HX_STACK_LINE(1219)
			bool tmp5 = _this->dirty;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1219)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1219)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1219)
			if ((tmp6)){
				HX_STACK_LINE(1219)
				bool tmp8 = _this->_setup;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1219)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1219)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1219)
				tmp7 = !(tmp10);
			}
			else{
				HX_STACK_LINE(1219)
				tmp7 = false;
			}
			HX_STACK_LINE(1219)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1219)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1219)
			if ((tmp8)){
				HX_STACK_LINE(1219)
				tmp9 = (_this->_dirty_handlers != null());
			}
			else{
				HX_STACK_LINE(1219)
				tmp9 = false;
			}
			HX_STACK_LINE(1219)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1219)
			if ((tmp9)){
				HX_STACK_LINE(1219)
				int tmp11 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1219)
				int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1219)
				tmp10 = (tmp12 > (int)0);
			}
			else{
				HX_STACK_LINE(1219)
				tmp10 = false;
			}
			HX_STACK_LINE(1219)
			if ((tmp10)){
				HX_STACK_LINE(1219)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1219)
				cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1219)
				while((true)){
					HX_STACK_LINE(1219)
					bool tmp11 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1219)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1219)
					if ((tmp12)){
						HX_STACK_LINE(1219)
						break;
					}
					HX_STACK_LINE(1219)
					Dynamic tmp13 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1219)
					Dynamic _handler = tmp13;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(1219)
					++(_g);
					HX_STACK_LINE(1219)
					bool tmp14 = (_handler != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1219)
					if ((tmp14)){
						HX_STACK_LINE(1219)
						::phoenix::Transform tmp15 = _this;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1219)
						_handler(tmp15).Cast< Void >();
					}
				}
			}
			HX_STACK_LINE(1219)
			_this->dirty;
		}
		HX_STACK_LINE(1219)
		bool tmp5 = (_this->parent != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1219)
		if ((tmp5)){
			HX_STACK_LINE(1219)
			::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(1219)
			bool tmp6 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1219)
			if ((tmp6)){
				HX_STACK_LINE(1219)
				false;
			}
			else{
				HX_STACK_LINE(1219)
				Dynamic tmp7 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1219)
				_this1->_clean_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp7);
			}
		}
		HX_STACK_LINE(1219)
		_this->parent = null();
		HX_STACK_LINE(1219)
		bool tmp6 = (_this->_parent_handlers != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1219)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1219)
		if ((tmp6)){
			HX_STACK_LINE(1219)
			int tmp8 = _this->_parent_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1219)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1219)
			tmp7 = (tmp9 > (int)0);
		}
		else{
			HX_STACK_LINE(1219)
			tmp7 = false;
		}
		HX_STACK_LINE(1219)
		if ((tmp7)){
			HX_STACK_LINE(1219)
			::phoenix::Transform _parent = _this->parent;		HX_STACK_VAR(_parent,"_parent");
			HX_STACK_LINE(1219)
			{
				HX_STACK_LINE(1219)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1219)
				cpp::ArrayBase _g1 = _this->_parent_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1219)
				while((true)){
					HX_STACK_LINE(1219)
					bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1219)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1219)
					if ((tmp9)){
						HX_STACK_LINE(1219)
						break;
					}
					HX_STACK_LINE(1219)
					Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1219)
					Dynamic _handler = tmp10;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(1219)
					++(_g);
					HX_STACK_LINE(1219)
					bool tmp11 = (_handler != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1219)
					if ((tmp11)){
						HX_STACK_LINE(1219)
						::phoenix::Transform tmp12 = _parent;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1219)
						_handler(tmp12).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(1219)
		bool tmp8 = (_this->parent != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1219)
		if ((tmp8)){
			HX_STACK_LINE(1219)
			::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(1219)
			bool tmp9 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1219)
			if ((tmp9)){
				HX_STACK_LINE(1219)
				_this1->_clean_handlers = cpp::ArrayBase_obj::__new();
			}
			HX_STACK_LINE(1219)
			Dynamic tmp10 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1219)
			_this1->_clean_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp10);
		}
		HX_STACK_LINE(1219)
		_this->parent;
	}
	HX_STACK_LINE(1222)
	::luxe::Entity tmp4 = this->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1222)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_parent,return )

::luxe::Entity Entity_obj::get_parent( ){
	HX_STACK_FRAME("luxe.Entity","get_parent",0xc1dd9186,"luxe.Entity.get_parent","luxe/Entity.hx",1226,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1228)
	::luxe::Entity tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1228)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_parent,return )

::luxe::Scene Entity_obj::set_scene( ::luxe::Scene _scene){
	HX_STACK_FRAME("luxe.Entity","set_scene",0x4f4ff87c,"luxe.Entity.set_scene","luxe/Entity.hx",1234,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_scene,"_scene")
	HX_STACK_LINE(1236)
	this->_detach_scene();
	HX_STACK_LINE(1238)
	this->scene = _scene;
	HX_STACK_LINE(1240)
	this->_attach_scene();
	HX_STACK_LINE(1242)
	::luxe::Scene tmp = this->get_scene();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1242)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_scene,return )

::luxe::Scene Entity_obj::get_scene( ){
	HX_STACK_FRAME("luxe.Entity","get_scene",0x6bff0c70,"luxe.Entity.get_scene","luxe/Entity.hx",1246,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1248)
	::luxe::Scene tmp = this->scene;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1248)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_scene,return )

::luxe::Scene Entity_obj::set_scene_root( ::luxe::Scene _scene){
	HX_STACK_FRAME("luxe.Entity","set_scene_root",0xe6cdd005,"luxe.Entity.set_scene_root","luxe/Entity.hx",1252,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_scene,"_scene")
	HX_STACK_LINE(1254)
	this->scene_root = _scene;
	HX_STACK_LINE(1256)
	{
		HX_STACK_LINE(1256)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1256)
		Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1256)
		while((true)){
			HX_STACK_LINE(1256)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1256)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1256)
			if ((tmp1)){
				HX_STACK_LINE(1256)
				break;
			}
			HX_STACK_LINE(1256)
			::luxe::Entity tmp2 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1256)
			::luxe::Entity _child = tmp2;		HX_STACK_VAR(_child,"_child");
			HX_STACK_LINE(1256)
			++(_g);
			HX_STACK_LINE(1257)
			::luxe::Scene tmp3 = _scene;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1257)
			_child->set_scene_root(tmp3);
		}
	}
	HX_STACK_LINE(1260)
	::luxe::Scene tmp = this->scene_root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1260)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_scene_root,return )

::String Entity_obj::set_name( ::String _name){
	HX_STACK_FRAME("luxe.Entity","set_name",0x9c9d491b,"luxe.Entity.set_name","luxe/Entity.hx",1266,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(1268)
	::luxe::Scene tmp = this->get_scene();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1268)
	::luxe::Scene _scene = tmp;		HX_STACK_VAR(_scene,"_scene");
	HX_STACK_LINE(1270)
	bool tmp1 = (_scene != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1270)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1270)
	if ((tmp1)){
		HX_STACK_LINE(1270)
		::String tmp3 = this->get_name();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1270)
		::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1270)
		tmp2 = (tmp4 != null());
	}
	else{
		HX_STACK_LINE(1270)
		tmp2 = false;
	}
	HX_STACK_LINE(1270)
	if ((tmp2)){
		HX_STACK_LINE(1271)
		{
			HX_STACK_LINE(1271)
			::String tmp3 = this->get_name();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1271)
			::String key = tmp3;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(1271)
			::String tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1271)
			_scene->entities->remove(tmp4);
		}
		HX_STACK_LINE(1272)
		{
			HX_STACK_LINE(1272)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1272)
			bool tmp4 = _scene->entities->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1272)
			if ((tmp4)){
				HX_STACK_LINE(1272)
				::String tmp5 = _scene->get_name();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1272)
				::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1272)
				::String tmp7 = (tmp6 + HX_HCSTRING(" / adding a second entity named ","\x25","\x7f","\xee","\xd9"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1272)
				::String tmp8 = _name;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1272)
				::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1272)
				::String tmp10 = (tmp9 + HX_HCSTRING("!\n                This will replace the existing one, possibly leaving the previous one in limbo.","\x8a","\x82","\xfa","\x6f"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1272)
				::String tmp11 = (HX_HCSTRING("    i / scene / ","\xcd","\x27","\xce","\x13") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1272)
				Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),96,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("handle_duplicate_warning","\xd1","\x8a","\x7d","\x4b"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1272)
				::haxe::Log_obj::trace(tmp11,tmp12);
			}
		}
		HX_STACK_LINE(1273)
		::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1273)
		_scene->entities->set(tmp3,hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(1274)
		_scene->_has_changed = true;
	}
	HX_STACK_LINE(1277)
	::String tmp3 = this->name = _name;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1277)
	return tmp3;
}


bool Entity_obj::set_active( bool _active){
	HX_STACK_FRAME("luxe.Entity","set_active",0xee236c96,"luxe.Entity.set_active","luxe/Entity.hx",1283,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_active,"_active")
	HX_STACK_LINE(1285)
	bool tmp = this->active = _active;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1285)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_active,return )

bool Entity_obj::get_active( ){
	HX_STACK_FRAME("luxe.Entity","get_active",0xeaa5ce22,"luxe.Entity.get_active","luxe/Entity.hx",1289,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1291)
	bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1291)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_active,return )

::String Entity_obj::toString( ){
	HX_STACK_FRAME("luxe.Entity","toString",0x5df4927f,"luxe.Entity.toString","luxe/Entity.hx",1297,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1299)
	Array< ::String > _list = Array_obj< ::String >::__new();		HX_STACK_VAR(_list,"_list");
	HX_STACK_LINE(1299)
	::luxe::components::Components tmp = this->_components;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1299)
	Dynamic tmp1 = tmp->components->_keys->iterator();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1299)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
		::String _c = __it->next();
		{
			HX_STACK_LINE(1299)
			::String tmp2 = _c;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1299)
			_list->push(tmp2);
		}
;
	}
	HX_STACK_LINE(1300)
	::String tmp2 = this->get_name();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1300)
	::String tmp3 = (HX_HCSTRING("luxe Entity: ","\x53","\x0e","\xd6","\x89") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1300)
	::String tmp4 = (tmp3 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1300)
	::luxe::components::Components tmp5 = this->_components;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1300)
	::luxe::structural::OrderedMap_String_luxe_Component tmp6 = tmp5->components;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1300)
	int tmp7 = ::Lambda_obj::count(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1300)
	::String tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1300)
	::String tmp9 = (tmp8 + HX_HCSTRING(" components:[","\x97","\x89","\x16","\xdf"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1300)
	::String tmp10 = _list->join(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1300)
	::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1300)
	::String tmp12 = (tmp11 + HX_HCSTRING("] / id: ","\x35","\x4e","\x4e","\x77"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1300)
	::String tmp13 = this->get_id();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1300)
	::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1300)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,toString,return )


Entity_obj::Entity_obj()
{
}

void Entity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Entity);
	HX_MARK_MEMBER_NAME(events,"events");
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_MEMBER_NAME(destroyed,"destroyed");
	HX_MARK_MEMBER_NAME(inited,"inited");
	HX_MARK_MEMBER_NAME(started,"started");
	HX_MARK_MEMBER_NAME(fixed_rate,"fixed_rate");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_MEMBER_NAME(_components,"_components");
	HX_MARK_MEMBER_NAME(fixed_rate_timer,"fixed_rate_timer");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(scene_root,"scene_root");
	HX_MARK_MEMBER_NAME(component_count,"component_count");
	::luxe::Objects_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Entity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(events,"events");
	HX_VISIT_MEMBER_NAME(children,"children");
	HX_VISIT_MEMBER_NAME(destroyed,"destroyed");
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(started,"started");
	HX_VISIT_MEMBER_NAME(fixed_rate,"fixed_rate");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(transform,"transform");
	HX_VISIT_MEMBER_NAME(_components,"_components");
	HX_VISIT_MEMBER_NAME(fixed_rate_timer,"fixed_rate_timer");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(scene_root,"scene_root");
	HX_VISIT_MEMBER_NAME(component_count,"component_count");
	::luxe::Objects_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Entity_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return get_pos(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { return inCallProp == hx::paccAlways ? get_scene() : scene; }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == hx::paccAlways) return get_scale(); }
		if (HX_FIELD_EQ(inName,"_init") ) { return _init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { return events; }
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"parent") ) { return inCallProp == hx::paccAlways ? get_parent() : parent; }
		if (HX_FIELD_EQ(inName,"active") ) { return inCallProp == hx::paccAlways ? get_active() : active; }
		if (HX_FIELD_EQ(inName,"origin") ) { if (inCallProp == hx::paccAlways) return get_origin(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"_reset") ) { return _reset_dyn(); }
		if (HX_FIELD_EQ(inName,"_keyup") ) { return _keyup_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { return started; }
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"onreset") ) { return onreset_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		if (HX_FIELD_EQ(inName,"get_any") ) { return get_any_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_update") ) { return _update_dyn(); }
		if (HX_FIELD_EQ(inName,"_listen") ) { return _listen_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pos") ) { return get_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return children; }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return get_rotation(); }
		if (HX_FIELD_EQ(inName,"_keydown") ) { return _keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"_mouseup") ) { return _mouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"_touchup") ) { return _touchup_dyn(); }
		if (HX_FIELD_EQ(inName,"_inputup") ) { return _inputup_dyn(); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { return destroyed; }
		if (HX_FIELD_EQ(inName,"transform") ) { return inCallProp == hx::paccAlways ? get_transform() : transform; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputup") ) { return oninputup_dyn(); }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchup") ) { return ontouchup_dyn(); }
		if (HX_FIELD_EQ(inName,"_unlisten") ) { return _unlisten_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scene") ) { return set_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scene") ) { return get_scene_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"components") ) { if (inCallProp == hx::paccAlways) return get_components(); }
		if (HX_FIELD_EQ(inName,"fixed_rate") ) { return inCallProp == hx::paccAlways ? get_fixed_rate() : fixed_rate; }
		if (HX_FIELD_EQ(inName,"scene_root") ) { return scene_root; }
		if (HX_FIELD_EQ(inName,"_textinput") ) { return _textinput_dyn(); }
		if (HX_FIELD_EQ(inName,"_mousedown") ) { return _mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"_mousemove") ) { return _mousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"_touchdown") ) { return _touchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"_touchmove") ) { return _touchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"_gamepadup") ) { return _gamepadup_dyn(); }
		if (HX_FIELD_EQ(inName,"_inputdown") ) { return _inputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"_add_child") ) { return _add_child_dyn(); }
		if (HX_FIELD_EQ(inName,"set_origin") ) { return set_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_origin") ) { return get_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_parent") ) { return set_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_parent") ) { return get_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_active") ) { return set_active_dyn(); }
		if (HX_FIELD_EQ(inName,"get_active") ) { return get_active_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_components") ) { return _components; }
		if (HX_FIELD_EQ(inName,"ontextinput") ) { return ontextinput_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputdown") ) { return oninputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchdown") ) { return ontouchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchmove") ) { return ontouchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadup") ) { return ongamepadup_dyn(); }
		if (HX_FIELD_EQ(inName,"_mousewheel") ) { return _mousewheel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		if (HX_FIELD_EQ(inName,"_gamepadaxis") ) { return _gamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"_gamepaddown") ) { return _gamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"_windowmoved") ) { return _windowmoved_dyn(); }
		if (HX_FIELD_EQ(inName,"_windowsized") ) { return _windowsized_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onfixedupdate") ) { return onfixedupdate_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepaddown") ) { return ongamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadaxis") ) { return ongamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"onwindowmoved") ) { return onwindowmoved_dyn(); }
		if (HX_FIELD_EQ(inName,"onwindowsized") ) { return onwindowsized_dyn(); }
		if (HX_FIELD_EQ(inName,"_fixed_update") ) { return _fixed_update_dyn(); }
		if (HX_FIELD_EQ(inName,"_detach_scene") ) { return _detach_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"_attach_scene") ) { return _attach_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"_remove_child") ) { return _remove_child_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transform") ) { return set_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_transform") ) { return get_transform_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_gamepaddevice") ) { return _gamepaddevice_dyn(); }
		if (HX_FIELD_EQ(inName,"_windowresized") ) { return _windowresized_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fixed_rate") ) { return get_fixed_rate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fixed_rate") ) { return set_fixed_rate_dyn(); }
		if (HX_FIELD_EQ(inName,"get_components") ) { return get_components_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scene_root") ) { return set_scene_root_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ongamepaddevice") ) { return ongamepaddevice_dyn(); }
		if (HX_FIELD_EQ(inName,"onwindowresized") ) { return onwindowresized_dyn(); }
		if (HX_FIELD_EQ(inName,"component_count") ) { return component_count; }
		if (HX_FIELD_EQ(inName,"_windowrestored") ) { return _windowrestored_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fixed_rate_timer") ) { return fixed_rate_timer; }
		if (HX_FIELD_EQ(inName,"onwindowrestored") ) { return onwindowrestored_dyn(); }
		if (HX_FIELD_EQ(inName,"_windowminimized") ) { return _windowminimized_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onwindowminimized") ) { return onwindowminimized_dyn(); }
		if (HX_FIELD_EQ(inName,"_find_emit_source") ) { return _find_emit_source_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_set_fixed_rate_timer") ) { return _set_fixed_rate_timer_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_stop_fixed_rate_timer") ) { return _stop_fixed_rate_timer_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos_from_transform") ) { return set_pos_from_transform_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_scale_from_transform") ) { return set_scale_from_transform_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"set_origin_from_transform") ) { return set_origin_from_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_parent_from_transform") ) { return set_parent_from_transform_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"set_rotation_from_transform") ) { return set_rotation_from_transform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Entity_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return set_pos(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { if (inCallProp == hx::paccAlways) return set_scene(inValue);scene=inValue.Cast< ::luxe::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == hx::paccAlways) return set_scale(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast< ::luxe::Events >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { if (inCallProp == hx::paccAlways) return set_parent(inValue);parent=inValue.Cast< ::luxe::Entity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { if (inCallProp == hx::paccAlways) return set_active(inValue);active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { if (inCallProp == hx::paccAlways) return set_origin(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { started=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return set_rotation(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { destroyed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == hx::paccAlways) return set_transform(inValue);transform=inValue.Cast< ::phoenix::Transform >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fixed_rate") ) { if (inCallProp == hx::paccAlways) return set_fixed_rate(inValue);fixed_rate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scene_root") ) { if (inCallProp == hx::paccAlways) return set_scene_root(inValue);scene_root=inValue.Cast< ::luxe::Scene >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_components") ) { _components=inValue.Cast< ::luxe::components::Components >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"component_count") ) { component_count=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fixed_rate_timer") ) { fixed_rate_timer=inValue.Cast< ::snow::api::Timer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Entity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("components","\x16","\xb5","\x1e","\x5a"));
	outFields->push(HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"));
	outFields->push(HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"));
	outFields->push(HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4"));
	outFields->push(HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"));
	outFields->push(HX_HCSTRING("started","\x41","\x29","\x1b","\x35"));
	outFields->push(HX_HCSTRING("fixed_rate","\xcb","\xb0","\xb2","\x54"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"));
	outFields->push(HX_HCSTRING("_components","\x35","\x82","\xa8","\x2c"));
	outFields->push(HX_HCSTRING("fixed_rate_timer","\x11","\xe2","\x78","\xad"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	outFields->push(HX_HCSTRING("scene_root","\x35","\xfd","\xba","\xc4"));
	outFields->push(HX_HCSTRING("component_count","\x8d","\x28","\x8b","\xe8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Events*/ ,(int)offsetof(Entity_obj,events),HX_HCSTRING("events","\x19","\x4f","\x6a","\x96")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Entity_obj,children),HX_HCSTRING("children","\x3f","\x19","\x6a","\x70")},
	{hx::fsBool,(int)offsetof(Entity_obj,destroyed),HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4")},
	{hx::fsBool,(int)offsetof(Entity_obj,inited),HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97")},
	{hx::fsBool,(int)offsetof(Entity_obj,started),HX_HCSTRING("started","\x41","\x29","\x1b","\x35")},
	{hx::fsFloat,(int)offsetof(Entity_obj,fixed_rate),HX_HCSTRING("fixed_rate","\xcb","\xb0","\xb2","\x54")},
	{hx::fsObject /*::luxe::Entity*/ ,(int)offsetof(Entity_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*::luxe::Scene*/ ,(int)offsetof(Entity_obj,scene),HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78")},
	{hx::fsBool,(int)offsetof(Entity_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsObject /*::phoenix::Transform*/ ,(int)offsetof(Entity_obj,transform),HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45")},
	{hx::fsObject /*::luxe::components::Components*/ ,(int)offsetof(Entity_obj,_components),HX_HCSTRING("_components","\x35","\x82","\xa8","\x2c")},
	{hx::fsObject /*::snow::api::Timer*/ ,(int)offsetof(Entity_obj,fixed_rate_timer),HX_HCSTRING("fixed_rate_timer","\x11","\xe2","\x78","\xad")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Entity_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsObject /*::luxe::Scene*/ ,(int)offsetof(Entity_obj,scene_root),HX_HCSTRING("scene_root","\x35","\xfd","\xba","\xc4")},
	{hx::fsInt,(int)offsetof(Entity_obj,component_count),HX_HCSTRING("component_count","\x8d","\x28","\x8b","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"),
	HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"),
	HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4"),
	HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"),
	HX_HCSTRING("started","\x41","\x29","\x1b","\x35"),
	HX_HCSTRING("fixed_rate","\xcb","\xb0","\xb2","\x54"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("_components","\x35","\x82","\xa8","\x2c"),
	HX_HCSTRING("fixed_rate_timer","\x11","\xe2","\x78","\xad"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("scene_root","\x35","\xfd","\xba","\xc4"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onfixedupdate","\xbe","\x93","\x59","\xed"),
	HX_HCSTRING("onreset","\x50","\x78","\xd8","\xe9"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"),
	HX_HCSTRING("onkeydown","\x42","\xce","\xc7","\xbb"),
	HX_HCSTRING("ontextinput","\x3e","\xe7","\x4d","\x44"),
	HX_HCSTRING("oninputdown","\x6d","\x8c","\x2f","\x9f"),
	HX_HCSTRING("oninputup","\xa6","\x51","\x78","\xde"),
	HX_HCSTRING("onmousedown","\x08","\x88","\x59","\x84"),
	HX_HCSTRING("onmouseup","\x81","\xa0","\xcc","\xca"),
	HX_HCSTRING("onmousemove","\xb7","\x72","\x4c","\x8a"),
	HX_HCSTRING("onmousewheel","\x35","\x56","\xec","\x35"),
	HX_HCSTRING("ontouchdown","\xa2","\x5e","\x71","\x9d"),
	HX_HCSTRING("ontouchup","\x9b","\xbc","\x51","\xe3"),
	HX_HCSTRING("ontouchmove","\x51","\x49","\x64","\xa3"),
	HX_HCSTRING("ongamepadup","\x3d","\x74","\xa8","\xdf"),
	HX_HCSTRING("ongamepaddown","\xc4","\xc2","\x9e","\x66"),
	HX_HCSTRING("ongamepadaxis","\x03","\xe7","\xa9","\x64"),
	HX_HCSTRING("ongamepaddevice","\x78","\x83","\x39","\x9b"),
	HX_HCSTRING("onwindowmoved","\x84","\x77","\xc2","\xe8"),
	HX_HCSTRING("onwindowresized","\x81","\x3d","\xce","\x90"),
	HX_HCSTRING("onwindowsized","\xd4","\xb3","\x35","\x59"),
	HX_HCSTRING("onwindowminimized","\x57","\x23","\xa1","\x8b"),
	HX_HCSTRING("onwindowrestored","\xa5","\x7a","\xd4","\x71"),
	HX_HCSTRING("component_count","\x8d","\x28","\x8b","\xe8"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("get_any","\x83","\xc3","\xbe","\x26"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("_init","\xef","\x56","\xcc","\xf8"),
	HX_HCSTRING("_reset","\x10","\x91","\xaf","\xe2"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("_update","\xa8","\x97","\x7c","\xf5"),
	HX_HCSTRING("_fixed_update","\x93","\x07","\x46","\x99"),
	HX_HCSTRING("_find_emit_source","\xa0","\x42","\x92","\x24"),
	HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"),
	HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"),
	HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"),
	HX_HCSTRING("_attach_scene","\xf1","\x50","\xea","\xb7"),
	HX_HCSTRING("_keyup","\xfb","\x1c","\xe6","\xda"),
	HX_HCSTRING("_keydown","\x02","\x97","\x26","\xeb"),
	HX_HCSTRING("_textinput","\xfe","\x5f","\x80","\x1f"),
	HX_HCSTRING("_mousedown","\xc8","\x00","\x8c","\x5f"),
	HX_HCSTRING("_mouseup","\x41","\x69","\x2b","\xfa"),
	HX_HCSTRING("_mousewheel","\x75","\x85","\xe3","\x26"),
	HX_HCSTRING("_mousemove","\x77","\xeb","\x7e","\x65"),
	HX_HCSTRING("_touchdown","\x62","\xd7","\xa3","\x78"),
	HX_HCSTRING("_touchup","\x5b","\x85","\xb0","\x12"),
	HX_HCSTRING("_touchmove","\x11","\xc2","\x96","\x7e"),
	HX_HCSTRING("_gamepadaxis","\xc3","\x0f","\xfc","\x4b"),
	HX_HCSTRING("_gamepaddown","\x84","\xeb","\xf0","\x4d"),
	HX_HCSTRING("_gamepadup","\xfd","\xec","\xda","\xba"),
	HX_HCSTRING("_gamepaddevice","\x38","\x5c","\xf7","\x99"),
	HX_HCSTRING("_windowmoved","\x44","\xa0","\x14","\xd0"),
	HX_HCSTRING("_windowresized","\x41","\x16","\x8c","\x8f"),
	HX_HCSTRING("_windowsized","\x94","\xdc","\x87","\x40"),
	HX_HCSTRING("_windowminimized","\x17","\xac","\x16","\x18"),
	HX_HCSTRING("_windowrestored","\xe5","\x49","\x34","\x59"),
	HX_HCSTRING("_inputdown","\x2d","\x05","\x62","\x7a"),
	HX_HCSTRING("_inputup","\x66","\x1a","\xd7","\x0d"),
	HX_HCSTRING("get_fixed_rate","\x14","\x39","\xa8","\xca"),
	HX_HCSTRING("set_fixed_rate","\x88","\x21","\xc8","\xea"),
	HX_HCSTRING("_stop_fixed_rate_timer","\x6f","\x57","\xff","\x90"),
	HX_HCSTRING("_set_fixed_rate_timer","\x6d","\x08","\x36","\x07"),
	HX_HCSTRING("get_components","\x5f","\x3d","\x14","\xd0"),
	HX_HCSTRING("_add_child","\x7f","\x2d","\xd3","\x20"),
	HX_HCSTRING("_remove_child","\x00","\xab","\xa8","\x5e"),
	HX_HCSTRING("set_pos_from_transform","\x5f","\x3e","\x64","\xc7"),
	HX_HCSTRING("set_rotation_from_transform","\x5b","\xb5","\xfc","\x30"),
	HX_HCSTRING("set_scale_from_transform","\x69","\xfb","\x86","\x01"),
	HX_HCSTRING("set_origin_from_transform","\xf3","\xb6","\xcd","\x45"),
	HX_HCSTRING("set_parent_from_transform","\x2f","\x18","\x5c","\xed"),
	HX_HCSTRING("set_pos","\x37","\xb7","\xcb","\x19"),
	HX_HCSTRING("get_pos","\x2b","\x26","\xca","\x26"),
	HX_HCSTRING("set_rotation","\xbb","\x14","\x99","\xd2"),
	HX_HCSTRING("get_rotation","\x47","\xf1","\x9f","\xbd"),
	HX_HCSTRING("set_scale","\xed","\x16","\xc9","\x9f"),
	HX_HCSTRING("get_scale","\xe1","\x2a","\x78","\xbc"),
	HX_HCSTRING("set_origin","\x23","\x28","\x06","\x3f"),
	HX_HCSTRING("get_origin","\xaf","\x89","\x88","\x3b"),
	HX_HCSTRING("set_transform","\x4f","\xe3","\xfc","\x4b"),
	HX_HCSTRING("get_transform","\x43","\x01","\xf7","\x06"),
	HX_HCSTRING("set_parent","\x67","\x13","\x83","\xe1"),
	HX_HCSTRING("get_parent","\xf3","\x74","\x05","\xde"),
	HX_HCSTRING("set_scene","\xaf","\x21","\xcc","\x9f"),
	HX_HCSTRING("get_scene","\xa3","\x35","\x7b","\xbc"),
	HX_HCSTRING("set_scene_root","\xf2","\x6d","\xd0","\x5a"),
	HX_HCSTRING("set_name","\x48","\x87","\x17","\x77"),
	HX_HCSTRING("set_active","\x03","\x50","\x4b","\x0a"),
	HX_HCSTRING("get_active","\x8f","\xb1","\xcd","\x06"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

#endif

hx::Class Entity_obj::__mClass;

void Entity_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Entity_obj >;
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
