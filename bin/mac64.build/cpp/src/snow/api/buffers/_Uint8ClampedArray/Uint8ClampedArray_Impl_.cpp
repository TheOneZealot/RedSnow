#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
#endif
#ifndef INCLUDED_snow_api_buffers__Uint8ClampedArray_Uint8ClampedArray_Impl_
#include <snow/api/buffers/_Uint8ClampedArray/Uint8ClampedArray_Impl_.h>
#endif
namespace snow{
namespace api{
namespace buffers{
namespace _Uint8ClampedArray{

Void Uint8ClampedArray_Impl__obj::__construct()
{
	return null();
}

//Uint8ClampedArray_Impl__obj::~Uint8ClampedArray_Impl__obj() { }

Dynamic Uint8ClampedArray_Impl__obj::__CreateEmpty() { return  new Uint8ClampedArray_Impl__obj; }
hx::ObjectPtr< Uint8ClampedArray_Impl__obj > Uint8ClampedArray_Impl__obj::__new()
{  hx::ObjectPtr< Uint8ClampedArray_Impl__obj > _result_ = new Uint8ClampedArray_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Uint8ClampedArray_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Uint8ClampedArray_Impl__obj > _result_ = new Uint8ClampedArray_Impl__obj();
	_result_->__construct();
	return _result_;}

int Uint8ClampedArray_Impl__obj::BYTES_PER_ELEMENT;

::snow::api::buffers::ArrayBufferView Uint8ClampedArray_Impl__obj::_new( int _elements){
	HX_STACK_FRAME("snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","_new",0xd1849a88,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_._new","snow/api/buffers/Uint8ClampedArray.hx",72,0xc60b32de)
	HX_STACK_ARG(_elements,"_elements")
	HX_STACK_LINE(72)
	::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(73)
	::snow::api::buffers::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		int _elements1 = _elements;		HX_STACK_VAR(_elements1,"_elements1");
		HX_STACK_LINE(73)
		bool tmp1 = (_elements1 < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		if ((tmp1)){
			HX_STACK_LINE(73)
			_elements1 = (int)0;
		}
		HX_STACK_LINE(73)
		::snow::api::buffers::ArrayBufferView tmp2 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)5);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		::snow::api::buffers::ArrayBufferView _view = tmp2;		HX_STACK_VAR(_view,"_view");
		HX_STACK_LINE(73)
		int tmp3 = (_elements1 * _view->bytesPerElement);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		int _bytelen = tmp3;		HX_STACK_VAR(_bytelen,"_bytelen");
		HX_STACK_LINE(73)
		_view->byteOffset = (int)0;
		HX_STACK_LINE(73)
		_view->byteLength = _bytelen;
		HX_STACK_LINE(73)
		Array< unsigned char > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			Array< unsigned char > this2;		HX_STACK_VAR(this2,"this2");
			HX_STACK_LINE(73)
			this2 = Array_obj< unsigned char >::__new();
			HX_STACK_LINE(73)
			bool tmp5 = (_bytelen > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(73)
			if ((tmp5)){
				HX_STACK_LINE(73)
				int tmp6 = (_bytelen - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				this2[tmp6] = (int)0;
			}
			HX_STACK_LINE(73)
			tmp4 = this2;
		}
		HX_STACK_LINE(73)
		_view->buffer = tmp4;
		HX_STACK_LINE(73)
		_view->length = _elements1;
		HX_STACK_LINE(73)
		tmp = _view;
	}
	HX_STACK_LINE(73)
	this1 = tmp;
	HX_STACK_LINE(72)
	::snow::api::buffers::ArrayBufferView tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Uint8ClampedArray_Impl__obj,_new,return )

::snow::api::buffers::ArrayBufferView Uint8ClampedArray_Impl__obj::fromArray( cpp::ArrayBase _array){
	HX_STACK_FRAME("snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","fromArray",0x887bc548,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.fromArray","snow/api/buffers/Uint8ClampedArray.hx",77,0xc60b32de)
	HX_STACK_ARG(_array,"_array")
	HX_STACK_LINE(78)
	::snow::api::buffers::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	{
		HX_STACK_LINE(78)
		Array< Float > _array1 = ((Array< Float >)(_array));		HX_STACK_VAR(_array1,"_array1");
		HX_STACK_LINE(78)
		::snow::api::buffers::ArrayBufferView tmp1 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)5);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		::snow::api::buffers::ArrayBufferView _view = tmp1;		HX_STACK_VAR(_view,"_view");
		HX_STACK_LINE(78)
		int _length = _array1->length;		HX_STACK_VAR(_length,"_length");
		HX_STACK_LINE(78)
		int tmp2 = (_length * _view->bytesPerElement);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		int _bytelen = tmp2;		HX_STACK_VAR(_bytelen,"_bytelen");
		HX_STACK_LINE(78)
		_view->byteOffset = (int)0;
		HX_STACK_LINE(78)
		_view->length = _length;
		HX_STACK_LINE(78)
		_view->byteLength = _bytelen;
		HX_STACK_LINE(78)
		Array< unsigned char > tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			Array< unsigned char > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(78)
			this1 = Array_obj< unsigned char >::__new();
			HX_STACK_LINE(78)
			bool tmp4 = (_bytelen > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(78)
			if ((tmp4)){
				HX_STACK_LINE(78)
				int tmp5 = (_bytelen - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(78)
				this1[tmp5] = (int)0;
			}
			HX_STACK_LINE(78)
			tmp3 = this1;
		}
		HX_STACK_LINE(78)
		_view->buffer = tmp3;
		HX_STACK_LINE(78)
		_view->copyFromArray(_array1,null());
		HX_STACK_LINE(78)
		tmp = _view;
	}
	HX_STACK_LINE(78)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Uint8ClampedArray_Impl__obj,fromArray,return )

::snow::api::buffers::ArrayBufferView Uint8ClampedArray_Impl__obj::fromView( ::snow::api::buffers::ArrayBufferView _view){
	HX_STACK_FRAME("snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","fromView",0x94c7a596,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.fromView","snow/api/buffers/Uint8ClampedArray.hx",81,0xc60b32de)
	HX_STACK_ARG(_view,"_view")
	HX_STACK_LINE(82)
	::snow::api::buffers::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	{
		HX_STACK_LINE(82)
		int _type = (int)5;		HX_STACK_VAR(_type,"_type");
		HX_STACK_LINE(82)
		int _src_type = _view->type;		HX_STACK_VAR(_src_type,"_src_type");
		HX_STACK_LINE(82)
		Array< unsigned char > _src_data = _view->buffer;		HX_STACK_VAR(_src_data,"_src_data");
		HX_STACK_LINE(82)
		int _src_length = _view->length;		HX_STACK_VAR(_src_length,"_src_length");
		HX_STACK_LINE(82)
		int _src_byte_offset = _view->byteOffset;		HX_STACK_VAR(_src_byte_offset,"_src_byte_offset");
		HX_STACK_LINE(82)
		::snow::api::buffers::ArrayBufferView tmp1 = ::snow::api::buffers::ArrayBufferView_obj::__new(_type);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		::snow::api::buffers::ArrayBufferView _view1 = tmp1;		HX_STACK_VAR(_view1,"_view1");
		HX_STACK_LINE(82)
		bool tmp2 = (_src_type == _type);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		if ((tmp2)){
			HX_STACK_LINE(82)
			int srcLength = _src_data->length;		HX_STACK_VAR(srcLength,"srcLength");
			HX_STACK_LINE(82)
			int tmp3 = (srcLength - _src_byte_offset);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(82)
			int cloneLength = tmp3;		HX_STACK_VAR(cloneLength,"cloneLength");
			HX_STACK_LINE(82)
			Array< unsigned char > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				Array< unsigned char > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(82)
				this1 = Array_obj< unsigned char >::__new();
				HX_STACK_LINE(82)
				bool tmp5 = (cloneLength > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(82)
				if ((tmp5)){
					HX_STACK_LINE(82)
					int tmp6 = (cloneLength - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(82)
					this1[tmp6] = (int)0;
				}
				HX_STACK_LINE(82)
				tmp4 = this1;
			}
			HX_STACK_LINE(82)
			_view1->buffer = tmp4;
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				Array< unsigned char > tmp5 = _src_data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(82)
				int tmp6 = _src_byte_offset;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(82)
				int tmp7 = cloneLength;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(82)
				_view1->buffer->blit((int)0,tmp5,tmp6,tmp7);
			}
		}
		else{
			HX_STACK_LINE(82)
			HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
		}
		HX_STACK_LINE(82)
		int tmp3 = (_view1->bytesPerElement * _src_length);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		_view1->byteLength = tmp3;
		HX_STACK_LINE(82)
		_view1->byteOffset = (int)0;
		HX_STACK_LINE(82)
		_view1->length = _src_length;
		HX_STACK_LINE(82)
		tmp = _view1;
	}
	HX_STACK_LINE(82)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Uint8ClampedArray_Impl__obj,fromView,return )

::snow::api::buffers::ArrayBufferView Uint8ClampedArray_Impl__obj::fromBuffer( Array< unsigned char > _buffer,int _byteOffset,int _byteLength){
	HX_STACK_FRAME("snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","fromBuffer",0xfc751e71,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.fromBuffer","snow/api/buffers/Uint8ClampedArray.hx",85,0xc60b32de)
	HX_STACK_ARG(_buffer,"_buffer")
	HX_STACK_ARG(_byteOffset,"_byteOffset")
	HX_STACK_ARG(_byteLength,"_byteLength")
	HX_STACK_LINE(86)
	::snow::api::buffers::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	{
		HX_STACK_LINE(86)
		::snow::api::buffers::ArrayBufferView tmp1 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)5);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		::snow::api::buffers::ArrayBufferView _view = tmp1;		HX_STACK_VAR(_view,"_view");
		HX_STACK_LINE(86)
		int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
		HX_STACK_LINE(86)
		bool tmp2 = (_byteOffset < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		if ((tmp2)){
			HX_STACK_LINE(86)
			::snow::api::buffers::TAError tmp3 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(86)
			HX_STACK_DO_THROW(tmp3);
		}
		HX_STACK_LINE(86)
		int tmp3 = hx::Mod(_byteOffset,_bytes_per_elem);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(86)
		bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(86)
		if ((tmp4)){
			HX_STACK_LINE(86)
			::snow::api::buffers::TAError tmp5 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(86)
			HX_STACK_DO_THROW(tmp5);
		}
		HX_STACK_LINE(86)
		int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
		HX_STACK_LINE(86)
		int tmp5 = (_byteOffset + _byteLength);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(86)
		int _new_range = tmp5;		HX_STACK_VAR(_new_range,"_new_range");
		HX_STACK_LINE(86)
		bool tmp6 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(86)
		if ((tmp6)){
			HX_STACK_LINE(86)
			::snow::api::buffers::TAError tmp7 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(86)
			HX_STACK_DO_THROW(tmp7);
		}
		HX_STACK_LINE(86)
		_view->buffer = _buffer;
		HX_STACK_LINE(86)
		_view->byteOffset = _byteOffset;
		HX_STACK_LINE(86)
		_view->byteLength = _byteLength;
		HX_STACK_LINE(86)
		Float tmp7 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(86)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(86)
		_view->length = tmp8;
		HX_STACK_LINE(86)
		tmp = _view;
	}
	HX_STACK_LINE(86)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Uint8ClampedArray_Impl__obj,fromBuffer,return )

::snow::api::buffers::ArrayBufferView Uint8ClampedArray_Impl__obj::subarray( ::snow::api::buffers::ArrayBufferView this1,int begin,Dynamic end){
	HX_STACK_FRAME("snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","subarray",0xf02df8c0,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.subarray","snow/api/buffers/Uint8ClampedArray.hx",91,0xc60b32de)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(91)
	::snow::api::buffers::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	{
		HX_STACK_LINE(91)
		bool tmp1 = (end == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		if ((tmp1)){
			HX_STACK_LINE(91)
			(end == this1->length);
		}
		HX_STACK_LINE(91)
		int tmp2 = (end - begin);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		int tmp3 = this1->bytesPerElement;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		int byte_len = tmp4;		HX_STACK_VAR(byte_len,"byte_len");
		HX_STACK_LINE(91)
		int tmp5 = (begin * this1->bytesPerElement);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		int tmp6 = this1->byteOffset;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(91)
		int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(91)
		int byte_offset = tmp7;		HX_STACK_VAR(byte_offset,"byte_offset");
		HX_STACK_LINE(91)
		::snow::api::buffers::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			int _g = this1->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(91)
			int tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(91)
			switch( (int)(tmp9)){
				case (int)1: {
					HX_STACK_LINE(91)
					Array< unsigned char > _buffer = this1->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(91)
					{
						HX_STACK_LINE(91)
						::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)1);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(91)
						::snow::api::buffers::ArrayBufferView _view = tmp10;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(91)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(91)
						bool tmp11 = (byte_offset < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(91)
						if ((tmp11)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp12 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(91)
						int tmp12 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(91)
						bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(91)
						if ((tmp13)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp14 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(91)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(91)
						int tmp14 = (byte_offset + byte_len);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(91)
						int _new_range = tmp14;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(91)
						bool tmp15 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(91)
						if ((tmp15)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp16 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(91)
						_view->buffer = _buffer;
						HX_STACK_LINE(91)
						_view->byteOffset = byte_offset;
						HX_STACK_LINE(91)
						_view->byteLength = byte_len;
						HX_STACK_LINE(91)
						Float tmp16 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(91)
						int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(91)
						_view->length = tmp17;
						HX_STACK_LINE(91)
						tmp8 = _view;
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(91)
					Array< unsigned char > _buffer = this1->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(91)
					{
						HX_STACK_LINE(91)
						::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)2);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(91)
						::snow::api::buffers::ArrayBufferView _view = tmp10;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(91)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(91)
						bool tmp11 = (byte_offset < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(91)
						if ((tmp11)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp12 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(91)
						int tmp12 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(91)
						bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(91)
						if ((tmp13)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp14 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(91)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(91)
						int tmp14 = (byte_offset + byte_len);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(91)
						int _new_range = tmp14;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(91)
						bool tmp15 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(91)
						if ((tmp15)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp16 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(91)
						_view->buffer = _buffer;
						HX_STACK_LINE(91)
						_view->byteOffset = byte_offset;
						HX_STACK_LINE(91)
						_view->byteLength = byte_len;
						HX_STACK_LINE(91)
						Float tmp16 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(91)
						int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(91)
						_view->length = tmp17;
						HX_STACK_LINE(91)
						tmp8 = _view;
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(91)
					Array< unsigned char > _buffer = this1->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(91)
					{
						HX_STACK_LINE(91)
						::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)3);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(91)
						::snow::api::buffers::ArrayBufferView _view = tmp10;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(91)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(91)
						bool tmp11 = (byte_offset < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(91)
						if ((tmp11)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp12 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(91)
						int tmp12 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(91)
						bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(91)
						if ((tmp13)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp14 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(91)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(91)
						int tmp14 = (byte_offset + byte_len);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(91)
						int _new_range = tmp14;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(91)
						bool tmp15 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(91)
						if ((tmp15)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp16 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(91)
						_view->buffer = _buffer;
						HX_STACK_LINE(91)
						_view->byteOffset = byte_offset;
						HX_STACK_LINE(91)
						_view->byteLength = byte_len;
						HX_STACK_LINE(91)
						Float tmp16 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(91)
						int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(91)
						_view->length = tmp17;
						HX_STACK_LINE(91)
						tmp8 = _view;
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(91)
					Array< unsigned char > _buffer = this1->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(91)
					{
						HX_STACK_LINE(91)
						::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(91)
						::snow::api::buffers::ArrayBufferView _view = tmp10;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(91)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(91)
						bool tmp11 = (byte_offset < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(91)
						if ((tmp11)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp12 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(91)
						int tmp12 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(91)
						bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(91)
						if ((tmp13)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp14 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(91)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(91)
						int tmp14 = (byte_offset + byte_len);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(91)
						int _new_range = tmp14;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(91)
						bool tmp15 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(91)
						if ((tmp15)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp16 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(91)
						_view->buffer = _buffer;
						HX_STACK_LINE(91)
						_view->byteOffset = byte_offset;
						HX_STACK_LINE(91)
						_view->byteLength = byte_len;
						HX_STACK_LINE(91)
						Float tmp16 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(91)
						int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(91)
						_view->length = tmp17;
						HX_STACK_LINE(91)
						tmp8 = _view;
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(91)
					Array< unsigned char > _buffer = this1->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(91)
					{
						HX_STACK_LINE(91)
						::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)5);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(91)
						::snow::api::buffers::ArrayBufferView _view = tmp10;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(91)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(91)
						bool tmp11 = (byte_offset < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(91)
						if ((tmp11)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp12 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(91)
						int tmp12 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(91)
						bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(91)
						if ((tmp13)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp14 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(91)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(91)
						int tmp14 = (byte_offset + byte_len);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(91)
						int _new_range = tmp14;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(91)
						bool tmp15 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(91)
						if ((tmp15)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp16 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(91)
						_view->buffer = _buffer;
						HX_STACK_LINE(91)
						_view->byteOffset = byte_offset;
						HX_STACK_LINE(91)
						_view->byteLength = byte_len;
						HX_STACK_LINE(91)
						Float tmp16 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(91)
						int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(91)
						_view->length = tmp17;
						HX_STACK_LINE(91)
						tmp8 = _view;
					}
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(91)
					Array< unsigned char > _buffer = this1->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(91)
					{
						HX_STACK_LINE(91)
						::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)6);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(91)
						::snow::api::buffers::ArrayBufferView _view = tmp10;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(91)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(91)
						bool tmp11 = (byte_offset < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(91)
						if ((tmp11)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp12 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(91)
						int tmp12 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(91)
						bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(91)
						if ((tmp13)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp14 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(91)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(91)
						int tmp14 = (byte_offset + byte_len);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(91)
						int _new_range = tmp14;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(91)
						bool tmp15 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(91)
						if ((tmp15)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp16 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(91)
						_view->buffer = _buffer;
						HX_STACK_LINE(91)
						_view->byteOffset = byte_offset;
						HX_STACK_LINE(91)
						_view->byteLength = byte_len;
						HX_STACK_LINE(91)
						Float tmp16 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(91)
						int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(91)
						_view->length = tmp17;
						HX_STACK_LINE(91)
						tmp8 = _view;
					}
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(91)
					Array< unsigned char > _buffer = this1->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(91)
					{
						HX_STACK_LINE(91)
						::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)7);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(91)
						::snow::api::buffers::ArrayBufferView _view = tmp10;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(91)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(91)
						bool tmp11 = (byte_offset < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(91)
						if ((tmp11)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp12 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(91)
						int tmp12 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(91)
						bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(91)
						if ((tmp13)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp14 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(91)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(91)
						int tmp14 = (byte_offset + byte_len);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(91)
						int _new_range = tmp14;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(91)
						bool tmp15 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(91)
						if ((tmp15)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp16 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(91)
						_view->buffer = _buffer;
						HX_STACK_LINE(91)
						_view->byteOffset = byte_offset;
						HX_STACK_LINE(91)
						_view->byteLength = byte_len;
						HX_STACK_LINE(91)
						Float tmp16 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(91)
						int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(91)
						_view->length = tmp17;
						HX_STACK_LINE(91)
						tmp8 = _view;
					}
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(91)
					Array< unsigned char > _buffer = this1->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(91)
					{
						HX_STACK_LINE(91)
						::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(91)
						::snow::api::buffers::ArrayBufferView _view = tmp10;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(91)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(91)
						bool tmp11 = (byte_offset < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(91)
						if ((tmp11)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp12 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(91)
						int tmp12 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(91)
						bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(91)
						if ((tmp13)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp14 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(91)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(91)
						int tmp14 = (byte_offset + byte_len);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(91)
						int _new_range = tmp14;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(91)
						bool tmp15 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(91)
						if ((tmp15)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp16 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(91)
						_view->buffer = _buffer;
						HX_STACK_LINE(91)
						_view->byteOffset = byte_offset;
						HX_STACK_LINE(91)
						_view->byteLength = byte_len;
						HX_STACK_LINE(91)
						Float tmp16 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(91)
						int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(91)
						_view->length = tmp17;
						HX_STACK_LINE(91)
						tmp8 = _view;
					}
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(91)
					Array< unsigned char > _buffer = this1->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(91)
					{
						HX_STACK_LINE(91)
						::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(91)
						::snow::api::buffers::ArrayBufferView _view = tmp10;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(91)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(91)
						bool tmp11 = (byte_offset < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(91)
						if ((tmp11)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp12 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(91)
						int tmp12 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(91)
						bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(91)
						if ((tmp13)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp14 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(91)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(91)
						int tmp14 = (byte_offset + byte_len);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(91)
						int _new_range = tmp14;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(91)
						bool tmp15 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(91)
						if ((tmp15)){
							HX_STACK_LINE(91)
							::snow::api::buffers::TAError tmp16 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(91)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(91)
						_view->buffer = _buffer;
						HX_STACK_LINE(91)
						_view->byteOffset = byte_offset;
						HX_STACK_LINE(91)
						_view->byteLength = byte_len;
						HX_STACK_LINE(91)
						Float tmp16 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(91)
						int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(91)
						_view->length = tmp17;
						HX_STACK_LINE(91)
						tmp8 = _view;
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(91)
					HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
				}
				;break;
			}
		}
		HX_STACK_LINE(91)
		::snow::api::buffers::ArrayBufferView view = tmp8;		HX_STACK_VAR(view,"view");
		HX_STACK_LINE(91)
		tmp = view;
	}
	HX_STACK_LINE(91)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Uint8ClampedArray_Impl__obj,subarray,return )

::snow::api::buffers::ArrayBufferView Uint8ClampedArray_Impl__obj::fromBytes( ::haxe::io::Bytes _bytes,Dynamic __o__byteOffset,Dynamic _byteLength){
Dynamic _byteOffset = __o__byteOffset.Default(0);
	HX_STACK_FRAME("snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","fromBytes",0x2084601a,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.fromBytes","snow/api/buffers/Uint8ClampedArray.hx",94,0xc60b32de)
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_ARG(_byteOffset,"_byteOffset")
	HX_STACK_ARG(_byteLength,"_byteLength")
{
		HX_STACK_LINE(95)
		bool tmp = (_byteLength == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		if ((tmp)){
			HX_STACK_LINE(95)
			_byteLength = _bytes->length;
		}
		HX_STACK_LINE(96)
		::snow::api::buffers::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			Array< unsigned char > _buffer = _bytes->b;		HX_STACK_VAR(_buffer,"_buffer");
			HX_STACK_LINE(96)
			int _byteOffset1 = _byteOffset;		HX_STACK_VAR(_byteOffset1,"_byteOffset1");
			HX_STACK_LINE(96)
			int _byteLength1 = _byteLength;		HX_STACK_VAR(_byteLength1,"_byteLength1");
			HX_STACK_LINE(96)
			{
				HX_STACK_LINE(96)
				::snow::api::buffers::ArrayBufferView tmp2 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)5);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(96)
				::snow::api::buffers::ArrayBufferView _view = tmp2;		HX_STACK_VAR(_view,"_view");
				HX_STACK_LINE(96)
				int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
				HX_STACK_LINE(96)
				bool tmp3 = (_byteOffset1 < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(96)
				if ((tmp3)){
					HX_STACK_LINE(96)
					::snow::api::buffers::TAError tmp4 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(96)
					HX_STACK_DO_THROW(tmp4);
				}
				HX_STACK_LINE(96)
				int tmp4 = hx::Mod(_byteOffset1,_bytes_per_elem);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(96)
				bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(96)
				if ((tmp5)){
					HX_STACK_LINE(96)
					::snow::api::buffers::TAError tmp6 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(96)
					HX_STACK_DO_THROW(tmp6);
				}
				HX_STACK_LINE(96)
				int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
				HX_STACK_LINE(96)
				int tmp6 = (_byteOffset1 + _byteLength1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(96)
				int _new_range = tmp6;		HX_STACK_VAR(_new_range,"_new_range");
				HX_STACK_LINE(96)
				bool tmp7 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(96)
				if ((tmp7)){
					HX_STACK_LINE(96)
					::snow::api::buffers::TAError tmp8 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(96)
					HX_STACK_DO_THROW(tmp8);
				}
				HX_STACK_LINE(96)
				_view->buffer = _buffer;
				HX_STACK_LINE(96)
				_view->byteOffset = _byteOffset1;
				HX_STACK_LINE(96)
				_view->byteLength = _byteLength1;
				HX_STACK_LINE(96)
				Float tmp8 = (Float(_byteLength1) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(96)
				int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(96)
				_view->length = tmp9;
				HX_STACK_LINE(96)
				tmp1 = _view;
			}
		}
		HX_STACK_LINE(96)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Uint8ClampedArray_Impl__obj,fromBytes,return )

::haxe::io::Bytes Uint8ClampedArray_Impl__obj::toBytes( ::snow::api::buffers::ArrayBufferView this1){
	HX_STACK_FRAME("snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","toBytes",0xc7ff4229,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.toBytes","snow/api/buffers/Uint8ClampedArray.hx",99,0xc60b32de)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(100)
	Array< unsigned char > tmp = this1->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofData(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Uint8ClampedArray_Impl__obj,toBytes,return )

int Uint8ClampedArray_Impl__obj::get_length( ::snow::api::buffers::ArrayBufferView this1){
	HX_STACK_FRAME("snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","get_length",0x782b6116,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.get_length","snow/api/buffers/Uint8ClampedArray.hx",105,0xc60b32de)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(105)
	int tmp = this1->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Uint8ClampedArray_Impl__obj,get_length,return )

::String Uint8ClampedArray_Impl__obj::toString( ::snow::api::buffers::ArrayBufferView this1){
	HX_STACK_FRAME("snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","toString",0x211b7553,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.toString","snow/api/buffers/Uint8ClampedArray.hx",120,0xc60b32de)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(120)
	bool tmp = (this1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	if ((tmp)){
		HX_STACK_LINE(120)
		tmp1 = null();
	}
	else{
		HX_STACK_LINE(120)
		::String tmp2 = (HX_HCSTRING("Uint8ClampedArray [byteLength:","\x74","\x68","\x3d","\x9d") + this1->byteLength);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		::String tmp3 = (tmp2 + HX_HCSTRING(", length:","\xa0","\x04","\x67","\xef"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(120)
		int tmp4 = this1->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(120)
		::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(120)
		tmp1 = (tmp5 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));
	}
	HX_STACK_LINE(120)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Uint8ClampedArray_Impl__obj,toString,return )


Uint8ClampedArray_Impl__obj::Uint8ClampedArray_Impl__obj()
{
}

bool Uint8ClampedArray_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toBytes") ) { outValue = toBytes_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromView") ) { outValue = fromView_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"subarray") ) { outValue = subarray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { outValue = fromArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBuffer") ) { outValue = fromBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Uint8ClampedArray_Impl__obj::BYTES_PER_ELEMENT,HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Uint8ClampedArray_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Uint8ClampedArray_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Uint8ClampedArray_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Uint8ClampedArray_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

hx::Class Uint8ClampedArray_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("fromArray","\xcf","\x57","\x18","\xda"),
	HX_HCSTRING("fromView","\xef","\x00","\x1b","\xac"),
	HX_HCSTRING("fromBuffer","\x0a","\xc2","\xd8","\x13"),
	HX_HCSTRING("subarray","\x19","\x54","\x81","\x07"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("toBytes","\xf0","\x54","\x1c","\x8a"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void Uint8ClampedArray_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","\xa7","\xec","\x8a","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Uint8ClampedArray_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Uint8ClampedArray_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void Uint8ClampedArray_Impl__obj::__boot()
{
	BYTES_PER_ELEMENT= (int)1;
}

} // end namespace snow
} // end namespace api
} // end namespace buffers
} // end namespace _Uint8ClampedArray
