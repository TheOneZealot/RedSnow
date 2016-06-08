#ifndef INCLUDED_opengl_GLObject
#define INCLUDED_opengl_GLObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(opengl,GLObject)
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES  GLObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GLObject_obj OBJ_;
		GLObject_obj();
		Void __construct(int _id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="opengl.GLObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLObject_obj > __new(int _id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLObject_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GLObject","\xc4","\xda","\x30","\x7f"); }

		int id;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual bool get_invalidated( );
		Dynamic get_invalidated_dyn();

		virtual bool set_invalidated( bool value);
		Dynamic set_invalidated_dyn();

};

} // end namespace opengl

#endif /* INCLUDED_opengl_GLObject */ 
