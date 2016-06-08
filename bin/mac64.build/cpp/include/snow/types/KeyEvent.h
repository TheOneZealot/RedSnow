#ifndef INCLUDED_snow_types_KeyEvent
#define INCLUDED_snow_types_KeyEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,types,KeyEvent)
HX_DECLARE_CLASS2(snow,types,ModState)
namespace snow{
namespace types{


class HXCPP_CLASS_ATTRIBUTES  KeyEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef KeyEvent_obj OBJ_;
		KeyEvent_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.types.KeyEvent")
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

		Dynamic type;
		Dynamic keycode;
		Dynamic scancode;
		Dynamic repeat;
		::snow::types::ModState mod;
		virtual Void set( int _type,int _keycode,int _scancode,bool _repeat,::snow::types::ModState _mod);
		Dynamic set_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types

#endif /* INCLUDED_snow_types_KeyEvent */ 
