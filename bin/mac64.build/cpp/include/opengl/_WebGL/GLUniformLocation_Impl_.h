#ifndef INCLUDED_opengl__WebGL_GLUniformLocation_Impl_
#define INCLUDED_opengl__WebGL_GLUniformLocation_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(opengl,GLObject)
HX_DECLARE_CLASS2(opengl,_WebGL,GLUniformLocation_Impl_)
namespace opengl{
namespace _WebGL{


class HXCPP_CLASS_ATTRIBUTES  GLUniformLocation_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GLUniformLocation_Impl__obj OBJ_;
		GLUniformLocation_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="opengl._WebGL.GLUniformLocation_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLUniformLocation_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLUniformLocation_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GLUniformLocation_Impl_","\x84","\xba","\x94","\x8c"); }

		static ::opengl::GLObject _new( int _id);
		static Dynamic _new_dyn();

		static int toInt( ::opengl::GLObject this1);
		static Dynamic toInt_dyn();

		static ::opengl::GLObject fromInt( int _id);
		static Dynamic fromInt_dyn();

		static Dynamic toDynamic( ::opengl::GLObject this1);
		static Dynamic toDynamic_dyn();

		static ::opengl::GLObject fromDynamic( Dynamic _id);
		static Dynamic fromDynamic_dyn();

		static ::String toString( ::opengl::GLObject this1);
		static Dynamic toString_dyn();

};

} // end namespace opengl
} // end namespace _WebGL

#endif /* INCLUDED_opengl__WebGL_GLUniformLocation_Impl_ */ 
