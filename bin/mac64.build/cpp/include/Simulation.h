#ifndef INCLUDED_Simulation
#define INCLUDED_Simulation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_PhysicsEngine
#include <luxe/PhysicsEngine.h>
#endif
HX_DECLARE_CLASS0(DynamicShape)
HX_DECLARE_CLASS0(Simulation)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,PhysicsEngine)
HX_DECLARE_CLASS3(luxe,collision,shapes,Polygon)
HX_DECLARE_CLASS3(luxe,collision,shapes,Shape)
HX_DECLARE_CLASS1(phoenix,Batcher)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,Vector)


class HXCPP_CLASS_ATTRIBUTES  Simulation_obj : public ::luxe::PhysicsEngine_obj{
	public:
		typedef ::luxe::PhysicsEngine_obj super;
		typedef Simulation_obj OBJ_;
		Simulation_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Simulation")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Simulation_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Simulation_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Simulation","\xe7","\xd6","\x58","\x8e"); }

		::phoenix::Batcher debug_batcher;
		Array< ::Dynamic > dynamic_colliders;
		Array< ::Dynamic > static_colliders;
		::phoenix::Color dynamic_color;
		::phoenix::Color static_color;
		virtual Void update( );

		virtual Void render( );

		virtual Void draw_polygon( ::luxe::collision::shapes::Polygon poly,::phoenix::Color col,::phoenix::Vector pos);
		Dynamic draw_polygon_dyn();

};


#endif /* INCLUDED_Simulation */ 
