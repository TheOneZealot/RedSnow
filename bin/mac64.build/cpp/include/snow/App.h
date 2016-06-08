#ifndef INCLUDED_snow_App
#define INCLUDED_snow_App

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,types,ModState)
HX_DECLARE_CLASS2(snow,types,SystemEvent)
namespace snow{


class HXCPP_CLASS_ATTRIBUTES  App_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef App_obj OBJ_;
		App_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.App")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< App_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~App_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("App","\x81","\xb4","\x31","\x00"); }

		::snow::Snow app;
		Float timescale;
		Float fixed_delta;
		Float update_rate;
		Float tick_start;
		Float tick_start_prev;
		Float tick_delta;
		Float frame_start;
		Float frame_start_prev;
		Float frame_delta;
		Float frame_max_delta;
		Float sim_delta;
		Float sim_time;
		Float fixed_alpha;
		bool fixed_timestep;
		Float fixed_frame_time;
		Float fixed_overflow;
		Float next_tick;
		virtual Dynamic config( Dynamic _config);
		Dynamic config_dyn();

		virtual Void ready( );
		Dynamic ready_dyn();

		virtual Void update( Float dt);
		Dynamic update_dyn();

		virtual Void tick( Float dt);
		Dynamic tick_dyn();

		virtual Void ondestroy( );
		Dynamic ondestroy_dyn();

		virtual Void onevent( ::snow::types::SystemEvent event);
		Dynamic onevent_dyn();

		virtual Void ontickstart( );
		Dynamic ontickstart_dyn();

		virtual Void ontickend( );
		Dynamic ontickend_dyn();

		virtual Void onkeydown( int keycode,int scancode,bool repeat,::snow::types::ModState mod,Float timestamp,int window_id);
		Dynamic onkeydown_dyn();

		virtual Void onkeyup( int keycode,int scancode,bool repeat,::snow::types::ModState mod,Float timestamp,int window_id);
		Dynamic onkeyup_dyn();

		virtual Void ontextinput( ::String text,int start,int length,int type,Float timestamp,int window_id);
		Dynamic ontextinput_dyn();

		virtual Void onmousedown( int x,int y,int button,Float timestamp,int window_id);
		Dynamic onmousedown_dyn();

		virtual Void onmouseup( int x,int y,int button,Float timestamp,int window_id);
		Dynamic onmouseup_dyn();

		virtual Void onmousewheel( Float x,Float y,Float timestamp,int window_id);
		Dynamic onmousewheel_dyn();

		virtual Void onmousemove( int x,int y,int xrel,int yrel,Float timestamp,int window_id);
		Dynamic onmousemove_dyn();

		virtual Void ontouchdown( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp);
		Dynamic ontouchdown_dyn();

		virtual Void ontouchup( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp);
		Dynamic ontouchup_dyn();

		virtual Void ontouchmove( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp);
		Dynamic ontouchmove_dyn();

		virtual Void ongamepadaxis( int gamepad,int axis,Float value,Float timestamp);
		Dynamic ongamepadaxis_dyn();

		virtual Void ongamepaddown( int gamepad,int button,Float value,Float timestamp);
		Dynamic ongamepaddown_dyn();

		virtual Void ongamepadup( int gamepad,int button,Float value,Float timestamp);
		Dynamic ongamepadup_dyn();

		virtual Void ongamepaddevice( int gamepad,::String id,int type,Float timestamp);
		Dynamic ongamepaddevice_dyn();

		virtual Void internal_init( );
		Dynamic internal_init_dyn();

		virtual Void internal_tick( );
		Dynamic internal_tick_dyn();

		virtual Void internal_tick_default( );
		Dynamic internal_tick_default_dyn();

		virtual Void internal_tick_fixed_timestep( );
		Dynamic internal_tick_fixed_timestep_dyn();

};

} // end namespace snow

#endif /* INCLUDED_snow_App */ 
