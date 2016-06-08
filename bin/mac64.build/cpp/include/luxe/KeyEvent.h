#ifndef INCLUDED_luxe_KeyEvent
#define INCLUDED_luxe_KeyEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,InteractState)
HX_DECLARE_CLASS1(luxe,KeyEvent)
HX_DECLARE_CLASS2(snow,types,ModState)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  KeyEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef KeyEvent_obj OBJ_;
		KeyEvent_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.KeyEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< KeyEvent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KeyEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("KeyEvent","\x1b","\x2a","\xe0","\x93"); }

		int scancode;
		int keycode;
		::luxe::InteractState state;
		::snow::types::ModState mod;
		bool repeat;
		Float timestamp;
		int window_id;
		virtual Void set( int _keycode,int _scancode,bool _repeat,::snow::types::ModState _mod,::luxe::InteractState _state,Float _timestamp,int _window_id);
		Dynamic set_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_KeyEvent */ 
