#ifndef INCLUDED_luxe_tilemaps_IsometricVisual
#define INCLUDED_luxe_tilemaps_IsometricVisual

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_tilemaps_TilemapVisual
#include <luxe/tilemaps/TilemapVisual.h>
#endif
HX_DECLARE_CLASS2(luxe,tilemaps,IsometricVisual)
HX_DECLARE_CLASS2(luxe,tilemaps,TileLayer)
HX_DECLARE_CLASS2(luxe,tilemaps,Tilemap)
HX_DECLARE_CLASS2(luxe,tilemaps,TilemapVisual)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
namespace luxe{
namespace tilemaps{


class HXCPP_CLASS_ATTRIBUTES  IsometricVisual_obj : public ::luxe::tilemaps::TilemapVisual_obj{
	public:
		typedef ::luxe::tilemaps::TilemapVisual_obj super;
		typedef IsometricVisual_obj OBJ_;
		IsometricVisual_obj();
		Void __construct(::luxe::tilemaps::Tilemap _map,Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.tilemaps.IsometricVisual")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IsometricVisual_obj > __new(::luxe::tilemaps::Tilemap _map,Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IsometricVisual_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("IsometricVisual","\xb5","\xcf","\x32","\xc4"); }

		virtual Void create( );

		virtual Void update_tile_id( ::phoenix::geometry::Geometry _geom,::String _layer_name,int _x,int _y,int _id,bool _flipx,bool _flipy,int _angle);

		virtual ::phoenix::geometry::Geometry create_tile_for_layer( ::luxe::tilemaps::TileLayer layer,int x,int y);

};

} // end namespace luxe
} // end namespace tilemaps

#endif /* INCLUDED_luxe_tilemaps_IsometricVisual */ 
