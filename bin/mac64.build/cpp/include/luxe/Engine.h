#ifndef INCLUDED_luxe_Engine
#define INCLUDED_luxe_Engine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
HX_DECLARE_CLASS1(luxe,Audio)
HX_DECLARE_CLASS1(luxe,Debug)
HX_DECLARE_CLASS1(luxe,Draw)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Engine)
HX_DECLARE_CLASS1(luxe,Events)
HX_DECLARE_CLASS1(luxe,Game)
HX_DECLARE_CLASS1(luxe,GamepadEvent)
HX_DECLARE_CLASS1(luxe,IO)
HX_DECLARE_CLASS1(luxe,Input)
HX_DECLARE_CLASS1(luxe,KeyEvent)
HX_DECLARE_CLASS1(luxe,MouseEvent)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Parcel)
HX_DECLARE_CLASS1(luxe,Physics)
HX_DECLARE_CLASS1(luxe,Resources)
HX_DECLARE_CLASS1(luxe,Scene)
HX_DECLARE_CLASS1(luxe,Screen)
HX_DECLARE_CLASS1(luxe,Timer)
HX_DECLARE_CLASS1(luxe,TouchEvent)
HX_DECLARE_CLASS1(phoenix,Renderer)
HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS3(snow,systems,assets,Asset)
HX_DECLARE_CLASS3(snow,systems,assets,AssetImage)
HX_DECLARE_CLASS2(snow,types,ModState)
HX_DECLARE_CLASS2(snow,types,SystemEvent)
HX_DECLARE_CLASS2(snow,types,WindowEvent)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Engine_obj : public ::snow::App_obj{
	public:
		typedef ::snow::App_obj super;
		typedef Engine_obj OBJ_;
		Engine_obj();
		Void __construct(::luxe::Game _game);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.Engine")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Engine_obj > __new(::luxe::Game _game);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Engine_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Engine","\xe2","\xbb","\x18","\x31"); }

		::luxe::Game game;
		Dynamic game_config;
		::String version;
		::String build;
		::luxe::Emitter emitter;
		::luxe::Debug debug;
		::luxe::IO io;
		::luxe::Draw draw;
		::luxe::Timer timer;
		::luxe::Events events;
		::luxe::Input input;
		::luxe::Audio audio;
		::luxe::Scene scene;
		::luxe::Resources resources;
		::phoenix::Renderer renderer;
		::luxe::Screen screen;
		::luxe::Physics physics;
		bool shutting_down;
		bool has_shutdown;
		bool inited;
		bool headless;
		bool running;
		virtual Void run( );
		Dynamic run_dyn();

		virtual Void shutdown( );
		Dynamic shutdown_dyn();

		virtual ::String runtime_info( );
		Dynamic runtime_info_dyn();

		virtual Void on( int event,Dynamic handler);
		Dynamic on_dyn();

		virtual bool off( int event,Dynamic handler);
		Dynamic off_dyn();

		virtual Void emit( int event,Dynamic data);
		Dynamic emit_dyn();

		virtual Void ready( );

		virtual Void ondestroy( );

		virtual Void init( ::snow::systems::assets::AssetImage asset);
		Dynamic init_dyn();

		virtual Void internal_pre_ready( );
		Dynamic internal_pre_ready_dyn();

		virtual Void internal_ready( ::luxe::Parcel _);
		Dynamic internal_ready_dyn();

		virtual Void onevent( ::snow::types::SystemEvent _event);

		virtual Void update( Float _delta);

		virtual Void tick( Float _delta);

		virtual Void ontickstart( );

		virtual Void ontickend( );

		virtual Void window_event( ::snow::types::WindowEvent _event);
		Dynamic window_event_dyn();

		virtual Void onmousedown( int _x,int _y,int _button,Float _timestamp,int _window_id);

		virtual Void onmouseup( int _x,int _y,int _button,Float _timestamp,int _window_id);

		virtual Void onmousemove( int _x,int _y,int _x_rel,int _y_rel,Float _timestamp,int _window_id);

		virtual Void onmousewheel( Float _x,Float _y,Float _timestamp,int _window_id);

		virtual Void onkeydown( int _keycode,int _scancode,bool _repeat,::snow::types::ModState _mod,Float _timestamp,int _window_id);

		virtual Void onkeyup( int _keycode,int _scancode,bool _repeat,::snow::types::ModState _mod,Float _timestamp,int _window_id);

		virtual Void ontextinput( ::String _text,int _start,int _length,int _etype,Float _timestamp,int _window_id);

		virtual Void ontouchdown( Float _x,Float _y,Float _dx,Float _dy,int _touch_id,Float _timestamp);

		virtual Void ontouchup( Float _x,Float _y,Float _dx,Float _dy,int _touch_id,Float _timestamp);

		virtual Void ontouchmove( Float _x,Float _y,Float _dx,Float _dy,int _touch_id,Float _timestamp);

		virtual Void oninputdown( ::String _name,::luxe::KeyEvent _key_event,::luxe::MouseEvent _mouse_event,::luxe::TouchEvent _touch_event,::luxe::GamepadEvent _gamepad_event);
		Dynamic oninputdown_dyn();

		virtual Void oninputup( ::String _name,::luxe::KeyEvent _key_event,::luxe::MouseEvent _mouse_event,::luxe::TouchEvent _touch_event,::luxe::GamepadEvent _gamepad_event);
		Dynamic oninputup_dyn();

		virtual Void ongamepadaxis( int _gamepad,int _axis,Float _value,Float _timestamp);

		virtual Void ongamepaddown( int _gamepad,int _button,Float _value,Float _timestamp);

		virtual Void ongamepadup( int _gamepad,int _button,Float _value,Float _timestamp);

		virtual Void ongamepaddevice( int _gamepad,::String _id,int _etype,Float _timestamp);

		virtual Dynamic config( Dynamic _config);

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Engine */ 
