#ifndef INCLUDED_luxe_tilemaps_TilemapOrientation
#define INCLUDED_luxe_tilemaps_TilemapOrientation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,tilemaps,TilemapOrientation)
namespace luxe{
namespace tilemaps{


class TilemapOrientation_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TilemapOrientation_obj OBJ_;

	public:
		TilemapOrientation_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("luxe.tilemaps.TilemapOrientation","\xf3","\x16","\x8c","\xc1"); }
		::String __ToString() const { return HX_HCSTRING("TilemapOrientation.","\x8c","\x48","\x4f","\xc8") + tag; }

		static ::luxe::tilemaps::TilemapOrientation isometric;
		static inline ::luxe::tilemaps::TilemapOrientation isometric_dyn() { return isometric; }
		static ::luxe::tilemaps::TilemapOrientation none;
		static inline ::luxe::tilemaps::TilemapOrientation none_dyn() { return none; }
		static ::luxe::tilemaps::TilemapOrientation ortho;
		static inline ::luxe::tilemaps::TilemapOrientation ortho_dyn() { return ortho; }
};

} // end namespace luxe
} // end namespace tilemaps

#endif /* INCLUDED_luxe_tilemaps_TilemapOrientation */ 
