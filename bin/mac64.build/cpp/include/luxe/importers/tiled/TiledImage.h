#ifndef INCLUDED_luxe_importers_tiled_TiledImage
#define INCLUDED_luxe_importers_tiled_TiledImage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,importers,tiled,TiledImage)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledImageLayer)
namespace luxe{
namespace importers{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledImage_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledImage_obj OBJ_;
		TiledImage_obj();
		Void __construct(::luxe::importers::tiled::TiledImageLayer _image_layer,::String _format,::String _source,int _transparent_color,Dynamic _width,Dynamic _height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.importers.tiled.TiledImage")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledImage_obj > __new(::luxe::importers::tiled::TiledImageLayer _image_layer,::String _format,::String _source,int _transparent_color,Dynamic _width,Dynamic _height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledImage_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TiledImage","\x25","\x0a","\xfa","\x72"); }

		::luxe::importers::tiled::TiledImageLayer image_layer;
		::String format;
		::String source;
		int transparent_color;
		int width;
		int height;
};

} // end namespace luxe
} // end namespace importers
} // end namespace tiled

#endif /* INCLUDED_luxe_importers_tiled_TiledImage */ 
