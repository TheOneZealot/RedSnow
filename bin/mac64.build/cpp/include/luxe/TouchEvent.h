#ifndef INCLUDED_luxe_TouchEvent
#define INCLUDED_luxe_TouchEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,InteractState)
HX_DECLARE_CLASS1(luxe,TouchEvent)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  TouchEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TouchEvent_obj OBJ_;
		TouchEvent_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.TouchEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TouchEvent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TouchEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TouchEvent","\xfb","\xaf","\x06","\x66"); }

		::luxe::InteractState state;
		Float timestamp;
		int touch_id;
		Float x;
		Float y;
		Float dx;
		Float dy;
		::phoenix::Vector pos;
		virtual Void set( Float _x,Float _y,Float _dx,Float _dy,int _touch_id,::luxe::InteractState _state,Float _timestamp);
		Dynamic set_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_TouchEvent */ 
