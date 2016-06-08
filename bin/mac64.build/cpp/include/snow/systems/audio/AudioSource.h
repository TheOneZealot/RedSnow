#ifndef INCLUDED_snow_systems_audio_AudioSource
#define INCLUDED_snow_systems_audio_AudioSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS3(snow,systems,audio,AudioInstance)
HX_DECLARE_CLASS3(snow,systems,audio,AudioSource)
HX_DECLARE_CLASS2(snow,types,AudioData)
namespace snow{
namespace systems{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  AudioSource_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AudioSource_obj OBJ_;
		AudioSource_obj();
		Void __construct(::snow::Snow _app,::snow::types::AudioData _data);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.systems.audio.AudioSource")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AudioSource_obj > __new(::snow::Snow _app,::snow::types::AudioData _data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioSource_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AudioSource","\x31","\x7a","\x14","\xe5"); }

		::snow::Snow app;
		::snow::types::AudioData data;
		int stream_buffer_length;
		int stream_buffer_count;
		Array< ::Dynamic > instances;
		virtual ::snow::systems::audio::AudioInstance instance( Dynamic _handle);
		Dynamic instance_dyn();

		virtual Float bytes_to_seconds( int _bytes);
		Dynamic bytes_to_seconds_dyn();

		virtual int seconds_to_bytes( Float _seconds);
		Dynamic seconds_to_bytes_dyn();

		virtual Float duration( );
		Dynamic duration_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void instance_killed( ::snow::systems::audio::AudioInstance _instance);
		Dynamic instance_killed_dyn();

};

} // end namespace snow
} // end namespace systems
} // end namespace audio

#endif /* INCLUDED_snow_systems_audio_AudioSource */ 
