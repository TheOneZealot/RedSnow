#include <hxcpp.h>

#include "linc_opengl.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_opengl_GLObject
#include <opengl/GLObject.h>
#endif
#ifndef INCLUDED_phoenix_RenderState
#include <phoenix/RenderState.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetImage
#include <snow/systems/assets/AssetImage.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Assets
#include <snow/systems/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_types_ImageData
#include <snow/types/ImageData.h>
#endif
namespace phoenix{

Void Texture_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.Texture","new",0x3a7497ce,"phoenix.Texture.new","phoenix/Texture.hx",21,0xc84e46a3)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(66)
	this->load_premultiply_alpha = false;
	HX_STACK_LINE(52)
	this->height = (int)-1;
	HX_STACK_LINE(50)
	this->width = (int)-1;
	HX_STACK_LINE(48)
	this->height_actual = (int)-1;
	HX_STACK_LINE(46)
	this->width_actual = (int)-1;
	HX_STACK_LINE(43)
	this->compressed = false;
	HX_STACK_LINE(33)
	this->border = (int)0;
	HX_STACK_LINE(31)
	this->slot = (int)0;
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		bool tmp = (_options == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		if ((tmp)){
			HX_STACK_LINE(230)
			::String tmp1 = HX_HCSTRING(" ( Texture create requires non-null options","\x30","\xf2","\x9d","\x7b");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(230)
			::String tmp2 = (tmp1 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			::String tmp3 = (HX_HCSTRING("_options was null","\x3f","\x38","\x24","\xa1") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(70)
			::luxe::DebugError tmp4 = ::luxe::DebugError_obj::null_assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(70)
			HX_STACK_DO_THROW(tmp4);
		}
	}
	HX_STACK_LINE(72)
	{
		HX_STACK_LINE(72)
		bool tmp = (_options->__Field(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		if ((tmp)){
			HX_STACK_LINE(72)
			_options->__FieldRef(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c")) = (int)4;
		}
		HX_STACK_LINE(72)
		_options->__Field(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c"), hx::paccDynamic );
	}
	HX_STACK_LINE(74)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	super::__construct(tmp);
	HX_STACK_LINE(78)
	{
		HX_STACK_LINE(78)
		bool tmp1 = (_options->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		if ((tmp1)){
			HX_STACK_LINE(78)
			::opengl::GLObject tmp2 = this->create_texture_id();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			_options->__FieldRef(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")) = tmp2;
		}
		HX_STACK_LINE(78)
		_options->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic );
	}
	HX_STACK_LINE(80)
	this->texture = _options->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic );
	HX_STACK_LINE(82)
	this->bind();
	HX_STACK_LINE(84)
	Dynamic tmp1 = _options;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	this->apply_default_options(tmp1);
	HX_STACK_LINE(87)
	bool tmp2 = (_options->__Field(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	if ((tmp2)){
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			bool tmp3 = (_options->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(88)
			if ((tmp3)){
				HX_STACK_LINE(230)
				::String tmp4 = HX_HCSTRING(" ( Texture create with pixels requires both width and height","\x17","\x54","\xbf","\xba");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(230)
				::String tmp5 = (tmp4 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(88)
				::String tmp6 = (HX_HCSTRING("_options.width was null","\xe7","\xac","\x34","\x95") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(88)
				::luxe::DebugError tmp7 = ::luxe::DebugError_obj::null_assertion(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(88)
				HX_STACK_DO_THROW(tmp7);
			}
		}
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			bool tmp3 = (_options->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(89)
			if ((tmp3)){
				HX_STACK_LINE(230)
				::String tmp4 = HX_HCSTRING(" ( Texture create with pixels requires both width and height","\x17","\x54","\xbf","\xba");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(230)
				::String tmp5 = (tmp4 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(89)
				::String tmp6 = (HX_HCSTRING("_options.height was null","\xa8","\xfa","\x74","\xe1") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(89)
				::luxe::DebugError tmp7 = ::luxe::DebugError_obj::null_assertion(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(89)
				HX_STACK_DO_THROW(tmp7);
			}
		}
	}
	HX_STACK_LINE(92)
	bool tmp3 = (_options->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(92)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(92)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(92)
	if ((tmp4)){
		HX_STACK_LINE(92)
		tmp5 = (_options->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) != null());
	}
	else{
		HX_STACK_LINE(92)
		tmp5 = true;
	}
	HX_STACK_LINE(92)
	if ((tmp5)){
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			bool tmp6 = (_options->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(95)
			if ((tmp6)){
				HX_STACK_LINE(230)
				::String tmp7 = HX_HCSTRING(" ( Texture requires both width and height, only width was given in construct options","\xfa","\x48","\x21","\x7c");		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(230)
				::String tmp8 = (tmp7 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(95)
				::String tmp9 = (HX_HCSTRING("_options.height was null","\xa8","\xfa","\x74","\xe1") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(95)
				::luxe::DebugError tmp10 = ::luxe::DebugError_obj::null_assertion(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(95)
				HX_STACK_DO_THROW(tmp10);
			}
		}
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			bool tmp6 = (_options->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(96)
			if ((tmp6)){
				HX_STACK_LINE(230)
				::String tmp7 = HX_HCSTRING(" ( Texture requires both width and height, only height was given in construct options","\x61","\x25","\x9c","\xe3");		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(230)
				::String tmp8 = (tmp7 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(96)
				::String tmp9 = (HX_HCSTRING("_options.width was null","\xe7","\xac","\x34","\x95") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(96)
				::luxe::DebugError tmp10 = ::luxe::DebugError_obj::null_assertion(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(96)
				HX_STACK_DO_THROW(tmp10);
			}
		}
		HX_STACK_LINE(98)
		int tmp6 = this->width_actual = _options->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(98)
		this->width = tmp6;
		HX_STACK_LINE(99)
		int tmp7 = this->height_actual = _options->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(99)
		this->height = tmp7;
		HX_STACK_LINE(101)
		bool tmp8 = (_options->__Field(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(101)
		if ((tmp8)){
			HX_STACK_LINE(102)
			::snow::api::buffers::ArrayBufferView tmp9 = _options->__Field(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(102)
			this->submit(tmp9,null(),null());
		}
	}
}
;
	return null();
}

//Texture_obj::~Texture_obj() { }

Dynamic Texture_obj::__CreateEmpty() { return  new Texture_obj; }
hx::ObjectPtr< Texture_obj > Texture_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Texture_obj > _result_ = new Texture_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Texture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Texture_obj > _result_ = new Texture_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Float Texture_obj::memory_use( ){
	HX_STACK_FRAME("phoenix.Texture","memory_use",0x0ecf731b,"phoenix.Texture.memory_use","phoenix/Texture.hx",111,0xc84e46a3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	int tmp = this->width_actual;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	int tmp1 = this->height_actual;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(114)
	int tmp3 = (tmp2 * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(114)
	return tmp3;
}


::snow::api::buffers::ArrayBufferView Texture_obj::fetch( ::snow::api::buffers::ArrayBufferView _into,Dynamic __o__x,Dynamic __o__y,Dynamic _w,Dynamic _h){
Dynamic _x = __o__x.Default(0);
Dynamic _y = __o__y.Default(0);
	HX_STACK_FRAME("phoenix.Texture","fetch",0x976e1328,"phoenix.Texture.fetch","phoenix/Texture.hx",124,0xc84e46a3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_into,"_into")
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_w,"_w")
	HX_STACK_ARG(_h,"_h")
{
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			bool tmp = (_into == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(126)
			if ((tmp)){
				HX_STACK_LINE(230)
				::String tmp1 = HX_HCSTRING(" ( Texture fetch requires a valid buffer to store the pixels.","\xdc","\xf8","\xf9","\x5f");		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(230)
				::String tmp2 = (tmp1 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(126)
				::String tmp3 = (HX_HCSTRING("_into was null","\x9f","\xf0","\xc6","\x46") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(126)
				::luxe::DebugError tmp4 = ::luxe::DebugError_obj::null_assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(126)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			bool tmp = (_x == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(128)
			if ((tmp)){
				HX_STACK_LINE(128)
				_x = (int)0;
			}
			HX_STACK_LINE(128)
			_x;
		}
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			bool tmp = (_y == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(129)
			if ((tmp)){
				HX_STACK_LINE(129)
				_y = (int)0;
			}
			HX_STACK_LINE(129)
			_y;
		}
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			bool tmp = (_w == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(130)
			if ((tmp)){
				HX_STACK_LINE(130)
				int tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(130)
				_w = tmp1;
			}
			HX_STACK_LINE(130)
			_w;
		}
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			bool tmp = (_h == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(131)
			if ((tmp)){
				HX_STACK_LINE(131)
				int tmp1 = this->height;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(131)
				_h = tmp1;
			}
			HX_STACK_LINE(131)
			_h;
		}
		HX_STACK_LINE(133)
		int tmp = (_w * _h);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		int tmp1 = (tmp * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		int _required = tmp1;		HX_STACK_VAR(_required,"_required");
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			int tmp2 = _into->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(135)
			int tmp3 = _required;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(135)
			bool tmp4 = (tmp2 >= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(135)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(135)
			if ((tmp5)){
				HX_STACK_LINE(135)
				::String tmp6 = (HX_HCSTRING("Texture fetch requires at least ","\x1d","\x3e","\x77","\xd8") + _required);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(135)
				::String tmp7 = (tmp6 + HX_HCSTRING(" (w * h * 4) bytes for the pixels, you have ","\x45","\x93","\x41","\x15"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(135)
				int tmp8 = _into->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(135)
				::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(135)
				::String tmp10 = (tmp9 + HX_HCSTRING("!","\x21","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(214)
				::String tmp11 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(214)
				::String tmp12 = (tmp11 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(135)
				::String tmp13 = (HX_HCSTRING("_into.length >= _required","\xa8","\xf1","\x91","\xb8") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(135)
				::luxe::DebugError tmp14 = ::luxe::DebugError_obj::assertion(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(135)
				HX_STACK_DO_THROW(tmp14);
			}
		}
		HX_STACK_LINE(141)
		::opengl::GLObject tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		{
			HX_STACK_LINE(141)
			int tmp3 = linc::opengl::webgl::createFramebuffer();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(141)
			int _id = tmp3;		HX_STACK_VAR(_id,"_id");
			HX_STACK_LINE(141)
			::opengl::GLObject tmp4 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(141)
			tmp2 = tmp4;
		}
		HX_STACK_LINE(141)
		::opengl::GLObject fb = tmp2;		HX_STACK_VAR(fb,"fb");
		HX_STACK_LINE(143)
		bool tmp3 = (fb == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(143)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		if ((tmp3)){
			HX_STACK_LINE(143)
			tmp4 = (int)0;
		}
		else{
			HX_STACK_LINE(143)
			tmp4 = fb->id;
		}
		HX_STACK_LINE(143)
		glBindFramebuffer((int)36160,tmp4);
		HX_STACK_LINE(144)
		{
			HX_STACK_LINE(144)
			::opengl::GLObject tmp5 = this->texture;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(144)
			::opengl::GLObject texture = tmp5;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(144)
			bool tmp6 = (texture == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(144)
			int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(144)
			if ((tmp6)){
				HX_STACK_LINE(144)
				tmp7 = (int)0;
			}
			else{
				HX_STACK_LINE(144)
				tmp7 = texture->id;
			}
			HX_STACK_LINE(144)
			glFramebufferTexture2D((int)36160,(int)36064,(int)3553,tmp7,(int)0);
		}
		HX_STACK_LINE(146)
		{
			HX_STACK_LINE(146)
			int tmp5 = glCheckFramebufferStatus((int)36160);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(146)
			bool tmp6 = (tmp5 == (int)36053);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(146)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(146)
			if ((tmp7)){
				HX_STACK_LINE(146)
				::String tmp8 = HX_HCSTRING("GL.checkFramebufferStatus(GL.FRAMEBUFFER) == GL.FRAMEBUFFER_COMPLETE","\x57","\xbe","\x3b","\x4b");		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(146)
				::luxe::DebugError tmp9 = ::luxe::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(146)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			int x = _x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(148)
			int y = _y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(148)
			int width = _w;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(148)
			int height = _h;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(148)
			glReadPixels(x, y, width, height, (int)6408, (int)5121, (GLvoid*)(&_into->buffer[0] + _into->byteOffset));
		}
		HX_STACK_LINE(150)
		bool tmp5 = (((::opengl::GLObject)(null())) == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(150)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(150)
		if ((tmp5)){
			HX_STACK_LINE(150)
			tmp6 = (int)0;
		}
		else{
			HX_STACK_LINE(150)
			tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
		}
		HX_STACK_LINE(150)
		glBindFramebuffer((int)36160,tmp6);
		HX_STACK_LINE(151)
		bool tmp7 = (fb == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(151)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(151)
		if ((tmp7)){
			HX_STACK_LINE(151)
			tmp8 = (int)0;
		}
		else{
			HX_STACK_LINE(151)
			tmp8 = fb->id;
		}
		HX_STACK_LINE(151)
		linc::opengl::webgl::deleteFramebuffer(tmp8);
		HX_STACK_LINE(152)
		fb = null();
		HX_STACK_LINE(154)
		::snow::api::buffers::ArrayBufferView tmp9 = _into;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(154)
		return tmp9;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Texture_obj,fetch,return )

Void Texture_obj::submit( ::snow::api::buffers::ArrayBufferView _pixels,Dynamic _target,Dynamic __o__level){
Dynamic _level = __o__level.Default(0);
	HX_STACK_FRAME("phoenix.Texture","submit",0x4611696a,"phoenix.Texture.submit","phoenix/Texture.hx",159,0xc84e46a3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pixels,"_pixels")
	HX_STACK_ARG(_target,"_target")
	HX_STACK_ARG(_level,"_level")
{
		HX_STACK_LINE(161)
		{
			HX_STACK_LINE(161)
			bool tmp = (_level >= (int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(161)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(161)
			if ((tmp1)){
				HX_STACK_LINE(214)
				::String tmp2 = HX_HCSTRING(" ( Texture submit level cannot be negative","\x7c","\x8e","\xb4","\x1e");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(214)
				::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(161)
				::String tmp4 = (HX_HCSTRING("_level >= 0","\x4a","\x69","\xf2","\xb4") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(161)
				::luxe::DebugError tmp5 = ::luxe::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(161)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(163)
		int tmp = ::phoenix::Texture_obj::max_size();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		int _max = tmp;		HX_STACK_VAR(_max,"_max");
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			int tmp1 = this->width_actual;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(165)
			int tmp2 = _max;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(165)
			bool tmp3 = (tmp1 <= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(165)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(165)
			if ((tmp4)){
				HX_STACK_LINE(165)
				int tmp5 = this->width_actual;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(165)
				::String tmp6 = (HX_HCSTRING("Texture actual width bigger than maximum hardware size (width:","\xdb","\xaf","\x16","\xab") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(165)
				::String tmp7 = (tmp6 + HX_HCSTRING(", max:","\x8a","\xb5","\xdc","\x4c"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(165)
				int tmp8 = _max;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(165)
				::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(165)
				::String tmp10 = (tmp9 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(214)
				::String tmp11 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(214)
				::String tmp12 = (tmp11 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(165)
				::String tmp13 = (HX_HCSTRING("width_actual <= _max","\x6b","\xcd","\x38","\xa2") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(165)
				::luxe::DebugError tmp14 = ::luxe::DebugError_obj::assertion(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(165)
				HX_STACK_DO_THROW(tmp14);
			}
		}
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(166)
			int tmp1 = this->height_actual;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(166)
			int tmp2 = _max;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(166)
			bool tmp3 = (tmp1 <= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(166)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(166)
			if ((tmp4)){
				HX_STACK_LINE(166)
				int tmp5 = this->height_actual;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(166)
				::String tmp6 = (HX_HCSTRING("Texture actual height bigger than maximum hardware size (height:","\x71","\x70","\x48","\xd6") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(166)
				::String tmp7 = (tmp6 + HX_HCSTRING(", max:","\x8a","\xb5","\xdc","\x4c"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(166)
				int tmp8 = _max;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(166)
				::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(166)
				::String tmp10 = (tmp9 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(214)
				::String tmp11 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(214)
				::String tmp12 = (tmp11 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(166)
				::String tmp13 = (HX_HCSTRING("height_actual <= _max","\xaa","\xc0","\xc6","\x06") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(166)
				::luxe::DebugError tmp14 = ::luxe::DebugError_obj::assertion(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(166)
				HX_STACK_DO_THROW(tmp14);
			}
		}
		HX_STACK_LINE(168)
		this->bind();
		HX_STACK_LINE(170)
		int tmp1 = this->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(170)
		bool tmp2 = (tmp1 == (int)3553);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		if ((tmp2)){
			HX_STACK_LINE(171)
			bool tmp3 = (_target == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(171)
			if ((tmp3)){
				HX_STACK_LINE(171)
				_target = (int)3553;
			}
			HX_STACK_LINE(171)
			_target;
		}
		else{
			HX_STACK_LINE(173)
			bool tmp3 = (_target == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(173)
			if ((tmp3)){
				HX_STACK_LINE(230)
				::String tmp4 = HX_HCSTRING(" ( Texture submit to a non 2D texture requires the _target to be specified","\x0e","\xc8","\x8b","\x47");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(230)
				::String tmp5 = (tmp4 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(173)
				::String tmp6 = (HX_HCSTRING("_target was null","\x0e","\xb6","\xf9","\x14") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(173)
				::luxe::DebugError tmp7 = ::luxe::DebugError_obj::null_assertion(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(173)
				HX_STACK_DO_THROW(tmp7);
			}
		}
		HX_STACK_LINE(176)
		bool tmp3 = this->compressed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(176)
		if ((tmp3)){
			HX_STACK_LINE(177)
			int target = _target;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(177)
			int level = _level;		HX_STACK_VAR(level,"level");
			HX_STACK_LINE(177)
			glCompressedTexImage2D(target, level, this->format, this->width_actual, this->height_actual, this->border, _pixels->byteLength, (GLvoid*)(&_pixels->buffer[0] + _pixels->byteOffset));
		}
		else{
			HX_STACK_LINE(179)
			int target = _target;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(179)
			int level = _level;		HX_STACK_VAR(level,"level");
			HX_STACK_LINE(179)
			GLvoid* _data = ((_pixels != null()) ? (GLvoid*)(&_pixels->buffer[0] + _pixels->byteOffset) : NULL);
			HX_STACK_LINE(179)
			glTexImage2D(target, level, this->format, this->width_actual, this->height_actual, this->border, this->format, this->data_type, _data);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,submit,(void))

Void Texture_obj::generate_mipmaps( ){
{
		HX_STACK_FRAME("phoenix.Texture","generate_mipmaps",0x90c8cb73,"phoenix.Texture.generate_mipmaps","phoenix/Texture.hx",185,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(187)
		this->bind();
		HX_STACK_LINE(188)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		glGenerateMipmap(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,generate_mipmaps,(void))

Void Texture_obj::bind( ){
{
		HX_STACK_FRAME("phoenix.Texture","bind",0xe3a4ae8f,"phoenix.Texture.bind","phoenix/Texture.hx",196,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(198)
		::phoenix::Renderer tmp = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		int tmp1 = this->slot;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		int tmp2 = ((int)33984 + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(198)
		tmp->state->activeTexture(tmp2);
		HX_STACK_LINE(199)
		{
			HX_STACK_LINE(199)
			::phoenix::Renderer tmp3 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(199)
			::phoenix::RenderState _this = tmp3->state;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(199)
			::opengl::GLObject tmp4 = this->texture;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(199)
			::opengl::GLObject tex = tmp4;		HX_STACK_VAR(tex,"tex");
			HX_STACK_LINE(199)
			int tmp5 = this->type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(199)
			switch( (int)(tmp5)){
				case (int)3553: {
					HX_STACK_LINE(199)
					::opengl::GLObject tmp6 = tex;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(199)
					_this->bindTexture2D(tmp6);
				}
				;break;
				case (int)34067: {
					HX_STACK_LINE(199)
					::opengl::GLObject tmp6 = tex;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(199)
					_this->bindTextureCube(tmp6);
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,bind,(void))

::snow::api::Promise Texture_obj::reload( ){
	HX_STACK_FRAME("phoenix.Texture","reload",0xafea64ab,"phoenix.Texture.reload","phoenix/Texture.hx",206,0xc84e46a3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(206)
	::phoenix::Texture _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(208)
	{
		HX_STACK_LINE(208)
		int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		bool tmp1 = (tmp != (int)6);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(208)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(208)
		if ((tmp2)){
			HX_STACK_LINE(214)
			::String tmp3 = HX_HCSTRING(" ( Resource cannot reload when already destroyed","\xcf","\x18","\x2f","\x6a");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(214)
			::String tmp4 = (tmp3 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(208)
			::String tmp5 = (HX_HCSTRING("state != ResourceState.destroyed","\x79","\xbe","\xa0","\xbf") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(208)
			::luxe::DebugError tmp6 = ::luxe::DebugError_obj::assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(208)
			HX_STACK_DO_THROW(tmp6);
		}
	}
	HX_STACK_LINE(210)
	this->clear();

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::phoenix::Texture,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","phoenix/Texture.hx",212,0xc84e46a3)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(214)
			_g->set_state((int)2);
			HX_STACK_LINE(216)
			::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(216)
			::snow::systems::assets::Assets tmp1 = tmp->app->assets;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(216)
			::String tmp2 = _g->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(216)
			::snow::api::Promise tmp3 = ::snow::systems::assets::AssetImage_obj::load(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(216)
			::snow::api::Promise get = tmp3;		HX_STACK_VAR(get,"get");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::phoenix::Texture,_g,Dynamic,resolve)
			int __ArgCount() const { return 1; }
			Void run(::snow::systems::assets::AssetImage _asset){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","phoenix/Texture.hx",218,0xc84e46a3)
				HX_STACK_ARG(_asset,"_asset")
				{
					HX_STACK_LINE(220)
					::opengl::GLObject tmp4 = _g->create_texture_id();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(220)
					_g->texture = tmp4;
					HX_STACK_LINE(222)
					::snow::systems::assets::AssetImage tmp5 = _asset;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(222)
					_g->from_asset(tmp5,null());
					HX_STACK_LINE(224)
					_g->set_state((int)3);
					HX_STACK_LINE(225)
					::phoenix::Texture tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(225)
					resolve(tmp6);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(218)
			get->then( Dynamic(new _Function_2_1(_g,resolve)),null());

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_2,::phoenix::Texture,_g,Dynamic,reject)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _error){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","phoenix/Texture.hx",229,0xc84e46a3)
				HX_STACK_ARG(_error,"_error")
				{
					HX_STACK_LINE(231)
					_g->set_state((int)4);
					HX_STACK_LINE(232)
					Dynamic tmp4 = _error;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(232)
					reject(tmp4);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(229)
			get->error( Dynamic(new _Function_2_2(_g,reject)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(212)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	return tmp;
}


Void Texture_obj::from_asset( ::snow::systems::assets::AssetImage _asset,hx::Null< bool >  __o__clear_asset){
bool _clear_asset = __o__clear_asset.Default(true);
	HX_STACK_FRAME("phoenix.Texture","from_asset",0x4513646d,"phoenix.Texture.from_asset","phoenix/Texture.hx",240,0xc84e46a3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_asset,"_asset")
	HX_STACK_ARG(_clear_asset,"_clear_asset")
{
		HX_STACK_LINE(244)
		int tmp = _asset->image->width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(244)
		this->width = tmp;
		HX_STACK_LINE(245)
		int tmp1 = _asset->image->height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(245)
		this->height = tmp1;
		HX_STACK_LINE(246)
		int tmp2 = _asset->image->width_actual;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(246)
		this->width_actual = tmp2;
		HX_STACK_LINE(247)
		int tmp3 = _asset->image->height_actual;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		this->height_actual = tmp3;
		HX_STACK_LINE(249)
		bool tmp4 = this->load_premultiply_alpha;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(249)
		if ((tmp4)){
			HX_STACK_LINE(250)
			::luxe::utils::Utils tmp5 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(250)
			::snow::api::buffers::ArrayBufferView tmp6 = _asset->image->pixels;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(250)
			tmp5->premultiply_alpha(tmp6);
		}
		HX_STACK_LINE(253)
		::snow::api::buffers::ArrayBufferView tmp5 = _asset->image->pixels;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(253)
		this->submit(tmp5,null(),null());
		HX_STACK_LINE(255)
		bool tmp6 = _clear_asset;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(255)
		if ((tmp6)){
			HX_STACK_LINE(256)
			_asset->image->pixels = null();
			HX_STACK_LINE(257)
			_asset = null();
		}
		HX_STACK_LINE(260)
		{
			HX_STACK_LINE(260)
			{
				HX_STACK_LINE(260)
				int tmp7 = this->type;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(260)
				int tmp8 = this->filter_min;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(260)
				glTexParameteri(tmp7,(int)10241,tmp8);
			}
			HX_STACK_LINE(260)
			{
				HX_STACK_LINE(260)
				int tmp7 = this->type;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(260)
				int tmp8 = this->filter_mag;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(260)
				glTexParameteri(tmp7,(int)10240,tmp8);
			}
			HX_STACK_LINE(260)
			{
				HX_STACK_LINE(260)
				int tmp7 = this->type;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(260)
				int tmp8 = this->clamp_s;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(260)
				glTexParameteri(tmp7,(int)10242,tmp8);
			}
			HX_STACK_LINE(260)
			{
				HX_STACK_LINE(260)
				int tmp7 = this->type;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(260)
				int tmp8 = this->clamp_t;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(260)
				glTexParameteri(tmp7,(int)10243,tmp8);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,from_asset,(void))

Void Texture_obj::clear( ){
{
		HX_STACK_FRAME("phoenix.Texture","clear",0xe1cf707b,"phoenix.Texture.clear","phoenix/Texture.hx",264,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(266)
		::opengl::GLObject tmp = this->texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(266)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(266)
		if ((tmp1)){
			HX_STACK_LINE(267)
			::opengl::GLObject tmp2 = this->texture;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(267)
			::opengl::GLObject texture = tmp2;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(267)
			bool tmp3 = (texture == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(267)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(267)
			if ((tmp3)){
				HX_STACK_LINE(267)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(267)
				tmp4 = texture->id;
			}
			HX_STACK_LINE(267)
			linc::opengl::webgl::deleteTexture(tmp4);
		}
	}
return null();
}


::opengl::GLObject Texture_obj::create_texture_id( ){
	HX_STACK_FRAME("phoenix.Texture","create_texture_id",0x413c1f90,"phoenix.Texture.create_texture_id","phoenix/Texture.hx",275,0xc84e46a3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(277)
	::opengl::GLObject tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(277)
	{
		HX_STACK_LINE(277)
		int tmp1 = linc::opengl::webgl::createTexture();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(277)
		int _id = tmp1;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(277)
		::opengl::GLObject tmp2 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(277)
		tmp = tmp2;
	}
	HX_STACK_LINE(277)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,create_texture_id,return )

Void Texture_obj::apply_props( ){
{
		HX_STACK_FRAME("phoenix.Texture","apply_props",0x7258600d,"phoenix.Texture.apply_props","phoenix/Texture.hx",281,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(283)
		{
			HX_STACK_LINE(283)
			int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(283)
			int tmp1 = this->filter_min;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(283)
			glTexParameteri(tmp,(int)10241,tmp1);
		}
		HX_STACK_LINE(284)
		{
			HX_STACK_LINE(284)
			int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(284)
			int tmp1 = this->filter_mag;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(284)
			glTexParameteri(tmp,(int)10240,tmp1);
		}
		HX_STACK_LINE(285)
		{
			HX_STACK_LINE(285)
			int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(285)
			int tmp1 = this->clamp_s;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(285)
			glTexParameteri(tmp,(int)10242,tmp1);
		}
		HX_STACK_LINE(286)
		{
			HX_STACK_LINE(286)
			int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(286)
			int tmp1 = this->clamp_t;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(286)
			glTexParameteri(tmp,(int)10243,tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,apply_props,(void))

Void Texture_obj::apply_default_options( Dynamic _options){
{
		HX_STACK_FRAME("phoenix.Texture","apply_default_options",0x6788cd7d,"phoenix.Texture.apply_default_options","phoenix/Texture.hx",290,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_options,"_options")
		HX_STACK_LINE(294)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		{
			HX_STACK_LINE(294)
			bool tmp1 = (_options->__Field(HX_HCSTRING("load_premultiply_alpha","\x8d","\xfb","\xf5","\xac"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(294)
			if ((tmp1)){
				HX_STACK_LINE(294)
				_options->__FieldRef(HX_HCSTRING("load_premultiply_alpha","\x8d","\xfb","\xf5","\xac")) = false;
			}
			HX_STACK_LINE(294)
			tmp = _options->__Field(HX_HCSTRING("load_premultiply_alpha","\x8d","\xfb","\xf5","\xac"), hx::paccDynamic );
		}
		HX_STACK_LINE(294)
		this->load_premultiply_alpha = tmp;
		HX_STACK_LINE(295)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(295)
		{
			HX_STACK_LINE(295)
			bool tmp2 = (_options->__Field(HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(295)
			if ((tmp2)){
				HX_STACK_LINE(295)
				_options->__FieldRef(HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67")) = false;
			}
			HX_STACK_LINE(295)
			tmp1 = _options->__Field(HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67"), hx::paccDynamic );
		}
		HX_STACK_LINE(295)
		this->compressed = tmp1;
		HX_STACK_LINE(296)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(296)
		{
			HX_STACK_LINE(296)
			bool tmp3 = (_options->__Field(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(296)
			if ((tmp3)){
				HX_STACK_LINE(296)
				_options->__FieldRef(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")) = (int)6408;
			}
			HX_STACK_LINE(296)
			tmp2 = _options->__Field(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"), hx::paccDynamic );
		}
		HX_STACK_LINE(296)
		this->format = tmp2;
		HX_STACK_LINE(297)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(297)
		{
			HX_STACK_LINE(297)
			bool tmp4 = (_options->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(297)
			if ((tmp4)){
				HX_STACK_LINE(297)
				_options->__FieldRef(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")) = (int)3553;
			}
			HX_STACK_LINE(297)
			tmp3 = _options->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );
		}
		HX_STACK_LINE(297)
		this->type = tmp3;
		HX_STACK_LINE(298)
		Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(298)
		{
			HX_STACK_LINE(298)
			bool tmp5 = (_options->__Field(HX_HCSTRING("data_type","\x2f","\x20","\xdc","\xb2"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(298)
			if ((tmp5)){
				HX_STACK_LINE(298)
				_options->__FieldRef(HX_HCSTRING("data_type","\x2f","\x20","\xdc","\xb2")) = (int)5121;
			}
			HX_STACK_LINE(298)
			tmp4 = _options->__Field(HX_HCSTRING("data_type","\x2f","\x20","\xdc","\xb2"), hx::paccDynamic );
		}
		HX_STACK_LINE(298)
		this->data_type = tmp4;
		HX_STACK_LINE(303)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(303)
		{
			HX_STACK_LINE(303)
			bool tmp6 = (_options->__Field(HX_HCSTRING("filter_min","\x4b","\xb2","\x89","\x60"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(303)
			if ((tmp6)){
				HX_STACK_LINE(303)
				int tmp7 = ::phoenix::Texture_obj::default_filter;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(303)
				_options->__FieldRef(HX_HCSTRING("filter_min","\x4b","\xb2","\x89","\x60")) = tmp7;
			}
			HX_STACK_LINE(303)
			tmp5 = _options->__Field(HX_HCSTRING("filter_min","\x4b","\xb2","\x89","\x60"), hx::paccDynamic );
		}
		HX_STACK_LINE(303)
		this->set_filter_min(tmp5);
		HX_STACK_LINE(304)
		Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(304)
		{
			HX_STACK_LINE(304)
			bool tmp7 = (_options->__Field(HX_HCSTRING("filter_mag","\x4c","\xab","\x89","\x60"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(304)
			if ((tmp7)){
				HX_STACK_LINE(304)
				int tmp8 = ::phoenix::Texture_obj::default_filter;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(304)
				_options->__FieldRef(HX_HCSTRING("filter_mag","\x4c","\xab","\x89","\x60")) = tmp8;
			}
			HX_STACK_LINE(304)
			tmp6 = _options->__Field(HX_HCSTRING("filter_mag","\x4c","\xab","\x89","\x60"), hx::paccDynamic );
		}
		HX_STACK_LINE(304)
		this->set_filter_mag(tmp6);
		HX_STACK_LINE(307)
		Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(307)
		{
			HX_STACK_LINE(307)
			bool tmp8 = (_options->__Field(HX_HCSTRING("clamp_s","\xef","\xba","\x97","\x65"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(307)
			if ((tmp8)){
				HX_STACK_LINE(307)
				int tmp9 = ::phoenix::Texture_obj::default_clamp;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(307)
				_options->__FieldRef(HX_HCSTRING("clamp_s","\xef","\xba","\x97","\x65")) = tmp9;
			}
			HX_STACK_LINE(307)
			tmp7 = _options->__Field(HX_HCSTRING("clamp_s","\xef","\xba","\x97","\x65"), hx::paccDynamic );
		}
		HX_STACK_LINE(307)
		this->set_clamp_s(tmp7);
		HX_STACK_LINE(308)
		Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(308)
		{
			HX_STACK_LINE(308)
			bool tmp9 = (_options->__Field(HX_HCSTRING("clamp_t","\xf0","\xba","\x97","\x65"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(308)
			if ((tmp9)){
				HX_STACK_LINE(308)
				int tmp10 = ::phoenix::Texture_obj::default_clamp;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(308)
				_options->__FieldRef(HX_HCSTRING("clamp_t","\xf0","\xba","\x97","\x65")) = tmp10;
			}
			HX_STACK_LINE(308)
			tmp8 = _options->__Field(HX_HCSTRING("clamp_t","\xf0","\xba","\x97","\x65"), hx::paccDynamic );
		}
		HX_STACK_LINE(308)
		this->set_clamp_t(tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,apply_default_options,(void))

int Texture_obj::set_clamp_s( int _clamp){
	HX_STACK_FRAME("phoenix.Texture","set_clamp_s",0x9c7a0780,"phoenix.Texture.set_clamp_s","phoenix/Texture.hx",332,0xc84e46a3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_clamp,"_clamp")
	HX_STACK_LINE(334)
	this->bind();
	HX_STACK_LINE(336)
	{
		HX_STACK_LINE(336)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(336)
		int tmp1 = _clamp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(336)
		glTexParameteri(tmp,(int)10242,tmp1);
	}
	HX_STACK_LINE(338)
	int tmp = this->clamp_s = _clamp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(338)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_clamp_s,return )

int Texture_obj::set_clamp_t( int _clamp){
	HX_STACK_FRAME("phoenix.Texture","set_clamp_t",0x9c7a0781,"phoenix.Texture.set_clamp_t","phoenix/Texture.hx",342,0xc84e46a3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_clamp,"_clamp")
	HX_STACK_LINE(344)
	this->bind();
	HX_STACK_LINE(346)
	{
		HX_STACK_LINE(346)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(346)
		int tmp1 = _clamp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(346)
		glTexParameteri(tmp,(int)10243,tmp1);
	}
	HX_STACK_LINE(348)
	int tmp = this->clamp_t = _clamp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(348)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_clamp_t,return )

int Texture_obj::set_filter_min( int _filter){
	HX_STACK_FRAME("phoenix.Texture","set_filter_min",0xbef6d65a,"phoenix.Texture.set_filter_min","phoenix/Texture.hx",352,0xc84e46a3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_filter,"_filter")
	HX_STACK_LINE(354)
	this->bind();
	HX_STACK_LINE(356)
	{
		HX_STACK_LINE(356)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(356)
		int tmp1 = _filter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(356)
		glTexParameteri(tmp,(int)10241,tmp1);
	}
	HX_STACK_LINE(358)
	int tmp = this->filter_min = _filter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(358)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_filter_min,return )

int Texture_obj::set_filter_mag( int _filter){
	HX_STACK_FRAME("phoenix.Texture","set_filter_mag",0xbef6cf5b,"phoenix.Texture.set_filter_mag","phoenix/Texture.hx",362,0xc84e46a3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_filter,"_filter")
	HX_STACK_LINE(364)
	this->bind();
	HX_STACK_LINE(366)
	{
		HX_STACK_LINE(366)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(366)
		int tmp1 = _filter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(366)
		glTexParameteri(tmp,(int)10240,tmp1);
	}
	HX_STACK_LINE(368)
	int tmp = this->filter_mag = _filter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(368)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_filter_mag,return )

Void Texture_obj::apply_clamp( int _clamp,int _type){
{
		HX_STACK_FRAME("phoenix.Texture","apply_clamp",0xf220eb98,"phoenix.Texture.apply_clamp","phoenix/Texture.hx",374,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_clamp,"_clamp")
		HX_STACK_ARG(_type,"_type")
		HX_STACK_LINE(376)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(376)
		int tmp1 = _type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(376)
		int tmp2 = _clamp;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(376)
		glTexParameteri(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,apply_clamp,(void))

Void Texture_obj::apply_filter( int _filter,int _type){
{
		HX_STACK_FRAME("phoenix.Texture","apply_filter",0x6ad6307b,"phoenix.Texture.apply_filter","phoenix/Texture.hx",380,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_filter,"_filter")
		HX_STACK_ARG(_type,"_type")
		HX_STACK_LINE(382)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(382)
		int tmp1 = _type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(382)
		int tmp2 = _filter;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(382)
		glTexParameteri(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,apply_filter,(void))

::String Texture_obj::toString( ){
	HX_STACK_FRAME("phoenix.Texture","toString",0x4a5e5a7e,"phoenix.Texture.toString","phoenix/Texture.hx",386,0xc84e46a3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(388)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(388)
	::String tmp1 = ::phoenix::Texture_obj::type_name(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(388)
	::String _type = tmp1;		HX_STACK_VAR(_type,"_type");
	HX_STACK_LINE(389)
	int tmp2 = this->filter_min;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(389)
	::String tmp3 = ::phoenix::Texture_obj::filter_name(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(389)
	::String _filter_min = tmp3;		HX_STACK_VAR(_filter_min,"_filter_min");
	HX_STACK_LINE(390)
	int tmp4 = this->filter_mag;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(390)
	::String tmp5 = ::phoenix::Texture_obj::filter_name(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(390)
	::String _filter_mag = tmp5;		HX_STACK_VAR(_filter_mag,"_filter_mag");
	HX_STACK_LINE(391)
	int tmp6 = this->clamp_s;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(391)
	::String tmp7 = ::phoenix::Texture_obj::clamp_name(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(391)
	::String _clamp_s = tmp7;		HX_STACK_VAR(_clamp_s,"_clamp_s");
	HX_STACK_LINE(392)
	int tmp8 = this->clamp_t;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(392)
	::String tmp9 = ::phoenix::Texture_obj::clamp_name(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(392)
	::String _clamp_t = tmp9;		HX_STACK_VAR(_clamp_t,"_clamp_t");
	HX_STACK_LINE(394)
	::String tmp10 = (HX_HCSTRING("filter(min: ","\x48","\x75","\x72","\xde") + _filter_min);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(394)
	::String tmp11 = (tmp10 + HX_HCSTRING(", mag:","\xbb","\xa6","\xdc","\x4c"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(394)
	::String tmp12 = _filter_mag;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(394)
	::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(394)
	::String tmp14 = (tmp13 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(394)
	::String _filter = tmp14;		HX_STACK_VAR(_filter,"_filter");
	HX_STACK_LINE(395)
	::String tmp15 = (HX_HCSTRING("clamp(s: ","\x2c","\x0b","\xd5","\xa2") + _clamp_t);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(395)
	::String tmp16 = (tmp15 + HX_HCSTRING(", t: ","\x26","\x92","\x20","\x6b"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(395)
	::String tmp17 = _clamp_t;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(395)
	::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(395)
	::String tmp19 = (tmp18 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(395)
	::String _clamp = tmp19;		HX_STACK_VAR(_clamp,"_clamp");
	HX_STACK_LINE(396)
	int tmp20 = this->width;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(396)
	::String tmp21 = (HX_HCSTRING("size(size: ","\x2e","\x3d","\xd1","\x1a") + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(396)
	::String tmp22 = (tmp21 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(396)
	int tmp23 = this->height;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(396)
	::String tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(396)
	::String tmp25 = (tmp24 + HX_HCSTRING(", actual: ","\x28","\x77","\x9b","\x2b"));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(396)
	int tmp26 = this->width_actual;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(396)
	::String tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(396)
	::String tmp28 = (tmp27 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(396)
	int tmp29 = this->height_actual;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(396)
	::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(396)
	::String tmp31 = (tmp30 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(396)
	::String _width = tmp31;		HX_STACK_VAR(_width,"_width");
	HX_STACK_LINE(398)
	::String tmp32 = this->id;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(398)
	::String tmp33 = (HX_HCSTRING("Texture(id: ","\xce","\x38","\x3f","\x7b") + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(398)
	::String tmp34 = (tmp33 + HX_HCSTRING(", tex: ","\x59","\x0d","\xb5","\xfe"));		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(398)
	::String tmp35;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(398)
	{
		HX_STACK_LINE(398)
		::opengl::GLObject tmp36 = this->texture;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(398)
		::opengl::GLObject this1 = tmp36;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(398)
		bool tmp37 = (this1 == null());		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(398)
		int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(398)
		if ((tmp37)){
			HX_STACK_LINE(398)
			tmp38 = (int)0;
		}
		else{
			HX_STACK_LINE(398)
			tmp38 = this1->id;
		}
		HX_STACK_LINE(398)
		::String tmp39 = (HX_HCSTRING("GLTexture(","\x32","\x1e","\xd3","\x33") + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(398)
		tmp35 = (tmp39 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
	}
	HX_STACK_LINE(398)
	::String tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(398)
	::String tmp37 = (tmp36 + HX_HCSTRING(", type:","\x4c","\x65","\xe7","\x0b"));		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(398)
	::String tmp38 = _type;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(398)
	::String tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(398)
	::String tmp40 = (tmp39 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(398)
	::String tmp41 = _width;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(398)
	::String tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(398)
	::String tmp43 = (tmp42 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(398)
	::String tmp44 = _filter;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(398)
	::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(398)
	::String tmp46 = (tmp45 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(398)
	::String tmp47 = _clamp;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(398)
	::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(398)
	::String tmp49 = (tmp48 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(398)
	return tmp49;
}


int Texture_obj::default_filter;

int Texture_obj::default_clamp;

int Texture_obj::max_size( ){
	HX_STACK_FRAME("phoenix.Texture","max_size",0x2844294e,"phoenix.Texture.max_size","phoenix/Texture.hx",314,0xc84e46a3)
	HX_STACK_LINE(314)
	Dynamic tmp = linc::opengl::webgl::getParameter((int)3379);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(314)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,max_size,return )

Void Texture_obj::dump_asset_info( ::snow::systems::assets::AssetImage _asset){
{
		HX_STACK_FRAME("phoenix.Texture","dump_asset_info",0x0ba2cd36,"phoenix.Texture.dump_asset_info","luxe/Log.hx",138,0xe5312153)
		HX_STACK_ARG(_asset,"_asset")
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,dump_asset_info,(void))

::String Texture_obj::type_name( int _type){
	HX_STACK_FRAME("phoenix.Texture","type_name",0xcd64871e,"phoenix.Texture.type_name","phoenix/Texture.hx",402,0xc84e46a3)
	HX_STACK_ARG(_type,"_type")
	HX_STACK_LINE(403)
	int tmp = _type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(403)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(403)
	switch( (int)(tmp)){
		case (int)3553: {
			HX_STACK_LINE(404)
			tmp1 = HX_HCSTRING("tex_2D","\x6a","\x4e","\x78","\xd8");
		}
		;break;
		case (int)34067: {
			HX_STACK_LINE(405)
			tmp1 = HX_HCSTRING("tex_cube","\x8d","\x35","\x81","\x42");
		}
		;break;
	}
	HX_STACK_LINE(403)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,type_name,return )

::String Texture_obj::filter_name( int _filter){
	HX_STACK_FRAME("phoenix.Texture","filter_name",0xbf1058e0,"phoenix.Texture.filter_name","phoenix/Texture.hx",409,0xc84e46a3)
	HX_STACK_ARG(_filter,"_filter")
	HX_STACK_LINE(410)
	int tmp = _filter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(410)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(410)
	switch( (int)(tmp)){
		case (int)9729: {
			HX_STACK_LINE(411)
			tmp1 = HX_HCSTRING("linear","\xe5","\x51","\xa0","\xec");
		}
		;break;
		case (int)9728: {
			HX_STACK_LINE(412)
			tmp1 = HX_HCSTRING("nearest","\x5e","\x18","\xca","\x65");
		}
		;break;
		case (int)9987: {
			HX_STACK_LINE(413)
			tmp1 = HX_HCSTRING("mip_linear_linear","\x14","\x65","\xac","\x43");
		}
		;break;
		case (int)9985: {
			HX_STACK_LINE(414)
			tmp1 = HX_HCSTRING("mip_linear_nearest","\x4f","\xce","\x4e","\x39");
		}
		;break;
		case (int)9986: {
			HX_STACK_LINE(415)
			tmp1 = HX_HCSTRING("mip_nearest_linear","\x71","\x50","\xc6","\x56");
		}
		;break;
		case (int)9984: {
			HX_STACK_LINE(416)
			tmp1 = HX_HCSTRING("mip_nearest_nearest","\x52","\xd4","\xe2","\xdc");
		}
		;break;
	}
	HX_STACK_LINE(410)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,filter_name,return )

::String Texture_obj::clamp_name( int _clamp){
	HX_STACK_FRAME("phoenix.Texture","clamp_name",0x93b18fa1,"phoenix.Texture.clamp_name","phoenix/Texture.hx",420,0xc84e46a3)
	HX_STACK_ARG(_clamp,"_clamp")
	HX_STACK_LINE(421)
	int tmp = _clamp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(421)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(421)
	switch( (int)(tmp)){
		case (int)33071: {
			HX_STACK_LINE(422)
			tmp1 = HX_HCSTRING("edge","\x3d","\xc8","\x0e","\x43");
		}
		;break;
		case (int)10497: {
			HX_STACK_LINE(423)
			tmp1 = HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06");
		}
		;break;
		case (int)33648: {
			HX_STACK_LINE(424)
			tmp1 = HX_HCSTRING("mirror","\x3f","\x72","\xaa","\x55");
		}
		;break;
	}
	HX_STACK_LINE(421)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,clamp_name,return )


Texture_obj::Texture_obj()
{
}

void Texture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Texture);
	HX_MARK_MEMBER_NAME(slot,"slot");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(data_type,"data_type");
	HX_MARK_MEMBER_NAME(compressed,"compressed");
	HX_MARK_MEMBER_NAME(width_actual,"width_actual");
	HX_MARK_MEMBER_NAME(height_actual,"height_actual");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(filter_min,"filter_min");
	HX_MARK_MEMBER_NAME(filter_mag,"filter_mag");
	HX_MARK_MEMBER_NAME(clamp_s,"clamp_s");
	HX_MARK_MEMBER_NAME(clamp_t,"clamp_t");
	HX_MARK_MEMBER_NAME(load_premultiply_alpha,"load_premultiply_alpha");
	::luxe::resource::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Texture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(slot,"slot");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(data_type,"data_type");
	HX_VISIT_MEMBER_NAME(compressed,"compressed");
	HX_VISIT_MEMBER_NAME(width_actual,"width_actual");
	HX_VISIT_MEMBER_NAME(height_actual,"height_actual");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(filter_min,"filter_min");
	HX_VISIT_MEMBER_NAME(filter_mag,"filter_mag");
	HX_VISIT_MEMBER_NAME(clamp_s,"clamp_s");
	HX_VISIT_MEMBER_NAME(clamp_t,"clamp_t");
	HX_VISIT_MEMBER_NAME(load_premultiply_alpha,"load_premultiply_alpha");
	::luxe::resource::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"slot") ) { return slot; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"fetch") ) { return fetch_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return border; }
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"submit") ) { return submit_dyn(); }
		if (HX_FIELD_EQ(inName,"reload") ) { return reload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		if (HX_FIELD_EQ(inName,"clamp_s") ) { return clamp_s; }
		if (HX_FIELD_EQ(inName,"clamp_t") ) { return clamp_t; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"data_type") ) { return data_type; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"compressed") ) { return compressed; }
		if (HX_FIELD_EQ(inName,"filter_min") ) { return filter_min; }
		if (HX_FIELD_EQ(inName,"filter_mag") ) { return filter_mag; }
		if (HX_FIELD_EQ(inName,"memory_use") ) { return memory_use_dyn(); }
		if (HX_FIELD_EQ(inName,"from_asset") ) { return from_asset_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"apply_props") ) { return apply_props_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clamp_s") ) { return set_clamp_s_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clamp_t") ) { return set_clamp_t_dyn(); }
		if (HX_FIELD_EQ(inName,"apply_clamp") ) { return apply_clamp_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"width_actual") ) { return width_actual; }
		if (HX_FIELD_EQ(inName,"apply_filter") ) { return apply_filter_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"height_actual") ) { return height_actual; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_filter_min") ) { return set_filter_min_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filter_mag") ) { return set_filter_mag_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"generate_mipmaps") ) { return generate_mipmaps_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"create_texture_id") ) { return create_texture_id_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"apply_default_options") ) { return apply_default_options_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"load_premultiply_alpha") ) { return load_premultiply_alpha; }
	}
	return super::__Field(inName,inCallProp);
}

bool Texture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"max_size") ) { outValue = max_size_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"type_name") ) { outValue = type_name_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clamp_name") ) { outValue = clamp_name_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filter_name") ) { outValue = filter_name_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"default_clamp") ) { outValue = default_clamp; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"default_filter") ) { outValue = default_filter; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dump_asset_info") ) { outValue = dump_asset_info_dyn(); return true;  }
	}
	return false;
}

Dynamic Texture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"slot") ) { slot=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clamp_s") ) { if (inCallProp == hx::paccAlways) return set_clamp_s(inValue);clamp_s=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clamp_t") ) { if (inCallProp == hx::paccAlways) return set_clamp_t(inValue);clamp_t=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"data_type") ) { data_type=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"compressed") ) { compressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filter_min") ) { if (inCallProp == hx::paccAlways) return set_filter_min(inValue);filter_min=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filter_mag") ) { if (inCallProp == hx::paccAlways) return set_filter_mag(inValue);filter_mag=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"width_actual") ) { width_actual=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"height_actual") ) { height_actual=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"load_premultiply_alpha") ) { load_premultiply_alpha=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Texture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"default_clamp") ) { default_clamp=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"default_filter") ) { default_filter=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("slot","\xfe","\xdd","\x55","\x4c"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("data_type","\x2f","\x20","\xdc","\xb2"));
	outFields->push(HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67"));
	outFields->push(HX_HCSTRING("width_actual","\xe7","\x12","\xf5","\xde"));
	outFields->push(HX_HCSTRING("height_actual","\x26","\x2f","\x9e","\xa1"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("filter_min","\x4b","\xb2","\x89","\x60"));
	outFields->push(HX_HCSTRING("filter_mag","\x4c","\xab","\x89","\x60"));
	outFields->push(HX_HCSTRING("clamp_s","\xef","\xba","\x97","\x65"));
	outFields->push(HX_HCSTRING("clamp_t","\xf0","\xba","\x97","\x65"));
	outFields->push(HX_HCSTRING("load_premultiply_alpha","\x8d","\xfb","\xf5","\xac"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Texture_obj,slot),HX_HCSTRING("slot","\xfe","\xdd","\x55","\x4c")},
	{hx::fsInt,(int)offsetof(Texture_obj,border),HX_HCSTRING("border","\xec","\x4c","\x1a","\x64")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(Texture_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsInt,(int)offsetof(Texture_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{hx::fsInt,(int)offsetof(Texture_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(Texture_obj,data_type),HX_HCSTRING("data_type","\x2f","\x20","\xdc","\xb2")},
	{hx::fsBool,(int)offsetof(Texture_obj,compressed),HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67")},
	{hx::fsInt,(int)offsetof(Texture_obj,width_actual),HX_HCSTRING("width_actual","\xe7","\x12","\xf5","\xde")},
	{hx::fsInt,(int)offsetof(Texture_obj,height_actual),HX_HCSTRING("height_actual","\x26","\x2f","\x9e","\xa1")},
	{hx::fsInt,(int)offsetof(Texture_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Texture_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(Texture_obj,filter_min),HX_HCSTRING("filter_min","\x4b","\xb2","\x89","\x60")},
	{hx::fsInt,(int)offsetof(Texture_obj,filter_mag),HX_HCSTRING("filter_mag","\x4c","\xab","\x89","\x60")},
	{hx::fsInt,(int)offsetof(Texture_obj,clamp_s),HX_HCSTRING("clamp_s","\xef","\xba","\x97","\x65")},
	{hx::fsInt,(int)offsetof(Texture_obj,clamp_t),HX_HCSTRING("clamp_t","\xf0","\xba","\x97","\x65")},
	{hx::fsBool,(int)offsetof(Texture_obj,load_premultiply_alpha),HX_HCSTRING("load_premultiply_alpha","\x8d","\xfb","\xf5","\xac")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Texture_obj::default_filter,HX_HCSTRING("default_filter","\xb6","\x62","\x9b","\x55")},
	{hx::fsInt,(void *) &Texture_obj::default_clamp,HX_HCSTRING("default_clamp","\xbd","\x19","\x24","\x0a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("slot","\xfe","\xdd","\x55","\x4c"),
	HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("data_type","\x2f","\x20","\xdc","\xb2"),
	HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67"),
	HX_HCSTRING("width_actual","\xe7","\x12","\xf5","\xde"),
	HX_HCSTRING("height_actual","\x26","\x2f","\x9e","\xa1"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("filter_min","\x4b","\xb2","\x89","\x60"),
	HX_HCSTRING("filter_mag","\x4c","\xab","\x89","\x60"),
	HX_HCSTRING("clamp_s","\xef","\xba","\x97","\x65"),
	HX_HCSTRING("clamp_t","\xf0","\xba","\x97","\x65"),
	HX_HCSTRING("load_premultiply_alpha","\x8d","\xfb","\xf5","\xac"),
	HX_HCSTRING("memory_use","\xc9","\x50","\x8c","\xfa"),
	HX_HCSTRING("fetch","\x3a","\x14","\xfa","\xfd"),
	HX_HCSTRING("submit","\x18","\x58","\x06","\x9a"),
	HX_HCSTRING("generate_mipmaps","\xa1","\x1f","\xa0","\x3c"),
	HX_HCSTRING("bind","\xbd","\xf5","\x16","\x41"),
	HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"),
	HX_HCSTRING("from_asset","\x1b","\x42","\xd0","\x30"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("create_texture_id","\xa2","\x73","\xce","\xf1"),
	HX_HCSTRING("apply_props","\x9f","\x7a","\xdd","\xcb"),
	HX_HCSTRING("apply_default_options","\x8f","\x92","\x0b","\xcf"),
	HX_HCSTRING("set_clamp_s","\x12","\x22","\xff","\xf5"),
	HX_HCSTRING("set_clamp_t","\x13","\x22","\xff","\xf5"),
	HX_HCSTRING("set_filter_min","\x08","\x23","\x9f","\xf6"),
	HX_HCSTRING("set_filter_mag","\x09","\x1c","\x9f","\xf6"),
	HX_HCSTRING("apply_clamp","\x2a","\x06","\xa6","\x4b"),
	HX_HCSTRING("apply_filter","\xa9","\x55","\xc8","\x65"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Texture_obj::default_filter,"default_filter");
	HX_MARK_MEMBER_NAME(Texture_obj::default_clamp,"default_clamp");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Texture_obj::default_filter,"default_filter");
	HX_VISIT_MEMBER_NAME(Texture_obj::default_clamp,"default_clamp");
};

#endif

hx::Class Texture_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("default_filter","\xb6","\x62","\x9b","\x55"),
	HX_HCSTRING("default_clamp","\xbd","\x19","\x24","\x0a"),
	HX_HCSTRING("max_size","\x7c","\x9f","\x54","\x16"),
	HX_HCSTRING("dump_asset_info","\xc8","\x98","\x3d","\x87"),
	HX_HCSTRING("type_name","\x30","\x79","\xbb","\x2d"),
	HX_HCSTRING("filter_name","\x72","\x73","\x95","\x18"),
	HX_HCSTRING("clamp_name","\x4f","\x6d","\x6e","\x7f"),
	::String(null()) };

void Texture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Texture","\xdc","\x58","\x05","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Texture_obj::__GetStatic;
	__mClass->mSetStaticField = &Texture_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Texture_obj >;
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

void Texture_obj::__boot()
{
	default_filter= (int)9729;
	default_clamp= (int)33071;
}

} // end namespace phoenix
