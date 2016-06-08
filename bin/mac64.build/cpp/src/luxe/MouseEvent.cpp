#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_luxe_InteractState
#include <luxe/InteractState.h>
#endif
#ifndef INCLUDED_luxe_MouseEvent
#include <luxe/MouseEvent.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{

Void MouseEvent_obj::__construct()
{
HX_STACK_FRAME("luxe.MouseEvent","new",0x65d584ff,"luxe.MouseEvent.new","luxe/Input.hx",861,0x19edc1cd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(882)
	this->y_rel = (int)0;
	HX_STACK_LINE(880)
	this->x_rel = (int)0;
	HX_STACK_LINE(878)
	this->y = (int)0;
	HX_STACK_LINE(876)
	this->x = (int)0;
	HX_STACK_LINE(870)
	this->window_id = (int)1;
	HX_STACK_LINE(868)
	this->timestamp = ((Float)0.0);
	HX_STACK_LINE(864)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(864)
	this->pos = tmp;
}
;
	return null();
}

//MouseEvent_obj::~MouseEvent_obj() { }

Dynamic MouseEvent_obj::__CreateEmpty() { return  new MouseEvent_obj; }
hx::ObjectPtr< MouseEvent_obj > MouseEvent_obj::__new()
{  hx::ObjectPtr< MouseEvent_obj > _result_ = new MouseEvent_obj();
	_result_->__construct();
	return _result_;}

Dynamic MouseEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseEvent_obj > _result_ = new MouseEvent_obj();
	_result_->__construct();
	return _result_;}

Void MouseEvent_obj::set_press( int _x,int _y,int _button,::luxe::InteractState _state,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.MouseEvent","set_press",0xd71811c5,"luxe.MouseEvent.set_press","luxe/Input.hx",887,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_ARG(_state,"_state")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(889)
		this->x = _x;
		HX_STACK_LINE(890)
		this->y = _y;
		HX_STACK_LINE(891)
		this->x_rel = (int)0;
		HX_STACK_LINE(892)
		this->y_rel = (int)0;
		HX_STACK_LINE(893)
		this->state = _state;
		HX_STACK_LINE(894)
		this->button = _button;
		HX_STACK_LINE(895)
		this->window_id = _window_id;
		HX_STACK_LINE(896)
		this->timestamp = _timestamp;
		HX_STACK_LINE(898)
		{
			HX_STACK_LINE(898)
			::phoenix::Vector tmp = this->pos;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(898)
			::phoenix::Vector _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(898)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(898)
			_this->ignore_listeners = true;
			HX_STACK_LINE(898)
			{
				HX_STACK_LINE(898)
				_this->x = _x;
				HX_STACK_LINE(898)
				bool tmp1 = _this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(898)
				if ((tmp1)){
					HX_STACK_LINE(898)
					_this->x;
				}
				else{
					HX_STACK_LINE(898)
					bool tmp2 = (_this->listen_x != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(898)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(898)
					if ((tmp2)){
						HX_STACK_LINE(898)
						bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(898)
						bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(898)
						tmp3 = !(tmp5);
					}
					else{
						HX_STACK_LINE(898)
						tmp3 = false;
					}
					HX_STACK_LINE(898)
					if ((tmp3)){
						HX_STACK_LINE(898)
						int tmp4 = _x;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(898)
						_this->listen_x(tmp4);
					}
					HX_STACK_LINE(898)
					_this->x;
				}
			}
			HX_STACK_LINE(898)
			{
				HX_STACK_LINE(898)
				_this->y = _y;
				HX_STACK_LINE(898)
				bool tmp1 = _this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(898)
				if ((tmp1)){
					HX_STACK_LINE(898)
					_this->y;
				}
				else{
					HX_STACK_LINE(898)
					bool tmp2 = (_this->listen_y != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(898)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(898)
					if ((tmp2)){
						HX_STACK_LINE(898)
						bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(898)
						bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(898)
						tmp3 = !(tmp5);
					}
					else{
						HX_STACK_LINE(898)
						tmp3 = false;
					}
					HX_STACK_LINE(898)
					if ((tmp3)){
						HX_STACK_LINE(898)
						int tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(898)
						_this->listen_y(tmp4);
					}
					HX_STACK_LINE(898)
					_this->y;
				}
			}
			HX_STACK_LINE(898)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(898)
			bool tmp1 = (_this->listen_x != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(898)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(898)
			if ((tmp1)){
				HX_STACK_LINE(898)
				bool tmp3 = _this->ignore_listeners;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(898)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(898)
				tmp2 = !(tmp4);
			}
			else{
				HX_STACK_LINE(898)
				tmp2 = false;
			}
			HX_STACK_LINE(898)
			if ((tmp2)){
				HX_STACK_LINE(898)
				Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(898)
				_this->listen_x(tmp3);
			}
			HX_STACK_LINE(898)
			bool tmp3 = (_this->listen_y != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(898)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(898)
			if ((tmp3)){
				HX_STACK_LINE(898)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(898)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(898)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(898)
				tmp4 = false;
			}
			HX_STACK_LINE(898)
			if ((tmp4)){
				HX_STACK_LINE(898)
				Float tmp5 = _this->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(898)
				_this->listen_y(tmp5);
			}
			HX_STACK_LINE(898)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(MouseEvent_obj,set_press,(void))

Void MouseEvent_obj::set_move( int _x,int _y,int _x_rel,int _y_rel,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.MouseEvent","set_move",0x4d09230f,"luxe.MouseEvent.set_move","luxe/Input.hx",903,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_x_rel,"_x_rel")
		HX_STACK_ARG(_y_rel,"_y_rel")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(905)
		this->x = _x;
		HX_STACK_LINE(906)
		this->y = _y;
		HX_STACK_LINE(907)
		this->x_rel = _x_rel;
		HX_STACK_LINE(908)
		this->y_rel = _y_rel;
		HX_STACK_LINE(909)
		this->state = ::luxe::InteractState_obj::move;
		HX_STACK_LINE(910)
		this->button = (int)0;
		HX_STACK_LINE(911)
		this->window_id = _window_id;
		HX_STACK_LINE(912)
		this->timestamp = _timestamp;
		HX_STACK_LINE(914)
		{
			HX_STACK_LINE(914)
			::phoenix::Vector tmp = this->pos;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(914)
			::phoenix::Vector _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(914)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(914)
			_this->ignore_listeners = true;
			HX_STACK_LINE(914)
			{
				HX_STACK_LINE(914)
				_this->x = _x;
				HX_STACK_LINE(914)
				bool tmp1 = _this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(914)
				if ((tmp1)){
					HX_STACK_LINE(914)
					_this->x;
				}
				else{
					HX_STACK_LINE(914)
					bool tmp2 = (_this->listen_x != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(914)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(914)
					if ((tmp2)){
						HX_STACK_LINE(914)
						bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(914)
						bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(914)
						tmp3 = !(tmp5);
					}
					else{
						HX_STACK_LINE(914)
						tmp3 = false;
					}
					HX_STACK_LINE(914)
					if ((tmp3)){
						HX_STACK_LINE(914)
						int tmp4 = _x;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(914)
						_this->listen_x(tmp4);
					}
					HX_STACK_LINE(914)
					_this->x;
				}
			}
			HX_STACK_LINE(914)
			{
				HX_STACK_LINE(914)
				_this->y = _y;
				HX_STACK_LINE(914)
				bool tmp1 = _this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(914)
				if ((tmp1)){
					HX_STACK_LINE(914)
					_this->y;
				}
				else{
					HX_STACK_LINE(914)
					bool tmp2 = (_this->listen_y != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(914)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(914)
					if ((tmp2)){
						HX_STACK_LINE(914)
						bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(914)
						bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(914)
						tmp3 = !(tmp5);
					}
					else{
						HX_STACK_LINE(914)
						tmp3 = false;
					}
					HX_STACK_LINE(914)
					if ((tmp3)){
						HX_STACK_LINE(914)
						int tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(914)
						_this->listen_y(tmp4);
					}
					HX_STACK_LINE(914)
					_this->y;
				}
			}
			HX_STACK_LINE(914)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(914)
			bool tmp1 = (_this->listen_x != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(914)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(914)
			if ((tmp1)){
				HX_STACK_LINE(914)
				bool tmp3 = _this->ignore_listeners;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(914)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(914)
				tmp2 = !(tmp4);
			}
			else{
				HX_STACK_LINE(914)
				tmp2 = false;
			}
			HX_STACK_LINE(914)
			if ((tmp2)){
				HX_STACK_LINE(914)
				Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(914)
				_this->listen_x(tmp3);
			}
			HX_STACK_LINE(914)
			bool tmp3 = (_this->listen_y != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(914)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(914)
			if ((tmp3)){
				HX_STACK_LINE(914)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(914)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(914)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(914)
				tmp4 = false;
			}
			HX_STACK_LINE(914)
			if ((tmp4)){
				HX_STACK_LINE(914)
				Float tmp5 = _this->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(914)
				_this->listen_y(tmp5);
			}
			HX_STACK_LINE(914)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(MouseEvent_obj,set_move,(void))

Void MouseEvent_obj::set_wheel( Float _x,Float _y,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.MouseEvent","set_wheel",0xd849f2dd,"luxe.MouseEvent.set_wheel","luxe/Input.hx",919,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(922)
		Float tmp = _x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(922)
		int tmp1 = ::Math_obj::floor(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(922)
		this->x = tmp1;
		HX_STACK_LINE(923)
		Float tmp2 = _y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(923)
		int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(923)
		this->y = tmp3;
		HX_STACK_LINE(924)
		this->x_rel = (int)0;
		HX_STACK_LINE(925)
		this->y_rel = (int)0;
		HX_STACK_LINE(926)
		this->state = ::luxe::InteractState_obj::wheel;
		HX_STACK_LINE(927)
		this->button = (int)0;
		HX_STACK_LINE(928)
		this->window_id = _window_id;
		HX_STACK_LINE(929)
		this->timestamp = _timestamp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(MouseEvent_obj,set_wheel,(void))


MouseEvent_obj::MouseEvent_obj()
{
}

void MouseEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MouseEvent);
	HX_MARK_MEMBER_NAME(timestamp,"timestamp");
	HX_MARK_MEMBER_NAME(window_id,"window_id");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x_rel,"x_rel");
	HX_MARK_MEMBER_NAME(y_rel,"y_rel");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_END_CLASS();
}

void MouseEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timestamp,"timestamp");
	HX_VISIT_MEMBER_NAME(window_id,"window_id");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(button,"button");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x_rel,"x_rel");
	HX_VISIT_MEMBER_NAME(y_rel,"y_rel");
	HX_VISIT_MEMBER_NAME(pos,"pos");
}

Dynamic MouseEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"x_rel") ) { return x_rel; }
		if (HX_FIELD_EQ(inName,"y_rel") ) { return y_rel; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_move") ) { return set_move_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { return timestamp; }
		if (HX_FIELD_EQ(inName,"window_id") ) { return window_id; }
		if (HX_FIELD_EQ(inName,"set_press") ) { return set_press_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wheel") ) { return set_wheel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MouseEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::luxe::InteractState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x_rel") ) { x_rel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y_rel") ) { y_rel=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { timestamp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window_id") ) { window_id=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"));
	outFields->push(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("x_rel","\xd2","\xba","\x37","\x57"));
	outFields->push(HX_HCSTRING("y_rel","\x53","\x4f","\x9e","\xea"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,timestamp),HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,window_id),HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96")},
	{hx::fsObject /*::luxe::InteractState*/ ,(int)offsetof(MouseEvent_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,button),HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,x_rel),HX_HCSTRING("x_rel","\xd2","\xba","\x37","\x57")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,y_rel),HX_HCSTRING("y_rel","\x53","\x4f","\x9e","\xea")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(MouseEvent_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"),
	HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("x_rel","\xd2","\xba","\x37","\x57"),
	HX_HCSTRING("y_rel","\x53","\x4f","\x9e","\xea"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("set_press","\xe6","\x9b","\x82","\xef"),
	HX_HCSTRING("set_move","\x0e","\xf8","\x78","\x76"),
	HX_HCSTRING("set_wheel","\xfe","\x7c","\xb4","\xf0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class MouseEvent_obj::__mClass;

void MouseEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.MouseEvent","\x8d","\x99","\x59","\x28");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MouseEvent_obj >;
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
