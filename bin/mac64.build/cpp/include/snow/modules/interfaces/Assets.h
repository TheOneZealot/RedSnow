#ifndef INCLUDED_snow_modules_interfaces_Assets
#define INCLUDED_snow_modules_interfaces_Assets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS3(snow,modules,interfaces,Assets)
HX_DECLARE_CLASS2(snow,types,ImageData)
HX_DECLARE_CLASS2(snow,types,SystemEvent)
namespace snow{
namespace modules{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  Assets_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Assets_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void onevent( ::snow::types::SystemEvent event)=0;
virtual Dynamic onevent_dyn()=0;
		virtual Void shutdown( )=0;
virtual Dynamic shutdown_dyn()=0;
		virtual ::snow::api::Promise image_info_from_load( ::String _path,Dynamic _components)=0;
virtual Dynamic image_info_from_load_dyn()=0;
		virtual ::snow::api::Promise image_info_from_bytes( ::String _path,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _components)=0;
virtual Dynamic image_info_from_bytes_dyn()=0;
		virtual ::snow::types::ImageData image_info_from_pixels( ::String _id,int _width,int _height,::snow::api::buffers::ArrayBufferView _pixels,Dynamic _bpp)=0;
virtual Dynamic image_info_from_pixels_dyn()=0;
};



template<typename IMPL>
class Assets_delegate_ : public Assets_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Assets_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void onevent( ::snow::types::SystemEvent event) { return mDelegate->onevent(event);}
		Dynamic onevent_dyn() { return mDelegate->onevent_dyn();}
		Void shutdown( ) { return mDelegate->shutdown();}
		Dynamic shutdown_dyn() { return mDelegate->shutdown_dyn();}
		::snow::api::Promise image_info_from_load( ::String _path,Dynamic _components) { return mDelegate->image_info_from_load(_path,_components);}
		Dynamic image_info_from_load_dyn() { return mDelegate->image_info_from_load_dyn();}
		::snow::api::Promise image_info_from_bytes( ::String _path,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _components) { return mDelegate->image_info_from_bytes(_path,_bytes,_components);}
		Dynamic image_info_from_bytes_dyn() { return mDelegate->image_info_from_bytes_dyn();}
		::snow::types::ImageData image_info_from_pixels( ::String _id,int _width,int _height,::snow::api::buffers::ArrayBufferView _pixels,Dynamic _bpp) { return mDelegate->image_info_from_pixels(_id,_width,_height,_pixels,_bpp);}
		Dynamic image_info_from_pixels_dyn() { return mDelegate->image_info_from_pixels_dyn();}
};

} // end namespace snow
} // end namespace modules
} // end namespace interfaces

#endif /* INCLUDED_snow_modules_interfaces_Assets */ 
