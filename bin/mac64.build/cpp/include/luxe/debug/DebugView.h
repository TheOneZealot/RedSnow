#ifndef INCLUDED_luxe_debug_DebugView
#define INCLUDED_luxe_debug_DebugView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
HX_DECLARE_CLASS1(luxe,Debug)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,KeyEvent)
HX_DECLARE_CLASS1(luxe,MouseEvent)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,TouchEvent)
HX_DECLARE_CLASS2(luxe,debug,DebugView)
HX_DECLARE_CLASS2(snow,types,WindowEvent)
namespace luxe{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  DebugView_obj : public ::luxe::Objects_obj{
	public:
		typedef ::luxe::Objects_obj super;
		typedef DebugView_obj OBJ_;
		DebugView_obj();
		Void __construct(::luxe::Debug _debug);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.debug.DebugView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DebugView_obj > __new(::luxe::Debug _debug);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DebugView_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DebugView","\x38","\xb6","\x6d","\xd3"); }

		::luxe::Debug debug;
		bool visible;
		virtual Void refresh( );
		Dynamic refresh_dyn();

		virtual Void process( );
		Dynamic process_dyn();

		virtual Void ontouchdown( ::luxe::TouchEvent e);
		Dynamic ontouchdown_dyn();

		virtual Void ontouchup( ::luxe::TouchEvent e);
		Dynamic ontouchup_dyn();

		virtual Void ontouchmove( ::luxe::TouchEvent e);
		Dynamic ontouchmove_dyn();

		virtual Void onmousedown( ::luxe::MouseEvent e);
		Dynamic onmousedown_dyn();

		virtual Void onmouseup( ::luxe::MouseEvent e);
		Dynamic onmouseup_dyn();

		virtual Void onmousemove( ::luxe::MouseEvent e);
		Dynamic onmousemove_dyn();

		virtual Void onmousewheel( ::luxe::MouseEvent e);
		Dynamic onmousewheel_dyn();

		virtual Void onkeydown( ::luxe::KeyEvent e);
		Dynamic onkeydown_dyn();

		virtual Void onkeyup( ::luxe::KeyEvent e);
		Dynamic onkeyup_dyn();

		virtual Void onwindowsized( ::snow::types::WindowEvent e);
		Dynamic onwindowsized_dyn();

		virtual Void create( );
		Dynamic create_dyn();

		virtual Void show( );
		Dynamic show_dyn();

		virtual Void hide( );
		Dynamic hide_dyn();

};

} // end namespace luxe
} // end namespace debug

#endif /* INCLUDED_luxe_debug_DebugView */ 
