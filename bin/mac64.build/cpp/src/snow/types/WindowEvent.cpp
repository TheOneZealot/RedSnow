#include <hxcpp.h>

#ifndef INCLUDED_snow_types_WindowEvent
#include <snow/types/WindowEvent.h>
#endif
namespace snow{
namespace types{

Void WindowEvent_obj::__construct()
{
HX_STACK_FRAME("snow.types.WindowEvent","new",0xbcf7e3bc,"snow.types.WindowEvent.new","snow/types/Types.hx",576,0x72b41ce7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(583)
	this->window_id = (int)-1;
	HX_STACK_LINE(581)
	this->timestamp = ((Float)0.0);
	HX_STACK_LINE(579)
	this->type = (int)0;
}
;
	return null();
}

//WindowEvent_obj::~WindowEvent_obj() { }

Dynamic WindowEvent_obj::__CreateEmpty() { return  new WindowEvent_obj; }
hx::ObjectPtr< WindowEvent_obj > WindowEvent_obj::__new()
{  hx::ObjectPtr< WindowEvent_obj > _result_ = new WindowEvent_obj();
	_result_->__construct();
	return _result_;}

Dynamic WindowEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WindowEvent_obj > _result_ = new WindowEvent_obj();
	_result_->__construct();
	return _result_;}

Void WindowEvent_obj::set( int _type,Float _timestamp,int _window_id,Dynamic _x,Dynamic _y){
{
		HX_STACK_FRAME("snow.types.WindowEvent","set",0xbcfbaefe,"snow.types.WindowEvent.set","snow/types/Types.hx",591,0x72b41ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_type,"_type")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_LINE(592)
		this->type = _type;
		HX_STACK_LINE(593)
		this->timestamp = _timestamp;
		HX_STACK_LINE(594)
		this->window_id = _window_id;
		HX_STACK_LINE(595)
		this->x = _x;
		HX_STACK_LINE(596)
		this->y = _y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(WindowEvent_obj,set,(void))

::String WindowEvent_obj::toString( ){
	HX_STACK_FRAME("snow.types.WindowEvent","toString",0xb9fb0fd0,"snow.types.WindowEvent.toString","snow/types/Types.hx",599,0x72b41ce7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(599)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(599)
	{
		HX_STACK_LINE(599)
		int tmp1 = this->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(599)
		int this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(599)
		int tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(599)
		switch( (int)(tmp2)){
			case (int)0: {
				HX_STACK_LINE(599)
				tmp = HX_HCSTRING("we_unknown","\x19","\xa3","\x0f","\xb7");
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(599)
				tmp = HX_HCSTRING("we_shown","\xa0","\xb6","\x79","\x76");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(599)
				tmp = HX_HCSTRING("we_hidden","\xbb","\xe6","\x2b","\x5a");
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(599)
				tmp = HX_HCSTRING("we_exposed","\x2f","\xe9","\xf6","\xfe");
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(599)
				tmp = HX_HCSTRING("we_moved","\x02","\xfa","\xb7","\x06");
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(599)
				tmp = HX_HCSTRING("we_resized","\x7f","\xdb","\x07","\x39");
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(599)
				tmp = HX_HCSTRING("we_size_changed","\x47","\x8e","\x40","\x39");
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(599)
				tmp = HX_HCSTRING("we_minimized","\xd5","\xbc","\xfc","\xeb");
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(599)
				tmp = HX_HCSTRING("we_maximized","\x67","\xcf","\x3f","\xc2");
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(599)
				tmp = HX_HCSTRING("we_restored","\xe7","\x1a","\x05","\xfc");
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(599)
				tmp = HX_HCSTRING("we_enter","\xe7","\x9a","\xd8","\x6a");
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(599)
				tmp = HX_HCSTRING("we_leave","\xc6","\x62","\xa5","\x6c");
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(599)
				tmp = HX_HCSTRING("we_focus_gained","\x76","\x3d","\x1b","\x38");
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(599)
				tmp = HX_HCSTRING("we_focus_lost","\xbc","\x5a","\x87","\x59");
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(599)
				tmp = HX_HCSTRING("we_close","\x87","\x45","\xb5","\x42");
			}
			;break;
			default: {
				HX_STACK_LINE(599)
				tmp = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
			}
		}
	}
	HX_STACK_LINE(599)
	::String tmp1 = (HX_HCSTRING("{ \"WindowEvent\":true, \"type\":\"","\xd5","\x09","\xfc","\xfa") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(599)
	::String tmp2 = (tmp1 + HX_HCSTRING("\", \"window\":","\x14","\x7a","\xd3","\x6c"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(599)
	int tmp3 = this->window_id;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(599)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(599)
	::String tmp5 = (tmp4 + HX_HCSTRING(", \"x\":","\xe2","\xdd","\x5a","\x1b"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(599)
	Dynamic tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(599)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(599)
	::String tmp8 = (tmp7 + HX_HCSTRING(", \"y\":","\x23","\xa0","\x5b","\x1b"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(599)
	Dynamic tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(599)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(599)
	::String tmp11 = (tmp10 + HX_HCSTRING(", \"time\":","\xd3","\xdc","\x77","\x0c"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(599)
	Float tmp12 = this->timestamp;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(599)
	::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(599)
	::String tmp14 = (tmp13 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(599)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC0(WindowEvent_obj,toString,return )


WindowEvent_obj::WindowEvent_obj()
{
}

void WindowEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WindowEvent);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(timestamp,"timestamp");
	HX_MARK_MEMBER_NAME(window_id,"window_id");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_END_CLASS();
}

void WindowEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(timestamp,"timestamp");
	HX_VISIT_MEMBER_NAME(window_id,"window_id");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
}

Dynamic WindowEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { return timestamp; }
		if (HX_FIELD_EQ(inName,"window_id") ) { return window_id; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WindowEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { timestamp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window_id") ) { window_id=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WindowEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"));
	outFields->push(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(WindowEvent_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(WindowEvent_obj,timestamp),HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5")},
	{hx::fsInt,(int)offsetof(WindowEvent_obj,window_id),HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(WindowEvent_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(WindowEvent_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"),
	HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindowEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class WindowEvent_obj::__mClass;

void WindowEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types.WindowEvent","\xca","\x95","\xdc","\xfc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WindowEvent_obj >;
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
