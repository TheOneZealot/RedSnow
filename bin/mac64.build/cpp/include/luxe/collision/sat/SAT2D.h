#ifndef INCLUDED_luxe_collision_sat_SAT2D
#define INCLUDED_luxe_collision_sat_SAT2D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,collision,data,RayCollision)
HX_DECLARE_CLASS3(luxe,collision,data,RayIntersection)
HX_DECLARE_CLASS3(luxe,collision,data,ShapeCollision)
HX_DECLARE_CLASS3(luxe,collision,sat,SAT2D)
HX_DECLARE_CLASS3(luxe,collision,shapes,Circle)
HX_DECLARE_CLASS3(luxe,collision,shapes,Polygon)
HX_DECLARE_CLASS3(luxe,collision,shapes,Ray)
HX_DECLARE_CLASS3(luxe,collision,shapes,Shape)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace collision{
namespace sat{


class HXCPP_CLASS_ATTRIBUTES  SAT2D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SAT2D_obj OBJ_;
		SAT2D_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.collision.sat.SAT2D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SAT2D_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SAT2D_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SAT2D","\x58","\xed","\x78","\xf5"); }

		static ::luxe::collision::data::ShapeCollision testCircleVsPolygon( ::luxe::collision::shapes::Circle circle,::luxe::collision::shapes::Polygon polygon,hx::Null< bool >  flip);
		static Dynamic testCircleVsPolygon_dyn();

		static ::luxe::collision::data::ShapeCollision testCircleVsCircle( ::luxe::collision::shapes::Circle circle1,::luxe::collision::shapes::Circle circle2);
		static Dynamic testCircleVsCircle_dyn();

		static ::luxe::collision::data::ShapeCollision testPolygonVsPolygon( ::luxe::collision::shapes::Polygon polygon1,::luxe::collision::shapes::Polygon polygon2,hx::Null< bool >  flip);
		static Dynamic testPolygonVsPolygon_dyn();

		static ::luxe::collision::data::RayCollision testRayVsCircle( ::luxe::collision::shapes::Ray ray,::luxe::collision::shapes::Circle circle);
		static Dynamic testRayVsCircle_dyn();

		static ::luxe::collision::data::RayCollision testRayVsPolygon( ::luxe::collision::shapes::Ray ray,::luxe::collision::shapes::Polygon polygon);
		static Dynamic testRayVsPolygon_dyn();

		static ::luxe::collision::data::RayIntersection testRayVsRay( ::luxe::collision::shapes::Ray ray1,::luxe::collision::shapes::Ray ray2);
		static Dynamic testRayVsRay_dyn();

		static Array< ::Dynamic > bresenhamLine( ::phoenix::Vector start,::phoenix::Vector end);
		static Dynamic bresenhamLine_dyn();

		static ::luxe::collision::data::ShapeCollision checkPolygons( ::luxe::collision::shapes::Polygon polygon1,::luxe::collision::shapes::Polygon polygon2,hx::Null< bool >  flip);
		static Dynamic checkPolygons_dyn();

		static ::phoenix::Vector swap( ::phoenix::Vector v);
		static Dynamic swap_dyn();

		static Dynamic intersectRayRay( ::phoenix::Vector a,::phoenix::Vector adelta,::phoenix::Vector b,::phoenix::Vector bdelta);
		static Dynamic intersectRayRay_dyn();

};

} // end namespace luxe
} // end namespace collision
} // end namespace sat

#endif /* INCLUDED_luxe_collision_sat_SAT2D */ 
