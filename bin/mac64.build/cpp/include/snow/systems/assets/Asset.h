#ifndef INCLUDED_snow_systems_assets_Asset
#define INCLUDED_snow_systems_assets_Asset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,systems,assets,Asset)
HX_DECLARE_CLASS3(snow,systems,assets,Assets)
namespace snow{
namespace systems{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  Asset_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Asset_obj OBJ_;
		Asset_obj();
		Void __construct(::snow::systems::assets::Assets _system,::String _id,hx::Null< int >  __o__type);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.systems.assets.Asset")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Asset_obj > __new(::snow::systems::assets::Assets _system,::String _id,hx::Null< int >  __o__type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Asset_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Asset","\xd0","\xd9","\x66","\xb9"); }

		::snow::systems::assets::Assets _system;
		::String id;
		bool loaded;
		int type;
		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace snow
} // end namespace systems
} // end namespace assets

#endif /* INCLUDED_snow_systems_assets_Asset */ 
