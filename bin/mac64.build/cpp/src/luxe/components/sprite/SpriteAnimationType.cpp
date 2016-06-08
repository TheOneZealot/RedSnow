#include <hxcpp.h>

#ifndef INCLUDED_luxe_components_sprite_SpriteAnimationType
#include <luxe/components/sprite/SpriteAnimationType.h>
#endif
namespace luxe{
namespace components{
namespace sprite{

::luxe::components::sprite::SpriteAnimationType SpriteAnimationType_obj::animated_texture;

::luxe::components::sprite::SpriteAnimationType SpriteAnimationType_obj::animated_uv;

HX_DEFINE_CREATE_ENUM(SpriteAnimationType_obj)

int SpriteAnimationType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("animated_texture","\xff","\x6f","\x03","\x74")) return 0;
	if (inName==HX_HCSTRING("animated_uv","\xbd","\x11","\xa7","\xe0")) return 1;
	return super::__FindIndex(inName);
}

int SpriteAnimationType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("animated_texture","\xff","\x6f","\x03","\x74")) return 0;
	if (inName==HX_HCSTRING("animated_uv","\xbd","\x11","\xa7","\xe0")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic SpriteAnimationType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("animated_texture","\xff","\x6f","\x03","\x74")) return animated_texture;
	if (inName==HX_HCSTRING("animated_uv","\xbd","\x11","\xa7","\xe0")) return animated_uv;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("animated_texture","\xff","\x6f","\x03","\x74"),
	HX_HCSTRING("animated_uv","\xbd","\x11","\xa7","\xe0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpriteAnimationType_obj::animated_texture,"animated_texture");
	HX_MARK_MEMBER_NAME(SpriteAnimationType_obj::animated_uv,"animated_uv");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpriteAnimationType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SpriteAnimationType_obj::animated_texture,"animated_texture");
	HX_VISIT_MEMBER_NAME(SpriteAnimationType_obj::animated_uv,"animated_uv");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class SpriteAnimationType_obj::__mClass;

Dynamic __Create_SpriteAnimationType_obj() { return new SpriteAnimationType_obj; }

void SpriteAnimationType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("luxe.components.sprite.SpriteAnimationType","\x30","\x4b","\x98","\x4a"), hx::TCanCast< SpriteAnimationType_obj >,sStaticFields,sMemberFields,
	&__Create_SpriteAnimationType_obj, &__Create,
	&super::__SGetClass(), &CreateSpriteAnimationType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void SpriteAnimationType_obj::__boot()
{
hx::Static(animated_texture) = hx::CreateEnum< SpriteAnimationType_obj >(HX_HCSTRING("animated_texture","\xff","\x6f","\x03","\x74"),0);
hx::Static(animated_uv) = hx::CreateEnum< SpriteAnimationType_obj >(HX_HCSTRING("animated_uv","\xbd","\x11","\xa7","\xe0"),1);
}


} // end namespace luxe
} // end namespace components
} // end namespace sprite
