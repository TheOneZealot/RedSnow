#ifndef INCLUDED_luxe_tilemaps_Tile
#define INCLUDED_luxe_tilemaps_Tile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,tilemaps,Tile)
HX_DECLARE_CLASS2(luxe,tilemaps,TileLayer)
HX_DECLARE_CLASS2(luxe,tilemaps,Tilemap)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace tilemaps{


class HXCPP_CLASS_ATTRIBUTES  Tile_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tile_obj OBJ_;
		Tile_obj();
		Void __construct(Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.tilemaps.Tile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tile_obj > __new(Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tile_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Tile","\x4e","\xf7","\xd5","\x37"); }

		::String uuid;
		int x;
		int y;
		::phoenix::Vector size;
		bool flipx;
		bool flipy;
		int angle;
		::luxe::tilemaps::TileLayer layer;
		::luxe::tilemaps::Tilemap map;
		int id;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual int set_id( int _id);
		Dynamic set_id_dyn();

		virtual bool set_flipx( bool _val);
		Dynamic set_flipx_dyn();

		virtual bool set_flipy( bool _val);
		Dynamic set_flipy_dyn();

		virtual int set_angle( int _val);
		Dynamic set_angle_dyn();

};

} // end namespace luxe
} // end namespace tilemaps

#endif /* INCLUDED_luxe_tilemaps_Tile */ 
