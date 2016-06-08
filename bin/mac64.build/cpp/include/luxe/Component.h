#ifndef INCLUDED_luxe_Component
#define INCLUDED_luxe_Component

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,GamepadEvent)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,InputEvent)
HX_DECLARE_CLASS1(luxe,KeyEvent)
HX_DECLARE_CLASS1(luxe,MouseEvent)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,TextEvent)
HX_DECLARE_CLASS1(luxe,TouchEvent)
HX_DECLARE_CLASS1(phoenix,Quaternion)
HX_DECLARE_CLASS1(phoenix,Transform)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(snow,types,WindowEvent)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Component_obj : public ::luxe::ID_obj{
	public:
		typedef ::luxe::ID_obj super;
		typedef Component_obj OBJ_;
		Component_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.Component")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Component_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Component_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Component","\x9d","\xd0","\x26","\xb1"); }

		::luxe::Entity entity;
		::phoenix::Transform transform;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void update( Float dt);
		Dynamic update_dyn();

		virtual Void onadded( );
		Dynamic onadded_dyn();

		virtual Void onremoved( );
		Dynamic onremoved_dyn();

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

		virtual Dynamic add( Dynamic component);
		Dynamic add_dyn();

		virtual bool remove( ::String _name);
		Dynamic remove_dyn();

		virtual Dynamic get( ::String _name,Dynamic in_children);
		Dynamic get_dyn();

		virtual cpp::ArrayBase get_any( ::String _name,Dynamic in_children,Dynamic first_only);
		Dynamic get_any_dyn();

		virtual bool has( ::String _name);
		Dynamic has_dyn();

		virtual Void _detach_entity( );
		Dynamic _detach_entity_dyn();

		virtual Void _attach_entity( );
		Dynamic _attach_entity_dyn();

		virtual ::luxe::Entity set_entity( ::luxe::Entity _entity);
		Dynamic set_entity_dyn();

		virtual ::luxe::Entity get_entity( );
		Dynamic get_entity_dyn();

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

		virtual ::phoenix::Vector set_origin( ::phoenix::Vector _o);
		Dynamic set_origin_dyn();

		virtual ::phoenix::Vector get_origin( );
		Dynamic get_origin_dyn();

		virtual ::phoenix::Transform set_transform( ::phoenix::Transform _o);
		Dynamic set_transform_dyn();

		virtual ::phoenix::Transform get_transform( );
		Dynamic get_transform_dyn();

		virtual Void entity_pos_change( ::phoenix::Vector _pos);
		Dynamic entity_pos_change_dyn();

		virtual Void entity_scale_change( ::phoenix::Vector _scale);
		Dynamic entity_scale_change_dyn();

		virtual Void entity_rotation_change( ::phoenix::Quaternion _rotation);
		Dynamic entity_rotation_change_dyn();

		virtual Void entity_origin_change( ::phoenix::Vector _origin);
		Dynamic entity_origin_change_dyn();

		virtual Void entity_parent_change( ::phoenix::Transform _parent);
		Dynamic entity_parent_change_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Component */ 
