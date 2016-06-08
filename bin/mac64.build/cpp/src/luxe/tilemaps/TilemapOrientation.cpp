#include <hxcpp.h>

#ifndef INCLUDED_luxe_tilemaps_TilemapOrientation
#include <luxe/tilemaps/TilemapOrientation.h>
#endif
namespace luxe{
namespace tilemaps{

::luxe::tilemaps::TilemapOrientation TilemapOrientation_obj::isometric;

::luxe::tilemaps::TilemapOrientation TilemapOrientation_obj::none;

::luxe::tilemaps::TilemapOrientation TilemapOrientation_obj::ortho;

HX_DEFINE_CREATE_ENUM(TilemapOrientation_obj)

int TilemapOrientation_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("isometric","\x35","\x5b","\xde","\x47")) return 1;
	if (inName==HX_HCSTRING("none","\xb8","\x12","\x0a","\x49")) return 2;
	if (inName==HX_HCSTRING("ortho","\x38","\x17","\x2d","\x35")) return 0;
	return super::__FindIndex(inName);
}

int TilemapOrientation_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("isometric","\x35","\x5b","\xde","\x47")) return 0;
	if (inName==HX_HCSTRING("none","\xb8","\x12","\x0a","\x49")) return 0;
	if (inName==HX_HCSTRING("ortho","\x38","\x17","\x2d","\x35")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TilemapOrientation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("isometric","\x35","\x5b","\xde","\x47")) return isometric;
	if (inName==HX_HCSTRING("none","\xb8","\x12","\x0a","\x49")) return none;
	if (inName==HX_HCSTRING("ortho","\x38","\x17","\x2d","\x35")) return ortho;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("ortho","\x38","\x17","\x2d","\x35"),
	HX_HCSTRING("isometric","\x35","\x5b","\xde","\x47"),
	HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TilemapOrientation_obj::isometric,"isometric");
	HX_MARK_MEMBER_NAME(TilemapOrientation_obj::none,"none");
	HX_MARK_MEMBER_NAME(TilemapOrientation_obj::ortho,"ortho");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TilemapOrientation_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TilemapOrientation_obj::isometric,"isometric");
	HX_VISIT_MEMBER_NAME(TilemapOrientation_obj::none,"none");
	HX_VISIT_MEMBER_NAME(TilemapOrientation_obj::ortho,"ortho");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TilemapOrientation_obj::__mClass;

Dynamic __Create_TilemapOrientation_obj() { return new TilemapOrientation_obj; }

void TilemapOrientation_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("luxe.tilemaps.TilemapOrientation","\xf3","\x16","\x8c","\xc1"), hx::TCanCast< TilemapOrientation_obj >,sStaticFields,sMemberFields,
	&__Create_TilemapOrientation_obj, &__Create,
	&super::__SGetClass(), &CreateTilemapOrientation_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TilemapOrientation_obj::__boot()
{
hx::Static(isometric) = hx::CreateEnum< TilemapOrientation_obj >(HX_HCSTRING("isometric","\x35","\x5b","\xde","\x47"),1);
hx::Static(none) = hx::CreateEnum< TilemapOrientation_obj >(HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"),2);
hx::Static(ortho) = hx::CreateEnum< TilemapOrientation_obj >(HX_HCSTRING("ortho","\x38","\x17","\x2d","\x35"),0);
}


} // end namespace luxe
} // end namespace tilemaps
