#include <hxcpp.h>

#ifndef INCLUDED_luxe_GamepadEvent
#include <luxe/GamepadEvent.h>
#endif
#ifndef INCLUDED_luxe_InputEvent
#include <luxe/InputEvent.h>
#endif
#ifndef INCLUDED_luxe_InputEventType
#include <luxe/InputEventType.h>
#endif
#ifndef INCLUDED_luxe_InteractState
#include <luxe/InteractState.h>
#endif
#ifndef INCLUDED_luxe_KeyEvent
#include <luxe/KeyEvent.h>
#endif
#ifndef INCLUDED_luxe_MouseEvent
#include <luxe/MouseEvent.h>
#endif
#ifndef INCLUDED_luxe_TouchEvent
#include <luxe/TouchEvent.h>
#endif
namespace luxe{

Void InputEvent_obj::__construct()
{
HX_STACK_FRAME("luxe.InputEvent","new",0x12bc727a,"luxe.InputEvent.new","luxe/Input.hx",954,0x19edc1cd)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//InputEvent_obj::~InputEvent_obj() { }

Dynamic InputEvent_obj::__CreateEmpty() { return  new InputEvent_obj; }
hx::ObjectPtr< InputEvent_obj > InputEvent_obj::__new()
{  hx::ObjectPtr< InputEvent_obj > _result_ = new InputEvent_obj();
	_result_->__construct();
	return _result_;}

Dynamic InputEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InputEvent_obj > _result_ = new InputEvent_obj();
	_result_->__construct();
	return _result_;}

Void InputEvent_obj::set_key( ::String _name,::luxe::InteractState _state,::luxe::KeyEvent _key_event){
{
		HX_STACK_FRAME("luxe.InputEvent","set_key",0x62949a5c,"luxe.InputEvent.set_key","luxe/Input.hx",974,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_state,"_state")
		HX_STACK_ARG(_key_event,"_key_event")
		HX_STACK_LINE(975)
		::String tmp = _name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(975)
		::luxe::InteractState tmp1 = _state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(975)
		this->set_common(tmp,::luxe::InputEventType_obj::key,tmp1);
		HX_STACK_LINE(976)
		::luxe::KeyEvent tmp2 = _key_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(976)
		this->set_events(tmp2,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(InputEvent_obj,set_key,(void))

Void InputEvent_obj::set_mouse( ::String _name,::luxe::InteractState _state,::luxe::MouseEvent _mouse_event){
{
		HX_STACK_FRAME("luxe.InputEvent","set_mouse",0xd21b9022,"luxe.InputEvent.set_mouse","luxe/Input.hx",980,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_state,"_state")
		HX_STACK_ARG(_mouse_event,"_mouse_event")
		HX_STACK_LINE(981)
		::String tmp = _name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(981)
		::luxe::InteractState tmp1 = _state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(981)
		this->set_common(tmp,::luxe::InputEventType_obj::mouse,tmp1);
		HX_STACK_LINE(982)
		::luxe::MouseEvent tmp2 = _mouse_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(982)
		this->set_events(null(),tmp2,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(InputEvent_obj,set_mouse,(void))

Void InputEvent_obj::set_touch( ::String _name,::luxe::InteractState _state,::luxe::TouchEvent _touch_event){
{
		HX_STACK_FRAME("luxe.InputEvent","set_touch",0xd9e991bc,"luxe.InputEvent.set_touch","luxe/Input.hx",986,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_state,"_state")
		HX_STACK_ARG(_touch_event,"_touch_event")
		HX_STACK_LINE(987)
		::String tmp = _name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(987)
		::luxe::InteractState tmp1 = _state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(987)
		this->set_common(tmp,::luxe::InputEventType_obj::touch,tmp1);
		HX_STACK_LINE(988)
		::luxe::TouchEvent tmp2 = _touch_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(988)
		this->set_events(null(),null(),tmp2,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(InputEvent_obj,set_touch,(void))

Void InputEvent_obj::set_gamepad( ::String _name,::luxe::InteractState _state,::luxe::GamepadEvent _gamepad_event){
{
		HX_STACK_FRAME("luxe.InputEvent","set_gamepad",0x054c93de,"luxe.InputEvent.set_gamepad","luxe/Input.hx",992,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_state,"_state")
		HX_STACK_ARG(_gamepad_event,"_gamepad_event")
		HX_STACK_LINE(993)
		::String tmp = _name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(993)
		::luxe::InteractState tmp1 = _state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(993)
		this->set_common(tmp,::luxe::InputEventType_obj::gamepad,tmp1);
		HX_STACK_LINE(994)
		::luxe::GamepadEvent tmp2 = _gamepad_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(994)
		this->set_events(null(),null(),null(),tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(InputEvent_obj,set_gamepad,(void))

Void InputEvent_obj::set_unknown( ::String _name,::luxe::InteractState _state){
{
		HX_STACK_FRAME("luxe.InputEvent","set_unknown",0x5d41d6c7,"luxe.InputEvent.set_unknown","luxe/Input.hx",998,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_state,"_state")
		HX_STACK_LINE(999)
		::String tmp = _name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(999)
		::luxe::InteractState tmp1 = _state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(999)
		this->set_common(tmp,::luxe::InputEventType_obj::unknown,tmp1);
		HX_STACK_LINE(1000)
		this->set_events(null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(InputEvent_obj,set_unknown,(void))

Void InputEvent_obj::set_common( ::String _name,::luxe::InputEventType _type,::luxe::InteractState _state){
{
		HX_STACK_FRAME("luxe.InputEvent","set_common",0x0122b88e,"luxe.InputEvent.set_common","luxe/Input.hx",1003,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_type,"_type")
		HX_STACK_ARG(_state,"_state")
		HX_STACK_LINE(1004)
		this->name = _name;
		HX_STACK_LINE(1005)
		this->type = _type;
		HX_STACK_LINE(1006)
		this->state = _state;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(InputEvent_obj,set_common,(void))

Void InputEvent_obj::set_events( ::luxe::KeyEvent _key_event,::luxe::MouseEvent _mouse_event,::luxe::TouchEvent _touch_event,::luxe::GamepadEvent _gamepad_event){
{
		HX_STACK_FRAME("luxe.InputEvent","set_events",0xd05e927c,"luxe.InputEvent.set_events","luxe/Input.hx",1009,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_key_event,"_key_event")
		HX_STACK_ARG(_mouse_event,"_mouse_event")
		HX_STACK_ARG(_touch_event,"_touch_event")
		HX_STACK_ARG(_gamepad_event,"_gamepad_event")
		HX_STACK_LINE(1010)
		this->key_event = _key_event;
		HX_STACK_LINE(1011)
		this->mouse_event = _mouse_event;
		HX_STACK_LINE(1012)
		this->touch_event = _touch_event;
		HX_STACK_LINE(1013)
		this->gamepad_event = _gamepad_event;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(InputEvent_obj,set_events,(void))


InputEvent_obj::InputEvent_obj()
{
}

void InputEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InputEvent);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(mouse_event,"mouse_event");
	HX_MARK_MEMBER_NAME(key_event,"key_event");
	HX_MARK_MEMBER_NAME(touch_event,"touch_event");
	HX_MARK_MEMBER_NAME(gamepad_event,"gamepad_event");
	HX_MARK_END_CLASS();
}

void InputEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(mouse_event,"mouse_event");
	HX_VISIT_MEMBER_NAME(key_event,"key_event");
	HX_VISIT_MEMBER_NAME(touch_event,"touch_event");
	HX_VISIT_MEMBER_NAME(gamepad_event,"gamepad_event");
}

Dynamic InputEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_key") ) { return set_key_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"key_event") ) { return key_event; }
		if (HX_FIELD_EQ(inName,"set_mouse") ) { return set_mouse_dyn(); }
		if (HX_FIELD_EQ(inName,"set_touch") ) { return set_touch_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_common") ) { return set_common_dyn(); }
		if (HX_FIELD_EQ(inName,"set_events") ) { return set_events_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouse_event") ) { return mouse_event; }
		if (HX_FIELD_EQ(inName,"touch_event") ) { return touch_event; }
		if (HX_FIELD_EQ(inName,"set_gamepad") ) { return set_gamepad_dyn(); }
		if (HX_FIELD_EQ(inName,"set_unknown") ) { return set_unknown_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepad_event") ) { return gamepad_event; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InputEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::luxe::InputEventType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::luxe::InteractState >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"key_event") ) { key_event=inValue.Cast< ::luxe::KeyEvent >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouse_event") ) { mouse_event=inValue.Cast< ::luxe::MouseEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touch_event") ) { touch_event=inValue.Cast< ::luxe::TouchEvent >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepad_event") ) { gamepad_event=inValue.Cast< ::luxe::GamepadEvent >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InputEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("mouse_event","\x40","\xcf","\x9f","\x32"));
	outFields->push(HX_HCSTRING("key_event","\x3a","\x1a","\x1f","\xd5"));
	outFields->push(HX_HCSTRING("touch_event","\x5a","\x00","\x4e","\xa2"));
	outFields->push(HX_HCSTRING("gamepad_event","\xbc","\x9e","\xd9","\x5b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(InputEvent_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::luxe::InputEventType*/ ,(int)offsetof(InputEvent_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::luxe::InteractState*/ ,(int)offsetof(InputEvent_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsObject /*::luxe::MouseEvent*/ ,(int)offsetof(InputEvent_obj,mouse_event),HX_HCSTRING("mouse_event","\x40","\xcf","\x9f","\x32")},
	{hx::fsObject /*::luxe::KeyEvent*/ ,(int)offsetof(InputEvent_obj,key_event),HX_HCSTRING("key_event","\x3a","\x1a","\x1f","\xd5")},
	{hx::fsObject /*::luxe::TouchEvent*/ ,(int)offsetof(InputEvent_obj,touch_event),HX_HCSTRING("touch_event","\x5a","\x00","\x4e","\xa2")},
	{hx::fsObject /*::luxe::GamepadEvent*/ ,(int)offsetof(InputEvent_obj,gamepad_event),HX_HCSTRING("gamepad_event","\xbc","\x9e","\xd9","\x5b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("mouse_event","\x40","\xcf","\x9f","\x32"),
	HX_HCSTRING("key_event","\x3a","\x1a","\x1f","\xd5"),
	HX_HCSTRING("touch_event","\x5a","\x00","\x4e","\xa2"),
	HX_HCSTRING("gamepad_event","\xbc","\x9e","\xd9","\x5b"),
	HX_HCSTRING("set_key","\x42","\xe3","\xc7","\x19"),
	HX_HCSTRING("set_mouse","\x88","\x5e","\x5f","\x33"),
	HX_HCSTRING("set_touch","\x22","\x60","\x2d","\x3b"),
	HX_HCSTRING("set_gamepad","\xc4","\x47","\xed","\x19"),
	HX_HCSTRING("set_unknown","\xad","\x8a","\xe2","\x71"),
	HX_HCSTRING("set_common","\x68","\x83","\x33","\xbb"),
	HX_HCSTRING("set_events","\x56","\x5d","\x6f","\x8a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class InputEvent_obj::__mClass;

void InputEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.InputEvent","\x88","\x6d","\xc7","\x88");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InputEvent_obj >;
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
