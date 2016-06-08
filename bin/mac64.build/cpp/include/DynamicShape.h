#ifndef INCLUDED_DynamicShape
#define INCLUDED_DynamicShape

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
HX_DECLARE_CLASS0(DynamicShape)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS3(luxe,collision,shapes,Shape)
HX_DECLARE_CLASS1(phoenix,Vector)


class HXCPP_CLASS_ATTRIBUTES  DynamicShape_obj : public ::luxe::Component_obj{
	public:
		typedef ::luxe::Component_obj super;
		typedef DynamicShape_obj OBJ_;
		DynamicShape_obj();
		Void __construct(::luxe::collision::shapes::Shape _shape);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="DynamicShape")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DynamicShape_obj > __new(::luxe::collision::shapes::Shape _shape);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DynamicShape_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DynamicShape","\x42","\x73","\xd9","\xfa"); }

		::luxe::collision::shapes::Shape shape;
		::phoenix::Vector velocity;
		Float dampening;
		Float acceleration;
		Float max_speed;
		virtual Void onadded( );

		virtual Void entity_pos_change( ::phoenix::Vector _pos);

		virtual Void init( );

		virtual Void ondestroy( );

		virtual Void onremoved( );

};


#endif /* INCLUDED_DynamicShape */ 
