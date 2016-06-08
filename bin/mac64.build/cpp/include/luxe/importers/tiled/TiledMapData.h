#ifndef INCLUDED_luxe_importers_tiled_TiledMapData
#define INCLUDED_luxe_importers_tiled_TiledMapData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledImageLayer)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledLayer)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledMapData)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledObjectGroup)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledTileset)
HX_DECLARE_CLASS2(luxe,tilemaps,TilemapOrientation)
namespace luxe{
namespace importers{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledMapData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledMapData_obj OBJ_;
		TiledMapData_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.importers.tiled.TiledMapData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledMapData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledMapData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TiledMapData","\x30","\xbc","\x17","\x13"); }

		::String version;
		::String background_color;
		int width;
		int height;
		::luxe::tilemaps::TilemapOrientation orientation;
		int tile_width;
		int tile_height;
		Array< ::Dynamic > tilesets;
		Array< ::Dynamic > layers;
		Array< ::Dynamic > object_groups;
		Array< ::Dynamic > image_layers;
		::haxe::ds::StringMap properties;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void parseFromXML( ::Xml xml);
		Dynamic parseFromXML_dyn();

		virtual Void parseFromJSON( Dynamic json);
		Dynamic parseFromJSON_dyn();

};

} // end namespace luxe
} // end namespace importers
} // end namespace tiled

#endif /* INCLUDED_luxe_importers_tiled_TiledMapData */ 
