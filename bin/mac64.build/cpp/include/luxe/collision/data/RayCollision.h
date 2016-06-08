#ifndef INCLUDED_luxe_collision_data_RayCollision
#define INCLUDED_luxe_collision_data_RayCollision

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,collision,data,RayCollision)
HX_DECLARE_CLASS3(luxe,collision,shapes,Ray)
HX_DECLARE_CLASS3(luxe,collision,shapes,Shape)
namespace luxe{
namespace collision{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  RayCollision_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RayCollision_obj OBJ_;
		RayCollision_obj();
		Void __construct(::luxe::collision::shapes::Shape _shape,::luxe::collision::shapes::Ray _ray,Float _start,Float _end);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.collision.data.RayCollision")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RayCollision_obj > __new(::luxe::collision::shapes::Shape _shape,::luxe::collision::shapes::Ray _ray,Float _start,Float _end);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RayCollision_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("RayCollision","\x48","\xf1","\xd7","\x43"); }

		::luxe::collision::shapes::Shape shape;
		::luxe::collision::shapes::Ray ray;
		Float start;
		Float end;
};

} // end namespace luxe
} // end namespace collision
} // end namespace data

#endif /* INCLUDED_luxe_collision_data_RayCollision */ 
