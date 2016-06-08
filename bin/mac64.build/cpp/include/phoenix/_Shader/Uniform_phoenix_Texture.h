#ifndef INCLUDED_phoenix__Shader_Uniform_phoenix_Texture
#define INCLUDED_phoenix__Shader_Uniform_phoenix_Texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(opengl,GLObject)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS2(phoenix,_Shader,Uniform_phoenix_Texture)
namespace phoenix{
namespace _Shader{


class HXCPP_CLASS_ATTRIBUTES  Uniform_phoenix_Texture_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Uniform_phoenix_Texture_obj OBJ_;
		Uniform_phoenix_Texture_obj();
		Void __construct(::String _name,::phoenix::Texture _value,::opengl::GLObject _location);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix._Shader.Uniform_phoenix_Texture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Uniform_phoenix_Texture_obj > __new(::String _name,::phoenix::Texture _value,::opengl::GLObject _location);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Uniform_phoenix_Texture_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Uniform_phoenix_Texture","\x60","\x44","\x70","\x5c"); }

		::String name;
		::phoenix::Texture value;
		::opengl::GLObject location;
};

} // end namespace phoenix
} // end namespace _Shader

#endif /* INCLUDED_phoenix__Shader_Uniform_phoenix_Texture */ 
