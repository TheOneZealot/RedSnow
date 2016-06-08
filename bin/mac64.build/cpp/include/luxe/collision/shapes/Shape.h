#ifndef INCLUDED_luxe_collision_shapes_Shape
#define INCLUDED_luxe_collision_shapes_Shape

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(luxe,collision,data,RayCollision)
HX_DECLARE_CLASS3(luxe,collision,data,ShapeCollision)
HX_DECLARE_CLASS3(luxe,collision,shapes,Circle)
HX_DECLARE_CLASS3(luxe,collision,shapes,Polygon)
HX_DECLARE_CLASS3(luxe,collision,shapes,Ray)
HX_DECLARE_CLASS3(luxe,collision,shapes,Shape)
HX_DECLARE_CLASS1(phoenix,Matrix)
HX_DECLARE_CLASS1(phoenix,Quaternion)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace collision{
namespace shapes{


class HXCPP_CLASS_ATTRIBUTES  Shape_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Shape_obj OBJ_;
		Shape_obj();
		Void __construct(Float _x,Float _y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.collision.shapes.Shape")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Shape_obj > __new(Float _x,Float _y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shape_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Shape","\x01","\x53","\x4a","\x0f"); }

		bool active;
		::String name;
		Dynamic data;
		::haxe::ds::StringMap tags;
		::phoenix::Vector _position;
		Float _rotation;
		Float _rotation_radians;
		::phoenix::Quaternion _rotation_quat;
		::phoenix::Vector _scale;
		Float _scaleX;
		Float _scaleY;
		bool _transformed;
		::phoenix::Matrix _transformMatrix;
		virtual ::luxe::collision::data::ShapeCollision test( ::luxe::collision::shapes::Shape shape);
		Dynamic test_dyn();

		virtual ::luxe::collision::data::ShapeCollision testCircle( ::luxe::collision::shapes::Circle circle,hx::Null< bool >  flip);
		Dynamic testCircle_dyn();

		virtual ::luxe::collision::data::ShapeCollision testPolygon( ::luxe::collision::shapes::Polygon polygon,hx::Null< bool >  flip);
		Dynamic testPolygon_dyn();

		virtual ::luxe::collision::data::RayCollision testRay( ::luxe::collision::shapes::Ray ray);
		Dynamic testRay_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void refresh_transform( );
		Dynamic refresh_transform_dyn();

		virtual ::phoenix::Vector get_position( );
		Dynamic get_position_dyn();

		virtual ::phoenix::Vector set_position( ::phoenix::Vector v);
		Dynamic set_position_dyn();

		virtual Float get_x( );
		Dynamic get_x_dyn();

		virtual Float set_x( Float x);
		Dynamic set_x_dyn();

		virtual Float get_y( );
		Dynamic get_y_dyn();

		virtual Float set_y( Float y);
		Dynamic set_y_dyn();

		virtual Float get_rotation( );
		Dynamic get_rotation_dyn();

		virtual Float set_rotation( Float v);
		Dynamic set_rotation_dyn();

		virtual Float get_scaleX( );
		Dynamic get_scaleX_dyn();

		virtual Float set_scaleX( Float scale);
		Dynamic set_scaleX_dyn();

		virtual Float get_scaleY( );
		Dynamic get_scaleY_dyn();

		virtual Float set_scaleY( Float scale);
		Dynamic set_scaleY_dyn();

		virtual Void _pos_changed( Float _);
		Dynamic _pos_changed_dyn();

};

} // end namespace luxe
} // end namespace collision
} // end namespace shapes

#endif /* INCLUDED_luxe_collision_shapes_Shape */ 
