#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#define INCLUDED_snow_api_buffers_ArrayBufferView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
namespace snow{
namespace api{
namespace buffers{


class HXCPP_CLASS_ATTRIBUTES  ArrayBufferView_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ArrayBufferView_obj OBJ_;
		ArrayBufferView_obj();
		Void __construct(int in_type);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.api.buffers.ArrayBufferView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ArrayBufferView_obj > __new(int in_type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArrayBufferView_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ArrayBufferView","\x5e","\x6e","\x84","\xfd"); }

		static ::snow::api::buffers::ArrayBufferView fromElements( int _type,int _elements);
		static Dynamic fromElements_dyn();

		static ::snow::api::buffers::ArrayBufferView fromView( int _type,::snow::api::buffers::ArrayBufferView _other);
		static Dynamic fromView_dyn();

		static ::snow::api::buffers::ArrayBufferView fromBuffer( int _type,Array< unsigned char > _buffer,int _byte_offset,int _byte_length);
		static Dynamic fromBuffer_dyn();

		static ::snow::api::buffers::ArrayBufferView fromArray( int _type,Array< Float > _array);
		static Dynamic fromArray_dyn();

		virtual ::snow::api::buffers::ArrayBufferView subarray_snow_api_buffers_Uint8Array( int begin,Dynamic end);
		Dynamic subarray_snow_api_buffers_Uint8Array_dyn();

		virtual ::snow::api::buffers::ArrayBufferView subarray_snow_api_buffers_Float32Array( int begin,Dynamic end);
		Dynamic subarray_snow_api_buffers_Float32Array_dyn();

		virtual ::snow::api::buffers::ArrayBufferView subarray_snow_api_buffers_Int32Array( int begin,Dynamic end);
		Dynamic subarray_snow_api_buffers_Int32Array_dyn();

		virtual ::snow::api::buffers::ArrayBufferView subarray_snow_api_buffers_Int8Array( int begin,Dynamic end);
		Dynamic subarray_snow_api_buffers_Int8Array_dyn();

		virtual ::snow::api::buffers::ArrayBufferView subarray_snow_api_buffers_Uint8ClampedArray( int begin,Dynamic end);
		Dynamic subarray_snow_api_buffers_Uint8ClampedArray_dyn();

		virtual ::snow::api::buffers::ArrayBufferView subarray_snow_api_buffers_Int16Array( int begin,Dynamic end);
		Dynamic subarray_snow_api_buffers_Int16Array_dyn();

		virtual ::snow::api::buffers::ArrayBufferView subarray_snow_api_buffers_Uint16Array( int begin,Dynamic end);
		Dynamic subarray_snow_api_buffers_Uint16Array_dyn();

		virtual ::snow::api::buffers::ArrayBufferView subarray_snow_api_buffers_Uint32Array( int begin,Dynamic end);
		Dynamic subarray_snow_api_buffers_Uint32Array_dyn();

		virtual ::snow::api::buffers::ArrayBufferView subarray_snow_api_buffers_Float64Array( int begin,Dynamic end);
		Dynamic subarray_snow_api_buffers_Float64Array_dyn();

		int type;
		Array< unsigned char > buffer;
		int byteOffset;
		int byteLength;
		int length;
		int bytesPerElement;
		virtual Void set( ::snow::api::buffers::ArrayBufferView view,Array< Float > array,hx::Null< int >  offset);
		Dynamic set_dyn();

		virtual Void cloneBuffer( Array< unsigned char > src,hx::Null< int >  srcByteOffset);
		Dynamic cloneBuffer_dyn();

		virtual int bytesForType( int type);
		Dynamic bytesForType_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual int toByteLength( int elemCount);
		Dynamic toByteLength_dyn();

		virtual Void copyFromArray( Array< Float > array,Dynamic offset);
		Dynamic copyFromArray_dyn();

};

} // end namespace snow
} // end namespace api
} // end namespace buffers

#endif /* INCLUDED_snow_api_buffers_ArrayBufferView */ 
