#include <hxcpp.h>

#ifndef INCLUDED_Creature
#include <Creature.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Simulation
#include <Simulation.h>
#endif
#ifndef INCLUDED_World
#include <World.h>
#endif
#ifndef INCLUDED_luxe_Camera
#include <luxe/Camera.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
#ifndef INCLUDED_luxe_Input
#include <luxe/Input.h>
#endif
#ifndef INCLUDED_luxe_KeyEvent
#include <luxe/KeyEvent.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Parcel
#include <luxe/Parcel.h>
#endif
#ifndef INCLUDED_luxe_ParcelProgress
#include <luxe/ParcelProgress.h>
#endif
#ifndef INCLUDED_luxe_Physics
#include <luxe/Physics.h>
#endif
#ifndef INCLUDED_luxe_PhysicsEngine
#include <luxe/PhysicsEngine.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_systems_input_Keycodes
#include <snow/systems/input/Keycodes.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",11,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->loaded = false;
	HX_STACK_LINE(11)
	super::__construct();
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::config( Dynamic config){
	HX_STACK_FRAME("Main","config",0xf87c7637,"Main.config","Main.hx",20,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(21)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("title","\x98","\x15","\x3b","\x10")) = HX_HCSTRING("Red Snow","\xf2","\x9b","\xd3","\x59");
	HX_STACK_LINE(22)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = (int)960;
	HX_STACK_LINE(23)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = (int)640;
	HX_STACK_LINE(24)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9")) = false;
	HX_STACK_LINE(26)
	Dynamic tmp = config;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	return tmp;
}


Void Main_obj::ready( ){
{
		HX_STACK_FRAME("Main","ready",0x62ede68e,"Main.ready","Main.hx",30,0x087e5c05)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",32,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/tiled/GameplayTesting.tmx","\xb6","\xb5","\x33","\x9a"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(32)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",34,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/entities/Creatures.json","\xa4","\x91","\x50","\xf6"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(34)
		Dynamic tmp1 = _Function_1_2::Block();		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",35,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/animations/Entity_Enemy.json","\xd6","\xb0","\x7a","\xa1"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(35)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",36,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/animations/Entity_Player.json","\x8d","\xfe","\x0d","\x74"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(36)
		Dynamic tmp3 = _Function_1_4::Block();		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",39,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/textures/Tileset_Editor.png","\xfe","\x0e","\x8a","\x35"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(39)
		Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_6{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",40,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/textures/Tileset_Editor_Building.png","\x8b","\x86","\xe2","\x01"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(40)
		Dynamic tmp5 = _Function_1_6::Block();		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",41,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/textures/Tileset_SnowDirt.png","\xfb","\x93","\x03","\x15"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(41)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",42,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/textures/Tileset_LogBuilding.png","\xfd","\xea","\xa1","\x25"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(42)
		Dynamic tmp7 = _Function_1_8::Block();		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_1_9{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",43,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/textures/Entity_Player.png","\x6d","\x11","\xd8","\x6d"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(43)
		Dynamic tmp8 = _Function_1_9::Block();		HX_STACK_VAR(tmp8,"tmp8");
		struct _Function_1_10{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",44,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/textures/Entity_Enemy.png","\x52","\x84","\x81","\x4b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(44)
		Dynamic tmp9 = _Function_1_10::Block();		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_11{
			inline static Dynamic Block( Dynamic &tmp5,Dynamic &tmp6,Dynamic &tmp9,Dynamic &tmp,Dynamic &tmp4,Dynamic &tmp2,Dynamic &tmp3,Dynamic &tmp1,Dynamic &tmp7,Dynamic &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",31,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d") , cpp::ArrayBase_obj::__new().Add(tmp),false);
					__result->Add(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54") , cpp::ArrayBase_obj::__new().Add(tmp1).Add(tmp2).Add(tmp3),false);
					__result->Add(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65") , cpp::ArrayBase_obj::__new().Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7).Add(tmp8).Add(tmp9),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(31)
		Dynamic tmp10 = _Function_1_11::Block(tmp5,tmp6,tmp9,tmp,tmp4,tmp2,tmp3,tmp1,tmp7,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(31)
		::luxe::Parcel tmp11 = ::luxe::Parcel_obj::__new(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(31)
		::luxe::Parcel parcel = tmp11;		HX_STACK_VAR(parcel,"parcel");
		HX_STACK_LINE(49)
		::luxe::Parcel tmp12 = parcel;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(50)
		::phoenix::Color tmp13 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,((Float)0.85));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(51)
		Dynamic tmp14 = this->onassetsloaded_dyn();		HX_STACK_VAR(tmp14,"tmp14");
		struct _Function_1_12{
			inline static Dynamic Block( ::phoenix::Color &tmp13,::luxe::Parcel &tmp12,Dynamic &tmp14){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",48,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("parcel","\xc9","\x78","\x7c","\xed") , tmp12,false);
					__result->Add(HX_HCSTRING("background","\xee","\x93","\x1d","\x26") , tmp13,false);
					__result->Add(HX_HCSTRING("oncomplete","\xd8","\x18","\xcd","\x83") , tmp14,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(48)
		Dynamic tmp15 = _Function_1_12::Block(tmp13,tmp12,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(48)
		::luxe::ParcelProgress_obj::__new(tmp15);
		HX_STACK_LINE(54)
		parcel->load(null());
	}
return null();
}


Void Main_obj::onkeyup( ::luxe::KeyEvent e){
{
		HX_STACK_FRAME("Main","onkeyup",0x46406b26,"Main.onkeyup","Main.hx",58,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(59)
		bool tmp = (e->keycode == (int)27);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		if ((tmp)){
			HX_STACK_LINE(61)
			::luxe::Engine tmp1 = ::Luxe_obj::core;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(61)
			tmp1->shutdown();
		}
	}
return null();
}


Void Main_obj::update( Float dt){
{
		HX_STACK_FRAME("Main","update",0xb7afa57e,"Main.update","Main.hx",66,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(67)
		bool tmp = this->loaded;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		if ((tmp1)){
			HX_STACK_LINE(67)
			return null();
		}
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			::luxe::Camera tmp2 = ::Luxe_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(69)
			::phoenix::Vector tmp3 = tmp2->get_center();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(69)
			::phoenix::Vector _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(69)
			::Creature tmp4 = ::Main_obj::player;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(69)
			::phoenix::Vector tmp5 = tmp4->get_pos();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(69)
			::phoenix::Vector _other = tmp5;		HX_STACK_VAR(_other,"_other");
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(69)
				Float _x = _other->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(69)
				Float _y = _other->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(69)
				Float _z = _other->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(69)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(69)
				_this->ignore_listeners = true;
				HX_STACK_LINE(69)
				{
					HX_STACK_LINE(69)
					_this->x = _x;
					HX_STACK_LINE(69)
					bool tmp6 = _this->_construct;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(69)
					if ((tmp6)){
						HX_STACK_LINE(69)
						_this->x;
					}
					else{
						HX_STACK_LINE(69)
						bool tmp7 = (_this->listen_x != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(69)
						bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(69)
						if ((tmp7)){
							HX_STACK_LINE(69)
							bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(69)
							bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(69)
							tmp8 = !(tmp10);
						}
						else{
							HX_STACK_LINE(69)
							tmp8 = false;
						}
						HX_STACK_LINE(69)
						if ((tmp8)){
							HX_STACK_LINE(69)
							Float tmp9 = _x;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(69)
							_this->listen_x(tmp9);
						}
						HX_STACK_LINE(69)
						_this->x;
					}
				}
				HX_STACK_LINE(69)
				{
					HX_STACK_LINE(69)
					_this->y = _y;
					HX_STACK_LINE(69)
					bool tmp6 = _this->_construct;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(69)
					if ((tmp6)){
						HX_STACK_LINE(69)
						_this->y;
					}
					else{
						HX_STACK_LINE(69)
						bool tmp7 = (_this->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(69)
						bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(69)
						if ((tmp7)){
							HX_STACK_LINE(69)
							bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(69)
							bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(69)
							tmp8 = !(tmp10);
						}
						else{
							HX_STACK_LINE(69)
							tmp8 = false;
						}
						HX_STACK_LINE(69)
						if ((tmp8)){
							HX_STACK_LINE(69)
							Float tmp9 = _y;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(69)
							_this->listen_y(tmp9);
						}
						HX_STACK_LINE(69)
						_this->y;
					}
				}
				HX_STACK_LINE(69)
				{
					HX_STACK_LINE(69)
					_this->z = _z;
					HX_STACK_LINE(69)
					bool tmp6 = _this->_construct;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(69)
					if ((tmp6)){
						HX_STACK_LINE(69)
						_this->z;
					}
					else{
						HX_STACK_LINE(69)
						bool tmp7 = (_this->listen_z != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(69)
						bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(69)
						if ((tmp7)){
							HX_STACK_LINE(69)
							bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(69)
							bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(69)
							tmp8 = !(tmp10);
						}
						else{
							HX_STACK_LINE(69)
							tmp8 = false;
						}
						HX_STACK_LINE(69)
						if ((tmp8)){
							HX_STACK_LINE(69)
							Float tmp9 = _z;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(69)
							_this->listen_z(tmp9);
						}
						HX_STACK_LINE(69)
						_this->z;
					}
				}
				HX_STACK_LINE(69)
				_this->w = _other->w;
				HX_STACK_LINE(69)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(69)
				bool tmp6 = (_this->listen_x != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(69)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(69)
				if ((tmp6)){
					HX_STACK_LINE(69)
					bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(69)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(69)
					tmp7 = !(tmp9);
				}
				else{
					HX_STACK_LINE(69)
					tmp7 = false;
				}
				HX_STACK_LINE(69)
				if ((tmp7)){
					HX_STACK_LINE(69)
					Float tmp8 = _this->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(69)
					_this->listen_x(tmp8);
				}
				HX_STACK_LINE(69)
				bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(69)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(69)
				if ((tmp8)){
					HX_STACK_LINE(69)
					bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(69)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(69)
					tmp9 = !(tmp11);
				}
				else{
					HX_STACK_LINE(69)
					tmp9 = false;
				}
				HX_STACK_LINE(69)
				if ((tmp9)){
					HX_STACK_LINE(69)
					Float tmp10 = _this->y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(69)
					_this->listen_y(tmp10);
				}
				HX_STACK_LINE(69)
				bool tmp10 = (_this->listen_z != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(69)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(69)
				if ((tmp10)){
					HX_STACK_LINE(69)
					bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(69)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(69)
					tmp11 = !(tmp13);
				}
				else{
					HX_STACK_LINE(69)
					tmp11 = false;
				}
				HX_STACK_LINE(69)
				if ((tmp11)){
					HX_STACK_LINE(69)
					Float tmp12 = _this->z;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(69)
					_this->listen_z(tmp12);
				}
				HX_STACK_LINE(69)
				_this;
			}
			HX_STACK_LINE(69)
			_this;
		}
	}
return null();
}


Void Main_obj::onassetsloaded( ::luxe::Parcel _){
{
		HX_STACK_FRAME("Main","onassetsloaded",0x4a2784dc,"Main.onassetsloaded","Main.hx",73,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(74)
		this->loaded = true;
		HX_STACK_LINE(76)
		::luxe::Physics tmp = ::Luxe_obj::physics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		::Simulation tmp1 = tmp->add_engine(hx::ClassOf< ::Simulation >(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		::Main_obj::sim = tmp1;
		HX_STACK_LINE(77)
		::Simulation tmp2 = ::Main_obj::sim;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		tmp2->set_draw(true);
		HX_STACK_LINE(79)
		::Creature_obj::load_creature_types();
		HX_STACK_LINE(81)
		::World tmp3 = ::World_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(81)
		::Main_obj::world = tmp3;
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			::luxe::Camera tmp4 = ::Luxe_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(83)
			::phoenix::Vector tmp5 = tmp4->get_scale();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(83)
			::phoenix::Vector _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(83)
			{
				HX_STACK_LINE(83)
				Float tmp6 = (_this->x + ((Float)-0.5));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(83)
				Float _x = tmp6;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(83)
				Float tmp7 = (_this->y + ((Float)-0.5));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(83)
				Float _y = tmp7;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(83)
				Float tmp8 = (_this->z + ((Float)-0.5));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(83)
				Float _z = tmp8;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(83)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(83)
				_this->ignore_listeners = true;
				HX_STACK_LINE(83)
				{
					HX_STACK_LINE(83)
					_this->x = _x;
					HX_STACK_LINE(83)
					bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(83)
					if ((tmp9)){
						HX_STACK_LINE(83)
						_this->x;
					}
					else{
						HX_STACK_LINE(83)
						bool tmp10 = (_this->listen_x != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(83)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(83)
						if ((tmp10)){
							HX_STACK_LINE(83)
							bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(83)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(83)
							tmp11 = !(tmp13);
						}
						else{
							HX_STACK_LINE(83)
							tmp11 = false;
						}
						HX_STACK_LINE(83)
						if ((tmp11)){
							HX_STACK_LINE(83)
							Float tmp12 = _x;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(83)
							_this->listen_x(tmp12);
						}
						HX_STACK_LINE(83)
						_this->x;
					}
				}
				HX_STACK_LINE(83)
				{
					HX_STACK_LINE(83)
					_this->y = _y;
					HX_STACK_LINE(83)
					bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(83)
					if ((tmp9)){
						HX_STACK_LINE(83)
						_this->y;
					}
					else{
						HX_STACK_LINE(83)
						bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(83)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(83)
						if ((tmp10)){
							HX_STACK_LINE(83)
							bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(83)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(83)
							tmp11 = !(tmp13);
						}
						else{
							HX_STACK_LINE(83)
							tmp11 = false;
						}
						HX_STACK_LINE(83)
						if ((tmp11)){
							HX_STACK_LINE(83)
							Float tmp12 = _y;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(83)
							_this->listen_y(tmp12);
						}
						HX_STACK_LINE(83)
						_this->y;
					}
				}
				HX_STACK_LINE(83)
				{
					HX_STACK_LINE(83)
					_this->z = _z;
					HX_STACK_LINE(83)
					bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(83)
					if ((tmp9)){
						HX_STACK_LINE(83)
						_this->z;
					}
					else{
						HX_STACK_LINE(83)
						bool tmp10 = (_this->listen_z != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(83)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(83)
						if ((tmp10)){
							HX_STACK_LINE(83)
							bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(83)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(83)
							tmp11 = !(tmp13);
						}
						else{
							HX_STACK_LINE(83)
							tmp11 = false;
						}
						HX_STACK_LINE(83)
						if ((tmp11)){
							HX_STACK_LINE(83)
							Float tmp12 = _z;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(83)
							_this->listen_z(tmp12);
						}
						HX_STACK_LINE(83)
						_this->z;
					}
				}
				HX_STACK_LINE(83)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(83)
				bool tmp9 = (_this->listen_x != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(83)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(83)
				if ((tmp9)){
					HX_STACK_LINE(83)
					bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(83)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(83)
					tmp10 = !(tmp12);
				}
				else{
					HX_STACK_LINE(83)
					tmp10 = false;
				}
				HX_STACK_LINE(83)
				if ((tmp10)){
					HX_STACK_LINE(83)
					Float tmp11 = _this->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(83)
					_this->listen_x(tmp11);
				}
				HX_STACK_LINE(83)
				bool tmp11 = (_this->listen_y != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(83)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(83)
				if ((tmp11)){
					HX_STACK_LINE(83)
					bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(83)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(83)
					tmp12 = !(tmp14);
				}
				else{
					HX_STACK_LINE(83)
					tmp12 = false;
				}
				HX_STACK_LINE(83)
				if ((tmp12)){
					HX_STACK_LINE(83)
					Float tmp13 = _this->y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(83)
					_this->listen_y(tmp13);
				}
				HX_STACK_LINE(83)
				bool tmp13 = (_this->listen_z != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(83)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(83)
				if ((tmp13)){
					HX_STACK_LINE(83)
					bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(83)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(83)
					tmp14 = !(tmp16);
				}
				else{
					HX_STACK_LINE(83)
					tmp14 = false;
				}
				HX_STACK_LINE(83)
				if ((tmp14)){
					HX_STACK_LINE(83)
					Float tmp15 = _this->z;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(83)
					_this->listen_z(tmp15);
				}
				HX_STACK_LINE(83)
				_this;
			}
			HX_STACK_LINE(83)
			_this;
		}
		HX_STACK_LINE(85)
		::luxe::Input tmp4 = ::Luxe_obj::input;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(85)
		tmp4->bind_key(HX_HCSTRING("up","\x5b","\x66","\x00","\x00"),(int)119);
		HX_STACK_LINE(86)
		::luxe::Input tmp5 = ::Luxe_obj::input;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(86)
		tmp5->bind_key(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),(int)97);
		HX_STACK_LINE(87)
		::luxe::Input tmp6 = ::Luxe_obj::input;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		tmp6->bind_key(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"),(int)115);
		HX_STACK_LINE(88)
		::luxe::Input tmp7 = ::Luxe_obj::input;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(88)
		tmp7->bind_key(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),(int)100);
		HX_STACK_LINE(90)
		::luxe::Input tmp8 = ::Luxe_obj::input;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(90)
		int tmp9 = ::snow::systems::input::Keycodes_obj::up;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(90)
		tmp8->bind_key(HX_HCSTRING("up","\x5b","\x66","\x00","\x00"),tmp9);
		HX_STACK_LINE(91)
		::luxe::Input tmp10 = ::Luxe_obj::input;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(91)
		int tmp11 = ::snow::systems::input::Keycodes_obj::left;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(91)
		tmp10->bind_key(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),tmp11);
		HX_STACK_LINE(92)
		::luxe::Input tmp12 = ::Luxe_obj::input;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(92)
		int tmp13 = ::snow::systems::input::Keycodes_obj::down;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(92)
		tmp12->bind_key(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"),tmp13);
		HX_STACK_LINE(93)
		::luxe::Input tmp14 = ::Luxe_obj::input;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(93)
		int tmp15 = ::snow::systems::input::Keycodes_obj::right;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(93)
		tmp14->bind_key(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),tmp15);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onassetsloaded,(void))

::Simulation Main_obj::sim;

::World Main_obj::world;

::Creature Main_obj::player;


Main_obj::Main_obj()
{
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { return loaded; }
		if (HX_FIELD_EQ(inName,"config") ) { return config_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onassetsloaded") ) { return onassetsloaded_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sim") ) { outValue = sim; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { outValue = world; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { outValue = player; return true;  }
	}
	return false;
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { loaded=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sim") ) { sim=ioValue.Cast< ::Simulation >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { world=ioValue.Cast< ::World >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=ioValue.Cast< ::Creature >(); return true; }
	}
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Main_obj,loaded),HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::Simulation*/ ,(void *) &Main_obj::sim,HX_HCSTRING("sim","\x17","\x9f","\x57","\x00")},
	{hx::fsObject /*::World*/ ,(void *) &Main_obj::world,HX_HCSTRING("world","\x52","\x96","\x64","\xce")},
	{hx::fsObject /*::Creature*/ ,(void *) &Main_obj::player,HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onassetsloaded","\x67","\x68","\x71","\xbb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::sim,"sim");
	HX_MARK_MEMBER_NAME(Main_obj::world,"world");
	HX_MARK_MEMBER_NAME(Main_obj::player,"player");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::sim,"sim");
	HX_VISIT_MEMBER_NAME(Main_obj::world,"world");
	HX_VISIT_MEMBER_NAME(Main_obj::player,"player");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("sim","\x17","\x9f","\x57","\x00"),
	HX_HCSTRING("world","\x52","\x96","\x64","\xce"),
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	::String(null()) };

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

