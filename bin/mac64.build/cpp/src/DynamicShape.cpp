#include <hxcpp.h>

#ifndef INCLUDED_DynamicShape
#include <DynamicShape.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Shape
#include <luxe/collision/shapes/Shape.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif

Void DynamicShape_obj::__construct(::luxe::collision::shapes::Shape _shape)
{
HX_STACK_FRAME("DynamicShape","new",0x0f3cdd34,"DynamicShape.new","DynamicShape.hx",16,0xc213c4bc)
HX_STACK_THIS(this)
HX_STACK_ARG(_shape,"_shape")
{
	HX_STACK_LINE(17)
	super::__construct(null());
	HX_STACK_LINE(19)
	this->name = HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9");
	HX_STACK_LINE(20)
	this->shape = _shape;
	HX_STACK_LINE(21)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	this->velocity = tmp;
	HX_STACK_LINE(22)
	this->dampening = ((Float)0.72);
	HX_STACK_LINE(23)
	this->acceleration = (int)4096;
	HX_STACK_LINE(24)
	this->max_speed = (int)64;
}
;
	return null();
}

//DynamicShape_obj::~DynamicShape_obj() { }

Dynamic DynamicShape_obj::__CreateEmpty() { return  new DynamicShape_obj; }
hx::ObjectPtr< DynamicShape_obj > DynamicShape_obj::__new(::luxe::collision::shapes::Shape _shape)
{  hx::ObjectPtr< DynamicShape_obj > _result_ = new DynamicShape_obj();
	_result_->__construct(_shape);
	return _result_;}

Dynamic DynamicShape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DynamicShape_obj > _result_ = new DynamicShape_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void DynamicShape_obj::onadded( ){
{
		HX_STACK_FRAME("DynamicShape","onadded",0x36a60a15,"DynamicShape.onadded","DynamicShape.hx",28,0xc213c4bc)
		HX_STACK_THIS(this)
	}
return null();
}


Void DynamicShape_obj::entity_pos_change( ::phoenix::Vector _pos){
{
		HX_STACK_FRAME("DynamicShape","entity_pos_change",0xac96ceab,"DynamicShape.entity_pos_change","DynamicShape.hx",33,0xc213c4bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_pos,"_pos")
		HX_STACK_LINE(33)
		::luxe::collision::shapes::Shape tmp = this->shape;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		::phoenix::Vector _this = tmp->_position;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(33)
		::phoenix::Vector tmp1 = this->get_pos();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		::phoenix::Vector _other = tmp1;		HX_STACK_VAR(_other,"_other");
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			Float _x = _other->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(33)
			Float _y = _other->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(33)
			Float _z = _other->z;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(33)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(33)
			_this->ignore_listeners = true;
			HX_STACK_LINE(33)
			{
				HX_STACK_LINE(33)
				_this->x = _x;
				HX_STACK_LINE(33)
				bool tmp2 = _this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(33)
				if ((tmp2)){
					HX_STACK_LINE(33)
					_this->x;
				}
				else{
					HX_STACK_LINE(33)
					bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(33)
					bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(33)
					if ((tmp3)){
						HX_STACK_LINE(33)
						bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(33)
						bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(33)
						tmp4 = !(tmp6);
					}
					else{
						HX_STACK_LINE(33)
						tmp4 = false;
					}
					HX_STACK_LINE(33)
					if ((tmp4)){
						HX_STACK_LINE(33)
						Float tmp5 = _x;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(33)
						_this->listen_x(tmp5);
					}
					HX_STACK_LINE(33)
					_this->x;
				}
			}
			HX_STACK_LINE(33)
			{
				HX_STACK_LINE(33)
				_this->y = _y;
				HX_STACK_LINE(33)
				bool tmp2 = _this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(33)
				if ((tmp2)){
					HX_STACK_LINE(33)
					_this->y;
				}
				else{
					HX_STACK_LINE(33)
					bool tmp3 = (_this->listen_y != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(33)
					bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(33)
					if ((tmp3)){
						HX_STACK_LINE(33)
						bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(33)
						bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(33)
						tmp4 = !(tmp6);
					}
					else{
						HX_STACK_LINE(33)
						tmp4 = false;
					}
					HX_STACK_LINE(33)
					if ((tmp4)){
						HX_STACK_LINE(33)
						Float tmp5 = _y;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(33)
						_this->listen_y(tmp5);
					}
					HX_STACK_LINE(33)
					_this->y;
				}
			}
			HX_STACK_LINE(33)
			{
				HX_STACK_LINE(33)
				_this->z = _z;
				HX_STACK_LINE(33)
				bool tmp2 = _this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(33)
				if ((tmp2)){
					HX_STACK_LINE(33)
					_this->z;
				}
				else{
					HX_STACK_LINE(33)
					bool tmp3 = (_this->listen_z != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(33)
					bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(33)
					if ((tmp3)){
						HX_STACK_LINE(33)
						bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(33)
						bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(33)
						tmp4 = !(tmp6);
					}
					else{
						HX_STACK_LINE(33)
						tmp4 = false;
					}
					HX_STACK_LINE(33)
					if ((tmp4)){
						HX_STACK_LINE(33)
						Float tmp5 = _z;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(33)
						_this->listen_z(tmp5);
					}
					HX_STACK_LINE(33)
					_this->z;
				}
			}
			HX_STACK_LINE(33)
			_this->w = _other->w;
			HX_STACK_LINE(33)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(33)
			bool tmp2 = (_this->listen_x != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(33)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			if ((tmp2)){
				HX_STACK_LINE(33)
				bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(33)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(33)
				tmp3 = !(tmp5);
			}
			else{
				HX_STACK_LINE(33)
				tmp3 = false;
			}
			HX_STACK_LINE(33)
			if ((tmp3)){
				HX_STACK_LINE(33)
				Float tmp4 = _this->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(33)
				_this->listen_x(tmp4);
			}
			HX_STACK_LINE(33)
			bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(33)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(33)
			if ((tmp4)){
				HX_STACK_LINE(33)
				bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(33)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(33)
				tmp5 = !(tmp7);
			}
			else{
				HX_STACK_LINE(33)
				tmp5 = false;
			}
			HX_STACK_LINE(33)
			if ((tmp5)){
				HX_STACK_LINE(33)
				Float tmp6 = _this->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(33)
				_this->listen_y(tmp6);
			}
			HX_STACK_LINE(33)
			bool tmp6 = (_this->listen_z != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(33)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(33)
			if ((tmp6)){
				HX_STACK_LINE(33)
				bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(33)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(33)
				tmp7 = !(tmp9);
			}
			else{
				HX_STACK_LINE(33)
				tmp7 = false;
			}
			HX_STACK_LINE(33)
			if ((tmp7)){
				HX_STACK_LINE(33)
				Float tmp8 = _this->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(33)
				_this->listen_z(tmp8);
			}
			HX_STACK_LINE(33)
			_this;
		}
		HX_STACK_LINE(33)
		_this;
	}
return null();
}


Void DynamicShape_obj::init( ){
{
		HX_STACK_FRAME("DynamicShape","init",0x42bd67bc,"DynamicShape.init","luxe/macros/ComponentRules.hx",38,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::init();
	}
return null();
}


Void DynamicShape_obj::ondestroy( ){
{
		HX_STACK_FRAME("DynamicShape","ondestroy",0x43e0218f,"DynamicShape.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void DynamicShape_obj::onremoved( ){
{
		HX_STACK_FRAME("DynamicShape","onremoved",0x125a1435,"DynamicShape.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}



DynamicShape_obj::DynamicShape_obj()
{
}

void DynamicShape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DynamicShape);
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(dampening,"dampening");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(max_speed,"max_speed");
	::luxe::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DynamicShape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shape,"shape");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(dampening,"dampening");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(max_speed,"max_speed");
	::luxe::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DynamicShape_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { return shape; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onadded") ) { return onadded_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dampening") ) { return dampening; }
		if (HX_FIELD_EQ(inName,"max_speed") ) { return max_speed; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceleration") ) { return acceleration; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"entity_pos_change") ) { return entity_pos_change_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DynamicShape_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast< ::luxe::collision::shapes::Shape >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dampening") ) { dampening=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max_speed") ) { max_speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DynamicShape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c"));
	outFields->push(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"));
	outFields->push(HX_HCSTRING("dampening","\xf9","\x57","\x84","\xff"));
	outFields->push(HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"));
	outFields->push(HX_HCSTRING("max_speed","\x6c","\x7c","\x47","\x78"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::collision::shapes::Shape*/ ,(int)offsetof(DynamicShape_obj,shape),HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(DynamicShape_obj,velocity),HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e")},
	{hx::fsFloat,(int)offsetof(DynamicShape_obj,dampening),HX_HCSTRING("dampening","\xf9","\x57","\x84","\xff")},
	{hx::fsFloat,(int)offsetof(DynamicShape_obj,acceleration),HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a")},
	{hx::fsFloat,(int)offsetof(DynamicShape_obj,max_speed),HX_HCSTRING("max_speed","\x6c","\x7c","\x47","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c"),
	HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"),
	HX_HCSTRING("dampening","\xf9","\x57","\x84","\xff"),
	HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"),
	HX_HCSTRING("max_speed","\x6c","\x7c","\x47","\x78"),
	HX_HCSTRING("onadded","\x41","\x03","\x54","\x1f"),
	HX_HCSTRING("entity_pos_change","\xd7","\x76","\x10","\x8c"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onremoved","\x61","\xb0","\x59","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DynamicShape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DynamicShape_obj::__mClass,"__mClass");
};

#endif

hx::Class DynamicShape_obj::__mClass;

void DynamicShape_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("DynamicShape","\x42","\x73","\xd9","\xfa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DynamicShape_obj >;
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

