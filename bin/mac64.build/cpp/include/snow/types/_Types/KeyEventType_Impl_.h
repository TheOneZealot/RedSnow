#ifndef INCLUDED_snow_types__Types_KeyEventType_Impl_
#define INCLUDED_snow_types__Types_KeyEventType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,types,_Types,KeyEventType_Impl_)
namespace snow{
namespace types{
namespace _Types{


class HXCPP_CLASS_ATTRIBUTES  KeyEventType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef KeyEventType_Impl__obj OBJ_;
		KeyEventType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.types._Types.KeyEventType_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< KeyEventType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KeyEventType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("KeyEventType_Impl_","\xd5","\xf4","\x0a","\xc8"); }

		static void __boot();
		static int ke_unknown;
		static int ke_down;
		static int ke_up;
		static ::String toString( int this1);
		static Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types
} // end namespace _Types

#endif /* INCLUDED_snow_types__Types_KeyEventType_Impl_ */ 
