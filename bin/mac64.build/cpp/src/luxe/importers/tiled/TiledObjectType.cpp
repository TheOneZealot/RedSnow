#include <hxcpp.h>

#ifndef INCLUDED_luxe_importers_tiled_TiledObjectType
#include <luxe/importers/tiled/TiledObjectType.h>
#endif
namespace luxe{
namespace importers{
namespace tiled{

::luxe::importers::tiled::TiledObjectType TiledObjectType_obj::ellipse;

::luxe::importers::tiled::TiledObjectType TiledObjectType_obj::polygon;

::luxe::importers::tiled::TiledObjectType TiledObjectType_obj::polyline;

::luxe::importers::tiled::TiledObjectType TiledObjectType_obj::rectangle;

HX_DEFINE_CREATE_ENUM(TiledObjectType_obj)

int TiledObjectType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("ellipse","\xde","\x40","\x86","\x0b")) return 3;
	if (inName==HX_HCSTRING("polygon","\x7a","\x02","\x91","\x12")) return 1;
	if (inName==HX_HCSTRING("polyline","\x40","\xac","\x9a","\x2f")) return 0;
	if (inName==HX_HCSTRING("rectangle","\x2f","\xd4","\x7c","\x19")) return 2;
	return super::__FindIndex(inName);
}

int TiledObjectType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("ellipse","\xde","\x40","\x86","\x0b")) return 0;
	if (inName==HX_HCSTRING("polygon","\x7a","\x02","\x91","\x12")) return 0;
	if (inName==HX_HCSTRING("polyline","\x40","\xac","\x9a","\x2f")) return 0;
	if (inName==HX_HCSTRING("rectangle","\x2f","\xd4","\x7c","\x19")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TiledObjectType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("ellipse","\xde","\x40","\x86","\x0b")) return ellipse;
	if (inName==HX_HCSTRING("polygon","\x7a","\x02","\x91","\x12")) return polygon;
	if (inName==HX_HCSTRING("polyline","\x40","\xac","\x9a","\x2f")) return polyline;
	if (inName==HX_HCSTRING("rectangle","\x2f","\xd4","\x7c","\x19")) return rectangle;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("polyline","\x40","\xac","\x9a","\x2f"),
	HX_HCSTRING("polygon","\x7a","\x02","\x91","\x12"),
	HX_HCSTRING("rectangle","\x2f","\xd4","\x7c","\x19"),
	HX_HCSTRING("ellipse","\xde","\x40","\x86","\x0b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledObjectType_obj::ellipse,"ellipse");
	HX_MARK_MEMBER_NAME(TiledObjectType_obj::polygon,"polygon");
	HX_MARK_MEMBER_NAME(TiledObjectType_obj::polyline,"polyline");
	HX_MARK_MEMBER_NAME(TiledObjectType_obj::rectangle,"rectangle");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledObjectType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TiledObjectType_obj::ellipse,"ellipse");
	HX_VISIT_MEMBER_NAME(TiledObjectType_obj::polygon,"polygon");
	HX_VISIT_MEMBER_NAME(TiledObjectType_obj::polyline,"polyline");
	HX_VISIT_MEMBER_NAME(TiledObjectType_obj::rectangle,"rectangle");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TiledObjectType_obj::__mClass;

Dynamic __Create_TiledObjectType_obj() { return new TiledObjectType_obj; }

void TiledObjectType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("luxe.importers.tiled.TiledObjectType","\x52","\x5b","\xc5","\xb5"), hx::TCanCast< TiledObjectType_obj >,sStaticFields,sMemberFields,
	&__Create_TiledObjectType_obj, &__Create,
	&super::__SGetClass(), &CreateTiledObjectType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TiledObjectType_obj::__boot()
{
hx::Static(ellipse) = hx::CreateEnum< TiledObjectType_obj >(HX_HCSTRING("ellipse","\xde","\x40","\x86","\x0b"),3);
hx::Static(polygon) = hx::CreateEnum< TiledObjectType_obj >(HX_HCSTRING("polygon","\x7a","\x02","\x91","\x12"),1);
hx::Static(polyline) = hx::CreateEnum< TiledObjectType_obj >(HX_HCSTRING("polyline","\x40","\xac","\x9a","\x2f"),0);
hx::Static(rectangle) = hx::CreateEnum< TiledObjectType_obj >(HX_HCSTRING("rectangle","\x2f","\xd4","\x7c","\x19"),2);
}


} // end namespace luxe
} // end namespace importers
} // end namespace tiled
