#include <hxcpp.h>

#ifndef INCLUDED_Creature
#include <Creature.h>
#endif
#ifndef INCLUDED_CreatureData
#include <CreatureData.h>
#endif
#ifndef INCLUDED_DynamicController
#include <DynamicController.h>
#endif
#ifndef INCLUDED_DynamicShape
#include <DynamicShape.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Simulation
#include <Simulation.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
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
#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_PhysicsEngine
#include <luxe/PhysicsEngine.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Polygon
#include <luxe/collision/shapes/Polygon.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Shape
#include <luxe/collision/shapes/Shape.h>
#endif
#ifndef INCLUDED_luxe_components_Components
#include <luxe/components/Components.h>
#endif
#ifndef INCLUDED_luxe_components_sprite_SpriteAnimation
#include <luxe/components/sprite/SpriteAnimation.h>
#endif
#ifndef INCLUDED_luxe_resource_JSONResource
#include <luxe/resource/JSONResource.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetJSON
#include <snow/systems/assets/AssetJSON.h>
#endif

Void Creature_obj::__construct(::String _id,::String _name,::phoenix::Vector _pos,::DynamicController _ctrl)
{
HX_STACK_FRAME("Creature","new",0x2a0dde51,"Creature.new","Creature.hx",22,0xc6ca163f)
HX_STACK_THIS(this)
HX_STACK_ARG(_id,"_id")
HX_STACK_ARG(_name,"_name")
HX_STACK_ARG(_pos,"_pos")
HX_STACK_ARG(_ctrl,"_ctrl")
{
	HX_STACK_LINE(23)
	::CreatureData tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	{
		HX_STACK_LINE(23)
		::haxe::ds::StringMap tmp1 = ::Creature_obj::get_creature_types();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		::haxe::IMap this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(23)
		::String tmp2 = _id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		tmp = this1->get(tmp2);
	}
	HX_STACK_LINE(23)
	::CreatureData type = tmp;		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(25)
	::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	::phoenix::Texture tmp2 = type->texture;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	::phoenix::Vector tmp3 = type->size;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	bool tmp4 = (_pos == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	::phoenix::Vector tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(28)
	if ((tmp4)){
		HX_STACK_LINE(28)
		tmp5 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(28)
		tmp5 = _pos;
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::phoenix::Vector &tmp5,::phoenix::Texture &tmp2,::phoenix::Vector &tmp3,::String &tmp1){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Creature.hx",24,0xc6ca163f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp1,false);
				__result->Add(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e") , tmp2,false);
				__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp3,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp5,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(24)
	Dynamic tmp6 = _Function_1_1::Block(tmp5,tmp2,tmp3,tmp1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(24)
	super::__construct(tmp6);
	HX_STACK_LINE(30)
	bool tmp7 = (type->animation != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(30)
	if ((tmp7)){
		HX_STACK_LINE(32)
		::luxe::components::sprite::SpriteAnimation tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(32)
		{
			struct _Function_3_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Creature.hx",32,0xc6ca163f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(32)
			Dynamic tmp9 = _Function_3_1::Block();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(32)
			::luxe::components::sprite::SpriteAnimation tmp10 = ::luxe::components::sprite::SpriteAnimation_obj::__new(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(32)
			::luxe::components::sprite::SpriteAnimation _component = tmp10;		HX_STACK_VAR(_component,"_component");
			HX_STACK_LINE(32)
			(this->component_count)++;
			HX_STACK_LINE(32)
			::luxe::components::Components tmp11 = this->_components;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(32)
			::luxe::components::sprite::SpriteAnimation tmp12 = _component;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(32)
			tmp8 = tmp11->add(tmp12);
		}
		HX_STACK_LINE(32)
		::luxe::components::sprite::SpriteAnimation anim = tmp8;		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(33)
		Dynamic tmp9 = type->animation;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(33)
		anim->add_from_json_object(tmp9);
		HX_STACK_LINE(34)
		anim->set_animation(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"));
		HX_STACK_LINE(35)
		anim->play();
	}
	HX_STACK_LINE(37)
	bool tmp8 = (type->components != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(37)
	if ((tmp8)){
		HX_STACK_LINE(39)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		cpp::ArrayBase _g1 = type->components;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(39)
		while((true)){
			HX_STACK_LINE(39)
			bool tmp9 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(39)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(39)
			if ((tmp10)){
				HX_STACK_LINE(39)
				break;
			}
			HX_STACK_LINE(39)
			Dynamic tmp11 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(39)
			Dynamic comp_data = tmp11;		HX_STACK_VAR(comp_data,"comp_data");
			HX_STACK_LINE(39)
			++(_g);
			HX_STACK_LINE(41)
			{
				HX_STACK_LINE(41)
				::luxe::Component tmp12 = ::Type_obj::createInstance(comp_data->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ),comp_data->__Field(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(41)
				::luxe::Component _component = tmp12;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(41)
				(this->component_count)++;
				HX_STACK_LINE(41)
				::luxe::components::Components tmp13 = this->_components;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(41)
				::luxe::Component tmp14 = _component;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(41)
				tmp13->add(tmp14);
			}
		}
	}
	HX_STACK_LINE(45)
	::DynamicShape tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		Float tmp10 = type->bounds->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(45)
		Float tmp11 = type->bounds->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(45)
		::luxe::collision::shapes::Polygon tmp12 = ::luxe::collision::shapes::Polygon_obj::rectangle((int)0,(int)0,tmp10,tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(45)
		::DynamicShape tmp13 = ::DynamicShape_obj::__new(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(45)
		::DynamicShape _component = tmp13;		HX_STACK_VAR(_component,"_component");
		HX_STACK_LINE(45)
		(this->component_count)++;
		HX_STACK_LINE(45)
		::luxe::components::Components tmp14 = this->_components;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(45)
		::DynamicShape tmp15 = _component;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(45)
		tmp9 = tmp14->add(tmp15);
	}
	HX_STACK_LINE(45)
	this->_collider = tmp9;
	HX_STACK_LINE(46)
	::DynamicController tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		bool tmp11 = (_ctrl == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(46)
		::DynamicController tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(46)
		if ((tmp11)){
			HX_STACK_LINE(46)
			tmp12 = ::DynamicController_obj::__new();
		}
		else{
			HX_STACK_LINE(46)
			tmp12 = _ctrl;
		}
		HX_STACK_LINE(46)
		::DynamicController _component = tmp12;		HX_STACK_VAR(_component,"_component");
		HX_STACK_LINE(46)
		(this->component_count)++;
		HX_STACK_LINE(46)
		::luxe::components::Components tmp13 = this->_components;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(46)
		::DynamicController tmp14 = _component;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(46)
		tmp10 = tmp13->add(tmp14);
	}
	HX_STACK_LINE(46)
	this->_controller = tmp10;
	HX_STACK_LINE(48)
	::Simulation tmp11 = ::Main_obj::sim;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(48)
	::DynamicShape tmp12 = this->get_collider();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(48)
	tmp11->dynamic_colliders->push(tmp12);
	HX_STACK_LINE(49)
	this->set_depth(((Float)1.1));
}
;
	return null();
}

//Creature_obj::~Creature_obj() { }

Dynamic Creature_obj::__CreateEmpty() { return  new Creature_obj; }
hx::ObjectPtr< Creature_obj > Creature_obj::__new(::String _id,::String _name,::phoenix::Vector _pos,::DynamicController _ctrl)
{  hx::ObjectPtr< Creature_obj > _result_ = new Creature_obj();
	_result_->__construct(_id,_name,_pos,_ctrl);
	return _result_;}

Dynamic Creature_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Creature_obj > _result_ = new Creature_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::DynamicShape Creature_obj::get_collider( ){
	HX_STACK_FRAME("Creature","get_collider",0x1c26bf2c,"Creature.get_collider","Creature.hx",82,0xc6ca163f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	::DynamicShape tmp = this->_collider;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Creature_obj,get_collider,return )

::DynamicController Creature_obj::get_controller( ){
	HX_STACK_FRAME("Creature","get_controller",0x35016694,"Creature.get_controller","Creature.hx",87,0xc6ca163f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	::DynamicController tmp = this->_controller;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Creature_obj,get_controller,return )

Void Creature_obj::init( ){
{
		HX_STACK_FRAME("Creature","init",0x9ecd5fff,"Creature.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::init();
	}
return null();
}


Void Creature_obj::ondestroy( ){
{
		HX_STACK_FRAME("Creature","ondestroy",0x1cd6566c,"Creature.ondestroy","luxe/macros/EntityRules.hx",47,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::ondestroy();
	}
return null();
}


::haxe::ds::StringMap Creature_obj::creature_types;

::haxe::ds::StringMap Creature_obj::_creature_types;

Void Creature_obj::load_creature_types( ){
{
		HX_STACK_FRAME("Creature","load_creature_types",0xd7197fe3,"Creature.load_creature_types","Creature.hx",53,0xc6ca163f)
		HX_STACK_LINE(54)
		::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		::Creature_obj::_creature_types = tmp;
		HX_STACK_LINE(56)
		::luxe::Resources tmp1 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		::luxe::resource::Resource tmp2 = tmp1->cache->get(HX_HCSTRING("assets/entities/Creatures.json","\xa4","\x91","\x50","\xf6"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		::snow::systems::assets::AssetJSON tmp3 = ((::luxe::resource::JSONResource)(tmp2))->asset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		Dynamic creatures_data = tmp3->json;		HX_STACK_VAR(creatures_data,"creatures_data");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			Dynamic tmp4 = creatures_data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(57)
			Array< ::String > _g1 = ::Reflect_obj::fields(tmp4);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(57)
			while((true)){
				HX_STACK_LINE(57)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(57)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(57)
				if ((tmp6)){
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(57)
				::String tmp7 = _g1->__get(_g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(57)
				::String creature_data = tmp7;		HX_STACK_VAR(creature_data,"creature_data");
				HX_STACK_LINE(57)
				++(_g);
				HX_STACK_LINE(59)
				Dynamic tmp8 = creatures_data;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(59)
				::String tmp9 = creature_data;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(59)
				Dynamic tmp10 = ::Reflect_obj::field(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(59)
				Dynamic creature = tmp10;		HX_STACK_VAR(creature,"creature");
				HX_STACK_LINE(61)
				::luxe::Resources tmp11 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(61)
				::String tmp12 = creature->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(61)
				::luxe::resource::Resource tmp13 = tmp11->cache->get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(61)
				::phoenix::Texture texture = ((::phoenix::Texture)(tmp13));		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(62)
				int tmp14 = texture->set_filter_min((int)9728);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(62)
				texture->set_filter_mag(tmp14);
				HX_STACK_LINE(64)
				{
					HX_STACK_LINE(65)
					::String tmp15 = creature_data;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(66)
					Float tmp16 = creature->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(66)
					Float tmp17 = creature->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(66)
					::phoenix::Vector tmp18 = ::phoenix::Vector_obj::__new(tmp16,tmp17,null(),null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(67)
					Float tmp19 = creature->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(67)
					Float tmp20 = creature->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(67)
					::phoenix::Vector tmp21 = ::phoenix::Vector_obj::__new(tmp19,tmp20,null(),null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(68)
					::phoenix::Texture tmp22 = texture;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(69)
					bool tmp23 = (creature->__Field(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(69)
					Dynamic tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(69)
					if ((tmp23)){
						HX_STACK_LINE(69)
						tmp24 = null();
					}
					else{
						HX_STACK_LINE(69)
						::luxe::Resources tmp25 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(69)
						::String tmp26 = creature->__Field(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(69)
						::luxe::resource::Resource tmp27 = tmp25->cache->get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(69)
						::snow::systems::assets::AssetJSON tmp28 = ((::luxe::resource::JSONResource)(tmp27))->asset;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(69)
						tmp24 = tmp28->json;
					}
					struct _Function_4_1{
						inline static Dynamic Block( ::phoenix::Texture &tmp22,Dynamic &creature,::phoenix::Vector &tmp21,Dynamic &tmp24,::String &tmp15,::phoenix::Vector &tmp18){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Creature.hx",64,0xc6ca163f)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp15,false);
								__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp18,false);
								__result->Add(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66") , tmp21,false);
								__result->Add(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e") , tmp22,false);
								__result->Add(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b") , tmp24,false);
								__result->Add(HX_HCSTRING("components","\x16","\xb5","\x1e","\x5a") , hx::TCastToArray(creature->__Field(HX_HCSTRING("components","\x16","\xb5","\x1e","\x5a"), hx::paccDynamic )),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(64)
					Dynamic tmp25 = _Function_4_1::Block(tmp22,creature,tmp21,tmp24,tmp15,tmp18);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(64)
					::CreatureData tmp26 = ::CreatureData_obj::__new(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(64)
					::CreatureData value = tmp26;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(64)
					::haxe::ds::StringMap tmp27 = ::Creature_obj::_creature_types;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(64)
					::String tmp28 = creature_data;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(64)
					::CreatureData tmp29 = value;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(64)
					tmp27->set(tmp28,tmp29);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Creature_obj,load_creature_types,(void))

::haxe::ds::StringMap Creature_obj::get_creature_types( ){
	HX_STACK_FRAME("Creature","get_creature_types",0x084de0b1,"Creature.get_creature_types","Creature.hx",76,0xc6ca163f)
	HX_STACK_LINE(77)
	{
		HX_STACK_LINE(77)
		::haxe::ds::StringMap tmp = ::Creature_obj::_creature_types;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		if ((tmp1)){
			HX_STACK_LINE(230)
			::String tmp2 = HX_HCSTRING(" ( creature types has not been loaded","\xb6","\x91","\x91","\x4f");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(230)
			::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(77)
			::String tmp4 = (HX_HCSTRING("_creature_types was null","\xa6","\x2e","\x0e","\xc2") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(77)
			::luxe::DebugError tmp5 = ::luxe::DebugError_obj::null_assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(77)
			HX_STACK_DO_THROW(tmp5);
		}
	}
	HX_STACK_LINE(78)
	::haxe::ds::StringMap tmp = ::Creature_obj::_creature_types;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Creature_obj,get_creature_types,return )


Creature_obj::Creature_obj()
{
}

void Creature_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Creature);
	HX_MARK_MEMBER_NAME(collider,"collider");
	HX_MARK_MEMBER_NAME(_collider,"_collider");
	HX_MARK_MEMBER_NAME(controller,"controller");
	HX_MARK_MEMBER_NAME(_controller,"_controller");
	::luxe::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Creature_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(collider,"collider");
	HX_VISIT_MEMBER_NAME(_collider,"_collider");
	HX_VISIT_MEMBER_NAME(controller,"controller");
	HX_VISIT_MEMBER_NAME(_controller,"_controller");
	::luxe::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Creature_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { return inCallProp == hx::paccAlways ? get_collider() : collider; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_collider") ) { return _collider; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"controller") ) { return inCallProp == hx::paccAlways ? get_controller() : controller; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_controller") ) { return _controller; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_collider") ) { return get_collider_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_controller") ) { return get_controller_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Creature_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"creature_types") ) { outValue = inCallProp == hx::paccAlways ? get_creature_types() : creature_types; return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_creature_types") ) { outValue = _creature_types; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_creature_types") ) { outValue = get_creature_types_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"load_creature_types") ) { outValue = load_creature_types_dyn(); return true;  }
	}
	return false;
}

Dynamic Creature_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { collider=inValue.Cast< ::DynamicShape >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_collider") ) { _collider=inValue.Cast< ::DynamicShape >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"controller") ) { controller=inValue.Cast< ::DynamicController >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_controller") ) { _controller=inValue.Cast< ::DynamicController >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Creature_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"creature_types") ) { creature_types=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_creature_types") ) { _creature_types=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void Creature_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9"));
	outFields->push(HX_HCSTRING("_collider","\x93","\xd6","\x6b","\x11"));
	outFields->push(HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04"));
	outFields->push(HX_HCSTRING("_controller","\xbb","\x65","\x48","\xd7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::DynamicShape*/ ,(int)offsetof(Creature_obj,collider),HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9")},
	{hx::fsObject /*::DynamicShape*/ ,(int)offsetof(Creature_obj,_collider),HX_HCSTRING("_collider","\x93","\xd6","\x6b","\x11")},
	{hx::fsObject /*::DynamicController*/ ,(int)offsetof(Creature_obj,controller),HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04")},
	{hx::fsObject /*::DynamicController*/ ,(int)offsetof(Creature_obj,_controller),HX_HCSTRING("_controller","\xbb","\x65","\x48","\xd7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Creature_obj::creature_types,HX_HCSTRING("creature_types","\xb9","\xb6","\xc0","\x9e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Creature_obj::_creature_types,HX_HCSTRING("_creature_types","\x58","\xff","\x20","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9"),
	HX_HCSTRING("_collider","\x93","\xd6","\x6b","\x11"),
	HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04"),
	HX_HCSTRING("_controller","\xbb","\x65","\x48","\xd7"),
	HX_HCSTRING("get_collider","\x3d","\x93","\xef","\x7e"),
	HX_HCSTRING("get_controller","\xe5","\x20","\xb4","\x7a"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Creature_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Creature_obj::creature_types,"creature_types");
	HX_MARK_MEMBER_NAME(Creature_obj::_creature_types,"_creature_types");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Creature_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Creature_obj::creature_types,"creature_types");
	HX_VISIT_MEMBER_NAME(Creature_obj::_creature_types,"_creature_types");
};

#endif

hx::Class Creature_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("creature_types","\xb9","\xb6","\xc0","\x9e"),
	HX_HCSTRING("_creature_types","\x58","\xff","\x20","\xe8"),
	HX_HCSTRING("load_creature_types","\xf2","\xbf","\x2c","\x70"),
	HX_HCSTRING("get_creature_types","\x82","\x97","\x5a","\x3a"),
	::String(null()) };

void Creature_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Creature","\xdf","\x61","\xb2","\x05");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Creature_obj::__GetStatic;
	__mClass->mSetStaticField = &Creature_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Creature_obj >;
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

