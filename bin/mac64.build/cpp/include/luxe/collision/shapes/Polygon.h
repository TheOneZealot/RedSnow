#ifndef INCLUDED_luxe_collision_shapes_Polygon
#define INCLUDED_luxe_collision_shapes_Polygon

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
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace collision{
namespace shapes{


class HXCPP_CLASS_ATTRIBUTES  Polygon_obj : public ::luxe::collision::shapes::Shape_obj{
	public:
		typedef ::luxe::collision::shapes::Shape_obj super;
		typedef Polygon_obj OBJ_;
		Polygon_obj();
		Void __construct(Float x,Float y,Array< ::Dynamic > vertices);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.collision.shapes.Polygon")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Polygon_obj > __new(Float x,Float y,Array< ::Dynamic > vertices);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Polygon_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Polygon","\x5a","\x2a","\xe2","\xdf"); }

		static ::luxe::collision::shapes::Polygon create( Float x,Float y,int sides,hx::Null< Float >  radius);
		static Dynamic create_dyn();

		static ::luxe::collision::shapes::Polygon rectangle( Float x,Float y,Float width,Float height,hx::Null< bool >  centered);
		static Dynamic rectangle_dyn();

		static ::luxe::collision::shapes::Polygon square( Float x,Float y,Float width,hx::Null< bool >  centered);
		static Dynamic square_dyn();

		static ::luxe::collision::shapes::Polygon triangle( Float x,Float y,Float radius);
		static Dynamic triangle_dyn();

		Array< ::Dynamic > _transformedVertices;
		Array< ::Dynamic > _vertices;
		virtual ::luxe::collision::data::ShapeCollision test( ::luxe::collision::shapes::Shape shape);

		virtual ::luxe::collision::data::ShapeCollision testCircle( ::luxe::collision::shapes::Circle circle,hx::Null< bool >  flip);

		virtual ::luxe::collision::data::ShapeCollision testPolygon( ::luxe::collision::shapes::Polygon polygon,hx::Null< bool >  flip);

		virtual ::luxe::collision::data::RayCollision testRay( ::luxe::collision::shapes::Ray ray);

		virtual Void destroy( );

		virtual Array< ::Dynamic > get_transformedVertices( );
		Dynamic get_transformedVertices_dyn();

		virtual Array< ::Dynamic > get_vertices( );
		Dynamic get_vertices_dyn();

};

} // end namespace luxe
} // end namespace collision
} // end namespace shapes

#endif /* INCLUDED_luxe_collision_shapes_Polygon */ 
