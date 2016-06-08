#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
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
#ifndef INCLUDED_luxe_tilemaps_Tile
#include <luxe/tilemaps/Tile.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_TileLayer
#include <luxe/tilemaps/TileLayer.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_Tilemap
#include <luxe/tilemaps/Tilemap.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
namespace luxe{
namespace tilemaps{

Void TileLayer_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("luxe.tilemaps.TileLayer","new",0xe52d2e24,"luxe.tilemaps.TileLayer.new","luxe/tilemaps/Tilemap.hx",266,0x1cf567e1)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(281)
	this->fixed = true;
	HX_STACK_LINE(278)
	this->visible = true;
	HX_STACK_LINE(276)
	this->opacity = ((Float)1.0);
	HX_STACK_LINE(291)
	{
		HX_STACK_LINE(291)
		bool tmp = (options->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(291)
		if ((tmp)){
			HX_STACK_LINE(230)
			::String tmp1 = HX_HCSTRING(" ( TileLayer requires a Tilemap passed into the options, as map:Tilemap","\x47","\x54","\x64","\xcb");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(230)
			::String tmp2 = (tmp1 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(291)
			::String tmp3 = (HX_HCSTRING("options.map was null","\xf2","\xb1","\xa3","\x5f") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(291)
			::luxe::DebugError tmp4 = ::luxe::DebugError_obj::null_assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(291)
			HX_STACK_DO_THROW(tmp4);
		}
	}
	HX_STACK_LINE(294)
	::luxe::utils::Utils tmp = ::Luxe_obj::utils;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	::String tmp1 = tmp->uniqueid(null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(294)
	this->id = tmp1;
	HX_STACK_LINE(295)
	this->name = options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
	HX_STACK_LINE(296)
	this->map = options->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic );
	HX_STACK_LINE(298)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(298)
	{
		HX_STACK_LINE(298)
		bool tmp3 = (options->__Field(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(298)
		if ((tmp3)){
			HX_STACK_LINE(298)
			options->__FieldRef(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f")) = (int)0;
		}
		HX_STACK_LINE(298)
		tmp2 = options->__Field(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"), hx::paccDynamic );
	}
	HX_STACK_LINE(298)
	this->layer = tmp2;
	HX_STACK_LINE(299)
	Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(299)
	{
		HX_STACK_LINE(299)
		bool tmp4 = (options->__Field(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(299)
		if ((tmp4)){
			HX_STACK_LINE(299)
			options->__FieldRef(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb")) = ((Float)1.0);
		}
		HX_STACK_LINE(299)
		tmp3 = options->__Field(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"), hx::paccDynamic );
	}
	HX_STACK_LINE(299)
	this->opacity = tmp3;
	HX_STACK_LINE(300)
	Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(300)
	{
		HX_STACK_LINE(300)
		bool tmp5 = (options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(300)
		if ((tmp5)){
			HX_STACK_LINE(300)
			options->__FieldRef(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")) = true;
		}
		HX_STACK_LINE(300)
		tmp4 = options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );
	}
	HX_STACK_LINE(300)
	this->visible = tmp4;
	HX_STACK_LINE(301)
	Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(301)
	{
		HX_STACK_LINE(301)
		bool tmp6 = (options->__Field(HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(301)
		if ((tmp6)){
			HX_STACK_LINE(301)
			options->__FieldRef(HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00")) = true;
		}
		HX_STACK_LINE(301)
		tmp5 = options->__Field(HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(301)
	this->fixed = tmp5;
	HX_STACK_LINE(302)
	::haxe::ds::StringMap tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(302)
	{
		HX_STACK_LINE(302)
		bool tmp7 = (options->__Field(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(302)
		if ((tmp7)){
			HX_STACK_LINE(302)
			::haxe::ds::StringMap tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				::haxe::ds::StringMap tmp9 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(302)
				::haxe::ds::StringMap tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(302)
				tmp8 = tmp10;
			}
			HX_STACK_LINE(302)
			options->__FieldRef(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")) = tmp8;
		}
		HX_STACK_LINE(302)
		tmp6 = options->__Field(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"), hx::paccDynamic );
	}
	HX_STACK_LINE(302)
	this->properties = tmp6;
	HX_STACK_LINE(304)
	this->tiles = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//TileLayer_obj::~TileLayer_obj() { }

Dynamic TileLayer_obj::__CreateEmpty() { return  new TileLayer_obj; }
hx::ObjectPtr< TileLayer_obj > TileLayer_obj::__new(Dynamic options)
{  hx::ObjectPtr< TileLayer_obj > _result_ = new TileLayer_obj();
	_result_->__construct(options);
	return _result_;}

Dynamic TileLayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileLayer_obj > _result_ = new TileLayer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Array< ::Dynamic > TileLayer_obj::bounds_fitted( ){
	HX_STACK_FRAME("luxe.tilemaps.TileLayer","bounds_fitted",0x119d0330,"luxe.tilemaps.TileLayer.bounds_fitted","luxe/tilemaps/Tilemap.hx",311,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(313)
	Array< ::Dynamic > checked = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(checked,"checked");
	HX_STACK_LINE(314)
	Array< ::Dynamic > rectangles = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(rectangles,"rectangles");
	HX_STACK_LINE(315)
	int startCol = (int)-1;		HX_STACK_VAR(startCol,"startCol");
	HX_STACK_LINE(316)
	int index = (int)-1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(317)
	int tileID = (int)-1;		HX_STACK_VAR(tileID,"tileID");
	HX_STACK_LINE(318)
	::luxe::tilemaps::Tilemap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(318)
	int width = tmp->width;		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(319)
	::luxe::tilemaps::Tilemap tmp1 = this->map;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(319)
	int height = tmp1->height;		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(321)
	{
		HX_STACK_LINE(321)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(321)
		while((true)){
			HX_STACK_LINE(321)
			bool tmp2 = (_g < height);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(321)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(321)
			if ((tmp3)){
				HX_STACK_LINE(321)
				break;
			}
			HX_STACK_LINE(321)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(321)
			int y = tmp4;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(322)
			{
				HX_STACK_LINE(322)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(322)
				while((true)){
					HX_STACK_LINE(322)
					bool tmp5 = (_g1 < width);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(322)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(322)
					if ((tmp6)){
						HX_STACK_LINE(322)
						break;
					}
					HX_STACK_LINE(322)
					int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(322)
					int x = tmp7;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(324)
					int tmp8 = (y * width);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(324)
					int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(324)
					int tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(324)
					index = tmp10;
					HX_STACK_LINE(325)
					::luxe::tilemaps::Tile tmp11 = this->tiles->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::luxe::tilemaps::Tile >();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(325)
					tileID = tmp11->id;
					HX_STACK_LINE(327)
					bool tmp12 = (tileID > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(327)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(327)
					if ((tmp12)){
						HX_STACK_LINE(327)
						Dynamic tmp14 = checked->__get(index);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(327)
						Dynamic tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(327)
						bool tmp16 = (tmp15 == false);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(327)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(327)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(327)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(327)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(327)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(327)
						if ((tmp21)){
							HX_STACK_LINE(327)
							Dynamic tmp22 = checked->__get(index);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(327)
							Dynamic tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(327)
							Dynamic tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(327)
							tmp13 = (tmp24 == null());
						}
						else{
							HX_STACK_LINE(327)
							tmp13 = true;
						}
					}
					else{
						HX_STACK_LINE(327)
						tmp13 = false;
					}
					HX_STACK_LINE(327)
					if ((tmp13)){
						HX_STACK_LINE(329)
						bool tmp14 = (startCol == (int)-1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(329)
						if ((tmp14)){
							HX_STACK_LINE(330)
							startCol = x;
						}
						HX_STACK_LINE(333)
						checked[index] = true;
					}
					else{
						HX_STACK_LINE(335)
						bool tmp14 = (tileID == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(335)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(335)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(335)
						if ((tmp15)){
							HX_STACK_LINE(335)
							Dynamic tmp17 = checked->__get(index);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(335)
							Dynamic tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(335)
							tmp16 = (tmp18 == true);
						}
						else{
							HX_STACK_LINE(335)
							tmp16 = true;
						}
						HX_STACK_LINE(335)
						if ((tmp16)){
							HX_STACK_LINE(337)
							bool tmp17 = (startCol != (int)-1);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(337)
							if ((tmp17)){
								HX_STACK_LINE(338)
								int tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(338)
								int tmp19 = startCol;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(338)
								int tmp20 = x;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(338)
								::phoenix::Rectangle tmp21 = this->find_bounds_rect(tmp18,tmp19,tmp20,checked);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(338)
								rectangles->push(tmp21);
								HX_STACK_LINE(339)
								startCol = (int)-1;
							}
						}
					}
				}
			}
			HX_STACK_LINE(346)
			bool tmp5 = (startCol != (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(346)
			if ((tmp5)){
				HX_STACK_LINE(347)
				int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(347)
				int tmp7 = startCol;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(347)
				int tmp8 = width;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(347)
				::phoenix::Rectangle tmp9 = this->find_bounds_rect(tmp6,tmp7,tmp8,checked);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(347)
				rectangles->push(tmp9);
				HX_STACK_LINE(348)
				startCol = (int)-1;
			}
		}
	}
	HX_STACK_LINE(353)
	return rectangles;
}


HX_DEFINE_DYNAMIC_FUNC0(TileLayer_obj,bounds_fitted,return )

::phoenix::Rectangle TileLayer_obj::find_bounds_rect( int start_y,int start_x,int end_x,Array< ::Dynamic > checked){
	HX_STACK_FRAME("luxe.tilemaps.TileLayer","find_bounds_rect",0xf93421e4,"luxe.tilemaps.TileLayer.find_bounds_rect","luxe/tilemaps/Tilemap.hx",358,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start_y,"start_y")
	HX_STACK_ARG(start_x,"start_x")
	HX_STACK_ARG(end_x,"end_x")
	HX_STACK_ARG(checked,"checked")
	HX_STACK_LINE(360)
	int index = (int)-1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(361)
	int tileID = (int)-1;		HX_STACK_VAR(tileID,"tileID");
	HX_STACK_LINE(362)
	::luxe::tilemaps::Tilemap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(362)
	int width = tmp->width;		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(363)
	::luxe::tilemaps::Tilemap tmp1 = this->map;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(363)
	int height = tmp1->height;		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(365)
	{
		HX_STACK_LINE(365)
		int tmp2 = (start_y + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(365)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(365)
		while((true)){
			HX_STACK_LINE(365)
			bool tmp3 = (_g < height);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(365)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(365)
			if ((tmp4)){
				HX_STACK_LINE(365)
				break;
			}
			HX_STACK_LINE(365)
			int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(365)
			int y = tmp5;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(366)
			{
				HX_STACK_LINE(366)
				int _g1 = start_x;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(366)
				while((true)){
					HX_STACK_LINE(366)
					bool tmp6 = (_g1 < end_x);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(366)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(366)
					if ((tmp7)){
						HX_STACK_LINE(366)
						break;
					}
					HX_STACK_LINE(366)
					int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(366)
					int x = tmp8;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(368)
					int tmp9 = (y * width);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(368)
					int tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(368)
					int tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(368)
					index = tmp11;
					HX_STACK_LINE(370)
					::luxe::tilemaps::Tile tmp12 = this->tiles->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::luxe::tilemaps::Tile >();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(370)
					tileID = tmp12->id;
					HX_STACK_LINE(372)
					bool tmp13 = (tileID == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(372)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(372)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(372)
					if ((tmp14)){
						HX_STACK_LINE(372)
						Dynamic tmp16 = checked->__get(index);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(372)
						Dynamic tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(372)
						tmp15 = (tmp17 == true);
					}
					else{
						HX_STACK_LINE(372)
						tmp15 = true;
					}
					HX_STACK_LINE(372)
					if ((tmp15)){
						HX_STACK_LINE(375)
						{
							HX_STACK_LINE(375)
							int _g2 = start_x;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(375)
							while((true)){
								HX_STACK_LINE(375)
								bool tmp16 = (_g2 < x);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(375)
								bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(375)
								if ((tmp17)){
									HX_STACK_LINE(375)
									break;
								}
								HX_STACK_LINE(375)
								int tmp18 = (_g2)++;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(375)
								int _x = tmp18;		HX_STACK_VAR(_x,"_x");
								HX_STACK_LINE(376)
								int tmp19 = (y * width);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(376)
								int tmp20 = _x;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(376)
								int tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(376)
								index = tmp21;
								HX_STACK_LINE(377)
								checked[index] = false;
							}
						}
						HX_STACK_LINE(380)
						int tmp16 = start_x;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(380)
						int tmp17 = start_y;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(380)
						int tmp18 = (end_x - start_x);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(380)
						int tmp19 = (y - start_y);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(380)
						::phoenix::Rectangle tmp20 = ::phoenix::Rectangle_obj::__new(tmp16,tmp17,tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(380)
						return tmp20;
					}
					HX_STACK_LINE(384)
					checked[index] = true;
				}
			}
		}
	}
	HX_STACK_LINE(389)
	int tmp2 = start_x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(389)
	int tmp3 = start_y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(389)
	int tmp4 = (end_x - start_x);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(389)
	int tmp5 = (height - start_y);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(389)
	::phoenix::Rectangle tmp6 = ::phoenix::Rectangle_obj::__new(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(389)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC4(TileLayer_obj,find_bounds_rect,return )


TileLayer_obj::TileLayer_obj()
{
}

void TileLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileLayer);
	HX_MARK_MEMBER_NAME(layer,"layer");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(opacity,"opacity");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(fixed,"fixed");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(tiles,"tiles");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_END_CLASS();
}

void TileLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(layer,"layer");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(opacity,"opacity");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(fixed,"fixed");
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(tiles,"tiles");
	HX_VISIT_MEMBER_NAME(properties,"properties");
}

Dynamic TileLayer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { return layer; }
		if (HX_FIELD_EQ(inName,"fixed") ) { return fixed; }
		if (HX_FIELD_EQ(inName,"tiles") ) { return tiles; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { return opacity; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bounds_fitted") ) { return bounds_fitted_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"find_bounds_rect") ) { return find_bounds_rect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileLayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::luxe::tilemaps::Tilemap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { layer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fixed") ) { fixed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tiles") ) { tiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { opacity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"));
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TileLayer_obj,layer),HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f")},
	{hx::fsString,(int)offsetof(TileLayer_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsString,(int)offsetof(TileLayer_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsFloat,(int)offsetof(TileLayer_obj,opacity),HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb")},
	{hx::fsBool,(int)offsetof(TileLayer_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsBool,(int)offsetof(TileLayer_obj,fixed),HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00")},
	{hx::fsObject /*::luxe::tilemaps::Tilemap*/ ,(int)offsetof(TileLayer_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TileLayer_obj,tiles),HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TileLayer_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("bounds_fitted","\x6c","\x48","\x43","\xcc"),
	HX_HCSTRING("find_bounds_rect","\x28","\xca","\xaf","\xad"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileLayer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileLayer_obj::__mClass,"__mClass");
};

#endif

hx::Class TileLayer_obj::__mClass;

void TileLayer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tilemaps.TileLayer","\x32","\x8c","\x32","\xe2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TileLayer_obj >;
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
