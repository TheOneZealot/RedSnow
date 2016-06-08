#ifndef INCLUDED_luxe_collision_data_RayCollisionHelper
#define INCLUDED_luxe_collision_data_RayCollisionHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,collision,data,RayCollision)
HX_DECLARE_CLASS3(luxe,collision,data,RayCollisionHelper)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace collision{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  RayCollisionHelper_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RayCollisionHelper_obj OBJ_;
		RayCollisionHelper_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.collision.data.RayCollisionHelper")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RayCollisionHelper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RayCollisionHelper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("RayCollisionHelper","\xd6","\x08","\xcf","\xde"); }

		static ::phoenix::Vector hitStart( ::luxe::collision::data::RayCollision data);
		static Dynamic hitStart_dyn();

		static ::phoenix::Vector hitEnd( ::luxe::collision::data::RayCollision data);
		static Dynamic hitEnd_dyn();

};

} // end namespace luxe
} // end namespace collision
} // end namespace data

#endif /* INCLUDED_luxe_collision_data_RayCollisionHelper */ 
