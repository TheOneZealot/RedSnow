#ifndef INCLUDED_snow_types_MouseEvent
#define INCLUDED_snow_types_MouseEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,types,MouseEvent)
namespace snow{
namespace types{


class HXCPP_CLASS_ATTRIBUTES  MouseEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MouseEvent_obj OBJ_;
		MouseEvent_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.types.MouseEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MouseEvent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MouseEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MouseEvent","\xd5","\xbf","\x42","\x8a"); }

		int type;
		int x;
		int y;
		int x_rel;
		int y_rel;
		int button;
		Float wheel_x;
		Float wheel_y;
		virtual Void set( int _type,int _x,int _y,int _x_rel,int _y_rel,int _button,Float _wheel_x,Float _wheel_y);
		Dynamic set_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types

#endif /* INCLUDED_snow_types_MouseEvent */ 
