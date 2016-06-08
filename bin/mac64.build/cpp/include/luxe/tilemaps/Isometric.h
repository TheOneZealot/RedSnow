#ifndef INCLUDED_luxe_tilemaps_Isometric
#define INCLUDED_luxe_tilemaps_Isometric

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,tilemaps,Isometric)
HX_DECLARE_CLASS2(luxe,tilemaps,TileOffset)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace tilemaps{


class HXCPP_CLASS_ATTRIBUTES  Isometric_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Isometric_obj OBJ_;
		Isometric_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.tilemaps.Isometric")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Isometric_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Isometric_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Isometric","\x15","\x3b","\xb1","\xe9"); }

		static ::phoenix::Vector worldpos_to_tile_coord( Float world_x,Float world_y,int tile_width,int tile_height,Dynamic scale,Dynamic rounded);
		static Dynamic worldpos_to_tile_coord_dyn();

		static ::phoenix::Vector tile_coord_to_worldpos( int tile_x,int tile_y,int tile_width,int tile_height,Dynamic scale,::luxe::tilemaps::TileOffset offset_x,::luxe::tilemaps::TileOffset offset_y);
		static Dynamic tile_coord_to_worldpos_dyn();

};

} // end namespace luxe
} // end namespace tilemaps

#endif /* INCLUDED_luxe_tilemaps_Isometric */ 
