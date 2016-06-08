#ifndef INCLUDED_snow_core_Runtime
#define INCLUDED_snow_core_Runtime

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,core,Runtime)
namespace snow{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Runtime_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Runtime_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void ready( )=0;
virtual Dynamic ready_dyn()=0;
		virtual bool run( )=0;
virtual Dynamic run_dyn()=0;
		virtual Void shutdown( Dynamic _immediate)=0;
virtual Dynamic shutdown_dyn()=0;
		virtual bool window_grab( bool enable)=0;
virtual Dynamic window_grab_dyn()=0;
		virtual bool window_fullscreen( bool enable,Dynamic true_fullscreen)=0;
virtual Dynamic window_fullscreen_dyn()=0;
		virtual Float window_device_pixel_ratio( )=0;
virtual Dynamic window_device_pixel_ratio_dyn()=0;
		virtual int window_width( )=0;
virtual Dynamic window_width_dyn()=0;
		virtual int window_height( )=0;
virtual Dynamic window_height_dyn()=0;
};



template<typename IMPL>
class Runtime_delegate_ : public Runtime_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Runtime_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void ready( ) { return mDelegate->ready();}
		Dynamic ready_dyn() { return mDelegate->ready_dyn();}
		bool run( ) { return mDelegate->run();}
		Dynamic run_dyn() { return mDelegate->run_dyn();}
		Void shutdown( Dynamic _immediate) { return mDelegate->shutdown(_immediate);}
		Dynamic shutdown_dyn() { return mDelegate->shutdown_dyn();}
		bool window_grab( bool enable) { return mDelegate->window_grab(enable);}
		Dynamic window_grab_dyn() { return mDelegate->window_grab_dyn();}
		bool window_fullscreen( bool enable,Dynamic true_fullscreen) { return mDelegate->window_fullscreen(enable,true_fullscreen);}
		Dynamic window_fullscreen_dyn() { return mDelegate->window_fullscreen_dyn();}
		Float window_device_pixel_ratio( ) { return mDelegate->window_device_pixel_ratio();}
		Dynamic window_device_pixel_ratio_dyn() { return mDelegate->window_device_pixel_ratio_dyn();}
		int window_width( ) { return mDelegate->window_width();}
		Dynamic window_width_dyn() { return mDelegate->window_width_dyn();}
		int window_height( ) { return mDelegate->window_height();}
		Dynamic window_height_dyn() { return mDelegate->window_height_dyn();}
};

} // end namespace snow
} // end namespace core

#endif /* INCLUDED_snow_core_Runtime */ 
