#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Events
#include <luxe/Events.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_components_sprite_SpriteAnimation
#include <luxe/components/sprite/SpriteAnimation.h>
#endif
#ifndef INCLUDED_luxe_components_sprite_SpriteAnimationData
#include <luxe/components/sprite/SpriteAnimationData.h>
#endif
#ifndef INCLUDED_luxe_components_sprite_SpriteAnimationType
#include <luxe/components/sprite/SpriteAnimationType.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Spatial
#include <phoenix/Spatial.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
namespace luxe{
namespace components{
namespace sprite{

Void SpriteAnimation_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","new",0x3171cd48,"luxe.components.sprite.SpriteAnimation.new","luxe/components/sprite/SpriteAnimation.hx",17,0xffa525c9)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(50)
	this->next_frame_time = ((Float)0);
	HX_STACK_LINE(49)
	this->time = ((Float)0);
	HX_STACK_LINE(47)
	this->frame = (int)1;
	HX_STACK_LINE(44)
	this->speed = ((Float)30.0);
	HX_STACK_LINE(36)
	this->reverse = false;
	HX_STACK_LINE(34)
	this->pingpong = false;
	HX_STACK_LINE(32)
	this->loop = false;
	HX_STACK_LINE(30)
	this->playing = false;
	HX_STACK_LINE(26)
	this->image_frame = (int)0;
	HX_STACK_LINE(57)
	Dynamic tmp = options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	super::__construct(tmp);
	HX_STACK_LINE(59)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(59)
	this->animations = tmp1;
	HX_STACK_LINE(60)
	::phoenix::Rectangle tmp2 = ::phoenix::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	this->uv_cache = tmp2;
}
;
	return null();
}

//SpriteAnimation_obj::~SpriteAnimation_obj() { }

Dynamic SpriteAnimation_obj::__CreateEmpty() { return  new SpriteAnimation_obj; }
hx::ObjectPtr< SpriteAnimation_obj > SpriteAnimation_obj::__new(Dynamic options)
{  hx::ObjectPtr< SpriteAnimation_obj > _result_ = new SpriteAnimation_obj();
	_result_->__construct(options);
	return _result_;}

Dynamic SpriteAnimation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpriteAnimation_obj > _result_ = new SpriteAnimation_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void SpriteAnimation_obj::onadded( ){
{
		HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","onadded",0x32169429,"luxe.components.sprite.SpriteAnimation.onadded","luxe/components/sprite/SpriteAnimation.hx",66,0xffa525c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		::luxe::Entity tmp = this->get_entity();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		this->sprite = ((::luxe::Sprite)(tmp));
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			::luxe::Sprite tmp1 = this->sprite;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(69)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(69)
			if ((tmp2)){
				HX_STACK_LINE(230)
				::String tmp3 = HX_HCSTRING(" ( SpriteAnimation belongs on a Sprite instance","\x75","\x5a","\xe6","\x41");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(230)
				::String tmp4 = (tmp3 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(69)
				::String tmp5 = (HX_HCSTRING("sprite was null","\x59","\xd4","\x70","\xc9") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(69)
				::luxe::DebugError tmp6 = ::luxe::DebugError_obj::null_assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(69)
				HX_STACK_DO_THROW(tmp6);
			}
		}
	}
return null();
}


Void SpriteAnimation_obj::init( ){
{
		HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","init",0x0eda8928,"luxe.components.sprite.SpriteAnimation.init","luxe/components/sprite/SpriteAnimation.hx",73,0xffa525c9)
		HX_STACK_THIS(this)
	}
return null();
}


Void SpriteAnimation_obj::restart( ){
{
		HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","restart",0x7d6858b7,"luxe.components.sprite.SpriteAnimation.restart","luxe/components/sprite/SpriteAnimation.hx",80,0xffa525c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		this->set_frame((int)1);
		HX_STACK_LINE(83)
		this->play();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteAnimation_obj,restart,(void))

Void SpriteAnimation_obj::play( ){
{
		HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","play",0x13797c0c,"luxe.components.sprite.SpriteAnimation.play","luxe/components/sprite/SpriteAnimation.hx",90,0xffa525c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		this->playing = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteAnimation_obj,play,(void))

Void SpriteAnimation_obj::stop( ){
{
		HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","stop",0x157b3e1a,"luxe.components.sprite.SpriteAnimation.stop","luxe/components/sprite/SpriteAnimation.hx",97,0xffa525c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		this->playing = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteAnimation_obj,stop,(void))

Void SpriteAnimation_obj::add_from_anim_data( ::luxe::components::sprite::SpriteAnimationData _data){
{
		HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","add_from_anim_data",0x31dac3b9,"luxe.components.sprite.SpriteAnimation.add_from_anim_data","luxe/components/sprite/SpriteAnimation.hx",105,0xffa525c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_data,"_data")
		HX_STACK_LINE(107)
		::haxe::ds::StringMap tmp = this->animations;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		::String tmp1 = _data->name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		::luxe::components::sprite::SpriteAnimationData tmp2 = _data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimation_obj,add_from_anim_data,(void))

Void SpriteAnimation_obj::add_from_json_object( Dynamic _json_object){
{
		HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","add_from_json_object",0xd7b9b2d7,"luxe.components.sprite.SpriteAnimation.add_from_json_object","luxe/components/sprite/SpriteAnimation.hx",112,0xffa525c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_json_object,"_json_object")
		HX_STACK_LINE(114)
		Dynamic anim_items = _json_object;		HX_STACK_VAR(anim_items,"anim_items");
		HX_STACK_LINE(115)
		Dynamic tmp = anim_items;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		Array< ::String > anims = ::Reflect_obj::fields(tmp);		HX_STACK_VAR(anims,"anims");
		HX_STACK_LINE(117)
		bool tmp1 = (anims->length > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		if ((tmp1)){
			HX_STACK_LINE(119)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(119)
			while((true)){
				HX_STACK_LINE(119)
				bool tmp2 = (_g < anims->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(119)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(119)
				if ((tmp3)){
					HX_STACK_LINE(119)
					break;
				}
				HX_STACK_LINE(119)
				::String tmp4 = anims->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(119)
				::String anim = tmp4;		HX_STACK_VAR(anim,"anim");
				HX_STACK_LINE(119)
				++(_g);
				HX_STACK_LINE(121)
				Dynamic tmp5 = anim_items;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(121)
				::String tmp6 = anim;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(121)
				Dynamic tmp7 = ::Reflect_obj::field(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(121)
				Dynamic animdata = tmp7;		HX_STACK_VAR(animdata,"animdata");
				HX_STACK_LINE(122)
				::luxe::Entity tmp8 = this->get_entity();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(122)
				::luxe::Sprite tmp9 = ((::luxe::Sprite)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(122)
				::String tmp10 = anim;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(122)
				::luxe::components::sprite::SpriteAnimationData tmp11 = ::luxe::components::sprite::SpriteAnimationData_obj::__new(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(122)
				::luxe::components::sprite::SpriteAnimationData _anim = tmp11;		HX_STACK_VAR(_anim,"_anim");
				HX_STACK_LINE(124)
				Dynamic tmp12 = animdata;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(124)
				_anim->from_json(tmp12);
				HX_STACK_LINE(126)
				::haxe::ds::StringMap tmp13 = this->animations;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(126)
				::String tmp14 = anim;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(126)
				::luxe::components::sprite::SpriteAnimationData tmp15 = _anim;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(126)
				tmp13->set(tmp14,tmp15);
			}
		}
		else{
			HX_STACK_LINE(132)
			::luxe::Entity tmp2 = this->get_entity();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(132)
			::String tmp3 = tmp2->get_name();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(132)
			::String tmp5 = (tmp4 + HX_HCSTRING(" / add_from_json_object given an empty json object... This is probably an error.","\xc6","\x21","\xf0","\x79"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(132)
			::String tmp6 = (HX_HCSTRING("i / spriteanimation / ","\x9a","\x1e","\x60","\x69") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(132)
			Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("SpriteAnimation.hx","\xff","\x4d","\x59","\x3d"),132,HX_HCSTRING("luxe.components.sprite.SpriteAnimation","\x56","\xc9","\x27","\x64"),HX_HCSTRING("add_from_json_object","\xbf","\xb4","\xc2","\x0f"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(132)
			::haxe::Log_obj::trace(tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimation_obj,add_from_json_object,(void))

Void SpriteAnimation_obj::add_from_json( ::String _json_string){
{
		HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","add_from_json",0x3c91c867,"luxe.components.sprite.SpriteAnimation.add_from_json","luxe/components/sprite/SpriteAnimation.hx",139,0xffa525c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_json_string,"_json_string")
		HX_STACK_LINE(143)
		::haxe::format::JsonParser tmp = ::haxe::format::JsonParser_obj::__new(_json_string);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		Dynamic tmp1 = tmp->parseRec();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		Dynamic _json_object = tmp1;		HX_STACK_VAR(_json_object,"_json_object");
		HX_STACK_LINE(145)
		Dynamic tmp2 = _json_object;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(145)
		this->add_from_json_object(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimation_obj,add_from_json,(void))

Void SpriteAnimation_obj::remove_event( ::String _animation,int _image_frame,::String __o__event){
::String _event = __o__event.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","remove_event",0x81045cb7,"luxe.components.sprite.SpriteAnimation.remove_event","luxe/components/sprite/SpriteAnimation.hx",152,0xffa525c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_animation,"_animation")
	HX_STACK_ARG(_image_frame,"_image_frame")
	HX_STACK_ARG(_event,"_event")
{
		HX_STACK_LINE(154)
		::haxe::ds::StringMap tmp = this->animations;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		::String tmp1 = _animation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(154)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		if ((tmp2)){
			HX_STACK_LINE(156)
			::haxe::ds::StringMap tmp3 = this->animations;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(156)
			::String tmp4 = _animation;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(156)
			::luxe::components::sprite::SpriteAnimationData tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(156)
			::luxe::components::sprite::SpriteAnimationData _anim = tmp5;		HX_STACK_VAR(_anim,"_anim");
			HX_STACK_LINE(158)
			{
				HX_STACK_LINE(158)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(158)
				cpp::ArrayBase _g1 = _anim->frameset;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(158)
				while((true)){
					HX_STACK_LINE(158)
					bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(158)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(158)
					if ((tmp7)){
						HX_STACK_LINE(158)
						break;
					}
					HX_STACK_LINE(158)
					Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(158)
					Dynamic _anim_frame = tmp8;		HX_STACK_VAR(_anim_frame,"_anim_frame");
					HX_STACK_LINE(158)
					++(_g);
					HX_STACK_LINE(160)
					bool tmp9 = (_anim_frame->__Field(HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16"), hx::paccDynamic ) != _image_frame);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(160)
					if ((tmp9)){
						HX_STACK_LINE(160)
						continue;
					}
					HX_STACK_LINE(162)
					{
						HX_STACK_LINE(162)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(162)
						cpp::ArrayBase _g3 = _anim_frame->__Field(HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"), hx::paccDynamic );		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(162)
						while((true)){
							HX_STACK_LINE(162)
							bool tmp10 = (_g2 < _g3->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(162)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(162)
							if ((tmp11)){
								HX_STACK_LINE(162)
								break;
							}
							HX_STACK_LINE(162)
							Dynamic tmp12 = _g3->__GetItem(_g2);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(162)
							Dynamic _frame_event = tmp12;		HX_STACK_VAR(_frame_event,"_frame_event");
							HX_STACK_LINE(162)
							++(_g2);
							HX_STACK_LINE(164)
							bool tmp13 = (_frame_event->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic ) != _image_frame);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(164)
							if ((tmp13)){
								HX_STACK_LINE(164)
								continue;
							}
							HX_STACK_LINE(165)
							bool tmp14 = (_frame_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic ) != _event);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(165)
							if ((tmp14)){
								HX_STACK_LINE(165)
								continue;
							}
							HX_STACK_LINE(167)
							Dynamic tmp15 = _frame_event;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(167)
							_anim_frame->__Field(HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp15);
							HX_STACK_LINE(138)
							Dynamic();
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(176)
			::luxe::Entity tmp3 = this->get_entity();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			::String tmp4 = tmp3->get_name();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			::String tmp5 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(176)
			::String tmp6 = (tmp5 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(176)
			::String tmp7 = this->animation;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(176)
			::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(176)
			::String tmp9 = (tmp8 + HX_HCSTRING(" requested an event to be added, but that animation is not found in the `","\x16","\x06","\x64","\xca"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(176)
			::String tmp10 = this->name;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(176)
			::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(176)
			::String tmp12 = (tmp11 + HX_HCSTRING("` component","\xfd","\x24","\x0b","\x6c"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(176)
			::String tmp13 = (HX_HCSTRING("i / spriteanimation / ","\x9a","\x1e","\x60","\x69") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(176)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("SpriteAnimation.hx","\xff","\x4d","\x59","\x3d"),176,HX_HCSTRING("luxe.components.sprite.SpriteAnimation","\x56","\xc9","\x27","\x64"),HX_HCSTRING("remove_event","\x9f","\x36","\x45","\xac"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(176)
			::haxe::Log_obj::trace(tmp13,tmp14);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SpriteAnimation_obj,remove_event,(void))

Void SpriteAnimation_obj::remove_events( ::String _animation,int _image_frame){
{
		HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","remove_events",0x62ccc3dc,"luxe.components.sprite.SpriteAnimation.remove_events","luxe/components/sprite/SpriteAnimation.hx",182,0xffa525c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_animation,"_animation")
		HX_STACK_ARG(_image_frame,"_image_frame")
		HX_STACK_LINE(184)
		::haxe::ds::StringMap tmp = this->animations;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(184)
		::String tmp1 = _animation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(184)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(184)
		if ((tmp2)){
			HX_STACK_LINE(185)
			::haxe::ds::StringMap tmp3 = this->animations;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(185)
			::String tmp4 = _animation;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(185)
			::luxe::components::sprite::SpriteAnimationData tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(185)
			::luxe::components::sprite::SpriteAnimationData _anim = tmp5;		HX_STACK_VAR(_anim,"_anim");
			HX_STACK_LINE(186)
			{
				HX_STACK_LINE(186)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(186)
				cpp::ArrayBase _g1 = _anim->frameset;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(186)
				while((true)){
					HX_STACK_LINE(186)
					bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(186)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(186)
					if ((tmp7)){
						HX_STACK_LINE(186)
						break;
					}
					HX_STACK_LINE(186)
					Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(186)
					Dynamic _anim_frame = tmp8;		HX_STACK_VAR(_anim_frame,"_anim_frame");
					HX_STACK_LINE(186)
					++(_g);
					HX_STACK_LINE(187)
					bool tmp9 = (_anim_frame->__Field(HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16"), hx::paccDynamic ) == _image_frame);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(187)
					if ((tmp9)){
						HX_STACK_LINE(189)
						_anim_frame->__FieldRef(HX_HCSTRING("events","\x19","\x4f","\x6a","\x96")) = cpp::ArrayBase_obj::__new();
					}
				}
			}
		}
		else{
			HX_STACK_LINE(193)
			::luxe::Entity tmp3 = this->get_entity();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			::String tmp4 = tmp3->get_name();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(193)
			::String tmp5 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(193)
			::String tmp6 = (tmp5 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(193)
			::String tmp7 = this->animation;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(193)
			::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(193)
			::String tmp9 = (tmp8 + HX_HCSTRING(" requested an event to be removed, but that animation is not found in the `","\x36","\xcb","\xb7","\x40"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(193)
			::String tmp10 = this->name;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(193)
			::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(193)
			::String tmp12 = (tmp11 + HX_HCSTRING("` component","\xfd","\x24","\x0b","\x6c"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(193)
			::String tmp13 = (HX_HCSTRING("i / spriteanimation / ","\x9a","\x1e","\x60","\x69") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(193)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("SpriteAnimation.hx","\xff","\x4d","\x59","\x3d"),193,HX_HCSTRING("luxe.components.sprite.SpriteAnimation","\x56","\xc9","\x27","\x64"),HX_HCSTRING("remove_events","\xf4","\x94","\x4a","\x10"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(193)
			::haxe::Log_obj::trace(tmp13,tmp14);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SpriteAnimation_obj,remove_events,(void))

Void SpriteAnimation_obj::add_event( ::String _animation,int _image_frame,::String __o__event){
::String _event = __o__event.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","add_event",0x2a726b24,"luxe.components.sprite.SpriteAnimation.add_event","luxe/components/sprite/SpriteAnimation.hx",198,0xffa525c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_animation,"_animation")
	HX_STACK_ARG(_image_frame,"_image_frame")
	HX_STACK_ARG(_event,"_event")
{
		HX_STACK_LINE(202)
		::haxe::ds::StringMap tmp = this->animations;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(202)
		::String tmp1 = _animation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		if ((tmp2)){
			HX_STACK_LINE(204)
			::haxe::ds::StringMap tmp3 = this->animations;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(204)
			::String tmp4 = _animation;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(204)
			::luxe::components::sprite::SpriteAnimationData tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(204)
			::luxe::components::sprite::SpriteAnimationData _anim = tmp5;		HX_STACK_VAR(_anim,"_anim");
			HX_STACK_LINE(208)
			{
				HX_STACK_LINE(208)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(208)
				cpp::ArrayBase _g1 = _anim->frameset;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(208)
				while((true)){
					HX_STACK_LINE(208)
					bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(208)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(208)
					if ((tmp7)){
						HX_STACK_LINE(208)
						break;
					}
					HX_STACK_LINE(208)
					Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(208)
					Dynamic _anim_frame = tmp8;		HX_STACK_VAR(_anim_frame,"_anim_frame");
					HX_STACK_LINE(208)
					++(_g);
					HX_STACK_LINE(209)
					bool tmp9 = (_anim_frame->__Field(HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16"), hx::paccDynamic ) == _image_frame);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(209)
					if ((tmp9)){
						HX_STACK_LINE(213)
						bool _add_event = true;		HX_STACK_VAR(_add_event,"_add_event");
						HX_STACK_LINE(214)
						{
							HX_STACK_LINE(214)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(214)
							cpp::ArrayBase _g3 = _anim_frame->__Field(HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"), hx::paccDynamic );		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(214)
							while((true)){
								HX_STACK_LINE(214)
								bool tmp10 = (_g2 < _g3->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(214)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(214)
								if ((tmp11)){
									HX_STACK_LINE(214)
									break;
								}
								HX_STACK_LINE(214)
								Dynamic tmp12 = _g3->__GetItem(_g2);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(214)
								Dynamic _frame_event = tmp12;		HX_STACK_VAR(_frame_event,"_frame_event");
								HX_STACK_LINE(214)
								++(_g2);
								HX_STACK_LINE(216)
								bool tmp13 = (_frame_event->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic ) == _image_frame);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(216)
								bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(216)
								if ((tmp13)){
									HX_STACK_LINE(216)
									tmp14 = (_frame_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic ) == _event);
								}
								else{
									HX_STACK_LINE(216)
									tmp14 = false;
								}
								HX_STACK_LINE(216)
								if ((tmp14)){
									HX_STACK_LINE(217)
									_add_event = false;
									HX_STACK_LINE(138)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(223)
						bool tmp10 = _add_event;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(223)
						if ((tmp10)){
							struct _Function_6_1{
								inline static Dynamic Block( ::String &_event,int &_image_frame){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/components/sprite/SpriteAnimation.hx",224,0xffa525c9)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06") , _image_frame,false);
										__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , _event,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(224)
							Dynamic tmp11 = _Function_6_1::Block(_event,_image_frame);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(224)
							_anim_frame->__Field(HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
							HX_STACK_LINE(138)
							Dynamic();
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(233)
			::luxe::Entity tmp3 = this->get_entity();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(233)
			::String tmp4 = tmp3->get_name();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(233)
			::String tmp5 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(233)
			::String tmp6 = (tmp5 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(233)
			::String tmp7 = this->animation;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(233)
			::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(233)
			::String tmp9 = (tmp8 + HX_HCSTRING(" requested an event to be added, but that animation is not found in the `","\x16","\x06","\x64","\xca"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(233)
			::String tmp10 = this->name;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(233)
			::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(233)
			::String tmp12 = (tmp11 + HX_HCSTRING("` component","\xfd","\x24","\x0b","\x6c"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(233)
			::String tmp13 = (HX_HCSTRING("i / spriteanimation / ","\x9a","\x1e","\x60","\x69") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(233)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("SpriteAnimation.hx","\xff","\x4d","\x59","\x3d"),233,HX_HCSTRING("luxe.components.sprite.SpriteAnimation","\x56","\xc9","\x27","\x64"),HX_HCSTRING("add_event","\x3c","\xd0","\x3b","\xf5"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(233)
			::haxe::Log_obj::trace(tmp13,tmp14);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SpriteAnimation_obj,add_event,(void))

Void SpriteAnimation_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","update",0x51268a21,"luxe.components.sprite.SpriteAnimation.update","luxe/components/sprite/SpriteAnimation.hx",241,0xffa525c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(243)
		::luxe::components::sprite::SpriteAnimationData tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(243)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(243)
		if ((tmp1)){
			HX_STACK_LINE(245)
			return null();
		}
		HX_STACK_LINE(248)
		bool tmp2 = this->playing;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(248)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(248)
		if ((tmp3)){
			HX_STACK_LINE(248)
			return null();
		}
		HX_STACK_LINE(251)
		bool end = false;		HX_STACK_VAR(end,"end");
		HX_STACK_LINE(252)
		int tmp4 = this->get_frame();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(252)
		int _frame = tmp4;		HX_STACK_VAR(_frame,"_frame");
		HX_STACK_LINE(255)
		hx::AddEq(this->time,dt);
		HX_STACK_LINE(258)
		Float tmp5 = this->time;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(258)
		Float tmp6 = this->next_frame_time;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(258)
		bool tmp7 = (tmp5 >= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(258)
		if ((tmp7)){
			HX_STACK_LINE(260)
			Float tmp8 = this->time;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(260)
			::luxe::components::sprite::SpriteAnimationData tmp9 = this->current;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(260)
			Float tmp10 = tmp9->frame_time;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(260)
			Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(260)
			this->next_frame_time = tmp11;
			HX_STACK_LINE(263)
			bool tmp12 = this->reverse;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(263)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(263)
			if ((tmp13)){
				HX_STACK_LINE(264)
				hx::AddEq(_frame,(int)1);
			}
			else{
				HX_STACK_LINE(266)
				hx::SubEq(_frame,(int)1);
			}
			HX_STACK_LINE(270)
			bool tmp14 = this->reverse;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(270)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(270)
			if ((tmp15)){
				HX_STACK_LINE(271)
				int tmp16 = _frame;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(271)
				::luxe::components::sprite::SpriteAnimationData tmp17 = this->current;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(271)
				int tmp18 = tmp17->get_frame_count();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(271)
				bool tmp19 = (tmp16 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(271)
				if ((tmp19)){
					HX_STACK_LINE(272)
					end = true;
					HX_STACK_LINE(273)
					bool tmp20 = this->loop;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(273)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(273)
					if ((tmp21)){
						HX_STACK_LINE(274)
						::luxe::components::sprite::SpriteAnimationData tmp22 = this->current;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(274)
						int tmp23 = tmp22->get_frame_count();		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(274)
						_frame = tmp23;
					}
				}
			}
			else{
				HX_STACK_LINE(278)
				bool tmp16 = (_frame < (int)1);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(278)
				if ((tmp16)){
					HX_STACK_LINE(279)
					end = true;
					HX_STACK_LINE(280)
					bool tmp17 = this->loop;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(280)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(280)
					if ((tmp18)){
						HX_STACK_LINE(281)
						_frame = (int)1;
					}
				}
			}
			HX_STACK_LINE(287)
			bool tmp16 = end;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(287)
			if ((tmp16)){
				HX_STACK_LINE(289)
				bool tmp17 = this->loop;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(289)
				if ((tmp17)){
					HX_STACK_LINE(291)
					bool tmp18 = this->pingpong;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(291)
					if ((tmp18)){
						HX_STACK_LINE(292)
						bool tmp19 = this->reverse;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(292)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(292)
						this->reverse = tmp20;
					}
					HX_STACK_LINE(295)
					bool tmp19 = this->reverse;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(295)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(295)
					if ((tmp20)){
						HX_STACK_LINE(296)
						_frame = (int)1;
					}
					else{
						HX_STACK_LINE(298)
						::luxe::components::sprite::SpriteAnimationData tmp21 = this->current;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(298)
						int tmp22 = tmp21->get_frame_count();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(298)
						_frame = tmp22;
					}
					HX_STACK_LINE(301)
					{
						HX_STACK_LINE(301)
						::String tmp21 = this->animation;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(301)
						::String tmp22 = (HX_HCSTRING("animation.","\xaa","\x34","\x1c","\x83") + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(301)
						::String tmp23 = (tmp22 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(301)
						::String tmp24 = (tmp23 + HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(301)
						::String _event_emit_name = tmp24;		HX_STACK_VAR(_event_emit_name,"_event_emit_name");
						HX_STACK_LINE(301)
						::luxe::Entity tmp25 = this->get_entity();		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(301)
						::String tmp26 = _event_emit_name;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(301)
						::String tmp27 = this->animation;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(301)
						::String tmp28 = _event_emit_name;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(301)
						Dynamic tmp29 = this->current_frame;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(301)
						Dynamic tmp30 = this->current_frame;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(301)
						int tmp31 = tmp30->__Field(HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
						struct _Function_5_1{
							inline static Dynamic Block( ::String &tmp28,int &tmp31,::String &tmp27,Dynamic &tmp29){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/components/sprite/SpriteAnimation.hx",301,0xffa525c9)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b") , tmp27,false);
									__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , tmp28,false);
									__result->Add(HX_HCSTRING("frame_event","\x48","\x67","\x5f","\x1b") , null(),false);
									__result->Add(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06") , tmp29,false);
									__result->Add(HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16") , tmp31,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(301)
						Dynamic tmp32 = _Function_5_1::Block(tmp28,tmp31,tmp27,tmp29);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(301)
						tmp25->events->fire(tmp26,tmp32,null());
					}
				}
				else{
					HX_STACK_LINE(304)
					this->stop();
					HX_STACK_LINE(305)
					{
						HX_STACK_LINE(305)
						::String tmp18 = this->animation;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(305)
						::String tmp19 = (HX_HCSTRING("animation.","\xaa","\x34","\x1c","\x83") + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(305)
						::String tmp20 = (tmp19 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(305)
						::String tmp21 = (tmp20 + HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(305)
						::String _event_emit_name = tmp21;		HX_STACK_VAR(_event_emit_name,"_event_emit_name");
						HX_STACK_LINE(305)
						::luxe::Entity tmp22 = this->get_entity();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(305)
						::String tmp23 = _event_emit_name;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(305)
						::String tmp24 = this->animation;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(305)
						::String tmp25 = _event_emit_name;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(305)
						Dynamic tmp26 = this->current_frame;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(305)
						Dynamic tmp27 = this->current_frame;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(305)
						int tmp28 = tmp27->__Field(HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
						struct _Function_5_1{
							inline static Dynamic Block( int &tmp28,Dynamic &tmp26,::String &tmp24,::String &tmp25){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/components/sprite/SpriteAnimation.hx",305,0xffa525c9)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b") , tmp24,false);
									__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , tmp25,false);
									__result->Add(HX_HCSTRING("frame_event","\x48","\x67","\x5f","\x1b") , null(),false);
									__result->Add(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06") , tmp26,false);
									__result->Add(HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16") , tmp28,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(305)
						Dynamic tmp29 = _Function_5_1::Block(tmp28,tmp26,tmp24,tmp25);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(305)
						tmp22->events->fire(tmp23,tmp29,null());
					}
					HX_STACK_LINE(306)
					int tmp18 = this->get_frame();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(306)
					_frame = tmp18;
				}
			}
			HX_STACK_LINE(312)
			int tmp17 = _frame;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(312)
			this->set_frame(tmp17);
		}
	}
return null();
}


Void SpriteAnimation_obj::refresh_sprite( ){
{
		HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","refresh_sprite",0xb937b141,"luxe.components.sprite.SpriteAnimation.refresh_sprite","luxe/components/sprite/SpriteAnimation.hx",319,0xffa525c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(321)
		{
			HX_STACK_LINE(321)
			::luxe::Sprite tmp = this->sprite;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(321)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(321)
			if ((tmp1)){
				HX_STACK_LINE(230)
				::String tmp2 = HX_HCSTRING(" ( SpriteAnimation requires non-null sprite instance","\x90","\x0c","\x04","\x63");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(230)
				::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(321)
				::String tmp4 = (HX_HCSTRING("sprite was null","\x59","\xd4","\x70","\xc9") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(321)
				::luxe::DebugError tmp5 = ::luxe::DebugError_obj::null_assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(321)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(323)
		::luxe::components::sprite::SpriteAnimationData tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(323)
		::luxe::components::sprite::SpriteAnimationType tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(323)
		bool tmp2 = (tmp1 == ::luxe::components::sprite::SpriteAnimationType_obj::animated_uv);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(323)
		if ((tmp2)){
			HX_STACK_LINE(325)
			{
				HX_STACK_LINE(325)
				::luxe::Sprite tmp3 = this->sprite;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(325)
				::phoenix::Texture tmp4 = tmp3->texture;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(325)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(325)
				if ((tmp5)){
					HX_STACK_LINE(230)
					::String tmp6 = HX_HCSTRING(" ( SpriteAnimation with animated_uv type requires a texture that is not null","\xc5","\xce","\x0b","\x4e");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(230)
					::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(325)
					::String tmp8 = (HX_HCSTRING("sprite.texture was null","\x4c","\xa7","\x7e","\x43") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(325)
					::luxe::DebugError tmp9 = ::luxe::DebugError_obj::null_assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(325)
					HX_STACK_DO_THROW(tmp9);
				}
			}
			HX_STACK_LINE(328)
			::phoenix::Rectangle tmp3 = this->uv_cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(328)
			Dynamic tmp4 = this->current_frame;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(328)
			Float tmp5 = tmp4->__Field(HX_HCSTRING("frame_source","\xed","\x59","\xe2","\x73"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(328)
			Dynamic tmp6 = this->current_frame;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(328)
			Float tmp7 = tmp6->__Field(HX_HCSTRING("frame_source","\xed","\x59","\xe2","\x73"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(328)
			Dynamic tmp8 = this->current_frame;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(328)
			Float tmp9 = tmp8->__Field(HX_HCSTRING("frame_source","\xed","\x59","\xe2","\x73"), hx::paccDynamic )->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(328)
			Dynamic tmp10 = this->current_frame;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(328)
			Float tmp11 = tmp10->__Field(HX_HCSTRING("frame_source","\xed","\x59","\xe2","\x73"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(328)
			tmp3->set(tmp5,tmp7,tmp9,tmp11);
			HX_STACK_LINE(330)
			Dynamic tmp12 = this->current_frame;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(330)
			Float tmp13 = tmp12->__Field(HX_HCSTRING("frame_size","\x53","\x81","\x5d","\x4f"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(330)
			::luxe::Sprite tmp14 = this->sprite;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(330)
			Float tmp15 = tmp14->size->x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(330)
			Float tmp16 = (Float(tmp13) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(330)
			Float _ratio_x = tmp16;		HX_STACK_VAR(_ratio_x,"_ratio_x");
			HX_STACK_LINE(331)
			Dynamic tmp17 = this->current_frame;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(331)
			Float tmp18 = tmp17->__Field(HX_HCSTRING("frame_size","\x53","\x81","\x5d","\x4f"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(331)
			::luxe::Sprite tmp19 = this->sprite;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(331)
			Float tmp20 = tmp19->size->y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(331)
			Float tmp21 = (Float(tmp18) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(331)
			Float _ratio_y = tmp21;		HX_STACK_VAR(_ratio_y,"_ratio_y");
			HX_STACK_LINE(333)
			{
				HX_STACK_LINE(333)
				::luxe::Sprite tmp22 = this->sprite;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(333)
				::phoenix::Transform tmp23 = tmp22->geometry->transform;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(333)
				::phoenix::Vector tmp24 = tmp23->local->scale;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(333)
				::phoenix::Vector _this = tmp24;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(333)
				Dynamic tmp25 = this->current_frame;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(333)
				Float tmp26 = tmp25->__Field(HX_HCSTRING("frame_source","\xed","\x59","\xe2","\x73"), hx::paccDynamic )->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(333)
				Dynamic tmp27 = this->current_frame;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(333)
				Float tmp28 = tmp27->__Field(HX_HCSTRING("frame_size","\x53","\x81","\x5d","\x4f"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(333)
				Float tmp29 = (Float(tmp26) / Float(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(333)
				::luxe::Sprite tmp30 = this->sprite;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(333)
				::phoenix::Vector tmp31 = tmp30->get_scale();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(333)
				Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(333)
				Float tmp33 = (tmp29 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(333)
				Float _x = tmp33;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(333)
				_this->x = _x;
				HX_STACK_LINE(333)
				bool tmp34 = _this->_construct;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(333)
				if ((tmp34)){
					HX_STACK_LINE(333)
					_this->x;
				}
				else{
					HX_STACK_LINE(333)
					bool tmp35 = (_this->listen_x != null());		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(333)
					bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(333)
					if ((tmp35)){
						HX_STACK_LINE(333)
						bool tmp37 = _this->ignore_listeners;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(333)
						bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(333)
						tmp36 = !(tmp38);
					}
					else{
						HX_STACK_LINE(333)
						tmp36 = false;
					}
					HX_STACK_LINE(333)
					if ((tmp36)){
						HX_STACK_LINE(333)
						Float tmp37 = _x;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(333)
						_this->listen_x(tmp37);
					}
					HX_STACK_LINE(333)
					_this->x;
				}
			}
			HX_STACK_LINE(334)
			{
				HX_STACK_LINE(334)
				::luxe::Sprite tmp22 = this->sprite;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(334)
				::phoenix::Transform tmp23 = tmp22->geometry->transform;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(334)
				::phoenix::Vector tmp24 = tmp23->local->scale;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(334)
				::phoenix::Vector _this = tmp24;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(334)
				Dynamic tmp25 = this->current_frame;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(334)
				Float tmp26 = tmp25->__Field(HX_HCSTRING("frame_source","\xed","\x59","\xe2","\x73"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(334)
				Dynamic tmp27 = this->current_frame;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(334)
				Float tmp28 = tmp27->__Field(HX_HCSTRING("frame_size","\x53","\x81","\x5d","\x4f"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(334)
				Float tmp29 = (Float(tmp26) / Float(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(334)
				::luxe::Sprite tmp30 = this->sprite;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(334)
				::phoenix::Vector tmp31 = tmp30->get_scale();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(334)
				Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(334)
				Float tmp33 = (tmp29 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(334)
				Float _y = tmp33;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(334)
				_this->y = _y;
				HX_STACK_LINE(334)
				bool tmp34 = _this->_construct;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(334)
				if ((tmp34)){
					HX_STACK_LINE(334)
					_this->y;
				}
				else{
					HX_STACK_LINE(334)
					bool tmp35 = (_this->listen_y != null());		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(334)
					bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(334)
					if ((tmp35)){
						HX_STACK_LINE(334)
						bool tmp37 = _this->ignore_listeners;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(334)
						bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(334)
						tmp36 = !(tmp38);
					}
					else{
						HX_STACK_LINE(334)
						tmp36 = false;
					}
					HX_STACK_LINE(334)
					if ((tmp36)){
						HX_STACK_LINE(334)
						Float tmp37 = _y;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(334)
						_this->listen_y(tmp37);
					}
					HX_STACK_LINE(334)
					_this->y;
				}
			}
			HX_STACK_LINE(337)
			{
				HX_STACK_LINE(337)
				::luxe::Sprite tmp22 = this->sprite;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(337)
				::phoenix::Transform tmp23 = tmp22->geometry->transform;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(337)
				::phoenix::Vector _this = tmp23->origin;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(337)
				Dynamic tmp24 = this->current_frame;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(337)
				Float tmp25 = tmp24->__Field(HX_HCSTRING("frame_pos","\x42","\x35","\xc8","\x41"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(337)
				Float tmp26 = _ratio_x;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(337)
				Float tmp27 = (Float(tmp25) / Float(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(337)
				::luxe::Sprite tmp28 = this->sprite;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(337)
				::phoenix::Vector tmp29 = tmp28->get_scale();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(337)
				Float tmp30 = tmp29->x;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(337)
				Float tmp31 = (tmp27 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(337)
				Float tmp32 = -(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(337)
				::luxe::Sprite tmp33 = this->sprite;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(337)
				::phoenix::Transform tmp34 = tmp33->geometry->transform;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(337)
				::phoenix::Vector tmp35 = tmp34->local->scale;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(337)
				Float tmp36 = tmp35->x;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(337)
				Float tmp37 = (Float(tmp32) / Float(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(337)
				Float _x = tmp37;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(337)
				_this->x = _x;
				HX_STACK_LINE(337)
				bool tmp38 = _this->_construct;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(337)
				if ((tmp38)){
					HX_STACK_LINE(337)
					_this->x;
				}
				else{
					HX_STACK_LINE(337)
					bool tmp39 = (_this->listen_x != null());		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(337)
					bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(337)
					if ((tmp39)){
						HX_STACK_LINE(337)
						bool tmp41 = _this->ignore_listeners;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(337)
						bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(337)
						tmp40 = !(tmp42);
					}
					else{
						HX_STACK_LINE(337)
						tmp40 = false;
					}
					HX_STACK_LINE(337)
					if ((tmp40)){
						HX_STACK_LINE(337)
						Float tmp41 = _x;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(337)
						_this->listen_x(tmp41);
					}
					HX_STACK_LINE(337)
					_this->x;
				}
			}
			HX_STACK_LINE(338)
			{
				HX_STACK_LINE(338)
				::luxe::Sprite tmp22 = this->sprite;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(338)
				::phoenix::Transform tmp23 = tmp22->geometry->transform;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(338)
				::phoenix::Vector _this = tmp23->origin;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(338)
				Dynamic tmp24 = this->current_frame;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(338)
				Float tmp25 = tmp24->__Field(HX_HCSTRING("frame_pos","\x42","\x35","\xc8","\x41"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(338)
				Float tmp26 = _ratio_y;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(338)
				Float tmp27 = (Float(tmp25) / Float(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(338)
				::luxe::Sprite tmp28 = this->sprite;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(338)
				::phoenix::Vector tmp29 = tmp28->get_scale();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(338)
				Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(338)
				Float tmp31 = (tmp27 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(338)
				Float tmp32 = -(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(338)
				::luxe::Sprite tmp33 = this->sprite;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(338)
				::phoenix::Transform tmp34 = tmp33->geometry->transform;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(338)
				::phoenix::Vector tmp35 = tmp34->local->scale;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(338)
				Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(338)
				Float tmp37 = (Float(tmp32) / Float(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(338)
				Float _y = tmp37;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(338)
				_this->y = _y;
				HX_STACK_LINE(338)
				bool tmp38 = _this->_construct;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(338)
				if ((tmp38)){
					HX_STACK_LINE(338)
					_this->y;
				}
				else{
					HX_STACK_LINE(338)
					bool tmp39 = (_this->listen_y != null());		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(338)
					bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(338)
					if ((tmp39)){
						HX_STACK_LINE(338)
						bool tmp41 = _this->ignore_listeners;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(338)
						bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(338)
						tmp40 = !(tmp42);
					}
					else{
						HX_STACK_LINE(338)
						tmp40 = false;
					}
					HX_STACK_LINE(338)
					if ((tmp40)){
						HX_STACK_LINE(338)
						Float tmp41 = _y;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(338)
						_this->listen_y(tmp41);
					}
					HX_STACK_LINE(338)
					_this->y;
				}
			}
			HX_STACK_LINE(341)
			::luxe::Sprite tmp22 = this->sprite;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(341)
			::phoenix::Rectangle tmp23 = this->uv_cache;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(341)
			tmp22->set_uv(tmp23);
		}
		else{
			HX_STACK_LINE(343)
			::luxe::components::sprite::SpriteAnimationData tmp3 = this->current;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(343)
			::luxe::components::sprite::SpriteAnimationType tmp4 = tmp3->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(343)
			bool tmp5 = (tmp4 == ::luxe::components::sprite::SpriteAnimationType_obj::animated_texture);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(343)
			if ((tmp5)){
				HX_STACK_LINE(345)
				int tmp6 = this->image_frame;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(345)
				::luxe::components::sprite::SpriteAnimationData tmp7 = this->current;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(345)
				int tmp8 = tmp7->image_set->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(345)
				bool tmp9 = (tmp6 <= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(345)
				if ((tmp9)){
					HX_STACK_LINE(347)
					::luxe::Sprite tmp10 = this->sprite;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(347)
					::luxe::components::sprite::SpriteAnimationData tmp11 = this->current;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(347)
					int tmp12 = this->image_frame;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(347)
					int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(347)
					::phoenix::Texture tmp14 = tmp11->image_set->__get(tmp13).StaticCast< ::phoenix::Texture >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(347)
					tmp10->set_texture(tmp14);
					HX_STACK_LINE(349)
					::phoenix::Rectangle tmp15 = this->uv_cache;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(349)
					Dynamic tmp16 = this->current_frame;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(349)
					Float tmp17 = tmp16->__Field(HX_HCSTRING("frame_source","\xed","\x59","\xe2","\x73"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(349)
					Dynamic tmp18 = this->current_frame;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(349)
					Float tmp19 = tmp18->__Field(HX_HCSTRING("frame_source","\xed","\x59","\xe2","\x73"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(349)
					Dynamic tmp20 = this->current_frame;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(349)
					Float tmp21 = tmp20->__Field(HX_HCSTRING("frame_source","\xed","\x59","\xe2","\x73"), hx::paccDynamic )->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(349)
					Dynamic tmp22 = this->current_frame;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(349)
					Float tmp23 = tmp22->__Field(HX_HCSTRING("frame_source","\xed","\x59","\xe2","\x73"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(349)
					tmp15->set(tmp17,tmp19,tmp21,tmp23);
					HX_STACK_LINE(351)
					::luxe::Sprite tmp24 = this->sprite;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(351)
					::phoenix::Rectangle tmp25 = this->uv_cache;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(351)
					tmp24->set_uv(tmp25);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteAnimation_obj,refresh_sprite,(void))

int SpriteAnimation_obj::get_frame( ){
	HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","get_frame",0x7f636f6c,"luxe.components.sprite.SpriteAnimation.get_frame","luxe/components/sprite/SpriteAnimation.hx",361,0xffa525c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(363)
	int tmp = this->frame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(363)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteAnimation_obj,get_frame,return )

int SpriteAnimation_obj::set_frame( int _frame){
	HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","set_frame",0x62b45b78,"luxe.components.sprite.SpriteAnimation.set_frame","luxe/components/sprite/SpriteAnimation.hx",367,0xffa525c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_frame,"_frame")
	HX_STACK_LINE(369)
	this->frame = _frame;
	HX_STACK_LINE(371)
	::luxe::components::sprite::SpriteAnimationData tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(371)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(371)
	if ((tmp1)){
		HX_STACK_LINE(372)
		int tmp2 = this->get_frame();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(372)
		return tmp2;
	}
	HX_STACK_LINE(378)
	::luxe::Entity tmp2 = this->get_entity();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(378)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(378)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(378)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(378)
	if ((tmp4)){
		HX_STACK_LINE(378)
		::luxe::Entity tmp6 = this->get_entity();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(378)
		::luxe::Entity tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(378)
		tmp5 = tmp7->destroyed;
	}
	else{
		HX_STACK_LINE(378)
		tmp5 = true;
	}
	HX_STACK_LINE(378)
	if ((tmp5)){
		HX_STACK_LINE(379)
		int tmp6 = this->get_frame();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(379)
		return tmp6;
	}
	HX_STACK_LINE(382)
	::luxe::components::sprite::SpriteAnimationData tmp6 = this->current;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(382)
	int tmp7 = this->get_frame();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(382)
	int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(382)
	Dynamic tmp9 = tmp6->frameset->__GetItem(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(382)
	this->current_frame = tmp9;
	HX_STACK_LINE(383)
	Dynamic tmp10 = this->current_frame;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(383)
	this->image_frame = tmp10->__Field(HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16"), hx::paccDynamic );
	HX_STACK_LINE(384)
	{
		HX_STACK_LINE(384)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(384)
		Dynamic tmp11 = this->current_frame;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(384)
		cpp::ArrayBase _g1 = tmp11->__Field(HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(384)
		while((true)){
			HX_STACK_LINE(384)
			bool tmp12 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(384)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(384)
			if ((tmp13)){
				HX_STACK_LINE(384)
				break;
			}
			HX_STACK_LINE(384)
			Dynamic tmp14 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(384)
			Dynamic _event = tmp14;		HX_STACK_VAR(_event,"_event");
			HX_STACK_LINE(384)
			++(_g);
			HX_STACK_LINE(384)
			::String _event_emit_name = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(_event_emit_name,"_event_emit_name");
			HX_STACK_LINE(384)
			bool tmp15 = (_event_emit_name == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(384)
			if ((tmp15)){
				HX_STACK_LINE(384)
				::String tmp16 = this->animation;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(384)
				::String tmp17 = (HX_HCSTRING("animation.","\xaa","\x34","\x1c","\x83") + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(384)
				::String tmp18 = (tmp17 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(384)
				Dynamic tmp19 = this->current_frame;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(384)
				int tmp20 = tmp19->__Field(HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(384)
				::String tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(384)
				_event_emit_name = tmp21;
			}
			HX_STACK_LINE(384)
			::luxe::Entity tmp16 = this->get_entity();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(384)
			::String tmp17 = _event_emit_name;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(384)
			::String tmp18 = this->animation;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(384)
			::String tmp19 = _event_emit_name;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(384)
			Dynamic tmp20 = _event;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(384)
			Dynamic tmp21 = this->current_frame;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(384)
			Dynamic tmp22 = this->current_frame;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(384)
			int tmp23 = tmp22->__Field(HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
			struct _Function_3_1{
				inline static Dynamic Block( Dynamic &tmp20,::String &tmp19,int &tmp23,Dynamic &tmp21,::String &tmp18){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/components/sprite/SpriteAnimation.hx",384,0xffa525c9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b") , tmp18,false);
						__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , tmp19,false);
						__result->Add(HX_HCSTRING("frame_event","\x48","\x67","\x5f","\x1b") , tmp20,false);
						__result->Add(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06") , tmp21,false);
						__result->Add(HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16") , tmp23,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(384)
			Dynamic tmp24 = _Function_3_1::Block(tmp20,tmp19,tmp23,tmp21,tmp18);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(384)
			tmp16->events->fire(tmp17,tmp24,null());
		}
	}
	HX_STACK_LINE(385)
	this->refresh_sprite();
	HX_STACK_LINE(387)
	int tmp11 = this->get_frame();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(387)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimation_obj,set_frame,return )

Float SpriteAnimation_obj::get_speed( ){
	HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","get_speed",0xfa498ec6,"luxe.components.sprite.SpriteAnimation.get_speed","luxe/components/sprite/SpriteAnimation.hx",391,0xffa525c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(393)
	Float tmp = this->speed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(393)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteAnimation_obj,get_speed,return )

Float SpriteAnimation_obj::set_speed( Float _speed){
	HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","set_speed",0xdd9a7ad2,"luxe.components.sprite.SpriteAnimation.set_speed","luxe/components/sprite/SpriteAnimation.hx",397,0xffa525c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_speed,"_speed")
	HX_STACK_LINE(401)
	::luxe::components::sprite::SpriteAnimationData tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(401)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(401)
	if ((tmp1)){
		HX_STACK_LINE(402)
		Float tmp2 = (Float((int)1) / Float(_speed));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(402)
		::luxe::components::sprite::SpriteAnimationData tmp3 = this->current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(402)
		tmp3->frame_time = tmp2;
	}
	HX_STACK_LINE(405)
	Float tmp2 = this->speed = _speed;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(405)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimation_obj,set_speed,return )

::String SpriteAnimation_obj::get_animation( ){
	HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","get_animation",0x5f1af1c3,"luxe.components.sprite.SpriteAnimation.get_animation","luxe/components/sprite/SpriteAnimation.hx",409,0xffa525c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(411)
	::String tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(411)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteAnimation_obj,get_animation,return )

::String SpriteAnimation_obj::set_animation( ::String _name){
	HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","set_animation",0xa420d3cf,"luxe.components.sprite.SpriteAnimation.set_animation","luxe/components/sprite/SpriteAnimation.hx",415,0xffa525c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(417)
	::haxe::ds::StringMap tmp = this->animations;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(417)
	::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(417)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(417)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(417)
	if ((tmp3)){
		HX_STACK_LINE(418)
		::luxe::Entity tmp4 = this->get_entity();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(418)
		::String tmp5 = tmp4->get_name();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(418)
		::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(418)
		::String tmp7 = (tmp6 + HX_HCSTRING(" / set animation `","\xb5","\x9c","\x69","\x01"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(418)
		::String tmp8 = _name;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(418)
		::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(418)
		::String tmp10 = (tmp9 + HX_HCSTRING("`, but that animation is not found in the `","\x35","\x32","\x3e","\x62"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(418)
		::String tmp11 = this->name;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(418)
		::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(418)
		::String tmp13 = (tmp12 + HX_HCSTRING("` component","\xfd","\x24","\x0b","\x6c"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(418)
		::String tmp14 = (HX_HCSTRING("i / spriteanimation / ","\x9a","\x1e","\x60","\x69") + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(418)
		Dynamic tmp15 = hx::SourceInfo(HX_HCSTRING("SpriteAnimation.hx","\xff","\x4d","\x59","\x3d"),418,HX_HCSTRING("luxe.components.sprite.SpriteAnimation","\x56","\xc9","\x27","\x64"),HX_HCSTRING("set_animation","\xe7","\xa4","\x9e","\x51"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(418)
		::haxe::Log_obj::trace(tmp14,tmp15);
		HX_STACK_LINE(419)
		::String tmp16 = this->animation;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(419)
		return tmp16;
	}
	HX_STACK_LINE(422)
	::haxe::ds::StringMap tmp4 = this->animations;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(422)
	::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(422)
	::luxe::components::sprite::SpriteAnimationData tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(422)
	this->current = tmp6;
	HX_STACK_LINE(423)
	::luxe::components::sprite::SpriteAnimationData tmp7 = this->current;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(423)
	this->loop = tmp7->loop;
	HX_STACK_LINE(424)
	::luxe::components::sprite::SpriteAnimationData tmp8 = this->current;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(424)
	this->pingpong = tmp8->pingpong;
	HX_STACK_LINE(425)
	::luxe::components::sprite::SpriteAnimationData tmp9 = this->current;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(425)
	this->reverse = tmp9->reverse;
	HX_STACK_LINE(426)
	Float tmp10 = this->time;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(426)
	::luxe::components::sprite::SpriteAnimationData tmp11 = this->current;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(426)
	Float tmp12 = tmp11->frame_time;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(426)
	Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(426)
	this->next_frame_time = tmp13;
	HX_STACK_LINE(429)
	this->set_frame((int)1);
	HX_STACK_LINE(431)
	::String tmp14 = this->animation = _name;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(431)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimation_obj,set_animation,return )

Void SpriteAnimation_obj::emit_frame_events( ){
{
		HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","emit_frame_events",0x4522f7bf,"luxe.components.sprite.SpriteAnimation.emit_frame_events","luxe/components/sprite/SpriteAnimation.hx",441,0xffa525c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(441)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(441)
		Dynamic tmp = this->current_frame;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(441)
		cpp::ArrayBase _g1 = tmp->__Field(HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(441)
		while((true)){
			HX_STACK_LINE(441)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(441)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(441)
			if ((tmp2)){
				HX_STACK_LINE(441)
				break;
			}
			HX_STACK_LINE(441)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(441)
			Dynamic _event = tmp3;		HX_STACK_VAR(_event,"_event");
			HX_STACK_LINE(441)
			++(_g);
			HX_STACK_LINE(443)
			::String _event_emit_name = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(_event_emit_name,"_event_emit_name");
			HX_STACK_LINE(446)
			bool tmp4 = (_event_emit_name == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(446)
			if ((tmp4)){
				HX_STACK_LINE(447)
				::String tmp5 = this->animation;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(447)
				::String tmp6 = (HX_HCSTRING("animation.","\xaa","\x34","\x1c","\x83") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(447)
				::String tmp7 = (tmp6 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(447)
				Dynamic tmp8 = this->current_frame;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(447)
				int tmp9 = tmp8->__Field(HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(447)
				::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(447)
				_event_emit_name = tmp10;
			}
			HX_STACK_LINE(451)
			::luxe::Entity tmp5 = this->get_entity();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(451)
			::String tmp6 = _event_emit_name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(452)
			::String tmp7 = this->animation;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(453)
			::String tmp8 = _event_emit_name;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(454)
			Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(455)
			Dynamic tmp10 = this->current_frame;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(456)
			Dynamic tmp11 = this->current_frame;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(456)
			int tmp12 = tmp11->__Field(HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &tmp9,Dynamic &tmp10,::String &tmp7,::String &tmp8,int &tmp12){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/components/sprite/SpriteAnimation.hx",451,0xffa525c9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b") , tmp7,false);
						__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , tmp8,false);
						__result->Add(HX_HCSTRING("frame_event","\x48","\x67","\x5f","\x1b") , tmp9,false);
						__result->Add(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06") , tmp10,false);
						__result->Add(HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16") , tmp12,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(451)
			Dynamic tmp13 = _Function_2_1::Block(tmp9,tmp10,tmp7,tmp8,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(451)
			tmp5->events->fire(tmp6,tmp13,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteAnimation_obj,emit_frame_events,(void))

Void SpriteAnimation_obj::emit_anim_event( ::String _name){
{
		HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","emit_anim_event",0x9ada2ac0,"luxe.components.sprite.SpriteAnimation.emit_anim_event","luxe/components/sprite/SpriteAnimation.hx",463,0xffa525c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(464)
		::String tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(464)
		::String tmp1 = (HX_HCSTRING("animation.","\xaa","\x34","\x1c","\x83") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(464)
		::String tmp2 = (tmp1 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(464)
		::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(464)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(464)
		::String _event_emit_name = tmp4;		HX_STACK_VAR(_event_emit_name,"_event_emit_name");
		HX_STACK_LINE(465)
		::luxe::Entity tmp5 = this->get_entity();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(465)
		::String tmp6 = _event_emit_name;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(466)
		::String tmp7 = this->animation;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(467)
		::String tmp8 = _event_emit_name;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(469)
		Dynamic tmp9 = this->current_frame;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(470)
		Dynamic tmp10 = this->current_frame;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(470)
		int tmp11 = tmp10->__Field(HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &tmp9,int &tmp11,::String &tmp7,::String &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/components/sprite/SpriteAnimation.hx",465,0xffa525c9)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b") , tmp7,false);
					__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , tmp8,false);
					__result->Add(HX_HCSTRING("frame_event","\x48","\x67","\x5f","\x1b") , null(),false);
					__result->Add(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06") , tmp9,false);
					__result->Add(HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16") , tmp11,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(465)
		Dynamic tmp12 = _Function_1_1::Block(tmp9,tmp11,tmp7,tmp8);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(465)
		tmp5->events->fire(tmp6,tmp12,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimation_obj,emit_anim_event,(void))

Void SpriteAnimation_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","ondestroy",0x641658a3,"luxe.components.sprite.SpriteAnimation.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void SpriteAnimation_obj::onremoved( ){
{
		HX_STACK_FRAME("luxe.components.sprite.SpriteAnimation","onremoved",0x32904b49,"luxe.components.sprite.SpriteAnimation.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}



SpriteAnimation_obj::SpriteAnimation_obj()
{
}

void SpriteAnimation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpriteAnimation);
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(current_frame,"current_frame");
	HX_MARK_MEMBER_NAME(animations,"animations");
	HX_MARK_MEMBER_NAME(image_frame,"image_frame");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(loop,"loop");
	HX_MARK_MEMBER_NAME(pingpong,"pingpong");
	HX_MARK_MEMBER_NAME(reverse,"reverse");
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(next_frame_time,"next_frame_time");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(uv_cache,"uv_cache");
	::luxe::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SpriteAnimation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(current_frame,"current_frame");
	HX_VISIT_MEMBER_NAME(animations,"animations");
	HX_VISIT_MEMBER_NAME(image_frame,"image_frame");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(loop,"loop");
	HX_VISIT_MEMBER_NAME(pingpong,"pingpong");
	HX_VISIT_MEMBER_NAME(reverse,"reverse");
	HX_VISIT_MEMBER_NAME(animation,"animation");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(next_frame_time,"next_frame_time");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(uv_cache,"uv_cache");
	::luxe::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SpriteAnimation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { return loop; }
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return inCallProp == hx::paccAlways ? get_speed() : speed; }
		if (HX_FIELD_EQ(inName,"frame") ) { return inCallProp == hx::paccAlways ? get_frame() : frame; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		if (HX_FIELD_EQ(inName,"playing") ) { return playing; }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse; }
		if (HX_FIELD_EQ(inName,"onadded") ) { return onadded_dyn(); }
		if (HX_FIELD_EQ(inName,"restart") ) { return restart_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pingpong") ) { return pingpong; }
		if (HX_FIELD_EQ(inName,"uv_cache") ) { return uv_cache; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { return inCallProp == hx::paccAlways ? get_animation() : animation; }
		if (HX_FIELD_EQ(inName,"add_event") ) { return add_event_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frame") ) { return get_frame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frame") ) { return set_frame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_speed") ) { return get_speed_dyn(); }
		if (HX_FIELD_EQ(inName,"set_speed") ) { return set_speed_dyn(); }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { return animations; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"image_frame") ) { return image_frame; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"remove_event") ) { return remove_event_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"current_frame") ) { return current_frame; }
		if (HX_FIELD_EQ(inName,"add_from_json") ) { return add_from_json_dyn(); }
		if (HX_FIELD_EQ(inName,"remove_events") ) { return remove_events_dyn(); }
		if (HX_FIELD_EQ(inName,"get_animation") ) { return get_animation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_animation") ) { return set_animation_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"refresh_sprite") ) { return refresh_sprite_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"next_frame_time") ) { return next_frame_time; }
		if (HX_FIELD_EQ(inName,"emit_anim_event") ) { return emit_anim_event_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"emit_frame_events") ) { return emit_frame_events_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"add_from_anim_data") ) { return add_from_anim_data_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"add_from_json_object") ) { return add_from_json_object_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpriteAnimation_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { loop=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { if (inCallProp == hx::paccAlways) return set_speed(inValue);speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp == hx::paccAlways) return set_frame(inValue);frame=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< ::luxe::components::sprite::SpriteAnimationData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"reverse") ) { reverse=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pingpong") ) { pingpong=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv_cache") ) { uv_cache=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { if (inCallProp == hx::paccAlways) return set_animation(inValue);animation=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { animations=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"image_frame") ) { image_frame=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"current_frame") ) { current_frame=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"next_frame_time") ) { next_frame_time=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpriteAnimation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"));
	outFields->push(HX_HCSTRING("current_frame","\x67","\xcc","\x32","\xb1"));
	outFields->push(HX_HCSTRING("animations","\xef","\x34","\x1c","\x83"));
	outFields->push(HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16"));
	outFields->push(HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"));
	outFields->push(HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"));
	outFields->push(HX_HCSTRING("pingpong","\x6a","\x93","\x43","\xa8"));
	outFields->push(HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"));
	outFields->push(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"));
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("next_frame_time","\xab","\x83","\x09","\x72"));
	outFields->push(HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"));
	outFields->push(HX_HCSTRING("uv_cache","\xa4","\xc6","\xee","\x8b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::components::sprite::SpriteAnimationData*/ ,(int)offsetof(SpriteAnimation_obj,current),HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SpriteAnimation_obj,current_frame),HX_HCSTRING("current_frame","\x67","\xcc","\x32","\xb1")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(SpriteAnimation_obj,animations),HX_HCSTRING("animations","\xef","\x34","\x1c","\x83")},
	{hx::fsInt,(int)offsetof(SpriteAnimation_obj,image_frame),HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16")},
	{hx::fsBool,(int)offsetof(SpriteAnimation_obj,playing),HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a")},
	{hx::fsBool,(int)offsetof(SpriteAnimation_obj,loop),HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47")},
	{hx::fsBool,(int)offsetof(SpriteAnimation_obj,pingpong),HX_HCSTRING("pingpong","\x6a","\x93","\x43","\xa8")},
	{hx::fsBool,(int)offsetof(SpriteAnimation_obj,reverse),HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a")},
	{hx::fsString,(int)offsetof(SpriteAnimation_obj,animation),HX_HCSTRING("animation","\x04","\xef","\x34","\x4b")},
	{hx::fsFloat,(int)offsetof(SpriteAnimation_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsInt,(int)offsetof(SpriteAnimation_obj,frame),HX_HCSTRING("frame","\x2d","\x78","\x83","\x06")},
	{hx::fsFloat,(int)offsetof(SpriteAnimation_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsFloat,(int)offsetof(SpriteAnimation_obj,next_frame_time),HX_HCSTRING("next_frame_time","\xab","\x83","\x09","\x72")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(SpriteAnimation_obj,sprite),HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(SpriteAnimation_obj,uv_cache),HX_HCSTRING("uv_cache","\xa4","\xc6","\xee","\x8b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("current_frame","\x67","\xcc","\x32","\xb1"),
	HX_HCSTRING("animations","\xef","\x34","\x1c","\x83"),
	HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16"),
	HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	HX_HCSTRING("pingpong","\x6a","\x93","\x43","\xa8"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("next_frame_time","\xab","\x83","\x09","\x72"),
	HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"),
	HX_HCSTRING("uv_cache","\xa4","\xc6","\xee","\x8b"),
	HX_HCSTRING("onadded","\x41","\x03","\x54","\x1f"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("restart","\xcf","\xc7","\xa5","\x6a"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("add_from_anim_data","\xa1","\xfb","\x37","\xae"),
	HX_HCSTRING("add_from_json_object","\xbf","\xb4","\xc2","\x0f"),
	HX_HCSTRING("add_from_json","\x7f","\x99","\x0f","\xea"),
	HX_HCSTRING("remove_event","\x9f","\x36","\x45","\xac"),
	HX_HCSTRING("remove_events","\xf4","\x94","\x4a","\x10"),
	HX_HCSTRING("add_event","\x3c","\xd0","\x3b","\xf5"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("refresh_sprite","\x29","\xd5","\xd0","\xd9"),
	HX_HCSTRING("get_frame","\x84","\xd4","\x2c","\x4a"),
	HX_HCSTRING("set_frame","\x90","\xc0","\x7d","\x2d"),
	HX_HCSTRING("get_speed","\xde","\xf3","\x12","\xc5"),
	HX_HCSTRING("set_speed","\xea","\xdf","\x63","\xa8"),
	HX_HCSTRING("get_animation","\xdb","\xc2","\x98","\x0c"),
	HX_HCSTRING("set_animation","\xe7","\xa4","\x9e","\x51"),
	HX_HCSTRING("emit_frame_events","\xd7","\x34","\xfb","\x85"),
	HX_HCSTRING("emit_anim_event","\xd8","\x71","\x40","\x00"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onremoved","\x61","\xb0","\x59","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpriteAnimation_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpriteAnimation_obj::__mClass,"__mClass");
};

#endif

hx::Class SpriteAnimation_obj::__mClass;

void SpriteAnimation_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.components.sprite.SpriteAnimation","\x56","\xc9","\x27","\x64");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SpriteAnimation_obj >;
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
} // end namespace components
} // end namespace sprite
