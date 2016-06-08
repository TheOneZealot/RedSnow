#ifndef INCLUDED_luxe_importers_tiled_TiledTileset
#define INCLUDED_luxe_importers_tiled_TiledTileset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledTileset)
namespace luxe{
namespace importers{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledTileset_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledTileset_obj OBJ_;
		TiledTileset_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.importers.tiled.TiledTileset")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledTileset_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledTileset_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TiledTileset","\x7e","\x32","\x4c","\x31"); }

		::String name;
		::String texture_name;
		int first_id;
		int tile_width;
		int tile_height;
		int margin;
		int spacing;
		::haxe::ds::StringMap properties;
		::haxe::ds::IntMap property_tiles;
		virtual Void from_xml( ::Xml xml);
		Dynamic from_xml_dyn();

		virtual Void from_json( Dynamic json);
		Dynamic from_json_dyn();

};

} // end namespace luxe
} // end namespace importers
} // end namespace tiled

#endif /* INCLUDED_luxe_importers_tiled_TiledTileset */ 
