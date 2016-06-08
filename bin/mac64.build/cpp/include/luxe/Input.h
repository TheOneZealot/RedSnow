#ifndef INCLUDED_luxe_Input
#define INCLUDED_luxe_Input

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(luxe,Engine)
HX_DECLARE_CLASS1(luxe,GamepadEvent)
HX_DECLARE_CLASS1(luxe,Input)
HX_DECLARE_CLASS1(luxe,InputEvent)
HX_DECLARE_CLASS1(luxe,KeyEvent)
HX_DECLARE_CLASS1(luxe,MouseEvent)
HX_DECLARE_CLASS1(luxe,TextEvent)
HX_DECLARE_CLASS1(luxe,TouchEvent)
HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS2(snow,types,ModState)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Input_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Input_obj OBJ_;
		Input_obj();
		Void __construct(::luxe::Engine _core);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.Input")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Input_obj > __new(::luxe::Engine _core);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Input_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Input","\xea","\x33","\x4b","\x51"); }

		::luxe::Engine core;
		::haxe::ds::StringMap key_bindings;
		::haxe::ds::StringMap mouse_bindings;
		::haxe::ds::StringMap gamepad_bindings;
		::haxe::ds::StringMap _named_input_released;
		::haxe::ds::StringMap _named_input_pressed;
		::haxe::ds::StringMap _named_input_down;
		::luxe::KeyEvent key_event;
		::luxe::TextEvent text_event;
		::luxe::MouseEvent mouse_event;
		::luxe::TouchEvent touch_event;
		::luxe::GamepadEvent gamepad_event;
		::luxe::InputEvent input_event;
		virtual bool inputpressed( ::String _event);
		Dynamic inputpressed_dyn();

		virtual bool inputreleased( ::String _event);
		Dynamic inputreleased_dyn();

		virtual bool inputdown( ::String _event);
		Dynamic inputdown_dyn();

		virtual bool keypressed( int _code);
		Dynamic keypressed_dyn();

		virtual bool keyreleased( int _code);
		Dynamic keyreleased_dyn();

		virtual bool keydown( int _code);
		Dynamic keydown_dyn();

		virtual bool scanpressed( int _code);
		Dynamic scanpressed_dyn();

		virtual bool scanreleased( int _code);
		Dynamic scanreleased_dyn();

		virtual bool scandown( int _code);
		Dynamic scandown_dyn();

		virtual bool mousepressed( int _button);
		Dynamic mousepressed_dyn();

		virtual bool mousereleased( int _button);
		Dynamic mousereleased_dyn();

		virtual bool mousedown( int _button);
		Dynamic mousedown_dyn();

		virtual bool gamepadpressed( int _gamepad,int _button);
		Dynamic gamepadpressed_dyn();

		virtual bool gamepadreleased( int _gamepad,int _button);
		Dynamic gamepadreleased_dyn();

		virtual bool gamepaddown( int _gamepad,int _button);
		Dynamic gamepaddown_dyn();

		virtual Float gamepadaxis( int _gamepad,int _axis);
		Dynamic gamepadaxis_dyn();

		virtual Void bind_key( ::String _name,int _key);
		Dynamic bind_key_dyn();

		virtual Void bind_mouse( ::String _name,int _button);
		Dynamic bind_mouse_dyn();

		virtual Void bind_gamepad( ::String _name,int _gamepad_button,Dynamic _gamepad_id);
		Dynamic bind_gamepad_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void process( );
		Dynamic process_dyn();

		virtual Void onmousedown( int _x,int _y,int _button,Float _timestamp,int _window_id);
		Dynamic onmousedown_dyn();

		virtual Void onmouseup( int _x,int _y,int _button,Float _timestamp,int _window_id);
		Dynamic onmouseup_dyn();

		virtual Void onmousemove( int _x,int _y,int _x_rel,int _y_rel,Float _timestamp,int _window_id);
		Dynamic onmousemove_dyn();

		virtual Void onmousewheel( Float _x,Float _y,Float _timestamp,int _window_id);
		Dynamic onmousewheel_dyn();

		virtual Void onkeydown( int _keycode,int _scancode,bool _repeat,::snow::types::ModState _mod,Float _timestamp,int _window_id);
		Dynamic onkeydown_dyn();

		virtual Void onkeyup( int _keycode,int _scancode,bool _repeat,::snow::types::ModState _mod,Float _timestamp,int _window_id);
		Dynamic onkeyup_dyn();

		virtual Void ontextinput( ::String _text,int _start,int _length,int _etype,Float _timestamp,int _window_id);
		Dynamic ontextinput_dyn();

		virtual Void ontouchdown( Float _x,Float _y,Float _dx,Float _dy,int _touch_id,Float _timestamp);
		Dynamic ontouchdown_dyn();

		virtual Void ontouchup( Float _x,Float _y,Float _dx,Float _dy,int _touch_id,Float _timestamp);
		Dynamic ontouchup_dyn();

		virtual Void ontouchmove( Float _x,Float _y,Float _dx,Float _dy,int _touch_id,Float _timestamp);
		Dynamic ontouchmove_dyn();

		virtual Void ongamepadaxis( int _gamepad,int _axis,Float _value,Float _timestamp);
		Dynamic ongamepadaxis_dyn();

		virtual Void ongamepaddown( int _gamepad,int _button,Float _value,Float _timestamp);
		Dynamic ongamepaddown_dyn();

		virtual Void ongamepadup( int _gamepad,int _button,Float _value,Float _timestamp);
		Dynamic ongamepadup_dyn();

		virtual Void ongamepaddevice( int _gamepad,::String _id,int _etype,Float _timestamp);
		Dynamic ongamepaddevice_dyn();

		virtual Void oninputdown( ::String _name,::luxe::KeyEvent _key_event,::luxe::MouseEvent _mouse_event,::luxe::TouchEvent _touch_event,::luxe::GamepadEvent _gamepad_event);
		Dynamic oninputdown_dyn();

		virtual Void oninputup( ::String _name,::luxe::KeyEvent _key_event,::luxe::MouseEvent _mouse_event,::luxe::TouchEvent _touch_event,::luxe::GamepadEvent _gamepad_event);
		Dynamic oninputup_dyn();

		virtual Void check_named_keys( ::luxe::KeyEvent e,hx::Null< bool >  _down);
		Dynamic check_named_keys_dyn();

		virtual Void check_named_mouse( ::luxe::MouseEvent e,hx::Null< bool >  _down);
		Dynamic check_named_mouse_dyn();

		virtual Void check_named_gamepad_buttons( ::luxe::GamepadEvent e,hx::Null< bool >  _down);
		Dynamic check_named_gamepad_buttons_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Input */ 
