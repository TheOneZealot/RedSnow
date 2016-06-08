#ifndef INCLUDED_snow_types_Config
#define INCLUDED_snow_types_Config

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,types,Config)
namespace snow{
namespace types{


class HXCPP_CLASS_ATTRIBUTES  Config_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Config_obj OBJ_;
		Config_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.types.Config")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Config_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Config_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Config","\xe2","\xca","\x66","\xfc"); }

		static void __boot();
		static ::String app_runtime;
		static ::String app_config;
		static ::String app_ident;
		static ::String app_main;
		static ::String module_assets;
		static ::String module_audio;
		static ::String module_io;
		static Array< ::String > extensions;
};

} // end namespace snow
} // end namespace types

#endif /* INCLUDED_snow_types_Config */ 
