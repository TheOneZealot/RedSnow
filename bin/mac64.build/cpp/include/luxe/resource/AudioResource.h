#ifndef INCLUDED_luxe_resource_AudioResource
#define INCLUDED_luxe_resource_AudioResource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
HX_DECLARE_CLASS2(luxe,resource,AudioResource)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,systems,assets,Asset)
HX_DECLARE_CLASS3(snow,systems,assets,AssetAudio)
HX_DECLARE_CLASS3(snow,systems,audio,AudioSource)
namespace luxe{
namespace resource{


class HXCPP_CLASS_ATTRIBUTES  AudioResource_obj : public ::luxe::resource::Resource_obj{
	public:
		typedef ::luxe::resource::Resource_obj super;
		typedef AudioResource_obj OBJ_;
		AudioResource_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.resource.AudioResource")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AudioResource_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioResource_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AudioResource","\xa4","\xa7","\xc8","\x5a"); }

		::snow::systems::assets::AssetAudio asset;
		::snow::systems::audio::AudioSource source;
		bool is_stream;
		virtual ::snow::api::Promise reload( );

		virtual Void clear( );

};

} // end namespace luxe
} // end namespace resource

#endif /* INCLUDED_luxe_resource_AudioResource */ 
