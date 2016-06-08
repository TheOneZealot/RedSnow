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
#ifndef INCLUDED_luxe_tilemaps_Isometric
#include <luxe/tilemaps/Isometric.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_IsometricVisual
#include <luxe/tilemaps/IsometricVisual.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_Tile
#include <luxe/tilemaps/Tile.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_TileLayer
#include <luxe/tilemaps/TileLayer.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_TileOffset
#include <luxe/tilemaps/TileOffset.h>
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

Void IsometricVisual_obj::__construct(::luxe::tilemaps::Tilemap _map,Dynamic _options)
{
HX_STACK_FRAME("luxe.tilemaps.IsometricVisual","new",0xde41a476,"luxe.tilemaps.IsometricVisual.new","luxe/tilemaps/Isometric.hx",84,0x6f42617a)
HX_STACK_THIS(this)
HX_STACK_ARG(_map,"_map")
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(84)
	::luxe::tilemaps::Tilemap tmp = _map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	Dynamic tmp1 = _options;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//IsometricVisual_obj::~IsometricVisual_obj() { }

Dynamic IsometricVisual_obj::__CreateEmpty() { return  new IsometricVisual_obj; }
hx::ObjectPtr< IsometricVisual_obj > IsometricVisual_obj::__new(::luxe::tilemaps::Tilemap _map,Dynamic _options)
{  hx::ObjectPtr< IsometricVisual_obj > _result_ = new IsometricVisual_obj();
	_result_->__construct(_map,_options);
	return _result_;}

Dynamic IsometricVisual_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IsometricVisual_obj > _result_ = new IsometricVisual_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void IsometricVisual_obj::create( ){
{
		HX_STACK_FRAME("luxe.tilemaps.IsometricVisual","create",0x8008c4a6,"luxe.tilemaps.IsometricVisual.create","luxe/tilemaps/Isometric.hx",86,0x6f42617a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		::luxe::tilemaps::Tilemap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		for(::cpp::FastIterator_obj< ::luxe::tilemaps::TileLayer > *__it = ::cpp::CreateFastIterator< ::luxe::tilemaps::TileLayer >(tmp1);  __it->hasNext(); ){
			::luxe::tilemaps::TileLayer layer = __it->next();
			{
				HX_STACK_LINE(90)
				Array< ::Dynamic > _layer_geom = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_layer_geom,"_layer_geom");
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(92)
					::luxe::tilemaps::Tilemap tmp2 = this->map;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(92)
					int _g = tmp2->height;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(92)
					while((true)){
						HX_STACK_LINE(92)
						bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(92)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(92)
						if ((tmp4)){
							HX_STACK_LINE(92)
							break;
						}
						HX_STACK_LINE(92)
						int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(92)
						int y = tmp5;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(95)
						Array< ::Dynamic > _geom_row = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_geom_row,"_geom_row");
						HX_STACK_LINE(97)
						{
							HX_STACK_LINE(97)
							int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(97)
							::luxe::tilemaps::Tilemap tmp6 = this->map;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(97)
							int _g2 = tmp6->width;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(97)
							while((true)){
								HX_STACK_LINE(97)
								bool tmp7 = (_g3 < _g2);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(97)
								bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(97)
								if ((tmp8)){
									HX_STACK_LINE(97)
									break;
								}
								HX_STACK_LINE(97)
								int tmp9 = (_g3)++;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(97)
								int x = tmp9;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(99)
								::luxe::tilemaps::TileLayer tmp10 = layer;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(99)
								int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(99)
								int tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(99)
								::phoenix::geometry::QuadGeometry tmp13 = hx::TCast< ::phoenix::geometry::QuadGeometry >::cast(this->create_tile_for_layer(tmp10,tmp11,tmp12));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(99)
								::phoenix::geometry::QuadGeometry _tile_geom = tmp13;		HX_STACK_VAR(_tile_geom,"_tile_geom");
								HX_STACK_LINE(105)
								::phoenix::geometry::QuadGeometry tmp14 = _tile_geom;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(105)
								_geom_row->push(tmp14);
							}
						}
						HX_STACK_LINE(110)
						_layer_geom->push(_geom_row);
					}
				}
				HX_STACK_LINE(115)
				::haxe::ds::StringMap tmp2 = this->geometry;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(115)
				::String tmp3 = layer->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(115)
				tmp2->set(tmp3,_layer_geom);
			}
;
		}
		HX_STACK_LINE(119)
		Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("grid","\xc6","\xd6","\x6b","\x44"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		if ((tmp3)){
			HX_STACK_LINE(121)
			::phoenix::Color tmp4 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,((Float)0.8));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(121)
			::phoenix::Color tmp5 = tmp4->rgb((int)13369344);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(121)
			::phoenix::Color color = tmp5;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(123)
				::luxe::tilemaps::Tilemap tmp6 = this->map;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(123)
				int tmp7 = tmp6->width;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(123)
				int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(123)
				int _g = tmp8;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(123)
				while((true)){
					HX_STACK_LINE(123)
					bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(123)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(123)
					if ((tmp10)){
						HX_STACK_LINE(123)
						break;
					}
					HX_STACK_LINE(123)
					int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(123)
					int x = tmp11;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(125)
					int tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(125)
					::luxe::tilemaps::Tilemap tmp13 = this->map;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(125)
					int tmp14 = tmp13->tile_width;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(125)
					::luxe::tilemaps::Tilemap tmp15 = this->map;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(125)
					int tmp16 = tmp15->tile_height;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(125)
					Dynamic tmp17 = this->options;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(125)
					Dynamic tmp18 = tmp17->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(125)
					::phoenix::Vector tmp19 = ::luxe::tilemaps::Isometric_obj::tile_coord_to_worldpos(tmp12,(int)0,tmp14,tmp16,tmp18,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(125)
					::phoenix::Vector ip = tmp19;		HX_STACK_VAR(ip,"ip");
					HX_STACK_LINE(126)
					int tmp20 = x;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(126)
					::luxe::tilemaps::Tilemap tmp21 = this->map;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(126)
					int tmp22 = tmp21->height;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(126)
					::luxe::tilemaps::Tilemap tmp23 = this->map;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(126)
					int tmp24 = tmp23->tile_width;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(126)
					::luxe::tilemaps::Tilemap tmp25 = this->map;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(126)
					int tmp26 = tmp25->tile_height;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(126)
					Dynamic tmp27 = this->options;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(126)
					Dynamic tmp28 = tmp27->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(126)
					::phoenix::Vector tmp29 = ::luxe::tilemaps::Isometric_obj::tile_coord_to_worldpos(tmp20,tmp22,tmp24,tmp26,tmp28,null(),null());		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(126)
					::phoenix::Vector ip_bot = tmp29;		HX_STACK_VAR(ip_bot,"ip_bot");
					HX_STACK_LINE(128)
					::luxe::Draw tmp30 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(129)
					::luxe::tilemaps::Tilemap tmp31 = this->map;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(129)
					Float tmp32 = tmp31->pos->x;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(129)
					Float tmp33 = ip->x;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(129)
					Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(129)
					::luxe::tilemaps::Tilemap tmp35 = this->map;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(129)
					Float tmp36 = tmp35->pos->y;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(129)
					Float tmp37 = ip->y;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(129)
					Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(129)
					::phoenix::Vector tmp39 = ::phoenix::Vector_obj::__new(tmp34,tmp38,null(),null());		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(130)
					::luxe::tilemaps::Tilemap tmp40 = this->map;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(130)
					Float tmp41 = tmp40->pos->x;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(130)
					Float tmp42 = ip_bot->x;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(130)
					Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(130)
					::luxe::tilemaps::Tilemap tmp44 = this->map;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(130)
					Float tmp45 = tmp44->pos->y;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(130)
					Float tmp46 = ip_bot->y;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(130)
					Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(130)
					::phoenix::Vector tmp48 = ::phoenix::Vector_obj::__new(tmp43,tmp47,null(),null());		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(131)
					::phoenix::Color tmp49 = color;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(132)
					Dynamic tmp50 = this->options;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(132)
					Dynamic tmp51 = tmp50->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(132)
					Float tmp52 = (tmp51 + ((Float)0.001));		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(133)
					Dynamic tmp53 = this->options;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(133)
					::phoenix::Batcher tmp54 = tmp53->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp54,"tmp54");
					struct _Function_4_1{
						inline static Dynamic Block( ::phoenix::Vector &tmp48,::phoenix::Batcher &tmp54,Float &tmp52,::phoenix::Color &tmp49,::phoenix::Vector &tmp39){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/tilemaps/Isometric.hx",128,0x6f42617a)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00") , tmp39,false);
								__result->Add(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00") , tmp48,false);
								__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp49,false);
								__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp52,false);
								__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp54,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(128)
					Dynamic tmp55 = _Function_4_1::Block(tmp48,tmp54,tmp52,tmp49,tmp39);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(128)
					tmp30->line(tmp55);
				}
			}
			HX_STACK_LINE(137)
			{
				HX_STACK_LINE(137)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(137)
				::luxe::tilemaps::Tilemap tmp6 = this->map;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(137)
				int tmp7 = tmp6->height;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(137)
				int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(137)
				int _g = tmp8;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(137)
				while((true)){
					HX_STACK_LINE(137)
					bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(137)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(137)
					if ((tmp10)){
						HX_STACK_LINE(137)
						break;
					}
					HX_STACK_LINE(137)
					int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(137)
					int y = tmp11;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(139)
					int tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(139)
					::luxe::tilemaps::Tilemap tmp13 = this->map;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(139)
					int tmp14 = tmp13->tile_width;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(139)
					::luxe::tilemaps::Tilemap tmp15 = this->map;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(139)
					int tmp16 = tmp15->tile_height;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(139)
					Dynamic tmp17 = this->options;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(139)
					Dynamic tmp18 = tmp17->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(139)
					::phoenix::Vector tmp19 = ::luxe::tilemaps::Isometric_obj::tile_coord_to_worldpos((int)0,tmp12,tmp14,tmp16,tmp18,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(139)
					::phoenix::Vector ip = tmp19;		HX_STACK_VAR(ip,"ip");
					HX_STACK_LINE(140)
					::luxe::tilemaps::Tilemap tmp20 = this->map;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(140)
					int tmp21 = tmp20->width;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(140)
					int tmp22 = y;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(140)
					::luxe::tilemaps::Tilemap tmp23 = this->map;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(140)
					int tmp24 = tmp23->tile_width;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(140)
					::luxe::tilemaps::Tilemap tmp25 = this->map;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(140)
					int tmp26 = tmp25->tile_height;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(140)
					Dynamic tmp27 = this->options;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(140)
					Dynamic tmp28 = tmp27->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(140)
					::phoenix::Vector tmp29 = ::luxe::tilemaps::Isometric_obj::tile_coord_to_worldpos(tmp21,tmp22,tmp24,tmp26,tmp28,null(),null());		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(140)
					::phoenix::Vector ip_bot = tmp29;		HX_STACK_VAR(ip_bot,"ip_bot");
					HX_STACK_LINE(142)
					::luxe::Draw tmp30 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(143)
					::luxe::tilemaps::Tilemap tmp31 = this->map;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(143)
					Float tmp32 = tmp31->pos->x;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(143)
					Float tmp33 = ip->x;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(143)
					Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(143)
					::luxe::tilemaps::Tilemap tmp35 = this->map;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(143)
					Float tmp36 = tmp35->pos->y;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(143)
					Float tmp37 = ip->y;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(143)
					Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(143)
					::phoenix::Vector tmp39 = ::phoenix::Vector_obj::__new(tmp34,tmp38,null(),null());		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(144)
					::luxe::tilemaps::Tilemap tmp40 = this->map;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(144)
					Float tmp41 = tmp40->pos->x;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(144)
					Float tmp42 = ip_bot->x;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(144)
					Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(144)
					::luxe::tilemaps::Tilemap tmp44 = this->map;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(144)
					Float tmp45 = tmp44->pos->y;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(144)
					Float tmp46 = ip_bot->y;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(144)
					Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(144)
					::phoenix::Vector tmp48 = ::phoenix::Vector_obj::__new(tmp43,tmp47,null(),null());		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(145)
					::phoenix::Color tmp49 = color;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(146)
					Dynamic tmp50 = this->options;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(146)
					Dynamic tmp51 = tmp50->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(146)
					Float tmp52 = (tmp51 + ((Float)0.001));		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(147)
					Dynamic tmp53 = this->options;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(147)
					::phoenix::Batcher tmp54 = tmp53->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp54,"tmp54");
					struct _Function_4_1{
						inline static Dynamic Block( ::phoenix::Vector &tmp48,::phoenix::Batcher &tmp54,Float &tmp52,::phoenix::Color &tmp49,::phoenix::Vector &tmp39){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/tilemaps/Isometric.hx",142,0x6f42617a)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00") , tmp39,false);
								__result->Add(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00") , tmp48,false);
								__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp49,false);
								__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp52,false);
								__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp54,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(142)
					Dynamic tmp55 = _Function_4_1::Block(tmp48,tmp54,tmp52,tmp49,tmp39);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(142)
					tmp30->line(tmp55);
				}
			}
		}
	}
return null();
}


Void IsometricVisual_obj::update_tile_id( ::phoenix::geometry::Geometry _geom,::String _layer_name,int _x,int _y,int _id,bool _flipx,bool _flipy,int _angle){
{
		HX_STACK_FRAME("luxe.tilemaps.IsometricVisual","update_tile_id",0xc722ffc0,"luxe.tilemaps.IsometricVisual.update_tile_id","luxe/tilemaps/Isometric.hx",155,0x6f42617a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_geom,"_geom")
		HX_STACK_ARG(_layer_name,"_layer_name")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_id,"_id")
		HX_STACK_ARG(_flipx,"_flipx")
		HX_STACK_ARG(_flipy,"_flipy")
		HX_STACK_ARG(_angle,"_angle")
		HX_STACK_LINE(157)
		::luxe::tilemaps::Tilemap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		int tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(157)
		::luxe::tilemaps::Tileset tmp2 = tmp->tileset_from_id(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(157)
		::luxe::tilemaps::Tileset tileset = tmp2;		HX_STACK_VAR(tileset,"tileset");
		HX_STACK_LINE(158)
		int tmp3 = _id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(158)
		::phoenix::Vector tmp4 = tileset->pos_in_texture(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(158)
		::phoenix::Vector image_coord = tmp4;		HX_STACK_VAR(image_coord,"image_coord");
		HX_STACK_LINE(160)
		::phoenix::geometry::QuadGeometry g = ((::phoenix::geometry::QuadGeometry)(_geom));		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(162)
		{
			HX_STACK_LINE(164)
			int tmp5 = tileset->margin;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(164)
			Float tmp6 = (image_coord->x * tileset->tile_width);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(164)
			Float tmp7 = (image_coord->x * tileset->spacing);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(164)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(164)
			Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(165)
			int tmp10 = tileset->margin;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(165)
			Float tmp11 = (image_coord->y * tileset->tile_height);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(165)
			Float tmp12 = (image_coord->y * tileset->spacing);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(165)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(165)
			Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(166)
			int tmp15 = tileset->tile_width;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(167)
			int tmp16 = tileset->tile_height;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(163)
			::phoenix::Rectangle tmp17 = ::phoenix::Rectangle_obj::__new(tmp9,tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(163)
			::phoenix::Rectangle _rect = tmp17;		HX_STACK_VAR(_rect,"_rect");
			HX_STACK_LINE(162)
			{
				HX_STACK_LINE(162)
				::phoenix::Texture tmp18 = g->state->texture;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(162)
				bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(162)
				if ((tmp19)){
					HX_STACK_LINE(162)
					::String tmp20 = HX_HCSTRING(" ( QuadGeometry; Calling UV on a geometry with null texture.","\x4d","\xfb","\xd1","\xd3");		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(162)
					::String tmp21 = (tmp20 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(162)
					::String tmp22 = (HX_HCSTRING("texture was null","\xc3","\x9c","\xa8","\x99") + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(162)
					::luxe::DebugError tmp23 = ::luxe::DebugError_obj::null_assertion(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(162)
					HX_STACK_DO_THROW(tmp23);
				}
			}
			HX_STACK_LINE(162)
			Float tmp18 = _rect->x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(162)
			::phoenix::Texture tmp19 = g->state->texture;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(162)
			int tmp20 = tmp19->width_actual;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(162)
			Float tmp21 = (Float(tmp18) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(162)
			Float tlx = tmp21;		HX_STACK_VAR(tlx,"tlx");
			HX_STACK_LINE(162)
			Float tmp22 = _rect->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(162)
			::phoenix::Texture tmp23 = g->state->texture;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(162)
			int tmp24 = tmp23->height_actual;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(162)
			Float tmp25 = (Float(tmp22) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(162)
			Float tly = tmp25;		HX_STACK_VAR(tly,"tly");
			HX_STACK_LINE(162)
			Float tmp26 = _rect->w;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(162)
			::phoenix::Texture tmp27 = g->state->texture;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(162)
			int tmp28 = tmp27->width_actual;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(162)
			Float tmp29 = (Float(tmp26) / Float(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(162)
			Float szx = tmp29;		HX_STACK_VAR(szx,"szx");
			HX_STACK_LINE(162)
			Float tmp30 = _rect->h;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(162)
			::phoenix::Texture tmp31 = g->state->texture;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(162)
			int tmp32 = tmp31->height_actual;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(162)
			Float tmp33 = (Float(tmp30) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(162)
			Float szy = tmp33;		HX_STACK_VAR(szy,"szy");
			HX_STACK_LINE(162)
			{
				HX_STACK_LINE(162)
				int tmp34 = g->vertices->length;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(162)
				bool tmp35 = (tmp34 == (int)0);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(162)
				if ((tmp35)){
					HX_STACK_LINE(162)
					Dynamic();
				}
				else{
					HX_STACK_LINE(162)
					Float sz_x = szx;		HX_STACK_VAR(sz_x,"sz_x");
					HX_STACK_LINE(162)
					Float sz_y = szy;		HX_STACK_VAR(sz_y,"sz_y");
					HX_STACK_LINE(162)
					Float tl_x = tlx;		HX_STACK_VAR(tl_x,"tl_x");
					HX_STACK_LINE(162)
					Float tl_y = tly;		HX_STACK_VAR(tl_y,"tl_y");
					HX_STACK_LINE(162)
					g->_uv_x = tl_x;
					HX_STACK_LINE(162)
					g->_uv_y = tl_y;
					HX_STACK_LINE(162)
					g->_uv_w = sz_x;
					HX_STACK_LINE(162)
					g->_uv_h = sz_y;
					HX_STACK_LINE(162)
					Float tmp36 = (tl_x + sz_x);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(162)
					Float tr_x = tmp36;		HX_STACK_VAR(tr_x,"tr_x");
					HX_STACK_LINE(162)
					Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
					HX_STACK_LINE(162)
					Float tmp37 = (tl_x + sz_x);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(162)
					Float br_x = tmp37;		HX_STACK_VAR(br_x,"br_x");
					HX_STACK_LINE(162)
					Float tmp38 = (tl_y + sz_y);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(162)
					Float br_y = tmp38;		HX_STACK_VAR(br_y,"br_y");
					HX_STACK_LINE(162)
					Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
					HX_STACK_LINE(162)
					Float tmp39 = (tl_y + sz_y);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(162)
					Float bl_y = tmp39;		HX_STACK_VAR(bl_y,"bl_y");
					HX_STACK_LINE(162)
					Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
					HX_STACK_LINE(162)
					Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
					HX_STACK_LINE(162)
					Float tmp40 = (Float(g->uv_angle) / Float((int)90));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(162)
					int tmp41 = ::Std_obj::_int(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(162)
					int rotations = tmp41;		HX_STACK_VAR(rotations,"rotations");
					HX_STACK_LINE(162)
					int tmp42 = rotations;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(162)
					Float tmp43 = (Float(rotations) / Float((int)4));		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(162)
					int tmp44 = ::Math_obj::floor(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(162)
					int tmp45 = ((int)4 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(162)
					int tmp46 = (tmp42 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(162)
					rotations = tmp46;
					HX_STACK_LINE(162)
					{
						HX_STACK_LINE(162)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(162)
						while((true)){
							HX_STACK_LINE(162)
							bool tmp47 = (_g < rotations);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(162)
							bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(162)
							if ((tmp48)){
								HX_STACK_LINE(162)
								break;
							}
							HX_STACK_LINE(162)
							int tmp49 = (_g)++;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(162)
							int r = tmp49;		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(162)
							{
								HX_STACK_LINE(162)
								tmp_x = tl_x;
								HX_STACK_LINE(162)
								tl_x = bl_x;
								HX_STACK_LINE(162)
								bl_x = br_x;
								HX_STACK_LINE(162)
								br_x = tr_x;
								HX_STACK_LINE(162)
								tr_x = tmp_x;
								HX_STACK_LINE(162)
								tmp_y = tl_y;
								HX_STACK_LINE(162)
								tl_y = bl_y;
								HX_STACK_LINE(162)
								bl_y = br_y;
								HX_STACK_LINE(162)
								br_y = tr_y;
								HX_STACK_LINE(162)
								tr_y = tmp_y;
							}
						}
					}
					HX_STACK_LINE(162)
					bool tmp47 = g->flipy;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(162)
					if ((tmp47)){
						HX_STACK_LINE(162)
						tmp_y = bl_y;
						HX_STACK_LINE(162)
						bl_y = tl_y;
						HX_STACK_LINE(162)
						tl_y = tmp_y;
						HX_STACK_LINE(162)
						tmp_x = bl_x;
						HX_STACK_LINE(162)
						bl_x = tl_x;
						HX_STACK_LINE(162)
						tl_x = tmp_x;
						HX_STACK_LINE(162)
						tmp_y = br_y;
						HX_STACK_LINE(162)
						br_y = tr_y;
						HX_STACK_LINE(162)
						tr_y = tmp_y;
						HX_STACK_LINE(162)
						tmp_x = br_x;
						HX_STACK_LINE(162)
						br_x = tr_x;
						HX_STACK_LINE(162)
						tr_x = tmp_x;
					}
					HX_STACK_LINE(162)
					bool tmp48 = g->flipx;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(162)
					if ((tmp48)){
						HX_STACK_LINE(162)
						tmp_x = tr_x;
						HX_STACK_LINE(162)
						tr_x = tl_x;
						HX_STACK_LINE(162)
						tl_x = tmp_x;
						HX_STACK_LINE(162)
						tmp_y = tr_y;
						HX_STACK_LINE(162)
						tr_y = tl_y;
						HX_STACK_LINE(162)
						tl_y = tmp_y;
						HX_STACK_LINE(162)
						tmp_x = br_x;
						HX_STACK_LINE(162)
						br_x = bl_x;
						HX_STACK_LINE(162)
						bl_x = tmp_x;
						HX_STACK_LINE(162)
						tmp_y = br_y;
						HX_STACK_LINE(162)
						br_y = bl_y;
						HX_STACK_LINE(162)
						bl_y = tmp_y;
					}
					HX_STACK_LINE(162)
					{
						HX_STACK_LINE(162)
						::phoenix::geometry::Vertex tmp49 = g->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(162)
						::phoenix::geometry::TextureCoord tmp50 = tmp49->uv->uv0;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(162)
						::phoenix::geometry::TextureCoord _this = tmp50;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(162)
						_this->u = tl_x;
						HX_STACK_LINE(162)
						_this->v = tl_y;
						HX_STACK_LINE(162)
						_this;
					}
					HX_STACK_LINE(162)
					{
						HX_STACK_LINE(162)
						::phoenix::geometry::Vertex tmp49 = g->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(162)
						::phoenix::geometry::TextureCoord tmp50 = tmp49->uv->uv0;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(162)
						::phoenix::geometry::TextureCoord _this = tmp50;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(162)
						_this->u = tr_x;
						HX_STACK_LINE(162)
						_this->v = tr_y;
						HX_STACK_LINE(162)
						_this;
					}
					HX_STACK_LINE(162)
					{
						HX_STACK_LINE(162)
						::phoenix::geometry::Vertex tmp49 = g->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(162)
						::phoenix::geometry::TextureCoord tmp50 = tmp49->uv->uv0;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(162)
						::phoenix::geometry::TextureCoord _this = tmp50;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(162)
						_this->u = br_x;
						HX_STACK_LINE(162)
						_this->v = br_y;
						HX_STACK_LINE(162)
						_this;
					}
					HX_STACK_LINE(162)
					{
						HX_STACK_LINE(162)
						::phoenix::geometry::Vertex tmp49 = g->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(162)
						::phoenix::geometry::TextureCoord tmp50 = tmp49->uv->uv0;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(162)
						::phoenix::geometry::TextureCoord _this = tmp50;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(162)
						_this->u = bl_x;
						HX_STACK_LINE(162)
						_this->v = bl_y;
						HX_STACK_LINE(162)
						_this;
					}
					HX_STACK_LINE(162)
					{
						HX_STACK_LINE(162)
						::phoenix::geometry::Vertex tmp49 = g->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(162)
						::phoenix::geometry::TextureCoord tmp50 = tmp49->uv->uv0;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(162)
						::phoenix::geometry::TextureCoord _this = tmp50;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(162)
						_this->u = tl_x;
						HX_STACK_LINE(162)
						_this->v = tl_y;
						HX_STACK_LINE(162)
						_this;
					}
					HX_STACK_LINE(162)
					{
						HX_STACK_LINE(162)
						::phoenix::geometry::Vertex tmp49 = g->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(162)
						::phoenix::geometry::TextureCoord tmp50 = tmp49->uv->uv0;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(162)
						::phoenix::geometry::TextureCoord _this = tmp50;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(162)
						_this->u = br_x;
						HX_STACK_LINE(162)
						_this->v = br_y;
						HX_STACK_LINE(162)
						_this;
					}
					HX_STACK_LINE(162)
					g->set_dirty(true);
				}
			}
		}
	}
return null();
}


::phoenix::geometry::Geometry IsometricVisual_obj::create_tile_for_layer( ::luxe::tilemaps::TileLayer layer,int x,int y){
	HX_STACK_FRAME("luxe.tilemaps.IsometricVisual","create_tile_for_layer",0xa6f6f803,"luxe.tilemaps.IsometricVisual.create_tile_for_layer","luxe/tilemaps/Isometric.hx",173,0x6f42617a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer,"layer")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(176)
	::luxe::tilemaps::Tilemap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(176)
	int tmp1 = tmp->tile_width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(176)
	Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(176)
	Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(176)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(176)
	Float _scaled_tilewidth = tmp4;		HX_STACK_VAR(_scaled_tilewidth,"_scaled_tilewidth");
	HX_STACK_LINE(177)
	::luxe::tilemaps::Tilemap tmp5 = this->map;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(177)
	int tmp6 = tmp5->tile_height;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(177)
	Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(177)
	Dynamic tmp8 = tmp7->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(177)
	Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(177)
	Float _scaled_tileheight = tmp9;		HX_STACK_VAR(_scaled_tileheight,"_scaled_tileheight");
	HX_STACK_LINE(179)
	::luxe::tilemaps::Tile tmp10 = layer->tiles->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::luxe::tilemaps::Tile >();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(179)
	::luxe::tilemaps::Tile tile = tmp10;		HX_STACK_VAR(tile,"tile");
	HX_STACK_LINE(182)
	bool tmp11 = (tile->id == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(182)
	if ((tmp11)){
		HX_STACK_LINE(183)
		return null();
	}
	HX_STACK_LINE(186)
	::luxe::tilemaps::Tilemap tmp12 = this->map;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(186)
	int tmp13 = tile->id;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(186)
	::luxe::tilemaps::Tileset tmp14 = tmp12->tileset_from_id(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(186)
	::luxe::tilemaps::Tileset tileset = tmp14;		HX_STACK_VAR(tileset,"tileset");
	HX_STACK_LINE(188)
	{
		HX_STACK_LINE(188)
		bool tmp15 = (tileset == null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(188)
		if ((tmp15)){
			HX_STACK_LINE(188)
			::String tmp16 = (HX_HCSTRING("Tilemap Iso cannot find tileset for tile id ","\xed","\x22","\x29","\x3f") + tile->id);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(230)
			::String tmp17 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(230)
			::String tmp18 = (tmp17 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(188)
			::String tmp19 = (HX_HCSTRING("tileset was null","\x4a","\x91","\xc2","\xec") + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(188)
			::luxe::DebugError tmp20 = ::luxe::DebugError_obj::null_assertion(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(188)
			HX_STACK_DO_THROW(tmp20);
		}
	}
	HX_STACK_LINE(191)
	int tmp15 = tileset->tile_width;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(191)
	Dynamic tmp16 = this->options;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(191)
	Dynamic tmp17 = tmp16->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(191)
	Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(191)
	Float _scaled_tileset_tilewidth = tmp18;		HX_STACK_VAR(_scaled_tileset_tilewidth,"_scaled_tileset_tilewidth");
	HX_STACK_LINE(192)
	int tmp19 = tileset->tile_height;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(192)
	Dynamic tmp20 = this->options;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(192)
	Dynamic tmp21 = tmp20->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(192)
	Float tmp22 = (tmp19 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(192)
	Float _scaled_tileset_tileheight = tmp22;		HX_STACK_VAR(_scaled_tileset_tileheight,"_scaled_tileset_tileheight");
	HX_STACK_LINE(195)
	Float tmp23 = (Float(_scaled_tilewidth) / Float((int)2));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(195)
	Float _half_world_tile_width = tmp23;		HX_STACK_VAR(_half_world_tile_width,"_half_world_tile_width");
	HX_STACK_LINE(196)
	Float tmp24 = (Float(_scaled_tileheight) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(196)
	Float _half_world_tile_height = tmp24;		HX_STACK_VAR(_half_world_tile_height,"_half_world_tile_height");
	HX_STACK_LINE(199)
	::luxe::Draw tmp25 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(201)
	::luxe::tilemaps::Tilemap tmp26 = this->map;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(201)
	Float tmp27 = tmp26->pos->x;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(201)
	int tmp28 = (x - y);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(201)
	Float tmp29 = _half_world_tile_width;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(201)
	Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(201)
	Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(201)
	Float tmp32 = _half_world_tile_width;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(201)
	Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(202)
	::luxe::tilemaps::Tilemap tmp34 = this->map;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(202)
	Float tmp35 = tmp34->pos->y;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(202)
	int tmp36 = (x + y);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(202)
	Float tmp37 = _half_world_tile_height;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(202)
	Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(202)
	Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(202)
	Float tmp40 = _half_world_tile_height;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(202)
	Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(204)
	Float tmp42 = _scaled_tileset_tilewidth;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(205)
	Float tmp43 = _scaled_tileset_tileheight;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(206)
	bool tmp44 = (tileset != null());		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(206)
	::phoenix::Texture tmp45;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(206)
	if ((tmp44)){
		HX_STACK_LINE(206)
		tmp45 = tileset->texture;
	}
	else{
		HX_STACK_LINE(206)
		tmp45 = null();
	}
	HX_STACK_LINE(207)
	bool tmp46 = layer->visible;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(208)
	::phoenix::Color tmp47 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,layer->opacity);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(209)
	Dynamic tmp48 = this->options;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(209)
	Dynamic tmp49 = tmp48->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(210)
	Dynamic tmp50 = this->options;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(210)
	::phoenix::Batcher tmp51 = tmp50->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp51,"tmp51");
	struct _Function_1_1{
		inline static Dynamic Block( Float &tmp33,bool &tmp46,Float &tmp42,::phoenix::Color &tmp47,Float &tmp41,::phoenix::Texture &tmp45,Dynamic &tmp49,Float &tmp43,::phoenix::Batcher &tmp51){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/tilemaps/Isometric.hx",199,0x6f42617a)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp33,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp41,false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp42,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp43,false);
				__result->Add(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e") , tmp45,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp46,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp47,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp49,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp51,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(199)
	Dynamic tmp52 = _Function_1_1::Block(tmp33,tmp46,tmp42,tmp47,tmp41,tmp45,tmp49,tmp43,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(199)
	::phoenix::geometry::QuadGeometry tmp53 = tmp25->box(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(199)
	::phoenix::geometry::QuadGeometry _tile_geom = tmp53;		HX_STACK_VAR(_tile_geom,"_tile_geom");
	HX_STACK_LINE(213)
	bool tmp54 = (tileset->texture != null());		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(213)
	if ((tmp54)){
		HX_STACK_LINE(215)
		int tmp55 = tile->id;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(215)
		::phoenix::Vector tmp56 = tileset->pos_in_texture(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(215)
		::phoenix::Vector image_coord = tmp56;		HX_STACK_VAR(image_coord,"image_coord");
		HX_STACK_LINE(217)
		{
			HX_STACK_LINE(219)
			int tmp57 = tileset->margin;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(219)
			Float tmp58 = (image_coord->x * tileset->tile_width);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(219)
			Float tmp59 = (image_coord->x * tileset->spacing);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(219)
			Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(219)
			Float tmp61 = (tmp57 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(220)
			int tmp62 = tileset->margin;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(220)
			Float tmp63 = (image_coord->y * tileset->tile_height);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(220)
			Float tmp64 = (image_coord->y * tileset->spacing);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(220)
			Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(220)
			Float tmp66 = (tmp62 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(221)
			int tmp67 = tileset->tile_width;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(222)
			int tmp68 = tileset->tile_height;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(218)
			::phoenix::Rectangle tmp69 = ::phoenix::Rectangle_obj::__new(tmp61,tmp66,tmp67,tmp68);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(218)
			::phoenix::Rectangle _rect = tmp69;		HX_STACK_VAR(_rect,"_rect");
			HX_STACK_LINE(217)
			{
				HX_STACK_LINE(217)
				::phoenix::Texture tmp70 = _tile_geom->state->texture;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(217)
				bool tmp71 = (tmp70 == null());		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(217)
				if ((tmp71)){
					HX_STACK_LINE(217)
					::String tmp72 = HX_HCSTRING(" ( QuadGeometry; Calling UV on a geometry with null texture.","\x4d","\xfb","\xd1","\xd3");		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(217)
					::String tmp73 = (tmp72 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(217)
					::String tmp74 = (HX_HCSTRING("texture was null","\xc3","\x9c","\xa8","\x99") + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(217)
					::luxe::DebugError tmp75 = ::luxe::DebugError_obj::null_assertion(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(217)
					HX_STACK_DO_THROW(tmp75);
				}
			}
			HX_STACK_LINE(217)
			Float tmp70 = _rect->x;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(217)
			::phoenix::Texture tmp71 = _tile_geom->state->texture;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(217)
			int tmp72 = tmp71->width_actual;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(217)
			Float tmp73 = (Float(tmp70) / Float(tmp72));		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(217)
			Float tlx = tmp73;		HX_STACK_VAR(tlx,"tlx");
			HX_STACK_LINE(217)
			Float tmp74 = _rect->y;		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(217)
			::phoenix::Texture tmp75 = _tile_geom->state->texture;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(217)
			int tmp76 = tmp75->height_actual;		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(217)
			Float tmp77 = (Float(tmp74) / Float(tmp76));		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(217)
			Float tly = tmp77;		HX_STACK_VAR(tly,"tly");
			HX_STACK_LINE(217)
			Float tmp78 = _rect->w;		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(217)
			::phoenix::Texture tmp79 = _tile_geom->state->texture;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(217)
			int tmp80 = tmp79->width_actual;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(217)
			Float tmp81 = (Float(tmp78) / Float(tmp80));		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(217)
			Float szx = tmp81;		HX_STACK_VAR(szx,"szx");
			HX_STACK_LINE(217)
			Float tmp82 = _rect->h;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(217)
			::phoenix::Texture tmp83 = _tile_geom->state->texture;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(217)
			int tmp84 = tmp83->height_actual;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(217)
			Float tmp85 = (Float(tmp82) / Float(tmp84));		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(217)
			Float szy = tmp85;		HX_STACK_VAR(szy,"szy");
			HX_STACK_LINE(217)
			{
				HX_STACK_LINE(217)
				int tmp86 = _tile_geom->vertices->length;		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(217)
				bool tmp87 = (tmp86 == (int)0);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(217)
				if ((tmp87)){
					HX_STACK_LINE(217)
					Dynamic();
				}
				else{
					HX_STACK_LINE(217)
					Float sz_x = szx;		HX_STACK_VAR(sz_x,"sz_x");
					HX_STACK_LINE(217)
					Float sz_y = szy;		HX_STACK_VAR(sz_y,"sz_y");
					HX_STACK_LINE(217)
					Float tl_x = tlx;		HX_STACK_VAR(tl_x,"tl_x");
					HX_STACK_LINE(217)
					Float tl_y = tly;		HX_STACK_VAR(tl_y,"tl_y");
					HX_STACK_LINE(217)
					_tile_geom->_uv_x = tl_x;
					HX_STACK_LINE(217)
					_tile_geom->_uv_y = tl_y;
					HX_STACK_LINE(217)
					_tile_geom->_uv_w = sz_x;
					HX_STACK_LINE(217)
					_tile_geom->_uv_h = sz_y;
					HX_STACK_LINE(217)
					Float tmp88 = (tl_x + sz_x);		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(217)
					Float tr_x = tmp88;		HX_STACK_VAR(tr_x,"tr_x");
					HX_STACK_LINE(217)
					Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
					HX_STACK_LINE(217)
					Float tmp89 = (tl_x + sz_x);		HX_STACK_VAR(tmp89,"tmp89");
					HX_STACK_LINE(217)
					Float br_x = tmp89;		HX_STACK_VAR(br_x,"br_x");
					HX_STACK_LINE(217)
					Float tmp90 = (tl_y + sz_y);		HX_STACK_VAR(tmp90,"tmp90");
					HX_STACK_LINE(217)
					Float br_y = tmp90;		HX_STACK_VAR(br_y,"br_y");
					HX_STACK_LINE(217)
					Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
					HX_STACK_LINE(217)
					Float tmp91 = (tl_y + sz_y);		HX_STACK_VAR(tmp91,"tmp91");
					HX_STACK_LINE(217)
					Float bl_y = tmp91;		HX_STACK_VAR(bl_y,"bl_y");
					HX_STACK_LINE(217)
					Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
					HX_STACK_LINE(217)
					Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
					HX_STACK_LINE(217)
					Float tmp92 = (Float(_tile_geom->uv_angle) / Float((int)90));		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(217)
					int tmp93 = ::Std_obj::_int(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(217)
					int rotations = tmp93;		HX_STACK_VAR(rotations,"rotations");
					HX_STACK_LINE(217)
					int tmp94 = rotations;		HX_STACK_VAR(tmp94,"tmp94");
					HX_STACK_LINE(217)
					Float tmp95 = (Float(rotations) / Float((int)4));		HX_STACK_VAR(tmp95,"tmp95");
					HX_STACK_LINE(217)
					int tmp96 = ::Math_obj::floor(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
					HX_STACK_LINE(217)
					int tmp97 = ((int)4 * tmp96);		HX_STACK_VAR(tmp97,"tmp97");
					HX_STACK_LINE(217)
					int tmp98 = (tmp94 - tmp97);		HX_STACK_VAR(tmp98,"tmp98");
					HX_STACK_LINE(217)
					rotations = tmp98;
					HX_STACK_LINE(217)
					{
						HX_STACK_LINE(217)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(217)
						while((true)){
							HX_STACK_LINE(217)
							bool tmp99 = (_g < rotations);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(217)
							bool tmp100 = !(tmp99);		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(217)
							if ((tmp100)){
								HX_STACK_LINE(217)
								break;
							}
							HX_STACK_LINE(217)
							int tmp101 = (_g)++;		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(217)
							int r = tmp101;		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(217)
							{
								HX_STACK_LINE(217)
								tmp_x = tl_x;
								HX_STACK_LINE(217)
								tl_x = bl_x;
								HX_STACK_LINE(217)
								bl_x = br_x;
								HX_STACK_LINE(217)
								br_x = tr_x;
								HX_STACK_LINE(217)
								tr_x = tmp_x;
								HX_STACK_LINE(217)
								tmp_y = tl_y;
								HX_STACK_LINE(217)
								tl_y = bl_y;
								HX_STACK_LINE(217)
								bl_y = br_y;
								HX_STACK_LINE(217)
								br_y = tr_y;
								HX_STACK_LINE(217)
								tr_y = tmp_y;
							}
						}
					}
					HX_STACK_LINE(217)
					bool tmp99 = _tile_geom->flipy;		HX_STACK_VAR(tmp99,"tmp99");
					HX_STACK_LINE(217)
					if ((tmp99)){
						HX_STACK_LINE(217)
						tmp_y = bl_y;
						HX_STACK_LINE(217)
						bl_y = tl_y;
						HX_STACK_LINE(217)
						tl_y = tmp_y;
						HX_STACK_LINE(217)
						tmp_x = bl_x;
						HX_STACK_LINE(217)
						bl_x = tl_x;
						HX_STACK_LINE(217)
						tl_x = tmp_x;
						HX_STACK_LINE(217)
						tmp_y = br_y;
						HX_STACK_LINE(217)
						br_y = tr_y;
						HX_STACK_LINE(217)
						tr_y = tmp_y;
						HX_STACK_LINE(217)
						tmp_x = br_x;
						HX_STACK_LINE(217)
						br_x = tr_x;
						HX_STACK_LINE(217)
						tr_x = tmp_x;
					}
					HX_STACK_LINE(217)
					bool tmp100 = _tile_geom->flipx;		HX_STACK_VAR(tmp100,"tmp100");
					HX_STACK_LINE(217)
					if ((tmp100)){
						HX_STACK_LINE(217)
						tmp_x = tr_x;
						HX_STACK_LINE(217)
						tr_x = tl_x;
						HX_STACK_LINE(217)
						tl_x = tmp_x;
						HX_STACK_LINE(217)
						tmp_y = tr_y;
						HX_STACK_LINE(217)
						tr_y = tl_y;
						HX_STACK_LINE(217)
						tl_y = tmp_y;
						HX_STACK_LINE(217)
						tmp_x = br_x;
						HX_STACK_LINE(217)
						br_x = bl_x;
						HX_STACK_LINE(217)
						bl_x = tmp_x;
						HX_STACK_LINE(217)
						tmp_y = br_y;
						HX_STACK_LINE(217)
						br_y = bl_y;
						HX_STACK_LINE(217)
						bl_y = tmp_y;
					}
					HX_STACK_LINE(217)
					{
						HX_STACK_LINE(217)
						::phoenix::geometry::Vertex tmp101 = _tile_geom->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(217)
						::phoenix::geometry::TextureCoord tmp102 = tmp101->uv->uv0;		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(217)
						::phoenix::geometry::TextureCoord _this = tmp102;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(217)
						_this->u = tl_x;
						HX_STACK_LINE(217)
						_this->v = tl_y;
						HX_STACK_LINE(217)
						_this;
					}
					HX_STACK_LINE(217)
					{
						HX_STACK_LINE(217)
						::phoenix::geometry::Vertex tmp101 = _tile_geom->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(217)
						::phoenix::geometry::TextureCoord tmp102 = tmp101->uv->uv0;		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(217)
						::phoenix::geometry::TextureCoord _this = tmp102;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(217)
						_this->u = tr_x;
						HX_STACK_LINE(217)
						_this->v = tr_y;
						HX_STACK_LINE(217)
						_this;
					}
					HX_STACK_LINE(217)
					{
						HX_STACK_LINE(217)
						::phoenix::geometry::Vertex tmp101 = _tile_geom->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(217)
						::phoenix::geometry::TextureCoord tmp102 = tmp101->uv->uv0;		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(217)
						::phoenix::geometry::TextureCoord _this = tmp102;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(217)
						_this->u = br_x;
						HX_STACK_LINE(217)
						_this->v = br_y;
						HX_STACK_LINE(217)
						_this;
					}
					HX_STACK_LINE(217)
					{
						HX_STACK_LINE(217)
						::phoenix::geometry::Vertex tmp101 = _tile_geom->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(217)
						::phoenix::geometry::TextureCoord tmp102 = tmp101->uv->uv0;		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(217)
						::phoenix::geometry::TextureCoord _this = tmp102;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(217)
						_this->u = bl_x;
						HX_STACK_LINE(217)
						_this->v = bl_y;
						HX_STACK_LINE(217)
						_this;
					}
					HX_STACK_LINE(217)
					{
						HX_STACK_LINE(217)
						::phoenix::geometry::Vertex tmp101 = _tile_geom->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(217)
						::phoenix::geometry::TextureCoord tmp102 = tmp101->uv->uv0;		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(217)
						::phoenix::geometry::TextureCoord _this = tmp102;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(217)
						_this->u = tl_x;
						HX_STACK_LINE(217)
						_this->v = tl_y;
						HX_STACK_LINE(217)
						_this;
					}
					HX_STACK_LINE(217)
					{
						HX_STACK_LINE(217)
						::phoenix::geometry::Vertex tmp101 = _tile_geom->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(217)
						::phoenix::geometry::TextureCoord tmp102 = tmp101->uv->uv0;		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(217)
						::phoenix::geometry::TextureCoord _this = tmp102;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(217)
						_this->u = br_x;
						HX_STACK_LINE(217)
						_this->v = br_y;
						HX_STACK_LINE(217)
						_this;
					}
					HX_STACK_LINE(217)
					_tile_geom->set_dirty(true);
				}
			}
		}
		HX_STACK_LINE(226)
		Dynamic tmp57 = this->options;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(226)
		Dynamic tmp58 = tmp57->__Field(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"), hx::paccDynamic );		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(226)
		int tmp59 = tileset->texture->set_filter_mag(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(226)
		tileset->texture->set_filter_min(tmp59);
	}
	HX_STACK_LINE(230)
	::phoenix::geometry::QuadGeometry tmp55 = _tile_geom;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(230)
	return tmp55;
}



IsometricVisual_obj::IsometricVisual_obj()
{
}

Dynamic IsometricVisual_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(IsometricVisual_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IsometricVisual_obj::__mClass,"__mClass");
};

#endif

hx::Class IsometricVisual_obj::__mClass;

void IsometricVisual_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tilemaps.IsometricVisual","\x84","\xf1","\xd4","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IsometricVisual_obj >;
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
