#include <hxcpp.h>

#ifndef INCLUDED_snow_types_MouseEvent
#include <snow/types/MouseEvent.h>
#endif
namespace snow{
namespace types{

Void MouseEvent_obj::__construct()
{
HX_STACK_FRAME("snow.types.MouseEvent","new",0x314dfb67,"snow.types.MouseEvent.new","snow/types/Types.hx",659,0x72b41ce7)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//MouseEvent_obj::~MouseEvent_obj() { }

Dynamic MouseEvent_obj::__CreateEmpty() { return  new MouseEvent_obj; }
hx::ObjectPtr< MouseEvent_obj > MouseEvent_obj::__new()
{  hx::ObjectPtr< MouseEvent_obj > _result_ = new MouseEvent_obj();
	_result_->__construct();
	return _result_;}

Dynamic MouseEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseEvent_obj > _result_ = new MouseEvent_obj();
	_result_->__construct();
	return _result_;}

Void MouseEvent_obj::set( int _type,int _x,int _y,int _x_rel,int _y_rel,int _button,Float _wheel_x,Float _wheel_y){
{
		HX_STACK_FRAME("snow.types.MouseEvent","set",0x3151c6a9,"snow.types.MouseEvent.set","snow/types/Types.hx",661,0x72b41ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_type,"_type")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_x_rel,"_x_rel")
		HX_STACK_ARG(_y_rel,"_y_rel")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_ARG(_wheel_x,"_wheel_x")
		HX_STACK_ARG(_wheel_y,"_wheel_y")
		HX_STACK_LINE(662)
		this->type = _type;
		HX_STACK_LINE(663)
		this->x = _x;
		HX_STACK_LINE(664)
		this->y = _y;
		HX_STACK_LINE(665)
		this->x_rel = _x_rel;
		HX_STACK_LINE(666)
		this->y_rel = _y_rel;
		HX_STACK_LINE(667)
		this->button = _button;
		HX_STACK_LINE(668)
		this->wheel_x = _wheel_x;
		HX_STACK_LINE(669)
		this->wheel_y = _wheel_y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(MouseEvent_obj,set,(void))

::String MouseEvent_obj::toString( ){
	HX_STACK_FRAME("snow.types.MouseEvent","toString",0x62384c45,"snow.types.MouseEvent.toString","snow/types/Types.hx",672,0x72b41ce7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(672)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(672)
	{
		HX_STACK_LINE(672)
		int tmp1 = this->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(672)
		int this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(672)
		int tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(672)
		switch( (int)(tmp2)){
			case (int)0: {
				HX_STACK_LINE(672)
				tmp = HX_HCSTRING("me_unknown","\x63","\xf4","\x26","\x34");
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(672)
				tmp = HX_HCSTRING("me_move","\x98","\x00","\x21","\x12");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(672)
				tmp = HX_HCSTRING("me_down","\xe9","\x15","\x2e","\x0c");
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(672)
				tmp = HX_HCSTRING("me_up","\x22","\x44","\xb8","\x05");
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(672)
				tmp = HX_HCSTRING("me_wheel","\x34","\xed","\x13","\x88");
			}
			;break;
			default: {
				HX_STACK_LINE(672)
				tmp = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
			}
		}
	}
	HX_STACK_LINE(672)
	::String tmp1 = (HX_HCSTRING("{ \"MouseEvent\":true, \"type\":\"","\x5a","\xdf","\xb7","\xdb") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(672)
	::String tmp2 = (tmp1 + HX_HCSTRING("\", \"x\":","\x84","\xa3","\x34","\xa1"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(672)
	int tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(672)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(672)
	::String tmp5 = (tmp4 + HX_HCSTRING(", \"y\":","\x23","\xa0","\x5b","\x1b"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(672)
	int tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(672)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(672)
	::String tmp8 = (tmp7 + HX_HCSTRING(", \"button\":","\x78","\xbd","\xcb","\x8f"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(672)
	int tmp9 = this->button;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(672)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(672)
	::String tmp11 = (tmp10 + HX_HCSTRING(", \"x_rel\":","\xbc","\x93","\x66","\x64"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(672)
	int tmp12 = this->x_rel;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(672)
	::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(672)
	::String tmp14 = (tmp13 + HX_HCSTRING(", \"y_rel\":","\x7d","\x0a","\xfc","\x8d"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(672)
	int tmp15 = this->y_rel;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(672)
	::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(672)
	::String tmp17 = (tmp16 + HX_HCSTRING(", \"wheel_x\":","\x7e","\xba","\xbe","\x75"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(672)
	Float tmp18 = this->wheel_x;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(672)
	::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(672)
	::String tmp20 = (tmp19 + HX_HCSTRING(", \"wheel_y\":","\xbf","\x7c","\xbf","\x75"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(672)
	Float tmp21 = this->wheel_y;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(672)
	::String tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(672)
	::String tmp23 = (tmp22 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(672)
	return tmp23;
}


HX_DEFINE_DYNAMIC_FUNC0(MouseEvent_obj,toString,return )


MouseEvent_obj::MouseEvent_obj()
{
}

Dynamic MouseEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	case 5:
		if (HX_FIELD_EQ(inName,"x_rel") ) { return x_rel; }
		if (HX_FIELD_EQ(inName,"y_rel") ) { return y_rel; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wheel_x") ) { return wheel_x; }
		if (HX_FIELD_EQ(inName,"wheel_y") ) { return wheel_y; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MouseEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"x_rel") ) { x_rel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y_rel") ) { y_rel=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wheel_x") ) { wheel_x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wheel_y") ) { wheel_y=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("x_rel","\xd2","\xba","\x37","\x57"));
	outFields->push(HX_HCSTRING("y_rel","\x53","\x4f","\x9e","\xea"));
	outFields->push(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"));
	outFields->push(HX_HCSTRING("wheel_x","\x94","\x24","\x25","\x54"));
	outFields->push(HX_HCSTRING("wheel_y","\x95","\x24","\x25","\x54"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MouseEvent_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,x_rel),HX_HCSTRING("x_rel","\xd2","\xba","\x37","\x57")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,y_rel),HX_HCSTRING("y_rel","\x53","\x4f","\x9e","\xea")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,button),HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,wheel_x),HX_HCSTRING("wheel_x","\x94","\x24","\x25","\x54")},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,wheel_y),HX_HCSTRING("wheel_y","\x95","\x24","\x25","\x54")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("x_rel","\xd2","\xba","\x37","\x57"),
	HX_HCSTRING("y_rel","\x53","\x4f","\x9e","\xea"),
	HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"),
	HX_HCSTRING("wheel_x","\x94","\x24","\x25","\x54"),
	HX_HCSTRING("wheel_y","\x95","\x24","\x25","\x54"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class MouseEvent_obj::__mClass;

void MouseEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types.MouseEvent","\xf5","\xbb","\xec","\x2c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MouseEvent_obj >;
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
