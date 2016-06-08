#ifndef INCLUDED_DynamicController
#define INCLUDED_DynamicController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
HX_DECLARE_CLASS0(DynamicController)
HX_DECLARE_CLASS0(DynamicShape)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,ID)


class HXCPP_CLASS_ATTRIBUTES  DynamicController_obj : public ::luxe::Component_obj{
	public:
		typedef ::luxe::Component_obj super;
		typedef DynamicController_obj OBJ_;
		DynamicController_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="DynamicController")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DynamicController_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DynamicController_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DynamicController","\xdb","\xf0","\x3e","\x32"); }

		::DynamicShape shape;
		::DynamicShape _shape;
		virtual ::DynamicShape get_shape( );
		Dynamic get_shape_dyn();

		virtual Void init( );

		virtual Void ondestroy( );

		virtual Void onremoved( );

};


#endif /* INCLUDED_DynamicController */ 
