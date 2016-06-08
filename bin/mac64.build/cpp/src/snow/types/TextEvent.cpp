#include <hxcpp.h>

#ifndef INCLUDED_snow_types_TextEvent
#include <snow/types/TextEvent.h>
#endif
namespace snow{
namespace types{

Void TextEvent_obj::__construct()
{
HX_STACK_FRAME("snow.types.TextEvent","new",0x3654bb5f,"snow.types.TextEvent.new","snow/types/Types.hx",634,0x72b41ce7)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//TextEvent_obj::~TextEvent_obj() { }

Dynamic TextEvent_obj::__CreateEmpty() { return  new TextEvent_obj; }
hx::ObjectPtr< TextEvent_obj > TextEvent_obj::__new()
{  hx::ObjectPtr< TextEvent_obj > _result_ = new TextEvent_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextEvent_obj > _result_ = new TextEvent_obj();
	_result_->__construct();
	return _result_;}

Void TextEvent_obj::set( int _type,::String _text,int _start,int _length){
{
		HX_STACK_FRAME("snow.types.TextEvent","set",0x365886a1,"snow.types.TextEvent.set","snow/types/Types.hx",637,0x72b41ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_type,"_type")
		HX_STACK_ARG(_text,"_text")
		HX_STACK_ARG(_start,"_start")
		HX_STACK_ARG(_length,"_length")
		HX_STACK_LINE(638)
		this->type = _type;
		HX_STACK_LINE(639)
		this->text = _text;
		HX_STACK_LINE(640)
		this->start = _start;
		HX_STACK_LINE(641)
		this->length = _length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TextEvent_obj,set,(void))

::String TextEvent_obj::toString( ){
	HX_STACK_FRAME("snow.types.TextEvent","toString",0xb9dea94d,"snow.types.TextEvent.toString","snow/types/Types.hx",644,0x72b41ce7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(644)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(644)
	{
		HX_STACK_LINE(644)
		Dynamic tmp1 = this->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(644)
		int this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(644)
		int tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(644)
		switch( (int)(tmp2)){
			case (int)0: {
				HX_STACK_LINE(644)
				tmp = HX_HCSTRING("te_unknown","\x7c","\x3b","\x30","\x76");
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(644)
				tmp = HX_HCSTRING("te_edit","\xd8","\x26","\xe5","\x2f");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(644)
				tmp = HX_HCSTRING("te_input","\x7c","\x9b","\xd8","\x0c");
			}
			;break;
			default: {
				HX_STACK_LINE(644)
				tmp = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
			}
		}
	}
	HX_STACK_LINE(644)
	::String tmp1 = (HX_HCSTRING("{ \"TextEvent\":true, \"type\":\"","\x38","\x33","\x3f","\x99") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(644)
	::String tmp2 = (tmp1 + HX_HCSTRING("\", \"text\":\"","\xf1","\xbd","\xd8","\xbf"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(644)
	::String tmp3 = this->text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(644)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(644)
	::String tmp5 = (tmp4 + HX_HCSTRING("\", \"start\":","\xee","\x0f","\x52","\x56"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(644)
	Dynamic tmp6 = this->start;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(644)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(644)
	::String tmp8 = (tmp7 + HX_HCSTRING(", \"length\":","\x6c","\x95","\x5c","\x53"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(644)
	Dynamic tmp9 = this->length;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(644)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(644)
	::String tmp11 = (tmp10 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(644)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(TextEvent_obj,toString,return )


TextEvent_obj::TextEvent_obj()
{
}

void TextEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEvent);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void TextEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic TextEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEvent_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsString,(int)offsetof(TextEvent_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEvent_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEvent_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class TextEvent_obj::__mClass;

void TextEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types.TextEvent","\xed","\x1f","\xa6","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextEvent_obj >;
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
