#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
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
#ifndef INCLUDED_luxe_tilemaps_Ortho
#include <luxe/tilemaps/Ortho.h>
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
#ifndef INCLUDED_luxe_tilemaps_TileOffset
#include <luxe/tilemaps/TileOffset.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_Tilemap
#include <luxe/tilemaps/Tilemap.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_TilemapOrientation
#include <luxe/tilemaps/TilemapOrientation.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_TilemapVisual
#include <luxe/tilemaps/TilemapVisual.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_Tileset
#include <luxe/tilemaps/Tileset.h>
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
namespace luxe{
namespace tilemaps{

Void Tilemap_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("luxe.tilemaps.Tilemap","new",0xc65f264f,"luxe.tilemaps.Tilemap.new","luxe/tilemaps/Tilemap.hx",453,0x1cf567e1)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(484)
	this->total_height = (int)0;
	HX_STACK_LINE(482)
	this->total_width = (int)0;
	HX_STACK_LINE(479)
	this->height = (int)0;
	HX_STACK_LINE(477)
	this->width = (int)0;
	HX_STACK_LINE(475)
	this->tile_height = (int)0;
	HX_STACK_LINE(473)
	this->tile_width = (int)0;
	HX_STACK_LINE(490)
	this->width = options->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );
	HX_STACK_LINE(491)
	this->height = options->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );
	HX_STACK_LINE(492)
	this->tile_width = options->__Field(HX_HCSTRING("tile_width","\xf5","\x5e","\x4c","\xf6"), hx::paccDynamic );
	HX_STACK_LINE(493)
	this->tile_height = options->__Field(HX_HCSTRING("tile_height","\x18","\x30","\xd6","\x42"), hx::paccDynamic );
	HX_STACK_LINE(495)
	bool tmp = (options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(495)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(495)
	if ((tmp)){
		HX_STACK_LINE(495)
		tmp1 = (options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ) != null());
	}
	else{
		HX_STACK_LINE(495)
		tmp1 = false;
	}
	HX_STACK_LINE(495)
	if ((tmp1)){
		HX_STACK_LINE(496)
		::phoenix::Vector tmp2 = ::phoenix::Vector_obj::__new(options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(496)
		this->pos = tmp2;
	}
	else{
		HX_STACK_LINE(498)
		::phoenix::Vector tmp2 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(498)
		this->pos = tmp2;
		HX_STACK_LINE(499)
		bool tmp3 = (options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(499)
		if ((tmp3)){
			HX_STACK_LINE(499)
			::phoenix::Vector tmp4 = this->pos;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(499)
			::phoenix::Vector _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(499)
			Float _x = options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(499)
			_this->x = _x;
			HX_STACK_LINE(499)
			bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(499)
			if ((tmp5)){
				HX_STACK_LINE(499)
				_this->x;
			}
			else{
				HX_STACK_LINE(499)
				bool tmp6 = (_this->listen_x != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(499)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(499)
				if ((tmp6)){
					HX_STACK_LINE(499)
					bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(499)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(499)
					tmp7 = !(tmp9);
				}
				else{
					HX_STACK_LINE(499)
					tmp7 = false;
				}
				HX_STACK_LINE(499)
				if ((tmp7)){
					HX_STACK_LINE(499)
					Float tmp8 = _x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(499)
					_this->listen_x(tmp8);
				}
				HX_STACK_LINE(499)
				_this->x;
			}
		}
		HX_STACK_LINE(500)
		bool tmp4 = (options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(500)
		if ((tmp4)){
			HX_STACK_LINE(500)
			::phoenix::Vector tmp5 = this->pos;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(500)
			::phoenix::Vector _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(500)
			Float _y = options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(500)
			_this->y = _y;
			HX_STACK_LINE(500)
			bool tmp6 = _this->_construct;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(500)
			if ((tmp6)){
				HX_STACK_LINE(500)
				_this->y;
			}
			else{
				HX_STACK_LINE(500)
				bool tmp7 = (_this->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(500)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(500)
				if ((tmp7)){
					HX_STACK_LINE(500)
					bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(500)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(500)
					tmp8 = !(tmp10);
				}
				else{
					HX_STACK_LINE(500)
					tmp8 = false;
				}
				HX_STACK_LINE(500)
				if ((tmp8)){
					HX_STACK_LINE(500)
					Float tmp9 = _y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(500)
					_this->listen_y(tmp9);
				}
				HX_STACK_LINE(500)
				_this->y;
			}
		}
	}
	HX_STACK_LINE(503)
	bool tmp2 = (options->__Field(HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(503)
	::luxe::tilemaps::TilemapOrientation tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(503)
	if ((tmp2)){
		HX_STACK_LINE(503)
		tmp3 = ::luxe::tilemaps::TilemapOrientation_obj::none;
	}
	else{
		HX_STACK_LINE(503)
		tmp3 = options->__Field(HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"), hx::paccDynamic );
	}
	HX_STACK_LINE(503)
	this->orientation = tmp3;
	HX_STACK_LINE(505)
	::haxe::ds::StringMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(505)
	{
		HX_STACK_LINE(505)
		::haxe::ds::StringMap tmp5 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(505)
		::haxe::ds::StringMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(505)
		tmp4 = tmp6;
	}
	HX_STACK_LINE(505)
	this->properties = tmp4;
	HX_STACK_LINE(506)
	::haxe::ds::StringMap tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(506)
	{
		HX_STACK_LINE(506)
		::haxe::ds::StringMap tmp6 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(506)
		::haxe::ds::StringMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(506)
		tmp5 = tmp7;
	}
	HX_STACK_LINE(506)
	this->tilesets = tmp5;
	HX_STACK_LINE(507)
	::haxe::ds::StringMap tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(507)
	{
		HX_STACK_LINE(507)
		::haxe::ds::StringMap tmp7 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(507)
		::haxe::ds::StringMap tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(507)
		tmp6 = tmp8;
	}
	HX_STACK_LINE(507)
	this->layers = tmp6;
	HX_STACK_LINE(508)
	this->layers_ordered = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//Tilemap_obj::~Tilemap_obj() { }

Dynamic Tilemap_obj::__CreateEmpty() { return  new Tilemap_obj; }
hx::ObjectPtr< Tilemap_obj > Tilemap_obj::__new(Dynamic options)
{  hx::ObjectPtr< Tilemap_obj > _result_ = new Tilemap_obj();
	_result_->__construct(options);
	return _result_;}

Dynamic Tilemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tilemap_obj > _result_ = new Tilemap_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Tilemap_obj::display( Dynamic options){
{
		HX_STACK_FRAME("luxe.tilemaps.Tilemap","display",0x8ee8a3b1,"luxe.tilemaps.Tilemap.display","luxe/tilemaps/Tilemap.hx",514,0x1cf567e1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(options,"options")
		HX_STACK_LINE(514)
		::luxe::tilemaps::TilemapOrientation tmp = this->orientation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(514)
		::luxe::tilemaps::TilemapOrientation _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(514)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(516)
				::luxe::tilemaps::OrthoVisual tmp1 = ::luxe::tilemaps::OrthoVisual_obj::__new(hx::ObjectPtr<OBJ_>(this),options);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(516)
				this->visual = tmp1;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(518)
				::luxe::tilemaps::IsometricVisual tmp1 = ::luxe::tilemaps::IsometricVisual_obj::__new(hx::ObjectPtr<OBJ_>(this),options);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(518)
				this->visual = tmp1;
			}
			;break;
			case (int)2: {
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,display,(void))

bool Tilemap_obj::inside( int x,int y){
	HX_STACK_FRAME("luxe.tilemaps.Tilemap","inside",0xbdd2096d,"luxe.tilemaps.Tilemap.inside","luxe/tilemaps/Tilemap.hx",525,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(527)
	int tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(527)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(527)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(527)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(527)
	if ((tmp2)){
		HX_STACK_LINE(527)
		int tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(527)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(527)
		tmp3 = (tmp5 == (int)0);
	}
	else{
		HX_STACK_LINE(527)
		tmp3 = true;
	}
	HX_STACK_LINE(527)
	if ((tmp3)){
		HX_STACK_LINE(528)
		return false;
	}
	HX_STACK_LINE(531)
	bool tmp4 = (x < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(531)
	if ((tmp4)){
		HX_STACK_LINE(532)
		return false;
	}
	HX_STACK_LINE(535)
	bool tmp5 = (y < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(535)
	if ((tmp5)){
		HX_STACK_LINE(536)
		return false;
	}
	HX_STACK_LINE(539)
	int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(539)
	int tmp7 = this->height;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(539)
	int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(539)
	bool tmp9 = (tmp6 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(539)
	if ((tmp9)){
		HX_STACK_LINE(540)
		return false;
	}
	HX_STACK_LINE(543)
	int tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(543)
	int tmp11 = this->width;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(543)
	int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(543)
	bool tmp13 = (tmp10 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(543)
	if ((tmp13)){
		HX_STACK_LINE(544)
		return false;
	}
	HX_STACK_LINE(547)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,inside,return )

::phoenix::Vector Tilemap_obj::tile_pos( int x,int y,Dynamic __o_scale,::luxe::tilemaps::TileOffset offset_x,::luxe::tilemaps::TileOffset offset_y){
Dynamic scale = __o_scale.Default(((Float)1.0));
	HX_STACK_FRAME("luxe.tilemaps.Tilemap","tile_pos",0xe5596474,"luxe.tilemaps.Tilemap.tile_pos","luxe/tilemaps/Tilemap.hx",552,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(scale,"scale")
	HX_STACK_ARG(offset_x,"offset_x")
	HX_STACK_ARG(offset_y,"offset_y")
{
		HX_STACK_LINE(554)
		int tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(554)
		int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(554)
		bool tmp2 = this->inside(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(554)
		if ((tmp2)){
			HX_STACK_LINE(556)
			::luxe::tilemaps::TilemapOrientation tmp3 = this->orientation;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(556)
			::luxe::tilemaps::TilemapOrientation _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(556)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(559)
					int tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(559)
					int tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(559)
					int tmp6 = this->tile_width;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(559)
					int tmp7 = this->tile_height;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(559)
					Dynamic tmp8 = scale;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(559)
					::luxe::tilemaps::TileOffset tmp9 = offset_x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(559)
					::luxe::tilemaps::TileOffset tmp10 = offset_y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(559)
					::phoenix::Vector tmp11 = ::luxe::tilemaps::Ortho_obj::tile_coord_to_worldpos(tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(559)
					::phoenix::Vector _worldpos = tmp11;		HX_STACK_VAR(_worldpos,"_worldpos");
					HX_STACK_LINE(560)
					::phoenix::Vector tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(560)
					{
						HX_STACK_LINE(560)
						::phoenix::Vector tmp13 = this->pos;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(560)
						::phoenix::Vector other = tmp13;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(560)
						{
							HX_STACK_LINE(560)
							bool tmp14 = (other == null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(560)
							if ((tmp14)){
								HX_STACK_LINE(560)
								::String tmp15 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(560)
								::luxe::DebugError tmp16 = ::luxe::DebugError_obj::null_assertion(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(560)
								HX_STACK_DO_THROW(tmp16);
							}
						}
						HX_STACK_LINE(560)
						{
							HX_STACK_LINE(560)
							Float tmp14 = (_worldpos->x + other->x);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(560)
							Float _x = tmp14;		HX_STACK_VAR(_x,"_x");
							HX_STACK_LINE(560)
							Float tmp15 = (_worldpos->y + other->y);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(560)
							Float _y = tmp15;		HX_STACK_VAR(_y,"_y");
							HX_STACK_LINE(560)
							Float tmp16 = (_worldpos->z + other->z);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(560)
							Float _z = tmp16;		HX_STACK_VAR(_z,"_z");
							HX_STACK_LINE(560)
							bool prev = _worldpos->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(560)
							_worldpos->ignore_listeners = true;
							HX_STACK_LINE(560)
							{
								HX_STACK_LINE(560)
								_worldpos->x = _x;
								HX_STACK_LINE(560)
								bool tmp17 = _worldpos->_construct;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(560)
								if ((tmp17)){
									HX_STACK_LINE(560)
									_worldpos->x;
								}
								else{
									HX_STACK_LINE(560)
									bool tmp18 = (_worldpos->listen_x != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(560)
									bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(560)
									if ((tmp18)){
										HX_STACK_LINE(560)
										bool tmp20 = _worldpos->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(560)
										bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(560)
										tmp19 = !(tmp21);
									}
									else{
										HX_STACK_LINE(560)
										tmp19 = false;
									}
									HX_STACK_LINE(560)
									if ((tmp19)){
										HX_STACK_LINE(560)
										Float tmp20 = _x;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(560)
										_worldpos->listen_x(tmp20);
									}
									HX_STACK_LINE(560)
									_worldpos->x;
								}
							}
							HX_STACK_LINE(560)
							{
								HX_STACK_LINE(560)
								_worldpos->y = _y;
								HX_STACK_LINE(560)
								bool tmp17 = _worldpos->_construct;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(560)
								if ((tmp17)){
									HX_STACK_LINE(560)
									_worldpos->y;
								}
								else{
									HX_STACK_LINE(560)
									bool tmp18 = (_worldpos->listen_y != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(560)
									bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(560)
									if ((tmp18)){
										HX_STACK_LINE(560)
										bool tmp20 = _worldpos->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(560)
										bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(560)
										tmp19 = !(tmp21);
									}
									else{
										HX_STACK_LINE(560)
										tmp19 = false;
									}
									HX_STACK_LINE(560)
									if ((tmp19)){
										HX_STACK_LINE(560)
										Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(560)
										_worldpos->listen_y(tmp20);
									}
									HX_STACK_LINE(560)
									_worldpos->y;
								}
							}
							HX_STACK_LINE(560)
							{
								HX_STACK_LINE(560)
								_worldpos->z = _z;
								HX_STACK_LINE(560)
								bool tmp17 = _worldpos->_construct;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(560)
								if ((tmp17)){
									HX_STACK_LINE(560)
									_worldpos->z;
								}
								else{
									HX_STACK_LINE(560)
									bool tmp18 = (_worldpos->listen_z != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(560)
									bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(560)
									if ((tmp18)){
										HX_STACK_LINE(560)
										bool tmp20 = _worldpos->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(560)
										bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(560)
										tmp19 = !(tmp21);
									}
									else{
										HX_STACK_LINE(560)
										tmp19 = false;
									}
									HX_STACK_LINE(560)
									if ((tmp19)){
										HX_STACK_LINE(560)
										Float tmp20 = _z;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(560)
										_worldpos->listen_z(tmp20);
									}
									HX_STACK_LINE(560)
									_worldpos->z;
								}
							}
							HX_STACK_LINE(560)
							_worldpos->ignore_listeners = prev;
							HX_STACK_LINE(560)
							bool tmp17 = (_worldpos->listen_x != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(560)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(560)
							if ((tmp17)){
								HX_STACK_LINE(560)
								bool tmp19 = _worldpos->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(560)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(560)
								tmp18 = !(tmp20);
							}
							else{
								HX_STACK_LINE(560)
								tmp18 = false;
							}
							HX_STACK_LINE(560)
							if ((tmp18)){
								HX_STACK_LINE(560)
								Float tmp19 = _worldpos->x;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(560)
								_worldpos->listen_x(tmp19);
							}
							HX_STACK_LINE(560)
							bool tmp19 = (_worldpos->listen_y != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(560)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(560)
							if ((tmp19)){
								HX_STACK_LINE(560)
								bool tmp21 = _worldpos->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(560)
								bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(560)
								tmp20 = !(tmp22);
							}
							else{
								HX_STACK_LINE(560)
								tmp20 = false;
							}
							HX_STACK_LINE(560)
							if ((tmp20)){
								HX_STACK_LINE(560)
								Float tmp21 = _worldpos->y;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(560)
								_worldpos->listen_y(tmp21);
							}
							HX_STACK_LINE(560)
							bool tmp21 = (_worldpos->listen_z != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(560)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(560)
							if ((tmp21)){
								HX_STACK_LINE(560)
								bool tmp23 = _worldpos->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(560)
								bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(560)
								tmp22 = !(tmp24);
							}
							else{
								HX_STACK_LINE(560)
								tmp22 = false;
							}
							HX_STACK_LINE(560)
							if ((tmp22)){
								HX_STACK_LINE(560)
								Float tmp23 = _worldpos->z;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(560)
								_worldpos->listen_z(tmp23);
							}
							HX_STACK_LINE(560)
							_worldpos;
						}
						HX_STACK_LINE(560)
						tmp12 = _worldpos;
					}
					HX_STACK_LINE(560)
					return tmp12;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(564)
					int tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(564)
					int tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(564)
					int tmp6 = this->tile_width;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(564)
					int tmp7 = this->tile_height;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(564)
					Dynamic tmp8 = scale;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(564)
					::luxe::tilemaps::TileOffset tmp9 = offset_x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(564)
					::luxe::tilemaps::TileOffset tmp10 = offset_y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(564)
					::phoenix::Vector tmp11 = ::luxe::tilemaps::Isometric_obj::tile_coord_to_worldpos(tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(564)
					::phoenix::Vector _worldpos = tmp11;		HX_STACK_VAR(_worldpos,"_worldpos");
					HX_STACK_LINE(565)
					::phoenix::Vector tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(565)
					{
						HX_STACK_LINE(565)
						::phoenix::Vector tmp13 = this->pos;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(565)
						::phoenix::Vector other = tmp13;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(565)
						{
							HX_STACK_LINE(565)
							bool tmp14 = (other == null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(565)
							if ((tmp14)){
								HX_STACK_LINE(565)
								::String tmp15 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(565)
								::luxe::DebugError tmp16 = ::luxe::DebugError_obj::null_assertion(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(565)
								HX_STACK_DO_THROW(tmp16);
							}
						}
						HX_STACK_LINE(565)
						{
							HX_STACK_LINE(565)
							Float tmp14 = (_worldpos->x + other->x);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(565)
							Float _x = tmp14;		HX_STACK_VAR(_x,"_x");
							HX_STACK_LINE(565)
							Float tmp15 = (_worldpos->y + other->y);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(565)
							Float _y = tmp15;		HX_STACK_VAR(_y,"_y");
							HX_STACK_LINE(565)
							Float tmp16 = (_worldpos->z + other->z);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(565)
							Float _z = tmp16;		HX_STACK_VAR(_z,"_z");
							HX_STACK_LINE(565)
							bool prev = _worldpos->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(565)
							_worldpos->ignore_listeners = true;
							HX_STACK_LINE(565)
							{
								HX_STACK_LINE(565)
								_worldpos->x = _x;
								HX_STACK_LINE(565)
								bool tmp17 = _worldpos->_construct;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(565)
								if ((tmp17)){
									HX_STACK_LINE(565)
									_worldpos->x;
								}
								else{
									HX_STACK_LINE(565)
									bool tmp18 = (_worldpos->listen_x != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(565)
									bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(565)
									if ((tmp18)){
										HX_STACK_LINE(565)
										bool tmp20 = _worldpos->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(565)
										bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(565)
										tmp19 = !(tmp21);
									}
									else{
										HX_STACK_LINE(565)
										tmp19 = false;
									}
									HX_STACK_LINE(565)
									if ((tmp19)){
										HX_STACK_LINE(565)
										Float tmp20 = _x;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(565)
										_worldpos->listen_x(tmp20);
									}
									HX_STACK_LINE(565)
									_worldpos->x;
								}
							}
							HX_STACK_LINE(565)
							{
								HX_STACK_LINE(565)
								_worldpos->y = _y;
								HX_STACK_LINE(565)
								bool tmp17 = _worldpos->_construct;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(565)
								if ((tmp17)){
									HX_STACK_LINE(565)
									_worldpos->y;
								}
								else{
									HX_STACK_LINE(565)
									bool tmp18 = (_worldpos->listen_y != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(565)
									bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(565)
									if ((tmp18)){
										HX_STACK_LINE(565)
										bool tmp20 = _worldpos->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(565)
										bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(565)
										tmp19 = !(tmp21);
									}
									else{
										HX_STACK_LINE(565)
										tmp19 = false;
									}
									HX_STACK_LINE(565)
									if ((tmp19)){
										HX_STACK_LINE(565)
										Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(565)
										_worldpos->listen_y(tmp20);
									}
									HX_STACK_LINE(565)
									_worldpos->y;
								}
							}
							HX_STACK_LINE(565)
							{
								HX_STACK_LINE(565)
								_worldpos->z = _z;
								HX_STACK_LINE(565)
								bool tmp17 = _worldpos->_construct;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(565)
								if ((tmp17)){
									HX_STACK_LINE(565)
									_worldpos->z;
								}
								else{
									HX_STACK_LINE(565)
									bool tmp18 = (_worldpos->listen_z != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(565)
									bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(565)
									if ((tmp18)){
										HX_STACK_LINE(565)
										bool tmp20 = _worldpos->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(565)
										bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(565)
										tmp19 = !(tmp21);
									}
									else{
										HX_STACK_LINE(565)
										tmp19 = false;
									}
									HX_STACK_LINE(565)
									if ((tmp19)){
										HX_STACK_LINE(565)
										Float tmp20 = _z;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(565)
										_worldpos->listen_z(tmp20);
									}
									HX_STACK_LINE(565)
									_worldpos->z;
								}
							}
							HX_STACK_LINE(565)
							_worldpos->ignore_listeners = prev;
							HX_STACK_LINE(565)
							bool tmp17 = (_worldpos->listen_x != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(565)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(565)
							if ((tmp17)){
								HX_STACK_LINE(565)
								bool tmp19 = _worldpos->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(565)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(565)
								tmp18 = !(tmp20);
							}
							else{
								HX_STACK_LINE(565)
								tmp18 = false;
							}
							HX_STACK_LINE(565)
							if ((tmp18)){
								HX_STACK_LINE(565)
								Float tmp19 = _worldpos->x;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(565)
								_worldpos->listen_x(tmp19);
							}
							HX_STACK_LINE(565)
							bool tmp19 = (_worldpos->listen_y != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(565)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(565)
							if ((tmp19)){
								HX_STACK_LINE(565)
								bool tmp21 = _worldpos->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(565)
								bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(565)
								tmp20 = !(tmp22);
							}
							else{
								HX_STACK_LINE(565)
								tmp20 = false;
							}
							HX_STACK_LINE(565)
							if ((tmp20)){
								HX_STACK_LINE(565)
								Float tmp21 = _worldpos->y;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(565)
								_worldpos->listen_y(tmp21);
							}
							HX_STACK_LINE(565)
							bool tmp21 = (_worldpos->listen_z != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(565)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(565)
							if ((tmp21)){
								HX_STACK_LINE(565)
								bool tmp23 = _worldpos->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(565)
								bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(565)
								tmp22 = !(tmp24);
							}
							else{
								HX_STACK_LINE(565)
								tmp22 = false;
							}
							HX_STACK_LINE(565)
							if ((tmp22)){
								HX_STACK_LINE(565)
								Float tmp23 = _worldpos->z;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(565)
								_worldpos->listen_z(tmp23);
							}
							HX_STACK_LINE(565)
							_worldpos;
						}
						HX_STACK_LINE(565)
						tmp12 = _worldpos;
					}
					HX_STACK_LINE(565)
					return tmp12;
				}
				;break;
				default: {
				}
			}
		}
		HX_STACK_LINE(576)
		::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(576)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Tilemap_obj,tile_pos,return )

::phoenix::Vector Tilemap_obj::tile_coord( Float _world_pos_x,Float _world_pos_y,Dynamic __o__scale,Dynamic __o__rounded){
Dynamic _scale = __o__scale.Default(((Float)1.0));
Dynamic _rounded = __o__rounded.Default(true);
	HX_STACK_FRAME("luxe.tilemaps.Tilemap","tile_coord",0x7d9a3995,"luxe.tilemaps.Tilemap.tile_coord","luxe/tilemaps/Tilemap.hx",581,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_world_pos_x,"_world_pos_x")
	HX_STACK_ARG(_world_pos_y,"_world_pos_y")
	HX_STACK_ARG(_scale,"_scale")
	HX_STACK_ARG(_rounded,"_rounded")
{
		HX_STACK_LINE(583)
		::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(583)
		{
			HX_STACK_LINE(583)
			::luxe::tilemaps::TilemapOrientation tmp1 = this->orientation;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(583)
			::luxe::tilemaps::TilemapOrientation _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(583)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(586)
					Float tmp2 = _world_pos_x;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(586)
					::phoenix::Vector tmp3 = this->pos;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(586)
					Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(586)
					Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(586)
					Float tmp6 = _world_pos_y;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(586)
					::phoenix::Vector tmp7 = this->pos;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(586)
					Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(586)
					Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(586)
					int tmp10 = this->tile_width;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(586)
					int tmp11 = this->tile_height;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(586)
					Dynamic tmp12 = _scale;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(586)
					Dynamic tmp13 = _rounded;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(586)
					tmp = ::luxe::tilemaps::Ortho_obj::worldpos_to_tile_coord(tmp5,tmp9,tmp10,tmp11,tmp12,tmp13);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(590)
					Float tmp2 = _world_pos_x;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(590)
					::phoenix::Vector tmp3 = this->pos;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(590)
					Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(590)
					Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(590)
					Float tmp6 = _world_pos_y;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(590)
					::phoenix::Vector tmp7 = this->pos;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(590)
					Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(590)
					Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(590)
					int tmp10 = this->tile_width;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(590)
					int tmp11 = this->tile_height;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(590)
					Dynamic tmp12 = _scale;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(590)
					Dynamic tmp13 = _rounded;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(590)
					tmp = ::luxe::tilemaps::Isometric_obj::worldpos_to_tile_coord(tmp5,tmp9,tmp10,tmp11,tmp12,tmp13);
				}
				;break;
				default: {
					HX_STACK_LINE(593)
					tmp = null();
				}
			}
		}
		HX_STACK_LINE(583)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Tilemap_obj,tile_coord,return )

::luxe::tilemaps::Tile Tilemap_obj::tile_at_pos( ::String layer_name,Float _world_pos_x,Float _world_pos_y,Dynamic __o__scale){
Dynamic _scale = __o__scale.Default(((Float)1.0));
	HX_STACK_FRAME("luxe.tilemaps.Tilemap","tile_at_pos",0x730d7228,"luxe.tilemaps.Tilemap.tile_at_pos","luxe/tilemaps/Tilemap.hx",601,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer_name,"layer_name")
	HX_STACK_ARG(_world_pos_x,"_world_pos_x")
	HX_STACK_ARG(_world_pos_y,"_world_pos_y")
	HX_STACK_ARG(_scale,"_scale")
{
		HX_STACK_LINE(603)
		::luxe::tilemaps::Tile tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(603)
		{
			HX_STACK_LINE(603)
			::luxe::tilemaps::TilemapOrientation tmp1 = this->orientation;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(603)
			::luxe::tilemaps::TilemapOrientation _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(603)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(607)
					Float tmp2 = _world_pos_x;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(607)
					::phoenix::Vector tmp3 = this->pos;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(607)
					Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(607)
					Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(607)
					Float tmp6 = _world_pos_y;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(607)
					::phoenix::Vector tmp7 = this->pos;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(607)
					Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(607)
					Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(607)
					int tmp10 = this->tile_width;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(607)
					int tmp11 = this->tile_height;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(607)
					Dynamic tmp12 = _scale;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(607)
					::phoenix::Vector tmp13 = ::luxe::tilemaps::Ortho_obj::worldpos_to_tile_coord(tmp5,tmp9,tmp10,tmp11,tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(607)
					::phoenix::Vector _tile_pos = tmp13;		HX_STACK_VAR(_tile_pos,"_tile_pos");
					HX_STACK_LINE(609)
					::String tmp14 = layer_name;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(609)
					Float tmp15 = _tile_pos->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(609)
					int tmp16 = ::Math_obj::floor(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(609)
					Float tmp17 = _tile_pos->y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(609)
					int tmp18 = ::Math_obj::floor(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(609)
					tmp = this->tile_at(tmp14,tmp16,tmp18);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(615)
					Float tmp2 = _world_pos_x;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(615)
					::phoenix::Vector tmp3 = this->pos;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(615)
					Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(615)
					Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(615)
					Float tmp6 = _world_pos_y;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(615)
					::phoenix::Vector tmp7 = this->pos;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(615)
					Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(615)
					Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(615)
					int tmp10 = this->tile_width;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(615)
					int tmp11 = this->tile_height;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(615)
					Dynamic tmp12 = _scale;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(615)
					::phoenix::Vector tmp13 = ::luxe::tilemaps::Isometric_obj::worldpos_to_tile_coord(tmp5,tmp9,tmp10,tmp11,tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(615)
					::phoenix::Vector _tile_pos = tmp13;		HX_STACK_VAR(_tile_pos,"_tile_pos");
					HX_STACK_LINE(617)
					::String tmp14 = layer_name;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(617)
					Float tmp15 = _tile_pos->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(617)
					int tmp16 = ::Math_obj::floor(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(617)
					Float tmp17 = _tile_pos->y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(617)
					int tmp18 = ::Math_obj::floor(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(617)
					tmp = this->tile_at(tmp14,tmp16,tmp18);
				}
				;break;
				default: {
					HX_STACK_LINE(621)
					tmp = null();
				}
			}
		}
		HX_STACK_LINE(603)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Tilemap_obj,tile_at_pos,return )

::luxe::tilemaps::TileLayer Tilemap_obj::layer( ::String layer_name){
	HX_STACK_FRAME("luxe.tilemaps.Tilemap","layer",0x4fc07180,"luxe.tilemaps.Tilemap.layer","luxe/tilemaps/Tilemap.hx",629,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer_name,"layer_name")
	HX_STACK_LINE(630)
	::haxe::ds::StringMap tmp = this->layers;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(630)
	::String tmp1 = layer_name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(630)
	::luxe::tilemaps::TileLayer tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(630)
	::luxe::tilemaps::TileLayer tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(630)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,layer,return )

::luxe::tilemaps::Tileset Tilemap_obj::tileset( ::String tileset_name){
	HX_STACK_FRAME("luxe.tilemaps.Tilemap","tileset",0x1931faa3,"luxe.tilemaps.Tilemap.tileset","luxe/tilemaps/Tilemap.hx",634,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileset_name,"tileset_name")
	HX_STACK_LINE(635)
	::haxe::ds::StringMap tmp = this->tilesets;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(635)
	::String tmp1 = tileset_name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(635)
	::luxe::tilemaps::Tileset tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(635)
	::luxe::tilemaps::Tileset tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(635)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,tileset,return )

::luxe::tilemaps::Tile Tilemap_obj::tile_at( ::String layer_name,int x,int y){
	HX_STACK_FRAME("luxe.tilemaps.Tilemap","tile_at",0x1922ca13,"luxe.tilemaps.Tilemap.tile_at","luxe/tilemaps/Tilemap.hx",639,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer_name,"layer_name")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(641)
	int tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(641)
	int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(641)
	bool tmp2 = this->inside(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(641)
	if ((tmp2)){
		HX_STACK_LINE(642)
		::haxe::ds::StringMap tmp3 = this->layers;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(642)
		::String tmp4 = layer_name;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(642)
		::luxe::tilemaps::TileLayer tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(642)
		::luxe::tilemaps::TileLayer _layer = tmp5;		HX_STACK_VAR(_layer,"_layer");
		HX_STACK_LINE(643)
		bool tmp6 = (_layer != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(643)
		if ((tmp6)){
			HX_STACK_LINE(644)
			::luxe::tilemaps::Tile tmp7 = _layer->tiles->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::luxe::tilemaps::Tile >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(644)
			return tmp7;
		}
		else{
			HX_STACK_LINE(646)
			::String tmp7 = (HX_HCSTRING("No tile layer called '","\x66","\x45","\xa0","\x69") + layer_name);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(646)
			::String tmp8 = (tmp7 + HX_HCSTRING("' for tile_at ","\x8c","\x52","\xc6","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(646)
			int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(646)
			::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(646)
			::String tmp11 = (tmp10 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(646)
			int tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(646)
			::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(646)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Tilemap.hx","\x70","\x27","\xa3","\xdf"),646,HX_HCSTRING("luxe.tilemaps.Tilemap","\xdd","\x52","\x84","\xfa"),HX_HCSTRING("tile_at","\xa4","\x50","\x84","\x45"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(646)
			::haxe::Log_obj::trace(tmp13,tmp14);
			HX_STACK_LINE(647)
			return null();
		}
	}
	else{
		HX_STACK_LINE(651)
		return null();
	}
	HX_STACK_LINE(641)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Tilemap_obj,tile_at,return )

Dynamic Tilemap_obj::iterator( ){
	HX_STACK_FRAME("luxe.tilemaps.Tilemap","iterator",0xeaa6119f,"luxe.tilemaps.Tilemap.iterator","luxe/tilemaps/Tilemap.hx",657,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(659)
	Dynamic tmp = this->layers_ordered->iteratorFast< ::luxe::tilemaps::TileLayer >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(659)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,iterator,return )

::luxe::tilemaps::Tileset Tilemap_obj::add_tileset( Dynamic options){
	HX_STACK_FRAME("luxe.tilemaps.Tilemap","add_tileset",0x373fb2c5,"luxe.tilemaps.Tilemap.add_tileset","luxe/tilemaps/Tilemap.hx",664,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(666)
	::luxe::tilemaps::Tileset tmp = ::luxe::tilemaps::Tileset_obj::__new(options);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(666)
	::luxe::tilemaps::Tileset tileset = tmp;		HX_STACK_VAR(tileset,"tileset");
	HX_STACK_LINE(668)
	::haxe::ds::StringMap tmp1 = this->tilesets;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(668)
	::String tmp2 = tileset->name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(668)
	::luxe::tilemaps::Tileset tmp3 = tileset;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(668)
	tmp1->set(tmp2,tmp3);
	HX_STACK_LINE(670)
	::luxe::tilemaps::Tileset tmp4 = tileset;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(670)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,add_tileset,return )

::luxe::tilemaps::Tileset Tilemap_obj::tileset_from_id( int _id){
	HX_STACK_FRAME("luxe.tilemaps.Tilemap","tileset_from_id",0xd435b9f4,"luxe.tilemaps.Tilemap.tileset_from_id","luxe/tilemaps/Tilemap.hx",675,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(677)
	::luxe::tilemaps::Tileset tileset = null();		HX_STACK_VAR(tileset,"tileset");
	HX_STACK_LINE(679)
	int max = (int)0;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(680)
	::haxe::ds::StringMap tmp = this->tilesets;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(680)
	Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(680)
	for(::cpp::FastIterator_obj< ::luxe::tilemaps::Tileset > *__it = ::cpp::CreateFastIterator< ::luxe::tilemaps::Tileset >(tmp1);  __it->hasNext(); ){
		::luxe::tilemaps::Tileset t = __it->next();
		{
			HX_STACK_LINE(681)
			bool tmp2 = (_id >= t->first_id);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(681)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(681)
			if ((tmp2)){
				HX_STACK_LINE(681)
				tmp3 = (t->first_id >= max);
			}
			else{
				HX_STACK_LINE(681)
				tmp3 = false;
			}
			HX_STACK_LINE(681)
			if ((tmp3)){
				HX_STACK_LINE(682)
				max = t->first_id;
				HX_STACK_LINE(683)
				tileset = t;
			}
		}
;
	}
	HX_STACK_LINE(687)
	::luxe::tilemaps::Tileset tmp2 = tileset;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(687)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,tileset_from_id,return )

bool Tilemap_obj::remove_tile( ::String layer_name,int x,int y){
	HX_STACK_FRAME("luxe.tilemaps.Tilemap","remove_tile",0xcb5db138,"luxe.tilemaps.Tilemap.remove_tile","luxe/tilemaps/Tilemap.hx",692,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer_name,"layer_name")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(694)
	int tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(694)
	int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(694)
	bool tmp2 = this->inside(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(694)
	if ((tmp2)){
		HX_STACK_LINE(696)
		::String tmp3 = layer_name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(696)
		::luxe::tilemaps::TileLayer tmp4 = this->layer(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(696)
		::luxe::tilemaps::TileLayer _layer = tmp4;		HX_STACK_VAR(_layer,"_layer");
		HX_STACK_LINE(697)
		bool tmp5 = (_layer != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(697)
		if ((tmp5)){
			HX_STACK_LINE(698)
			::luxe::tilemaps::Tile tmp6 = _layer->tiles->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::luxe::tilemaps::Tile >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(698)
			tmp6->set_id((int)0);
		}
	}
	HX_STACK_LINE(703)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC3(Tilemap_obj,remove_tile,return )

bool Tilemap_obj::remove_tileset( ::String name,hx::Null< bool >  __o__destroy_textures){
bool _destroy_textures = __o__destroy_textures.Default(false);
	HX_STACK_FRAME("luxe.tilemaps.Tilemap","remove_tileset",0x10e27d6a,"luxe.tilemaps.Tilemap.remove_tileset","luxe/tilemaps/Tilemap.hx",708,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(_destroy_textures,"_destroy_textures")
{
		HX_STACK_LINE(710)
		::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(710)
		::luxe::tilemaps::Tileset tmp1 = this->tileset(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(710)
		::luxe::tilemaps::Tileset _tileset = tmp1;		HX_STACK_VAR(_tileset,"_tileset");
		HX_STACK_LINE(712)
		bool tmp2 = (_tileset != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(712)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(712)
		if ((tmp2)){
			HX_STACK_LINE(712)
			tmp3 = _destroy_textures;
		}
		else{
			HX_STACK_LINE(712)
			tmp3 = false;
		}
		HX_STACK_LINE(712)
		if ((tmp3)){
			HX_STACK_LINE(713)
			_tileset->texture->destroy(null());
		}
		HX_STACK_LINE(716)
		::haxe::ds::StringMap tmp4 = this->tilesets;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(716)
		::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(716)
		bool tmp6 = tmp4->remove(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(716)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,remove_tileset,return )

bool Tilemap_obj::remove_layer( ::String name){
	HX_STACK_FRAME("luxe.tilemaps.Tilemap","remove_layer",0x8628e487,"luxe.tilemaps.Tilemap.remove_layer","luxe/tilemaps/Tilemap.hx",721,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(723)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(723)
	::luxe::tilemaps::TileLayer tmp1 = this->layer(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(723)
	::luxe::tilemaps::TileLayer _layer = tmp1;		HX_STACK_VAR(_layer,"_layer");
	HX_STACK_LINE(725)
	bool tmp2 = (_layer != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(725)
	if ((tmp2)){
		HX_STACK_LINE(726)
		::luxe::tilemaps::TileLayer tmp3 = _layer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(726)
		this->layers_ordered->remove(tmp3);
	}
	HX_STACK_LINE(729)
	::haxe::ds::StringMap tmp3 = this->layers;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(729)
	::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(729)
	bool tmp5 = tmp3->remove(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(729)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,remove_layer,return )

::luxe::tilemaps::TileLayer Tilemap_obj::add_layer( Dynamic options){
	HX_STACK_FRAME("luxe.tilemaps.Tilemap","add_layer",0xc27a7d22,"luxe.tilemaps.Tilemap.add_layer","luxe/tilemaps/Tilemap.hx",734,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(736)
	{
		HX_STACK_LINE(736)
		bool tmp = (options->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(736)
		if ((tmp)){
			HX_STACK_LINE(736)
			options->__FieldRef(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")) = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(736)
		options->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(738)
	::luxe::tilemaps::TileLayer tmp = ::luxe::tilemaps::TileLayer_obj::__new(options);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(738)
	::luxe::tilemaps::TileLayer new_layer = tmp;		HX_STACK_VAR(new_layer,"new_layer");
	HX_STACK_LINE(741)
	::haxe::ds::StringMap tmp1 = this->layers;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(741)
	::String tmp2 = new_layer->name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(741)
	::luxe::tilemaps::TileLayer tmp3 = new_layer;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(741)
	tmp1->set(tmp2,tmp3);
	HX_STACK_LINE(743)
	::luxe::tilemaps::TileLayer tmp4 = new_layer;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(743)
	this->layers_ordered->push(tmp4);
	HX_STACK_LINE(745)
	this->sort_layers();
	HX_STACK_LINE(747)
	::luxe::tilemaps::TileLayer tmp5 = new_layer;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(747)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,add_layer,return )

Void Tilemap_obj::add_tiles_fill_by_id( ::String layer_name,hx::Null< int >  __o__tileid){
int _tileid = __o__tileid.Default(0);
	HX_STACK_FRAME("luxe.tilemaps.Tilemap","add_tiles_fill_by_id",0x8b08ee90,"luxe.tilemaps.Tilemap.add_tiles_fill_by_id","luxe/tilemaps/Tilemap.hx",753,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer_name,"layer_name")
	HX_STACK_ARG(_tileid,"_tileid")
{
		HX_STACK_LINE(755)
		::haxe::ds::StringMap tmp = this->layers;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(755)
		::String tmp1 = layer_name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(755)
		::luxe::tilemaps::TileLayer tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(755)
		::luxe::tilemaps::TileLayer _layer = tmp2;		HX_STACK_VAR(_layer,"_layer");
		HX_STACK_LINE(757)
		bool tmp3 = (_layer != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(757)
		if ((tmp3)){
			HX_STACK_LINE(759)
			_layer->tiles = null();
			HX_STACK_LINE(760)
			_layer->tiles = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(762)
			{
				HX_STACK_LINE(762)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(762)
				int tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(762)
				int _g = tmp4;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(762)
				while((true)){
					HX_STACK_LINE(762)
					bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(762)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(762)
					if ((tmp6)){
						HX_STACK_LINE(762)
						break;
					}
					HX_STACK_LINE(762)
					int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(762)
					int y = tmp7;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(764)
					Array< ::Dynamic > _tile_row = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_tile_row,"_tile_row");
					HX_STACK_LINE(765)
					{
						HX_STACK_LINE(765)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(765)
						int tmp8 = this->width;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(765)
						int _g2 = tmp8;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(765)
						while((true)){
							HX_STACK_LINE(765)
							bool tmp9 = (_g3 < _g2);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(765)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(765)
							if ((tmp10)){
								HX_STACK_LINE(765)
								break;
							}
							HX_STACK_LINE(765)
							int tmp11 = (_g3)++;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(765)
							int x = tmp11;		HX_STACK_VAR(x,"x");
							struct _Function_6_1{
								inline static Dynamic Block( int &x,::luxe::tilemaps::TileLayer &_layer,int &y,int &_tileid){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/tilemaps/Tilemap.hx",767,0x1cf567e1)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f") , _layer,false);
										__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , _tileid,false);
										__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , x,false);
										__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , y,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(767)
							Dynamic tmp12 = _Function_6_1::Block(x,_layer,y,_tileid);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(767)
							::luxe::tilemaps::Tile tmp13 = ::luxe::tilemaps::Tile_obj::__new(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(767)
							::luxe::tilemaps::Tile _tile = tmp13;		HX_STACK_VAR(_tile,"_tile");
							HX_STACK_LINE(774)
							::luxe::tilemaps::Tile tmp14 = _tile;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(774)
							_tile_row->push(tmp14);
						}
					}
					HX_STACK_LINE(778)
					_layer->tiles->push(_tile_row);
				}
			}
		}
		else{
			HX_STACK_LINE(783)
			::String tmp4 = (HX_HCSTRING("No tile layer called '","\x66","\x45","\xa0","\x69") + layer_name);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(783)
			::String tmp5 = (tmp4 + HX_HCSTRING("' for add_tiles_fill_by_id","\xef","\x0c","\xf3","\x21"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(783)
			Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Tilemap.hx","\x70","\x27","\xa3","\xdf"),783,HX_HCSTRING("luxe.tilemaps.Tilemap","\xdd","\x52","\x84","\xfa"),HX_HCSTRING("add_tiles_fill_by_id","\x5f","\xe1","\xd7","\x73"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(783)
			::haxe::Log_obj::trace(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,add_tiles_fill_by_id,(void))

Void Tilemap_obj::add_tiles_from_grid( ::String layer_name,Array< ::Dynamic > grid){
{
		HX_STACK_FRAME("luxe.tilemaps.Tilemap","add_tiles_from_grid",0x3ebd8912,"luxe.tilemaps.Tilemap.add_tiles_from_grid","luxe/tilemaps/Tilemap.hx",790,0x1cf567e1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(layer_name,"layer_name")
		HX_STACK_ARG(grid,"grid")
		HX_STACK_LINE(792)
		int tmp = grid->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(792)
		int tmp1 = this->height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(792)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(792)
		if ((tmp2)){
			HX_STACK_LINE(793)
			HX_STACK_DO_THROW(HX_HCSTRING("add_tiles_from_grid requires a grid of integers the same size as the tilemap! height != grid.length","\x77","\x90","\xf6","\x65"));
		}
		HX_STACK_LINE(796)
		bool tmp3 = (grid->length != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(796)
		if ((tmp3)){
			HX_STACK_LINE(797)
			int tmp4 = grid->__get((int)0).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(797)
			int tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(797)
			bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(797)
			if ((tmp6)){
				HX_STACK_LINE(798)
				HX_STACK_DO_THROW(HX_HCSTRING("add_tiles_from_grid requires a grid of integers the same size as the tilemap! width != grid[0].length","\x90","\x6e","\xf4","\xba"));
			}
		}
		HX_STACK_LINE(802)
		::haxe::ds::StringMap tmp4 = this->layers;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(802)
		::String tmp5 = layer_name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(802)
		::luxe::tilemaps::TileLayer tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(802)
		::luxe::tilemaps::TileLayer _layer = tmp6;		HX_STACK_VAR(_layer,"_layer");
		HX_STACK_LINE(803)
		bool tmp7 = (_layer != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(803)
		if ((tmp7)){
			HX_STACK_LINE(805)
			_layer->tiles = null();
			HX_STACK_LINE(806)
			_layer->tiles = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(808)
			{
				HX_STACK_LINE(808)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(808)
				int tmp8 = this->height;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(808)
				int _g = tmp8;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(808)
				while((true)){
					HX_STACK_LINE(808)
					bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(808)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(808)
					if ((tmp10)){
						HX_STACK_LINE(808)
						break;
					}
					HX_STACK_LINE(808)
					int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(808)
					int y = tmp11;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(810)
					Array< ::Dynamic > _tile_row = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_tile_row,"_tile_row");
					HX_STACK_LINE(811)
					{
						HX_STACK_LINE(811)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(811)
						int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(811)
						int _g2 = tmp12;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(811)
						while((true)){
							HX_STACK_LINE(811)
							bool tmp13 = (_g3 < _g2);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(811)
							bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(811)
							if ((tmp14)){
								HX_STACK_LINE(811)
								break;
							}
							HX_STACK_LINE(811)
							int tmp15 = (_g3)++;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(811)
							int x = tmp15;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(813)
							int tmp16 = grid->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(813)
							int tileid = tmp16;		HX_STACK_VAR(tileid,"tileid");
							struct _Function_6_1{
								inline static Dynamic Block( int &x,int &tileid,::luxe::tilemaps::TileLayer &_layer,int &y){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/tilemaps/Tilemap.hx",814,0x1cf567e1)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f") , _layer,false);
										__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tileid,false);
										__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , x,false);
										__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , y,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(814)
							Dynamic tmp17 = _Function_6_1::Block(x,tileid,_layer,y);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(814)
							::luxe::tilemaps::Tile tmp18 = ::luxe::tilemaps::Tile_obj::__new(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(814)
							::luxe::tilemaps::Tile _tile = tmp18;		HX_STACK_VAR(_tile,"_tile");
							HX_STACK_LINE(821)
							::luxe::tilemaps::Tile tmp19 = _tile;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(821)
							_tile_row->push(tmp19);
						}
					}
					HX_STACK_LINE(825)
					_layer->tiles->push(_tile_row);
				}
			}
		}
		else{
			HX_STACK_LINE(830)
			::String tmp8 = (HX_HCSTRING("No tile layer called '","\x66","\x45","\xa0","\x69") + layer_name);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(830)
			::String tmp9 = (tmp8 + HX_HCSTRING("' for add_tiles_from_grid","\x93","\x9b","\x23","\xc1"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(830)
			Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Tilemap.hx","\x70","\x27","\xa3","\xdf"),830,HX_HCSTRING("luxe.tilemaps.Tilemap","\xdd","\x52","\x84","\xfa"),HX_HCSTRING("add_tiles_from_grid","\x23","\x25","\x57","\x3c"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(830)
			::haxe::Log_obj::trace(tmp9,tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,add_tiles_from_grid,(void))

Void Tilemap_obj::destroy( Dynamic __o__keep_visual){
Dynamic _keep_visual = __o__keep_visual.Default(false);
	HX_STACK_FRAME("luxe.tilemaps.Tilemap","destroy",0xf824a669,"luxe.tilemaps.Tilemap.destroy","luxe/tilemaps/Tilemap.hx",836,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_keep_visual,"_keep_visual")
{
		HX_STACK_LINE(838)
		this->layers = null();
		HX_STACK_LINE(839)
		this->layers_ordered = null();
		HX_STACK_LINE(840)
		this->tilesets = null();
		HX_STACK_LINE(841)
		this->properties = null();
		HX_STACK_LINE(842)
		this->orientation = null();
		HX_STACK_LINE(843)
		this->pos = null();
		HX_STACK_LINE(844)
		this->tile_width = (int)0;
		HX_STACK_LINE(845)
		this->tile_height = (int)0;
		HX_STACK_LINE(846)
		this->width = (int)0;
		HX_STACK_LINE(847)
		this->height = (int)0;
		HX_STACK_LINE(849)
		Dynamic tmp = _keep_visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(849)
		Dynamic tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(849)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(849)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(849)
		if ((tmp2)){
			HX_STACK_LINE(849)
			::luxe::tilemaps::TilemapVisual tmp4 = this->visual;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(849)
			::luxe::tilemaps::TilemapVisual tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(849)
			tmp3 = (tmp5 != null());
		}
		else{
			HX_STACK_LINE(849)
			tmp3 = false;
		}
		HX_STACK_LINE(849)
		if ((tmp3)){
			HX_STACK_LINE(850)
			::luxe::tilemaps::TilemapVisual tmp4 = this->visual;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(850)
			tmp4->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,destroy,(void))

int Tilemap_obj::_sort_layers( ::luxe::tilemaps::TileLayer a,::luxe::tilemaps::TileLayer b){
	HX_STACK_FRAME("luxe.tilemaps.Tilemap","_sort_layers",0x2baa69b5,"luxe.tilemaps.Tilemap._sort_layers","luxe/tilemaps/Tilemap.hx",857,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(858)
	bool tmp = (a->layer < b->layer);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(858)
	if ((tmp)){
		HX_STACK_LINE(858)
		return (int)-1;
	}
	HX_STACK_LINE(859)
	bool tmp1 = (a->layer >= b->layer);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(859)
	if ((tmp1)){
		HX_STACK_LINE(859)
		return (int)1;
	}
	HX_STACK_LINE(860)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,_sort_layers,return )

Void Tilemap_obj::sort_layers( ){
{
		HX_STACK_FRAME("luxe.tilemaps.Tilemap","sort_layers",0x46022472,"luxe.tilemaps.Tilemap.sort_layers","luxe/tilemaps/Tilemap.hx",863,0x1cf567e1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(865)
		Dynamic tmp = this->_sort_layers_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(865)
		this->layers_ordered->sort(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,sort_layers,(void))

::phoenix::Rectangle Tilemap_obj::get_bounds( ){
	HX_STACK_FRAME("luxe.tilemaps.Tilemap","get_bounds",0x5df6cc2f,"luxe.tilemaps.Tilemap.get_bounds","luxe/tilemaps/Tilemap.hx",871,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(873)
	::phoenix::Vector tmp = this->pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(873)
	Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(873)
	::phoenix::Vector tmp2 = this->pos;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(873)
	Float tmp3 = tmp2->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(873)
	::phoenix::Vector tmp4 = this->pos;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(873)
	Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(873)
	int tmp6 = this->get_total_width();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(873)
	Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(873)
	::phoenix::Vector tmp8 = this->pos;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(873)
	Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(873)
	int tmp10 = this->get_total_height();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(873)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(873)
	::phoenix::Rectangle tmp12 = ::phoenix::Rectangle_obj::__new(tmp1,tmp3,tmp7,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(873)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,get_bounds,return )

int Tilemap_obj::get_total_width( ){
	HX_STACK_FRAME("luxe.tilemaps.Tilemap","get_total_width",0x4bb93411,"luxe.tilemaps.Tilemap.get_total_width","luxe/tilemaps/Tilemap.hx",878,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(880)
	int tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(880)
	int tmp1 = this->tile_width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(880)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(880)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,get_total_width,return )

int Tilemap_obj::get_total_height( ){
	HX_STACK_FRAME("luxe.tilemaps.Tilemap","get_total_height",0xaca3d37c,"luxe.tilemaps.Tilemap.get_total_height","luxe/tilemaps/Tilemap.hx",886,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(888)
	int tmp = this->height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(888)
	int tmp1 = this->tile_height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(888)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(888)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,get_total_height,return )


Tilemap_obj::Tilemap_obj()
{
}

void Tilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tilemap);
	HX_MARK_MEMBER_NAME(layers,"layers");
	HX_MARK_MEMBER_NAME(layers_ordered,"layers_ordered");
	HX_MARK_MEMBER_NAME(tilesets,"tilesets");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(orientation,"orientation");
	HX_MARK_MEMBER_NAME(visual,"visual");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(tile_width,"tile_width");
	HX_MARK_MEMBER_NAME(tile_height,"tile_height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(total_width,"total_width");
	HX_MARK_MEMBER_NAME(total_height,"total_height");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_END_CLASS();
}

void Tilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(layers,"layers");
	HX_VISIT_MEMBER_NAME(layers_ordered,"layers_ordered");
	HX_VISIT_MEMBER_NAME(tilesets,"tilesets");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(orientation,"orientation");
	HX_VISIT_MEMBER_NAME(visual,"visual");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(tile_width,"tile_width");
	HX_VISIT_MEMBER_NAME(tile_height,"tile_height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(total_width,"total_width");
	HX_VISIT_MEMBER_NAME(total_height,"total_height");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
}

Dynamic Tilemap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"layer") ) { return layer_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layers") ) { return layers; }
		if (HX_FIELD_EQ(inName,"visual") ) { return visual; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return inCallProp == hx::paccAlways ? get_bounds() : bounds; }
		if (HX_FIELD_EQ(inName,"inside") ) { return inside_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { return display_dyn(); }
		if (HX_FIELD_EQ(inName,"tileset") ) { return tileset_dyn(); }
		if (HX_FIELD_EQ(inName,"tile_at") ) { return tile_at_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tilesets") ) { return tilesets; }
		if (HX_FIELD_EQ(inName,"tile_pos") ) { return tile_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"add_layer") ) { return add_layer_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		if (HX_FIELD_EQ(inName,"tile_width") ) { return tile_width; }
		if (HX_FIELD_EQ(inName,"tile_coord") ) { return tile_coord_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bounds") ) { return get_bounds_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orientation") ) { return orientation; }
		if (HX_FIELD_EQ(inName,"tile_height") ) { return tile_height; }
		if (HX_FIELD_EQ(inName,"total_width") ) { return inCallProp == hx::paccAlways ? get_total_width() : total_width; }
		if (HX_FIELD_EQ(inName,"tile_at_pos") ) { return tile_at_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"add_tileset") ) { return add_tileset_dyn(); }
		if (HX_FIELD_EQ(inName,"remove_tile") ) { return remove_tile_dyn(); }
		if (HX_FIELD_EQ(inName,"sort_layers") ) { return sort_layers_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"total_height") ) { return inCallProp == hx::paccAlways ? get_total_height() : total_height; }
		if (HX_FIELD_EQ(inName,"remove_layer") ) { return remove_layer_dyn(); }
		if (HX_FIELD_EQ(inName,"_sort_layers") ) { return _sort_layers_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"layers_ordered") ) { return layers_ordered; }
		if (HX_FIELD_EQ(inName,"remove_tileset") ) { return remove_tileset_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"tileset_from_id") ) { return tileset_from_id_dyn(); }
		if (HX_FIELD_EQ(inName,"get_total_width") ) { return get_total_width_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_total_height") ) { return get_total_height_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"add_tiles_from_grid") ) { return add_tiles_from_grid_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"add_tiles_fill_by_id") ) { return add_tiles_fill_by_id_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tilemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layers") ) { layers=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visual") ) { visual=inValue.Cast< ::luxe::tilemaps::TilemapVisual >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tilesets") ) { tilesets=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tile_width") ) { tile_width=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orientation") ) { orientation=inValue.Cast< ::luxe::tilemaps::TilemapOrientation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tile_height") ) { tile_height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"total_width") ) { total_width=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"total_height") ) { total_height=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"layers_ordered") ) { layers_ordered=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("layers","\x82","\x15","\xb1","\x58"));
	outFields->push(HX_HCSTRING("layers_ordered","\x70","\xc9","\x46","\x8b"));
	outFields->push(HX_HCSTRING("tilesets","\xbf","\x8c","\x7d","\x9b"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	outFields->push(HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"));
	outFields->push(HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("tile_width","\xf5","\x5e","\x4c","\xf6"));
	outFields->push(HX_HCSTRING("tile_height","\x18","\x30","\xd6","\x42"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("total_width","\x0b","\x7c","\xeb","\x57"));
	outFields->push(HX_HCSTRING("total_height","\x42","\x86","\x70","\x4c"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Tilemap_obj,layers),HX_HCSTRING("layers","\x82","\x15","\xb1","\x58")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Tilemap_obj,layers_ordered),HX_HCSTRING("layers_ordered","\x70","\xc9","\x46","\x8b")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Tilemap_obj,tilesets),HX_HCSTRING("tilesets","\xbf","\x8c","\x7d","\x9b")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Tilemap_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsObject /*::luxe::tilemaps::TilemapOrientation*/ ,(int)offsetof(Tilemap_obj,orientation),HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd")},
	{hx::fsObject /*::luxe::tilemaps::TilemapVisual*/ ,(int)offsetof(Tilemap_obj,visual),HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Tilemap_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,tile_width),HX_HCSTRING("tile_width","\xf5","\x5e","\x4c","\xf6")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,tile_height),HX_HCSTRING("tile_height","\x18","\x30","\xd6","\x42")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,total_width),HX_HCSTRING("total_width","\x0b","\x7c","\xeb","\x57")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,total_height),HX_HCSTRING("total_height","\x42","\x86","\x70","\x4c")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Tilemap_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("layers","\x82","\x15","\xb1","\x58"),
	HX_HCSTRING("layers_ordered","\x70","\xc9","\x46","\x8b"),
	HX_HCSTRING("tilesets","\xbf","\x8c","\x7d","\x9b"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"),
	HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("tile_width","\xf5","\x5e","\x4c","\xf6"),
	HX_HCSTRING("tile_height","\x18","\x30","\xd6","\x42"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("total_width","\x0b","\x7c","\xeb","\x57"),
	HX_HCSTRING("total_height","\x42","\x86","\x70","\x4c"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb"),
	HX_HCSTRING("inside","\xfc","\x3f","\xe0","\x9d"),
	HX_HCSTRING("tile_pos","\xc3","\x9c","\x4d","\x8e"),
	HX_HCSTRING("tile_coord","\xa4","\x63","\x48","\x76"),
	HX_HCSTRING("tile_at_pos","\x39","\x15","\xc4","\x12"),
	HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"),
	HX_HCSTRING("tileset","\x34","\x81","\x93","\x45"),
	HX_HCSTRING("tile_at","\xa4","\x50","\x84","\x45"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("add_tileset","\xd6","\x55","\xf6","\xd6"),
	HX_HCSTRING("tileset_from_id","\x85","\xb9","\x49","\xa1"),
	HX_HCSTRING("remove_tile","\x49","\x54","\x14","\x6b"),
	HX_HCSTRING("remove_tileset","\xf9","\x5a","\xf0","\x6f"),
	HX_HCSTRING("remove_layer","\x56","\xf0","\x40","\xa6"),
	HX_HCSTRING("add_layer","\xf3","\x89","\x37","\xef"),
	HX_HCSTRING("add_tiles_fill_by_id","\x5f","\xe1","\xd7","\x73"),
	HX_HCSTRING("add_tiles_from_grid","\x23","\x25","\x57","\x3c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("_sort_layers","\x84","\x75","\xc2","\x4b"),
	HX_HCSTRING("sort_layers","\x83","\xc7","\xb8","\xe5"),
	HX_HCSTRING("get_bounds","\x3e","\xf6","\xa4","\x56"),
	HX_HCSTRING("get_total_width","\xa2","\x33","\xcd","\x18"),
	HX_HCSTRING("get_total_height","\xcb","\x72","\x0f","\x51"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tilemap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tilemap_obj::__mClass,"__mClass");
};

#endif

hx::Class Tilemap_obj::__mClass;

void Tilemap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tilemaps.Tilemap","\xdd","\x52","\x84","\xfa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tilemap_obj >;
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
