#ifndef INCLUDED_snow_core_native_Runtime
#define INCLUDED_snow_core_native_Runtime

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_core_Runtime
#include <snow/core/Runtime.h>
#endif
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,core,Runtime)
HX_DECLARE_CLASS3(snow,core,native,Runtime)
namespace snow{
namespace core{
namespace native{


class HXCPP_CLASS_ATTRIBUTES  Runtime_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Runtime_obj OBJ_;
		Runtime_obj();
		Void __construct(::snow::Snow _app);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.core.native.Runtime")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Runtime_obj > __new(::snow::Snow _app);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Runtime_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::snow::core::Runtime_obj *();
		::String __ToString() const { return HX_HCSTRING("Runtime","\xb8","\xdc","\xb1","\xbc"); }

		static Float timestamp( );
		static Dynamic timestamp_dyn();

		::String name;
		::snow::Snow app;
		virtual bool run( );
		Dynamic run_dyn();

		virtual Void ready( );
		Dynamic ready_dyn();

		virtual Void shutdown( Dynamic _immediate);
		Dynamic shutdown_dyn();

		virtual bool window_grab( bool enable);
		Dynamic window_grab_dyn();

		virtual bool window_fullscreen( bool enable,Dynamic true_fullscreen);
		Dynamic window_fullscreen_dyn();

		virtual Float window_device_pixel_ratio( );
		Dynamic window_device_pixel_ratio_dyn();

		virtual int window_width( );
		Dynamic window_width_dyn();

		virtual int window_height( );
		Dynamic window_height_dyn();

};

} // end namespace snow
} // end namespace core
} // end namespace native

#endif /* INCLUDED_snow_core_native_Runtime */ 
