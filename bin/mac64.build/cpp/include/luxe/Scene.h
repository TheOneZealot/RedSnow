#ifndef INCLUDED_luxe_Scene
#define INCLUDED_luxe_Scene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,GamepadEvent)
HX_DECLARE_CLASS1(luxe,InputEvent)
HX_DECLARE_CLASS1(luxe,KeyEvent)
HX_DECLARE_CLASS1(luxe,MouseEvent)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Scene)
HX_DECLARE_CLASS1(luxe,TextEvent)
HX_DECLARE_CLASS1(luxe,TouchEvent)
HX_DECLARE_CLASS2(snow,types,WindowEvent)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Scene_obj : public ::luxe::Objects_obj{
	public:
		typedef ::luxe::Objects_obj super;
		typedef Scene_obj OBJ_;
		Scene_obj();
		Void __construct(::String __o__name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.Scene")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Scene_obj > __new(::String __o__name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Scene_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Scene","\x2c","\x49","\xff","\x0b"); }

		::haxe::ds::StringMap entities;
		bool inited;
		bool started;
		int length;
		bool destroyed;
		Array< ::Dynamic > _delayed_init_entities;
		Array< ::Dynamic > _delayed_reset_entities;
		bool _has_changed;
		virtual Void handle_duplicate_warning( ::String _name);
		Dynamic handle_duplicate_warning_dyn();

		int entity_count;
		virtual Void add( ::luxe::Entity entity);
		Dynamic add_dyn();

		virtual bool remove( ::luxe::Entity entity);
		Dynamic remove_dyn();

		virtual Dynamic get( ::String _name);
		Dynamic get_dyn();

		virtual Void empty( );
		Dynamic empty_dyn();

		virtual Array< ::Dynamic > get_named_like( ::String _name,Array< ::Dynamic > into);
		Dynamic get_named_like_dyn();

		virtual Void render( Dynamic _);
		Dynamic render_dyn();

		virtual Void prerender( Dynamic _);
		Dynamic prerender_dyn();

		virtual Void postrender( Dynamic _);
		Dynamic postrender_dyn();

		virtual Void keydown( ::luxe::KeyEvent e);
		Dynamic keydown_dyn();

		virtual Void keyup( ::luxe::KeyEvent e);
		Dynamic keyup_dyn();

		virtual Void textinput( ::luxe::TextEvent e);
		Dynamic textinput_dyn();

		virtual Void mousedown( ::luxe::MouseEvent e);
		Dynamic mousedown_dyn();

		virtual Void mousewheel( ::luxe::MouseEvent e);
		Dynamic mousewheel_dyn();

		virtual Void mouseup( ::luxe::MouseEvent e);
		Dynamic mouseup_dyn();

		virtual Void mousemove( ::luxe::MouseEvent e);
		Dynamic mousemove_dyn();

		virtual Void touchdown( ::luxe::TouchEvent event);
		Dynamic touchdown_dyn();

		virtual Void touchup( ::luxe::TouchEvent event);
		Dynamic touchup_dyn();

		virtual Void touchmove( ::luxe::TouchEvent event);
		Dynamic touchmove_dyn();

		virtual Void gamepadaxis( ::luxe::GamepadEvent event);
		Dynamic gamepadaxis_dyn();

		virtual Void gamepadup( ::luxe::GamepadEvent event);
		Dynamic gamepadup_dyn();

		virtual Void gamepaddown( ::luxe::GamepadEvent event);
		Dynamic gamepaddown_dyn();

		virtual Void gamepaddevice( ::luxe::GamepadEvent event);
		Dynamic gamepaddevice_dyn();

		virtual Void windowmoved( ::snow::types::WindowEvent event);
		Dynamic windowmoved_dyn();

		virtual Void windowresized( ::snow::types::WindowEvent event);
		Dynamic windowresized_dyn();

		virtual Void windowsized( ::snow::types::WindowEvent event);
		Dynamic windowsized_dyn();

		virtual Void windowminimized( ::snow::types::WindowEvent event);
		Dynamic windowminimized_dyn();

		virtual Void windowrestored( ::snow::types::WindowEvent event);
		Dynamic windowrestored_dyn();

		virtual Void inputdown( ::luxe::InputEvent _event);
		Dynamic inputdown_dyn();

		virtual Void inputup( ::luxe::InputEvent _event);
		Dynamic inputup_dyn();

		virtual Void _destroy( Dynamic _);
		Dynamic _destroy_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual bool _do_init( );
		Dynamic _do_init_dyn();

		virtual Void init( Dynamic _);
		Dynamic init_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void update( Float dt);
		Dynamic update_dyn();

		virtual Void handle_delayed_additions( );
		Dynamic handle_delayed_additions_dyn();

		virtual int get_length( );
		Dynamic get_length_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Scene */ 
