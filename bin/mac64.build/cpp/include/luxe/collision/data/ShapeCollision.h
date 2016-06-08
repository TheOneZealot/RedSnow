#ifndef INCLUDED_luxe_collision_data_ShapeCollision
#define INCLUDED_luxe_collision_data_ShapeCollision

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,collision,data,ShapeCollision)
HX_DECLARE_CLASS3(luxe,collision,shapes,Shape)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace collision{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  ShapeCollision_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShapeCollision_obj OBJ_;
		ShapeCollision_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.collision.data.ShapeCollision")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ShapeCollision_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShapeCollision_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ShapeCollision","\x31","\x4d","\xab","\x19"); }

		Float overlap;
		::phoenix::Vector separation;
		::luxe::collision::shapes::Shape shape1;
		::luxe::collision::shapes::Shape shape2;
		::phoenix::Vector unitVector;
};

} // end namespace luxe
} // end namespace collision
} // end namespace data

#endif /* INCLUDED_luxe_collision_data_ShapeCollision */ 
