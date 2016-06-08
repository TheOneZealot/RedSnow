#ifndef INCLUDED_snow_modules_sdl_Runtime
#define INCLUDED_snow_modules_sdl_Runtime

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_core_native_Runtime
#include <snow/core/native/Runtime.h>
#endif
#include <linc_sdl.h>
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,core,Runtime)
HX_DECLARE_CLASS3(snow,core,native,Runtime)
HX_DECLARE_CLASS3(snow,modules,sdl,Runtime)
HX_DECLARE_CLASS2(snow,types,ModState)
namespace snow{
namespace modules{
namespace sdl{


class HXCPP_CLASS_ATTRIBUTES  Runtime_obj : public ::snow::core::native::Runtime_obj{
	public:
		typedef ::snow::core::native::Runtime_obj super;
		typedef Runtime_obj OBJ_;
		Runtime_obj();
		Void __construct(::snow::Snow _app);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.modules.sdl.Runtime")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Runtime_obj > __new(::snow::Snow _app);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Runtime_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Runtime","\xb8","\xdc","\xb1","\xbc"); }

		static void __boot();
		static Float timestamp_start;
		static Float timestamp( );
		static Dynamic timestamp_dyn();

		SDL_GLContext gl;
		::cpp::Pointer< SDL_Window > window;
		::haxe::ds::IntMap gamepads;
		::haxe::ds::IntMap joysticks;
		virtual Void ready( );

		virtual bool run( );

		virtual Void shutdown( Dynamic _immediate);

		virtual bool window_grab( bool enable);

		virtual Void window_swap( );
		Dynamic window_swap_dyn();

		virtual bool window_fullscreen( bool enable,Dynamic true_fullscreen);

		virtual int window_width( );

		virtual int window_height( );

		Dynamic _size;
		Float window_dpr;
		virtual Float window_device_pixel_ratio( );

		virtual bool run_loop( );
		Dynamic run_loop_dyn();

		virtual Void loop( int _);
		Dynamic loop_dyn();

		virtual int event_watch( Dynamic _,::cpp::Struct<SDL_Event> e);
		Dynamic event_watch_dyn();

		virtual Void handle_window_ev( ::cpp::Struct<SDL_Event> e);
		Dynamic handle_window_ev_dyn();

		int window_w;
		int window_h;
		virtual int to_pixels( Float _value);
		Dynamic to_pixels_dyn();

		virtual Void create_window( );
		Dynamic create_window_dyn();

		virtual bool create_render_context( ::cpp::Pointer< SDL_Window > _window);
		Dynamic create_render_context_dyn();

		virtual Void post_render_context( ::cpp::Pointer< SDL_Window > _window);
		Dynamic post_render_context_dyn();

		virtual Void apply_GL_attr( Dynamic render);
		Dynamic apply_GL_attr_dyn();

		virtual int window_flags( Dynamic config);
		Dynamic window_flags_dyn();

		virtual Dynamic update_window_config( ::cpp::Pointer< SDL_Window > _window,Dynamic config);
		Dynamic update_window_config_dyn();

		virtual Dynamic update_render_config( ::cpp::Pointer< SDL_Window > _window,Dynamic render);
		Dynamic update_render_config_dyn();

		virtual Void handle_input_ev( ::cpp::Struct<SDL_Event> e);
		Dynamic handle_input_ev_dyn();

		virtual ::snow::types::ModState to_key_mod( int mod_value);
		Dynamic to_key_mod_dyn();

};

} // end namespace snow
} // end namespace modules
} // end namespace sdl

#endif /* INCLUDED_snow_modules_sdl_Runtime */ 
