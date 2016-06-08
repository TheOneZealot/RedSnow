#ifndef INCLUDED_luxe_importers_tiled_TiledImageLayer
#define INCLUDED_luxe_importers_tiled_TiledImageLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledImage)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledImageLayer)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledMapData)
namespace luxe{
namespace importers{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledImageLayer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledImageLayer_obj OBJ_;
		TiledImageLayer_obj();
		Void __construct(::luxe::importers::tiled::TiledMapData _map);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.importers.tiled.TiledImageLayer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledImageLayer_obj > __new(::luxe::importers::tiled::TiledMapData _map);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledImageLayer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TiledImageLayer","\x6c","\x01","\x84","\xe2"); }

		::String name;
		int x;
		int y;
		Float opacity;
		bool visible;
		::haxe::ds::StringMap properties;
		::luxe::importers::tiled::TiledImage image;
		::luxe::importers::tiled::TiledMapData map;
		virtual Void from_xml( ::Xml xml);
		Dynamic from_xml_dyn();

		virtual Void from_json( Dynamic json);
		Dynamic from_json_dyn();

};

} // end namespace luxe
} // end namespace importers
} // end namespace tiled

#endif /* INCLUDED_luxe_importers_tiled_TiledImageLayer */ 
