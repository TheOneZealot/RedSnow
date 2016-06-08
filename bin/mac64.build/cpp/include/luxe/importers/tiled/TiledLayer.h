#ifndef INCLUDED_luxe_importers_tiled_TiledLayer
#define INCLUDED_luxe_importers_tiled_TiledLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledLayer)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledMapData)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledTile)
namespace luxe{
namespace importers{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledLayer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledLayer_obj OBJ_;
		TiledLayer_obj();
		Void __construct(::luxe::importers::tiled::TiledMapData _map);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.importers.tiled.TiledLayer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledLayer_obj > __new(::luxe::importers::tiled::TiledMapData _map);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledLayer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TiledLayer","\x9b","\x6c","\x51","\x25"); }

		static void __boot();
		static int bytes_get_int32( ::haxe::io::Bytes bytes,int pos);
		static Dynamic bytes_get_int32_dyn();

		static ::String base_chars;
		static Array< int > base_lookup;
		static Array< int > base64_to_array( ::String input,::String compression);
		static Dynamic base64_to_array_dyn();

		Float opacity;
		bool visible;
		::String name;
		int width;
		int height;
		::luxe::importers::tiled::TiledMapData map;
		::haxe::ds::StringMap properties;
		Array< ::Dynamic > tiles;
		virtual Void from_xml( ::Xml xml);
		Dynamic from_xml_dyn();

		virtual Void from_json( Dynamic json);
		Dynamic from_json_dyn();

		virtual Array< int > csv_to_array( ::String input);
		Dynamic csv_to_array_dyn();

};

} // end namespace luxe
} // end namespace importers
} // end namespace tiled

#endif /* INCLUDED_luxe_importers_tiled_TiledLayer */ 
