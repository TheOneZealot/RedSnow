#ifndef INCLUDED_phoenix_Renderer
#define INCLUDED_phoenix_Renderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Engine)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(opengl,GLObject)
HX_DECLARE_CLASS1(phoenix,Batcher)
HX_DECLARE_CLASS1(phoenix,BitmapFont)
HX_DECLARE_CLASS1(phoenix,Camera)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,RenderPath)
HX_DECLARE_CLASS1(phoenix,RenderState)
HX_DECLARE_CLASS1(phoenix,RenderTexture)
HX_DECLARE_CLASS1(phoenix,Renderer)
HX_DECLARE_CLASS1(phoenix,RendererStats)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS3(snow,systems,assets,Asset)
HX_DECLARE_CLASS3(snow,systems,assets,AssetImage)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Renderer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Renderer_obj OBJ_;
		Renderer_obj();
		Void __construct(::luxe::Engine _core,::snow::systems::assets::AssetImage _asset);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.Renderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Renderer_obj > __new(::luxe::Engine _core,::snow::systems::assets::AssetImage _asset);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Renderer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Renderer","\x63","\x81","\x8d","\x8c"); }

		Array< ::Dynamic > batchers;
		::luxe::Engine core;
		::phoenix::RenderState state;
		::opengl::GLObject default_fbo;
		::opengl::GLObject default_rbo;
		Dynamic shaders;
		::phoenix::Batcher batcher;
		::phoenix::Camera camera;
		::phoenix::BitmapFont font;
		::snow::systems::assets::AssetImage font_asset;
		::phoenix::RenderPath render_path;
		::phoenix::RenderPath default_render_path;
		::phoenix::RenderTexture target;
		::phoenix::Vector target_size;
		bool should_clear;
		bool stop;
		int stop_count;
		::phoenix::Color clear_color;
		::phoenix::RendererStats stats;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual int sort_batchers( ::phoenix::Batcher a,::phoenix::Batcher b);
		Dynamic sort_batchers_dyn();

		virtual Void add_batch( ::phoenix::Batcher batch);
		Dynamic add_batch_dyn();

		virtual Void remove_batch( ::phoenix::Batcher batch);
		Dynamic remove_batch_dyn();

		virtual ::phoenix::Batcher create_batcher( Dynamic options);
		Dynamic create_batcher_dyn();

		virtual Void clear( ::phoenix::Color _color);
		Dynamic clear_dyn();

		virtual Void blend_mode( Dynamic _src_mode,hx::Null< int >  _dst_mode);
		Dynamic blend_mode_dyn();

		virtual Void blend_equation( Dynamic _equation);
		Dynamic blend_equation_dyn();

		virtual Void internal_resized( int _w,int _h);
		Dynamic internal_resized_dyn();

		virtual Void process( );
		Dynamic process_dyn();

		virtual Void onresize( Dynamic e);
		Dynamic onresize_dyn();

		virtual ::phoenix::RenderTexture get_target( );
		Dynamic get_target_dyn();

		virtual ::phoenix::RenderTexture set_target( ::phoenix::RenderTexture _target);
		Dynamic set_target_dyn();

		virtual Void create_default_shaders( );
		Dynamic create_default_shaders_dyn();

		virtual Void create_default_font( );
		Dynamic create_default_font_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Renderer */ 
