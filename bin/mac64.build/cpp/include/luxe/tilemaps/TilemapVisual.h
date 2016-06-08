#ifndef INCLUDED_luxe_tilemaps_TilemapVisual
#define INCLUDED_luxe_tilemaps_TilemapVisual

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(luxe,tilemaps,TileLayer)
HX_DECLARE_CLASS2(luxe,tilemaps,Tilemap)
HX_DECLARE_CLASS2(luxe,tilemaps,TilemapVisual)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
namespace luxe{
namespace tilemaps{


class HXCPP_CLASS_ATTRIBUTES  TilemapVisual_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TilemapVisual_obj OBJ_;
		TilemapVisual_obj();
		Void __construct(::luxe::tilemaps::Tilemap _map,Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.tilemaps.TilemapVisual")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TilemapVisual_obj > __new(::luxe::tilemaps::Tilemap _map,Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TilemapVisual_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TilemapVisual","\x6e","\x2d","\x4f","\xe8"); }

		::haxe::ds::StringMap geometry;
		::luxe::tilemaps::Tilemap map;
		Dynamic options;
		virtual Void create( );
		Dynamic create_dyn();

		virtual ::phoenix::geometry::Geometry geometry_for_tile( ::String _layer,int x,int y);
		Dynamic geometry_for_tile_dyn();

		virtual Array< ::Dynamic > geometry_for_layer( ::String _layer);
		Dynamic geometry_for_layer_dyn();

		virtual Void default_options( );
		Dynamic default_options_dyn();

		virtual ::phoenix::geometry::Geometry create_tile_for_layer( ::luxe::tilemaps::TileLayer layer,int x,int y);
		Dynamic create_tile_for_layer_dyn();

		virtual Void update_tile_id( ::phoenix::geometry::Geometry _geom,::String _layer_name,int _x,int _y,int _id,bool _flipx,bool _flipy,int _angle);
		Dynamic update_tile_id_dyn();

		virtual Void refresh_tile_id( ::String _layer_name,int _x,int _y,int _id,hx::Null< bool >  _flipx,hx::Null< bool >  _flipy,hx::Null< int >  _angle);
		Dynamic refresh_tile_id_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace luxe
} // end namespace tilemaps

#endif /* INCLUDED_luxe_tilemaps_TilemapVisual */ 
