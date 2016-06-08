#ifndef INCLUDED_luxe_importers_tiled_TiledObjectType
#define INCLUDED_luxe_importers_tiled_TiledObjectType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,importers,tiled,TiledObjectType)
namespace luxe{
namespace importers{
namespace tiled{


class TiledObjectType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TiledObjectType_obj OBJ_;

	public:
		TiledObjectType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("luxe.importers.tiled.TiledObjectType","\x52","\x5b","\xc5","\xb5"); }
		::String __ToString() const { return HX_HCSTRING("TiledObjectType.","\x3f","\xab","\x06","\x3a") + tag; }

		static ::luxe::importers::tiled::TiledObjectType ellipse;
		static inline ::luxe::importers::tiled::TiledObjectType ellipse_dyn() { return ellipse; }
		static ::luxe::importers::tiled::TiledObjectType polygon;
		static inline ::luxe::importers::tiled::TiledObjectType polygon_dyn() { return polygon; }
		static ::luxe::importers::tiled::TiledObjectType polyline;
		static inline ::luxe::importers::tiled::TiledObjectType polyline_dyn() { return polyline; }
		static ::luxe::importers::tiled::TiledObjectType rectangle;
		static inline ::luxe::importers::tiled::TiledObjectType rectangle_dyn() { return rectangle; }
};

} // end namespace luxe
} // end namespace importers
} // end namespace tiled

#endif /* INCLUDED_luxe_importers_tiled_TiledObjectType */ 
