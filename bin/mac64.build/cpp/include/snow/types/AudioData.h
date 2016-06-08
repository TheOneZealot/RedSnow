#ifndef INCLUDED_snow_types_AudioData
#define INCLUDED_snow_types_AudioData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS2(snow,types,AudioData)
namespace snow{
namespace types{


class HXCPP_CLASS_ATTRIBUTES  AudioData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AudioData_obj OBJ_;
		AudioData_obj();
		Void __construct(::snow::Snow _app,Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.types.AudioData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AudioData_obj > __new(::snow::Snow _app,Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AudioData","\x00","\xfe","\xeb","\x03"); }

		::snow::Snow app;
		::String id;
		::snow::api::buffers::ArrayBufferView samples;
		int rate;
		int length;
		int channels;
		Dynamic format;
		bool is_stream;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual bool seek( int _to);
		Dynamic seek_dyn();

		virtual Array< int > portion( ::snow::api::buffers::ArrayBufferView _into,int _start,int _len,Array< int > _into_result);
		Dynamic portion_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types

#endif /* INCLUDED_snow_types_AudioData */ 
