#include <hxcpp.h>

#ifndef INCLUDED_luxe_InteractState
#include <luxe/InteractState.h>
#endif
#ifndef INCLUDED_luxe_TouchEvent
#include <luxe/TouchEvent.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{

Void TouchEvent_obj::__construct()
{
HX_STACK_FRAME("luxe.TouchEvent","new",0xeb8b8025,"luxe.TouchEvent.new","luxe/Input.hx",700,0x19edc1cd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(702)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(702)
	this->pos = tmp;
}
;
	return null();
}

//TouchEvent_obj::~TouchEvent_obj() { }

Dynamic TouchEvent_obj::__CreateEmpty() { return  new TouchEvent_obj; }
hx::ObjectPtr< TouchEvent_obj > TouchEvent_obj::__new()
{  hx::ObjectPtr< TouchEvent_obj > _result_ = new TouchEvent_obj();
	_result_->__construct();
	return _result_;}

Dynamic TouchEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TouchEvent_obj > _result_ = new TouchEvent_obj();
	_result_->__construct();
	return _result_;}

Void TouchEvent_obj::set( Float _x,Float _y,Float _dx,Float _dy,int _touch_id,::luxe::InteractState _state,Float _timestamp){
{
		HX_STACK_FRAME("luxe.TouchEvent","set",0xeb8f4b67,"luxe.TouchEvent.set","luxe/Input.hx",724,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_dx,"_dx")
		HX_STACK_ARG(_dy,"_dy")
		HX_STACK_ARG(_touch_id,"_touch_id")
		HX_STACK_ARG(_state,"_state")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(726)
		this->x = _x;
		HX_STACK_LINE(727)
		this->y = _y;
		HX_STACK_LINE(728)
		this->dx = _dx;
		HX_STACK_LINE(729)
		this->dy = _dy;
		HX_STACK_LINE(730)
		this->touch_id = _touch_id;
		HX_STACK_LINE(731)
		this->timestamp = _timestamp;
		HX_STACK_LINE(732)
		this->state = _state;
		HX_STACK_LINE(734)
		{
			HX_STACK_LINE(734)
			::phoenix::Vector tmp = this->pos;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(734)
			::phoenix::Vector _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(734)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(734)
			_this->ignore_listeners = true;
			HX_STACK_LINE(734)
			{
				HX_STACK_LINE(734)
				_this->x = _x;
				HX_STACK_LINE(734)
				bool tmp1 = _this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(734)
				if ((tmp1)){
					HX_STACK_LINE(734)
					_this->x;
				}
				else{
					HX_STACK_LINE(734)
					bool tmp2 = (_this->listen_x != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(734)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(734)
					if ((tmp2)){
						HX_STACK_LINE(734)
						bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(734)
						bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(734)
						tmp3 = !(tmp5);
					}
					else{
						HX_STACK_LINE(734)
						tmp3 = false;
					}
					HX_STACK_LINE(734)
					if ((tmp3)){
						HX_STACK_LINE(734)
						Float tmp4 = _x;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(734)
						_this->listen_x(tmp4);
					}
					HX_STACK_LINE(734)
					_this->x;
				}
			}
			HX_STACK_LINE(734)
			{
				HX_STACK_LINE(734)
				_this->y = _y;
				HX_STACK_LINE(734)
				bool tmp1 = _this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(734)
				if ((tmp1)){
					HX_STACK_LINE(734)
					_this->y;
				}
				else{
					HX_STACK_LINE(734)
					bool tmp2 = (_this->listen_y != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(734)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(734)
					if ((tmp2)){
						HX_STACK_LINE(734)
						bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(734)
						bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(734)
						tmp3 = !(tmp5);
					}
					else{
						HX_STACK_LINE(734)
						tmp3 = false;
					}
					HX_STACK_LINE(734)
					if ((tmp3)){
						HX_STACK_LINE(734)
						Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(734)
						_this->listen_y(tmp4);
					}
					HX_STACK_LINE(734)
					_this->y;
				}
			}
			HX_STACK_LINE(734)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(734)
			bool tmp1 = (_this->listen_x != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(734)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(734)
			if ((tmp1)){
				HX_STACK_LINE(734)
				bool tmp3 = _this->ignore_listeners;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(734)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(734)
				tmp2 = !(tmp4);
			}
			else{
				HX_STACK_LINE(734)
				tmp2 = false;
			}
			HX_STACK_LINE(734)
			if ((tmp2)){
				HX_STACK_LINE(734)
				Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(734)
				_this->listen_x(tmp3);
			}
			HX_STACK_LINE(734)
			bool tmp3 = (_this->listen_y != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(734)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(734)
			if ((tmp3)){
				HX_STACK_LINE(734)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(734)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(734)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(734)
				tmp4 = false;
			}
			HX_STACK_LINE(734)
			if ((tmp4)){
				HX_STACK_LINE(734)
				Float tmp5 = _this->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(734)
				_this->listen_y(tmp5);
			}
			HX_STACK_LINE(734)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(TouchEvent_obj,set,(void))


TouchEvent_obj::TouchEvent_obj()
{
}

void TouchEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TouchEvent);
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(timestamp,"timestamp");
	HX_MARK_MEMBER_NAME(touch_id,"touch_id");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(dx,"dx");
	HX_MARK_MEMBER_NAME(dy,"dy");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_END_CLASS();
}

void TouchEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(timestamp,"timestamp");
	HX_VISIT_MEMBER_NAME(touch_id,"touch_id");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(dx,"dx");
	HX_VISIT_MEMBER_NAME(dy,"dy");
	HX_VISIT_MEMBER_NAME(pos,"pos");
}

Dynamic TouchEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { return dx; }
		if (HX_FIELD_EQ(inName,"dy") ) { return dy; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"touch_id") ) { return touch_id; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { return timestamp; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TouchEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { dx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dy") ) { dy=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::luxe::InteractState >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"touch_id") ) { touch_id=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { timestamp=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TouchEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"));
	outFields->push(HX_HCSTRING("touch_id","\x9b","\x7b","\x1d","\x00"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("dx","\x94","\x57","\x00","\x00"));
	outFields->push(HX_HCSTRING("dy","\x95","\x57","\x00","\x00"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::InteractState*/ ,(int)offsetof(TouchEvent_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,timestamp),HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5")},
	{hx::fsInt,(int)offsetof(TouchEvent_obj,touch_id),HX_HCSTRING("touch_id","\x9b","\x7b","\x1d","\x00")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,dx),HX_HCSTRING("dx","\x94","\x57","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,dy),HX_HCSTRING("dy","\x95","\x57","\x00","\x00")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(TouchEvent_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"),
	HX_HCSTRING("touch_id","\x9b","\x7b","\x1d","\x00"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("dx","\x94","\x57","\x00","\x00"),
	HX_HCSTRING("dy","\x95","\x57","\x00","\x00"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class TouchEvent_obj::__mClass;

void TouchEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.TouchEvent","\xb3","\x89","\x1d","\x04");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TouchEvent_obj >;
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
