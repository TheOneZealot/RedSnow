#ifndef INCLUDED_luxe_importers_tiled_TiledPolyObject
#define INCLUDED_luxe_importers_tiled_TiledPolyObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,importers,tiled,TiledPolyObject)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace importers{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledPolyObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledPolyObject_obj OBJ_;
		TiledPolyObject_obj();
		Void __construct(::phoenix::Vector _origin,Array< ::Dynamic > _points);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.importers.tiled.TiledPolyObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledPolyObject_obj > __new(::phoenix::Vector _origin,Array< ::Dynamic > _points);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledPolyObject_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TiledPolyObject","\x21","\xeb","\xf7","\x10"); }

		::phoenix::Vector origin;
		Array< ::Dynamic > points;
};

} // end namespace luxe
} // end namespace importers
} // end namespace tiled

#endif /* INCLUDED_luxe_importers_tiled_TiledPolyObject */ 
