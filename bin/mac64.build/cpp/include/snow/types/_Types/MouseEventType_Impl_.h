#ifndef INCLUDED_snow_types__Types_MouseEventType_Impl_
#define INCLUDED_snow_types__Types_MouseEventType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,types,_Types,MouseEventType_Impl_)
namespace snow{
namespace types{
namespace _Types{


class HXCPP_CLASS_ATTRIBUTES  MouseEventType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MouseEventType_Impl__obj OBJ_;
		MouseEventType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.types._Types.MouseEventType_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MouseEventType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MouseEventType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MouseEventType_Impl_","\x0f","\xb7","\xf3","\x62"); }

		static void __boot();
		static int me_unknown;
		static int me_move;
		static int me_down;
		static int me_up;
		static int me_wheel;
		static ::String toString( int this1);
		static Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types
} // end namespace _Types

#endif /* INCLUDED_snow_types__Types_MouseEventType_Impl_ */ 
