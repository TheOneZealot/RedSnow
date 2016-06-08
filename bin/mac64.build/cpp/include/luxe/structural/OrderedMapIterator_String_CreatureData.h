#ifndef INCLUDED_luxe_structural_OrderedMapIterator_String_CreatureData
#define INCLUDED_luxe_structural_OrderedMapIterator_String_CreatureData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CreatureData)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(luxe,structural,OrderedMapIterator_String_CreatureData)
HX_DECLARE_CLASS2(luxe,structural,OrderedMap_String_CreatureData)
namespace luxe{
namespace structural{


class HXCPP_CLASS_ATTRIBUTES  OrderedMapIterator_String_CreatureData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OrderedMapIterator_String_CreatureData_obj OBJ_;
		OrderedMapIterator_String_CreatureData_obj();
		Void __construct(::luxe::structural::OrderedMap_String_CreatureData omap);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.structural.OrderedMapIterator_String_CreatureData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OrderedMapIterator_String_CreatureData_obj > __new(::luxe::structural::OrderedMap_String_CreatureData omap);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OrderedMapIterator_String_CreatureData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("OrderedMapIterator_String_CreatureData","\xd5","\xf3","\xe3","\xb3"); }

		::luxe::structural::OrderedMap_String_CreatureData map;
		int index;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual ::CreatureData next( );
		Dynamic next_dyn();

};

} // end namespace luxe
} // end namespace structural

#endif /* INCLUDED_luxe_structural_OrderedMapIterator_String_CreatureData */ 
