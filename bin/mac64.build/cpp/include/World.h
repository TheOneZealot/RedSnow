#ifndef INCLUDED_World
#define INCLUDED_World

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(World)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledLayer)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledMap)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledObject)
HX_DECLARE_CLASS2(luxe,tilemaps,Tilemap)


class HXCPP_CLASS_ATTRIBUTES  World_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef World_obj OBJ_;
		World_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="World")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< World_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~World_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("World","\x32","\x06","\x92","\x61"); }

		::luxe::importers::tiled::TiledMap map;
		Dynamic creatures;
		Array< ::Dynamic > spawns;
		Array< ::Dynamic > building_layers;
		virtual Void generate_collision( );
		Dynamic generate_collision_dyn();

		virtual Void generate_objects( );
		Dynamic generate_objects_dyn();

		virtual Void generate_buildings( );
		Dynamic generate_buildings_dyn();

};


#endif /* INCLUDED_World */ 
