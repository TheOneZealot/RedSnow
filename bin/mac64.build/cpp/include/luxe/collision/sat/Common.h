#ifndef INCLUDED_luxe_collision_sat_Common
#define INCLUDED_luxe_collision_sat_Common

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,collision,sat,Common)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace collision{
namespace sat{


class HXCPP_CLASS_ATTRIBUTES  Common_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Common_obj OBJ_;
		Common_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.collision.sat.Common")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Common_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Common_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Common","\x4b","\xe9","\xc2","\xfb"); }

		static ::phoenix::Vector findNormalAxis( Array< ::Dynamic > vertices,int index);
		static Dynamic findNormalAxis_dyn();

};

} // end namespace luxe
} // end namespace collision
} // end namespace sat

#endif /* INCLUDED_luxe_collision_sat_Common */ 
