#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
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
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{
namespace components{
namespace sprite{

Void SpriteAnimationData_obj::__construct(::luxe::Sprite _sprite,::String __o__name)
{
HX_STACK_FRAME("luxe.components.sprite.SpriteAnimationData","new",0x18ba1f92,"luxe.components.sprite.SpriteAnimationData.new","luxe/components/sprite/SpriteAnimation.hx",516,0xffa525c9)
HX_STACK_THIS(this)
HX_STACK_ARG(_sprite,"_sprite")
HX_STACK_ARG(__o__name,"_name")
::String _name = __o__name.Default(HX_HCSTRING("anim","\x11","\x86","\x71","\x40"));
{
	HX_STACK_LINE(538)
	this->frame_count = (int)0;
	HX_STACK_LINE(534)
	this->reverse = false;
	HX_STACK_LINE(533)
	this->pingpong = false;
	HX_STACK_LINE(532)
	this->loop = false;
	HX_STACK_LINE(531)
	this->frame_time = ((Float)0.05);
	HX_STACK_LINE(544)
	this->name = _name;
	HX_STACK_LINE(545)
	this->sprite = _sprite;
	HX_STACK_LINE(546)
	this->frameset = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(547)
	this->frame_sources = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(548)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(548)
	this->frame_size = tmp;
}
;
	return null();
}

//SpriteAnimationData_obj::~SpriteAnimationData_obj() { }

Dynamic SpriteAnimationData_obj::__CreateEmpty() { return  new SpriteAnimationData_obj; }
hx::ObjectPtr< SpriteAnimationData_obj > SpriteAnimationData_obj::__new(::luxe::Sprite _sprite,::String __o__name)
{  hx::ObjectPtr< SpriteAnimationData_obj > _result_ = new SpriteAnimationData_obj();
	_result_->__construct(_sprite,__o__name);
	return _result_;}

Dynamic SpriteAnimationData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpriteAnimationData_obj > _result_ = new SpriteAnimationData_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

int SpriteAnimationData_obj::get_frame_count( ){
	HX_STACK_FRAME("luxe.components.sprite.SpriteAnimationData","get_frame_count",0xd098edc6,"luxe.components.sprite.SpriteAnimationData.get_frame_count","luxe/components/sprite/SpriteAnimation.hx",539,0xffa525c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(540)
	int tmp = this->frameset->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(540)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteAnimationData_obj,get_frame_count,return )

::luxe::components::sprite::SpriteAnimationData SpriteAnimationData_obj::from_json( Dynamic _animdata){
	HX_STACK_FRAME("luxe.components.sprite.SpriteAnimationData","from_json",0xc291990f,"luxe.components.sprite.SpriteAnimationData.from_json","luxe/components/sprite/SpriteAnimation.hx",551,0xffa525c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_animdata,"_animdata")
	HX_STACK_LINE(553)
	{
		HX_STACK_LINE(553)
		bool tmp = (_animdata == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(553)
		if ((tmp)){
			HX_STACK_LINE(230)
			::String tmp1 = HX_HCSTRING(" ( Null animation object passed to from_json in SpriteAnimation","\xa0","\x88","\xb9","\x88");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(230)
			::String tmp2 = (tmp1 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(553)
			::String tmp3 = (HX_HCSTRING("_animdata was null","\xa4","\x55","\x12","\xd8") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(553)
			::luxe::DebugError tmp4 = ::luxe::DebugError_obj::null_assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(553)
			HX_STACK_DO_THROW(tmp4);
		}
	}
	HX_STACK_LINE(555)
	Array< ::String > _json_frameset = ((Array< ::String >)(_animdata->__Field(HX_HCSTRING("frameset","\x95","\xbd","\x0d","\x1d"), hx::paccDynamic )));		HX_STACK_VAR(_json_frameset,"_json_frameset");
	HX_STACK_LINE(556)
	Dynamic _json_frame_size = _animdata->__Field(HX_HCSTRING("frame_size","\x53","\x81","\x5d","\x4f"), hx::paccDynamic );		HX_STACK_VAR(_json_frame_size,"_json_frame_size");
	HX_STACK_LINE(557)
	Dynamic _json_pingpong = _animdata->__Field(HX_HCSTRING("pingpong","\x6a","\x93","\x43","\xa8"), hx::paccDynamic );		HX_STACK_VAR(_json_pingpong,"_json_pingpong");
	HX_STACK_LINE(558)
	Dynamic _json_loop = _animdata->__Field(HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"), hx::paccDynamic );		HX_STACK_VAR(_json_loop,"_json_loop");
	HX_STACK_LINE(559)
	Dynamic _json_reverse = _animdata->__Field(HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"), hx::paccDynamic );		HX_STACK_VAR(_json_reverse,"_json_reverse");
	HX_STACK_LINE(560)
	Dynamic _json_speed = _animdata->__Field(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"), hx::paccDynamic );		HX_STACK_VAR(_json_speed,"_json_speed");
	HX_STACK_LINE(561)
	::String _json_image_sequence = ((::String)(_animdata->__Field(HX_HCSTRING("image_sequence","\xe5","\xb2","\xf6","\x5c"), hx::paccDynamic )));		HX_STACK_VAR(_json_image_sequence,"_json_image_sequence");
	HX_STACK_LINE(562)
	::String _json_filter_type = ((::String)(_animdata->__Field(HX_HCSTRING("filter_type","\xe1","\xf3","\x9e","\x1c"), hx::paccDynamic )));		HX_STACK_VAR(_json_filter_type,"_json_filter_type");
	HX_STACK_LINE(563)
	cpp::ArrayBase _json_events_list = ((cpp::ArrayBase)(_animdata->__Field(HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"), hx::paccDynamic )));		HX_STACK_VAR(_json_events_list,"_json_events_list");
	HX_STACK_LINE(564)
	cpp::ArrayBase _json_framesource_list = ((cpp::ArrayBase)(_animdata->__Field(HX_HCSTRING("frame_sources","\xe6","\x55","\x2c","\xf2"), hx::paccDynamic )));		HX_STACK_VAR(_json_framesource_list,"_json_framesource_list");
	HX_STACK_LINE(567)
	{
		HX_STACK_LINE(567)
		bool tmp = (_json_frameset == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(567)
		if ((tmp)){
			HX_STACK_LINE(230)
			::String tmp1 = HX_HCSTRING(" ( SpriteAnimation passed invalid json, anim data requires frameset as an array of strings.","\xad","\x92","\x64","\x65");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(230)
			::String tmp2 = (tmp1 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(567)
			::String tmp3 = (HX_HCSTRING("_json_frameset was null","\x51","\x51","\xf2","\x35") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(567)
			::luxe::DebugError tmp4 = ::luxe::DebugError_obj::null_assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(567)
			HX_STACK_DO_THROW(tmp4);
		}
	}
	HX_STACK_LINE(569)
	Array< int > _frameset = this->parse_frameset(_json_frameset);		HX_STACK_VAR(_frameset,"_frameset");
	HX_STACK_LINE(571)
	this->type = ::luxe::components::sprite::SpriteAnimationType_obj::animated_uv;
	HX_STACK_LINE(574)
	bool tmp = (_json_filter_type != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(574)
	if ((tmp)){
		HX_STACK_LINE(575)
		::String tmp1 = _json_filter_type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(575)
		::String _switch_1 = (tmp1);
		if (  ( _switch_1==HX_HCSTRING("nearest","\x5e","\x18","\xca","\x65"))){
			HX_STACK_LINE(576)
			this->filter_type = (int)9728;
		}
		else if (  ( _switch_1==HX_HCSTRING("linear","\xe5","\x51","\xa0","\xec"))){
			HX_STACK_LINE(577)
			this->filter_type = (int)9729;
		}
	}
	HX_STACK_LINE(582)
	::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(582)
	::phoenix::Vector _frame_size = tmp1;		HX_STACK_VAR(_frame_size,"_frame_size");
	HX_STACK_LINE(583)
	bool tmp2 = (_json_frame_size != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(583)
	if ((tmp2)){
		HX_STACK_LINE(584)
		Float tmp3 = ::Std_obj::parseFloat(_json_frame_size->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(584)
		Float _x = tmp3;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(585)
		Float tmp4 = ::Std_obj::parseFloat(_json_frame_size->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(585)
		Float _y = tmp4;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(586)
		{
			HX_STACK_LINE(586)
			bool prev = _frame_size->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(586)
			_frame_size->ignore_listeners = true;
			HX_STACK_LINE(586)
			{
				HX_STACK_LINE(586)
				_frame_size->x = _x;
				HX_STACK_LINE(586)
				bool tmp5 = _frame_size->_construct;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(586)
				if ((tmp5)){
					HX_STACK_LINE(586)
					_frame_size->x;
				}
				else{
					HX_STACK_LINE(586)
					bool tmp6 = (_frame_size->listen_x != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(586)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(586)
					if ((tmp6)){
						HX_STACK_LINE(586)
						bool tmp8 = _frame_size->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(586)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(586)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(586)
						tmp7 = false;
					}
					HX_STACK_LINE(586)
					if ((tmp7)){
						HX_STACK_LINE(586)
						Float tmp8 = _x;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(586)
						_frame_size->listen_x(tmp8);
					}
					HX_STACK_LINE(586)
					_frame_size->x;
				}
			}
			HX_STACK_LINE(586)
			{
				HX_STACK_LINE(586)
				_frame_size->y = _y;
				HX_STACK_LINE(586)
				bool tmp5 = _frame_size->_construct;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(586)
				if ((tmp5)){
					HX_STACK_LINE(586)
					_frame_size->y;
				}
				else{
					HX_STACK_LINE(586)
					bool tmp6 = (_frame_size->listen_y != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(586)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(586)
					if ((tmp6)){
						HX_STACK_LINE(586)
						bool tmp8 = _frame_size->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(586)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(586)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(586)
						tmp7 = false;
					}
					HX_STACK_LINE(586)
					if ((tmp7)){
						HX_STACK_LINE(586)
						Float tmp8 = _y;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(586)
						_frame_size->listen_y(tmp8);
					}
					HX_STACK_LINE(586)
					_frame_size->y;
				}
			}
			HX_STACK_LINE(586)
			_frame_size->ignore_listeners = prev;
			HX_STACK_LINE(586)
			bool tmp5 = (_frame_size->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(586)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(586)
			if ((tmp5)){
				HX_STACK_LINE(586)
				bool tmp7 = _frame_size->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(586)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(586)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(586)
				tmp6 = false;
			}
			HX_STACK_LINE(586)
			if ((tmp6)){
				HX_STACK_LINE(586)
				Float tmp7 = _frame_size->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(586)
				_frame_size->listen_x(tmp7);
			}
			HX_STACK_LINE(586)
			bool tmp7 = (_frame_size->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(586)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(586)
			if ((tmp7)){
				HX_STACK_LINE(586)
				bool tmp9 = _frame_size->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(586)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(586)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(586)
				tmp8 = false;
			}
			HX_STACK_LINE(586)
			if ((tmp8)){
				HX_STACK_LINE(586)
				Float tmp9 = _frame_size->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(586)
				_frame_size->listen_y(tmp9);
			}
			HX_STACK_LINE(586)
			_frame_size;
		}
	}
	HX_STACK_LINE(590)
	bool _pingpong = false;		HX_STACK_VAR(_pingpong,"_pingpong");
	HX_STACK_LINE(591)
	bool tmp3 = (_json_pingpong != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(591)
	if ((tmp3)){
		HX_STACK_LINE(592)
		bool tmp4 = (_json_pingpong == HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(592)
		if ((tmp4)){
			HX_STACK_LINE(593)
			_pingpong = true;
		}
		else{
			HX_STACK_LINE(595)
			_pingpong = false;
		}
	}
	HX_STACK_LINE(600)
	bool _loop = false;		HX_STACK_VAR(_loop,"_loop");
	HX_STACK_LINE(601)
	bool tmp4 = (_json_loop != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(601)
	if ((tmp4)){
		HX_STACK_LINE(602)
		bool tmp5 = (_json_loop == HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(602)
		if ((tmp5)){
			HX_STACK_LINE(603)
			_loop = true;
		}
		else{
			HX_STACK_LINE(605)
			_loop = false;
		}
	}
	HX_STACK_LINE(610)
	bool _reverse = false;		HX_STACK_VAR(_reverse,"_reverse");
	HX_STACK_LINE(611)
	bool tmp5 = (_json_reverse != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(611)
	if ((tmp5)){
		HX_STACK_LINE(612)
		bool tmp6 = (_json_reverse == HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(612)
		if ((tmp6)){
			HX_STACK_LINE(613)
			_reverse = true;
		}
		else{
			HX_STACK_LINE(615)
			_reverse = false;
		}
	}
	HX_STACK_LINE(620)
	Float _speed = (int)2;		HX_STACK_VAR(_speed,"_speed");
	HX_STACK_LINE(621)
	bool tmp6 = (_json_speed != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(621)
	if ((tmp6)){
		HX_STACK_LINE(622)
		Dynamic tmp7 = _json_speed;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(622)
		Float tmp8 = ::Std_obj::parseFloat(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(622)
		_speed = tmp8;
	}
	HX_STACK_LINE(626)
	cpp::ArrayBase _events = null();		HX_STACK_VAR(_events,"_events");
	HX_STACK_LINE(627)
	bool tmp7 = (_json_events_list != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(627)
	if ((tmp7)){
		HX_STACK_LINE(628)
		_events = this->parse_event_set(_json_events_list);
	}
	HX_STACK_LINE(635)
	this->frame_size = _frame_size;
	HX_STACK_LINE(637)
	cpp::ArrayBase _frame_sources = null();		HX_STACK_VAR(_frame_sources,"_frame_sources");
	HX_STACK_LINE(638)
	bool tmp8 = (_json_framesource_list != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(638)
	if ((tmp8)){
		HX_STACK_LINE(639)
		_frame_sources = this->parse_frame_sources_set(_json_framesource_list);
	}
	HX_STACK_LINE(643)
	{
		HX_STACK_LINE(643)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(643)
		while((true)){
			HX_STACK_LINE(643)
			bool tmp9 = (_g < _frameset->length);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(643)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(643)
			if ((tmp10)){
				HX_STACK_LINE(643)
				break;
			}
			HX_STACK_LINE(643)
			int tmp11 = _frameset->__get(_g);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(643)
			int _frame = tmp11;		HX_STACK_VAR(_frame,"_frame");
			HX_STACK_LINE(643)
			++(_g);
			HX_STACK_LINE(645)
			int tmp12 = _frame;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(646)
			int tmp13 = _frame;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(647)
			int tmp14 = _frame;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(647)
			::phoenix::Rectangle tmp15 = this->parse_source_for_frame(_frame_sources,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(648)
			int tmp16 = _frame;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(648)
			::phoenix::Vector tmp17 = this->parse_source_size_for_frame(_frame_sources,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(649)
			int tmp18 = _frame;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(649)
			::phoenix::Vector tmp19 = this->parse_source_pos_for_frame(_frame_sources,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			struct _Function_3_1{
				inline static Dynamic Block( hx::ObjectPtr< ::luxe::components::sprite::SpriteAnimationData_obj > __this,int &tmp13,::phoenix::Vector &tmp17,::phoenix::Vector &tmp19,::phoenix::Rectangle &tmp15,int &tmp12,cpp::ArrayBase &_events){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/components/sprite/SpriteAnimation.hx",644,0xffa525c9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16") , tmp12,false);
						__result->Add(HX_HCSTRING("events","\x19","\x4f","\x6a","\x96") , __this->parse_event_for_frame(_events,tmp13),false);
						__result->Add(HX_HCSTRING("frame_source","\xed","\x59","\xe2","\x73") , tmp15,false);
						__result->Add(HX_HCSTRING("frame_size","\x53","\x81","\x5d","\x4f") , tmp17,false);
						__result->Add(HX_HCSTRING("frame_pos","\x42","\x35","\xc8","\x41") , tmp19,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(644)
			Dynamic tmp20 = _Function_3_1::Block(this,tmp13,tmp17,tmp19,tmp15,tmp12,_events);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(644)
			this->frameset->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp20);
		}
	}
	HX_STACK_LINE(655)
	bool tmp9 = (_json_image_sequence != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(655)
	if ((tmp9)){
		HX_STACK_LINE(658)
		::luxe::utils::Utils tmp10 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(658)
		::String tmp11 = _json_image_sequence;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(658)
		Array< ::String > _images_list = tmp10->find_assets_sequence(tmp11,null(),null());		HX_STACK_VAR(_images_list,"_images_list");
		HX_STACK_LINE(660)
		this->type = ::luxe::components::sprite::SpriteAnimationType_obj::animated_texture;
		HX_STACK_LINE(661)
		this->image_set = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(663)
		cpp::ArrayBase _textures = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(_textures,"_textures");
		HX_STACK_LINE(665)
		bool tmp12 = (_images_list->length > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(665)
		if ((tmp12)){
			HX_STACK_LINE(667)
			this->image_set_list = _images_list;
			HX_STACK_LINE(669)
			{
				HX_STACK_LINE(669)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(669)
				while((true)){
					HX_STACK_LINE(669)
					bool tmp13 = (_g < _images_list->length);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(669)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(669)
					if ((tmp14)){
						HX_STACK_LINE(669)
						break;
					}
					HX_STACK_LINE(669)
					::String tmp15 = _images_list->__get(_g);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(669)
					::String _image = tmp15;		HX_STACK_VAR(_image,"_image");
					HX_STACK_LINE(669)
					++(_g);
					HX_STACK_LINE(670)
					::luxe::Resources tmp16 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(670)
					::String tmp17 = _image;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(670)
					::luxe::resource::Resource tmp18 = tmp16->cache->get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(670)
					::phoenix::Texture _texture = ((::phoenix::Texture)(tmp18));		HX_STACK_VAR(_texture,"_texture");
					HX_STACK_LINE(671)
					{
						HX_STACK_LINE(671)
						bool tmp19 = (_texture == null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(671)
						if ((tmp19)){
							HX_STACK_LINE(671)
							::String tmp20 = (HX_HCSTRING("SpriteAnimation texture id was not found : ","\x67","\x74","\x29","\xf6") + _image);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(230)
							::String tmp21 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(230)
							::String tmp22 = (tmp21 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(671)
							::String tmp23 = (HX_HCSTRING("_texture was null","\x22","\x8b","\x23","\x32") + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(671)
							::luxe::DebugError tmp24 = ::luxe::DebugError_obj::null_assertion(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(671)
							HX_STACK_DO_THROW(tmp24);
						}
					}
					HX_STACK_LINE(672)
					::phoenix::Texture tmp19 = _texture;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(672)
					this->image_set->push(tmp19);
				}
			}
			HX_STACK_LINE(676)
			{
				HX_STACK_LINE(676)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(676)
				cpp::ArrayBase _g1 = this->frameset;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(676)
				while((true)){
					HX_STACK_LINE(676)
					bool tmp13 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(676)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(676)
					if ((tmp14)){
						HX_STACK_LINE(676)
						break;
					}
					HX_STACK_LINE(676)
					Dynamic tmp15 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(676)
					Dynamic _frame = tmp15;		HX_STACK_VAR(_frame,"_frame");
					HX_STACK_LINE(676)
					++(_g);
					HX_STACK_LINE(677)
					int tmp16 = _frame->__Field(HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(677)
					int tmp17 = this->image_set->length;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(677)
					bool tmp18 = (tmp16 <= tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(677)
					if ((tmp18)){
						HX_STACK_LINE(678)
						int tmp19 = (_frame->__Field(HX_HCSTRING("image_frame","\x09","\x55","\x16","\x16"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(678)
						::phoenix::Texture tmp20 = this->image_set->__get(tmp19).StaticCast< ::phoenix::Texture >();		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(678)
						_frame->__FieldRef(HX_HCSTRING("image_source","\x7f","\x14","\x20","\xc3")) = tmp20;
						HX_STACK_LINE(679)
						Dynamic tmp21 = this->filter_type;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(679)
						bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(679)
						if ((tmp22)){
							HX_STACK_LINE(680)
							Dynamic tmp23 = this->filter_type;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(680)
							int tmp24 = _frame->__Field(HX_HCSTRING("image_source","\x7f","\x14","\x20","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("set_filter_mag","\x09","\x1c","\x9f","\xf6"), hx::paccDynamic )(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(680)
							_frame->__Field(HX_HCSTRING("image_source","\x7f","\x14","\x20","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("set_filter_min","\x08","\x23","\x9f","\xf6"), hx::paccDynamic )(tmp24);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(689)
	this->pingpong = _pingpong;
	HX_STACK_LINE(690)
	this->loop = _loop;
	HX_STACK_LINE(691)
	this->reverse = _reverse;
	HX_STACK_LINE(692)
	Float tmp10 = (Float((int)1) / Float(_speed));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(692)
	this->frame_time = tmp10;
	HX_STACK_LINE(694)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimationData_obj,from_json,return )

cpp::ArrayBase SpriteAnimationData_obj::parse_event_for_frame( cpp::ArrayBase _events,int _frame){
	HX_STACK_FRAME("luxe.components.sprite.SpriteAnimationData","parse_event_for_frame",0x376cc7f8,"luxe.components.sprite.SpriteAnimationData.parse_event_for_frame","luxe/components/sprite/SpriteAnimation.hx",698,0xffa525c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_events,"_events")
	HX_STACK_ARG(_frame,"_frame")
	HX_STACK_LINE(700)
	bool tmp = (_events == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(700)
	if ((tmp)){
		HX_STACK_LINE(700)
		return cpp::ArrayBase_obj::__new();
	}
	HX_STACK_LINE(701)
	bool tmp1 = (_events->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(701)
	if ((tmp1)){
		HX_STACK_LINE(701)
		return cpp::ArrayBase_obj::__new();
	}
	HX_STACK_LINE(703)
	cpp::ArrayBase _resulting_events = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(_resulting_events,"_resulting_events");
	HX_STACK_LINE(704)
	{
		HX_STACK_LINE(704)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(704)
		while((true)){
			HX_STACK_LINE(704)
			bool tmp2 = (_g < _events->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(704)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(704)
			if ((tmp3)){
				HX_STACK_LINE(704)
				break;
			}
			HX_STACK_LINE(704)
			Dynamic tmp4 = _events->__GetItem(_g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(704)
			Dynamic _event = tmp4;		HX_STACK_VAR(_event,"_event");
			HX_STACK_LINE(704)
			++(_g);
			HX_STACK_LINE(705)
			bool tmp5 = (_event->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic ) == _frame);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(705)
			if ((tmp5)){
				HX_STACK_LINE(706)
				Dynamic tmp6 = _event;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(706)
				_resulting_events->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
			}
		}
	}
	HX_STACK_LINE(710)
	return _resulting_events;
}


HX_DEFINE_DYNAMIC_FUNC2(SpriteAnimationData_obj,parse_event_for_frame,return )

::phoenix::Vector SpriteAnimationData_obj::parse_source_size_for_frame( cpp::ArrayBase _sources,int _frame){
	HX_STACK_FRAME("luxe.components.sprite.SpriteAnimationData","parse_source_size_for_frame",0xe36fae03,"luxe.components.sprite.SpriteAnimationData.parse_source_size_for_frame","luxe/components/sprite/SpriteAnimation.hx",714,0xffa525c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_sources,"_sources")
	HX_STACK_ARG(_frame,"_frame")
	HX_STACK_LINE(716)
	bool tmp = (_sources != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(716)
	if ((tmp)){
		HX_STACK_LINE(717)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(717)
		while((true)){
			HX_STACK_LINE(717)
			bool tmp1 = (_g < _sources->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(717)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(717)
			if ((tmp2)){
				HX_STACK_LINE(717)
				break;
			}
			HX_STACK_LINE(717)
			Dynamic tmp3 = _sources->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(717)
			Dynamic _source = tmp3;		HX_STACK_VAR(_source,"_source");
			HX_STACK_LINE(717)
			++(_g);
			HX_STACK_LINE(718)
			bool tmp4 = (_source->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic ) == _frame);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(718)
			if ((tmp4)){
				HX_STACK_LINE(719)
				::phoenix::Vector tmp5 = _source->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(719)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(724)
	::phoenix::Vector tmp1 = this->frame_size;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(724)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(SpriteAnimationData_obj,parse_source_size_for_frame,return )

::phoenix::Vector SpriteAnimationData_obj::parse_source_pos_for_frame( cpp::ArrayBase _sources,int _frame){
	HX_STACK_FRAME("luxe.components.sprite.SpriteAnimationData","parse_source_pos_for_frame",0x2521f9c2,"luxe.components.sprite.SpriteAnimationData.parse_source_pos_for_frame","luxe/components/sprite/SpriteAnimation.hx",728,0xffa525c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_sources,"_sources")
	HX_STACK_ARG(_frame,"_frame")
	HX_STACK_LINE(730)
	bool tmp = (_sources != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(730)
	if ((tmp)){
		HX_STACK_LINE(731)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(731)
		while((true)){
			HX_STACK_LINE(731)
			bool tmp1 = (_g < _sources->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(731)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(731)
			if ((tmp2)){
				HX_STACK_LINE(731)
				break;
			}
			HX_STACK_LINE(731)
			Dynamic tmp3 = _sources->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(731)
			Dynamic _source = tmp3;		HX_STACK_VAR(_source,"_source");
			HX_STACK_LINE(731)
			++(_g);
			HX_STACK_LINE(732)
			bool tmp4 = (_source->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic ) == _frame);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(732)
			if ((tmp4)){
				HX_STACK_LINE(733)
				::phoenix::Vector tmp5 = _source->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(733)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(738)
	::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(738)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(SpriteAnimationData_obj,parse_source_pos_for_frame,return )

::phoenix::Rectangle SpriteAnimationData_obj::parse_source_for_frame( cpp::ArrayBase _sources,int _frame){
	HX_STACK_FRAME("luxe.components.sprite.SpriteAnimationData","parse_source_for_frame",0x16ba0c6d,"luxe.components.sprite.SpriteAnimationData.parse_source_for_frame","luxe/components/sprite/SpriteAnimation.hx",742,0xffa525c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_sources,"_sources")
	HX_STACK_ARG(_frame,"_frame")
	HX_STACK_LINE(744)
	::phoenix::Rectangle _explicit_source = null();		HX_STACK_VAR(_explicit_source,"_explicit_source");
	HX_STACK_LINE(745)
	bool tmp = (_sources != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(745)
	if ((tmp)){
		HX_STACK_LINE(746)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(746)
		while((true)){
			HX_STACK_LINE(746)
			bool tmp1 = (_g < _sources->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(746)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(746)
			if ((tmp2)){
				HX_STACK_LINE(746)
				break;
			}
			HX_STACK_LINE(746)
			Dynamic tmp3 = _sources->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(746)
			Dynamic _source = tmp3;		HX_STACK_VAR(_source,"_source");
			HX_STACK_LINE(746)
			++(_g);
			HX_STACK_LINE(747)
			bool tmp4 = (_source->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic ) == _frame);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(747)
			if ((tmp4)){
				HX_STACK_LINE(748)
				_explicit_source = _source->__Field(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"), hx::paccDynamic );
			}
		}
	}
	HX_STACK_LINE(755)
	bool tmp1 = (_explicit_source == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(755)
	if ((tmp1)){
		HX_STACK_LINE(757)
		::phoenix::Vector tmp2 = this->frame_size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(757)
		Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(757)
		::phoenix::Vector tmp4 = this->frame_size;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(757)
		Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(757)
		::phoenix::Rectangle tmp6 = ::phoenix::Rectangle_obj::__new((int)0,(int)0,tmp3,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(757)
		::phoenix::Rectangle result = tmp6;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(759)
		::luxe::Sprite tmp7 = this->sprite;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(759)
		::phoenix::Texture tmp8 = tmp7->texture;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(759)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(759)
		if ((tmp9)){
			HX_STACK_LINE(760)
			::luxe::components::sprite::SpriteAnimationType tmp10 = this->type;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(760)
			::luxe::components::sprite::SpriteAnimationType _g = tmp10;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(760)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(764)
					::luxe::Sprite tmp11 = this->sprite;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(764)
					int tmp12 = tmp11->texture->width;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(764)
					::luxe::Sprite tmp13 = this->sprite;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(764)
					int tmp14 = tmp13->texture->width;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(764)
					::phoenix::Vector tmp15 = this->frame_size;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(764)
					Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(764)
					Float tmp17 = hx::Mod(tmp14,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(764)
					Float tmp18 = (tmp12 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(764)
					::phoenix::Vector tmp19 = this->frame_size;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(764)
					Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(764)
					Float tmp21 = (Float(tmp18) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(764)
					Float frames_per_row = tmp21;		HX_STACK_VAR(frames_per_row,"frames_per_row");
					HX_STACK_LINE(765)
					Float tmp22 = (Float(_frame) / Float(frames_per_row));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(765)
					int tmp23 = ::Math_obj::ceil(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(765)
					int image_row = tmp23;		HX_STACK_VAR(image_row,"image_row");
					HX_STACK_LINE(766)
					int tmp24 = (_frame - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(766)
					::phoenix::Vector tmp25 = this->frame_size;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(766)
					Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(766)
					Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(766)
					::luxe::Sprite tmp28 = this->sprite;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(766)
					int tmp29 = tmp28->texture->width;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(766)
					Float tmp30 = hx::Mod(tmp27,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(766)
					Float image_x = tmp30;		HX_STACK_VAR(image_x,"image_x");
					HX_STACK_LINE(767)
					int tmp31 = (image_row - (int)1);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(767)
					::phoenix::Vector tmp32 = this->frame_size;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(767)
					Float tmp33 = tmp32->y;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(767)
					Float tmp34 = (tmp31 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(767)
					Float image_y = tmp34;		HX_STACK_VAR(image_y,"image_y");
					HX_STACK_LINE(769)
					Float tmp35 = image_x;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(769)
					Float tmp36 = image_y;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(769)
					::phoenix::Vector tmp37 = this->frame_size;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(769)
					Float tmp38 = tmp37->x;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(769)
					::phoenix::Vector tmp39 = this->frame_size;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(769)
					Float tmp40 = tmp39->y;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(769)
					::phoenix::Rectangle tmp41 = ::phoenix::Rectangle_obj::__new(tmp35,tmp36,tmp38,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(769)
					result = tmp41;
				}
				;break;
				default: {
				}
			}
		}
		HX_STACK_LINE(779)
		::phoenix::Rectangle tmp10 = result;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(779)
		return tmp10;
	}
	else{
		HX_STACK_LINE(783)
		::phoenix::Rectangle tmp2 = _explicit_source;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(783)
		return tmp2;
	}
	HX_STACK_LINE(755)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SpriteAnimationData_obj,parse_source_for_frame,return )

cpp::ArrayBase SpriteAnimationData_obj::parse_frame_sources_set( cpp::ArrayBase _sources){
	HX_STACK_FRAME("luxe.components.sprite.SpriteAnimationData","parse_frame_sources_set",0xa2f3336f,"luxe.components.sprite.SpriteAnimationData.parse_frame_sources_set","luxe/components/sprite/SpriteAnimation.hx",789,0xffa525c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_sources,"_sources")
	HX_STACK_LINE(791)
	bool tmp = (_sources == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(791)
	if ((tmp)){
		HX_STACK_LINE(791)
		return cpp::ArrayBase_obj::__new();
	}
	HX_STACK_LINE(793)
	cpp::ArrayBase resulting_sources = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(resulting_sources,"resulting_sources");
	HX_STACK_LINE(794)
	{
		HX_STACK_LINE(794)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(794)
		while((true)){
			HX_STACK_LINE(794)
			bool tmp1 = (_g < _sources->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(794)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(794)
			if ((tmp2)){
				HX_STACK_LINE(794)
				break;
			}
			HX_STACK_LINE(794)
			Dynamic tmp3 = _sources->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(794)
			Dynamic _json_source = tmp3;		HX_STACK_VAR(_json_source,"_json_source");
			HX_STACK_LINE(794)
			++(_g);
			HX_STACK_LINE(796)
			Dynamic _json_size = _json_source->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );		HX_STACK_VAR(_json_size,"_json_size");
			HX_STACK_LINE(797)
			Dynamic _json_source_rect = _json_source->__Field(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"), hx::paccDynamic );		HX_STACK_VAR(_json_source_rect,"_json_source_rect");
			HX_STACK_LINE(798)
			Dynamic _json_pos = _json_source->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(_json_pos,"_json_pos");
			HX_STACK_LINE(800)
			Float _x = (int)0;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(801)
			Float _y = (int)0;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(802)
			Float _w = (int)0;		HX_STACK_VAR(_w,"_w");
			HX_STACK_LINE(803)
			Float _h = (int)0;		HX_STACK_VAR(_h,"_h");
			HX_STACK_LINE(805)
			Float _sx = (int)0;		HX_STACK_VAR(_sx,"_sx");
			HX_STACK_LINE(806)
			Float _sy = (int)0;		HX_STACK_VAR(_sy,"_sy");
			HX_STACK_LINE(807)
			Float _px = (int)0;		HX_STACK_VAR(_px,"_px");
			HX_STACK_LINE(808)
			Float _py = (int)0;		HX_STACK_VAR(_py,"_py");
			HX_STACK_LINE(810)
			bool tmp4 = (_json_source_rect != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(810)
			if ((tmp4)){
				HX_STACK_LINE(811)
				Float tmp5 = ::Std_obj::parseFloat(_json_source_rect->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(811)
				_x = tmp5;
				HX_STACK_LINE(812)
				Float tmp6 = ::Std_obj::parseFloat(_json_source_rect->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(812)
				_y = tmp6;
				HX_STACK_LINE(813)
				Float tmp7 = ::Std_obj::parseFloat(_json_source_rect->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(813)
				_w = tmp7;
				HX_STACK_LINE(814)
				Float tmp8 = ::Std_obj::parseFloat(_json_source_rect->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(814)
				_h = tmp8;
			}
			HX_STACK_LINE(817)
			bool tmp5 = (_json_size != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(817)
			if ((tmp5)){
				HX_STACK_LINE(818)
				Float tmp6 = ::Std_obj::parseFloat(_json_size->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(818)
				_sx = tmp6;
				HX_STACK_LINE(819)
				Float tmp7 = ::Std_obj::parseFloat(_json_size->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(819)
				_sy = tmp7;
			}
			HX_STACK_LINE(822)
			bool tmp6 = (_json_pos != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(822)
			if ((tmp6)){
				HX_STACK_LINE(823)
				Float tmp7 = ::Std_obj::parseFloat(_json_pos->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(823)
				_px = tmp7;
				HX_STACK_LINE(824)
				Float tmp8 = ::Std_obj::parseFloat(_json_pos->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(824)
				_py = tmp8;
			}
			HX_STACK_LINE(828)
			Dynamic tmp7 = ::Std_obj::parseInt(_json_source->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(829)
			::phoenix::Rectangle tmp8 = ::phoenix::Rectangle_obj::__new(_x,_y,_w,_h);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(830)
			::phoenix::Vector tmp9 = ::phoenix::Vector_obj::__new(_sx,_sy,null(),null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(831)
			::phoenix::Vector tmp10 = ::phoenix::Vector_obj::__new(_px,_py,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			struct _Function_3_1{
				inline static Dynamic Block( ::phoenix::Vector &tmp9,::phoenix::Vector &tmp10,Dynamic &tmp7,::phoenix::Rectangle &tmp8){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/components/sprite/SpriteAnimation.hx",827,0xffa525c9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06") , tmp7,false);
						__result->Add(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32") , tmp8,false);
						__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp9,false);
						__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp10,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(827)
			Dynamic tmp11 = _Function_3_1::Block(tmp9,tmp10,tmp7,tmp8);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(827)
			Dynamic _source = tmp11;		HX_STACK_VAR(_source,"_source");
			HX_STACK_LINE(834)
			Dynamic tmp12 = _source;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(834)
			resulting_sources->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp12);
		}
	}
	HX_STACK_LINE(838)
	return resulting_sources;
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimationData_obj,parse_frame_sources_set,return )

cpp::ArrayBase SpriteAnimationData_obj::parse_event_set( cpp::ArrayBase _events){
	HX_STACK_FRAME("luxe.components.sprite.SpriteAnimationData","parse_event_set",0xe0eb79a3,"luxe.components.sprite.SpriteAnimationData.parse_event_set","luxe/components/sprite/SpriteAnimation.hx",842,0xffa525c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_events,"_events")
	HX_STACK_LINE(844)
	bool tmp = (_events == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(844)
	if ((tmp)){
		HX_STACK_LINE(844)
		return cpp::ArrayBase_obj::__new();
	}
	HX_STACK_LINE(846)
	cpp::ArrayBase resulting_events = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(resulting_events,"resulting_events");
	HX_STACK_LINE(847)
	{
		HX_STACK_LINE(847)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(847)
		while((true)){
			HX_STACK_LINE(847)
			bool tmp1 = (_g < _events->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(847)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(847)
			if ((tmp2)){
				HX_STACK_LINE(847)
				break;
			}
			HX_STACK_LINE(847)
			Dynamic tmp3 = _events->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(847)
			Dynamic _json_event = tmp3;		HX_STACK_VAR(_json_event,"_json_event");
			HX_STACK_LINE(847)
			++(_g);
			HX_STACK_LINE(849)
			bool tmp4 = (_json_event->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(849)
			if ((tmp4)){
				HX_STACK_LINE(852)
				Dynamic tmp5 = ::Std_obj::parseInt(_json_event->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(853)
				bool tmp6 = (_json_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(853)
				::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(853)
				if ((tmp6)){
					HX_STACK_LINE(853)
					tmp7 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				else{
					HX_STACK_LINE(853)
					tmp7 = _json_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );
				}
				struct _Function_4_1{
					inline static Dynamic Block( Dynamic &tmp5,::String &tmp7){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/components/sprite/SpriteAnimation.hx",851,0xffa525c9)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06") , tmp5,false);
							__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , tmp7,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(851)
				Dynamic tmp8 = _Function_4_1::Block(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(851)
				Dynamic _event = tmp8;		HX_STACK_VAR(_event,"_event");
				HX_STACK_LINE(856)
				Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(856)
				resulting_events->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
			}
		}
	}
	HX_STACK_LINE(861)
	return resulting_events;
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimationData_obj,parse_event_set,return )

Void SpriteAnimationData_obj::parse_frameset_range( Array< int > _frameset,::EReg regex,::String _frame){
{
		HX_STACK_FRAME("luxe.components.sprite.SpriteAnimationData","parse_frameset_range",0x6df8eaad,"luxe.components.sprite.SpriteAnimationData.parse_frameset_range","luxe/components/sprite/SpriteAnimation.hx",865,0xffa525c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_frameset,"_frameset")
		HX_STACK_ARG(regex,"regex")
		HX_STACK_ARG(_frame,"_frame")
		HX_STACK_LINE(867)
		::String tmp = regex->matched((int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(867)
		Dynamic tmp1 = ::Std_obj::parseInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(867)
		int _start = tmp1;		HX_STACK_VAR(_start,"_start");
		HX_STACK_LINE(868)
		::String tmp2 = regex->matched((int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(868)
		Dynamic tmp3 = ::Std_obj::parseInt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(868)
		int _end = tmp3;		HX_STACK_VAR(_end,"_end");
		HX_STACK_LINE(869)
		int tmp4 = (_start - _end);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(869)
		Float tmp5 = ::Math_obj::abs(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(869)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(869)
		int _count = tmp6;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(872)
		bool tmp7 = (_count == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(872)
		if ((tmp7)){
			HX_STACK_LINE(873)
			int tmp8 = _start;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(873)
			_frameset->push(tmp8);
		}
		else{
			HX_STACK_LINE(877)
			bool tmp8 = (_start > _end);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(877)
			if ((tmp8)){
				HX_STACK_LINE(878)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(878)
				int tmp9 = (_count + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(878)
				int _g = tmp9;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(878)
				while((true)){
					HX_STACK_LINE(878)
					bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(878)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(878)
					if ((tmp11)){
						HX_STACK_LINE(878)
						break;
					}
					HX_STACK_LINE(878)
					int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(878)
					int _i = tmp12;		HX_STACK_VAR(_i,"_i");
					HX_STACK_LINE(879)
					int tmp13 = (_start - _i);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(879)
					_frameset->push(tmp13);
				}
			}
			else{
				HX_STACK_LINE(882)
				int _g1 = _start;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(882)
				int tmp9 = (_end + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(882)
				int _g = tmp9;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(882)
				while((true)){
					HX_STACK_LINE(882)
					bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(882)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(882)
					if ((tmp11)){
						HX_STACK_LINE(882)
						break;
					}
					HX_STACK_LINE(882)
					int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(882)
					int i = tmp12;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(883)
					int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(883)
					_frameset->push(tmp13);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SpriteAnimationData_obj,parse_frameset_range,(void))

Void SpriteAnimationData_obj::parse_frameset_hold( Array< int > _frameset,::EReg regex,::String _frame){
{
		HX_STACK_FRAME("luxe.components.sprite.SpriteAnimationData","parse_frameset_hold",0x068d724f,"luxe.components.sprite.SpriteAnimationData.parse_frameset_hold","luxe/components/sprite/SpriteAnimation.hx",891,0xffa525c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_frameset,"_frameset")
		HX_STACK_ARG(regex,"regex")
		HX_STACK_ARG(_frame,"_frame")
		HX_STACK_LINE(893)
		::String tmp = regex->matched((int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(893)
		Dynamic tmp1 = ::Std_obj::parseInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(893)
		int _frame_index = tmp1;		HX_STACK_VAR(_frame_index,"_frame_index");
		HX_STACK_LINE(894)
		::String tmp2 = regex->matched((int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(894)
		Dynamic tmp3 = ::Std_obj::parseInt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(894)
		int _amount = tmp3;		HX_STACK_VAR(_amount,"_amount");
		HX_STACK_LINE(896)
		{
			HX_STACK_LINE(896)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(896)
			while((true)){
				HX_STACK_LINE(896)
				bool tmp4 = (_g < _amount);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(896)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(896)
				if ((tmp5)){
					HX_STACK_LINE(896)
					break;
				}
				HX_STACK_LINE(896)
				int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(896)
				int _i = tmp6;		HX_STACK_VAR(_i,"_i");
				HX_STACK_LINE(897)
				int tmp7 = _frame_index;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(897)
				_frameset->push(tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SpriteAnimationData_obj,parse_frameset_hold,(void))

Void SpriteAnimationData_obj::parse_frameset_prev_hold( Array< int > _frameset,::EReg regex,::String _frame){
{
		HX_STACK_FRAME("luxe.components.sprite.SpriteAnimationData","parse_frameset_prev_hold",0xaa43923b,"luxe.components.sprite.SpriteAnimationData.parse_frameset_prev_hold","luxe/components/sprite/SpriteAnimation.hx",902,0xffa525c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_frameset,"_frameset")
		HX_STACK_ARG(regex,"regex")
		HX_STACK_ARG(_frame,"_frame")
		HX_STACK_LINE(904)
		{
			HX_STACK_LINE(904)
			bool tmp = (_frameset->length > (int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(904)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(904)
			if ((tmp1)){
				HX_STACK_LINE(214)
				::String tmp2 = HX_HCSTRING(" ( Animation frames given a hold with no prior frame, if you want to do that you can use `1 hold 10` where 1 is the frame index, 10 is the amount.","\x71","\xc1","\xc3","\x9d");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(214)
				::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(904)
				::String tmp4 = (HX_HCSTRING("_frameset.length > 0","\xce","\x88","\x9d","\x53") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(904)
				::luxe::DebugError tmp5 = ::luxe::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(904)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(906)
		int tmp = (_frameset->length - (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(906)
		int tmp1 = _frameset->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(906)
		int _frame1 = tmp1;		HX_STACK_VAR(_frame1,"_frame1");
		HX_STACK_LINE(907)
		::String tmp2 = regex->matched((int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(907)
		Dynamic tmp3 = ::Std_obj::parseInt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(907)
		int _amount = tmp3;		HX_STACK_VAR(_amount,"_amount");
		HX_STACK_LINE(909)
		{
			HX_STACK_LINE(909)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(909)
			while((true)){
				HX_STACK_LINE(909)
				bool tmp4 = (_g < _amount);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(909)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(909)
				if ((tmp5)){
					HX_STACK_LINE(909)
					break;
				}
				HX_STACK_LINE(909)
				int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(909)
				int _i = tmp6;		HX_STACK_VAR(_i,"_i");
				HX_STACK_LINE(910)
				int tmp7 = _frame1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(910)
				_frameset->push(tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SpriteAnimationData_obj,parse_frameset_prev_hold,(void))

Void SpriteAnimationData_obj::parse_frameset_frame( Array< int > _frameset,::EReg regex,::String _frame){
{
		HX_STACK_FRAME("luxe.components.sprite.SpriteAnimationData","parse_frameset_frame",0x905cbd1d,"luxe.components.sprite.SpriteAnimationData.parse_frameset_frame","luxe/components/sprite/SpriteAnimation.hx",915,0xffa525c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_frameset,"_frameset")
		HX_STACK_ARG(regex,"regex")
		HX_STACK_ARG(_frame,"_frame")
		HX_STACK_LINE(917)
		::String tmp = regex->matched((int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(917)
		Dynamic tmp1 = ::Std_obj::parseInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(917)
		int _frame1 = tmp1;		HX_STACK_VAR(_frame1,"_frame1");
		HX_STACK_LINE(919)
		int tmp2 = _frame1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(919)
		_frameset->push(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SpriteAnimationData_obj,parse_frameset_frame,(void))

Array< int > SpriteAnimationData_obj::parse_frameset( Array< ::String > _json_frameset){
	HX_STACK_FRAME("luxe.components.sprite.SpriteAnimationData","parse_frameset",0x8683806f,"luxe.components.sprite.SpriteAnimationData.parse_frameset","luxe/components/sprite/SpriteAnimation.hx",923,0xffa525c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_json_frameset,"_json_frameset")
	HX_STACK_LINE(925)
	Array< int > _final_frameset = Array_obj< int >::__new();		HX_STACK_VAR(_final_frameset,"_final_frameset");
	HX_STACK_LINE(926)
	{
		HX_STACK_LINE(926)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(926)
		while((true)){
			HX_STACK_LINE(926)
			bool tmp = (_g < _json_frameset->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(926)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(926)
			if ((tmp1)){
				HX_STACK_LINE(926)
				break;
			}
			HX_STACK_LINE(926)
			::String tmp2 = _json_frameset->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(926)
			::String _frame = tmp2;		HX_STACK_VAR(_frame,"_frame");
			HX_STACK_LINE(926)
			++(_g);
			HX_STACK_LINE(929)
			::EReg tmp3 = ::luxe::components::sprite::SpriteAnimationData_obj::frame_range_regex;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(929)
			::String tmp4 = _frame;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(929)
			bool tmp5 = tmp3->match(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(929)
			if ((tmp5)){
				HX_STACK_LINE(930)
				::EReg tmp6 = ::luxe::components::sprite::SpriteAnimationData_obj::frame_range_regex;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(930)
				::String tmp7 = _frame;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(930)
				this->parse_frameset_range(_final_frameset,tmp6,tmp7);
			}
			else{
				HX_STACK_LINE(934)
				::EReg tmp6 = ::luxe::components::sprite::SpriteAnimationData_obj::frame_hold_regex;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(934)
				::String tmp7 = _frame;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(934)
				bool tmp8 = tmp6->match(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(934)
				if ((tmp8)){
					HX_STACK_LINE(935)
					::EReg tmp9 = ::luxe::components::sprite::SpriteAnimationData_obj::frame_hold_regex;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(935)
					::String tmp10 = _frame;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(935)
					this->parse_frameset_hold(_final_frameset,tmp9,tmp10);
				}
				else{
					HX_STACK_LINE(939)
					::EReg tmp9 = ::luxe::components::sprite::SpriteAnimationData_obj::frame_hold_prev_regex;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(939)
					::String tmp10 = _frame;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(939)
					bool tmp11 = tmp9->match(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(939)
					if ((tmp11)){
						HX_STACK_LINE(940)
						::EReg tmp12 = ::luxe::components::sprite::SpriteAnimationData_obj::frame_hold_prev_regex;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(940)
						::String tmp13 = _frame;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(940)
						this->parse_frameset_prev_hold(_final_frameset,tmp12,tmp13);
					}
					else{
						HX_STACK_LINE(944)
						::EReg tmp12 = ::luxe::components::sprite::SpriteAnimationData_obj::frame_regex;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(944)
						::String tmp13 = _frame;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(944)
						bool tmp14 = tmp12->match(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(944)
						if ((tmp14)){
							HX_STACK_LINE(945)
							::EReg tmp15 = ::luxe::components::sprite::SpriteAnimationData_obj::frame_regex;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(945)
							::String tmp16 = _frame;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(945)
							this->parse_frameset_frame(_final_frameset,tmp15,tmp16);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(950)
	return _final_frameset;
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimationData_obj,parse_frameset,return )

::EReg SpriteAnimationData_obj::frame_range_regex;

::EReg SpriteAnimationData_obj::frame_hold_regex;

::EReg SpriteAnimationData_obj::frame_hold_prev_regex;

::EReg SpriteAnimationData_obj::frame_regex;


SpriteAnimationData_obj::SpriteAnimationData_obj()
{
}

void SpriteAnimationData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpriteAnimationData);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(filter_type,"filter_type");
	HX_MARK_MEMBER_NAME(frameset,"frameset");
	HX_MARK_MEMBER_NAME(image_set_list,"image_set_list");
	HX_MARK_MEMBER_NAME(image_set,"image_set");
	HX_MARK_MEMBER_NAME(frame_size,"frame_size");
	HX_MARK_MEMBER_NAME(frame_sources,"frame_sources");
	HX_MARK_MEMBER_NAME(frame_time,"frame_time");
	HX_MARK_MEMBER_NAME(loop,"loop");
	HX_MARK_MEMBER_NAME(pingpong,"pingpong");
	HX_MARK_MEMBER_NAME(reverse,"reverse");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(frame_count,"frame_count");
	HX_MARK_END_CLASS();
}

void SpriteAnimationData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(filter_type,"filter_type");
	HX_VISIT_MEMBER_NAME(frameset,"frameset");
	HX_VISIT_MEMBER_NAME(image_set_list,"image_set_list");
	HX_VISIT_MEMBER_NAME(image_set,"image_set");
	HX_VISIT_MEMBER_NAME(frame_size,"frame_size");
	HX_VISIT_MEMBER_NAME(frame_sources,"frame_sources");
	HX_VISIT_MEMBER_NAME(frame_time,"frame_time");
	HX_VISIT_MEMBER_NAME(loop,"loop");
	HX_VISIT_MEMBER_NAME(pingpong,"pingpong");
	HX_VISIT_MEMBER_NAME(reverse,"reverse");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(frame_count,"frame_count");
}

Dynamic SpriteAnimationData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"frameset") ) { return frameset; }
		if (HX_FIELD_EQ(inName,"pingpong") ) { return pingpong; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"image_set") ) { return image_set; }
		if (HX_FIELD_EQ(inName,"from_json") ) { return from_json_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frame_size") ) { return frame_size; }
		if (HX_FIELD_EQ(inName,"frame_time") ) { return frame_time; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filter_type") ) { return filter_type; }
		if (HX_FIELD_EQ(inName,"frame_count") ) { return inCallProp == hx::paccAlways ? get_frame_count() : frame_count; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"frame_sources") ) { return frame_sources; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"image_set_list") ) { return image_set_list; }
		if (HX_FIELD_EQ(inName,"parse_frameset") ) { return parse_frameset_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_frame_count") ) { return get_frame_count_dyn(); }
		if (HX_FIELD_EQ(inName,"parse_event_set") ) { return parse_event_set_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"parse_frameset_hold") ) { return parse_frameset_hold_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"parse_frameset_range") ) { return parse_frameset_range_dyn(); }
		if (HX_FIELD_EQ(inName,"parse_frameset_frame") ) { return parse_frameset_frame_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"parse_event_for_frame") ) { return parse_event_for_frame_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"parse_source_for_frame") ) { return parse_source_for_frame_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"parse_frame_sources_set") ) { return parse_frame_sources_set_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"parse_frameset_prev_hold") ) { return parse_frameset_prev_hold_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"parse_source_pos_for_frame") ) { return parse_source_pos_for_frame_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"parse_source_size_for_frame") ) { return parse_source_size_for_frame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SpriteAnimationData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"frame_regex") ) { outValue = frame_regex; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"frame_hold_regex") ) { outValue = frame_hold_regex; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"frame_range_regex") ) { outValue = frame_range_regex; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"frame_hold_prev_regex") ) { outValue = frame_hold_prev_regex; return true;  }
	}
	return false;
}

Dynamic SpriteAnimationData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::luxe::components::sprite::SpriteAnimationType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loop") ) { loop=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { reverse=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"frameset") ) { frameset=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pingpong") ) { pingpong=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"image_set") ) { image_set=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frame_size") ) { frame_size=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame_time") ) { frame_time=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filter_type") ) { filter_type=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame_count") ) { frame_count=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"frame_sources") ) { frame_sources=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"image_set_list") ) { image_set_list=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SpriteAnimationData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"frame_regex") ) { frame_regex=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"frame_hold_regex") ) { frame_hold_regex=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"frame_range_regex") ) { frame_range_regex=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"frame_hold_prev_regex") ) { frame_hold_prev_regex=ioValue.Cast< ::EReg >(); return true; }
	}
	return false;
}

void SpriteAnimationData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("filter_type","\xe1","\xf3","\x9e","\x1c"));
	outFields->push(HX_HCSTRING("frameset","\x95","\xbd","\x0d","\x1d"));
	outFields->push(HX_HCSTRING("image_set_list","\xff","\xc5","\xd4","\xe9"));
	outFields->push(HX_HCSTRING("image_set","\x7e","\x49","\x7e","\x36"));
	outFields->push(HX_HCSTRING("frame_size","\x53","\x81","\x5d","\x4f"));
	outFields->push(HX_HCSTRING("frame_sources","\xe6","\x55","\x2c","\xf2"));
	outFields->push(HX_HCSTRING("frame_time","\x9f","\xac","\x06","\x50"));
	outFields->push(HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"));
	outFields->push(HX_HCSTRING("pingpong","\x6a","\x93","\x43","\xa8"));
	outFields->push(HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"));
	outFields->push(HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"));
	outFields->push(HX_HCSTRING("frame_count","\xfd","\xe3","\xfd","\xef"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(SpriteAnimationData_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::luxe::components::sprite::SpriteAnimationType*/ ,(int)offsetof(SpriteAnimationData_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SpriteAnimationData_obj,filter_type),HX_HCSTRING("filter_type","\xe1","\xf3","\x9e","\x1c")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(SpriteAnimationData_obj,frameset),HX_HCSTRING("frameset","\x95","\xbd","\x0d","\x1d")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(SpriteAnimationData_obj,image_set_list),HX_HCSTRING("image_set_list","\xff","\xc5","\xd4","\xe9")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SpriteAnimationData_obj,image_set),HX_HCSTRING("image_set","\x7e","\x49","\x7e","\x36")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(SpriteAnimationData_obj,frame_size),HX_HCSTRING("frame_size","\x53","\x81","\x5d","\x4f")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(SpriteAnimationData_obj,frame_sources),HX_HCSTRING("frame_sources","\xe6","\x55","\x2c","\xf2")},
	{hx::fsFloat,(int)offsetof(SpriteAnimationData_obj,frame_time),HX_HCSTRING("frame_time","\x9f","\xac","\x06","\x50")},
	{hx::fsBool,(int)offsetof(SpriteAnimationData_obj,loop),HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47")},
	{hx::fsBool,(int)offsetof(SpriteAnimationData_obj,pingpong),HX_HCSTRING("pingpong","\x6a","\x93","\x43","\xa8")},
	{hx::fsBool,(int)offsetof(SpriteAnimationData_obj,reverse),HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(SpriteAnimationData_obj,sprite),HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3")},
	{hx::fsInt,(int)offsetof(SpriteAnimationData_obj,frame_count),HX_HCSTRING("frame_count","\xfd","\xe3","\xfd","\xef")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::EReg*/ ,(void *) &SpriteAnimationData_obj::frame_range_regex,HX_HCSTRING("frame_range_regex","\x33","\xbd","\x9f","\x53")},
	{hx::fsObject /*::EReg*/ ,(void *) &SpriteAnimationData_obj::frame_hold_regex,HX_HCSTRING("frame_hold_regex","\x99","\xd2","\x2d","\xc6")},
	{hx::fsObject /*::EReg*/ ,(void *) &SpriteAnimationData_obj::frame_hold_prev_regex,HX_HCSTRING("frame_hold_prev_regex","\x29","\xb0","\x1b","\x43")},
	{hx::fsObject /*::EReg*/ ,(void *) &SpriteAnimationData_obj::frame_regex,HX_HCSTRING("frame_regex","\xf5","\xcd","\x59","\x8c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("filter_type","\xe1","\xf3","\x9e","\x1c"),
	HX_HCSTRING("frameset","\x95","\xbd","\x0d","\x1d"),
	HX_HCSTRING("image_set_list","\xff","\xc5","\xd4","\xe9"),
	HX_HCSTRING("image_set","\x7e","\x49","\x7e","\x36"),
	HX_HCSTRING("frame_size","\x53","\x81","\x5d","\x4f"),
	HX_HCSTRING("frame_sources","\xe6","\x55","\x2c","\xf2"),
	HX_HCSTRING("frame_time","\x9f","\xac","\x06","\x50"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	HX_HCSTRING("pingpong","\x6a","\x93","\x43","\xa8"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"),
	HX_HCSTRING("frame_count","\xfd","\xe3","\xfd","\xef"),
	HX_HCSTRING("get_frame_count","\x94","\x9b","\xdf","\xb0"),
	HX_HCSTRING("from_json","\x5d","\xd8","\xd4","\x1a"),
	HX_HCSTRING("parse_event_for_frame","\x46","\xc4","\xb8","\x07"),
	HX_HCSTRING("parse_source_size_for_frame","\xd1","\xd8","\x6a","\x4a"),
	HX_HCSTRING("parse_source_pos_for_frame","\xb4","\xa2","\xba","\x83"),
	HX_HCSTRING("parse_source_for_frame","\x5f","\xd4","\xea","\x88"),
	HX_HCSTRING("parse_frame_sources_set","\x3d","\x5f","\x71","\x1b"),
	HX_HCSTRING("parse_event_set","\x71","\x27","\x32","\xc1"),
	HX_HCSTRING("parse_frameset_range","\x1f","\x72","\xe3","\xea"),
	HX_HCSTRING("parse_frameset_hold","\x1d","\x1f","\xba","\x70"),
	HX_HCSTRING("parse_frameset_prev_hold","\xad","\xba","\x2b","\xa0"),
	HX_HCSTRING("parse_frameset_frame","\x8f","\x44","\x47","\x0d"),
	HX_HCSTRING("parse_frameset","\x61","\x06","\xf2","\x06"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpriteAnimationData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SpriteAnimationData_obj::frame_range_regex,"frame_range_regex");
	HX_MARK_MEMBER_NAME(SpriteAnimationData_obj::frame_hold_regex,"frame_hold_regex");
	HX_MARK_MEMBER_NAME(SpriteAnimationData_obj::frame_hold_prev_regex,"frame_hold_prev_regex");
	HX_MARK_MEMBER_NAME(SpriteAnimationData_obj::frame_regex,"frame_regex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpriteAnimationData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SpriteAnimationData_obj::frame_range_regex,"frame_range_regex");
	HX_VISIT_MEMBER_NAME(SpriteAnimationData_obj::frame_hold_regex,"frame_hold_regex");
	HX_VISIT_MEMBER_NAME(SpriteAnimationData_obj::frame_hold_prev_regex,"frame_hold_prev_regex");
	HX_VISIT_MEMBER_NAME(SpriteAnimationData_obj::frame_regex,"frame_regex");
};

#endif

hx::Class SpriteAnimationData_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("frame_range_regex","\x33","\xbd","\x9f","\x53"),
	HX_HCSTRING("frame_hold_regex","\x99","\xd2","\x2d","\xc6"),
	HX_HCSTRING("frame_hold_prev_regex","\x29","\xb0","\x1b","\x43"),
	HX_HCSTRING("frame_regex","\xf5","\xcd","\x59","\x8c"),
	::String(null()) };

void SpriteAnimationData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.components.sprite.SpriteAnimationData","\xa0","\xae","\xf2","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SpriteAnimationData_obj::__GetStatic;
	__mClass->mSetStaticField = &SpriteAnimationData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SpriteAnimationData_obj >;
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

void SpriteAnimationData_obj::__boot()
{
	frame_range_regex= ::EReg_obj::__new(HX_HCSTRING("(\\d*)(\\b\\s*?-\\s*?\\b)(\\d*)","\x5a","\x2e","\x4d","\xab"),HX_HCSTRING("gi","\x22","\x5a","\x00","\x00"));
	frame_hold_regex= ::EReg_obj::__new(HX_HCSTRING("(\\d*)(\\shold\\s)(\\d*)","\x6c","\x49","\x37","\xf7"),HX_HCSTRING("gi","\x22","\x5a","\x00","\x00"));
	frame_hold_prev_regex= ::EReg_obj::__new(HX_HCSTRING("(\\bhold\\s)(\\d*)","\x6a","\x9a","\x41","\xf3"),HX_HCSTRING("gi","\x22","\x5a","\x00","\x00"));
	frame_regex= ::EReg_obj::__new(HX_HCSTRING("(\\d*)","\x6f","\xdb","\x22","\x45"),HX_HCSTRING("gi","\x22","\x5a","\x00","\x00"));
}

} // end namespace luxe
} // end namespace components
} // end namespace sprite
