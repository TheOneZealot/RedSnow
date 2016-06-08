#ifndef INCLUDED_luxe_importers_tiled_TiledTile
#define INCLUDED_luxe_importers_tiled_TiledTile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,importers,tiled,TiledLayer)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledTile)
namespace luxe{
namespace importers{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledTile_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledTile_obj OBJ_;
		TiledTile_obj();
		Void __construct(::luxe::importers::tiled::TiledLayer _layer,int _id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.importers.tiled.TiledTile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledTile_obj > __new(::luxe::importers::tiled::TiledLayer _layer,int _id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledTile_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TiledTile","\xa4","\xc7","\xe8","\x65"); }

		::luxe::importers::tiled::TiledLayer layer;
		int id;
		bool flip_horizontal;
		bool flip_vertical;
		bool flip_diagonal;
		int width;
		int height;
		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

};

} // end namespace luxe
} // end namespace importers
} // end namespace tiled

#endif /* INCLUDED_luxe_importers_tiled_TiledTile */ 
