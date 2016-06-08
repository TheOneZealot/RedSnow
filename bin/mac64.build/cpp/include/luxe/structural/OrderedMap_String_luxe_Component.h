#ifndef INCLUDED_luxe_structural_OrderedMap_String_luxe_Component
#define INCLUDED_luxe_structural_OrderedMap_String_luxe_Component

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS2(luxe,structural,OrderedMapIterator_String_luxe_Component)
HX_DECLARE_CLASS2(luxe,structural,OrderedMap_String_luxe_Component)
namespace luxe{
namespace structural{


class HXCPP_CLASS_ATTRIBUTES  OrderedMap_String_luxe_Component_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OrderedMap_String_luxe_Component_obj OBJ_;
		OrderedMap_String_luxe_Component_obj();
		Void __construct(::haxe::ds::StringMap _map);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.structural.OrderedMap_String_luxe_Component")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OrderedMap_String_luxe_Component_obj > __new(::haxe::ds::StringMap _map);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OrderedMap_String_luxe_Component_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::IMap_obj *();
		::String __ToString() const { return HX_HCSTRING("OrderedMap_String_luxe_Component","\x32","\xf7","\x3c","\x3e"); }

		::haxe::ds::StringMap map;
		int idx;
		Array< ::String > _keys;
		virtual Void set( ::String key,::luxe::Component value);
		Dynamic set_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::luxe::structural::OrderedMapIterator_String_luxe_Component iterator( );
		Dynamic iterator_dyn();

		virtual bool remove( ::String key);
		Dynamic remove_dyn();

		virtual bool exists( ::String key);
		Dynamic exists_dyn();

		virtual ::luxe::Component get( ::String key);
		Dynamic get_dyn();

		virtual Dynamic keys( );
		Dynamic keys_dyn();

};

} // end namespace luxe
} // end namespace structural

#endif /* INCLUDED_luxe_structural_OrderedMap_String_luxe_Component */ 
