#ifndef INCLUDED_snow_modules_openal_ALSound
#define INCLUDED_snow_modules_openal_ALSound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,modules,interfaces,Audio)
HX_DECLARE_CLASS3(snow,modules,openal,ALSound)
HX_DECLARE_CLASS3(snow,modules,openal,Audio)
HX_DECLARE_CLASS3(snow,systems,audio,AudioInstance)
HX_DECLARE_CLASS3(snow,systems,audio,AudioSource)
namespace snow{
namespace modules{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES  ALSound_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ALSound_obj OBJ_;
		ALSound_obj();
		Void __construct(::snow::modules::openal::Audio _module,::snow::systems::audio::AudioSource _source,::snow::systems::audio::AudioInstance _instance);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.modules.openal.ALSound")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ALSound_obj > __new(::snow::modules::openal::Audio _module,::snow::systems::audio::AudioSource _source,::snow::systems::audio::AudioInstance _instance);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ALSound_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ALSound","\xe4","\x8f","\x0c","\x06"); }

		::snow::systems::audio::AudioInstance instance;
		::snow::systems::audio::AudioSource source;
		::snow::modules::openal::Audio module;
		int alsource;
		int alformat;
		Float pan;
		bool looping;
		Float current_time;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void position( Float _time);
		Dynamic position_dyn();

		virtual Float position_of( );
		Dynamic position_of_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void tick( );
		Dynamic tick_dyn();

		virtual int new_source( );
		Dynamic new_source_dyn();

		virtual Void err( ::String reason);
		Dynamic err_dyn();

		virtual int source_format( );
		Dynamic source_format_dyn();

};

} // end namespace snow
} // end namespace modules
} // end namespace openal

#endif /* INCLUDED_snow_modules_openal_ALSound */ 
