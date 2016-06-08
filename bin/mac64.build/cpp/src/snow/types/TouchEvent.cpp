#include <hxcpp.h>

#ifndef INCLUDED_snow_types_TouchEvent
#include <snow/types/TouchEvent.h>
#endif
namespace snow{
namespace types{

Void TouchEvent_obj::__construct()
{
HX_STACK_FRAME("snow.types.TouchEvent","new",0xb703f68d,"snow.types.TouchEvent.new","snow/types/Types.hx",686,0x72b41ce7)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//TouchEvent_obj::~TouchEvent_obj() { }

Dynamic TouchEvent_obj::__CreateEmpty() { return  new TouchEvent_obj; }
hx::ObjectPtr< TouchEvent_obj > TouchEvent_obj::__new()
{  hx::ObjectPtr< TouchEvent_obj > _result_ = new TouchEvent_obj();
	_result_->__construct();
	return _result_;}

Dynamic TouchEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TouchEvent_obj > _result_ = new TouchEvent_obj();
	_result_->__construct();
	return _result_;}

Void TouchEvent_obj::set( int _type,int _id,Float _x,Float _y,Float _dx,Float _dy){
{
		HX_STACK_FRAME("snow.types.TouchEvent","set",0xb707c1cf,"snow.types.TouchEvent.set","snow/types/Types.hx",688,0x72b41ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_type,"_type")
		HX_STACK_ARG(_id,"_id")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_dx,"_dx")
		HX_STACK_ARG(_dy,"_dy")
		HX_STACK_LINE(689)
		this->type = _type;
		HX_STACK_LINE(690)
		this->touch_id = _id;
		HX_STACK_LINE(691)
		this->x = _x;
		HX_STACK_LINE(692)
		this->y = _y;
		HX_STACK_LINE(693)
		this->dx = _dx;
		HX_STACK_LINE(694)
		this->dy = _dy;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(TouchEvent_obj,set,(void))

::String TouchEvent_obj::toString( ){
	HX_STACK_FRAME("snow.types.TouchEvent","toString",0xd184275f,"snow.types.TouchEvent.toString","snow/types/Types.hx",697,0x72b41ce7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(697)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(697)
	{
		HX_STACK_LINE(697)
		int tmp1 = this->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(697)
		int this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(697)
		int tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(697)
		switch( (int)(tmp2)){
			case (int)0: {
				HX_STACK_LINE(697)
				tmp = HX_HCSTRING("te_unknown","\x7c","\x3b","\x30","\x76");
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(697)
				tmp = HX_HCSTRING("te_move","\xdf","\x3f","\x37","\x35");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(697)
				tmp = HX_HCSTRING("te_down","\x30","\x55","\x44","\x2f");
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(697)
				tmp = HX_HCSTRING("te_up","\xa9","\x53","\x86","\x0d");
			}
			;break;
			default: {
				HX_STACK_LINE(697)
				tmp = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
			}
		}
	}
	HX_STACK_LINE(697)
	::String tmp1 = (HX_HCSTRING("{ \"TouchEvent\":true, \"type\":\"","\x80","\xfb","\x8c","\xb2") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(697)
	::String tmp2 = (tmp1 + HX_HCSTRING("\", \"touch_id\":","\x7f","\x8d","\xba","\x8c"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(697)
	int tmp3 = this->touch_id;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(697)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(697)
	::String tmp5 = (tmp4 + HX_HCSTRING(", \"x\":","\xe2","\xdd","\x5a","\x1b"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(697)
	Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(697)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(697)
	::String tmp8 = (tmp7 + HX_HCSTRING(", \"y\":","\x23","\xa0","\x5b","\x1b"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(697)
	Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(697)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(697)
	::String tmp11 = (tmp10 + HX_HCSTRING(", \"dx\":","\x9a","\x30","\x30","\xc7"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(697)
	Float tmp12 = this->dx;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(697)
	::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(697)
	::String tmp14 = (tmp13 + HX_HCSTRING(", \"dy\":","\xdb","\xf2","\x30","\xc7"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(697)
	Float tmp15 = this->dy;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(697)
	::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(697)
	::String tmp17 = (tmp16 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(697)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(TouchEvent_obj,toString,return )


TouchEvent_obj::TouchEvent_obj()
{
}

Dynamic TouchEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { return dx; }
		if (HX_FIELD_EQ(inName,"dy") ) { return dy; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"touch_id") ) { return touch_id; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TouchEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { dx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dy") ) { dy=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"touch_id") ) { touch_id=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TouchEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("touch_id","\x9b","\x7b","\x1d","\x00"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("dx","\x94","\x57","\x00","\x00"));
	outFields->push(HX_HCSTRING("dy","\x95","\x57","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TouchEvent_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(TouchEvent_obj,touch_id),HX_HCSTRING("touch_id","\x9b","\x7b","\x1d","\x00")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,dx),HX_HCSTRING("dx","\x94","\x57","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,dy),HX_HCSTRING("dy","\x95","\x57","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("touch_id","\x9b","\x7b","\x1d","\x00"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("dx","\x94","\x57","\x00","\x00"),
	HX_HCSTRING("dy","\x95","\x57","\x00","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class TouchEvent_obj::__mClass;

void TouchEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types.TouchEvent","\x1b","\xac","\xb0","\x08");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TouchEvent_obj >;
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
