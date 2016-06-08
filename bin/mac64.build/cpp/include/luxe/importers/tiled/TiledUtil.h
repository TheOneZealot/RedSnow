#ifndef INCLUDED_luxe_importers_tiled_TiledUtil
#define INCLUDED_luxe_importers_tiled_TiledUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledUtil)
HX_DECLARE_CLASS2(luxe,tilemaps,TilemapOrientation)
namespace luxe{
namespace importers{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledUtil_obj OBJ_;
		TiledUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.importers.tiled.TiledUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TiledUtil","\x78","\x54","\x9a","\x66"); }

		static bool valid_element( ::Xml element);
		static Dynamic valid_element_dyn();

		static ::luxe::tilemaps::TilemapOrientation orientation_from_string( ::String _orientation_string);
		static Dynamic orientation_from_string_dyn();

};

} // end namespace luxe
} // end namespace importers
} // end namespace tiled

#endif /* INCLUDED_luxe_importers_tiled_TiledUtil */ 
