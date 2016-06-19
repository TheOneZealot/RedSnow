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
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_luxe_importers_tiled_TiledLayer
#include <luxe/importers/tiled/TiledLayer.h>
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
#ifndef INCLUDED_luxe_tilemaps_Tileset
#include <luxe/tilemaps/Tileset.h>
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
HX_STACK_FRAME("World","new",0xe2d1a824,"World.new","World.hx",22,0x7e25a7cc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	::luxe::Resources tmp = ::Luxe_obj::resources;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::luxe::resource::Resource tmp1 = tmp->cache->get(HX_HCSTRING("assets/tiled/GameplayTesting.tmx","\xb6","\xb5","\x33","\x9a"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	::snow::systems::assets::AssetText tmp2 = ((::luxe::resource::TextResource)(tmp1))->asset;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	::String map_data = tmp2->text;		HX_STACK_VAR(map_data,"map_data");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &map_data){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","World.hx",24,0x7e25a7cc)
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
	HX_STACK_LINE(24)
	Dynamic tmp3 = _Function_1_1::Block(map_data);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	::luxe::importers::tiled::TiledMap tmp4 = ::luxe::importers::tiled::TiledMap_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(24)
	this->map = tmp4;
	HX_STACK_LINE(25)
	::luxe::importers::tiled::TiledMap tmp5 = this->map;		HX_STACK_VAR(tmp5,"tmp5");
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","World.hx",25,0x7e25a7cc)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , (int)9728,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(25)
	Dynamic tmp6 = _Function_1_2::Block();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(25)
	tmp5->display(tmp6);
	HX_STACK_LINE(27)
	this->spawns = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(28)
	this->building_layers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(30)
	this->generate_collision();
	HX_STACK_LINE(31)
	this->generate_objects();
	HX_STACK_LINE(32)
	this->generate_buildings();
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
		HX_STACK_FRAME("World","generate_collision",0xcc63fc64,"World.generate_collision","World.hx",36,0x7e25a7cc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		::luxe::importers::tiled::TiledMap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		::luxe::tilemaps::TileLayer tmp1 = tmp->layer(HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		Array< ::Dynamic > bounds = tmp1->bounds_fitted();		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(38)
			while((true)){
				HX_STACK_LINE(38)
				bool tmp2 = (_g < bounds->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(38)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(38)
				if ((tmp3)){
					HX_STACK_LINE(38)
					break;
				}
				HX_STACK_LINE(38)
				::phoenix::Rectangle tmp4 = bounds->__get(_g).StaticCast< ::phoenix::Rectangle >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(38)
				::phoenix::Rectangle bound = tmp4;		HX_STACK_VAR(bound,"bound");
				HX_STACK_LINE(38)
				++(_g);
				HX_STACK_LINE(40)
				{
					HX_STACK_LINE(40)
					::phoenix::Rectangle _g1 = bound;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(40)
					Float tmp5 = _g1->x;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(40)
					::luxe::importers::tiled::TiledMap tmp6 = this->map;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(40)
					int tmp7 = tmp6->tile_width;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(40)
					Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(40)
					_g1->set_x(tmp8);
				}
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					::phoenix::Rectangle _g1 = bound;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(41)
					Float tmp5 = _g1->y;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(41)
					::luxe::importers::tiled::TiledMap tmp6 = this->map;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(41)
					int tmp7 = tmp6->tile_height;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(41)
					Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(41)
					_g1->set_y(tmp8);
				}
				HX_STACK_LINE(42)
				{
					HX_STACK_LINE(42)
					::phoenix::Rectangle _g1 = bound;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(42)
					Float tmp5 = _g1->w;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(42)
					::luxe::importers::tiled::TiledMap tmp6 = this->map;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(42)
					int tmp7 = tmp6->tile_width;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(42)
					Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(42)
					_g1->set_w(tmp8);
				}
				HX_STACK_LINE(43)
				{
					HX_STACK_LINE(43)
					::phoenix::Rectangle _g1 = bound;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(43)
					Float tmp5 = _g1->h;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(43)
					::luxe::importers::tiled::TiledMap tmp6 = this->map;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(43)
					int tmp7 = tmp6->tile_height;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(43)
					Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(43)
					_g1->set_h(tmp8);
				}
				HX_STACK_LINE(44)
				::Simulation tmp5 = ::Main_obj::sim;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(44)
				Float tmp6 = bound->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(44)
				Float tmp7 = bound->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(44)
				Float tmp8 = bound->w;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(44)
				Float tmp9 = bound->h;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(44)
				::luxe::collision::shapes::Polygon tmp10 = ::luxe::collision::shapes::Polygon_obj::rectangle(tmp6,tmp7,tmp8,tmp9,false);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(44)
				tmp5->static_colliders->push(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,generate_collision,(void))

Void World_obj::generate_objects( ){
{
		HX_STACK_FRAME("World","generate_objects",0x7ab77c46,"World.generate_objects","World.hx",50,0x7e25a7cc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		::luxe::importers::tiled::TiledMap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		Array< ::Dynamic > _g1 = tmp->tiledmap_data->object_groups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(50)
		while((true)){
			HX_STACK_LINE(50)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(50)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(50)
			if ((tmp2)){
				HX_STACK_LINE(50)
				break;
			}
			HX_STACK_LINE(50)
			::luxe::importers::tiled::TiledObjectGroup tmp3 = _g1->__get(_g).StaticCast< ::luxe::importers::tiled::TiledObjectGroup >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(50)
			::luxe::importers::tiled::TiledObjectGroup group = tmp3;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(50)
			++(_g);
			HX_STACK_LINE(52)
			{
				HX_STACK_LINE(52)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(52)
				Array< ::Dynamic > _g3 = group->objects;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(52)
				while((true)){
					HX_STACK_LINE(52)
					bool tmp4 = (_g2 < _g3->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(52)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(52)
					if ((tmp5)){
						HX_STACK_LINE(52)
						break;
					}
					HX_STACK_LINE(52)
					::luxe::importers::tiled::TiledObject tmp6 = _g3->__get(_g2).StaticCast< ::luxe::importers::tiled::TiledObject >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(52)
					::luxe::importers::tiled::TiledObject object = tmp6;		HX_STACK_VAR(object,"object");
					HX_STACK_LINE(52)
					++(_g2);
					HX_STACK_LINE(54)
					{
						HX_STACK_LINE(54)
						::String _g4 = object->type;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(54)
						::String tmp7 = _g4;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(54)
						::String _switch_1 = (tmp7);
						if (  ( _switch_1==HX_HCSTRING("Spawn","\x1b","\x0e","\x94","\x14"))){
							HX_STACK_LINE(57)
							::String tmp8 = object->properties->get(HX_HCSTRING("Creature","\xdf","\x61","\xb2","\x05"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(57)
							::String _g5 = tmp8;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(57)
							bool tmp9 = (_g5 != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(57)
							if ((tmp9)){
								HX_STACK_LINE(57)
								::String tmp10 = _g5;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(57)
								::String _switch_2 = (tmp10);
								if (  ( _switch_2==HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"))){
									HX_STACK_LINE(60)
									::luxe::importers::tiled::TiledObject tmp11 = object;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(60)
									this->spawns->push(tmp11);
									HX_STACK_LINE(61)
									::phoenix::Vector tmp12 = object->pos;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(61)
									::PlayerController tmp13 = ::PlayerController_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(61)
									::Creature tmp14 = ::Creature_obj::__new(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(61)
									::Main_obj::player = tmp14;
								}
								else  {
									HX_STACK_LINE(63)
									::String tmp11 = object->properties->get(HX_HCSTRING("Creature","\xdf","\x61","\xb2","\x05"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(63)
									::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(63)
									::String tmp13 = object->name;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(63)
									::phoenix::Vector tmp14 = object->pos;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(63)
									::DynamicController tmp15 = ::DynamicController_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(63)
									::Creature_obj::__new(tmp12,tmp13,tmp14,tmp15);
								}
;
;
							}
							else{
								HX_STACK_LINE(63)
								::String tmp10 = object->properties->get(HX_HCSTRING("Creature","\xdf","\x61","\xb2","\x05"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(63)
								::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(63)
								::String tmp12 = object->name;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(63)
								::phoenix::Vector tmp13 = object->pos;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(63)
								::DynamicController tmp14 = ::DynamicController_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(63)
								::Creature_obj::__new(tmp11,tmp12,tmp13,tmp14);
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,generate_objects,(void))

Void World_obj::generate_buildings( ){
{
		HX_STACK_FRAME("World","generate_buildings",0xec479771,"World.generate_buildings","World.hx",71,0x7e25a7cc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		::luxe::importers::tiled::TiledMap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		Dynamic tmp1 = tmp->layers->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		for(::cpp::FastIterator_obj< ::luxe::tilemaps::TileLayer > *__it = ::cpp::CreateFastIterator< ::luxe::tilemaps::TileLayer >(tmp1);  __it->hasNext(); ){
			::luxe::tilemaps::TileLayer layer = __it->next();
			{
				HX_STACK_LINE(74)
				::String tmp2 = layer->name;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(74)
				bool tmp3 = ::StringTools_obj::startsWith(tmp2,HX_HCSTRING("buildings","\x7f","\x43","\x1e","\xfb"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(74)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(74)
				if ((tmp4)){
					HX_STACK_LINE(74)
					continue;
				}
				HX_STACK_LINE(76)
				{
					HX_STACK_LINE(76)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(76)
					Array< ::Dynamic > _g1 = this->building_layers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(76)
					while((true)){
						HX_STACK_LINE(76)
						bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(76)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(76)
						if ((tmp6)){
							HX_STACK_LINE(76)
							break;
						}
						HX_STACK_LINE(76)
						::luxe::importers::tiled::TiledLayer tmp7 = _g1->__get(_g).StaticCast< ::luxe::importers::tiled::TiledLayer >();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(76)
						::luxe::importers::tiled::TiledLayer layer1 = tmp7;		HX_STACK_VAR(layer1,"layer1");
						HX_STACK_LINE(76)
						++(_g);
						HX_STACK_LINE(78)
						::luxe::tilemaps::Tileset tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(78)
						{
							HX_STACK_LINE(78)
							::String tmp9 = layer1->properties->get(HX_HCSTRING("Tileset","\x14","\xa9","\xe4","\x12"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(78)
							::String key = tmp9;		HX_STACK_VAR(key,"key");
							HX_STACK_LINE(78)
							::luxe::importers::tiled::TiledMap tmp10 = this->map;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(78)
							::String tmp11 = key;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(78)
							tmp8 = tmp10->tilesets->get(tmp11);
						}
						HX_STACK_LINE(78)
						::luxe::tilemaps::Tileset tileset = tmp8;		HX_STACK_VAR(tileset,"tileset");
						HX_STACK_LINE(79)
						int first_id = tileset->first_id;		HX_STACK_VAR(first_id,"first_id");
						HX_STACK_LINE(81)
						{
							HX_STACK_LINE(81)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(81)
							while((true)){
								HX_STACK_LINE(81)
								bool tmp9 = (_g2 < (int)2);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(81)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(81)
								if ((tmp10)){
									HX_STACK_LINE(81)
									break;
								}
								HX_STACK_LINE(81)
								int tmp11 = (_g2)++;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(81)
								int z = tmp11;		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(83)
								::String tmp12 = (HX_HCSTRING("buildings","\x7f","\x43","\x1e","\xfb") + z);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(83)
								::String layer_name = tmp12;		HX_STACK_VAR(layer_name,"layer_name");
								HX_STACK_LINE(85)
								::luxe::importers::tiled::TiledMap tmp13 = this->map;		HX_STACK_VAR(tmp13,"tmp13");
								struct _Function_6_1{
									inline static Dynamic Block( ::String &layer_name){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","World.hx",85,0x7e25a7cc)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , layer_name,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(85)
								Dynamic tmp14 = _Function_6_1::Block(layer_name);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(85)
								tmp13->add_layer(tmp14);
							}
						}
					}
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,generate_buildings,(void))


World_obj::World_obj()
{
}

void World_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(World);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(creatures,"creatures");
	HX_MARK_MEMBER_NAME(spawns,"spawns");
	HX_MARK_MEMBER_NAME(building_layers,"building_layers");
	HX_MARK_END_CLASS();
}

void World_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(creatures,"creatures");
	HX_VISIT_MEMBER_NAME(spawns,"spawns");
	HX_VISIT_MEMBER_NAME(building_layers,"building_layers");
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
	case 15:
		if (HX_FIELD_EQ(inName,"building_layers") ) { return building_layers; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"generate_objects") ) { return generate_objects_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"generate_collision") ) { return generate_collision_dyn(); }
		if (HX_FIELD_EQ(inName,"generate_buildings") ) { return generate_buildings_dyn(); }
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
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"building_layers") ) { building_layers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void World_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("creatures","\xd4","\x61","\x90","\x54"));
	outFields->push(HX_HCSTRING("spawns","\xd8","\xd5","\x63","\xb8"));
	outFields->push(HX_HCSTRING("building_layers","\x2d","\x3b","\xdc","\xfd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::importers::tiled::TiledMap*/ ,(int)offsetof(World_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(World_obj,creatures),HX_HCSTRING("creatures","\xd4","\x61","\x90","\x54")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(World_obj,spawns),HX_HCSTRING("spawns","\xd8","\xd5","\x63","\xb8")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(World_obj,building_layers),HX_HCSTRING("building_layers","\x2d","\x3b","\xdc","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("creatures","\xd4","\x61","\x90","\x54"),
	HX_HCSTRING("spawns","\xd8","\xd5","\x63","\xb8"),
	HX_HCSTRING("building_layers","\x2d","\x3b","\xdc","\xfd"),
	HX_HCSTRING("generate_collision","\xa8","\x77","\xd8","\x66"),
	HX_HCSTRING("generate_objects","\x8a","\xde","\x9b","\x49"),
	HX_HCSTRING("generate_buildings","\xb5","\x12","\xbc","\x86"),
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

