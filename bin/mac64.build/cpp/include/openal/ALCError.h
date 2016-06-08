#ifndef INCLUDED_openal_ALCError
#define INCLUDED_openal_ALCError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(openal,ALCError)
namespace openal{


class HXCPP_CLASS_ATTRIBUTES  ALCError_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ALCError_obj OBJ_;
		ALCError_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openal.ALCError")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ALCError_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ALCError_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ALCError","\xb0","\xa3","\x6e","\xae"); }

		static void __boot();
		static ::String NO_ERROR;
		static ::String INVALID_DEVICE;
		static ::String INVALID_CONTEXT;
		static ::String INVALID_ENUM;
		static ::String INVALID_VALUE;
		static ::String OUT_OF_MEMORY;
		static ::String UNKNOWN_ERROR;
		static ::String desc( int error);
		static Dynamic desc_dyn();

};

} // end namespace openal

#endif /* INCLUDED_openal_ALCError */ 
