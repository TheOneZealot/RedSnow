#ifndef INCLUDED_Creature
#define INCLUDED_Creature

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
HX_DECLARE_CLASS0(Creature)
HX_DECLARE_CLASS0(DynamicController)
HX_DECLARE_CLASS0(DynamicShape)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS1(phoenix,Vector)


class HXCPP_CLASS_ATTRIBUTES  Creature_obj : public ::luxe::Sprite_obj{
	public:
		typedef ::luxe::Sprite_obj super;
		typedef Creature_obj OBJ_;
		Creature_obj();
		Void __construct(::String _id,::String _name,::phoenix::Vector _pos,::DynamicController _ctrl);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Creature")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Creature_obj > __new(::String _id,::String _name,::phoenix::Vector _pos,::DynamicController _ctrl);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Creature_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Creature","\xdf","\x61","\xb2","\x05"); }

		static ::haxe::ds::StringMap creature_types;
		static ::haxe::ds::StringMap _creature_types;
		static Void load_creature_types( );
		static Dynamic load_creature_types_dyn();

		static ::haxe::ds::StringMap get_creature_types( );
		static Dynamic get_creature_types_dyn();

		::DynamicShape collider;
		::DynamicShape _collider;
		::DynamicController controller;
		::DynamicController _controller;
		virtual ::DynamicShape get_collider( );
		Dynamic get_collider_dyn();

		virtual ::DynamicController get_controller( );
		Dynamic get_controller_dyn();

		virtual Void init( );

		virtual Void ondestroy( );

};


#endif /* INCLUDED_Creature */ 
