#ifndef INCLUDED_luxe_tilemaps_TileLayer
#define INCLUDED_luxe_tilemaps_TileLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(luxe,tilemaps,Tile)
HX_DECLARE_CLASS2(luxe,tilemaps,TileLayer)
HX_DECLARE_CLASS2(luxe,tilemaps,Tilemap)
HX_DECLARE_CLASS1(phoenix,Rectangle)
namespace luxe{
namespace tilemaps{


class HXCPP_CLASS_ATTRIBUTES  TileLayer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TileLayer_obj OBJ_;
		TileLayer_obj();
		Void __construct(Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.tilemaps.TileLayer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TileLayer_obj > __new(Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TileLayer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TileLayer","\xa3","\xbf","\xee","\x9c"); }

		int layer;
		::String id;
		::String name;
		Float opacity;
		bool visible;
		bool fixed;
		::luxe::tilemaps::Tilemap map;
		Array< ::Dynamic > tiles;
		::haxe::ds::StringMap properties;
		virtual Array< ::Dynamic > bounds_fitted( );
		Dynamic bounds_fitted_dyn();

		virtual ::phoenix::Rectangle find_bounds_rect( int start_y,int start_x,int end_x,Array< ::Dynamic > checked);
		Dynamic find_bounds_rect_dyn();

};

} // end namespace luxe
} // end namespace tilemaps

#endif /* INCLUDED_luxe_tilemaps_TileLayer */ 
