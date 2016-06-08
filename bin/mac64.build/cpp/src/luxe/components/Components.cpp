#include <hxcpp.h>

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
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_components_Components
#include <luxe/components/Components.h>
#endif
#ifndef INCLUDED_luxe_structural_OrderedMap_String_luxe_Component
#include <luxe/structural/OrderedMap_String_luxe_Component.h>
#endif
namespace luxe{
namespace components{

Void Components_obj::__construct(::luxe::Entity _entity)
{
HX_STACK_FRAME("luxe.components.Components","new",0x0c312ac8,"luxe.components.Components.new","luxe/components/Components.hx",17,0x8dc4d408)
HX_STACK_THIS(this)
HX_STACK_ARG(_entity,"_entity")
{
	HX_STACK_LINE(19)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	{
		HX_STACK_LINE(19)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		tmp = tmp2;
	}
	HX_STACK_LINE(19)
	::haxe::ds::StringMap _map = tmp;		HX_STACK_VAR(_map,"_map");
	HX_STACK_LINE(20)
	::luxe::structural::OrderedMap_String_luxe_Component tmp1 = ::luxe::structural::OrderedMap_String_luxe_Component_obj::__new(_map);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	this->components = tmp1;
	HX_STACK_LINE(21)
	this->entity = _entity;
}
;
	return null();
}

//Components_obj::~Components_obj() { }

Dynamic Components_obj::__CreateEmpty() { return  new Components_obj; }
hx::ObjectPtr< Components_obj > Components_obj::__new(::luxe::Entity _entity)
{  hx::ObjectPtr< Components_obj > _result_ = new Components_obj();
	_result_->__construct(_entity);
	return _result_;}

Dynamic Components_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Components_obj > _result_ = new Components_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Components_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.components.Components","destroy",0xd4c4db62,"luxe.components.Components.destroy","luxe/components/Components.hx",25,0x8dc4d408)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		::luxe::structural::OrderedMap_String_luxe_Component tmp = this->components;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		tmp->map = null();
		HX_STACK_LINE(28)
		this->components = null();
		HX_STACK_LINE(29)
		this->entity = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Components_obj,destroy,(void))

Dynamic Components_obj::add( Dynamic _component){
	HX_STACK_FRAME("luxe.components.Components","add",0x0c274c89,"luxe.components.Components.add","luxe/components/Components.hx",33,0x8dc4d408)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_component,"_component")
	HX_STACK_LINE(35)
	bool tmp = (_component == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	if ((tmp)){
		HX_STACK_LINE(36)
		::luxe::Entity tmp1 = this->entity;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		::String tmp2 = tmp1->get_name();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		::String tmp3 = (HX_HCSTRING("attempt to add null component to ","\xda","\x07","\x42","\x37") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Components.hx","\x48","\xaf","\xde","\x46"),36,HX_HCSTRING("luxe.components.Components","\xd6","\x66","\x8a","\x49"),HX_HCSTRING("add","\x21","\xf2","\x49","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		::haxe::Log_obj::trace(tmp3,tmp4);
		HX_STACK_LINE(37)
		Dynamic tmp5 = _component;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		return tmp5;
	}
	HX_STACK_LINE(40)
	::luxe::Entity tmp1 = this->entity;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	_component->__Field(HX_HCSTRING("set_entity","\x60","\x21","\x21","\xf9"), hx::paccDynamic )(tmp1);
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		::luxe::structural::OrderedMap_String_luxe_Component tmp2 = this->components;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		::luxe::structural::OrderedMap_String_luxe_Component _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(42)
		::String key = _component->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(42)
		::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		bool tmp4 = _this->map->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(42)
		if ((tmp5)){
			HX_STACK_LINE(42)
			::String tmp6 = key;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(42)
			_this->_keys->push(tmp6);
		}
		HX_STACK_LINE(42)
		::luxe::Component tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(42)
			Dynamic tmp8 = _component;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(42)
			_this->map->set(tmp7,tmp8);
			HX_STACK_LINE(42)
			tmp6 = _component;
		}
		HX_STACK_LINE(42)
		tmp6;
	}
	HX_STACK_LINE(47)
	_component->__Field(HX_HCSTRING("onadded","\x41","\x03","\x54","\x1f"), hx::paccDynamic )();
	HX_STACK_LINE(51)
	::luxe::Entity tmp2 = this->entity;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	bool tmp3 = tmp2->inited;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(51)
	if ((tmp3)){
		HX_STACK_LINE(53)
		_component->__Field(HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"), hx::paccDynamic )();
	}
	HX_STACK_LINE(56)
	::luxe::Entity tmp4 = this->entity;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	bool tmp5 = tmp4->started;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(56)
	if ((tmp5)){
		HX_STACK_LINE(58)
		_component->__Field(HX_HCSTRING("onreset","\x50","\x78","\xd8","\xe9"), hx::paccDynamic )();
	}
	HX_STACK_LINE(61)
	Dynamic tmp6 = _component;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(61)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Components_obj,add,return )

bool Components_obj::remove( ::String _name){
	HX_STACK_FRAME("luxe.components.Components","remove",0xc2bdb2dc,"luxe.components.Components.remove","luxe/components/Components.hx",65,0x8dc4d408)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(68)
	::luxe::structural::OrderedMap_String_luxe_Component tmp = this->components;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	bool tmp2 = tmp->map->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	if ((tmp3)){
		HX_STACK_LINE(69)
		::String tmp4 = (HX_HCSTRING("attempt to remove ","\xea","\x0b","\xb9","\x57") + _name);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		::String tmp5 = (tmp4 + HX_HCSTRING(" from ","\x56","\xa3","\xf9","\xd1"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(69)
		::luxe::Entity tmp6 = this->entity;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(69)
		::String tmp7 = tmp6->get_name();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(69)
		::String tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(69)
		::String tmp9 = (tmp8 + HX_HCSTRING(" failed because that component was not attached to this entity","\xd9","\x3d","\xb2","\x71"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(69)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Components.hx","\x48","\xaf","\xde","\x46"),69,HX_HCSTRING("luxe.components.Components","\xd6","\x66","\x8a","\x49"),HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(69)
		::haxe::Log_obj::trace(tmp9,tmp10);
		HX_STACK_LINE(70)
		return false;
	}
	HX_STACK_LINE(75)
	::luxe::structural::OrderedMap_String_luxe_Component tmp4 = this->components;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(75)
	::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(75)
	::luxe::Component tmp6 = tmp4->map->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(75)
	::luxe::Component _component = tmp6;		HX_STACK_VAR(_component,"_component");
	HX_STACK_LINE(76)
	_component->onremoved();
	HX_STACK_LINE(79)
	_component->set_entity(null());
	HX_STACK_LINE(81)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(81)
	{
		HX_STACK_LINE(81)
		::luxe::structural::OrderedMap_String_luxe_Component tmp8 = this->components;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(81)
		::luxe::structural::OrderedMap_String_luxe_Component _this = tmp8;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(81)
		::String tmp9 = _name;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(81)
		::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(81)
		bool tmp11 = _this->map->remove(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(81)
		if ((tmp11)){
			HX_STACK_LINE(81)
			::String tmp12 = _name;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(81)
			::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(81)
			tmp7 = _this->_keys->remove(tmp13);
		}
		else{
			HX_STACK_LINE(81)
			tmp7 = false;
		}
	}
	HX_STACK_LINE(81)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Components_obj,remove,return )

Dynamic Components_obj::get( ::String _name,Dynamic __o_in_children){
Dynamic in_children = __o_in_children.Default(false);
	HX_STACK_FRAME("luxe.components.Components","get",0x0c2bdafe,"luxe.components.Components.get","luxe/components/Components.hx",85,0x8dc4d408)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(in_children,"in_children")
{
		HX_STACK_LINE(89)
		Dynamic tmp = in_children;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		if ((tmp1)){
			HX_STACK_LINE(91)
			::luxe::structural::OrderedMap_String_luxe_Component tmp2 = this->components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(91)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			::luxe::Component tmp4 = tmp2->map->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			Dynamic tmp5 = ((Dynamic)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			return tmp5;
		}
		else{
			HX_STACK_LINE(96)
			::luxe::structural::OrderedMap_String_luxe_Component tmp2 = this->components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(96)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(96)
			::luxe::Component tmp4 = tmp2->map->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(96)
			::luxe::Component in_this_entity = tmp4;		HX_STACK_VAR(in_this_entity,"in_this_entity");
			HX_STACK_LINE(97)
			bool tmp5 = (in_this_entity != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(97)
			if ((tmp5)){
				HX_STACK_LINE(98)
				Dynamic tmp6 = ((Dynamic)(in_this_entity));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(98)
				return tmp6;
			}
			HX_STACK_LINE(104)
			{
				HX_STACK_LINE(104)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(104)
				::luxe::Entity tmp6 = this->entity;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(104)
				Array< ::Dynamic > _g1 = tmp6->children;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(104)
				while((true)){
					HX_STACK_LINE(104)
					bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(104)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(104)
					if ((tmp8)){
						HX_STACK_LINE(104)
						break;
					}
					HX_STACK_LINE(104)
					::luxe::Entity tmp9 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(104)
					::luxe::Entity _child = tmp9;		HX_STACK_VAR(_child,"_child");
					HX_STACK_LINE(104)
					++(_g);
					HX_STACK_LINE(108)
					::String tmp10 = _name;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(108)
					Dynamic tmp11 = _child->_components->get(tmp10,true);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(108)
					Dynamic found = tmp11;		HX_STACK_VAR(found,"found");
					HX_STACK_LINE(110)
					bool tmp12 = (found != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(110)
					if ((tmp12)){
						HX_STACK_LINE(111)
						Dynamic tmp13 = found;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(111)
						return tmp13;
					}
				}
			}
			HX_STACK_LINE(116)
			return null();
		}
		HX_STACK_LINE(120)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Components_obj,get,return )

cpp::ArrayBase Components_obj::get_any( ::String _name,Dynamic __o_in_children,Dynamic __o_first_only){
Dynamic in_children = __o_in_children.Default(false);
Dynamic first_only = __o_first_only.Default(true);
	HX_STACK_FRAME("luxe.components.Components","get_any",0xd6fd71eb,"luxe.components.Components.get_any","luxe/components/Components.hx",124,0x8dc4d408)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(in_children,"in_children")
	HX_STACK_ARG(first_only,"first_only")
{
		HX_STACK_LINE(128)
		cpp::ArrayBase results = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(results,"results");
		HX_STACK_LINE(130)
		Dynamic tmp = in_children;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		if ((tmp1)){
			HX_STACK_LINE(132)
			::luxe::structural::OrderedMap_String_luxe_Component tmp2 = this->components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(132)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			::luxe::Component tmp4 = tmp2->map->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(132)
			Dynamic tmp5 = ((Dynamic)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(132)
			return cpp::ArrayBase_obj::__new().Add(tmp5);
		}
		else{
			HX_STACK_LINE(136)
			::luxe::structural::OrderedMap_String_luxe_Component tmp2 = this->components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(136)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(136)
			::luxe::Component tmp4 = tmp2->map->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(136)
			::luxe::Component in_this_entity = tmp4;		HX_STACK_VAR(in_this_entity,"in_this_entity");
			HX_STACK_LINE(137)
			bool tmp5 = (in_this_entity != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(137)
			if ((tmp5)){
				HX_STACK_LINE(138)
				Dynamic tmp6 = first_only;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(138)
				if ((tmp6)){
					HX_STACK_LINE(139)
					return cpp::ArrayBase_obj::__new().Add(((Dynamic)(in_this_entity)));
				}
				else{
					HX_STACK_LINE(141)
					Dynamic tmp7 = ((Dynamic)(in_this_entity));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(141)
					results->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
				}
			}
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(148)
				::luxe::Entity tmp6 = this->entity;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(148)
				Array< ::Dynamic > _g1 = tmp6->children;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(148)
				while((true)){
					HX_STACK_LINE(148)
					bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(148)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(148)
					if ((tmp8)){
						HX_STACK_LINE(148)
						break;
					}
					HX_STACK_LINE(148)
					::luxe::Entity tmp9 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(148)
					::luxe::Entity _child = tmp9;		HX_STACK_VAR(_child,"_child");
					HX_STACK_LINE(148)
					++(_g);
					HX_STACK_LINE(152)
					::String tmp10 = _name;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(152)
					Dynamic tmp11 = first_only;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(152)
					cpp::ArrayBase found = _child->_components->get_any(tmp10,true,tmp11);		HX_STACK_VAR(found,"found");
					HX_STACK_LINE(154)
					bool tmp12 = (found != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(154)
					if ((tmp12)){
						HX_STACK_LINE(157)
						Dynamic tmp13 = first_only;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(157)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(157)
						if ((tmp13)){
							HX_STACK_LINE(157)
							tmp14 = (found->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)0);
						}
						else{
							HX_STACK_LINE(157)
							tmp14 = false;
						}
						HX_STACK_LINE(157)
						if ((tmp14)){
							HX_STACK_LINE(158)
							Dynamic tmp15 = found->__GetItem((int)0);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(158)
							Dynamic tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(158)
							return cpp::ArrayBase_obj::__new().Add(tmp16);
						}
						else{
							HX_STACK_LINE(160)
							results->__Field(HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"), hx::paccDynamic )(found);
						}
					}
				}
			}
		}
		HX_STACK_LINE(169)
		return results;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Components_obj,get_any,return )

bool Components_obj::has( ::String _name){
	HX_STACK_FRAME("luxe.components.Components","has",0x0c2c99c2,"luxe.components.Components.has","luxe/components/Components.hx",173,0x8dc4d408)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(174)
	::luxe::structural::OrderedMap_String_luxe_Component tmp = this->components;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	bool tmp2 = tmp->map->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(174)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Components_obj,has,return )


Components_obj::Components_obj()
{
}

void Components_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Components);
	HX_MARK_MEMBER_NAME(components,"components");
	HX_MARK_MEMBER_NAME(entity,"entity");
	HX_MARK_END_CLASS();
}

void Components_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(components,"components");
	HX_VISIT_MEMBER_NAME(entity,"entity");
}

Dynamic Components_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { return entity; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_any") ) { return get_any_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"components") ) { return components; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Components_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { entity=inValue.Cast< ::luxe::Entity >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"components") ) { components=inValue.Cast< ::luxe::structural::OrderedMap_String_luxe_Component >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Components_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("components","\x16","\xb5","\x1e","\x5a"));
	outFields->push(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::structural::OrderedMap_String_luxe_Component*/ ,(int)offsetof(Components_obj,components),HX_HCSTRING("components","\x16","\xb5","\x1e","\x5a")},
	{hx::fsObject /*::luxe::Entity*/ ,(int)offsetof(Components_obj,entity),HX_HCSTRING("entity","\x23","\x13","\x1c","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("components","\x16","\xb5","\x1e","\x5a"),
	HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("get_any","\x83","\xc3","\xbe","\x26"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Components_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Components_obj::__mClass,"__mClass");
};

#endif

hx::Class Components_obj::__mClass;

void Components_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.components.Components","\xd6","\x66","\x8a","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Components_obj >;
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
} // end namespace components
