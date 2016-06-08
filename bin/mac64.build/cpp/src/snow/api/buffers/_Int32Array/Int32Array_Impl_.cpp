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
#ifndef INCLUDED_snow_api_buffers__Int32Array_Int32Array_Impl_
#include <snow/api/buffers/_Int32Array/Int32Array_Impl_.h>
#endif
namespace snow{
namespace api{
namespace buffers{
namespace _Int32Array{

Void Int32Array_Impl__obj::__construct()
{
	return null();
}

//Int32Array_Impl__obj::~Int32Array_Impl__obj() { }

Dynamic Int32Array_Impl__obj::__CreateEmpty() { return  new Int32Array_Impl__obj; }
hx::ObjectPtr< Int32Array_Impl__obj > Int32Array_Impl__obj::__new()
{  hx::ObjectPtr< Int32Array_Impl__obj > _result_ = new Int32Array_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Int32Array_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Int32Array_Impl__obj > _result_ = new Int32Array_Impl__obj();
	_result_->__construct();
	return _result_;}

int Int32Array_Impl__obj::BYTES_PER_ELEMENT;

::snow::api::buffers::ArrayBufferView Int32Array_Impl__obj::_new( int _elements){
	HX_STACK_FRAME("snow.api.buffers._Int32Array.Int32Array_Impl_","_new",0xad73f1c6,"snow.api.buffers._Int32Array.Int32Array_Impl_._new","snow/api/buffers/Int32Array.hx",63,0x1e3f02f6)
	HX_STACK_ARG(_elements,"_elements")
	HX_STACK_LINE(63)
	::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(64)
	::snow::api::buffers::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		int _elements1 = _elements;		HX_STACK_VAR(_elements1,"_elements1");
		HX_STACK_LINE(64)
		bool tmp1 = (_elements1 < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		if ((tmp1)){
			HX_STACK_LINE(64)
			_elements1 = (int)0;
		}
		HX_STACK_LINE(64)
		::snow::api::buffers::ArrayBufferView tmp2 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		::snow::api::buffers::ArrayBufferView _view = tmp2;		HX_STACK_VAR(_view,"_view");
		HX_STACK_LINE(64)
		int tmp3 = (_elements1 * _view->bytesPerElement);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		int _bytelen = tmp3;		HX_STACK_VAR(_bytelen,"_bytelen");
		HX_STACK_LINE(64)
		_view->byteOffset = (int)0;
		HX_STACK_LINE(64)
		_view->byteLength = _bytelen;
		HX_STACK_LINE(64)
		Array< unsigned char > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			Array< unsigned char > this2;		HX_STACK_VAR(this2,"this2");
			HX_STACK_LINE(64)
			this2 = Array_obj< unsigned char >::__new();
			HX_STACK_LINE(64)
			bool tmp5 = (_bytelen > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(64)
			if ((tmp5)){
				HX_STACK_LINE(64)
				int tmp6 = (_bytelen - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(64)
				this2[tmp6] = (int)0;
			}
			HX_STACK_LINE(64)
			tmp4 = this2;
		}
		HX_STACK_LINE(64)
		_view->buffer = tmp4;
		HX_STACK_LINE(64)
		_view->length = _elements1;
		HX_STACK_LINE(64)
		tmp = _view;
	}
	HX_STACK_LINE(64)
	this1 = tmp;
	HX_STACK_LINE(63)
	::snow::api::buffers::ArrayBufferView tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int32Array_Impl__obj,_new,return )

::snow::api::buffers::ArrayBufferView Int32Array_Impl__obj::fromArray( cpp::ArrayBase _array){
	HX_STACK_FRAME("snow.api.buffers._Int32Array.Int32Array_Impl_","fromArray",0xe0b16d4a,"snow.api.buffers._Int32Array.Int32Array_Impl_.fromArray","snow/api/buffers/Int32Array.hx",68,0x1e3f02f6)
	HX_STACK_ARG(_array,"_array")
	HX_STACK_LINE(69)
	::snow::api::buffers::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	{
		HX_STACK_LINE(69)
		Array< Float > _array1 = ((Array< Float >)(_array));		HX_STACK_VAR(_array1,"_array1");
		HX_STACK_LINE(69)
		::snow::api::buffers::ArrayBufferView tmp1 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		::snow::api::buffers::ArrayBufferView _view = tmp1;		HX_STACK_VAR(_view,"_view");
		HX_STACK_LINE(69)
		int _length = _array1->length;		HX_STACK_VAR(_length,"_length");
		HX_STACK_LINE(69)
		int tmp2 = (_length * _view->bytesPerElement);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		int _bytelen = tmp2;		HX_STACK_VAR(_bytelen,"_bytelen");
		HX_STACK_LINE(69)
		_view->byteOffset = (int)0;
		HX_STACK_LINE(69)
		_view->length = _length;
		HX_STACK_LINE(69)
		_view->byteLength = _bytelen;
		HX_STACK_LINE(69)
		Array< unsigned char > tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			Array< unsigned char > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(69)
			this1 = Array_obj< unsigned char >::__new();
			HX_STACK_LINE(69)
			bool tmp4 = (_bytelen > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(69)
			if ((tmp4)){
				HX_STACK_LINE(69)
				int tmp5 = (_bytelen - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(69)
				this1[tmp5] = (int)0;
			}
			HX_STACK_LINE(69)
			tmp3 = this1;
		}
		HX_STACK_LINE(69)
		_view->buffer = tmp3;
		HX_STACK_LINE(69)
		_view->copyFromArray(_array1,null());
		HX_STACK_LINE(69)
		tmp = _view;
	}
	HX_STACK_LINE(69)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int32Array_Impl__obj,fromArray,return )

::snow::api::buffers::ArrayBufferView Int32Array_Impl__obj::fromView( ::snow::api::buffers::ArrayBufferView _view){
	HX_STACK_FRAME("snow.api.buffers._Int32Array.Int32Array_Impl_","fromView",0x238673d4,"snow.api.buffers._Int32Array.Int32Array_Impl_.fromView","snow/api/buffers/Int32Array.hx",72,0x1e3f02f6)
	HX_STACK_ARG(_view,"_view")
	HX_STACK_LINE(73)
	::snow::api::buffers::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		int _type = (int)3;		HX_STACK_VAR(_type,"_type");
		HX_STACK_LINE(73)
		int _src_type = _view->type;		HX_STACK_VAR(_src_type,"_src_type");
		HX_STACK_LINE(73)
		Array< unsigned char > _src_data = _view->buffer;		HX_STACK_VAR(_src_data,"_src_data");
		HX_STACK_LINE(73)
		int _src_length = _view->length;		HX_STACK_VAR(_src_length,"_src_length");
		HX_STACK_LINE(73)
		int _src_byte_offset = _view->byteOffset;		HX_STACK_VAR(_src_byte_offset,"_src_byte_offset");
		HX_STACK_LINE(73)
		::snow::api::buffers::ArrayBufferView tmp1 = ::snow::api::buffers::ArrayBufferView_obj::__new(_type);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		::snow::api::buffers::ArrayBufferView _view1 = tmp1;		HX_STACK_VAR(_view1,"_view1");
		HX_STACK_LINE(73)
		bool tmp2 = (_src_type == _type);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		if ((tmp2)){
			HX_STACK_LINE(73)
			int srcLength = _src_data->length;		HX_STACK_VAR(srcLength,"srcLength");
			HX_STACK_LINE(73)
			int tmp3 = (srcLength - _src_byte_offset);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(73)
			int cloneLength = tmp3;		HX_STACK_VAR(cloneLength,"cloneLength");
			HX_STACK_LINE(73)
			Array< unsigned char > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				Array< unsigned char > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(73)
				this1 = Array_obj< unsigned char >::__new();
				HX_STACK_LINE(73)
				bool tmp5 = (cloneLength > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(73)
				if ((tmp5)){
					HX_STACK_LINE(73)
					int tmp6 = (cloneLength - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(73)
					this1[tmp6] = (int)0;
				}
				HX_STACK_LINE(73)
				tmp4 = this1;
			}
			HX_STACK_LINE(73)
			_view1->buffer = tmp4;
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				Array< unsigned char > tmp5 = _src_data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(73)
				int tmp6 = _src_byte_offset;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				int tmp7 = cloneLength;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(73)
				_view1->buffer->blit((int)0,tmp5,tmp6,tmp7);
			}
		}
		else{
			HX_STACK_LINE(73)
			HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
		}
		HX_STACK_LINE(73)
		int tmp3 = (_view1->bytesPerElement * _src_length);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		_view1->byteLength = tmp3;
		HX_STACK_LINE(73)
		_view1->byteOffset = (int)0;
		HX_STACK_LINE(73)
		_view1->length = _src_length;
		HX_STACK_LINE(73)
		tmp = _view1;
	}
	HX_STACK_LINE(73)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int32Array_Impl__obj,fromView,return )

::snow::api::buffers::ArrayBufferView Int32Array_Impl__obj::fromBuffer( Array< unsigned char > _buffer,int _byteOffset,int _byteLength){
	HX_STACK_FRAME("snow.api.buffers._Int32Array.Int32Array_Impl_","fromBuffer",0xd332782f,"snow.api.buffers._Int32Array.Int32Array_Impl_.fromBuffer","snow/api/buffers/Int32Array.hx",76,0x1e3f02f6)
	HX_STACK_ARG(_buffer,"_buffer")
	HX_STACK_ARG(_byteOffset,"_byteOffset")
	HX_STACK_ARG(_byteLength,"_byteLength")
	HX_STACK_LINE(77)
	::snow::api::buffers::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	{
		HX_STACK_LINE(77)
		::snow::api::buffers::ArrayBufferView tmp1 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		::snow::api::buffers::ArrayBufferView _view = tmp1;		HX_STACK_VAR(_view,"_view");
		HX_STACK_LINE(77)
		int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
		HX_STACK_LINE(77)
		bool tmp2 = (_byteOffset < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		if ((tmp2)){
			HX_STACK_LINE(77)
			::snow::api::buffers::TAError tmp3 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(77)
			HX_STACK_DO_THROW(tmp3);
		}
		HX_STACK_LINE(77)
		int tmp3 = hx::Mod(_byteOffset,_bytes_per_elem);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		if ((tmp4)){
			HX_STACK_LINE(77)
			::snow::api::buffers::TAError tmp5 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(77)
			HX_STACK_DO_THROW(tmp5);
		}
		HX_STACK_LINE(77)
		int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
		HX_STACK_LINE(77)
		int tmp5 = (_byteOffset + _byteLength);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		int _new_range = tmp5;		HX_STACK_VAR(_new_range,"_new_range");
		HX_STACK_LINE(77)
		bool tmp6 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		if ((tmp6)){
			HX_STACK_LINE(77)
			::snow::api::buffers::TAError tmp7 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(77)
			HX_STACK_DO_THROW(tmp7);
		}
		HX_STACK_LINE(77)
		_view->buffer = _buffer;
		HX_STACK_LINE(77)
		_view->byteOffset = _byteOffset;
		HX_STACK_LINE(77)
		_view->byteLength = _byteLength;
		HX_STACK_LINE(77)
		Float tmp7 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(77)
		_view->length = tmp8;
		HX_STACK_LINE(77)
		tmp = _view;
	}
	HX_STACK_LINE(77)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Int32Array_Impl__obj,fromBuffer,return )

::snow::api::buffers::ArrayBufferView Int32Array_Impl__obj::subarray( ::snow::api::buffers::ArrayBufferView this1,int begin,Dynamic end){
	HX_STACK_FRAME("snow.api.buffers._Int32Array.Int32Array_Impl_","subarray",0x7eecc6fe,"snow.api.buffers._Int32Array.Int32Array_Impl_.subarray","snow/api/buffers/Int32Array.hx",82,0x1e3f02f6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(82)
	::snow::api::buffers::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	{
		HX_STACK_LINE(82)
		bool tmp1 = (end == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		if ((tmp1)){
			HX_STACK_LINE(82)
			(end == this1->length);
		}
		HX_STACK_LINE(82)
		int tmp2 = (end - begin);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		int tmp3 = this1->bytesPerElement;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		int byte_len = tmp4;		HX_STACK_VAR(byte_len,"byte_len");
		HX_STACK_LINE(82)
		int tmp5 = (begin * this1->bytesPerElement);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		int tmp6 = this1->byteOffset;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		int byte_offset = tmp7;		HX_STACK_VAR(byte_offset,"byte_offset");
		HX_STACK_LINE(82)
		::snow::api::buffers::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			int _g = this1->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(82)
			int tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(82)
			switch( (int)(tmp9)){
				case (int)1: {
					HX_STACK_LINE(82)
					Array< unsigned char > _buffer = this1->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(82)
					{
						HX_STACK_LINE(82)
						::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)1);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(82)
						::snow::api::buffers::ArrayBufferView _view = tmp10;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(82)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(82)
						bool tmp11 = (byte_offset < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(82)
						if ((tmp11)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp12 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(82)
						int tmp12 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(82)
						bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(82)
						if ((tmp13)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp14 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(82)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(82)
						int tmp14 = (byte_offset + byte_len);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(82)
						int _new_range = tmp14;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(82)
						bool tmp15 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(82)
						if ((tmp15)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp16 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(82)
						_view->buffer = _buffer;
						HX_STACK_LINE(82)
						_view->byteOffset = byte_offset;
						HX_STACK_LINE(82)
						_view->byteLength = byte_len;
						HX_STACK_LINE(82)
						Float tmp16 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(82)
						int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(82)
						_view->length = tmp17;
						HX_STACK_LINE(82)
						tmp8 = _view;
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(82)
					Array< unsigned char > _buffer = this1->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(82)
					{
						HX_STACK_LINE(82)
						::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)2);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(82)
						::snow::api::buffers::ArrayBufferView _view = tmp10;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(82)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(82)
						bool tmp11 = (byte_offset < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(82)
						if ((tmp11)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp12 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(82)
						int tmp12 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(82)
						bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(82)
						if ((tmp13)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp14 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(82)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(82)
						int tmp14 = (byte_offset + byte_len);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(82)
						int _new_range = tmp14;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(82)
						bool tmp15 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(82)
						if ((tmp15)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp16 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(82)
						_view->buffer = _buffer;
						HX_STACK_LINE(82)
						_view->byteOffset = byte_offset;
						HX_STACK_LINE(82)
						_view->byteLength = byte_len;
						HX_STACK_LINE(82)
						Float tmp16 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(82)
						int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(82)
						_view->length = tmp17;
						HX_STACK_LINE(82)
						tmp8 = _view;
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(82)
					Array< unsigned char > _buffer = this1->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(82)
					{
						HX_STACK_LINE(82)
						::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)3);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(82)
						::snow::api::buffers::ArrayBufferView _view = tmp10;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(82)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(82)
						bool tmp11 = (byte_offset < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(82)
						if ((tmp11)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp12 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(82)
						int tmp12 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(82)
						bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(82)
						if ((tmp13)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp14 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(82)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(82)
						int tmp14 = (byte_offset + byte_len);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(82)
						int _new_range = tmp14;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(82)
						bool tmp15 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(82)
						if ((tmp15)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp16 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(82)
						_view->buffer = _buffer;
						HX_STACK_LINE(82)
						_view->byteOffset = byte_offset;
						HX_STACK_LINE(82)
						_view->byteLength = byte_len;
						HX_STACK_LINE(82)
						Float tmp16 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(82)
						int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(82)
						_view->length = tmp17;
						HX_STACK_LINE(82)
						tmp8 = _view;
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(82)
					Array< unsigned char > _buffer = this1->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(82)
					{
						HX_STACK_LINE(82)
						::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(82)
						::snow::api::buffers::ArrayBufferView _view = tmp10;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(82)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(82)
						bool tmp11 = (byte_offset < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(82)
						if ((tmp11)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp12 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(82)
						int tmp12 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(82)
						bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(82)
						if ((tmp13)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp14 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(82)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(82)
						int tmp14 = (byte_offset + byte_len);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(82)
						int _new_range = tmp14;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(82)
						bool tmp15 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(82)
						if ((tmp15)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp16 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(82)
						_view->buffer = _buffer;
						HX_STACK_LINE(82)
						_view->byteOffset = byte_offset;
						HX_STACK_LINE(82)
						_view->byteLength = byte_len;
						HX_STACK_LINE(82)
						Float tmp16 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(82)
						int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(82)
						_view->length = tmp17;
						HX_STACK_LINE(82)
						tmp8 = _view;
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(82)
					Array< unsigned char > _buffer = this1->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(82)
					{
						HX_STACK_LINE(82)
						::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)5);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(82)
						::snow::api::buffers::ArrayBufferView _view = tmp10;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(82)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(82)
						bool tmp11 = (byte_offset < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(82)
						if ((tmp11)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp12 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(82)
						int tmp12 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(82)
						bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(82)
						if ((tmp13)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp14 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(82)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(82)
						int tmp14 = (byte_offset + byte_len);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(82)
						int _new_range = tmp14;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(82)
						bool tmp15 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(82)
						if ((tmp15)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp16 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(82)
						_view->buffer = _buffer;
						HX_STACK_LINE(82)
						_view->byteOffset = byte_offset;
						HX_STACK_LINE(82)
						_view->byteLength = byte_len;
						HX_STACK_LINE(82)
						Float tmp16 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(82)
						int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(82)
						_view->length = tmp17;
						HX_STACK_LINE(82)
						tmp8 = _view;
					}
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(82)
					Array< unsigned char > _buffer = this1->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(82)
					{
						HX_STACK_LINE(82)
						::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)6);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(82)
						::snow::api::buffers::ArrayBufferView _view = tmp10;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(82)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(82)
						bool tmp11 = (byte_offset < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(82)
						if ((tmp11)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp12 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(82)
						int tmp12 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(82)
						bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(82)
						if ((tmp13)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp14 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(82)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(82)
						int tmp14 = (byte_offset + byte_len);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(82)
						int _new_range = tmp14;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(82)
						bool tmp15 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(82)
						if ((tmp15)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp16 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(82)
						_view->buffer = _buffer;
						HX_STACK_LINE(82)
						_view->byteOffset = byte_offset;
						HX_STACK_LINE(82)
						_view->byteLength = byte_len;
						HX_STACK_LINE(82)
						Float tmp16 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(82)
						int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(82)
						_view->length = tmp17;
						HX_STACK_LINE(82)
						tmp8 = _view;
					}
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(82)
					Array< unsigned char > _buffer = this1->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(82)
					{
						HX_STACK_LINE(82)
						::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)7);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(82)
						::snow::api::buffers::ArrayBufferView _view = tmp10;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(82)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(82)
						bool tmp11 = (byte_offset < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(82)
						if ((tmp11)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp12 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(82)
						int tmp12 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(82)
						bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(82)
						if ((tmp13)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp14 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(82)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(82)
						int tmp14 = (byte_offset + byte_len);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(82)
						int _new_range = tmp14;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(82)
						bool tmp15 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(82)
						if ((tmp15)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp16 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(82)
						_view->buffer = _buffer;
						HX_STACK_LINE(82)
						_view->byteOffset = byte_offset;
						HX_STACK_LINE(82)
						_view->byteLength = byte_len;
						HX_STACK_LINE(82)
						Float tmp16 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(82)
						int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(82)
						_view->length = tmp17;
						HX_STACK_LINE(82)
						tmp8 = _view;
					}
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(82)
					Array< unsigned char > _buffer = this1->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(82)
					{
						HX_STACK_LINE(82)
						::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(82)
						::snow::api::buffers::ArrayBufferView _view = tmp10;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(82)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(82)
						bool tmp11 = (byte_offset < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(82)
						if ((tmp11)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp12 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(82)
						int tmp12 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(82)
						bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(82)
						if ((tmp13)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp14 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(82)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(82)
						int tmp14 = (byte_offset + byte_len);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(82)
						int _new_range = tmp14;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(82)
						bool tmp15 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(82)
						if ((tmp15)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp16 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(82)
						_view->buffer = _buffer;
						HX_STACK_LINE(82)
						_view->byteOffset = byte_offset;
						HX_STACK_LINE(82)
						_view->byteLength = byte_len;
						HX_STACK_LINE(82)
						Float tmp16 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(82)
						int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(82)
						_view->length = tmp17;
						HX_STACK_LINE(82)
						tmp8 = _view;
					}
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(82)
					Array< unsigned char > _buffer = this1->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(82)
					{
						HX_STACK_LINE(82)
						::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(82)
						::snow::api::buffers::ArrayBufferView _view = tmp10;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(82)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(82)
						bool tmp11 = (byte_offset < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(82)
						if ((tmp11)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp12 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(82)
						int tmp12 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(82)
						bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(82)
						if ((tmp13)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp14 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(82)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(82)
						int tmp14 = (byte_offset + byte_len);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(82)
						int _new_range = tmp14;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(82)
						bool tmp15 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(82)
						if ((tmp15)){
							HX_STACK_LINE(82)
							::snow::api::buffers::TAError tmp16 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(82)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(82)
						_view->buffer = _buffer;
						HX_STACK_LINE(82)
						_view->byteOffset = byte_offset;
						HX_STACK_LINE(82)
						_view->byteLength = byte_len;
						HX_STACK_LINE(82)
						Float tmp16 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(82)
						int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(82)
						_view->length = tmp17;
						HX_STACK_LINE(82)
						tmp8 = _view;
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(82)
					HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
				}
				;break;
			}
		}
		HX_STACK_LINE(82)
		::snow::api::buffers::ArrayBufferView view = tmp8;		HX_STACK_VAR(view,"view");
		HX_STACK_LINE(82)
		tmp = view;
	}
	HX_STACK_LINE(82)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Int32Array_Impl__obj,subarray,return )

::snow::api::buffers::ArrayBufferView Int32Array_Impl__obj::fromBytes( ::haxe::io::Bytes _bytes,Dynamic __o__byteOffset,Dynamic _byteLength){
Dynamic _byteOffset = __o__byteOffset.Default(0);
	HX_STACK_FRAME("snow.api.buffers._Int32Array.Int32Array_Impl_","fromBytes",0x78ba081c,"snow.api.buffers._Int32Array.Int32Array_Impl_.fromBytes","snow/api/buffers/Int32Array.hx",85,0x1e3f02f6)
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_ARG(_byteOffset,"_byteOffset")
	HX_STACK_ARG(_byteLength,"_byteLength")
{
		HX_STACK_LINE(86)
		bool tmp = (_byteLength == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		if ((tmp)){
			HX_STACK_LINE(86)
			_byteLength = _bytes->length;
		}
		HX_STACK_LINE(87)
		::snow::api::buffers::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			Array< unsigned char > _buffer = _bytes->b;		HX_STACK_VAR(_buffer,"_buffer");
			HX_STACK_LINE(87)
			int _byteOffset1 = _byteOffset;		HX_STACK_VAR(_byteOffset1,"_byteOffset1");
			HX_STACK_LINE(87)
			int _byteLength1 = _byteLength;		HX_STACK_VAR(_byteLength1,"_byteLength1");
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				::snow::api::buffers::ArrayBufferView tmp2 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)3);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(87)
				::snow::api::buffers::ArrayBufferView _view = tmp2;		HX_STACK_VAR(_view,"_view");
				HX_STACK_LINE(87)
				int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
				HX_STACK_LINE(87)
				bool tmp3 = (_byteOffset1 < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(87)
				if ((tmp3)){
					HX_STACK_LINE(87)
					::snow::api::buffers::TAError tmp4 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(87)
					HX_STACK_DO_THROW(tmp4);
				}
				HX_STACK_LINE(87)
				int tmp4 = hx::Mod(_byteOffset1,_bytes_per_elem);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(87)
				bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(87)
				if ((tmp5)){
					HX_STACK_LINE(87)
					::snow::api::buffers::TAError tmp6 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(87)
					HX_STACK_DO_THROW(tmp6);
				}
				HX_STACK_LINE(87)
				int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
				HX_STACK_LINE(87)
				int tmp6 = (_byteOffset1 + _byteLength1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(87)
				int _new_range = tmp6;		HX_STACK_VAR(_new_range,"_new_range");
				HX_STACK_LINE(87)
				bool tmp7 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(87)
				if ((tmp7)){
					HX_STACK_LINE(87)
					::snow::api::buffers::TAError tmp8 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(87)
					HX_STACK_DO_THROW(tmp8);
				}
				HX_STACK_LINE(87)
				_view->buffer = _buffer;
				HX_STACK_LINE(87)
				_view->byteOffset = _byteOffset1;
				HX_STACK_LINE(87)
				_view->byteLength = _byteLength1;
				HX_STACK_LINE(87)
				Float tmp8 = (Float(_byteLength1) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(87)
				int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(87)
				_view->length = tmp9;
				HX_STACK_LINE(87)
				tmp1 = _view;
			}
		}
		HX_STACK_LINE(87)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Int32Array_Impl__obj,fromBytes,return )

::haxe::io::Bytes Int32Array_Impl__obj::toBytes( ::snow::api::buffers::ArrayBufferView this1){
	HX_STACK_FRAME("snow.api.buffers._Int32Array.Int32Array_Impl_","toBytes",0x75fb85ab,"snow.api.buffers._Int32Array.Int32Array_Impl_.toBytes","snow/api/buffers/Int32Array.hx",90,0x1e3f02f6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(91)
	Array< unsigned char > tmp = this1->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofData(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int32Array_Impl__obj,toBytes,return )

int Int32Array_Impl__obj::get_length( ::snow::api::buffers::ArrayBufferView this1){
	HX_STACK_FRAME("snow.api.buffers._Int32Array.Int32Array_Impl_","get_length",0x4ee8bad4,"snow.api.buffers._Int32Array.Int32Array_Impl_.get_length","snow/api/buffers/Int32Array.hx",96,0x1e3f02f6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(96)
	int tmp = this1->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int32Array_Impl__obj,get_length,return )

::String Int32Array_Impl__obj::toString( ::snow::api::buffers::ArrayBufferView this1){
	HX_STACK_FRAME("snow.api.buffers._Int32Array.Int32Array_Impl_","toString",0xafda4391,"snow.api.buffers._Int32Array.Int32Array_Impl_.toString","snow/api/buffers/Int32Array.hx",111,0x1e3f02f6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(111)
	bool tmp = (this1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	if ((tmp)){
		HX_STACK_LINE(111)
		tmp1 = null();
	}
	else{
		HX_STACK_LINE(111)
		::String tmp2 = (HX_HCSTRING("Int32Array [byteLength:","\xa6","\xa7","\xb7","\xbd") + this1->byteLength);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(111)
		::String tmp3 = (tmp2 + HX_HCSTRING(", length:","\xa0","\x04","\x67","\xef"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(111)
		int tmp4 = this1->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(111)
		tmp1 = (tmp5 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));
	}
	HX_STACK_LINE(111)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int32Array_Impl__obj,toString,return )


Int32Array_Impl__obj::Int32Array_Impl__obj()
{
}

bool Int32Array_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &Int32Array_Impl__obj::BYTES_PER_ELEMENT,HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Int32Array_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Int32Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int32Array_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Int32Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

hx::Class Int32Array_Impl__obj::__mClass;

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

void Int32Array_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.api.buffers._Int32Array.Int32Array_Impl_","\x29","\xde","\x16","\x7d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Int32Array_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Int32Array_Impl__obj >;
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

void Int32Array_Impl__obj::__boot()
{
	BYTES_PER_ELEMENT= (int)4;
}

} // end namespace snow
} // end namespace api
} // end namespace buffers
} // end namespace _Int32Array
