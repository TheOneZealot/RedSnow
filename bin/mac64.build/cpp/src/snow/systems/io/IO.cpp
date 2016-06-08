#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_crypto_Base64
#include <haxe/crypto/Base64.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_snow_modules_sdl_IO
#include <snow/modules/sdl/IO.h>
#endif
#ifndef INCLUDED_snow_systems_io_IO
#include <snow/systems/io/IO.h>
#endif
#ifndef INCLUDED_snow_types_SystemEvent
#include <snow/types/SystemEvent.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
namespace snow{
namespace systems{
namespace io{

Void IO_obj::__construct(::snow::Snow _app)
{
HX_STACK_FRAME("snow.systems.io.IO","new",0xbb4a146b,"snow.systems.io.IO.new","snow/systems/io/IO.hx",9,0x7ba838c6)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
{
	HX_STACK_LINE(20)
	this->string_save_prefix = HX_HCSTRING("slot","\xfe","\xdd","\x55","\x4c");
	HX_STACK_LINE(25)
	this->app = _app;
	HX_STACK_LINE(26)
	::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	::snow::modules::sdl::IO tmp1 = ::snow::modules::sdl::IO_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	this->module = tmp1;
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

::String IO_obj::app_path( ){
	HX_STACK_FRAME("snow.systems.io.IO","app_path",0x169cd158,"snow.systems.io.IO.app_path","snow/systems/io/IO.hx",30,0x7ba838c6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	::snow::modules::sdl::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	::String tmp1 = tmp->app_path();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(IO_obj,app_path,return )

::String IO_obj::app_path_prefs( ){
	HX_STACK_FRAME("snow.systems.io.IO","app_path_prefs",0x095ff2c9,"snow.systems.io.IO.app_path_prefs","snow/systems/io/IO.hx",36,0x7ba838c6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	::snow::modules::sdl::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	::String tmp1 = tmp->app_path_prefs();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(IO_obj,app_path_prefs,return )

Void IO_obj::url_open( ::String _url){
{
		HX_STACK_FRAME("snow.systems.io.IO","url_open",0x47ad55ef,"snow.systems.io.IO.url_open","snow/systems/io/IO.hx",43,0x7ba838c6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_url,"_url")
		HX_STACK_LINE(45)
		::snow::modules::sdl::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		::String tmp1 = _url;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		tmp->url_open(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,url_open,(void))

::snow::api::Promise IO_obj::data_load( ::String _path,Dynamic _options){
	HX_STACK_FRAME("snow.systems.io.IO","data_load",0x81f825e6,"snow.systems.io.IO.data_load","snow/systems/io/IO.hx",51,0x7ba838c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_options,"_options")
	HX_STACK_LINE(53)
	::snow::modules::sdl::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	::String tmp1 = _path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	Dynamic tmp2 = _options;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	::snow::api::Promise tmp3 = tmp->data_load(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(IO_obj,data_load,return )

bool IO_obj::data_save( ::String _path,::snow::api::buffers::ArrayBufferView _data,Dynamic _options){
	HX_STACK_FRAME("snow.systems.io.IO","data_save",0x868e16fd,"snow.systems.io.IO.data_save","snow/systems/io/IO.hx",60,0x7ba838c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_data,"_data")
	HX_STACK_ARG(_options,"_options")
	HX_STACK_LINE(62)
	::snow::modules::sdl::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	::String tmp1 = _path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	::snow::api::buffers::ArrayBufferView tmp2 = _data;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	Dynamic tmp3 = _options;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	bool tmp4 = tmp->data_save(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC3(IO_obj,data_save,return )

::snow::api::Promise IO_obj::data_flow( ::String _id,Dynamic _processor,Dynamic _provider){
	HX_STACK_FRAME("snow.systems.io.IO","data_flow",0x7dfea3ae,"snow.systems.io.IO.data_flow","snow/systems/io/IO.hx",67,0x7ba838c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_processor,"_processor")
	HX_STACK_ARG(_provider,"_provider")
	HX_STACK_LINE(67)
	::snow::systems::io::IO _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(69)
	bool tmp = (_provider == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	if ((tmp)){
		HX_STACK_LINE(69)
		Dynamic tmp1 = this->default_provider_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		_provider = tmp1;
	}

	HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_1_1,Dynamic,_processor,::snow::systems::io::IO,_g,::String,_id,Dynamic,_provider)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/systems/io/IO.hx",71,0x7ba838c6)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(73)
			::snow::Snow tmp1 = _g->app;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(73)
			::String tmp2 = _id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			::snow::api::Promise tmp3 = _provider(tmp1,tmp2).Cast< ::snow::api::Promise >();		HX_STACK_VAR(tmp3,"tmp3");

			HX_BEGIN_LOCAL_FUNC_S5(hx::LocalFunc,_Function_2_1,Dynamic,_processor,::snow::systems::io::IO,_g,Dynamic,reject,Dynamic,resolve,::String,_id)
			int __ArgCount() const { return 1; }
			Void run(Dynamic data){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/systems/io/IO.hx",75,0x7ba838c6)
				HX_STACK_ARG(data,"data")
				{
					HX_STACK_LINE(76)
					bool tmp4 = (_processor != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(76)
					if ((tmp4)){
						HX_STACK_LINE(77)
						::snow::Snow tmp5 = _g->app;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(77)
						::String tmp6 = _id;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(77)
						Dynamic tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(77)
						::snow::api::Promise tmp8 = _processor(tmp5,tmp6,tmp7).Cast< ::snow::api::Promise >();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(77)
						Dynamic tmp9 = resolve;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(77)
						Dynamic tmp10 = reject;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(77)
						tmp8->then(tmp9,tmp10);
					}
					else{
						HX_STACK_LINE(79)
						Dynamic tmp5 = data;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(79)
						resolve(tmp5);
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(73)
			::snow::api::Promise tmp4 = tmp3->then( Dynamic(new _Function_2_1(_processor,_g,reject,resolve,_id)),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(83)
			Dynamic tmp5 = reject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(73)
			tmp4->error(tmp5);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(71)
	::snow::api::Promise tmp1 = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_processor,_g,_id,_provider)));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC3(IO_obj,data_flow,return )

::String IO_obj::string_save_path( hx::Null< int >  __o__slot){
int _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.systems.io.IO","string_save_path",0x42ee9e0e,"snow.systems.io.IO.string_save_path","snow/systems/io/IO.hx",96,0x7ba838c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(98)
		::snow::modules::sdl::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		int tmp1 = _slot;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		::String tmp2 = tmp->string_save_path(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,string_save_path,return )

bool IO_obj::string_save( ::String _key,::String _value,hx::Null< int >  __o__slot){
int _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.systems.io.IO","string_save",0x486dafb6,"snow.systems.io.IO.string_save","snow/systems/io/IO.hx",108,0x7ba838c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_ARG(_value,"_value")
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(110)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			::haxe::ds::IntMap tmp1 = this->string_slots;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(110)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(110)
			if ((tmp2)){
				HX_STACK_LINE(110)
				::haxe::ds::IntMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(110)
				{
					HX_STACK_LINE(110)
					::haxe::ds::IntMap tmp4 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(110)
					::haxe::ds::IntMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(110)
					tmp3 = tmp5;
				}
				HX_STACK_LINE(110)
				this->string_slots = tmp3;
			}
			HX_STACK_LINE(110)
			::haxe::ds::IntMap tmp3 = this->string_slots;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(110)
			int tmp4 = _slot;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(110)
			::haxe::ds::StringMap tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(110)
			::haxe::ds::StringMap _string_map = tmp5;		HX_STACK_VAR(_string_map,"_string_map");
			HX_STACK_LINE(110)
			bool tmp6 = (_string_map == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(110)
			if ((tmp6)){
				HX_STACK_LINE(110)
				::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(110)
				{
					HX_STACK_LINE(110)
					::snow::modules::sdl::IO tmp8 = this->module;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(110)
					::snow::modules::sdl::IO _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(110)
					int tmp9 = _slot;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(110)
					::String tmp10 = _this->string_save_path(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(110)
					::snow::api::buffers::ArrayBufferView tmp11 = _this->_data_load(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(110)
					::snow::api::buffers::ArrayBufferView _data = tmp11;		HX_STACK_VAR(_data,"_data");
					HX_STACK_LINE(110)
					bool tmp12 = (_data == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(110)
					if ((tmp12)){
						HX_STACK_LINE(110)
						tmp7 = null();
					}
					else{
						HX_STACK_LINE(110)
						Array< unsigned char > tmp13 = _data->buffer;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(110)
						::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::ofData(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(110)
						tmp7 = tmp14->toString();
					}
				}
				HX_STACK_LINE(110)
				::String _string = tmp7;		HX_STACK_VAR(_string,"_string");
				HX_STACK_LINE(110)
				bool tmp8 = (_string == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(110)
				if ((tmp8)){
					HX_STACK_LINE(110)
					::haxe::ds::StringMap tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(110)
					{
						HX_STACK_LINE(110)
						::haxe::ds::StringMap tmp10 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(110)
						::haxe::ds::StringMap tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(110)
						tmp9 = tmp11;
					}
					HX_STACK_LINE(110)
					_string_map = tmp9;
				}
				else{
					HX_STACK_LINE(110)
					::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(110)
					{
						HX_STACK_LINE(110)
						{
							HX_STACK_LINE(110)
							bool tmp10 = (_string == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(110)
							if ((tmp10)){
								HX_STACK_LINE(110)
								::String tmp11 = HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a");		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(110)
								::snow::api::DebugError tmp12 = ::snow::api::DebugError_obj::null_assertion(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(110)
								HX_STACK_DO_THROW(tmp12);
							}
						}
						HX_STACK_LINE(110)
						::String tmp10 = _string;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(110)
						::haxe::io::Bytes tmp11 = ::haxe::crypto::Base64_obj::decode(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(110)
						::haxe::io::Bytes _bytes = tmp11;		HX_STACK_VAR(_bytes,"_bytes");
						HX_STACK_LINE(110)
						tmp9 = _bytes->toString();
					}
					HX_STACK_LINE(110)
					_string = tmp9;
					HX_STACK_LINE(110)
					::String tmp10 = _string;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(110)
					Dynamic tmp11 = ::haxe::Unserializer_obj::run(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(110)
					_string_map = tmp11;
				}
				HX_STACK_LINE(110)
				::haxe::ds::IntMap tmp9 = this->string_slots;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(110)
				int tmp10 = _slot;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(110)
				::haxe::ds::StringMap tmp11 = _string_map;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(110)
				tmp9->set(tmp10,tmp11);
			}
			HX_STACK_LINE(110)
			tmp = _string_map;
		}
		HX_STACK_LINE(110)
		::haxe::ds::StringMap _string_map = tmp;		HX_STACK_VAR(_string_map,"_string_map");
		HX_STACK_LINE(112)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			{
				HX_STACK_LINE(112)
				bool tmp2 = (_key == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(112)
				if ((tmp2)){
					HX_STACK_LINE(112)
					::String tmp3 = HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a");		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(112)
					::snow::api::DebugError tmp4 = ::snow::api::DebugError_obj::null_assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(112)
					HX_STACK_DO_THROW(tmp4);
				}
			}
			HX_STACK_LINE(112)
			::String tmp2 = _key;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(112)
			::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::ofString(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(112)
			::haxe::io::Bytes _bytes = tmp3;		HX_STACK_VAR(_bytes,"_bytes");
			HX_STACK_LINE(112)
			::haxe::io::Bytes tmp4 = _bytes;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(112)
			tmp1 = ::haxe::crypto::Base64_obj::encode(tmp4,null());
		}
		HX_STACK_LINE(112)
		::String _encoded_key = tmp1;		HX_STACK_VAR(_encoded_key,"_encoded_key");
		HX_STACK_LINE(115)
		bool tmp2 = (_value == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(115)
		if ((tmp2)){
			HX_STACK_LINE(119)
			::String tmp3 = _encoded_key;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(119)
			_string_map->remove(tmp3);
		}
		else{
			HX_STACK_LINE(123)
			::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				{
					HX_STACK_LINE(123)
					bool tmp4 = (_value == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(123)
					if ((tmp4)){
						HX_STACK_LINE(123)
						::String tmp5 = HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a");		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(123)
						::snow::api::DebugError tmp6 = ::snow::api::DebugError_obj::null_assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(123)
						HX_STACK_DO_THROW(tmp6);
					}
				}
				HX_STACK_LINE(123)
				::String tmp4 = _value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(123)
				::haxe::io::Bytes tmp5 = ::haxe::io::Bytes_obj::ofString(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(123)
				::haxe::io::Bytes _bytes = tmp5;		HX_STACK_VAR(_bytes,"_bytes");
				HX_STACK_LINE(123)
				::haxe::io::Bytes tmp6 = _bytes;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(123)
				tmp3 = ::haxe::crypto::Base64_obj::encode(tmp6,null());
			}
			HX_STACK_LINE(123)
			::String _encoded_value = tmp3;		HX_STACK_VAR(_encoded_value,"_encoded_value");
			HX_STACK_LINE(127)
			::String tmp4 = _encoded_key;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(127)
			::String tmp5 = _encoded_value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(127)
			_string_map->set(tmp4,tmp5);
		}
		HX_STACK_LINE(131)
		::haxe::ds::StringMap tmp3 = _string_map;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(131)
		::String tmp4 = ::haxe::Serializer_obj::run(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(131)
		::String _contents = tmp4;		HX_STACK_VAR(_contents,"_contents");
		HX_STACK_LINE(132)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				bool tmp6 = (_contents == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(132)
				if ((tmp6)){
					HX_STACK_LINE(132)
					::String tmp7 = HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a");		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(132)
					::snow::api::DebugError tmp8 = ::snow::api::DebugError_obj::null_assertion(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(132)
					HX_STACK_DO_THROW(tmp8);
				}
			}
			HX_STACK_LINE(132)
			::String tmp6 = _contents;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(132)
			::haxe::io::Bytes tmp7 = ::haxe::io::Bytes_obj::ofString(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(132)
			::haxe::io::Bytes _bytes = tmp7;		HX_STACK_VAR(_bytes,"_bytes");
			HX_STACK_LINE(132)
			::haxe::io::Bytes tmp8 = _bytes;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(132)
			tmp5 = ::haxe::crypto::Base64_obj::encode(tmp8,null());
		}
		HX_STACK_LINE(132)
		_contents = tmp5;
		HX_STACK_LINE(134)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			::snow::modules::sdl::IO tmp7 = this->module;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(134)
			::snow::modules::sdl::IO _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(134)
			int tmp8 = _slot;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(134)
			::String tmp9 = _this->string_save_path(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(134)
			::String _path = tmp9;		HX_STACK_VAR(_path,"_path");
			HX_STACK_LINE(134)
			::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				::String tmp11 = _contents;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(134)
				::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::ofString(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(134)
				::haxe::io::Bytes _bytes = tmp12;		HX_STACK_VAR(_bytes,"_bytes");
				HX_STACK_LINE(134)
				Dynamic _byteLength = null();		HX_STACK_VAR(_byteLength,"_byteLength");
				HX_STACK_LINE(134)
				bool tmp13 = (_byteLength == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(134)
				if ((tmp13)){
					HX_STACK_LINE(134)
					_byteLength = _bytes->length;
				}
				HX_STACK_LINE(134)
				{
					HX_STACK_LINE(134)
					Array< unsigned char > _buffer = _bytes->b;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(134)
					int _byteOffset = (int)0;		HX_STACK_VAR(_byteOffset,"_byteOffset");
					HX_STACK_LINE(134)
					int _byteLength1 = _byteLength;		HX_STACK_VAR(_byteLength1,"_byteLength1");
					HX_STACK_LINE(134)
					{
						HX_STACK_LINE(134)
						::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(134)
						::snow::api::buffers::ArrayBufferView _view = tmp14;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(134)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(134)
						bool tmp15 = (_byteOffset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(134)
						if ((tmp15)){
							HX_STACK_LINE(134)
							::snow::api::buffers::TAError tmp16 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(134)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(134)
						int tmp16 = hx::Mod(_byteOffset,_bytes_per_elem);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(134)
						bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(134)
						if ((tmp17)){
							HX_STACK_LINE(134)
							::snow::api::buffers::TAError tmp18 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(134)
							HX_STACK_DO_THROW(tmp18);
						}
						HX_STACK_LINE(134)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(134)
						int tmp18 = (_byteOffset + _byteLength1);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(134)
						int _new_range = tmp18;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(134)
						bool tmp19 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(134)
						if ((tmp19)){
							HX_STACK_LINE(134)
							::snow::api::buffers::TAError tmp20 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(134)
							HX_STACK_DO_THROW(tmp20);
						}
						HX_STACK_LINE(134)
						_view->buffer = _buffer;
						HX_STACK_LINE(134)
						_view->byteOffset = _byteOffset;
						HX_STACK_LINE(134)
						_view->byteLength = _byteLength1;
						HX_STACK_LINE(134)
						Float tmp20 = (Float(_byteLength1) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(134)
						int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(134)
						_view->length = tmp21;
						HX_STACK_LINE(134)
						tmp10 = _view;
					}
				}
			}
			HX_STACK_LINE(134)
			::snow::api::buffers::ArrayBufferView _data = tmp10;		HX_STACK_VAR(_data,"_data");
			HX_STACK_LINE(134)
			::String tmp11 = _path;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(134)
			::snow::api::buffers::ArrayBufferView tmp12 = _data;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(134)
			tmp6 = _this->data_save(tmp11,tmp12,null());
		}
		HX_STACK_LINE(134)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(IO_obj,string_save,return )

::String IO_obj::string_load( ::String _key,hx::Null< int >  __o__slot){
int _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.systems.io.IO","string_load",0x43d7be9f,"snow.systems.io.IO.string_load","snow/systems/io/IO.hx",141,0x7ba838c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(143)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		{
			HX_STACK_LINE(143)
			::haxe::ds::IntMap tmp1 = this->string_slots;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(143)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(143)
			if ((tmp2)){
				HX_STACK_LINE(143)
				::haxe::ds::IntMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(143)
				{
					HX_STACK_LINE(143)
					::haxe::ds::IntMap tmp4 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(143)
					::haxe::ds::IntMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(143)
					tmp3 = tmp5;
				}
				HX_STACK_LINE(143)
				this->string_slots = tmp3;
			}
			HX_STACK_LINE(143)
			::haxe::ds::IntMap tmp3 = this->string_slots;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(143)
			int tmp4 = _slot;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(143)
			::haxe::ds::StringMap tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(143)
			::haxe::ds::StringMap _string_map = tmp5;		HX_STACK_VAR(_string_map,"_string_map");
			HX_STACK_LINE(143)
			bool tmp6 = (_string_map == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(143)
			if ((tmp6)){
				HX_STACK_LINE(143)
				::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(143)
				{
					HX_STACK_LINE(143)
					::snow::modules::sdl::IO tmp8 = this->module;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(143)
					::snow::modules::sdl::IO _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(143)
					int tmp9 = _slot;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(143)
					::String tmp10 = _this->string_save_path(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(143)
					::snow::api::buffers::ArrayBufferView tmp11 = _this->_data_load(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(143)
					::snow::api::buffers::ArrayBufferView _data = tmp11;		HX_STACK_VAR(_data,"_data");
					HX_STACK_LINE(143)
					bool tmp12 = (_data == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(143)
					if ((tmp12)){
						HX_STACK_LINE(143)
						tmp7 = null();
					}
					else{
						HX_STACK_LINE(143)
						Array< unsigned char > tmp13 = _data->buffer;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(143)
						::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::ofData(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(143)
						tmp7 = tmp14->toString();
					}
				}
				HX_STACK_LINE(143)
				::String _string = tmp7;		HX_STACK_VAR(_string,"_string");
				HX_STACK_LINE(143)
				bool tmp8 = (_string == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(143)
				if ((tmp8)){
					HX_STACK_LINE(143)
					::haxe::ds::StringMap tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(143)
					{
						HX_STACK_LINE(143)
						::haxe::ds::StringMap tmp10 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(143)
						::haxe::ds::StringMap tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(143)
						tmp9 = tmp11;
					}
					HX_STACK_LINE(143)
					_string_map = tmp9;
				}
				else{
					HX_STACK_LINE(143)
					::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(143)
					{
						HX_STACK_LINE(143)
						{
							HX_STACK_LINE(143)
							bool tmp10 = (_string == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(143)
							if ((tmp10)){
								HX_STACK_LINE(143)
								::String tmp11 = HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a");		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(143)
								::snow::api::DebugError tmp12 = ::snow::api::DebugError_obj::null_assertion(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(143)
								HX_STACK_DO_THROW(tmp12);
							}
						}
						HX_STACK_LINE(143)
						::String tmp10 = _string;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(143)
						::haxe::io::Bytes tmp11 = ::haxe::crypto::Base64_obj::decode(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(143)
						::haxe::io::Bytes _bytes = tmp11;		HX_STACK_VAR(_bytes,"_bytes");
						HX_STACK_LINE(143)
						tmp9 = _bytes->toString();
					}
					HX_STACK_LINE(143)
					_string = tmp9;
					HX_STACK_LINE(143)
					::String tmp10 = _string;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(143)
					Dynamic tmp11 = ::haxe::Unserializer_obj::run(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(143)
					_string_map = tmp11;
				}
				HX_STACK_LINE(143)
				::haxe::ds::IntMap tmp9 = this->string_slots;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(143)
				int tmp10 = _slot;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(143)
				::haxe::ds::StringMap tmp11 = _string_map;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(143)
				tmp9->set(tmp10,tmp11);
			}
			HX_STACK_LINE(143)
			tmp = _string_map;
		}
		HX_STACK_LINE(143)
		::haxe::ds::StringMap _string_map = tmp;		HX_STACK_VAR(_string_map,"_string_map");
		HX_STACK_LINE(145)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(145)
		{
			HX_STACK_LINE(145)
			{
				HX_STACK_LINE(145)
				bool tmp2 = (_key == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(145)
				if ((tmp2)){
					HX_STACK_LINE(145)
					::String tmp3 = HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a");		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(145)
					::snow::api::DebugError tmp4 = ::snow::api::DebugError_obj::null_assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(145)
					HX_STACK_DO_THROW(tmp4);
				}
			}
			HX_STACK_LINE(145)
			::String tmp2 = _key;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(145)
			::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::ofString(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(145)
			::haxe::io::Bytes _bytes = tmp3;		HX_STACK_VAR(_bytes,"_bytes");
			HX_STACK_LINE(145)
			::haxe::io::Bytes tmp4 = _bytes;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(145)
			tmp1 = ::haxe::crypto::Base64_obj::encode(tmp4,null());
		}
		HX_STACK_LINE(145)
		::String _encoded_key = tmp1;		HX_STACK_VAR(_encoded_key,"_encoded_key");
		HX_STACK_LINE(146)
		::String tmp2 = _encoded_key;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		::String tmp3 = _string_map->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(146)
		::String _encoded_value = tmp3;		HX_STACK_VAR(_encoded_value,"_encoded_value");
		HX_STACK_LINE(150)
		bool tmp4 = (_encoded_value == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(150)
		if ((tmp4)){
			HX_STACK_LINE(151)
			return null();
		}
		HX_STACK_LINE(154)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(154)
		{
			HX_STACK_LINE(154)
			{
				HX_STACK_LINE(154)
				bool tmp6 = (_encoded_value == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(154)
				if ((tmp6)){
					HX_STACK_LINE(154)
					::String tmp7 = HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a");		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(154)
					::snow::api::DebugError tmp8 = ::snow::api::DebugError_obj::null_assertion(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(154)
					HX_STACK_DO_THROW(tmp8);
				}
			}
			HX_STACK_LINE(154)
			::String tmp6 = _encoded_value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(154)
			::haxe::io::Bytes tmp7 = ::haxe::crypto::Base64_obj::decode(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(154)
			::haxe::io::Bytes _bytes = tmp7;		HX_STACK_VAR(_bytes,"_bytes");
			HX_STACK_LINE(154)
			tmp5 = _bytes->toString();
		}
		HX_STACK_LINE(154)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(IO_obj,string_load,return )

bool IO_obj::string_destroy( hx::Null< int >  __o__slot){
int _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.systems.io.IO","string_destroy",0x980f5a21,"snow.systems.io.IO.string_destroy","snow/systems/io/IO.hx",160,0x7ba838c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(162)
		::haxe::ds::IntMap tmp = this->string_slots;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		if ((tmp1)){
			HX_STACK_LINE(163)
			::haxe::ds::IntMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(163)
			{
				HX_STACK_LINE(163)
				::haxe::ds::IntMap tmp3 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(163)
				::haxe::ds::IntMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(163)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(163)
			this->string_slots = tmp2;
		}
		else{
			HX_STACK_LINE(165)
			::haxe::ds::IntMap tmp2 = this->string_slots;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(165)
			int tmp3 = _slot;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(165)
			tmp2->remove(tmp3);
		}
		HX_STACK_LINE(168)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(168)
		{
			HX_STACK_LINE(168)
			::snow::modules::sdl::IO tmp3 = this->module;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(168)
			int tmp4 = _slot;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(168)
			::String tmp5 = tmp3->string_save_path(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(168)
			::String _path = tmp5;		HX_STACK_VAR(_path,"_path");
			HX_STACK_LINE(168)
			bool _result = true;		HX_STACK_VAR(_result,"_result");
			HX_STACK_LINE(168)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(168)
				::String tmp6 = _path;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(168)
				::sys::FileSystem_obj::deleteFile(tmp6);
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(168)
						_result = false;
					}
				}
			}
			HX_STACK_LINE(168)
			tmp2 = _result;
		}
		HX_STACK_LINE(168)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,string_destroy,return )

::haxe::ds::StringMap IO_obj::string_slots_sync( hx::Null< int >  __o__slot){
int _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.systems.io.IO","string_slots_sync",0x7ed90a9e,"snow.systems.io.IO.string_slots_sync","snow/systems/io/IO.hx",178,0x7ba838c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(181)
		::haxe::ds::IntMap tmp = this->string_slots;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(181)
		if ((tmp1)){
			HX_STACK_LINE(182)
			::haxe::ds::IntMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				::haxe::ds::IntMap tmp3 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(182)
				::haxe::ds::IntMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(182)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(182)
			this->string_slots = tmp2;
		}
		HX_STACK_LINE(185)
		::haxe::ds::IntMap tmp2 = this->string_slots;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(185)
		int tmp3 = _slot;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(185)
		::haxe::ds::StringMap tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(185)
		::haxe::ds::StringMap _string_map = tmp4;		HX_STACK_VAR(_string_map,"_string_map");
		HX_STACK_LINE(187)
		bool tmp5 = (_string_map == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(187)
		if ((tmp5)){
			HX_STACK_LINE(189)
			::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(189)
			{
				HX_STACK_LINE(189)
				::snow::modules::sdl::IO tmp7 = this->module;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(189)
				::snow::modules::sdl::IO _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(189)
				int tmp8 = _slot;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(189)
				::String tmp9 = _this->string_save_path(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(189)
				::snow::api::buffers::ArrayBufferView tmp10 = _this->_data_load(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(189)
				::snow::api::buffers::ArrayBufferView _data = tmp10;		HX_STACK_VAR(_data,"_data");
				HX_STACK_LINE(189)
				bool tmp11 = (_data == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(189)
				if ((tmp11)){
					HX_STACK_LINE(189)
					tmp6 = null();
				}
				else{
					HX_STACK_LINE(189)
					Array< unsigned char > tmp12 = _data->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(189)
					::haxe::io::Bytes tmp13 = ::haxe::io::Bytes_obj::ofData(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(189)
					tmp6 = tmp13->toString();
				}
			}
			HX_STACK_LINE(189)
			::String _string = tmp6;		HX_STACK_VAR(_string,"_string");
			HX_STACK_LINE(190)
			bool tmp7 = (_string == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(190)
			if ((tmp7)){
				HX_STACK_LINE(191)
				::haxe::ds::StringMap tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(191)
				{
					HX_STACK_LINE(191)
					::haxe::ds::StringMap tmp9 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(191)
					::haxe::ds::StringMap tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					tmp8 = tmp10;
				}
				HX_STACK_LINE(191)
				_string_map = tmp8;
			}
			else{
				HX_STACK_LINE(193)
				::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(193)
				{
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						bool tmp9 = (_string == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(193)
						if ((tmp9)){
							HX_STACK_LINE(193)
							::String tmp10 = HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a");		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(193)
							::snow::api::DebugError tmp11 = ::snow::api::DebugError_obj::null_assertion(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(193)
							HX_STACK_DO_THROW(tmp11);
						}
					}
					HX_STACK_LINE(193)
					::String tmp9 = _string;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(193)
					::haxe::io::Bytes tmp10 = ::haxe::crypto::Base64_obj::decode(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(193)
					::haxe::io::Bytes _bytes = tmp10;		HX_STACK_VAR(_bytes,"_bytes");
					HX_STACK_LINE(193)
					tmp8 = _bytes->toString();
				}
				HX_STACK_LINE(193)
				_string = tmp8;
				HX_STACK_LINE(194)
				::String tmp9 = _string;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(194)
				Dynamic tmp10 = ::haxe::Unserializer_obj::run(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(194)
				_string_map = tmp10;
			}
			HX_STACK_LINE(197)
			::haxe::ds::IntMap tmp8 = this->string_slots;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(197)
			int tmp9 = _slot;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(197)
			::haxe::ds::StringMap tmp10 = _string_map;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(197)
			tmp8->set(tmp9,tmp10);
		}
		HX_STACK_LINE(201)
		::haxe::ds::StringMap tmp6 = _string_map;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(201)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,string_slots_sync,return )

::snow::api::Promise IO_obj::default_provider( ::snow::Snow _app,::String _id){
	HX_STACK_FRAME("snow.systems.io.IO","default_provider",0x16d740c4,"snow.systems.io.IO.default_provider","snow/systems/io/IO.hx",208,0x7ba838c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_app,"_app")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(208)
	::snow::modules::sdl::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	::snow::api::Promise tmp2 = tmp->data_load(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(208)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(IO_obj,default_provider,return )

Void IO_obj::onevent( ::snow::types::SystemEvent _event){
{
		HX_STACK_FRAME("snow.systems.io.IO","onevent",0x7ba59c26,"snow.systems.io.IO.onevent","snow/systems/io/IO.hx",211,0x7ba838c6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(213)
		::snow::modules::sdl::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(213)
		::snow::types::SystemEvent tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(213)
		tmp->onevent(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,onevent,(void))

Void IO_obj::shutdown( ){
{
		HX_STACK_FRAME("snow.systems.io.IO","shutdown",0xdecc30ab,"snow.systems.io.IO.shutdown","snow/systems/io/IO.hx",218,0x7ba838c6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(220)
		::snow::modules::sdl::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		tmp->shutdown();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IO_obj,shutdown,(void))


IO_obj::IO_obj()
{
}

void IO_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IO);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(module,"module");
	HX_MARK_MEMBER_NAME(string_save_prefix,"string_save_prefix");
	HX_MARK_MEMBER_NAME(string_slots,"string_slots");
	HX_MARK_END_CLASS();
}

void IO_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(module,"module");
	HX_VISIT_MEMBER_NAME(string_save_prefix,"string_save_prefix");
	HX_VISIT_MEMBER_NAME(string_slots,"string_slots");
}

Dynamic IO_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"module") ) { return module; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onevent") ) { return onevent_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"app_path") ) { return app_path_dyn(); }
		if (HX_FIELD_EQ(inName,"url_open") ) { return url_open_dyn(); }
		if (HX_FIELD_EQ(inName,"shutdown") ) { return shutdown_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"data_load") ) { return data_load_dyn(); }
		if (HX_FIELD_EQ(inName,"data_save") ) { return data_save_dyn(); }
		if (HX_FIELD_EQ(inName,"data_flow") ) { return data_flow_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"string_save") ) { return string_save_dyn(); }
		if (HX_FIELD_EQ(inName,"string_load") ) { return string_load_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"string_slots") ) { return string_slots; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"app_path_prefs") ) { return app_path_prefs_dyn(); }
		if (HX_FIELD_EQ(inName,"string_destroy") ) { return string_destroy_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"string_save_path") ) { return string_save_path_dyn(); }
		if (HX_FIELD_EQ(inName,"default_provider") ) { return default_provider_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"string_slots_sync") ) { return string_slots_sync_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"string_save_prefix") ) { return string_save_prefix; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IO_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"module") ) { module=inValue.Cast< ::snow::modules::sdl::IO >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"string_slots") ) { string_slots=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"string_save_prefix") ) { string_save_prefix=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IO_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));
	outFields->push(HX_HCSTRING("string_save_prefix","\xe6","\x3d","\x79","\x2e"));
	outFields->push(HX_HCSTRING("string_slots","\x87","\xc3","\x77","\xdd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(IO_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsObject /*::snow::modules::sdl::IO*/ ,(int)offsetof(IO_obj,module),HX_HCSTRING("module","\xac","\x34","\xd3","\xc0")},
	{hx::fsString,(int)offsetof(IO_obj,string_save_prefix),HX_HCSTRING("string_save_prefix","\xe6","\x3d","\x79","\x2e")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(IO_obj,string_slots),HX_HCSTRING("string_slots","\x87","\xc3","\x77","\xdd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"),
	HX_HCSTRING("string_save_prefix","\xe6","\x3d","\x79","\x2e"),
	HX_HCSTRING("app_path","\x43","\x9d","\xdc","\xa2"),
	HX_HCSTRING("app_path_prefs","\xf4","\x00","\x3e","\x80"),
	HX_HCSTRING("url_open","\xda","\x21","\xed","\xd3"),
	HX_HCSTRING("data_load","\x9b","\xc7","\x8a","\xad"),
	HX_HCSTRING("data_save","\xb2","\xb8","\x20","\xb2"),
	HX_HCSTRING("data_flow","\x63","\x45","\x91","\xa9"),
	HX_HCSTRING("string_slots","\x87","\xc3","\x77","\xdd"),
	HX_HCSTRING("string_save_path","\xf9","\xcc","\x0c","\xb8"),
	HX_HCSTRING("string_save","\xab","\xe8","\x33","\x77"),
	HX_HCSTRING("string_load","\x94","\xf7","\x9d","\x72"),
	HX_HCSTRING("string_destroy","\x4c","\x68","\xed","\x0e"),
	HX_HCSTRING("string_slots_sync","\x53","\xe9","\x23","\x84"),
	HX_HCSTRING("default_provider","\xaf","\x6f","\xf5","\x8b"),
	HX_HCSTRING("onevent","\x9b","\xf6","\xd4","\x78"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
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
	__mClass->mName = HX_HCSTRING("snow.systems.io.IO","\xf9","\x02","\x1f","\xf5");
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
} // end namespace systems
} // end namespace io
