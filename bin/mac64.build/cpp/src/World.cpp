#include <hxcpp.h>

#ifndef INCLUDED_Creature
#include <Creature.h>
#endif
#ifndef INCLUDED_DynamicController
#include <DynamicController.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_PlayerController
#include <PlayerController.h>
#endif
#ifndef INCLUDED_Simulation
#include <Simulation.h>
#endif
#ifndef INCLUDED_World
#include <World.h>
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
#ifndef INCLUDED_luxe_importers_tiled_TiledMap
#include <luxe/importers/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledMapData
#include <luxe/importers/tiled/TiledMapData.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledObject
#include <luxe/importers/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledObjectGroup
#include <luxe/importers/tiled/TiledObjectGroup.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_resource_TextResource
#include <luxe/resource/TextResource.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_TileLayer
#include <luxe/tilemaps/TileLayer.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_Tilemap
#include <luxe/tilemaps/Tilemap.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetText
#include <snow/systems/assets/AssetText.h>
#endif

Void World_obj::__construct()
{
HX_STACK_FRAME("World","new",0xe2d1a824,"World.new","World.hx",17,0x7e25a7cc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	::luxe::Resources tmp = ::Luxe_obj::resources;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	::luxe::resource::Resource tmp1 = tmp->cache->get(HX_HCSTRING("assets/tiled/GameplayTesting.tmx","\xb6","\xb5","\x33","\x9a"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	::snow::systems::assets::AssetText tmp2 = ((::luxe::resource::TextResource)(tmp1))->asset;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(18)
	::String map_data = tmp2->text;		HX_STACK_VAR(map_data,"map_data");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &map_data){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","World.hx",19,0x7e25a7cc)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd") , HX_HCSTRING("tmx","\xdf","\x64","\x58","\x00"),false);
				__result->Add(HX_HCSTRING("asset_path","\x94","\x91","\x13","\x17") , HX_HCSTRING("assets/tiled","\xaa","\xff","\x1f","\xdc"),false);
				__result->Add(HX_HCSTRING("tiled_file_data","\xc4","\xca","\xc9","\xcf") , map_data,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(19)
	Dynamic tmp3 = _Function_1_1::Block(map_data);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(19)
	::luxe::importers::tiled::TiledMap tmp4 = ::luxe::importers::tiled::TiledMap_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(19)
	this->map = tmp4;
	HX_STACK_LINE(20)
	::luxe::importers::tiled::TiledMap tmp5 = this->map;		HX_STACK_VAR(tmp5,"tmp5");
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","World.hx",20,0x7e25a7cc)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , (int)9728,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(20)
	Dynamic tmp6 = _Function_1_2::Block();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(20)
	tmp5->display(tmp6);
	HX_STACK_LINE(22)
	this->spawns = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(24)
	this->generate_collision();
	HX_STACK_LINE(25)
	this->generate_objects();
}
;
	return null();
}

//World_obj::~World_obj() { }

Dynamic World_obj::__CreateEmpty() { return  new World_obj; }
hx::ObjectPtr< World_obj > World_obj::__new()
{  hx::ObjectPtr< World_obj > _result_ = new World_obj();
	_result_->__construct();
	return _result_;}

Dynamic World_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< World_obj > _result_ = new World_obj();
	_result_->__construct();
	return _result_;}

Void World_obj::generate_collision( ){
{
		HX_STACK_FRAME("World","generate_collision",0xcc63fc64,"World.generate_collision","World.hx",29,0x7e25a7cc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		::luxe::importers::tiled::TiledMap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		::luxe::tilemaps::TileLayer tmp1 = tmp->layer(HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		Array< ::Dynamic > bounds = tmp1->bounds_fitted();		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(31)
			while((true)){
				HX_STACK_LINE(31)
				bool tmp2 = (_g < bounds->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(31)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(31)
				if ((tmp3)){
					HX_STACK_LINE(31)
					break;
				}
				HX_STACK_LINE(31)
				::phoenix::Rectangle tmp4 = bounds->__get(_g).StaticCast< ::phoenix::Rectangle >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(31)
				::phoenix::Rectangle bound = tmp4;		HX_STACK_VAR(bound,"bound");
				HX_STACK_LINE(31)
				++(_g);
				HX_STACK_LINE(33)
				{
					HX_STACK_LINE(33)
					::phoenix::Rectangle _g1 = bound;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(33)
					Float tmp5 = _g1->x;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(33)
					::luxe::importers::tiled::TiledMap tmp6 = this->map;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(33)
					int tmp7 = tmp6->tile_width;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(33)
					Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(33)
					_g1->set_x(tmp8);
				}
				HX_STACK_LINE(34)
				{
					HX_STACK_LINE(34)
					::phoenix::Rectangle _g1 = bound;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(34)
					Float tmp5 = _g1->y;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(34)
					::luxe::importers::tiled::TiledMap tmp6 = this->map;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(34)
					int tmp7 = tmp6->tile_height;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(34)
					Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(34)
					_g1->set_y(tmp8);
				}
				HX_STACK_LINE(35)
				{
					HX_STACK_LINE(35)
					::phoenix::Rectangle _g1 = bound;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(35)
					Float tmp5 = _g1->w;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(35)
					::luxe::importers::tiled::TiledMap tmp6 = this->map;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(35)
					int tmp7 = tmp6->tile_width;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(35)
					Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(35)
					_g1->set_w(tmp8);
				}
				HX_STACK_LINE(36)
				{
					HX_STACK_LINE(36)
					::phoenix::Rectangle _g1 = bound;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(36)
					Float tmp5 = _g1->h;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(36)
					::luxe::importers::tiled::TiledMap tmp6 = this->map;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(36)
					int tmp7 = tmp6->tile_height;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(36)
					Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(36)
					_g1->set_h(tmp8);
				}
				HX_STACK_LINE(37)
				::Simulation tmp5 = ::Main_obj::sim;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(37)
				Float tmp6 = bound->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(37)
				Float tmp7 = bound->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(37)
				Float tmp8 = bound->w;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(37)
				Float tmp9 = bound->h;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(37)
				::luxe::collision::shapes::Polygon tmp10 = ::luxe::collision::shapes::Polygon_obj::rectangle(tmp6,tmp7,tmp8,tmp9,false);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(37)
				tmp5->static_colliders->push(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,generate_collision,(void))

Void World_obj::generate_objects( ){
{
		HX_STACK_FRAME("World","generate_objects",0x7ab77c46,"World.generate_objects","World.hx",43,0x7e25a7cc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		::luxe::importers::tiled::TiledMap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		Array< ::Dynamic > _g1 = tmp->tiledmap_data->object_groups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(43)
		while((true)){
			HX_STACK_LINE(43)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(43)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			if ((tmp2)){
				HX_STACK_LINE(43)
				break;
			}
			HX_STACK_LINE(43)
			::luxe::importers::tiled::TiledObjectGroup tmp3 = _g1->__get(_g).StaticCast< ::luxe::importers::tiled::TiledObjectGroup >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			::luxe::importers::tiled::TiledObjectGroup group = tmp3;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(43)
			++(_g);
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(45)
				Array< ::Dynamic > _g3 = group->objects;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(45)
				while((true)){
					HX_STACK_LINE(45)
					bool tmp4 = (_g2 < _g3->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(45)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(45)
					if ((tmp5)){
						HX_STACK_LINE(45)
						break;
					}
					HX_STACK_LINE(45)
					::luxe::importers::tiled::TiledObject tmp6 = _g3->__get(_g2).StaticCast< ::luxe::importers::tiled::TiledObject >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(45)
					::luxe::importers::tiled::TiledObject object = tmp6;		HX_STACK_VAR(object,"object");
					HX_STACK_LINE(45)
					++(_g2);
					HX_STACK_LINE(47)
					{
						HX_STACK_LINE(47)
						::String _g4 = object->type;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(47)
						::String tmp7 = _g4;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(47)
						::String _switch_1 = (tmp7);
						if (  ( _switch_1==HX_HCSTRING("spawn","\x3b","\x9e","\x66","\x81"))){
							HX_STACK_LINE(50)
							::luxe::importers::tiled::TiledObject tmp8 = object;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(50)
							this->spawns->push(tmp8);
							HX_STACK_LINE(51)
							::phoenix::Vector tmp9 = object->pos;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(51)
							::PlayerController tmp10 = ::PlayerController_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(51)
							::Creature tmp11 = ::Creature_obj::__new(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(51)
							::Main_obj::player = tmp11;
						}
						else  {
							HX_STACK_LINE(54)
							::String tmp8 = object->type;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(54)
							::String tmp9 = object->name;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(54)
							::phoenix::Vector tmp10 = object->pos;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(54)
							::DynamicController tmp11 = ::DynamicController_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(54)
							::Creature_obj::__new(tmp8,tmp9,tmp10,tmp11);
						}
;
;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,generate_objects,(void))


World_obj::World_obj()
{
}

void World_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(World);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(creatures,"creatures");
	HX_MARK_MEMBER_NAME(spawns,"spawns");
	HX_MARK_END_CLASS();
}

void World_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(creatures,"creatures");
	HX_VISIT_MEMBER_NAME(spawns,"spawns");
}

Dynamic World_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"spawns") ) { return spawns; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"creatures") ) { return creatures; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"generate_objects") ) { return generate_objects_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"generate_collision") ) { return generate_collision_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic World_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::luxe::importers::tiled::TiledMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"spawns") ) { spawns=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"creatures") ) { creatures=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void World_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("creatures","\xd4","\x61","\x90","\x54"));
	outFields->push(HX_HCSTRING("spawns","\xd8","\xd5","\x63","\xb8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::importers::tiled::TiledMap*/ ,(int)offsetof(World_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(World_obj,creatures),HX_HCSTRING("creatures","\xd4","\x61","\x90","\x54")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(World_obj,spawns),HX_HCSTRING("spawns","\xd8","\xd5","\x63","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("creatures","\xd4","\x61","\x90","\x54"),
	HX_HCSTRING("spawns","\xd8","\xd5","\x63","\xb8"),
	HX_HCSTRING("generate_collision","\xa8","\x77","\xd8","\x66"),
	HX_HCSTRING("generate_objects","\x8a","\xde","\x9b","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(World_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(World_obj::__mClass,"__mClass");
};

#endif

hx::Class World_obj::__mClass;

void World_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("World","\x32","\x06","\x92","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< World_obj >;
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

