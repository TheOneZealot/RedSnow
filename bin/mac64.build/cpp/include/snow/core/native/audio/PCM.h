#ifndef INCLUDED_snow_core_native_audio_PCM
#define INCLUDED_snow_core_native_audio_PCM

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,core,native,audio,PCM)
HX_DECLARE_CLASS2(snow,types,AudioData)
namespace snow{
namespace core{
namespace native{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  PCM_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PCM_obj OBJ_;
		PCM_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.core.native.audio.PCM")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PCM_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PCM_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PCM","\xfa","\xee","\x3c","\x00"); }

		static ::snow::types::AudioData from_file( ::snow::Snow app,::String _path,bool _is_stream);
		static Dynamic from_file_dyn();

		static ::snow::types::AudioData from_bytes( ::snow::Snow app,::String _id,::snow::api::buffers::ArrayBufferView _bytes);
		static Dynamic from_bytes_dyn();

};

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace audio

#endif /* INCLUDED_snow_core_native_audio_PCM */ 
