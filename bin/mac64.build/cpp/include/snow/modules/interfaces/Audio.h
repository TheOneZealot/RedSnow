#ifndef INCLUDED_snow_modules_interfaces_Audio
#define INCLUDED_snow_modules_interfaces_Audio

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS3(snow,modules,interfaces,Audio)
HX_DECLARE_CLASS3(snow,systems,audio,AudioInstance)
HX_DECLARE_CLASS3(snow,systems,audio,AudioSource)
HX_DECLARE_CLASS2(snow,types,SystemEvent)
namespace snow{
namespace modules{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  Audio_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Audio_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void onevent( ::snow::types::SystemEvent event)=0;
virtual Dynamic onevent_dyn()=0;
		virtual Void shutdown( )=0;
virtual Dynamic shutdown_dyn()=0;
		virtual ::snow::api::Promise data_from_load( ::String _path,Dynamic _is_stream,Dynamic _format)=0;
virtual Dynamic data_from_load_dyn()=0;
		virtual ::snow::api::Promise data_from_bytes( ::String _id,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format)=0;
virtual Dynamic data_from_bytes_dyn()=0;
		virtual Dynamic play( ::snow::systems::audio::AudioSource _source,Float _volume,bool _paused)=0;
virtual Dynamic play_dyn()=0;
		virtual Dynamic loop( ::snow::systems::audio::AudioSource _source,Float _volume,bool _paused)=0;
virtual Dynamic loop_dyn()=0;
		virtual Void pause( Dynamic _handle)=0;
virtual Dynamic pause_dyn()=0;
		virtual Void unpause( Dynamic _handle)=0;
virtual Dynamic unpause_dyn()=0;
		virtual Void stop( Dynamic _handle)=0;
virtual Dynamic stop_dyn()=0;
		virtual Void volume( Dynamic _handle,Float _volume)=0;
virtual Dynamic volume_dyn()=0;
		virtual Void pan( Dynamic _handle,Float _pan)=0;
virtual Dynamic pan_dyn()=0;
		virtual Void pitch( Dynamic _handle,Float _pitch)=0;
virtual Dynamic pitch_dyn()=0;
		virtual Void position( Dynamic _handle,Float _time)=0;
virtual Dynamic position_dyn()=0;
		virtual Float volume_of( Dynamic _handle)=0;
virtual Dynamic volume_of_dyn()=0;
		virtual Float pan_of( Dynamic _handle)=0;
virtual Dynamic pan_of_dyn()=0;
		virtual Float pitch_of( Dynamic _handle)=0;
virtual Dynamic pitch_of_dyn()=0;
		virtual Float position_of( Dynamic _handle)=0;
virtual Dynamic position_of_dyn()=0;
		virtual int state_of( Dynamic _handle)=0;
virtual Dynamic state_of_dyn()=0;
		virtual bool loop_of( Dynamic _handle)=0;
virtual Dynamic loop_of_dyn()=0;
		virtual ::snow::systems::audio::AudioInstance instance_of( Dynamic _handle)=0;
virtual Dynamic instance_of_dyn()=0;
		virtual Void suspend( )=0;
virtual Dynamic suspend_dyn()=0;
		virtual Void resume( )=0;
virtual Dynamic resume_dyn()=0;
};



template<typename IMPL>
class Audio_delegate_ : public Audio_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Audio_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void onevent( ::snow::types::SystemEvent event) { return mDelegate->onevent(event);}
		Dynamic onevent_dyn() { return mDelegate->onevent_dyn();}
		Void shutdown( ) { return mDelegate->shutdown();}
		Dynamic shutdown_dyn() { return mDelegate->shutdown_dyn();}
		::snow::api::Promise data_from_load( ::String _path,Dynamic _is_stream,Dynamic _format) { return mDelegate->data_from_load(_path,_is_stream,_format);}
		Dynamic data_from_load_dyn() { return mDelegate->data_from_load_dyn();}
		::snow::api::Promise data_from_bytes( ::String _id,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format) { return mDelegate->data_from_bytes(_id,_bytes,_format);}
		Dynamic data_from_bytes_dyn() { return mDelegate->data_from_bytes_dyn();}
		Dynamic play( ::snow::systems::audio::AudioSource _source,Float _volume,bool _paused) { return mDelegate->play(_source,_volume,_paused);}
		Dynamic play_dyn() { return mDelegate->play_dyn();}
		Dynamic loop( ::snow::systems::audio::AudioSource _source,Float _volume,bool _paused) { return mDelegate->loop(_source,_volume,_paused);}
		Dynamic loop_dyn() { return mDelegate->loop_dyn();}
		Void pause( Dynamic _handle) { return mDelegate->pause(_handle);}
		Dynamic pause_dyn() { return mDelegate->pause_dyn();}
		Void unpause( Dynamic _handle) { return mDelegate->unpause(_handle);}
		Dynamic unpause_dyn() { return mDelegate->unpause_dyn();}
		Void stop( Dynamic _handle) { return mDelegate->stop(_handle);}
		Dynamic stop_dyn() { return mDelegate->stop_dyn();}
		Void volume( Dynamic _handle,Float _volume) { return mDelegate->volume(_handle,_volume);}
		Dynamic volume_dyn() { return mDelegate->volume_dyn();}
		Void pan( Dynamic _handle,Float _pan) { return mDelegate->pan(_handle,_pan);}
		Dynamic pan_dyn() { return mDelegate->pan_dyn();}
		Void pitch( Dynamic _handle,Float _pitch) { return mDelegate->pitch(_handle,_pitch);}
		Dynamic pitch_dyn() { return mDelegate->pitch_dyn();}
		Void position( Dynamic _handle,Float _time) { return mDelegate->position(_handle,_time);}
		Dynamic position_dyn() { return mDelegate->position_dyn();}
		Float volume_of( Dynamic _handle) { return mDelegate->volume_of(_handle);}
		Dynamic volume_of_dyn() { return mDelegate->volume_of_dyn();}
		Float pan_of( Dynamic _handle) { return mDelegate->pan_of(_handle);}
		Dynamic pan_of_dyn() { return mDelegate->pan_of_dyn();}
		Float pitch_of( Dynamic _handle) { return mDelegate->pitch_of(_handle);}
		Dynamic pitch_of_dyn() { return mDelegate->pitch_of_dyn();}
		Float position_of( Dynamic _handle) { return mDelegate->position_of(_handle);}
		Dynamic position_of_dyn() { return mDelegate->position_of_dyn();}
		int state_of( Dynamic _handle) { return mDelegate->state_of(_handle);}
		Dynamic state_of_dyn() { return mDelegate->state_of_dyn();}
		bool loop_of( Dynamic _handle) { return mDelegate->loop_of(_handle);}
		Dynamic loop_of_dyn() { return mDelegate->loop_of_dyn();}
		::snow::systems::audio::AudioInstance instance_of( Dynamic _handle) { return mDelegate->instance_of(_handle);}
		Dynamic instance_of_dyn() { return mDelegate->instance_of_dyn();}
		Void suspend( ) { return mDelegate->suspend();}
		Dynamic suspend_dyn() { return mDelegate->suspend_dyn();}
		Void resume( ) { return mDelegate->resume();}
		Dynamic resume_dyn() { return mDelegate->resume_dyn();}
};

} // end namespace snow
} // end namespace modules
} // end namespace interfaces

#endif /* INCLUDED_snow_modules_interfaces_Audio */ 
