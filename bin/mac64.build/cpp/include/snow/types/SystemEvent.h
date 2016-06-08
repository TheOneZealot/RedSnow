#ifndef INCLUDED_snow_types_SystemEvent
#define INCLUDED_snow_types_SystemEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,types,InputEvent)
HX_DECLARE_CLASS2(snow,types,SystemEvent)
HX_DECLARE_CLASS2(snow,types,WindowEvent)
namespace snow{
namespace types{


class HXCPP_CLASS_ATTRIBUTES  SystemEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SystemEvent_obj OBJ_;
		SystemEvent_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.types.SystemEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SystemEvent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SystemEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SystemEvent","\x8b","\xb6","\x6d","\x5e"); }

		int type;
		::snow::types::WindowEvent window;
		::snow::types::InputEvent input;
		virtual Void set( int _type,::snow::types::WindowEvent _window,::snow::types::InputEvent _input);
		Dynamic set_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types

#endif /* INCLUDED_snow_types_SystemEvent */ 
