#ifndef INCLUDED_luxe_importers_tiled_TiledObjectGroup
#define INCLUDED_luxe_importers_tiled_TiledObjectGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledMapData)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledObject)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledObjectGroup)
namespace luxe{
namespace importers{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledObjectGroup_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledObjectGroup_obj OBJ_;
		TiledObjectGroup_obj();
		Void __construct(::luxe::importers::tiled::TiledMapData _map);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.importers.tiled.TiledObjectGroup")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledObjectGroup_obj > __new(::luxe::importers::tiled::TiledMapData _map);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledObjectGroup_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TiledObjectGroup","\x4a","\xee","\x2f","\xb9"); }

		::luxe::importers::tiled::TiledMapData map;
		::String name;
		int width;
		int height;
		bool visible;
		Float opacity;
		::String color;
		::haxe::ds::StringMap properties;
		Array< ::Dynamic > objects;
		virtual Void from_xml( ::Xml xml);
		Dynamic from_xml_dyn();

		virtual Void from_json( Dynamic json);
		Dynamic from_json_dyn();

};

} // end namespace luxe
} // end namespace importers
} // end namespace tiled

#endif /* INCLUDED_luxe_importers_tiled_TiledObjectGroup */ 
