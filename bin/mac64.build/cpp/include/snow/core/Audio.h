#ifndef INCLUDED_snow_core_Audio
#define INCLUDED_snow_core_Audio

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_modules_interfaces_Audio
#include <snow/modules/interfaces/Audio.h>
#endif
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS2(snow,core,Audio)
HX_DECLARE_CLASS3(snow,modules,interfaces,Audio)
HX_DECLARE_CLASS3(snow,systems,audio,AudioInstance)
HX_DECLARE_CLASS3(snow,systems,audio,AudioSource)
HX_DECLARE_CLASS2(snow,types,SystemEvent)
namespace snow{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Audio_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Audio_obj OBJ_;
		Audio_obj();
		Void __construct(::snow::Snow _app);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.core.Audio")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Audio_obj > __new(::snow::Snow _app);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Audio_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::snow::modules::interfaces::Audio_obj *();
		::String __ToString() const { return HX_HCSTRING("Audio","\xb6","\xe8","\xad","\xba"); }

		static Dynamic audio_format_from_path( ::String _path);
		static Dynamic audio_format_from_path_dyn();

		::snow::Snow app;
		bool active;
		virtual Void onevent( ::snow::types::SystemEvent event);
		Dynamic onevent_dyn();

		virtual Void shutdown( );
		Dynamic shutdown_dyn();

		virtual Void suspend( );
		Dynamic suspend_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

		virtual ::snow::api::Promise data_from_load( ::String _path,Dynamic _is_stream,Dynamic _format);
		Dynamic data_from_load_dyn();

		virtual ::snow::api::Promise data_from_bytes( ::String _id,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format);
		Dynamic data_from_bytes_dyn();

		virtual Dynamic play( ::snow::systems::audio::AudioSource _source,Float _volume,bool _paused);
		Dynamic play_dyn();

		virtual Dynamic loop( ::snow::systems::audio::AudioSource _source,Float _volume,bool _paused);
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

		virtual Void position( Dynamic _handle,Float _time);
		Dynamic position_dyn();

		virtual Float volume_of( Dynamic _handle);
		Dynamic volume_of_dyn();

		virtual Float pan_of( Dynamic _handle);
		Dynamic pan_of_dyn();

		virtual Float pitch_of( Dynamic _handle);
		Dynamic pitch_of_dyn();

		virtual Float position_of( Dynamic _handle);
		Dynamic position_of_dyn();

		virtual int state_of( Dynamic _handle);
		Dynamic state_of_dyn();

		virtual bool loop_of( Dynamic _handle);
		Dynamic loop_of_dyn();

		virtual ::snow::systems::audio::AudioInstance instance_of( Dynamic _handle);
		Dynamic instance_of_dyn();

};

} // end namespace snow
} // end namespace core

#endif /* INCLUDED_snow_core_Audio */ 
