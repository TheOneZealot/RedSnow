#ifndef INCLUDED_luxe_tilemaps_TileOffset
#define INCLUDED_luxe_tilemaps_TileOffset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,tilemaps,TileOffset)
namespace luxe{
namespace tilemaps{


class TileOffset_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TileOffset_obj OBJ_;

	public:
		TileOffset_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("luxe.tilemaps.TileOffset","\x12","\xa2","\x96","\x11"); }
		::String __ToString() const { return HX_HCSTRING("TileOffset.","\x8d","\xdf","\xfb","\x5a") + tag; }

		static ::luxe::tilemaps::TileOffset bottom;
		static inline ::luxe::tilemaps::TileOffset bottom_dyn() { return bottom; }
		static ::luxe::tilemaps::TileOffset center;
		static inline ::luxe::tilemaps::TileOffset center_dyn() { return center; }
		static ::luxe::tilemaps::TileOffset left;
		static inline ::luxe::tilemaps::TileOffset left_dyn() { return left; }
		static ::luxe::tilemaps::TileOffset right;
		static inline ::luxe::tilemaps::TileOffset right_dyn() { return right; }
		static ::luxe::tilemaps::TileOffset top;
		static inline ::luxe::tilemaps::TileOffset top_dyn() { return top; }
};

} // end namespace luxe
} // end namespace tilemaps

#endif /* INCLUDED_luxe_tilemaps_TileOffset */ 
