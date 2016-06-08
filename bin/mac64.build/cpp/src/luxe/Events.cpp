#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_Events
#include <luxe/Events.h>
#endif
#ifndef INCLUDED_luxe_Timer
#include <luxe/Timer.h>
#endif
#ifndef INCLUDED_luxe__Events_EventConnection
#include <luxe/_Events/EventConnection.h>
#endif
#ifndef INCLUDED_luxe__Events_EventObject
#include <luxe/_Events/EventObject.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_snow_api_Timer
#include <snow/api/Timer.h>
#endif
namespace luxe{

Void Events_obj::__construct()
{
HX_STACK_FRAME("luxe.Events","new",0xd3c5ce63,"luxe.Events.new","luxe/Events.hx",13,0xab6dc64c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	this->event_queue_count = (int)0;
	HX_STACK_LINE(27)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		tmp = tmp2;
	}
	HX_STACK_LINE(27)
	this->event_connections = tmp;
	HX_STACK_LINE(28)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(28)
	this->event_slots = tmp1;
	HX_STACK_LINE(29)
	::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(29)
	this->event_filters = tmp2;
	HX_STACK_LINE(30)
	this->event_queue = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(31)
	::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(31)
		tmp3 = tmp5;
	}
	HX_STACK_LINE(31)
	this->event_schedules = tmp3;
}
;
	return null();
}

//Events_obj::~Events_obj() { }

Dynamic Events_obj::__CreateEmpty() { return  new Events_obj; }
hx::ObjectPtr< Events_obj > Events_obj::__new()
{  hx::ObjectPtr< Events_obj > _result_ = new Events_obj();
	_result_->__construct();
	return _result_;}

Dynamic Events_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Events_obj > _result_ = new Events_obj();
	_result_->__construct();
	return _result_;}

Void Events_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Events","destroy",0x8602e87d,"luxe.Events.destroy","luxe/Events.hx",38,0xab6dc64c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Events_obj,destroy,(void))

Void Events_obj::clear( ){
{
		HX_STACK_FRAME("luxe.Events","clear",0x5acb3650,"luxe.Events.clear","luxe/Events.hx",43,0xab6dc64c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		::haxe::ds::StringMap tmp = this->event_schedules;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		for(::cpp::FastIterator_obj< ::snow::api::Timer > *__it = ::cpp::CreateFastIterator< ::snow::api::Timer >(tmp1);  __it->hasNext(); ){
			::snow::api::Timer schedule = __it->next();
			{
				HX_STACK_LINE(46)
				schedule->stop();
				HX_STACK_LINE(47)
				schedule = null();
			}
;
		}
		HX_STACK_LINE(50)
		::haxe::ds::StringMap tmp2 = this->event_connections;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
			::String connection = __it->next();
			{
				HX_STACK_LINE(51)
				::haxe::ds::StringMap tmp4 = this->event_connections;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(51)
				::String tmp5 = connection;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(51)
				tmp4->remove(tmp5);
			}
;
		}
		HX_STACK_LINE(54)
		::haxe::ds::StringMap tmp4 = this->event_filters;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(54)
		Dynamic tmp5 = tmp4->keys();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(54)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp5);  __it->hasNext(); ){
			::String filter = __it->next();
			{
				HX_STACK_LINE(55)
				::haxe::ds::StringMap tmp6 = this->event_filters;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(55)
				::String tmp7 = filter;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(55)
				tmp6->remove(tmp7);
			}
;
		}
		HX_STACK_LINE(58)
		::haxe::ds::StringMap tmp6 = this->event_slots;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(58)
		Dynamic tmp7 = tmp6->keys();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(58)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp7);  __it->hasNext(); ){
			::String slot = __it->next();
			{
				HX_STACK_LINE(59)
				::haxe::ds::StringMap tmp8 = this->event_slots;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(59)
				::String tmp9 = slot;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(59)
				tmp8->remove(tmp9);
			}
;
		}
		HX_STACK_LINE(62)
		int tmp8 = this->event_queue->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(62)
		int _count = tmp8;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(63)
		while((true)){
			HX_STACK_LINE(63)
			bool tmp9 = (_count > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(63)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(63)
			if ((tmp10)){
				HX_STACK_LINE(63)
				break;
			}
			HX_STACK_LINE(64)
			this->event_queue->pop().StaticCast< ::luxe::_Events::EventObject >();
			HX_STACK_LINE(65)
			(_count)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Events_obj,clear,(void))

bool Events_obj::does_filter_event( ::String _filter,::String _event){
	HX_STACK_FRAME("luxe.Events","does_filter_event",0xeac610dc,"luxe.Events.does_filter_event","luxe/Events.hx",71,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_filter,"_filter")
	HX_STACK_ARG(_event,"_event")
	HX_STACK_LINE(73)
	::EReg tmp = ::EReg_obj::__new(HX_HCSTRING("\\*","\x4e","\x50","\x00","\x00"),HX_HCSTRING("gi","\x22","\x5a","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	::EReg _replace_stars = tmp;		HX_STACK_VAR(_replace_stars,"_replace_stars");
	HX_STACK_LINE(74)
	::String tmp1 = _filter;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	::String tmp2 = _replace_stars->replace(tmp1,HX_HCSTRING(".*?","\x83","\x0c","\x23","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	::String _final_filter = tmp2;		HX_STACK_VAR(_final_filter,"_final_filter");
	HX_STACK_LINE(75)
	::EReg tmp3 = ::EReg_obj::__new(_final_filter,HX_HCSTRING("gi","\x22","\x5a","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(75)
	::EReg _final_search = tmp3;		HX_STACK_VAR(_final_search,"_final_search");
	HX_STACK_LINE(77)
	::String tmp4 = _event;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(77)
	bool tmp5 = _final_search->match(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(77)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(Events_obj,does_filter_event,return )

::String Events_obj::listen( ::String _event_name,Dynamic _listener){
	HX_STACK_FRAME("luxe.Events","listen",0xff562e24,"luxe.Events.listen","luxe/Events.hx",85,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event_name,"_event_name")
	HX_STACK_ARG(_listener,"_listener")
	HX_STACK_LINE(88)
	::luxe::utils::Utils tmp = ::Luxe_obj::utils;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	::String tmp1 = tmp->uniqueid(null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	::String _id = tmp1;		HX_STACK_VAR(_id,"_id");
	HX_STACK_LINE(89)
	::luxe::_Events::EventConnection tmp2 = ::luxe::_Events::EventConnection_obj::__new(_id,_event_name,_listener);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	::luxe::_Events::EventConnection _connection = tmp2;		HX_STACK_VAR(_connection,"_connection");
	HX_STACK_LINE(92)
	::haxe::ds::StringMap tmp3 = this->event_connections;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(92)
	::String tmp4 = _id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(92)
	::luxe::_Events::EventConnection tmp5 = _connection;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(92)
	tmp3->set(tmp4,tmp5);
	HX_STACK_LINE(97)
	::EReg tmp6 = ::EReg_obj::__new(HX_HCSTRING("\\*","\x4e","\x50","\x00","\x00"),HX_HCSTRING("gi","\x22","\x5a","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(97)
	::EReg _has_stars = tmp6;		HX_STACK_VAR(_has_stars,"_has_stars");
	HX_STACK_LINE(98)
	::String tmp7 = _event_name;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(98)
	bool tmp8 = _has_stars->match(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(98)
	if ((tmp8)){
		HX_STACK_LINE(101)
		::haxe::ds::StringMap tmp9 = this->event_filters;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(101)
		::String tmp10 = _event_name;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(101)
		bool tmp11 = tmp9->exists(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(101)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(101)
		if ((tmp12)){
			HX_STACK_LINE(103)
			::haxe::ds::StringMap tmp13 = this->event_filters;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(103)
			::String tmp14 = _event_name;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(103)
			tmp13->set(tmp14,Array_obj< ::Dynamic >::__new());
		}
		HX_STACK_LINE(107)
		::haxe::ds::StringMap tmp13 = this->event_filters;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(107)
		::String tmp14 = _event_name;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(107)
		::luxe::_Events::EventConnection tmp15 = _connection;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(107)
		((Array< ::Dynamic >)(tmp13->get(tmp14)))->push(tmp15);
	}
	else{
		HX_STACK_LINE(112)
		::haxe::ds::StringMap tmp9 = this->event_slots;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(112)
		::String tmp10 = _event_name;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(112)
		bool tmp11 = tmp9->exists(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(112)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(112)
		if ((tmp12)){
			HX_STACK_LINE(114)
			::haxe::ds::StringMap tmp13 = this->event_slots;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(114)
			::String tmp14 = _event_name;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(114)
			tmp13->set(tmp14,Array_obj< ::Dynamic >::__new());
		}
		HX_STACK_LINE(118)
		::haxe::ds::StringMap tmp13 = this->event_slots;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(118)
		::String tmp14 = _event_name;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(118)
		::luxe::_Events::EventConnection tmp15 = _connection;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(118)
		((Array< ::Dynamic >)(tmp13->get(tmp14)))->push(tmp15);
	}
	HX_STACK_LINE(123)
	::String tmp9 = _id;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(123)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC2(Events_obj,listen,return )

bool Events_obj::unlisten( ::String event_id){
	HX_STACK_FRAME("luxe.Events","unlisten",0xdde84e7d,"luxe.Events.unlisten","luxe/Events.hx",130,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event_id,"event_id")
	HX_STACK_LINE(132)
	::haxe::ds::StringMap tmp = this->event_connections;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	::String tmp1 = event_id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(132)
	if ((tmp2)){
		HX_STACK_LINE(134)
		::haxe::ds::StringMap tmp3 = this->event_connections;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		::String tmp4 = event_id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		::luxe::_Events::EventConnection tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(134)
		::luxe::_Events::EventConnection _connection = tmp5;		HX_STACK_VAR(_connection,"_connection");
		HX_STACK_LINE(135)
		::haxe::ds::StringMap tmp6 = this->event_slots;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(135)
		::String tmp7 = _connection->event_name;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(135)
		Array< ::Dynamic > _event_slot = ((Array< ::Dynamic >)(tmp6->get(tmp7)));		HX_STACK_VAR(_event_slot,"_event_slot");
		HX_STACK_LINE(137)
		bool tmp8 = (_event_slot != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(137)
		if ((tmp8)){
			HX_STACK_LINE(138)
			::luxe::_Events::EventConnection tmp9 = _connection;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(138)
			_event_slot->remove(tmp9);
			HX_STACK_LINE(139)
			return true;
		}
		else{
			HX_STACK_LINE(141)
			::haxe::ds::StringMap tmp9 = this->event_filters;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(141)
			::String tmp10 = _connection->event_name;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(141)
			Array< ::Dynamic > _event_filter = ((Array< ::Dynamic >)(tmp9->get(tmp10)));		HX_STACK_VAR(_event_filter,"_event_filter");
			HX_STACK_LINE(142)
			bool tmp11 = (_event_filter != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(142)
			if ((tmp11)){
				HX_STACK_LINE(143)
				::luxe::_Events::EventConnection tmp12 = _connection;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(143)
				_event_filter->remove(tmp12);
				HX_STACK_LINE(144)
				return true;
			}
			else{
				HX_STACK_LINE(146)
				return false;
			}
		}
		HX_STACK_LINE(150)
		return true;
	}
	else{
		HX_STACK_LINE(153)
		return false;
	}
	HX_STACK_LINE(132)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,unlisten,return )

::String Events_obj::queue( ::String event_name,Dynamic properties){
	HX_STACK_FRAME("luxe.Events","queue",0x705a5254,"luxe.Events.queue","luxe/Events.hx",162,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event_name,"event_name")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_LINE(164)
	::luxe::utils::Utils tmp = ::Luxe_obj::utils;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	::String tmp1 = tmp->uniqueid(null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(164)
	::String _id = tmp1;		HX_STACK_VAR(_id,"_id");
	HX_STACK_LINE(166)
	::luxe::_Events::EventObject tmp2 = ::luxe::_Events::EventObject_obj::__new(_id,event_name,properties);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	this->event_queue->push(tmp2);
	HX_STACK_LINE(168)
	::String tmp3 = _id;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(168)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Events_obj,queue,return )

bool Events_obj::dequeue( ::String event_id){
	HX_STACK_FRAME("luxe.Events","dequeue",0x5fd51df3,"luxe.Events.dequeue","luxe/Events.hx",173,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event_id,"event_id")
	HX_STACK_LINE(176)
	int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
	HX_STACK_LINE(177)
	int tmp = this->event_queue->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	int _count = tmp;		HX_STACK_VAR(_count,"_count");
	HX_STACK_LINE(178)
	while((true)){
		HX_STACK_LINE(180)
		::luxe::_Events::EventObject tmp1 = this->event_queue->__get(_idx).StaticCast< ::luxe::_Events::EventObject >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		::String tmp2 = tmp1->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		::String tmp3 = event_id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(180)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(180)
		if ((tmp4)){
			HX_STACK_LINE(181)
			int tmp5 = _idx;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(181)
			this->event_queue->splice(tmp5,(int)1);
			HX_STACK_LINE(182)
			return true;
		}
		HX_STACK_LINE(185)
		++(_idx);
		HX_STACK_LINE(187)
		bool tmp5 = (_idx < _count);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(187)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(178)
		if ((tmp6)){
			HX_STACK_LINE(178)
			break;
		}
	}
	HX_STACK_LINE(189)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,dequeue,return )

Void Events_obj::process( ){
{
		HX_STACK_FRAME("luxe.Events","process",0x52c75df2,"luxe.Events.process","luxe/Events.hx",195,0xab6dc64c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(198)
		int tmp = this->event_queue->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		int _count = tmp;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(199)
		while((true)){
			HX_STACK_LINE(199)
			bool tmp1 = (_count > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(199)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(199)
			if ((tmp2)){
				HX_STACK_LINE(199)
				break;
			}
			HX_STACK_LINE(200)
			::luxe::_Events::EventObject tmp3 = this->event_queue->shift().StaticCast< ::luxe::_Events::EventObject >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(200)
			::luxe::_Events::EventObject _event = tmp3;		HX_STACK_VAR(_event,"_event");
			HX_STACK_LINE(201)
			::String tmp4 = _event->name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(201)
			Dynamic tmp5 = _event->properties;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(201)
			this->fire(tmp4,tmp5,null());
			HX_STACK_LINE(202)
			(_count)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Events_obj,process,(void))

bool Events_obj::fire( ::String _event_name,Dynamic _properties,Dynamic __o__tag){
Dynamic _tag = __o__tag.Default(false);
	HX_STACK_FRAME("luxe.Events","fire",0x74081853,"luxe.Events.fire","luxe/Events.hx",212,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event_name,"_event_name")
	HX_STACK_ARG(_properties,"_properties")
	HX_STACK_ARG(_tag,"_tag")
{
		HX_STACK_LINE(214)
		bool _fired = false;		HX_STACK_VAR(_fired,"_fired");
		HX_STACK_LINE(217)
		::haxe::ds::StringMap tmp = this->event_filters;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(217)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(217)
		for(::cpp::FastIterator_obj< Array< ::Dynamic > > *__it = ::cpp::CreateFastIterator< Array< ::Dynamic > >(tmp1);  __it->hasNext(); ){
			Array< ::Dynamic > _filter = __it->next();
			{
				HX_STACK_LINE(219)
				bool tmp2 = (_filter->length > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(219)
				if ((tmp2)){
					HX_STACK_LINE(221)
					::luxe::_Events::EventConnection tmp3 = _filter->__get((int)0).StaticCast< ::luxe::_Events::EventConnection >();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(221)
					::String _filter_name = tmp3->event_name;		HX_STACK_VAR(_filter_name,"_filter_name");
					HX_STACK_LINE(222)
					::String tmp4 = _filter_name;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(222)
					::String tmp5 = _event_name;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(222)
					bool tmp6 = this->does_filter_event(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(222)
					if ((tmp6)){
						HX_STACK_LINE(224)
						Dynamic tmp7 = _tag;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(224)
						if ((tmp7)){
							HX_STACK_LINE(225)
							Dynamic tmp8 = _properties;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(225)
							::String tmp9 = _event_name;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(225)
							int tmp10 = _filter->length;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(225)
							Dynamic tmp11 = this->tag_properties(tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(225)
							_properties = tmp11;
						}
						HX_STACK_LINE(228)
						{
							HX_STACK_LINE(228)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(228)
							while((true)){
								HX_STACK_LINE(228)
								bool tmp8 = (_g < _filter->length);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(228)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(228)
								if ((tmp9)){
									HX_STACK_LINE(228)
									break;
								}
								HX_STACK_LINE(228)
								::luxe::_Events::EventConnection tmp10 = _filter->__get(_g).StaticCast< ::luxe::_Events::EventConnection >();		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(228)
								::luxe::_Events::EventConnection _connection = tmp10;		HX_STACK_VAR(_connection,"_connection");
								HX_STACK_LINE(228)
								++(_g);
								HX_STACK_LINE(229)
								Dynamic tmp11 = _properties;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(229)
								_connection->listener(tmp11);
							}
						}
						HX_STACK_LINE(232)
						_fired = true;
					}
				}
			}
;
		}
		HX_STACK_LINE(239)
		::haxe::ds::StringMap tmp2 = this->event_slots;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(239)
		::String tmp3 = _event_name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(239)
		bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(239)
		if ((tmp4)){
			HX_STACK_LINE(242)
			::haxe::ds::StringMap tmp5 = this->event_slots;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(242)
			::String tmp6 = _event_name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(242)
			Array< ::Dynamic > _connections = ((Array< ::Dynamic >)(tmp5->get(tmp6)));		HX_STACK_VAR(_connections,"_connections");
			HX_STACK_LINE(244)
			Dynamic tmp7 = _tag;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(244)
			if ((tmp7)){
				HX_STACK_LINE(245)
				Dynamic tmp8 = _properties;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(245)
				::String tmp9 = _event_name;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(245)
				int tmp10 = _connections->length;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(245)
				Dynamic tmp11 = this->tag_properties(tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(245)
				_properties = tmp11;
			}
			HX_STACK_LINE(249)
			{
				HX_STACK_LINE(249)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(249)
				while((true)){
					HX_STACK_LINE(249)
					bool tmp8 = (_g < _connections->length);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(249)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(249)
					if ((tmp9)){
						HX_STACK_LINE(249)
						break;
					}
					HX_STACK_LINE(249)
					::luxe::_Events::EventConnection tmp10 = _connections->__get(_g).StaticCast< ::luxe::_Events::EventConnection >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(249)
					::luxe::_Events::EventConnection connection = tmp10;		HX_STACK_VAR(connection,"connection");
					HX_STACK_LINE(249)
					++(_g);
					HX_STACK_LINE(250)
					Dynamic tmp11 = _properties;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(250)
					connection->listener(tmp11);
				}
			}
			HX_STACK_LINE(253)
			_fired = true;
		}
		HX_STACK_LINE(257)
		bool tmp5 = _fired;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(257)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Events_obj,fire,return )

::String Events_obj::schedule( Float time,::String event_name,Dynamic properties){
	HX_STACK_FRAME("luxe.Events","schedule",0xb1262174,"luxe.Events.schedule","luxe/Events.hx",265,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(time,"time")
	HX_STACK_ARG(event_name,"event_name")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_LINE(267)
	::luxe::utils::Utils tmp = ::Luxe_obj::utils;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(267)
	::String tmp1 = tmp->uniqueid(null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(267)
	::String _id = tmp1;		HX_STACK_VAR(_id,"_id");
	HX_STACK_LINE(269)
	::luxe::Timer tmp2 = ::Luxe_obj::timer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(269)
	Float tmp3 = time;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(269)
	Dynamic tmp4 = this->fire_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(269)
	::String tmp5 = event_name;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(269)
	Dynamic tmp6 = properties;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(269)
	Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(269)
	{
		HX_STACK_LINE(269)
		Dynamic f = tmp4;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(269)
		::String a1 = tmp5;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(269)
		Dynamic a2 = tmp6;		HX_STACK_VAR(a2,"a2");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,::String,a1,Dynamic,f,Dynamic,a2)
		int __ArgCount() const { return 0; }
		bool run(){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","luxe/Events.hx",269,0xab6dc64c)
			{
				HX_STACK_LINE(269)
				::String tmp8 = a1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(269)
				Dynamic tmp9 = a2;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(269)
				bool tmp10 = f(tmp8,tmp9,null()).Cast< bool >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(269)
				return tmp10;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(269)
		tmp7 =  Dynamic(new _Function_2_1(a1,f,a2));
	}
	HX_STACK_LINE(269)
	::snow::api::Timer tmp8 = tmp2->schedule(tmp3,tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(269)
	::snow::api::Timer _timer = tmp8;		HX_STACK_VAR(_timer,"_timer");
	HX_STACK_LINE(271)
	::haxe::ds::StringMap tmp9 = this->event_schedules;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(271)
	::String tmp10 = _id;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(271)
	::snow::api::Timer tmp11 = _timer;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(271)
	tmp9->set(tmp10,tmp11);
	HX_STACK_LINE(273)
	::String tmp12 = _id;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(273)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC3(Events_obj,schedule,return )

bool Events_obj::unschedule( ::String schedule_id){
	HX_STACK_FRAME("luxe.Events","unschedule",0xf0c3ca0d,"luxe.Events.unschedule","luxe/Events.hx",280,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(schedule_id,"schedule_id")
	HX_STACK_LINE(282)
	::haxe::ds::StringMap tmp = this->event_schedules;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	::String tmp1 = schedule_id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(282)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(282)
	if ((tmp2)){
		HX_STACK_LINE(284)
		::haxe::ds::StringMap tmp3 = this->event_schedules;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(284)
		::String tmp4 = schedule_id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(284)
		::snow::api::Timer tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(284)
		::snow::api::Timer _timer = tmp5;		HX_STACK_VAR(_timer,"_timer");
		HX_STACK_LINE(286)
		_timer->stop();
		HX_STACK_LINE(288)
		::haxe::ds::StringMap tmp6 = this->event_schedules;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(288)
		::String tmp7 = schedule_id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(288)
		tmp6->remove(tmp7);
		HX_STACK_LINE(290)
		return true;
	}
	HX_STACK_LINE(293)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,unschedule,return )

Dynamic Events_obj::tag_properties( Dynamic _properties,::String _name,int _count){
	HX_STACK_FRAME("luxe.Events","tag_properties",0x704843d5,"luxe.Events.tag_properties","luxe/Events.hx",299,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_properties,"_properties")
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_count,"_count")
	HX_STACK_LINE(301)
	{
		HX_STACK_LINE(301)
		bool tmp = (_properties == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(301)
		if ((tmp)){
			struct _Function_3_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Events.hx",301,0xab6dc64c)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(301)
			Dynamic tmp1 = _Function_3_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(301)
			_properties = tmp1;
		}
		HX_STACK_LINE(301)
		_properties;
	}
	HX_STACK_LINE(304)
	Dynamic tmp = _properties;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(304)
	::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(304)
	::Reflect_obj::setField(tmp,HX_HCSTRING("_event_name_","\x90","\x5c","\x2e","\x17"),tmp1);
	HX_STACK_LINE(306)
	Dynamic tmp2 = _properties;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(306)
	int tmp3 = _count;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(306)
	::Reflect_obj::setField(tmp2,HX_HCSTRING("_event_connection_count_","\xcd","\x68","\xf2","\xd6"),tmp3);
	HX_STACK_LINE(308)
	Dynamic tmp4 = _properties;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(308)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC3(Events_obj,tag_properties,return )


Events_obj::Events_obj()
{
}

void Events_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Events);
	HX_MARK_MEMBER_NAME(event_queue,"event_queue");
	HX_MARK_MEMBER_NAME(event_connections,"event_connections");
	HX_MARK_MEMBER_NAME(event_slots,"event_slots");
	HX_MARK_MEMBER_NAME(event_filters,"event_filters");
	HX_MARK_MEMBER_NAME(event_schedules,"event_schedules");
	HX_MARK_MEMBER_NAME(event_queue_count,"event_queue_count");
	HX_MARK_END_CLASS();
}

void Events_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(event_queue,"event_queue");
	HX_VISIT_MEMBER_NAME(event_connections,"event_connections");
	HX_VISIT_MEMBER_NAME(event_slots,"event_slots");
	HX_VISIT_MEMBER_NAME(event_filters,"event_filters");
	HX_VISIT_MEMBER_NAME(event_schedules,"event_schedules");
	HX_VISIT_MEMBER_NAME(event_queue_count,"event_queue_count");
}

Dynamic Events_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fire") ) { return fire_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"queue") ) { return queue_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"listen") ) { return listen_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"dequeue") ) { return dequeue_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"unlisten") ) { return unlisten_dyn(); }
		if (HX_FIELD_EQ(inName,"schedule") ) { return schedule_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unschedule") ) { return unschedule_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"event_queue") ) { return event_queue; }
		if (HX_FIELD_EQ(inName,"event_slots") ) { return event_slots; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"event_filters") ) { return event_filters; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tag_properties") ) { return tag_properties_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"event_schedules") ) { return event_schedules; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"event_connections") ) { return event_connections; }
		if (HX_FIELD_EQ(inName,"event_queue_count") ) { return event_queue_count; }
		if (HX_FIELD_EQ(inName,"does_filter_event") ) { return does_filter_event_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Events_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"event_queue") ) { event_queue=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"event_slots") ) { event_slots=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"event_filters") ) { event_filters=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"event_schedules") ) { event_schedules=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"event_connections") ) { event_connections=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"event_queue_count") ) { event_queue_count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Events_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("event_queue","\x6c","\xac","\x8a","\x78"));
	outFields->push(HX_HCSTRING("event_connections","\xb0","\xaf","\xa0","\x64"));
	outFields->push(HX_HCSTRING("event_slots","\x90","\x7f","\x6c","\x99"));
	outFields->push(HX_HCSTRING("event_filters","\x56","\x6d","\x50","\x23"));
	outFields->push(HX_HCSTRING("event_schedules","\x97","\x6a","\x3a","\x12"));
	outFields->push(HX_HCSTRING("event_queue_count","\x7c","\x51","\x2c","\xb9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Events_obj,event_queue),HX_HCSTRING("event_queue","\x6c","\xac","\x8a","\x78")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Events_obj,event_connections),HX_HCSTRING("event_connections","\xb0","\xaf","\xa0","\x64")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Events_obj,event_slots),HX_HCSTRING("event_slots","\x90","\x7f","\x6c","\x99")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Events_obj,event_filters),HX_HCSTRING("event_filters","\x56","\x6d","\x50","\x23")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Events_obj,event_schedules),HX_HCSTRING("event_schedules","\x97","\x6a","\x3a","\x12")},
	{hx::fsInt,(int)offsetof(Events_obj,event_queue_count),HX_HCSTRING("event_queue_count","\x7c","\x51","\x2c","\xb9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("event_queue","\x6c","\xac","\x8a","\x78"),
	HX_HCSTRING("event_connections","\xb0","\xaf","\xa0","\x64"),
	HX_HCSTRING("event_slots","\x90","\x7f","\x6c","\x99"),
	HX_HCSTRING("event_filters","\x56","\x6d","\x50","\x23"),
	HX_HCSTRING("event_schedules","\x97","\x6a","\x3a","\x12"),
	HX_HCSTRING("event_queue_count","\x7c","\x51","\x2c","\xb9"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("does_filter_event","\x99","\xb3","\x20","\xec"),
	HX_HCSTRING("listen","\x47","\xc8","\xf9","\xef"),
	HX_HCSTRING("unlisten","\x60","\xf7","\x40","\xf2"),
	HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"),
	HX_HCSTRING("dequeue","\x70","\x62","\x58","\xfe"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),
	HX_HCSTRING("schedule","\x57","\xca","\x7e","\xc5"),
	HX_HCSTRING("unschedule","\xb0","\xb1","\x42","\x4b"),
	HX_HCSTRING("tag_properties","\xf8","\x38","\x17","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Events_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Events_obj::__mClass,"__mClass");
};

#endif

hx::Class Events_obj::__mClass;

void Events_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Events","\xf1","\x60","\xc8","\xf5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Events_obj >;
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
