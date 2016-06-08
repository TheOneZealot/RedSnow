#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_snow_api_Emitter
#include <snow/api/Emitter.h>
#endif
namespace snow{
namespace api{

Void Emitter_obj::__construct()
{
HX_STACK_FRAME("snow.api.Emitter","new",0xe1632781,"snow.api.Emitter.new","snow/api/Emitter.hx",15,0x93fe0e11)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(103)
	this->_checking = false;
	HX_STACK_LINE(27)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	this->_to_remove = tmp;
	HX_STACK_LINE(28)
	::List tmp1 = ::List_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	this->connected = tmp1;
	HX_STACK_LINE(30)
	::haxe::ds::IntMap tmp2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	this->bindings = tmp2;
}
;
	return null();
}

//Emitter_obj::~Emitter_obj() { }

Dynamic Emitter_obj::__CreateEmpty() { return  new Emitter_obj; }
hx::ObjectPtr< Emitter_obj > Emitter_obj::__new()
{  hx::ObjectPtr< Emitter_obj > _result_ = new Emitter_obj();
	_result_->__construct();
	return _result_;}

Dynamic Emitter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Emitter_obj > _result_ = new Emitter_obj();
	_result_->__construct();
	return _result_;}

Void Emitter_obj::emit( Dynamic event,Dynamic data,Dynamic pos){
{
		HX_STACK_FRAME("snow.api.Emitter","emit",0x4f728412,"snow.api.Emitter.emit","snow/api/Emitter.hx",35,0x93fe0e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(37)
		this->_check();
		HX_STACK_LINE(39)
		::haxe::ds::IntMap tmp = this->bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		Dynamic tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		cpp::ArrayBase list = tmp->get(tmp1);		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(40)
		bool tmp2 = (list != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		if ((tmp2)){
			HX_STACK_LINE(40)
			tmp3 = (list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)0);
		}
		else{
			HX_STACK_LINE(40)
			tmp3 = false;
		}
		HX_STACK_LINE(40)
		if ((tmp3)){
			HX_STACK_LINE(41)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(41)
			while((true)){
				HX_STACK_LINE(41)
				bool tmp4 = (_g < list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(41)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(41)
				if ((tmp5)){
					HX_STACK_LINE(41)
					break;
				}
				HX_STACK_LINE(41)
				Dynamic tmp6 = list->__GetItem(_g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(41)
				Dynamic handler = tmp6;		HX_STACK_VAR(handler,"handler");
				HX_STACK_LINE(41)
				++(_g);
				HX_STACK_LINE(43)
				Dynamic tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(43)
				handler(tmp7).Cast< Void >();
			}
		}
		HX_STACK_LINE(49)
		this->_check();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Emitter_obj,emit,(void))

Void Emitter_obj::on( Dynamic event,Dynamic handler,Dynamic pos){
{
		HX_STACK_FRAME("snow.api.Emitter","on",0x7e24091e,"snow.api.Emitter.on","snow/api/Emitter.hx",54,0x93fe0e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(56)
		this->_check();
		HX_STACK_LINE(60)
		::haxe::ds::IntMap tmp = this->bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		Dynamic tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		if ((tmp3)){
			HX_STACK_LINE(62)
			::haxe::ds::IntMap tmp4 = this->bindings;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(62)
			Dynamic tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(62)
			tmp4->set(tmp5,cpp::ArrayBase_obj::__new().Add(handler));
			HX_STACK_LINE(63)
			::List tmp6 = this->connected;		HX_STACK_VAR(tmp6,"tmp6");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &pos,Dynamic &handler,Dynamic &event){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/api/Emitter.hx",63,0x93fe0e11)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45") , handler,false);
						__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , event,false);
						__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , pos,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(63)
			Dynamic tmp7 = _Function_2_1::Block(pos,handler,event);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(63)
			tmp6->push(tmp7);
		}
		else{
			HX_STACK_LINE(66)
			::haxe::ds::IntMap tmp4 = this->bindings;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			Dynamic tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(66)
			cpp::ArrayBase list = tmp4->get(tmp5);		HX_STACK_VAR(list,"list");
			HX_STACK_LINE(67)
			Dynamic tmp6 = handler;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			int tmp7 = list->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			bool tmp8 = (tmp7 == (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(67)
			if ((tmp8)){
				HX_STACK_LINE(68)
				Dynamic tmp9 = handler;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(68)
				list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
				HX_STACK_LINE(69)
				::List tmp10 = this->connected;		HX_STACK_VAR(tmp10,"tmp10");
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &pos,Dynamic &handler,Dynamic &event){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/api/Emitter.hx",69,0x93fe0e11)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45") , handler,false);
							__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , event,false);
							__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , pos,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(69)
				Dynamic tmp11 = _Function_3_1::Block(pos,handler,event);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(69)
				tmp10->push(tmp11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Emitter_obj,on,(void))

bool Emitter_obj::off( Dynamic event,Dynamic handler,Dynamic pos){
	HX_STACK_FRAME("snow.api.Emitter","off",0xe163ea90,"snow.api.Emitter.off","snow/api/Emitter.hx",76,0x93fe0e11)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(78)
	this->_check();
	HX_STACK_LINE(80)
	bool success = false;		HX_STACK_VAR(success,"success");
	HX_STACK_LINE(82)
	::haxe::ds::IntMap tmp = this->bindings;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	Dynamic tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	if ((tmp2)){
		HX_STACK_LINE(86)
		::List tmp3 = this->_to_remove;		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &handler,Dynamic &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/api/Emitter.hx",86,0x93fe0e11)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , event,false);
					__result->Add(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45") , handler,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(86)
		Dynamic tmp4 = _Function_2_1::Block(handler,event);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(86)
		tmp3->push(tmp4);
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			::List tmp5 = this->connected;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(88)
			::_List::ListIterator tmp6 = ::_List::ListIterator_obj::__new(tmp5->h);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(88)
			::_List::ListIterator _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(88)
			while((true)){
				HX_STACK_LINE(88)
				bool tmp7 = (_g->head != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(88)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(88)
				if ((tmp8)){
					HX_STACK_LINE(88)
					break;
				}
				HX_STACK_LINE(88)
				Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(88)
				{
					HX_STACK_LINE(88)
					Dynamic tmp10 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(88)
					_g->val = tmp10;
					HX_STACK_LINE(88)
					Dynamic tmp11 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(88)
					_g->head = tmp11;
					HX_STACK_LINE(88)
					tmp9 = _g->val;
				}
				HX_STACK_LINE(88)
				Dynamic _info = tmp9;		HX_STACK_VAR(_info,"_info");
				HX_STACK_LINE(89)
				bool tmp10 = (_info->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic ) == event);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(89)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(89)
				if ((tmp10)){
					HX_STACK_LINE(89)
					tmp11 = (_info->__Field(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45"), hx::paccDynamic ) == handler);
				}
				else{
					HX_STACK_LINE(89)
					tmp11 = false;
				}
				HX_STACK_LINE(89)
				if ((tmp11)){
					HX_STACK_LINE(90)
					::List tmp12 = this->connected;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(90)
					Dynamic tmp13 = _info;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(90)
					tmp12->remove(tmp13);
				}
			}
		}
		HX_STACK_LINE(95)
		success = true;
	}
	HX_STACK_LINE(99)
	bool tmp3 = success;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(99)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC3(Emitter_obj,off,return )

Void Emitter_obj::_check( ){
{
		HX_STACK_FRAME("snow.api.Emitter","_check",0xcb4ef388,"snow.api.Emitter._check","snow/api/Emitter.hx",105,0x93fe0e11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(107)
		bool tmp = this->_checking;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		if ((tmp)){
			HX_STACK_LINE(108)
			return null();
		}
		HX_STACK_LINE(111)
		this->_checking = true;
		HX_STACK_LINE(113)
		::List tmp1 = this->_to_remove;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		int tmp2 = tmp1->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(113)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(113)
		if ((tmp3)){
			HX_STACK_LINE(115)
			{
				HX_STACK_LINE(115)
				::List tmp4 = this->_to_remove;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(115)
				::_List::ListIterator tmp5 = ::_List::ListIterator_obj::__new(tmp4->h);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(115)
				::_List::ListIterator _g = tmp5;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(115)
				while((true)){
					HX_STACK_LINE(115)
					bool tmp6 = (_g->head != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(115)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(115)
					if ((tmp7)){
						HX_STACK_LINE(115)
						break;
					}
					HX_STACK_LINE(115)
					Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(115)
					{
						HX_STACK_LINE(115)
						Dynamic tmp9 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(115)
						_g->val = tmp9;
						HX_STACK_LINE(115)
						Dynamic tmp10 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(115)
						_g->head = tmp10;
						HX_STACK_LINE(115)
						tmp8 = _g->val;
					}
					HX_STACK_LINE(115)
					Dynamic _node = tmp8;		HX_STACK_VAR(_node,"_node");
					HX_STACK_LINE(117)
					::haxe::ds::IntMap tmp9 = this->bindings;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(117)
					Dynamic tmp10 = _node->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(117)
					cpp::ArrayBase list = tmp9->get(tmp10);		HX_STACK_VAR(list,"list");
					HX_STACK_LINE(118)
					Dynamic tmp11 = _node->__Field(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(118)
					list->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp11);
					HX_STACK_LINE(121)
					bool tmp12 = (list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(121)
					if ((tmp12)){
						HX_STACK_LINE(122)
						::haxe::ds::IntMap tmp13 = this->bindings;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(122)
						Dynamic tmp14 = _node->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(122)
						tmp13->remove(tmp14);
					}
				}
			}
			HX_STACK_LINE(127)
			this->_to_remove = null();
			HX_STACK_LINE(128)
			::List tmp4 = ::List_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(128)
			this->_to_remove = tmp4;
		}
		HX_STACK_LINE(132)
		this->_checking = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Emitter_obj,_check,(void))


Emitter_obj::Emitter_obj()
{
}

void Emitter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Emitter);
	HX_MARK_MEMBER_NAME(bindings,"bindings");
	HX_MARK_MEMBER_NAME(connected,"connected");
	HX_MARK_MEMBER_NAME(_to_remove,"_to_remove");
	HX_MARK_MEMBER_NAME(_checking,"_checking");
	HX_MARK_END_CLASS();
}

void Emitter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bindings,"bindings");
	HX_VISIT_MEMBER_NAME(connected,"connected");
	HX_VISIT_MEMBER_NAME(_to_remove,"_to_remove");
	HX_VISIT_MEMBER_NAME(_checking,"_checking");
}

Dynamic Emitter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { return on_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"off") ) { return off_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"emit") ) { return emit_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_check") ) { return _check_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bindings") ) { return bindings; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return connected; }
		if (HX_FIELD_EQ(inName,"_checking") ) { return _checking; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_to_remove") ) { return _to_remove; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Emitter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"bindings") ) { bindings=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_checking") ) { _checking=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_to_remove") ) { _to_remove=inValue.Cast< ::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Emitter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bindings","\x8e","\x51","\xac","\xc8"));
	outFields->push(HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"));
	outFields->push(HX_HCSTRING("_to_remove","\x89","\x39","\xe5","\x30"));
	outFields->push(HX_HCSTRING("_checking","\x79","\x18","\x91","\xf4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Emitter_obj,bindings),HX_HCSTRING("bindings","\x8e","\x51","\xac","\xc8")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Emitter_obj,connected),HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Emitter_obj,_to_remove),HX_HCSTRING("_to_remove","\x89","\x39","\xe5","\x30")},
	{hx::fsBool,(int)offsetof(Emitter_obj,_checking),HX_HCSTRING("_checking","\x79","\x18","\x91","\xf4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bindings","\x8e","\x51","\xac","\xc8"),
	HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"),
	HX_HCSTRING("_to_remove","\x89","\x39","\xe5","\x30"),
	HX_HCSTRING("emit","\x53","\x9e","\x15","\x43"),
	HX_HCSTRING("on","\x1f","\x61","\x00","\x00"),
	HX_HCSTRING("off","\x6f","\x93","\x54","\x00"),
	HX_HCSTRING("_checking","\x79","\x18","\x91","\xf4"),
	HX_HCSTRING("_check","\x09","\xe0","\x9d","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Emitter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Emitter_obj::__mClass,"__mClass");
};

#endif

hx::Class Emitter_obj::__mClass;

void Emitter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.api.Emitter","\x0f","\x53","\xff","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Emitter_obj >;
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

} // end namespace snow
} // end namespace api
