#ifndef INCLUDED_luxe_tilemaps_Ortho
#define INCLUDED_luxe_tilemaps_Ortho

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,tilemaps,Ortho)
HX_DECLARE_CLASS2(luxe,tilemaps,TileOffset)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace tilemaps{


class HXCPP_CLASS_ATTRIBUTES  Ortho_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Ortho_obj OBJ_;
		Ortho_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.tilemaps.Ortho")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Ortho_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ortho_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Ortho","\x18","\x87","\x5a","\xc8"); }

		static ::phoenix::Vector worldpos_to_tile_coord( Float world_x,Float world_y,int tile_width,int tile_height,Dynamic scale,Dynamic rounded);
		static Dynamic worldpos_to_tile_coord_dyn();

		static ::phoenix::Vector tile_coord_to_worldpos( int tile_x,int tile_y,int tile_width,int tile_height,Dynamic scale,::luxe::tilemaps::TileOffset offset_x,::luxe::tilemaps::TileOffset offset_y);
		static Dynamic tile_coord_to_worldpos_dyn();

};

} // end namespace luxe
} // end namespace tilemaps

#endif /* INCLUDED_luxe_tilemaps_Ortho */ 
