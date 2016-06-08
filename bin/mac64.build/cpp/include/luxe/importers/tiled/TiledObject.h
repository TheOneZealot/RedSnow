#ifndef INCLUDED_luxe_importers_tiled_TiledObject
#define INCLUDED_luxe_importers_tiled_TiledObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledObject)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledObjectGroup)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledObjectType)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledPolyObject)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace importers{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledObject_obj OBJ_;
		TiledObject_obj();
		Void __construct(::luxe::importers::tiled::TiledObjectGroup _group);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.importers.tiled.TiledObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledObject_obj > __new(::luxe::importers::tiled::TiledObjectGroup _group);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledObject_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TiledObject","\xb5","\x04","\x7c","\x3e"); }

		::luxe::importers::tiled::TiledObjectGroup group;
		int id;
		::String name;
		::String type;
		::phoenix::Vector pos;
		int width;
		int height;
		Float rotation;
		int gid;
		bool visible;
		::luxe::importers::tiled::TiledPolyObject polyobject;
		::luxe::importers::tiled::TiledObjectType object_type;
		::haxe::ds::StringMap properties;
		virtual ::luxe::importers::tiled::TiledPolyObject polyobject_from_xml( ::Xml xml);
		Dynamic polyobject_from_xml_dyn();

		virtual ::luxe::importers::tiled::TiledPolyObject polyobject_from_json( Dynamic json);
		Dynamic polyobject_from_json_dyn();

		virtual Void from_xml( ::Xml xml);
		Dynamic from_xml_dyn();

		virtual Void from_json( Dynamic json);
		Dynamic from_json_dyn();

};

} // end namespace luxe
} // end namespace importers
} // end namespace tiled

#endif /* INCLUDED_luxe_importers_tiled_TiledObject */ 
