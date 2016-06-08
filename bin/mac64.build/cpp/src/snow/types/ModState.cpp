#include <hxcpp.h>

#ifndef INCLUDED_snow_types_ModState
#include <snow/types/ModState.h>
#endif
namespace snow{
namespace types{

Void ModState_obj::__construct()
{
HX_STACK_FRAME("snow.types.ModState","new",0x9ab164a1,"snow.types.ModState.new","snow/types/Types.hx",829,0x72b41ce7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(865)
	this->meta = false;
	HX_STACK_LINE(863)
	this->alt = false;
	HX_STACK_LINE(861)
	this->shift = false;
	HX_STACK_LINE(859)
	this->ctrl = false;
	HX_STACK_LINE(857)
	this->mode = false;
	HX_STACK_LINE(855)
	this->caps = false;
	HX_STACK_LINE(853)
	this->num = false;
	HX_STACK_LINE(851)
	this->rmeta = false;
	HX_STACK_LINE(849)
	this->lmeta = false;
	HX_STACK_LINE(847)
	this->ralt = false;
	HX_STACK_LINE(845)
	this->lalt = false;
	HX_STACK_LINE(843)
	this->rctrl = false;
	HX_STACK_LINE(841)
	this->lctrl = false;
	HX_STACK_LINE(839)
	this->rshift = false;
	HX_STACK_LINE(837)
	this->lshift = false;
	HX_STACK_LINE(835)
	this->none = false;
}
;
	return null();
}

//ModState_obj::~ModState_obj() { }

Dynamic ModState_obj::__CreateEmpty() { return  new ModState_obj; }
hx::ObjectPtr< ModState_obj > ModState_obj::__new()
{  hx::ObjectPtr< ModState_obj > _result_ = new ModState_obj();
	_result_->__construct();
	return _result_;}

Dynamic ModState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ModState_obj > _result_ = new ModState_obj();
	_result_->__construct();
	return _result_;}

::String ModState_obj::toString( ){
	HX_STACK_FRAME("snow.types.ModState","toString",0xbb8b30cb,"snow.types.ModState.toString","snow/types/Types.hx",867,0x72b41ce7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(869)
	::String _s = HX_HCSTRING("{ \"ModState\":true ","\x6e","\x4f","\x01","\xa6");		HX_STACK_VAR(_s,"_s");
	HX_STACK_LINE(871)
	bool tmp = this->none;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(871)
	if ((tmp)){
		HX_STACK_LINE(871)
		::String tmp1 = (_s + HX_HCSTRING(", \"none\":true }","\xe9","\xd9","\xb0","\x85"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(871)
		return tmp1;
	}
	HX_STACK_LINE(873)
	bool tmp1 = this->lshift;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(873)
	if ((tmp1)){
		HX_STACK_LINE(873)
		hx::AddEq(_s,HX_HCSTRING(", \"lshift\":true","\x6a","\x96","\xa2","\x64"));
	}
	HX_STACK_LINE(874)
	bool tmp2 = this->rshift;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(874)
	if ((tmp2)){
		HX_STACK_LINE(874)
		hx::AddEq(_s,HX_HCSTRING(", \"rshift\":true","\x24","\x28","\x1f","\xef"));
	}
	HX_STACK_LINE(875)
	bool tmp3 = this->lctrl;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(875)
	if ((tmp3)){
		HX_STACK_LINE(875)
		hx::AddEq(_s,HX_HCSTRING(", \"lctrl\":true","\x0f","\x3f","\x34","\x87"));
	}
	HX_STACK_LINE(876)
	bool tmp4 = this->rctrl;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(876)
	if ((tmp4)){
		HX_STACK_LINE(876)
		hx::AddEq(_s,HX_HCSTRING(", \"rctrl\":true","\x95","\xc2","\x6a","\x8c"));
	}
	HX_STACK_LINE(877)
	bool tmp5 = this->lalt;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(877)
	if ((tmp5)){
		HX_STACK_LINE(877)
		hx::AddEq(_s,HX_HCSTRING(", \"lalt\":true","\xd1","\x65","\xd6","\xa2"));
	}
	HX_STACK_LINE(878)
	bool tmp6 = this->ralt;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(878)
	if ((tmp6)){
		HX_STACK_LINE(878)
		hx::AddEq(_s,HX_HCSTRING(", \"ralt\":true","\x0b","\x35","\x95","\x24"));
	}
	HX_STACK_LINE(879)
	bool tmp7 = this->lmeta;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(879)
	if ((tmp7)){
		HX_STACK_LINE(879)
		hx::AddEq(_s,HX_HCSTRING(", \"lmeta\":true","\xa9","\x90","\xf0","\x56"));
	}
	HX_STACK_LINE(880)
	bool tmp8 = this->rmeta;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(880)
	if ((tmp8)){
		HX_STACK_LINE(880)
		hx::AddEq(_s,HX_HCSTRING(", \"rmeta\":true","\x2f","\x14","\x27","\x5c"));
	}
	HX_STACK_LINE(881)
	bool tmp9 = this->num;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(881)
	if ((tmp9)){
		HX_STACK_LINE(881)
		hx::AddEq(_s,HX_HCSTRING(", \"num\":true","\xfe","\x92","\x68","\xb9"));
	}
	HX_STACK_LINE(882)
	bool tmp10 = this->caps;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(882)
	if ((tmp10)){
		HX_STACK_LINE(882)
		hx::AddEq(_s,HX_HCSTRING(", \"caps\":true","\xb5","\x80","\x6c","\x9b"));
	}
	HX_STACK_LINE(883)
	bool tmp11 = this->mode;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(883)
	if ((tmp11)){
		HX_STACK_LINE(883)
		hx::AddEq(_s,HX_HCSTRING(", \"mode\":true","\x77","\x15","\xff","\xb2"));
	}
	HX_STACK_LINE(884)
	bool tmp12 = this->ctrl;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(884)
	if ((tmp12)){
		HX_STACK_LINE(884)
		hx::AddEq(_s,HX_HCSTRING(", \"ctrl\":true","\xbf","\xf0","\xa5","\x92"));
	}
	HX_STACK_LINE(885)
	bool tmp13 = this->shift;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(885)
	if ((tmp13)){
		HX_STACK_LINE(885)
		hx::AddEq(_s,HX_HCSTRING(", \"shift\":true","\xba","\x5e","\xac","\x5c"));
	}
	HX_STACK_LINE(886)
	bool tmp14 = this->alt;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(886)
	if ((tmp14)){
		HX_STACK_LINE(886)
		hx::AddEq(_s,HX_HCSTRING(", \"alt\":true","\x21","\x7a","\x76","\x23"));
	}
	HX_STACK_LINE(887)
	bool tmp15 = this->meta;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(887)
	if ((tmp15)){
		HX_STACK_LINE(887)
		hx::AddEq(_s,HX_HCSTRING(", \"meta\":true","\x59","\x42","\x62","\x62"));
	}
	HX_STACK_LINE(889)
	hx::AddEq(_s,HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));
	HX_STACK_LINE(891)
	::String tmp16 = _s;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(891)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC0(ModState_obj,toString,return )


ModState_obj::ModState_obj()
{
}

Dynamic ModState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"num") ) { return num; }
		if (HX_FIELD_EQ(inName,"alt") ) { return alt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"none") ) { return none; }
		if (HX_FIELD_EQ(inName,"lalt") ) { return lalt; }
		if (HX_FIELD_EQ(inName,"ralt") ) { return ralt; }
		if (HX_FIELD_EQ(inName,"caps") ) { return caps; }
		if (HX_FIELD_EQ(inName,"mode") ) { return mode; }
		if (HX_FIELD_EQ(inName,"ctrl") ) { return ctrl; }
		if (HX_FIELD_EQ(inName,"meta") ) { return meta; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lctrl") ) { return lctrl; }
		if (HX_FIELD_EQ(inName,"rctrl") ) { return rctrl; }
		if (HX_FIELD_EQ(inName,"lmeta") ) { return lmeta; }
		if (HX_FIELD_EQ(inName,"rmeta") ) { return rmeta; }
		if (HX_FIELD_EQ(inName,"shift") ) { return shift; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lshift") ) { return lshift; }
		if (HX_FIELD_EQ(inName,"rshift") ) { return rshift; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ModState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"num") ) { num=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alt") ) { alt=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"none") ) { none=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lalt") ) { lalt=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ralt") ) { ralt=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caps") ) { caps=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ctrl") ) { ctrl=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"meta") ) { meta=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lctrl") ) { lctrl=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rctrl") ) { rctrl=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lmeta") ) { lmeta=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rmeta") ) { rmeta=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shift") ) { shift=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lshift") ) { lshift=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rshift") ) { rshift=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ModState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"));
	outFields->push(HX_HCSTRING("lshift","\x96","\xe4","\xad","\xaa"));
	outFields->push(HX_HCSTRING("rshift","\xd0","\x0e","\xd2","\x10"));
	outFields->push(HX_HCSTRING("lctrl","\x17","\x2f","\x0f","\x71"));
	outFields->push(HX_HCSTRING("rctrl","\x1d","\xaa","\x76","\xe5"));
	outFields->push(HX_HCSTRING("lalt","\x3d","\x04","\xad","\x47"));
	outFields->push(HX_HCSTRING("ralt","\xf7","\x4b","\xa4","\x4b"));
	outFields->push(HX_HCSTRING("lmeta","\x31","\xf1","\x9f","\x77"));
	outFields->push(HX_HCSTRING("rmeta","\x37","\x6c","\x07","\xec"));
	outFields->push(HX_HCSTRING("num","\x46","\xde","\x53","\x00"));
	outFields->push(HX_HCSTRING("caps","\x21","\x1c","\xba","\x41"));
	outFields->push(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"));
	outFields->push(HX_HCSTRING("ctrl","\xab","\x88","\xc8","\x41"));
	outFields->push(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"));
	outFields->push(HX_HCSTRING("alt","\x29","\xf9","\x49","\x00"));
	outFields->push(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ModState_obj,none),HX_HCSTRING("none","\xb8","\x12","\x0a","\x49")},
	{hx::fsBool,(int)offsetof(ModState_obj,lshift),HX_HCSTRING("lshift","\x96","\xe4","\xad","\xaa")},
	{hx::fsBool,(int)offsetof(ModState_obj,rshift),HX_HCSTRING("rshift","\xd0","\x0e","\xd2","\x10")},
	{hx::fsBool,(int)offsetof(ModState_obj,lctrl),HX_HCSTRING("lctrl","\x17","\x2f","\x0f","\x71")},
	{hx::fsBool,(int)offsetof(ModState_obj,rctrl),HX_HCSTRING("rctrl","\x1d","\xaa","\x76","\xe5")},
	{hx::fsBool,(int)offsetof(ModState_obj,lalt),HX_HCSTRING("lalt","\x3d","\x04","\xad","\x47")},
	{hx::fsBool,(int)offsetof(ModState_obj,ralt),HX_HCSTRING("ralt","\xf7","\x4b","\xa4","\x4b")},
	{hx::fsBool,(int)offsetof(ModState_obj,lmeta),HX_HCSTRING("lmeta","\x31","\xf1","\x9f","\x77")},
	{hx::fsBool,(int)offsetof(ModState_obj,rmeta),HX_HCSTRING("rmeta","\x37","\x6c","\x07","\xec")},
	{hx::fsBool,(int)offsetof(ModState_obj,num),HX_HCSTRING("num","\x46","\xde","\x53","\x00")},
	{hx::fsBool,(int)offsetof(ModState_obj,caps),HX_HCSTRING("caps","\x21","\x1c","\xba","\x41")},
	{hx::fsBool,(int)offsetof(ModState_obj,mode),HX_HCSTRING("mode","\x63","\xd3","\x60","\x48")},
	{hx::fsBool,(int)offsetof(ModState_obj,ctrl),HX_HCSTRING("ctrl","\xab","\x88","\xc8","\x41")},
	{hx::fsBool,(int)offsetof(ModState_obj,shift),HX_HCSTRING("shift","\x82","\xec","\x22","\x7c")},
	{hx::fsBool,(int)offsetof(ModState_obj,alt),HX_HCSTRING("alt","\x29","\xf9","\x49","\x00")},
	{hx::fsBool,(int)offsetof(ModState_obj,meta),HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"),
	HX_HCSTRING("lshift","\x96","\xe4","\xad","\xaa"),
	HX_HCSTRING("rshift","\xd0","\x0e","\xd2","\x10"),
	HX_HCSTRING("lctrl","\x17","\x2f","\x0f","\x71"),
	HX_HCSTRING("rctrl","\x1d","\xaa","\x76","\xe5"),
	HX_HCSTRING("lalt","\x3d","\x04","\xad","\x47"),
	HX_HCSTRING("ralt","\xf7","\x4b","\xa4","\x4b"),
	HX_HCSTRING("lmeta","\x31","\xf1","\x9f","\x77"),
	HX_HCSTRING("rmeta","\x37","\x6c","\x07","\xec"),
	HX_HCSTRING("num","\x46","\xde","\x53","\x00"),
	HX_HCSTRING("caps","\x21","\x1c","\xba","\x41"),
	HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"),
	HX_HCSTRING("ctrl","\xab","\x88","\xc8","\x41"),
	HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"),
	HX_HCSTRING("alt","\x29","\xf9","\x49","\x00"),
	HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ModState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ModState_obj::__mClass,"__mClass");
};

#endif

hx::Class ModState_obj::__mClass;

void ModState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types.ModState","\x2f","\x80","\xe0","\xb1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ModState_obj >;
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
