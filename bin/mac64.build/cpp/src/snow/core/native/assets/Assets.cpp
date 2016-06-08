#include <hxcpp.h>

#include "linc_sdl.h"
#include "linc_stb_image.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_snow_core_native_assets_Assets
#include <snow/core/native/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_core_native_io_IO
#include <snow/core/native/io/IO.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Assets
#include <snow/modules/interfaces/Assets.h>
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
#ifndef INCLUDED_snow_types_Error
#include <snow/types/Error.h>
#endif
#ifndef INCLUDED_snow_types_ImageData
#include <snow/types/ImageData.h>
#endif
#ifndef INCLUDED_snow_types_SystemEvent
#include <snow/types/SystemEvent.h>
#endif
namespace snow{
namespace core{
namespace native{
namespace assets{

Void Assets_obj::__construct(::snow::Snow _app)
{
HX_STACK_FRAME("snow.core.native.assets.Assets","new",0x87934a4d,"snow.core.native.assets.Assets.new","snow/core/native/assets/Assets.hx",15,0x2669b743)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
{
	HX_STACK_LINE(43)
	this->load_direct_err = (int)0;
	HX_STACK_LINE(18)
	this->app = _app;
}
;
	return null();
}

//Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new(::snow::Snow _app)
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct(_app);
	return _result_;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *Assets_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::snow::modules::interfaces::Assets_obj)) return operator ::snow::modules::interfaces::Assets_obj *();
	return super::__ToInterface(inType);
}

Assets_obj::operator ::snow::modules::interfaces::Assets_obj *()
	{ return new ::snow::modules::interfaces::Assets_delegate_< Assets_obj >(this); }
Void Assets_obj::onevent( ::snow::types::SystemEvent event){
{
		HX_STACK_FRAME("snow.core.native.assets.Assets","onevent",0xfdbc6b08,"snow.core.native.assets.Assets.onevent","snow/core/native/assets/Assets.hx",19,0x2669b743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,onevent,(void))

Void Assets_obj::shutdown( ){
{
		HX_STACK_FRAME("snow.core.native.assets.Assets","shutdown",0x30aa6789,"snow.core.native.assets.Assets.shutdown","snow/core/native/assets/Assets.hx",20,0x2669b743)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,shutdown,(void))

::snow::api::Promise Assets_obj::image_info_from_load( ::String _path,Dynamic __o__components){
Dynamic _components = __o__components.Default(4);
	HX_STACK_FRAME("snow.core.native.assets.Assets","image_info_from_load",0xadc72d21,"snow.core.native.assets.Assets.image_info_from_load","snow/core/native/assets/Assets.hx",24,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_components,"_components")
{
		HX_STACK_LINE(24)
		::snow::core::native::assets::Assets _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			bool tmp = (_path == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(26)
			if ((tmp)){
				HX_STACK_LINE(26)
				::String tmp1 = HX_HCSTRING("_path was null","\xfa","\x86","\x48","\x96");		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(26)
				::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(26)
				HX_STACK_DO_THROW(tmp2);
			}
		}

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,::snow::core::native::assets::Assets,_g,::String,_path,Dynamic,_components)
		int __ArgCount() const { return 2; }
		Void run(Dynamic resolve,Dynamic reject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/core/native/assets/Assets.hx",28,0x2669b743)
			HX_STACK_ARG(resolve,"resolve")
			HX_STACK_ARG(reject,"reject")
			{
				HX_STACK_LINE(30)
				::String tmp = _path;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(30)
				Dynamic tmp1 = _components;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(30)
				::snow::types::ImageData tmp2 = _g->image_info_from_load_direct(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(30)
				::snow::types::ImageData _image = tmp2;		HX_STACK_VAR(_image,"_image");
				HX_STACK_LINE(32)
				bool tmp3 = (_image == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(32)
				if ((tmp3)){
					HX_STACK_LINE(33)
					bool tmp4 = (_g->load_direct_err == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(33)
					::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(33)
					if ((tmp4)){
						HX_STACK_LINE(33)
						tmp5 = HX_HCSTRING("invalid file handle, file not found?","\xd7","\x6c","\x15","\x79");
					}
					else{
						HX_STACK_LINE(33)
						tmp5 = linc::stb_image::failure_reason();
					}
					HX_STACK_LINE(33)
					::String reason = tmp5;		HX_STACK_VAR(reason,"reason");
					HX_STACK_LINE(34)
					::String tmp6 = (HX_HCSTRING("failed to load `","\xc8","\x23","\xec","\x54") + _path);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(34)
					::String tmp7 = (tmp6 + HX_HCSTRING("` as image. reason: `","\xf7","\xfa","\x6d","\x7f"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(34)
					::String tmp8 = reason;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(34)
					::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(34)
					::String tmp10 = (tmp9 + HX_HCSTRING("`","\x60","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(34)
					::snow::types::Error tmp11 = ::snow::types::Error_obj::error(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(34)
					reject(tmp11);
				}
				else{
					HX_STACK_LINE(36)
					::snow::types::ImageData tmp4 = _image;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(36)
					resolve(tmp4);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(28)
		::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g,_path,_components)));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,image_info_from_load,return )

::snow::types::ImageData Assets_obj::image_info_from_load_direct( ::String _path,Dynamic __o__components){
Dynamic _components = __o__components.Default(4);
	HX_STACK_FRAME("snow.core.native.assets.Assets","image_info_from_load_direct",0x118a85c7,"snow.core.native.assets.Assets.image_info_from_load_direct","snow/core/native/assets/Assets.hx",44,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_components,"_components")
{
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			bool tmp = (_path == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(46)
			if ((tmp)){
				HX_STACK_LINE(46)
				::String tmp1 = HX_HCSTRING("_path was null","\xfa","\x86","\x48","\x96");		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(46)
				::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(46)
				HX_STACK_DO_THROW(tmp2);
			}
		}
		HX_STACK_LINE(48)
		this->load_direct_err = (int)0;
		HX_STACK_LINE(50)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		::snow::modules::sdl::IO tmp1 = tmp->io->module;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		::String tmp2 = _path;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		::cpp::Pointer< SDL_RWops > tmp3 = tmp1->file_handle(tmp2,HX_HCSTRING("rb","\xb0","\x63","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		::cpp::Pointer< SDL_RWops > _handle = tmp3;		HX_STACK_VAR(_handle,"_handle");
		HX_STACK_LINE(51)
		bool tmp4 = (_handle == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		if ((tmp4)){
			HX_STACK_LINE(52)
			this->load_direct_err = (int)1;
			HX_STACK_LINE(53)
			return null();
		}
		HX_STACK_LINE(56)
		::snow::Snow tmp5 = this->app;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(56)
		::snow::modules::sdl::IO tmp6 = tmp5->io->module;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(56)
		::cpp::Pointer< SDL_RWops > tmp7 = _handle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(56)
		int tmp8 = tmp6->file_size(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(56)
		int _size = tmp8;		HX_STACK_VAR(_size,"_size");
		HX_STACK_LINE(57)
		::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(57)
			::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				int _elements = _size;		HX_STACK_VAR(_elements,"_elements");
				HX_STACK_LINE(57)
				bool tmp11 = (_elements < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(57)
				if ((tmp11)){
					HX_STACK_LINE(57)
					_elements = (int)0;
				}
				HX_STACK_LINE(57)
				::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(57)
				::snow::api::buffers::ArrayBufferView _view = tmp12;		HX_STACK_VAR(_view,"_view");
				HX_STACK_LINE(57)
				int tmp13 = (_elements * _view->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(57)
				int _bytelen = tmp13;		HX_STACK_VAR(_bytelen,"_bytelen");
				HX_STACK_LINE(57)
				_view->byteOffset = (int)0;
				HX_STACK_LINE(57)
				_view->byteLength = _bytelen;
				HX_STACK_LINE(57)
				Array< unsigned char > tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(57)
				{
					HX_STACK_LINE(57)
					Array< unsigned char > this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(57)
					this2 = Array_obj< unsigned char >::__new();
					HX_STACK_LINE(57)
					bool tmp15 = (_bytelen > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(57)
					if ((tmp15)){
						HX_STACK_LINE(57)
						int tmp16 = (_bytelen - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(57)
						this2[tmp16] = (int)0;
					}
					HX_STACK_LINE(57)
					tmp14 = this2;
				}
				HX_STACK_LINE(57)
				_view->buffer = tmp14;
				HX_STACK_LINE(57)
				_view->length = _elements;
				HX_STACK_LINE(57)
				tmp10 = _view;
			}
			HX_STACK_LINE(57)
			this1 = tmp10;
			HX_STACK_LINE(57)
			tmp9 = this1;
		}
		HX_STACK_LINE(57)
		::snow::api::buffers::ArrayBufferView _file = tmp9;		HX_STACK_VAR(_file,"_file");
		HX_STACK_LINE(59)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			bool tmp11 = (_size < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(59)
			bool aNeg = tmp11;		HX_STACK_VAR(aNeg,"aNeg");
			HX_STACK_LINE(59)
			bool tmp12 = ((int)0 < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(59)
			bool bNeg = tmp12;		HX_STACK_VAR(bNeg,"bNeg");
			HX_STACK_LINE(59)
			bool tmp13 = (aNeg != bNeg);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(59)
			if ((tmp13)){
				HX_STACK_LINE(59)
				tmp10 = aNeg;
			}
			else{
				HX_STACK_LINE(59)
				tmp10 = (_size > (int)0);
			}
		}
		HX_STACK_LINE(59)
		if ((tmp10)){
			HX_STACK_LINE(60)
			::snow::Snow tmp11 = this->app;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(60)
			::snow::modules::sdl::IO tmp12 = tmp11->io->module;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(60)
			::cpp::Pointer< SDL_RWops > tmp13 = _handle;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(60)
			::snow::api::buffers::ArrayBufferView tmp14 = _file;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(60)
			int tmp15 = _size;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(60)
			tmp12->file_read(tmp13,tmp14,tmp15,(int)1);
		}
		HX_STACK_LINE(63)
		::snow::Snow tmp11 = this->app;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(63)
		::snow::modules::sdl::IO tmp12 = tmp11->io->module;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(63)
		::cpp::Pointer< SDL_RWops > tmp13 = _handle;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(63)
		tmp12->file_close(tmp13);
		HX_STACK_LINE(65)
		::String tmp14 = _path;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(65)
		::snow::api::buffers::ArrayBufferView tmp15 = _file;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(65)
		Dynamic tmp16 = _components;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(65)
		::snow::types::ImageData tmp17 = this->image_info_from_bytes_direct(tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(65)
		return tmp17;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,image_info_from_load_direct,return )

::snow::api::Promise Assets_obj::image_info_from_bytes( ::String _id,::snow::api::buffers::ArrayBufferView _bytes,Dynamic __o__components){
Dynamic _components = __o__components.Default(4);
	HX_STACK_FRAME("snow.core.native.assets.Assets","image_info_from_bytes",0xa5291110,"snow.core.native.assets.Assets.image_info_from_bytes","snow/core/native/assets/Assets.hx",69,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_ARG(_components,"_components")
{
		HX_STACK_LINE(69)
		::snow::core::native::assets::Assets _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			bool tmp = (_id == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(71)
			if ((tmp)){
				HX_STACK_LINE(71)
				::String tmp1 = HX_HCSTRING("_id was null","\xc4","\x57","\x88","\xc5");		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(71)
				::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(71)
				HX_STACK_DO_THROW(tmp2);
			}
		}
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			bool tmp = (_bytes == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(72)
			if ((tmp)){
				HX_STACK_LINE(72)
				::String tmp1 = HX_HCSTRING("_bytes was null","\xd2","\x33","\xd5","\x32");		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(72)
				::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(72)
				HX_STACK_DO_THROW(tmp2);
			}
		}

		HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_1_1,::snow::core::native::assets::Assets,_g,::String,_id,::snow::api::buffers::ArrayBufferView,_bytes,Dynamic,_components)
		int __ArgCount() const { return 2; }
		Void run(Dynamic resolve,Dynamic reject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/core/native/assets/Assets.hx",74,0x2669b743)
			HX_STACK_ARG(resolve,"resolve")
			HX_STACK_ARG(reject,"reject")
			{
				HX_STACK_LINE(76)
				::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(76)
				::snow::api::buffers::ArrayBufferView tmp1 = _bytes;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(76)
				Dynamic tmp2 = _components;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(76)
				::snow::types::ImageData tmp3 = _g->image_info_from_bytes_direct(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(76)
				::snow::types::ImageData _image = tmp3;		HX_STACK_VAR(_image,"_image");
				HX_STACK_LINE(78)
				bool tmp4 = (_image == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(78)
				if ((tmp4)){
					HX_STACK_LINE(79)
					::String tmp5 = (HX_HCSTRING("failed to load `","\xc8","\x23","\xec","\x54") + _id);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(79)
					::String tmp6 = (tmp5 + HX_HCSTRING("` from bytes. reason: `","\x6f","\xc4","\x31","\xf4"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(79)
					::String tmp7 = linc::stb_image::failure_reason();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(79)
					::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(79)
					::String tmp9 = (tmp8 + HX_HCSTRING("`","\x60","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(79)
					::snow::types::Error tmp10 = ::snow::types::Error_obj::error(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(79)
					reject(tmp10);
				}
				else{
					HX_STACK_LINE(81)
					::snow::types::ImageData tmp5 = _image;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(81)
					resolve(tmp5);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(74)
		::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g,_id,_bytes,_components)));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,image_info_from_bytes,return )

::snow::types::ImageData Assets_obj::image_info_from_bytes_direct( ::String _id,::snow::api::buffers::ArrayBufferView _bytes,Dynamic __o__components){
Dynamic _components = __o__components.Default(4);
	HX_STACK_FRAME("snow.core.native.assets.Assets","image_info_from_bytes_direct",0x59938db8,"snow.core.native.assets.Assets.image_info_from_bytes_direct","snow/core/native/assets/Assets.hx",88,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_ARG(_components,"_components")
{
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			bool tmp = (_id == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(90)
			if ((tmp)){
				HX_STACK_LINE(90)
				::String tmp1 = HX_HCSTRING("_id was null","\xc4","\x57","\x88","\xc5");		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(90)
				::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(90)
				HX_STACK_DO_THROW(tmp2);
			}
		}
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			bool tmp = (_bytes == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(91)
			if ((tmp)){
				HX_STACK_LINE(91)
				::String tmp1 = HX_HCSTRING("_bytes was null","\xd2","\x33","\xd5","\x32");		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(91)
				::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(91)
				HX_STACK_DO_THROW(tmp2);
			}
		}
		HX_STACK_LINE(93)
		Array< unsigned char > tmp = _bytes->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		int tmp1 = _bytes->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		Dynamic tmp2 = _components;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		Dynamic tmp3 = linc::stb_image::load_from_memory(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(93)
		Dynamic _info = tmp3;		HX_STACK_VAR(_info,"_info");
		HX_STACK_LINE(95)
		bool tmp4 = (_info == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(95)
		if ((tmp4)){
			HX_STACK_LINE(96)
			return null();
		}
		HX_STACK_LINE(101)
		::snow::Snow tmp5 = this->app;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(102)
		::String tmp6 = _id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(103)
		int tmp7 = _info->__Field(HX_HCSTRING("req_comp","\xd0","\x46","\x98","\x03"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(104)
		int tmp8 = _info->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(105)
		int tmp9 = _info->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(106)
		int tmp10 = _info->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(107)
		int tmp11 = _info->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(108)
		int tmp12 = _info->__Field(HX_HCSTRING("comp","\x0f","\xb9","\xc4","\x41"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(109)
		::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			Array< unsigned char > _buffer = _info->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic );		HX_STACK_VAR(_buffer,"_buffer");
			HX_STACK_LINE(109)
			int tmp14 = _info->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(109)
			int _byteLength = tmp14;		HX_STACK_VAR(_byteLength,"_byteLength");
			HX_STACK_LINE(109)
			{
				HX_STACK_LINE(109)
				::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(109)
				::snow::api::buffers::ArrayBufferView _view = tmp15;		HX_STACK_VAR(_view,"_view");
				HX_STACK_LINE(109)
				int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
				HX_STACK_LINE(109)
				bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(109)
				if ((tmp16)){
					HX_STACK_LINE(109)
					::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(109)
					HX_STACK_DO_THROW(tmp17);
				}
				HX_STACK_LINE(109)
				int tmp17 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(109)
				bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(109)
				if ((tmp18)){
					HX_STACK_LINE(109)
					::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(109)
					HX_STACK_DO_THROW(tmp19);
				}
				HX_STACK_LINE(109)
				int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
				HX_STACK_LINE(109)
				int tmp19 = _byteLength;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(109)
				int _new_range = tmp19;		HX_STACK_VAR(_new_range,"_new_range");
				HX_STACK_LINE(109)
				bool tmp20 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(109)
				if ((tmp20)){
					HX_STACK_LINE(109)
					::snow::api::buffers::TAError tmp21 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(109)
					HX_STACK_DO_THROW(tmp21);
				}
				HX_STACK_LINE(109)
				_view->buffer = _buffer;
				HX_STACK_LINE(109)
				_view->byteOffset = (int)0;
				HX_STACK_LINE(109)
				_view->byteLength = _byteLength;
				HX_STACK_LINE(109)
				Float tmp21 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(109)
				int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(109)
				_view->length = tmp22;
				HX_STACK_LINE(109)
				tmp13 = _view;
			}
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::String &tmp6,::snow::api::buffers::ArrayBufferView &tmp13,int &tmp9,int &tmp11,int &tmp10,int &tmp7,int &tmp8,int &tmp12){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/core/native/assets/Assets.hx",101,0x2669b743)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp6,false);
					__result->Add(HX_HCSTRING("bpp","\xe2","\xbe","\x4a","\x00") , tmp7,false);
					__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , tmp8,false);
					__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , tmp9,false);
					__result->Add(HX_HCSTRING("width_actual","\xe7","\x12","\xf5","\xde") , tmp10,false);
					__result->Add(HX_HCSTRING("height_actual","\x26","\x2f","\x9e","\xa1") , tmp11,false);
					__result->Add(HX_HCSTRING("bpp_source","\xd8","\x83","\xda","\x8c") , tmp12,false);
					__result->Add(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c") , tmp13,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(101)
		Dynamic tmp14 = _Function_1_1::Block(tmp6,tmp13,tmp9,tmp11,tmp10,tmp7,tmp8,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(101)
		::snow::types::ImageData tmp15 = ::snow::types::ImageData_obj::__new(tmp5,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(101)
		return tmp15;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,image_info_from_bytes_direct,return )

::snow::types::ImageData Assets_obj::image_info_from_pixels( ::String _id,int _width,int _height,::snow::api::buffers::ArrayBufferView _pixels,Dynamic __o__bpp){
Dynamic _bpp = __o__bpp.Default(4);
	HX_STACK_FRAME("snow.core.native.assets.Assets","image_info_from_pixels",0x440076e8,"snow.core.native.assets.Assets.image_info_from_pixels","snow/core/native/assets/Assets.hx",114,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_width,"_width")
	HX_STACK_ARG(_height,"_height")
	HX_STACK_ARG(_pixels,"_pixels")
	HX_STACK_ARG(_bpp,"_bpp")
{
		HX_STACK_LINE(116)
		{
			HX_STACK_LINE(116)
			bool tmp = (_id == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(116)
			if ((tmp)){
				HX_STACK_LINE(116)
				::String tmp1 = HX_HCSTRING("_id was null","\xc4","\x57","\x88","\xc5");		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(116)
				::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(116)
				HX_STACK_DO_THROW(tmp2);
			}
		}
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			bool tmp = (_pixels == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(117)
			if ((tmp)){
				HX_STACK_LINE(117)
				::String tmp1 = HX_HCSTRING("_pixels was null","\xb2","\x5e","\x44","\xbb");		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(117)
				::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(117)
				HX_STACK_DO_THROW(tmp2);
			}
		}
		HX_STACK_LINE(119)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_1{
			inline static Dynamic Block( int &_height,Dynamic &_bpp,int &_width,::String &_id,::snow::api::buffers::ArrayBufferView &_pixels){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/core/native/assets/Assets.hx",119,0x2669b743)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , _id,false);
					__result->Add(HX_HCSTRING("bpp","\xe2","\xbe","\x4a","\x00") , _bpp,false);
					__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , _width,false);
					__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , _height,false);
					__result->Add(HX_HCSTRING("width_actual","\xe7","\x12","\xf5","\xde") , _width,false);
					__result->Add(HX_HCSTRING("height_actual","\x26","\x2f","\x9e","\xa1") , _height,false);
					__result->Add(HX_HCSTRING("bpp_source","\xd8","\x83","\xda","\x8c") , _bpp,false);
					__result->Add(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c") , _pixels,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(119)
		Dynamic tmp1 = _Function_1_1::Block(_height,_bpp,_width,_id,_pixels);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		::snow::types::ImageData tmp2 = ::snow::types::ImageData_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Assets_obj,image_info_from_pixels,return )


Assets_obj::Assets_obj()
{
}

void Assets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Assets);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(load_direct_err,"load_direct_err");
	HX_MARK_END_CLASS();
}

void Assets_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(load_direct_err,"load_direct_err");
}

Dynamic Assets_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"load_direct_err") ) { return load_direct_err; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"image_info_from_load") ) { return image_info_from_load_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"image_info_from_bytes") ) { return image_info_from_bytes_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"image_info_from_pixels") ) { return image_info_from_pixels_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"image_info_from_load_direct") ) { return image_info_from_load_direct_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"image_info_from_bytes_direct") ) { return image_info_from_bytes_direct_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Assets_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"load_direct_err") ) { load_direct_err=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("load_direct_err","\xc8","\x98","\x00","\x54"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(Assets_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsInt,(int)offsetof(Assets_obj,load_direct_err),HX_HCSTRING("load_direct_err","\xc8","\x98","\x00","\x54")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("onevent","\x9b","\xf6","\xd4","\x78"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("image_info_from_load","\xae","\xa1","\x7a","\x09"),
	HX_HCSTRING("load_direct_err","\xc8","\x98","\x00","\x54"),
	HX_HCSTRING("image_info_from_load_direct","\xda","\x6c","\xb6","\x3e"),
	HX_HCSTRING("image_info_from_bytes","\xe3","\x97","\x7b","\x86"),
	HX_HCSTRING("image_info_from_bytes_direct","\x45","\xd7","\xd1","\xb2"),
	HX_HCSTRING("image_info_from_pixels","\xb5","\xe8","\xe3","\x8a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
};

#endif

hx::Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.core.native.assets.Assets","\xdb","\x1f","\x9b","\xfa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Assets_obj >;
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
} // end namespace assets
