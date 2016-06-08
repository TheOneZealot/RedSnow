#ifndef INCLUDED_snow_types_TouchEvent
#define INCLUDED_snow_types_TouchEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,types,TouchEvent)
namespace snow{
namespace types{


class HXCPP_CLASS_ATTRIBUTES  TouchEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TouchEvent_obj OBJ_;
		TouchEvent_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.types.TouchEvent")
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
		::String __ToString() const { return HX_HCSTRING("TouchEvent","\xfb","\xaf","\x06","\x66"); }

		int type;
		int touch_id;
		Float x;
		Float y;
		Float dx;
		Float dy;
		virtual Void set( int _type,int _id,Float _x,Float _y,Float _dx,Float _dy);
		Dynamic set_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types

#endif /* INCLUDED_snow_types_TouchEvent */ 
