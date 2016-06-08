#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
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
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{
namespace tilemaps{

Void Tile_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("luxe.tilemaps.Tile","new",0x0fa99191,"luxe.tilemaps.Tile.new","luxe/tilemaps/Tilemap.hx",176,0x1cf567e1)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(190)
	this->id = (int)0;
	HX_STACK_LINE(194)
	::luxe::utils::Utils tmp = ::Luxe_obj::utils;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	::String tmp1 = tmp->uniqueid(null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	this->uuid = tmp1;
	HX_STACK_LINE(195)
	int tmp2 = options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(195)
	this->set_id(tmp2);
	HX_STACK_LINE(196)
	this->layer = options->__Field(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"), hx::paccDynamic );
	HX_STACK_LINE(197)
	::luxe::tilemaps::Tilemap tmp3 = options->__Field(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(197)
	this->map = tmp3;
	HX_STACK_LINE(199)
	this->x = options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
	HX_STACK_LINE(200)
	this->y = options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
	HX_STACK_LINE(202)
	Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(202)
	{
		HX_STACK_LINE(202)
		bool tmp5 = (options->__Field(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(202)
		if ((tmp5)){
			HX_STACK_LINE(202)
			options->__FieldRef(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02")) = false;
		}
		HX_STACK_LINE(202)
		tmp4 = options->__Field(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"), hx::paccDynamic );
	}
	HX_STACK_LINE(202)
	this->set_flipx(tmp4);
	HX_STACK_LINE(203)
	Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(203)
	{
		HX_STACK_LINE(203)
		bool tmp6 = (options->__Field(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(203)
		if ((tmp6)){
			HX_STACK_LINE(203)
			options->__FieldRef(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02")) = false;
		}
		HX_STACK_LINE(203)
		tmp5 = options->__Field(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"), hx::paccDynamic );
	}
	HX_STACK_LINE(203)
	this->set_flipy(tmp5);
	HX_STACK_LINE(204)
	Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(204)
	{
		HX_STACK_LINE(204)
		bool tmp7 = (options->__Field(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(204)
		if ((tmp7)){
			HX_STACK_LINE(204)
			options->__FieldRef(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")) = (int)0;
		}
		HX_STACK_LINE(204)
		tmp6 = options->__Field(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"), hx::paccDynamic );
	}
	HX_STACK_LINE(204)
	this->set_angle(tmp6);
	HX_STACK_LINE(207)
	::luxe::tilemaps::Tilemap tmp7 = this->map;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(207)
	int tmp8 = this->id;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(207)
	::luxe::tilemaps::Tileset tmp9 = tmp7->tileset_from_id(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(207)
	::luxe::tilemaps::Tileset _tileset = tmp9;		HX_STACK_VAR(_tileset,"_tileset");
	HX_STACK_LINE(209)
	bool tmp10 = (_tileset != null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(209)
	if ((tmp10)){
		HX_STACK_LINE(210)
		::phoenix::Vector tmp11 = ::phoenix::Vector_obj::__new(_tileset->tile_width,_tileset->tile_height,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(210)
		this->size = tmp11;
	}
	else{
		HX_STACK_LINE(212)
		::luxe::tilemaps::Tilemap tmp11 = this->map;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(212)
		int tmp12 = tmp11->tile_width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(212)
		::luxe::tilemaps::Tilemap tmp13 = this->map;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(212)
		int tmp14 = tmp13->tile_height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(212)
		::phoenix::Vector tmp15 = ::phoenix::Vector_obj::__new(tmp12,tmp14,null(),null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(212)
		this->size = tmp15;
	}
}
;
	return null();
}

//Tile_obj::~Tile_obj() { }

Dynamic Tile_obj::__CreateEmpty() { return  new Tile_obj; }
hx::ObjectPtr< Tile_obj > Tile_obj::__new(Dynamic options)
{  hx::ObjectPtr< Tile_obj > _result_ = new Tile_obj();
	_result_->__construct(options);
	return _result_;}

Dynamic Tile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tile_obj > _result_ = new Tile_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Tile_obj::toString( ){
	HX_STACK_FRAME("luxe.tilemaps.Tile","toString",0xed1a1ddb,"luxe.tilemaps.Tile.toString","luxe/tilemaps/Tilemap.hx",217,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	::luxe::tilemaps::Tilemap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	int tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	int tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(218)
	::phoenix::Vector tmp3 = tmp->tile_pos(tmp1,tmp2,null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(218)
	::phoenix::Vector _pos = tmp3;		HX_STACK_VAR(_pos,"_pos");
	HX_STACK_LINE(219)
	int tmp4 = this->id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(219)
	::String tmp5 = (HX_HCSTRING("Tile: id:","\x0b","\x4b","\xb5","\x14") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(219)
	::String tmp6 = (tmp5 + HX_HCSTRING(" x,y:","\x75","\xf7","\x45","\xbc"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(219)
	int tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(219)
	::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(219)
	::String tmp9 = (tmp8 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(219)
	int tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(219)
	::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(219)
	::String tmp12 = (tmp11 + HX_HCSTRING(" layer(","\x57","\xed","\x5f","\x8b"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(219)
	::luxe::tilemaps::TileLayer tmp13 = this->layer;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(219)
	::String tmp14 = tmp13->name;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(219)
	::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(219)
	::String tmp16 = (tmp15 + HX_HCSTRING(") coord(","\xea","\xc2","\x47","\x24"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(219)
	int tmp17 = this->x;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(219)
	::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(219)
	::String tmp19 = (tmp18 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(219)
	int tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(219)
	::String tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(219)
	::String tmp22 = (tmp21 + HX_HCSTRING(") pos(","\x6b","\xdf","\xd0","\x1b"));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(219)
	Float tmp23 = _pos->x;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(219)
	::String tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(219)
	::String tmp25 = (tmp24 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(219)
	Float tmp26 = _pos->y;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(219)
	::String tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(219)
	::String tmp28 = (tmp27 + HX_HCSTRING(") size(","\x10","\x99","\x34","\xf1"));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(219)
	::phoenix::Vector tmp29 = this->size;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(219)
	Float tmp30 = tmp29->x;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(219)
	::String tmp31 = (tmp28 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(219)
	::String tmp32 = (tmp31 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(219)
	::phoenix::Vector tmp33 = this->size;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(219)
	Float tmp34 = tmp33->y;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(219)
	::String tmp35 = (tmp32 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(219)
	::String tmp36 = (tmp35 + HX_HCSTRING(") flipx,flipy:","\x46","\x3b","\xd6","\xd0"));		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(219)
	bool tmp37 = this->flipx;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(219)
	::String tmp38 = ::Std_obj::string(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(219)
	::String tmp39 = (tmp36 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(219)
	::String tmp40 = (tmp39 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(219)
	bool tmp41 = this->flipy;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(219)
	::String tmp42 = ::Std_obj::string(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(219)
	::String tmp43 = (tmp40 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(219)
	::String tmp44 = (tmp43 + HX_HCSTRING(" angle:","\x27","\xed","\xc7","\x95"));		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(219)
	int tmp45 = this->angle;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(219)
	::String tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(219)
	return tmp46;
}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,toString,return )

int Tile_obj::set_id( int _id){
	HX_STACK_FRAME("luxe.tilemaps.Tile","set_id",0x95d49b07,"luxe.tilemaps.Tile.set_id","luxe/tilemaps/Tilemap.hx",222,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(227)
	this->id = _id;
	HX_STACK_LINE(229)
	::luxe::tilemaps::Tilemap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(229)
	if ((tmp1)){
		HX_STACK_LINE(230)
		::luxe::tilemaps::Tilemap tmp2 = this->map;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(230)
		::luxe::tilemaps::TilemapVisual tmp3 = tmp2->visual;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(230)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(230)
		if ((tmp4)){
			HX_STACK_LINE(231)
			::luxe::tilemaps::Tilemap tmp5 = this->map;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(231)
			::luxe::tilemaps::TileLayer tmp6 = this->layer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(231)
			::String tmp7 = tmp6->name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(231)
			int tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(231)
			int tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(231)
			int tmp10 = _id;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(231)
			bool tmp11 = this->flipx;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(231)
			bool tmp12 = this->flipy;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(231)
			int tmp13 = this->angle;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(231)
			tmp5->visual->refresh_tile_id(tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13);
		}
	}
	HX_STACK_LINE(235)
	int tmp2 = this->id;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(235)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_id,return )

bool Tile_obj::set_flipx( bool _val){
	HX_STACK_FRAME("luxe.tilemaps.Tile","set_flipx",0x8ac4c97f,"luxe.tilemaps.Tile.set_flipx","luxe/tilemaps/Tilemap.hx",239,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(240)
	this->flipx = _val;
	HX_STACK_LINE(241)
	::luxe::tilemaps::Tilemap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(241)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(241)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(241)
	if ((tmp1)){
		HX_STACK_LINE(241)
		::luxe::tilemaps::Tilemap tmp3 = this->map;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(241)
		::luxe::tilemaps::Tilemap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(241)
		::luxe::tilemaps::TilemapVisual tmp5 = tmp4->visual;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(241)
		tmp2 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(241)
		tmp2 = false;
	}
	HX_STACK_LINE(241)
	if ((tmp2)){
		HX_STACK_LINE(242)
		::luxe::tilemaps::Tilemap tmp3 = this->map;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(242)
		::luxe::tilemaps::TileLayer tmp4 = this->layer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(242)
		::String tmp5 = tmp4->name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(242)
		int tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(242)
		int tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(242)
		int tmp8 = this->id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(242)
		bool tmp9 = this->flipx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(242)
		bool tmp10 = this->flipy;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(242)
		int tmp11 = this->angle;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(242)
		tmp3->visual->refresh_tile_id(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);
	}
	HX_STACK_LINE(244)
	bool tmp3 = this->flipx;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(244)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_flipx,return )

bool Tile_obj::set_flipy( bool _val){
	HX_STACK_FRAME("luxe.tilemaps.Tile","set_flipy",0x8ac4c980,"luxe.tilemaps.Tile.set_flipy","luxe/tilemaps/Tilemap.hx",247,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(248)
	this->flipy = _val;
	HX_STACK_LINE(249)
	::luxe::tilemaps::Tilemap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(249)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(249)
	if ((tmp1)){
		HX_STACK_LINE(249)
		::luxe::tilemaps::Tilemap tmp3 = this->map;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(249)
		::luxe::tilemaps::Tilemap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(249)
		::luxe::tilemaps::TilemapVisual tmp5 = tmp4->visual;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(249)
		tmp2 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(249)
		tmp2 = false;
	}
	HX_STACK_LINE(249)
	if ((tmp2)){
		HX_STACK_LINE(250)
		::luxe::tilemaps::Tilemap tmp3 = this->map;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(250)
		::luxe::tilemaps::TileLayer tmp4 = this->layer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(250)
		::String tmp5 = tmp4->name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(250)
		int tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(250)
		int tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(250)
		int tmp8 = this->id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(250)
		bool tmp9 = this->flipx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(250)
		bool tmp10 = this->flipy;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(250)
		int tmp11 = this->angle;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(250)
		tmp3->visual->refresh_tile_id(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);
	}
	HX_STACK_LINE(252)
	bool tmp3 = this->flipy;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(252)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_flipy,return )

int Tile_obj::set_angle( int _val){
	HX_STACK_FRAME("luxe.tilemaps.Tile","set_angle",0xab14c827,"luxe.tilemaps.Tile.set_angle","luxe/tilemaps/Tilemap.hx",255,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(256)
	{
		HX_STACK_LINE(256)
		int tmp = hx::Mod(_val,(int)90);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(256)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(256)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(256)
		if ((tmp2)){
			HX_STACK_LINE(214)
			::String tmp3 = HX_HCSTRING(" ( Tile angle has to be a multiple of 90","\x14","\x40","\x83","\xcc");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(214)
			::String tmp4 = (tmp3 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(256)
			::String tmp5 = (HX_HCSTRING("_val % 90 == 0","\xa0","\xbb","\xa6","\x61") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(256)
			::luxe::DebugError tmp6 = ::luxe::DebugError_obj::assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(256)
			HX_STACK_DO_THROW(tmp6);
		}
	}
	HX_STACK_LINE(257)
	this->angle = _val;
	HX_STACK_LINE(258)
	::luxe::tilemaps::Tilemap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(258)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(258)
	if ((tmp1)){
		HX_STACK_LINE(258)
		::luxe::tilemaps::Tilemap tmp3 = this->map;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		::luxe::tilemaps::Tilemap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(258)
		::luxe::tilemaps::TilemapVisual tmp5 = tmp4->visual;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(258)
		tmp2 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(258)
		tmp2 = false;
	}
	HX_STACK_LINE(258)
	if ((tmp2)){
		HX_STACK_LINE(259)
		::luxe::tilemaps::Tilemap tmp3 = this->map;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(259)
		::luxe::tilemaps::TileLayer tmp4 = this->layer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(259)
		::String tmp5 = tmp4->name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(259)
		int tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(259)
		int tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(259)
		int tmp8 = this->id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(259)
		bool tmp9 = this->flipx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(259)
		bool tmp10 = this->flipy;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(259)
		int tmp11 = this->angle;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(259)
		tmp3->visual->refresh_tile_id(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);
	}
	HX_STACK_LINE(261)
	int tmp3 = this->angle;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(261)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_angle,return )


Tile_obj::Tile_obj()
{
}

void Tile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tile);
	HX_MARK_MEMBER_NAME(uuid,"uuid");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(flipx,"flipx");
	HX_MARK_MEMBER_NAME(flipy,"flipy");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(layer,"layer");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void Tile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uuid,"uuid");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(flipx,"flipx");
	HX_VISIT_MEMBER_NAME(flipy,"flipy");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(layer,"layer");
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(id,"id");
}

Dynamic Tile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"uuid") ) { return uuid; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flipx") ) { return flipx; }
		if (HX_FIELD_EQ(inName,"flipy") ) { return flipy; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"layer") ) { return layer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"set_id") ) { return set_id_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_flipx") ) { return set_flipx_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipy") ) { return set_flipy_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tile_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == hx::paccAlways) return set_id(inValue);id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::luxe::tilemaps::Tilemap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"uuid") ) { uuid=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flipx") ) { if (inCallProp == hx::paccAlways) return set_flipx(inValue);flipx=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipy") ) { if (inCallProp == hx::paccAlways) return set_flipy(inValue);flipy=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return set_angle(inValue);angle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layer") ) { layer=inValue.Cast< ::luxe::tilemaps::TileLayer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("uuid","\x3b","\x1a","\xaf","\x4d"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"));
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Tile_obj,uuid),HX_HCSTRING("uuid","\x3b","\x1a","\xaf","\x4d")},
	{hx::fsInt,(int)offsetof(Tile_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Tile_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Tile_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsBool,(int)offsetof(Tile_obj,flipx),HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02")},
	{hx::fsBool,(int)offsetof(Tile_obj,flipy),HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02")},
	{hx::fsInt,(int)offsetof(Tile_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsObject /*::luxe::tilemaps::TileLayer*/ ,(int)offsetof(Tile_obj,layer),HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f")},
	{hx::fsObject /*::luxe::tilemaps::Tilemap*/ ,(int)offsetof(Tile_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsInt,(int)offsetof(Tile_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("uuid","\x3b","\x1a","\xaf","\x4d"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"),
	HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"),
	HX_HCSTRING("set_flipx","\x8e","\x8d","\x8c","\x29"),
	HX_HCSTRING("set_flipy","\x8f","\x8d","\x8c","\x29"),
	HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tile_obj::__mClass,"__mClass");
};

#endif

hx::Class Tile_obj::__mClass;

void Tile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tilemaps.Tile","\x1f","\x75","\x23","\xe8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tile_obj >;
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
