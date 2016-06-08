#ifndef INCLUDED_phoenix_RenderTexture
#define INCLUDED_phoenix_RenderTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(opengl,GLObject)
HX_DECLARE_CLASS1(phoenix,RenderTexture)
HX_DECLARE_CLASS1(phoenix,Texture)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  RenderTexture_obj : public ::phoenix::Texture_obj{
	public:
		typedef ::phoenix::Texture_obj super;
		typedef RenderTexture_obj OBJ_;
		RenderTexture_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.RenderTexture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RenderTexture_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderTexture_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("RenderTexture","\x05","\x8c","\xbe","\xe2"); }

		::opengl::GLObject fbo;
		::opengl::GLObject renderbuffer;
		virtual Void clear( );

		virtual Void bindBuffer( );
		Dynamic bindBuffer_dyn();

		virtual Void unbindBuffer( ::opengl::GLObject _other);
		Dynamic unbindBuffer_dyn();

		virtual Void bindRenderBuffer( );
		Dynamic bindRenderBuffer_dyn();

		virtual Void unbindRenderBuffer( ::opengl::GLObject _other);
		Dynamic unbindRenderBuffer_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_RenderTexture */ 
