#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_snow_types_InputEvent
#include <snow/types/InputEvent.h>
#endif
#ifndef INCLUDED_snow_types_SystemEvent
#include <snow/types/SystemEvent.h>
#endif
#ifndef INCLUDED_snow_types_WindowEvent
#include <snow/types/WindowEvent.h>
#endif
namespace snow{
namespace types{

Void SystemEvent_obj::__construct()
{
HX_STACK_FRAME("snow.types.SystemEvent","new",0x80ff08dd,"snow.types.SystemEvent.new","snow/types/Types.hx",556,0x72b41ce7)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//SystemEvent_obj::~SystemEvent_obj() { }

Dynamic SystemEvent_obj::__CreateEmpty() { return  new SystemEvent_obj; }
hx::ObjectPtr< SystemEvent_obj > SystemEvent_obj::__new()
{  hx::ObjectPtr< SystemEvent_obj > _result_ = new SystemEvent_obj();
	_result_->__construct();
	return _result_;}

Dynamic SystemEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SystemEvent_obj > _result_ = new SystemEvent_obj();
	_result_->__construct();
	return _result_;}

Void SystemEvent_obj::set( int _type,::snow::types::WindowEvent _window,::snow::types::InputEvent _input){
{
		HX_STACK_FRAME("snow.types.SystemEvent","set",0x8102d41f,"snow.types.SystemEvent.set","snow/types/Types.hx",558,0x72b41ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_type,"_type")
		HX_STACK_ARG(_window,"_window")
		HX_STACK_ARG(_input,"_input")
		HX_STACK_LINE(559)
		this->type = _type;
		HX_STACK_LINE(560)
		this->window = _window;
		HX_STACK_LINE(561)
		this->input = _input;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SystemEvent_obj,set,(void))

::String SystemEvent_obj::toString( ){
	HX_STACK_FRAME("snow.types.SystemEvent","toString",0x62b4b30f,"snow.types.SystemEvent.toString","snow/types/Types.hx",564,0x72b41ce7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(565)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(565)
	{
		HX_STACK_LINE(565)
		int tmp1 = this->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(565)
		int this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(565)
		int tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(565)
		switch( (int)(tmp2)){
			case (int)0: {
				HX_STACK_LINE(565)
				tmp = HX_HCSTRING("se_unknown","\x9d","\xc3","\xe5","\xb5");
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(565)
				tmp = HX_HCSTRING("se_init","\x1d","\x21","\xfc","\x08");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(565)
				tmp = HX_HCSTRING("se_ready","\xb6","\x05","\x43","\xfc");
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(565)
				tmp = HX_HCSTRING("se_tick","\x6a","\xa9","\x3d","\x10");
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(565)
				tmp = HX_HCSTRING("se_freeze","\xa4","\xcd","\xf4","\x70");
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(565)
				tmp = HX_HCSTRING("se_unfreeze","\xfd","\x29","\x4d","\xba");
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(565)
				tmp = HX_HCSTRING("se_shutdown","\x23","\x6d","\xed","\x73");
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(565)
				tmp = HX_HCSTRING("se_window","\x3d","\xd7","\x5c","\x14");
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(565)
				tmp = HX_HCSTRING("se_input","\x5d","\x29","\xa6","\xd3");
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(565)
				tmp = HX_HCSTRING("se_quit","\xdc","\x25","\x4b","\x0e");
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(565)
				tmp = HX_HCSTRING("se_app_terminating","\x13","\xb9","\xf1","\x1d");
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(565)
				tmp = HX_HCSTRING("se_app_lowmemory","\x8a","\x22","\xcd","\x92");
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(565)
				tmp = HX_HCSTRING("se_app_willenterbackground","\x69","\x64","\x7f","\xc1");
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(565)
				tmp = HX_HCSTRING("se_app_didenterbackground","\x12","\xce","\x28","\x14");
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(565)
				tmp = HX_HCSTRING("se_app_willenterforeground","\x3e","\xe9","\x50","\xac");
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(565)
				tmp = HX_HCSTRING("se_app_didenterforeground","\xe7","\x52","\xfa","\xfe");
			}
			;break;
			default: {
				HX_STACK_LINE(565)
				tmp = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
			}
		}
	}
	HX_STACK_LINE(565)
	::String tmp1 = (HX_HCSTRING("{ \"SystemEvent\":true, \"type\":\"","\x76","\xdc","\x76","\xfd") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(565)
	::String tmp2 = (tmp1 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(565)
	::String _s = tmp2;		HX_STACK_VAR(_s,"_s");
	HX_STACK_LINE(566)
	::snow::types::WindowEvent tmp3 = this->window;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(566)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(566)
	if ((tmp4)){
		HX_STACK_LINE(566)
		::snow::types::WindowEvent tmp5 = this->window;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(566)
		::String tmp6 = ::Std_obj::string(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(566)
		::String tmp7 = (HX_HCSTRING(", \"window\":","\xf6","\xea","\x66","\xb1") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(566)
		hx::AddEq(_s,tmp7);
	}
	HX_STACK_LINE(567)
	::snow::types::InputEvent tmp5 = this->input;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(567)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(567)
	if ((tmp6)){
		HX_STACK_LINE(567)
		::snow::types::InputEvent tmp7 = this->input;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(567)
		::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(567)
		::String tmp9 = (HX_HCSTRING(", \"input\":","\xf4","\x5a","\xcb","\xd7") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(567)
		hx::AddEq(_s,tmp9);
	}
	HX_STACK_LINE(568)
	hx::AddEq(_s,HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));
	HX_STACK_LINE(569)
	::String tmp7 = _s;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(569)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(SystemEvent_obj,toString,return )


SystemEvent_obj::SystemEvent_obj()
{
}

void SystemEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SystemEvent);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_END_CLASS();
}

void SystemEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(input,"input");
}

Dynamic SystemEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SystemEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::snow::types::InputEvent >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::snow::types::WindowEvent >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SystemEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(SystemEvent_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::snow::types::WindowEvent*/ ,(int)offsetof(SystemEvent_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsObject /*::snow::types::InputEvent*/ ,(int)offsetof(SystemEvent_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SystemEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SystemEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class SystemEvent_obj::__mClass;

void SystemEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types.SystemEvent","\x6b","\x56","\x80","\x10");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SystemEvent_obj >;
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
