#ifndef INCLUDED_snow_types_InputEvent
#define INCLUDED_snow_types_InputEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,types,GamepadEvent)
HX_DECLARE_CLASS2(snow,types,InputEvent)
HX_DECLARE_CLASS2(snow,types,KeyEvent)
HX_DECLARE_CLASS2(snow,types,MouseEvent)
HX_DECLARE_CLASS2(snow,types,TextEvent)
HX_DECLARE_CLASS2(snow,types,TouchEvent)
namespace snow{
namespace types{


class HXCPP_CLASS_ATTRIBUTES  InputEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InputEvent_obj OBJ_;
		InputEvent_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.types.InputEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< InputEvent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InputEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("InputEvent","\xd0","\x93","\xb0","\xea"); }

		int type;
		Float timestamp;
		int window_id;
		::snow::types::KeyEvent key;
		::snow::types::TextEvent text;
		::snow::types::MouseEvent mouse;
		::snow::types::TouchEvent touch;
		::snow::types::GamepadEvent gamepad;
		virtual Void reset( int _type,int _window_id,Float _timestamp);
		Dynamic reset_dyn();

		virtual Void set_key( ::snow::types::KeyEvent _event,int _window_id,Float _timestamp);
		Dynamic set_key_dyn();

		virtual Void set_text( ::snow::types::TextEvent _event,int _window_id,Float _timestamp);
		Dynamic set_text_dyn();

		virtual Void set_mouse( ::snow::types::MouseEvent _event,int _window_id,Float _timestamp);
		Dynamic set_mouse_dyn();

		virtual Void set_touch( ::snow::types::TouchEvent _event,Float _timestamp);
		Dynamic set_touch_dyn();

		virtual Void set_gamepad( ::snow::types::GamepadEvent _event,Float _timestamp);
		Dynamic set_gamepad_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types

#endif /* INCLUDED_snow_types_InputEvent */ 
