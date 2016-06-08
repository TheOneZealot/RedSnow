#include <hxcpp.h>

#ifndef INCLUDED_luxe_InteractState
#include <luxe/InteractState.h>
#endif
#ifndef INCLUDED_luxe_KeyEvent
#include <luxe/KeyEvent.h>
#endif
#ifndef INCLUDED_snow_types_ModState
#include <snow/types/ModState.h>
#endif
namespace luxe{

Void KeyEvent_obj::__construct()
{
HX_STACK_FRAME("luxe.KeyEvent","new",0xf7952c45,"luxe.KeyEvent.new","luxe/Input.hx",663,0x19edc1cd)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//KeyEvent_obj::~KeyEvent_obj() { }

Dynamic KeyEvent_obj::__CreateEmpty() { return  new KeyEvent_obj; }
hx::ObjectPtr< KeyEvent_obj > KeyEvent_obj::__new()
{  hx::ObjectPtr< KeyEvent_obj > _result_ = new KeyEvent_obj();
	_result_->__construct();
	return _result_;}

Dynamic KeyEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KeyEvent_obj > _result_ = new KeyEvent_obj();
	_result_->__construct();
	return _result_;}

Void KeyEvent_obj::set( int _keycode,int _scancode,bool _repeat,::snow::types::ModState _mod,::luxe::InteractState _state,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.KeyEvent","set",0xf798f787,"luxe.KeyEvent.set","luxe/Input.hx",683,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_keycode,"_keycode")
		HX_STACK_ARG(_scancode,"_scancode")
		HX_STACK_ARG(_repeat,"_repeat")
		HX_STACK_ARG(_mod,"_mod")
		HX_STACK_ARG(_state,"_state")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(685)
		this->mod = _mod;
		HX_STACK_LINE(686)
		this->state = _state;
		HX_STACK_LINE(687)
		this->repeat = _repeat;
		HX_STACK_LINE(688)
		this->keycode = _keycode;
		HX_STACK_LINE(689)
		this->scancode = _scancode;
		HX_STACK_LINE(690)
		this->timestamp = _timestamp;
		HX_STACK_LINE(691)
		this->window_id = _window_id;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(KeyEvent_obj,set,(void))


KeyEvent_obj::KeyEvent_obj()
{
}

void KeyEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KeyEvent);
	HX_MARK_MEMBER_NAME(scancode,"scancode");
	HX_MARK_MEMBER_NAME(keycode,"keycode");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(mod,"mod");
	HX_MARK_MEMBER_NAME(repeat,"repeat");
	HX_MARK_MEMBER_NAME(timestamp,"timestamp");
	HX_MARK_MEMBER_NAME(window_id,"window_id");
	HX_MARK_END_CLASS();
}

void KeyEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scancode,"scancode");
	HX_VISIT_MEMBER_NAME(keycode,"keycode");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(mod,"mod");
	HX_VISIT_MEMBER_NAME(repeat,"repeat");
	HX_VISIT_MEMBER_NAME(timestamp,"timestamp");
	HX_VISIT_MEMBER_NAME(window_id,"window_id");
}

Dynamic KeyEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mod") ) { return mod; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { return repeat; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keycode") ) { return keycode; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"scancode") ) { return scancode; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { return timestamp; }
		if (HX_FIELD_EQ(inName,"window_id") ) { return window_id; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KeyEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mod") ) { mod=inValue.Cast< ::snow::types::ModState >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::luxe::InteractState >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { repeat=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keycode") ) { keycode=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"scancode") ) { scancode=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { timestamp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window_id") ) { window_id=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("scancode","\x2a","\xb1","\xec","\x26"));
	outFields->push(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("mod","\xc2","\x16","\x53","\x00"));
	outFields->push(HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"));
	outFields->push(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"));
	outFields->push(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(KeyEvent_obj,scancode),HX_HCSTRING("scancode","\x2a","\xb1","\xec","\x26")},
	{hx::fsInt,(int)offsetof(KeyEvent_obj,keycode),HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0")},
	{hx::fsObject /*::luxe::InteractState*/ ,(int)offsetof(KeyEvent_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsObject /*::snow::types::ModState*/ ,(int)offsetof(KeyEvent_obj,mod),HX_HCSTRING("mod","\xc2","\x16","\x53","\x00")},
	{hx::fsBool,(int)offsetof(KeyEvent_obj,repeat),HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06")},
	{hx::fsFloat,(int)offsetof(KeyEvent_obj,timestamp),HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5")},
	{hx::fsInt,(int)offsetof(KeyEvent_obj,window_id),HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("scancode","\x2a","\xb1","\xec","\x26"),
	HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("mod","\xc2","\x16","\x53","\x00"),
	HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"),
	HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"),
	HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class KeyEvent_obj::__mClass;

void KeyEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.KeyEvent","\xd3","\xa5","\x96","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< KeyEvent_obj >;
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

} // end namespace luxe
