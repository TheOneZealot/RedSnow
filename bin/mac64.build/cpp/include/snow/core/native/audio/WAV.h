#ifndef INCLUDED_snow_core_native_audio_WAV
#define INCLUDED_snow_core_native_audio_WAV

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <linc_sdl.h>
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,core,native,audio,WAV)
HX_DECLARE_CLASS2(snow,types,AudioData)
namespace snow{
namespace core{
namespace native{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  WAV_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WAV_obj OBJ_;
		WAV_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.core.native.audio.WAV")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WAV_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WAV_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("WAV","\x0c","\x3d","\x42","\x00"); }

		static void __boot();
		static ::snow::types::AudioData from_file( ::snow::Snow app,::String _path,bool _is_stream);
		static Dynamic from_file_dyn();

		static ::snow::types::AudioData from_bytes( ::snow::Snow app,::String _path,::snow::api::buffers::ArrayBufferView _bytes);
		static Dynamic from_bytes_dyn();

		static ::String ID_DATA;
		static ::String ID_FMT;
		static ::String ID_WAVE;
		static ::String ID_RIFF;
		static ::snow::types::AudioData from_file_handle( ::snow::Snow app,::cpp::Pointer< SDL_RWops > _handle,::String _path,bool _is_stream);
		static Dynamic from_file_handle_dyn();

		static Dynamic read_chunk( ::snow::Snow app,::cpp::Pointer< SDL_RWops > _handle,bool _is_stream);
		static Dynamic read_chunk_dyn();

};

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace audio

#endif /* INCLUDED_snow_core_native_audio_WAV */ 
