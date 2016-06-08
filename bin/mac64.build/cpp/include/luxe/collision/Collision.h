#ifndef INCLUDED_luxe_collision_Collision
#define INCLUDED_luxe_collision_Collision

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,collision,Collision)
HX_DECLARE_CLASS3(luxe,collision,data,RayCollision)
HX_DECLARE_CLASS3(luxe,collision,data,RayIntersection)
HX_DECLARE_CLASS3(luxe,collision,data,ShapeCollision)
HX_DECLARE_CLASS3(luxe,collision,shapes,Polygon)
HX_DECLARE_CLASS3(luxe,collision,shapes,Ray)
HX_DECLARE_CLASS3(luxe,collision,shapes,Shape)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace collision{


class HXCPP_CLASS_ATTRIBUTES  Collision_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Collision_obj OBJ_;
		Collision_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.collision.Collision")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Collision_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Collision_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Collision","\x52","\x88","\x0d","\x7d"); }

		static ::luxe::collision::data::ShapeCollision shapeWithShape( ::luxe::collision::shapes::Shape shape1,::luxe::collision::shapes::Shape shape2);
		static Dynamic shapeWithShape_dyn();

		static Array< ::Dynamic > shapeWithShapes( ::luxe::collision::shapes::Shape shape1,Array< ::Dynamic > shapes);
		static Dynamic shapeWithShapes_dyn();

		static ::luxe::collision::data::RayCollision rayWithShape( ::luxe::collision::shapes::Ray ray,::luxe::collision::shapes::Shape shape);
		static Dynamic rayWithShape_dyn();

		static Array< ::Dynamic > rayWithShapes( ::luxe::collision::shapes::Ray ray,Array< ::Dynamic > shapes);
		static Dynamic rayWithShapes_dyn();

		static ::luxe::collision::data::RayIntersection rayWithRay( ::luxe::collision::shapes::Ray ray1,::luxe::collision::shapes::Ray ray2);
		static Dynamic rayWithRay_dyn();

		static Array< ::Dynamic > rayWithRays( ::luxe::collision::shapes::Ray ray,Array< ::Dynamic > rays);
		static Dynamic rayWithRays_dyn();

		static bool pointInPoly( ::phoenix::Vector point,::luxe::collision::shapes::Polygon poly);
		static Dynamic pointInPoly_dyn();

};

} // end namespace luxe
} // end namespace collision

#endif /* INCLUDED_luxe_collision_Collision */ 
