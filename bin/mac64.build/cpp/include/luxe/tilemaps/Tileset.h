#ifndef INCLUDED_luxe_tilemaps_Tileset
#define INCLUDED_luxe_tilemaps_Tileset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(luxe,tilemaps,Tileset)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace tilemaps{


class HXCPP_CLASS_ATTRIBUTES  Tileset_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tileset_obj OBJ_;
		Tileset_obj();
		Void __construct(Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.tilemaps.Tileset")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tileset_obj > __new(Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tileset_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Tileset","\x14","\xa9","\xe4","\x12"); }

		::phoenix::Texture texture;
		::String name;
		int first_id;
		int tile_width;
		int tile_height;
		int margin;
		int spacing;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::phoenix::Vector pos_in_texture( int _id);
		Dynamic pos_in_texture_dyn();

		virtual int texture_x( int _id);
		Dynamic texture_x_dyn();

		virtual int texture_y( int _id);
		Dynamic texture_y_dyn();

};

} // end namespace luxe
} // end namespace tilemaps

#endif /* INCLUDED_luxe_tilemaps_Tileset */ 
