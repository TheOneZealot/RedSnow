#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
namespace luxe{
namespace tilemaps{

Void TilemapVisual_obj::__construct(::luxe::tilemaps::Tilemap _map,Dynamic _options)
{
HX_STACK_FRAME("luxe.tilemaps.TilemapVisual","new",0x2d8290ef,"luxe.tilemaps.TilemapVisual.new","luxe/tilemaps/Tilemap.hx",21,0x1cf567e1)
HX_STACK_THIS(this)
HX_STACK_ARG(_map,"_map")
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(23)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	{
		HX_STACK_LINE(23)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		tmp = tmp2;
	}
	HX_STACK_LINE(23)
	this->geometry = tmp;
	HX_STACK_LINE(24)
	this->map = _map;
	HX_STACK_LINE(25)
	this->options = _options;
	HX_STACK_LINE(27)
	this->default_options();
	HX_STACK_LINE(29)
	this->create();
}
;
	return null();
}

//TilemapVisual_obj::~TilemapVisual_obj() { }

Dynamic TilemapVisual_obj::__CreateEmpty() { return  new TilemapVisual_obj; }
hx::ObjectPtr< TilemapVisual_obj > TilemapVisual_obj::__new(::luxe::tilemaps::Tilemap _map,Dynamic _options)
{  hx::ObjectPtr< TilemapVisual_obj > _result_ = new TilemapVisual_obj();
	_result_->__construct(_map,_options);
	return _result_;}

Dynamic TilemapVisual_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TilemapVisual_obj > _result_ = new TilemapVisual_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void TilemapVisual_obj::create( ){
{
		HX_STACK_FRAME("luxe.tilemaps.TilemapVisual","create",0x871e29cd,"luxe.tilemaps.TilemapVisual.create","luxe/tilemaps/Tilemap.hx",33,0x1cf567e1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		Dynamic tmp1 = tmp->__Field(HX_HCSTRING("no_destroy","\xbc","\x8f","\xea","\x74"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		if ((tmp2)){
			HX_STACK_LINE(35)
			Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(35)
			Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(35)
			Dynamic tmp6 = tmp5->__Field(HX_HCSTRING("no_destroy","\xbc","\x8f","\xea","\x74"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(35)
			tmp3 = (tmp6 != true);
		}
		else{
			HX_STACK_LINE(35)
			tmp3 = false;
		}
		HX_STACK_LINE(35)
		if ((tmp3)){
			HX_STACK_LINE(36)
			this->destroy();
			HX_STACK_LINE(37)
			::haxe::ds::StringMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(37)
			{
				HX_STACK_LINE(37)
				::haxe::ds::StringMap tmp5 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(37)
				::haxe::ds::StringMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(37)
				tmp4 = tmp6;
			}
			HX_STACK_LINE(37)
			this->geometry = tmp4;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TilemapVisual_obj,create,(void))

::phoenix::geometry::Geometry TilemapVisual_obj::geometry_for_tile( ::String _layer,int x,int y){
	HX_STACK_FRAME("luxe.tilemaps.TilemapVisual","geometry_for_tile",0x99360aa0,"luxe.tilemaps.TilemapVisual.geometry_for_tile","luxe/tilemaps/Tilemap.hx",44,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_layer,"_layer")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(46)
	::haxe::ds::StringMap tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	::String tmp1 = _layer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	if ((tmp3)){
		HX_STACK_LINE(47)
		::String tmp4 = (HX_HCSTRING("visual / geometry_for_layer / ","\x12","\x86","\x50","\xcd") + _layer);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		::String tmp5 = (tmp4 + HX_HCSTRING(" does not exist in tilemap visual","\xd0","\xf8","\xb9","\xec"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		::String tmp6 = (HX_HCSTRING("  i / tilemap / ","\x2b","\xd8","\x79","\x2d") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Tilemap.hx","\x70","\x27","\xa3","\xdf"),47,HX_HCSTRING("luxe.tilemaps.TilemapVisual","\x7d","\xed","\xb5","\x9f"),HX_HCSTRING("geometry_for_tile","\xd1","\x0d","\x29","\x07"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(47)
		::haxe::Log_obj::trace(tmp6,tmp7);
		HX_STACK_LINE(48)
		return null();
	}
	HX_STACK_LINE(51)
	::String tmp4 = _layer;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(51)
	Array< ::Dynamic > geomlayer = this->geometry_for_layer(tmp4);		HX_STACK_VAR(geomlayer,"geomlayer");
	HX_STACK_LINE(53)
	::phoenix::geometry::Geometry tmp5 = geomlayer->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(53)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC3(TilemapVisual_obj,geometry_for_tile,return )

Array< ::Dynamic > TilemapVisual_obj::geometry_for_layer( ::String _layer){
	HX_STACK_FRAME("luxe.tilemaps.TilemapVisual","geometry_for_layer",0xd59ec61f,"luxe.tilemaps.TilemapVisual.geometry_for_layer","luxe/tilemaps/Tilemap.hx",57,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_layer,"_layer")
	HX_STACK_LINE(59)
	::haxe::ds::StringMap tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	::String tmp1 = _layer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	if ((tmp3)){
		HX_STACK_LINE(60)
		::String tmp4 = (HX_HCSTRING("visual / geometry_for_layer / ","\x12","\x86","\x50","\xcd") + _layer);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		::String tmp5 = (tmp4 + HX_HCSTRING(" does not exist in tilemap visual","\xd0","\xf8","\xb9","\xec"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		::String tmp6 = (HX_HCSTRING("  i / tilemap / ","\x2b","\xd8","\x79","\x2d") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Tilemap.hx","\x70","\x27","\xa3","\xdf"),60,HX_HCSTRING("luxe.tilemaps.TilemapVisual","\x7d","\xed","\xb5","\x9f"),HX_HCSTRING("geometry_for_layer","\xce","\x8d","\x4e","\x9c"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(60)
		::haxe::Log_obj::trace(tmp6,tmp7);
	}
	HX_STACK_LINE(63)
	::haxe::ds::StringMap tmp4 = this->geometry;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(63)
	::String tmp5 = _layer;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(63)
	return ((Array< ::Dynamic >)(tmp4->get(tmp5)));
}


HX_DEFINE_DYNAMIC_FUNC1(TilemapVisual_obj,geometry_for_layer,return )

Void TilemapVisual_obj::default_options( ){
{
		HX_STACK_FRAME("luxe.tilemaps.TilemapVisual","default_options",0xf7e769af,"luxe.tilemaps.TilemapVisual.default_options","luxe/tilemaps/Tilemap.hx",67,0x1cf567e1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(69)
			::phoenix::Batcher tmp1 = tmp->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(69)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(69)
			if ((tmp2)){
				HX_STACK_LINE(69)
				::phoenix::Renderer tmp3 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(69)
				Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(69)
				tmp4->__FieldRef(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")) = tmp3->batcher;
			}
			HX_STACK_LINE(69)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(69)
			tmp3->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );
		}
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(70)
			Dynamic tmp1 = tmp->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(70)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			if ((tmp2)){
				HX_STACK_LINE(70)
				Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(70)
				tmp3->__FieldRef(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")) = ((Float)0.0);
			}
			HX_STACK_LINE(70)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(70)
			tmp3->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );
		}
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(71)
			Dynamic tmp1 = tmp->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(71)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(71)
			if ((tmp2)){
				HX_STACK_LINE(71)
				Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(71)
				tmp3->__FieldRef(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")) = (int)1;
			}
			HX_STACK_LINE(71)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(71)
			tmp3->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );
		}
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(72)
			Dynamic tmp1 = tmp->__Field(HX_HCSTRING("grid","\xc6","\xd6","\x6b","\x44"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(72)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			if ((tmp2)){
				HX_STACK_LINE(72)
				Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(72)
				tmp3->__FieldRef(HX_HCSTRING("grid","\xc6","\xd6","\x6b","\x44")) = false;
			}
			HX_STACK_LINE(72)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			tmp3->__Field(HX_HCSTRING("grid","\xc6","\xd6","\x6b","\x44"), hx::paccDynamic );
		}
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(73)
			Dynamic tmp1 = tmp->__Field(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(73)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			if ((tmp2)){
				HX_STACK_LINE(73)
				Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(73)
				tmp3->__FieldRef(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85")) = (int)9728;
			}
			HX_STACK_LINE(73)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(73)
			tmp3->__Field(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"), hx::paccDynamic );
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TilemapVisual_obj,default_options,(void))

::phoenix::geometry::Geometry TilemapVisual_obj::create_tile_for_layer( ::luxe::tilemaps::TileLayer layer,int x,int y){
	HX_STACK_FRAME("luxe.tilemaps.TilemapVisual","create_tile_for_layer",0x381176bc,"luxe.tilemaps.TilemapVisual.create_tile_for_layer","luxe/tilemaps/Tilemap.hx",80,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer,"layer")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(80)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TilemapVisual_obj,create_tile_for_layer,return )

Void TilemapVisual_obj::update_tile_id( ::phoenix::geometry::Geometry _geom,::String _layer_name,int _x,int _y,int _id,bool _flipx,bool _flipy,int _angle){
{
		HX_STACK_FRAME("luxe.tilemaps.TilemapVisual","update_tile_id",0xcc6c63e7,"luxe.tilemaps.TilemapVisual.update_tile_id","luxe/tilemaps/Tilemap.hx",84,0x1cf567e1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_geom,"_geom")
		HX_STACK_ARG(_layer_name,"_layer_name")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_id,"_id")
		HX_STACK_ARG(_flipx,"_flipx")
		HX_STACK_ARG(_flipy,"_flipy")
		HX_STACK_ARG(_angle,"_angle")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(TilemapVisual_obj,update_tile_id,(void))

Void TilemapVisual_obj::refresh_tile_id( ::String _layer_name,int _x,int _y,int _id,hx::Null< bool >  __o__flipx,hx::Null< bool >  __o__flipy,hx::Null< int >  __o__angle){
bool _flipx = __o__flipx.Default(false);
bool _flipy = __o__flipy.Default(false);
int _angle = __o__angle.Default(0);
	HX_STACK_FRAME("luxe.tilemaps.TilemapVisual","refresh_tile_id",0x31b838f7,"luxe.tilemaps.TilemapVisual.refresh_tile_id","luxe/tilemaps/Tilemap.hx",93,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_layer_name,"_layer_name")
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_flipx,"_flipx")
	HX_STACK_ARG(_flipy,"_flipy")
	HX_STACK_ARG(_angle,"_angle")
{
		HX_STACK_LINE(95)
		::luxe::tilemaps::Tilemap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		::String tmp1 = _layer_name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		::luxe::tilemaps::TileLayer tmp2 = tmp->layer(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		::luxe::tilemaps::TileLayer _tile_layer = tmp2;		HX_STACK_VAR(_tile_layer,"_tile_layer");
		HX_STACK_LINE(96)
		::String tmp3 = _layer_name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		Array< ::Dynamic > _geom_layer = this->geometry_for_layer(tmp3);		HX_STACK_VAR(_geom_layer,"_geom_layer");
		HX_STACK_LINE(98)
		bool tmp4 = (_geom_layer != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(98)
		if ((tmp4)){
			HX_STACK_LINE(102)
			::luxe::tilemaps::Tilemap tmp5 = this->map;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(102)
			int tmp6 = _x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(102)
			int tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(102)
			bool tmp8 = tmp5->inside(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(102)
			if ((tmp8)){
				HX_STACK_LINE(104)
				::phoenix::geometry::Geometry tmp9 = _geom_layer->__get(_y).StaticCast< Array< ::Dynamic > >()->__get(_x).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(104)
				::phoenix::geometry::Geometry _geom = tmp9;		HX_STACK_VAR(_geom,"_geom");
				HX_STACK_LINE(108)
				bool tmp10 = (_geom == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(108)
				if ((tmp10)){
					HX_STACK_LINE(111)
					bool tmp11 = (_id != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(111)
					if ((tmp11)){
						HX_STACK_LINE(114)
						::luxe::tilemaps::Tilemap tmp12 = this->map;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(114)
						::String tmp13 = _layer_name;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(114)
						::luxe::tilemaps::TileLayer tmp14 = tmp12->layer(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(114)
						int tmp15 = _x;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(114)
						int tmp16 = _y;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(114)
						::phoenix::geometry::Geometry tmp17 = this->create_tile_for_layer(tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(114)
						_geom = tmp17;
						HX_STACK_LINE(116)
						::phoenix::geometry::Geometry tmp18 = _geom;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(116)
						_geom_layer->__get(_y).StaticCast< Array< ::Dynamic > >()[_x] = tmp18;
					}
				}
				else{
					HX_STACK_LINE(123)
					bool tmp11 = (_id == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(123)
					if ((tmp11)){
						HX_STACK_LINE(125)
						_geom->drop(null());
						HX_STACK_LINE(126)
						_geom = null();
						HX_STACK_LINE(127)
						_geom_layer->__get(_y).StaticCast< Array< ::Dynamic > >()[_x] = null();
					}
					else{
						HX_STACK_LINE(131)
						::phoenix::geometry::Geometry tmp12 = _geom;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(131)
						::String tmp13 = _layer_name;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(131)
						int tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(131)
						int tmp15 = _y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(131)
						int tmp16 = _id;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(131)
						bool tmp17 = _flipx;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(131)
						bool tmp18 = _flipy;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(131)
						int tmp19 = _angle;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(131)
						this->update_tile_id(tmp12,tmp13,tmp14,tmp15,tmp16,tmp17,tmp18,tmp19);
					}
				}
			}
			else{
				HX_STACK_LINE(138)
				::String tmp9 = (HX_HCSTRING("cannot refresh tile ","\x50","\x93","\x6c","\x89") + _x);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(138)
				::String tmp10 = (tmp9 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(138)
				int tmp11 = _y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(138)
				::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(138)
				::String tmp13 = (tmp12 + HX_HCSTRING(" because the coords were out of the map width/height : ","\xd2","\x1b","\x99","\xbb"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(138)
				::String tmp14 = _layer_name;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(138)
				::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(138)
				::String tmp16 = (tmp15 + HX_HCSTRING(" and ","\x89","\x11","\x44","\xad"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(138)
				::luxe::tilemaps::Tilemap tmp17 = this->map;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(138)
				int tmp18 = tmp17->width;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(138)
				::String tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(138)
				::String tmp20 = (tmp19 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(138)
				::luxe::tilemaps::Tilemap tmp21 = this->map;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(138)
				int tmp22 = tmp21->height;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(138)
				::String tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(138)
				Dynamic tmp24 = hx::SourceInfo(HX_HCSTRING("Tilemap.hx","\x70","\x27","\xa3","\xdf"),138,HX_HCSTRING("luxe.tilemaps.TilemapVisual","\x7d","\xed","\xb5","\x9f"),HX_HCSTRING("refresh_tile_id","\xe8","\x5d","\xe3","\xa2"));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(138)
				::haxe::Log_obj::trace(tmp23,tmp24);
			}
		}
		else{
			HX_STACK_LINE(142)
			::String tmp5 = (HX_HCSTRING("cannot refresh tile ","\x50","\x93","\x6c","\x89") + _x);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(142)
			::String tmp6 = (tmp5 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(142)
			int tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(142)
			::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(142)
			::String tmp9 = (tmp8 + HX_HCSTRING(" because layer was not found : ","\x31","\x1c","\x8f","\x22"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(142)
			::String tmp10 = _layer_name;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(142)
			::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(142)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Tilemap.hx","\x70","\x27","\xa3","\xdf"),142,HX_HCSTRING("luxe.tilemaps.TilemapVisual","\x7d","\xed","\xb5","\x9f"),HX_HCSTRING("refresh_tile_id","\xe8","\x5d","\xe3","\xa2"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(142)
			::haxe::Log_obj::trace(tmp11,tmp12);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(TilemapVisual_obj,refresh_tile_id,(void))

Void TilemapVisual_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.tilemaps.TilemapVisual","destroy",0xc661e109,"luxe.tilemaps.TilemapVisual.destroy","luxe/tilemaps/Tilemap.hx",148,0x1cf567e1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(150)
		::haxe::ds::StringMap tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		if ((tmp1)){
			HX_STACK_LINE(151)
			::haxe::ds::StringMap tmp2 = this->geometry;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(151)
			Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(151)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
				::String _name = __it->next();
				{
					HX_STACK_LINE(153)
					::haxe::ds::StringMap tmp4 = this->geometry;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(153)
					::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(153)
					Array< ::Dynamic > layer = ((Array< ::Dynamic >)(tmp4->get(tmp5)));		HX_STACK_VAR(layer,"layer");
					HX_STACK_LINE(155)
					{
						HX_STACK_LINE(155)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(155)
						while((true)){
							HX_STACK_LINE(155)
							bool tmp6 = (_g < layer->length);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(155)
							bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(155)
							if ((tmp7)){
								HX_STACK_LINE(155)
								break;
							}
							HX_STACK_LINE(155)
							Array< ::Dynamic > row = layer->__get(_g).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(row,"row");
							HX_STACK_LINE(155)
							++(_g);
							HX_STACK_LINE(156)
							{
								HX_STACK_LINE(156)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(156)
								while((true)){
									HX_STACK_LINE(156)
									bool tmp8 = (_g1 < row->length);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(156)
									bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(156)
									if ((tmp9)){
										HX_STACK_LINE(156)
										break;
									}
									HX_STACK_LINE(156)
									::phoenix::geometry::Geometry tmp10 = row->__get(_g1).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(156)
									::phoenix::geometry::Geometry tile = tmp10;		HX_STACK_VAR(tile,"tile");
									HX_STACK_LINE(156)
									++(_g1);
									HX_STACK_LINE(157)
									bool tmp11 = (tile != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(157)
									if ((tmp11)){
										HX_STACK_LINE(158)
										tile->drop(null());
									}
									HX_STACK_LINE(160)
									tile = null();
								}
							}
							HX_STACK_LINE(162)
							row = null();
						}
					}
					HX_STACK_LINE(165)
					::haxe::ds::StringMap tmp6 = this->geometry;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(165)
					::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(165)
					tmp6->remove(tmp7);
				}
;
			}
		}
		HX_STACK_LINE(170)
		this->geometry = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TilemapVisual_obj,destroy,(void))


TilemapVisual_obj::TilemapVisual_obj()
{
}

void TilemapVisual_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TilemapVisual);
	HX_MARK_MEMBER_NAME(geometry,"geometry");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_END_CLASS();
}

void TilemapVisual_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(geometry,"geometry");
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(options,"options");
}

Dynamic TilemapVisual_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { return geometry; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"update_tile_id") ) { return update_tile_id_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"default_options") ) { return default_options_dyn(); }
		if (HX_FIELD_EQ(inName,"refresh_tile_id") ) { return refresh_tile_id_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"geometry_for_tile") ) { return geometry_for_tile_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"geometry_for_layer") ) { return geometry_for_layer_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"create_tile_for_layer") ) { return create_tile_for_layer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TilemapVisual_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::luxe::tilemaps::Tilemap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { geometry=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TilemapVisual_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"));
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TilemapVisual_obj,geometry),HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2")},
	{hx::fsObject /*::luxe::tilemaps::Tilemap*/ ,(int)offsetof(TilemapVisual_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TilemapVisual_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("geometry_for_tile","\xd1","\x0d","\x29","\x07"),
	HX_HCSTRING("geometry_for_layer","\xce","\x8d","\x4e","\x9c"),
	HX_HCSTRING("default_options","\xa0","\x8e","\x12","\x69"),
	HX_HCSTRING("create_tile_for_layer","\x6d","\x66","\xe4","\x85"),
	HX_HCSTRING("update_tile_id","\x16","\xe8","\xb4","\xda"),
	HX_HCSTRING("refresh_tile_id","\xe8","\x5d","\xe3","\xa2"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TilemapVisual_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TilemapVisual_obj::__mClass,"__mClass");
};

#endif

hx::Class TilemapVisual_obj::__mClass;

void TilemapVisual_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tilemaps.TilemapVisual","\x7d","\xed","\xb5","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TilemapVisual_obj >;
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
