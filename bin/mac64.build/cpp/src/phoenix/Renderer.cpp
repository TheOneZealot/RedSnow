#include <hxcpp.h>

#include "linc_opengl.h"
#include "linc_sdl.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_opengl_GLObject
#include <opengl/GLObject.h>
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
#ifndef INCLUDED_phoenix_RenderPath
#include <phoenix/RenderPath.h>
#endif
#ifndef INCLUDED_phoenix_RenderState
#include <phoenix/RenderState.h>
#endif
#ifndef INCLUDED_phoenix_RenderTexture
#include <phoenix/RenderTexture.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_RendererStats
#include <phoenix/RendererStats.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
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
#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetImage
#include <snow/systems/assets/AssetImage.h>
#endif
#ifndef INCLUDED_snow_types_ImageData
#include <snow/types/ImageData.h>
#endif
namespace phoenix{

Void Renderer_obj::__construct(::luxe::Engine _core,::snow::systems::assets::AssetImage _asset)
{
HX_STACK_FRAME("phoenix.Renderer","new",0x1fe39014,"phoenix.Renderer.new","phoenix/Renderer.hx",39,0x3d4c7b7b)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
HX_STACK_ARG(_asset,"_asset")
{
	HX_STACK_LINE(67)
	this->stop_count = (int)0;
	HX_STACK_LINE(66)
	this->stop = false;
	HX_STACK_LINE(65)
	this->should_clear = true;
	HX_STACK_LINE(74)
	this->core = _core;
	HX_STACK_LINE(75)
	this->font_asset = _asset;
	HX_STACK_LINE(81)
	::opengl::GLObject tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	{
		HX_STACK_LINE(81)
		Dynamic tmp1 = linc::opengl::webgl::getParameter((int)36006);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		Dynamic _id = tmp1;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(81)
		int _id1 = _id;		HX_STACK_VAR(_id1,"_id1");
		HX_STACK_LINE(81)
		::opengl::GLObject tmp2 = ::opengl::GLObject_obj::__new(_id1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		tmp = tmp2;
	}
	HX_STACK_LINE(81)
	this->default_fbo = tmp;
	HX_STACK_LINE(82)
	::opengl::GLObject tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	{
		HX_STACK_LINE(82)
		Dynamic tmp2 = linc::opengl::webgl::getParameter((int)36007);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		Dynamic _id = tmp2;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(82)
		int _id1 = _id;		HX_STACK_VAR(_id1,"_id1");
		HX_STACK_LINE(82)
		::opengl::GLObject tmp3 = ::opengl::GLObject_obj::__new(_id1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(82)
	this->default_rbo = tmp1;
	HX_STACK_LINE(87)
	glClearDepth(((Float)1.0));
	HX_STACK_LINE(88)
	glClearColor((int)0,(int)0,(int)0,(int)1);
	HX_STACK_LINE(89)
	glClear((int)16640);
	HX_STACK_LINE(90)
	{
		HX_STACK_LINE(90)
		::luxe::Engine tmp2 = this->core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		::snow::modules::sdl::Runtime tmp3 = tmp2->app->runtime;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(90)
		::cpp::Pointer< SDL_Window > tmp4 = tmp3->window;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(90)
		SDL_GL_SwapWindow(tmp4);
	}
	HX_STACK_LINE(91)
	glClear((int)16640);
	HX_STACK_LINE(138)
	Dynamic();
}
;
	return null();
}

//Renderer_obj::~Renderer_obj() { }

Dynamic Renderer_obj::__CreateEmpty() { return  new Renderer_obj; }
hx::ObjectPtr< Renderer_obj > Renderer_obj::__new(::luxe::Engine _core,::snow::systems::assets::AssetImage _asset)
{  hx::ObjectPtr< Renderer_obj > _result_ = new Renderer_obj();
	_result_->__construct(_core,_asset);
	return _result_;}

Dynamic Renderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Renderer_obj > _result_ = new Renderer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Renderer_obj::init( ){
{
		HX_STACK_FRAME("phoenix.Renderer","init",0xc3f338dc,"phoenix.Renderer.init","phoenix/Renderer.hx",99,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		::phoenix::RenderState tmp = ::phoenix::RenderState_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		this->state = tmp;
		HX_STACK_LINE(102)
		::phoenix::Color tmp1 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		::phoenix::Color tmp2 = tmp1->rgb((int)1710618);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		this->clear_color = tmp2;
		HX_STACK_LINE(103)
		::phoenix::RendererStats tmp3 = ::phoenix::RendererStats_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		this->stats = tmp3;
		HX_STACK_LINE(104)
		this->batchers = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(107)
		::luxe::Engine tmp4 = ::Luxe_obj::core;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(107)
		int tmp5 = tmp4->screen->get_w();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(107)
		::luxe::Engine tmp6 = ::Luxe_obj::core;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(107)
		int tmp7 = tmp6->screen->get_h();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(107)
		::phoenix::Vector tmp8 = ::phoenix::Vector_obj::__new(tmp5,tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(107)
		this->target_size = tmp8;
		HX_STACK_LINE(108)
		::phoenix::Camera tmp9 = ::phoenix::Camera_obj::__new(null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(108)
		this->camera = tmp9;
		HX_STACK_LINE(110)
		::phoenix::RenderPath tmp10 = ::phoenix::RenderPath_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(110)
		this->default_render_path = tmp10;
		HX_STACK_LINE(112)
		::phoenix::RenderPath tmp11 = this->default_render_path;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(112)
		this->render_path = tmp11;
		HX_STACK_LINE(115)
		this->create_default_shaders();
		HX_STACK_LINE(118)
		::phoenix::Batcher tmp12 = ::phoenix::Batcher_obj::__new(hx::ObjectPtr<OBJ_>(this),HX_HCSTRING("default batcher","\x48","\x68","\xba","\x35"),null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(118)
		this->batcher = tmp12;
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			::phoenix::Batcher tmp13 = this->batcher;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(119)
			::phoenix::Batcher _this = tmp13;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(119)
			_this->layer = (int)1;
			HX_STACK_LINE(119)
			Dynamic tmp14 = _this->renderer->sort_batchers_dyn();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(119)
			_this->renderer->batchers->sort(tmp14);
			HX_STACK_LINE(119)
			_this->layer;
		}
		HX_STACK_LINE(120)
		::phoenix::Batcher tmp13 = this->batcher;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(120)
		this->add_batch(tmp13);
		HX_STACK_LINE(124)
		this->create_default_font();
		HX_STACK_LINE(128)
		::luxe::Engine tmp14 = ::Luxe_obj::core;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(128)
		Dynamic tmp15 = tmp14->app->config;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(128)
		Dynamic tmp16 = tmp15->__Field(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(128)
		bool tmp17 = (tmp16 > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(128)
		if ((tmp17)){
			HX_STACK_LINE(130)
			::phoenix::RenderState tmp18 = this->state;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(130)
			tmp18->enable((int)2929);
			HX_STACK_LINE(132)
			::phoenix::RenderState tmp19 = this->state;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(132)
			tmp19->depth_function((int)515);
			HX_STACK_LINE(134)
			glClearDepth(((Float)1.0));
		}
		HX_STACK_LINE(138)
		glEnable((int)3042);
		HX_STACK_LINE(139)
		glBlendFunc((int)770,(int)771);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,init,(void))

Void Renderer_obj::destroy( ){
{
		HX_STACK_FRAME("phoenix.Renderer","destroy",0xe481d6ae,"phoenix.Renderer.destroy","phoenix/Renderer.hx",148,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(150)
		::phoenix::Color tmp = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		::phoenix::Color tmp1 = tmp->rgb((int)16729099);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		this->clear(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,destroy,(void))

int Renderer_obj::sort_batchers( ::phoenix::Batcher a,::phoenix::Batcher b){
	HX_STACK_FRAME("phoenix.Renderer","sort_batchers",0x489f0ce1,"phoenix.Renderer.sort_batchers","phoenix/Renderer.hx",155,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(156)
	bool tmp = (a->layer < b->layer);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	if ((tmp)){
		HX_STACK_LINE(156)
		return (int)-1;
	}
	HX_STACK_LINE(157)
	bool tmp1 = (a->layer > b->layer);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	if ((tmp1)){
		HX_STACK_LINE(157)
		return (int)1;
	}
	HX_STACK_LINE(158)
	bool tmp2 = (a->sequence < b->sequence);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(158)
	if ((tmp2)){
		HX_STACK_LINE(158)
		return (int)-1;
	}
	HX_STACK_LINE(159)
	bool tmp3 = (a->sequence > b->sequence);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(159)
	if ((tmp3)){
		HX_STACK_LINE(159)
		return (int)1;
	}
	HX_STACK_LINE(160)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC2(Renderer_obj,sort_batchers,return )

Void Renderer_obj::add_batch( ::phoenix::Batcher batch){
{
		HX_STACK_FRAME("phoenix.Renderer","add_batch",0xa2b26e90,"phoenix.Renderer.add_batch","phoenix/Renderer.hx",163,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(batch,"batch")
		HX_STACK_LINE(165)
		::phoenix::Batcher tmp = batch;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		this->batchers->push(tmp);
		HX_STACK_LINE(166)
		Dynamic tmp1 = this->sort_batchers_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		this->batchers->sort(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,add_batch,(void))

Void Renderer_obj::remove_batch( ::phoenix::Batcher batch){
{
		HX_STACK_FRAME("phoenix.Renderer","remove_batch",0x9e98000b,"phoenix.Renderer.remove_batch","phoenix/Renderer.hx",170,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(batch,"batch")
		HX_STACK_LINE(172)
		::phoenix::Batcher tmp = batch;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		this->batchers->remove(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,remove_batch,(void))

::phoenix::Batcher Renderer_obj::create_batcher( Dynamic options){
	HX_STACK_FRAME("phoenix.Renderer","create_batcher",0xfc84f3f0,"phoenix.Renderer.create_batcher","phoenix/Renderer.hx",177,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(180)
	int _new_batcher_layer = (int)2;		HX_STACK_VAR(_new_batcher_layer,"_new_batcher_layer");
	HX_STACK_LINE(182)
	bool tmp = (options != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	if ((tmp)){
		HX_STACK_LINE(184)
		{
			HX_STACK_LINE(184)
			bool tmp1 = (options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(184)
			if ((tmp1)){
				HX_STACK_LINE(184)
				options->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0");
			}
			HX_STACK_LINE(184)
			options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
		}
		HX_STACK_LINE(185)
		{
			HX_STACK_LINE(185)
			bool tmp1 = (options->__Field(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(185)
			if ((tmp1)){
				HX_STACK_LINE(185)
				options->__FieldRef(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f")) = _new_batcher_layer;
			}
			HX_STACK_LINE(185)
			options->__Field(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"), hx::paccDynamic );
		}
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			bool tmp1 = (options->__Field(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(186)
			if ((tmp1)){
				HX_STACK_LINE(186)
				::phoenix::Camera tmp2 = ::phoenix::Camera_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(186)
				options->__FieldRef(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7")) = tmp2;
			}
			HX_STACK_LINE(186)
			options->__Field(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"), hx::paccDynamic );
		}
		HX_STACK_LINE(187)
		{
			HX_STACK_LINE(187)
			bool tmp1 = (options->__Field(HX_HCSTRING("max_verts","\x87","\xcb","\x3f","\x2b"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(187)
			if ((tmp1)){
				HX_STACK_LINE(187)
				options->__FieldRef(HX_HCSTRING("max_verts","\x87","\xcb","\x3f","\x2b")) = (int)16384;
			}
			HX_STACK_LINE(187)
			options->__Field(HX_HCSTRING("max_verts","\x87","\xcb","\x3f","\x2b"), hx::paccDynamic );
		}
	}
	else{
		HX_STACK_LINE(192)
		::phoenix::Camera tmp1 = ::phoenix::Camera_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		int tmp2 = _new_batcher_layer;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_2_1{
			inline static Dynamic Block( int &tmp2,::phoenix::Camera &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",190,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"),false);
					__result->Add(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7") , tmp1,false);
					__result->Add(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f") , tmp2,false);
					__result->Add(HX_HCSTRING("max_verts","\x87","\xcb","\x3f","\x2b") , (int)16384,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(190)
		Dynamic tmp3 = _Function_2_1::Block(tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		options = tmp3;
	}
	HX_STACK_LINE(198)
	::phoenix::Batcher tmp1 = ::phoenix::Batcher_obj::__new(hx::ObjectPtr<OBJ_>(this),options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ),options->__Field(HX_HCSTRING("max_verts","\x87","\xcb","\x3f","\x2b"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	::phoenix::Batcher _batcher = tmp1;		HX_STACK_VAR(_batcher,"_batcher");
	HX_STACK_LINE(199)
	_batcher->view = options->__Field(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"), hx::paccDynamic );
	HX_STACK_LINE(200)
	{
		HX_STACK_LINE(200)
		int _layer = options->__Field(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"), hx::paccDynamic );		HX_STACK_VAR(_layer,"_layer");
		HX_STACK_LINE(200)
		_batcher->layer = _layer;
		HX_STACK_LINE(200)
		Dynamic tmp2 = _batcher->renderer->sort_batchers_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(200)
		_batcher->renderer->batchers->sort(tmp2);
		HX_STACK_LINE(200)
		_batcher->layer;
	}
	HX_STACK_LINE(202)
	bool tmp2 = (options->__Field(HX_HCSTRING("no_add","\xe3","\x4b","\xd1","\x23"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(202)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(202)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(202)
	if ((tmp3)){
		HX_STACK_LINE(202)
		tmp4 = (options->__Field(HX_HCSTRING("no_add","\xe3","\x4b","\xd1","\x23"), hx::paccDynamic ) == false);
	}
	else{
		HX_STACK_LINE(202)
		tmp4 = true;
	}
	HX_STACK_LINE(202)
	if ((tmp4)){
		HX_STACK_LINE(203)
		::phoenix::Batcher tmp5 = _batcher;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(203)
		this->add_batch(tmp5);
	}
	HX_STACK_LINE(206)
	::phoenix::Batcher tmp5 = _batcher;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(206)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,create_batcher,return )

Void Renderer_obj::clear( ::phoenix::Color _color){
{
		HX_STACK_FRAME("phoenix.Renderer","clear",0x3b218641,"phoenix.Renderer.clear","phoenix/Renderer.hx",211,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_color,"_color")
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			bool tmp = (_color == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(213)
			if ((tmp)){
				HX_STACK_LINE(213)
				::phoenix::Color tmp1 = this->clear_color;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(213)
				_color = tmp1;
			}
			HX_STACK_LINE(213)
			_color;
		}
		HX_STACK_LINE(215)
		Float tmp = _color->r;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(215)
		Float tmp1 = _color->g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(215)
		Float tmp2 = _color->b;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(215)
		Float tmp3 = _color->a;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(215)
		glClearColor(tmp,tmp1,tmp2,tmp3);
		HX_STACK_LINE(217)
		::luxe::Engine tmp4 = ::Luxe_obj::core;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(217)
		Dynamic tmp5 = tmp4->app->config;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(217)
		Dynamic tmp6 = tmp5->__Field(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(217)
		bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(217)
		if ((tmp7)){
			HX_STACK_LINE(218)
			glClear((int)16640);
			HX_STACK_LINE(219)
			glClearDepth(((Float)1.0));
		}
		else{
			HX_STACK_LINE(221)
			glClear((int)16384);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,clear,(void))

Void Renderer_obj::blend_mode( Dynamic __o__src_mode,hx::Null< int >  __o__dst_mode){
Dynamic _src_mode = __o__src_mode.Default(770);
int _dst_mode = __o__dst_mode.Default(771);
	HX_STACK_FRAME("phoenix.Renderer","blend_mode",0x5b8aa01d,"phoenix.Renderer.blend_mode","phoenix/Renderer.hx",228,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_src_mode,"_src_mode")
	HX_STACK_ARG(_dst_mode,"_dst_mode")
{
		HX_STACK_LINE(228)
		int sfactor = _src_mode;		HX_STACK_VAR(sfactor,"sfactor");
		HX_STACK_LINE(228)
		int tmp = sfactor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(228)
		int tmp1 = _dst_mode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(228)
		glBlendFunc(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Renderer_obj,blend_mode,(void))

Void Renderer_obj::blend_equation( Dynamic __o__equation){
Dynamic _equation = __o__equation.Default(32774);
	HX_STACK_FRAME("phoenix.Renderer","blend_equation",0x0d046d46,"phoenix.Renderer.blend_equation","phoenix/Renderer.hx",234,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_equation,"_equation")
{
		HX_STACK_LINE(234)
		int mode = _equation;		HX_STACK_VAR(mode,"mode");
		HX_STACK_LINE(234)
		int tmp = mode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(234)
		glBlendEquation(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,blend_equation,(void))

Void Renderer_obj::internal_resized( int _w,int _h){
{
		HX_STACK_FRAME("phoenix.Renderer","internal_resized",0xd68aa17a,"phoenix.Renderer.internal_resized","phoenix/Renderer.hx",240,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(242)
		::phoenix::RenderTexture tmp = this->get_target();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(242)
		if ((tmp1)){
			HX_STACK_LINE(243)
			::phoenix::Vector tmp2 = this->target_size;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(243)
			::phoenix::Vector _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(243)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(243)
			_this->ignore_listeners = true;
			HX_STACK_LINE(243)
			{
				HX_STACK_LINE(243)
				_this->x = _w;
				HX_STACK_LINE(243)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(243)
				if ((tmp3)){
					HX_STACK_LINE(243)
					_this->x;
				}
				else{
					HX_STACK_LINE(243)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(243)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(243)
					if ((tmp4)){
						HX_STACK_LINE(243)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(243)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(243)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(243)
						tmp5 = false;
					}
					HX_STACK_LINE(243)
					if ((tmp5)){
						HX_STACK_LINE(243)
						int tmp6 = _w;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(243)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(243)
					_this->x;
				}
			}
			HX_STACK_LINE(243)
			{
				HX_STACK_LINE(243)
				_this->y = _h;
				HX_STACK_LINE(243)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(243)
				if ((tmp3)){
					HX_STACK_LINE(243)
					_this->y;
				}
				else{
					HX_STACK_LINE(243)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(243)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(243)
					if ((tmp4)){
						HX_STACK_LINE(243)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(243)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(243)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(243)
						tmp5 = false;
					}
					HX_STACK_LINE(243)
					if ((tmp5)){
						HX_STACK_LINE(243)
						int tmp6 = _h;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(243)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(243)
					_this->y;
				}
			}
			HX_STACK_LINE(243)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(243)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(243)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(243)
			if ((tmp3)){
				HX_STACK_LINE(243)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(243)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(243)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(243)
				tmp4 = false;
			}
			HX_STACK_LINE(243)
			if ((tmp4)){
				HX_STACK_LINE(243)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(243)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(243)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(243)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(243)
			if ((tmp5)){
				HX_STACK_LINE(243)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(243)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(243)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(243)
				tmp6 = false;
			}
			HX_STACK_LINE(243)
			if ((tmp6)){
				HX_STACK_LINE(243)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(243)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(243)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Renderer_obj,internal_resized,(void))

Void Renderer_obj::process( ){
{
		HX_STACK_FRAME("phoenix.Renderer","process",0xb1464c23,"phoenix.Renderer.process","phoenix/Renderer.hx",250,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(252)
		bool tmp = this->stop;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(252)
		if ((tmp)){
			HX_STACK_LINE(252)
			return null();
		}
		HX_STACK_LINE(254)
		bool tmp1 = this->should_clear;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		if ((tmp1)){
			HX_STACK_LINE(255)
			::phoenix::Color tmp2 = this->clear_color;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(255)
			this->clear(tmp2);
		}
		HX_STACK_LINE(258)
		int tmp2 = this->batchers->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(258)
		::phoenix::RendererStats tmp3 = this->stats;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		tmp3->batchers = tmp2;
		HX_STACK_LINE(259)
		::phoenix::RendererStats tmp4 = this->stats;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(259)
		tmp4->reset();
		HX_STACK_LINE(262)
		::phoenix::RenderPath tmp5 = this->render_path;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(262)
		::phoenix::RendererStats tmp6 = this->stats;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(262)
		tmp5->render(this->batchers,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,process,(void))

Void Renderer_obj::onresize( Dynamic e){
{
		HX_STACK_FRAME("phoenix.Renderer","onresize",0xefccb01f,"phoenix.Renderer.onresize","phoenix/Renderer.hx",271,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,onresize,(void))

::phoenix::RenderTexture Renderer_obj::get_target( ){
	HX_STACK_FRAME("phoenix.Renderer","get_target",0xd262c1e6,"phoenix.Renderer.get_target","phoenix/Renderer.hx",276,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(278)
	::phoenix::RenderTexture tmp = this->target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(278)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,get_target,return )

::phoenix::RenderTexture Renderer_obj::set_target( ::phoenix::RenderTexture _target){
	HX_STACK_FRAME("phoenix.Renderer","set_target",0xd5e0605a,"phoenix.Renderer.set_target","phoenix/Renderer.hx",282,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_target,"_target")
	HX_STACK_LINE(284)
	bool tmp = (_target != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(284)
	if ((tmp)){
		HX_STACK_LINE(286)
		{
			HX_STACK_LINE(286)
			::phoenix::Vector tmp1 = this->target_size;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(286)
			::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(286)
			Float _x = _target->width;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(286)
			_this->x = _x;
			HX_STACK_LINE(286)
			bool tmp2 = _this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(286)
			if ((tmp2)){
				HX_STACK_LINE(286)
				_this->x;
			}
			else{
				HX_STACK_LINE(286)
				bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(286)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(286)
				if ((tmp3)){
					HX_STACK_LINE(286)
					bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(286)
					bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(286)
					tmp4 = !(tmp6);
				}
				else{
					HX_STACK_LINE(286)
					tmp4 = false;
				}
				HX_STACK_LINE(286)
				if ((tmp4)){
					HX_STACK_LINE(286)
					Float tmp5 = _x;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(286)
					_this->listen_x(tmp5);
				}
				HX_STACK_LINE(286)
				_this->x;
			}
		}
		HX_STACK_LINE(287)
		{
			HX_STACK_LINE(287)
			::phoenix::Vector tmp1 = this->target_size;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(287)
			::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(287)
			Float _y = _target->height;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(287)
			_this->y = _y;
			HX_STACK_LINE(287)
			bool tmp2 = _this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(287)
			if ((tmp2)){
				HX_STACK_LINE(287)
				_this->y;
			}
			else{
				HX_STACK_LINE(287)
				bool tmp3 = (_this->listen_y != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(287)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(287)
				if ((tmp3)){
					HX_STACK_LINE(287)
					bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(287)
					bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(287)
					tmp4 = !(tmp6);
				}
				else{
					HX_STACK_LINE(287)
					tmp4 = false;
				}
				HX_STACK_LINE(287)
				if ((tmp4)){
					HX_STACK_LINE(287)
					Float tmp5 = _y;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(287)
					_this->listen_y(tmp5);
				}
				HX_STACK_LINE(287)
				_this->y;
			}
		}
		HX_STACK_LINE(289)
		::phoenix::RenderState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(289)
		::opengl::GLObject tmp2 = _target->fbo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(289)
		tmp1->bindFramebuffer(tmp2);
	}
	else{
		HX_STACK_LINE(293)
		{
			HX_STACK_LINE(293)
			::phoenix::Vector tmp1 = this->target_size;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(293)
			::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(293)
			::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(293)
			int tmp3 = tmp2->screen->get_w();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(293)
			Float _x = tmp3;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(293)
			_this->x = _x;
			HX_STACK_LINE(293)
			bool tmp4 = _this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(293)
			if ((tmp4)){
				HX_STACK_LINE(293)
				_this->x;
			}
			else{
				HX_STACK_LINE(293)
				bool tmp5 = (_this->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(293)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(293)
				if ((tmp5)){
					HX_STACK_LINE(293)
					bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(293)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(293)
					tmp6 = !(tmp8);
				}
				else{
					HX_STACK_LINE(293)
					tmp6 = false;
				}
				HX_STACK_LINE(293)
				if ((tmp6)){
					HX_STACK_LINE(293)
					Float tmp7 = _x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(293)
					_this->listen_x(tmp7);
				}
				HX_STACK_LINE(293)
				_this->x;
			}
		}
		HX_STACK_LINE(294)
		{
			HX_STACK_LINE(294)
			::phoenix::Vector tmp1 = this->target_size;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(294)
			::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(294)
			::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(294)
			int tmp3 = tmp2->screen->get_h();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(294)
			Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(294)
			_this->y = _y;
			HX_STACK_LINE(294)
			bool tmp4 = _this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(294)
			if ((tmp4)){
				HX_STACK_LINE(294)
				_this->y;
			}
			else{
				HX_STACK_LINE(294)
				bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(294)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(294)
				if ((tmp5)){
					HX_STACK_LINE(294)
					bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(294)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(294)
					tmp6 = !(tmp8);
				}
				else{
					HX_STACK_LINE(294)
					tmp6 = false;
				}
				HX_STACK_LINE(294)
				if ((tmp6)){
					HX_STACK_LINE(294)
					Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(294)
					_this->listen_y(tmp7);
				}
				HX_STACK_LINE(294)
				_this->y;
			}
		}
		HX_STACK_LINE(296)
		::phoenix::RenderState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(296)
		tmp1->bindFramebuffer(null());
	}
	HX_STACK_LINE(300)
	::phoenix::RenderTexture tmp1 = this->target = _target;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(300)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,set_target,return )

Void Renderer_obj::create_default_shaders( ){
{
		HX_STACK_FRAME("phoenix.Renderer","create_default_shaders",0xf69f9f39,"phoenix.Renderer.create_default_shaders","phoenix/Renderer.hx",304,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(308)
		::String vert = null();		HX_STACK_VAR(vert,"vert");
		HX_STACK_LINE(309)
		::String frag = null();		HX_STACK_VAR(frag,"frag");
		HX_STACK_LINE(310)
		::String frag_textured = null();		HX_STACK_VAR(frag_textured,"frag_textured");
		HX_STACK_LINE(311)
		::String frag_bitmapfont = null();		HX_STACK_VAR(frag_bitmapfont,"frag_bitmapfont");
		HX_STACK_LINE(314)
		::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(314)
		Dynamic tmp1 = tmp->app->config;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(314)
		Dynamic tmp2 = tmp1->__Field(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(314)
		Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("profile","\x29","\x49","\x49","\xf3"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(314)
		bool tmp4 = (tmp3 == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(314)
		if ((tmp4)){
			HX_STACK_LINE(315)
			Array< int > vaos = Array_obj< int >::__new().Add((int)0);		HX_STACK_VAR(vaos,"vaos");
			HX_STACK_LINE(316)
			glGenVertexArrays((int)1, (GLuint*)&(vaos[0]));
			HX_STACK_LINE(317)
			int tmp5 = vaos->__get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(317)
			glBindVertexArray(tmp5);
			HX_STACK_LINE(319)
			::String tmp6 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.vert.gl3.glsl","\xee","\xba","\x74","\x5d"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(319)
			vert = tmp6;
			HX_STACK_LINE(320)
			::String tmp7 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.frag.gl3.glsl","\x4d","\x3e","\x98","\x05"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(320)
			frag = tmp7;
			HX_STACK_LINE(321)
			::String tmp8 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.frag.textured.gl3.glsl","\xb4","\x91","\x67","\xe5"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(321)
			frag_textured = tmp8;
			HX_STACK_LINE(322)
			::String tmp9 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.frag.bitmapfont.gl3.glsl","\x3f","\xe3","\x39","\x2c"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(322)
			frag_bitmapfont = tmp9;
		}
		HX_STACK_LINE(326)
		bool tmp5 = (vert == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(326)
		if ((tmp5)){
			HX_STACK_LINE(327)
			::String tmp6 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.vert.glsl","\xee","\x68","\x0a","\xe0"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(327)
			vert = tmp6;
			HX_STACK_LINE(328)
			::String tmp7 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.frag.glsl","\xcd","\x10","\xf3","\xa2"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(328)
			frag = tmp7;
			HX_STACK_LINE(329)
			::String tmp8 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.frag.textured.glsl","\xb4","\xe4","\x4c","\xd4"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(329)
			frag_textured = tmp8;
			HX_STACK_LINE(330)
			::String tmp9 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.frag.bitmapfont.glsl","\xbf","\xd4","\xfe","\x6d"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(330)
			frag_bitmapfont = tmp9;
		}
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",345,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("luxe.shader","\xdd","\x5c","\xea","\x47"),false);
					__result->Add(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44") , HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"),false);
					__result->Add(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d") , HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(345)
		Dynamic tmp6 = _Function_1_1::Block();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(345)
		::phoenix::Shader tmp7 = ::phoenix::Shader_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(345)
		::phoenix::Shader _plain = tmp7;		HX_STACK_VAR(_plain,"_plain");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",346,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("luxe.shader_textured","\x0b","\x8e","\x98","\xdb"),false);
					__result->Add(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44") , HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"),false);
					__result->Add(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d") , HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(346)
		Dynamic tmp8 = _Function_1_2::Block();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(346)
		::phoenix::Shader tmp9 = ::phoenix::Shader_obj::__new(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(346)
		::phoenix::Shader _textured = tmp9;		HX_STACK_VAR(_textured,"_textured");
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",347,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("luxe.shader_bitmapfont","\xa0","\x24","\xcb","\xf6"),false);
					__result->Add(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44") , HX_HCSTRING("bitmapfont","\x3e","\x91","\x44","\x4a"),false);
					__result->Add(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d") , HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(347)
		Dynamic tmp10 = _Function_1_3::Block();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(347)
		::phoenix::Shader tmp11 = ::phoenix::Shader_obj::__new(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(347)
		::phoenix::Shader _font = tmp11;		HX_STACK_VAR(_font,"_font");
		HX_STACK_LINE(350)
		bool _ok = true;		HX_STACK_VAR(_ok,"_ok");
		HX_STACK_LINE(352)
		bool tmp12 = _ok;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(352)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(352)
		if ((tmp12)){
			HX_STACK_LINE(352)
			::String tmp14 = vert;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(352)
			::String tmp15 = frag;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(352)
			::String tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(352)
			::String tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(352)
			tmp13 = _plain->from_string(tmp16,tmp17);
		}
		else{
			HX_STACK_LINE(352)
			tmp13 = false;
		}
		HX_STACK_LINE(352)
		_ok = tmp13;
		HX_STACK_LINE(353)
		bool tmp14 = _ok;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(353)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(353)
		if ((tmp14)){
			HX_STACK_LINE(353)
			::String tmp16 = vert;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(353)
			::String tmp17 = frag_textured;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(353)
			::String tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(353)
			::String tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(353)
			tmp15 = _textured->from_string(tmp18,tmp19);
		}
		else{
			HX_STACK_LINE(353)
			tmp15 = false;
		}
		HX_STACK_LINE(353)
		_ok = tmp15;
		HX_STACK_LINE(354)
		bool tmp16 = _ok;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(354)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(354)
		if ((tmp16)){
			HX_STACK_LINE(354)
			::String tmp18 = vert;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(354)
			::String tmp19 = frag_bitmapfont;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(354)
			::String tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(354)
			::String tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(354)
			tmp17 = _font->from_string(tmp20,tmp21);
		}
		else{
			HX_STACK_LINE(354)
			tmp17 = false;
		}
		HX_STACK_LINE(354)
		_ok = tmp17;
		HX_STACK_LINE(356)
		{
			HX_STACK_LINE(356)
			bool tmp18 = _ok;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(356)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(356)
			if ((tmp19)){
				HX_STACK_LINE(214)
				::String tmp20 = HX_HCSTRING(" ( Default shaders failed to compile or link. See log for errors","\x3c","\x9a","\x24","\x4c");		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(214)
				::String tmp21 = (tmp20 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(356)
				::String tmp22 = (HX_HCSTRING("_ok","\x3b","\x77","\x48","\x00") + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(356)
				::luxe::DebugError tmp23 = ::luxe::DebugError_obj::assertion(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(356)
				HX_STACK_DO_THROW(tmp23);
			}
		}
		HX_STACK_LINE(361)
		::phoenix::Shader tmp18 = _plain;		HX_STACK_VAR(tmp18,"tmp18");
		struct _Function_1_4{
			inline static Dynamic Block( ::String &frag,::String &vert){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",361,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("vert","\xb1","\x34","\x4c","\x4e") , vert,false);
					__result->Add(HX_HCSTRING("frag","\x32","\x99","\xc2","\x43") , frag,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(361)
		Dynamic tmp19 = _Function_1_4::Block(frag,vert);		HX_STACK_VAR(tmp19,"tmp19");
		struct _Function_1_5{
			inline static Dynamic Block( Dynamic &tmp19,::phoenix::Shader &tmp18){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",361,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d") , tmp18,false);
					__result->Add(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32") , tmp19,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(361)
		Dynamic tmp20 = _Function_1_5::Block(tmp19,tmp18);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(362)
		::phoenix::Shader tmp21 = _textured;		HX_STACK_VAR(tmp21,"tmp21");
		struct _Function_1_6{
			inline static Dynamic Block( ::String &frag_textured,::String &vert){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",362,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("vert","\xb1","\x34","\x4c","\x4e") , vert,false);
					__result->Add(HX_HCSTRING("frag","\x32","\x99","\xc2","\x43") , frag_textured,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(362)
		Dynamic tmp22 = _Function_1_6::Block(frag_textured,vert);		HX_STACK_VAR(tmp22,"tmp22");
		struct _Function_1_7{
			inline static Dynamic Block( Dynamic &tmp22,::phoenix::Shader &tmp21){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",362,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d") , tmp21,false);
					__result->Add(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32") , tmp22,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(362)
		Dynamic tmp23 = _Function_1_7::Block(tmp22,tmp21);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(363)
		::phoenix::Shader tmp24 = _font;		HX_STACK_VAR(tmp24,"tmp24");
		struct _Function_1_8{
			inline static Dynamic Block( ::String &vert,::String &frag_bitmapfont){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",363,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("vert","\xb1","\x34","\x4c","\x4e") , vert,false);
					__result->Add(HX_HCSTRING("frag","\x32","\x99","\xc2","\x43") , frag_bitmapfont,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(363)
		Dynamic tmp25 = _Function_1_8::Block(vert,frag_bitmapfont);		HX_STACK_VAR(tmp25,"tmp25");
		struct _Function_1_9{
			inline static Dynamic Block( ::phoenix::Shader &tmp24,Dynamic &tmp25){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",363,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d") , tmp24,false);
					__result->Add(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32") , tmp25,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(363)
		Dynamic tmp26 = _Function_1_9::Block(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		struct _Function_1_10{
			inline static Dynamic Block( Dynamic &tmp20,Dynamic &tmp23,Dynamic &tmp26){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",360,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("plain","\x0a","\xfa","\x8d","\xc4") , tmp20,false);
					__result->Add(HX_HCSTRING("textured","\x29","\xf7","\xce","\x65") , tmp23,false);
					__result->Add(HX_HCSTRING("bitmapfont","\x3e","\x91","\x44","\x4a") , tmp26,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(360)
		Dynamic tmp27 = _Function_1_10::Block(tmp20,tmp23,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(360)
		this->shaders = tmp27;
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,create_default_shaders,(void))

Void Renderer_obj::create_default_font( ){
{
		HX_STACK_FRAME("phoenix.Renderer","create_default_font",0xfe822b64,"phoenix.Renderer.create_default_font","phoenix/Renderer.hx",370,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(372)
		{
			HX_STACK_LINE(372)
			::snow::systems::assets::AssetImage tmp = this->font_asset;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(372)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(372)
			if ((tmp1)){
				HX_STACK_LINE(230)
				::String tmp2 = HX_HCSTRING(" ( Renderer / failed to create the default font","\xc9","\x9d","\x8e","\x27");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(230)
				::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(372)
				::String tmp4 = (HX_HCSTRING("font_asset was null","\xbe","\x7c","\x51","\xcf") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(372)
				::luxe::DebugError tmp5 = ::luxe::DebugError_obj::null_assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(372)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(379)
		::snow::systems::assets::AssetImage tmp = this->font_asset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(379)
		int tmp1 = tmp->image->width_actual;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(380)
		::snow::systems::assets::AssetImage tmp2 = this->font_asset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(380)
		int tmp3 = tmp2->image->height_actual;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(381)
		::snow::systems::assets::AssetImage tmp4 = this->font_asset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(381)
		::snow::api::buffers::ArrayBufferView tmp5 = tmp4->image->pixels;		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_1_1{
			inline static Dynamic Block( ::snow::api::buffers::ArrayBufferView &tmp5,int &tmp3,int &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",377,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("luxe.font.png","\x42","\x9a","\x18","\x5d"),false);
					__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , tmp1,false);
					__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , tmp3,false);
					__result->Add(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c") , tmp5,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(377)
		Dynamic tmp6 = _Function_1_1::Block(tmp5,tmp3,tmp1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(377)
		::phoenix::Texture tmp7 = ::phoenix::Texture_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(377)
		::phoenix::Texture _font_texture = tmp7;		HX_STACK_VAR(_font_texture,"_font_texture");
		HX_STACK_LINE(384)
		{
			HX_STACK_LINE(384)
			bool tmp8 = (_font_texture == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(384)
			if ((tmp8)){
				HX_STACK_LINE(230)
				::String tmp9 = HX_HCSTRING(" ( Renderer / failed to create the default font... font_texture was null.","\x56","\xeb","\x94","\x5f");		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(230)
				::String tmp10 = (tmp9 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(384)
				::String tmp11 = (HX_HCSTRING("_font_texture was null","\xb4","\x4d","\x06","\x3c") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(384)
				::luxe::DebugError tmp12 = ::luxe::DebugError_obj::null_assertion(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(384)
				HX_STACK_DO_THROW(tmp12);
			}
		}
		HX_STACK_LINE(386)
		::String tmp8 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.fnt","\xff","\x63","\x9b","\x05"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(386)
		::String _font_data = tmp8;		HX_STACK_VAR(_font_data,"_font_data");
		struct _Function_1_2{
			inline static Dynamic Block( ::String &_font_data,::phoenix::Texture &_font_texture){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",388,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("luxe.font","\x87","\x9d","\x30","\xc2"),false);
					__result->Add(HX_HCSTRING("font_data","\xda","\xa5","\x22","\x0e") , _font_data,false);
					__result->Add(HX_HCSTRING("pages","\x44","\x2b","\x4d","\xbd") , Array_obj< ::Dynamic >::__new().Add(_font_texture),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(388)
		Dynamic tmp9 = _Function_1_2::Block(_font_data,_font_texture);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(388)
		::phoenix::BitmapFont tmp10 = ::phoenix::BitmapFont_obj::__new(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(388)
		this->font = tmp10;
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,create_default_font,(void))


Renderer_obj::Renderer_obj()
{
}

void Renderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Renderer);
	HX_MARK_MEMBER_NAME(batchers,"batchers");
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(default_fbo,"default_fbo");
	HX_MARK_MEMBER_NAME(default_rbo,"default_rbo");
	HX_MARK_MEMBER_NAME(shaders,"shaders");
	HX_MARK_MEMBER_NAME(batcher,"batcher");
	HX_MARK_MEMBER_NAME(camera,"camera");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(font_asset,"font_asset");
	HX_MARK_MEMBER_NAME(render_path,"render_path");
	HX_MARK_MEMBER_NAME(default_render_path,"default_render_path");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(target_size,"target_size");
	HX_MARK_MEMBER_NAME(should_clear,"should_clear");
	HX_MARK_MEMBER_NAME(stop,"stop");
	HX_MARK_MEMBER_NAME(stop_count,"stop_count");
	HX_MARK_MEMBER_NAME(clear_color,"clear_color");
	HX_MARK_MEMBER_NAME(stats,"stats");
	HX_MARK_END_CLASS();
}

void Renderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(batchers,"batchers");
	HX_VISIT_MEMBER_NAME(core,"core");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(default_fbo,"default_fbo");
	HX_VISIT_MEMBER_NAME(default_rbo,"default_rbo");
	HX_VISIT_MEMBER_NAME(shaders,"shaders");
	HX_VISIT_MEMBER_NAME(batcher,"batcher");
	HX_VISIT_MEMBER_NAME(camera,"camera");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(font_asset,"font_asset");
	HX_VISIT_MEMBER_NAME(render_path,"render_path");
	HX_VISIT_MEMBER_NAME(default_render_path,"default_render_path");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(target_size,"target_size");
	HX_VISIT_MEMBER_NAME(should_clear,"should_clear");
	HX_VISIT_MEMBER_NAME(stop,"stop");
	HX_VISIT_MEMBER_NAME(stop_count,"stop_count");
	HX_VISIT_MEMBER_NAME(clear_color,"clear_color");
	HX_VISIT_MEMBER_NAME(stats,"stats");
}

Dynamic Renderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"stats") ) { return stats; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		if (HX_FIELD_EQ(inName,"target") ) { return inCallProp == hx::paccAlways ? get_target() : target; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { return shaders; }
		if (HX_FIELD_EQ(inName,"batcher") ) { return batcher; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"batchers") ) { return batchers; }
		if (HX_FIELD_EQ(inName,"onresize") ) { return onresize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"add_batch") ) { return add_batch_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"font_asset") ) { return font_asset; }
		if (HX_FIELD_EQ(inName,"stop_count") ) { return stop_count; }
		if (HX_FIELD_EQ(inName,"blend_mode") ) { return blend_mode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_target") ) { return get_target_dyn(); }
		if (HX_FIELD_EQ(inName,"set_target") ) { return set_target_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"default_fbo") ) { return default_fbo; }
		if (HX_FIELD_EQ(inName,"default_rbo") ) { return default_rbo; }
		if (HX_FIELD_EQ(inName,"render_path") ) { return render_path; }
		if (HX_FIELD_EQ(inName,"target_size") ) { return target_size; }
		if (HX_FIELD_EQ(inName,"clear_color") ) { return clear_color; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"should_clear") ) { return should_clear; }
		if (HX_FIELD_EQ(inName,"remove_batch") ) { return remove_batch_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sort_batchers") ) { return sort_batchers_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"create_batcher") ) { return create_batcher_dyn(); }
		if (HX_FIELD_EQ(inName,"blend_equation") ) { return blend_equation_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"internal_resized") ) { return internal_resized_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"default_render_path") ) { return default_render_path; }
		if (HX_FIELD_EQ(inName,"create_default_font") ) { return create_default_font_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"create_default_shaders") ) { return create_default_shaders_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Renderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Engine >(); return inValue; }
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::phoenix::BitmapFont >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stop") ) { stop=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::phoenix::RenderState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stats") ) { stats=inValue.Cast< ::phoenix::RendererStats >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::phoenix::Camera >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == hx::paccAlways) return set_target(inValue);target=inValue.Cast< ::phoenix::RenderTexture >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"batcher") ) { batcher=inValue.Cast< ::phoenix::Batcher >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"batchers") ) { batchers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"font_asset") ) { font_asset=inValue.Cast< ::snow::systems::assets::AssetImage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stop_count") ) { stop_count=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"default_fbo") ) { default_fbo=inValue.Cast< ::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"default_rbo") ) { default_rbo=inValue.Cast< ::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"render_path") ) { render_path=inValue.Cast< ::phoenix::RenderPath >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target_size") ) { target_size=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clear_color") ) { clear_color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"should_clear") ) { should_clear=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"default_render_path") ) { default_render_path=inValue.Cast< ::phoenix::RenderPath >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Renderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"));
	outFields->push(HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("default_fbo","\xf5","\xcd","\xfe","\x25"));
	outFields->push(HX_HCSTRING("default_rbo","\x01","\xe9","\x07","\x26"));
	outFields->push(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"));
	outFields->push(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"));
	outFields->push(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("font_asset","\x40","\xd4","\xdf","\xa1"));
	outFields->push(HX_HCSTRING("render_path","\x6e","\xbe","\xe6","\x35"));
	outFields->push(HX_HCSTRING("default_render_path","\xb0","\xe2","\x36","\x50"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("target_size","\xaf","\x23","\x8f","\xfc"));
	outFields->push(HX_HCSTRING("should_clear","\x41","\x09","\xe6","\x4f"));
	outFields->push(HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"));
	outFields->push(HX_HCSTRING("stop_count","\x92","\x69","\x65","\x3b"));
	outFields->push(HX_HCSTRING("clear_color","\xf1","\x51","\x9c","\xa5"));
	outFields->push(HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Renderer_obj,batchers),HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e")},
	{hx::fsObject /*::luxe::Engine*/ ,(int)offsetof(Renderer_obj,core),HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{hx::fsObject /*::phoenix::RenderState*/ ,(int)offsetof(Renderer_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(Renderer_obj,default_fbo),HX_HCSTRING("default_fbo","\xf5","\xcd","\xfe","\x25")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(Renderer_obj,default_rbo),HX_HCSTRING("default_rbo","\x01","\xe9","\x07","\x26")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Renderer_obj,shaders),HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f")},
	{hx::fsObject /*::phoenix::Batcher*/ ,(int)offsetof(Renderer_obj,batcher),HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")},
	{hx::fsObject /*::phoenix::Camera*/ ,(int)offsetof(Renderer_obj,camera),HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7")},
	{hx::fsObject /*::phoenix::BitmapFont*/ ,(int)offsetof(Renderer_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsObject /*::snow::systems::assets::AssetImage*/ ,(int)offsetof(Renderer_obj,font_asset),HX_HCSTRING("font_asset","\x40","\xd4","\xdf","\xa1")},
	{hx::fsObject /*::phoenix::RenderPath*/ ,(int)offsetof(Renderer_obj,render_path),HX_HCSTRING("render_path","\x6e","\xbe","\xe6","\x35")},
	{hx::fsObject /*::phoenix::RenderPath*/ ,(int)offsetof(Renderer_obj,default_render_path),HX_HCSTRING("default_render_path","\xb0","\xe2","\x36","\x50")},
	{hx::fsObject /*::phoenix::RenderTexture*/ ,(int)offsetof(Renderer_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Renderer_obj,target_size),HX_HCSTRING("target_size","\xaf","\x23","\x8f","\xfc")},
	{hx::fsBool,(int)offsetof(Renderer_obj,should_clear),HX_HCSTRING("should_clear","\x41","\x09","\xe6","\x4f")},
	{hx::fsBool,(int)offsetof(Renderer_obj,stop),HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c")},
	{hx::fsInt,(int)offsetof(Renderer_obj,stop_count),HX_HCSTRING("stop_count","\x92","\x69","\x65","\x3b")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Renderer_obj,clear_color),HX_HCSTRING("clear_color","\xf1","\x51","\x9c","\xa5")},
	{hx::fsObject /*::phoenix::RendererStats*/ ,(int)offsetof(Renderer_obj,stats),HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"),
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("default_fbo","\xf5","\xcd","\xfe","\x25"),
	HX_HCSTRING("default_rbo","\x01","\xe9","\x07","\x26"),
	HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"),
	HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"),
	HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("font_asset","\x40","\xd4","\xdf","\xa1"),
	HX_HCSTRING("render_path","\x6e","\xbe","\xe6","\x35"),
	HX_HCSTRING("default_render_path","\xb0","\xe2","\x36","\x50"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("target_size","\xaf","\x23","\x8f","\xfc"),
	HX_HCSTRING("should_clear","\x41","\x09","\xe6","\x4f"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("stop_count","\x92","\x69","\x65","\x3b"),
	HX_HCSTRING("clear_color","\xf1","\x51","\x9c","\xa5"),
	HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("sort_batchers","\x2d","\x24","\xe7","\xf1"),
	HX_HCSTRING("add_batch","\xdc","\xef","\x31","\x2d"),
	HX_HCSTRING("remove_batch","\x3f","\x56","\x3b","\xe4"),
	HX_HCSTRING("create_batcher","\x24","\x3f","\x51","\x72"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("blend_mode","\x51","\x41","\x9c","\x00"),
	HX_HCSTRING("blend_equation","\x7a","\xb8","\xd0","\x82"),
	HX_HCSTRING("internal_resized","\xae","\x21","\x67","\x90"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("onresize","\x53","\xdc","\x93","\xb3"),
	HX_HCSTRING("get_target","\x1a","\x63","\x74","\x77"),
	HX_HCSTRING("set_target","\x8e","\x01","\xf2","\x7a"),
	HX_HCSTRING("create_default_shaders","\x6d","\x3e","\x38","\xab"),
	HX_HCSTRING("create_default_font","\xb0","\xc3","\xd4","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
};

#endif

hx::Class Renderer_obj::__mClass;

void Renderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Renderer","\x22","\x36","\xb5","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Renderer_obj >;
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

} // end namespace phoenix
