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
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
namespace luxe{

Void Emitter_obj::__construct()
{
HX_STACK_FRAME("luxe.Emitter","new",0xbd9e6488,"luxe.Emitter.new","luxe/Emitter.hx",19,0xe597ef29)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(152)
	this->_checking = false;
	HX_STACK_LINE(31)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	this->_to_remove = tmp;
	HX_STACK_LINE(32)
	::List tmp1 = ::List_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	this->connected = tmp1;
	HX_STACK_LINE(34)
	::haxe::ds::IntMap tmp2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
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

Void Emitter_obj::_emitter_destroy( ){
{
		HX_STACK_FRAME("luxe.Emitter","_emitter_destroy",0x684a0f42,"luxe.Emitter._emitter_destroy","luxe/Emitter.hx",38,0xe597ef29)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		while((true)){
			HX_STACK_LINE(39)
			::List tmp = this->_to_remove;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(39)
			int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(39)
			bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(39)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(39)
			if ((tmp3)){
				HX_STACK_LINE(39)
				break;
			}
			HX_STACK_LINE(40)
			::List tmp4 = this->_to_remove;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			Dynamic tmp5 = tmp4->pop();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			Dynamic _node = tmp5;		HX_STACK_VAR(_node,"_node");
			HX_STACK_LINE(41)
			_node->__FieldRef(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75")) = null();
			HX_STACK_LINE(42)
			_node->__FieldRef(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45")) = null();
			HX_STACK_LINE(43)
			_node = null();
		}
		HX_STACK_LINE(46)
		while((true)){
			HX_STACK_LINE(46)
			::List tmp = this->connected;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(46)
			int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(46)
			bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(46)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			if ((tmp3)){
				HX_STACK_LINE(46)
				break;
			}
			HX_STACK_LINE(47)
			::List tmp4 = this->connected;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(47)
			Dynamic tmp5 = tmp4->pop();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(47)
			Dynamic _node = tmp5;		HX_STACK_VAR(_node,"_node");
			HX_STACK_LINE(48)
			_node->__FieldRef(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75")) = null();
			HX_STACK_LINE(49)
			_node->__FieldRef(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45")) = null();
			HX_STACK_LINE(50)
			_node = null();
		}
		HX_STACK_LINE(53)
		this->_to_remove = null();
		HX_STACK_LINE(54)
		this->connected = null();
		HX_STACK_LINE(55)
		this->bindings = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Emitter_obj,_emitter_destroy,(void))

Void Emitter_obj::emit( Dynamic event,Dynamic data){
{
		HX_STACK_FRAME("luxe.Emitter","emit",0x270cad2b,"luxe.Emitter.emit","luxe/Emitter.hx",60,0xe597ef29)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(62)
		::haxe::ds::IntMap tmp = this->bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		if ((tmp1)){
			HX_STACK_LINE(62)
			return null();
		}
		HX_STACK_LINE(64)
		this->_check();
		HX_STACK_LINE(66)
		::haxe::ds::IntMap tmp2 = this->bindings;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		Dynamic tmp3 = event;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		cpp::ArrayBase _list = tmp2->get(tmp3);		HX_STACK_VAR(_list,"_list");
		HX_STACK_LINE(67)
		bool tmp4 = (_list != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(67)
		if ((tmp4)){
			HX_STACK_LINE(67)
			tmp5 = (_list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)0);
		}
		else{
			HX_STACK_LINE(67)
			tmp5 = false;
		}
		HX_STACK_LINE(67)
		if ((tmp5)){
			HX_STACK_LINE(68)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(68)
			while((true)){
				HX_STACK_LINE(68)
				bool tmp6 = (_g < _list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(68)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(68)
				if ((tmp7)){
					HX_STACK_LINE(68)
					break;
				}
				HX_STACK_LINE(68)
				Dynamic tmp8 = _list->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(68)
				Dynamic handler = tmp8;		HX_STACK_VAR(handler,"handler");
				HX_STACK_LINE(68)
				++(_g);
				HX_STACK_LINE(70)
				Dynamic tmp9 = data;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(70)
				handler(tmp9).Cast< Void >();
			}
		}
		HX_STACK_LINE(76)
		this->_check();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Emitter_obj,emit,(void))

Void Emitter_obj::on( Dynamic event,Dynamic handler){
{
		HX_STACK_FRAME("luxe.Emitter","on",0x64b989f7,"luxe.Emitter.on","luxe/Emitter.hx",82,0xe597ef29)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(84)
		::haxe::ds::IntMap tmp = this->bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		if ((tmp1)){
			HX_STACK_LINE(84)
			return null();
		}
		HX_STACK_LINE(86)
		this->_check();
		HX_STACK_LINE(90)
		::haxe::ds::IntMap tmp2 = this->bindings;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		Dynamic tmp3 = event;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(90)
		bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(90)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(90)
		if ((tmp5)){
			HX_STACK_LINE(92)
			::haxe::ds::IntMap tmp6 = this->bindings;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(92)
			Dynamic tmp7 = event;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(92)
			tmp6->set(tmp7,cpp::ArrayBase_obj::__new().Add(handler));
			HX_STACK_LINE(93)
			::List tmp8 = this->connected;		HX_STACK_VAR(tmp8,"tmp8");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &handler,Dynamic &event){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Emitter.hx",93,0xe597ef29)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45") , handler,false);
						__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , event,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(93)
			Dynamic tmp9 = _Function_2_1::Block(handler,event);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(93)
			tmp8->push(tmp9);
		}
		else{
			HX_STACK_LINE(96)
			::haxe::ds::IntMap tmp6 = this->bindings;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(96)
			Dynamic tmp7 = event;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(96)
			cpp::ArrayBase _list = tmp6->get(tmp7);		HX_STACK_VAR(_list,"_list");
			HX_STACK_LINE(97)
			Dynamic tmp8 = handler;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(97)
			int tmp9 = _list->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(97)
			bool tmp10 = (tmp9 == (int)-1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(97)
			if ((tmp10)){
				HX_STACK_LINE(98)
				Dynamic tmp11 = handler;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(98)
				_list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
				HX_STACK_LINE(99)
				::List tmp12 = this->connected;		HX_STACK_VAR(tmp12,"tmp12");
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &handler,Dynamic &event){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Emitter.hx",99,0xe597ef29)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45") , handler,false);
							__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , event,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(99)
				Dynamic tmp13 = _Function_3_1::Block(handler,event);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(99)
				tmp12->push(tmp13);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Emitter_obj,on,(void))

bool Emitter_obj::off( Dynamic event,Dynamic handler){
	HX_STACK_FRAME("luxe.Emitter","off",0xbd9f2797,"luxe.Emitter.off","luxe/Emitter.hx",107,0xe597ef29)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(109)
	::haxe::ds::IntMap tmp = this->bindings;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(109)
	if ((tmp1)){
		HX_STACK_LINE(109)
		return false;
	}
	HX_STACK_LINE(111)
	this->_check();
	HX_STACK_LINE(113)
	bool _success = false;		HX_STACK_VAR(_success,"_success");
	HX_STACK_LINE(115)
	::haxe::ds::IntMap tmp2 = this->bindings;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	Dynamic tmp3 = event;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(115)
	bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(115)
	if ((tmp4)){
		HX_STACK_LINE(119)
		::List tmp5 = this->_to_remove;		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &handler,Dynamic &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Emitter.hx",119,0xe597ef29)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , event,false);
					__result->Add(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45") , handler,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(119)
		Dynamic tmp6 = _Function_2_1::Block(handler,event);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(119)
		tmp5->push(tmp6);
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			::List tmp7 = this->connected;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(121)
			::_List::ListIterator tmp8 = ::_List::ListIterator_obj::__new(tmp7->h);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(121)
			::_List::ListIterator _g = tmp8;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(121)
			while((true)){
				HX_STACK_LINE(121)
				bool tmp9 = (_g->head != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(121)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(121)
				if ((tmp10)){
					HX_STACK_LINE(121)
					break;
				}
				HX_STACK_LINE(121)
				Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(121)
				{
					HX_STACK_LINE(121)
					Dynamic tmp12 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(121)
					_g->val = tmp12;
					HX_STACK_LINE(121)
					Dynamic tmp13 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(121)
					_g->head = tmp13;
					HX_STACK_LINE(121)
					tmp11 = _g->val;
				}
				HX_STACK_LINE(121)
				Dynamic _info = tmp11;		HX_STACK_VAR(_info,"_info");
				HX_STACK_LINE(122)
				bool tmp12 = (_info->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic ) == event);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(122)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(122)
				if ((tmp12)){
					HX_STACK_LINE(122)
					tmp13 = (_info->__Field(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45"), hx::paccDynamic ) == handler);
				}
				else{
					HX_STACK_LINE(122)
					tmp13 = false;
				}
				HX_STACK_LINE(122)
				if ((tmp13)){
					HX_STACK_LINE(123)
					::List tmp14 = this->connected;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(123)
					Dynamic tmp15 = _info;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(123)
					tmp14->remove(tmp15);
				}
			}
		}
		HX_STACK_LINE(128)
		_success = true;
	}
	HX_STACK_LINE(132)
	bool tmp5 = _success;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(132)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(Emitter_obj,off,return )

cpp::ArrayBase Emitter_obj::connections( Dynamic handler){
	HX_STACK_FRAME("luxe.Emitter","connections",0x18f076bd,"luxe.Emitter.connections","luxe/Emitter.hx",136,0xe597ef29)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(138)
	::List tmp = this->connected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	if ((tmp1)){
		HX_STACK_LINE(138)
		return null();
	}
	HX_STACK_LINE(140)
	cpp::ArrayBase _list = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(_list,"_list");
	HX_STACK_LINE(142)
	{
		HX_STACK_LINE(142)
		::List tmp2 = this->connected;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(142)
		::_List::ListIterator tmp3 = ::_List::ListIterator_obj::__new(tmp2->h);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		::_List::ListIterator _g = tmp3;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(142)
		while((true)){
			HX_STACK_LINE(142)
			bool tmp4 = (_g->head != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(142)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(142)
			if ((tmp5)){
				HX_STACK_LINE(142)
				break;
			}
			HX_STACK_LINE(142)
			Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(142)
			{
				HX_STACK_LINE(142)
				Dynamic tmp7 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(142)
				_g->val = tmp7;
				HX_STACK_LINE(142)
				Dynamic tmp8 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(142)
				_g->head = tmp8;
				HX_STACK_LINE(142)
				tmp6 = _g->val;
			}
			HX_STACK_LINE(142)
			Dynamic _info = tmp6;		HX_STACK_VAR(_info,"_info");
			HX_STACK_LINE(143)
			bool tmp7 = (_info->__Field(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45"), hx::paccDynamic ) == handler);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(143)
			if ((tmp7)){
				HX_STACK_LINE(144)
				Dynamic tmp8 = _info;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(144)
				_list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp8);
			}
		}
	}
	HX_STACK_LINE(148)
	return _list;
}


HX_DEFINE_DYNAMIC_FUNC1(Emitter_obj,connections,return )

Void Emitter_obj::_check( ){
{
		HX_STACK_FRAME("luxe.Emitter","_check",0x5c9854e1,"luxe.Emitter._check","luxe/Emitter.hx",154,0xe597ef29)
		HX_STACK_THIS(this)
		HX_STACK_LINE(156)
		bool tmp = this->_checking;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(156)
		if ((tmp1)){
			HX_STACK_LINE(156)
			::List tmp3 = this->_to_remove;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(156)
			::List tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(156)
			tmp2 = (tmp4 == null());
		}
		else{
			HX_STACK_LINE(156)
			tmp2 = true;
		}
		HX_STACK_LINE(156)
		if ((tmp2)){
			HX_STACK_LINE(157)
			return null();
		}
		HX_STACK_LINE(160)
		this->_checking = true;
		HX_STACK_LINE(162)
		::List tmp3 = this->_to_remove;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(162)
		int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(162)
		bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(162)
		if ((tmp5)){
			HX_STACK_LINE(164)
			{
				HX_STACK_LINE(164)
				::List tmp6 = this->_to_remove;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(164)
				::_List::ListIterator tmp7 = ::_List::ListIterator_obj::__new(tmp6->h);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(164)
				::_List::ListIterator _g = tmp7;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(164)
				while((true)){
					HX_STACK_LINE(164)
					bool tmp8 = (_g->head != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(164)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(164)
					if ((tmp9)){
						HX_STACK_LINE(164)
						break;
					}
					HX_STACK_LINE(164)
					Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(164)
					{
						HX_STACK_LINE(164)
						Dynamic tmp11 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(164)
						_g->val = tmp11;
						HX_STACK_LINE(164)
						Dynamic tmp12 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(164)
						_g->head = tmp12;
						HX_STACK_LINE(164)
						tmp10 = _g->val;
					}
					HX_STACK_LINE(164)
					Dynamic _node = tmp10;		HX_STACK_VAR(_node,"_node");
					HX_STACK_LINE(166)
					::haxe::ds::IntMap tmp11 = this->bindings;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(166)
					Dynamic tmp12 = _node->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(166)
					cpp::ArrayBase _list = tmp11->get(tmp12);		HX_STACK_VAR(_list,"_list");
					HX_STACK_LINE(167)
					Dynamic tmp13 = _node->__Field(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(167)
					_list->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp13);
					HX_STACK_LINE(170)
					bool tmp14 = (_list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(170)
					if ((tmp14)){
						HX_STACK_LINE(171)
						::haxe::ds::IntMap tmp15 = this->bindings;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(171)
						Dynamic tmp16 = _node->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(171)
						tmp15->remove(tmp16);
					}
				}
			}
			HX_STACK_LINE(176)
			this->_to_remove = null();
			HX_STACK_LINE(177)
			::List tmp6 = ::List_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(177)
			this->_to_remove = tmp6;
		}
		HX_STACK_LINE(181)
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
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"connections") ) { return connections_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_emitter_destroy") ) { return _emitter_destroy_dyn(); }
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
	HX_HCSTRING("_emitter_destroy","\x6a","\x1c","\x8c","\x8c"),
	HX_HCSTRING("emit","\x53","\x9e","\x15","\x43"),
	HX_HCSTRING("on","\x1f","\x61","\x00","\x00"),
	HX_HCSTRING("off","\x6f","\x93","\x54","\x00"),
	HX_HCSTRING("connections","\x95","\x7a","\x39","\x7b"),
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
	__mClass->mName = HX_HCSTRING("luxe.Emitter","\x96","\xc0","\xe7","\xd1");
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

} // end namespace luxe
