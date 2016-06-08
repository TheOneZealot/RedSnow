#ifndef INCLUDED_luxe_Debug
#define INCLUDED_luxe_Debug

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Debug)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Engine)
HX_DECLARE_CLASS1(luxe,KeyEvent)
HX_DECLARE_CLASS1(luxe,MouseEvent)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,TouchEvent)
HX_DECLARE_CLASS2(luxe,debug,DebugView)
HX_DECLARE_CLASS2(luxe,debug,Inspector)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,Batcher)
HX_DECLARE_CLASS1(phoenix,BitmapFont)
HX_DECLARE_CLASS1(phoenix,Camera)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,QuadGeometry)
HX_DECLARE_CLASS1(snow,App)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Debug_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Debug_obj OBJ_;
		Debug_obj();
		Void __construct(::luxe::Engine _app);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.Debug")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Debug_obj > __new(::luxe::Engine _app);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Debug_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Debug","\x33","\xc2","\x4c","\x6a"); }

		static void __boot();
		static Array< ::Dynamic > views;
		static ::String debug_batch_tag;
		static cpp::ArrayBase trace_callbacks;
		static bool shut_down;
		static bool tracing;
		static Void internal_trace( Dynamic _value,Dynamic _info);
		static Dynamic internal_trace_dyn();

		::luxe::Engine app;
		bool visible;
		::luxe::debug::Inspector inspector;
		::phoenix::geometry::QuadGeometry overlay;
		::phoenix::Batcher batcher;
		::phoenix::Camera view;
		::phoenix::BitmapFont debug_font;
		Float dt_average;
		Float dt_average_accum;
		int dt_average_span;
		int dt_average_count;
		int current_view_index;
		int last_view_index;
		::luxe::debug::DebugView current_view;
		::phoenix::Vector padding;
		::String profile_path;
		bool profiling;
		virtual Dynamic get_view( ::String _name);
		Dynamic get_view_dyn();

		virtual Void start( ::String _name,Dynamic _max);
		Dynamic start_dyn();

		virtual Void end( ::String _name);
		Dynamic end_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void create_debug_console( );
		Dynamic create_debug_console_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void mouseup( ::luxe::MouseEvent e);
		Dynamic mouseup_dyn();

		virtual Void mousedown( ::luxe::MouseEvent e);
		Dynamic mousedown_dyn();

		virtual Void mousemove( ::luxe::MouseEvent e);
		Dynamic mousemove_dyn();

		virtual Void mousewheel( ::luxe::MouseEvent e);
		Dynamic mousewheel_dyn();

		virtual Void touchup( ::luxe::TouchEvent e);
		Dynamic touchup_dyn();

		virtual Void touchdown( ::luxe::TouchEvent e);
		Dynamic touchdown_dyn();

		virtual Void touchmove( ::luxe::TouchEvent e);
		Dynamic touchmove_dyn();

		virtual Void keyup( ::luxe::KeyEvent e);
		Dynamic keyup_dyn();

		virtual Void keydown( ::luxe::KeyEvent e);
		Dynamic keydown_dyn();

		virtual Void refresh( );
		Dynamic refresh_dyn();

		virtual Void switch_view( );
		Dynamic switch_view_dyn();

		bool last_cursor_grab;
		virtual bool set_visible( bool _value);
		Dynamic set_visible_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void process( );
		Dynamic process_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Debug */ 
