#ifndef INCLUDED_snow_core_native_assets_Assets
#define INCLUDED_snow_core_native_assets_Assets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_modules_interfaces_Assets
#include <snow/modules/interfaces/Assets.h>
#endif
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,core,native,assets,Assets)
HX_DECLARE_CLASS3(snow,modules,interfaces,Assets)
HX_DECLARE_CLASS2(snow,types,ImageData)
HX_DECLARE_CLASS2(snow,types,SystemEvent)
namespace snow{
namespace core{
namespace native{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  Assets_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Assets_obj OBJ_;
		Assets_obj();
		Void __construct(::snow::Snow _app);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.core.native.assets.Assets")
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
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::snow::modules::interfaces::Assets_obj *();
		::String __ToString() const { return HX_HCSTRING("Assets","\xa3","\xbc","\x97","\x80"); }

		::snow::Snow app;
		virtual Void onevent( ::snow::types::SystemEvent event);
		Dynamic onevent_dyn();

		virtual Void shutdown( );
		Dynamic shutdown_dyn();

		virtual ::snow::api::Promise image_info_from_load( ::String _path,Dynamic _components);
		Dynamic image_info_from_load_dyn();

		int load_direct_err;
		virtual ::snow::types::ImageData image_info_from_load_direct( ::String _path,Dynamic _components);
		Dynamic image_info_from_load_direct_dyn();

		virtual ::snow::api::Promise image_info_from_bytes( ::String _id,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _components);
		Dynamic image_info_from_bytes_dyn();

		virtual ::snow::types::ImageData image_info_from_bytes_direct( ::String _id,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _components);
		Dynamic image_info_from_bytes_direct_dyn();

		virtual ::snow::types::ImageData image_info_from_pixels( ::String _id,int _width,int _height,::snow::api::buffers::ArrayBufferView _pixels,Dynamic _bpp);
		Dynamic image_info_from_pixels_dyn();

};

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace assets

#endif /* INCLUDED_snow_core_native_assets_Assets */ 
