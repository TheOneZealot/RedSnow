#include <hxcpp.h>

#include "linc_sdl.h"
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_core_native_audio_AudioDataPCM
#include <snow/core/native/audio/AudioDataPCM.h>
#endif
#ifndef INCLUDED_snow_core_native_audio_PCM
#include <snow/core/native/audio/PCM.h>
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
#ifndef INCLUDED_snow_types_AudioData
#include <snow/types/AudioData.h>
#endif
namespace snow{
namespace core{
namespace native{
namespace audio{

Void PCM_obj::__construct()
{
	return null();
}

//PCM_obj::~PCM_obj() { }

Dynamic PCM_obj::__CreateEmpty() { return  new PCM_obj; }
hx::ObjectPtr< PCM_obj > PCM_obj::__new()
{  hx::ObjectPtr< PCM_obj > _result_ = new PCM_obj();
	_result_->__construct();
	return _result_;}

Dynamic PCM_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PCM_obj > _result_ = new PCM_obj();
	_result_->__construct();
	return _result_;}

::snow::types::AudioData PCM_obj::from_file( ::snow::Snow app,::String _path,bool _is_stream){
	HX_STACK_FRAME("snow.core.native.audio.PCM","from_file",0x5899c712,"snow.core.native.audio.PCM.from_file","snow/core/native/audio/AudioDataPCM.hx",94,0x3523d5f7)
	HX_STACK_ARG(app,"app")
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_is_stream,"_is_stream")
	HX_STACK_LINE(96)
	::snow::modules::sdl::IO tmp = app->io->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	::String tmp1 = _path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	::cpp::Pointer< SDL_RWops > tmp2 = tmp->file_handle(tmp1,HX_HCSTRING("rb","\xb0","\x63","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	::cpp::Pointer< SDL_RWops > _handle = tmp2;		HX_STACK_VAR(_handle,"_handle");
	HX_STACK_LINE(97)
	bool tmp3 = (_handle == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	if ((tmp3)){
		HX_STACK_LINE(97)
		return null();
	}
	HX_STACK_LINE(99)
	::snow::modules::sdl::IO tmp4 = app->io->module;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(99)
	::cpp::Pointer< SDL_RWops > tmp5 = _handle;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(99)
	int tmp6 = tmp4->file_size(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(99)
	int _length = tmp6;		HX_STACK_VAR(_length,"_length");
	HX_STACK_LINE(100)
	::snow::api::buffers::ArrayBufferView _samples = null();		HX_STACK_VAR(_samples,"_samples");
	HX_STACK_LINE(102)
	bool tmp7 = _is_stream;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(102)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(102)
	if ((tmp8)){
		HX_STACK_LINE(103)
		::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(103)
			::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(103)
			{
				HX_STACK_LINE(103)
				int _elements = _length;		HX_STACK_VAR(_elements,"_elements");
				HX_STACK_LINE(103)
				bool tmp11 = (_elements < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(103)
				if ((tmp11)){
					HX_STACK_LINE(103)
					_elements = (int)0;
				}
				HX_STACK_LINE(103)
				::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(103)
				::snow::api::buffers::ArrayBufferView _view = tmp12;		HX_STACK_VAR(_view,"_view");
				HX_STACK_LINE(103)
				int tmp13 = (_elements * _view->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(103)
				int _bytelen = tmp13;		HX_STACK_VAR(_bytelen,"_bytelen");
				HX_STACK_LINE(103)
				_view->byteOffset = (int)0;
				HX_STACK_LINE(103)
				_view->byteLength = _bytelen;
				HX_STACK_LINE(103)
				Array< unsigned char > tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(103)
				{
					HX_STACK_LINE(103)
					Array< unsigned char > this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(103)
					this2 = Array_obj< unsigned char >::__new();
					HX_STACK_LINE(103)
					bool tmp15 = (_bytelen > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(103)
					if ((tmp15)){
						HX_STACK_LINE(103)
						int tmp16 = (_bytelen - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(103)
						this2[tmp16] = (int)0;
					}
					HX_STACK_LINE(103)
					tmp14 = this2;
				}
				HX_STACK_LINE(103)
				_view->buffer = tmp14;
				HX_STACK_LINE(103)
				_view->length = _elements;
				HX_STACK_LINE(103)
				tmp10 = _view;
			}
			HX_STACK_LINE(103)
			this1 = tmp10;
			HX_STACK_LINE(103)
			tmp9 = this1;
		}
		HX_STACK_LINE(103)
		_samples = tmp9;
		HX_STACK_LINE(104)
		::snow::modules::sdl::IO tmp10 = app->io->module;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(104)
		::cpp::Pointer< SDL_RWops > tmp11 = _handle;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(104)
		::snow::api::buffers::ArrayBufferView tmp12 = _samples;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(104)
		int tmp13 = _length;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(104)
		int tmp14 = tmp10->file_read(tmp11,tmp12,tmp13,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(104)
		int _read = tmp14;		HX_STACK_VAR(_read,"_read");
		HX_STACK_LINE(105)
		bool tmp15 = (_read != _length);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(105)
		if ((tmp15)){
			HX_STACK_LINE(106)
			_samples = null();
			HX_STACK_LINE(107)
			return null();
		}
	}
	HX_STACK_LINE(114)
	::snow::Snow tmp9 = app;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(114)
	::cpp::Pointer< SDL_RWops > tmp10 = _handle;		HX_STACK_VAR(tmp10,"tmp10");
	struct _Function_1_1{
		inline static Dynamic Block( ::snow::api::buffers::ArrayBufferView &_samples,int &_length,::String &_path,bool &_is_stream){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/core/native/audio/AudioDataPCM.hx",114,0x3523d5f7)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , _path,false);
				__result->Add(HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6") , _is_stream,false);
				__result->Add(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd") , ((Dynamic)((int)4)),false);
				__result->Add(HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83") , _samples,false);
				__result->Add(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f") , ((Dynamic)(_length)),false);
				__result->Add(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a") , (int)1,false);
				__result->Add(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b") , (int)44100,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(114)
	Dynamic tmp11 = _Function_1_1::Block(_samples,_length,_path,_is_stream);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(114)
	::snow::core::native::audio::AudioDataPCM tmp12 = ::snow::core::native::audio::AudioDataPCM_obj::__new(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(114)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PCM_obj,from_file,return )

::snow::types::AudioData PCM_obj::from_bytes( ::snow::Snow app,::String _id,::snow::api::buffers::ArrayBufferView _bytes){
	HX_STACK_FRAME("snow.core.native.audio.PCM","from_bytes",0xeaf39315,"snow.core.native.audio.PCM.from_bytes","snow/core/native/audio/AudioDataPCM.hx",126,0x3523d5f7)
	HX_STACK_ARG(app,"app")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_LINE(128)
	::snow::Snow tmp = app;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(129)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	::snow::api::buffers::ArrayBufferView tmp2 = _bytes;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(133)
	int tmp3 = _bytes->length;		HX_STACK_VAR(tmp3,"tmp3");
	struct _Function_1_1{
		inline static Dynamic Block( ::snow::api::buffers::ArrayBufferView &tmp2,int &tmp3,::String &tmp1){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/core/native/audio/AudioDataPCM.hx",128,0x3523d5f7)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp1,false);
				__result->Add(HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6") , false,false);
				__result->Add(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd") , ((Dynamic)((int)4)),false);
				__result->Add(HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83") , tmp2,false);
				__result->Add(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f") , tmp3,false);
				__result->Add(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a") , (int)1,false);
				__result->Add(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b") , (int)44100,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(128)
	Dynamic tmp4 = _Function_1_1::Block(tmp2,tmp3,tmp1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(128)
	::snow::core::native::audio::AudioDataPCM tmp5 = ::snow::core::native::audio::AudioDataPCM_obj::__new(tmp,null(),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(128)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PCM_obj,from_bytes,return )


PCM_obj::PCM_obj()
{
}

bool PCM_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"from_file") ) { outValue = from_file_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"from_bytes") ) { outValue = from_bytes_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PCM_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PCM_obj::__mClass,"__mClass");
};

#endif

hx::Class PCM_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("from_file","\xb1","\x64","\x28","\x18"),
	HX_HCSTRING("from_bytes","\x96","\xe0","\x2e","\xc8"),
	::String(null()) };

void PCM_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.core.native.audio.PCM","\x8f","\x2f","\xe1","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PCM_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PCM_obj >;
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
} // end namespace audio
