#ifndef INCLUDED_luxe_collision_shapes_Circle
#define INCLUDED_luxe_collision_shapes_Circle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_collision_shapes_Shape
#include <luxe/collision/shapes/Shape.h>
#endif
HX_DECLARE_CLASS3(luxe,collision,data,RayCollision)
HX_DECLARE_CLASS3(luxe,collision,data,ShapeCollision)
HX_DECLARE_CLASS3(luxe,collision,shapes,Circle)
HX_DECLARE_CLASS3(luxe,collision,shapes,Polygon)
HX_DECLARE_CLASS3(luxe,collision,shapes,Ray)
HX_DECLARE_CLASS3(luxe,collision,shapes,Shape)
namespace luxe{
namespace collision{
namespace shapes{


class HXCPP_CLASS_ATTRIBUTES  Circle_obj : public ::luxe::collision::shapes::Shape_obj{
	public:
		typedef ::luxe::collision::shapes::Shape_obj super;
		typedef Circle_obj OBJ_;
		Circle_obj();
		Void __construct(Float x,Float y,Float radius);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.collision.shapes.Circle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Circle_obj > __new(Float x,Float y,Float radius);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Circle_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Circle","\x30","\xe6","\xa1","\x8a"); }

		Float _radius;
		virtual ::luxe::collision::data::ShapeCollision test( ::luxe::collision::shapes::Shape shape);

		virtual ::luxe::collision::data::ShapeCollision testCircle( ::luxe::collision::shapes::Circle circle,hx::Null< bool >  flip);

		virtual ::luxe::collision::data::ShapeCollision testPolygon( ::luxe::collision::shapes::Polygon polygon,hx::Null< bool >  flip);

		virtual ::luxe::collision::data::RayCollision testRay( ::luxe::collision::shapes::Ray ray);

		virtual Float get_radius( );
		Dynamic get_radius_dyn();

		virtual Float get_transformedRadius( );
		Dynamic get_transformedRadius_dyn();

};

} // end namespace luxe
} // end namespace collision
} // end namespace shapes

#endif /* INCLUDED_luxe_collision_shapes_Circle */ 
