#ifndef INCLUDED_snow_types_WindowEvent
#define INCLUDED_snow_types_WindowEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,types,WindowEvent)
namespace snow{
namespace types{


class HXCPP_CLASS_ATTRIBUTES  WindowEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WindowEvent_obj OBJ_;
		WindowEvent_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.types.WindowEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WindowEvent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WindowEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("WindowEvent","\xea","\xf5","\xc9","\x4a"); }

		int type;
		Float timestamp;
		int window_id;
		Dynamic x;
		Dynamic y;
		virtual Void set( int _type,Float _timestamp,int _window_id,Dynamic _x,Dynamic _y);
		Dynamic set_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types

#endif /* INCLUDED_snow_types_WindowEvent */ 
