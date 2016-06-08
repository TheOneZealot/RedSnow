#include <hxcpp.h>

#ifndef INCLUDED_luxe_tilemaps_TileOffset
#include <luxe/tilemaps/TileOffset.h>
#endif
namespace luxe{
namespace tilemaps{

::luxe::tilemaps::TileOffset TileOffset_obj::bottom;

::luxe::tilemaps::TileOffset TileOffset_obj::center;

::luxe::tilemaps::TileOffset TileOffset_obj::left;

::luxe::tilemaps::TileOffset TileOffset_obj::right;

::luxe::tilemaps::TileOffset TileOffset_obj::top;

HX_DEFINE_CREATE_ENUM(TileOffset_obj)

int TileOffset_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65")) return 2;
	if (inName==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05")) return 0;
	if (inName==HX_HCSTRING("left","\x07","\x08","\xb0","\x47")) return 3;
	if (inName==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9")) return 4;
	if (inName==HX_HCSTRING("top","\x95","\x66","\x58","\x00")) return 1;
	return super::__FindIndex(inName);
}

int TileOffset_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65")) return 0;
	if (inName==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05")) return 0;
	if (inName==HX_HCSTRING("left","\x07","\x08","\xb0","\x47")) return 0;
	if (inName==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9")) return 0;
	if (inName==HX_HCSTRING("top","\x95","\x66","\x58","\x00")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TileOffset_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65")) return bottom;
	if (inName==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05")) return center;
	if (inName==HX_HCSTRING("left","\x07","\x08","\xb0","\x47")) return left;
	if (inName==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9")) return right;
	if (inName==HX_HCSTRING("top","\x95","\x66","\x58","\x00")) return top;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),
	HX_HCSTRING("top","\x95","\x66","\x58","\x00"),
	HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"),
	HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),
	HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileOffset_obj::bottom,"bottom");
	HX_MARK_MEMBER_NAME(TileOffset_obj::center,"center");
	HX_MARK_MEMBER_NAME(TileOffset_obj::left,"left");
	HX_MARK_MEMBER_NAME(TileOffset_obj::right,"right");
	HX_MARK_MEMBER_NAME(TileOffset_obj::top,"top");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileOffset_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TileOffset_obj::bottom,"bottom");
	HX_VISIT_MEMBER_NAME(TileOffset_obj::center,"center");
	HX_VISIT_MEMBER_NAME(TileOffset_obj::left,"left");
	HX_VISIT_MEMBER_NAME(TileOffset_obj::right,"right");
	HX_VISIT_MEMBER_NAME(TileOffset_obj::top,"top");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TileOffset_obj::__mClass;

Dynamic __Create_TileOffset_obj() { return new TileOffset_obj; }

void TileOffset_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("luxe.tilemaps.TileOffset","\x12","\xa2","\x96","\x11"), hx::TCanCast< TileOffset_obj >,sStaticFields,sMemberFields,
	&__Create_TileOffset_obj, &__Create,
	&super::__SGetClass(), &CreateTileOffset_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TileOffset_obj::__boot()
{
hx::Static(bottom) = hx::CreateEnum< TileOffset_obj >(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"),2);
hx::Static(center) = hx::CreateEnum< TileOffset_obj >(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),0);
hx::Static(left) = hx::CreateEnum< TileOffset_obj >(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),3);
hx::Static(right) = hx::CreateEnum< TileOffset_obj >(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),4);
hx::Static(top) = hx::CreateEnum< TileOffset_obj >(HX_HCSTRING("top","\x95","\x66","\x58","\x00"),1);
}


} // end namespace luxe
} // end namespace tilemaps
