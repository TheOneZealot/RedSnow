#ifndef INCLUDED_luxe_components_sprite_SpriteAnimation
#define INCLUDED_luxe_components_sprite_SpriteAnimation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS3(luxe,components,sprite,SpriteAnimation)
HX_DECLARE_CLASS3(luxe,components,sprite,SpriteAnimationData)
HX_DECLARE_CLASS1(phoenix,Rectangle)
namespace luxe{
namespace components{
namespace sprite{


class HXCPP_CLASS_ATTRIBUTES  SpriteAnimation_obj : public ::luxe::Component_obj{
	public:
		typedef ::luxe::Component_obj super;
		typedef SpriteAnimation_obj OBJ_;
		SpriteAnimation_obj();
		Void __construct(Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.components.sprite.SpriteAnimation")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SpriteAnimation_obj > __new(Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SpriteAnimation_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SpriteAnimation","\x1f","\xd2","\xd6","\xaf"); }

		::luxe::components::sprite::SpriteAnimationData current;
		Dynamic current_frame;
		::haxe::ds::StringMap animations;
		int image_frame;
		bool playing;
		bool loop;
		bool pingpong;
		bool reverse;
		::String animation;
		Float speed;
		int frame;
		Float time;
		Float next_frame_time;
		::luxe::Sprite sprite;
		::phoenix::Rectangle uv_cache;
		virtual Void onadded( );

		virtual Void init( );

		virtual Void restart( );
		Dynamic restart_dyn();

		virtual Void play( );
		Dynamic play_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void add_from_anim_data( ::luxe::components::sprite::SpriteAnimationData _data);
		Dynamic add_from_anim_data_dyn();

		virtual Void add_from_json_object( Dynamic _json_object);
		Dynamic add_from_json_object_dyn();

		virtual Void add_from_json( ::String _json_string);
		Dynamic add_from_json_dyn();

		virtual Void remove_event( ::String _animation,int _image_frame,::String _event);
		Dynamic remove_event_dyn();

		virtual Void remove_events( ::String _animation,int _image_frame);
		Dynamic remove_events_dyn();

		virtual Void add_event( ::String _animation,int _image_frame,::String _event);
		Dynamic add_event_dyn();

		virtual Void update( Float dt);

		virtual Void refresh_sprite( );
		Dynamic refresh_sprite_dyn();

		virtual int get_frame( );
		Dynamic get_frame_dyn();

		virtual int set_frame( int _frame);
		Dynamic set_frame_dyn();

		virtual Float get_speed( );
		Dynamic get_speed_dyn();

		virtual Float set_speed( Float _speed);
		Dynamic set_speed_dyn();

		virtual ::String get_animation( );
		Dynamic get_animation_dyn();

		virtual ::String set_animation( ::String _name);
		Dynamic set_animation_dyn();

		virtual Void emit_frame_events( );
		Dynamic emit_frame_events_dyn();

		virtual Void emit_anim_event( ::String _name);
		Dynamic emit_anim_event_dyn();

		virtual Void ondestroy( );

		virtual Void onremoved( );

};

} // end namespace luxe
} // end namespace components
} // end namespace sprite

#endif /* INCLUDED_luxe_components_sprite_SpriteAnimation */ 
