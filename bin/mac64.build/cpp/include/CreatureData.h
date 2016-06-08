#ifndef INCLUDED_CreatureData
#define INCLUDED_CreatureData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CreatureData)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS1(phoenix,Vector)


class HXCPP_CLASS_ATTRIBUTES  CreatureData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CreatureData_obj OBJ_;
		CreatureData_obj();
		Void __construct(Dynamic data);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="CreatureData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CreatureData_obj > __new(Dynamic data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CreatureData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CreatureData","\xa9","\xbf","\x8e","\x38"); }

		::String id;
		::phoenix::Vector size;
		::phoenix::Vector bounds;
		::phoenix::Texture texture;
		Dynamic animation;
		cpp::ArrayBase components;
};


#endif /* INCLUDED_CreatureData */ 
