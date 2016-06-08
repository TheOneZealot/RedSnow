#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_snow_types_GamepadEvent
#include <snow/types/GamepadEvent.h>
#endif
#ifndef INCLUDED_snow_types_InputEvent
#include <snow/types/InputEvent.h>
#endif
#ifndef INCLUDED_snow_types_KeyEvent
#include <snow/types/KeyEvent.h>
#endif
#ifndef INCLUDED_snow_types_MouseEvent
#include <snow/types/MouseEvent.h>
#endif
#ifndef INCLUDED_snow_types_TextEvent
#include <snow/types/TextEvent.h>
#endif
#ifndef INCLUDED_snow_types_TouchEvent
#include <snow/types/TouchEvent.h>
#endif
namespace snow{
namespace types{

Void InputEvent_obj::__construct()
{
HX_STACK_FRAME("snow.types.InputEvent","new",0xde34e8e2,"snow.types.InputEvent.new","snow/types/Types.hx",752,0x72b41ce7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(759)
	this->window_id = (int)-1;
	HX_STACK_LINE(757)
	this->timestamp = ((Float)0.0);
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

Void InputEvent_obj::reset( int _type,int _window_id,Float _timestamp){
{
		HX_STACK_FRAME("snow.types.InputEvent","reset",0xd18206d1,"snow.types.InputEvent.reset","snow/types/Types.hx",773,0x72b41ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_type,"_type")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(775)
		this->type = _type;
		HX_STACK_LINE(776)
		this->key = null();
		HX_STACK_LINE(777)
		this->text = null();
		HX_STACK_LINE(778)
		this->mouse = null();
		HX_STACK_LINE(779)
		this->touch = null();
		HX_STACK_LINE(780)
		this->gamepad = null();
		HX_STACK_LINE(781)
		this->window_id = _window_id;
		HX_STACK_LINE(782)
		this->timestamp = _timestamp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(InputEvent_obj,reset,(void))

Void InputEvent_obj::set_key( ::snow::types::KeyEvent _event,int _window_id,Float _timestamp){
{
		HX_STACK_FRAME("snow.types.InputEvent","set_key",0x742c64c4,"snow.types.InputEvent.set_key","snow/types/Types.hx",786,0x72b41ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(787)
		{
			HX_STACK_LINE(787)
			this->type = (int)1;
			HX_STACK_LINE(787)
			this->key = null();
			HX_STACK_LINE(787)
			this->text = null();
			HX_STACK_LINE(787)
			this->mouse = null();
			HX_STACK_LINE(787)
			this->touch = null();
			HX_STACK_LINE(787)
			this->gamepad = null();
			HX_STACK_LINE(787)
			this->window_id = _window_id;
			HX_STACK_LINE(787)
			this->timestamp = _timestamp;
		}
		HX_STACK_LINE(788)
		this->key = _event;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(InputEvent_obj,set_key,(void))

Void InputEvent_obj::set_text( ::snow::types::TextEvent _event,int _window_id,Float _timestamp){
{
		HX_STACK_FRAME("snow.types.InputEvent","set_text",0x389eb1e8,"snow.types.InputEvent.set_text","snow/types/Types.hx",791,0x72b41ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(792)
		{
			HX_STACK_LINE(792)
			this->type = (int)2;
			HX_STACK_LINE(792)
			this->key = null();
			HX_STACK_LINE(792)
			this->text = null();
			HX_STACK_LINE(792)
			this->mouse = null();
			HX_STACK_LINE(792)
			this->touch = null();
			HX_STACK_LINE(792)
			this->gamepad = null();
			HX_STACK_LINE(792)
			this->window_id = _window_id;
			HX_STACK_LINE(792)
			this->timestamp = _timestamp;
		}
		HX_STACK_LINE(793)
		this->text = _event;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(InputEvent_obj,set_text,(void))

Void InputEvent_obj::set_mouse( ::snow::types::MouseEvent _event,int _window_id,Float _timestamp){
{
		HX_STACK_FRAME("snow.types.InputEvent","set_mouse",0x5108c48a,"snow.types.InputEvent.set_mouse","snow/types/Types.hx",796,0x72b41ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(797)
		{
			HX_STACK_LINE(797)
			this->type = (int)3;
			HX_STACK_LINE(797)
			this->key = null();
			HX_STACK_LINE(797)
			this->text = null();
			HX_STACK_LINE(797)
			this->mouse = null();
			HX_STACK_LINE(797)
			this->touch = null();
			HX_STACK_LINE(797)
			this->gamepad = null();
			HX_STACK_LINE(797)
			this->window_id = _window_id;
			HX_STACK_LINE(797)
			this->timestamp = _timestamp;
		}
		HX_STACK_LINE(798)
		this->mouse = _event;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(InputEvent_obj,set_mouse,(void))

Void InputEvent_obj::set_touch( ::snow::types::TouchEvent _event,Float _timestamp){
{
		HX_STACK_FRAME("snow.types.InputEvent","set_touch",0x58d6c624,"snow.types.InputEvent.set_touch","snow/types/Types.hx",801,0x72b41ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(802)
		{
			HX_STACK_LINE(802)
			this->type = (int)4;
			HX_STACK_LINE(802)
			this->key = null();
			HX_STACK_LINE(802)
			this->text = null();
			HX_STACK_LINE(802)
			this->mouse = null();
			HX_STACK_LINE(802)
			this->touch = null();
			HX_STACK_LINE(802)
			this->gamepad = null();
			HX_STACK_LINE(802)
			this->window_id = (int)0;
			HX_STACK_LINE(802)
			this->timestamp = _timestamp;
		}
		HX_STACK_LINE(803)
		this->touch = _event;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(InputEvent_obj,set_touch,(void))

Void InputEvent_obj::set_gamepad( ::snow::types::GamepadEvent _event,Float _timestamp){
{
		HX_STACK_FRAME("snow.types.InputEvent","set_gamepad",0x013db246,"snow.types.InputEvent.set_gamepad","snow/types/Types.hx",806,0x72b41ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(807)
		{
			HX_STACK_LINE(807)
			this->type = (int)5;
			HX_STACK_LINE(807)
			this->key = null();
			HX_STACK_LINE(807)
			this->text = null();
			HX_STACK_LINE(807)
			this->mouse = null();
			HX_STACK_LINE(807)
			this->touch = null();
			HX_STACK_LINE(807)
			this->gamepad = null();
			HX_STACK_LINE(807)
			this->window_id = (int)0;
			HX_STACK_LINE(807)
			this->timestamp = _timestamp;
		}
		HX_STACK_LINE(808)
		this->gamepad = _event;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(InputEvent_obj,set_gamepad,(void))

::String InputEvent_obj::toString( ){
	HX_STACK_FRAME("snow.types.InputEvent","toString",0xf5fba0ea,"snow.types.InputEvent.toString","snow/types/Types.hx",811,0x72b41ce7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(812)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(812)
	{
		HX_STACK_LINE(812)
		int tmp1 = this->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(812)
		int this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(812)
		int tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(812)
		switch( (int)(tmp2)){
			case (int)0: {
				HX_STACK_LINE(812)
				tmp = HX_HCSTRING("ie_unknown","\xe7","\x14","\xfd","\x32");
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(812)
				tmp = HX_HCSTRING("ie_key","\x7c","\x48","\x0e","\x62");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(812)
				tmp = HX_HCSTRING("ie_text","\x30","\x0f","\x64","\x70");
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(812)
				tmp = HX_HCSTRING("ie_mouse","\x42","\x06","\xf5","\xe5");
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(812)
				tmp = HX_HCSTRING("ie_touch","\xdc","\x07","\xc3","\xed");
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(812)
				tmp = HX_HCSTRING("ie_gamepad","\xfe","\xd1","\x07","\xdb");
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(812)
				tmp = HX_HCSTRING("ie_joystick","\xbf","\x20","\x23","\x9c");
			}
			;break;
			default: {
				HX_STACK_LINE(812)
				tmp = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
			}
		}
	}
	HX_STACK_LINE(812)
	::String tmp1 = (HX_HCSTRING("{ \"InputEvent\":true, \"type\":\"","\x55","\x99","\x4a","\x01") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(812)
	::String tmp2 = (tmp1 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(812)
	::String _s = tmp2;		HX_STACK_VAR(_s,"_s");
	HX_STACK_LINE(814)
	::snow::types::KeyEvent tmp3 = this->key;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(814)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(814)
	if ((tmp4)){
		HX_STACK_LINE(814)
		::snow::types::KeyEvent tmp5 = this->key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(814)
		::String tmp6 = ::Std_obj::string(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(814)
		::String tmp7 = (HX_HCSTRING(", \"key\":","\x49","\x47","\x7b","\x7e") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(814)
		hx::AddEq(_s,tmp7);
	}
	HX_STACK_LINE(815)
	::snow::types::TextEvent tmp5 = this->text;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(815)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(815)
	if ((tmp6)){
		HX_STACK_LINE(815)
		::snow::types::TextEvent tmp7 = this->text;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(815)
		::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(815)
		::String tmp9 = (HX_HCSTRING(", \"text\":","\x73","\x45","\x2e","\xc6") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(815)
		hx::AddEq(_s,tmp9);
	}
	HX_STACK_LINE(816)
	::snow::types::MouseEvent tmp7 = this->mouse;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(816)
	bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(816)
	if ((tmp8)){
		HX_STACK_LINE(816)
		::snow::types::MouseEvent tmp9 = this->mouse;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(816)
		::String tmp10 = ::Std_obj::string(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(816)
		::String tmp11 = (HX_HCSTRING(", \"mouse\":","\xcf","\xa9","\x1f","\xc4") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(816)
		hx::AddEq(_s,tmp11);
	}
	HX_STACK_LINE(817)
	::snow::types::TouchEvent tmp9 = this->touch;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(817)
	bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(817)
	if ((tmp10)){
		HX_STACK_LINE(817)
		::snow::types::TouchEvent tmp11 = this->touch;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(817)
		::String tmp12 = ::Std_obj::string(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(817)
		::String tmp13 = (HX_HCSTRING(", \"touch\":","\xe9","\xc5","\xa4","\xdc") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(817)
		hx::AddEq(_s,tmp13);
	}
	HX_STACK_LINE(818)
	::snow::types::GamepadEvent tmp11 = this->gamepad;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(818)
	bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(818)
	if ((tmp12)){
		HX_STACK_LINE(818)
		::snow::types::GamepadEvent tmp13 = this->gamepad;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(818)
		::String tmp14 = ::Std_obj::string(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(818)
		::String tmp15 = (HX_HCSTRING(", \"gamepad\":","\xcb","\x53","\xd0","\x51") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(818)
		hx::AddEq(_s,tmp15);
	}
	HX_STACK_LINE(820)
	int tmp13 = this->window_id;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(820)
	::String tmp14 = (HX_HCSTRING("\"window\":","\xea","\x7f","\xdd","\x81") + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(820)
	::String tmp15 = (tmp14 + HX_HCSTRING(", \"time\":","\xd3","\xdc","\x77","\x0c"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(820)
	Float tmp16 = this->timestamp;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(820)
	::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(820)
	::String tmp18 = (tmp17 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(820)
	hx::AddEq(_s,tmp18);
	HX_STACK_LINE(822)
	::String tmp19 = _s;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(822)
	return tmp19;
}


HX_DEFINE_DYNAMIC_FUNC0(InputEvent_obj,toString,return )


InputEvent_obj::InputEvent_obj()
{
}

void InputEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InputEvent);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(timestamp,"timestamp");
	HX_MARK_MEMBER_NAME(window_id,"window_id");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(mouse,"mouse");
	HX_MARK_MEMBER_NAME(touch,"touch");
	HX_MARK_MEMBER_NAME(gamepad,"gamepad");
	HX_MARK_END_CLASS();
}

void InputEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(timestamp,"timestamp");
	HX_VISIT_MEMBER_NAME(window_id,"window_id");
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(mouse,"mouse");
	HX_VISIT_MEMBER_NAME(touch,"touch");
	HX_VISIT_MEMBER_NAME(gamepad,"gamepad");
}

Dynamic InputEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mouse") ) { return mouse; }
		if (HX_FIELD_EQ(inName,"touch") ) { return touch; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { return gamepad; }
		if (HX_FIELD_EQ(inName,"set_key") ) { return set_key_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { return timestamp; }
		if (HX_FIELD_EQ(inName,"window_id") ) { return window_id; }
		if (HX_FIELD_EQ(inName,"set_mouse") ) { return set_mouse_dyn(); }
		if (HX_FIELD_EQ(inName,"set_touch") ) { return set_touch_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_gamepad") ) { return set_gamepad_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InputEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< ::snow::types::KeyEvent >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::snow::types::TextEvent >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mouse") ) { mouse=inValue.Cast< ::snow::types::MouseEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touch") ) { touch=inValue.Cast< ::snow::types::TouchEvent >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=inValue.Cast< ::snow::types::GamepadEvent >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { timestamp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window_id") ) { window_id=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InputEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"));
	outFields->push(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"));
	outFields->push(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"));
	outFields->push(HX_HCSTRING("touch","\xbf","\x17","\x33","\x14"));
	outFields->push(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(InputEvent_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(InputEvent_obj,timestamp),HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5")},
	{hx::fsInt,(int)offsetof(InputEvent_obj,window_id),HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96")},
	{hx::fsObject /*::snow::types::KeyEvent*/ ,(int)offsetof(InputEvent_obj,key),HX_HCSTRING("key","\x9f","\x89","\x51","\x00")},
	{hx::fsObject /*::snow::types::TextEvent*/ ,(int)offsetof(InputEvent_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsObject /*::snow::types::MouseEvent*/ ,(int)offsetof(InputEvent_obj,mouse),HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c")},
	{hx::fsObject /*::snow::types::TouchEvent*/ ,(int)offsetof(InputEvent_obj,touch),HX_HCSTRING("touch","\xbf","\x17","\x33","\x14")},
	{hx::fsObject /*::snow::types::GamepadEvent*/ ,(int)offsetof(InputEvent_obj,gamepad),HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"),
	HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"),
	HX_HCSTRING("key","\x9f","\x89","\x51","\x00"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"),
	HX_HCSTRING("touch","\xbf","\x17","\x33","\x14"),
	HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("set_key","\x42","\xe3","\xc7","\x19"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("set_mouse","\x88","\x5e","\x5f","\x33"),
	HX_HCSTRING("set_touch","\x22","\x60","\x2d","\x3b"),
	HX_HCSTRING("set_gamepad","\xc4","\x47","\xed","\x19"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
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
	__mClass->mName = HX_HCSTRING("snow.types.InputEvent","\xf0","\x8f","\x5a","\x8d");
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

} // end namespace snow
} // end namespace types
