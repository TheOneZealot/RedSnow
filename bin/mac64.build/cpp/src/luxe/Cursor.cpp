#include <hxcpp.h>

#ifndef INCLUDED_luxe_Cursor
#include <luxe/Cursor.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_core_Runtime
#include <snow/core/Runtime.h>
#endif
#ifndef INCLUDED_snow_core_native_Runtime
#include <snow/core/native/Runtime.h>
#endif
#ifndef INCLUDED_snow_modules_sdl_Runtime
#include <snow/modules/sdl/Runtime.h>
#endif
namespace luxe{

Void Cursor_obj::__construct(::luxe::Screen _screen)
{
HX_STACK_FRAME("luxe.Cursor","new",0xa48b30a0,"luxe.Cursor.new","luxe/Screen.hx",122,0xd2f30fd9)
HX_STACK_THIS(this)
HX_STACK_ARG(_screen,"_screen")
{
	HX_STACK_LINE(134)
	this->ignore = false;
	HX_STACK_LINE(128)
	this->grab = false;
	HX_STACK_LINE(139)
	this->screen = _screen;
	HX_STACK_LINE(140)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	this->pos = tmp;
}
;
	return null();
}

//Cursor_obj::~Cursor_obj() { }

Dynamic Cursor_obj::__CreateEmpty() { return  new Cursor_obj; }
hx::ObjectPtr< Cursor_obj > Cursor_obj::__new(::luxe::Screen _screen)
{  hx::ObjectPtr< Cursor_obj > _result_ = new Cursor_obj();
	_result_->__construct(_screen);
	return _result_;}

Dynamic Cursor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Cursor_obj > _result_ = new Cursor_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Cursor_obj::set_internal( Float _x,Float _y){
{
		HX_STACK_FRAME("luxe.Cursor","set_internal",0x8f03d67a,"luxe.Cursor.set_internal","luxe/Screen.hx",145,0xd2f30fd9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_LINE(152)
		this->ignore = true;
		HX_STACK_LINE(154)
		::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		this->pos = tmp;
		HX_STACK_LINE(156)
		this->ignore = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cursor_obj,set_internal,(void))

bool Cursor_obj::get_grab( ){
	HX_STACK_FRAME("luxe.Cursor","get_grab",0x520a4315,"luxe.Cursor.get_grab","luxe/Screen.hx",162,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(164)
	bool tmp = this->grab;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Cursor_obj,get_grab,return )

bool Cursor_obj::set_grab( bool _grab){
	HX_STACK_FRAME("luxe.Cursor","set_grab",0x00679c89,"luxe.Cursor.set_grab","luxe/Screen.hx",168,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_grab,"_grab")
	HX_STACK_LINE(170)
	::luxe::Screen tmp = this->screen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	::snow::Snow tmp1 = tmp->core->app;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	bool tmp2 = _grab;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(170)
	tmp1->runtime->window_grab(tmp2);
	HX_STACK_LINE(172)
	bool tmp3 = this->grab = _grab;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(172)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Cursor_obj,set_grab,return )

::phoenix::Vector Cursor_obj::get_pos( ){
	HX_STACK_FRAME("luxe.Cursor","get_pos",0x03d6a66b,"luxe.Cursor.get_pos","luxe/Screen.hx",176,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(178)
	::phoenix::Vector tmp = this->pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Cursor_obj,get_pos,return )


Cursor_obj::Cursor_obj()
{
}

void Cursor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Cursor);
	HX_MARK_MEMBER_NAME(grab,"grab");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(screen,"screen");
	HX_MARK_MEMBER_NAME(ignore,"ignore");
	HX_MARK_END_CLASS();
}

void Cursor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grab,"grab");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(screen,"screen");
	HX_VISIT_MEMBER_NAME(ignore,"ignore");
}

Dynamic Cursor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return inCallProp == hx::paccAlways ? get_pos() : pos; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"grab") ) { return inCallProp == hx::paccAlways ? get_grab() : grab; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"screen") ) { return screen; }
		if (HX_FIELD_EQ(inName,"ignore") ) { return ignore; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_pos") ) { return get_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_grab") ) { return get_grab_dyn(); }
		if (HX_FIELD_EQ(inName,"set_grab") ) { return set_grab_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_internal") ) { return set_internal_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Cursor_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"grab") ) { if (inCallProp == hx::paccAlways) return set_grab(inValue);grab=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"screen") ) { screen=inValue.Cast< ::luxe::Screen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignore") ) { ignore=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Cursor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("grab","\xcc","\xcf","\x6b","\x44"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"));
	outFields->push(HX_HCSTRING("ignore","\x12","\xb9","\xc8","\x92"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Cursor_obj,grab),HX_HCSTRING("grab","\xcc","\xcf","\x6b","\x44")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Cursor_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsObject /*::luxe::Screen*/ ,(int)offsetof(Cursor_obj,screen),HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47")},
	{hx::fsBool,(int)offsetof(Cursor_obj,ignore),HX_HCSTRING("ignore","\x12","\xb9","\xc8","\x92")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("grab","\xcc","\xcf","\x6b","\x44"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"),
	HX_HCSTRING("ignore","\x12","\xb9","\xc8","\x92"),
	HX_HCSTRING("set_internal","\xba","\x3e","\x89","\xf2"),
	HX_HCSTRING("get_grab","\x55","\x8b","\x26","\xc4"),
	HX_HCSTRING("set_grab","\xc9","\xe4","\x83","\x72"),
	HX_HCSTRING("get_pos","\x2b","\x26","\xca","\x26"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Cursor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cursor_obj::__mClass,"__mClass");
};

#endif

hx::Class Cursor_obj::__mClass;

void Cursor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Cursor","\xae","\xa0","\x46","\x9e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Cursor_obj >;
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
