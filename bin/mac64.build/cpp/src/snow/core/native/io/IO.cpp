#include <hxcpp.h>

#include "linc_sdl.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_crypto_Base64
#include <haxe/crypto/Base64.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_DebugError
#include <snow/api/DebugError.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
#endif
#ifndef INCLUDED_snow_core_native_io_IO
#include <snow/core/native/io/IO.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_IO
#include <snow/modules/interfaces/IO.h>
#endif
#ifndef INCLUDED_snow_systems_io_IO
#include <snow/systems/io/IO.h>
#endif
#ifndef INCLUDED_snow_types_Error
#include <snow/types/Error.h>
#endif
#ifndef INCLUDED_snow_types_SystemEvent
#include <snow/types/SystemEvent.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
namespace snow{
namespace core{
namespace native{
namespace io{

Void IO_obj::__construct(::snow::Snow _app)
{
HX_STACK_FRAME("snow.core.native.io.IO","new",0xa08f838d,"snow.core.native.io.IO.new","snow/core/native/io/IO.hx",21,0x990c4183)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
{
	HX_STACK_LINE(21)
	this->app = _app;
}
;
	return null();
}

//IO_obj::~IO_obj() { }

Dynamic IO_obj::__CreateEmpty() { return  new IO_obj; }
hx::ObjectPtr< IO_obj > IO_obj::__new(::snow::Snow _app)
{  hx::ObjectPtr< IO_obj > _result_ = new IO_obj();
	_result_->__construct(_app);
	return _result_;}

Dynamic IO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IO_obj > _result_ = new IO_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *IO_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::snow::modules::interfaces::IO_obj)) return operator ::snow::modules::interfaces::IO_obj *();
	return super::__ToInterface(inType);
}

IO_obj::operator ::snow::modules::interfaces::IO_obj *()
	{ return new ::snow::modules::interfaces::IO_delegate_< IO_obj >(this); }
Void IO_obj::shutdown( ){
{
		HX_STACK_FRAME("snow.core.native.io.IO","shutdown",0xf496a649,"snow.core.native.io.IO.shutdown","snow/core/native/io/IO.hx",22,0x990c4183)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IO_obj,shutdown,(void))

Void IO_obj::onevent( ::snow::types::SystemEvent _event){
{
		HX_STACK_FRAME("snow.core.native.io.IO","onevent",0xf56e4448,"snow.core.native.io.IO.onevent","snow/core/native/io/IO.hx",23,0x990c4183)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,onevent,(void))

::String IO_obj::app_path( ){
	HX_STACK_FRAME("snow.core.native.io.IO","app_path",0x2c6746f6,"snow.core.native.io.IO.app_path","snow/core/native/io/IO.hx",27,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	return HX_HCSTRING("./","\x41","\x28","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC0(IO_obj,app_path,return )

::String IO_obj::app_path_prefs( ){
	HX_STACK_FRAME("snow.core.native.io.IO","app_path_prefs",0x8c2f72e7,"snow.core.native.io.IO.app_path_prefs","snow/core/native/io/IO.hx",33,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	return HX_HCSTRING("./","\x41","\x28","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC0(IO_obj,app_path_prefs,return )

Void IO_obj::url_open( ::String _url){
{
		HX_STACK_FRAME("snow.core.native.io.IO","url_open",0x5d77cb8d,"snow.core.native.io.IO.url_open","snow/core/native/io/IO.hx",37,0x990c4183)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_url,"_url")
		HX_STACK_LINE(40)
		::String tmp = (HX_HCSTRING("native url_open / ","\x8e","\x77","\x8c","\x59") + _url);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		::String tmp1 = (HX_HCSTRING("       i / io / ","\x83","\x07","\xf6","\xc7") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("IO.hx","\x98","\x76","\x9b","\x3c"),40,HX_HCSTRING("snow.core.native.io.IO","\x1b","\xb9","\x31","\x68"),HX_HCSTRING("url_open","\xda","\x21","\xed","\xd3"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		::haxe::Log_obj::trace(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,url_open,(void))

::snow::api::Promise IO_obj::data_load( ::String _path,Dynamic _options){
	HX_STACK_FRAME("snow.core.native.io.IO","data_load",0x7d549a88,"snow.core.native.io.IO.data_load","snow/core/native/io/IO.hx",44,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_options,"_options")
	HX_STACK_LINE(44)
	::snow::core::native::io::IO _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(46)
	bool tmp = (_path == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	if ((tmp1)){
		HX_STACK_LINE(46)
		tmp2 = (_path == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(46)
		tmp2 = true;
	}
	HX_STACK_LINE(46)
	if ((tmp2)){
		HX_STACK_LINE(47)
		::String tmp3 = (HX_HCSTRING("data_load invalid file path: `","\x3f","\x34","\x5b","\x77") + _path);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		::String tmp4 = (tmp3 + HX_HCSTRING("`","\x60","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		::snow::types::Error tmp5 = ::snow::types::Error_obj::error(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		::snow::api::Promise tmp6 = ::snow::api::Promise_obj::reject(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		return tmp6;
	}

	HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Dynamic,_options,::snow::core::native::io::IO,_g,::String,_path)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/core/native/io/IO.hx",50,0x990c4183)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(52)
			::String tmp3 = _path;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			Dynamic tmp4 = _options;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			::snow::api::buffers::ArrayBufferView tmp5 = _g->_data_load(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			::snow::api::buffers::ArrayBufferView _dest = tmp5;		HX_STACK_VAR(_dest,"_dest");
			HX_STACK_LINE(54)
			bool tmp6 = (_dest == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(54)
			if ((tmp6)){
				HX_STACK_LINE(55)
				::String tmp7 = (HX_HCSTRING("data_load file cannot be opened `","\x28","\x6c","\xae","\x49") + _path);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(55)
				::String tmp8 = (tmp7 + HX_HCSTRING("`","\x60","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(55)
				::snow::types::Error tmp9 = ::snow::types::Error_obj::error(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(55)
				reject(tmp9);
				HX_STACK_LINE(56)
				return null();
			}
			HX_STACK_LINE(59)
			::snow::api::buffers::ArrayBufferView tmp7 = _dest;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(59)
			resolve(tmp7);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(50)
	::snow::api::Promise tmp3 = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_options,_g,_path)));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(IO_obj,data_load,return )

bool IO_obj::data_save( ::String _path,::snow::api::buffers::ArrayBufferView _data,Dynamic _options){
	HX_STACK_FRAME("snow.core.native.io.IO","data_save",0x81ea8b9f,"snow.core.native.io.IO.data_save","snow/core/native/io/IO.hx",65,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_data,"_data")
	HX_STACK_ARG(_options,"_options")
	HX_STACK_LINE(67)
	bool tmp = (_options != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	if ((tmp)){
		HX_STACK_LINE(67)
		tmp1 = _options->__Field(HX_HCSTRING("binary","\x01","\xbc","\x0b","\xed"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(67)
		tmp1 = false;
	}
	HX_STACK_LINE(67)
	bool _binary = tmp1;		HX_STACK_VAR(_binary,"_binary");
	HX_STACK_LINE(68)
	::String tmp2 = _path;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	bool tmp3 = _binary;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(68)
	if ((tmp3)){
		HX_STACK_LINE(68)
		tmp4 = HX_HCSTRING("wb","\x0b","\x68","\x00","\x00");
	}
	else{
		HX_STACK_LINE(68)
		tmp4 = HX_HCSTRING("w","\x77","\x00","\x00","\x00");
	}
	HX_STACK_LINE(68)
	::cpp::Pointer< SDL_RWops > tmp5 = this->file_handle(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(68)
	::cpp::Pointer< SDL_RWops > _file = tmp5;		HX_STACK_VAR(_file,"_file");
	HX_STACK_LINE(70)
	bool tmp6 = (_file != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(70)
	if ((tmp6)){
		HX_STACK_LINE(72)
		::cpp::Pointer< SDL_RWops > tmp7 = _file;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(72)
		::snow::api::buffers::ArrayBufferView tmp8 = _data;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(72)
		int tmp9 = _data->length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(72)
		int tmp10 = this->file_write(tmp7,tmp8,tmp9,(int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(72)
		int count = tmp10;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(74)
		::cpp::Pointer< SDL_RWops > tmp11 = _file;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(74)
		this->file_close(tmp11);
		HX_STACK_LINE(76)
		bool tmp12 = (count == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(76)
		return tmp12;
	}
	HX_STACK_LINE(80)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC3(IO_obj,data_save,return )

::String IO_obj::string_save_path( Dynamic __o__slot){
Dynamic _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.core.native.io.IO","string_save_path",0xb8b4e1ac,"snow.core.native.io.IO.string_save_path","snow/core/native/io/IO.hx",84,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(86)
		::String tmp = this->app_path_prefs();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		::String _pref_path = tmp;		HX_STACK_VAR(_pref_path,"_pref_path");
		HX_STACK_LINE(87)
		::String tmp1 = _pref_path;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		::snow::Snow tmp2 = this->app;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		::String tmp3 = tmp2->io->string_save_prefix;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(87)
		::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(87)
		::String tmp5 = (tmp4 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(87)
		Dynamic tmp6 = _slot;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(87)
		::String tmp8 = ::haxe::io::Path_obj::join(Array_obj< ::String >::__new().Add(tmp1).Add(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(87)
		::String _path = tmp8;		HX_STACK_VAR(_path,"_path");
		HX_STACK_LINE(89)
		::String tmp9 = _path;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(89)
		::String tmp10 = ::haxe::io::Path_obj::normalize(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(89)
		return tmp10;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,string_save_path,return )

bool IO_obj::string_slot_destroy( Dynamic __o__slot){
Dynamic _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.core.native.io.IO","string_slot_destroy",0x9973ab14,"snow.core.native.io.IO.string_slot_destroy","snow/core/native/io/IO.hx",95,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(97)
		Dynamic tmp = _slot;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		::String tmp1 = this->string_save_path(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		::String _path = tmp1;		HX_STACK_VAR(_path,"_path");
		HX_STACK_LINE(98)
		bool _result = true;		HX_STACK_VAR(_result,"_result");
		HX_STACK_LINE(102)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(103)
			::String tmp2 = _path;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(103)
			::sys::FileSystem_obj::deleteFile(tmp2);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(105)
					_result = false;
				}
			}
		}
		HX_STACK_LINE(108)
		bool tmp2 = _result;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,string_slot_destroy,return )

bool IO_obj::string_slot_save( Dynamic __o__slot,::String _contents){
Dynamic _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.core.native.io.IO","string_slot_save",0x0c1f98e3,"snow.core.native.io.IO.string_slot_save","snow/core/native/io/IO.hx",112,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_slot,"_slot")
	HX_STACK_ARG(_contents,"_contents")
{
		HX_STACK_LINE(114)
		Dynamic tmp = _slot;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		::String tmp1 = this->string_save_path(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		::String _path = tmp1;		HX_STACK_VAR(_path,"_path");
		HX_STACK_LINE(115)
		::snow::api::buffers::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			::String tmp3 = _contents;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(115)
			::haxe::io::Bytes tmp4 = ::haxe::io::Bytes_obj::ofString(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(115)
			::haxe::io::Bytes _bytes = tmp4;		HX_STACK_VAR(_bytes,"_bytes");
			HX_STACK_LINE(115)
			Dynamic _byteLength = null();		HX_STACK_VAR(_byteLength,"_byteLength");
			HX_STACK_LINE(115)
			bool tmp5 = (_byteLength == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(115)
			if ((tmp5)){
				HX_STACK_LINE(115)
				_byteLength = _bytes->length;
			}
			HX_STACK_LINE(115)
			{
				HX_STACK_LINE(115)
				Array< unsigned char > _buffer = _bytes->b;		HX_STACK_VAR(_buffer,"_buffer");
				HX_STACK_LINE(115)
				int _byteOffset = (int)0;		HX_STACK_VAR(_byteOffset,"_byteOffset");
				HX_STACK_LINE(115)
				int _byteLength1 = _byteLength;		HX_STACK_VAR(_byteLength1,"_byteLength1");
				HX_STACK_LINE(115)
				{
					HX_STACK_LINE(115)
					::snow::api::buffers::ArrayBufferView tmp6 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(115)
					::snow::api::buffers::ArrayBufferView _view = tmp6;		HX_STACK_VAR(_view,"_view");
					HX_STACK_LINE(115)
					int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
					HX_STACK_LINE(115)
					bool tmp7 = (_byteOffset < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(115)
					if ((tmp7)){
						HX_STACK_LINE(115)
						::snow::api::buffers::TAError tmp8 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(115)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(115)
					int tmp8 = hx::Mod(_byteOffset,_bytes_per_elem);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(115)
					bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(115)
					if ((tmp9)){
						HX_STACK_LINE(115)
						::snow::api::buffers::TAError tmp10 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(115)
						HX_STACK_DO_THROW(tmp10);
					}
					HX_STACK_LINE(115)
					int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
					HX_STACK_LINE(115)
					int tmp10 = (_byteOffset + _byteLength1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(115)
					int _new_range = tmp10;		HX_STACK_VAR(_new_range,"_new_range");
					HX_STACK_LINE(115)
					bool tmp11 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(115)
					if ((tmp11)){
						HX_STACK_LINE(115)
						::snow::api::buffers::TAError tmp12 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(115)
						HX_STACK_DO_THROW(tmp12);
					}
					HX_STACK_LINE(115)
					_view->buffer = _buffer;
					HX_STACK_LINE(115)
					_view->byteOffset = _byteOffset;
					HX_STACK_LINE(115)
					_view->byteLength = _byteLength1;
					HX_STACK_LINE(115)
					Float tmp12 = (Float(_byteLength1) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(115)
					int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(115)
					_view->length = tmp13;
					HX_STACK_LINE(115)
					tmp2 = _view;
				}
			}
		}
		HX_STACK_LINE(115)
		::snow::api::buffers::ArrayBufferView _data = tmp2;		HX_STACK_VAR(_data,"_data");
		HX_STACK_LINE(117)
		::String tmp3 = _path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(117)
		::snow::api::buffers::ArrayBufferView tmp4 = _data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(117)
		bool tmp5 = this->data_save(tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(117)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(IO_obj,string_slot_save,return )

::String IO_obj::string_slot_load( Dynamic __o__slot){
Dynamic _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.core.native.io.IO","string_slot_load",0x0789a7cc,"snow.core.native.io.IO.string_slot_load","snow/core/native/io/IO.hx",121,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(123)
		Dynamic tmp = _slot;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		::String tmp1 = this->string_save_path(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		::snow::api::buffers::ArrayBufferView tmp2 = this->_data_load(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(123)
		::snow::api::buffers::ArrayBufferView _data = tmp2;		HX_STACK_VAR(_data,"_data");
		HX_STACK_LINE(125)
		bool tmp3 = (_data == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(125)
		if ((tmp3)){
			HX_STACK_LINE(126)
			return null();
		}
		HX_STACK_LINE(129)
		Array< unsigned char > tmp4 = _data->buffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(129)
		::haxe::io::Bytes tmp5 = ::haxe::io::Bytes_obj::ofData(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(129)
		::String tmp6 = tmp5->toString();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(129)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,string_slot_load,return )

::String IO_obj::string_slot_encode( ::String _string){
	HX_STACK_FRAME("snow.core.native.io.IO","string_slot_encode",0xdc91353c,"snow.core.native.io.IO.string_slot_encode","snow/core/native/io/IO.hx",133,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_string,"_string")
	HX_STACK_LINE(135)
	{
		HX_STACK_LINE(135)
		bool tmp = (_string == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(135)
		if ((tmp)){
			HX_STACK_LINE(135)
			::String tmp1 = HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(135)
			::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(135)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(137)
	::String tmp = _string;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	::haxe::io::Bytes _bytes = tmp1;		HX_STACK_VAR(_bytes,"_bytes");
	HX_STACK_LINE(139)
	::haxe::io::Bytes tmp2 = _bytes;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(139)
	::String tmp3 = ::haxe::crypto::Base64_obj::encode(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(139)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,string_slot_encode,return )

::String IO_obj::string_slot_decode( ::String _string){
	HX_STACK_FRAME("snow.core.native.io.IO","string_slot_decode",0x479aa054,"snow.core.native.io.IO.string_slot_decode","snow/core/native/io/IO.hx",143,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_string,"_string")
	HX_STACK_LINE(145)
	{
		HX_STACK_LINE(145)
		bool tmp = (_string == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(145)
		if ((tmp)){
			HX_STACK_LINE(145)
			::String tmp1 = HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(145)
			::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(145)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(147)
	::String tmp = _string;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	::haxe::io::Bytes tmp1 = ::haxe::crypto::Base64_obj::decode(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	::haxe::io::Bytes _bytes = tmp1;		HX_STACK_VAR(_bytes,"_bytes");
	HX_STACK_LINE(149)
	::String tmp2 = _bytes->toString();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(149)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,string_slot_decode,return )

::cpp::Pointer< SDL_RWops > IO_obj::file_handle( ::String _path,::String __o__mode){
::String _mode = __o__mode.Default(HX_HCSTRING("rb","\xb0","\x63","\x00","\x00"));
	HX_STACK_FRAME("snow.core.native.io.IO","file_handle",0xa073f678,"snow.core.native.io.IO.file_handle","snow/core/native/io/IO.hx",155,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_mode,"_mode")
{
		HX_STACK_LINE(157)
		::String tmp = HX_HCSTRING("       i / io / file_handle in code module does nothing.","\xa4","\xa8","\x6a","\xdd");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("IO.hx","\x98","\x76","\x9b","\x3c"),157,HX_HCSTRING("snow.core.native.io.IO","\x1b","\xb9","\x31","\x68"),HX_HCSTRING("file_handle","\x4b","\xce","\x5d","\xec"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(157)
		::haxe::Log_obj::trace(tmp,tmp1);
		HX_STACK_LINE(158)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(IO_obj,file_handle,return )

::cpp::Pointer< SDL_RWops > IO_obj::file_handle_from_mem( ::snow::api::buffers::ArrayBufferView mem,int size){
	HX_STACK_FRAME("snow.core.native.io.IO","file_handle_from_mem",0xe4ec6767,"snow.core.native.io.IO.file_handle_from_mem","snow/core/native/io/IO.hx",162,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mem,"mem")
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(164)
	::String tmp = HX_HCSTRING("       i / io / file_handle_from_mem in code module does nothing.","\xb5","\xf4","\x10","\x96");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("IO.hx","\x98","\x76","\x9b","\x3c"),164,HX_HCSTRING("snow.core.native.io.IO","\x1b","\xb9","\x31","\x68"),HX_HCSTRING("file_handle_from_mem","\x34","\x7d","\xf0","\x5b"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(164)
	::haxe::Log_obj::trace(tmp,tmp1);
	HX_STACK_LINE(165)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(IO_obj,file_handle_from_mem,return )

int IO_obj::file_read( ::cpp::Pointer< SDL_RWops > handle,::snow::api::buffers::ArrayBufferView dest,int size,int maxnum){
	HX_STACK_FRAME("snow.core.native.io.IO","file_read",0x3d7c6a26,"snow.core.native.io.IO.file_read","snow/core/native/io/IO.hx",169,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(dest,"dest")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(maxnum,"maxnum")
	HX_STACK_LINE(171)
	::String tmp = HX_HCSTRING("       i / io / file_read in code module does nothing.","\x36","\xf0","\x09","\xba");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("IO.hx","\x98","\x76","\x9b","\x3c"),171,HX_HCSTRING("snow.core.native.io.IO","\x1b","\xb9","\x31","\x68"),HX_HCSTRING("file_read","\x39","\x97","\xb2","\x6d"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(171)
	::haxe::Log_obj::trace(tmp,tmp1);
	HX_STACK_LINE(172)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC4(IO_obj,file_read,return )

int IO_obj::file_write( ::cpp::Pointer< SDL_RWops > handle,::snow::api::buffers::ArrayBufferView src,int size,int num){
	HX_STACK_FRAME("snow.core.native.io.IO","file_write",0x78ff440f,"snow.core.native.io.IO.file_write","snow/core/native/io/IO.hx",176,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(src,"src")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(num,"num")
	HX_STACK_LINE(178)
	::String tmp = HX_HCSTRING("       i / io / file_write in code module does nothing.","\x0d","\x23","\x6c","\xcf");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("IO.hx","\x98","\x76","\x9b","\x3c"),178,HX_HCSTRING("snow.core.native.io.IO","\x1b","\xb9","\x31","\x68"),HX_HCSTRING("file_write","\x9c","\x87","\x30","\x78"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	::haxe::Log_obj::trace(tmp,tmp1);
	HX_STACK_LINE(179)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC4(IO_obj,file_write,return )

int IO_obj::file_seek( ::cpp::Pointer< SDL_RWops > handle,int offset,int whence){
	HX_STACK_FRAME("snow.core.native.io.IO","file_seek",0x3e25a448,"snow.core.native.io.IO.file_seek","snow/core/native/io/IO.hx",183,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(whence,"whence")
	HX_STACK_LINE(185)
	::String tmp = HX_HCSTRING("       i / io / file_seek in code module does nothing.","\xd4","\x24","\xd5","\xe8");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("IO.hx","\x98","\x76","\x9b","\x3c"),185,HX_HCSTRING("snow.core.native.io.IO","\x1b","\xb9","\x31","\x68"),HX_HCSTRING("file_seek","\x5b","\xd1","\x5b","\x6e"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	::haxe::Log_obj::trace(tmp,tmp1);
	HX_STACK_LINE(186)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC3(IO_obj,file_seek,return )

int IO_obj::file_tell( ::cpp::Pointer< SDL_RWops > handle){
	HX_STACK_FRAME("snow.core.native.io.IO","file_tell",0x3ecee101,"snow.core.native.io.IO.file_tell","snow/core/native/io/IO.hx",190,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(192)
	::String tmp = HX_HCSTRING("       i / io / file_tell in code module does nothing.","\x7b","\xa6","\xdb","\x16");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("IO.hx","\x98","\x76","\x9b","\x3c"),192,HX_HCSTRING("snow.core.native.io.IO","\x1b","\xb9","\x31","\x68"),HX_HCSTRING("file_tell","\x14","\x0e","\x05","\x6f"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	::haxe::Log_obj::trace(tmp,tmp1);
	HX_STACK_LINE(193)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,file_tell,return )

int IO_obj::file_close( ::cpp::Pointer< SDL_RWops > handle){
	HX_STACK_FRAME("snow.core.native.io.IO","file_close",0xf108eee8,"snow.core.native.io.IO.file_close","snow/core/native/io/IO.hx",197,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(199)
	::String tmp = HX_HCSTRING("       i / io / file_close in code module does nothing.","\x94","\xa2","\xf1","\xb1");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(199)
	Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("IO.hx","\x98","\x76","\x9b","\x3c"),199,HX_HCSTRING("snow.core.native.io.IO","\x1b","\xb9","\x31","\x68"),HX_HCSTRING("file_close","\x75","\x32","\x3a","\xf0"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(199)
	::haxe::Log_obj::trace(tmp,tmp1);
	HX_STACK_LINE(200)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,file_close,return )

int IO_obj::file_size( ::cpp::Pointer< SDL_RWops > handle){
	HX_STACK_FRAME("snow.core.native.io.IO","file_size",0x3e28bf91,"snow.core.native.io.IO.file_size","snow/core/native/io/IO.hx",204,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(206)
	::cpp::Pointer< SDL_RWops > tmp = handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(206)
	int tmp1 = this->file_tell(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(206)
	int _cur = tmp1;		HX_STACK_VAR(_cur,"_cur");
	HX_STACK_LINE(207)
	::cpp::Pointer< SDL_RWops > tmp2 = handle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(207)
	this->file_seek(tmp2,(int)0,(int)2);
	HX_STACK_LINE(208)
	::cpp::Pointer< SDL_RWops > tmp3 = handle;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(208)
	int tmp4 = this->file_tell(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(208)
	int _size = tmp4;		HX_STACK_VAR(_size,"_size");
	HX_STACK_LINE(209)
	::cpp::Pointer< SDL_RWops > tmp5 = handle;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(209)
	int tmp6 = _cur;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(209)
	this->file_seek(tmp5,tmp6,(int)0);
	HX_STACK_LINE(210)
	int tmp7 = _size;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(210)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,file_size,return )

::snow::api::buffers::ArrayBufferView IO_obj::_data_load( ::String _path,Dynamic _options){
	HX_STACK_FRAME("snow.core.native.io.IO","_data_load",0x09fbffcf,"snow.core.native.io.IO._data_load","snow/core/native/io/IO.hx",216,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_options,"_options")
	HX_STACK_LINE(218)
	bool tmp = (_options != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	if ((tmp)){
		HX_STACK_LINE(218)
		tmp1 = _options->__Field(HX_HCSTRING("binary","\x01","\xbc","\x0b","\xed"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(218)
		tmp1 = false;
	}
	HX_STACK_LINE(218)
	bool _binary = tmp1;		HX_STACK_VAR(_binary,"_binary");
	HX_STACK_LINE(219)
	::String tmp2 = _path;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(219)
	bool tmp3 = _binary;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(219)
	::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(219)
	if ((tmp3)){
		HX_STACK_LINE(219)
		tmp4 = HX_HCSTRING("rb","\xb0","\x63","\x00","\x00");
	}
	else{
		HX_STACK_LINE(219)
		tmp4 = HX_HCSTRING("r","\x72","\x00","\x00","\x00");
	}
	HX_STACK_LINE(219)
	::cpp::Pointer< SDL_RWops > tmp5 = this->file_handle(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(219)
	::cpp::Pointer< SDL_RWops > _file = tmp5;		HX_STACK_VAR(_file,"_file");
	HX_STACK_LINE(221)
	bool tmp6 = (_file == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(221)
	if ((tmp6)){
		HX_STACK_LINE(221)
		return null();
	}
	HX_STACK_LINE(222)
	::cpp::Pointer< SDL_RWops > tmp7 = _file;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(222)
	int tmp8 = this->file_size(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(222)
	int _size = tmp8;		HX_STACK_VAR(_size,"_size");
	HX_STACK_LINE(223)
	::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(223)
	{
		HX_STACK_LINE(223)
		::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(223)
		::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			int _elements = _size;		HX_STACK_VAR(_elements,"_elements");
			HX_STACK_LINE(223)
			bool tmp11 = (_elements < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(223)
			if ((tmp11)){
				HX_STACK_LINE(223)
				_elements = (int)0;
			}
			HX_STACK_LINE(223)
			::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(223)
			::snow::api::buffers::ArrayBufferView _view = tmp12;		HX_STACK_VAR(_view,"_view");
			HX_STACK_LINE(223)
			int tmp13 = (_elements * _view->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(223)
			int _bytelen = tmp13;		HX_STACK_VAR(_bytelen,"_bytelen");
			HX_STACK_LINE(223)
			_view->byteOffset = (int)0;
			HX_STACK_LINE(223)
			_view->byteLength = _bytelen;
			HX_STACK_LINE(223)
			Array< unsigned char > tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				Array< unsigned char > this2;		HX_STACK_VAR(this2,"this2");
				HX_STACK_LINE(223)
				this2 = Array_obj< unsigned char >::__new();
				HX_STACK_LINE(223)
				bool tmp15 = (_bytelen > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(223)
				if ((tmp15)){
					HX_STACK_LINE(223)
					int tmp16 = (_bytelen - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(223)
					this2[tmp16] = (int)0;
				}
				HX_STACK_LINE(223)
				tmp14 = this2;
			}
			HX_STACK_LINE(223)
			_view->buffer = tmp14;
			HX_STACK_LINE(223)
			_view->length = _elements;
			HX_STACK_LINE(223)
			tmp10 = _view;
		}
		HX_STACK_LINE(223)
		this1 = tmp10;
		HX_STACK_LINE(223)
		tmp9 = this1;
	}
	HX_STACK_LINE(223)
	::snow::api::buffers::ArrayBufferView _dest = tmp9;		HX_STACK_VAR(_dest,"_dest");
	HX_STACK_LINE(225)
	bool tmp10 = (_size != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(225)
	if ((tmp10)){
		HX_STACK_LINE(226)
		::cpp::Pointer< SDL_RWops > tmp11 = _file;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(226)
		::snow::api::buffers::ArrayBufferView tmp12 = _dest;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(226)
		int tmp13 = _dest->length;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(226)
		this->file_read(tmp11,tmp12,tmp13,(int)1);
	}
	HX_STACK_LINE(230)
	::cpp::Pointer< SDL_RWops > tmp11 = _file;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(230)
	this->file_close(tmp11);
	HX_STACK_LINE(232)
	::snow::api::buffers::ArrayBufferView tmp12 = _dest;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(232)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC2(IO_obj,_data_load,return )


IO_obj::IO_obj()
{
}

void IO_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IO);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_END_CLASS();
}

void IO_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
}

Dynamic IO_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onevent") ) { return onevent_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shutdown") ) { return shutdown_dyn(); }
		if (HX_FIELD_EQ(inName,"app_path") ) { return app_path_dyn(); }
		if (HX_FIELD_EQ(inName,"url_open") ) { return url_open_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"data_load") ) { return data_load_dyn(); }
		if (HX_FIELD_EQ(inName,"data_save") ) { return data_save_dyn(); }
		if (HX_FIELD_EQ(inName,"file_read") ) { return file_read_dyn(); }
		if (HX_FIELD_EQ(inName,"file_seek") ) { return file_seek_dyn(); }
		if (HX_FIELD_EQ(inName,"file_tell") ) { return file_tell_dyn(); }
		if (HX_FIELD_EQ(inName,"file_size") ) { return file_size_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"file_write") ) { return file_write_dyn(); }
		if (HX_FIELD_EQ(inName,"file_close") ) { return file_close_dyn(); }
		if (HX_FIELD_EQ(inName,"_data_load") ) { return _data_load_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"file_handle") ) { return file_handle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"app_path_prefs") ) { return app_path_prefs_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"string_save_path") ) { return string_save_path_dyn(); }
		if (HX_FIELD_EQ(inName,"string_slot_save") ) { return string_slot_save_dyn(); }
		if (HX_FIELD_EQ(inName,"string_slot_load") ) { return string_slot_load_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"string_slot_encode") ) { return string_slot_encode_dyn(); }
		if (HX_FIELD_EQ(inName,"string_slot_decode") ) { return string_slot_decode_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"string_slot_destroy") ) { return string_slot_destroy_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"file_handle_from_mem") ) { return file_handle_from_mem_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IO_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IO_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(IO_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("onevent","\x9b","\xf6","\xd4","\x78"),
	HX_HCSTRING("app_path","\x43","\x9d","\xdc","\xa2"),
	HX_HCSTRING("app_path_prefs","\xf4","\x00","\x3e","\x80"),
	HX_HCSTRING("url_open","\xda","\x21","\xed","\xd3"),
	HX_HCSTRING("data_load","\x9b","\xc7","\x8a","\xad"),
	HX_HCSTRING("data_save","\xb2","\xb8","\x20","\xb2"),
	HX_HCSTRING("string_save_path","\xf9","\xcc","\x0c","\xb8"),
	HX_HCSTRING("string_slot_destroy","\xe7","\x0d","\x86","\x12"),
	HX_HCSTRING("string_slot_save","\x30","\x84","\x77","\x0b"),
	HX_HCSTRING("string_slot_load","\x19","\x93","\xe1","\x06"),
	HX_HCSTRING("string_slot_encode","\xc9","\x4d","\x34","\x52"),
	HX_HCSTRING("string_slot_decode","\xe1","\xb8","\x3d","\xbd"),
	HX_HCSTRING("file_handle","\x4b","\xce","\x5d","\xec"),
	HX_HCSTRING("file_handle_from_mem","\x34","\x7d","\xf0","\x5b"),
	HX_HCSTRING("file_read","\x39","\x97","\xb2","\x6d"),
	HX_HCSTRING("file_write","\x9c","\x87","\x30","\x78"),
	HX_HCSTRING("file_seek","\x5b","\xd1","\x5b","\x6e"),
	HX_HCSTRING("file_tell","\x14","\x0e","\x05","\x6f"),
	HX_HCSTRING("file_close","\x75","\x32","\x3a","\xf0"),
	HX_HCSTRING("file_size","\xa4","\xec","\x5e","\x6e"),
	HX_HCSTRING("_data_load","\x5c","\x43","\x2d","\x09"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IO_obj::__mClass,"__mClass");
};

#endif

hx::Class IO_obj::__mClass;

void IO_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.core.native.io.IO","\x1b","\xb9","\x31","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IO_obj >;
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
} // end namespace core
} // end namespace native
} // end namespace io
