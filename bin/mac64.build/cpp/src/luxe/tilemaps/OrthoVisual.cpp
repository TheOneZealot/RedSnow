#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_OrthoVisual
#include <luxe/tilemaps/OrthoVisual.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_Tile
#include <luxe/tilemaps/Tile.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_TileLayer
#include <luxe/tilemaps/TileLayer.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_Tilemap
#include <luxe/tilemaps/Tilemap.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_TilemapVisual
#include <luxe/tilemaps/TilemapVisual.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_Tileset
#include <luxe/tilemaps/Tileset.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_phoenix_geometry_LineGeometry
#include <phoenix/geometry/LineGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#include <phoenix/geometry/QuadGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoord
#include <phoenix/geometry/TextureCoord.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoordSet
#include <phoenix/geometry/TextureCoordSet.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
namespace luxe{
namespace tilemaps{

Void OrthoVisual_obj::__construct(::luxe::tilemaps::Tilemap _map,Dynamic _options)
{
HX_STACK_FRAME("luxe.tilemaps.OrthoVisual","new",0x32869eb9,"luxe.tilemaps.OrthoVisual.new","luxe/tilemaps/Ortho.hx",68,0x6518ccd7)
HX_STACK_THIS(this)
HX_STACK_ARG(_map,"_map")
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(68)
	::luxe::tilemaps::Tilemap tmp = _map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	Dynamic tmp1 = _options;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//OrthoVisual_obj::~OrthoVisual_obj() { }

Dynamic OrthoVisual_obj::__CreateEmpty() { return  new OrthoVisual_obj; }
hx::ObjectPtr< OrthoVisual_obj > OrthoVisual_obj::__new(::luxe::tilemaps::Tilemap _map,Dynamic _options)
{  hx::ObjectPtr< OrthoVisual_obj > _result_ = new OrthoVisual_obj();
	_result_->__construct(_map,_options);
	return _result_;}

Dynamic OrthoVisual_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OrthoVisual_obj > _result_ = new OrthoVisual_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void OrthoVisual_obj::create( ){
{
		HX_STACK_FRAME("luxe.tilemaps.OrthoVisual","create",0x99e55643,"luxe.tilemaps.OrthoVisual.create","luxe/tilemaps/Ortho.hx",70,0x6518ccd7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		this->super::create();
		HX_STACK_LINE(74)
		::luxe::tilemaps::Tilemap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		int tmp1 = tmp->tile_width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(74)
		Float _map_scaled_tw = tmp4;		HX_STACK_VAR(_map_scaled_tw,"_map_scaled_tw");
		HX_STACK_LINE(75)
		::luxe::tilemaps::Tilemap tmp5 = this->map;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(75)
		int tmp6 = tmp5->tile_height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(75)
		Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(75)
		Dynamic tmp8 = tmp7->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(75)
		Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(75)
		Float _map_scaled_th = tmp9;		HX_STACK_VAR(_map_scaled_th,"_map_scaled_th");
		HX_STACK_LINE(77)
		::luxe::tilemaps::Tilemap tmp10 = this->map;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(77)
		Dynamic tmp11 = tmp10->iterator();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(77)
		for(::cpp::FastIterator_obj< ::luxe::tilemaps::TileLayer > *__it = ::cpp::CreateFastIterator< ::luxe::tilemaps::TileLayer >(tmp11);  __it->hasNext(); ){
			::luxe::tilemaps::TileLayer layer = __it->next();
			{
				HX_STACK_LINE(79)
				Array< ::Dynamic > _layer_geom = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_layer_geom,"_layer_geom");
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(81)
					::luxe::tilemaps::Tilemap tmp12 = this->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(81)
					int _g = tmp12->height;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(81)
					while((true)){
						HX_STACK_LINE(81)
						bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(81)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(81)
						if ((tmp14)){
							HX_STACK_LINE(81)
							break;
						}
						HX_STACK_LINE(81)
						int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(81)
						int y = tmp15;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(83)
						Array< ::Dynamic > _geom_row = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_geom_row,"_geom_row");
						HX_STACK_LINE(85)
						{
							HX_STACK_LINE(85)
							int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(85)
							::luxe::tilemaps::Tilemap tmp16 = this->map;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(85)
							int _g2 = tmp16->width;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(85)
							while((true)){
								HX_STACK_LINE(85)
								bool tmp17 = (_g3 < _g2);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(85)
								bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(85)
								if ((tmp18)){
									HX_STACK_LINE(85)
									break;
								}
								HX_STACK_LINE(85)
								int tmp19 = (_g3)++;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(85)
								int x = tmp19;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(91)
								::luxe::tilemaps::TileLayer tmp20 = layer;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(91)
								int tmp21 = x;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(91)
								int tmp22 = y;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(91)
								::phoenix::geometry::QuadGeometry tmp23 = hx::TCast< ::phoenix::geometry::QuadGeometry >::cast(this->create_tile_for_layer(tmp20,tmp21,tmp22));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(91)
								::phoenix::geometry::QuadGeometry _tile_geom = tmp23;		HX_STACK_VAR(_tile_geom,"_tile_geom");
								HX_STACK_LINE(93)
								::phoenix::geometry::QuadGeometry tmp24 = _tile_geom;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(93)
								_geom_row->push(tmp24);
							}
						}
						HX_STACK_LINE(97)
						_layer_geom->push(_geom_row);
					}
				}
				HX_STACK_LINE(102)
				::haxe::ds::StringMap tmp12 = this->geometry;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(102)
				::String tmp13 = layer->name;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(102)
				tmp12->set(tmp13,_layer_geom);
			}
;
		}
		HX_STACK_LINE(107)
		Dynamic tmp12 = this->options;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(107)
		Dynamic tmp13 = tmp12->__Field(HX_HCSTRING("grid","\xc6","\xd6","\x6b","\x44"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(107)
		if ((tmp13)){
			HX_STACK_LINE(110)
			::phoenix::Color tmp14 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,((Float)0.8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(110)
			::phoenix::Color tmp15 = tmp14->rgb((int)13369344);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(110)
			::phoenix::Color color = tmp15;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(112)
			{
				HX_STACK_LINE(112)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(112)
				::luxe::tilemaps::Tilemap tmp16 = this->map;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(112)
				int tmp17 = tmp16->width;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(112)
				int tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(112)
				int _g = tmp18;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(112)
				while((true)){
					HX_STACK_LINE(112)
					bool tmp19 = (_g1 < _g);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(112)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(112)
					if ((tmp20)){
						HX_STACK_LINE(112)
						break;
					}
					HX_STACK_LINE(112)
					int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(112)
					int x = tmp21;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(113)
					::luxe::Draw tmp22 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(114)
					::luxe::tilemaps::Tilemap tmp23 = this->map;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(114)
					Float tmp24 = tmp23->pos->x;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(114)
					Float tmp25 = (x * _map_scaled_tw);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(114)
					Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(114)
					::luxe::tilemaps::Tilemap tmp27 = this->map;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(114)
					Float tmp28 = tmp27->pos->y;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(114)
					Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(114)
					::phoenix::Vector tmp30 = ::phoenix::Vector_obj::__new(tmp26,tmp29,null(),null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(115)
					::luxe::tilemaps::Tilemap tmp31 = this->map;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(115)
					Float tmp32 = tmp31->pos->x;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(115)
					Float tmp33 = (x * _map_scaled_tw);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(115)
					Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(115)
					::luxe::tilemaps::Tilemap tmp35 = this->map;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(115)
					Float tmp36 = tmp35->pos->y;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(115)
					::luxe::tilemaps::Tilemap tmp37 = this->map;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(115)
					int tmp38 = tmp37->height;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(115)
					Float tmp39 = _map_scaled_th;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(115)
					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(115)
					Float tmp41 = (tmp36 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(115)
					::phoenix::Vector tmp42 = ::phoenix::Vector_obj::__new(tmp34,tmp41,null(),null());		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(116)
					::phoenix::Color tmp43 = color;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(117)
					Dynamic tmp44 = this->options;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(117)
					Dynamic tmp45 = tmp44->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(117)
					Float tmp46 = (tmp45 + ((Float)0.0001));		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(118)
					Dynamic tmp47 = this->options;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(118)
					::phoenix::Batcher tmp48 = tmp47->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
					struct _Function_4_1{
						inline static Dynamic Block( ::phoenix::Batcher &tmp48,Float &tmp46,::phoenix::Vector &tmp42,::phoenix::Color &tmp43,::phoenix::Vector &tmp30){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/tilemaps/Ortho.hx",113,0x6518ccd7)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00") , tmp30,false);
								__result->Add(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00") , tmp42,false);
								__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp43,false);
								__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp46,false);
								__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp48,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(113)
					Dynamic tmp49 = _Function_4_1::Block(tmp48,tmp46,tmp42,tmp43,tmp30);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(113)
					tmp22->line(tmp49);
				}
			}
			HX_STACK_LINE(122)
			{
				HX_STACK_LINE(122)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(122)
				::luxe::tilemaps::Tilemap tmp16 = this->map;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(122)
				int tmp17 = tmp16->height;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(122)
				int tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(122)
				int _g = tmp18;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(122)
				while((true)){
					HX_STACK_LINE(122)
					bool tmp19 = (_g1 < _g);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(122)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(122)
					if ((tmp20)){
						HX_STACK_LINE(122)
						break;
					}
					HX_STACK_LINE(122)
					int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(122)
					int y = tmp21;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(123)
					::luxe::Draw tmp22 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(124)
					::luxe::tilemaps::Tilemap tmp23 = this->map;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(124)
					Float tmp24 = tmp23->pos->x;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(124)
					Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(124)
					::luxe::tilemaps::Tilemap tmp26 = this->map;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(124)
					Float tmp27 = tmp26->pos->y;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(124)
					Float tmp28 = (y * _map_scaled_th);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(124)
					Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(124)
					::phoenix::Vector tmp30 = ::phoenix::Vector_obj::__new(tmp25,tmp29,null(),null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(125)
					::luxe::tilemaps::Tilemap tmp31 = this->map;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(125)
					Float tmp32 = tmp31->pos->x;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(125)
					::luxe::tilemaps::Tilemap tmp33 = this->map;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(125)
					int tmp34 = tmp33->width;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(125)
					Float tmp35 = _map_scaled_tw;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(125)
					Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(125)
					Float tmp37 = (tmp32 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(125)
					::luxe::tilemaps::Tilemap tmp38 = this->map;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(125)
					Float tmp39 = tmp38->pos->y;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(125)
					Float tmp40 = (y * _map_scaled_th);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(125)
					Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(125)
					::phoenix::Vector tmp42 = ::phoenix::Vector_obj::__new(tmp37,tmp41,null(),null());		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(126)
					::phoenix::Color tmp43 = color;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(127)
					Dynamic tmp44 = this->options;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(127)
					Dynamic tmp45 = tmp44->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(127)
					Float tmp46 = (tmp45 + ((Float)0.0001));		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(128)
					Dynamic tmp47 = this->options;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(128)
					::phoenix::Batcher tmp48 = tmp47->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
					struct _Function_4_1{
						inline static Dynamic Block( ::phoenix::Batcher &tmp48,Float &tmp46,::phoenix::Vector &tmp42,::phoenix::Color &tmp43,::phoenix::Vector &tmp30){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/tilemaps/Ortho.hx",123,0x6518ccd7)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00") , tmp30,false);
								__result->Add(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00") , tmp42,false);
								__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp43,false);
								__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp46,false);
								__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp48,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(123)
					Dynamic tmp49 = _Function_4_1::Block(tmp48,tmp46,tmp42,tmp43,tmp30);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(123)
					tmp22->line(tmp49);
				}
			}
		}
	}
return null();
}


Void OrthoVisual_obj::update_tile_id( ::phoenix::geometry::Geometry _geom,::String _layer_name,int _x,int _y,int _id,bool _flipx,bool _flipy,int _angle){
{
		HX_STACK_FRAME("luxe.tilemaps.OrthoVisual","update_tile_id",0x3785f65d,"luxe.tilemaps.OrthoVisual.update_tile_id","luxe/tilemaps/Ortho.hx",136,0x6518ccd7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_geom,"_geom")
		HX_STACK_ARG(_layer_name,"_layer_name")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_id,"_id")
		HX_STACK_ARG(_flipx,"_flipx")
		HX_STACK_ARG(_flipy,"_flipy")
		HX_STACK_ARG(_angle,"_angle")
		HX_STACK_LINE(138)
		::luxe::tilemaps::Tilemap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		int tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		::luxe::tilemaps::Tileset tmp2 = tmp->tileset_from_id(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		::luxe::tilemaps::Tileset tileset = tmp2;		HX_STACK_VAR(tileset,"tileset");
		HX_STACK_LINE(139)
		int tmp3 = _id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		::phoenix::Vector tmp4 = tileset->pos_in_texture(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(139)
		::phoenix::Vector image_coord = tmp4;		HX_STACK_VAR(image_coord,"image_coord");
		HX_STACK_LINE(141)
		::phoenix::geometry::QuadGeometry g = ((::phoenix::geometry::QuadGeometry)(_geom));		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(143)
		{
			HX_STACK_LINE(145)
			int tmp5 = tileset->margin;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(145)
			Float tmp6 = (image_coord->x * tileset->tile_width);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(145)
			Float tmp7 = (image_coord->x * tileset->spacing);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(145)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(145)
			Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(146)
			int tmp10 = tileset->margin;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(146)
			Float tmp11 = (image_coord->y * tileset->tile_height);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(146)
			Float tmp12 = (image_coord->y * tileset->spacing);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(146)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(146)
			Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(147)
			int tmp15 = tileset->tile_width;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(148)
			int tmp16 = tileset->tile_height;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(144)
			::phoenix::Rectangle tmp17 = ::phoenix::Rectangle_obj::__new(tmp9,tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(144)
			::phoenix::Rectangle _rect = tmp17;		HX_STACK_VAR(_rect,"_rect");
			HX_STACK_LINE(143)
			{
				HX_STACK_LINE(143)
				::phoenix::Texture tmp18 = g->state->texture;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(143)
				bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(143)
				if ((tmp19)){
					HX_STACK_LINE(143)
					::String tmp20 = HX_HCSTRING(" ( QuadGeometry; Calling UV on a geometry with null texture.","\x4d","\xfb","\xd1","\xd3");		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(143)
					::String tmp21 = (tmp20 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(143)
					::String tmp22 = (HX_HCSTRING("texture was null","\xc3","\x9c","\xa8","\x99") + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(143)
					::luxe::DebugError tmp23 = ::luxe::DebugError_obj::null_assertion(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(143)
					HX_STACK_DO_THROW(tmp23);
				}
			}
			HX_STACK_LINE(143)
			Float tmp18 = _rect->x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(143)
			::phoenix::Texture tmp19 = g->state->texture;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(143)
			int tmp20 = tmp19->width_actual;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(143)
			Float tmp21 = (Float(tmp18) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(143)
			Float tlx = tmp21;		HX_STACK_VAR(tlx,"tlx");
			HX_STACK_LINE(143)
			Float tmp22 = _rect->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(143)
			::phoenix::Texture tmp23 = g->state->texture;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(143)
			int tmp24 = tmp23->height_actual;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(143)
			Float tmp25 = (Float(tmp22) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(143)
			Float tly = tmp25;		HX_STACK_VAR(tly,"tly");
			HX_STACK_LINE(143)
			Float tmp26 = _rect->w;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(143)
			::phoenix::Texture tmp27 = g->state->texture;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(143)
			int tmp28 = tmp27->width_actual;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(143)
			Float tmp29 = (Float(tmp26) / Float(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(143)
			Float szx = tmp29;		HX_STACK_VAR(szx,"szx");
			HX_STACK_LINE(143)
			Float tmp30 = _rect->h;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(143)
			::phoenix::Texture tmp31 = g->state->texture;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(143)
			int tmp32 = tmp31->height_actual;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(143)
			Float tmp33 = (Float(tmp30) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(143)
			Float szy = tmp33;		HX_STACK_VAR(szy,"szy");
			HX_STACK_LINE(143)
			{
				HX_STACK_LINE(143)
				int tmp34 = g->vertices->length;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(143)
				bool tmp35 = (tmp34 == (int)0);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(143)
				if ((tmp35)){
					HX_STACK_LINE(143)
					Dynamic();
				}
				else{
					HX_STACK_LINE(143)
					Float sz_x = szx;		HX_STACK_VAR(sz_x,"sz_x");
					HX_STACK_LINE(143)
					Float sz_y = szy;		HX_STACK_VAR(sz_y,"sz_y");
					HX_STACK_LINE(143)
					Float tl_x = tlx;		HX_STACK_VAR(tl_x,"tl_x");
					HX_STACK_LINE(143)
					Float tl_y = tly;		HX_STACK_VAR(tl_y,"tl_y");
					HX_STACK_LINE(143)
					g->_uv_x = tl_x;
					HX_STACK_LINE(143)
					g->_uv_y = tl_y;
					HX_STACK_LINE(143)
					g->_uv_w = sz_x;
					HX_STACK_LINE(143)
					g->_uv_h = sz_y;
					HX_STACK_LINE(143)
					Float tmp36 = (tl_x + sz_x);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(143)
					Float tr_x = tmp36;		HX_STACK_VAR(tr_x,"tr_x");
					HX_STACK_LINE(143)
					Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
					HX_STACK_LINE(143)
					Float tmp37 = (tl_x + sz_x);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(143)
					Float br_x = tmp37;		HX_STACK_VAR(br_x,"br_x");
					HX_STACK_LINE(143)
					Float tmp38 = (tl_y + sz_y);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(143)
					Float br_y = tmp38;		HX_STACK_VAR(br_y,"br_y");
					HX_STACK_LINE(143)
					Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
					HX_STACK_LINE(143)
					Float tmp39 = (tl_y + sz_y);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(143)
					Float bl_y = tmp39;		HX_STACK_VAR(bl_y,"bl_y");
					HX_STACK_LINE(143)
					Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
					HX_STACK_LINE(143)
					Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
					HX_STACK_LINE(143)
					Float tmp40 = (Float(g->uv_angle) / Float((int)90));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(143)
					int tmp41 = ::Std_obj::_int(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(143)
					int rotations = tmp41;		HX_STACK_VAR(rotations,"rotations");
					HX_STACK_LINE(143)
					int tmp42 = rotations;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(143)
					Float tmp43 = (Float(rotations) / Float((int)4));		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(143)
					int tmp44 = ::Math_obj::floor(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(143)
					int tmp45 = ((int)4 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(143)
					int tmp46 = (tmp42 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(143)
					rotations = tmp46;
					HX_STACK_LINE(143)
					{
						HX_STACK_LINE(143)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(143)
						while((true)){
							HX_STACK_LINE(143)
							bool tmp47 = (_g < rotations);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(143)
							bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(143)
							if ((tmp48)){
								HX_STACK_LINE(143)
								break;
							}
							HX_STACK_LINE(143)
							int tmp49 = (_g)++;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(143)
							int r = tmp49;		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(143)
							{
								HX_STACK_LINE(143)
								tmp_x = tl_x;
								HX_STACK_LINE(143)
								tl_x = bl_x;
								HX_STACK_LINE(143)
								bl_x = br_x;
								HX_STACK_LINE(143)
								br_x = tr_x;
								HX_STACK_LINE(143)
								tr_x = tmp_x;
								HX_STACK_LINE(143)
								tmp_y = tl_y;
								HX_STACK_LINE(143)
								tl_y = bl_y;
								HX_STACK_LINE(143)
								bl_y = br_y;
								HX_STACK_LINE(143)
								br_y = tr_y;
								HX_STACK_LINE(143)
								tr_y = tmp_y;
							}
						}
					}
					HX_STACK_LINE(143)
					bool tmp47 = g->flipy;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(143)
					if ((tmp47)){
						HX_STACK_LINE(143)
						tmp_y = bl_y;
						HX_STACK_LINE(143)
						bl_y = tl_y;
						HX_STACK_LINE(143)
						tl_y = tmp_y;
						HX_STACK_LINE(143)
						tmp_x = bl_x;
						HX_STACK_LINE(143)
						bl_x = tl_x;
						HX_STACK_LINE(143)
						tl_x = tmp_x;
						HX_STACK_LINE(143)
						tmp_y = br_y;
						HX_STACK_LINE(143)
						br_y = tr_y;
						HX_STACK_LINE(143)
						tr_y = tmp_y;
						HX_STACK_LINE(143)
						tmp_x = br_x;
						HX_STACK_LINE(143)
						br_x = tr_x;
						HX_STACK_LINE(143)
						tr_x = tmp_x;
					}
					HX_STACK_LINE(143)
					bool tmp48 = g->flipx;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(143)
					if ((tmp48)){
						HX_STACK_LINE(143)
						tmp_x = tr_x;
						HX_STACK_LINE(143)
						tr_x = tl_x;
						HX_STACK_LINE(143)
						tl_x = tmp_x;
						HX_STACK_LINE(143)
						tmp_y = tr_y;
						HX_STACK_LINE(143)
						tr_y = tl_y;
						HX_STACK_LINE(143)
						tl_y = tmp_y;
						HX_STACK_LINE(143)
						tmp_x = br_x;
						HX_STACK_LINE(143)
						br_x = bl_x;
						HX_STACK_LINE(143)
						bl_x = tmp_x;
						HX_STACK_LINE(143)
						tmp_y = br_y;
						HX_STACK_LINE(143)
						br_y = bl_y;
						HX_STACK_LINE(143)
						bl_y = tmp_y;
					}
					HX_STACK_LINE(143)
					{
						HX_STACK_LINE(143)
						::phoenix::geometry::Vertex tmp49 = g->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(143)
						::phoenix::geometry::TextureCoord tmp50 = tmp49->uv->uv0;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(143)
						::phoenix::geometry::TextureCoord _this = tmp50;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(143)
						_this->u = tl_x;
						HX_STACK_LINE(143)
						_this->v = tl_y;
						HX_STACK_LINE(143)
						_this;
					}
					HX_STACK_LINE(143)
					{
						HX_STACK_LINE(143)
						::phoenix::geometry::Vertex tmp49 = g->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(143)
						::phoenix::geometry::TextureCoord tmp50 = tmp49->uv->uv0;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(143)
						::phoenix::geometry::TextureCoord _this = tmp50;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(143)
						_this->u = tr_x;
						HX_STACK_LINE(143)
						_this->v = tr_y;
						HX_STACK_LINE(143)
						_this;
					}
					HX_STACK_LINE(143)
					{
						HX_STACK_LINE(143)
						::phoenix::geometry::Vertex tmp49 = g->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(143)
						::phoenix::geometry::TextureCoord tmp50 = tmp49->uv->uv0;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(143)
						::phoenix::geometry::TextureCoord _this = tmp50;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(143)
						_this->u = br_x;
						HX_STACK_LINE(143)
						_this->v = br_y;
						HX_STACK_LINE(143)
						_this;
					}
					HX_STACK_LINE(143)
					{
						HX_STACK_LINE(143)
						::phoenix::geometry::Vertex tmp49 = g->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(143)
						::phoenix::geometry::TextureCoord tmp50 = tmp49->uv->uv0;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(143)
						::phoenix::geometry::TextureCoord _this = tmp50;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(143)
						_this->u = bl_x;
						HX_STACK_LINE(143)
						_this->v = bl_y;
						HX_STACK_LINE(143)
						_this;
					}
					HX_STACK_LINE(143)
					{
						HX_STACK_LINE(143)
						::phoenix::geometry::Vertex tmp49 = g->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(143)
						::phoenix::geometry::TextureCoord tmp50 = tmp49->uv->uv0;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(143)
						::phoenix::geometry::TextureCoord _this = tmp50;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(143)
						_this->u = tl_x;
						HX_STACK_LINE(143)
						_this->v = tl_y;
						HX_STACK_LINE(143)
						_this;
					}
					HX_STACK_LINE(143)
					{
						HX_STACK_LINE(143)
						::phoenix::geometry::Vertex tmp49 = g->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(143)
						::phoenix::geometry::TextureCoord tmp50 = tmp49->uv->uv0;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(143)
						::phoenix::geometry::TextureCoord _this = tmp50;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(143)
						_this->u = br_x;
						HX_STACK_LINE(143)
						_this->v = br_y;
						HX_STACK_LINE(143)
						_this;
					}
					HX_STACK_LINE(143)
					g->set_dirty(true);
				}
			}
		}
		HX_STACK_LINE(152)
		bool tmp5 = _flipx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(152)
		g->set_flipx(tmp5);
		HX_STACK_LINE(153)
		bool tmp6 = _flipy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(153)
		g->set_flipy(tmp6);
		HX_STACK_LINE(154)
		int tmp7 = _angle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(154)
		g->set_uv_angle(tmp7);
	}
return null();
}


::phoenix::geometry::Geometry OrthoVisual_obj::create_tile_for_layer( ::luxe::tilemaps::TileLayer layer,int x,int y){
	HX_STACK_FRAME("luxe.tilemaps.OrthoVisual","create_tile_for_layer",0x746ebf06,"luxe.tilemaps.OrthoVisual.create_tile_for_layer","luxe/tilemaps/Ortho.hx",158,0x6518ccd7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer,"layer")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(160)
	::luxe::tilemaps::Tilemap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	int tmp1 = tmp->tile_width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(160)
	Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(160)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(160)
	Float _map_scaled_tw = tmp4;		HX_STACK_VAR(_map_scaled_tw,"_map_scaled_tw");
	HX_STACK_LINE(161)
	::luxe::tilemaps::Tilemap tmp5 = this->map;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(161)
	int tmp6 = tmp5->tile_height;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(161)
	Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(161)
	Dynamic tmp8 = tmp7->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(161)
	Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(161)
	Float _map_scaled_th = tmp9;		HX_STACK_VAR(_map_scaled_th,"_map_scaled_th");
	HX_STACK_LINE(163)
	::luxe::tilemaps::Tile tmp10 = layer->tiles->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::luxe::tilemaps::Tile >();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(163)
	::luxe::tilemaps::Tile tile = tmp10;		HX_STACK_VAR(tile,"tile");
	HX_STACK_LINE(166)
	bool tmp11 = (tile->id == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(166)
	if ((tmp11)){
		HX_STACK_LINE(167)
		return null();
	}
	HX_STACK_LINE(170)
	::luxe::tilemaps::Tilemap tmp12 = this->map;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(170)
	int tmp13 = tile->id;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(170)
	::luxe::tilemaps::Tileset tmp14 = tmp12->tileset_from_id(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(170)
	::luxe::tilemaps::Tileset tileset = tmp14;		HX_STACK_VAR(tileset,"tileset");
	HX_STACK_LINE(172)
	{
		HX_STACK_LINE(172)
		bool tmp15 = (tileset == null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(172)
		if ((tmp15)){
			HX_STACK_LINE(172)
			::String tmp16 = (HX_HCSTRING("Tilemap Ortho cannot find tileset for tile id ","\x1a","\xe6","\xdd","\x10") + tile->id);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(230)
			::String tmp17 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(230)
			::String tmp18 = (tmp17 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(172)
			::String tmp19 = (HX_HCSTRING("tileset was null","\x4a","\x91","\xc2","\xec") + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(172)
			::luxe::DebugError tmp20 = ::luxe::DebugError_obj::null_assertion(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(172)
			HX_STACK_DO_THROW(tmp20);
		}
	}
	HX_STACK_LINE(174)
	int tmp15 = tileset->tile_width;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(174)
	Dynamic tmp16 = this->options;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(174)
	Dynamic tmp17 = tmp16->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(174)
	Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(174)
	Float _scaled_tilewidth = tmp18;		HX_STACK_VAR(_scaled_tilewidth,"_scaled_tilewidth");
	HX_STACK_LINE(175)
	int tmp19 = tileset->tile_height;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(175)
	Dynamic tmp20 = this->options;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(175)
	Dynamic tmp21 = tmp20->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(175)
	Float tmp22 = (tmp19 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(175)
	Float _scaled_tileheight = tmp22;		HX_STACK_VAR(_scaled_tileheight,"_scaled_tileheight");
	HX_STACK_LINE(177)
	int _offset_x = (int)0;		HX_STACK_VAR(_offset_x,"_offset_x");
	HX_STACK_LINE(178)
	Float tmp23 = (_scaled_tileheight - _map_scaled_th);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(178)
	Float _offset_y = tmp23;		HX_STACK_VAR(_offset_y,"_offset_y");
	HX_STACK_LINE(181)
	::luxe::Draw tmp24 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(182)
	::luxe::tilemaps::Tilemap tmp25 = this->map;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(182)
	Float tmp26 = tmp25->pos->x;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(182)
	Float tmp27 = (tile->x * _map_scaled_tw);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(182)
	Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(182)
	int tmp29 = _offset_x;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(182)
	Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(183)
	::luxe::tilemaps::Tilemap tmp31 = this->map;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(183)
	Float tmp32 = tmp31->pos->y;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(183)
	Float tmp33 = (tile->y * _map_scaled_th);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(183)
	Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(183)
	Float tmp35 = _offset_y;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(183)
	Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(184)
	Float tmp37 = _scaled_tilewidth;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(185)
	Float tmp38 = _scaled_tileheight;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(186)
	bool tmp39 = layer->visible;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(187)
	bool tmp40 = (tileset != null());		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(187)
	::phoenix::Texture tmp41;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(187)
	if ((tmp40)){
		HX_STACK_LINE(187)
		tmp41 = tileset->texture;
	}
	else{
		HX_STACK_LINE(187)
		tmp41 = null();
	}
	HX_STACK_LINE(188)
	::phoenix::Color tmp42 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,layer->opacity);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(189)
	Dynamic tmp43 = this->options;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(189)
	Dynamic tmp44 = tmp43->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(189)
	int tmp45 = layer->layer;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(189)
	::luxe::tilemaps::Tilemap tmp46 = this->map;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(189)
	int tmp47 = tmp46->layers_ordered->length;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(189)
	Float tmp48 = (Float(tmp45) / Float(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(189)
	Float tmp49 = (tmp44 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(190)
	Dynamic tmp50 = this->options;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(190)
	::phoenix::Batcher tmp51 = tmp50->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp51,"tmp51");
	struct _Function_1_1{
		inline static Dynamic Block( ::phoenix::Color &tmp42,Float &tmp36,Float &tmp38,::phoenix::Texture &tmp41,Float &tmp49,Float &tmp37,bool &tmp39,::phoenix::Batcher &tmp51,Float &tmp30){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/tilemaps/Ortho.hx",181,0x6518ccd7)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp30,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp36,false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp37,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp38,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp39,false);
				__result->Add(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e") , tmp41,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp42,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp49,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp51,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(181)
	Dynamic tmp52 = _Function_1_1::Block(tmp42,tmp36,tmp38,tmp41,tmp49,tmp37,tmp39,tmp51,tmp30);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(181)
	::phoenix::geometry::QuadGeometry tmp53 = tmp24->box(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(181)
	::phoenix::geometry::QuadGeometry _tile_geom = tmp53;		HX_STACK_VAR(_tile_geom,"_tile_geom");
	HX_STACK_LINE(194)
	bool tmp54 = (tileset->texture != null());		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(194)
	if ((tmp54)){
		HX_STACK_LINE(196)
		int tmp55 = tile->id;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(196)
		::phoenix::Vector tmp56 = tileset->pos_in_texture(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(196)
		::phoenix::Vector image_coord = tmp56;		HX_STACK_VAR(image_coord,"image_coord");
		HX_STACK_LINE(198)
		{
			HX_STACK_LINE(200)
			int tmp57 = tileset->margin;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(200)
			Float tmp58 = (image_coord->x * tileset->tile_width);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(200)
			Float tmp59 = (image_coord->x * tileset->spacing);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(200)
			Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(200)
			Float tmp61 = (tmp57 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(201)
			int tmp62 = tileset->margin;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(201)
			Float tmp63 = (image_coord->y * tileset->tile_height);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(201)
			Float tmp64 = (image_coord->y * tileset->spacing);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(201)
			Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(201)
			Float tmp66 = (tmp62 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(202)
			int tmp67 = tileset->tile_width;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(203)
			int tmp68 = tileset->tile_height;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(199)
			::phoenix::Rectangle tmp69 = ::phoenix::Rectangle_obj::__new(tmp61,tmp66,tmp67,tmp68);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(199)
			::phoenix::Rectangle _rect = tmp69;		HX_STACK_VAR(_rect,"_rect");
			HX_STACK_LINE(198)
			{
				HX_STACK_LINE(198)
				::phoenix::Texture tmp70 = _tile_geom->state->texture;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(198)
				bool tmp71 = (tmp70 == null());		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(198)
				if ((tmp71)){
					HX_STACK_LINE(198)
					::String tmp72 = HX_HCSTRING(" ( QuadGeometry; Calling UV on a geometry with null texture.","\x4d","\xfb","\xd1","\xd3");		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(198)
					::String tmp73 = (tmp72 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(198)
					::String tmp74 = (HX_HCSTRING("texture was null","\xc3","\x9c","\xa8","\x99") + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(198)
					::luxe::DebugError tmp75 = ::luxe::DebugError_obj::null_assertion(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(198)
					HX_STACK_DO_THROW(tmp75);
				}
			}
			HX_STACK_LINE(198)
			Float tmp70 = _rect->x;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(198)
			::phoenix::Texture tmp71 = _tile_geom->state->texture;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(198)
			int tmp72 = tmp71->width_actual;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(198)
			Float tmp73 = (Float(tmp70) / Float(tmp72));		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(198)
			Float tlx = tmp73;		HX_STACK_VAR(tlx,"tlx");
			HX_STACK_LINE(198)
			Float tmp74 = _rect->y;		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(198)
			::phoenix::Texture tmp75 = _tile_geom->state->texture;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(198)
			int tmp76 = tmp75->height_actual;		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(198)
			Float tmp77 = (Float(tmp74) / Float(tmp76));		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(198)
			Float tly = tmp77;		HX_STACK_VAR(tly,"tly");
			HX_STACK_LINE(198)
			Float tmp78 = _rect->w;		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(198)
			::phoenix::Texture tmp79 = _tile_geom->state->texture;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(198)
			int tmp80 = tmp79->width_actual;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(198)
			Float tmp81 = (Float(tmp78) / Float(tmp80));		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(198)
			Float szx = tmp81;		HX_STACK_VAR(szx,"szx");
			HX_STACK_LINE(198)
			Float tmp82 = _rect->h;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(198)
			::phoenix::Texture tmp83 = _tile_geom->state->texture;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(198)
			int tmp84 = tmp83->height_actual;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(198)
			Float tmp85 = (Float(tmp82) / Float(tmp84));		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(198)
			Float szy = tmp85;		HX_STACK_VAR(szy,"szy");
			HX_STACK_LINE(198)
			{
				HX_STACK_LINE(198)
				int tmp86 = _tile_geom->vertices->length;		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(198)
				bool tmp87 = (tmp86 == (int)0);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(198)
				if ((tmp87)){
					HX_STACK_LINE(198)
					Dynamic();
				}
				else{
					HX_STACK_LINE(198)
					Float sz_x = szx;		HX_STACK_VAR(sz_x,"sz_x");
					HX_STACK_LINE(198)
					Float sz_y = szy;		HX_STACK_VAR(sz_y,"sz_y");
					HX_STACK_LINE(198)
					Float tl_x = tlx;		HX_STACK_VAR(tl_x,"tl_x");
					HX_STACK_LINE(198)
					Float tl_y = tly;		HX_STACK_VAR(tl_y,"tl_y");
					HX_STACK_LINE(198)
					_tile_geom->_uv_x = tl_x;
					HX_STACK_LINE(198)
					_tile_geom->_uv_y = tl_y;
					HX_STACK_LINE(198)
					_tile_geom->_uv_w = sz_x;
					HX_STACK_LINE(198)
					_tile_geom->_uv_h = sz_y;
					HX_STACK_LINE(198)
					Float tmp88 = (tl_x + sz_x);		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(198)
					Float tr_x = tmp88;		HX_STACK_VAR(tr_x,"tr_x");
					HX_STACK_LINE(198)
					Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
					HX_STACK_LINE(198)
					Float tmp89 = (tl_x + sz_x);		HX_STACK_VAR(tmp89,"tmp89");
					HX_STACK_LINE(198)
					Float br_x = tmp89;		HX_STACK_VAR(br_x,"br_x");
					HX_STACK_LINE(198)
					Float tmp90 = (tl_y + sz_y);		HX_STACK_VAR(tmp90,"tmp90");
					HX_STACK_LINE(198)
					Float br_y = tmp90;		HX_STACK_VAR(br_y,"br_y");
					HX_STACK_LINE(198)
					Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
					HX_STACK_LINE(198)
					Float tmp91 = (tl_y + sz_y);		HX_STACK_VAR(tmp91,"tmp91");
					HX_STACK_LINE(198)
					Float bl_y = tmp91;		HX_STACK_VAR(bl_y,"bl_y");
					HX_STACK_LINE(198)
					Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
					HX_STACK_LINE(198)
					Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
					HX_STACK_LINE(198)
					Float tmp92 = (Float(_tile_geom->uv_angle) / Float((int)90));		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(198)
					int tmp93 = ::Std_obj::_int(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(198)
					int rotations = tmp93;		HX_STACK_VAR(rotations,"rotations");
					HX_STACK_LINE(198)
					int tmp94 = rotations;		HX_STACK_VAR(tmp94,"tmp94");
					HX_STACK_LINE(198)
					Float tmp95 = (Float(rotations) / Float((int)4));		HX_STACK_VAR(tmp95,"tmp95");
					HX_STACK_LINE(198)
					int tmp96 = ::Math_obj::floor(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
					HX_STACK_LINE(198)
					int tmp97 = ((int)4 * tmp96);		HX_STACK_VAR(tmp97,"tmp97");
					HX_STACK_LINE(198)
					int tmp98 = (tmp94 - tmp97);		HX_STACK_VAR(tmp98,"tmp98");
					HX_STACK_LINE(198)
					rotations = tmp98;
					HX_STACK_LINE(198)
					{
						HX_STACK_LINE(198)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(198)
						while((true)){
							HX_STACK_LINE(198)
							bool tmp99 = (_g < rotations);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(198)
							bool tmp100 = !(tmp99);		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(198)
							if ((tmp100)){
								HX_STACK_LINE(198)
								break;
							}
							HX_STACK_LINE(198)
							int tmp101 = (_g)++;		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(198)
							int r = tmp101;		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(198)
							{
								HX_STACK_LINE(198)
								tmp_x = tl_x;
								HX_STACK_LINE(198)
								tl_x = bl_x;
								HX_STACK_LINE(198)
								bl_x = br_x;
								HX_STACK_LINE(198)
								br_x = tr_x;
								HX_STACK_LINE(198)
								tr_x = tmp_x;
								HX_STACK_LINE(198)
								tmp_y = tl_y;
								HX_STACK_LINE(198)
								tl_y = bl_y;
								HX_STACK_LINE(198)
								bl_y = br_y;
								HX_STACK_LINE(198)
								br_y = tr_y;
								HX_STACK_LINE(198)
								tr_y = tmp_y;
							}
						}
					}
					HX_STACK_LINE(198)
					bool tmp99 = _tile_geom->flipy;		HX_STACK_VAR(tmp99,"tmp99");
					HX_STACK_LINE(198)
					if ((tmp99)){
						HX_STACK_LINE(198)
						tmp_y = bl_y;
						HX_STACK_LINE(198)
						bl_y = tl_y;
						HX_STACK_LINE(198)
						tl_y = tmp_y;
						HX_STACK_LINE(198)
						tmp_x = bl_x;
						HX_STACK_LINE(198)
						bl_x = tl_x;
						HX_STACK_LINE(198)
						tl_x = tmp_x;
						HX_STACK_LINE(198)
						tmp_y = br_y;
						HX_STACK_LINE(198)
						br_y = tr_y;
						HX_STACK_LINE(198)
						tr_y = tmp_y;
						HX_STACK_LINE(198)
						tmp_x = br_x;
						HX_STACK_LINE(198)
						br_x = tr_x;
						HX_STACK_LINE(198)
						tr_x = tmp_x;
					}
					HX_STACK_LINE(198)
					bool tmp100 = _tile_geom->flipx;		HX_STACK_VAR(tmp100,"tmp100");
					HX_STACK_LINE(198)
					if ((tmp100)){
						HX_STACK_LINE(198)
						tmp_x = tr_x;
						HX_STACK_LINE(198)
						tr_x = tl_x;
						HX_STACK_LINE(198)
						tl_x = tmp_x;
						HX_STACK_LINE(198)
						tmp_y = tr_y;
						HX_STACK_LINE(198)
						tr_y = tl_y;
						HX_STACK_LINE(198)
						tl_y = tmp_y;
						HX_STACK_LINE(198)
						tmp_x = br_x;
						HX_STACK_LINE(198)
						br_x = bl_x;
						HX_STACK_LINE(198)
						bl_x = tmp_x;
						HX_STACK_LINE(198)
						tmp_y = br_y;
						HX_STACK_LINE(198)
						br_y = bl_y;
						HX_STACK_LINE(198)
						bl_y = tmp_y;
					}
					HX_STACK_LINE(198)
					{
						HX_STACK_LINE(198)
						::phoenix::geometry::Vertex tmp101 = _tile_geom->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(198)
						::phoenix::geometry::TextureCoord tmp102 = tmp101->uv->uv0;		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(198)
						::phoenix::geometry::TextureCoord _this = tmp102;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(198)
						_this->u = tl_x;
						HX_STACK_LINE(198)
						_this->v = tl_y;
						HX_STACK_LINE(198)
						_this;
					}
					HX_STACK_LINE(198)
					{
						HX_STACK_LINE(198)
						::phoenix::geometry::Vertex tmp101 = _tile_geom->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(198)
						::phoenix::geometry::TextureCoord tmp102 = tmp101->uv->uv0;		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(198)
						::phoenix::geometry::TextureCoord _this = tmp102;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(198)
						_this->u = tr_x;
						HX_STACK_LINE(198)
						_this->v = tr_y;
						HX_STACK_LINE(198)
						_this;
					}
					HX_STACK_LINE(198)
					{
						HX_STACK_LINE(198)
						::phoenix::geometry::Vertex tmp101 = _tile_geom->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(198)
						::phoenix::geometry::TextureCoord tmp102 = tmp101->uv->uv0;		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(198)
						::phoenix::geometry::TextureCoord _this = tmp102;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(198)
						_this->u = br_x;
						HX_STACK_LINE(198)
						_this->v = br_y;
						HX_STACK_LINE(198)
						_this;
					}
					HX_STACK_LINE(198)
					{
						HX_STACK_LINE(198)
						::phoenix::geometry::Vertex tmp101 = _tile_geom->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(198)
						::phoenix::geometry::TextureCoord tmp102 = tmp101->uv->uv0;		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(198)
						::phoenix::geometry::TextureCoord _this = tmp102;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(198)
						_this->u = bl_x;
						HX_STACK_LINE(198)
						_this->v = bl_y;
						HX_STACK_LINE(198)
						_this;
					}
					HX_STACK_LINE(198)
					{
						HX_STACK_LINE(198)
						::phoenix::geometry::Vertex tmp101 = _tile_geom->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(198)
						::phoenix::geometry::TextureCoord tmp102 = tmp101->uv->uv0;		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(198)
						::phoenix::geometry::TextureCoord _this = tmp102;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(198)
						_this->u = tl_x;
						HX_STACK_LINE(198)
						_this->v = tl_y;
						HX_STACK_LINE(198)
						_this;
					}
					HX_STACK_LINE(198)
					{
						HX_STACK_LINE(198)
						::phoenix::geometry::Vertex tmp101 = _tile_geom->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(198)
						::phoenix::geometry::TextureCoord tmp102 = tmp101->uv->uv0;		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(198)
						::phoenix::geometry::TextureCoord _this = tmp102;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(198)
						_this->u = br_x;
						HX_STACK_LINE(198)
						_this->v = br_y;
						HX_STACK_LINE(198)
						_this;
					}
					HX_STACK_LINE(198)
					_tile_geom->set_dirty(true);
				}
			}
		}
		HX_STACK_LINE(207)
		int tmp57 = tile->angle;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(207)
		_tile_geom->set_uv_angle(tmp57);
		HX_STACK_LINE(208)
		bool tmp58 = tile->flipx;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(208)
		_tile_geom->set_flipx(tmp58);
		HX_STACK_LINE(209)
		bool tmp59 = tile->flipy;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(209)
		_tile_geom->set_flipy(tmp59);
		HX_STACK_LINE(211)
		Dynamic tmp60 = this->options;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(211)
		Dynamic tmp61 = tmp60->__Field(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"), hx::paccDynamic );		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(211)
		int tmp62 = tileset->texture->set_filter_mag(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(211)
		tileset->texture->set_filter_min(tmp62);
	}
	HX_STACK_LINE(215)
	::phoenix::geometry::QuadGeometry tmp55 = _tile_geom;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(215)
	return tmp55;
}



OrthoVisual_obj::OrthoVisual_obj()
{
}

Dynamic OrthoVisual_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"update_tile_id") ) { return update_tile_id_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"create_tile_for_layer") ) { return create_tile_for_layer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update_tile_id","\x16","\xe8","\xb4","\xda"),
	HX_HCSTRING("create_tile_for_layer","\x6d","\x66","\xe4","\x85"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OrthoVisual_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OrthoVisual_obj::__mClass,"__mClass");
};

#endif

hx::Class OrthoVisual_obj::__mClass;

void OrthoVisual_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tilemaps.OrthoVisual","\x47","\xce","\xd8","\x5a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OrthoVisual_obj >;
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
} // end namespace tilemaps
