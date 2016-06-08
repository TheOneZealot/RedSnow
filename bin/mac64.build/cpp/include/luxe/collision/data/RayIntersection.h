#ifndef INCLUDED_luxe_collision_data_RayIntersection
#define INCLUDED_luxe_collision_data_RayIntersection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,collision,data,RayIntersection)
HX_DECLARE_CLASS3(luxe,collision,shapes,Ray)
namespace luxe{
namespace collision{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  RayIntersection_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RayIntersection_obj OBJ_;
		RayIntersection_obj();
		Void __construct(::luxe::collision::shapes::Ray ray1,Float u1,::luxe::collision::shapes::Ray ray2,Float u2);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.collision.data.RayIntersection")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RayIntersection_obj > __new(::luxe::collision::shapes::Ray ray1,Float u1,::luxe::collision::shapes::Ray ray2,Float u2);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RayIntersection_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("RayIntersection","\x33","\x03","\xb5","\xc4"); }

		::luxe::collision::shapes::Ray ray1;
		::luxe::collision::shapes::Ray ray2;
		Float u1;
		Float u2;
};

} // end namespace luxe
} // end namespace collision
} // end namespace data

#endif /* INCLUDED_luxe_collision_data_RayIntersection */ 
