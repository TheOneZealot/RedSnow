#include <hxcpp.h>

#ifndef INCLUDED_DynamicController
#include <DynamicController.h>
#endif
#ifndef INCLUDED_DynamicShape
#include <DynamicShape.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_PlayerController
#include <PlayerController.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Input
#include <luxe/Input.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif

Void PlayerController_obj::__construct()
{
HX_STACK_FRAME("PlayerController","new",0xab9f6aef,"PlayerController.new","PlayerController.hx",9,0xc07b8761)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	super::__construct();
}
;
	return null();
}

//PlayerController_obj::~PlayerController_obj() { }

Dynamic PlayerController_obj::__CreateEmpty() { return  new PlayerController_obj; }
hx::ObjectPtr< PlayerController_obj > PlayerController_obj::__new()
{  hx::ObjectPtr< PlayerController_obj > _result_ = new PlayerController_obj();
	_result_->__construct();
	return _result_;}

Dynamic PlayerController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayerController_obj > _result_ = new PlayerController_obj();
	_result_->__construct();
	return _result_;}

Void PlayerController_obj::update( Float dt){
{
		HX_STACK_FRAME("PlayerController","update",0xe5fbaeda,"PlayerController.update","PlayerController.hx",13,0xc07b8761)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(14)
		::luxe::Input tmp = ::Luxe_obj::input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(14)
		bool tmp1 = tmp->inputdown(HX_HCSTRING("up","\x5b","\x66","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14)
		if ((tmp1)){
			HX_STACK_LINE(16)
			::DynamicShape tmp2 = this->get_shape();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(16)
			::phoenix::Vector _g = tmp2->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(16)
			{
				HX_STACK_LINE(16)
				Float tmp3 = _g->y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(16)
				::DynamicShape tmp4 = this->get_shape();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(16)
				Float tmp5 = tmp4->acceleration;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(16)
				Float tmp6 = dt;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(16)
				Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(16)
				Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(16)
				Float _y = tmp8;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(16)
				_g->y = _y;
				HX_STACK_LINE(16)
				bool tmp9 = _g->_construct;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(16)
				if ((tmp9)){
					HX_STACK_LINE(16)
					_g->y;
				}
				else{
					HX_STACK_LINE(16)
					bool tmp10 = (_g->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(16)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(16)
					if ((tmp10)){
						HX_STACK_LINE(16)
						bool tmp12 = _g->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(16)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(16)
						tmp11 = !(tmp13);
					}
					else{
						HX_STACK_LINE(16)
						tmp11 = false;
					}
					HX_STACK_LINE(16)
					if ((tmp11)){
						HX_STACK_LINE(16)
						Float tmp12 = _y;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(16)
						_g->listen_y(tmp12);
					}
					HX_STACK_LINE(16)
					_g->y;
				}
			}
		}
		HX_STACK_LINE(18)
		::luxe::Input tmp2 = ::Luxe_obj::input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		bool tmp3 = tmp2->inputdown(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		if ((tmp3)){
			HX_STACK_LINE(20)
			::DynamicShape tmp4 = this->get_shape();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(20)
			::phoenix::Vector _g = tmp4->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(20)
			{
				HX_STACK_LINE(20)
				Float tmp5 = _g->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(20)
				::DynamicShape tmp6 = this->get_shape();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(20)
				Float tmp7 = tmp6->acceleration;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(20)
				Float tmp8 = dt;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(20)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(20)
				Float tmp10 = (tmp5 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(20)
				Float _x = tmp10;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(20)
				_g->x = _x;
				HX_STACK_LINE(20)
				bool tmp11 = _g->_construct;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(20)
				if ((tmp11)){
					HX_STACK_LINE(20)
					_g->x;
				}
				else{
					HX_STACK_LINE(20)
					bool tmp12 = (_g->listen_x != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(20)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(20)
					if ((tmp12)){
						HX_STACK_LINE(20)
						bool tmp14 = _g->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(20)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(20)
						tmp13 = !(tmp15);
					}
					else{
						HX_STACK_LINE(20)
						tmp13 = false;
					}
					HX_STACK_LINE(20)
					if ((tmp13)){
						HX_STACK_LINE(20)
						Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(20)
						_g->listen_x(tmp14);
					}
					HX_STACK_LINE(20)
					_g->x;
				}
			}
		}
		HX_STACK_LINE(22)
		::luxe::Input tmp4 = ::Luxe_obj::input;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(22)
		bool tmp5 = tmp4->inputdown(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(22)
		if ((tmp5)){
			HX_STACK_LINE(24)
			::DynamicShape tmp6 = this->get_shape();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(24)
			::phoenix::Vector _g = tmp6->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(24)
			{
				HX_STACK_LINE(24)
				Float tmp7 = _g->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(24)
				::DynamicShape tmp8 = this->get_shape();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(24)
				Float tmp9 = tmp8->acceleration;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(24)
				Float tmp10 = dt;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(24)
				Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(24)
				Float tmp12 = (tmp7 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(24)
				Float _y = tmp12;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(24)
				_g->y = _y;
				HX_STACK_LINE(24)
				bool tmp13 = _g->_construct;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(24)
				if ((tmp13)){
					HX_STACK_LINE(24)
					_g->y;
				}
				else{
					HX_STACK_LINE(24)
					bool tmp14 = (_g->listen_y != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(24)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(24)
					if ((tmp14)){
						HX_STACK_LINE(24)
						bool tmp16 = _g->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(24)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(24)
						tmp15 = !(tmp17);
					}
					else{
						HX_STACK_LINE(24)
						tmp15 = false;
					}
					HX_STACK_LINE(24)
					if ((tmp15)){
						HX_STACK_LINE(24)
						Float tmp16 = _y;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(24)
						_g->listen_y(tmp16);
					}
					HX_STACK_LINE(24)
					_g->y;
				}
			}
		}
		HX_STACK_LINE(26)
		::luxe::Input tmp6 = ::Luxe_obj::input;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(26)
		bool tmp7 = tmp6->inputdown(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(26)
		if ((tmp7)){
			HX_STACK_LINE(28)
			::DynamicShape tmp8 = this->get_shape();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(28)
			::phoenix::Vector _g = tmp8->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(28)
			{
				HX_STACK_LINE(28)
				Float tmp9 = _g->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(28)
				::DynamicShape tmp10 = this->get_shape();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(28)
				Float tmp11 = tmp10->acceleration;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(28)
				Float tmp12 = dt;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(28)
				Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(28)
				Float tmp14 = (tmp9 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(28)
				Float _x = tmp14;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(28)
				_g->x = _x;
				HX_STACK_LINE(28)
				bool tmp15 = _g->_construct;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(28)
				if ((tmp15)){
					HX_STACK_LINE(28)
					_g->x;
				}
				else{
					HX_STACK_LINE(28)
					bool tmp16 = (_g->listen_x != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(28)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(28)
					if ((tmp16)){
						HX_STACK_LINE(28)
						bool tmp18 = _g->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(28)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(28)
						tmp17 = !(tmp19);
					}
					else{
						HX_STACK_LINE(28)
						tmp17 = false;
					}
					HX_STACK_LINE(28)
					if ((tmp17)){
						HX_STACK_LINE(28)
						Float tmp18 = _x;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(28)
						_g->listen_x(tmp18);
					}
					HX_STACK_LINE(28)
					_g->x;
				}
			}
		}
	}
return null();
}


Void PlayerController_obj::init( ){
{
		HX_STACK_FRAME("PlayerController","init",0x7c96dda1,"PlayerController.init","luxe/macros/ComponentRules.hx",38,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::init();
	}
return null();
}


Void PlayerController_obj::ondestroy( ){
{
		HX_STACK_FRAME("PlayerController","ondestroy",0x08582d8a,"PlayerController.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void PlayerController_obj::onremoved( ){
{
		HX_STACK_FRAME("PlayerController","onremoved",0xd6d22030,"PlayerController.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}



PlayerController_obj::PlayerController_obj()
{
}

Dynamic PlayerController_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onremoved","\x61","\xb0","\x59","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayerController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayerController_obj::__mClass,"__mClass");
};

#endif

hx::Class PlayerController_obj::__mClass;

void PlayerController_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("PlayerController","\x7d","\xc7","\xdd","\x23");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayerController_obj >;
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

