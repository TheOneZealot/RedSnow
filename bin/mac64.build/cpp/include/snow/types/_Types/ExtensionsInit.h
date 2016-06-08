#ifndef INCLUDED_snow_types__Types_ExtensionsInit
#define INCLUDED_snow_types__Types_ExtensionsInit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,types,_Types,ExtensionsInit)
namespace snow{
namespace types{
namespace _Types{


class HXCPP_CLASS_ATTRIBUTES  ExtensionsInit_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ExtensionsInit_obj OBJ_;
		ExtensionsInit_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.types._Types.ExtensionsInit")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ExtensionsInit_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ExtensionsInit_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ExtensionsInit","\x64","\x11","\x4c","\x10"); }

};

} // end namespace snow
} // end namespace types
} // end namespace _Types

#endif /* INCLUDED_snow_types__Types_ExtensionsInit */ 
