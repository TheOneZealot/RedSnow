#ifndef INCLUDED_luxe_importers_tiled_TiledMap
#define INCLUDED_luxe_importers_tiled_TiledMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_tilemaps_Tilemap
#include <luxe/tilemaps/Tilemap.h>
#endif
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledMap)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledMapData)
HX_DECLARE_CLASS2(luxe,tilemaps,Tilemap)
namespace luxe{
namespace importers{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledMap_obj : public ::luxe::tilemaps::Tilemap_obj{
	public:
		typedef ::luxe::tilemaps::Tilemap_obj super;
		typedef TiledMap_obj OBJ_;
		TiledMap_obj();
		Void __construct(Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.importers.tiled.TiledMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledMap_obj > __new(Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledMap_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TiledMap","\xe6","\xce","\x32","\x6b"); }

		::luxe::importers::tiled::TiledMapData tiledmap_data;
		virtual Void _load_tilesets( Dynamic options);
		Dynamic _load_tilesets_dyn();

		virtual Void _load_layers( Dynamic options);
		Dynamic _load_layers_dyn();

};

} // end namespace luxe
} // end namespace importers
} // end namespace tiled

#endif /* INCLUDED_luxe_importers_tiled_TiledMap */ 
