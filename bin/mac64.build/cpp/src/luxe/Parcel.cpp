#include <hxcpp.h>

#include "linc_timestamp.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
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
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Parcel
#include <luxe/Parcel.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_Timer
#include <luxe/Timer.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_Timer
#include <snow/api/Timer.h>
#endif
#ifndef INCLUDED_snow_core_Runtime
#include <snow/core/Runtime.h>
#endif
#ifndef INCLUDED_snow_core_native_Runtime
#include <snow/core/native/Runtime.h>
#endif
#ifndef INCLUDED_snow_modules_sdl_Runtime
#include <snow/modules/sdl/Runtime.h>
#endif
namespace luxe{

Void Parcel_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.Parcel","new",0xe0269013,"luxe.Parcel.new","luxe/Parcel.hx",74,0x19b0ca9c)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(103)
	this->load_start_delay = ((Float)0.2);
	HX_STACK_LINE(102)
	this->load_time_spacing = ((Float)0.05);
	HX_STACK_LINE(101)
	this->start_load = ((Float)0.0);
	HX_STACK_LINE(89)
	this->time_to_load = ((Float)0.0);
	HX_STACK_LINE(107)
	{
		HX_STACK_LINE(107)
		bool tmp = (_options == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		if ((tmp)){
			struct _Function_3_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",107,0x19b0ca9c)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(107)
			Dynamic tmp1 = _Function_3_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(107)
			_options = tmp1;
		}
		HX_STACK_LINE(107)
		_options;
	}
	HX_STACK_LINE(108)
	{
		HX_STACK_LINE(108)
		bool tmp = (_options->__Field(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		if ((tmp)){
			HX_STACK_LINE(108)
			::luxe::Resources tmp1 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(108)
			_options->__FieldRef(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2")) = tmp1;
		}
		HX_STACK_LINE(108)
		_options->__Field(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"), hx::paccDynamic );
	}
	HX_STACK_LINE(109)
	{
		HX_STACK_LINE(109)
		bool tmp = (_options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(109)
		if ((tmp)){
			HX_STACK_LINE(109)
			::luxe::utils::Utils tmp1 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(109)
			::String tmp2 = tmp1->uniqueid(null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(109)
			_options->__FieldRef(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")) = tmp2;
		}
		HX_STACK_LINE(109)
		_options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(111)
	bool tmp = (_options->__Field(HX_HCSTRING("oncomplete","\xd8","\x18","\xcd","\x83"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	if ((tmp)){
		HX_STACK_LINE(111)
		this->oncomplete = _options->__Field(HX_HCSTRING("oncomplete","\xd8","\x18","\xcd","\x83"), hx::paccDynamic );
	}
	HX_STACK_LINE(112)
	bool tmp1 = (_options->__Field(HX_HCSTRING("onprogress","\xcc","\x0f","\x30","\x8a"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	if ((tmp1)){
		HX_STACK_LINE(112)
		this->onprogress = _options->__Field(HX_HCSTRING("onprogress","\xcc","\x0f","\x30","\x8a"), hx::paccDynamic );
	}
	HX_STACK_LINE(113)
	bool tmp2 = (_options->__Field(HX_HCSTRING("onfailed","\x1c","\x48","\x17","\x93"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	if ((tmp2)){
		HX_STACK_LINE(113)
		this->onfailed = _options->__Field(HX_HCSTRING("onfailed","\x1c","\x48","\x17","\x93"), hx::paccDynamic );
	}
	HX_STACK_LINE(115)
	bool tmp3 = (_options->__Field(HX_HCSTRING("load_time_spacing","\x0a","\xc7","\x97","\x88"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(115)
	if ((tmp3)){
		HX_STACK_LINE(115)
		this->load_time_spacing = _options->__Field(HX_HCSTRING("load_time_spacing","\x0a","\xc7","\x97","\x88"), hx::paccDynamic );
	}
	HX_STACK_LINE(116)
	bool tmp4 = (_options->__Field(HX_HCSTRING("load_start_delay","\xcd","\xf1","\xb2","\x20"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(116)
	if ((tmp4)){
		HX_STACK_LINE(116)
		this->load_start_delay = _options->__Field(HX_HCSTRING("load_start_delay","\xcd","\xf1","\xb2","\x20"), hx::paccDynamic );
	}
	HX_STACK_LINE(118)
	this->state = (int)0;
	HX_STACK_LINE(119)
	this->loaded = Array_obj< ::String >::__new();
	HX_STACK_LINE(120)
	::luxe::Emitter tmp5 = ::luxe::Emitter_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(120)
	this->emitter = tmp5;
	HX_STACK_LINE(121)
	this->_system = _options->__Field(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"), hx::paccDynamic );
	HX_STACK_LINE(122)
	this->id = _options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
	HX_STACK_LINE(123)
	Dynamic tmp6 = this->empty_list();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(123)
	this->list = tmp6;
	HX_STACK_LINE(125)
	bool tmp7 = (_options->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(125)
	if ((tmp7)){
		HX_STACK_LINE(125)
		Dynamic tmp8 = this->list;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(125)
		tmp8->__FieldRef(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")) = _options->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic );
	}
	HX_STACK_LINE(126)
	bool tmp8 = (_options->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(126)
	if ((tmp8)){
		HX_STACK_LINE(126)
		Dynamic tmp9 = this->list;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(126)
		tmp9->__FieldRef(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d")) = _options->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic );
	}
	HX_STACK_LINE(127)
	bool tmp9 = (_options->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(127)
	if ((tmp9)){
		HX_STACK_LINE(127)
		Dynamic tmp10 = this->list;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(127)
		tmp10->__FieldRef(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54")) = _options->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic );
	}
	HX_STACK_LINE(128)
	bool tmp10 = (_options->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(128)
	if ((tmp10)){
		HX_STACK_LINE(128)
		Dynamic tmp11 = this->list;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(128)
		tmp11->__FieldRef(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65")) = _options->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic );
	}
	HX_STACK_LINE(129)
	bool tmp11 = (_options->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(129)
	if ((tmp11)){
		HX_STACK_LINE(129)
		Dynamic tmp12 = this->list;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(129)
		tmp12->__FieldRef(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04")) = _options->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic );
	}
	HX_STACK_LINE(130)
	bool tmp12 = (_options->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(130)
	if ((tmp12)){
		HX_STACK_LINE(130)
		Dynamic tmp13 = this->list;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(130)
		tmp13->__FieldRef(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f")) = _options->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic );
	}
	HX_STACK_LINE(131)
	bool tmp13 = (_options->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(131)
	if ((tmp13)){
		HX_STACK_LINE(131)
		Dynamic tmp14 = this->list;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(131)
		tmp14->__FieldRef(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32")) = _options->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic );
	}
	HX_STACK_LINE(133)
	::luxe::Resources tmp14 = this->_system;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(133)
	tmp14->track(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//Parcel_obj::~Parcel_obj() { }

Dynamic Parcel_obj::__CreateEmpty() { return  new Parcel_obj; }
hx::ObjectPtr< Parcel_obj > Parcel_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Parcel_obj > _result_ = new Parcel_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Parcel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Parcel_obj > _result_ = new Parcel_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Parcel_obj::on( int ev,Dynamic handler){
{
		HX_STACK_FRAME("luxe.Parcel","on",0x596658cc,"luxe.Parcel.on","luxe/Parcel.hx",139,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ev,"ev")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(139)
		::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		int tmp1 = ev;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		tmp->on(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Parcel_obj,on,(void))

Void Parcel_obj::off( int ev,Dynamic handler){
{
		HX_STACK_FRAME("luxe.Parcel","off",0xe0275322,"luxe.Parcel.off","luxe/Parcel.hx",140,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ev,"ev")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(140)
		::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		int tmp1 = ev;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		tmp->off(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Parcel_obj,off,(void))

Void Parcel_obj::emit( int ev,Dynamic data){
{
		HX_STACK_FRAME("luxe.Parcel","emit",0x3baa9b40,"luxe.Parcel.emit","luxe/Parcel.hx",141,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ev,"ev")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(141)
		::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		int tmp1 = ev;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		Dynamic tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		tmp->emit(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Parcel_obj,emit,(void))

bool Parcel_obj::is_loaded( ::String _id){
	HX_STACK_FRAME("luxe.Parcel","is_loaded",0x1e01b6ed,"luxe.Parcel.is_loaded","luxe/Parcel.hx",145,0x19b0ca9c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(145)
	::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	int tmp1 = this->loaded->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	bool tmp2 = (tmp1 != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(145)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,is_loaded,return )

Void Parcel_obj::load( ::String _load_id){
{
		HX_STACK_FRAME("luxe.Parcel","load",0x404c9713,"luxe.Parcel.load","luxe/Parcel.hx",148,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_load_id,"_load_id")
		HX_STACK_LINE(148)
		Array< ::String > _load_id1 = Array_obj< ::String >::__new().Add(_load_id);		HX_STACK_VAR(_load_id1,"_load_id1");
		HX_STACK_LINE(148)
		::luxe::Parcel _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(150)
		::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		tmp->emit((int)1,hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(152)
		this->state = (int)1;
		HX_STACK_LINE(154)
		::luxe::Timer tmp1 = ::Luxe_obj::timer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(154)
		Float tmp2 = this->load_start_delay;		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::luxe::Parcel,_g,Array< ::String >,_load_id1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/Parcel.hx",154,0x19b0ca9c)
			{
				HX_STACK_LINE(156)
				Float tmp3 = linc::timestamp::now();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(156)
				Float tmp4 = ::snow::modules::sdl::Runtime_obj::timestamp_start;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(156)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(156)
				_g->start_load = tmp5;
				HX_STACK_LINE(158)
				{
					HX_STACK_LINE(158)
					bool tmp6 = (_load_id1->__get((int)0) == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(158)
					if ((tmp6)){
						HX_STACK_LINE(158)
						_load_id1[(int)0] = _g->id;
					}
					HX_STACK_LINE(158)
					_load_id1->__get((int)0);
				}
				HX_STACK_LINE(169)
				int tmp6 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(169)
				int tmp7 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(169)
				int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(169)
				int tmp9 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(169)
				int tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(169)
				int tmp11 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(169)
				int tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(169)
				int tmp13 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(169)
				int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(169)
				int tmp15 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(169)
				int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(169)
				int tmp17 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(169)
				int tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(169)
				bool tmp19 = (tmp18 == (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(169)
				if ((tmp19)){
					HX_STACK_LINE(171)
					{
						HX_STACK_LINE(171)
						_g->state = (int)2;
						HX_STACK_LINE(171)
						Float tmp20 = linc::timestamp::now();		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(171)
						Float tmp21 = ::snow::modules::sdl::Runtime_obj::timestamp_start;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(171)
						Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(171)
						Float tmp23 = _g->start_load;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(171)
						Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(171)
						_g->time_to_load = tmp24;
						HX_STACK_LINE(171)
						::luxe::Parcel tmp25 = _g;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(171)
						_g->emitter->emit((int)4,tmp25);
						HX_STACK_LINE(171)
						bool tmp26 = (_g->oncomplete != null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(171)
						if ((tmp26)){
							HX_STACK_LINE(171)
							::luxe::Parcel tmp27 = _g;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(171)
							_g->oncomplete(tmp27);
						}
					}
					HX_STACK_LINE(172)
					return null();
				}
				HX_STACK_LINE(175)
				Array< int > _index = Array_obj< int >::__new().Add((int)0);		HX_STACK_VAR(_index,"_index");
				HX_STACK_LINE(176)
				int _load_index = (int)0;		HX_STACK_VAR(_load_index,"_load_index");
				HX_STACK_LINE(188)
				{
					HX_STACK_LINE(188)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(188)
					cpp::ArrayBase _g2 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(188)
					while((true)){
						HX_STACK_LINE(188)
						bool tmp20 = (_g1 < _g2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(188)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(188)
						if ((tmp21)){
							HX_STACK_LINE(188)
							break;
						}
						HX_STACK_LINE(188)
						Dynamic tmp22 = _g2->__GetItem(_g1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(188)
						Dynamic _bytes = tmp22;		HX_STACK_VAR(_bytes,"_bytes");
						HX_STACK_LINE(188)
						++(_g1);
						HX_STACK_LINE(190)
						++(_load_index);
						HX_STACK_LINE(192)
						::String tmp23 = _bytes->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(192)
						int tmp24 = _g->loaded->indexOf(tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(192)
						bool tmp25 = (tmp24 != (int)-1);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(192)
						bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(192)
						if ((tmp26)){
							HX_STACK_LINE(194)
							::String tmp27 = _bytes->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(194)
							_g->loaded->push(tmp27);
							HX_STACK_LINE(195)
							::luxe::Timer tmp28 = ::Luxe_obj::timer;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(195)
							Float tmp29 = (_g->load_time_spacing * _load_index);		HX_STACK_VAR(tmp29,"tmp29");

							HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_5_1,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,Dynamic,_bytes)
							int __ArgCount() const { return 0; }
							Void run(){
								HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","luxe/Parcel.hx",197,0x19b0ca9c)
								{
									HX_STACK_LINE(197)
									::String _item_id = _bytes->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_item_id,"_item_id");
									HX_STACK_LINE(197)
									::String tmp30 = _bytes->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(197)
									::snow::api::Promise tmp31 = _g->_system->load_bytes(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(197)
									::snow::api::Promise _load = tmp31;		HX_STACK_VAR(_load,"_load");

									HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_6_1,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
									int __ArgCount() const { return 1; }
									Void run(::luxe::resource::Resource _res){
										HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","luxe/Parcel.hx",197,0x19b0ca9c)
										HX_STACK_ARG(_res,"_res")
										{
											HX_STACK_LINE(197)
											::String tmp32 = _item_id;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(197)
											::String tmp33 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(197)
											::luxe::resource::Resource tmp34 = _res;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(197)
											int tmp35 = ++(_index[(int)0]);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(197)
											int tmp36 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(197)
											int tmp37 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(197)
											int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(197)
											int tmp39 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(197)
											int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(197)
											int tmp41 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(197)
											int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(197)
											int tmp43 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(197)
											int tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(197)
											int tmp45 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(197)
											int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(197)
											int tmp47 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(197)
											int tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(197)
											_g->one_loaded(tmp32,tmp33,tmp34,tmp35,tmp48);
										}
										return null();
									}
									HX_END_LOCAL_FUNC1((void))


									HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_6_2,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
									int __ArgCount() const { return 1; }
									Void run(Dynamic _err){
										HX_STACK_FRAME("*","_Function_6_2",0x5204b87d,"*._Function_6_2","luxe/Parcel.hx",197,0x19b0ca9c)
										HX_STACK_ARG(_err,"_err")
										{
											HX_STACK_LINE(197)
											::String tmp32 = _item_id;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(197)
											::String tmp33 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(197)
											Dynamic tmp34 = _err;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(197)
											int tmp35 = ++(_index[(int)0]);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(197)
											int tmp36 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(197)
											int tmp37 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(197)
											int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(197)
											int tmp39 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(197)
											int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(197)
											int tmp41 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(197)
											int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(197)
											int tmp43 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(197)
											int tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(197)
											int tmp45 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(197)
											int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(197)
											int tmp47 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(197)
											int tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(197)
											_g->one_failed(tmp32,tmp33,tmp34,tmp35,tmp48);
										}
										return null();
									}
									HX_END_LOCAL_FUNC1((void))

									HX_STACK_LINE(197)
									_load->then( Dynamic(new _Function_6_1(_g,_load_id1,_index,_item_id)), Dynamic(new _Function_6_2(_g,_load_id1,_index,_item_id)));
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(195)
							tmp28->schedule(tmp29, Dynamic(new _Function_5_1(_g,_load_id1,_index,_bytes)),null());
						}
						else{
							HX_STACK_LINE(202)
							::String tmp27 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _g->id);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(202)
							::String tmp28 = (tmp27 + HX_HCSTRING(" / already had ","\xae","\x8a","\xa4","\x34"));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(202)
							::String tmp29 = _bytes->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(202)
							::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(202)
							::String tmp31 = (tmp30 + HX_HCSTRING(" loaded, skipped","\xf7","\x9a","\x71","\xd8"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(202)
							::String tmp32 = (HX_HCSTRING("   i / parcel / ","\x80","\x3e","\xbc","\xdf") + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(202)
							Dynamic tmp33 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),202,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(202)
							::haxe::Log_obj::trace(tmp32,tmp33);
							HX_STACK_LINE(203)
							::String tmp34 = _bytes->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(203)
							::String tmp35 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(203)
							::haxe::ds::StringMap tmp36 = _g->_system->cache;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(203)
							::String tmp37 = _bytes->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(203)
							::luxe::resource::Resource tmp38 = tmp36->get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(203)
							::luxe::resource::Resource tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(203)
							int tmp40 = ++(_index[(int)0]);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(203)
							int tmp41 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(203)
							int tmp42 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(203)
							int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(203)
							int tmp44 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(203)
							int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(203)
							int tmp46 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(203)
							int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(203)
							int tmp48 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(203)
							int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(203)
							int tmp50 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(203)
							int tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(203)
							int tmp52 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(203)
							int tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(203)
							_g->one_loaded(tmp34,tmp35,tmp39,tmp40,tmp53);
						}
					}
				}
				HX_STACK_LINE(210)
				{
					HX_STACK_LINE(210)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(210)
					cpp::ArrayBase _g2 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(210)
					while((true)){
						HX_STACK_LINE(210)
						bool tmp20 = (_g1 < _g2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(210)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(210)
						if ((tmp21)){
							HX_STACK_LINE(210)
							break;
						}
						HX_STACK_LINE(210)
						Dynamic tmp22 = _g2->__GetItem(_g1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(210)
						Dynamic _text = tmp22;		HX_STACK_VAR(_text,"_text");
						HX_STACK_LINE(210)
						++(_g1);
						HX_STACK_LINE(212)
						++(_load_index);
						HX_STACK_LINE(214)
						::String tmp23 = _text->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(214)
						int tmp24 = _g->loaded->indexOf(tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(214)
						bool tmp25 = (tmp24 != (int)-1);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(214)
						bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(214)
						if ((tmp26)){
							HX_STACK_LINE(216)
							::String tmp27 = _text->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(216)
							_g->loaded->push(tmp27);
							HX_STACK_LINE(217)
							::luxe::Timer tmp28 = ::Luxe_obj::timer;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(217)
							Float tmp29 = (_g->load_time_spacing * _load_index);		HX_STACK_VAR(tmp29,"tmp29");

							HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_5_1,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,Dynamic,_text)
							int __ArgCount() const { return 0; }
							Void run(){
								HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","luxe/Parcel.hx",219,0x19b0ca9c)
								{
									HX_STACK_LINE(219)
									::String _item_id = _text->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_item_id,"_item_id");
									HX_STACK_LINE(219)
									::String tmp30 = _text->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(219)
									::snow::api::Promise tmp31 = _g->_system->load_text(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(219)
									::snow::api::Promise _load = tmp31;		HX_STACK_VAR(_load,"_load");

									HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_6_1,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
									int __ArgCount() const { return 1; }
									Void run(::luxe::resource::Resource _res){
										HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","luxe/Parcel.hx",219,0x19b0ca9c)
										HX_STACK_ARG(_res,"_res")
										{
											HX_STACK_LINE(219)
											::String tmp32 = _item_id;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(219)
											::String tmp33 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(219)
											::luxe::resource::Resource tmp34 = _res;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(219)
											int tmp35 = ++(_index[(int)0]);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(219)
											int tmp36 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(219)
											int tmp37 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(219)
											int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(219)
											int tmp39 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(219)
											int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(219)
											int tmp41 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(219)
											int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(219)
											int tmp43 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(219)
											int tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(219)
											int tmp45 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(219)
											int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(219)
											int tmp47 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(219)
											int tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(219)
											_g->one_loaded(tmp32,tmp33,tmp34,tmp35,tmp48);
										}
										return null();
									}
									HX_END_LOCAL_FUNC1((void))


									HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_6_2,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
									int __ArgCount() const { return 1; }
									Void run(Dynamic _err){
										HX_STACK_FRAME("*","_Function_6_2",0x5204b87d,"*._Function_6_2","luxe/Parcel.hx",219,0x19b0ca9c)
										HX_STACK_ARG(_err,"_err")
										{
											HX_STACK_LINE(219)
											::String tmp32 = _item_id;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(219)
											::String tmp33 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(219)
											Dynamic tmp34 = _err;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(219)
											int tmp35 = ++(_index[(int)0]);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(219)
											int tmp36 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(219)
											int tmp37 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(219)
											int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(219)
											int tmp39 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(219)
											int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(219)
											int tmp41 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(219)
											int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(219)
											int tmp43 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(219)
											int tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(219)
											int tmp45 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(219)
											int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(219)
											int tmp47 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(219)
											int tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(219)
											_g->one_failed(tmp32,tmp33,tmp34,tmp35,tmp48);
										}
										return null();
									}
									HX_END_LOCAL_FUNC1((void))

									HX_STACK_LINE(219)
									_load->then( Dynamic(new _Function_6_1(_g,_load_id1,_index,_item_id)), Dynamic(new _Function_6_2(_g,_load_id1,_index,_item_id)));
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(217)
							tmp28->schedule(tmp29, Dynamic(new _Function_5_1(_g,_load_id1,_index,_text)),null());
						}
						else{
							HX_STACK_LINE(224)
							::String tmp27 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _g->id);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(224)
							::String tmp28 = (tmp27 + HX_HCSTRING(" / already had ","\xae","\x8a","\xa4","\x34"));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(224)
							::String tmp29 = _text->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(224)
							::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(224)
							::String tmp31 = (tmp30 + HX_HCSTRING(" loaded, skipped","\xf7","\x9a","\x71","\xd8"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(224)
							::String tmp32 = (HX_HCSTRING("   i / parcel / ","\x80","\x3e","\xbc","\xdf") + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(224)
							Dynamic tmp33 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),224,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(224)
							::haxe::Log_obj::trace(tmp32,tmp33);
							HX_STACK_LINE(225)
							::String tmp34 = _text->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(225)
							::String tmp35 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(225)
							::haxe::ds::StringMap tmp36 = _g->_system->cache;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(225)
							::String tmp37 = _text->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(225)
							::luxe::resource::Resource tmp38 = tmp36->get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(225)
							::luxe::resource::Resource tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(225)
							int tmp40 = ++(_index[(int)0]);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(225)
							int tmp41 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(225)
							int tmp42 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(225)
							int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(225)
							int tmp44 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(225)
							int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(225)
							int tmp46 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(225)
							int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(225)
							int tmp48 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(225)
							int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(225)
							int tmp50 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(225)
							int tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(225)
							int tmp52 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(225)
							int tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(225)
							_g->one_loaded(tmp34,tmp35,tmp39,tmp40,tmp53);
						}
					}
				}
				HX_STACK_LINE(232)
				{
					HX_STACK_LINE(232)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(232)
					cpp::ArrayBase _g2 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(232)
					while((true)){
						HX_STACK_LINE(232)
						bool tmp20 = (_g1 < _g2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(232)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(232)
						if ((tmp21)){
							HX_STACK_LINE(232)
							break;
						}
						HX_STACK_LINE(232)
						Dynamic tmp22 = _g2->__GetItem(_g1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(232)
						Dynamic _json = tmp22;		HX_STACK_VAR(_json,"_json");
						HX_STACK_LINE(232)
						++(_g1);
						HX_STACK_LINE(234)
						++(_load_index);
						HX_STACK_LINE(236)
						::String tmp23 = _json->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(236)
						int tmp24 = _g->loaded->indexOf(tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(236)
						bool tmp25 = (tmp24 != (int)-1);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(236)
						bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(236)
						if ((tmp26)){
							HX_STACK_LINE(238)
							::String tmp27 = _json->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(238)
							_g->loaded->push(tmp27);
							HX_STACK_LINE(239)
							::luxe::Timer tmp28 = ::Luxe_obj::timer;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(239)
							Float tmp29 = (_g->load_time_spacing * _load_index);		HX_STACK_VAR(tmp29,"tmp29");

							HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_5_1,::luxe::Parcel,_g,Dynamic,_json,Array< ::String >,_load_id1,Array< int >,_index)
							int __ArgCount() const { return 0; }
							Void run(){
								HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","luxe/Parcel.hx",241,0x19b0ca9c)
								{
									HX_STACK_LINE(241)
									::String _item_id = _json->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_item_id,"_item_id");
									HX_STACK_LINE(241)
									::String tmp30 = _json->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(241)
									::snow::api::Promise tmp31 = _g->_system->load_json(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(241)
									::snow::api::Promise _load = tmp31;		HX_STACK_VAR(_load,"_load");

									HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_6_1,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
									int __ArgCount() const { return 1; }
									Void run(::luxe::resource::Resource _res){
										HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","luxe/Parcel.hx",241,0x19b0ca9c)
										HX_STACK_ARG(_res,"_res")
										{
											HX_STACK_LINE(241)
											::String tmp32 = _item_id;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(241)
											::String tmp33 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(241)
											::luxe::resource::Resource tmp34 = _res;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(241)
											int tmp35 = ++(_index[(int)0]);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(241)
											int tmp36 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(241)
											int tmp37 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(241)
											int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(241)
											int tmp39 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(241)
											int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(241)
											int tmp41 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(241)
											int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(241)
											int tmp43 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(241)
											int tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(241)
											int tmp45 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(241)
											int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(241)
											int tmp47 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(241)
											int tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(241)
											_g->one_loaded(tmp32,tmp33,tmp34,tmp35,tmp48);
										}
										return null();
									}
									HX_END_LOCAL_FUNC1((void))


									HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_6_2,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
									int __ArgCount() const { return 1; }
									Void run(Dynamic _err){
										HX_STACK_FRAME("*","_Function_6_2",0x5204b87d,"*._Function_6_2","luxe/Parcel.hx",241,0x19b0ca9c)
										HX_STACK_ARG(_err,"_err")
										{
											HX_STACK_LINE(241)
											::String tmp32 = _item_id;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(241)
											::String tmp33 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(241)
											Dynamic tmp34 = _err;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(241)
											int tmp35 = ++(_index[(int)0]);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(241)
											int tmp36 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(241)
											int tmp37 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(241)
											int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(241)
											int tmp39 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(241)
											int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(241)
											int tmp41 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(241)
											int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(241)
											int tmp43 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(241)
											int tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(241)
											int tmp45 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(241)
											int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(241)
											int tmp47 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(241)
											int tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(241)
											_g->one_failed(tmp32,tmp33,tmp34,tmp35,tmp48);
										}
										return null();
									}
									HX_END_LOCAL_FUNC1((void))

									HX_STACK_LINE(241)
									_load->then( Dynamic(new _Function_6_1(_g,_load_id1,_index,_item_id)), Dynamic(new _Function_6_2(_g,_load_id1,_index,_item_id)));
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(239)
							tmp28->schedule(tmp29, Dynamic(new _Function_5_1(_g,_json,_load_id1,_index)),null());
						}
						else{
							HX_STACK_LINE(246)
							::String tmp27 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _g->id);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(246)
							::String tmp28 = (tmp27 + HX_HCSTRING(" / already had ","\xae","\x8a","\xa4","\x34"));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(246)
							::String tmp29 = _json->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(246)
							::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(246)
							::String tmp31 = (tmp30 + HX_HCSTRING(" loaded, skipped","\xf7","\x9a","\x71","\xd8"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(246)
							::String tmp32 = (HX_HCSTRING("   i / parcel / ","\x80","\x3e","\xbc","\xdf") + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(246)
							Dynamic tmp33 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),246,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(246)
							::haxe::Log_obj::trace(tmp32,tmp33);
							HX_STACK_LINE(247)
							::String tmp34 = _json->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(247)
							::String tmp35 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(247)
							::haxe::ds::StringMap tmp36 = _g->_system->cache;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(247)
							::String tmp37 = _json->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(247)
							::luxe::resource::Resource tmp38 = tmp36->get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(247)
							::luxe::resource::Resource tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(247)
							int tmp40 = ++(_index[(int)0]);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(247)
							int tmp41 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(247)
							int tmp42 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(247)
							int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(247)
							int tmp44 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(247)
							int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(247)
							int tmp46 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(247)
							int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(247)
							int tmp48 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(247)
							int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(247)
							int tmp50 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(247)
							int tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(247)
							int tmp52 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(247)
							int tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(247)
							_g->one_loaded(tmp34,tmp35,tmp39,tmp40,tmp53);
						}
					}
				}
				HX_STACK_LINE(254)
				{
					HX_STACK_LINE(254)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(254)
					cpp::ArrayBase _g2 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(254)
					while((true)){
						HX_STACK_LINE(254)
						bool tmp20 = (_g1 < _g2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(254)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(254)
						if ((tmp21)){
							HX_STACK_LINE(254)
							break;
						}
						HX_STACK_LINE(254)
						Dynamic tmp22 = _g2->__GetItem(_g1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(254)
						Dynamic _texture = tmp22;		HX_STACK_VAR(_texture,"_texture");
						HX_STACK_LINE(254)
						++(_g1);
						HX_STACK_LINE(256)
						++(_load_index);
						HX_STACK_LINE(258)
						::String tmp23 = _texture->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(258)
						int tmp24 = _g->loaded->indexOf(tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(258)
						bool tmp25 = (tmp24 != (int)-1);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(258)
						bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(258)
						if ((tmp26)){
							HX_STACK_LINE(260)
							::String tmp27 = _texture->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(260)
							_g->loaded->push(tmp27);
							HX_STACK_LINE(261)
							::luxe::Timer tmp28 = ::Luxe_obj::timer;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(261)
							Float tmp29 = (_g->load_time_spacing * _load_index);		HX_STACK_VAR(tmp29,"tmp29");

							HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_5_1,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,Dynamic,_texture)
							int __ArgCount() const { return 0; }
							Void run(){
								HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","luxe/Parcel.hx",261,0x19b0ca9c)
								{
									HX_STACK_LINE(263)
									::String tmp30 = _texture->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
									struct _Function_6_1{
										inline static Dynamic Block( Dynamic &_texture){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",263,0x19b0ca9c)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_HCSTRING("load_premultiply_alpha","\x8d","\xfb","\xf5","\xac") , _texture->__Field(HX_HCSTRING("load_premultiply_alpha","\x8d","\xfb","\xf5","\xac"), hx::paccDynamic ),false);
												__result->Add(HX_HCSTRING("filter_min","\x4b","\xb2","\x89","\x60") , _texture->__Field(HX_HCSTRING("filter_min","\x4b","\xb2","\x89","\x60"), hx::paccDynamic ),false);
												__result->Add(HX_HCSTRING("filter_mag","\x4c","\xab","\x89","\x60") , _texture->__Field(HX_HCSTRING("filter_mag","\x4c","\xab","\x89","\x60"), hx::paccDynamic ),false);
												__result->Add(HX_HCSTRING("clamp_s","\xef","\xba","\x97","\x65") , _texture->__Field(HX_HCSTRING("clamp_s","\xef","\xba","\x97","\x65"), hx::paccDynamic ),false);
												__result->Add(HX_HCSTRING("clamp_t","\xf0","\xba","\x97","\x65") , _texture->__Field(HX_HCSTRING("clamp_t","\xf0","\xba","\x97","\x65"), hx::paccDynamic ),false);
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(263)
									Dynamic tmp31 = _Function_6_1::Block(_texture);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(263)
									::snow::api::Promise tmp32 = _g->_system->load_texture(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(263)
									::snow::api::Promise _load = tmp32;		HX_STACK_VAR(_load,"_load");
									HX_STACK_LINE(271)
									{
										HX_STACK_LINE(271)
										::String _item_id = _texture->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_item_id,"_item_id");

										HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_7_1,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
										int __ArgCount() const { return 1; }
										Void run(::luxe::resource::Resource _res){
											HX_STACK_FRAME("*","_Function_7_1",0x52057abd,"*._Function_7_1","luxe/Parcel.hx",271,0x19b0ca9c)
											HX_STACK_ARG(_res,"_res")
											{
												HX_STACK_LINE(271)
												::String tmp33 = _item_id;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(271)
												::String tmp34 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(271)
												::luxe::resource::Resource tmp35 = _res;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(271)
												int tmp36 = ++(_index[(int)0]);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(271)
												int tmp37 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(271)
												int tmp38 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(271)
												int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(271)
												int tmp40 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(271)
												int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(271)
												int tmp42 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(271)
												int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(271)
												int tmp44 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(271)
												int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(271)
												int tmp46 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(271)
												int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(271)
												int tmp48 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(271)
												int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(271)
												_g->one_loaded(tmp33,tmp34,tmp35,tmp36,tmp49);
											}
											return null();
										}
										HX_END_LOCAL_FUNC1((void))


										HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_7_2,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
										int __ArgCount() const { return 1; }
										Void run(Dynamic _err){
											HX_STACK_FRAME("*","_Function_7_2",0x52057abe,"*._Function_7_2","luxe/Parcel.hx",271,0x19b0ca9c)
											HX_STACK_ARG(_err,"_err")
											{
												HX_STACK_LINE(271)
												::String tmp33 = _item_id;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(271)
												::String tmp34 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(271)
												Dynamic tmp35 = _err;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(271)
												int tmp36 = ++(_index[(int)0]);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(271)
												int tmp37 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(271)
												int tmp38 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(271)
												int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(271)
												int tmp40 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(271)
												int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(271)
												int tmp42 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(271)
												int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(271)
												int tmp44 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(271)
												int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(271)
												int tmp46 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(271)
												int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(271)
												int tmp48 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(271)
												int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(271)
												_g->one_failed(tmp33,tmp34,tmp35,tmp36,tmp49);
											}
											return null();
										}
										HX_END_LOCAL_FUNC1((void))

										HX_STACK_LINE(271)
										_load->then( Dynamic(new _Function_7_1(_g,_load_id1,_index,_item_id)), Dynamic(new _Function_7_2(_g,_load_id1,_index,_item_id)));
									}
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(261)
							tmp28->schedule(tmp29, Dynamic(new _Function_5_1(_g,_load_id1,_index,_texture)),null());
						}
						else{
							HX_STACK_LINE(276)
							::String tmp27 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _g->id);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(276)
							::String tmp28 = (tmp27 + HX_HCSTRING(" / already had ","\xae","\x8a","\xa4","\x34"));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(276)
							::String tmp29 = _texture->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(276)
							::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(276)
							::String tmp31 = (tmp30 + HX_HCSTRING(" loaded, skipped","\xf7","\x9a","\x71","\xd8"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(276)
							::String tmp32 = (HX_HCSTRING("   i / parcel / ","\x80","\x3e","\xbc","\xdf") + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(276)
							Dynamic tmp33 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),276,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(276)
							::haxe::Log_obj::trace(tmp32,tmp33);
							HX_STACK_LINE(277)
							::String tmp34 = _texture->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(277)
							::String tmp35 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(277)
							::haxe::ds::StringMap tmp36 = _g->_system->cache;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(277)
							::String tmp37 = _texture->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(277)
							::luxe::resource::Resource tmp38 = tmp36->get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(277)
							::luxe::resource::Resource tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(277)
							int tmp40 = ++(_index[(int)0]);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(277)
							int tmp41 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(277)
							int tmp42 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(277)
							int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(277)
							int tmp44 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(277)
							int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(277)
							int tmp46 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(277)
							int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(277)
							int tmp48 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(277)
							int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(277)
							int tmp50 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(277)
							int tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(277)
							int tmp52 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(277)
							int tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(277)
							_g->one_loaded(tmp34,tmp35,tmp39,tmp40,tmp53);
						}
					}
				}
				HX_STACK_LINE(284)
				{
					HX_STACK_LINE(284)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(284)
					cpp::ArrayBase _g2 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(284)
					while((true)){
						HX_STACK_LINE(284)
						bool tmp20 = (_g1 < _g2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(284)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(284)
						if ((tmp21)){
							HX_STACK_LINE(284)
							break;
						}
						HX_STACK_LINE(284)
						Dynamic tmp22 = _g2->__GetItem(_g1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(284)
						Dynamic _font = tmp22;		HX_STACK_VAR(_font,"_font");
						HX_STACK_LINE(284)
						++(_g1);
						HX_STACK_LINE(286)
						++(_load_index);
						HX_STACK_LINE(288)
						::String tmp23 = _font->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(288)
						int tmp24 = _g->loaded->indexOf(tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(288)
						bool tmp25 = (tmp24 != (int)-1);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(288)
						bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(288)
						if ((tmp26)){
							HX_STACK_LINE(290)
							::String tmp27 = _font->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(290)
							_g->loaded->push(tmp27);
							HX_STACK_LINE(291)
							::luxe::Timer tmp28 = ::Luxe_obj::timer;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(291)
							Float tmp29 = (_g->load_time_spacing * _load_index);		HX_STACK_VAR(tmp29,"tmp29");

							HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_5_1,::luxe::Parcel,_g,Dynamic,_font,Array< ::String >,_load_id1,Array< int >,_index)
							int __ArgCount() const { return 0; }
							Void run(){
								HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","luxe/Parcel.hx",291,0x19b0ca9c)
								{
									HX_STACK_LINE(293)
									::String tmp30 = _font->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
									struct _Function_6_1{
										inline static Dynamic Block( Dynamic &_font){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",293,0x19b0ca9c)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_HCSTRING("texture_path","\xc9","\x3e","\xd5","\x62") , _font->__Field(HX_HCSTRING("texture_path","\xc9","\x3e","\xd5","\x62"), hx::paccDynamic ),false);
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(293)
									Dynamic tmp31 = _Function_6_1::Block(_font);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(293)
									::snow::api::Promise tmp32 = _g->_system->load_font(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(293)
									::snow::api::Promise _load = tmp32;		HX_STACK_VAR(_load,"_load");
									HX_STACK_LINE(297)
									{
										HX_STACK_LINE(297)
										::String _item_id = _font->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_item_id,"_item_id");

										HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_7_1,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
										int __ArgCount() const { return 1; }
										Void run(::luxe::resource::Resource _res){
											HX_STACK_FRAME("*","_Function_7_1",0x52057abd,"*._Function_7_1","luxe/Parcel.hx",297,0x19b0ca9c)
											HX_STACK_ARG(_res,"_res")
											{
												HX_STACK_LINE(297)
												::String tmp33 = _item_id;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(297)
												::String tmp34 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(297)
												::luxe::resource::Resource tmp35 = _res;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(297)
												int tmp36 = ++(_index[(int)0]);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(297)
												int tmp37 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(297)
												int tmp38 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(297)
												int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(297)
												int tmp40 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(297)
												int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(297)
												int tmp42 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(297)
												int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(297)
												int tmp44 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(297)
												int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(297)
												int tmp46 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(297)
												int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(297)
												int tmp48 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(297)
												int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(297)
												_g->one_loaded(tmp33,tmp34,tmp35,tmp36,tmp49);
											}
											return null();
										}
										HX_END_LOCAL_FUNC1((void))


										HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_7_2,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
										int __ArgCount() const { return 1; }
										Void run(Dynamic _err){
											HX_STACK_FRAME("*","_Function_7_2",0x52057abe,"*._Function_7_2","luxe/Parcel.hx",297,0x19b0ca9c)
											HX_STACK_ARG(_err,"_err")
											{
												HX_STACK_LINE(297)
												::String tmp33 = _item_id;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(297)
												::String tmp34 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(297)
												Dynamic tmp35 = _err;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(297)
												int tmp36 = ++(_index[(int)0]);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(297)
												int tmp37 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(297)
												int tmp38 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(297)
												int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(297)
												int tmp40 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(297)
												int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(297)
												int tmp42 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(297)
												int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(297)
												int tmp44 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(297)
												int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(297)
												int tmp46 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(297)
												int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(297)
												int tmp48 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(297)
												int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(297)
												_g->one_failed(tmp33,tmp34,tmp35,tmp36,tmp49);
											}
											return null();
										}
										HX_END_LOCAL_FUNC1((void))

										HX_STACK_LINE(297)
										_load->then( Dynamic(new _Function_7_1(_g,_load_id1,_index,_item_id)), Dynamic(new _Function_7_2(_g,_load_id1,_index,_item_id)));
									}
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(291)
							tmp28->schedule(tmp29, Dynamic(new _Function_5_1(_g,_font,_load_id1,_index)),null());
						}
						else{
							HX_STACK_LINE(302)
							::String tmp27 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _g->id);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(302)
							::String tmp28 = (tmp27 + HX_HCSTRING(" / already had ","\xae","\x8a","\xa4","\x34"));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(302)
							::String tmp29 = _font->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(302)
							::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(302)
							::String tmp31 = (tmp30 + HX_HCSTRING(" loaded, skipped","\xf7","\x9a","\x71","\xd8"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(302)
							::String tmp32 = (HX_HCSTRING("   i / parcel / ","\x80","\x3e","\xbc","\xdf") + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(302)
							Dynamic tmp33 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),302,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(302)
							::haxe::Log_obj::trace(tmp32,tmp33);
							HX_STACK_LINE(303)
							::String tmp34 = _font->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(303)
							::String tmp35 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(303)
							::haxe::ds::StringMap tmp36 = _g->_system->cache;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(303)
							::String tmp37 = _font->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(303)
							::luxe::resource::Resource tmp38 = tmp36->get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(303)
							::luxe::resource::Resource tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(303)
							int tmp40 = ++(_index[(int)0]);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(303)
							int tmp41 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(303)
							int tmp42 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(303)
							int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(303)
							int tmp44 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(303)
							int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(303)
							int tmp46 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(303)
							int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(303)
							int tmp48 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(303)
							int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(303)
							int tmp50 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(303)
							int tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(303)
							int tmp52 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(303)
							int tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(303)
							_g->one_loaded(tmp34,tmp35,tmp39,tmp40,tmp53);
						}
					}
				}
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(310)
					cpp::ArrayBase _g2 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(310)
					while((true)){
						HX_STACK_LINE(310)
						bool tmp20 = (_g1 < _g2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(310)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(310)
						if ((tmp21)){
							HX_STACK_LINE(310)
							break;
						}
						HX_STACK_LINE(310)
						Dynamic tmp22 = _g2->__GetItem(_g1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(310)
						Dynamic _shader = tmp22;		HX_STACK_VAR(_shader,"_shader");
						HX_STACK_LINE(310)
						++(_g1);
						HX_STACK_LINE(312)
						++(_load_index);
						HX_STACK_LINE(314)
						::String tmp23 = _shader->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(314)
						int tmp24 = _g->loaded->indexOf(tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(314)
						bool tmp25 = (tmp24 != (int)-1);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(314)
						bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(314)
						if ((tmp26)){
							HX_STACK_LINE(316)
							::String tmp27 = _shader->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(316)
							_g->loaded->push(tmp27);
							HX_STACK_LINE(317)
							::luxe::Timer tmp28 = ::Luxe_obj::timer;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(317)
							Float tmp29 = (_g->load_time_spacing * _load_index);		HX_STACK_VAR(tmp29,"tmp29");

							HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_5_1,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,Dynamic,_shader)
							int __ArgCount() const { return 0; }
							Void run(){
								HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","luxe/Parcel.hx",317,0x19b0ca9c)
								{
									HX_STACK_LINE(319)
									::String tmp30 = _shader->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
									struct _Function_6_1{
										inline static Dynamic Block( Dynamic &_shader){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",319,0x19b0ca9c)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44") , _shader->__Field(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44"), hx::paccDynamic ),false);
												__result->Add(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d") , _shader->__Field(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d"), hx::paccDynamic ),false);
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(319)
									Dynamic tmp31 = _Function_6_1::Block(_shader);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(319)
									::snow::api::Promise tmp32 = _g->_system->load_shader(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(319)
									::snow::api::Promise _load = tmp32;		HX_STACK_VAR(_load,"_load");
									HX_STACK_LINE(324)
									{
										HX_STACK_LINE(324)
										::String _item_id = _shader->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_item_id,"_item_id");

										HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_7_1,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
										int __ArgCount() const { return 1; }
										Void run(::luxe::resource::Resource _res){
											HX_STACK_FRAME("*","_Function_7_1",0x52057abd,"*._Function_7_1","luxe/Parcel.hx",324,0x19b0ca9c)
											HX_STACK_ARG(_res,"_res")
											{
												HX_STACK_LINE(324)
												::String tmp33 = _item_id;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(324)
												::String tmp34 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(324)
												::luxe::resource::Resource tmp35 = _res;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(324)
												int tmp36 = ++(_index[(int)0]);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(324)
												int tmp37 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(324)
												int tmp38 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(324)
												int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(324)
												int tmp40 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(324)
												int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(324)
												int tmp42 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(324)
												int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(324)
												int tmp44 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(324)
												int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(324)
												int tmp46 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(324)
												int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(324)
												int tmp48 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(324)
												int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(324)
												_g->one_loaded(tmp33,tmp34,tmp35,tmp36,tmp49);
											}
											return null();
										}
										HX_END_LOCAL_FUNC1((void))


										HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_7_2,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
										int __ArgCount() const { return 1; }
										Void run(Dynamic _err){
											HX_STACK_FRAME("*","_Function_7_2",0x52057abe,"*._Function_7_2","luxe/Parcel.hx",324,0x19b0ca9c)
											HX_STACK_ARG(_err,"_err")
											{
												HX_STACK_LINE(324)
												::String tmp33 = _item_id;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(324)
												::String tmp34 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(324)
												Dynamic tmp35 = _err;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(324)
												int tmp36 = ++(_index[(int)0]);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(324)
												int tmp37 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(324)
												int tmp38 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(324)
												int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(324)
												int tmp40 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(324)
												int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(324)
												int tmp42 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(324)
												int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(324)
												int tmp44 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(324)
												int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(324)
												int tmp46 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(324)
												int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(324)
												int tmp48 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(324)
												int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(324)
												_g->one_failed(tmp33,tmp34,tmp35,tmp36,tmp49);
											}
											return null();
										}
										HX_END_LOCAL_FUNC1((void))

										HX_STACK_LINE(324)
										_load->then( Dynamic(new _Function_7_1(_g,_load_id1,_index,_item_id)), Dynamic(new _Function_7_2(_g,_load_id1,_index,_item_id)));
									}
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(317)
							tmp28->schedule(tmp29, Dynamic(new _Function_5_1(_g,_load_id1,_index,_shader)),null());
						}
						else{
							HX_STACK_LINE(329)
							::String tmp27 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _g->id);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(329)
							::String tmp28 = (tmp27 + HX_HCSTRING(" / already had ","\xae","\x8a","\xa4","\x34"));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(329)
							::String tmp29 = _shader->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(329)
							::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(329)
							::String tmp31 = (tmp30 + HX_HCSTRING(" loaded, skipped","\xf7","\x9a","\x71","\xd8"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(329)
							::String tmp32 = (HX_HCSTRING("   i / parcel / ","\x80","\x3e","\xbc","\xdf") + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(329)
							Dynamic tmp33 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),329,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(329)
							::haxe::Log_obj::trace(tmp32,tmp33);
							HX_STACK_LINE(330)
							::String tmp34 = _shader->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(330)
							::String tmp35 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(330)
							::haxe::ds::StringMap tmp36 = _g->_system->cache;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(330)
							::String tmp37 = _shader->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(330)
							::luxe::resource::Resource tmp38 = tmp36->get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(330)
							::luxe::resource::Resource tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(330)
							int tmp40 = ++(_index[(int)0]);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(330)
							int tmp41 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(330)
							int tmp42 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(330)
							int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(330)
							int tmp44 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(330)
							int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(330)
							int tmp46 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(330)
							int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(330)
							int tmp48 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(330)
							int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(330)
							int tmp50 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(330)
							int tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(330)
							int tmp52 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(330)
							int tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(330)
							_g->one_loaded(tmp34,tmp35,tmp39,tmp40,tmp53);
						}
					}
				}
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(337)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(337)
					cpp::ArrayBase _g2 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(337)
					while((true)){
						HX_STACK_LINE(337)
						bool tmp20 = (_g1 < _g2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(337)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(337)
						if ((tmp21)){
							HX_STACK_LINE(337)
							break;
						}
						HX_STACK_LINE(337)
						Dynamic tmp22 = _g2->__GetItem(_g1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(337)
						Dynamic _sound = tmp22;		HX_STACK_VAR(_sound,"_sound");
						HX_STACK_LINE(337)
						++(_g1);
						HX_STACK_LINE(339)
						++(_load_index);
						HX_STACK_LINE(341)
						::String tmp23 = _sound->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(341)
						int tmp24 = _g->loaded->indexOf(tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(341)
						bool tmp25 = (tmp24 != (int)-1);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(341)
						bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(341)
						if ((tmp26)){
							HX_STACK_LINE(343)
							::String tmp27 = _sound->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(343)
							_g->loaded->push(tmp27);
							HX_STACK_LINE(344)
							::luxe::Timer tmp28 = ::Luxe_obj::timer;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(344)
							Float tmp29 = (_g->load_time_spacing * _load_index);		HX_STACK_VAR(tmp29,"tmp29");

							HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_5_1,Dynamic,_sound,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index)
							int __ArgCount() const { return 0; }
							Void run(){
								HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","luxe/Parcel.hx",344,0x19b0ca9c)
								{
									HX_STACK_LINE(346)
									::String tmp30 = _sound->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
									struct _Function_6_1{
										inline static Dynamic Block( Dynamic &_sound){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",346,0x19b0ca9c)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6") , _sound->__Field(HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6"), hx::paccDynamic ),false);
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(346)
									Dynamic tmp31 = _Function_6_1::Block(_sound);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(346)
									::snow::api::Promise tmp32 = _g->_system->load_audio(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(346)
									::snow::api::Promise _load = tmp32;		HX_STACK_VAR(_load,"_load");
									HX_STACK_LINE(350)
									{
										HX_STACK_LINE(350)
										::String _item_id = _sound->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_item_id,"_item_id");

										HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_7_1,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
										int __ArgCount() const { return 1; }
										Void run(::luxe::resource::Resource _res){
											HX_STACK_FRAME("*","_Function_7_1",0x52057abd,"*._Function_7_1","luxe/Parcel.hx",350,0x19b0ca9c)
											HX_STACK_ARG(_res,"_res")
											{
												HX_STACK_LINE(350)
												::String tmp33 = _item_id;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(350)
												::String tmp34 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(350)
												::luxe::resource::Resource tmp35 = _res;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(350)
												int tmp36 = ++(_index[(int)0]);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(350)
												int tmp37 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(350)
												int tmp38 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(350)
												int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(350)
												int tmp40 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(350)
												int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(350)
												int tmp42 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(350)
												int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(350)
												int tmp44 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(350)
												int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(350)
												int tmp46 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(350)
												int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(350)
												int tmp48 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(350)
												int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(350)
												_g->one_loaded(tmp33,tmp34,tmp35,tmp36,tmp49);
											}
											return null();
										}
										HX_END_LOCAL_FUNC1((void))


										HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_7_2,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
										int __ArgCount() const { return 1; }
										Void run(Dynamic _err){
											HX_STACK_FRAME("*","_Function_7_2",0x52057abe,"*._Function_7_2","luxe/Parcel.hx",350,0x19b0ca9c)
											HX_STACK_ARG(_err,"_err")
											{
												HX_STACK_LINE(350)
												::String tmp33 = _item_id;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(350)
												::String tmp34 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(350)
												Dynamic tmp35 = _err;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(350)
												int tmp36 = ++(_index[(int)0]);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(350)
												int tmp37 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(350)
												int tmp38 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(350)
												int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(350)
												int tmp40 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(350)
												int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(350)
												int tmp42 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(350)
												int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(350)
												int tmp44 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(350)
												int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(350)
												int tmp46 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(350)
												int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(350)
												int tmp48 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(350)
												int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(350)
												_g->one_failed(tmp33,tmp34,tmp35,tmp36,tmp49);
											}
											return null();
										}
										HX_END_LOCAL_FUNC1((void))

										HX_STACK_LINE(350)
										_load->then( Dynamic(new _Function_7_1(_g,_load_id1,_index,_item_id)), Dynamic(new _Function_7_2(_g,_load_id1,_index,_item_id)));
									}
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(344)
							tmp28->schedule(tmp29, Dynamic(new _Function_5_1(_sound,_g,_load_id1,_index)),null());
						}
						else{
							HX_STACK_LINE(355)
							::String tmp27 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _g->id);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(355)
							::String tmp28 = (tmp27 + HX_HCSTRING(" / already had ","\xae","\x8a","\xa4","\x34"));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(355)
							::String tmp29 = _sound->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(355)
							::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(355)
							::String tmp31 = (tmp30 + HX_HCSTRING(" loaded, skipped","\xf7","\x9a","\x71","\xd8"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(355)
							::String tmp32 = (HX_HCSTRING("   i / parcel / ","\x80","\x3e","\xbc","\xdf") + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(355)
							Dynamic tmp33 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),355,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(355)
							::haxe::Log_obj::trace(tmp32,tmp33);
							HX_STACK_LINE(356)
							::String tmp34 = _sound->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(356)
							::String tmp35 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(356)
							::haxe::ds::StringMap tmp36 = _g->_system->cache;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(356)
							::String tmp37 = _sound->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(356)
							::luxe::resource::Resource tmp38 = tmp36->get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(356)
							::luxe::resource::Resource tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(356)
							int tmp40 = ++(_index[(int)0]);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(356)
							int tmp41 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(356)
							int tmp42 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(356)
							int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(356)
							int tmp44 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(356)
							int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(356)
							int tmp46 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(356)
							int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(356)
							int tmp48 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(356)
							int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(356)
							int tmp50 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(356)
							int tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(356)
							int tmp52 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(356)
							int tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(356)
							_g->one_loaded(tmp34,tmp35,tmp39,tmp40,tmp53);
						}
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(154)
		tmp1->schedule(tmp2, Dynamic(new _Function_1_1(_g,_load_id1)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,load,(void))

Void Parcel_obj::unload( Dynamic __o__empty_list){
Dynamic _empty_list = __o__empty_list.Default(false);
	HX_STACK_FRAME("luxe.Parcel","unload",0x6b0c732c,"luxe.Parcel.unload","luxe/Parcel.hx",367,0x19b0ca9c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_empty_list,"_empty_list")
{
		HX_STACK_LINE(367)
		::luxe::Parcel _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(369)
		::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(369)
		tmp->emit((int)2,hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(377)
			Dynamic tmp1 = this->list;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(377)
			cpp::ArrayBase _g11 = tmp1->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic );		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(377)
			while((true)){
				HX_STACK_LINE(377)
				bool tmp2 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(377)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(377)
				if ((tmp3)){
					HX_STACK_LINE(377)
					break;
				}
				HX_STACK_LINE(377)
				Dynamic tmp4 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(377)
				Dynamic item = tmp4;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(377)
				++(_g1);
				HX_STACK_LINE(377)
				::String _id = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(377)
				::String tmp5 = _id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(377)
				_g->_system->destroy(tmp5,null());
				HX_STACK_LINE(377)
				::String tmp6 = _id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(377)
				_g->loaded->remove(tmp6);
			}
		}
		HX_STACK_LINE(378)
		{
			HX_STACK_LINE(378)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(378)
			Dynamic tmp1 = this->list;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(378)
			cpp::ArrayBase _g11 = tmp1->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic );		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(378)
			while((true)){
				HX_STACK_LINE(378)
				bool tmp2 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(378)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(378)
				if ((tmp3)){
					HX_STACK_LINE(378)
					break;
				}
				HX_STACK_LINE(378)
				Dynamic tmp4 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(378)
				Dynamic item = tmp4;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(378)
				++(_g1);
				HX_STACK_LINE(378)
				::String _id = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(378)
				::String tmp5 = _id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(378)
				_g->_system->destroy(tmp5,null());
				HX_STACK_LINE(378)
				::String tmp6 = _id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(378)
				_g->loaded->remove(tmp6);
			}
		}
		HX_STACK_LINE(379)
		{
			HX_STACK_LINE(379)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(379)
			Dynamic tmp1 = this->list;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(379)
			cpp::ArrayBase _g11 = tmp1->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic );		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(379)
			while((true)){
				HX_STACK_LINE(379)
				bool tmp2 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(379)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(379)
				if ((tmp3)){
					HX_STACK_LINE(379)
					break;
				}
				HX_STACK_LINE(379)
				Dynamic tmp4 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(379)
				Dynamic item = tmp4;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(379)
				++(_g1);
				HX_STACK_LINE(379)
				::String _id = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(379)
				::String tmp5 = _id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(379)
				_g->_system->destroy(tmp5,null());
				HX_STACK_LINE(379)
				::String tmp6 = _id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(379)
				_g->loaded->remove(tmp6);
			}
		}
		HX_STACK_LINE(380)
		{
			HX_STACK_LINE(380)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(380)
			Dynamic tmp1 = this->list;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(380)
			cpp::ArrayBase _g11 = tmp1->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic );		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(380)
			while((true)){
				HX_STACK_LINE(380)
				bool tmp2 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(380)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(380)
				if ((tmp3)){
					HX_STACK_LINE(380)
					break;
				}
				HX_STACK_LINE(380)
				Dynamic tmp4 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(380)
				Dynamic item = tmp4;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(380)
				++(_g1);
				HX_STACK_LINE(380)
				::String _id = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(380)
				::String tmp5 = _id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(380)
				_g->_system->destroy(tmp5,null());
				HX_STACK_LINE(380)
				::String tmp6 = _id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(380)
				_g->loaded->remove(tmp6);
			}
		}
		HX_STACK_LINE(381)
		{
			HX_STACK_LINE(381)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(381)
			Dynamic tmp1 = this->list;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(381)
			cpp::ArrayBase _g11 = tmp1->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic );		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(381)
			while((true)){
				HX_STACK_LINE(381)
				bool tmp2 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(381)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(381)
				if ((tmp3)){
					HX_STACK_LINE(381)
					break;
				}
				HX_STACK_LINE(381)
				Dynamic tmp4 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(381)
				Dynamic item = tmp4;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(381)
				++(_g1);
				HX_STACK_LINE(381)
				::String _id = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(381)
				::String tmp5 = _id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(381)
				_g->_system->destroy(tmp5,null());
				HX_STACK_LINE(381)
				::String tmp6 = _id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(381)
				_g->loaded->remove(tmp6);
			}
		}
		HX_STACK_LINE(382)
		{
			HX_STACK_LINE(382)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(382)
			Dynamic tmp1 = this->list;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(382)
			cpp::ArrayBase _g11 = tmp1->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic );		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(382)
			while((true)){
				HX_STACK_LINE(382)
				bool tmp2 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(382)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(382)
				if ((tmp3)){
					HX_STACK_LINE(382)
					break;
				}
				HX_STACK_LINE(382)
				Dynamic tmp4 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(382)
				Dynamic item = tmp4;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(382)
				++(_g1);
				HX_STACK_LINE(382)
				::String _id = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(382)
				::String tmp5 = _id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(382)
				_g->_system->destroy(tmp5,null());
				HX_STACK_LINE(382)
				::String tmp6 = _id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(382)
				_g->loaded->remove(tmp6);
			}
		}
		HX_STACK_LINE(383)
		{
			HX_STACK_LINE(383)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(383)
			Dynamic tmp1 = this->list;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(383)
			cpp::ArrayBase _g11 = tmp1->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic );		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(383)
			while((true)){
				HX_STACK_LINE(383)
				bool tmp2 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(383)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(383)
				if ((tmp3)){
					HX_STACK_LINE(383)
					break;
				}
				HX_STACK_LINE(383)
				Dynamic tmp4 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(383)
				Dynamic item = tmp4;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(383)
				++(_g1);
				HX_STACK_LINE(383)
				::String _id = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(383)
				::String tmp5 = _id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(383)
				_g->_system->destroy(tmp5,null());
				HX_STACK_LINE(383)
				::String tmp6 = _id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(383)
				_g->loaded->remove(tmp6);
			}
		}
		HX_STACK_LINE(385)
		Dynamic tmp1 = _empty_list;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(385)
		if ((tmp1)){
			HX_STACK_LINE(386)
			this->list = null();
			HX_STACK_LINE(387)
			Dynamic tmp2 = this->empty_list();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(387)
			this->list = tmp2;
		}
		HX_STACK_LINE(390)
		this->state = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,unload,(void))

Void Parcel_obj::from_json( Dynamic _json_object){
{
		HX_STACK_FRAME("luxe.Parcel","from_json",0x3b42e050,"luxe.Parcel.from_json","luxe/Parcel.hx",394,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_json_object,"_json_object")
		HX_STACK_LINE(396)
		{
			HX_STACK_LINE(396)
			bool tmp = (_json_object == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(396)
			if ((tmp)){
				HX_STACK_LINE(396)
				::String tmp1 = HX_HCSTRING("_json_object was null","\xe7","\x68","\xbd","\x92");		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(396)
				::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(396)
				HX_STACK_DO_THROW(tmp2);
			}
		}
		HX_STACK_LINE(398)
		bool tmp = (_json_object->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(398)
		if ((tmp)){
			HX_STACK_LINE(399)
			cpp::ArrayBase _bytes = ((cpp::ArrayBase)(_json_object->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )));		HX_STACK_VAR(_bytes,"_bytes");
			HX_STACK_LINE(400)
			{
				HX_STACK_LINE(400)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(400)
				while((true)){
					HX_STACK_LINE(400)
					bool tmp1 = (_g < _bytes->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(400)
					bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(400)
					if ((tmp2)){
						HX_STACK_LINE(400)
						break;
					}
					HX_STACK_LINE(400)
					Dynamic tmp3 = _bytes->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(400)
					Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(400)
					++(_g);
					HX_STACK_LINE(401)
					bool tmp4 = (item != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(401)
					if ((tmp4)){
						HX_STACK_LINE(402)
						{
							HX_STACK_LINE(402)
							bool tmp5 = (item == null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(402)
							if ((tmp5)){
								HX_STACK_LINE(402)
								::String tmp6 = HX_HCSTRING("item was null","\x8b","\x59","\x54","\x85");		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(402)
								::luxe::DebugError tmp7 = ::luxe::DebugError_obj::null_assertion(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(402)
								HX_STACK_DO_THROW(tmp7);
							}
						}
						HX_STACK_LINE(403)
						{
							HX_STACK_LINE(403)
							bool tmp5 = (item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(403)
							if ((tmp5)){
								HX_STACK_LINE(403)
								::String tmp6 = HX_HCSTRING("item.id was null","\xe8","\xf1","\x00","\xe6");		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(403)
								::luxe::DebugError tmp7 = ::luxe::DebugError_obj::null_assertion(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(403)
								HX_STACK_DO_THROW(tmp7);
							}
						}
						HX_STACK_LINE(405)
						Dynamic tmp5 = this->list;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(405)
						Dynamic tmp6 = item;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(405)
						tmp5->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
					}
				}
			}
		}
		HX_STACK_LINE(410)
		bool tmp1 = (_json_object->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(410)
		if ((tmp1)){
			HX_STACK_LINE(411)
			cpp::ArrayBase _texts = ((cpp::ArrayBase)(_json_object->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic )));		HX_STACK_VAR(_texts,"_texts");
			HX_STACK_LINE(412)
			{
				HX_STACK_LINE(412)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(412)
				while((true)){
					HX_STACK_LINE(412)
					bool tmp2 = (_g < _texts->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(412)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(412)
					if ((tmp3)){
						HX_STACK_LINE(412)
						break;
					}
					HX_STACK_LINE(412)
					Dynamic tmp4 = _texts->__GetItem(_g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(412)
					Dynamic item = tmp4;		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(412)
					++(_g);
					HX_STACK_LINE(413)
					bool tmp5 = (item != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(413)
					if ((tmp5)){
						HX_STACK_LINE(414)
						{
							HX_STACK_LINE(414)
							bool tmp6 = (item == null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(414)
							if ((tmp6)){
								HX_STACK_LINE(414)
								::String tmp7 = HX_HCSTRING("item was null","\x8b","\x59","\x54","\x85");		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(414)
								::luxe::DebugError tmp8 = ::luxe::DebugError_obj::null_assertion(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(414)
								HX_STACK_DO_THROW(tmp8);
							}
						}
						HX_STACK_LINE(415)
						{
							HX_STACK_LINE(415)
							bool tmp6 = (item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(415)
							if ((tmp6)){
								HX_STACK_LINE(415)
								::String tmp7 = HX_HCSTRING("item.id was null","\xe8","\xf1","\x00","\xe6");		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(415)
								::luxe::DebugError tmp8 = ::luxe::DebugError_obj::null_assertion(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(415)
								HX_STACK_DO_THROW(tmp8);
							}
						}
						HX_STACK_LINE(417)
						Dynamic tmp6 = this->list;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(417)
						Dynamic tmp7 = item;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(417)
						tmp6->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
					}
				}
			}
		}
		HX_STACK_LINE(422)
		bool tmp2 = (_json_object->__Field(HX_HCSTRING("json","\x28","\x42","\x68","\x46"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(422)
		if ((tmp2)){
			HX_STACK_LINE(423)
			cpp::ArrayBase _jsons = ((cpp::ArrayBase)(_json_object->__Field(HX_HCSTRING("json","\x28","\x42","\x68","\x46"), hx::paccDynamic )));		HX_STACK_VAR(_jsons,"_jsons");
			HX_STACK_LINE(424)
			{
				HX_STACK_LINE(424)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(424)
				while((true)){
					HX_STACK_LINE(424)
					bool tmp3 = (_g < _jsons->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(424)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(424)
					if ((tmp4)){
						HX_STACK_LINE(424)
						break;
					}
					HX_STACK_LINE(424)
					Dynamic tmp5 = _jsons->__GetItem(_g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(424)
					Dynamic item = tmp5;		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(424)
					++(_g);
					HX_STACK_LINE(425)
					bool tmp6 = (item != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(425)
					if ((tmp6)){
						HX_STACK_LINE(426)
						{
							HX_STACK_LINE(426)
							bool tmp7 = (item == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(426)
							if ((tmp7)){
								HX_STACK_LINE(426)
								::String tmp8 = HX_HCSTRING("item was null","\x8b","\x59","\x54","\x85");		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(426)
								::luxe::DebugError tmp9 = ::luxe::DebugError_obj::null_assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(426)
								HX_STACK_DO_THROW(tmp9);
							}
						}
						HX_STACK_LINE(427)
						{
							HX_STACK_LINE(427)
							bool tmp7 = (item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(427)
							if ((tmp7)){
								HX_STACK_LINE(427)
								::String tmp8 = HX_HCSTRING("item.id was null","\xe8","\xf1","\x00","\xe6");		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(427)
								::luxe::DebugError tmp9 = ::luxe::DebugError_obj::null_assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(427)
								HX_STACK_DO_THROW(tmp9);
							}
						}
						HX_STACK_LINE(429)
						Dynamic tmp7 = this->list;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(429)
						Dynamic tmp8 = item;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(429)
						tmp7->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp8);
					}
				}
			}
		}
		HX_STACK_LINE(434)
		bool tmp3 = (_json_object->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(434)
		if ((tmp3)){
			HX_STACK_LINE(435)
			cpp::ArrayBase _textures = ((cpp::ArrayBase)(_json_object->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )));		HX_STACK_VAR(_textures,"_textures");
			HX_STACK_LINE(436)
			{
				HX_STACK_LINE(436)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(436)
				while((true)){
					HX_STACK_LINE(436)
					bool tmp4 = (_g < _textures->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(436)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(436)
					if ((tmp5)){
						HX_STACK_LINE(436)
						break;
					}
					HX_STACK_LINE(436)
					Dynamic tmp6 = _textures->__GetItem(_g);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(436)
					Dynamic item = tmp6;		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(436)
					++(_g);
					HX_STACK_LINE(437)
					{
						HX_STACK_LINE(437)
						bool tmp7 = (item == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(437)
						if ((tmp7)){
							HX_STACK_LINE(437)
							::String tmp8 = HX_HCSTRING("item was null","\x8b","\x59","\x54","\x85");		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(437)
							::luxe::DebugError tmp9 = ::luxe::DebugError_obj::null_assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(437)
							HX_STACK_DO_THROW(tmp9);
						}
					}
					HX_STACK_LINE(438)
					{
						HX_STACK_LINE(438)
						bool tmp7 = (item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(438)
						if ((tmp7)){
							HX_STACK_LINE(438)
							::String tmp8 = HX_HCSTRING("item.id was null","\xe8","\xf1","\x00","\xe6");		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(438)
							::luxe::DebugError tmp9 = ::luxe::DebugError_obj::null_assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(438)
							HX_STACK_DO_THROW(tmp9);
						}
					}
					HX_STACK_LINE(461)
					Dynamic tmp7 = this->list;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(463)
					Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(463)
					{
						HX_STACK_LINE(463)
						::String _filter_type = item->__Field(HX_HCSTRING("filter_min","\x4b","\xb2","\x89","\x60"), hx::paccDynamic );		HX_STACK_VAR(_filter_type,"_filter_type");
						HX_STACK_LINE(463)
						bool tmp9 = (_filter_type == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(463)
						if ((tmp9)){
							HX_STACK_LINE(463)
							tmp8 = null();
						}
						else{
							HX_STACK_LINE(463)
							{
								HX_STACK_LINE(463)
								bool tmp10 = (_filter_type == HX_HCSTRING("nearest","\x5e","\x18","\xca","\x65"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(463)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(463)
								bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(463)
								if ((tmp11)){
									HX_STACK_LINE(463)
									tmp12 = (_filter_type == HX_HCSTRING("linear","\xe5","\x51","\xa0","\xec"));
								}
								else{
									HX_STACK_LINE(463)
									tmp12 = true;
								}
								HX_STACK_LINE(463)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(463)
								if ((tmp13)){
									HX_STACK_LINE(463)
									::String tmp14 = HX_HCSTRING("_filter_type == 'nearest' || _filter_type == 'linear'","\xcb","\x04","\xdb","\xd6");		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(463)
									::luxe::DebugError tmp15 = ::luxe::DebugError_obj::assertion(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(463)
									HX_STACK_DO_THROW(tmp15);
								}
							}
							HX_STACK_LINE(463)
							::String tmp10 = _filter_type;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(463)
							::String _switch_1 = (tmp10);
							if (  ( _switch_1==HX_HCSTRING("nearest","\x5e","\x18","\xca","\x65"))){
								HX_STACK_LINE(463)
								tmp8 = (int)9728;
							}
							else if (  ( _switch_1==HX_HCSTRING("linear","\xe5","\x51","\xa0","\xec"))){
								HX_STACK_LINE(463)
								tmp8 = (int)9729;
							}
							else  {
								HX_STACK_LINE(463)
								tmp8 = null();
							}
;
;
						}
					}
					HX_STACK_LINE(464)
					Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(464)
					{
						HX_STACK_LINE(464)
						::String _filter_type = item->__Field(HX_HCSTRING("filter_mag","\x4c","\xab","\x89","\x60"), hx::paccDynamic );		HX_STACK_VAR(_filter_type,"_filter_type");
						HX_STACK_LINE(464)
						bool tmp10 = (_filter_type == null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(464)
						if ((tmp10)){
							HX_STACK_LINE(464)
							tmp9 = null();
						}
						else{
							HX_STACK_LINE(464)
							{
								HX_STACK_LINE(464)
								bool tmp11 = (_filter_type == HX_HCSTRING("nearest","\x5e","\x18","\xca","\x65"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(464)
								bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(464)
								bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(464)
								if ((tmp12)){
									HX_STACK_LINE(464)
									tmp13 = (_filter_type == HX_HCSTRING("linear","\xe5","\x51","\xa0","\xec"));
								}
								else{
									HX_STACK_LINE(464)
									tmp13 = true;
								}
								HX_STACK_LINE(464)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(464)
								if ((tmp14)){
									HX_STACK_LINE(464)
									::String tmp15 = HX_HCSTRING("_filter_type == 'nearest' || _filter_type == 'linear'","\xcb","\x04","\xdb","\xd6");		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(464)
									::luxe::DebugError tmp16 = ::luxe::DebugError_obj::assertion(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(464)
									HX_STACK_DO_THROW(tmp16);
								}
							}
							HX_STACK_LINE(464)
							::String tmp11 = _filter_type;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(464)
							::String _switch_2 = (tmp11);
							if (  ( _switch_2==HX_HCSTRING("nearest","\x5e","\x18","\xca","\x65"))){
								HX_STACK_LINE(464)
								tmp9 = (int)9728;
							}
							else if (  ( _switch_2==HX_HCSTRING("linear","\xe5","\x51","\xa0","\xec"))){
								HX_STACK_LINE(464)
								tmp9 = (int)9729;
							}
							else  {
								HX_STACK_LINE(464)
								tmp9 = null();
							}
;
;
						}
					}
					HX_STACK_LINE(465)
					Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(465)
					{
						HX_STACK_LINE(465)
						::String _clamp_type = item->__Field(HX_HCSTRING("clamp_s","\xef","\xba","\x97","\x65"), hx::paccDynamic );		HX_STACK_VAR(_clamp_type,"_clamp_type");
						HX_STACK_LINE(465)
						bool tmp11 = (_clamp_type == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(465)
						if ((tmp11)){
							HX_STACK_LINE(465)
							tmp10 = null();
						}
						else{
							HX_STACK_LINE(465)
							{
								HX_STACK_LINE(465)
								bool tmp12 = (_clamp_type == HX_HCSTRING("edge","\x3d","\xc8","\x0e","\x43"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(465)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(465)
								bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(465)
								bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(465)
								if ((tmp14)){
									HX_STACK_LINE(465)
									tmp15 = (_clamp_type == HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"));
								}
								else{
									HX_STACK_LINE(465)
									tmp15 = true;
								}
								HX_STACK_LINE(465)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(465)
								bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(465)
								if ((tmp16)){
									HX_STACK_LINE(465)
									tmp17 = (_clamp_type == HX_HCSTRING("mirror","\x3f","\x72","\xaa","\x55"));
								}
								else{
									HX_STACK_LINE(465)
									tmp17 = true;
								}
								HX_STACK_LINE(465)
								bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(465)
								if ((tmp18)){
									HX_STACK_LINE(465)
									::String tmp19 = HX_HCSTRING("_clamp_type == 'edge' || _clamp_type == 'repeat' || _clamp_type == 'mirror'","\x5c","\xa3","\xdf","\xbb");		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(465)
									::luxe::DebugError tmp20 = ::luxe::DebugError_obj::assertion(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(465)
									HX_STACK_DO_THROW(tmp20);
								}
							}
							HX_STACK_LINE(465)
							::String tmp12 = _clamp_type;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(465)
							::String _switch_3 = (tmp12);
							if (  ( _switch_3==HX_HCSTRING("edge","\x3d","\xc8","\x0e","\x43"))){
								HX_STACK_LINE(465)
								tmp10 = (int)33071;
							}
							else if (  ( _switch_3==HX_HCSTRING("mirror","\x3f","\x72","\xaa","\x55"))){
								HX_STACK_LINE(465)
								tmp10 = (int)33648;
							}
							else if (  ( _switch_3==HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"))){
								HX_STACK_LINE(465)
								tmp10 = (int)10497;
							}
							else  {
								HX_STACK_LINE(465)
								tmp10 = null();
							}
;
;
						}
					}
					HX_STACK_LINE(466)
					Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(466)
					{
						HX_STACK_LINE(466)
						::String _clamp_type = item->__Field(HX_HCSTRING("clamp_t","\xf0","\xba","\x97","\x65"), hx::paccDynamic );		HX_STACK_VAR(_clamp_type,"_clamp_type");
						HX_STACK_LINE(466)
						bool tmp12 = (_clamp_type == null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(466)
						if ((tmp12)){
							HX_STACK_LINE(466)
							tmp11 = null();
						}
						else{
							HX_STACK_LINE(466)
							{
								HX_STACK_LINE(466)
								bool tmp13 = (_clamp_type == HX_HCSTRING("edge","\x3d","\xc8","\x0e","\x43"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(466)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(466)
								bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(466)
								bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(466)
								if ((tmp15)){
									HX_STACK_LINE(466)
									tmp16 = (_clamp_type == HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"));
								}
								else{
									HX_STACK_LINE(466)
									tmp16 = true;
								}
								HX_STACK_LINE(466)
								bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(466)
								bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(466)
								if ((tmp17)){
									HX_STACK_LINE(466)
									tmp18 = (_clamp_type == HX_HCSTRING("mirror","\x3f","\x72","\xaa","\x55"));
								}
								else{
									HX_STACK_LINE(466)
									tmp18 = true;
								}
								HX_STACK_LINE(466)
								bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(466)
								if ((tmp19)){
									HX_STACK_LINE(466)
									::String tmp20 = HX_HCSTRING("_clamp_type == 'edge' || _clamp_type == 'repeat' || _clamp_type == 'mirror'","\x5c","\xa3","\xdf","\xbb");		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(466)
									::luxe::DebugError tmp21 = ::luxe::DebugError_obj::assertion(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(466)
									HX_STACK_DO_THROW(tmp21);
								}
							}
							HX_STACK_LINE(466)
							::String tmp13 = _clamp_type;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(466)
							::String _switch_4 = (tmp13);
							if (  ( _switch_4==HX_HCSTRING("edge","\x3d","\xc8","\x0e","\x43"))){
								HX_STACK_LINE(466)
								tmp11 = (int)33071;
							}
							else if (  ( _switch_4==HX_HCSTRING("mirror","\x3f","\x72","\xaa","\x55"))){
								HX_STACK_LINE(466)
								tmp11 = (int)33648;
							}
							else if (  ( _switch_4==HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"))){
								HX_STACK_LINE(466)
								tmp11 = (int)10497;
							}
							else  {
								HX_STACK_LINE(466)
								tmp11 = null();
							}
;
;
						}
					}
					struct _Function_4_1{
						inline static Dynamic Block( Dynamic &item,Dynamic &tmp9,Dynamic &tmp11,Dynamic &tmp10,Dynamic &tmp8){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",461,0x19b0ca9c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , ((::String)(item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ))),false);
								__result->Add(HX_HCSTRING("filter_min","\x4b","\xb2","\x89","\x60") , tmp8,false);
								__result->Add(HX_HCSTRING("filter_mag","\x4c","\xab","\x89","\x60") , tmp9,false);
								__result->Add(HX_HCSTRING("clamp_s","\xef","\xba","\x97","\x65") , tmp10,false);
								__result->Add(HX_HCSTRING("clamp_t","\xf0","\xba","\x97","\x65") , tmp11,false);
								__result->Add(HX_HCSTRING("load_premultiply_alpha","\x8d","\xfb","\xf5","\xac") , item->__Field(HX_HCSTRING("load_premultiply_alpha","\x8d","\xfb","\xf5","\xac"), hx::paccDynamic ),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(461)
					Dynamic tmp12 = _Function_4_1::Block(item,tmp9,tmp11,tmp10,tmp8);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(461)
					tmp7->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp12);
				}
			}
		}
		HX_STACK_LINE(473)
		bool tmp4 = (_json_object->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(473)
		if ((tmp4)){
			HX_STACK_LINE(474)
			cpp::ArrayBase _fonts = ((cpp::ArrayBase)(_json_object->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )));		HX_STACK_VAR(_fonts,"_fonts");
			HX_STACK_LINE(475)
			{
				HX_STACK_LINE(475)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(475)
				while((true)){
					HX_STACK_LINE(475)
					bool tmp5 = (_g < _fonts->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(475)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(475)
					if ((tmp6)){
						HX_STACK_LINE(475)
						break;
					}
					HX_STACK_LINE(475)
					Dynamic tmp7 = _fonts->__GetItem(_g);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(475)
					Dynamic item = tmp7;		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(475)
					++(_g);
					HX_STACK_LINE(476)
					bool tmp8 = (item != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(476)
					if ((tmp8)){
						HX_STACK_LINE(477)
						{
							HX_STACK_LINE(477)
							bool tmp9 = (item == null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(477)
							if ((tmp9)){
								HX_STACK_LINE(477)
								::String tmp10 = HX_HCSTRING("item was null","\x8b","\x59","\x54","\x85");		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(477)
								::luxe::DebugError tmp11 = ::luxe::DebugError_obj::null_assertion(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(477)
								HX_STACK_DO_THROW(tmp11);
							}
						}
						HX_STACK_LINE(478)
						{
							HX_STACK_LINE(478)
							bool tmp9 = (item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(478)
							if ((tmp9)){
								HX_STACK_LINE(478)
								::String tmp10 = HX_HCSTRING("item.id was null","\xe8","\xf1","\x00","\xe6");		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(478)
								::luxe::DebugError tmp11 = ::luxe::DebugError_obj::null_assertion(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(478)
								HX_STACK_DO_THROW(tmp11);
							}
						}
						HX_STACK_LINE(480)
						Dynamic tmp9 = this->list;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(480)
						Dynamic tmp10 = item;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(480)
						tmp9->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp10);
					}
				}
			}
		}
		HX_STACK_LINE(485)
		bool tmp5 = (_json_object->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(485)
		if ((tmp5)){
			HX_STACK_LINE(486)
			cpp::ArrayBase _shaders = ((cpp::ArrayBase)(_json_object->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )));		HX_STACK_VAR(_shaders,"_shaders");
			HX_STACK_LINE(487)
			{
				HX_STACK_LINE(487)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(487)
				while((true)){
					HX_STACK_LINE(487)
					bool tmp6 = (_g < _shaders->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(487)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(487)
					if ((tmp7)){
						HX_STACK_LINE(487)
						break;
					}
					HX_STACK_LINE(487)
					Dynamic tmp8 = _shaders->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(487)
					Dynamic item = tmp8;		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(487)
					++(_g);
					HX_STACK_LINE(488)
					bool tmp9 = (item != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(488)
					if ((tmp9)){
						HX_STACK_LINE(489)
						{
							HX_STACK_LINE(489)
							bool tmp10 = (item == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(489)
							if ((tmp10)){
								HX_STACK_LINE(489)
								::String tmp11 = HX_HCSTRING("item was null","\x8b","\x59","\x54","\x85");		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(489)
								::luxe::DebugError tmp12 = ::luxe::DebugError_obj::null_assertion(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(489)
								HX_STACK_DO_THROW(tmp12);
							}
						}
						HX_STACK_LINE(490)
						{
							HX_STACK_LINE(490)
							bool tmp10 = (item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(490)
							if ((tmp10)){
								HX_STACK_LINE(490)
								::String tmp11 = HX_HCSTRING("item.id was null","\xe8","\xf1","\x00","\xe6");		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(490)
								::luxe::DebugError tmp12 = ::luxe::DebugError_obj::null_assertion(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(490)
								HX_STACK_DO_THROW(tmp12);
							}
						}
						HX_STACK_LINE(491)
						{
							HX_STACK_LINE(491)
							bool tmp10 = (item->__Field(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(491)
							if ((tmp10)){
								HX_STACK_LINE(491)
								::String tmp11 = HX_HCSTRING("item.frag_id was null","\xb1","\x05","\x52","\x6e");		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(491)
								::luxe::DebugError tmp12 = ::luxe::DebugError_obj::null_assertion(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(491)
								HX_STACK_DO_THROW(tmp12);
							}
						}
						HX_STACK_LINE(492)
						{
							HX_STACK_LINE(492)
							bool tmp10 = (item->__Field(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(492)
							if ((tmp10)){
								HX_STACK_LINE(492)
								::String tmp11 = HX_HCSTRING("item.vert_id was null","\xb0","\x63","\xd6","\xc8");		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(492)
								::luxe::DebugError tmp12 = ::luxe::DebugError_obj::null_assertion(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(492)
								HX_STACK_DO_THROW(tmp12);
							}
						}
						HX_STACK_LINE(494)
						Dynamic tmp10 = this->list;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(494)
						Dynamic tmp11 = item;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(494)
						tmp10->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
					}
				}
			}
		}
		HX_STACK_LINE(499)
		bool tmp6 = (_json_object->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(499)
		if ((tmp6)){
			HX_STACK_LINE(500)
			cpp::ArrayBase _sounds = ((cpp::ArrayBase)(_json_object->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )));		HX_STACK_VAR(_sounds,"_sounds");
			HX_STACK_LINE(501)
			{
				HX_STACK_LINE(501)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(501)
				while((true)){
					HX_STACK_LINE(501)
					bool tmp7 = (_g < _sounds->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(501)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(501)
					if ((tmp8)){
						HX_STACK_LINE(501)
						break;
					}
					HX_STACK_LINE(501)
					Dynamic tmp9 = _sounds->__GetItem(_g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(501)
					Dynamic item = tmp9;		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(501)
					++(_g);
					HX_STACK_LINE(502)
					bool tmp10 = (item != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(502)
					if ((tmp10)){
						HX_STACK_LINE(503)
						{
							HX_STACK_LINE(503)
							bool tmp11 = (item == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(503)
							if ((tmp11)){
								HX_STACK_LINE(503)
								::String tmp12 = HX_HCSTRING("item was null","\x8b","\x59","\x54","\x85");		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(503)
								::luxe::DebugError tmp13 = ::luxe::DebugError_obj::null_assertion(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(503)
								HX_STACK_DO_THROW(tmp13);
							}
						}
						HX_STACK_LINE(504)
						{
							HX_STACK_LINE(504)
							bool tmp11 = (item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(504)
							if ((tmp11)){
								HX_STACK_LINE(504)
								::String tmp12 = HX_HCSTRING("item.id was null","\xe8","\xf1","\x00","\xe6");		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(504)
								::luxe::DebugError tmp13 = ::luxe::DebugError_obj::null_assertion(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(504)
								HX_STACK_DO_THROW(tmp13);
							}
						}
						HX_STACK_LINE(508)
						Dynamic tmp11 = this->list;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(508)
						Dynamic tmp12 = item;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(508)
						tmp11->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp12);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,from_json,(void))

Void Parcel_obj::one_loaded( ::String _item_id,::String _load_id,::luxe::resource::Resource _resource,int _index,int _total){
{
		HX_STACK_FRAME("luxe.Parcel","one_loaded",0x9bab64ab,"luxe.Parcel.one_loaded","luxe/Parcel.hx",517,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_item_id,"_item_id")
		HX_STACK_ARG(_load_id,"_load_id")
		HX_STACK_ARG(_resource,"_resource")
		HX_STACK_ARG(_index,"_index")
		HX_STACK_ARG(_total,"_total")
		struct _Function_1_1{
			inline static Dynamic Block( ::String &_load_id,int &_total,int &_index,::String &_item_id,::luxe::resource::Resource &_resource){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",521,0x19b0ca9c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , _item_id,false);
					__result->Add(HX_HCSTRING("load_id","\x94","\x33","\xeb","\x08") , _load_id,false);
					__result->Add(HX_HCSTRING("resource","\xce","\x5c","\xa0","\x12") , _resource,false);
					__result->Add(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe") , _index,false);
					__result->Add(HX_HCSTRING("total","\xc4","\x53","\x32","\x14") , _total,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(521)
		Dynamic tmp = _Function_1_1::Block(_load_id,_total,_index,_item_id,_resource);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(521)
		Dynamic _state = tmp;		HX_STACK_VAR(_state,"_state");
		HX_STACK_LINE(529)
		::luxe::Emitter tmp1 = this->emitter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(529)
		Dynamic tmp2 = _state;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(529)
		tmp1->emit((int)3,tmp2);
		HX_STACK_LINE(531)
		Dynamic tmp3 = this->onprogress_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(531)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(531)
		if ((tmp4)){
			HX_STACK_LINE(532)
			Dynamic tmp5 = _state;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(532)
			this->onprogress(tmp5);
		}
		HX_STACK_LINE(535)
		bool tmp5 = (_index == _total);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(535)
		if ((tmp5)){
			HX_STACK_LINE(536)
			this->state = (int)2;
			HX_STACK_LINE(536)
			Float tmp6 = linc::timestamp::now();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(536)
			Float tmp7 = ::snow::modules::sdl::Runtime_obj::timestamp_start;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(536)
			Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(536)
			Float tmp9 = this->start_load;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(536)
			Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(536)
			this->time_to_load = tmp10;
			HX_STACK_LINE(536)
			::luxe::Emitter tmp11 = this->emitter;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(536)
			tmp11->emit((int)4,hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(536)
			Dynamic tmp12 = this->oncomplete_dyn();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(536)
			bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(536)
			if ((tmp13)){
				HX_STACK_LINE(536)
				this->oncomplete(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Parcel_obj,one_loaded,(void))

Void Parcel_obj::one_failed( ::String _item_id,::String _load_id,Dynamic _error,int _index,int _total){
{
		HX_STACK_FRAME("luxe.Parcel","one_failed",0x2b3ae263,"luxe.Parcel.one_failed","luxe/Parcel.hx",541,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_item_id,"_item_id")
		HX_STACK_ARG(_load_id,"_load_id")
		HX_STACK_ARG(_error,"_error")
		HX_STACK_ARG(_index,"_index")
		HX_STACK_ARG(_total,"_total")
		struct _Function_1_1{
			inline static Dynamic Block( ::String &_load_id,int &_total,int &_index,Dynamic &_error,::String &_item_id){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",545,0x19b0ca9c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , _item_id,false);
					__result->Add(HX_HCSTRING("load_id","\x94","\x33","\xeb","\x08") , _load_id,false);
					__result->Add(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73") , _error,false);
					__result->Add(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe") , _index,false);
					__result->Add(HX_HCSTRING("total","\xc4","\x53","\x32","\x14") , _total,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(545)
		Dynamic tmp = _Function_1_1::Block(_load_id,_total,_index,_error,_item_id);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(545)
		Dynamic _state = tmp;		HX_STACK_VAR(_state,"_state");
		HX_STACK_LINE(553)
		::luxe::Emitter tmp1 = this->emitter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(553)
		Dynamic tmp2 = _state;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(553)
		tmp1->emit((int)5,tmp2);
		HX_STACK_LINE(555)
		Dynamic tmp3 = this->onfailed_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(555)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(555)
		if ((tmp4)){
			HX_STACK_LINE(556)
			Dynamic tmp5 = _state;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(556)
			this->onfailed(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Parcel_obj,one_failed,(void))

Array< ::String > Parcel_obj::get_listed( ){
	HX_STACK_FRAME("luxe.Parcel","get_listed",0x205a24b3,"luxe.Parcel.get_listed","luxe/Parcel.hx",562,0x19b0ca9c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(563)
	Array< ::String > _result = Array_obj< ::String >::__new();		HX_STACK_VAR(_result,"_result");
	HX_STACK_LINE(565)
	{
		HX_STACK_LINE(565)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(565)
		Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(565)
		cpp::ArrayBase _g1 = tmp->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(565)
		while((true)){
			HX_STACK_LINE(565)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(565)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(565)
			if ((tmp2)){
				HX_STACK_LINE(565)
				break;
			}
			HX_STACK_LINE(565)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(565)
			Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(565)
			++(_g);
			HX_STACK_LINE(565)
			::String tmp4 = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(565)
			_result->push(tmp4);
		}
	}
	HX_STACK_LINE(566)
	{
		HX_STACK_LINE(566)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(566)
		Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(566)
		cpp::ArrayBase _g1 = tmp->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(566)
		while((true)){
			HX_STACK_LINE(566)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(566)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(566)
			if ((tmp2)){
				HX_STACK_LINE(566)
				break;
			}
			HX_STACK_LINE(566)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(566)
			Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(566)
			++(_g);
			HX_STACK_LINE(566)
			::String tmp4 = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(566)
			_result->push(tmp4);
		}
	}
	HX_STACK_LINE(567)
	{
		HX_STACK_LINE(567)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(567)
		Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(567)
		cpp::ArrayBase _g1 = tmp->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(567)
		while((true)){
			HX_STACK_LINE(567)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(567)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(567)
			if ((tmp2)){
				HX_STACK_LINE(567)
				break;
			}
			HX_STACK_LINE(567)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(567)
			Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(567)
			++(_g);
			HX_STACK_LINE(567)
			::String tmp4 = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(567)
			_result->push(tmp4);
		}
	}
	HX_STACK_LINE(568)
	{
		HX_STACK_LINE(568)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(568)
		Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(568)
		cpp::ArrayBase _g1 = tmp->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(568)
		while((true)){
			HX_STACK_LINE(568)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(568)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(568)
			if ((tmp2)){
				HX_STACK_LINE(568)
				break;
			}
			HX_STACK_LINE(568)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(568)
			Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(568)
			++(_g);
			HX_STACK_LINE(568)
			::String tmp4 = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(568)
			_result->push(tmp4);
		}
	}
	HX_STACK_LINE(569)
	{
		HX_STACK_LINE(569)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(569)
		Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(569)
		cpp::ArrayBase _g1 = tmp->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(569)
		while((true)){
			HX_STACK_LINE(569)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(569)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(569)
			if ((tmp2)){
				HX_STACK_LINE(569)
				break;
			}
			HX_STACK_LINE(569)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(569)
			Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(569)
			++(_g);
			HX_STACK_LINE(569)
			::String tmp4 = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(569)
			_result->push(tmp4);
		}
	}
	HX_STACK_LINE(570)
	{
		HX_STACK_LINE(570)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(570)
		Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(570)
		cpp::ArrayBase _g1 = tmp->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(570)
		while((true)){
			HX_STACK_LINE(570)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(570)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(570)
			if ((tmp2)){
				HX_STACK_LINE(570)
				break;
			}
			HX_STACK_LINE(570)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(570)
			Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(570)
			++(_g);
			HX_STACK_LINE(570)
			::String tmp4 = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(570)
			_result->push(tmp4);
		}
	}
	HX_STACK_LINE(571)
	{
		HX_STACK_LINE(571)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(571)
		Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(571)
		cpp::ArrayBase _g1 = tmp->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(571)
		while((true)){
			HX_STACK_LINE(571)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(571)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(571)
			if ((tmp2)){
				HX_STACK_LINE(571)
				break;
			}
			HX_STACK_LINE(571)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(571)
			Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(571)
			++(_g);
			HX_STACK_LINE(571)
			::String tmp4 = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(571)
			_result->push(tmp4);
		}
	}
	HX_STACK_LINE(573)
	return _result;
}


HX_DEFINE_DYNAMIC_FUNC0(Parcel_obj,get_listed,return )

int Parcel_obj::get_length( ){
	HX_STACK_FRAME("luxe.Parcel","get_length",0xcf67f15c,"luxe.Parcel.get_length","luxe/Parcel.hx",576,0x19b0ca9c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(578)
	Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(578)
	int tmp1 = tmp->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(579)
	Dynamic tmp2 = this->list;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(579)
	int tmp3 = tmp2->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(578)
	int tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(580)
	Dynamic tmp5 = this->list;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(580)
	int tmp6 = tmp5->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(578)
	int tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(581)
	Dynamic tmp8 = this->list;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(581)
	int tmp9 = tmp8->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(578)
	int tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(582)
	Dynamic tmp11 = this->list;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(582)
	int tmp12 = tmp11->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(578)
	int tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(583)
	Dynamic tmp14 = this->list;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(583)
	int tmp15 = tmp14->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(578)
	int tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(584)
	Dynamic tmp17 = this->list;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(584)
	int tmp18 = tmp17->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(578)
	int tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(577)
	return tmp19;
}


HX_DEFINE_DYNAMIC_FUNC0(Parcel_obj,get_length,return )

Void Parcel_obj::do_complete( ::String _load_id){
{
		HX_STACK_FRAME("luxe.Parcel","do_complete",0x1c8001e0,"luxe.Parcel.do_complete","luxe/Parcel.hx",588,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_load_id,"_load_id")
		HX_STACK_LINE(590)
		this->state = (int)2;
		HX_STACK_LINE(591)
		Float tmp = linc::timestamp::now();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(591)
		Float tmp1 = ::snow::modules::sdl::Runtime_obj::timestamp_start;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(591)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(591)
		Float tmp3 = this->start_load;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(591)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(591)
		this->time_to_load = tmp4;
		HX_STACK_LINE(595)
		::luxe::Emitter tmp5 = this->emitter;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(595)
		tmp5->emit((int)4,hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(597)
		Dynamic tmp6 = this->oncomplete_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(597)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(597)
		if ((tmp7)){
			HX_STACK_LINE(598)
			this->oncomplete(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,do_complete,(void))

Dynamic Parcel_obj::empty_list( ){
	HX_STACK_FRAME("luxe.Parcel","empty_list",0x27c28b3d,"luxe.Parcel.empty_list","luxe/Parcel.hx",603,0x19b0ca9c)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",604,0x19b0ca9c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32") , cpp::ArrayBase_obj::__new(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(604)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(604)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Parcel_obj,empty_list,return )


Parcel_obj::Parcel_obj()
{
}

void Parcel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Parcel);
	HX_MARK_MEMBER_NAME(_system,"system");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(loaded,"loaded");
	HX_MARK_MEMBER_NAME(time_to_load,"time_to_load");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(emitter,"emitter");
	HX_MARK_MEMBER_NAME(oncomplete,"oncomplete");
	HX_MARK_MEMBER_NAME(onprogress,"onprogress");
	HX_MARK_MEMBER_NAME(onfailed,"onfailed");
	HX_MARK_MEMBER_NAME(start_load,"start_load");
	HX_MARK_MEMBER_NAME(load_time_spacing,"load_time_spacing");
	HX_MARK_MEMBER_NAME(load_start_delay,"load_start_delay");
	HX_MARK_END_CLASS();
}

void Parcel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_system,"system");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(loaded,"loaded");
	HX_VISIT_MEMBER_NAME(time_to_load,"time_to_load");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(emitter,"emitter");
	HX_VISIT_MEMBER_NAME(oncomplete,"oncomplete");
	HX_VISIT_MEMBER_NAME(onprogress,"onprogress");
	HX_VISIT_MEMBER_NAME(onfailed,"onfailed");
	HX_VISIT_MEMBER_NAME(start_load,"start_load");
	HX_VISIT_MEMBER_NAME(load_time_spacing,"load_time_spacing");
	HX_VISIT_MEMBER_NAME(load_start_delay,"load_start_delay");
}

Dynamic Parcel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		if (HX_FIELD_EQ(inName,"on") ) { return on_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"off") ) { return off_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		if (HX_FIELD_EQ(inName,"emit") ) { return emit_dyn(); }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { return _system; }
		if (HX_FIELD_EQ(inName,"loaded") ) { return loaded; }
		if (HX_FIELD_EQ(inName,"listed") ) { if (inCallProp == hx::paccAlways) return get_listed(); }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"emitter") ) { return emitter; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onfailed") ) { return onfailed; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"is_loaded") ) { return is_loaded_dyn(); }
		if (HX_FIELD_EQ(inName,"from_json") ) { return from_json_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"oncomplete") ) { return oncomplete; }
		if (HX_FIELD_EQ(inName,"onprogress") ) { return onprogress; }
		if (HX_FIELD_EQ(inName,"start_load") ) { return start_load; }
		if (HX_FIELD_EQ(inName,"one_loaded") ) { return one_loaded_dyn(); }
		if (HX_FIELD_EQ(inName,"one_failed") ) { return one_failed_dyn(); }
		if (HX_FIELD_EQ(inName,"get_listed") ) { return get_listed_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"empty_list") ) { return empty_list_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"do_complete") ) { return do_complete_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"time_to_load") ) { return time_to_load; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"load_start_delay") ) { return load_start_delay; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"load_time_spacing") ) { return load_time_spacing; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Parcel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { _system=inValue.Cast< ::luxe::Resources >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loaded") ) { loaded=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"emitter") ) { emitter=inValue.Cast< ::luxe::Emitter >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onfailed") ) { onfailed=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"oncomplete") ) { oncomplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onprogress") ) { onprogress=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"start_load") ) { start_load=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"time_to_load") ) { time_to_load=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"load_start_delay") ) { load_start_delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"load_time_spacing") ) { load_time_spacing=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Parcel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"));
	outFields->push(HX_HCSTRING("listed","\x3d","\xc8","\xf9","\xef"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("time_to_load","\x38","\x0d","\xc3","\x2c"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"));
	outFields->push(HX_HCSTRING("start_load","\x63","\x1e","\xb2","\x83"));
	outFields->push(HX_HCSTRING("load_time_spacing","\x0a","\xc7","\x97","\x88"));
	outFields->push(HX_HCSTRING("load_start_delay","\xcd","\xf1","\xb2","\x20"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Resources*/ ,(int)offsetof(Parcel_obj,_system),HX_HCSTRING("system","\xef","\x96","\xe2","\xf2")},
	{hx::fsString,(int)offsetof(Parcel_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Parcel_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Parcel_obj,loaded),HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58")},
	{hx::fsFloat,(int)offsetof(Parcel_obj,time_to_load),HX_HCSTRING("time_to_load","\x38","\x0d","\xc3","\x2c")},
	{hx::fsInt,(int)offsetof(Parcel_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsObject /*::luxe::Emitter*/ ,(int)offsetof(Parcel_obj,emitter),HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Parcel_obj,oncomplete),HX_HCSTRING("oncomplete","\xd8","\x18","\xcd","\x83")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Parcel_obj,onprogress),HX_HCSTRING("onprogress","\xcc","\x0f","\x30","\x8a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Parcel_obj,onfailed),HX_HCSTRING("onfailed","\x1c","\x48","\x17","\x93")},
	{hx::fsFloat,(int)offsetof(Parcel_obj,start_load),HX_HCSTRING("start_load","\x63","\x1e","\xb2","\x83")},
	{hx::fsFloat,(int)offsetof(Parcel_obj,load_time_spacing),HX_HCSTRING("load_time_spacing","\x0a","\xc7","\x97","\x88")},
	{hx::fsFloat,(int)offsetof(Parcel_obj,load_start_delay),HX_HCSTRING("load_start_delay","\xcd","\xf1","\xb2","\x20")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"),
	HX_HCSTRING("time_to_load","\x38","\x0d","\xc3","\x2c"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"),
	HX_HCSTRING("oncomplete","\xd8","\x18","\xcd","\x83"),
	HX_HCSTRING("onprogress","\xcc","\x0f","\x30","\x8a"),
	HX_HCSTRING("onfailed","\x1c","\x48","\x17","\x93"),
	HX_HCSTRING("start_load","\x63","\x1e","\xb2","\x83"),
	HX_HCSTRING("load_time_spacing","\x0a","\xc7","\x97","\x88"),
	HX_HCSTRING("load_start_delay","\xcd","\xf1","\xb2","\x20"),
	HX_HCSTRING("on","\x1f","\x61","\x00","\x00"),
	HX_HCSTRING("off","\x6f","\x93","\x54","\x00"),
	HX_HCSTRING("emit","\x53","\x9e","\x15","\x43"),
	HX_HCSTRING("is_loaded","\xfa","\xae","\x93","\xfd"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("from_json","\x5d","\xd8","\xd4","\x1a"),
	HX_HCSTRING("one_loaded","\xfe","\x77","\xd2","\x5b"),
	HX_HCSTRING("one_failed","\xb6","\xf5","\x61","\xeb"),
	HX_HCSTRING("get_listed","\x06","\x38","\x81","\xe0"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("do_complete","\x2d","\xd7","\x89","\x7e"),
	HX_HCSTRING("empty_list","\x90","\x9e","\xe9","\xe7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Parcel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Parcel_obj::__mClass,"__mClass");
};

#endif

hx::Class Parcel_obj::__mClass;

void Parcel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Parcel_obj >;
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
