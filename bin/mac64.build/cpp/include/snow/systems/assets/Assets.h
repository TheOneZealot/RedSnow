#ifndef INCLUDED_snow_systems_assets_Assets
#define INCLUDED_snow_systems_assets_Assets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,core,native,assets,Assets)
HX_DECLARE_CLASS3(snow,modules,interfaces,Assets)
HX_DECLARE_CLASS3(snow,systems,assets,Asset)
HX_DECLARE_CLASS3(snow,systems,assets,AssetImage)
HX_DECLARE_CLASS3(snow,systems,assets,Assets)
namespace snow{
namespace systems{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  Assets_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Assets_obj OBJ_;
		Assets_obj();
		Void __construct(::snow::Snow _app);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.systems.assets.Assets")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Assets_obj > __new(::snow::Snow _app);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Assets_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Assets","\xa3","\xbc","\x97","\x80"); }

		::String root;
		::snow::core::native::assets::Assets module;
		::snow::Snow app;
		virtual Void shutdown( );
		Dynamic shutdown_dyn();

		virtual ::String path( ::String _id);
		Dynamic path_dyn();

		virtual ::snow::api::Promise bytes( ::String _id);
		Dynamic bytes_dyn();

		virtual ::snow::api::Promise text( ::String _id);
		Dynamic text_dyn();

		virtual ::snow::api::Promise json( ::String _id);
		Dynamic json_dyn();

		virtual ::snow::api::Promise image( ::String _id);
		Dynamic image_dyn();

		virtual ::snow::api::Promise image_from_bytes( ::String _id,::snow::api::buffers::ArrayBufferView _bytes);
		Dynamic image_from_bytes_dyn();

		virtual ::snow::systems::assets::AssetImage image_from_pixels( ::String _id,int _width,int _height,::snow::api::buffers::ArrayBufferView _pixels);
		Dynamic image_from_pixels_dyn();

		virtual ::snow::api::Promise audio( ::String _id,Dynamic _is_stream);
		Dynamic audio_dyn();

		virtual ::snow::api::Promise audio_from_bytes( ::String _id,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format);
		Dynamic audio_from_bytes_dyn();

};

} // end namespace snow
} // end namespace systems
} // end namespace assets

#endif /* INCLUDED_snow_systems_assets_Assets */ 
