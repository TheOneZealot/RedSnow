#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
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
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Text
#include <luxe/Text.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_TraceDebugView
#include <luxe/debug/TraceDebugView.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_types_WindowEvent
#include <snow/types/WindowEvent.h>
#endif
namespace luxe{
namespace debug{

Void TraceDebugView_obj::__construct(::luxe::Debug _debug)
{
HX_STACK_FRAME("luxe.debug.TraceDebugView","new",0x1ecd5698,"luxe.debug.TraceDebugView.new","luxe/debug/TraceDebugView.hx",5,0x3d0b52d6)
HX_STACK_THIS(this)
HX_STACK_ARG(_debug,"_debug")
{
	HX_STACK_LINE(89)
	this->_last_logged_length = (int)0;
	HX_STACK_LINE(10)
	this->max_lines = (int)35;
	HX_STACK_LINE(14)
	::luxe::Debug tmp = _debug;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	super::__construct(tmp);
	HX_STACK_LINE(16)
	this->set_name(HX_HCSTRING("Log","\x64","\x0c","\x3a","\x00"));
	HX_STACK_LINE(18)
	Dynamic tmp1 = this->on_trace_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	::luxe::Debug_obj::trace_callbacks->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	HX_STACK_LINE(20)
	this->logged = Array_obj< ::String >::__new();
	HX_STACK_LINE(22)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	{
		HX_STACK_LINE(22)
		::luxe::Debug tmp3 = this->debug;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		::luxe::Engine _this = tmp3->app;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(22)
		::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _this->build);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(22)
		::String tmp5 = (tmp4 + HX_HCSTRING(" / debug:","\x78","\xa2","\x67","\x75"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(22)
		bool tmp6 = _this->app->debug;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(22)
		::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(22)
		::String tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(22)
		::String tmp9 = (tmp8 + HX_HCSTRING(" / os:","\x05","\x42","\xbc","\xf0"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(22)
		::String tmp10 = _this->app->os;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(22)
		::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(22)
		::String tmp12 = (tmp11 + HX_HCSTRING(" / platform:","\xd6","\x0a","\x95","\x7c"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(22)
		::String tmp13 = _this->app->platform;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(22)
		tmp2 = (tmp12 + tmp13);
	}
	HX_STACK_LINE(22)
	::String tmp3 = (HX_HCSTRING("luxe version ","\xb2","\x0b","\x3b","\xf4") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	this->add_line(tmp3);
}
;
	return null();
}

//TraceDebugView_obj::~TraceDebugView_obj() { }

Dynamic TraceDebugView_obj::__CreateEmpty() { return  new TraceDebugView_obj; }
hx::ObjectPtr< TraceDebugView_obj > TraceDebugView_obj::__new(::luxe::Debug _debug)
{  hx::ObjectPtr< TraceDebugView_obj > _result_ = new TraceDebugView_obj();
	_result_->__construct(_debug);
	return _result_;}

Dynamic TraceDebugView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TraceDebugView_obj > _result_ = new TraceDebugView_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void TraceDebugView_obj::on_trace( Dynamic v,Dynamic inf){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","on_trace",0xbe5c46ed,"luxe.debug.TraceDebugView.on_trace","luxe/debug/TraceDebugView.hx",27,0x3d0b52d6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(inf,"inf")
		HX_STACK_LINE(29)
		::String tmp = (inf->__Field(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62"), hx::paccDynamic ) + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		int tmp1 = inf->__Field(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		::String tmp3 = (tmp2 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		Dynamic tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(29)
		::String tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(29)
		this->add_line(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TraceDebugView_obj,on_trace,(void))

Void TraceDebugView_obj::create( ){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","create",0xa6d193c4,"luxe.debug.TraceDebugView.create","luxe/debug/TraceDebugView.hx",33,0x3d0b52d6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		::luxe::Debug tmp = this->debug;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		Float tmp1 = tmp->padding->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		Float tmp2 = (tmp1 + (int)20);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		::luxe::Debug tmp3 = this->debug;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		Float tmp4 = tmp3->padding->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		Float tmp5 = (tmp4 + (int)40);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		::luxe::Engine tmp6 = ::Luxe_obj::core;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(35)
		int tmp7 = tmp6->screen->get_w();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(35)
		::luxe::Debug tmp8 = this->debug;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(35)
		Float tmp9 = tmp8->padding->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(35)
		Float tmp10 = (tmp9 * (int)2);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(35)
		Float tmp11 = (tmp7 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(35)
		Float tmp12 = (tmp11 - (int)20);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(35)
		::luxe::Engine tmp13 = ::Luxe_obj::core;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(35)
		int tmp14 = tmp13->screen->get_h();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(35)
		::luxe::Debug tmp15 = this->debug;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(35)
		Float tmp16 = tmp15->padding->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(35)
		Float tmp17 = (tmp16 * (int)2);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(35)
		Float tmp18 = (tmp14 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(35)
		Float tmp19 = (tmp18 - (int)40);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(35)
		::phoenix::Rectangle tmp20 = ::phoenix::Rectangle_obj::__new(tmp2,tmp5,tmp12,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(35)
		::phoenix::Rectangle text_bounds = tmp20;		HX_STACK_VAR(text_bounds,"text_bounds");
		HX_STACK_LINE(41)
		::phoenix::Color tmp21 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(41)
		::phoenix::Color tmp22 = tmp21->rgb((int)8947848);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(42)
		::phoenix::Rectangle tmp23 = text_bounds;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(44)
		::phoenix::Renderer tmp24 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(44)
		::phoenix::BitmapFont tmp25 = tmp24->font;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(48)
		::luxe::Debug tmp26 = this->debug;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(48)
		::phoenix::Batcher tmp27 = tmp26->batcher;		HX_STACK_VAR(tmp27,"tmp27");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Color &tmp22,::phoenix::Rectangle &tmp23,::phoenix::BitmapFont &tmp25,::phoenix::Batcher &tmp27){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/TraceDebugView.hx",37,0x3d0b52d6)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("debug.log.text","\x52","\x72","\x2d","\x08"),false);
					__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.3),false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp22,false);
					__result->Add(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66") , tmp23,false);
					__result->Add(HX_HCSTRING("bounds_wrap","\x14","\x47","\xee","\xec") , true,false);
					__result->Add(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43") , tmp25,false);
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
					__result->Add(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53") , (int)4,false);
					__result->Add(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b") , ((Dynamic)((int)12)),false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp27,false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(37)
		Dynamic tmp28 = _Function_1_1::Block(tmp22,tmp23,tmp25,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(37)
		::luxe::Text tmp29 = ::luxe::Text_obj::__new(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(37)
		this->lines = tmp29;
		HX_STACK_LINE(52)
		::luxe::Text tmp30 = this->lines;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(52)
		::phoenix::geometry::Geometry tmp31 = tmp30->geometry;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(52)
		bool tmp32 = (tmp31 != null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(52)
		if ((tmp32)){
			HX_STACK_LINE(53)
			::luxe::Text tmp33 = this->lines;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(53)
			::phoenix::Rectangle tmp34 = text_bounds;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(53)
			tmp33->geometry->set_clip_rect(tmp34);
			HX_STACK_LINE(54)
			::luxe::Text tmp35 = this->lines;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(54)
			tmp35->geometry->set_locked(true);
			HX_STACK_LINE(55)
			::luxe::Text tmp36 = this->lines;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(55)
			tmp36->geometry->id = HX_HCSTRING("debug.log.text.geometry","\x4e","\x94","\x78","\x85");
		}
	}
return null();
}


Void TraceDebugView_obj::onwindowsized( ::snow::types::WindowEvent e){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","onwindowsized",0x45ba300c,"luxe.debug.TraceDebugView.onwindowsized","luxe/debug/TraceDebugView.hx",59,0x3d0b52d6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(60)
		::luxe::Debug tmp = ::Luxe_obj::debug;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		::luxe::Debug debug = tmp;		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(61)
		Float tmp1 = debug->padding->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		Float tmp2 = (tmp1 + (int)20);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		Float tmp3 = debug->padding->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		Float tmp4 = (tmp3 + (int)40);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(61)
		int tmp6 = tmp5->screen->get_w();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		Float tmp7 = debug->padding->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		Float tmp8 = (tmp7 * (int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(61)
		Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(61)
		Float tmp10 = (tmp9 - (int)20);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(61)
		::luxe::Engine tmp11 = ::Luxe_obj::core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(61)
		int tmp12 = tmp11->screen->get_h();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(61)
		Float tmp13 = debug->padding->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(61)
		Float tmp14 = (tmp13 * (int)2);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(61)
		Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(61)
		Float tmp16 = (tmp15 - (int)40);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(61)
		::phoenix::Rectangle tmp17 = ::phoenix::Rectangle_obj::__new(tmp2,tmp4,tmp10,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(61)
		::phoenix::Rectangle text_bounds = tmp17;		HX_STACK_VAR(text_bounds,"text_bounds");
		HX_STACK_LINE(62)
		::luxe::Text tmp18 = this->lines;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(62)
		::phoenix::Rectangle tmp19 = text_bounds;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(62)
		tmp18->set_bounds(tmp19);
		HX_STACK_LINE(63)
		::luxe::Text tmp20 = this->lines;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(63)
		::phoenix::Rectangle tmp21 = text_bounds;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(63)
		tmp20->set_clip_rect(tmp21);
		HX_STACK_LINE(65)
		::luxe::Text tmp22 = this->lines;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(65)
		::phoenix::geometry::Geometry tmp23 = tmp22->geometry;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(65)
		bool tmp24 = (tmp23 != null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(65)
		if ((tmp24)){
			HX_STACK_LINE(66)
			::luxe::Text tmp25 = this->lines;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(66)
			tmp25->geometry->set_locked(true);
			HX_STACK_LINE(67)
			::luxe::Text tmp26 = this->lines;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(67)
			tmp26->geometry->set_dirty(true);
		}
	}
return null();
}


Void TraceDebugView_obj::add_line( ::String _t){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","add_line",0xe230d8da,"luxe.debug.TraceDebugView.add_line","luxe/debug/TraceDebugView.hx",71,0x3d0b52d6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_t,"_t")
		HX_STACK_LINE(73)
		bool tmp = (this->logged == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		if ((tmp)){
			HX_STACK_LINE(74)
			return null();
		}
		HX_STACK_LINE(78)
		::String tmp1 = _t;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		this->logged->push(tmp1);
		HX_STACK_LINE(81)
		bool tmp2 = this->visible;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(81)
		if ((tmp3)){
			HX_STACK_LINE(82)
			return null();
		}
		HX_STACK_LINE(85)
		this->refresh_lines();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TraceDebugView_obj,add_line,(void))

Void TraceDebugView_obj::refresh_lines( ){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","refresh_lines",0x2713d193,"luxe.debug.TraceDebugView.refresh_lines","luxe/debug/TraceDebugView.hx",90,0x3d0b52d6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(92)
		int tmp = this->_last_logged_length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		int tmp1 = this->logged->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		if ((tmp2)){
			HX_STACK_LINE(93)
			return null();
		}
		HX_STACK_LINE(99)
		::String _final = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(_final,"_final");
		HX_STACK_LINE(101)
		int tmp3 = this->logged->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(101)
		int tmp4 = this->max_lines;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(101)
		bool tmp5 = (tmp3 <= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(101)
		if ((tmp5)){
			HX_STACK_LINE(102)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(102)
			Array< ::String > _g1 = this->logged;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(102)
			while((true)){
				HX_STACK_LINE(102)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(102)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(102)
				if ((tmp7)){
					HX_STACK_LINE(102)
					break;
				}
				HX_STACK_LINE(102)
				::String tmp8 = _g1->__get(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(102)
				::String _line = tmp8;		HX_STACK_VAR(_line,"_line");
				HX_STACK_LINE(102)
				++(_g);
				HX_STACK_LINE(103)
				::String tmp9 = (_line + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(103)
				hx::AddEq(_final,tmp9);
			}
		}
		else{
			HX_STACK_LINE(106)
			int tmp6 = this->logged->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(106)
			int tmp7 = this->max_lines;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(106)
			int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(106)
			int _start = tmp8;		HX_STACK_VAR(_start,"_start");
			HX_STACK_LINE(107)
			int tmp9 = this->logged->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(107)
			int _total = tmp9;		HX_STACK_VAR(_total,"_total");
			HX_STACK_LINE(108)
			{
				HX_STACK_LINE(108)
				int _g1 = _start;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(108)
				int tmp10 = this->logged->length;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(108)
				int _g = tmp10;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(108)
				while((true)){
					HX_STACK_LINE(108)
					bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(108)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(108)
					if ((tmp12)){
						HX_STACK_LINE(108)
						break;
					}
					HX_STACK_LINE(108)
					int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(108)
					int i = tmp13;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(109)
					::String tmp14 = this->logged->__get(i);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(109)
					::String _line = tmp14;		HX_STACK_VAR(_line,"_line");
					HX_STACK_LINE(110)
					::String tmp15 = (_line + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(110)
					hx::AddEq(_final,tmp15);
				}
			}
		}
		HX_STACK_LINE(114)
		::luxe::Text tmp6 = this->lines;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(114)
		::String tmp7 = _final;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(114)
		tmp6->set_text(tmp7);
		HX_STACK_LINE(116)
		::luxe::Text tmp8 = this->lines;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(116)
		::phoenix::geometry::Geometry tmp9 = tmp8->geometry;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(116)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(116)
		if ((tmp10)){
			HX_STACK_LINE(117)
			::luxe::Text tmp11 = this->lines;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(117)
			tmp11->geometry->set_locked(true);
			HX_STACK_LINE(118)
			::luxe::Text tmp12 = this->lines;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(118)
			tmp12->geometry->set_dirty(true);
		}
		HX_STACK_LINE(121)
		int tmp11 = this->logged->length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(121)
		this->_last_logged_length = tmp11;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TraceDebugView_obj,refresh_lines,(void))

Void TraceDebugView_obj::refresh( ){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","refresh",0x2c45dc13,"luxe.debug.TraceDebugView.refresh","luxe/debug/TraceDebugView.hx",126,0x3d0b52d6)
		HX_STACK_THIS(this)
	}
return null();
}


Void TraceDebugView_obj::process( ){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","process",0x306fa4a7,"luxe.debug.TraceDebugView.process","luxe/debug/TraceDebugView.hx",130,0x3d0b52d6)
		HX_STACK_THIS(this)
	}
return null();
}


Void TraceDebugView_obj::show( ){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","show",0xd82ebfc5,"luxe.debug.TraceDebugView.show","luxe/debug/TraceDebugView.hx",134,0x3d0b52d6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(135)
		this->super::show();
		HX_STACK_LINE(136)
		this->refresh_lines();
		HX_STACK_LINE(137)
		::luxe::Text tmp = this->lines;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		tmp->set_visible(true);
	}
return null();
}


Void TraceDebugView_obj::hide( ){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","hide",0xd0ea1f8a,"luxe.debug.TraceDebugView.hide","luxe/debug/TraceDebugView.hx",140,0x3d0b52d6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		this->super::hide();
		HX_STACK_LINE(142)
		::luxe::Text tmp = this->lines;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		tmp->set_visible(false);
	}
return null();
}



TraceDebugView_obj::TraceDebugView_obj()
{
}

void TraceDebugView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TraceDebugView);
	HX_MARK_MEMBER_NAME(logged,"logged");
	HX_MARK_MEMBER_NAME(lines,"lines");
	HX_MARK_MEMBER_NAME(max_lines,"max_lines");
	HX_MARK_MEMBER_NAME(_last_logged_length,"_last_logged_length");
	::luxe::debug::DebugView_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TraceDebugView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(logged,"logged");
	HX_VISIT_MEMBER_NAME(lines,"lines");
	HX_VISIT_MEMBER_NAME(max_lines,"max_lines");
	HX_VISIT_MEMBER_NAME(_last_logged_length,"_last_logged_length");
	::luxe::debug::DebugView_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TraceDebugView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { return lines; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logged") ) { return logged; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"on_trace") ) { return on_trace_dyn(); }
		if (HX_FIELD_EQ(inName,"add_line") ) { return add_line_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_lines") ) { return max_lines; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onwindowsized") ) { return onwindowsized_dyn(); }
		if (HX_FIELD_EQ(inName,"refresh_lines") ) { return refresh_lines_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_last_logged_length") ) { return _last_logged_length; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TraceDebugView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { lines=inValue.Cast< ::luxe::Text >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logged") ) { logged=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_lines") ) { max_lines=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_last_logged_length") ) { _last_logged_length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TraceDebugView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("logged","\x82","\xd6","\x68","\x5c"));
	outFields->push(HX_HCSTRING("lines","\xff","\xdd","\x01","\x75"));
	outFields->push(HX_HCSTRING("max_lines","\xe4","\xc2","\xdf","\x6b"));
	outFields->push(HX_HCSTRING("_last_logged_length","\x79","\x2d","\x79","\x40"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TraceDebugView_obj,logged),HX_HCSTRING("logged","\x82","\xd6","\x68","\x5c")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(TraceDebugView_obj,lines),HX_HCSTRING("lines","\xff","\xdd","\x01","\x75")},
	{hx::fsInt,(int)offsetof(TraceDebugView_obj,max_lines),HX_HCSTRING("max_lines","\xe4","\xc2","\xdf","\x6b")},
	{hx::fsInt,(int)offsetof(TraceDebugView_obj,_last_logged_length),HX_HCSTRING("_last_logged_length","\x79","\x2d","\x79","\x40")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("logged","\x82","\xd6","\x68","\x5c"),
	HX_HCSTRING("lines","\xff","\xdd","\x01","\x75"),
	HX_HCSTRING("max_lines","\xe4","\xc2","\xdf","\x6b"),
	HX_HCSTRING("on_trace","\x25","\x58","\x1f","\xbd"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("onwindowsized","\xd4","\xb3","\x35","\x59"),
	HX_HCSTRING("add_line","\x12","\xea","\xf3","\xe0"),
	HX_HCSTRING("_last_logged_length","\x79","\x2d","\x79","\x40"),
	HX_HCSTRING("refresh_lines","\x5b","\x55","\x8f","\x3a"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TraceDebugView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TraceDebugView_obj::__mClass,"__mClass");
};

#endif

hx::Class TraceDebugView_obj::__mClass;

void TraceDebugView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.debug.TraceDebugView","\xa6","\x6a","\x10","\xaa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TraceDebugView_obj >;
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
} // end namespace debug
