#ifndef INCLUDED_luxe_components_sprite_SpriteAnimationType
#define INCLUDED_luxe_components_sprite_SpriteAnimationType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,components,sprite,SpriteAnimationType)
namespace luxe{
namespace components{
namespace sprite{


class SpriteAnimationType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef SpriteAnimationType_obj OBJ_;

	public:
		SpriteAnimationType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("luxe.components.sprite.SpriteAnimationType","\x30","\x4b","\x98","\x4a"); }
		::String __ToString() const { return HX_HCSTRING("SpriteAnimationType.","\x95","\xfd","\x38","\x2d") + tag; }

		static ::luxe::components::sprite::SpriteAnimationType animated_texture;
		static inline ::luxe::components::sprite::SpriteAnimationType animated_texture_dyn() { return animated_texture; }
		static ::luxe::components::sprite::SpriteAnimationType animated_uv;
		static inline ::luxe::components::sprite::SpriteAnimationType animated_uv_dyn() { return animated_uv; }
};

} // end namespace luxe
} // end namespace components
} // end namespace sprite

#endif /* INCLUDED_luxe_components_sprite_SpriteAnimationType */ 
