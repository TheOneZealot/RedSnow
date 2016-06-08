#include <hxcpp.h>

#ifndef INCLUDED_luxe_InputEventType
#include <luxe/InputEventType.h>
#endif
namespace luxe{

::luxe::InputEventType InputEventType_obj::gamepad;

::luxe::InputEventType InputEventType_obj::key;

::luxe::InputEventType InputEventType_obj::mouse;

::luxe::InputEventType InputEventType_obj::touch;

::luxe::InputEventType InputEventType_obj::unknown;

HX_DEFINE_CREATE_ENUM(InputEventType_obj)

int InputEventType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")) return 4;
	if (inName==HX_HCSTRING("key","\x9f","\x89","\x51","\x00")) return 3;
	if (inName==HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c")) return 1;
	if (inName==HX_HCSTRING("touch","\xbf","\x17","\x33","\x14")) return 2;
	if (inName==HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1")) return 0;
	return super::__FindIndex(inName);
}

int InputEventType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")) return 0;
	if (inName==HX_HCSTRING("key","\x9f","\x89","\x51","\x00")) return 0;
	if (inName==HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c")) return 0;
	if (inName==HX_HCSTRING("touch","\xbf","\x17","\x33","\x14")) return 0;
	if (inName==HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic InputEventType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")) return gamepad;
	if (inName==HX_HCSTRING("key","\x9f","\x89","\x51","\x00")) return key;
	if (inName==HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c")) return mouse;
	if (inName==HX_HCSTRING("touch","\xbf","\x17","\x33","\x14")) return touch;
	if (inName==HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1")) return unknown;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1"),
	HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"),
	HX_HCSTRING("touch","\xbf","\x17","\x33","\x14"),
	HX_HCSTRING("key","\x9f","\x89","\x51","\x00"),
	HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputEventType_obj::gamepad,"gamepad");
	HX_MARK_MEMBER_NAME(InputEventType_obj::key,"key");
	HX_MARK_MEMBER_NAME(InputEventType_obj::mouse,"mouse");
	HX_MARK_MEMBER_NAME(InputEventType_obj::touch,"touch");
	HX_MARK_MEMBER_NAME(InputEventType_obj::unknown,"unknown");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputEventType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InputEventType_obj::gamepad,"gamepad");
	HX_VISIT_MEMBER_NAME(InputEventType_obj::key,"key");
	HX_VISIT_MEMBER_NAME(InputEventType_obj::mouse,"mouse");
	HX_VISIT_MEMBER_NAME(InputEventType_obj::touch,"touch");
	HX_VISIT_MEMBER_NAME(InputEventType_obj::unknown,"unknown");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class InputEventType_obj::__mClass;

Dynamic __Create_InputEventType_obj() { return new InputEventType_obj; }

void InputEventType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("luxe.InputEventType","\x62","\xf0","\xe2","\x2b"), hx::TCanCast< InputEventType_obj >,sStaticFields,sMemberFields,
	&__Create_InputEventType_obj, &__Create,
	&super::__SGetClass(), &CreateInputEventType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void InputEventType_obj::__boot()
{
hx::Static(gamepad) = hx::CreateEnum< InputEventType_obj >(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"),4);
hx::Static(key) = hx::CreateEnum< InputEventType_obj >(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"),3);
hx::Static(mouse) = hx::CreateEnum< InputEventType_obj >(HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"),1);
hx::Static(touch) = hx::CreateEnum< InputEventType_obj >(HX_HCSTRING("touch","\xbf","\x17","\x33","\x14"),2);
hx::Static(unknown) = hx::CreateEnum< InputEventType_obj >(HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1"),0);
}


} // end namespace luxe
