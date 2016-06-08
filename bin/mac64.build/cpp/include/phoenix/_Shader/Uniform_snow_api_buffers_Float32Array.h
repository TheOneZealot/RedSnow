#ifndef INCLUDED_phoenix__Shader_Uniform_snow_api_buffers_Float32Array
#define INCLUDED_phoenix__Shader_Uniform_snow_api_buffers_Float32Array

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(opengl,GLObject)
HX_DECLARE_CLASS2(phoenix,_Shader,Uniform_snow_api_buffers_Float32Array)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
namespace phoenix{
namespace _Shader{


class HXCPP_CLASS_ATTRIBUTES  Uniform_snow_api_buffers_Float32Array_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Uniform_snow_api_buffers_Float32Array_obj OBJ_;
		Uniform_snow_api_buffers_Float32Array_obj();
		Void __construct(::String _name,::snow::api::buffers::ArrayBufferView _value,::opengl::GLObject _location);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix._Shader.Uniform_snow_api_buffers_Float32Array")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Uniform_snow_api_buffers_Float32Array_obj > __new(::String _name,::snow::api::buffers::ArrayBufferView _value,::opengl::GLObject _location);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Uniform_snow_api_buffers_Float32Array_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Uniform_snow_api_buffers_Float32Array","\xe0","\xc3","\xd9","\xc2"); }

		::String name;
		::snow::api::buffers::ArrayBufferView value;
		::opengl::GLObject location;
};

} // end namespace phoenix
} // end namespace _Shader

#endif /* INCLUDED_phoenix__Shader_Uniform_snow_api_buffers_Float32Array */ 
