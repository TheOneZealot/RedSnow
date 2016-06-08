#ifndef INCLUDED_snow_modules_openal_ALStream
#define INCLUDED_snow_modules_openal_ALStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_modules_openal_ALSound
#include <snow/modules/openal/ALSound.h>
#endif
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS3(snow,modules,interfaces,Audio)
HX_DECLARE_CLASS3(snow,modules,openal,ALSound)
HX_DECLARE_CLASS3(snow,modules,openal,ALStream)
HX_DECLARE_CLASS3(snow,modules,openal,Audio)
HX_DECLARE_CLASS3(snow,systems,audio,AudioInstance)
HX_DECLARE_CLASS3(snow,systems,audio,AudioSource)
namespace snow{
namespace modules{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES  ALStream_obj : public ::snow::modules::openal::ALSound_obj{
	public:
		typedef ::snow::modules::openal::ALSound_obj super;
		typedef ALStream_obj OBJ_;
		ALStream_obj();
		Void __construct(::snow::modules::openal::Audio _module,::snow::systems::audio::AudioSource _source,::snow::systems::audio::AudioInstance _instance);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.modules.openal.ALStream")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ALStream_obj > __new(::snow::modules::openal::Audio _module,::snow::systems::audio::AudioSource _source,::snow::systems::audio::AudioInstance _instance);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ALStream_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ALStream","\xcb","\xc3","\xef","\x23"); }

		Array< int > buffers;
		::snow::api::buffers::ArrayBufferView buffer_data;
		int buffers_left;
		Float duration;
		virtual Void init( );

		virtual Void destroy( );

		virtual Float position_of( );

		virtual Void position( Float _time);

		virtual ::String state_str( );
		Dynamic state_str_dyn();

		virtual int state_now( );
		Dynamic state_now_dyn();

		virtual bool state_is( int _state);
		Dynamic state_is_dyn();

		virtual Void init_queue( Dynamic _start);
		Dynamic init_queue_dyn();

		virtual Void flush_queue( );
		Dynamic flush_queue_dyn();

		Array< int > data_get_result;
		virtual bool fill_buffer( int _buffer);
		Dynamic fill_buffer_dyn();

		virtual Void tick( );

};

} // end namespace snow
} // end namespace modules
} // end namespace openal

#endif /* INCLUDED_snow_modules_openal_ALStream */ 
