#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_luxe_tilemaps_Isometric
#include <luxe/tilemaps/Isometric.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_TileOffset
#include <luxe/tilemaps/TileOffset.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{
namespace tilemaps{

Void Isometric_obj::__construct()
{
	return null();
}

//Isometric_obj::~Isometric_obj() { }

Dynamic Isometric_obj::__CreateEmpty() { return  new Isometric_obj; }
hx::ObjectPtr< Isometric_obj > Isometric_obj::__new()
{  hx::ObjectPtr< Isometric_obj > _result_ = new Isometric_obj();
	_result_->__construct();
	return _result_;}

Dynamic Isometric_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Isometric_obj > _result_ = new Isometric_obj();
	_result_->__construct();
	return _result_;}

::phoenix::Vector Isometric_obj::worldpos_to_tile_coord( Float world_x,Float world_y,int tile_width,int tile_height,Dynamic __o_scale,Dynamic __o_rounded){
Dynamic scale = __o_scale.Default(((Float)1.0));
Dynamic rounded = __o_rounded.Default(true);
	HX_STACK_FRAME("luxe.tilemaps.Isometric","worldpos_to_tile_coord",0x86f4acf5,"luxe.tilemaps.Isometric.worldpos_to_tile_coord","luxe/tilemaps/Isometric.hx",20,0x6f42617a)
	HX_STACK_ARG(world_x,"world_x")
	HX_STACK_ARG(world_y,"world_y")
	HX_STACK_ARG(tile_width,"tile_width")
	HX_STACK_ARG(tile_height,"tile_height")
	HX_STACK_ARG(scale,"scale")
	HX_STACK_ARG(rounded,"rounded")
{
		HX_STACK_LINE(22)
		::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		::phoenix::Vector tile_coord = tmp;		HX_STACK_VAR(tile_coord,"tile_coord");
		HX_STACK_LINE(24)
		Float tmp1 = (tile_width * scale);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		Float _scaled_tw = tmp1;		HX_STACK_VAR(_scaled_tw,"_scaled_tw");
		HX_STACK_LINE(25)
		Float tmp2 = (tile_height * scale);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		Float _scaled_th = tmp2;		HX_STACK_VAR(_scaled_th,"_scaled_th");
		HX_STACK_LINE(27)
		Float tmp3 = (Float(_scaled_tw) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		Float tile_width_half = tmp3;		HX_STACK_VAR(tile_width_half,"tile_width_half");
		HX_STACK_LINE(28)
		Float tmp4 = (Float(_scaled_th) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		Float tile_height_half = tmp4;		HX_STACK_VAR(tile_height_half,"tile_height_half");
		HX_STACK_LINE(30)
		{
			HX_STACK_LINE(30)
			Float tmp5 = (Float(world_x) / Float(tile_width_half));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(30)
			Float tmp6 = (Float(world_y) / Float(tile_height_half));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(30)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(30)
			Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(30)
			Float _x = tmp8;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(30)
			tile_coord->x = _x;
			HX_STACK_LINE(30)
			bool tmp9 = tile_coord->_construct;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(30)
			if ((tmp9)){
				HX_STACK_LINE(30)
				tile_coord->x;
			}
			else{
				HX_STACK_LINE(30)
				bool tmp10 = (tile_coord->listen_x != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(30)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(30)
				if ((tmp10)){
					HX_STACK_LINE(30)
					bool tmp12 = tile_coord->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(30)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(30)
					tmp11 = !(tmp13);
				}
				else{
					HX_STACK_LINE(30)
					tmp11 = false;
				}
				HX_STACK_LINE(30)
				if ((tmp11)){
					HX_STACK_LINE(30)
					Float tmp12 = _x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(30)
					tile_coord->listen_x(tmp12);
				}
				HX_STACK_LINE(30)
				tile_coord->x;
			}
		}
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			Float tmp5 = (Float(world_y) / Float(tile_height_half));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(31)
			Float tmp6 = (Float(world_x) / Float(tile_width_half));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(31)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(31)
			Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(31)
			Float _y = tmp8;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(31)
			tile_coord->y = _y;
			HX_STACK_LINE(31)
			bool tmp9 = tile_coord->_construct;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(31)
			if ((tmp9)){
				HX_STACK_LINE(31)
				tile_coord->y;
			}
			else{
				HX_STACK_LINE(31)
				bool tmp10 = (tile_coord->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(31)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(31)
				if ((tmp10)){
					HX_STACK_LINE(31)
					bool tmp12 = tile_coord->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(31)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(31)
					tmp11 = !(tmp13);
				}
				else{
					HX_STACK_LINE(31)
					tmp11 = false;
				}
				HX_STACK_LINE(31)
				if ((tmp11)){
					HX_STACK_LINE(31)
					Float tmp12 = _y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(31)
					tile_coord->listen_y(tmp12);
				}
				HX_STACK_LINE(31)
				tile_coord->y;
			}
		}
		HX_STACK_LINE(33)
		Dynamic tmp5 = rounded;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		if ((tmp5)){
			HX_STACK_LINE(34)
			{
				HX_STACK_LINE(34)
				Float tmp6 = tile_coord->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(34)
				int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(34)
				Float _x = tmp7;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(34)
				tile_coord->x = _x;
				HX_STACK_LINE(34)
				bool tmp8 = tile_coord->_construct;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(34)
				if ((tmp8)){
					HX_STACK_LINE(34)
					tile_coord->x;
				}
				else{
					HX_STACK_LINE(34)
					bool tmp9 = (tile_coord->listen_x != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(34)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(34)
					if ((tmp9)){
						HX_STACK_LINE(34)
						bool tmp11 = tile_coord->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(34)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(34)
						tmp10 = !(tmp12);
					}
					else{
						HX_STACK_LINE(34)
						tmp10 = false;
					}
					HX_STACK_LINE(34)
					if ((tmp10)){
						HX_STACK_LINE(34)
						Float tmp11 = _x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(34)
						tile_coord->listen_x(tmp11);
					}
					HX_STACK_LINE(34)
					tile_coord->x;
				}
			}
			HX_STACK_LINE(35)
			{
				HX_STACK_LINE(35)
				Float tmp6 = tile_coord->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(35)
				int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(35)
				Float _y = tmp7;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(35)
				tile_coord->y = _y;
				HX_STACK_LINE(35)
				bool tmp8 = tile_coord->_construct;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(35)
				if ((tmp8)){
					HX_STACK_LINE(35)
					tile_coord->y;
				}
				else{
					HX_STACK_LINE(35)
					bool tmp9 = (tile_coord->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(35)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(35)
					if ((tmp9)){
						HX_STACK_LINE(35)
						bool tmp11 = tile_coord->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(35)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(35)
						tmp10 = !(tmp12);
					}
					else{
						HX_STACK_LINE(35)
						tmp10 = false;
					}
					HX_STACK_LINE(35)
					if ((tmp10)){
						HX_STACK_LINE(35)
						Float tmp11 = _y;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(35)
						tile_coord->listen_y(tmp11);
					}
					HX_STACK_LINE(35)
					tile_coord->y;
				}
			}
		}
		HX_STACK_LINE(38)
		::phoenix::Vector tmp6 = tile_coord;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		return tmp6;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Isometric_obj,worldpos_to_tile_coord,return )

::phoenix::Vector Isometric_obj::tile_coord_to_worldpos( int tile_x,int tile_y,int tile_width,int tile_height,Dynamic __o_scale,::luxe::tilemaps::TileOffset offset_x,::luxe::tilemaps::TileOffset offset_y){
Dynamic scale = __o_scale.Default(((Float)1.0));
	HX_STACK_FRAME("luxe.tilemaps.Isometric","tile_coord_to_worldpos",0x13650835,"luxe.tilemaps.Isometric.tile_coord_to_worldpos","luxe/tilemaps/Isometric.hx",43,0x6f42617a)
	HX_STACK_ARG(tile_x,"tile_x")
	HX_STACK_ARG(tile_y,"tile_y")
	HX_STACK_ARG(tile_width,"tile_width")
	HX_STACK_ARG(tile_height,"tile_height")
	HX_STACK_ARG(scale,"scale")
	HX_STACK_ARG(offset_x,"offset_x")
	HX_STACK_ARG(offset_y,"offset_y")
{
		HX_STACK_LINE(44)
		::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		::phoenix::Vector world_pos = tmp;		HX_STACK_VAR(world_pos,"world_pos");
		HX_STACK_LINE(46)
		Float tmp1 = (tile_width * scale);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		Float _scaled_tw = tmp1;		HX_STACK_VAR(_scaled_tw,"_scaled_tw");
		HX_STACK_LINE(47)
		Float tmp2 = (tile_height * scale);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		Float _scaled_th = tmp2;		HX_STACK_VAR(_scaled_th,"_scaled_th");
		HX_STACK_LINE(49)
		Float tmp3 = (Float(_scaled_tw) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		Float tile_width_half = tmp3;		HX_STACK_VAR(tile_width_half,"tile_width_half");
		HX_STACK_LINE(50)
		Float tmp4 = (Float(_scaled_th) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		Float tile_height_half = tmp4;		HX_STACK_VAR(tile_height_half,"tile_height_half");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			bool tmp5 = (offset_x == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			if ((tmp5)){
				HX_STACK_LINE(53)
				offset_x = ::luxe::tilemaps::TileOffset_obj::left;
			}
			HX_STACK_LINE(53)
			offset_x;
		}
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			bool tmp5 = (offset_y == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(54)
			if ((tmp5)){
				HX_STACK_LINE(54)
				offset_y = ::luxe::tilemaps::TileOffset_obj::top;
			}
			HX_STACK_LINE(54)
			offset_y;
		}
		HX_STACK_LINE(56)
		Float tile_offset_x = (int)0;		HX_STACK_VAR(tile_offset_x,"tile_offset_x");
		HX_STACK_LINE(57)
		Float tile_offset_y = (int)0;		HX_STACK_VAR(tile_offset_y,"tile_offset_y");
		HX_STACK_LINE(59)
		bool tmp5 = (offset_x != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		if ((tmp5)){
			HX_STACK_LINE(59)
			switch( (int)(offset_x->__Index())){
				case (int)0: {
					HX_STACK_LINE(60)
					Float tmp6 = (Float(_scaled_tw) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(60)
					hx::AddEq(tile_offset_x,tmp6);
					HX_STACK_LINE(60)
					hx::DivEq(tile_offset_x,_scaled_tw);
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(61)
					hx::AddEq(tile_offset_x,_scaled_tw);
					HX_STACK_LINE(61)
					hx::DivEq(tile_offset_x,_scaled_tw);
				}
				;break;
				default: {
				}
			}
		}
		else{
		}
		HX_STACK_LINE(65)
		bool tmp6 = (offset_y != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(65)
		if ((tmp6)){
			HX_STACK_LINE(65)
			switch( (int)(offset_y->__Index())){
				case (int)0: {
					HX_STACK_LINE(66)
					Float tmp7 = (Float(_scaled_th) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(66)
					hx::AddEq(tile_offset_y,tmp7);
					HX_STACK_LINE(66)
					hx::DivEq(tile_offset_y,_scaled_th);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(67)
					hx::AddEq(tile_offset_y,_scaled_th);
					HX_STACK_LINE(67)
					hx::DivEq(tile_offset_y,_scaled_th);
				}
				;break;
				default: {
				}
			}
		}
		else{
		}
		HX_STACK_LINE(71)
		hx::AddEq(tile_offset_x,tile_x);
		HX_STACK_LINE(72)
		hx::AddEq(tile_offset_y,tile_y);
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			Float tmp7 = (tile_offset_x - tile_offset_y);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(74)
			Float tmp8 = tile_width_half;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(74)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(74)
			Float _x = tmp9;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(74)
			world_pos->x = _x;
			HX_STACK_LINE(74)
			bool tmp10 = world_pos->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(74)
			if ((tmp10)){
				HX_STACK_LINE(74)
				world_pos->x;
			}
			else{
				HX_STACK_LINE(74)
				bool tmp11 = (world_pos->listen_x != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(74)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(74)
				if ((tmp11)){
					HX_STACK_LINE(74)
					bool tmp13 = world_pos->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(74)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(74)
					tmp12 = !(tmp14);
				}
				else{
					HX_STACK_LINE(74)
					tmp12 = false;
				}
				HX_STACK_LINE(74)
				if ((tmp12)){
					HX_STACK_LINE(74)
					Float tmp13 = _x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(74)
					world_pos->listen_x(tmp13);
				}
				HX_STACK_LINE(74)
				world_pos->x;
			}
		}
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			Float tmp7 = (tile_offset_x + tile_offset_y);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(75)
			Float tmp8 = tile_height_half;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(75)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(75)
			Float _y = tmp9;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(75)
			world_pos->y = _y;
			HX_STACK_LINE(75)
			bool tmp10 = world_pos->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(75)
			if ((tmp10)){
				HX_STACK_LINE(75)
				world_pos->y;
			}
			else{
				HX_STACK_LINE(75)
				bool tmp11 = (world_pos->listen_y != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(75)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(75)
				if ((tmp11)){
					HX_STACK_LINE(75)
					bool tmp13 = world_pos->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(75)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(75)
					tmp12 = !(tmp14);
				}
				else{
					HX_STACK_LINE(75)
					tmp12 = false;
				}
				HX_STACK_LINE(75)
				if ((tmp12)){
					HX_STACK_LINE(75)
					Float tmp13 = _y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(75)
					world_pos->listen_y(tmp13);
				}
				HX_STACK_LINE(75)
				world_pos->y;
			}
		}
		HX_STACK_LINE(77)
		::phoenix::Vector tmp7 = world_pos;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Isometric_obj,tile_coord_to_worldpos,return )


Isometric_obj::Isometric_obj()
{
}

bool Isometric_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(Isometric_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Isometric_obj::__mClass,"__mClass");
};

#endif

hx::Class Isometric_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("worldpos_to_tile_coord","\x6b","\x2d","\x09","\x6d"),
	HX_HCSTRING("tile_coord_to_worldpos","\xab","\x88","\x79","\xf9"),
	::String(null()) };

void Isometric_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tilemaps.Isometric","\xa4","\x07","\xf5","\x2e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Isometric_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Isometric_obj >;
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
