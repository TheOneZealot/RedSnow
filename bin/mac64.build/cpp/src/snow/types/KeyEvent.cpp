#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_snow_types_KeyEvent
#include <snow/types/KeyEvent.h>
#endif
#ifndef INCLUDED_snow_types_ModState
#include <snow/types/ModState.h>
#endif
namespace snow{
namespace types{

Void KeyEvent_obj::__construct()
{
HX_STACK_FRAME("snow.types.KeyEvent","new",0xa103b8ad,"snow.types.KeyEvent.new","snow/types/Types.hx",612,0x72b41ce7)
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

Void KeyEvent_obj::set( int _type,int _keycode,int _scancode,bool _repeat,::snow::types::ModState _mod){
{
		HX_STACK_FRAME("snow.types.KeyEvent","set",0xa10783ef,"snow.types.KeyEvent.set","snow/types/Types.hx",614,0x72b41ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_type,"_type")
		HX_STACK_ARG(_keycode,"_keycode")
		HX_STACK_ARG(_scancode,"_scancode")
		HX_STACK_ARG(_repeat,"_repeat")
		HX_STACK_ARG(_mod,"_mod")
		HX_STACK_LINE(615)
		this->type = _type;
		HX_STACK_LINE(616)
		this->keycode = _keycode;
		HX_STACK_LINE(617)
		this->scancode = _scancode;
		HX_STACK_LINE(618)
		this->repeat = _repeat;
		HX_STACK_LINE(619)
		this->mod = _mod;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(KeyEvent_obj,set,(void))

::String KeyEvent_obj::toString( ){
	HX_STACK_FRAME("snow.types.KeyEvent","toString",0x5290b13f,"snow.types.KeyEvent.toString","snow/types/Types.hx",622,0x72b41ce7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(622)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(622)
	{
		HX_STACK_LINE(622)
		Dynamic tmp1 = this->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(622)
		int this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(622)
		int tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(622)
		switch( (int)(tmp2)){
			case (int)0: {
				HX_STACK_LINE(622)
				tmp = HX_HCSTRING("ke_unknown","\xa5","\x04","\x92","\xb3");
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(622)
				tmp = HX_HCSTRING("ke_down","\x67","\x28","\x03","\xb9");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(622)
				tmp = HX_HCSTRING("ke_up","\x20","\x1b","\xeb","\xde");
			}
			;break;
			default: {
				HX_STACK_LINE(622)
				tmp = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
			}
		}
	}
	HX_STACK_LINE(622)
	::String tmp1 = (HX_HCSTRING("{ \"KeyEvent\":true, \"type\":\"","\x60","\x6c","\x66","\x47") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(622)
	::String tmp2 = (tmp1 + HX_HCSTRING("\", \"keycode\":","\x58","\x15","\xd1","\x5a"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(622)
	Dynamic tmp3 = this->keycode;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(622)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(622)
	::String tmp5 = (tmp4 + HX_HCSTRING(", \"scancode\":","\x30","\x72","\xe8","\x92"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(622)
	Dynamic tmp6 = this->scancode;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(622)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(622)
	::String tmp8 = (tmp7 + HX_HCSTRING(", \"repeat\":","\x21","\xdf","\xee","\x43"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(622)
	Dynamic tmp9 = this->repeat;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(622)
	::String tmp10 = ::Std_obj::string(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(622)
	::String tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(622)
	::String tmp12 = (tmp11 + HX_HCSTRING(", \"mod\":","\x2c","\xa3","\xd4","\xab"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(622)
	::snow::types::ModState tmp13 = this->mod;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(622)
	::String tmp14 = ::Std_obj::string(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(622)
	::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(622)
	::String tmp16 = (tmp15 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(622)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC0(KeyEvent_obj,toString,return )


KeyEvent_obj::KeyEvent_obj()
{
}

void KeyEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KeyEvent);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(keycode,"keycode");
	HX_MARK_MEMBER_NAME(scancode,"scancode");
	HX_MARK_MEMBER_NAME(repeat,"repeat");
	HX_MARK_MEMBER_NAME(mod,"mod");
	HX_MARK_END_CLASS();
}

void KeyEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(keycode,"keycode");
	HX_VISIT_MEMBER_NAME(scancode,"scancode");
	HX_VISIT_MEMBER_NAME(repeat,"repeat");
	HX_VISIT_MEMBER_NAME(mod,"mod");
}

Dynamic KeyEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mod") ) { return mod; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { return repeat; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keycode") ) { return keycode; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"scancode") ) { return scancode; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KeyEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mod") ) { mod=inValue.Cast< ::snow::types::ModState >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { repeat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keycode") ) { keycode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"scancode") ) { scancode=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"));
	outFields->push(HX_HCSTRING("scancode","\x2a","\xb1","\xec","\x26"));
	outFields->push(HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"));
	outFields->push(HX_HCSTRING("mod","\xc2","\x16","\x53","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(KeyEvent_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(KeyEvent_obj,keycode),HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(KeyEvent_obj,scancode),HX_HCSTRING("scancode","\x2a","\xb1","\xec","\x26")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(KeyEvent_obj,repeat),HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06")},
	{hx::fsObject /*::snow::types::ModState*/ ,(int)offsetof(KeyEvent_obj,mod),HX_HCSTRING("mod","\xc2","\x16","\x53","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"),
	HX_HCSTRING("scancode","\x2a","\xb1","\xec","\x26"),
	HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"),
	HX_HCSTRING("mod","\xc2","\x16","\x53","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
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
	__mClass->mName = HX_HCSTRING("snow.types.KeyEvent","\x3b","\xde","\xdc","\xf6");
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

} // end namespace snow
} // end namespace types
