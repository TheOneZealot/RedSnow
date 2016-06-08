#ifndef INCLUDED_snow_types_ModState
#define INCLUDED_snow_types_ModState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,types,ModState)
namespace snow{
namespace types{


class HXCPP_CLASS_ATTRIBUTES  ModState_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ModState_obj OBJ_;
		ModState_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.types.ModState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ModState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ModState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ModState","\x0f","\xcc","\xe3","\x4e"); }

		bool none;
		bool lshift;
		bool rshift;
		bool lctrl;
		bool rctrl;
		bool lalt;
		bool ralt;
		bool lmeta;
		bool rmeta;
		bool num;
		bool caps;
		bool mode;
		bool ctrl;
		bool shift;
		bool alt;
		bool meta;
		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types

#endif /* INCLUDED_snow_types_ModState */ 
