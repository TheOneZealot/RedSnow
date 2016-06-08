#ifndef INCLUDED_opengl__GL_IntRef_Impl_
#define INCLUDED_opengl__GL_IntRef_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(opengl,_GL,IntRef_Impl_)
namespace opengl{
namespace _GL{


class HXCPP_CLASS_ATTRIBUTES  IntRef_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IntRef_Impl__obj OBJ_;
		IntRef_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="opengl._GL.IntRef_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IntRef_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IntRef_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("IntRef_Impl_","\x64","\xdf","\x37","\x41"); }

		static ::cpp::Pointer< int > fromInt( int _val);
		static Dynamic fromInt_dyn();

};

} // end namespace opengl
} // end namespace _GL

#endif /* INCLUDED_opengl__GL_IntRef_Impl_ */ 
