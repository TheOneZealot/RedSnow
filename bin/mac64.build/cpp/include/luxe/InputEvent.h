#ifndef INCLUDED_luxe_InputEvent
#define INCLUDED_luxe_InputEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,GamepadEvent)
HX_DECLARE_CLASS1(luxe,InputEvent)
HX_DECLARE_CLASS1(luxe,InputEventType)
HX_DECLARE_CLASS1(luxe,InteractState)
HX_DECLARE_CLASS1(luxe,KeyEvent)
HX_DECLARE_CLASS1(luxe,MouseEvent)
HX_DECLARE_CLASS1(luxe,TouchEvent)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  InputEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InputEvent_obj OBJ_;
		InputEvent_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.InputEvent")
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

		::String name;
		::luxe::InputEventType type;
		::luxe::InteractState state;
		::luxe::MouseEvent mouse_event;
		::luxe::KeyEvent key_event;
		::luxe::TouchEvent touch_event;
		::luxe::GamepadEvent gamepad_event;
		virtual Void set_key( ::String _name,::luxe::InteractState _state,::luxe::KeyEvent _key_event);
		Dynamic set_key_dyn();

		virtual Void set_mouse( ::String _name,::luxe::InteractState _state,::luxe::MouseEvent _mouse_event);
		Dynamic set_mouse_dyn();

		virtual Void set_touch( ::String _name,::luxe::InteractState _state,::luxe::TouchEvent _touch_event);
		Dynamic set_touch_dyn();

		virtual Void set_gamepad( ::String _name,::luxe::InteractState _state,::luxe::GamepadEvent _gamepad_event);
		Dynamic set_gamepad_dyn();

		virtual Void set_unknown( ::String _name,::luxe::InteractState _state);
		Dynamic set_unknown_dyn();

		virtual Void set_common( ::String _name,::luxe::InputEventType _type,::luxe::InteractState _state);
		Dynamic set_common_dyn();

		virtual Void set_events( ::luxe::KeyEvent _key_event,::luxe::MouseEvent _mouse_event,::luxe::TouchEvent _touch_event,::luxe::GamepadEvent _gamepad_event);
		Dynamic set_events_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_InputEvent */ 
