#ifndef INCLUDED_snow_Snow
#define INCLUDED_snow_Snow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Engine)
HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS2(snow,core,Extension)
HX_DECLARE_CLASS2(snow,core,Runtime)
HX_DECLARE_CLASS3(snow,core,native,Runtime)
HX_DECLARE_CLASS3(snow,modules,sdl,Runtime)
HX_DECLARE_CLASS3(snow,systems,assets,Assets)
HX_DECLARE_CLASS3(snow,systems,audio,Audio)
HX_DECLARE_CLASS3(snow,systems,input,Input)
HX_DECLARE_CLASS3(snow,systems,io,IO)
HX_DECLARE_CLASS2(snow,types,InputEvent)
HX_DECLARE_CLASS2(snow,types,SystemEvent)
HX_DECLARE_CLASS2(snow,types,WindowEvent)
namespace snow{


class HXCPP_CLASS_ATTRIBUTES  Snow_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Snow_obj OBJ_;
		Snow_obj();
		Void __construct(::luxe::Engine _host);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.Snow")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Snow_obj > __new(::luxe::Engine _host);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Snow_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Snow","\xa3","\x8e","\x30","\x37"); }

		static void __boot();
		static Void next( Dynamic func);
		static Dynamic next_dyn();

		static Void defer( Dynamic func);
		static Dynamic defer_dyn();

		static Float get_timestamp( );
		static Dynamic get_timestamp_dyn();

		static cpp::ArrayBase next_queue;
		static cpp::ArrayBase defer_queue;
		::luxe::Engine host;
		Dynamic config;
		bool freeze;
		bool ready;
		::snow::modules::sdl::Runtime runtime;
		::snow::systems::io::IO io;
		::snow::systems::input::Input input;
		::snow::systems::audio::Audio audio;
		::snow::systems::assets::Assets assets;
		::String platform;
		::String os;
		bool debug;
		bool shutting_down;
		bool has_shutdown;
		Array< ::snow::core::Extension > extensions;
		::snow::types::SystemEvent sys_event;
		::snow::types::WindowEvent win_event;
		bool immediate_shutdown;
		virtual Void shutdown( );
		Dynamic shutdown_dyn();

		virtual Void dispatch_event( int _type);
		Dynamic dispatch_event_dyn();

		virtual Void dispatch_window_event( int _type,Float _timestamp,int _window_id,int _x,int _y);
		Dynamic dispatch_window_event_dyn();

		virtual Void dispatch_input_event( ::snow::types::InputEvent _event);
		Dynamic dispatch_input_event_dyn();

		int i;
		virtual Void onevent( ::snow::types::SystemEvent _event);
		Dynamic onevent_dyn();

		virtual Float get_time( );
		Dynamic get_time_dyn();

		virtual ::String get_uniqueid( );
		Dynamic get_uniqueid_dyn();

		bool had_ready_event;
		virtual Void on_ready_event( );
		Dynamic on_ready_event_dyn();

		virtual Void on_tick_event( );
		Dynamic on_tick_event_dyn();

		virtual ::snow::api::Promise setup_configs( );
		Dynamic setup_configs_dyn();

		virtual Void setup_host_config( );
		Dynamic setup_host_config_dyn();

		virtual ::snow::api::Promise default_user_config( );
		Dynamic default_user_config_dyn();

		virtual Dynamic default_config( );
		Dynamic default_config_dyn();

		virtual Dynamic default_render_config( );
		Dynamic default_render_config_dyn();

		virtual Dynamic default_window_config( );
		Dynamic default_window_config_dyn();

		virtual bool set_freeze( bool _freeze);
		Dynamic set_freeze_dyn();

		virtual Void step( );
		Dynamic step_dyn();

		virtual Void cycle_next_queue( );
		Dynamic cycle_next_queue_dyn();

		virtual Void cycle_defer_queue( );
		Dynamic cycle_defer_queue_dyn();

		virtual Dynamic copy_window_config( Dynamic _config);
		Dynamic copy_window_config_dyn();

		virtual Dynamic copy_render_config( Dynamic _config);
		Dynamic copy_render_config_dyn();

		virtual ::String make_uniqueid( Dynamic val);
		Dynamic make_uniqueid_dyn();

};

} // end namespace snow

#endif /* INCLUDED_snow_Snow */ 
