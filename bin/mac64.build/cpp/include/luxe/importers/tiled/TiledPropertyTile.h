#ifndef INCLUDED_luxe_importers_tiled_TiledPropertyTile
#define INCLUDED_luxe_importers_tiled_TiledPropertyTile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledPropertyTile)
namespace luxe{
namespace importers{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledPropertyTile_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledPropertyTile_obj OBJ_;
		TiledPropertyTile_obj();
		Void __construct(int _id,::haxe::ds::StringMap _properties);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.importers.tiled.TiledPropertyTile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledPropertyTile_obj > __new(int _id,::haxe::ds::StringMap _properties);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledPropertyTile_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TiledPropertyTile","\x99","\xf0","\x6f","\x85"); }

		int id;
		::haxe::ds::StringMap properties;
};

} // end namespace luxe
} // end namespace importers
} // end namespace tiled

#endif /* INCLUDED_luxe_importers_tiled_TiledPropertyTile */ 
