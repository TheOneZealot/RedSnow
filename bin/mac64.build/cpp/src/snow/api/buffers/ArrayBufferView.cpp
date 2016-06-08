#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferIO
#include <snow/api/buffers/ArrayBufferIO.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
#endif
namespace snow{
namespace api{
namespace buffers{

Void ArrayBufferView_obj::__construct(int in_type)
{
HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","new",0x3a2b1616,"snow.api.buffers.ArrayBufferView.new","snow/api/buffers/ArrayBufferView.hx",12,0xa074815d)
HX_STACK_THIS(this)
HX_STACK_ARG(in_type,"in_type")
{
	HX_STACK_LINE(21)
	this->bytesPerElement = (int)0;
	HX_STACK_LINE(14)
	this->type = (int)0;
	HX_STACK_LINE(27)
	this->type = in_type;
	HX_STACK_LINE(28)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	switch( (int)(tmp)){
		case (int)1: {
			HX_STACK_LINE(28)
			tmp1 = (int)1;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(28)
			tmp1 = (int)1;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(28)
			tmp1 = (int)1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(28)
			tmp1 = (int)2;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(28)
			tmp1 = (int)2;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(28)
			tmp1 = (int)4;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(28)
			tmp1 = (int)4;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(28)
			tmp1 = (int)4;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(28)
			tmp1 = (int)8;
		}
		;break;
		default: {
			HX_STACK_LINE(28)
			tmp1 = (int)1;
		}
	}
	HX_STACK_LINE(28)
	this->bytesPerElement = tmp1;
}
;
	return null();
}

//ArrayBufferView_obj::~ArrayBufferView_obj() { }

Dynamic ArrayBufferView_obj::__CreateEmpty() { return  new ArrayBufferView_obj; }
hx::ObjectPtr< ArrayBufferView_obj > ArrayBufferView_obj::__new(int in_type)
{  hx::ObjectPtr< ArrayBufferView_obj > _result_ = new ArrayBufferView_obj();
	_result_->__construct(in_type);
	return _result_;}

Dynamic ArrayBufferView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayBufferView_obj > _result_ = new ArrayBufferView_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::subarray_snow_api_buffers_Uint8Array( int begin,Dynamic end){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","subarray_snow_api_buffers_Uint8Array",0x52f6e86c,"snow.api.buffers.ArrayBufferView.subarray_snow_api_buffers_Uint8Array","snow/api/buffers/ArrayBufferView.hx",160,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(162)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(162)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(163)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	int tmp2 = this->bytesPerElement;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(163)
	int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(163)
	int byte_len = tmp3;		HX_STACK_VAR(byte_len,"byte_len");
	HX_STACK_LINE(164)
	int tmp4 = begin;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(164)
	int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(164)
	int tmp7 = this->byteOffset;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(164)
	int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(164)
	int byte_offset = tmp8;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(167)
	::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int tmp10 = this->type;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(167)
		int _g = tmp10;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		int tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(167)
		switch( (int)(tmp11)){
			case (int)1: {
				HX_STACK_LINE(170)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(170)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(170)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(170)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(170)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(170)
					if ((tmp14)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(170)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(170)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(170)
					if ((tmp16)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(170)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(170)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(170)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(170)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(170)
					if ((tmp18)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(170)
					_view->buffer = _buffer;
					HX_STACK_LINE(170)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(170)
					_view->byteLength = byte_len;
					HX_STACK_LINE(170)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(170)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(170)
					_view->length = tmp20;
					HX_STACK_LINE(170)
					tmp9 = _view;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(173)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(173)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(173)
				{
					HX_STACK_LINE(173)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)2);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(173)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(173)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(173)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(173)
					if ((tmp14)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(173)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(173)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(173)
					if ((tmp16)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(173)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(173)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(173)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(173)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(173)
					if ((tmp18)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(173)
					_view->buffer = _buffer;
					HX_STACK_LINE(173)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(173)
					_view->byteLength = byte_len;
					HX_STACK_LINE(173)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(173)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(173)
					_view->length = tmp20;
					HX_STACK_LINE(173)
					tmp9 = _view;
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(176)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(176)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)3);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(176)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(176)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(176)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(176)
					if ((tmp14)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(176)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(176)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(176)
					if ((tmp16)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(176)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(176)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(176)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(176)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(176)
					if ((tmp18)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(176)
					_view->buffer = _buffer;
					HX_STACK_LINE(176)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(176)
					_view->byteLength = byte_len;
					HX_STACK_LINE(176)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(176)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(176)
					_view->length = tmp20;
					HX_STACK_LINE(176)
					tmp9 = _view;
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(179)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(179)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(179)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(179)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(179)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(179)
					if ((tmp14)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(179)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(179)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(179)
					if ((tmp16)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(179)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(179)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(179)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(179)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(179)
					if ((tmp18)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(179)
					_view->buffer = _buffer;
					HX_STACK_LINE(179)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(179)
					_view->byteLength = byte_len;
					HX_STACK_LINE(179)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					_view->length = tmp20;
					HX_STACK_LINE(179)
					tmp9 = _view;
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(182)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(182)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(182)
				{
					HX_STACK_LINE(182)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)5);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(182)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(182)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(182)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(182)
					if ((tmp14)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(182)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(182)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(182)
					if ((tmp16)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(182)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(182)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(182)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(182)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(182)
					if ((tmp18)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(182)
					_view->buffer = _buffer;
					HX_STACK_LINE(182)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(182)
					_view->byteLength = byte_len;
					HX_STACK_LINE(182)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(182)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(182)
					_view->length = tmp20;
					HX_STACK_LINE(182)
					tmp9 = _view;
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(185)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(185)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(185)
				{
					HX_STACK_LINE(185)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)6);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(185)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(185)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(185)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(185)
					if ((tmp14)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(185)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(185)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(185)
					if ((tmp16)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(185)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(185)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(185)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(185)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(185)
					if ((tmp18)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(185)
					_view->buffer = _buffer;
					HX_STACK_LINE(185)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(185)
					_view->byteLength = byte_len;
					HX_STACK_LINE(185)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(185)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(185)
					_view->length = tmp20;
					HX_STACK_LINE(185)
					tmp9 = _view;
				}
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(188)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(188)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(188)
				{
					HX_STACK_LINE(188)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)7);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(188)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(188)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(188)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(188)
					if ((tmp14)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(188)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(188)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(188)
					if ((tmp16)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(188)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(188)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(188)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(188)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(188)
					if ((tmp18)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(188)
					_view->buffer = _buffer;
					HX_STACK_LINE(188)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(188)
					_view->byteLength = byte_len;
					HX_STACK_LINE(188)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(188)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(188)
					_view->length = tmp20;
					HX_STACK_LINE(188)
					tmp9 = _view;
				}
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(191)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(191)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(191)
				{
					HX_STACK_LINE(191)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(191)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(191)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(191)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(191)
					if ((tmp14)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(191)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(191)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(191)
					if ((tmp16)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(191)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(191)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(191)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(191)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(191)
					if ((tmp18)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(191)
					_view->buffer = _buffer;
					HX_STACK_LINE(191)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(191)
					_view->byteLength = byte_len;
					HX_STACK_LINE(191)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(191)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(191)
					_view->length = tmp20;
					HX_STACK_LINE(191)
					tmp9 = _view;
				}
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(194)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(194)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(194)
				{
					HX_STACK_LINE(194)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)9);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(194)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(194)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(194)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(194)
					if ((tmp14)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(194)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(194)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(194)
					if ((tmp16)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(194)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(194)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(194)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(194)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(194)
					if ((tmp18)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(194)
					_view->buffer = _buffer;
					HX_STACK_LINE(194)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(194)
					_view->byteLength = byte_len;
					HX_STACK_LINE(194)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(194)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(194)
					_view->length = tmp20;
					HX_STACK_LINE(194)
					tmp9 = _view;
				}
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(197)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(167)
	::snow::api::buffers::ArrayBufferView view = tmp9;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(200)
	::snow::api::buffers::ArrayBufferView tmp10 = view;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(200)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_snow_api_buffers_Uint8Array,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::subarray_snow_api_buffers_Float32Array( int begin,Dynamic end){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","subarray_snow_api_buffers_Float32Array",0x4cfabfaf,"snow.api.buffers.ArrayBufferView.subarray_snow_api_buffers_Float32Array","snow/api/buffers/ArrayBufferView.hx",160,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(162)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(162)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(163)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	int tmp2 = this->bytesPerElement;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(163)
	int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(163)
	int byte_len = tmp3;		HX_STACK_VAR(byte_len,"byte_len");
	HX_STACK_LINE(164)
	int tmp4 = begin;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(164)
	int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(164)
	int tmp7 = this->byteOffset;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(164)
	int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(164)
	int byte_offset = tmp8;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(167)
	::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int tmp10 = this->type;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(167)
		int _g = tmp10;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		int tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(167)
		switch( (int)(tmp11)){
			case (int)1: {
				HX_STACK_LINE(170)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(170)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(170)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(170)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(170)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(170)
					if ((tmp14)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(170)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(170)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(170)
					if ((tmp16)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(170)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(170)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(170)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(170)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(170)
					if ((tmp18)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(170)
					_view->buffer = _buffer;
					HX_STACK_LINE(170)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(170)
					_view->byteLength = byte_len;
					HX_STACK_LINE(170)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(170)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(170)
					_view->length = tmp20;
					HX_STACK_LINE(170)
					tmp9 = _view;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(173)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(173)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(173)
				{
					HX_STACK_LINE(173)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)2);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(173)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(173)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(173)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(173)
					if ((tmp14)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(173)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(173)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(173)
					if ((tmp16)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(173)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(173)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(173)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(173)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(173)
					if ((tmp18)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(173)
					_view->buffer = _buffer;
					HX_STACK_LINE(173)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(173)
					_view->byteLength = byte_len;
					HX_STACK_LINE(173)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(173)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(173)
					_view->length = tmp20;
					HX_STACK_LINE(173)
					tmp9 = _view;
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(176)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(176)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)3);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(176)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(176)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(176)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(176)
					if ((tmp14)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(176)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(176)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(176)
					if ((tmp16)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(176)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(176)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(176)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(176)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(176)
					if ((tmp18)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(176)
					_view->buffer = _buffer;
					HX_STACK_LINE(176)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(176)
					_view->byteLength = byte_len;
					HX_STACK_LINE(176)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(176)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(176)
					_view->length = tmp20;
					HX_STACK_LINE(176)
					tmp9 = _view;
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(179)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(179)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(179)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(179)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(179)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(179)
					if ((tmp14)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(179)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(179)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(179)
					if ((tmp16)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(179)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(179)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(179)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(179)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(179)
					if ((tmp18)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(179)
					_view->buffer = _buffer;
					HX_STACK_LINE(179)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(179)
					_view->byteLength = byte_len;
					HX_STACK_LINE(179)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					_view->length = tmp20;
					HX_STACK_LINE(179)
					tmp9 = _view;
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(182)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(182)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(182)
				{
					HX_STACK_LINE(182)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)5);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(182)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(182)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(182)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(182)
					if ((tmp14)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(182)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(182)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(182)
					if ((tmp16)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(182)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(182)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(182)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(182)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(182)
					if ((tmp18)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(182)
					_view->buffer = _buffer;
					HX_STACK_LINE(182)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(182)
					_view->byteLength = byte_len;
					HX_STACK_LINE(182)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(182)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(182)
					_view->length = tmp20;
					HX_STACK_LINE(182)
					tmp9 = _view;
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(185)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(185)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(185)
				{
					HX_STACK_LINE(185)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)6);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(185)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(185)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(185)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(185)
					if ((tmp14)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(185)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(185)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(185)
					if ((tmp16)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(185)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(185)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(185)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(185)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(185)
					if ((tmp18)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(185)
					_view->buffer = _buffer;
					HX_STACK_LINE(185)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(185)
					_view->byteLength = byte_len;
					HX_STACK_LINE(185)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(185)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(185)
					_view->length = tmp20;
					HX_STACK_LINE(185)
					tmp9 = _view;
				}
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(188)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(188)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(188)
				{
					HX_STACK_LINE(188)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)7);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(188)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(188)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(188)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(188)
					if ((tmp14)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(188)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(188)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(188)
					if ((tmp16)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(188)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(188)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(188)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(188)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(188)
					if ((tmp18)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(188)
					_view->buffer = _buffer;
					HX_STACK_LINE(188)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(188)
					_view->byteLength = byte_len;
					HX_STACK_LINE(188)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(188)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(188)
					_view->length = tmp20;
					HX_STACK_LINE(188)
					tmp9 = _view;
				}
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(191)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(191)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(191)
				{
					HX_STACK_LINE(191)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(191)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(191)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(191)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(191)
					if ((tmp14)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(191)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(191)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(191)
					if ((tmp16)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(191)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(191)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(191)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(191)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(191)
					if ((tmp18)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(191)
					_view->buffer = _buffer;
					HX_STACK_LINE(191)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(191)
					_view->byteLength = byte_len;
					HX_STACK_LINE(191)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(191)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(191)
					_view->length = tmp20;
					HX_STACK_LINE(191)
					tmp9 = _view;
				}
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(194)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(194)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(194)
				{
					HX_STACK_LINE(194)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)9);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(194)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(194)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(194)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(194)
					if ((tmp14)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(194)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(194)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(194)
					if ((tmp16)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(194)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(194)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(194)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(194)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(194)
					if ((tmp18)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(194)
					_view->buffer = _buffer;
					HX_STACK_LINE(194)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(194)
					_view->byteLength = byte_len;
					HX_STACK_LINE(194)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(194)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(194)
					_view->length = tmp20;
					HX_STACK_LINE(194)
					tmp9 = _view;
				}
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(197)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(167)
	::snow::api::buffers::ArrayBufferView view = tmp9;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(200)
	::snow::api::buffers::ArrayBufferView tmp10 = view;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(200)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_snow_api_buffers_Float32Array,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::subarray_snow_api_buffers_Int32Array( int begin,Dynamic end){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","subarray_snow_api_buffers_Int32Array",0xd047b27c,"snow.api.buffers.ArrayBufferView.subarray_snow_api_buffers_Int32Array","snow/api/buffers/ArrayBufferView.hx",160,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(162)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(162)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(163)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	int tmp2 = this->bytesPerElement;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(163)
	int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(163)
	int byte_len = tmp3;		HX_STACK_VAR(byte_len,"byte_len");
	HX_STACK_LINE(164)
	int tmp4 = begin;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(164)
	int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(164)
	int tmp7 = this->byteOffset;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(164)
	int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(164)
	int byte_offset = tmp8;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(167)
	::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int tmp10 = this->type;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(167)
		int _g = tmp10;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		int tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(167)
		switch( (int)(tmp11)){
			case (int)1: {
				HX_STACK_LINE(170)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(170)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(170)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(170)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(170)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(170)
					if ((tmp14)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(170)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(170)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(170)
					if ((tmp16)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(170)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(170)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(170)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(170)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(170)
					if ((tmp18)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(170)
					_view->buffer = _buffer;
					HX_STACK_LINE(170)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(170)
					_view->byteLength = byte_len;
					HX_STACK_LINE(170)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(170)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(170)
					_view->length = tmp20;
					HX_STACK_LINE(170)
					tmp9 = _view;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(173)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(173)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(173)
				{
					HX_STACK_LINE(173)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)2);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(173)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(173)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(173)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(173)
					if ((tmp14)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(173)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(173)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(173)
					if ((tmp16)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(173)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(173)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(173)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(173)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(173)
					if ((tmp18)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(173)
					_view->buffer = _buffer;
					HX_STACK_LINE(173)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(173)
					_view->byteLength = byte_len;
					HX_STACK_LINE(173)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(173)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(173)
					_view->length = tmp20;
					HX_STACK_LINE(173)
					tmp9 = _view;
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(176)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(176)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)3);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(176)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(176)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(176)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(176)
					if ((tmp14)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(176)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(176)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(176)
					if ((tmp16)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(176)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(176)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(176)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(176)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(176)
					if ((tmp18)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(176)
					_view->buffer = _buffer;
					HX_STACK_LINE(176)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(176)
					_view->byteLength = byte_len;
					HX_STACK_LINE(176)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(176)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(176)
					_view->length = tmp20;
					HX_STACK_LINE(176)
					tmp9 = _view;
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(179)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(179)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(179)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(179)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(179)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(179)
					if ((tmp14)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(179)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(179)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(179)
					if ((tmp16)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(179)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(179)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(179)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(179)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(179)
					if ((tmp18)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(179)
					_view->buffer = _buffer;
					HX_STACK_LINE(179)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(179)
					_view->byteLength = byte_len;
					HX_STACK_LINE(179)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					_view->length = tmp20;
					HX_STACK_LINE(179)
					tmp9 = _view;
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(182)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(182)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(182)
				{
					HX_STACK_LINE(182)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)5);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(182)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(182)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(182)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(182)
					if ((tmp14)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(182)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(182)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(182)
					if ((tmp16)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(182)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(182)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(182)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(182)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(182)
					if ((tmp18)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(182)
					_view->buffer = _buffer;
					HX_STACK_LINE(182)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(182)
					_view->byteLength = byte_len;
					HX_STACK_LINE(182)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(182)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(182)
					_view->length = tmp20;
					HX_STACK_LINE(182)
					tmp9 = _view;
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(185)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(185)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(185)
				{
					HX_STACK_LINE(185)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)6);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(185)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(185)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(185)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(185)
					if ((tmp14)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(185)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(185)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(185)
					if ((tmp16)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(185)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(185)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(185)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(185)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(185)
					if ((tmp18)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(185)
					_view->buffer = _buffer;
					HX_STACK_LINE(185)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(185)
					_view->byteLength = byte_len;
					HX_STACK_LINE(185)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(185)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(185)
					_view->length = tmp20;
					HX_STACK_LINE(185)
					tmp9 = _view;
				}
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(188)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(188)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(188)
				{
					HX_STACK_LINE(188)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)7);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(188)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(188)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(188)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(188)
					if ((tmp14)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(188)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(188)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(188)
					if ((tmp16)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(188)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(188)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(188)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(188)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(188)
					if ((tmp18)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(188)
					_view->buffer = _buffer;
					HX_STACK_LINE(188)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(188)
					_view->byteLength = byte_len;
					HX_STACK_LINE(188)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(188)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(188)
					_view->length = tmp20;
					HX_STACK_LINE(188)
					tmp9 = _view;
				}
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(191)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(191)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(191)
				{
					HX_STACK_LINE(191)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(191)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(191)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(191)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(191)
					if ((tmp14)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(191)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(191)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(191)
					if ((tmp16)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(191)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(191)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(191)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(191)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(191)
					if ((tmp18)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(191)
					_view->buffer = _buffer;
					HX_STACK_LINE(191)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(191)
					_view->byteLength = byte_len;
					HX_STACK_LINE(191)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(191)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(191)
					_view->length = tmp20;
					HX_STACK_LINE(191)
					tmp9 = _view;
				}
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(194)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(194)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(194)
				{
					HX_STACK_LINE(194)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)9);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(194)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(194)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(194)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(194)
					if ((tmp14)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(194)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(194)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(194)
					if ((tmp16)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(194)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(194)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(194)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(194)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(194)
					if ((tmp18)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(194)
					_view->buffer = _buffer;
					HX_STACK_LINE(194)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(194)
					_view->byteLength = byte_len;
					HX_STACK_LINE(194)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(194)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(194)
					_view->length = tmp20;
					HX_STACK_LINE(194)
					tmp9 = _view;
				}
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(197)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(167)
	::snow::api::buffers::ArrayBufferView view = tmp9;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(200)
	::snow::api::buffers::ArrayBufferView tmp10 = view;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(200)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_snow_api_buffers_Int32Array,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::subarray_snow_api_buffers_Int8Array( int begin,Dynamic end){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","subarray_snow_api_buffers_Int8Array",0x82aea67f,"snow.api.buffers.ArrayBufferView.subarray_snow_api_buffers_Int8Array","snow/api/buffers/ArrayBufferView.hx",160,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(162)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(162)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(163)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	int tmp2 = this->bytesPerElement;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(163)
	int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(163)
	int byte_len = tmp3;		HX_STACK_VAR(byte_len,"byte_len");
	HX_STACK_LINE(164)
	int tmp4 = begin;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(164)
	int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(164)
	int tmp7 = this->byteOffset;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(164)
	int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(164)
	int byte_offset = tmp8;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(167)
	::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int tmp10 = this->type;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(167)
		int _g = tmp10;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		int tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(167)
		switch( (int)(tmp11)){
			case (int)1: {
				HX_STACK_LINE(170)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(170)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(170)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(170)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(170)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(170)
					if ((tmp14)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(170)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(170)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(170)
					if ((tmp16)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(170)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(170)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(170)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(170)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(170)
					if ((tmp18)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(170)
					_view->buffer = _buffer;
					HX_STACK_LINE(170)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(170)
					_view->byteLength = byte_len;
					HX_STACK_LINE(170)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(170)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(170)
					_view->length = tmp20;
					HX_STACK_LINE(170)
					tmp9 = _view;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(173)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(173)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(173)
				{
					HX_STACK_LINE(173)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)2);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(173)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(173)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(173)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(173)
					if ((tmp14)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(173)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(173)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(173)
					if ((tmp16)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(173)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(173)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(173)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(173)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(173)
					if ((tmp18)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(173)
					_view->buffer = _buffer;
					HX_STACK_LINE(173)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(173)
					_view->byteLength = byte_len;
					HX_STACK_LINE(173)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(173)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(173)
					_view->length = tmp20;
					HX_STACK_LINE(173)
					tmp9 = _view;
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(176)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(176)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)3);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(176)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(176)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(176)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(176)
					if ((tmp14)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(176)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(176)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(176)
					if ((tmp16)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(176)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(176)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(176)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(176)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(176)
					if ((tmp18)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(176)
					_view->buffer = _buffer;
					HX_STACK_LINE(176)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(176)
					_view->byteLength = byte_len;
					HX_STACK_LINE(176)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(176)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(176)
					_view->length = tmp20;
					HX_STACK_LINE(176)
					tmp9 = _view;
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(179)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(179)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(179)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(179)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(179)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(179)
					if ((tmp14)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(179)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(179)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(179)
					if ((tmp16)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(179)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(179)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(179)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(179)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(179)
					if ((tmp18)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(179)
					_view->buffer = _buffer;
					HX_STACK_LINE(179)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(179)
					_view->byteLength = byte_len;
					HX_STACK_LINE(179)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					_view->length = tmp20;
					HX_STACK_LINE(179)
					tmp9 = _view;
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(182)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(182)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(182)
				{
					HX_STACK_LINE(182)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)5);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(182)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(182)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(182)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(182)
					if ((tmp14)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(182)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(182)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(182)
					if ((tmp16)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(182)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(182)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(182)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(182)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(182)
					if ((tmp18)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(182)
					_view->buffer = _buffer;
					HX_STACK_LINE(182)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(182)
					_view->byteLength = byte_len;
					HX_STACK_LINE(182)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(182)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(182)
					_view->length = tmp20;
					HX_STACK_LINE(182)
					tmp9 = _view;
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(185)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(185)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(185)
				{
					HX_STACK_LINE(185)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)6);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(185)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(185)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(185)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(185)
					if ((tmp14)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(185)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(185)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(185)
					if ((tmp16)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(185)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(185)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(185)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(185)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(185)
					if ((tmp18)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(185)
					_view->buffer = _buffer;
					HX_STACK_LINE(185)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(185)
					_view->byteLength = byte_len;
					HX_STACK_LINE(185)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(185)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(185)
					_view->length = tmp20;
					HX_STACK_LINE(185)
					tmp9 = _view;
				}
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(188)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(188)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(188)
				{
					HX_STACK_LINE(188)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)7);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(188)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(188)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(188)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(188)
					if ((tmp14)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(188)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(188)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(188)
					if ((tmp16)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(188)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(188)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(188)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(188)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(188)
					if ((tmp18)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(188)
					_view->buffer = _buffer;
					HX_STACK_LINE(188)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(188)
					_view->byteLength = byte_len;
					HX_STACK_LINE(188)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(188)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(188)
					_view->length = tmp20;
					HX_STACK_LINE(188)
					tmp9 = _view;
				}
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(191)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(191)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(191)
				{
					HX_STACK_LINE(191)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(191)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(191)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(191)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(191)
					if ((tmp14)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(191)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(191)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(191)
					if ((tmp16)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(191)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(191)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(191)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(191)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(191)
					if ((tmp18)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(191)
					_view->buffer = _buffer;
					HX_STACK_LINE(191)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(191)
					_view->byteLength = byte_len;
					HX_STACK_LINE(191)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(191)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(191)
					_view->length = tmp20;
					HX_STACK_LINE(191)
					tmp9 = _view;
				}
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(194)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(194)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(194)
				{
					HX_STACK_LINE(194)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)9);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(194)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(194)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(194)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(194)
					if ((tmp14)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(194)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(194)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(194)
					if ((tmp16)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(194)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(194)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(194)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(194)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(194)
					if ((tmp18)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(194)
					_view->buffer = _buffer;
					HX_STACK_LINE(194)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(194)
					_view->byteLength = byte_len;
					HX_STACK_LINE(194)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(194)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(194)
					_view->length = tmp20;
					HX_STACK_LINE(194)
					tmp9 = _view;
				}
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(197)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(167)
	::snow::api::buffers::ArrayBufferView view = tmp9;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(200)
	::snow::api::buffers::ArrayBufferView tmp10 = view;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(200)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_snow_api_buffers_Int8Array,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::subarray_snow_api_buffers_Uint8ClampedArray( int begin,Dynamic end){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","subarray_snow_api_buffers_Uint8ClampedArray",0x26c454ac,"snow.api.buffers.ArrayBufferView.subarray_snow_api_buffers_Uint8ClampedArray","snow/api/buffers/ArrayBufferView.hx",160,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(162)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(162)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(163)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	int tmp2 = this->bytesPerElement;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(163)
	int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(163)
	int byte_len = tmp3;		HX_STACK_VAR(byte_len,"byte_len");
	HX_STACK_LINE(164)
	int tmp4 = begin;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(164)
	int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(164)
	int tmp7 = this->byteOffset;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(164)
	int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(164)
	int byte_offset = tmp8;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(167)
	::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int tmp10 = this->type;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(167)
		int _g = tmp10;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		int tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(167)
		switch( (int)(tmp11)){
			case (int)1: {
				HX_STACK_LINE(170)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(170)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(170)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(170)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(170)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(170)
					if ((tmp14)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(170)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(170)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(170)
					if ((tmp16)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(170)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(170)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(170)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(170)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(170)
					if ((tmp18)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(170)
					_view->buffer = _buffer;
					HX_STACK_LINE(170)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(170)
					_view->byteLength = byte_len;
					HX_STACK_LINE(170)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(170)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(170)
					_view->length = tmp20;
					HX_STACK_LINE(170)
					tmp9 = _view;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(173)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(173)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(173)
				{
					HX_STACK_LINE(173)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)2);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(173)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(173)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(173)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(173)
					if ((tmp14)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(173)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(173)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(173)
					if ((tmp16)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(173)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(173)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(173)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(173)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(173)
					if ((tmp18)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(173)
					_view->buffer = _buffer;
					HX_STACK_LINE(173)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(173)
					_view->byteLength = byte_len;
					HX_STACK_LINE(173)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(173)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(173)
					_view->length = tmp20;
					HX_STACK_LINE(173)
					tmp9 = _view;
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(176)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(176)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)3);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(176)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(176)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(176)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(176)
					if ((tmp14)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(176)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(176)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(176)
					if ((tmp16)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(176)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(176)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(176)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(176)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(176)
					if ((tmp18)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(176)
					_view->buffer = _buffer;
					HX_STACK_LINE(176)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(176)
					_view->byteLength = byte_len;
					HX_STACK_LINE(176)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(176)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(176)
					_view->length = tmp20;
					HX_STACK_LINE(176)
					tmp9 = _view;
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(179)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(179)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(179)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(179)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(179)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(179)
					if ((tmp14)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(179)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(179)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(179)
					if ((tmp16)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(179)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(179)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(179)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(179)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(179)
					if ((tmp18)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(179)
					_view->buffer = _buffer;
					HX_STACK_LINE(179)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(179)
					_view->byteLength = byte_len;
					HX_STACK_LINE(179)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					_view->length = tmp20;
					HX_STACK_LINE(179)
					tmp9 = _view;
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(182)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(182)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(182)
				{
					HX_STACK_LINE(182)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)5);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(182)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(182)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(182)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(182)
					if ((tmp14)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(182)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(182)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(182)
					if ((tmp16)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(182)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(182)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(182)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(182)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(182)
					if ((tmp18)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(182)
					_view->buffer = _buffer;
					HX_STACK_LINE(182)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(182)
					_view->byteLength = byte_len;
					HX_STACK_LINE(182)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(182)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(182)
					_view->length = tmp20;
					HX_STACK_LINE(182)
					tmp9 = _view;
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(185)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(185)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(185)
				{
					HX_STACK_LINE(185)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)6);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(185)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(185)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(185)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(185)
					if ((tmp14)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(185)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(185)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(185)
					if ((tmp16)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(185)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(185)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(185)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(185)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(185)
					if ((tmp18)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(185)
					_view->buffer = _buffer;
					HX_STACK_LINE(185)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(185)
					_view->byteLength = byte_len;
					HX_STACK_LINE(185)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(185)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(185)
					_view->length = tmp20;
					HX_STACK_LINE(185)
					tmp9 = _view;
				}
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(188)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(188)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(188)
				{
					HX_STACK_LINE(188)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)7);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(188)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(188)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(188)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(188)
					if ((tmp14)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(188)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(188)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(188)
					if ((tmp16)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(188)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(188)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(188)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(188)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(188)
					if ((tmp18)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(188)
					_view->buffer = _buffer;
					HX_STACK_LINE(188)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(188)
					_view->byteLength = byte_len;
					HX_STACK_LINE(188)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(188)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(188)
					_view->length = tmp20;
					HX_STACK_LINE(188)
					tmp9 = _view;
				}
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(191)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(191)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(191)
				{
					HX_STACK_LINE(191)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(191)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(191)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(191)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(191)
					if ((tmp14)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(191)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(191)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(191)
					if ((tmp16)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(191)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(191)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(191)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(191)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(191)
					if ((tmp18)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(191)
					_view->buffer = _buffer;
					HX_STACK_LINE(191)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(191)
					_view->byteLength = byte_len;
					HX_STACK_LINE(191)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(191)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(191)
					_view->length = tmp20;
					HX_STACK_LINE(191)
					tmp9 = _view;
				}
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(194)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(194)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(194)
				{
					HX_STACK_LINE(194)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)9);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(194)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(194)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(194)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(194)
					if ((tmp14)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(194)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(194)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(194)
					if ((tmp16)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(194)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(194)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(194)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(194)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(194)
					if ((tmp18)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(194)
					_view->buffer = _buffer;
					HX_STACK_LINE(194)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(194)
					_view->byteLength = byte_len;
					HX_STACK_LINE(194)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(194)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(194)
					_view->length = tmp20;
					HX_STACK_LINE(194)
					tmp9 = _view;
				}
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(197)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(167)
	::snow::api::buffers::ArrayBufferView view = tmp9;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(200)
	::snow::api::buffers::ArrayBufferView tmp10 = view;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(200)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_snow_api_buffers_Uint8ClampedArray,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::subarray_snow_api_buffers_Int16Array( int begin,Dynamic end){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","subarray_snow_api_buffers_Int16Array",0x168a3676,"snow.api.buffers.ArrayBufferView.subarray_snow_api_buffers_Int16Array","snow/api/buffers/ArrayBufferView.hx",160,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(162)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(162)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(163)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	int tmp2 = this->bytesPerElement;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(163)
	int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(163)
	int byte_len = tmp3;		HX_STACK_VAR(byte_len,"byte_len");
	HX_STACK_LINE(164)
	int tmp4 = begin;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(164)
	int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(164)
	int tmp7 = this->byteOffset;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(164)
	int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(164)
	int byte_offset = tmp8;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(167)
	::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int tmp10 = this->type;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(167)
		int _g = tmp10;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		int tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(167)
		switch( (int)(tmp11)){
			case (int)1: {
				HX_STACK_LINE(170)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(170)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(170)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(170)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(170)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(170)
					if ((tmp14)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(170)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(170)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(170)
					if ((tmp16)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(170)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(170)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(170)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(170)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(170)
					if ((tmp18)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(170)
					_view->buffer = _buffer;
					HX_STACK_LINE(170)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(170)
					_view->byteLength = byte_len;
					HX_STACK_LINE(170)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(170)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(170)
					_view->length = tmp20;
					HX_STACK_LINE(170)
					tmp9 = _view;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(173)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(173)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(173)
				{
					HX_STACK_LINE(173)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)2);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(173)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(173)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(173)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(173)
					if ((tmp14)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(173)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(173)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(173)
					if ((tmp16)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(173)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(173)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(173)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(173)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(173)
					if ((tmp18)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(173)
					_view->buffer = _buffer;
					HX_STACK_LINE(173)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(173)
					_view->byteLength = byte_len;
					HX_STACK_LINE(173)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(173)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(173)
					_view->length = tmp20;
					HX_STACK_LINE(173)
					tmp9 = _view;
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(176)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(176)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)3);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(176)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(176)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(176)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(176)
					if ((tmp14)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(176)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(176)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(176)
					if ((tmp16)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(176)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(176)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(176)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(176)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(176)
					if ((tmp18)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(176)
					_view->buffer = _buffer;
					HX_STACK_LINE(176)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(176)
					_view->byteLength = byte_len;
					HX_STACK_LINE(176)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(176)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(176)
					_view->length = tmp20;
					HX_STACK_LINE(176)
					tmp9 = _view;
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(179)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(179)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(179)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(179)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(179)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(179)
					if ((tmp14)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(179)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(179)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(179)
					if ((tmp16)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(179)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(179)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(179)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(179)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(179)
					if ((tmp18)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(179)
					_view->buffer = _buffer;
					HX_STACK_LINE(179)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(179)
					_view->byteLength = byte_len;
					HX_STACK_LINE(179)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					_view->length = tmp20;
					HX_STACK_LINE(179)
					tmp9 = _view;
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(182)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(182)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(182)
				{
					HX_STACK_LINE(182)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)5);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(182)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(182)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(182)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(182)
					if ((tmp14)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(182)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(182)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(182)
					if ((tmp16)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(182)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(182)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(182)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(182)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(182)
					if ((tmp18)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(182)
					_view->buffer = _buffer;
					HX_STACK_LINE(182)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(182)
					_view->byteLength = byte_len;
					HX_STACK_LINE(182)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(182)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(182)
					_view->length = tmp20;
					HX_STACK_LINE(182)
					tmp9 = _view;
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(185)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(185)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(185)
				{
					HX_STACK_LINE(185)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)6);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(185)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(185)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(185)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(185)
					if ((tmp14)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(185)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(185)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(185)
					if ((tmp16)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(185)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(185)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(185)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(185)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(185)
					if ((tmp18)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(185)
					_view->buffer = _buffer;
					HX_STACK_LINE(185)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(185)
					_view->byteLength = byte_len;
					HX_STACK_LINE(185)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(185)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(185)
					_view->length = tmp20;
					HX_STACK_LINE(185)
					tmp9 = _view;
				}
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(188)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(188)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(188)
				{
					HX_STACK_LINE(188)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)7);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(188)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(188)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(188)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(188)
					if ((tmp14)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(188)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(188)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(188)
					if ((tmp16)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(188)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(188)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(188)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(188)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(188)
					if ((tmp18)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(188)
					_view->buffer = _buffer;
					HX_STACK_LINE(188)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(188)
					_view->byteLength = byte_len;
					HX_STACK_LINE(188)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(188)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(188)
					_view->length = tmp20;
					HX_STACK_LINE(188)
					tmp9 = _view;
				}
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(191)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(191)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(191)
				{
					HX_STACK_LINE(191)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(191)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(191)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(191)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(191)
					if ((tmp14)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(191)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(191)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(191)
					if ((tmp16)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(191)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(191)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(191)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(191)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(191)
					if ((tmp18)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(191)
					_view->buffer = _buffer;
					HX_STACK_LINE(191)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(191)
					_view->byteLength = byte_len;
					HX_STACK_LINE(191)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(191)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(191)
					_view->length = tmp20;
					HX_STACK_LINE(191)
					tmp9 = _view;
				}
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(194)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(194)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(194)
				{
					HX_STACK_LINE(194)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)9);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(194)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(194)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(194)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(194)
					if ((tmp14)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(194)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(194)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(194)
					if ((tmp16)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(194)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(194)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(194)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(194)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(194)
					if ((tmp18)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(194)
					_view->buffer = _buffer;
					HX_STACK_LINE(194)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(194)
					_view->byteLength = byte_len;
					HX_STACK_LINE(194)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(194)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(194)
					_view->length = tmp20;
					HX_STACK_LINE(194)
					tmp9 = _view;
				}
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(197)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(167)
	::snow::api::buffers::ArrayBufferView view = tmp9;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(200)
	::snow::api::buffers::ArrayBufferView tmp10 = view;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(200)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_snow_api_buffers_Int16Array,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::subarray_snow_api_buffers_Uint16Array( int begin,Dynamic end){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","subarray_snow_api_buffers_Uint16Array",0x857ba3e9,"snow.api.buffers.ArrayBufferView.subarray_snow_api_buffers_Uint16Array","snow/api/buffers/ArrayBufferView.hx",160,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(162)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(162)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(163)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	int tmp2 = this->bytesPerElement;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(163)
	int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(163)
	int byte_len = tmp3;		HX_STACK_VAR(byte_len,"byte_len");
	HX_STACK_LINE(164)
	int tmp4 = begin;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(164)
	int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(164)
	int tmp7 = this->byteOffset;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(164)
	int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(164)
	int byte_offset = tmp8;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(167)
	::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int tmp10 = this->type;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(167)
		int _g = tmp10;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		int tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(167)
		switch( (int)(tmp11)){
			case (int)1: {
				HX_STACK_LINE(170)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(170)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(170)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(170)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(170)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(170)
					if ((tmp14)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(170)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(170)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(170)
					if ((tmp16)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(170)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(170)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(170)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(170)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(170)
					if ((tmp18)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(170)
					_view->buffer = _buffer;
					HX_STACK_LINE(170)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(170)
					_view->byteLength = byte_len;
					HX_STACK_LINE(170)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(170)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(170)
					_view->length = tmp20;
					HX_STACK_LINE(170)
					tmp9 = _view;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(173)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(173)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(173)
				{
					HX_STACK_LINE(173)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)2);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(173)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(173)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(173)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(173)
					if ((tmp14)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(173)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(173)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(173)
					if ((tmp16)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(173)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(173)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(173)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(173)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(173)
					if ((tmp18)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(173)
					_view->buffer = _buffer;
					HX_STACK_LINE(173)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(173)
					_view->byteLength = byte_len;
					HX_STACK_LINE(173)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(173)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(173)
					_view->length = tmp20;
					HX_STACK_LINE(173)
					tmp9 = _view;
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(176)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(176)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)3);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(176)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(176)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(176)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(176)
					if ((tmp14)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(176)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(176)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(176)
					if ((tmp16)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(176)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(176)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(176)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(176)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(176)
					if ((tmp18)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(176)
					_view->buffer = _buffer;
					HX_STACK_LINE(176)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(176)
					_view->byteLength = byte_len;
					HX_STACK_LINE(176)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(176)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(176)
					_view->length = tmp20;
					HX_STACK_LINE(176)
					tmp9 = _view;
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(179)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(179)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(179)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(179)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(179)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(179)
					if ((tmp14)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(179)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(179)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(179)
					if ((tmp16)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(179)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(179)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(179)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(179)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(179)
					if ((tmp18)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(179)
					_view->buffer = _buffer;
					HX_STACK_LINE(179)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(179)
					_view->byteLength = byte_len;
					HX_STACK_LINE(179)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					_view->length = tmp20;
					HX_STACK_LINE(179)
					tmp9 = _view;
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(182)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(182)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(182)
				{
					HX_STACK_LINE(182)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)5);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(182)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(182)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(182)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(182)
					if ((tmp14)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(182)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(182)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(182)
					if ((tmp16)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(182)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(182)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(182)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(182)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(182)
					if ((tmp18)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(182)
					_view->buffer = _buffer;
					HX_STACK_LINE(182)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(182)
					_view->byteLength = byte_len;
					HX_STACK_LINE(182)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(182)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(182)
					_view->length = tmp20;
					HX_STACK_LINE(182)
					tmp9 = _view;
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(185)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(185)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(185)
				{
					HX_STACK_LINE(185)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)6);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(185)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(185)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(185)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(185)
					if ((tmp14)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(185)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(185)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(185)
					if ((tmp16)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(185)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(185)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(185)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(185)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(185)
					if ((tmp18)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(185)
					_view->buffer = _buffer;
					HX_STACK_LINE(185)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(185)
					_view->byteLength = byte_len;
					HX_STACK_LINE(185)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(185)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(185)
					_view->length = tmp20;
					HX_STACK_LINE(185)
					tmp9 = _view;
				}
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(188)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(188)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(188)
				{
					HX_STACK_LINE(188)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)7);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(188)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(188)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(188)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(188)
					if ((tmp14)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(188)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(188)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(188)
					if ((tmp16)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(188)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(188)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(188)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(188)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(188)
					if ((tmp18)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(188)
					_view->buffer = _buffer;
					HX_STACK_LINE(188)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(188)
					_view->byteLength = byte_len;
					HX_STACK_LINE(188)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(188)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(188)
					_view->length = tmp20;
					HX_STACK_LINE(188)
					tmp9 = _view;
				}
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(191)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(191)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(191)
				{
					HX_STACK_LINE(191)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(191)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(191)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(191)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(191)
					if ((tmp14)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(191)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(191)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(191)
					if ((tmp16)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(191)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(191)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(191)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(191)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(191)
					if ((tmp18)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(191)
					_view->buffer = _buffer;
					HX_STACK_LINE(191)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(191)
					_view->byteLength = byte_len;
					HX_STACK_LINE(191)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(191)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(191)
					_view->length = tmp20;
					HX_STACK_LINE(191)
					tmp9 = _view;
				}
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(194)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(194)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(194)
				{
					HX_STACK_LINE(194)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)9);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(194)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(194)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(194)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(194)
					if ((tmp14)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(194)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(194)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(194)
					if ((tmp16)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(194)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(194)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(194)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(194)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(194)
					if ((tmp18)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(194)
					_view->buffer = _buffer;
					HX_STACK_LINE(194)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(194)
					_view->byteLength = byte_len;
					HX_STACK_LINE(194)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(194)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(194)
					_view->length = tmp20;
					HX_STACK_LINE(194)
					tmp9 = _view;
				}
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(197)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(167)
	::snow::api::buffers::ArrayBufferView view = tmp9;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(200)
	::snow::api::buffers::ArrayBufferView tmp10 = view;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(200)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_snow_api_buffers_Uint16Array,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::subarray_snow_api_buffers_Uint32Array( int begin,Dynamic end){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","subarray_snow_api_buffers_Uint32Array",0x3f391fef,"snow.api.buffers.ArrayBufferView.subarray_snow_api_buffers_Uint32Array","snow/api/buffers/ArrayBufferView.hx",160,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(162)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(162)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(163)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	int tmp2 = this->bytesPerElement;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(163)
	int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(163)
	int byte_len = tmp3;		HX_STACK_VAR(byte_len,"byte_len");
	HX_STACK_LINE(164)
	int tmp4 = begin;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(164)
	int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(164)
	int tmp7 = this->byteOffset;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(164)
	int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(164)
	int byte_offset = tmp8;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(167)
	::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int tmp10 = this->type;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(167)
		int _g = tmp10;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		int tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(167)
		switch( (int)(tmp11)){
			case (int)1: {
				HX_STACK_LINE(170)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(170)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(170)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(170)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(170)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(170)
					if ((tmp14)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(170)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(170)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(170)
					if ((tmp16)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(170)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(170)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(170)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(170)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(170)
					if ((tmp18)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(170)
					_view->buffer = _buffer;
					HX_STACK_LINE(170)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(170)
					_view->byteLength = byte_len;
					HX_STACK_LINE(170)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(170)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(170)
					_view->length = tmp20;
					HX_STACK_LINE(170)
					tmp9 = _view;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(173)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(173)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(173)
				{
					HX_STACK_LINE(173)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)2);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(173)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(173)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(173)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(173)
					if ((tmp14)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(173)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(173)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(173)
					if ((tmp16)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(173)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(173)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(173)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(173)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(173)
					if ((tmp18)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(173)
					_view->buffer = _buffer;
					HX_STACK_LINE(173)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(173)
					_view->byteLength = byte_len;
					HX_STACK_LINE(173)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(173)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(173)
					_view->length = tmp20;
					HX_STACK_LINE(173)
					tmp9 = _view;
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(176)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(176)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)3);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(176)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(176)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(176)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(176)
					if ((tmp14)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(176)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(176)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(176)
					if ((tmp16)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(176)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(176)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(176)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(176)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(176)
					if ((tmp18)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(176)
					_view->buffer = _buffer;
					HX_STACK_LINE(176)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(176)
					_view->byteLength = byte_len;
					HX_STACK_LINE(176)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(176)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(176)
					_view->length = tmp20;
					HX_STACK_LINE(176)
					tmp9 = _view;
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(179)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(179)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(179)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(179)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(179)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(179)
					if ((tmp14)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(179)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(179)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(179)
					if ((tmp16)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(179)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(179)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(179)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(179)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(179)
					if ((tmp18)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(179)
					_view->buffer = _buffer;
					HX_STACK_LINE(179)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(179)
					_view->byteLength = byte_len;
					HX_STACK_LINE(179)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					_view->length = tmp20;
					HX_STACK_LINE(179)
					tmp9 = _view;
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(182)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(182)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(182)
				{
					HX_STACK_LINE(182)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)5);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(182)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(182)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(182)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(182)
					if ((tmp14)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(182)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(182)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(182)
					if ((tmp16)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(182)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(182)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(182)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(182)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(182)
					if ((tmp18)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(182)
					_view->buffer = _buffer;
					HX_STACK_LINE(182)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(182)
					_view->byteLength = byte_len;
					HX_STACK_LINE(182)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(182)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(182)
					_view->length = tmp20;
					HX_STACK_LINE(182)
					tmp9 = _view;
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(185)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(185)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(185)
				{
					HX_STACK_LINE(185)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)6);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(185)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(185)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(185)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(185)
					if ((tmp14)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(185)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(185)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(185)
					if ((tmp16)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(185)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(185)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(185)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(185)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(185)
					if ((tmp18)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(185)
					_view->buffer = _buffer;
					HX_STACK_LINE(185)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(185)
					_view->byteLength = byte_len;
					HX_STACK_LINE(185)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(185)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(185)
					_view->length = tmp20;
					HX_STACK_LINE(185)
					tmp9 = _view;
				}
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(188)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(188)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(188)
				{
					HX_STACK_LINE(188)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)7);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(188)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(188)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(188)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(188)
					if ((tmp14)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(188)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(188)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(188)
					if ((tmp16)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(188)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(188)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(188)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(188)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(188)
					if ((tmp18)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(188)
					_view->buffer = _buffer;
					HX_STACK_LINE(188)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(188)
					_view->byteLength = byte_len;
					HX_STACK_LINE(188)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(188)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(188)
					_view->length = tmp20;
					HX_STACK_LINE(188)
					tmp9 = _view;
				}
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(191)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(191)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(191)
				{
					HX_STACK_LINE(191)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(191)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(191)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(191)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(191)
					if ((tmp14)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(191)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(191)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(191)
					if ((tmp16)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(191)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(191)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(191)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(191)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(191)
					if ((tmp18)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(191)
					_view->buffer = _buffer;
					HX_STACK_LINE(191)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(191)
					_view->byteLength = byte_len;
					HX_STACK_LINE(191)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(191)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(191)
					_view->length = tmp20;
					HX_STACK_LINE(191)
					tmp9 = _view;
				}
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(194)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(194)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(194)
				{
					HX_STACK_LINE(194)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)9);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(194)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(194)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(194)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(194)
					if ((tmp14)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(194)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(194)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(194)
					if ((tmp16)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(194)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(194)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(194)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(194)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(194)
					if ((tmp18)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(194)
					_view->buffer = _buffer;
					HX_STACK_LINE(194)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(194)
					_view->byteLength = byte_len;
					HX_STACK_LINE(194)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(194)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(194)
					_view->length = tmp20;
					HX_STACK_LINE(194)
					tmp9 = _view;
				}
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(197)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(167)
	::snow::api::buffers::ArrayBufferView view = tmp9;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(200)
	::snow::api::buffers::ArrayBufferView tmp10 = view;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(200)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_snow_api_buffers_Uint32Array,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::subarray_snow_api_buffers_Float64Array( int begin,Dynamic end){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","subarray_snow_api_buffers_Float64Array",0x9671dcb0,"snow.api.buffers.ArrayBufferView.subarray_snow_api_buffers_Float64Array","snow/api/buffers/ArrayBufferView.hx",160,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(162)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(162)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(163)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	int tmp2 = this->bytesPerElement;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(163)
	int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(163)
	int byte_len = tmp3;		HX_STACK_VAR(byte_len,"byte_len");
	HX_STACK_LINE(164)
	int tmp4 = begin;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(164)
	int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(164)
	int tmp7 = this->byteOffset;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(164)
	int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(164)
	int byte_offset = tmp8;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(167)
	::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int tmp10 = this->type;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(167)
		int _g = tmp10;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		int tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(167)
		switch( (int)(tmp11)){
			case (int)1: {
				HX_STACK_LINE(170)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(170)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(170)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(170)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(170)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(170)
					if ((tmp14)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(170)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(170)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(170)
					if ((tmp16)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(170)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(170)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(170)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(170)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(170)
					if ((tmp18)){
						HX_STACK_LINE(170)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(170)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(170)
					_view->buffer = _buffer;
					HX_STACK_LINE(170)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(170)
					_view->byteLength = byte_len;
					HX_STACK_LINE(170)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(170)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(170)
					_view->length = tmp20;
					HX_STACK_LINE(170)
					tmp9 = _view;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(173)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(173)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(173)
				{
					HX_STACK_LINE(173)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)2);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(173)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(173)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(173)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(173)
					if ((tmp14)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(173)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(173)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(173)
					if ((tmp16)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(173)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(173)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(173)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(173)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(173)
					if ((tmp18)){
						HX_STACK_LINE(173)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(173)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(173)
					_view->buffer = _buffer;
					HX_STACK_LINE(173)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(173)
					_view->byteLength = byte_len;
					HX_STACK_LINE(173)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(173)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(173)
					_view->length = tmp20;
					HX_STACK_LINE(173)
					tmp9 = _view;
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(176)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(176)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)3);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(176)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(176)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(176)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(176)
					if ((tmp14)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(176)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(176)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(176)
					if ((tmp16)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(176)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(176)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(176)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(176)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(176)
					if ((tmp18)){
						HX_STACK_LINE(176)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(176)
					_view->buffer = _buffer;
					HX_STACK_LINE(176)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(176)
					_view->byteLength = byte_len;
					HX_STACK_LINE(176)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(176)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(176)
					_view->length = tmp20;
					HX_STACK_LINE(176)
					tmp9 = _view;
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(179)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(179)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(179)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(179)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(179)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(179)
					if ((tmp14)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(179)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(179)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(179)
					if ((tmp16)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(179)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(179)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(179)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(179)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(179)
					if ((tmp18)){
						HX_STACK_LINE(179)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(179)
					_view->buffer = _buffer;
					HX_STACK_LINE(179)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(179)
					_view->byteLength = byte_len;
					HX_STACK_LINE(179)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					_view->length = tmp20;
					HX_STACK_LINE(179)
					tmp9 = _view;
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(182)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(182)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(182)
				{
					HX_STACK_LINE(182)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)5);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(182)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(182)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(182)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(182)
					if ((tmp14)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(182)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(182)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(182)
					if ((tmp16)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(182)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(182)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(182)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(182)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(182)
					if ((tmp18)){
						HX_STACK_LINE(182)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(182)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(182)
					_view->buffer = _buffer;
					HX_STACK_LINE(182)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(182)
					_view->byteLength = byte_len;
					HX_STACK_LINE(182)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(182)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(182)
					_view->length = tmp20;
					HX_STACK_LINE(182)
					tmp9 = _view;
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(185)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(185)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(185)
				{
					HX_STACK_LINE(185)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)6);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(185)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(185)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(185)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(185)
					if ((tmp14)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(185)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(185)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(185)
					if ((tmp16)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(185)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(185)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(185)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(185)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(185)
					if ((tmp18)){
						HX_STACK_LINE(185)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(185)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(185)
					_view->buffer = _buffer;
					HX_STACK_LINE(185)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(185)
					_view->byteLength = byte_len;
					HX_STACK_LINE(185)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(185)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(185)
					_view->length = tmp20;
					HX_STACK_LINE(185)
					tmp9 = _view;
				}
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(188)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(188)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(188)
				{
					HX_STACK_LINE(188)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)7);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(188)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(188)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(188)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(188)
					if ((tmp14)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(188)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(188)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(188)
					if ((tmp16)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(188)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(188)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(188)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(188)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(188)
					if ((tmp18)){
						HX_STACK_LINE(188)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(188)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(188)
					_view->buffer = _buffer;
					HX_STACK_LINE(188)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(188)
					_view->byteLength = byte_len;
					HX_STACK_LINE(188)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(188)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(188)
					_view->length = tmp20;
					HX_STACK_LINE(188)
					tmp9 = _view;
				}
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(191)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(191)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(191)
				{
					HX_STACK_LINE(191)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(191)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(191)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(191)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(191)
					if ((tmp14)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(191)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(191)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(191)
					if ((tmp16)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(191)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(191)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(191)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(191)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(191)
					if ((tmp18)){
						HX_STACK_LINE(191)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(191)
					_view->buffer = _buffer;
					HX_STACK_LINE(191)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(191)
					_view->byteLength = byte_len;
					HX_STACK_LINE(191)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(191)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(191)
					_view->length = tmp20;
					HX_STACK_LINE(191)
					tmp9 = _view;
				}
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(194)
				Array< unsigned char > tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(194)
				Array< unsigned char > _buffer = tmp12;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(194)
				{
					HX_STACK_LINE(194)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)9);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(194)
					::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(194)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(194)
					bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(194)
					if ((tmp14)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(194)
					int tmp15 = hx::Mod(byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(194)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(194)
					if ((tmp16)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(194)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(194)
					int tmp17 = (byte_offset + byte_len);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(194)
					int _new_range = tmp17;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(194)
					bool tmp18 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(194)
					if ((tmp18)){
						HX_STACK_LINE(194)
						::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(194)
					_view->buffer = _buffer;
					HX_STACK_LINE(194)
					_view->byteOffset = byte_offset;
					HX_STACK_LINE(194)
					_view->byteLength = byte_len;
					HX_STACK_LINE(194)
					Float tmp19 = (Float(byte_len) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(194)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(194)
					_view->length = tmp20;
					HX_STACK_LINE(194)
					tmp9 = _view;
				}
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(197)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(167)
	::snow::api::buffers::ArrayBufferView view = tmp9;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(200)
	::snow::api::buffers::ArrayBufferView tmp10 = view;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(200)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_snow_api_buffers_Float64Array,return )

Void ArrayBufferView_obj::set( ::snow::api::buffers::ArrayBufferView view,Array< Float > array,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","set",0x3a2ee158,"snow.api.buffers.ArrayBufferView.set","snow/api/buffers/ArrayBufferView.hx",129,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(view,"view")
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(131)
		bool tmp = (view != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		if ((tmp)){
			HX_STACK_LINE(131)
			tmp1 = (array == null());
		}
		else{
			HX_STACK_LINE(131)
			tmp1 = false;
		}
		HX_STACK_LINE(131)
		if ((tmp1)){
			HX_STACK_LINE(132)
			int tmp2 = offset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(132)
			int tmp3 = this->bytesPerElement;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(132)
			Array< unsigned char > tmp5 = view->buffer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(132)
			int tmp6 = view->byteOffset;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(132)
			int tmp7 = view->byteLength;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(132)
			this->buffer->blit(tmp4,tmp5,tmp6,tmp7);
		}
		else{
			HX_STACK_LINE(133)
			bool tmp2 = (array != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(133)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(133)
			if ((tmp2)){
				HX_STACK_LINE(133)
				tmp3 = (view == null());
			}
			else{
				HX_STACK_LINE(133)
				tmp3 = false;
			}
			HX_STACK_LINE(133)
			if ((tmp3)){
				HX_STACK_LINE(134)
				int tmp4 = offset;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(134)
				this->copyFromArray(array,tmp4);
			}
			else{
				HX_STACK_LINE(136)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid .set call. either view, or array must be not-null.","\x64","\xba","\xb7","\x6c"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferView_obj,set,(void))

Void ArrayBufferView_obj::cloneBuffer( Array< unsigned char > src,hx::Null< int >  __o_srcByteOffset){
int srcByteOffset = __o_srcByteOffset.Default(0);
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","cloneBuffer",0xdead93f3,"snow.api.buffers.ArrayBufferView.cloneBuffer","snow/api/buffers/ArrayBufferView.hx",145,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(src,"src")
	HX_STACK_ARG(srcByteOffset,"srcByteOffset")
{
		HX_STACK_LINE(147)
		int srcLength = src->length;		HX_STACK_VAR(srcLength,"srcLength");
		HX_STACK_LINE(148)
		int tmp = (srcLength - srcByteOffset);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		int cloneLength = tmp;		HX_STACK_VAR(cloneLength,"cloneLength");
		HX_STACK_LINE(150)
		Array< unsigned char > tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		{
			HX_STACK_LINE(150)
			Array< unsigned char > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(150)
			this1 = Array_obj< unsigned char >::__new();
			HX_STACK_LINE(150)
			bool tmp2 = (cloneLength > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(150)
			if ((tmp2)){
				HX_STACK_LINE(150)
				int tmp3 = (cloneLength - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(150)
				this1[tmp3] = (int)0;
			}
			HX_STACK_LINE(150)
			tmp1 = this1;
		}
		HX_STACK_LINE(150)
		this->buffer = tmp1;
		HX_STACK_LINE(152)
		{
			HX_STACK_LINE(152)
			Array< unsigned char > tmp2 = src;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(152)
			int tmp3 = srcByteOffset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(152)
			int tmp4 = cloneLength;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(152)
			this->buffer->blit((int)0,tmp2,tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,cloneBuffer,(void))

int ArrayBufferView_obj::bytesForType( int type){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","bytesForType",0xd7a3c4c2,"snow.api.buffers.ArrayBufferView.bytesForType","snow/api/buffers/ArrayBufferView.hx",205,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(208)
	int tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	switch( (int)(tmp)){
		case (int)1: {
			HX_STACK_LINE(211)
			tmp1 = (int)1;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(214)
			tmp1 = (int)1;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(217)
			tmp1 = (int)1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(220)
			tmp1 = (int)2;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(223)
			tmp1 = (int)2;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(226)
			tmp1 = (int)4;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(229)
			tmp1 = (int)4;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(232)
			tmp1 = (int)4;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(235)
			tmp1 = (int)8;
		}
		;break;
		default: {
			HX_STACK_LINE(237)
			tmp1 = (int)1;
		}
	}
	HX_STACK_LINE(207)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,bytesForType,return )

::String ArrayBufferView_obj::toString( ){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","toString",0x58111736,"snow.api.buffers.ArrayBufferView.toString","snow/api/buffers/ArrayBufferView.hx",243,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(246)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(246)
	{
		HX_STACK_LINE(246)
		int tmp1 = this->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(246)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(246)
		int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(246)
		switch( (int)(tmp2)){
			case (int)1: {
				HX_STACK_LINE(247)
				tmp = HX_HCSTRING("Int8Array","\x50","\xdc","\xf6","\xae");
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(248)
				tmp = HX_HCSTRING("Uint8Array","\x7b","\xc9","\xdd","\xe5");
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(249)
				tmp = HX_HCSTRING("Uint8ClampedArray","\x7d","\x43","\xe0","\x0c");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(250)
				tmp = HX_HCSTRING("Int16Array","\x85","\x17","\x71","\xa9");
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(251)
				tmp = HX_HCSTRING("Uint16Array","\xfa","\xaf","\x99","\x7c");
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(252)
				tmp = HX_HCSTRING("Int32Array","\x8b","\x93","\x2e","\x63");
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(253)
				tmp = HX_HCSTRING("Uint32Array","\x00","\x2c","\x57","\x36");
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(254)
				tmp = HX_HCSTRING("Float32Array","\x7e","\x42","\x27","\x90");
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(255)
				tmp = HX_HCSTRING("Float64Array","\x7f","\x5f","\x9e","\xd9");
			}
			;break;
			default: {
				HX_STACK_LINE(256)
				tmp = HX_HCSTRING("ArrayBufferView","\x5e","\x6e","\x84","\xfd");
			}
		}
	}
	HX_STACK_LINE(246)
	::String name = tmp;		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(259)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(259)
	int tmp2 = this->byteLength;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(259)
	::String tmp3 = (HX_HCSTRING(" [byteLength:","\x11","\xd6","\xa9","\xca") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(259)
	::String tmp4 = (tmp3 + HX_HCSTRING(", length:","\xa0","\x04","\x67","\xef"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(259)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(259)
	::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(259)
	::String tmp7 = (tmp6 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(259)
	::String tmp8 = (tmp1 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(259)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,toString,return )

int ArrayBufferView_obj::toByteLength( int elemCount){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","toByteLength",0x3374a2f3,"snow.api.buffers.ArrayBufferView.toByteLength","snow/api/buffers/ArrayBufferView.hx",264,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(elemCount,"elemCount")
	HX_STACK_LINE(266)
	int tmp = elemCount;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	int tmp1 = this->bytesPerElement;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(266)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(266)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,toByteLength,return )

Void ArrayBufferView_obj::copyFromArray( Array< Float > array,Dynamic __o_offset){
Dynamic offset = __o_offset.Default(0);
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","copyFromArray",0x597da290,"snow.api.buffers.ArrayBufferView.copyFromArray","snow/api/buffers/ArrayBufferView.hx",273,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(276)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(276)
		int len = array->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(278)
		{
			HX_STACK_LINE(278)
			int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(278)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(278)
			int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(278)
			switch( (int)(tmp1)){
				case (int)1: {
					HX_STACK_LINE(280)
					while((true)){
						HX_STACK_LINE(280)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(280)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(280)
						if ((tmp3)){
							HX_STACK_LINE(280)
							break;
						}
						HX_STACK_LINE(281)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(281)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(281)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(281)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(282)
						{
							HX_STACK_LINE(283)
							Float tmp7 = array->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(283)
							int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(283)
							int value = tmp8;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(282)
							::__hxcpp_memory_set_byte(this->buffer,pos,value);
						}
						HX_STACK_LINE(284)
						++(i);
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(287)
					while((true)){
						HX_STACK_LINE(287)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(287)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(287)
						if ((tmp3)){
							HX_STACK_LINE(287)
							break;
						}
						HX_STACK_LINE(288)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(288)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(288)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(288)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(289)
						Array< unsigned char > tmp7 = this->buffer;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(290)
						int tmp8 = pos;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(290)
						Float tmp9 = array->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(290)
						int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(289)
						::snow::api::buffers::ArrayBufferIO_obj::setInt16(tmp7,tmp8,tmp10);
						HX_STACK_LINE(291)
						++(i);
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(294)
					while((true)){
						HX_STACK_LINE(294)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(294)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(294)
						if ((tmp3)){
							HX_STACK_LINE(294)
							break;
						}
						HX_STACK_LINE(295)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(295)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(295)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(295)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(296)
						{
							HX_STACK_LINE(297)
							Float tmp7 = array->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(297)
							int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(297)
							int value = tmp8;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(296)
							::__hxcpp_memory_set_i32(this->buffer,pos,value);
						}
						HX_STACK_LINE(298)
						++(i);
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(301)
					while((true)){
						HX_STACK_LINE(301)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(301)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(301)
						if ((tmp3)){
							HX_STACK_LINE(301)
							break;
						}
						HX_STACK_LINE(302)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(302)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(302)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(302)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(303)
						{
							HX_STACK_LINE(304)
							Float tmp7 = array->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(304)
							int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(304)
							int value = tmp8;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(303)
							::__hxcpp_memory_set_byte(this->buffer,pos,value);
						}
						HX_STACK_LINE(305)
						++(i);
					}
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(308)
					while((true)){
						HX_STACK_LINE(308)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(308)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(308)
						if ((tmp3)){
							HX_STACK_LINE(308)
							break;
						}
						HX_STACK_LINE(309)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(309)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(309)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(309)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(310)
						{
							HX_STACK_LINE(311)
							Float tmp7 = array->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(311)
							int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(311)
							int value = tmp8;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(310)
							::__hxcpp_memory_set_ui16(this->buffer,pos,value);
						}
						HX_STACK_LINE(312)
						++(i);
					}
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(315)
					while((true)){
						HX_STACK_LINE(315)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(315)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(315)
						if ((tmp3)){
							HX_STACK_LINE(315)
							break;
						}
						HX_STACK_LINE(316)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(316)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(316)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(316)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(317)
						{
							HX_STACK_LINE(318)
							Float tmp7 = array->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(318)
							int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(318)
							int value = tmp8;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(317)
							::__hxcpp_memory_set_ui32(this->buffer,pos,value);
						}
						HX_STACK_LINE(319)
						++(i);
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(322)
					while((true)){
						HX_STACK_LINE(322)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(322)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(322)
						if ((tmp3)){
							HX_STACK_LINE(322)
							break;
						}
						HX_STACK_LINE(323)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(323)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(323)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(323)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(324)
						{
							HX_STACK_LINE(325)
							Float tmp7 = array->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(325)
							int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(325)
							int value = tmp8;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(324)
							{
								HX_STACK_LINE(324)
								int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(324)
								{
									HX_STACK_LINE(324)
									Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(324)
									{
										HX_STACK_LINE(324)
										int _int = value;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(324)
										bool tmp11 = (_int < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(324)
										if ((tmp11)){
											HX_STACK_LINE(324)
											tmp10 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(324)
											tmp10 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(324)
									int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(324)
									int _out = tmp11;		HX_STACK_VAR(_out,"_out");
									HX_STACK_LINE(324)
									bool tmp12 = (_out > (int)255);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(324)
									int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(324)
									if ((tmp12)){
										HX_STACK_LINE(324)
										tmp13 = (int)255;
									}
									else{
										HX_STACK_LINE(324)
										tmp13 = _out;
									}
									HX_STACK_LINE(324)
									_out = tmp13;
									HX_STACK_LINE(324)
									bool tmp14 = (_out < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(324)
									if ((tmp14)){
										HX_STACK_LINE(324)
										tmp9 = (int)0;
									}
									else{
										HX_STACK_LINE(324)
										tmp9 = _out;
									}
								}
								HX_STACK_LINE(324)
								int value1 = tmp9;		HX_STACK_VAR(value1,"value1");
								HX_STACK_LINE(324)
								::__hxcpp_memory_set_byte(this->buffer,pos,value1);
							}
						}
						HX_STACK_LINE(326)
						++(i);
					}
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(329)
					while((true)){
						HX_STACK_LINE(329)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(329)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(329)
						if ((tmp3)){
							HX_STACK_LINE(329)
							break;
						}
						HX_STACK_LINE(330)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(330)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(330)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(330)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(331)
						::__hxcpp_memory_set_float(this->buffer,pos,array->__get(i));
						HX_STACK_LINE(333)
						++(i);
					}
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(336)
					while((true)){
						HX_STACK_LINE(336)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(336)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(336)
						if ((tmp3)){
							HX_STACK_LINE(336)
							break;
						}
						HX_STACK_LINE(337)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(337)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(337)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(337)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(338)
						::__hxcpp_memory_set_double(this->buffer,pos,array->__get(i));
						HX_STACK_LINE(340)
						++(i);
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(344)
					HX_STACK_DO_THROW(HX_HCSTRING("copyFromArray on a base type ArrayBuffer","\xe8","\x01","\x1a","\xe2"));
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,copyFromArray,(void))

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::fromElements( int _type,int _elements){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","fromElements",0x3e64654b,"snow.api.buffers.ArrayBufferView.fromElements","snow/api/buffers/ArrayBufferView.hx",36,0xa074815d)
	HX_STACK_ARG(_type,"_type")
	HX_STACK_ARG(_elements,"_elements")
	HX_STACK_LINE(38)
	bool tmp = (_elements < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	if ((tmp)){
		HX_STACK_LINE(38)
		_elements = (int)0;
	}
	HX_STACK_LINE(42)
	::snow::api::buffers::ArrayBufferView tmp1 = ::snow::api::buffers::ArrayBufferView_obj::__new(_type);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	::snow::api::buffers::ArrayBufferView _view = tmp1;		HX_STACK_VAR(_view,"_view");
	HX_STACK_LINE(43)
	int tmp2 = (_elements * _view->bytesPerElement);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	int _bytelen = tmp2;		HX_STACK_VAR(_bytelen,"_bytelen");
	HX_STACK_LINE(45)
	_view->byteOffset = (int)0;
	HX_STACK_LINE(46)
	_view->byteLength = _bytelen;
	HX_STACK_LINE(47)
	Array< unsigned char > tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		Array< unsigned char > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(47)
		this1 = Array_obj< unsigned char >::__new();
		HX_STACK_LINE(47)
		bool tmp4 = (_bytelen > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		if ((tmp4)){
			HX_STACK_LINE(47)
			int tmp5 = (_bytelen - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(47)
			this1[tmp5] = (int)0;
		}
		HX_STACK_LINE(47)
		tmp3 = this1;
	}
	HX_STACK_LINE(47)
	_view->buffer = tmp3;
	HX_STACK_LINE(48)
	_view->length = _elements;
	HX_STACK_LINE(50)
	::snow::api::buffers::ArrayBufferView tmp4 = _view;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(50)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,fromElements,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::fromView( int _type,::snow::api::buffers::ArrayBufferView _other){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","fromView",0xcbbd4779,"snow.api.buffers.ArrayBufferView.fromView","snow/api/buffers/ArrayBufferView.hx",56,0xa074815d)
	HX_STACK_ARG(_type,"_type")
	HX_STACK_ARG(_other,"_other")
	HX_STACK_LINE(58)
	int _src_type = _other->type;		HX_STACK_VAR(_src_type,"_src_type");
	HX_STACK_LINE(59)
	Array< unsigned char > _src_data = _other->buffer;		HX_STACK_VAR(_src_data,"_src_data");
	HX_STACK_LINE(60)
	int _src_length = _other->length;		HX_STACK_VAR(_src_length,"_src_length");
	HX_STACK_LINE(61)
	int _src_byte_offset = _other->byteOffset;		HX_STACK_VAR(_src_byte_offset,"_src_byte_offset");
	HX_STACK_LINE(63)
	::snow::api::buffers::ArrayBufferView tmp = ::snow::api::buffers::ArrayBufferView_obj::__new(_type);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	::snow::api::buffers::ArrayBufferView _view = tmp;		HX_STACK_VAR(_view,"_view");
	HX_STACK_LINE(67)
	bool tmp1 = (_src_type == _type);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	if ((tmp1)){
		HX_STACK_LINE(68)
		int srcLength = _src_data->length;		HX_STACK_VAR(srcLength,"srcLength");
		HX_STACK_LINE(68)
		int tmp2 = (srcLength - _src_byte_offset);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		int cloneLength = tmp2;		HX_STACK_VAR(cloneLength,"cloneLength");
		HX_STACK_LINE(68)
		Array< unsigned char > tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			Array< unsigned char > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(68)
			this1 = Array_obj< unsigned char >::__new();
			HX_STACK_LINE(68)
			bool tmp4 = (cloneLength > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(68)
			if ((tmp4)){
				HX_STACK_LINE(68)
				int tmp5 = (cloneLength - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(68)
				this1[tmp5] = (int)0;
			}
			HX_STACK_LINE(68)
			tmp3 = this1;
		}
		HX_STACK_LINE(68)
		_view->buffer = tmp3;
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			Array< unsigned char > tmp4 = _src_data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(68)
			int tmp5 = _src_byte_offset;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(68)
			int tmp6 = cloneLength;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(68)
			_view->buffer->blit((int)0,tmp4,tmp5,tmp6);
		}
	}
	else{
		HX_STACK_LINE(70)
		HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
	}
	HX_STACK_LINE(73)
	int tmp2 = (_view->bytesPerElement * _src_length);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	_view->byteLength = tmp2;
	HX_STACK_LINE(74)
	_view->byteOffset = (int)0;
	HX_STACK_LINE(75)
	_view->length = _src_length;
	HX_STACK_LINE(77)
	::snow::api::buffers::ArrayBufferView tmp3 = _view;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(77)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,fromView,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::fromBuffer( int _type,Array< unsigned char > _buffer,int _byte_offset,int _byte_length){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","fromBuffer",0x15813f14,"snow.api.buffers.ArrayBufferView.fromBuffer","snow/api/buffers/ArrayBufferView.hx",83,0xa074815d)
	HX_STACK_ARG(_type,"_type")
	HX_STACK_ARG(_buffer,"_buffer")
	HX_STACK_ARG(_byte_offset,"_byte_offset")
	HX_STACK_ARG(_byte_length,"_byte_length")
	HX_STACK_LINE(85)
	::snow::api::buffers::ArrayBufferView tmp = ::snow::api::buffers::ArrayBufferView_obj::__new(_type);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	::snow::api::buffers::ArrayBufferView _view = tmp;		HX_STACK_VAR(_view,"_view");
	HX_STACK_LINE(86)
	int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
	HX_STACK_LINE(88)
	bool tmp1 = (_byte_offset < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	if ((tmp1)){
		HX_STACK_LINE(88)
		::snow::api::buffers::TAError tmp2 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		HX_STACK_DO_THROW(tmp2);
	}
	HX_STACK_LINE(89)
	int tmp2 = hx::Mod(_byte_offset,_bytes_per_elem);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(89)
	if ((tmp3)){
		HX_STACK_LINE(89)
		::snow::api::buffers::TAError tmp4 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(89)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(91)
	int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
	HX_STACK_LINE(92)
	int tmp4 = (_byte_offset + _byte_length);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(92)
	int _new_range = tmp4;		HX_STACK_VAR(_new_range,"_new_range");
	HX_STACK_LINE(93)
	bool tmp5 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(93)
	if ((tmp5)){
		HX_STACK_LINE(93)
		::snow::api::buffers::TAError tmp6 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(93)
		HX_STACK_DO_THROW(tmp6);
	}
	HX_STACK_LINE(95)
	_view->buffer = _buffer;
	HX_STACK_LINE(96)
	_view->byteOffset = _byte_offset;
	HX_STACK_LINE(97)
	_view->byteLength = _byte_length;
	HX_STACK_LINE(98)
	Float tmp6 = (Float(_byte_length) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(98)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(98)
	_view->length = tmp7;
	HX_STACK_LINE(100)
	::snow::api::buffers::ArrayBufferView tmp8 = _view;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(100)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayBufferView_obj,fromBuffer,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::fromArray( int _type,Array< Float > _array){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","fromArray",0x6873ca05,"snow.api.buffers.ArrayBufferView.fromArray","snow/api/buffers/ArrayBufferView.hx",107,0xa074815d)
	HX_STACK_ARG(_type,"_type")
	HX_STACK_ARG(_array,"_array")
	HX_STACK_LINE(109)
	::snow::api::buffers::ArrayBufferView tmp = ::snow::api::buffers::ArrayBufferView_obj::__new(_type);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	::snow::api::buffers::ArrayBufferView _view = tmp;		HX_STACK_VAR(_view,"_view");
	HX_STACK_LINE(110)
	int _length = _array->length;		HX_STACK_VAR(_length,"_length");
	HX_STACK_LINE(111)
	int tmp1 = (_length * _view->bytesPerElement);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	int _bytelen = tmp1;		HX_STACK_VAR(_bytelen,"_bytelen");
	HX_STACK_LINE(113)
	_view->byteOffset = (int)0;
	HX_STACK_LINE(114)
	_view->length = _length;
	HX_STACK_LINE(115)
	_view->byteLength = _bytelen;
	HX_STACK_LINE(116)
	Array< unsigned char > tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(116)
	{
		HX_STACK_LINE(116)
		Array< unsigned char > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(116)
		this1 = Array_obj< unsigned char >::__new();
		HX_STACK_LINE(116)
		bool tmp3 = (_bytelen > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		if ((tmp3)){
			HX_STACK_LINE(116)
			int tmp4 = (_bytelen - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(116)
			this1[tmp4] = (int)0;
		}
		HX_STACK_LINE(116)
		tmp2 = this1;
	}
	HX_STACK_LINE(116)
	_view->buffer = tmp2;
	HX_STACK_LINE(118)
	_view->copyFromArray(_array,null());
	HX_STACK_LINE(120)
	::snow::api::buffers::ArrayBufferView tmp3 = _view;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(120)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,fromArray,return )


ArrayBufferView_obj::ArrayBufferView_obj()
{
}

void ArrayBufferView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayBufferView);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(byteOffset,"byteOffset");
	HX_MARK_MEMBER_NAME(byteLength,"byteLength");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(bytesPerElement,"bytesPerElement");
	HX_MARK_END_CLASS();
}

void ArrayBufferView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(byteOffset,"byteOffset");
	HX_VISIT_MEMBER_NAME(byteLength,"byteLength");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(bytesPerElement,"bytesPerElement");
}

Dynamic ArrayBufferView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { return byteOffset; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { return byteLength; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cloneBuffer") ) { return cloneBuffer_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bytesForType") ) { return bytesForType_dyn(); }
		if (HX_FIELD_EQ(inName,"toByteLength") ) { return toByteLength_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyFromArray") ) { return copyFromArray_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytesPerElement") ) { return bytesPerElement; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"subarray_snow_api_buffers_Int8Array") ) { return subarray_snow_api_buffers_Int8Array_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"subarray_snow_api_buffers_Uint8Array") ) { return subarray_snow_api_buffers_Uint8Array_dyn(); }
		if (HX_FIELD_EQ(inName,"subarray_snow_api_buffers_Int32Array") ) { return subarray_snow_api_buffers_Int32Array_dyn(); }
		if (HX_FIELD_EQ(inName,"subarray_snow_api_buffers_Int16Array") ) { return subarray_snow_api_buffers_Int16Array_dyn(); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"subarray_snow_api_buffers_Uint16Array") ) { return subarray_snow_api_buffers_Uint16Array_dyn(); }
		if (HX_FIELD_EQ(inName,"subarray_snow_api_buffers_Uint32Array") ) { return subarray_snow_api_buffers_Uint32Array_dyn(); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"subarray_snow_api_buffers_Float32Array") ) { return subarray_snow_api_buffers_Float32Array_dyn(); }
		if (HX_FIELD_EQ(inName,"subarray_snow_api_buffers_Float64Array") ) { return subarray_snow_api_buffers_Float64Array_dyn(); }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"subarray_snow_api_buffers_Uint8ClampedArray") ) { return subarray_snow_api_buffers_Uint8ClampedArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ArrayBufferView_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromView") ) { outValue = fromView_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { outValue = fromArray_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBuffer") ) { outValue = fromBuffer_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromElements") ) { outValue = fromElements_dyn(); return true;  }
	}
	return false;
}

Dynamic ArrayBufferView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< Array< unsigned char > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { byteOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytesPerElement") ) { bytesPerElement=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayBufferView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"));
	outFields->push(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*Array< unsigned char >*/ ,(int)offsetof(ArrayBufferView_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteOffset),HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteLength),HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,bytesPerElement),HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("subarray_snow_api_buffers_Uint8Array","\xe2","\xc6","\x66","\x6f"),
	HX_HCSTRING("subarray_snow_api_buffers_Float32Array","\xa5","\xa7","\xf7","\x4b"),
	HX_HCSTRING("subarray_snow_api_buffers_Int32Array","\xf2","\x90","\xb7","\xec"),
	HX_HCSTRING("subarray_snow_api_buffers_Int8Array","\xc9","\xc8","\x9c","\xd6"),
	HX_HCSTRING("subarray_snow_api_buffers_Uint8ClampedArray","\xf6","\xd0","\x6c","\x22"),
	HX_HCSTRING("subarray_snow_api_buffers_Int16Array","\xec","\x14","\xfa","\x32"),
	HX_HCSTRING("subarray_snow_api_buffers_Uint16Array","\xb3","\x6c","\xee","\x4a"),
	HX_HCSTRING("subarray_snow_api_buffers_Uint32Array","\xb9","\xe8","\xab","\x04"),
	HX_HCSTRING("subarray_snow_api_buffers_Float64Array","\xa6","\xc4","\x6e","\x95"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"),
	HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("cloneBuffer","\x3d","\xa8","\xe8","\x6c"),
	HX_HCSTRING("bytesForType","\x38","\x71","\x1a","\xbd"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("toByteLength","\x69","\x4f","\xeb","\x18"),
	HX_HCSTRING("copyFromArray","\x5a","\xdd","\xdd","\x3b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayBufferView_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromElements","\xc1","\x11","\xdb","\x23"),
	HX_HCSTRING("fromView","\xef","\x00","\x1b","\xac"),
	HX_HCSTRING("fromBuffer","\x0a","\xc2","\xd8","\x13"),
	HX_HCSTRING("fromArray","\xcf","\x57","\x18","\xda"),
	::String(null()) };

void ArrayBufferView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.api.buffers.ArrayBufferView","\x24","\x13","\x7d","\xc1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayBufferView_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArrayBufferView_obj >;
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

} // end namespace snow
} // end namespace api
} // end namespace buffers
