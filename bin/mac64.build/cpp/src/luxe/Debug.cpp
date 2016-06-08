#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_luxe_Cursor
#include <luxe/Cursor.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
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
#ifndef INCLUDED_luxe_KeyEvent
#include <luxe/KeyEvent.h>
#endif
#ifndef INCLUDED_luxe_MouseEvent
#include <luxe/MouseEvent.h>
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
#ifndef INCLUDED_luxe_TouchEvent
#include <luxe/TouchEvent.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_Inspector
#include <luxe/debug/Inspector.h>
#endif
#ifndef INCLUDED_luxe_debug_ProfilerDebugView
#include <luxe/debug/ProfilerDebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_SceneDebugView
#include <luxe/debug/SceneDebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_StatsDebugView
#include <luxe/debug/StatsDebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_TraceDebugView
#include <luxe/debug/TraceDebugView.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_RenderState
#include <phoenix/RenderState.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_RendererStats
#include <phoenix/RendererStats.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#include <phoenix/geometry/QuadGeometry.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_systems_input_Scancodes
#include <snow/systems/input/Scancodes.h>
#endif
#ifndef INCLUDED_snow_types_WindowEvent
#include <snow/types/WindowEvent.h>
#endif
namespace luxe{

Void Debug_obj::__construct(::luxe::Engine _app)
{
HX_STACK_FRAME("luxe.Debug","new",0xf1f6bded,"luxe.Debug.new","luxe/Debug.hx",23,0xe4198724)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
{
	HX_STACK_LINE(409)
	this->last_cursor_grab = false;
	HX_STACK_LINE(51)
	this->profiling = false;
	HX_STACK_LINE(50)
	this->profile_path = HX_HCSTRING("profile.txt","\xab","\xd0","\x4f","\xc6");
	HX_STACK_LINE(43)
	this->last_view_index = (int)0;
	HX_STACK_LINE(42)
	this->current_view_index = (int)0;
	HX_STACK_LINE(39)
	this->dt_average_count = (int)0;
	HX_STACK_LINE(38)
	this->dt_average_span = (int)60;
	HX_STACK_LINE(37)
	this->dt_average_accum = ((Float)0);
	HX_STACK_LINE(36)
	this->dt_average = ((Float)0);
	HX_STACK_LINE(26)
	this->visible = false;
	HX_STACK_LINE(55)
	this->app = _app;
}
;
	return null();
}

//Debug_obj::~Debug_obj() { }

Dynamic Debug_obj::__CreateEmpty() { return  new Debug_obj; }
hx::ObjectPtr< Debug_obj > Debug_obj::__new(::luxe::Engine _app)
{  hx::ObjectPtr< Debug_obj > _result_ = new Debug_obj();
	_result_->__construct(_app);
	return _result_;}

Dynamic Debug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Debug_obj > _result_ = new Debug_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic Debug_obj::get_view( ::String _name){
	HX_STACK_FRAME("luxe.Debug","get_view",0xa5fdc141,"luxe.Debug.get_view","luxe/Debug.hx",62,0xe4198724)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(64)
		Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(64)
		while((true)){
			HX_STACK_LINE(64)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(64)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(64)
			if ((tmp1)){
				HX_STACK_LINE(64)
				break;
			}
			HX_STACK_LINE(64)
			::luxe::debug::DebugView tmp2 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(64)
			::luxe::debug::DebugView view = tmp2;		HX_STACK_VAR(view,"view");
			HX_STACK_LINE(64)
			++(_g);
			HX_STACK_LINE(66)
			::String tmp3 = view->get_name();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			::String tmp4 = _name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(66)
			if ((tmp5)){
				HX_STACK_LINE(67)
				Dynamic tmp6 = ((Dynamic)(view));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(67)
				return tmp6;
			}
		}
	}
	HX_STACK_LINE(72)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,get_view,return )

Void Debug_obj::start( ::String _name,Dynamic _max){
{
		HX_STACK_FRAME("luxe.Debug","start",0x566e9f2f,"luxe.Debug.start","luxe/Debug.hx",79,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_max,"_max")
		HX_STACK_LINE(81)
		::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		bool tmp1 = tmp->headless;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		if ((tmp2)){
			HX_STACK_LINE(82)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(82)
			Dynamic tmp4 = _max;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			::luxe::debug::ProfilerDebugView_obj::start(tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,start,(void))

Void Debug_obj::end( ::String _name){
{
		HX_STACK_FRAME("luxe.Debug","end",0xf1eff168,"luxe.Debug.end","luxe/Debug.hx",88,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(90)
		::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		bool tmp1 = tmp->headless;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		if ((tmp2)){
			HX_STACK_LINE(91)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			::luxe::debug::ProfilerDebugView_obj::end(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,end,(void))

Void Debug_obj::init( ){
{
		HX_STACK_FRAME("luxe.Debug","init",0xc2a828e3,"luxe.Debug.init","luxe/Debug.hx",99,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		::luxe::Debug_obj::views = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(105)
		::luxe::debug::TraceDebugView tmp = ::luxe::debug::TraceDebugView_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		::luxe::Debug_obj::views->push(tmp);
		HX_STACK_LINE(106)
		::luxe::debug::StatsDebugView tmp1 = ::luxe::debug::StatsDebugView_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		::luxe::Debug_obj::views->push(tmp1);
		HX_STACK_LINE(108)
		::luxe::debug::ProfilerDebugView tmp2 = ::luxe::debug::ProfilerDebugView_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		::luxe::Debug_obj::views->push(tmp2);
		HX_STACK_LINE(109)
		::luxe::debug::SceneDebugView tmp3 = ::luxe::debug::SceneDebugView_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(109)
		::luxe::Debug_obj::views->push(tmp3);
		HX_STACK_LINE(111)
		::luxe::debug::DebugView tmp4 = ::luxe::Debug_obj::views->__get((int)0).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		this->current_view = tmp4;
		HX_STACK_LINE(115)
		Dynamic tmp5 = ::luxe::Debug_obj::internal_trace_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(115)
		::haxe::Log_obj::trace = tmp5;
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,init,(void))

Void Debug_obj::create_debug_console( ){
{
		HX_STACK_FRAME("luxe.Debug","create_debug_console",0x55dabe3b,"luxe.Debug.create_debug_console","luxe/Debug.hx",121,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		::luxe::Debug _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(125)
			Dynamic tmp1 = this->keyup_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(125)
			tmp->emitter->on((int)13,tmp1);
		}
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(126)
			Dynamic tmp1 = this->keydown_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(126)
			tmp->emitter->on((int)12,tmp1);
		}
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(127)
			Dynamic tmp1 = this->mouseup_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(127)
			tmp->emitter->on((int)18,tmp1);
		}
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(128)
			Dynamic tmp1 = this->mousedown_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(128)
			tmp->emitter->on((int)17,tmp1);
		}
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(129)
			Dynamic tmp1 = this->mousemove_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(129)
			tmp->emitter->on((int)19,tmp1);
		}
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(130)
			Dynamic tmp1 = this->mousewheel_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(130)
			tmp->emitter->on((int)20,tmp1);
		}
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(131)
			Dynamic tmp1 = this->touchup_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(131)
			tmp->emitter->on((int)22,tmp1);
		}
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(132)
			Dynamic tmp1 = this->touchdown_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(132)
			tmp->emitter->on((int)21,tmp1);
		}
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(133)
			Dynamic tmp1 = this->touchmove_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(133)
			tmp->emitter->on((int)23,tmp1);
		}
		HX_STACK_LINE(136)
		::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		::phoenix::Renderer tmp1 = tmp->renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		Float tmp2 = ::Math_obj::pow((int)2,(int)20);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(136)
		::phoenix::Batcher tmp4 = ::phoenix::Batcher_obj::__new(tmp1,HX_HCSTRING("debug_batcher","\x7b","\xd9","\xce","\x3f"),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(136)
		this->batcher = tmp4;
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Debug.hx",138,0xe4198724)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("camera_name","\x65","\x11","\x29","\x5d") , HX_HCSTRING("debug_batcher_camera","\x29","\x74","\xee","\xd9"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(138)
		Dynamic tmp5 = _Function_1_1::Block();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(138)
		::phoenix::Camera tmp6 = ::phoenix::Camera_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(138)
		this->view = tmp6;
		HX_STACK_LINE(140)
		::phoenix::Camera tmp7 = this->view;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(140)
		::phoenix::Batcher tmp8 = this->batcher;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(140)
		tmp8->view = tmp7;
		HX_STACK_LINE(142)
		{
			HX_STACK_LINE(142)
			::phoenix::Batcher tmp9 = this->batcher;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(142)
			::phoenix::Batcher _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(142)
			_this->layer = (int)999;
			HX_STACK_LINE(142)
			Dynamic tmp10 = _this->renderer->sort_batchers_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(142)
			_this->renderer->batchers->sort(tmp10);
			HX_STACK_LINE(142)
			_this->layer;
		}
		HX_STACK_LINE(147)
		::luxe::Engine tmp9 = this->app;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(147)
		int tmp10 = tmp9->screen->get_w();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(147)
		Dynamic tmp11 = ((Dynamic)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(147)
		::luxe::Engine tmp12 = this->app;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(147)
		int tmp13 = tmp12->screen->get_h();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(147)
		Dynamic tmp14 = ((Dynamic)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(148)
		::phoenix::Color tmp15 = ::phoenix::Color_obj::__new((int)0,(int)0,(int)0,((Float)0.8));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(151)
		::phoenix::Batcher tmp16 = this->batcher;		HX_STACK_VAR(tmp16,"tmp16");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp11,::phoenix::Color &tmp15,::phoenix::Batcher &tmp16,Dynamic &tmp14){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Debug.hx",144,0xe4198724)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("debug.overlay","\x75","\x22","\x27","\x36"),false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
					__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp11,false);
					__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp14,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp15,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Dynamic)((int)999)),false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , false,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp16,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(144)
		Dynamic tmp17 = _Function_1_2::Block(tmp11,tmp15,tmp16,tmp14);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(144)
		::phoenix::geometry::QuadGeometry tmp18 = ::phoenix::geometry::QuadGeometry_obj::__new(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(144)
		this->overlay = tmp18;
		HX_STACK_LINE(154)
		::phoenix::geometry::QuadGeometry tmp19 = this->overlay;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(154)
		tmp19->set_locked(true);
		HX_STACK_LINE(157)
		::luxe::Engine tmp20 = this->app;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(157)
		int tmp21 = tmp20->screen->get_w();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(157)
		Float tmp22 = (tmp21 * ((Float)0.05));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(157)
		::luxe::Engine tmp23 = this->app;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(157)
		int tmp24 = tmp23->screen->get_h();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(157)
		Float tmp25 = (tmp24 * ((Float)0.05));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(157)
		::phoenix::Vector tmp26 = ::phoenix::Vector_obj::__new(tmp22,tmp25,null(),null());		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(157)
		this->padding = tmp26;
		HX_STACK_LINE(159)
		::phoenix::Vector tmp27 = this->padding;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(159)
		Float tmp28 = tmp27->x;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(159)
		::phoenix::Vector tmp29 = this->padding;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(159)
		Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(159)
		::phoenix::Vector tmp31 = ::phoenix::Vector_obj::__new(tmp28,tmp30,null(),null());		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(160)
		::luxe::Engine tmp32 = this->app;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(160)
		int tmp33 = tmp32->screen->get_w();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(160)
		::phoenix::Vector tmp34 = this->padding;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(160)
		Float tmp35 = tmp34->x;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(160)
		Float tmp36 = (tmp35 * (int)2);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(160)
		Float tmp37 = (tmp33 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(160)
		::luxe::Engine tmp38 = this->app;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(160)
		int tmp39 = tmp38->screen->get_h();		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(160)
		::phoenix::Vector tmp40 = this->padding;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(160)
		Float tmp41 = tmp40->y;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(160)
		Float tmp42 = (tmp41 * (int)2);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(160)
		Float tmp43 = (tmp39 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(160)
		::phoenix::Vector tmp44 = ::phoenix::Vector_obj::__new(tmp37,tmp43,null(),null());		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(161)
		::phoenix::Batcher tmp45 = this->batcher;		HX_STACK_VAR(tmp45,"tmp45");
		struct _Function_1_3{
			inline static Dynamic Block( ::phoenix::Vector &tmp44,::phoenix::Vector &tmp31,::phoenix::Batcher &tmp45){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Debug.hx",158,0xe4198724)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp31,false);
					__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp44,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp45,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(158)
		Dynamic tmp46 = _Function_1_3::Block(tmp44,tmp31,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(158)
		::luxe::debug::Inspector tmp47 = ::luxe::debug::Inspector_obj::__new(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(158)
		this->inspector = tmp47;
		HX_STACK_LINE(165)
		Dynamic tmp48 = this->refresh_dyn();		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(165)
		::luxe::debug::Inspector tmp49 = this->inspector;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(165)
		tmp49->onrefresh = tmp48;
		HX_STACK_LINE(167)
		{
			HX_STACK_LINE(167)
			::luxe::Engine tmp50 = this->app;		HX_STACK_VAR(tmp50,"tmp50");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::luxe::Debug,_g)
			int __ArgCount() const { return 1; }
			Void run(::snow::types::WindowEvent _event){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","luxe/Debug.hx",167,0xe4198724)
				HX_STACK_ARG(_event,"_event")
				{
					HX_STACK_LINE(169)
					Dynamic _w = _event->x;		HX_STACK_VAR(_w,"_w");
					HX_STACK_LINE(170)
					Dynamic _h = _event->y;		HX_STACK_VAR(_h,"_h");
					HX_STACK_LINE(172)
					{
						HX_STACK_LINE(172)
						::phoenix::Vector _this = _g->padding;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(172)
						Float tmp51 = (_w * ((Float)0.05));		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(172)
						Float _x = tmp51;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(172)
						Float tmp52 = (_h * ((Float)0.05));		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(172)
						Float _y = tmp52;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(172)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(172)
						_this->ignore_listeners = true;
						HX_STACK_LINE(172)
						{
							HX_STACK_LINE(172)
							_this->x = _x;
							HX_STACK_LINE(172)
							bool tmp53 = _this->_construct;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(172)
							if ((tmp53)){
								HX_STACK_LINE(172)
								_this->x;
							}
							else{
								HX_STACK_LINE(172)
								bool tmp54 = (_this->listen_x != null());		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(172)
								bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(172)
								if ((tmp54)){
									HX_STACK_LINE(172)
									bool tmp56 = _this->ignore_listeners;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(172)
									bool tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(172)
									tmp55 = !(tmp57);
								}
								else{
									HX_STACK_LINE(172)
									tmp55 = false;
								}
								HX_STACK_LINE(172)
								if ((tmp55)){
									HX_STACK_LINE(172)
									Float tmp56 = _x;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(172)
									_this->listen_x(tmp56);
								}
								HX_STACK_LINE(172)
								_this->x;
							}
						}
						HX_STACK_LINE(172)
						{
							HX_STACK_LINE(172)
							_this->y = _y;
							HX_STACK_LINE(172)
							bool tmp53 = _this->_construct;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(172)
							if ((tmp53)){
								HX_STACK_LINE(172)
								_this->y;
							}
							else{
								HX_STACK_LINE(172)
								bool tmp54 = (_this->listen_y != null());		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(172)
								bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(172)
								if ((tmp54)){
									HX_STACK_LINE(172)
									bool tmp56 = _this->ignore_listeners;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(172)
									bool tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(172)
									tmp55 = !(tmp57);
								}
								else{
									HX_STACK_LINE(172)
									tmp55 = false;
								}
								HX_STACK_LINE(172)
								if ((tmp55)){
									HX_STACK_LINE(172)
									Float tmp56 = _y;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(172)
									_this->listen_y(tmp56);
								}
								HX_STACK_LINE(172)
								_this->y;
							}
						}
						HX_STACK_LINE(172)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(172)
						bool tmp53 = (_this->listen_x != null());		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(172)
						bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(172)
						if ((tmp53)){
							HX_STACK_LINE(172)
							bool tmp55 = _this->ignore_listeners;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(172)
							bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(172)
							tmp54 = !(tmp56);
						}
						else{
							HX_STACK_LINE(172)
							tmp54 = false;
						}
						HX_STACK_LINE(172)
						if ((tmp54)){
							HX_STACK_LINE(172)
							Float tmp55 = _this->x;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(172)
							_this->listen_x(tmp55);
						}
						HX_STACK_LINE(172)
						bool tmp55 = (_this->listen_y != null());		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(172)
						bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(172)
						if ((tmp55)){
							HX_STACK_LINE(172)
							bool tmp57 = _this->ignore_listeners;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(172)
							bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(172)
							tmp56 = !(tmp58);
						}
						else{
							HX_STACK_LINE(172)
							tmp56 = false;
						}
						HX_STACK_LINE(172)
						if ((tmp56)){
							HX_STACK_LINE(172)
							Float tmp57 = _this->y;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(172)
							_this->listen_y(tmp57);
						}
						HX_STACK_LINE(172)
						_this;
					}
					HX_STACK_LINE(174)
					Dynamic tmp51 = _w;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(174)
					Dynamic tmp52 = _h;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(174)
					_g->overlay->resize_xy(tmp51,tmp52);
					HX_STACK_LINE(175)
					::phoenix::Rectangle tmp53 = ::phoenix::Rectangle_obj::__new((int)0,(int)0,_w,_h);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(175)
					_g->view->set_viewport(tmp53);
					HX_STACK_LINE(176)
					Dynamic tmp54 = _w;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(176)
					Float tmp55 = _g->padding->x;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(176)
					Float tmp56 = (tmp55 * (int)2);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(176)
					Float tmp57 = (tmp54 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(176)
					Dynamic tmp58 = _h;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(176)
					Float tmp59 = _g->padding->y;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(176)
					Float tmp60 = (tmp59 * (int)2);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(176)
					Float tmp61 = (tmp58 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(176)
					::phoenix::Vector tmp62 = ::phoenix::Vector_obj::__new(tmp57,tmp61,null(),null());		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(176)
					_g->inspector->set_size(tmp62);
					HX_STACK_LINE(177)
					Float tmp63 = _g->padding->x;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(177)
					Float tmp64 = _g->padding->y;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(177)
					::phoenix::Vector tmp65 = ::phoenix::Vector_obj::__new(tmp63,tmp64,null(),null());		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(177)
					_g->inspector->set_pos(tmp65);
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(179)
						Array< ::Dynamic > _g2 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(179)
						while((true)){
							HX_STACK_LINE(179)
							bool tmp66 = (_g1 < _g2->length);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(179)
							bool tmp67 = !(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(179)
							if ((tmp67)){
								HX_STACK_LINE(179)
								break;
							}
							HX_STACK_LINE(179)
							::luxe::debug::DebugView tmp68 = _g2->__get(_g1).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(179)
							::luxe::debug::DebugView view = tmp68;		HX_STACK_VAR(view,"view");
							HX_STACK_LINE(179)
							++(_g1);
							HX_STACK_LINE(180)
							::snow::types::WindowEvent tmp69 = _event;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(180)
							view->onwindowsized(tmp69);
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(167)
			tmp50->emitter->on((int)31, Dynamic(new _Function_2_1(_g)));
		}
		HX_STACK_LINE(184)
		{
			HX_STACK_LINE(184)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(184)
			Array< ::Dynamic > _g11 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(184)
			while((true)){
				HX_STACK_LINE(184)
				bool tmp50 = (_g1 < _g11->length);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(184)
				bool tmp51 = !(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(184)
				if ((tmp51)){
					HX_STACK_LINE(184)
					break;
				}
				HX_STACK_LINE(184)
				::luxe::debug::DebugView tmp52 = _g11->__get(_g1).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(184)
				::luxe::debug::DebugView view = tmp52;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(184)
				++(_g1);
				HX_STACK_LINE(185)
				view->create();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,create_debug_console,(void))

Void Debug_obj::render( ){
{
		HX_STACK_FRAME("luxe.Debug","render",0x498bb3e9,"luxe.Debug.render","luxe/Debug.hx",193,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(197)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		if ((tmp)){
			HX_STACK_LINE(199)
			::String tmp1 = ::luxe::Debug_obj::debug_batch_tag;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(199)
			this->start(tmp1,null());
			HX_STACK_LINE(201)
			{
				HX_STACK_LINE(201)
				::phoenix::Batcher tmp2 = this->batcher;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(201)
				::phoenix::Batcher _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(201)
				_this->draw_calls = (int)0;
				HX_STACK_LINE(201)
				_this->vert_count = (int)0;
				HX_STACK_LINE(201)
				::phoenix::Batcher tmp3 = _this;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(201)
				_this->emitter->emit((int)1,tmp3);
				HX_STACK_LINE(201)
				{
					HX_STACK_LINE(201)
					_this->view->process();
					HX_STACK_LINE(201)
					::phoenix::RenderState tmp4 = _this->renderer->state;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(201)
					::phoenix::Rectangle tmp5 = _this->view->viewport;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(201)
					Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(201)
					::phoenix::Rectangle tmp7 = _this->view->viewport;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(201)
					Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(201)
					::phoenix::Rectangle tmp9 = _this->view->viewport;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(201)
					Float tmp10 = tmp9->w;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(201)
					::phoenix::Rectangle tmp11 = _this->view->viewport;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(201)
					Float tmp12 = tmp11->h;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(201)
					tmp4->viewport(tmp6,tmp8,tmp10,tmp12);
				}
				HX_STACK_LINE(201)
				_this->batch(false);
				HX_STACK_LINE(201)
				::phoenix::Batcher tmp4 = _this;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(201)
				_this->emitter->emit((int)2,tmp4);
			}
			HX_STACK_LINE(203)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(203)
			{
				HX_STACK_LINE(203)
				::phoenix::Batcher tmp3 = this->batcher;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(203)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp4 = tmp3->geometry->root;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(203)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp4;		HX_STACK_VAR(_node,"_node");
				HX_STACK_LINE(203)
				bool tmp5 = (_node == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(203)
				if ((tmp5)){
					HX_STACK_LINE(203)
					tmp2 = (int)0;
				}
				else{
					HX_STACK_LINE(203)
					tmp2 = _node->nodecount;
				}
			}
			HX_STACK_LINE(203)
			::luxe::Engine tmp3 = this->app;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(203)
			::phoenix::RendererStats tmp4 = tmp3->renderer->stats;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(203)
			hx::AddEq(tmp4->geometry_count,tmp2);
			HX_STACK_LINE(204)
			::phoenix::Batcher tmp5 = this->batcher;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(204)
			::luxe::Engine tmp6 = this->app;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(204)
			::phoenix::RendererStats tmp7 = tmp6->renderer->stats;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(204)
			hx::AddEq(tmp7->dynamic_batched_count,tmp5->dynamic_batched_count);
			HX_STACK_LINE(205)
			::phoenix::Batcher tmp8 = this->batcher;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(205)
			::luxe::Engine tmp9 = this->app;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(205)
			::phoenix::RendererStats tmp10 = tmp9->renderer->stats;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(205)
			hx::AddEq(tmp10->static_batched_count,tmp8->static_batched_count);
			HX_STACK_LINE(206)
			::phoenix::Batcher tmp11 = this->batcher;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(206)
			::luxe::Engine tmp12 = this->app;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(206)
			::phoenix::RendererStats tmp13 = tmp12->renderer->stats;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(206)
			hx::AddEq(tmp13->visible_count,tmp11->visible_count);
			HX_STACK_LINE(207)
			::phoenix::Batcher tmp14 = this->batcher;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(207)
			::luxe::Engine tmp15 = this->app;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(207)
			::phoenix::RendererStats tmp16 = tmp15->renderer->stats;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(207)
			hx::AddEq(tmp16->draw_calls,tmp14->draw_calls);
			HX_STACK_LINE(208)
			::phoenix::Batcher tmp17 = this->batcher;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(208)
			::luxe::Engine tmp18 = this->app;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(208)
			::phoenix::RendererStats tmp19 = tmp18->renderer->stats;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(208)
			hx::AddEq(tmp19->vert_count,tmp17->vert_count);
			HX_STACK_LINE(210)
			::String tmp20 = ::luxe::Debug_obj::debug_batch_tag;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(210)
			this->end(tmp20);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,render,(void))

Void Debug_obj::mouseup( ::luxe::MouseEvent e){
{
		HX_STACK_FRAME("luxe.Debug","mouseup",0x521047cd,"luxe.Debug.mouseup","luxe/Debug.hx",254,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(255)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(255)
		if ((tmp)){
			HX_STACK_LINE(256)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(256)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(256)
			while((true)){
				HX_STACK_LINE(256)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(256)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(256)
				if ((tmp2)){
					HX_STACK_LINE(256)
					break;
				}
				HX_STACK_LINE(256)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(256)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(256)
				++(_g);
				HX_STACK_LINE(257)
				::luxe::MouseEvent tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(257)
				view->onmouseup(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,mouseup,(void))

Void Debug_obj::mousedown( ::luxe::MouseEvent e){
{
		HX_STACK_FRAME("luxe.Debug","mousedown",0x214e9a54,"luxe.Debug.mousedown","luxe/Debug.hx",262,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(263)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(263)
		if ((tmp)){
			HX_STACK_LINE(264)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(264)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(264)
			while((true)){
				HX_STACK_LINE(264)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(264)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(264)
				if ((tmp2)){
					HX_STACK_LINE(264)
					break;
				}
				HX_STACK_LINE(264)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(264)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(264)
				++(_g);
				HX_STACK_LINE(265)
				::luxe::MouseEvent tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(265)
				view->onmousedown(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,mousedown,(void))

Void Debug_obj::mousemove( ::luxe::MouseEvent e){
{
		HX_STACK_FRAME("luxe.Debug","mousemove",0x27418503,"luxe.Debug.mousemove","luxe/Debug.hx",270,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(271)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(271)
		if ((tmp)){
			HX_STACK_LINE(272)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(272)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(272)
			while((true)){
				HX_STACK_LINE(272)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(272)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(272)
				if ((tmp2)){
					HX_STACK_LINE(272)
					break;
				}
				HX_STACK_LINE(272)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(272)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(272)
				++(_g);
				HX_STACK_LINE(273)
				::luxe::MouseEvent tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(273)
				view->onmousemove(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,mousemove,(void))

Void Debug_obj::mousewheel( ::luxe::MouseEvent e){
{
		HX_STACK_FRAME("luxe.Debug","mousewheel",0xef674669,"luxe.Debug.mousewheel","luxe/Debug.hx",278,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(279)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(279)
		if ((tmp)){
			HX_STACK_LINE(280)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(280)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(280)
			while((true)){
				HX_STACK_LINE(280)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(280)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(280)
				if ((tmp2)){
					HX_STACK_LINE(280)
					break;
				}
				HX_STACK_LINE(280)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(280)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(280)
				++(_g);
				HX_STACK_LINE(281)
				::luxe::MouseEvent tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(281)
				view->onmousewheel(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,mousewheel,(void))

Void Debug_obj::touchup( ::luxe::TouchEvent e){
{
		HX_STACK_FRAME("luxe.Debug","touchup",0x6a9563e7,"luxe.Debug.touchup","luxe/Debug.hx",286,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(287)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(287)
		if ((tmp)){
			HX_STACK_LINE(288)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(288)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(288)
			while((true)){
				HX_STACK_LINE(288)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(288)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(288)
				if ((tmp2)){
					HX_STACK_LINE(288)
					break;
				}
				HX_STACK_LINE(288)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(288)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(288)
				++(_g);
				HX_STACK_LINE(289)
				::luxe::TouchEvent tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(289)
				view->ontouchup(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,touchup,(void))

Void Debug_obj::touchdown( ::luxe::TouchEvent e){
{
		HX_STACK_FRAME("luxe.Debug","touchdown",0x3a6670ee,"luxe.Debug.touchdown","luxe/Debug.hx",294,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(313)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		if ((tmp)){
			HX_STACK_LINE(314)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(314)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(314)
			while((true)){
				HX_STACK_LINE(314)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(314)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(314)
				if ((tmp2)){
					HX_STACK_LINE(314)
					break;
				}
				HX_STACK_LINE(314)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(314)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(314)
				++(_g);
				HX_STACK_LINE(315)
				::luxe::TouchEvent tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(315)
				view->ontouchdown(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,touchdown,(void))

Void Debug_obj::touchmove( ::luxe::TouchEvent e){
{
		HX_STACK_FRAME("luxe.Debug","touchmove",0x40595b9d,"luxe.Debug.touchmove","luxe/Debug.hx",320,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(321)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(321)
		if ((tmp)){
			HX_STACK_LINE(322)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(322)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(322)
			while((true)){
				HX_STACK_LINE(322)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(322)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(322)
				if ((tmp2)){
					HX_STACK_LINE(322)
					break;
				}
				HX_STACK_LINE(322)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(322)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(322)
				++(_g);
				HX_STACK_LINE(323)
				::luxe::TouchEvent tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(323)
				view->ontouchmove(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,touchmove,(void))

Void Debug_obj::keyup( ::luxe::KeyEvent e){
{
		HX_STACK_FRAME("luxe.Debug","keyup",0xb1620087,"luxe.Debug.keyup","luxe/Debug.hx",328,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(330)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(330)
		if ((tmp)){
			HX_STACK_LINE(331)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(331)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(331)
			while((true)){
				HX_STACK_LINE(331)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(331)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(331)
				if ((tmp2)){
					HX_STACK_LINE(331)
					break;
				}
				HX_STACK_LINE(331)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(331)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(331)
				++(_g);
				HX_STACK_LINE(332)
				::luxe::KeyEvent tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(332)
				view->onkeyup(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,keyup,(void))

Void Debug_obj::keydown( ::luxe::KeyEvent e){
{
		HX_STACK_FRAME("luxe.Debug","keydown",0x430b758e,"luxe.Debug.keydown","luxe/Debug.hx",348,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(350)
		int tmp = e->scancode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(350)
		int tmp1 = ::snow::systems::input::Scancodes_obj::grave;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(350)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(350)
		if ((tmp2)){
			HX_STACK_LINE(351)
			bool tmp3 = this->visible;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(351)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(351)
			this->set_visible(tmp4);
		}
		HX_STACK_LINE(354)
		bool tmp3 = this->visible;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(354)
		if ((tmp3)){
			HX_STACK_LINE(356)
			bool tmp4 = (e->keycode == (int)49);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(356)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(356)
			if ((tmp4)){
				HX_STACK_LINE(356)
				tmp5 = this->visible;
			}
			else{
				HX_STACK_LINE(356)
				tmp5 = false;
			}
			HX_STACK_LINE(356)
			if ((tmp5)){
				HX_STACK_LINE(357)
				this->switch_view();
			}
			HX_STACK_LINE(360)
			{
				HX_STACK_LINE(360)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(360)
				Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(360)
				while((true)){
					HX_STACK_LINE(360)
					bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(360)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(360)
					if ((tmp7)){
						HX_STACK_LINE(360)
						break;
					}
					HX_STACK_LINE(360)
					::luxe::debug::DebugView tmp8 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(360)
					::luxe::debug::DebugView view = tmp8;		HX_STACK_VAR(view,"view");
					HX_STACK_LINE(360)
					++(_g);
					HX_STACK_LINE(361)
					::luxe::KeyEvent tmp9 = e;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(361)
					view->onkeydown(tmp9);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,keydown,(void))

Void Debug_obj::refresh( ){
{
		HX_STACK_FRAME("luxe.Debug","refresh",0x7ebe11e8,"luxe.Debug.refresh","luxe/Debug.hx",378,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(380)
		::luxe::debug::DebugView tmp = this->current_view;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(380)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(380)
		if ((tmp1)){
			HX_STACK_LINE(381)
			::luxe::debug::DebugView tmp2 = this->current_view;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(381)
			tmp2->refresh();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,refresh,(void))

Void Debug_obj::switch_view( ){
{
		HX_STACK_FRAME("luxe.Debug","switch_view",0x7281325d,"luxe.Debug.switch_view","luxe/Debug.hx",387,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(390)
		int tmp = this->current_view_index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(390)
		this->last_view_index = tmp;
		HX_STACK_LINE(392)
		(this->current_view_index)++;
		HX_STACK_LINE(395)
		int tmp1 = this->current_view_index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(395)
		int tmp2 = ::luxe::Debug_obj::views->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(395)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(395)
		bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(395)
		if ((tmp4)){
			HX_STACK_LINE(396)
			this->current_view_index = (int)0;
		}
		HX_STACK_LINE(400)
		int tmp5 = this->last_view_index;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(400)
		::luxe::debug::DebugView tmp6 = ::luxe::Debug_obj::views->__get(tmp5).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(400)
		tmp6->hide();
		HX_STACK_LINE(402)
		int tmp7 = this->current_view_index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(402)
		::luxe::debug::DebugView tmp8 = ::luxe::Debug_obj::views->__get(tmp7).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(402)
		this->current_view = tmp8;
		HX_STACK_LINE(405)
		::luxe::debug::DebugView tmp9 = this->current_view;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(405)
		tmp9->show();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,switch_view,(void))

bool Debug_obj::set_visible( bool _value){
	HX_STACK_FRAME("luxe.Debug","set_visible",0x445aa222,"luxe.Debug.set_visible","luxe/Debug.hx",411,0xe4198724)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(417)
	this->visible = _value;
	HX_STACK_LINE(418)
	::phoenix::geometry::QuadGeometry tmp = this->overlay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(418)
	bool tmp1 = this->visible;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(418)
	tmp->set_visible(tmp1);
	HX_STACK_LINE(420)
	bool tmp2 = this->visible;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(420)
	if ((tmp2)){
		HX_STACK_LINE(423)
		::luxe::Engine tmp3 = this->app;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(423)
		::luxe::Cursor tmp4 = tmp3->screen->cursor;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(423)
		bool tmp5 = tmp4->get_grab();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(423)
		this->last_cursor_grab = tmp5;
		HX_STACK_LINE(424)
		::luxe::Engine tmp6 = this->app;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(424)
		::luxe::Cursor tmp7 = tmp6->screen->cursor;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(424)
		tmp7->set_grab(false);
		HX_STACK_LINE(426)
		::luxe::debug::DebugView tmp8 = this->current_view;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(426)
		tmp8->show();
		HX_STACK_LINE(427)
		::luxe::debug::Inspector tmp9 = this->inspector;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(427)
		tmp9->show();
	}
	else{
		HX_STACK_LINE(431)
		bool tmp3 = this->last_cursor_grab;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(431)
		bool tmp4 = (tmp3 != false);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(431)
		if ((tmp4)){
			HX_STACK_LINE(432)
			::luxe::Engine tmp5 = this->app;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(432)
			::luxe::Cursor tmp6 = tmp5->screen->cursor;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(432)
			bool tmp7 = this->last_cursor_grab;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(432)
			tmp6->set_grab(tmp7);
		}
		HX_STACK_LINE(435)
		::luxe::debug::DebugView tmp5 = this->current_view;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(435)
		tmp5->hide();
		HX_STACK_LINE(436)
		::luxe::debug::Inspector tmp6 = this->inspector;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(436)
		tmp6->hide();
	}
	HX_STACK_LINE(440)
	bool tmp3 = this->visible;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(440)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,set_visible,return )

Void Debug_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Debug","destroy",0xb6236507,"luxe.Debug.destroy","luxe/Debug.hx",444,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(446)
		::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(446)
		Dynamic tmp1 = this->keyup_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(446)
		tmp->emitter->off((int)13,tmp1);
		HX_STACK_LINE(447)
		::luxe::Engine tmp2 = this->app;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(447)
		Dynamic tmp3 = this->keydown_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(447)
		tmp2->emitter->off((int)12,tmp3);
		HX_STACK_LINE(448)
		::luxe::Engine tmp4 = this->app;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(448)
		Dynamic tmp5 = this->mouseup_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(448)
		tmp4->emitter->off((int)18,tmp5);
		HX_STACK_LINE(449)
		::luxe::Engine tmp6 = this->app;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(449)
		Dynamic tmp7 = this->mousedown_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(449)
		tmp6->emitter->off((int)17,tmp7);
		HX_STACK_LINE(450)
		::luxe::Engine tmp8 = this->app;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(450)
		Dynamic tmp9 = this->mousemove_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(450)
		tmp8->emitter->off((int)19,tmp9);
		HX_STACK_LINE(451)
		::luxe::Engine tmp10 = this->app;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(451)
		Dynamic tmp11 = this->mousewheel_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(451)
		tmp10->emitter->off((int)20,tmp11);
		HX_STACK_LINE(454)
		::luxe::Debug_obj::shut_down = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,destroy,(void))

Void Debug_obj::process( ){
{
		HX_STACK_FRAME("luxe.Debug","process",0x82e7da7c,"luxe.Debug.process","luxe/Debug.hx",458,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(460)
		::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(460)
		hx::AddEq(this->dt_average_accum,tmp->frame_delta);
		HX_STACK_LINE(461)
		(this->dt_average_count)++;
		HX_STACK_LINE(463)
		int tmp1 = this->dt_average_count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(463)
		int tmp2 = this->dt_average_span;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(463)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(463)
		bool tmp4 = (tmp1 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(463)
		if ((tmp4)){
			HX_STACK_LINE(464)
			Float tmp5 = this->dt_average_accum;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(464)
			int tmp6 = this->dt_average_span;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(464)
			Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(464)
			this->dt_average = tmp7;
			HX_STACK_LINE(465)
			Float tmp8 = this->dt_average;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(465)
			this->dt_average_accum = tmp8;
			HX_STACK_LINE(466)
			this->dt_average_count = (int)0;
		}
		HX_STACK_LINE(469)
		bool tmp5 = this->visible;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(469)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(469)
		if ((tmp6)){
			HX_STACK_LINE(470)
			return null();
		}
		HX_STACK_LINE(474)
		::luxe::debug::Inspector tmp7 = this->inspector;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(474)
		::luxe::debug::DebugView tmp8 = this->current_view;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(474)
		::String tmp9 = tmp8->get_name();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(474)
		::String tmp10 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(474)
		::String tmp11 = (tmp10 + HX_HCSTRING("] / ","\xf4","\x48","\x91","\x3d"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(474)
		Float tmp12 = this->dt_average;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(474)
		Float tmp13 = (Float((int)1) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(474)
		int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(474)
		::String tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(474)
		::String tmp16 = (tmp15 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(474)
		Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(474)
		{
			HX_STACK_LINE(474)
			Float tmp18 = ::Math_obj::pow((int)10,(int)5);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(474)
			Float n = tmp18;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(474)
			::luxe::Engine tmp19 = this->app;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(474)
			Float tmp20 = tmp19->frame_delta;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(474)
			Float tmp21 = n;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(474)
			Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(474)
			int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(474)
			Float tmp24 = n;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(474)
			tmp17 = (Float(tmp23) / Float(tmp24));
		}
		HX_STACK_LINE(474)
		::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(474)
		::String tmp19 = (tmp18 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(474)
		Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(474)
		{
			HX_STACK_LINE(474)
			Float tmp21 = ::Math_obj::pow((int)10,(int)5);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(474)
			Float n = tmp21;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(474)
			Float tmp22 = this->dt_average;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(474)
			Float tmp23 = n;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(474)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(474)
			int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(474)
			Float tmp26 = n;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(474)
			tmp20 = (Float(tmp25) / Float(tmp26));
		}
		HX_STACK_LINE(474)
		::String tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(474)
		tmp7->title->set_text(tmp21);
		HX_STACK_LINE(476)
		{
			HX_STACK_LINE(476)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(476)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(476)
			while((true)){
				HX_STACK_LINE(476)
				bool tmp22 = (_g < _g1->length);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(476)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(476)
				if ((tmp23)){
					HX_STACK_LINE(476)
					break;
				}
				HX_STACK_LINE(476)
				::luxe::debug::DebugView tmp24 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(476)
				::luxe::debug::DebugView view = tmp24;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(476)
				++(_g);
				HX_STACK_LINE(477)
				view->process();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,process,(void))

Array< ::Dynamic > Debug_obj::views;

::String Debug_obj::debug_batch_tag;

cpp::ArrayBase Debug_obj::trace_callbacks;

bool Debug_obj::shut_down;

bool Debug_obj::tracing;

Void Debug_obj::internal_trace( Dynamic _value,Dynamic _info){
{
		HX_STACK_FRAME("luxe.Debug","internal_trace",0x7eeb5c56,"luxe.Debug.internal_trace","luxe/Debug.hx",225,0xe4198724)
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_info,"_info")
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			bool tmp = ::luxe::Debug_obj::tracing;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(227)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(227)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(227)
			if ((tmp2)){
				HX_STACK_LINE(214)
				::String tmp3 = HX_HCSTRING(" ( luxe.Debug: calling trace from a trace callback is an infinite loop!","\x49","\x5d","\xb7","\x53");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(214)
				::String tmp4 = (tmp3 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(227)
				::String tmp5 = (HX_HCSTRING("tracing == false","\xc1","\x8b","\x93","\xba") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(227)
				::luxe::DebugError tmp6 = ::luxe::DebugError_obj::assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(227)
				HX_STACK_DO_THROW(tmp6);
			}
		}
		HX_STACK_LINE(228)
		::luxe::Debug_obj::tracing = true;
		HX_STACK_LINE(230)
		Dynamic tmp = _value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(230)
		::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(230)
		::String tmp2 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(230)
		::String _out = tmp2;		HX_STACK_VAR(_out,"_out");
		HX_STACK_LINE(232)
		bool tmp3 = (_info != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(232)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(232)
		if ((tmp3)){
			HX_STACK_LINE(232)
			tmp4 = (_info->__Field(HX_HCSTRING("customParams","\xd7","\x51","\x18","\xed"), hx::paccDynamic ) != null());
		}
		else{
			HX_STACK_LINE(232)
			tmp4 = false;
		}
		HX_STACK_LINE(232)
		if ((tmp4)){
			HX_STACK_LINE(233)
			::String tmp5 = _info->__Field(HX_HCSTRING("customParams","\xd7","\x51","\x18","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(233)
			::String tmp6 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(233)
			hx::AddEq(_out,tmp6);
		}
		HX_STACK_LINE(237)
		__trace(_out,_info);
		HX_STACK_LINE(242)
		bool tmp5 = ::luxe::Debug_obj::shut_down;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(242)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(242)
		if ((tmp6)){
			HX_STACK_LINE(243)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(243)
			cpp::ArrayBase _g1 = ::luxe::Debug_obj::trace_callbacks;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(243)
			while((true)){
				HX_STACK_LINE(243)
				bool tmp7 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(243)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(243)
				if ((tmp8)){
					HX_STACK_LINE(243)
					break;
				}
				HX_STACK_LINE(243)
				Dynamic tmp9 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(243)
				Dynamic _callback = tmp9;		HX_STACK_VAR(_callback,"_callback");
				HX_STACK_LINE(243)
				++(_g);
				HX_STACK_LINE(244)
				Dynamic tmp10 = _value;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(244)
				Dynamic tmp11 = _info;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(244)
				_callback(tmp10,tmp11).Cast< Void >();
			}
		}
		HX_STACK_LINE(248)
		::luxe::Debug_obj::tracing = false;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,internal_trace,(void))


Debug_obj::Debug_obj()
{
}

void Debug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Debug);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(inspector,"inspector");
	HX_MARK_MEMBER_NAME(overlay,"overlay");
	HX_MARK_MEMBER_NAME(batcher,"batcher");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(debug_font,"debug_font");
	HX_MARK_MEMBER_NAME(dt_average,"dt_average");
	HX_MARK_MEMBER_NAME(dt_average_accum,"dt_average_accum");
	HX_MARK_MEMBER_NAME(dt_average_span,"dt_average_span");
	HX_MARK_MEMBER_NAME(dt_average_count,"dt_average_count");
	HX_MARK_MEMBER_NAME(current_view_index,"current_view_index");
	HX_MARK_MEMBER_NAME(last_view_index,"last_view_index");
	HX_MARK_MEMBER_NAME(current_view,"current_view");
	HX_MARK_MEMBER_NAME(padding,"padding");
	HX_MARK_MEMBER_NAME(profile_path,"profile_path");
	HX_MARK_MEMBER_NAME(profiling,"profiling");
	HX_MARK_MEMBER_NAME(last_cursor_grab,"last_cursor_grab");
	HX_MARK_END_CLASS();
}

void Debug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(inspector,"inspector");
	HX_VISIT_MEMBER_NAME(overlay,"overlay");
	HX_VISIT_MEMBER_NAME(batcher,"batcher");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(debug_font,"debug_font");
	HX_VISIT_MEMBER_NAME(dt_average,"dt_average");
	HX_VISIT_MEMBER_NAME(dt_average_accum,"dt_average_accum");
	HX_VISIT_MEMBER_NAME(dt_average_span,"dt_average_span");
	HX_VISIT_MEMBER_NAME(dt_average_count,"dt_average_count");
	HX_VISIT_MEMBER_NAME(current_view_index,"current_view_index");
	HX_VISIT_MEMBER_NAME(last_view_index,"last_view_index");
	HX_VISIT_MEMBER_NAME(current_view,"current_view");
	HX_VISIT_MEMBER_NAME(padding,"padding");
	HX_VISIT_MEMBER_NAME(profile_path,"profile_path");
	HX_VISIT_MEMBER_NAME(profiling,"profiling");
	HX_VISIT_MEMBER_NAME(last_cursor_grab,"last_cursor_grab");
}

Dynamic Debug_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"keyup") ) { return keyup_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"overlay") ) { return overlay; }
		if (HX_FIELD_EQ(inName,"batcher") ) { return batcher; }
		if (HX_FIELD_EQ(inName,"padding") ) { return padding; }
		if (HX_FIELD_EQ(inName,"mouseup") ) { return mouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"touchup") ) { return touchup_dyn(); }
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_view") ) { return get_view_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inspector") ) { return inspector; }
		if (HX_FIELD_EQ(inName,"profiling") ) { return profiling; }
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"mousemove") ) { return mousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"touchdown") ) { return touchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"touchmove") ) { return touchmove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"debug_font") ) { return debug_font; }
		if (HX_FIELD_EQ(inName,"dt_average") ) { return dt_average; }
		if (HX_FIELD_EQ(inName,"mousewheel") ) { return mousewheel_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"switch_view") ) { return switch_view_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"current_view") ) { return current_view; }
		if (HX_FIELD_EQ(inName,"profile_path") ) { return profile_path; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dt_average_span") ) { return dt_average_span; }
		if (HX_FIELD_EQ(inName,"last_view_index") ) { return last_view_index; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dt_average_accum") ) { return dt_average_accum; }
		if (HX_FIELD_EQ(inName,"dt_average_count") ) { return dt_average_count; }
		if (HX_FIELD_EQ(inName,"last_cursor_grab") ) { return last_cursor_grab; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"current_view_index") ) { return current_view_index; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"create_debug_console") ) { return create_debug_console_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Debug_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"views") ) { outValue = views; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tracing") ) { outValue = tracing; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shut_down") ) { outValue = shut_down; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"internal_trace") ) { outValue = internal_trace_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"debug_batch_tag") ) { outValue = debug_batch_tag; return true;  }
		if (HX_FIELD_EQ(inName,"trace_callbacks") ) { outValue = trace_callbacks; return true;  }
	}
	return false;
}

Dynamic Debug_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::luxe::Engine >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::phoenix::Camera >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overlay") ) { overlay=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"batcher") ) { batcher=inValue.Cast< ::phoenix::Batcher >(); return inValue; }
		if (HX_FIELD_EQ(inName,"padding") ) { padding=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inspector") ) { inspector=inValue.Cast< ::luxe::debug::Inspector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"profiling") ) { profiling=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"debug_font") ) { debug_font=inValue.Cast< ::phoenix::BitmapFont >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dt_average") ) { dt_average=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"current_view") ) { current_view=inValue.Cast< ::luxe::debug::DebugView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"profile_path") ) { profile_path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dt_average_span") ) { dt_average_span=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last_view_index") ) { last_view_index=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dt_average_accum") ) { dt_average_accum=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dt_average_count") ) { dt_average_count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last_cursor_grab") ) { last_cursor_grab=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"current_view_index") ) { current_view_index=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Debug_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"views") ) { views=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tracing") ) { tracing=ioValue.Cast< bool >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shut_down") ) { shut_down=ioValue.Cast< bool >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"debug_batch_tag") ) { debug_batch_tag=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"trace_callbacks") ) { trace_callbacks=ioValue.Cast< cpp::ArrayBase >(); return true; }
	}
	return false;
}

void Debug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("inspector","\xf7","\xf9","\x0e","\xf8"));
	outFields->push(HX_HCSTRING("overlay","\x90","\x43","\x10","\xa9"));
	outFields->push(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"));
	outFields->push(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"));
	outFields->push(HX_HCSTRING("debug_font","\x7b","\xda","\x87","\x62"));
	outFields->push(HX_HCSTRING("dt_average","\x6e","\x32","\x0e","\x4f"));
	outFields->push(HX_HCSTRING("dt_average_accum","\x08","\xea","\x79","\x34"));
	outFields->push(HX_HCSTRING("dt_average_span","\x7b","\x35","\xe8","\x30"));
	outFields->push(HX_HCSTRING("dt_average_count","\xfe","\x44","\x43","\x63"));
	outFields->push(HX_HCSTRING("current_view_index","\xfe","\x87","\xa7","\x2c"));
	outFields->push(HX_HCSTRING("last_view_index","\x01","\x45","\x48","\x57"));
	outFields->push(HX_HCSTRING("current_view","\x6b","\xc3","\x3e","\xb5"));
	outFields->push(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));
	outFields->push(HX_HCSTRING("profile_path","\xbb","\xe3","\x72","\xf3"));
	outFields->push(HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f"));
	outFields->push(HX_HCSTRING("last_cursor_grab","\x6c","\xb6","\xf8","\xdd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Engine*/ ,(int)offsetof(Debug_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsBool,(int)offsetof(Debug_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsObject /*::luxe::debug::Inspector*/ ,(int)offsetof(Debug_obj,inspector),HX_HCSTRING("inspector","\xf7","\xf9","\x0e","\xf8")},
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(Debug_obj,overlay),HX_HCSTRING("overlay","\x90","\x43","\x10","\xa9")},
	{hx::fsObject /*::phoenix::Batcher*/ ,(int)offsetof(Debug_obj,batcher),HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")},
	{hx::fsObject /*::phoenix::Camera*/ ,(int)offsetof(Debug_obj,view),HX_HCSTRING("view","\x65","\x32","\x4f","\x4e")},
	{hx::fsObject /*::phoenix::BitmapFont*/ ,(int)offsetof(Debug_obj,debug_font),HX_HCSTRING("debug_font","\x7b","\xda","\x87","\x62")},
	{hx::fsFloat,(int)offsetof(Debug_obj,dt_average),HX_HCSTRING("dt_average","\x6e","\x32","\x0e","\x4f")},
	{hx::fsFloat,(int)offsetof(Debug_obj,dt_average_accum),HX_HCSTRING("dt_average_accum","\x08","\xea","\x79","\x34")},
	{hx::fsInt,(int)offsetof(Debug_obj,dt_average_span),HX_HCSTRING("dt_average_span","\x7b","\x35","\xe8","\x30")},
	{hx::fsInt,(int)offsetof(Debug_obj,dt_average_count),HX_HCSTRING("dt_average_count","\xfe","\x44","\x43","\x63")},
	{hx::fsInt,(int)offsetof(Debug_obj,current_view_index),HX_HCSTRING("current_view_index","\xfe","\x87","\xa7","\x2c")},
	{hx::fsInt,(int)offsetof(Debug_obj,last_view_index),HX_HCSTRING("last_view_index","\x01","\x45","\x48","\x57")},
	{hx::fsObject /*::luxe::debug::DebugView*/ ,(int)offsetof(Debug_obj,current_view),HX_HCSTRING("current_view","\x6b","\xc3","\x3e","\xb5")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Debug_obj,padding),HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0")},
	{hx::fsString,(int)offsetof(Debug_obj,profile_path),HX_HCSTRING("profile_path","\xbb","\xe3","\x72","\xf3")},
	{hx::fsBool,(int)offsetof(Debug_obj,profiling),HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f")},
	{hx::fsBool,(int)offsetof(Debug_obj,last_cursor_grab),HX_HCSTRING("last_cursor_grab","\x6c","\xb6","\xf8","\xdd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Debug_obj::views,HX_HCSTRING("views","\x6e","\xe6","\xfc","\x36")},
	{hx::fsString,(void *) &Debug_obj::debug_batch_tag,HX_HCSTRING("debug_batch_tag","\xe9","\xff","\x5e","\xf0")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Debug_obj::trace_callbacks,HX_HCSTRING("trace_callbacks","\x94","\x35","\x4d","\xe8")},
	{hx::fsBool,(void *) &Debug_obj::shut_down,HX_HCSTRING("shut_down","\x8d","\xbd","\x24","\x57")},
	{hx::fsBool,(void *) &Debug_obj::tracing,HX_HCSTRING("tracing","\x02","\x63","\x07","\x88")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("inspector","\xf7","\xf9","\x0e","\xf8"),
	HX_HCSTRING("overlay","\x90","\x43","\x10","\xa9"),
	HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"),
	HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"),
	HX_HCSTRING("debug_font","\x7b","\xda","\x87","\x62"),
	HX_HCSTRING("dt_average","\x6e","\x32","\x0e","\x4f"),
	HX_HCSTRING("dt_average_accum","\x08","\xea","\x79","\x34"),
	HX_HCSTRING("dt_average_span","\x7b","\x35","\xe8","\x30"),
	HX_HCSTRING("dt_average_count","\xfe","\x44","\x43","\x63"),
	HX_HCSTRING("current_view_index","\xfe","\x87","\xa7","\x2c"),
	HX_HCSTRING("last_view_index","\x01","\x45","\x48","\x57"),
	HX_HCSTRING("current_view","\x6b","\xc3","\x3e","\xb5"),
	HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"),
	HX_HCSTRING("profile_path","\xbb","\xe3","\x72","\xf3"),
	HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f"),
	HX_HCSTRING("get_view","\xee","\xed","\x09","\xce"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("create_debug_console","\x68","\xba","\x8d","\x98"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("mouseup","\xc0","\x0f","\x73","\xc0"),
	HX_HCSTRING("mousedown","\x07","\x85","\xe9","\x03"),
	HX_HCSTRING("mousemove","\xb6","\x6f","\xdc","\x09"),
	HX_HCSTRING("mousewheel","\x56","\xb8","\x59","\x54"),
	HX_HCSTRING("touchup","\xda","\x2b","\xf8","\xd8"),
	HX_HCSTRING("touchdown","\xa1","\x5b","\x01","\x1d"),
	HX_HCSTRING("touchmove","\x50","\x46","\xf4","\x22"),
	HX_HCSTRING("keyup","\xba","\xd5","\xfe","\xde"),
	HX_HCSTRING("keydown","\x81","\x3d","\x6e","\xb1"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("switch_view","\xd0","\x6f","\xb2","\x61"),
	HX_HCSTRING("last_cursor_grab","\x6c","\xb6","\xf8","\xdd"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Debug_obj::views,"views");
	HX_MARK_MEMBER_NAME(Debug_obj::debug_batch_tag,"debug_batch_tag");
	HX_MARK_MEMBER_NAME(Debug_obj::trace_callbacks,"trace_callbacks");
	HX_MARK_MEMBER_NAME(Debug_obj::shut_down,"shut_down");
	HX_MARK_MEMBER_NAME(Debug_obj::tracing,"tracing");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Debug_obj::views,"views");
	HX_VISIT_MEMBER_NAME(Debug_obj::debug_batch_tag,"debug_batch_tag");
	HX_VISIT_MEMBER_NAME(Debug_obj::trace_callbacks,"trace_callbacks");
	HX_VISIT_MEMBER_NAME(Debug_obj::shut_down,"shut_down");
	HX_VISIT_MEMBER_NAME(Debug_obj::tracing,"tracing");
};

#endif

hx::Class Debug_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("views","\x6e","\xe6","\xfc","\x36"),
	HX_HCSTRING("debug_batch_tag","\xe9","\xff","\x5e","\xf0"),
	HX_HCSTRING("trace_callbacks","\x94","\x35","\x4d","\xe8"),
	HX_HCSTRING("shut_down","\x8d","\xbd","\x24","\x57"),
	HX_HCSTRING("tracing","\x02","\x63","\x07","\x88"),
	HX_HCSTRING("internal_trace","\xc3","\xc8","\x61","\x02"),
	::String(null()) };

void Debug_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Debug","\x7b","\x43","\x14","\x8e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Debug_obj::__GetStatic;
	__mClass->mSetStaticField = &Debug_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Debug_obj >;
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

void Debug_obj::__boot()
{
	debug_batch_tag= HX_HCSTRING("batcher.debug_batcher","\x74","\xad","\x60","\x92");
	trace_callbacks= cpp::ArrayBase_obj::__new();
	shut_down= false;
	tracing= false;
}

} // end namespace luxe
