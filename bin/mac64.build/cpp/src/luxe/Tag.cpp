#include <hxcpp.h>

#ifndef INCLUDED_luxe_Tag
#include <luxe/Tag.h>
#endif
namespace luxe{

Void Tag_obj::__construct()
{
	return null();
}

//Tag_obj::~Tag_obj() { }

Dynamic Tag_obj::__CreateEmpty() { return  new Tag_obj; }
hx::ObjectPtr< Tag_obj > Tag_obj::__new()
{  hx::ObjectPtr< Tag_obj > _result_ = new Tag_obj();
	_result_->__construct();
	return _result_;}

Dynamic Tag_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tag_obj > _result_ = new Tag_obj();
	_result_->__construct();
	return _result_;}

::String Tag_obj::update;

::String Tag_obj::tick;

::String Tag_obj::game_update;

::String Tag_obj::render;

::String Tag_obj::debug;

::String Tag_obj::updates;

::String Tag_obj::events;

::String Tag_obj::audio;

::String Tag_obj::input;

::String Tag_obj::timer;

::String Tag_obj::scene;


Tag_obj::Tag_obj()
{
}

bool Tag_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tick") ) { outValue = tick; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { outValue = debug; return true;  }
		if (HX_FIELD_EQ(inName,"audio") ) { outValue = audio; return true;  }
		if (HX_FIELD_EQ(inName,"input") ) { outValue = input; return true;  }
		if (HX_FIELD_EQ(inName,"timer") ) { outValue = timer; return true;  }
		if (HX_FIELD_EQ(inName,"scene") ) { outValue = scene; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update; return true;  }
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render; return true;  }
		if (HX_FIELD_EQ(inName,"events") ) { outValue = events; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"updates") ) { outValue = updates; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"game_update") ) { outValue = game_update; return true;  }
	}
	return false;
}

bool Tag_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tick") ) { tick=ioValue.Cast< ::String >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { debug=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"audio") ) { audio=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"input") ) { input=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"scene") ) { scene=ioValue.Cast< ::String >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { update=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"render") ) { render=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"events") ) { events=ioValue.Cast< ::String >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"updates") ) { updates=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"game_update") ) { game_update=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Tag_obj::update,HX_HCSTRING("update","\x09","\x86","\x05","\x87")},
	{hx::fsString,(void *) &Tag_obj::tick,HX_HCSTRING("tick","\x5d","\xc3","\xfc","\x4c")},
	{hx::fsString,(void *) &Tag_obj::game_update,HX_HCSTRING("game_update","\xf6","\xe5","\xe1","\x0c")},
	{hx::fsString,(void *) &Tag_obj::render,HX_HCSTRING("render","\x56","\x6b","\x29","\x05")},
	{hx::fsString,(void *) &Tag_obj::debug,HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7")},
	{hx::fsString,(void *) &Tag_obj::updates,HX_HCSTRING("updates","\x4a","\xc2","\xcf","\x9d")},
	{hx::fsString,(void *) &Tag_obj::events,HX_HCSTRING("events","\x19","\x4f","\x6a","\x96")},
	{hx::fsString,(void *) &Tag_obj::audio,HX_HCSTRING("audio","\xd6","\x78","\x80","\x27")},
	{hx::fsString,(void *) &Tag_obj::input,HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsString,(void *) &Tag_obj::timer,HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{hx::fsString,(void *) &Tag_obj::scene,HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tag_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Tag_obj::update,"update");
	HX_MARK_MEMBER_NAME(Tag_obj::tick,"tick");
	HX_MARK_MEMBER_NAME(Tag_obj::game_update,"game_update");
	HX_MARK_MEMBER_NAME(Tag_obj::render,"render");
	HX_MARK_MEMBER_NAME(Tag_obj::debug,"debug");
	HX_MARK_MEMBER_NAME(Tag_obj::updates,"updates");
	HX_MARK_MEMBER_NAME(Tag_obj::events,"events");
	HX_MARK_MEMBER_NAME(Tag_obj::audio,"audio");
	HX_MARK_MEMBER_NAME(Tag_obj::input,"input");
	HX_MARK_MEMBER_NAME(Tag_obj::timer,"timer");
	HX_MARK_MEMBER_NAME(Tag_obj::scene,"scene");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tag_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Tag_obj::update,"update");
	HX_VISIT_MEMBER_NAME(Tag_obj::tick,"tick");
	HX_VISIT_MEMBER_NAME(Tag_obj::game_update,"game_update");
	HX_VISIT_MEMBER_NAME(Tag_obj::render,"render");
	HX_VISIT_MEMBER_NAME(Tag_obj::debug,"debug");
	HX_VISIT_MEMBER_NAME(Tag_obj::updates,"updates");
	HX_VISIT_MEMBER_NAME(Tag_obj::events,"events");
	HX_VISIT_MEMBER_NAME(Tag_obj::audio,"audio");
	HX_VISIT_MEMBER_NAME(Tag_obj::input,"input");
	HX_VISIT_MEMBER_NAME(Tag_obj::timer,"timer");
	HX_VISIT_MEMBER_NAME(Tag_obj::scene,"scene");
};

#endif

hx::Class Tag_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("tick","\x5d","\xc3","\xfc","\x4c"),
	HX_HCSTRING("game_update","\xf6","\xe5","\xe1","\x0c"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7"),
	HX_HCSTRING("updates","\x4a","\xc2","\xcf","\x9d"),
	HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"),
	HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"),
	::String(null()) };

void Tag_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Tag","\x82","\x31","\x8b","\x63");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tag_obj::__GetStatic;
	__mClass->mSetStaticField = &Tag_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Tag_obj >;
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

void Tag_obj::__boot()
{
	update= HX_HCSTRING("update dt","\x47","\xc5","\xbd","\x82");
	tick= HX_HCSTRING("tick dt","\x73","\x94","\xb0","\x1a");
	game_update= HX_HCSTRING("game.update","\x05","\x2b","\x46","\x17");
	render= HX_HCSTRING("core.render","\x85","\xfe","\xb9","\x34");
	debug= HX_HCSTRING("core.debug","\x04","\x7a","\x71","\xef");
	updates= HX_HCSTRING("core.updates","\x3b","\xf8","\xbf","\x0c");
	events= HX_HCSTRING("core.events","\x48","\xe2","\xfa","\xc5");
	audio= HX_HCSTRING("core.audio","\x87","\xa0","\xd2","\x3f");
	input= HX_HCSTRING("core.input","\xbb","\xeb","\x6f","\xd6");
	timer= HX_HCSTRING("core.timer","\x76","\xe7","\x87","\x28");
	scene= HX_HCSTRING("core.scene","\xfd","\x00","\x24","\x91");
}

} // end namespace luxe
