#include <hxcpp.h>

#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_DebugError
#include <snow/api/DebugError.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_systems_audio_Audio
#include <snow/systems/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_systems_audio_AudioInstance
#include <snow/systems/audio/AudioInstance.h>
#endif
#ifndef INCLUDED_snow_systems_audio_AudioSource
#include <snow/systems/audio/AudioSource.h>
#endif
#ifndef INCLUDED_snow_types_AudioData
#include <snow/types/AudioData.h>
#endif
namespace snow{
namespace systems{
namespace audio{

Void AudioInstance_obj::__construct(::snow::systems::audio::AudioSource _source,Dynamic _handle)
{
HX_STACK_FRAME("snow.systems.audio.AudioInstance","new",0x89f57190,"snow.systems.audio.AudioInstance.new","snow/systems/audio/AudioInstance.hx",9,0xa2427c63)
HX_STACK_THIS(this)
HX_STACK_ARG(_source,"_source")
HX_STACK_ARG(_handle,"_handle")
{
	HX_STACK_LINE(14)
	this->destroyed = false;
	HX_STACK_LINE(20)
	this->source = _source;
	HX_STACK_LINE(21)
	this->handle = _handle;
}
;
	return null();
}

//AudioInstance_obj::~AudioInstance_obj() { }

Dynamic AudioInstance_obj::__CreateEmpty() { return  new AudioInstance_obj; }
hx::ObjectPtr< AudioInstance_obj > AudioInstance_obj::__new(::snow::systems::audio::AudioSource _source,Dynamic _handle)
{  hx::ObjectPtr< AudioInstance_obj > _result_ = new AudioInstance_obj();
	_result_->__construct(_source,_handle);
	return _result_;}

Dynamic AudioInstance_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioInstance_obj > _result_ = new AudioInstance_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void AudioInstance_obj::tick( ){
{
		HX_STACK_FRAME("snow.systems.audio.AudioInstance","tick",0x30c82c2d,"snow.systems.audio.AudioInstance.tick","snow/systems/audio/AudioInstance.hx",25,0xa2427c63)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioInstance_obj,tick,(void))

bool AudioInstance_obj::has_ended( ){
	HX_STACK_FRAME("snow.systems.audio.AudioInstance","has_ended",0x3ccc7445,"snow.systems.audio.AudioInstance.has_ended","snow/systems/audio/AudioInstance.hx",29,0xa2427c63)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		if ((tmp2)){
			HX_STACK_LINE(214)
			::String tmp3 = HX_HCSTRING(" ( snow / Audio / Instance has_ended queried after being destroyed","\xe6","\x78","\x0d","\xd8");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(214)
			::String tmp4 = (tmp3 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(31)
			::String tmp5 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(31)
			::snow::api::DebugError tmp6 = ::snow::api::DebugError_obj::assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(31)
			HX_STACK_DO_THROW(tmp6);
		}
	}
	HX_STACK_LINE(33)
	::snow::systems::audio::AudioSource tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	int tmp3 = tmp1->state_of(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	bool tmp4 = (tmp3 == (int)2);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioInstance_obj,has_ended,return )

Void AudioInstance_obj::destroy( ){
{
		HX_STACK_FRAME("snow.systems.audio.AudioInstance","destroy",0xb948262a,"snow.systems.audio.AudioInstance.destroy","snow/systems/audio/AudioInstance.hx",37,0xa2427c63)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		{
			HX_STACK_LINE(39)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(39)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(39)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(39)
			if ((tmp2)){
				HX_STACK_LINE(214)
				::String tmp3 = HX_HCSTRING(" ( snow / Audio / Instance being destroyed more than once","\x77","\x05","\x02","\xac");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(214)
				::String tmp4 = (tmp3 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(39)
				::String tmp5 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(39)
				::snow::api::DebugError tmp6 = ::snow::api::DebugError_obj::assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(39)
				HX_STACK_DO_THROW(tmp6);
			}
		}
		HX_STACK_LINE(41)
		::snow::systems::audio::AudioSource tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		::snow::systems::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		tmp1->emit_Int((int)1,tmp2);
		HX_STACK_LINE(42)
		::snow::systems::audio::AudioSource tmp3 = this->source;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		tmp3->instance_killed(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(43)
		this->destroyed = true;
		HX_STACK_LINE(44)
		this->source = null();
		HX_STACK_LINE(45)
		this->handle = (int)-1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioInstance_obj,destroy,(void))

Array< int > AudioInstance_obj::data_get( ::snow::api::buffers::ArrayBufferView _into,int _start,int _length,Array< int > _into_result){
	HX_STACK_FRAME("snow.systems.audio.AudioInstance","data_get",0x28ac8991,"snow.systems.audio.AudioInstance.data_get","snow/systems/audio/AudioInstance.hx",49,0xa2427c63)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_into,"_into")
	HX_STACK_ARG(_start,"_start")
	HX_STACK_ARG(_length,"_length")
	HX_STACK_ARG(_into_result,"_into_result")
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		if ((tmp2)){
			HX_STACK_LINE(214)
			::String tmp3 = HX_HCSTRING(" ( snow / Audio / Instance data_get queried after being destroyed","\xc6","\xef","\xd0","\x85");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(214)
			::String tmp4 = (tmp3 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			::String tmp5 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			::snow::api::DebugError tmp6 = ::snow::api::DebugError_obj::assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(51)
			HX_STACK_DO_THROW(tmp6);
		}
	}
	HX_STACK_LINE(53)
	::snow::systems::audio::AudioSource tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	::snow::api::buffers::ArrayBufferView tmp1 = _into;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	int tmp2 = _start;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	int tmp3 = _length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	return tmp->data->portion(tmp1,tmp2,tmp3,_into_result);
}


HX_DEFINE_DYNAMIC_FUNC4(AudioInstance_obj,data_get,return )

bool AudioInstance_obj::data_seek( int _to_samples){
	HX_STACK_FRAME("snow.systems.audio.AudioInstance","data_seek",0x763a581d,"snow.systems.audio.AudioInstance.data_seek","snow/systems/audio/AudioInstance.hx",57,0xa2427c63)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_to_samples,"_to_samples")
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		if ((tmp2)){
			HX_STACK_LINE(214)
			::String tmp3 = HX_HCSTRING(" ( snow / Audio / Instance data_seek queried after being destroyed","\xbe","\x96","\x54","\x96");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(214)
			::String tmp4 = (tmp3 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(59)
			::String tmp5 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(59)
			::snow::api::DebugError tmp6 = ::snow::api::DebugError_obj::assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(59)
			HX_STACK_DO_THROW(tmp6);
		}
	}
	HX_STACK_LINE(61)
	::snow::systems::audio::AudioSource tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	int tmp1 = _to_samples;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	bool tmp2 = tmp->data->seek(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioInstance_obj,data_seek,return )


AudioInstance_obj::AudioInstance_obj()
{
}

void AudioInstance_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioInstance);
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(destroyed,"destroyed");
	HX_MARK_END_CLASS();
}

void AudioInstance_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(source,"source");
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(destroyed,"destroyed");
}

Dynamic AudioInstance_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tick") ) { return tick_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { return source; }
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"data_get") ) { return data_get_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { return destroyed; }
		if (HX_FIELD_EQ(inName,"has_ended") ) { return has_ended_dyn(); }
		if (HX_FIELD_EQ(inName,"data_seek") ) { return data_seek_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioInstance_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast< ::snow::systems::audio::AudioSource >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { destroyed=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioInstance_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	outFields->push(HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::systems::audio::AudioSource*/ ,(int)offsetof(AudioInstance_obj,source),HX_HCSTRING("source","\xdb","\xb0","\x31","\x32")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioInstance_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{hx::fsBool,(int)offsetof(AudioInstance_obj,destroyed),HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4"),
	HX_HCSTRING("tick","\x5d","\xc3","\xfc","\x4c"),
	HX_HCSTRING("has_ended","\x15","\xcf","\xb5","\x78"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("data_get","\xc1","\x78","\xb4","\x93"),
	HX_HCSTRING("data_seek","\xed","\xb2","\x23","\xb2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioInstance_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioInstance_obj::__mClass,"__mClass");
};

#endif

hx::Class AudioInstance_obj::__mClass;

void AudioInstance_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.systems.audio.AudioInstance","\x9e","\xa9","\x61","\xf5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioInstance_obj >;
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
} // end namespace audio
