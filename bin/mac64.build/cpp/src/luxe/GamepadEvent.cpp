#include <hxcpp.h>

#ifndef INCLUDED_luxe_GamepadEvent
#include <luxe/GamepadEvent.h>
#endif
#ifndef INCLUDED_luxe_GamepadEventType
#include <luxe/GamepadEventType.h>
#endif
#ifndef INCLUDED_luxe_InteractState
#include <luxe/InteractState.h>
#endif
namespace luxe{

Void GamepadEvent_obj::__construct()
{
HX_STACK_FRAME("luxe.GamepadEvent","new",0x3bfdb103,"luxe.GamepadEvent.new","luxe/Input.hx",795,0x19edc1cd)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//GamepadEvent_obj::~GamepadEvent_obj() { }

Dynamic GamepadEvent_obj::__CreateEmpty() { return  new GamepadEvent_obj; }
hx::ObjectPtr< GamepadEvent_obj > GamepadEvent_obj::__new()
{  hx::ObjectPtr< GamepadEvent_obj > _result_ = new GamepadEvent_obj();
	_result_->__construct();
	return _result_;}

Dynamic GamepadEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GamepadEvent_obj > _result_ = new GamepadEvent_obj();
	_result_->__construct();
	return _result_;}

Void GamepadEvent_obj::set_axis( int _gamepad,int _axis,Float _value,Float _timestamp){
{
		HX_STACK_FRAME("luxe.GamepadEvent","set_axis",0x6b47221b,"luxe.GamepadEvent.set_axis","luxe/Input.hx",817,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_gamepad,"_gamepad")
		HX_STACK_ARG(_axis,"_axis")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(819)
		this->id = null();
		HX_STACK_LINE(820)
		this->button = (int)-1;
		HX_STACK_LINE(821)
		this->axis = _axis;
		HX_STACK_LINE(822)
		this->value = _value;
		HX_STACK_LINE(823)
		this->gamepad = _gamepad;
		HX_STACK_LINE(824)
		this->timestamp = _timestamp;
		HX_STACK_LINE(825)
		this->state = ::luxe::InteractState_obj::axis;
		HX_STACK_LINE(826)
		this->type = ::luxe::GamepadEventType_obj::axis;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GamepadEvent_obj,set_axis,(void))

Void GamepadEvent_obj::set_button( int _gamepad,int _button,Float _value,::luxe::InteractState _state,Float _timestamp){
{
		HX_STACK_FRAME("luxe.GamepadEvent","set_button",0xd85639ec,"luxe.GamepadEvent.set_button","luxe/Input.hx",831,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_gamepad,"_gamepad")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_state,"_state")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(833)
		this->id = null();
		HX_STACK_LINE(834)
		this->axis = (int)-1;
		HX_STACK_LINE(835)
		this->state = _state;
		HX_STACK_LINE(836)
		this->value = _value;
		HX_STACK_LINE(837)
		this->button = _button;
		HX_STACK_LINE(838)
		this->gamepad = _gamepad;
		HX_STACK_LINE(839)
		this->timestamp = _timestamp;
		HX_STACK_LINE(840)
		this->type = ::luxe::GamepadEventType_obj::button;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(GamepadEvent_obj,set_button,(void))

Void GamepadEvent_obj::set_device( int _gamepad,::String _id,::luxe::GamepadEventType _type,Float _timestamp){
{
		HX_STACK_FRAME("luxe.GamepadEvent","set_device",0x6fedb490,"luxe.GamepadEvent.set_device","luxe/Input.hx",845,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_gamepad,"_gamepad")
		HX_STACK_ARG(_id,"_id")
		HX_STACK_ARG(_type,"_type")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(847)
		this->id = _id;
		HX_STACK_LINE(848)
		this->axis = (int)-1;
		HX_STACK_LINE(849)
		this->value = (int)0;
		HX_STACK_LINE(850)
		this->button = (int)-1;
		HX_STACK_LINE(851)
		this->type = _type;
		HX_STACK_LINE(852)
		this->gamepad = _gamepad;
		HX_STACK_LINE(853)
		this->timestamp = _timestamp;
		HX_STACK_LINE(854)
		this->state = ::luxe::InteractState_obj::none;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GamepadEvent_obj,set_device,(void))


GamepadEvent_obj::GamepadEvent_obj()
{
}

void GamepadEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GamepadEvent);
	HX_MARK_MEMBER_NAME(timestamp,"timestamp");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(gamepad,"gamepad");
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void GamepadEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timestamp,"timestamp");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(gamepad,"gamepad");
	HX_VISIT_MEMBER_NAME(button,"button");
	HX_VISIT_MEMBER_NAME(axis,"axis");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(id,"id");
}

Dynamic GamepadEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"axis") ) { return axis; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { return gamepad; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_axis") ) { return set_axis_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { return timestamp; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_button") ) { return set_button_dyn(); }
		if (HX_FIELD_EQ(inName,"set_device") ) { return set_device_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GamepadEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::luxe::GamepadEventType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::luxe::InteractState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { timestamp=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GamepadEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"));
	outFields->push(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"));
	outFields->push(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(GamepadEvent_obj,timestamp),HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5")},
	{hx::fsObject /*::luxe::GamepadEventType*/ ,(int)offsetof(GamepadEvent_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::luxe::InteractState*/ ,(int)offsetof(GamepadEvent_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsInt,(int)offsetof(GamepadEvent_obj,gamepad),HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")},
	{hx::fsInt,(int)offsetof(GamepadEvent_obj,button),HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")},
	{hx::fsInt,(int)offsetof(GamepadEvent_obj,axis),HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40")},
	{hx::fsFloat,(int)offsetof(GamepadEvent_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsString,(int)offsetof(GamepadEvent_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"),
	HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"),
	HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("set_axis","\x9e","\x31","\x91","\x6e"),
	HX_HCSTRING("set_button","\x2f","\x70","\xe5","\xcd"),
	HX_HCSTRING("set_device","\xd3","\xea","\x7c","\x65"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GamepadEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GamepadEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class GamepadEvent_obj::__mClass;

void GamepadEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.GamepadEvent","\x91","\x73","\x72","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GamepadEvent_obj >;
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
