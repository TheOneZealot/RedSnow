#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
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
#ifndef INCLUDED_snow_core_native_io_IO
#include <snow/core/native/io/IO.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_IO
#include <snow/modules/interfaces/IO.h>
#endif
#ifndef INCLUDED_snow_modules_sdl_IO
#include <snow/modules/sdl/IO.h>
#endif
#ifndef INCLUDED_snow_systems_io_IO
#include <snow/systems/io/IO.h>
#endif
namespace snow{
namespace core{
namespace native{

Void Runtime_obj::__construct(::snow::Snow _app)
{
HX_STACK_FRAME("snow.core.native.Runtime","new",0xe2653317,"snow.core.native.Runtime.new","snow/core/native/Runtime.hx",18,0x89911f1a)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
{
	HX_STACK_LINE(20)
	this->name = HX_HCSTRING("native","\x97","\xc9","\x1c","\x22");
	HX_STACK_LINE(27)
	this->app = _app;
	HX_STACK_LINE(30)
	::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	tmp->os = HX_HCSTRING("mac","\x8f","\x0a","\x53","\x00");
	HX_STACK_LINE(30)
	::snow::Snow tmp1 = this->app;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	tmp1->platform = HX_HCSTRING("mac","\x8f","\x0a","\x53","\x00");
	HX_STACK_LINE(37)
	::snow::Snow tmp2 = this->app;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	::snow::modules::sdl::IO tmp3 = tmp2->io->module;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	::String tmp4 = tmp3->app_path();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	::String _app_path = tmp4;		HX_STACK_VAR(_app_path,"_app_path");
	HX_STACK_LINE(42)
	bool tmp5 = (_app_path != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(42)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(42)
	if ((tmp5)){
		HX_STACK_LINE(42)
		tmp6 = (_app_path != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(42)
		tmp6 = false;
	}
	HX_STACK_LINE(42)
	if ((tmp6)){
		HX_STACK_LINE(43)
		::String tmp7 = _app_path;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		::Sys_obj::setCwd(tmp7);
	}
	else{
		HX_STACK_LINE(138)
		Dynamic();
	}
}
;
	return null();
}

//Runtime_obj::~Runtime_obj() { }

Dynamic Runtime_obj::__CreateEmpty() { return  new Runtime_obj; }
hx::ObjectPtr< Runtime_obj > Runtime_obj::__new(::snow::Snow _app)
{  hx::ObjectPtr< Runtime_obj > _result_ = new Runtime_obj();
	_result_->__construct(_app);
	return _result_;}

Dynamic Runtime_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Runtime_obj > _result_ = new Runtime_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *Runtime_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::snow::core::Runtime_obj)) return operator ::snow::core::Runtime_obj *();
	return super::__ToInterface(inType);
}

Runtime_obj::operator ::snow::core::Runtime_obj *()
	{ return new ::snow::core::Runtime_delegate_< Runtime_obj >(this); }
bool Runtime_obj::run( ){
	HX_STACK_FRAME("snow.core.native.Runtime","run",0xe2684a02,"snow.core.native.Runtime.run","snow/core/native/Runtime.hx",50,0x89911f1a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	tmp->dispatch_event((int)3);
	HX_STACK_LINE(56)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Runtime_obj,run,return )

Void Runtime_obj::ready( ){
{
		HX_STACK_FRAME("snow.core.native.Runtime","ready",0x79f35eda,"snow.core.native.Runtime.ready","snow/core/native/Runtime.hx",60,0x89911f1a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		::String tmp = HX_HCSTRING("  i / runtime / runtime / native / ready","\x03","\x68","\x73","\x7f");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Runtime.hx","\x06","\x29","\xa2","\x6c"),62,HX_HCSTRING("snow.core.native.Runtime","\xa5","\x5b","\xc2","\xc2"),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		::haxe::Log_obj::trace(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Runtime_obj,ready,(void))

Void Runtime_obj::shutdown( Dynamic __o__immediate){
Dynamic _immediate = __o__immediate.Default(false);
	HX_STACK_FRAME("snow.core.native.Runtime","shutdown",0x9006627f,"snow.core.native.Runtime.shutdown","snow/core/native/Runtime.hx",66,0x89911f1a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_immediate,"_immediate")
{
		HX_STACK_LINE(68)
		Dynamic tmp = _immediate;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		::String tmp2 = (HX_HCSTRING("runtime / native / shutdown / immediate=","\x26","\x56","\x69","\xd1") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		::String tmp3 = (HX_HCSTRING("  i / runtime / ","\xc1","\xd9","\x78","\xba") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Runtime.hx","\x06","\x29","\xa2","\x6c"),68,HX_HCSTRING("snow.core.native.Runtime","\xa5","\x5b","\xc2","\xc2"),HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(68)
		::haxe::Log_obj::trace(tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Runtime_obj,shutdown,(void))

bool Runtime_obj::window_grab( bool enable){
	HX_STACK_FRAME("snow.core.native.Runtime","window_grab",0x64f78372,"snow.core.native.Runtime.window_grab","snow/core/native/Runtime.hx",72,0x89911f1a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(enable,"enable")
	HX_STACK_LINE(74)
	::String tmp = HX_HCSTRING("  i / runtime / runtime / native / window_grab","\x5b","\x51","\x94","\x74");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Runtime.hx","\x06","\x29","\xa2","\x6c"),74,HX_HCSTRING("snow.core.native.Runtime","\xa5","\x5b","\xc2","\xc2"),HX_HCSTRING("window_grab","\xbb","\x11","\x22","\x55"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	::haxe::Log_obj::trace(tmp,tmp1);
	HX_STACK_LINE(76)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Runtime_obj,window_grab,return )

bool Runtime_obj::window_fullscreen( bool enable,Dynamic __o_true_fullscreen){
Dynamic true_fullscreen = __o_true_fullscreen.Default(false);
	HX_STACK_FRAME("snow.core.native.Runtime","window_fullscreen",0x0d732e61,"snow.core.native.Runtime.window_fullscreen","snow/core/native/Runtime.hx",80,0x89911f1a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(enable,"enable")
	HX_STACK_ARG(true_fullscreen,"true_fullscreen")
{
		HX_STACK_LINE(82)
		::String tmp = HX_HCSTRING("  i / runtime / runtime / native / window_fullscreen","\x0a","\xd1","\x30","\x43");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Runtime.hx","\x06","\x29","\xa2","\x6c"),82,HX_HCSTRING("snow.core.native.Runtime","\xa5","\x5b","\xc2","\xc2"),HX_HCSTRING("window_fullscreen","\x6a","\x19","\x9b","\x3c"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		::haxe::Log_obj::trace(tmp,tmp1);
		HX_STACK_LINE(84)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Runtime_obj,window_fullscreen,return )

Float Runtime_obj::window_device_pixel_ratio( ){
	HX_STACK_FRAME("snow.core.native.Runtime","window_device_pixel_ratio",0x7f51890f,"snow.core.native.Runtime.window_device_pixel_ratio","snow/core/native/Runtime.hx",88,0x89911f1a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	::String tmp = HX_HCSTRING("  i / runtime / runtime / native / window_device_pixel_ratio","\xb8","\x7c","\xdf","\x3f");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Runtime.hx","\x06","\x29","\xa2","\x6c"),90,HX_HCSTRING("snow.core.native.Runtime","\xa5","\x5b","\xc2","\xc2"),HX_HCSTRING("window_device_pixel_ratio","\x18","\x25","\x59","\xb3"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	::haxe::Log_obj::trace(tmp,tmp1);
	HX_STACK_LINE(92)
	return ((Float)1.0);
}


HX_DEFINE_DYNAMIC_FUNC0(Runtime_obj,window_device_pixel_ratio,return )

int Runtime_obj::window_width( ){
	HX_STACK_FRAME("snow.core.native.Runtime","window_width",0x241433a0,"snow.core.native.Runtime.window_width","snow/core/native/Runtime.hx",96,0x89911f1a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(98)
	::String tmp = HX_HCSTRING("  i / runtime / runtime / native / window_width","\x97","\x91","\xab","\xbd");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Runtime.hx","\x06","\x29","\xa2","\x6c"),98,HX_HCSTRING("snow.core.native.Runtime","\xa5","\x5b","\xc2","\xc2"),HX_HCSTRING("window_width","\x37","\x25","\x26","\x59"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	::haxe::Log_obj::trace(tmp,tmp1);
	HX_STACK_LINE(100)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Runtime_obj,window_width,return )

int Runtime_obj::window_height( ){
	HX_STACK_FRAME("snow.core.native.Runtime","window_height",0x23e8710d,"snow.core.native.Runtime.window_height","snow/core/native/Runtime.hx",104,0x89911f1a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	::String tmp = HX_HCSTRING("  i / runtime / runtime / native / window_height","\x36","\x4b","\xc3","\xee");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Runtime.hx","\x06","\x29","\xa2","\x6c"),106,HX_HCSTRING("snow.core.native.Runtime","\xa5","\x5b","\xc2","\xc2"),HX_HCSTRING("window_height","\x96","\xe3","\x89","\x5e"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	::haxe::Log_obj::trace(tmp,tmp1);
	HX_STACK_LINE(108)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Runtime_obj,window_height,return )

Float Runtime_obj::timestamp( ){
	HX_STACK_FRAME("snow.core.native.Runtime","timestamp",0xdbed9acd,"snow.core.native.Runtime.timestamp","snow/core/native/Runtime.hx",112,0x89911f1a)
	HX_STACK_LINE(114)
	Float tmp = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Runtime_obj,timestamp,return )


Runtime_obj::Runtime_obj()
{
}

void Runtime_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Runtime);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_END_CLASS();
}

void Runtime_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(app,"app");
}

Dynamic Runtime_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shutdown") ) { return shutdown_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"window_grab") ) { return window_grab_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"window_width") ) { return window_width_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"window_height") ) { return window_height_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"window_fullscreen") ) { return window_fullscreen_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"window_device_pixel_ratio") ) { return window_device_pixel_ratio_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Runtime_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { outValue = timestamp_dyn(); return true;  }
	}
	return false;
}

Dynamic Runtime_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Runtime_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Runtime_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(Runtime_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("window_grab","\xbb","\x11","\x22","\x55"),
	HX_HCSTRING("window_fullscreen","\x6a","\x19","\x9b","\x3c"),
	HX_HCSTRING("window_device_pixel_ratio","\x18","\x25","\x59","\xb3"),
	HX_HCSTRING("window_width","\x37","\x25","\x26","\x59"),
	HX_HCSTRING("window_height","\x96","\xe3","\x89","\x5e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Runtime_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Runtime_obj::__mClass,"__mClass");
};

#endif

hx::Class Runtime_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"),
	::String(null()) };

void Runtime_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.core.native.Runtime","\xa5","\x5b","\xc2","\xc2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Runtime_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Runtime_obj >;
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
} // end namespace core
} // end namespace native
