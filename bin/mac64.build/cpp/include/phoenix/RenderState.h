#ifndef INCLUDED_phoenix_RenderState
#define INCLUDED_phoenix_RenderState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(opengl,GLObject)
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,RenderState)
HX_DECLARE_CLASS1(phoenix,Renderer)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  RenderState_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RenderState_obj OBJ_;
		RenderState_obj();
		Void __construct(::phoenix::Renderer _renderer);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.RenderState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RenderState_obj > __new(::phoenix::Renderer _renderer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("RenderState","\xbb","\x3a","\xef","\x33"); }

		static void __boot();
		static ::opengl::GLObject bound_texture_2D;
		static ::opengl::GLObject bound_texture_cube;
		bool cull_face;
		bool depth_test;
		bool depth_mask;
		::phoenix::Renderer renderer;
		::phoenix::Rectangle _viewport;
		Float _view_target_h;
		virtual Void enable( int what);
		Dynamic enable_dyn();

		virtual Void disable( int what);
		Dynamic disable_dyn();

		int depth_func;
		virtual Void depth_function( int what);
		Dynamic depth_function_dyn();

		virtual Void viewport( Float x,Float y,Float w,Float h);
		Dynamic viewport_dyn();

		::opengl::GLObject _current_fbo;
		virtual Void bindFramebuffer( ::opengl::GLObject buffer);
		Dynamic bindFramebuffer_dyn();

		::opengl::GLObject _current_rbo;
		virtual Void bindRenderbuffer( ::opengl::GLObject buffer);
		Dynamic bindRenderbuffer_dyn();

		::opengl::GLObject _used_program;
		virtual Void useProgram( ::opengl::GLObject program);
		Dynamic useProgram_dyn();

		int _active_texture;
		virtual Void activeTexture( int val);
		Dynamic activeTexture_dyn();

		virtual Void bindTexture( int type,::opengl::GLObject tex);
		Dynamic bindTexture_dyn();

		virtual Void bindTexture2D( ::opengl::GLObject tex);
		Dynamic bindTexture2D_dyn();

		virtual Void bindTextureCube( ::opengl::GLObject tex);
		Dynamic bindTextureCube_dyn();

		Float _last_line_width;
		virtual Void lineWidth( Float _width);
		Dynamic lineWidth_dyn();

		bool _last_depth_mask;
		virtual Void depthMask( bool _enable);
		Dynamic depthMask_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_RenderState */ 
