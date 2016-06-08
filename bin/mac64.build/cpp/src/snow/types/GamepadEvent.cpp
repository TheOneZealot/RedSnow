#include <hxcpp.h>

#ifndef INCLUDED_snow_types_GamepadEvent
#include <snow/types/GamepadEvent.h>
#endif
namespace snow{
namespace types{

Void GamepadEvent_obj::__construct()
{
HX_STACK_FRAME("snow.types.GamepadEvent","new",0x2f4e916b,"snow.types.GamepadEvent.new","snow/types/Types.hx",712,0x72b41ce7)
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

Void GamepadEvent_obj::set_axis( int _gamepad,int _axis,Float _value){
{
		HX_STACK_FRAME("snow.types.GamepadEvent","set_axis",0xfbe7c8b3,"snow.types.GamepadEvent.set_axis","snow/types/Types.hx",714,0x72b41ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_gamepad,"_gamepad")
		HX_STACK_ARG(_axis,"_axis")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(715)
		this->button = null();
		HX_STACK_LINE(716)
		this->device_id = null();
		HX_STACK_LINE(717)
		this->device_event = null();
		HX_STACK_LINE(719)
		this->axis = _axis;
		HX_STACK_LINE(720)
		this->value = _value;
		HX_STACK_LINE(721)
		this->type = (int)1;
		HX_STACK_LINE(722)
		this->gamepad = _gamepad;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GamepadEvent_obj,set_axis,(void))

Void GamepadEvent_obj::set_button( int _type,int _gamepad,int _button,Float _value){
{
		HX_STACK_FRAME("snow.types.GamepadEvent","set_button",0x4f5fb684,"snow.types.GamepadEvent.set_button","snow/types/Types.hx",725,0x72b41ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_type,"_type")
		HX_STACK_ARG(_gamepad,"_gamepad")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(726)
		this->axis = null();
		HX_STACK_LINE(727)
		this->device_id = null();
		HX_STACK_LINE(728)
		this->device_event = null();
		HX_STACK_LINE(730)
		this->type = _type;
		HX_STACK_LINE(731)
		this->value = _value;
		HX_STACK_LINE(732)
		this->button = _button;
		HX_STACK_LINE(733)
		this->gamepad = _gamepad;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GamepadEvent_obj,set_button,(void))

Void GamepadEvent_obj::set_device( int _gamepad,::String _id,int _event){
{
		HX_STACK_FRAME("snow.types.GamepadEvent","set_device",0xe6f73128,"snow.types.GamepadEvent.set_device","snow/types/Types.hx",736,0x72b41ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_gamepad,"_gamepad")
		HX_STACK_ARG(_id,"_id")
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(737)
		this->axis = null();
		HX_STACK_LINE(738)
		this->value = null();
		HX_STACK_LINE(739)
		this->button = null();
		HX_STACK_LINE(741)
		this->device_id = _id;
		HX_STACK_LINE(742)
		this->device_event = _event;
		HX_STACK_LINE(743)
		this->gamepad = _gamepad;
		HX_STACK_LINE(744)
		this->type = (int)4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GamepadEvent_obj,set_device,(void))

::String GamepadEvent_obj::toString( ){
	HX_STACK_FRAME("snow.types.GamepadEvent","toString",0xc5c567c1,"snow.types.GamepadEvent.toString","snow/types/Types.hx",747,0x72b41ce7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(747)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(747)
	{
		HX_STACK_LINE(747)
		int tmp1 = this->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(747)
		int this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(747)
		int tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(747)
		switch( (int)(tmp2)){
			case (int)0: {
				HX_STACK_LINE(747)
				tmp = HX_HCSTRING("ge_unknown","\x29","\x25","\x68","\xb2");
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(747)
				tmp = HX_HCSTRING("ge_axis","\xa2","\x71","\xb8","\x10");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(747)
				tmp = HX_HCSTRING("ge_down","\x63","\x4d","\xad","\x12");
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(747)
				tmp = HX_HCSTRING("ge_up","\x1c","\xc9","\x50","\x91");
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(747)
				tmp = HX_HCSTRING("ge_device","\xd7","\x33","\xf7","\x4f");
			}
			;break;
			default: {
				HX_STACK_LINE(747)
				tmp = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
			}
		}
	}
	HX_STACK_LINE(747)
	::String tmp1 = (HX_HCSTRING("{ \"GamepadEvent\":true, \"type\":\"","\x9e","\x3c","\x47","\x40") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(747)
	::String tmp2 = (tmp1 + HX_HCSTRING("\", \"gamepad\":","\xed","\xfe","\x60","\x95"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(747)
	int tmp3 = this->gamepad;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(747)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(747)
	::String tmp5 = (tmp4 + HX_HCSTRING(", \"axis\":","\x67","\x7a","\x18","\x14"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(747)
	Dynamic tmp6 = this->axis;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(747)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(747)
	::String tmp8 = (tmp7 + HX_HCSTRING(", \"button\":","\x78","\xbd","\xcb","\x8f"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(747)
	Dynamic tmp9 = this->button;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(747)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(747)
	::String tmp11 = (tmp10 + HX_HCSTRING(", \"value\":","\x1b","\xfe","\x18","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(747)
	Dynamic tmp12 = this->value;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(747)
	::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(747)
	::String tmp14 = (tmp13 + HX_HCSTRING(", \"device_id\":\"","\xd4","\x82","\x00","\x1c"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(747)
	::String tmp15 = this->device_id;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(747)
	::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(747)
	::String tmp17 = (tmp16 + HX_HCSTRING("\", \"device_event\":\"","\xad","\x10","\x60","\x82"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(747)
	::String tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(747)
	{
		HX_STACK_LINE(747)
		Dynamic tmp19 = this->device_event;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(747)
		int this1 = tmp19;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(747)
		int tmp20 = this1;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(747)
		switch( (int)(tmp20)){
			case (int)0: {
				HX_STACK_LINE(747)
				tmp18 = HX_HCSTRING("ge_unknown","\x29","\x25","\x68","\xb2");
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(747)
				tmp18 = HX_HCSTRING("ge_device_added","\x18","\x4b","\x91","\xee");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(747)
				tmp18 = HX_HCSTRING("ge_device_removed","\xf8","\xdb","\x59","\x0c");
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(747)
				tmp18 = HX_HCSTRING("ge_device_remapped","\x4e","\x90","\xbb","\xae");
			}
			;break;
			default: {
				HX_STACK_LINE(747)
				tmp18 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
			}
		}
	}
	HX_STACK_LINE(747)
	::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(747)
	::String tmp20 = (tmp19 + HX_HCSTRING("\" }","\xff","\xe8","\x19","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(747)
	return tmp20;
}


HX_DEFINE_DYNAMIC_FUNC0(GamepadEvent_obj,toString,return )


GamepadEvent_obj::GamepadEvent_obj()
{
}

void GamepadEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GamepadEvent);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(gamepad,"gamepad");
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(device_id,"device_id");
	HX_MARK_MEMBER_NAME(device_event,"device_event");
	HX_MARK_END_CLASS();
}

void GamepadEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(gamepad,"gamepad");
	HX_VISIT_MEMBER_NAME(axis,"axis");
	HX_VISIT_MEMBER_NAME(button,"button");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(device_id,"device_id");
	HX_VISIT_MEMBER_NAME(device_event,"device_event");
}

Dynamic GamepadEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"axis") ) { return axis; }
		break;
	case 5:
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
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"device_id") ) { return device_id; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_button") ) { return set_button_dyn(); }
		if (HX_FIELD_EQ(inName,"set_device") ) { return set_device_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"device_event") ) { return device_event; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GamepadEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"device_id") ) { device_id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"device_event") ) { device_event=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GamepadEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"));
	outFields->push(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"));
	outFields->push(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("device_id","\x24","\x17","\x48","\x61"));
	outFields->push(HX_HCSTRING("device_event","\x71","\x80","\x04","\xa6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GamepadEvent_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(GamepadEvent_obj,gamepad),HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GamepadEvent_obj,axis),HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GamepadEvent_obj,button),HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GamepadEvent_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsString,(int)offsetof(GamepadEvent_obj,device_id),HX_HCSTRING("device_id","\x24","\x17","\x48","\x61")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GamepadEvent_obj,device_event),HX_HCSTRING("device_event","\x71","\x80","\x04","\xa6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"),
	HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"),
	HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("device_id","\x24","\x17","\x48","\x61"),
	HX_HCSTRING("device_event","\x71","\x80","\x04","\xa6"),
	HX_HCSTRING("set_axis","\x9e","\x31","\x91","\x6e"),
	HX_HCSTRING("set_button","\x2f","\x70","\xe5","\xcd"),
	HX_HCSTRING("set_device","\xd3","\xea","\x7c","\x65"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
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
	__mClass->mName = HX_HCSTRING("snow.types.GamepadEvent","\xf9","\xff","\xe0","\x13");
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

} // end namespace snow
} // end namespace types
