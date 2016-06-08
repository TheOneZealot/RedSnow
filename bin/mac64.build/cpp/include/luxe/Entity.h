#ifndef INCLUDED_luxe_Entity
#define INCLUDED_luxe_Entity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Events)
HX_DECLARE_CLASS1(luxe,GamepadEvent)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,InputEvent)
HX_DECLARE_CLASS1(luxe,KeyEvent)
HX_DECLARE_CLASS1(luxe,MouseEvent)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Scene)
HX_DECLARE_CLASS1(luxe,TextEvent)
HX_DECLARE_CLASS1(luxe,TouchEvent)
HX_DECLARE_CLASS2(luxe,components,Components)
HX_DECLARE_CLASS2(luxe,structural,OrderedMap_String_luxe_Component)
HX_DECLARE_CLASS1(phoenix,Quaternion)
HX_DECLARE_CLASS1(phoenix,Transform)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(snow,api,Timer)
HX_DECLARE_CLASS2(snow,types,WindowEvent)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Entity_obj : public ::luxe::Objects_obj{
	public:
		typedef ::luxe::Objects_obj super;
		typedef Entity_obj OBJ_;
		Entity_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.Entity")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Entity_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Entity_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Entity","\x43","\x87","\xb0","\x39"); }

		::luxe::Events events;
		Array< ::Dynamic > children;
		bool destroyed;
		bool inited;
		bool started;
		Float fixed_rate;
		::luxe::Entity parent;
		::luxe::Scene scene;
		bool active;
		::phoenix::Transform transform;
		::luxe::components::Components _components;
		::snow::api::Timer fixed_rate_timer;
		Dynamic options;
		::luxe::Scene scene_root;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void update( Float dt);
		Dynamic update_dyn();

		virtual Void onfixedupdate( Float rate);
		Dynamic onfixedupdate_dyn();

		virtual Void onreset( );
		Dynamic onreset_dyn();

		virtual Void ondestroy( );
		Dynamic ondestroy_dyn();

		virtual Void onkeyup( ::luxe::KeyEvent event);
		Dynamic onkeyup_dyn();

		virtual Void onkeydown( ::luxe::KeyEvent event);
		Dynamic onkeydown_dyn();

		virtual Void ontextinput( ::luxe::TextEvent event);
		Dynamic ontextinput_dyn();

		virtual Void oninputdown( ::luxe::InputEvent event);
		Dynamic oninputdown_dyn();

		virtual Void oninputup( ::luxe::InputEvent event);
		Dynamic oninputup_dyn();

		virtual Void onmousedown( ::luxe::MouseEvent event);
		Dynamic onmousedown_dyn();

		virtual Void onmouseup( ::luxe::MouseEvent event);
		Dynamic onmouseup_dyn();

		virtual Void onmousemove( ::luxe::MouseEvent event);
		Dynamic onmousemove_dyn();

		virtual Void onmousewheel( ::luxe::MouseEvent event);
		Dynamic onmousewheel_dyn();

		virtual Void ontouchdown( ::luxe::TouchEvent event);
		Dynamic ontouchdown_dyn();

		virtual Void ontouchup( ::luxe::TouchEvent event);
		Dynamic ontouchup_dyn();

		virtual Void ontouchmove( ::luxe::TouchEvent event);
		Dynamic ontouchmove_dyn();

		virtual Void ongamepadup( ::luxe::GamepadEvent event);
		Dynamic ongamepadup_dyn();

		virtual Void ongamepaddown( ::luxe::GamepadEvent event);
		Dynamic ongamepaddown_dyn();

		virtual Void ongamepadaxis( ::luxe::GamepadEvent event);
		Dynamic ongamepadaxis_dyn();

		virtual Void ongamepaddevice( ::luxe::GamepadEvent event);
		Dynamic ongamepaddevice_dyn();

		virtual Void onwindowmoved( ::snow::types::WindowEvent event);
		Dynamic onwindowmoved_dyn();

		virtual Void onwindowresized( ::snow::types::WindowEvent event);
		Dynamic onwindowresized_dyn();

		virtual Void onwindowsized( ::snow::types::WindowEvent event);
		Dynamic onwindowsized_dyn();

		virtual Void onwindowminimized( ::snow::types::WindowEvent event);
		Dynamic onwindowminimized_dyn();

		virtual Void onwindowrestored( ::snow::types::WindowEvent event);
		Dynamic onwindowrestored_dyn();

		int component_count;
		virtual Dynamic add( Dynamic _component);
		Dynamic add_dyn();

		virtual bool remove( ::String _name);
		Dynamic remove_dyn();

		virtual Dynamic get( ::String _name,Dynamic _in_children);
		Dynamic get_dyn();

		virtual cpp::ArrayBase get_any( ::String _name,Dynamic _in_children,Dynamic _first_only);
		Dynamic get_any_dyn();

		virtual bool has( ::String _name);
		Dynamic has_dyn();

		virtual Void _init( );
		Dynamic _init_dyn();

		virtual Void _reset( Dynamic _);
		Dynamic _reset_dyn();

		virtual Void destroy( Dynamic _from_parent);
		Dynamic destroy_dyn();

		virtual Void _update( Float dt);
		Dynamic _update_dyn();

		virtual Void _fixed_update( );
		Dynamic _fixed_update_dyn();

		virtual ::luxe::Emitter _find_emit_source( Dynamic _from_unlisten);
		Dynamic _find_emit_source_dyn();

		virtual Void _listen( int _event,Dynamic _handler,Dynamic _self);
		Dynamic _listen_dyn();

		virtual Void _unlisten( int _event,Dynamic _handler,Dynamic _self);
		Dynamic _unlisten_dyn();

		virtual Void _detach_scene( );
		Dynamic _detach_scene_dyn();

		virtual Void _attach_scene( );
		Dynamic _attach_scene_dyn();

		virtual Void _keyup( ::luxe::KeyEvent _event);
		Dynamic _keyup_dyn();

		virtual Void _keydown( ::luxe::KeyEvent _event);
		Dynamic _keydown_dyn();

		virtual Void _textinput( ::luxe::TextEvent _event);
		Dynamic _textinput_dyn();

		virtual Void _mousedown( ::luxe::MouseEvent _event);
		Dynamic _mousedown_dyn();

		virtual Void _mouseup( ::luxe::MouseEvent _event);
		Dynamic _mouseup_dyn();

		virtual Void _mousewheel( ::luxe::MouseEvent _event);
		Dynamic _mousewheel_dyn();

		virtual Void _mousemove( ::luxe::MouseEvent _event);
		Dynamic _mousemove_dyn();

		virtual Void _touchdown( ::luxe::TouchEvent _event);
		Dynamic _touchdown_dyn();

		virtual Void _touchup( ::luxe::TouchEvent _event);
		Dynamic _touchup_dyn();

		virtual Void _touchmove( ::luxe::TouchEvent _event);
		Dynamic _touchmove_dyn();

		virtual Void _gamepadaxis( ::luxe::GamepadEvent _event);
		Dynamic _gamepadaxis_dyn();

		virtual Void _gamepaddown( ::luxe::GamepadEvent _event);
		Dynamic _gamepaddown_dyn();

		virtual Void _gamepadup( ::luxe::GamepadEvent _event);
		Dynamic _gamepadup_dyn();

		virtual Void _gamepaddevice( ::luxe::GamepadEvent _event);
		Dynamic _gamepaddevice_dyn();

		virtual Void _windowmoved( ::snow::types::WindowEvent _event);
		Dynamic _windowmoved_dyn();

		virtual Void _windowresized( ::snow::types::WindowEvent _event);
		Dynamic _windowresized_dyn();

		virtual Void _windowsized( ::snow::types::WindowEvent _event);
		Dynamic _windowsized_dyn();

		virtual Void _windowminimized( ::snow::types::WindowEvent _event);
		Dynamic _windowminimized_dyn();

		virtual Void _windowrestored( ::snow::types::WindowEvent _event);
		Dynamic _windowrestored_dyn();

		virtual Void _inputdown( ::luxe::InputEvent _event);
		Dynamic _inputdown_dyn();

		virtual Void _inputup( ::luxe::InputEvent _event);
		Dynamic _inputup_dyn();

		virtual Float get_fixed_rate( );
		Dynamic get_fixed_rate_dyn();

		virtual Float set_fixed_rate( Float _rate);
		Dynamic set_fixed_rate_dyn();

		virtual Void _stop_fixed_rate_timer( );
		Dynamic _stop_fixed_rate_timer_dyn();

		virtual Void _set_fixed_rate_timer( Float _rate);
		Dynamic _set_fixed_rate_timer_dyn();

		virtual ::luxe::structural::OrderedMap_String_luxe_Component get_components( );
		Dynamic get_components_dyn();

		virtual Void _add_child( ::luxe::Entity child);
		Dynamic _add_child_dyn();

		virtual Void _remove_child( ::luxe::Entity child);
		Dynamic _remove_child_dyn();

		virtual Void set_pos_from_transform( ::phoenix::Vector _pos);
		Dynamic set_pos_from_transform_dyn();

		virtual Void set_rotation_from_transform( ::phoenix::Quaternion _rotation);
		Dynamic set_rotation_from_transform_dyn();

		virtual Void set_scale_from_transform( ::phoenix::Vector _scale);
		Dynamic set_scale_from_transform_dyn();

		virtual Void set_origin_from_transform( ::phoenix::Vector _origin);
		Dynamic set_origin_from_transform_dyn();

		virtual Void set_parent_from_transform( ::phoenix::Transform _parent);
		Dynamic set_parent_from_transform_dyn();

		virtual ::phoenix::Vector set_pos( ::phoenix::Vector _p);
		Dynamic set_pos_dyn();

		virtual ::phoenix::Vector get_pos( );
		Dynamic get_pos_dyn();

		virtual ::phoenix::Quaternion set_rotation( ::phoenix::Quaternion _r);
		Dynamic set_rotation_dyn();

		virtual ::phoenix::Quaternion get_rotation( );
		Dynamic get_rotation_dyn();

		virtual ::phoenix::Vector set_scale( ::phoenix::Vector _s);
		Dynamic set_scale_dyn();

		virtual ::phoenix::Vector get_scale( );
		Dynamic get_scale_dyn();

		virtual ::phoenix::Vector set_origin( ::phoenix::Vector _origin);
		Dynamic set_origin_dyn();

		virtual ::phoenix::Vector get_origin( );
		Dynamic get_origin_dyn();

		virtual ::phoenix::Transform set_transform( ::phoenix::Transform _transform);
		Dynamic set_transform_dyn();

		virtual ::phoenix::Transform get_transform( );
		Dynamic get_transform_dyn();

		virtual ::luxe::Entity set_parent( ::luxe::Entity other);
		Dynamic set_parent_dyn();

		virtual ::luxe::Entity get_parent( );
		Dynamic get_parent_dyn();

		virtual ::luxe::Scene set_scene( ::luxe::Scene _scene);
		Dynamic set_scene_dyn();

		virtual ::luxe::Scene get_scene( );
		Dynamic get_scene_dyn();

		virtual ::luxe::Scene set_scene_root( ::luxe::Scene _scene);
		Dynamic set_scene_root_dyn();

		virtual ::String set_name( ::String _name);

		virtual bool set_active( bool _active);
		Dynamic set_active_dyn();

		virtual bool get_active( );
		Dynamic get_active_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Entity */ 
