#ifndef INCLUDED_openal_ALError
#define INCLUDED_openal_ALError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(openal,ALError)
namespace openal{


class HXCPP_CLASS_ATTRIBUTES  ALError_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ALError_obj OBJ_;
		ALError_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openal.ALError")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ALError_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ALError_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ALError","\xdd","\xce","\x69","\xf8"); }

		static void __boot();
		static ::String INVALID_NAME;
		static ::String INVALID_ENUM;
		static ::String INVALID_VALUE;
		static ::String INVALID_OPERATION;
		static ::String OUT_OF_MEMORY;
		static ::String desc( int error);
		static Dynamic desc_dyn();

};

} // end namespace openal

#endif /* INCLUDED_openal_ALError */ 
