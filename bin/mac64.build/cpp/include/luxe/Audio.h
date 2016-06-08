#ifndef INCLUDED_luxe_Audio
#define INCLUDED_luxe_Audio

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Audio)
HX_DECLARE_CLASS1(luxe,Engine)
HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS3(snow,systems,audio,AudioInstance)
HX_DECLARE_CLASS3(snow,systems,audio,AudioSource)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Audio_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Audio_obj OBJ_;
		Audio_obj();
		Void __construct(::luxe::Engine _core);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.Audio")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Audio_obj > __new(::luxe::Engine _core);
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

		::luxe::Engine core;
		virtual Void on( int _event,Dynamic _handler);
		Dynamic on_dyn();

		virtual bool off( int _event,Dynamic _handler);
		Dynamic off_dyn();

		virtual Void emit( int _event,Dynamic _handle);
		Dynamic emit_dyn();

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

		virtual bool get_active( );
		Dynamic get_active_dyn();

		virtual bool set_active( bool _val);
		Dynamic set_active_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void process( );
		Dynamic process_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Audio */ 
