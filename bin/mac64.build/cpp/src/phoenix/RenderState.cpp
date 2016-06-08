#include <hxcpp.h>

#include "linc_opengl.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_opengl_GLObject
#include <opengl/GLObject.h>
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
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
namespace phoenix{

Void RenderState_obj::__construct(::phoenix::Renderer _renderer)
{
HX_STACK_FRAME("phoenix.RenderState","new",0x0858464e,"phoenix.RenderState.new","phoenix/RenderState.hx",7,0x46f51ca3)
HX_STACK_THIS(this)
HX_STACK_ARG(_renderer,"_renderer")
{
	HX_STACK_LINE(170)
	this->_last_depth_mask = true;
	HX_STACK_LINE(162)
	this->_last_line_width = ((Float)1);
	HX_STACK_LINE(129)
	this->_active_texture = (int)-1;
	HX_STACK_LINE(121)
	this->_used_program = null();
	HX_STACK_LINE(108)
	this->_current_rbo = null();
	HX_STACK_LINE(95)
	this->_current_fbo = null();
	HX_STACK_LINE(56)
	this->depth_func = (int)-1;
	HX_STACK_LINE(14)
	this->_view_target_h = ((Float)0.0);
	HX_STACK_LINE(11)
	this->depth_mask = true;
	HX_STACK_LINE(10)
	this->depth_test = false;
	HX_STACK_LINE(9)
	this->cull_face = false;
	HX_STACK_LINE(18)
	this->renderer = _renderer;
	HX_STACK_LINE(19)
	::phoenix::Rectangle tmp = ::phoenix::Rectangle_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	this->_viewport = tmp;
}
;
	return null();
}

//RenderState_obj::~RenderState_obj() { }

Dynamic RenderState_obj::__CreateEmpty() { return  new RenderState_obj; }
hx::ObjectPtr< RenderState_obj > RenderState_obj::__new(::phoenix::Renderer _renderer)
{  hx::ObjectPtr< RenderState_obj > _result_ = new RenderState_obj();
	_result_->__construct(_renderer);
	return _result_;}

Dynamic RenderState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderState_obj > _result_ = new RenderState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void RenderState_obj::enable( int what){
{
		HX_STACK_FRAME("phoenix.RenderState","enable",0xbe4b2155,"phoenix.RenderState.enable","phoenix/RenderState.hx",22,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(what,"what")
		HX_STACK_LINE(23)
		int tmp = what;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		switch( (int)(tmp)){
			case (int)2884: {
				HX_STACK_LINE(25)
				bool tmp1 = this->cull_face;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(25)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(25)
				if ((tmp2)){
					HX_STACK_LINE(26)
					this->cull_face = true;
					HX_STACK_LINE(27)
					glEnable((int)2884);
				}
			}
			;break;
			case (int)2929: {
				HX_STACK_LINE(30)
				::luxe::Engine tmp1 = ::Luxe_obj::core;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(30)
				Dynamic tmp2 = tmp1->app->config;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(30)
				Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(30)
				bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(30)
				if ((tmp4)){
					HX_STACK_LINE(31)
					bool tmp5 = this->depth_test;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(31)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(31)
					if ((tmp6)){
						HX_STACK_LINE(32)
						this->depth_test = true;
						HX_STACK_LINE(33)
						glEnable((int)2929);
					}
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,enable,(void))

Void RenderState_obj::disable( int what){
{
		HX_STACK_FRAME("phoenix.RenderState","disable",0xf6996ed6,"phoenix.RenderState.disable","phoenix/RenderState.hx",39,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(what,"what")
		HX_STACK_LINE(40)
		int tmp = what;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		switch( (int)(tmp)){
			case (int)2884: {
				HX_STACK_LINE(42)
				bool tmp1 = this->cull_face;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(42)
				if ((tmp1)){
					HX_STACK_LINE(43)
					this->cull_face = false;
					HX_STACK_LINE(44)
					glDisable((int)2884);
				}
			}
			;break;
			case (int)2929: {
				HX_STACK_LINE(47)
				::luxe::Engine tmp1 = ::Luxe_obj::core;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(47)
				Dynamic tmp2 = tmp1->app->config;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(47)
				Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(47)
				bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(47)
				if ((tmp4)){
					HX_STACK_LINE(48)
					bool tmp5 = this->depth_test;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(48)
					if ((tmp5)){
						HX_STACK_LINE(49)
						this->depth_test = false;
						HX_STACK_LINE(50)
						glDisable((int)2929);
					}
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,disable,(void))

Void RenderState_obj::depth_function( int what){
{
		HX_STACK_FRAME("phoenix.RenderState","depth_function",0x7ee58de6,"phoenix.RenderState.depth_function","phoenix/RenderState.hx",57,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(what,"what")
		HX_STACK_LINE(58)
		int tmp = this->depth_func;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		int tmp1 = what;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		if ((tmp2)){
			HX_STACK_LINE(59)
			int tmp3 = what;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(59)
			glDepthFunc(tmp3);
			HX_STACK_LINE(60)
			this->depth_func = what;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,depth_function,(void))

Void RenderState_obj::viewport( Float x,Float y,Float w,Float h){
{
		HX_STACK_FRAME("phoenix.RenderState","viewport",0xf04897b8,"phoenix.RenderState.viewport","phoenix/RenderState.hx",64,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(66)
		::phoenix::Renderer tmp = this->renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		Float tmp1 = tmp->target_size->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		Float _target_h = tmp1;		HX_STACK_VAR(_target_h,"_target_h");
		HX_STACK_LINE(69)
		::phoenix::Rectangle tmp2 = this->_viewport;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(69)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(69)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(69)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(69)
		if ((tmp7)){
			HX_STACK_LINE(70)
			::phoenix::Rectangle tmp9 = this->_viewport;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(70)
			::phoenix::Rectangle tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(70)
			::phoenix::Rectangle tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(70)
			Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(70)
			Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(70)
			tmp8 = (tmp12 != tmp13);
		}
		else{
			HX_STACK_LINE(69)
			tmp8 = true;
		}
		HX_STACK_LINE(69)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(69)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(69)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(69)
		if ((tmp10)){
			HX_STACK_LINE(71)
			::phoenix::Rectangle tmp12 = this->_viewport;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(71)
			::phoenix::Rectangle tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(71)
			::phoenix::Rectangle tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(71)
			Float tmp15 = tmp14->w;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(71)
			Float tmp16 = w;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(71)
			tmp11 = (tmp15 != tmp16);
		}
		else{
			HX_STACK_LINE(69)
			tmp11 = true;
		}
		HX_STACK_LINE(69)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(69)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(69)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(69)
		if ((tmp13)){
			HX_STACK_LINE(72)
			::phoenix::Rectangle tmp15 = this->_viewport;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(72)
			::phoenix::Rectangle tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(72)
			::phoenix::Rectangle tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(72)
			Float tmp18 = tmp17->h;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(72)
			Float tmp19 = h;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(72)
			tmp14 = (tmp18 != tmp19);
		}
		else{
			HX_STACK_LINE(69)
			tmp14 = true;
		}
		HX_STACK_LINE(69)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(69)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(69)
		if ((tmp15)){
			HX_STACK_LINE(73)
			Float tmp17 = this->_view_target_h;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(73)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(73)
			Float tmp19 = _target_h;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(73)
			tmp16 = (tmp18 != tmp19);
		}
		else{
			HX_STACK_LINE(69)
			tmp16 = true;
		}
		HX_STACK_LINE(68)
		if ((tmp16)){
			HX_STACK_LINE(76)
			::phoenix::Rectangle tmp17 = this->_viewport;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(76)
			Float tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(76)
			tmp17->set_x(tmp18);
			HX_STACK_LINE(77)
			::phoenix::Rectangle tmp19 = this->_viewport;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(77)
			Float tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(77)
			tmp19->set_y(tmp20);
			HX_STACK_LINE(78)
			::phoenix::Rectangle tmp21 = this->_viewport;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(78)
			Float tmp22 = w;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(78)
			tmp21->set_w(tmp22);
			HX_STACK_LINE(79)
			::phoenix::Rectangle tmp23 = this->_viewport;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(79)
			Float tmp24 = h;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(79)
			tmp23->set_h(tmp24);
			HX_STACK_LINE(80)
			this->_view_target_h = _target_h;
			HX_STACK_LINE(87)
			Float tmp25 = _target_h;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(87)
			Float tmp26 = (y + h);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(87)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(87)
			Float _y = tmp27;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(89)
			{
				HX_STACK_LINE(89)
				Float tmp28 = x;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(89)
				int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(89)
				int x1 = tmp29;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(89)
				Float tmp30 = _y;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(89)
				int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(89)
				int y1 = tmp31;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(89)
				Float tmp32 = w;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(89)
				int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(89)
				int width = tmp33;		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(89)
				Float tmp34 = h;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(89)
				int tmp35 = ::Std_obj::_int(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(89)
				int height = tmp35;		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(89)
				int tmp36 = x1;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(89)
				int tmp37 = y1;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(89)
				int tmp38 = width;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(89)
				int tmp39 = height;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(89)
				glViewport(tmp36,tmp37,tmp38,tmp39);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(RenderState_obj,viewport,(void))

Void RenderState_obj::bindFramebuffer( ::opengl::GLObject buffer){
{
		HX_STACK_FRAME("phoenix.RenderState","bindFramebuffer",0xb7b6691e,"phoenix.RenderState.bindFramebuffer","phoenix/RenderState.hx",96,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(98)
		::opengl::GLObject tmp = this->_current_fbo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		::opengl::GLObject tmp1 = buffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		if ((tmp2)){
			HX_STACK_LINE(100)
			{
				HX_STACK_LINE(100)
				bool tmp3 = (buffer == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(100)
				if ((tmp3)){
					HX_STACK_LINE(100)
					::phoenix::Renderer tmp4 = this->renderer;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(100)
					buffer = tmp4->default_fbo;
				}
				HX_STACK_LINE(100)
				buffer;
			}
			HX_STACK_LINE(102)
			bool tmp3 = (buffer == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(102)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(102)
			if ((tmp3)){
				HX_STACK_LINE(102)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(102)
				tmp4 = buffer->id;
			}
			HX_STACK_LINE(102)
			glBindFramebuffer((int)36160,tmp4);
			HX_STACK_LINE(103)
			this->_current_fbo = buffer;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,bindFramebuffer,(void))

Void RenderState_obj::bindRenderbuffer( ::opengl::GLObject buffer){
{
		HX_STACK_FRAME("phoenix.RenderState","bindRenderbuffer",0x8e71a385,"phoenix.RenderState.bindRenderbuffer","phoenix/RenderState.hx",109,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(111)
		::opengl::GLObject tmp = this->_current_rbo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		::opengl::GLObject tmp1 = buffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(111)
		if ((tmp2)){
			HX_STACK_LINE(113)
			{
				HX_STACK_LINE(113)
				bool tmp3 = (buffer == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(113)
				if ((tmp3)){
					HX_STACK_LINE(113)
					::phoenix::Renderer tmp4 = this->renderer;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(113)
					buffer = tmp4->default_rbo;
				}
				HX_STACK_LINE(113)
				buffer;
			}
			HX_STACK_LINE(115)
			bool tmp3 = (buffer == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(115)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(115)
			if ((tmp3)){
				HX_STACK_LINE(115)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(115)
				tmp4 = buffer->id;
			}
			HX_STACK_LINE(115)
			glBindRenderbuffer((int)36161,tmp4);
			HX_STACK_LINE(116)
			this->_current_rbo = buffer;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,bindRenderbuffer,(void))

Void RenderState_obj::useProgram( ::opengl::GLObject program){
{
		HX_STACK_FRAME("phoenix.RenderState","useProgram",0xf236b0cf,"phoenix.RenderState.useProgram","phoenix/RenderState.hx",122,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(123)
		::opengl::GLObject tmp = this->_used_program;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		::opengl::GLObject tmp1 = program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(123)
		if ((tmp2)){
			HX_STACK_LINE(124)
			this->_used_program = program;
			HX_STACK_LINE(125)
			bool tmp3 = (program == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(125)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(125)
			if ((tmp3)){
				HX_STACK_LINE(125)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(125)
				tmp4 = program->id;
			}
			HX_STACK_LINE(125)
			glUseProgram(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,useProgram,(void))

Void RenderState_obj::activeTexture( int val){
{
		HX_STACK_FRAME("phoenix.RenderState","activeTexture",0x817a7f23,"phoenix.RenderState.activeTexture","phoenix/RenderState.hx",130,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(val,"val")
		HX_STACK_LINE(131)
		int tmp = this->_active_texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		int tmp1 = val;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		if ((tmp2)){
			HX_STACK_LINE(132)
			int tmp3 = val;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			glActiveTexture(tmp3);
			HX_STACK_LINE(133)
			this->_active_texture = val;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,activeTexture,(void))

Void RenderState_obj::bindTexture( int type,::opengl::GLObject tex){
{
		HX_STACK_FRAME("phoenix.RenderState","bindTexture",0xb8c2f08c,"phoenix.RenderState.bindTexture","phoenix/RenderState.hx",137,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(tex,"tex")
		HX_STACK_LINE(138)
		int tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		switch( (int)(tmp)){
			case (int)3553: {
				HX_STACK_LINE(140)
				::opengl::GLObject tmp1 = tex;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(140)
				this->bindTexture2D(tmp1);
			}
			;break;
			case (int)34067: {
				HX_STACK_LINE(142)
				::opengl::GLObject tmp1 = tex;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(142)
				this->bindTextureCube(tmp1);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RenderState_obj,bindTexture,(void))

Void RenderState_obj::bindTexture2D( ::opengl::GLObject tex){
{
		HX_STACK_FRAME("phoenix.RenderState","bindTexture2D",0xa3c9575e,"phoenix.RenderState.bindTexture2D","phoenix/RenderState.hx",147,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tex,"tex")
		HX_STACK_LINE(148)
		::opengl::GLObject tmp = ::phoenix::RenderState_obj::bound_texture_2D;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		::opengl::GLObject tmp1 = tex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(148)
		if ((tmp2)){
			HX_STACK_LINE(149)
			::phoenix::RenderState_obj::bound_texture_2D = tex;
			HX_STACK_LINE(150)
			bool tmp3 = (tex == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(150)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(150)
			if ((tmp3)){
				HX_STACK_LINE(150)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(150)
				tmp4 = tex->id;
			}
			HX_STACK_LINE(150)
			glBindTexture((int)3553,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,bindTexture2D,(void))

Void RenderState_obj::bindTextureCube( ::opengl::GLObject tex){
{
		HX_STACK_FRAME("phoenix.RenderState","bindTextureCube",0x35b68fa1,"phoenix.RenderState.bindTextureCube","phoenix/RenderState.hx",155,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tex,"tex")
		HX_STACK_LINE(156)
		::opengl::GLObject tmp = ::phoenix::RenderState_obj::bound_texture_cube;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		::opengl::GLObject tmp1 = tex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(156)
		if ((tmp2)){
			HX_STACK_LINE(157)
			::phoenix::RenderState_obj::bound_texture_cube = tex;
			HX_STACK_LINE(158)
			bool tmp3 = (tex == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(158)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(158)
			if ((tmp3)){
				HX_STACK_LINE(158)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(158)
				tmp4 = tex->id;
			}
			HX_STACK_LINE(158)
			glBindTexture((int)34067,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,bindTextureCube,(void))

Void RenderState_obj::lineWidth( Float _width){
{
		HX_STACK_FRAME("phoenix.RenderState","lineWidth",0xec9c55e0,"phoenix.RenderState.lineWidth","phoenix/RenderState.hx",163,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_width,"_width")
		HX_STACK_LINE(164)
		Float tmp = this->_last_line_width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(164)
		Float tmp1 = _width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		if ((tmp2)){
			HX_STACK_LINE(165)
			this->_last_line_width = _width;
			HX_STACK_LINE(166)
			Float tmp3 = _width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(166)
			glLineWidth(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,lineWidth,(void))

Void RenderState_obj::depthMask( bool _enable){
{
		HX_STACK_FRAME("phoenix.RenderState","depthMask",0x7a1837fd,"phoenix.RenderState.depthMask","phoenix/RenderState.hx",171,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_enable,"_enable")
		HX_STACK_LINE(172)
		bool tmp = this->_last_depth_mask;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		bool tmp1 = _enable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(172)
		if ((tmp2)){
			HX_STACK_LINE(173)
			this->_last_depth_mask = _enable;
			HX_STACK_LINE(174)
			bool tmp3 = _enable;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(174)
			glDepthMask(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,depthMask,(void))

::opengl::GLObject RenderState_obj::bound_texture_2D;

::opengl::GLObject RenderState_obj::bound_texture_cube;


RenderState_obj::RenderState_obj()
{
}

void RenderState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderState);
	HX_MARK_MEMBER_NAME(cull_face,"cull_face");
	HX_MARK_MEMBER_NAME(depth_test,"depth_test");
	HX_MARK_MEMBER_NAME(depth_mask,"depth_mask");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(_viewport,"_viewport");
	HX_MARK_MEMBER_NAME(_view_target_h,"_view_target_h");
	HX_MARK_MEMBER_NAME(depth_func,"depth_func");
	HX_MARK_MEMBER_NAME(_current_fbo,"_current_fbo");
	HX_MARK_MEMBER_NAME(_current_rbo,"_current_rbo");
	HX_MARK_MEMBER_NAME(_used_program,"_used_program");
	HX_MARK_MEMBER_NAME(_active_texture,"_active_texture");
	HX_MARK_MEMBER_NAME(_last_line_width,"_last_line_width");
	HX_MARK_MEMBER_NAME(_last_depth_mask,"_last_depth_mask");
	HX_MARK_END_CLASS();
}

void RenderState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cull_face,"cull_face");
	HX_VISIT_MEMBER_NAME(depth_test,"depth_test");
	HX_VISIT_MEMBER_NAME(depth_mask,"depth_mask");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(_viewport,"_viewport");
	HX_VISIT_MEMBER_NAME(_view_target_h,"_view_target_h");
	HX_VISIT_MEMBER_NAME(depth_func,"depth_func");
	HX_VISIT_MEMBER_NAME(_current_fbo,"_current_fbo");
	HX_VISIT_MEMBER_NAME(_current_rbo,"_current_rbo");
	HX_VISIT_MEMBER_NAME(_used_program,"_used_program");
	HX_VISIT_MEMBER_NAME(_active_texture,"_active_texture");
	HX_VISIT_MEMBER_NAME(_last_line_width,"_last_line_width");
	HX_VISIT_MEMBER_NAME(_last_depth_mask,"_last_depth_mask");
}

Dynamic RenderState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		if (HX_FIELD_EQ(inName,"viewport") ) { return viewport_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cull_face") ) { return cull_face; }
		if (HX_FIELD_EQ(inName,"_viewport") ) { return _viewport; }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { return lineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"depthMask") ) { return depthMask_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"depth_test") ) { return depth_test; }
		if (HX_FIELD_EQ(inName,"depth_mask") ) { return depth_mask; }
		if (HX_FIELD_EQ(inName,"depth_func") ) { return depth_func; }
		if (HX_FIELD_EQ(inName,"useProgram") ) { return useProgram_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindTexture") ) { return bindTexture_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_current_fbo") ) { return _current_fbo; }
		if (HX_FIELD_EQ(inName,"_current_rbo") ) { return _current_rbo; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_used_program") ) { return _used_program; }
		if (HX_FIELD_EQ(inName,"activeTexture") ) { return activeTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"bindTexture2D") ) { return bindTexture2D_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_view_target_h") ) { return _view_target_h; }
		if (HX_FIELD_EQ(inName,"depth_function") ) { return depth_function_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bindFramebuffer") ) { return bindFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"_active_texture") ) { return _active_texture; }
		if (HX_FIELD_EQ(inName,"bindTextureCube") ) { return bindTextureCube_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bindRenderbuffer") ) { return bindRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"_last_line_width") ) { return _last_line_width; }
		if (HX_FIELD_EQ(inName,"_last_depth_mask") ) { return _last_depth_mask; }
	}
	return super::__Field(inName,inCallProp);
}

bool RenderState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"bound_texture_2D") ) { outValue = bound_texture_2D; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bound_texture_cube") ) { outValue = bound_texture_cube; return true;  }
	}
	return false;
}

Dynamic RenderState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::phoenix::Renderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cull_face") ) { cull_face=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewport") ) { _viewport=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"depth_test") ) { depth_test=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth_mask") ) { depth_mask=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth_func") ) { depth_func=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_current_fbo") ) { _current_fbo=inValue.Cast< ::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_current_rbo") ) { _current_rbo=inValue.Cast< ::opengl::GLObject >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_used_program") ) { _used_program=inValue.Cast< ::opengl::GLObject >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_view_target_h") ) { _view_target_h=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_active_texture") ) { _active_texture=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_last_line_width") ) { _last_line_width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_last_depth_mask") ) { _last_depth_mask=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool RenderState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"bound_texture_2D") ) { bound_texture_2D=ioValue.Cast< ::opengl::GLObject >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bound_texture_cube") ) { bound_texture_cube=ioValue.Cast< ::opengl::GLObject >(); return true; }
	}
	return false;
}

void RenderState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cull_face","\x8a","\xa5","\xc9","\x67"));
	outFields->push(HX_HCSTRING("depth_test","\x4e","\x68","\x49","\xc9"));
	outFields->push(HX_HCSTRING("depth_mask","\xe8","\xe0","\xa5","\xc4"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("_viewport","\xc5","\x43","\x3b","\xe4"));
	outFields->push(HX_HCSTRING("_view_target_h","\x55","\x3d","\x11","\xb1"));
	outFields->push(HX_HCSTRING("depth_func","\x40","\x8b","\x14","\xc0"));
	outFields->push(HX_HCSTRING("_current_fbo","\x6e","\x5b","\xdb","\xf2"));
	outFields->push(HX_HCSTRING("_current_rbo","\x7a","\x76","\xe4","\xf2"));
	outFields->push(HX_HCSTRING("_used_program","\x21","\xce","\x35","\x44"));
	outFields->push(HX_HCSTRING("_active_texture","\xc1","\xe2","\x9f","\x60"));
	outFields->push(HX_HCSTRING("_last_line_width","\x45","\x9d","\xd0","\xe1"));
	outFields->push(HX_HCSTRING("_last_depth_mask","\xf2","\xf9","\x18","\x40"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(RenderState_obj,cull_face),HX_HCSTRING("cull_face","\x8a","\xa5","\xc9","\x67")},
	{hx::fsBool,(int)offsetof(RenderState_obj,depth_test),HX_HCSTRING("depth_test","\x4e","\x68","\x49","\xc9")},
	{hx::fsBool,(int)offsetof(RenderState_obj,depth_mask),HX_HCSTRING("depth_mask","\xe8","\xe0","\xa5","\xc4")},
	{hx::fsObject /*::phoenix::Renderer*/ ,(int)offsetof(RenderState_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(RenderState_obj,_viewport),HX_HCSTRING("_viewport","\xc5","\x43","\x3b","\xe4")},
	{hx::fsFloat,(int)offsetof(RenderState_obj,_view_target_h),HX_HCSTRING("_view_target_h","\x55","\x3d","\x11","\xb1")},
	{hx::fsInt,(int)offsetof(RenderState_obj,depth_func),HX_HCSTRING("depth_func","\x40","\x8b","\x14","\xc0")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(RenderState_obj,_current_fbo),HX_HCSTRING("_current_fbo","\x6e","\x5b","\xdb","\xf2")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(RenderState_obj,_current_rbo),HX_HCSTRING("_current_rbo","\x7a","\x76","\xe4","\xf2")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(RenderState_obj,_used_program),HX_HCSTRING("_used_program","\x21","\xce","\x35","\x44")},
	{hx::fsInt,(int)offsetof(RenderState_obj,_active_texture),HX_HCSTRING("_active_texture","\xc1","\xe2","\x9f","\x60")},
	{hx::fsFloat,(int)offsetof(RenderState_obj,_last_line_width),HX_HCSTRING("_last_line_width","\x45","\x9d","\xd0","\xe1")},
	{hx::fsBool,(int)offsetof(RenderState_obj,_last_depth_mask),HX_HCSTRING("_last_depth_mask","\xf2","\xf9","\x18","\x40")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::opengl::GLObject*/ ,(void *) &RenderState_obj::bound_texture_2D,HX_HCSTRING("bound_texture_2D","\x97","\xdd","\x9d","\xfd")},
	{hx::fsObject /*::opengl::GLObject*/ ,(void *) &RenderState_obj::bound_texture_cube,HX_HCSTRING("bound_texture_cube","\xfa","\xa9","\x8a","\x27")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("cull_face","\x8a","\xa5","\xc9","\x67"),
	HX_HCSTRING("depth_test","\x4e","\x68","\x49","\xc9"),
	HX_HCSTRING("depth_mask","\xe8","\xe0","\xa5","\xc4"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("_viewport","\xc5","\x43","\x3b","\xe4"),
	HX_HCSTRING("_view_target_h","\x55","\x3d","\x11","\xb1"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("disable","\xe8","\x69","\x58","\xb1"),
	HX_HCSTRING("depth_func","\x40","\x8b","\x14","\xc0"),
	HX_HCSTRING("depth_function","\x14","\xf9","\x57","\x33"),
	HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"),
	HX_HCSTRING("_current_fbo","\x6e","\x5b","\xdb","\xf2"),
	HX_HCSTRING("bindFramebuffer","\x30","\xc6","\x61","\xe7"),
	HX_HCSTRING("_current_rbo","\x7a","\x76","\xe4","\xf2"),
	HX_HCSTRING("bindRenderbuffer","\x33","\xb6","\xb7","\x14"),
	HX_HCSTRING("_used_program","\x21","\xce","\x35","\x44"),
	HX_HCSTRING("useProgram","\xfd","\x6c","\xac","\xf6"),
	HX_HCSTRING("_active_texture","\xc1","\xe2","\x9f","\x60"),
	HX_HCSTRING("activeTexture","\xb5","\x13","\xaa","\x56"),
	HX_HCSTRING("bindTexture","\x9e","\xdc","\x51","\x9b"),
	HX_HCSTRING("bindTexture2D","\xf0","\xeb","\xf8","\x78"),
	HX_HCSTRING("bindTextureCube","\xb3","\xec","\x61","\x65"),
	HX_HCSTRING("_last_line_width","\x45","\x9d","\xd0","\xe1"),
	HX_HCSTRING("lineWidth","\x72","\xb9","\x5d","\x11"),
	HX_HCSTRING("_last_depth_mask","\xf2","\xf9","\x18","\x40"),
	HX_HCSTRING("depthMask","\x8f","\x9b","\xd9","\x9e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderState_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RenderState_obj::bound_texture_2D,"bound_texture_2D");
	HX_MARK_MEMBER_NAME(RenderState_obj::bound_texture_cube,"bound_texture_cube");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RenderState_obj::bound_texture_2D,"bound_texture_2D");
	HX_VISIT_MEMBER_NAME(RenderState_obj::bound_texture_cube,"bound_texture_cube");
};

#endif

hx::Class RenderState_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("bound_texture_2D","\x97","\xdd","\x9d","\xfd"),
	HX_HCSTRING("bound_texture_cube","\xfa","\xa9","\x8a","\x27"),
	::String(null()) };

void RenderState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.RenderState","\x5c","\xc7","\xcf","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RenderState_obj::__GetStatic;
	__mClass->mSetStaticField = &RenderState_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RenderState_obj >;
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

void RenderState_obj::__boot()
{
	bound_texture_2D= null();
	bound_texture_cube= null();
}

} // end namespace phoenix
