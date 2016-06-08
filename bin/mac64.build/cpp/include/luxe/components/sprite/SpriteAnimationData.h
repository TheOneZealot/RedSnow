#ifndef INCLUDED_luxe_components_sprite_SpriteAnimationData
#define INCLUDED_luxe_components_sprite_SpriteAnimationData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS3(luxe,components,sprite,SpriteAnimationData)
HX_DECLARE_CLASS3(luxe,components,sprite,SpriteAnimationType)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace components{
namespace sprite{


class HXCPP_CLASS_ATTRIBUTES  SpriteAnimationData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SpriteAnimationData_obj OBJ_;
		SpriteAnimationData_obj();
		Void __construct(::luxe::Sprite _sprite,::String __o__name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.components.sprite.SpriteAnimationData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SpriteAnimationData_obj > __new(::luxe::Sprite _sprite,::String __o__name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SpriteAnimationData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SpriteAnimationData","\xe9","\x4f","\x50","\x7f"); }

		static void __boot();
		static ::EReg frame_range_regex;
		static ::EReg frame_hold_regex;
		static ::EReg frame_hold_prev_regex;
		static ::EReg frame_regex;
		::String name;
		::luxe::components::sprite::SpriteAnimationType type;
		Dynamic filter_type;
		cpp::ArrayBase frameset;
		Array< ::String > image_set_list;
		Array< ::Dynamic > image_set;
		::phoenix::Vector frame_size;
		cpp::ArrayBase frame_sources;
		Float frame_time;
		bool loop;
		bool pingpong;
		bool reverse;
		::luxe::Sprite sprite;
		int frame_count;
		virtual int get_frame_count( );
		Dynamic get_frame_count_dyn();

		virtual ::luxe::components::sprite::SpriteAnimationData from_json( Dynamic _animdata);
		Dynamic from_json_dyn();

		virtual cpp::ArrayBase parse_event_for_frame( cpp::ArrayBase _events,int _frame);
		Dynamic parse_event_for_frame_dyn();

		virtual ::phoenix::Vector parse_source_size_for_frame( cpp::ArrayBase _sources,int _frame);
		Dynamic parse_source_size_for_frame_dyn();

		virtual ::phoenix::Vector parse_source_pos_for_frame( cpp::ArrayBase _sources,int _frame);
		Dynamic parse_source_pos_for_frame_dyn();

		virtual ::phoenix::Rectangle parse_source_for_frame( cpp::ArrayBase _sources,int _frame);
		Dynamic parse_source_for_frame_dyn();

		virtual cpp::ArrayBase parse_frame_sources_set( cpp::ArrayBase _sources);
		Dynamic parse_frame_sources_set_dyn();

		virtual cpp::ArrayBase parse_event_set( cpp::ArrayBase _events);
		Dynamic parse_event_set_dyn();

		virtual Void parse_frameset_range( Array< int > _frameset,::EReg regex,::String _frame);
		Dynamic parse_frameset_range_dyn();

		virtual Void parse_frameset_hold( Array< int > _frameset,::EReg regex,::String _frame);
		Dynamic parse_frameset_hold_dyn();

		virtual Void parse_frameset_prev_hold( Array< int > _frameset,::EReg regex,::String _frame);
		Dynamic parse_frameset_prev_hold_dyn();

		virtual Void parse_frameset_frame( Array< int > _frameset,::EReg regex,::String _frame);
		Dynamic parse_frameset_frame_dyn();

		virtual Array< int > parse_frameset( Array< ::String > _json_frameset);
		Dynamic parse_frameset_dyn();

};

} // end namespace luxe
} // end namespace components
} // end namespace sprite

#endif /* INCLUDED_luxe_components_sprite_SpriteAnimationData */ 
