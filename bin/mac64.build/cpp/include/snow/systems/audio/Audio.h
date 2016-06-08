#ifndef INCLUDED_snow_systems_audio_Audio
#define INCLUDED_snow_systems_audio_Audio

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,api,Emitter)
HX_DECLARE_CLASS3(snow,modules,interfaces,Audio)
HX_DECLARE_CLASS3(snow,modules,openal,Audio)
HX_DECLARE_CLASS3(snow,systems,audio,Audio)
HX_DECLARE_CLASS3(snow,systems,audio,AudioInstance)
HX_DECLARE_CLASS3(snow,systems,audio,AudioSource)
HX_DECLARE_CLASS2(snow,types,SystemEvent)
namespace snow{
namespace systems{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  Audio_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Audio_obj OBJ_;
		Audio_obj();
		Void __construct(::snow::Snow _app);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.systems.audio.Audio")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Audio_obj > __new(::snow::Snow _app);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Audio_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Audio","\xb6","\xe8","\xad","\xba"); }

		virtual bool off_snow_systems_audio_AudioSource( int _event,Dynamic _handler);
		Dynamic off_snow_systems_audio_AudioSource_dyn();

		virtual bool off_Int( int _event,Dynamic _handler);
		Dynamic off_Int_dyn();

		virtual Void emit_snow_systems_audio_AudioSource( int _event,::snow::systems::audio::AudioSource _data);
		Dynamic emit_snow_systems_audio_AudioSource_dyn();

		virtual Void emit_Int( int _event,Dynamic _data);
		Dynamic emit_Int_dyn();

		virtual Void on_snow_systems_audio_AudioSource( int _event,Dynamic _handler);
		Dynamic on_snow_systems_audio_AudioSource_dyn();

		virtual Void on_Int( int _event,Dynamic _handler);
		Dynamic on_Int_dyn();

		::snow::Snow app;
		::snow::modules::openal::Audio module;
		bool active;
		::snow::api::Emitter emitter;
		virtual Dynamic play( ::snow::systems::audio::AudioSource _source,Dynamic _volume,Dynamic _paused);
		Dynamic play_dyn();

		virtual Dynamic loop( ::snow::systems::audio::AudioSource _source,Dynamic _volume,Dynamic _paused);
		Dynamic loop_dyn();

		virtual Void pause( Dynamic _handle);
		Dynamic pause_dyn();

		virtual Void unpause( Dynamic _handle);
		Dynamic unpause_dyn();

		virtual Void stop( Dynamic _handle);
		Dynamic stop_dyn();

		virtual Void volume( Dynamic _handle,Float _volume);
		Dynamic volume_dyn();

		virtual Void pan( Dynamic _handle,Float _pan);
		Dynamic pan_dyn();

		virtual Void pitch( Dynamic _handle,Float _pitch);
		Dynamic pitch_dyn();

		virtual Void position( Dynamic _handle,Float _position);
		Dynamic position_dyn();

		virtual int state_of( Dynamic _handle);
		Dynamic state_of_dyn();

		virtual bool loop_of( Dynamic _handle);
		Dynamic loop_of_dyn();

		virtual ::snow::systems::audio::AudioInstance instance_of( Dynamic _handle);
		Dynamic instance_of_dyn();

		virtual Float volume_of( Dynamic _handle);
		Dynamic volume_of_dyn();

		virtual Float pan_of( Dynamic _handle);
		Dynamic pan_of_dyn();

		virtual Float pitch_of( Dynamic _handle);
		Dynamic pitch_of_dyn();

		virtual Float position_of( Dynamic _handle);
		Dynamic position_of_dyn();

		virtual Void suspend( );
		Dynamic suspend_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

		virtual Void onevent( ::snow::types::SystemEvent _event);
		Dynamic onevent_dyn();

		virtual Void shutdown( );
		Dynamic shutdown_dyn();

};

} // end namespace snow
} // end namespace systems
} // end namespace audio

#endif /* INCLUDED_snow_systems_audio_Audio */ 
