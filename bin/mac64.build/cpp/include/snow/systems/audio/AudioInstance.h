#ifndef INCLUDED_snow_systems_audio_AudioInstance
#define INCLUDED_snow_systems_audio_AudioInstance

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS3(snow,systems,audio,AudioInstance)
HX_DECLARE_CLASS3(snow,systems,audio,AudioSource)
namespace snow{
namespace systems{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  AudioInstance_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AudioInstance_obj OBJ_;
		AudioInstance_obj();
		Void __construct(::snow::systems::audio::AudioSource _source,Dynamic _handle);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.systems.audio.AudioInstance")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AudioInstance_obj > __new(::snow::systems::audio::AudioSource _source,Dynamic _handle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioInstance_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AudioInstance","\x6b","\x6a","\x09","\xa2"); }

		::snow::systems::audio::AudioSource source;
		Dynamic handle;
		bool destroyed;
		virtual Void tick( );
		Dynamic tick_dyn();

		virtual bool has_ended( );
		Dynamic has_ended_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Array< int > data_get( ::snow::api::buffers::ArrayBufferView _into,int _start,int _length,Array< int > _into_result);
		Dynamic data_get_dyn();

		virtual bool data_seek( int _to_samples);
		Dynamic data_seek_dyn();

};

} // end namespace snow
} // end namespace systems
} // end namespace audio

#endif /* INCLUDED_snow_systems_audio_AudioInstance */ 
