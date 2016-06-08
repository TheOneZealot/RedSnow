#ifndef INCLUDED_luxe_TextEvent
#define INCLUDED_luxe_TextEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,TextEvent)
HX_DECLARE_CLASS1(luxe,TextEventType)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  TextEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextEvent_obj OBJ_;
		TextEvent_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.TextEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextEvent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TextEvent","\x0d","\x38","\x85","\xb0"); }

		::String text;
		::luxe::TextEventType type;
		Float timestamp;
		int window_id;
		int start;
		int length;
		virtual Void set( ::String _text,int _start,int _length,::luxe::TextEventType _type,Float _timestamp,int _window_id);
		Dynamic set_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_TextEvent */ 
