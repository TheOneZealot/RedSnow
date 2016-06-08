#ifndef INCLUDED_luxe_MouseEvent
#define INCLUDED_luxe_MouseEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,InteractState)
HX_DECLARE_CLASS1(luxe,MouseEvent)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  MouseEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MouseEvent_obj OBJ_;
		MouseEvent_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.MouseEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MouseEvent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MouseEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MouseEvent","\xd5","\xbf","\x42","\x8a"); }

		Float timestamp;
		int window_id;
		::luxe::InteractState state;
		int button;
		int x;
		int y;
		int x_rel;
		int y_rel;
		::phoenix::Vector pos;
		virtual Void set_press( int _x,int _y,int _button,::luxe::InteractState _state,Float _timestamp,int _window_id);
		Dynamic set_press_dyn();

		virtual Void set_move( int _x,int _y,int _x_rel,int _y_rel,Float _timestamp,int _window_id);
		Dynamic set_move_dyn();

		virtual Void set_wheel( Float _x,Float _y,Float _timestamp,int _window_id);
		Dynamic set_wheel_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_MouseEvent */ 
