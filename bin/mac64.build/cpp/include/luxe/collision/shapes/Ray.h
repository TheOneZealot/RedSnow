#ifndef INCLUDED_luxe_collision_shapes_Ray
#define INCLUDED_luxe_collision_shapes_Ray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,collision,shapes,Ray)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace collision{
namespace shapes{


class HXCPP_CLASS_ATTRIBUTES  Ray_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Ray_obj OBJ_;
		Ray_obj();
		Void __construct(::phoenix::Vector _start,::phoenix::Vector _end,hx::Null< bool >  __o__infinite);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.collision.shapes.Ray")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Ray_obj > __new(::phoenix::Vector _start,::phoenix::Vector _end,hx::Null< bool >  __o__infinite);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ray_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Ray","\xca","\x8d","\x3e","\x00"); }

		::phoenix::Vector start;
		::phoenix::Vector end;
		bool infinite;
		::phoenix::Vector dir_cache;
		virtual ::phoenix::Vector get_dir( );
		Dynamic get_dir_dyn();

};

} // end namespace luxe
} // end namespace collision
} // end namespace shapes

#endif /* INCLUDED_luxe_collision_shapes_Ray */ 
