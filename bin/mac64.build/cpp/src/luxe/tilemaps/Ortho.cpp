#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_luxe_tilemaps_Ortho
#include <luxe/tilemaps/Ortho.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_TileOffset
#include <luxe/tilemaps/TileOffset.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{
namespace tilemaps{

Void Ortho_obj::__construct()
{
	return null();
}

//Ortho_obj::~Ortho_obj() { }

Dynamic Ortho_obj::__CreateEmpty() { return  new Ortho_obj; }
hx::ObjectPtr< Ortho_obj > Ortho_obj::__new()
{  hx::ObjectPtr< Ortho_obj > _result_ = new Ortho_obj();
	_result_->__construct();
	return _result_;}

Dynamic Ortho_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ortho_obj > _result_ = new Ortho_obj();
	_result_->__construct();
	return _result_;}

::phoenix::Vector Ortho_obj::worldpos_to_tile_coord( Float world_x,Float world_y,int tile_width,int tile_height,Dynamic __o_scale,Dynamic __o_rounded){
Dynamic scale = __o_scale.Default(((Float)1.0));
Dynamic rounded = __o_rounded.Default(true);
	HX_STACK_FRAME("luxe.tilemaps.Ortho","worldpos_to_tile_coord",0x0ef844d2,"luxe.tilemaps.Ortho.worldpos_to_tile_coord","luxe/tilemaps/Ortho.hx",18,0x6518ccd7)
	HX_STACK_ARG(world_x,"world_x")
	HX_STACK_ARG(world_y,"world_y")
	HX_STACK_ARG(tile_width,"tile_width")
	HX_STACK_ARG(tile_height,"tile_height")
	HX_STACK_ARG(scale,"scale")
	HX_STACK_ARG(rounded,"rounded")
{
		HX_STACK_LINE(20)
		::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(20)
		::phoenix::Vector tile_coord = tmp;		HX_STACK_VAR(tile_coord,"tile_coord");
		HX_STACK_LINE(22)
		{
			HX_STACK_LINE(22)
			Float tmp1 = world_x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(22)
			Float tmp2 = (tile_width * scale);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(22)
			Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(22)
			Float _x = tmp3;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(22)
			tile_coord->x = _x;
			HX_STACK_LINE(22)
			bool tmp4 = tile_coord->_construct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(22)
			if ((tmp4)){
				HX_STACK_LINE(22)
				tile_coord->x;
			}
			else{
				HX_STACK_LINE(22)
				bool tmp5 = (tile_coord->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(22)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(22)
				if ((tmp5)){
					HX_STACK_LINE(22)
					bool tmp7 = tile_coord->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(22)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(22)
					tmp6 = !(tmp8);
				}
				else{
					HX_STACK_LINE(22)
					tmp6 = false;
				}
				HX_STACK_LINE(22)
				if ((tmp6)){
					HX_STACK_LINE(22)
					Float tmp7 = _x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(22)
					tile_coord->listen_x(tmp7);
				}
				HX_STACK_LINE(22)
				tile_coord->x;
			}
		}
		HX_STACK_LINE(23)
		{
			HX_STACK_LINE(23)
			Float tmp1 = world_y;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(23)
			Float tmp2 = (tile_height * scale);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(23)
			Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(23)
			Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(23)
			tile_coord->y = _y;
			HX_STACK_LINE(23)
			bool tmp4 = tile_coord->_construct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(23)
			if ((tmp4)){
				HX_STACK_LINE(23)
				tile_coord->y;
			}
			else{
				HX_STACK_LINE(23)
				bool tmp5 = (tile_coord->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(23)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(23)
				if ((tmp5)){
					HX_STACK_LINE(23)
					bool tmp7 = tile_coord->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(23)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(23)
					tmp6 = !(tmp8);
				}
				else{
					HX_STACK_LINE(23)
					tmp6 = false;
				}
				HX_STACK_LINE(23)
				if ((tmp6)){
					HX_STACK_LINE(23)
					Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(23)
					tile_coord->listen_y(tmp7);
				}
				HX_STACK_LINE(23)
				tile_coord->y;
			}
		}
		HX_STACK_LINE(25)
		Dynamic tmp1 = rounded;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		if ((tmp1)){
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				Float tmp2 = tile_coord->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(26)
				int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(26)
				Float _x = tmp3;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(26)
				tile_coord->x = _x;
				HX_STACK_LINE(26)
				bool tmp4 = tile_coord->_construct;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(26)
				if ((tmp4)){
					HX_STACK_LINE(26)
					tile_coord->x;
				}
				else{
					HX_STACK_LINE(26)
					bool tmp5 = (tile_coord->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(26)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(26)
					if ((tmp5)){
						HX_STACK_LINE(26)
						bool tmp7 = tile_coord->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(26)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(26)
						tmp6 = !(tmp8);
					}
					else{
						HX_STACK_LINE(26)
						tmp6 = false;
					}
					HX_STACK_LINE(26)
					if ((tmp6)){
						HX_STACK_LINE(26)
						Float tmp7 = _x;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(26)
						tile_coord->listen_x(tmp7);
					}
					HX_STACK_LINE(26)
					tile_coord->x;
				}
			}
			HX_STACK_LINE(27)
			{
				HX_STACK_LINE(27)
				Float tmp2 = tile_coord->y;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(27)
				int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(27)
				Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(27)
				tile_coord->y = _y;
				HX_STACK_LINE(27)
				bool tmp4 = tile_coord->_construct;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(27)
				if ((tmp4)){
					HX_STACK_LINE(27)
					tile_coord->y;
				}
				else{
					HX_STACK_LINE(27)
					bool tmp5 = (tile_coord->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(27)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(27)
					if ((tmp5)){
						HX_STACK_LINE(27)
						bool tmp7 = tile_coord->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(27)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(27)
						tmp6 = !(tmp8);
					}
					else{
						HX_STACK_LINE(27)
						tmp6 = false;
					}
					HX_STACK_LINE(27)
					if ((tmp6)){
						HX_STACK_LINE(27)
						Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(27)
						tile_coord->listen_y(tmp7);
					}
					HX_STACK_LINE(27)
					tile_coord->y;
				}
			}
		}
		HX_STACK_LINE(30)
		::phoenix::Vector tmp2 = tile_coord;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Ortho_obj,worldpos_to_tile_coord,return )

::phoenix::Vector Ortho_obj::tile_coord_to_worldpos( int tile_x,int tile_y,int tile_width,int tile_height,Dynamic __o_scale,::luxe::tilemaps::TileOffset offset_x,::luxe::tilemaps::TileOffset offset_y){
Dynamic scale = __o_scale.Default(((Float)1.0));
	HX_STACK_FRAME("luxe.tilemaps.Ortho","tile_coord_to_worldpos",0x9b68a012,"luxe.tilemaps.Ortho.tile_coord_to_worldpos","luxe/tilemaps/Ortho.hx",35,0x6518ccd7)
	HX_STACK_ARG(tile_x,"tile_x")
	HX_STACK_ARG(tile_y,"tile_y")
	HX_STACK_ARG(tile_width,"tile_width")
	HX_STACK_ARG(tile_height,"tile_height")
	HX_STACK_ARG(scale,"scale")
	HX_STACK_ARG(offset_x,"offset_x")
	HX_STACK_ARG(offset_y,"offset_y")
{
		HX_STACK_LINE(37)
		::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		::phoenix::Vector world_pos = tmp;		HX_STACK_VAR(world_pos,"world_pos");
		HX_STACK_LINE(39)
		Float tmp1 = (tile_width * scale);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		Float _scaled_tw = tmp1;		HX_STACK_VAR(_scaled_tw,"_scaled_tw");
		HX_STACK_LINE(40)
		Float tmp2 = (tile_height * scale);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		Float _scaled_th = tmp2;		HX_STACK_VAR(_scaled_th,"_scaled_th");
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			Float tmp3 = (tile_x * _scaled_tw);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(42)
			Float _x = tmp3;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(42)
			world_pos->x = _x;
			HX_STACK_LINE(42)
			bool tmp4 = world_pos->_construct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(42)
			if ((tmp4)){
				HX_STACK_LINE(42)
				world_pos->x;
			}
			else{
				HX_STACK_LINE(42)
				bool tmp5 = (world_pos->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(42)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(42)
				if ((tmp5)){
					HX_STACK_LINE(42)
					bool tmp7 = world_pos->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(42)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(42)
					tmp6 = !(tmp8);
				}
				else{
					HX_STACK_LINE(42)
					tmp6 = false;
				}
				HX_STACK_LINE(42)
				if ((tmp6)){
					HX_STACK_LINE(42)
					Float tmp7 = _x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(42)
					world_pos->listen_x(tmp7);
				}
				HX_STACK_LINE(42)
				world_pos->x;
			}
		}
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			Float tmp3 = (tile_y * _scaled_th);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(43)
			world_pos->y = _y;
			HX_STACK_LINE(43)
			bool tmp4 = world_pos->_construct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(43)
			if ((tmp4)){
				HX_STACK_LINE(43)
				world_pos->y;
			}
			else{
				HX_STACK_LINE(43)
				bool tmp5 = (world_pos->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(43)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(43)
				if ((tmp5)){
					HX_STACK_LINE(43)
					bool tmp7 = world_pos->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(43)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(43)
					tmp6 = !(tmp8);
				}
				else{
					HX_STACK_LINE(43)
					tmp6 = false;
				}
				HX_STACK_LINE(43)
				if ((tmp6)){
					HX_STACK_LINE(43)
					Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(43)
					world_pos->listen_y(tmp7);
				}
				HX_STACK_LINE(43)
				world_pos->y;
			}
		}
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			bool tmp3 = (offset_x == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			if ((tmp3)){
				HX_STACK_LINE(46)
				offset_x = ::luxe::tilemaps::TileOffset_obj::left;
			}
			HX_STACK_LINE(46)
			offset_x;
		}
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			bool tmp3 = (offset_y == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(47)
			if ((tmp3)){
				HX_STACK_LINE(47)
				offset_y = ::luxe::tilemaps::TileOffset_obj::top;
			}
			HX_STACK_LINE(47)
			offset_y;
		}
		HX_STACK_LINE(49)
		bool tmp3 = (offset_x != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		if ((tmp3)){
			HX_STACK_LINE(49)
			switch( (int)(offset_x->__Index())){
				case (int)0: {
					HX_STACK_LINE(50)
					::phoenix::Vector _g = world_pos;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(50)
						Float tmp4 = _g->x;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(50)
						Float tmp5 = (Float(_scaled_tw) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(50)
						Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(50)
						Float _x = tmp6;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(50)
						_g->x = _x;
						HX_STACK_LINE(50)
						bool tmp7 = _g->_construct;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(50)
						if ((tmp7)){
							HX_STACK_LINE(50)
							_g->x;
						}
						else{
							HX_STACK_LINE(50)
							bool tmp8 = (_g->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(50)
							bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(50)
							if ((tmp8)){
								HX_STACK_LINE(50)
								bool tmp10 = _g->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(50)
								bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(50)
								tmp9 = !(tmp11);
							}
							else{
								HX_STACK_LINE(50)
								tmp9 = false;
							}
							HX_STACK_LINE(50)
							if ((tmp9)){
								HX_STACK_LINE(50)
								Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(50)
								_g->listen_x(tmp10);
							}
							HX_STACK_LINE(50)
							_g->x;
						}
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(51)
					::phoenix::Vector _g = world_pos;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(51)
					{
						HX_STACK_LINE(51)
						Float tmp4 = (_g->x + _scaled_tw);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(51)
						Float _x = tmp4;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(51)
						_g->x = _x;
						HX_STACK_LINE(51)
						bool tmp5 = _g->_construct;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(51)
						if ((tmp5)){
							HX_STACK_LINE(51)
							_g->x;
						}
						else{
							HX_STACK_LINE(51)
							bool tmp6 = (_g->listen_x != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(51)
							bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(51)
							if ((tmp6)){
								HX_STACK_LINE(51)
								bool tmp8 = _g->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(51)
								bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(51)
								tmp7 = !(tmp9);
							}
							else{
								HX_STACK_LINE(51)
								tmp7 = false;
							}
							HX_STACK_LINE(51)
							if ((tmp7)){
								HX_STACK_LINE(51)
								Float tmp8 = _x;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(51)
								_g->listen_x(tmp8);
							}
							HX_STACK_LINE(51)
							_g->x;
						}
					}
				}
				;break;
				default: {
				}
			}
		}
		else{
		}
		HX_STACK_LINE(55)
		bool tmp4 = (offset_y != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(55)
		if ((tmp4)){
			HX_STACK_LINE(55)
			switch( (int)(offset_y->__Index())){
				case (int)0: {
					HX_STACK_LINE(56)
					::phoenix::Vector _g = world_pos;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(56)
					{
						HX_STACK_LINE(56)
						Float tmp5 = _g->y;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(56)
						Float tmp6 = (Float(_scaled_th) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(56)
						Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(56)
						Float _y = tmp7;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(56)
						_g->y = _y;
						HX_STACK_LINE(56)
						bool tmp8 = _g->_construct;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(56)
						if ((tmp8)){
							HX_STACK_LINE(56)
							_g->y;
						}
						else{
							HX_STACK_LINE(56)
							bool tmp9 = (_g->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(56)
							bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(56)
							if ((tmp9)){
								HX_STACK_LINE(56)
								bool tmp11 = _g->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(56)
								bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(56)
								tmp10 = !(tmp12);
							}
							else{
								HX_STACK_LINE(56)
								tmp10 = false;
							}
							HX_STACK_LINE(56)
							if ((tmp10)){
								HX_STACK_LINE(56)
								Float tmp11 = _y;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(56)
								_g->listen_y(tmp11);
							}
							HX_STACK_LINE(56)
							_g->y;
						}
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(57)
					::phoenix::Vector _g = world_pos;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(57)
					{
						HX_STACK_LINE(57)
						Float tmp5 = (_g->y + _scaled_th);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(57)
						Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(57)
						_g->y = _y;
						HX_STACK_LINE(57)
						bool tmp6 = _g->_construct;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(57)
						if ((tmp6)){
							HX_STACK_LINE(57)
							_g->y;
						}
						else{
							HX_STACK_LINE(57)
							bool tmp7 = (_g->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(57)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(57)
							if ((tmp7)){
								HX_STACK_LINE(57)
								bool tmp9 = _g->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(57)
								bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(57)
								tmp8 = !(tmp10);
							}
							else{
								HX_STACK_LINE(57)
								tmp8 = false;
							}
							HX_STACK_LINE(57)
							if ((tmp8)){
								HX_STACK_LINE(57)
								Float tmp9 = _y;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(57)
								_g->listen_y(tmp9);
							}
							HX_STACK_LINE(57)
							_g->y;
						}
					}
				}
				;break;
				default: {
				}
			}
		}
		else{
		}
		HX_STACK_LINE(61)
		::phoenix::Vector tmp5 = world_pos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(61)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Ortho_obj,tile_coord_to_worldpos,return )


Ortho_obj::Ortho_obj()
{
}

bool Ortho_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"worldpos_to_tile_coord") ) { outValue = worldpos_to_tile_coord_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"tile_coord_to_worldpos") ) { outValue = tile_coord_to_worldpos_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ortho_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ortho_obj::__mClass,"__mClass");
};

#endif

hx::Class Ortho_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("worldpos_to_tile_coord","\x6b","\x2d","\x09","\x6d"),
	HX_HCSTRING("tile_coord_to_worldpos","\xab","\x88","\x79","\xf9"),
	::String(null()) };

void Ortho_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tilemaps.Ortho","\x27","\x20","\xdb","\x5b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Ortho_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Ortho_obj >;
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
