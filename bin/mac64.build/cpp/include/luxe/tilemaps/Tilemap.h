#ifndef INCLUDED_luxe_tilemaps_Tilemap
#define INCLUDED_luxe_tilemaps_Tilemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(luxe,tilemaps,Tile)
HX_DECLARE_CLASS2(luxe,tilemaps,TileLayer)
HX_DECLARE_CLASS2(luxe,tilemaps,TileOffset)
HX_DECLARE_CLASS2(luxe,tilemaps,Tilemap)
HX_DECLARE_CLASS2(luxe,tilemaps,TilemapOrientation)
HX_DECLARE_CLASS2(luxe,tilemaps,TilemapVisual)
HX_DECLARE_CLASS2(luxe,tilemaps,Tileset)
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace tilemaps{


class HXCPP_CLASS_ATTRIBUTES  Tilemap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tilemap_obj OBJ_;
		Tilemap_obj();
		Void __construct(Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.tilemaps.Tilemap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tilemap_obj > __new(Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tilemap_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Tilemap","\x0e","\x18","\xe0","\x12"); }

		::haxe::ds::StringMap layers;
		Array< ::Dynamic > layers_ordered;
		::haxe::ds::StringMap tilesets;
		::haxe::ds::StringMap properties;
		::luxe::tilemaps::TilemapOrientation orientation;
		::luxe::tilemaps::TilemapVisual visual;
		::phoenix::Vector pos;
		int tile_width;
		int tile_height;
		int width;
		int height;
		int total_width;
		int total_height;
		::phoenix::Rectangle bounds;
		virtual Void display( Dynamic options);
		Dynamic display_dyn();

		virtual bool inside( int x,int y);
		Dynamic inside_dyn();

		virtual ::phoenix::Vector tile_pos( int x,int y,Dynamic scale,::luxe::tilemaps::TileOffset offset_x,::luxe::tilemaps::TileOffset offset_y);
		Dynamic tile_pos_dyn();

		virtual ::phoenix::Vector tile_coord( Float _world_pos_x,Float _world_pos_y,Dynamic _scale,Dynamic _rounded);
		Dynamic tile_coord_dyn();

		virtual ::luxe::tilemaps::Tile tile_at_pos( ::String layer_name,Float _world_pos_x,Float _world_pos_y,Dynamic _scale);
		Dynamic tile_at_pos_dyn();

		virtual ::luxe::tilemaps::TileLayer layer( ::String layer_name);
		Dynamic layer_dyn();

		virtual ::luxe::tilemaps::Tileset tileset( ::String tileset_name);
		Dynamic tileset_dyn();

		virtual ::luxe::tilemaps::Tile tile_at( ::String layer_name,int x,int y);
		Dynamic tile_at_dyn();

		virtual Dynamic iterator( );
		Dynamic iterator_dyn();

		virtual ::luxe::tilemaps::Tileset add_tileset( Dynamic options);
		Dynamic add_tileset_dyn();

		virtual ::luxe::tilemaps::Tileset tileset_from_id( int _id);
		Dynamic tileset_from_id_dyn();

		virtual bool remove_tile( ::String layer_name,int x,int y);
		Dynamic remove_tile_dyn();

		virtual bool remove_tileset( ::String name,hx::Null< bool >  _destroy_textures);
		Dynamic remove_tileset_dyn();

		virtual bool remove_layer( ::String name);
		Dynamic remove_layer_dyn();

		virtual ::luxe::tilemaps::TileLayer add_layer( Dynamic options);
		Dynamic add_layer_dyn();

		virtual Void add_tiles_fill_by_id( ::String layer_name,hx::Null< int >  _tileid);
		Dynamic add_tiles_fill_by_id_dyn();

		virtual Void add_tiles_from_grid( ::String layer_name,Array< ::Dynamic > grid);
		Dynamic add_tiles_from_grid_dyn();

		virtual Void destroy( Dynamic _keep_visual);
		Dynamic destroy_dyn();

		virtual int _sort_layers( ::luxe::tilemaps::TileLayer a,::luxe::tilemaps::TileLayer b);
		Dynamic _sort_layers_dyn();

		virtual Void sort_layers( );
		Dynamic sort_layers_dyn();

		virtual ::phoenix::Rectangle get_bounds( );
		Dynamic get_bounds_dyn();

		virtual int get_total_width( );
		Dynamic get_total_width_dyn();

		virtual int get_total_height( );
		Dynamic get_total_height_dyn();

};

} // end namespace luxe
} // end namespace tilemaps

#endif /* INCLUDED_luxe_tilemaps_Tilemap */ 
