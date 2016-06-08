#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_types_AudioData
#include <snow/types/AudioData.h>
#endif
namespace snow{
namespace types{

Void AudioData_obj::__construct(::snow::Snow _app,Dynamic _options)
{
HX_STACK_FRAME("snow.types.AudioData","new",0x0f60f6d2,"snow.types.AudioData.new","snow/types/Types.hx",312,0x72b41ce7)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(329)
	this->is_stream = false;
	HX_STACK_LINE(327)
	this->format = ((Dynamic)((int)0));
	HX_STACK_LINE(325)
	this->channels = (int)1;
	HX_STACK_LINE(323)
	this->length = (int)0;
	HX_STACK_LINE(321)
	this->rate = (int)44100;
	HX_STACK_LINE(317)
	this->id = HX_HCSTRING("AudioData","\x00","\xfe","\xeb","\x03");
	HX_STACK_LINE(333)
	this->app = _app;
	HX_STACK_LINE(335)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(335)
	{
		HX_STACK_LINE(335)
		bool tmp1 = (_options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(335)
		if ((tmp1)){
			HX_STACK_LINE(335)
			::String tmp2 = this->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(335)
			_options->__FieldRef(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")) = tmp2;
		}
		HX_STACK_LINE(335)
		tmp = _options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(335)
	this->id = tmp;
	HX_STACK_LINE(336)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(336)
	{
		HX_STACK_LINE(336)
		bool tmp2 = (_options->__Field(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(336)
		if ((tmp2)){
			HX_STACK_LINE(336)
			int tmp3 = this->rate;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(336)
			_options->__FieldRef(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b")) = tmp3;
		}
		HX_STACK_LINE(336)
		tmp1 = _options->__Field(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"), hx::paccDynamic );
	}
	HX_STACK_LINE(336)
	this->rate = tmp1;
	HX_STACK_LINE(337)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(337)
	{
		HX_STACK_LINE(337)
		bool tmp3 = (_options->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(337)
		if ((tmp3)){
			HX_STACK_LINE(337)
			int tmp4 = this->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(337)
			_options->__FieldRef(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")) = tmp4;
		}
		HX_STACK_LINE(337)
		tmp2 = _options->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
	}
	HX_STACK_LINE(337)
	this->length = tmp2;
	HX_STACK_LINE(338)
	Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(338)
	{
		HX_STACK_LINE(338)
		bool tmp4 = (_options->__Field(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(338)
		if ((tmp4)){
			HX_STACK_LINE(338)
			Dynamic tmp5 = this->format;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(338)
			_options->__FieldRef(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")) = tmp5;
		}
		HX_STACK_LINE(338)
		tmp3 = _options->__Field(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"), hx::paccDynamic );
	}
	HX_STACK_LINE(338)
	this->format = tmp3;
	HX_STACK_LINE(339)
	Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(339)
	{
		HX_STACK_LINE(339)
		bool tmp5 = (_options->__Field(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(339)
		if ((tmp5)){
			HX_STACK_LINE(339)
			int tmp6 = this->channels;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(339)
			_options->__FieldRef(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a")) = tmp6;
		}
		HX_STACK_LINE(339)
		tmp4 = _options->__Field(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"), hx::paccDynamic );
	}
	HX_STACK_LINE(339)
	this->channels = tmp4;
	HX_STACK_LINE(340)
	Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(340)
	{
		HX_STACK_LINE(340)
		bool tmp6 = (_options->__Field(HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(340)
		if ((tmp6)){
			HX_STACK_LINE(340)
			bool tmp7 = this->is_stream;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(340)
			_options->__FieldRef(HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6")) = tmp7;
		}
		HX_STACK_LINE(340)
		tmp5 = _options->__Field(HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6"), hx::paccDynamic );
	}
	HX_STACK_LINE(340)
	this->is_stream = tmp5;
	HX_STACK_LINE(341)
	::snow::api::buffers::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(341)
	{
		HX_STACK_LINE(341)
		bool tmp7 = (_options->__Field(HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(341)
		if ((tmp7)){
			HX_STACK_LINE(341)
			::snow::api::buffers::ArrayBufferView tmp8 = this->samples;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(341)
			_options->__FieldRef(HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83")) = tmp8;
		}
		HX_STACK_LINE(341)
		tmp6 = _options->__Field(HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83"), hx::paccDynamic );
	}
	HX_STACK_LINE(341)
	this->samples = tmp6;
	HX_STACK_LINE(343)
	_options = null();
}
;
	return null();
}

//AudioData_obj::~AudioData_obj() { }

Dynamic AudioData_obj::__CreateEmpty() { return  new AudioData_obj; }
hx::ObjectPtr< AudioData_obj > AudioData_obj::__new(::snow::Snow _app,Dynamic _options)
{  hx::ObjectPtr< AudioData_obj > _result_ = new AudioData_obj();
	_result_->__construct(_app,_options);
	return _result_;}

Dynamic AudioData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioData_obj > _result_ = new AudioData_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void AudioData_obj::destroy( ){
{
		HX_STACK_FRAME("snow.types.AudioData","destroy",0x1bcc746c,"snow.types.AudioData.destroy","snow/types/Types.hx",349,0x72b41ce7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(351)
		this->id = null();
		HX_STACK_LINE(352)
		::snow::api::buffers::ArrayBufferView tmp = this->samples;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(352)
		tmp->buffer = null();
		HX_STACK_LINE(353)
		this->samples = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioData_obj,destroy,(void))

bool AudioData_obj::seek( int _to){
	HX_STACK_FRAME("snow.types.AudioData","seek",0x68c502c6,"snow.types.AudioData.seek","snow/types/Types.hx",359,0x72b41ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_to,"_to")
	HX_STACK_LINE(359)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioData_obj,seek,return )

Array< int > AudioData_obj::portion( ::snow::api::buffers::ArrayBufferView _into,int _start,int _len,Array< int > _into_result){
	HX_STACK_FRAME("snow.types.AudioData","portion",0x7af23859,"snow.types.AudioData.portion","snow/types/Types.hx",361,0x72b41ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_into,"_into")
	HX_STACK_ARG(_start,"_start")
	HX_STACK_ARG(_len,"_len")
	HX_STACK_ARG(_into_result,"_into_result")
	HX_STACK_LINE(361)
	return _into_result;
}


HX_DEFINE_DYNAMIC_FUNC4(AudioData_obj,portion,return )

::String AudioData_obj::toString( ){
	HX_STACK_FRAME("snow.types.AudioData","toString",0x9ea70cfa,"snow.types.AudioData.toString","snow/types/Types.hx",363,0x72b41ce7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(363)
	::String tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(363)
	::String tmp1 = (HX_HCSTRING("{ \"AudioData\":true, \"id\":","\x38","\xdd","\x4d","\x75") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(363)
	::String tmp2 = (tmp1 + HX_HCSTRING(", \"rate\":","\x66","\xfe","\x2c","\xa9"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(363)
	int tmp3 = this->rate;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(363)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(363)
	::String tmp5 = (tmp4 + HX_HCSTRING(", \"length\":","\x6c","\x95","\x5c","\x53"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(363)
	int tmp6 = this->length;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(363)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(363)
	::String tmp8 = (tmp7 + HX_HCSTRING(", \"channels\":","\xd6","\x80","\x37","\x56"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(363)
	int tmp9 = this->channels;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(363)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(363)
	::String tmp11 = (tmp10 + HX_HCSTRING(", \"format\":\"","\x85","\xb7","\xc1","\x0b"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(363)
	::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(363)
	{
		HX_STACK_LINE(363)
		Dynamic tmp13 = this->format;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(363)
		Dynamic this1 = tmp13;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(363)
		bool tmp14 = (this1 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(363)
		if ((tmp14)){
			HX_STACK_LINE(363)
			Dynamic tmp15 = this1;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(363)
			switch( (int)(tmp15)){
				case (int)0: {
					HX_STACK_LINE(363)
					tmp12 = HX_HCSTRING("af_unknown","\xf0","\xbe","\x9a","\x03");
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(363)
					tmp12 = HX_HCSTRING("af_custom","\x0b","\xdb","\x9b","\x65");
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(363)
					tmp12 = HX_HCSTRING("af_ogg","\xb5","\x04","\x9d","\xc2");
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(363)
					tmp12 = HX_HCSTRING("af_wav","\x92","\x11","\xa3","\xc2");
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(363)
					tmp12 = HX_HCSTRING("af_pcm","\x80","\xc3","\x9d","\xc2");
				}
				;break;
				default: {
					HX_STACK_LINE(363)
					tmp12 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
				}
			}
		}
		else{
			HX_STACK_LINE(363)
			tmp12 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
		}
	}
	HX_STACK_LINE(363)
	::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(363)
	::String tmp14 = (tmp13 + HX_HCSTRING("\", \"is_stream\":","\xc1","\xeb","\xf0","\xbc"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(363)
	bool tmp15 = this->is_stream;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(363)
	::String tmp16 = ::Std_obj::string(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(363)
	::String tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(363)
	::String tmp18 = (tmp17 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(363)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioData_obj,toString,return )


AudioData_obj::AudioData_obj()
{
}

void AudioData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioData);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(samples,"samples");
	HX_MARK_MEMBER_NAME(rate,"rate");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(is_stream,"is_stream");
	HX_MARK_END_CLASS();
}

void AudioData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(samples,"samples");
	HX_VISIT_MEMBER_NAME(rate,"rate");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(is_stream,"is_stream");
}

Dynamic AudioData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { return rate; }
		if (HX_FIELD_EQ(inName,"seek") ) { return seek_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"samples") ) { return samples; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"portion") ) { return portion_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return channels; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"is_stream") ) { return is_stream; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { rate=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"samples") ) { samples=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"is_stream") ) { is_stream=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83"));
	outFields->push(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(AudioData_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsString,(int)offsetof(AudioData_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(AudioData_obj,samples),HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83")},
	{hx::fsInt,(int)offsetof(AudioData_obj,rate),HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b")},
	{hx::fsInt,(int)offsetof(AudioData_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsInt,(int)offsetof(AudioData_obj,channels),HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioData_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{hx::fsBool,(int)offsetof(AudioData_obj,is_stream),HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83"),
	HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("seek","\x78","\x85","\x50","\x4c"),
	HX_HCSTRING("portion","\xe7","\xf0","\xab","\x83"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioData_obj::__mClass,"__mClass");
};

#endif

hx::Class AudioData_obj::__mClass;

void AudioData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types.AudioData","\xe0","\xe5","\x0c","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioData_obj >;
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
} // end namespace types
