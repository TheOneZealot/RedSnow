#include <hxcpp.h>

#include "hxMath.h"
#include "linc_opengl.h"
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_CodePointIter
#include <luxe/utils/unifill/CodePointIter.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Unifill
#include <luxe/utils/unifill/Unifill.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill__Utf8_Utf8_Impl_
#include <luxe/utils/unifill/_Utf8/Utf8_Impl_.h>
#endif
#ifndef INCLUDED_opengl_GLObject
#include <opengl/GLObject.h>
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
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Spatial
#include <phoenix/Spatial.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
#endif
#ifndef INCLUDED_phoenix_Uniforms
#include <phoenix/Uniforms.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix__Shader_Uniform_Float
#include <phoenix/_Shader/Uniform_Float.h>
#endif
#ifndef INCLUDED_phoenix__Shader_Uniform_phoenix_Color
#include <phoenix/_Shader/Uniform_phoenix_Color.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextGeometry
#include <phoenix/geometry/TextGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoord
#include <phoenix/geometry/TextureCoord.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoordSet
#include <phoenix/geometry/TextureCoordSet.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
namespace phoenix{
namespace geometry{

Void TextGeometry_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.geometry.TextGeometry","new",0x85dc3eae,"phoenix.geometry.TextGeometry.new","phoenix/geometry/TextGeometry.hx",52,0x3cba14a2)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(108)
	this->setup_ = true;
	HX_STACK_LINE(107)
	this->dirty_align = true;
	HX_STACK_LINE(106)
	this->dirty_sizing = true;
	HX_STACK_LINE(104)
	this->point_ratio = ((Float)1);
	HX_STACK_LINE(103)
	this->text_h_h = ((Float)0);
	HX_STACK_LINE(102)
	this->text_h_w = ((Float)0);
	HX_STACK_LINE(88)
	this->text_height = ((Float)0);
	HX_STACK_LINE(87)
	this->text_width = ((Float)0);
	HX_STACK_LINE(81)
	this->glow_amount = ((Float)0);
	HX_STACK_LINE(80)
	this->glow_threshold = ((Float)0);
	HX_STACK_LINE(77)
	this->outline = ((Float)0);
	HX_STACK_LINE(75)
	this->thickness = ((Float)0.5);
	HX_STACK_LINE(74)
	this->smoothness = ((Float)0.75);
	HX_STACK_LINE(72)
	this->unique = false;
	HX_STACK_LINE(71)
	this->sdf = false;
	HX_STACK_LINE(64)
	this->bounds_wrap = false;
	HX_STACK_LINE(61)
	this->letter_snapping = false;
	HX_STACK_LINE(60)
	this->letter_spacing = ((Float)0.0);
	HX_STACK_LINE(59)
	this->line_spacing = ((Float)0.0);
	HX_STACK_LINE(58)
	this->point_size = ((Float)32.0);
	HX_STACK_LINE(56)
	this->text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(116)
	this->options = _options;
	HX_STACK_LINE(117)
	::luxe::Emitter tmp = ::luxe::Emitter_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	this->emitter = tmp;
	HX_STACK_LINE(119)
	{
		HX_STACK_LINE(119)
		Dynamic tmp1 = this->options;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		if ((tmp2)){
			HX_STACK_LINE(230)
			::String tmp3 = HX_HCSTRING(" ( TextGeometry requires non-null options","\x8e","\xba","\x4d","\x1a");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(230)
			::String tmp4 = (tmp3 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(119)
			::String tmp5 = (HX_HCSTRING("options was null","\xe0","\x49","\xa9","\x08") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(119)
			::luxe::DebugError tmp6 = ::luxe::DebugError_obj::null_assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(119)
			HX_STACK_DO_THROW(tmp6);
		}
	}
	HX_STACK_LINE(124)
	Dynamic tmp1 = this->options;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	Dynamic tmp2 = tmp1->__Field(HX_HCSTRING("sdf","\xb5","\x9a","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(124)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(124)
	if ((tmp3)){
		HX_STACK_LINE(124)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(124)
		this->sdf = tmp4->__Field(HX_HCSTRING("sdf","\xb5","\x9a","\x57","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(126)
	::phoenix::BitmapFont tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(126)
	{
		HX_STACK_LINE(126)
		Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(126)
		::phoenix::BitmapFont tmp6 = tmp5->__Field(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(126)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(126)
		if ((tmp7)){
			HX_STACK_LINE(126)
			::phoenix::Renderer tmp8 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(126)
			Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(126)
			tmp9->__FieldRef(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")) = tmp8->font;
		}
		HX_STACK_LINE(126)
		Dynamic tmp8 = this->options;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(126)
		tmp4 = tmp8->__Field(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"), hx::paccDynamic );
	}
	HX_STACK_LINE(126)
	this->set_font(tmp4);
	HX_STACK_LINE(128)
	::phoenix::BitmapFont tmp5 = this->font;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(128)
	::phoenix::Renderer tmp6 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(128)
	::phoenix::BitmapFont tmp7 = tmp6->font;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(128)
	bool tmp8 = (tmp5 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(128)
	if ((tmp8)){
		HX_STACK_LINE(128)
		this->sdf = true;
	}
	HX_STACK_LINE(134)
	Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(134)
	::phoenix::Shader tmp10 = tmp9->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(134)
	bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(134)
	if ((tmp11)){
		HX_STACK_LINE(135)
		bool tmp12 = this->sdf;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(135)
		if ((tmp12)){
			HX_STACK_LINE(136)
			::phoenix::Renderer tmp13 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(136)
			Dynamic tmp14 = tmp13->shaders->__Field(HX_HCSTRING("bitmapfont","\x3e","\x91","\x44","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(136)
			Dynamic tmp15 = this->options;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(136)
			tmp15->__FieldRef(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")) = tmp14->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(138)
			::phoenix::Renderer tmp13 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(138)
			Dynamic tmp14 = tmp13->shaders->__Field(HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(138)
			Dynamic tmp15 = this->options;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(138)
			tmp15->__FieldRef(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")) = tmp14->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );
		}
	}
	else{
		HX_STACK_LINE(142)
		Dynamic tmp12 = this->options;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(142)
		::phoenix::Shader tmp13 = tmp12->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(142)
		::phoenix::Renderer tmp14 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(142)
		Dynamic tmp15 = tmp14->shaders->__Field(HX_HCSTRING("bitmapfont","\x3e","\x91","\x44","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(142)
		::phoenix::Shader tmp16 = tmp15->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(142)
		bool tmp17 = (tmp13 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(142)
		if ((tmp17)){
			HX_STACK_LINE(143)
			this->unique = true;
		}
	}
	HX_STACK_LINE(147)
	Dynamic tmp12 = this->options;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(147)
	tmp12->__FieldRef(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88")) = (int)4;
	HX_STACK_LINE(149)
	Dynamic tmp13 = this->options;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(149)
	super::__construct(tmp13);
	HX_STACK_LINE(153)
	this->cache = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(154)
	this->line_widths = Array_obj< Float >::__new();
	HX_STACK_LINE(155)
	this->line_offsets = Array_obj< ::Dynamic >::__new().Add(Array_obj< Float >::__new()).Add(Array_obj< Float >::__new());
	HX_STACK_LINE(156)
	this->lines = Array_obj< ::String >::__new();
	HX_STACK_LINE(157)
	::phoenix::Color tmp14 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(157)
	this->set_outline_color(tmp14);
	HX_STACK_LINE(158)
	::phoenix::Color tmp15 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(158)
	this->set_glow_color(tmp15);
	HX_STACK_LINE(160)
	this->default_options();
	HX_STACK_LINE(162)
	this->setup_ = false;
}
;
	return null();
}

//TextGeometry_obj::~TextGeometry_obj() { }

Dynamic TextGeometry_obj::__CreateEmpty() { return  new TextGeometry_obj; }
hx::ObjectPtr< TextGeometry_obj > TextGeometry_obj::__new(Dynamic _options)
{  hx::ObjectPtr< TextGeometry_obj > _result_ = new TextGeometry_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic TextGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextGeometry_obj > _result_ = new TextGeometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void TextGeometry_obj::tidy( ){
{
		HX_STACK_FRAME("phoenix.geometry.TextGeometry","tidy",0x9ed4da3c,"phoenix.geometry.TextGeometry.tidy","phoenix/geometry/TextGeometry.hx",170,0x3cba14a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(172)
		int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		Float tmp1 = (Float(tmp) / Float((int)6));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		int tmp2 = ::Math_obj::floor(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(172)
		int _vertidx = tmp2;		HX_STACK_VAR(_vertidx,"_vertidx");
		HX_STACK_LINE(173)
		int tmp3 = this->cache->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(173)
		int tmp4 = _vertidx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(173)
		int tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(173)
		int _diff = tmp5;		HX_STACK_VAR(_diff,"_diff");
		HX_STACK_LINE(175)
		bool tmp6 = (_diff > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(175)
		if ((tmp6)){
			HX_STACK_LINE(179)
			int tmp7 = _vertidx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(179)
			int tmp8 = _diff;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(179)
			Array< ::Dynamic > extra = this->cache->splice(tmp7,tmp8);		HX_STACK_VAR(extra,"extra");
			HX_STACK_LINE(180)
			int c = extra->length;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(181)
			while((true)){
				HX_STACK_LINE(181)
				bool tmp9 = (c > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(181)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(181)
				if ((tmp10)){
					HX_STACK_LINE(181)
					break;
				}
				HX_STACK_LINE(182)
				(c)--;
				HX_STACK_LINE(183)
				Array< ::Dynamic > vert = extra->pop().StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(vert,"vert");
				HX_STACK_LINE(184)
				vert = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextGeometry_obj,tidy,(void))

Void TextGeometry_obj::drop( Dynamic __o_remove){
Dynamic remove = __o_remove.Default(true);
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","drop",0x94484e21,"phoenix.geometry.TextGeometry.drop","phoenix/geometry/TextGeometry.hx",194,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(remove,"remove")
{
		HX_STACK_LINE(196)
		this->set_text(null());
		HX_STACK_LINE(197)
		this->set_font(null());
		HX_STACK_LINE(198)
		this->set_bounds(null());
		HX_STACK_LINE(199)
		this->set_outline_color(null());
		HX_STACK_LINE(200)
		this->set_glow_color(null());
		HX_STACK_LINE(201)
		bool tmp = (this->line_widths != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(201)
		if ((tmp)){
			HX_STACK_LINE(202)
			int tmp1 = this->line_widths->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(202)
			this->line_widths->splice((int)0,tmp1);
			HX_STACK_LINE(203)
			this->line_widths = null();
		}
		HX_STACK_LINE(205)
		bool tmp1 = (this->line_offsets != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		if ((tmp1)){
			HX_STACK_LINE(206)
			int tmp2 = this->line_offsets->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(206)
			this->line_offsets->splice((int)0,tmp2);
			HX_STACK_LINE(207)
			this->line_offsets = null();
		}
		HX_STACK_LINE(209)
		bool tmp2 = (this->lines != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(209)
		if ((tmp2)){
			HX_STACK_LINE(210)
			int tmp3 = this->lines->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(210)
			this->lines->splice((int)0,tmp3);
			HX_STACK_LINE(211)
			this->lines = null();
		}
		HX_STACK_LINE(213)
		this->emitter = null();
		HX_STACK_LINE(214)
		this->options = null();
		HX_STACK_LINE(215)
		bool tmp3 = (this->cache != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(215)
		if ((tmp3)){
			HX_STACK_LINE(216)
			while((true)){
				HX_STACK_LINE(216)
				int tmp4 = this->cache->length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(216)
				bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(216)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(216)
				if ((tmp6)){
					HX_STACK_LINE(216)
					break;
				}
				HX_STACK_LINE(217)
				Array< ::Dynamic > c = this->cache->pop().StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(218)
				while((true)){
					HX_STACK_LINE(218)
					bool tmp7 = (c->length > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(218)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(218)
					if ((tmp8)){
						HX_STACK_LINE(218)
						break;
					}
					HX_STACK_LINE(219)
					::phoenix::geometry::Vertex tmp9 = c->pop().StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(219)
					::phoenix::geometry::Vertex v = tmp9;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(220)
					{
						HX_STACK_LINE(220)
						v->pos = null();
						HX_STACK_LINE(220)
						v->color = null();
						HX_STACK_LINE(220)
						v->normal = null();
						HX_STACK_LINE(220)
						{
							HX_STACK_LINE(220)
							::phoenix::geometry::TextureCoordSet _this = v->uv;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(220)
							_this->uv0 = null();
							HX_STACK_LINE(220)
							_this->uv1 = null();
							HX_STACK_LINE(220)
							_this->uv2 = null();
							HX_STACK_LINE(220)
							_this->uv3 = null();
							HX_STACK_LINE(220)
							_this->uv4 = null();
							HX_STACK_LINE(220)
							_this->uv5 = null();
							HX_STACK_LINE(220)
							_this->uv6 = null();
							HX_STACK_LINE(220)
							_this->uv7 = null();
						}
						HX_STACK_LINE(220)
						v->uv = null();
					}
					HX_STACK_LINE(221)
					v = null();
				}
				HX_STACK_LINE(223)
				c = null();
			}
			HX_STACK_LINE(225)
			this->cache = null();
		}
		HX_STACK_LINE(228)
		Dynamic tmp4 = remove;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(228)
		this->super::drop(tmp4);
	}
return null();
}


Void TextGeometry_obj::default_options( ){
{
		HX_STACK_FRAME("phoenix.geometry.TextGeometry","default_options",0x112e39ee,"phoenix.geometry.TextGeometry.default_options","phoenix/geometry/TextGeometry.hx",233,0x3cba14a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(242)
		::phoenix::BitmapFont tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		::phoenix::Texture tmp1 = tmp->pages->get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(242)
		::phoenix::Texture tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(242)
		this->set_texture(tmp2);
		HX_STACK_LINE(246)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(246)
		Dynamic tmp4 = tmp3->__Field(HX_HCSTRING("letter_snapping","\x75","\xb3","\xb8","\xee"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(246)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(246)
		if ((tmp5)){
			HX_STACK_LINE(246)
			Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(246)
			Dynamic tmp7 = tmp6->__Field(HX_HCSTRING("letter_snapping","\x75","\xb3","\xb8","\xee"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(246)
			this->set_letter_snapping(tmp7);
		}
		HX_STACK_LINE(247)
		Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(247)
		Dynamic tmp7 = tmp6->__Field(HX_HCSTRING("letter_spacing","\xea","\x8f","\xec","\x6d"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(247)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(247)
		if ((tmp8)){
			HX_STACK_LINE(247)
			Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(247)
			Dynamic tmp10 = tmp9->__Field(HX_HCSTRING("letter_spacing","\xea","\x8f","\xec","\x6d"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(247)
			this->set_letter_spacing(tmp10);
		}
		HX_STACK_LINE(248)
		Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(248)
		Dynamic tmp10 = tmp9->__Field(HX_HCSTRING("line_spacing","\xf8","\xb8","\xad","\x3c"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(248)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(248)
		if ((tmp11)){
			HX_STACK_LINE(248)
			Dynamic tmp12 = this->options;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(248)
			Dynamic tmp13 = tmp12->__Field(HX_HCSTRING("line_spacing","\xf8","\xb8","\xad","\x3c"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(248)
			this->set_line_spacing(tmp13);
		}
		HX_STACK_LINE(249)
		Dynamic tmp12 = this->options;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(249)
		Dynamic tmp13 = tmp12->__Field(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(249)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(249)
		if ((tmp14)){
			HX_STACK_LINE(249)
			Dynamic tmp15 = this->options;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(249)
			Dynamic tmp16 = tmp15->__Field(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(249)
			this->set_point_size(tmp16);
		}
		HX_STACK_LINE(251)
		Dynamic tmp15 = this->options;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(251)
		::phoenix::Rectangle tmp16 = tmp15->__Field(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(251)
		bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(251)
		if ((tmp17)){
			HX_STACK_LINE(251)
			Dynamic tmp18 = this->options;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(251)
			::phoenix::Rectangle tmp19 = tmp18->__Field(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(251)
			this->set_bounds(tmp19);
		}
		HX_STACK_LINE(252)
		Dynamic tmp18 = this->options;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(252)
		Dynamic tmp19 = tmp18->__Field(HX_HCSTRING("bounds_wrap","\x14","\x47","\xee","\xec"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(252)
		bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(252)
		if ((tmp20)){
			HX_STACK_LINE(252)
			Dynamic tmp21 = this->options;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(252)
			Dynamic tmp22 = tmp21->__Field(HX_HCSTRING("bounds_wrap","\x14","\x47","\xee","\xec"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(252)
			this->set_bounds_wrap(tmp22);
		}
		HX_STACK_LINE(254)
		{
			HX_STACK_LINE(254)
			Dynamic tmp21 = this->options;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(254)
			Dynamic tmp22 = tmp21->__Field(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(254)
			bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(254)
			if ((tmp23)){
				HX_STACK_LINE(254)
				Dynamic tmp24 = this->options;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(254)
				tmp24->__FieldRef(HX_HCSTRING("align","\xc5","\x56","\x91","\x21")) = (int)0;
			}
			HX_STACK_LINE(254)
			Dynamic tmp24 = this->options;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(254)
			tmp24->__Field(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"), hx::paccDynamic );
		}
		HX_STACK_LINE(255)
		{
			HX_STACK_LINE(255)
			Dynamic tmp21 = this->options;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(255)
			Dynamic tmp22 = tmp21->__Field(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(255)
			bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(255)
			if ((tmp23)){
				HX_STACK_LINE(255)
				Dynamic tmp24 = this->options;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(255)
				tmp24->__FieldRef(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53")) = (int)3;
			}
			HX_STACK_LINE(255)
			Dynamic tmp24 = this->options;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(255)
			tmp24->__Field(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53"), hx::paccDynamic );
		}
		HX_STACK_LINE(257)
		Dynamic tmp21 = this->options;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(257)
		Dynamic tmp22 = tmp21->__Field(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(257)
		this->set_align(tmp22);
		HX_STACK_LINE(258)
		Dynamic tmp23 = this->options;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(258)
		Dynamic tmp24 = tmp23->__Field(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(258)
		this->set_align_vertical(tmp24);
		HX_STACK_LINE(263)
		Dynamic tmp25 = this->options;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(263)
		Dynamic tmp26 = tmp25->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(263)
		bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(263)
		if ((tmp27)){
			HX_STACK_LINE(263)
			Dynamic tmp28 = this->options;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(263)
			Dynamic tmp29 = tmp28->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(263)
			this->set_thickness(tmp29);
		}
		HX_STACK_LINE(264)
		Dynamic tmp28 = this->options;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(264)
		Dynamic tmp29 = tmp28->__Field(HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(264)
		bool tmp30 = (tmp29 != null());		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(264)
		if ((tmp30)){
			HX_STACK_LINE(264)
			Dynamic tmp31 = this->options;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(264)
			Dynamic tmp32 = tmp31->__Field(HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(264)
			this->set_smoothness(tmp32);
		}
		HX_STACK_LINE(266)
		Dynamic tmp31 = this->options;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(266)
		Dynamic tmp32 = tmp31->__Field(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(266)
		bool tmp33 = (tmp32 != null());		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(266)
		if ((tmp33)){
			HX_STACK_LINE(266)
			Dynamic tmp34 = this->options;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(266)
			Dynamic tmp35 = tmp34->__Field(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(266)
			this->set_outline(tmp35);
		}
		HX_STACK_LINE(267)
		Dynamic tmp34 = this->options;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(267)
		::phoenix::Color tmp35 = tmp34->__Field(HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(267)
		bool tmp36 = (tmp35 != null());		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(267)
		if ((tmp36)){
			HX_STACK_LINE(267)
			Dynamic tmp37 = this->options;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(267)
			::phoenix::Color tmp38 = tmp37->__Field(HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(267)
			this->set_outline_color(tmp38);
		}
		HX_STACK_LINE(269)
		Dynamic tmp37 = this->options;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(269)
		Dynamic tmp38 = tmp37->__Field(HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(269)
		bool tmp39 = (tmp38 != null());		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(269)
		if ((tmp39)){
			HX_STACK_LINE(269)
			Dynamic tmp40 = this->options;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(269)
			Dynamic tmp41 = tmp40->__Field(HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(269)
			this->set_glow_threshold(tmp41);
		}
		HX_STACK_LINE(270)
		Dynamic tmp40 = this->options;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(270)
		Dynamic tmp41 = tmp40->__Field(HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(270)
		bool tmp42 = (tmp41 != null());		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(270)
		if ((tmp42)){
			HX_STACK_LINE(270)
			Dynamic tmp43 = this->options;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(270)
			Dynamic tmp44 = tmp43->__Field(HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(270)
			this->set_glow_amount(tmp44);
		}
		HX_STACK_LINE(271)
		Dynamic tmp43 = this->options;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(271)
		::phoenix::Color tmp44 = tmp43->__Field(HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(271)
		bool tmp45 = (tmp44 != null());		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(271)
		if ((tmp45)){
			HX_STACK_LINE(271)
			Dynamic tmp46 = this->options;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(271)
			::phoenix::Color tmp47 = tmp46->__Field(HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"), hx::paccDynamic );		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(271)
			this->set_glow_color(tmp47);
		}
		HX_STACK_LINE(273)
		bool tmp46 = this->sdf;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(273)
		if ((tmp46)){
			HX_STACK_LINE(273)
			this->flush_uniforms();
		}
		HX_STACK_LINE(276)
		Dynamic tmp47 = this->options;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(276)
		::String tmp48 = tmp47->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(276)
		bool tmp49 = (tmp48 != null());		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(276)
		if ((tmp49)){
			HX_STACK_LINE(276)
			Dynamic tmp50 = this->options;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(276)
			::String tmp51 = tmp50->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(276)
			this->set_text(tmp51);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextGeometry_obj,default_options,(void))

::String TextGeometry_obj::set_text( ::String _text){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_text",0x5a10d89c,"phoenix.geometry.TextGeometry.set_text","phoenix/geometry/TextGeometry.hx",281,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_text,"_text")
	HX_STACK_LINE(283)
	bool tmp = (_text == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(283)
	if ((tmp)){
		HX_STACK_LINE(285)
		_text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(289)
	::String tmp1 = this->text;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(289)
	::String tmp2 = _text;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(289)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(289)
	if ((tmp3)){
		HX_STACK_LINE(292)
		this->text = _text;
		HX_STACK_LINE(294)
		::String tmp4 = this->text;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(294)
		bool tmp5 = (tmp4 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(294)
		if ((tmp5)){
			HX_STACK_LINE(296)
			this->set_dirty_sizing(true);
			HX_STACK_LINE(297)
			this->update_text();
		}
		else{
			HX_STACK_LINE(300)
			int tmp6 = this->vertices->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(300)
			this->vertices->splice((int)0,tmp6);
		}
	}
	HX_STACK_LINE(305)
	::String tmp4 = this->text;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(305)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_text,return )

::String TextGeometry_obj::stats( ){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","stats",0xcf4693ed,"phoenix.geometry.TextGeometry.stats","phoenix/geometry/TextGeometry.hx",310,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(311)
	int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(311)
	Float tmp1 = (Float(tmp) / Float((int)6));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(311)
	::String tmp2 = (HX_HCSTRING("letters:","\xcd","\x96","\x3a","\xf8") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(311)
	::String tmp3 = (tmp2 + HX_HCSTRING(" / cache:","\xa9","\x4b","\x11","\xc2"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(311)
	int tmp4 = this->cache->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(311)
	::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(311)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(TextGeometry_obj,stats,return )

bool TextGeometry_obj::update_sizes( ){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","update_sizes",0x6399da8e,"phoenix.geometry.TextGeometry.update_sizes","phoenix/geometry/TextGeometry.hx",315,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(317)
	bool tmp = this->dirty_sizing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(317)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(317)
	if ((tmp1)){
		HX_STACK_LINE(317)
		return false;
	}
	HX_STACK_LINE(320)
	::EReg tmp2 = ::phoenix::geometry::TextGeometry_obj::tab_regex;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(320)
	::String tmp3 = this->text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(320)
	::String tmp4 = tmp2->replace(tmp3,HX_HCSTRING("    ","\x00","\x38","\x3f","\x15"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(320)
	::String drawn_text = tmp4;		HX_STACK_VAR(drawn_text,"drawn_text");
	HX_STACK_LINE(321)
	bool tmp5 = this->bounds_wrap;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(321)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(321)
	if ((tmp5)){
		HX_STACK_LINE(321)
		::phoenix::Rectangle tmp7 = this->bounds;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(321)
		::phoenix::Rectangle tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(321)
		tmp6 = (tmp8 != null());
	}
	else{
		HX_STACK_LINE(321)
		tmp6 = false;
	}
	HX_STACK_LINE(321)
	if ((tmp6)){
		HX_STACK_LINE(322)
		::phoenix::BitmapFont tmp7 = this->font;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(322)
		::String tmp8 = drawn_text;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(322)
		::phoenix::Rectangle tmp9 = this->bounds;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(322)
		Float tmp10 = this->point_size;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(322)
		Float tmp11 = this->letter_spacing;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(322)
		::String tmp12 = tmp7->wrap_string_to_bounds(tmp8,tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(322)
		drawn_text = tmp12;
	}
	HX_STACK_LINE(325)
	int tmp7 = this->lines->length;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(325)
	this->lines->splice((int)0,tmp7);
	HX_STACK_LINE(326)
	this->lines = drawn_text.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
	HX_STACK_LINE(328)
	int tmp8 = this->line_widths->length;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(328)
	this->line_widths->splice((int)0,tmp8);
	HX_STACK_LINE(330)
	Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(330)
	{
		HX_STACK_LINE(330)
		::phoenix::BitmapFont tmp10 = this->font;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(330)
		::phoenix::BitmapFont _this = tmp10;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(330)
		Float tmp11 = this->point_size;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(330)
		Float _point_size = tmp11;		HX_STACK_VAR(_point_size,"_point_size");
		HX_STACK_LINE(330)
		Float tmp12 = this->letter_spacing;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(330)
		Float _letter_spc = tmp12;		HX_STACK_VAR(_letter_spc,"_letter_spc");
		HX_STACK_LINE(330)
		Array< Float > _line_widths = this->line_widths;		HX_STACK_VAR(_line_widths,"_line_widths");
		HX_STACK_LINE(330)
		Float _max_w = ((Float)0.0);		HX_STACK_VAR(_max_w,"_max_w");
		HX_STACK_LINE(330)
		bool tmp13 = (_line_widths != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(330)
		bool _push_widths = tmp13;		HX_STACK_VAR(_push_widths,"_push_widths");
		HX_STACK_LINE(330)
		::String tmp14 = drawn_text;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(330)
		Array< ::String > _lines = ::luxe::utils::unifill::Unifill_obj::uSplit(tmp14,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_lines,"_lines");
		HX_STACK_LINE(330)
		{
			HX_STACK_LINE(330)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(330)
			while((true)){
				HX_STACK_LINE(330)
				bool tmp15 = (_g < _lines->length);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(330)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(330)
				if ((tmp16)){
					HX_STACK_LINE(330)
					break;
				}
				HX_STACK_LINE(330)
				::String tmp17 = _lines->__get(_g);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(330)
				::String _line = tmp17;		HX_STACK_VAR(_line,"_line");
				HX_STACK_LINE(330)
				++(_g);
				HX_STACK_LINE(330)
				::String tmp18 = _line;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(330)
				Float tmp19 = _point_size;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(330)
				Float tmp20 = _letter_spc;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(330)
				Float tmp21 = _this->width_of_line(tmp18,tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(330)
				Float _cur_w = tmp21;		HX_STACK_VAR(_cur_w,"_cur_w");
				HX_STACK_LINE(330)
				Float tmp22 = _max_w;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(330)
				Float tmp23 = _cur_w;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(330)
				Float tmp24 = ::Math_obj::max(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(330)
				_max_w = tmp24;
				HX_STACK_LINE(330)
				bool tmp25 = _push_widths;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(330)
				if ((tmp25)){
					HX_STACK_LINE(330)
					Float tmp26 = _cur_w;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(330)
					_line_widths->push(tmp26);
				}
			}
		}
		HX_STACK_LINE(330)
		tmp9 = _max_w;
	}
	HX_STACK_LINE(330)
	this->text_width = tmp9;
	HX_STACK_LINE(331)
	Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(331)
	{
		HX_STACK_LINE(331)
		::phoenix::BitmapFont tmp11 = this->font;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(331)
		::phoenix::BitmapFont _this = tmp11;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(331)
		Float tmp12 = this->point_size;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(331)
		Float tmp13 = _this->info->__Field(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(331)
		Float tmp14 = (Float(tmp12) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(331)
		Float _ratio = tmp14;		HX_STACK_VAR(_ratio,"_ratio");
		HX_STACK_LINE(331)
		int tmp15 = this->lines->length;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(331)
		Float tmp16 = _this->info->__Field(HX_HCSTRING("line_height","\x12","\xa8","\xc5","\xe1"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(331)
		Float tmp17 = this->line_spacing;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(331)
		Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(331)
		Float tmp19 = _ratio;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(331)
		Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(331)
		tmp10 = (tmp15 * tmp20);
	}
	HX_STACK_LINE(331)
	this->text_height = tmp10;
	HX_STACK_LINE(332)
	Float tmp11 = this->text_width;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(332)
	Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(332)
	this->text_h_w = tmp12;
	HX_STACK_LINE(333)
	Float tmp13 = this->text_height;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(333)
	Float tmp14 = (Float(tmp13) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(333)
	this->text_h_h = tmp14;
	HX_STACK_LINE(334)
	Float tmp15 = this->point_size;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(334)
	::phoenix::BitmapFont tmp16 = this->font;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(334)
	Float tmp17 = tmp16->info->__Field(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(334)
	Float tmp18 = (Float(tmp15) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(334)
	this->point_ratio = tmp18;
	HX_STACK_LINE(336)
	this->set_dirty_sizing(false);
	HX_STACK_LINE(338)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(TextGeometry_obj,update_sizes,return )

Void TextGeometry_obj::update_text( ){
{
		HX_STACK_FRAME("phoenix.geometry.TextGeometry","update_text",0xa0aa4e31,"phoenix.geometry.TextGeometry.update_text","phoenix/geometry/TextGeometry.hx",344,0x3cba14a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(344)
		::phoenix::geometry::TextGeometry _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(346)
		Float _pos_x = ((Float)0.0);		HX_STACK_VAR(_pos_x,"_pos_x");
		HX_STACK_LINE(347)
		Float _pos_y = ((Float)0.0);		HX_STACK_VAR(_pos_y,"_pos_y");
		HX_STACK_LINE(348)
		::phoenix::Rectangle tmp = this->bounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(348)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(348)
		bool _bounds_based = tmp1;		HX_STACK_VAR(_bounds_based,"_bounds_based");
		HX_STACK_LINE(350)
		bool tmp2 = _bounds_based;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(350)
		if ((tmp2)){
			HX_STACK_LINE(351)
			{
				HX_STACK_LINE(351)
				::phoenix::Transform tmp3 = this->transform;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(351)
				::phoenix::Vector tmp4 = tmp3->local->pos;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(351)
				::phoenix::Vector _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(351)
				::phoenix::Rectangle tmp5 = this->bounds;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(351)
				Float tmp6 = _pos_x = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(351)
				Float _x = tmp6;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(351)
				_this->x = _x;
				HX_STACK_LINE(351)
				bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(351)
				if ((tmp7)){
					HX_STACK_LINE(351)
					_this->x;
				}
				else{
					HX_STACK_LINE(351)
					bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(351)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(351)
					if ((tmp8)){
						HX_STACK_LINE(351)
						bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(351)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(351)
						tmp9 = !(tmp11);
					}
					else{
						HX_STACK_LINE(351)
						tmp9 = false;
					}
					HX_STACK_LINE(351)
					if ((tmp9)){
						HX_STACK_LINE(351)
						Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(351)
						_this->listen_x(tmp10);
					}
					HX_STACK_LINE(351)
					_this->x;
				}
			}
			HX_STACK_LINE(352)
			{
				HX_STACK_LINE(352)
				::phoenix::Transform tmp3 = this->transform;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(352)
				::phoenix::Vector tmp4 = tmp3->local->pos;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(352)
				::phoenix::Vector _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(352)
				::phoenix::Rectangle tmp5 = this->bounds;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(352)
				Float tmp6 = _pos_y = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(352)
				Float _y = tmp6;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(352)
				_this->y = _y;
				HX_STACK_LINE(352)
				bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(352)
				if ((tmp7)){
					HX_STACK_LINE(352)
					_this->y;
				}
				else{
					HX_STACK_LINE(352)
					bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(352)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(352)
					if ((tmp8)){
						HX_STACK_LINE(352)
						bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(352)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(352)
						tmp9 = !(tmp11);
					}
					else{
						HX_STACK_LINE(352)
						tmp9 = false;
					}
					HX_STACK_LINE(352)
					if ((tmp9)){
						HX_STACK_LINE(352)
						Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(352)
						_this->listen_y(tmp10);
					}
					HX_STACK_LINE(352)
					_this->y;
				}
			}
		}
		HX_STACK_LINE(355)
		Float _cur_x = ((Float)0.0);		HX_STACK_VAR(_cur_x,"_cur_x");
		HX_STACK_LINE(356)
		Float _cur_y = ((Float)0.0);		HX_STACK_VAR(_cur_y,"_cur_y");
		HX_STACK_LINE(357)
		int _line_idx = (int)0;		HX_STACK_VAR(_line_idx,"_line_idx");
		HX_STACK_LINE(358)
		int _total_idx = (int)0;		HX_STACK_VAR(_total_idx,"_total_idx");
		HX_STACK_LINE(359)
		bool _is_char = true;		HX_STACK_VAR(_is_char,"_is_char");
		HX_STACK_LINE(360)
		bool tmp3 = this->update_sizes();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(360)
		bool _was_dirty = tmp3;		HX_STACK_VAR(_was_dirty,"_was_dirty");
		HX_STACK_LINE(367)
		{
			HX_STACK_LINE(367)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(367)
			Array< ::String > _g11 = this->lines;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(367)
			while((true)){
				HX_STACK_LINE(367)
				bool tmp4 = (_g1 < _g11->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(367)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(367)
				if ((tmp5)){
					HX_STACK_LINE(367)
					break;
				}
				HX_STACK_LINE(367)
				::String tmp6 = _g11->__get(_g1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(367)
				::String _line = tmp6;		HX_STACK_VAR(_line,"_line");
				HX_STACK_LINE(367)
				++(_g1);
				HX_STACK_LINE(371)
				Float _line_x_offset = ((Float)0.0);		HX_STACK_VAR(_line_x_offset,"_line_x_offset");
				HX_STACK_LINE(372)
				Float _line_y_offset = ((Float)0.0);		HX_STACK_VAR(_line_y_offset,"_line_y_offset");
				HX_STACK_LINE(374)
				bool tmp7 = this->dirty_align;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(374)
				if ((tmp7)){
					HX_STACK_LINE(376)
					bool tmp8 = _bounds_based;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(376)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(376)
					if ((tmp9)){
						HX_STACK_LINE(378)
						Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(378)
						{
							HX_STACK_LINE(378)
							int tmp11 = this->align;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(378)
							int _g2 = tmp11;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(378)
							int tmp12 = _g2;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(378)
							switch( (int)(tmp12)){
								case (int)2: {
									HX_STACK_LINE(379)
									Float tmp13 = this->line_widths->__get(_line_idx);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(379)
									Float tmp14 = (Float(tmp13) / Float(((Float)2.0)));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(379)
									tmp10 = -(tmp14);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(380)
									Float tmp13 = this->line_widths->__get(_line_idx);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(380)
									tmp10 = -(tmp13);
								}
								;break;
								default: {
									HX_STACK_LINE(381)
									tmp10 = ((Float)0.0);
								}
							}
						}
						HX_STACK_LINE(378)
						_line_x_offset = tmp10;
						HX_STACK_LINE(384)
						Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(384)
						{
							HX_STACK_LINE(384)
							int tmp12 = this->align_vertical;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(384)
							int _g2 = tmp12;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(384)
							int tmp13 = _g2;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(384)
							switch( (int)(tmp13)){
								case (int)2: {
									HX_STACK_LINE(385)
									Float tmp14 = this->text_h_h;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(385)
									tmp11 = -(tmp14);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(386)
									Float tmp14 = this->text_height;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(386)
									tmp11 = -(tmp14);
								}
								;break;
								default: {
									HX_STACK_LINE(387)
									tmp11 = ((Float)0.0);
								}
							}
						}
						HX_STACK_LINE(384)
						_line_y_offset = tmp11;
					}
					else{
						HX_STACK_LINE(392)
						Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(392)
						{
							HX_STACK_LINE(392)
							int tmp11 = this->align;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(392)
							int _g2 = tmp11;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(392)
							int tmp12 = _g2;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(392)
							switch( (int)(tmp12)){
								case (int)2: {
									HX_STACK_LINE(393)
									Float tmp13 = this->line_widths->__get(_line_idx);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(393)
									Float tmp14 = (Float(tmp13) / Float(((Float)2.0)));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(393)
									Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(393)
									::phoenix::Rectangle tmp16 = this->bounds;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(393)
									Float tmp17 = tmp16->w;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(393)
									Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(393)
									tmp10 = (tmp15 + tmp18);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(394)
									Float tmp13 = this->line_widths->__get(_line_idx);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(394)
									Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(394)
									::phoenix::Rectangle tmp15 = this->bounds;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(394)
									Float tmp16 = tmp15->w;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(394)
									tmp10 = (tmp14 + tmp16);
								}
								;break;
								default: {
									HX_STACK_LINE(395)
									tmp10 = ((Float)0.0);
								}
							}
						}
						HX_STACK_LINE(392)
						_line_x_offset = tmp10;
						HX_STACK_LINE(398)
						Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(398)
						{
							HX_STACK_LINE(398)
							int tmp12 = this->align_vertical;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(398)
							int _g2 = tmp12;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(398)
							int tmp13 = _g2;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(398)
							switch( (int)(tmp13)){
								case (int)2: {
									HX_STACK_LINE(399)
									::phoenix::Rectangle tmp14 = this->bounds;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(399)
									Float tmp15 = tmp14->h;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(399)
									Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(399)
									Float tmp17 = this->text_h_h;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(399)
									tmp11 = (tmp16 - tmp17);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(400)
									::phoenix::Rectangle tmp14 = this->bounds;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(400)
									Float tmp15 = tmp14->h;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(400)
									Float tmp16 = this->text_height;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(400)
									tmp11 = (tmp15 - tmp16);
								}
								;break;
								default: {
									HX_STACK_LINE(401)
									tmp11 = ((Float)0.0);
								}
							}
						}
						HX_STACK_LINE(398)
						_line_y_offset = tmp11;
					}
					HX_STACK_LINE(407)
					Float tmp10 = _line_x_offset;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(407)
					this->line_offsets->__get((int)0).StaticCast< Array< Float > >()[_line_idx] = tmp10;
					HX_STACK_LINE(408)
					Float tmp11 = _line_y_offset;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(408)
					this->line_offsets->__get((int)1).StaticCast< Array< Float > >()[_line_idx] = tmp11;
				}
				else{
					HX_STACK_LINE(412)
					Float tmp8 = this->line_offsets->__get((int)0).StaticCast< Array< Float > >()->__get(_line_idx);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(412)
					_line_x_offset = tmp8;
					HX_STACK_LINE(413)
					Float tmp9 = this->line_offsets->__get((int)1).StaticCast< Array< Float > >()->__get(_line_idx);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(413)
					_line_y_offset = tmp9;
				}
				HX_STACK_LINE(417)
				bool tmp8 = (_line_idx != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(417)
				if ((tmp8)){
					HX_STACK_LINE(418)
					Dynamic tmp9 = _g->font->info;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(418)
					Float tmp10 = tmp9->__Field(HX_HCSTRING("line_height","\x12","\xa8","\xc5","\xe1"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(418)
					Float tmp11 = _g->line_spacing;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(418)
					Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(418)
					Float tmp13 = _g->point_ratio;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(418)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(418)
					hx::AddEq(_cur_y,tmp14);
					HX_STACK_LINE(418)
					_cur_x = (int)0;
				}
				HX_STACK_LINE(423)
				int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
				HX_STACK_LINE(424)
				{
					HX_STACK_LINE(424)
					::luxe::utils::unifill::CodePointIter tmp9 = ::luxe::utils::unifill::CodePointIter_obj::__new(_line);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(424)
					::luxe::utils::unifill::CodePointIter _g2 = tmp9;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(424)
					while((true)){
						HX_STACK_LINE(424)
						bool tmp10 = (_g2->index < _g2->endIndex);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(424)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(424)
						if ((tmp11)){
							HX_STACK_LINE(424)
							break;
						}
						HX_STACK_LINE(424)
						int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							_g2->i = _g2->index;
							HX_STACK_LINE(424)
							int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(424)
							{
								HX_STACK_LINE(424)
								int tmp14 = _g2->index;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(424)
								int tmp15 = _g2->string.cca(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(424)
								int c = tmp15;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(424)
								bool tmp16 = (c < (int)192);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(424)
								if ((tmp16)){
									HX_STACK_LINE(424)
									tmp13 = (int)1;
								}
								else{
									HX_STACK_LINE(424)
									bool tmp17 = (c < (int)224);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(424)
									if ((tmp17)){
										HX_STACK_LINE(424)
										tmp13 = (int)2;
									}
									else{
										HX_STACK_LINE(424)
										bool tmp18 = (c < (int)240);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(424)
										if ((tmp18)){
											HX_STACK_LINE(424)
											tmp13 = (int)3;
										}
										else{
											HX_STACK_LINE(424)
											bool tmp19 = (c < (int)248);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(424)
											if ((tmp19)){
												HX_STACK_LINE(424)
												tmp13 = (int)4;
											}
											else{
												HX_STACK_LINE(424)
												tmp13 = (int)1;
											}
										}
									}
								}
							}
							HX_STACK_LINE(424)
							hx::AddEq(_g2->index,tmp13);
							HX_STACK_LINE(424)
							::String tmp14 = _g2->string;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(424)
							int tmp15 = _g2->i;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(424)
							int tmp16 = ::luxe::utils::unifill::_Utf8::Utf8_Impl__obj::codePointAt(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(424)
							tmp12 = tmp16;
						}
						HX_STACK_LINE(424)
						int _uglyph = tmp12;		HX_STACK_VAR(_uglyph,"_uglyph");
						HX_STACK_LINE(426)
						int _index = _uglyph;		HX_STACK_VAR(_index,"_index");
						HX_STACK_LINE(427)
						::phoenix::BitmapFont tmp13 = this->font;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(427)
						::haxe::ds::IntMap tmp14 = tmp13->info->__Field(HX_HCSTRING("chars","\xdd","\x9c","\xb3","\x45"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(427)
						int tmp15 = _index;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(427)
						Dynamic tmp16 = tmp14->get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(427)
						Dynamic _char = tmp16;		HX_STACK_VAR(_char,"_char");
						HX_STACK_LINE(428)
						bool tmp17 = (_char != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(428)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(428)
						if ((tmp17)){
							HX_STACK_LINE(428)
							tmp18 = (_index > (int)32);
						}
						else{
							HX_STACK_LINE(428)
							tmp18 = false;
						}
						HX_STACK_LINE(428)
						_is_char = tmp18;
						HX_STACK_LINE(432)
						bool tmp19 = _is_char;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(432)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(432)
						if ((tmp20)){
							HX_STACK_LINE(433)
							::phoenix::BitmapFont tmp21 = this->font;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(433)
							_char = tmp21->space_char;
						}
						HX_STACK_LINE(436)
						bool tmp21 = _is_char;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(436)
						if ((tmp21)){
							HX_STACK_LINE(439)
							Float tmp22 = (_line_x_offset + _cur_x);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(439)
							Float tmp23 = _char->__Field(HX_HCSTRING("xoffset","\x0b","\x42","\x4f","\xde"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(439)
							Float tmp24 = this->point_ratio;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(439)
							Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(439)
							Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(439)
							Float _quad_x = tmp26;		HX_STACK_VAR(_quad_x,"_quad_x");
							HX_STACK_LINE(440)
							Float tmp27 = (_line_y_offset + _cur_y);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(440)
							Float tmp28 = _char->__Field(HX_HCSTRING("yoffset","\xcc","\xb8","\xe4","\x07"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(440)
							Float tmp29 = this->point_ratio;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(440)
							Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(440)
							Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(440)
							Float _quad_y = tmp31;		HX_STACK_VAR(_quad_y,"_quad_y");
							HX_STACK_LINE(442)
							bool tmp32 = this->letter_snapping;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(442)
							if ((tmp32)){
								HX_STACK_LINE(444)
								Float tmp33 = _quad_x;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(444)
								int tmp34 = ::Math_obj::floor(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(444)
								_quad_x = tmp34;
								HX_STACK_LINE(445)
								Float tmp35 = _quad_y;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(445)
								int tmp36 = ::Math_obj::floor(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(445)
								_quad_y = tmp36;
							}
							HX_STACK_LINE(448)
							::phoenix::BitmapFont tmp33 = this->font;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(448)
							int tmp34 = _char->__Field(HX_HCSTRING("page","\x4f","\xda","\x51","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(448)
							::phoenix::Texture tmp35 = tmp33->pages->get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(448)
							::phoenix::Texture _page = tmp35;		HX_STACK_VAR(_page,"_page");
							HX_STACK_LINE(450)
							Float tmp36 = (Float(_char->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic )) / Float(_page->width_actual));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(450)
							Float _u1 = tmp36;		HX_STACK_VAR(_u1,"_u1");
							HX_STACK_LINE(451)
							Float tmp37 = (Float(_char->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic )) / Float(_page->height_actual));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(451)
							Float _v1 = tmp37;		HX_STACK_VAR(_v1,"_v1");
							HX_STACK_LINE(452)
							Float tmp38 = (_char->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ) + _char->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(452)
							int tmp39 = _page->width_actual;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(452)
							Float tmp40 = (Float(tmp38) / Float(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(452)
							Float _u2 = tmp40;		HX_STACK_VAR(_u2,"_u2");
							HX_STACK_LINE(453)
							Float tmp41 = (_char->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ) + _char->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(453)
							int tmp42 = _page->height_actual;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(453)
							Float tmp43 = (Float(tmp41) / Float(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(453)
							Float _v2 = tmp43;		HX_STACK_VAR(_v2,"_v2");
							HX_STACK_LINE(455)
							int tmp44 = _total_idx;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(456)
							Float tmp45 = _quad_x;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(456)
							Float tmp46 = _quad_y;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(456)
							Float tmp47 = _char->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(456)
							Float tmp48 = this->point_ratio;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(456)
							Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(456)
							Float tmp50 = _char->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(456)
							Float tmp51 = this->point_ratio;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(456)
							Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(457)
							Float tmp53 = _u1;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(457)
							Float tmp54 = _v1;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(457)
							Float tmp55 = _u2;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(457)
							Float tmp56 = _v2;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(457)
							::phoenix::Color tmp57 = this->color;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(455)
							this->update_char(tmp44,tmp45,tmp46,tmp49,tmp52,tmp53,tmp54,tmp55,tmp56,tmp57);
							HX_STACK_LINE(461)
							(_total_idx)++;
						}
						HX_STACK_LINE(467)
						Float _x_inc = _char->__Field(HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe"), hx::paccDynamic );		HX_STACK_VAR(_x_inc,"_x_inc");
						HX_STACK_LINE(470)
						int tmp22 = _idx;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(470)
						int tmp23 = (_line.length - (int)1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(470)
						bool tmp24 = (tmp22 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(470)
						if ((tmp24)){
							HX_STACK_LINE(471)
							Dynamic tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(471)
							{
								HX_STACK_LINE(471)
								::String tmp26 = _line;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(471)
								int tmp27 = (_idx + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(471)
								int tmp28 = ::haxe::Utf8_obj::charCodeAt(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(471)
								int _second = tmp28;		HX_STACK_VAR(_second,"_second");
								HX_STACK_LINE(471)
								::phoenix::BitmapFont tmp29 = this->font;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(471)
								::haxe::ds::IntMap tmp30 = tmp29->info->__Field(HX_HCSTRING("kernings","\x27","\xb8","\x8b","\x80"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(471)
								int tmp31 = _index;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(471)
								::haxe::ds::IntMap tmp32 = tmp30->get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(471)
								::haxe::ds::IntMap _map = tmp32;		HX_STACK_VAR(_map,"_map");
								HX_STACK_LINE(471)
								bool tmp33 = (_map != null());		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(471)
								bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(471)
								if ((tmp33)){
									HX_STACK_LINE(471)
									int tmp35 = _second;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(471)
									int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(471)
									tmp34 = _map->exists(tmp36);
								}
								else{
									HX_STACK_LINE(471)
									tmp34 = false;
								}
								HX_STACK_LINE(471)
								if ((tmp34)){
									HX_STACK_LINE(471)
									int tmp35 = _second;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(471)
									Dynamic tmp36 = _map->get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(471)
									tmp25 = tmp36;
								}
								else{
									HX_STACK_LINE(471)
									tmp25 = (int)0;
								}
							}
							HX_STACK_LINE(471)
							hx::AddEq(_x_inc,tmp25);
							HX_STACK_LINE(472)
							bool tmp26 = (_index >= (int)32);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(472)
							if ((tmp26)){
								HX_STACK_LINE(473)
								Float tmp27 = this->letter_spacing;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(473)
								hx::AddEq(_x_inc,tmp27);
							}
						}
						HX_STACK_LINE(477)
						Float tmp25 = this->point_ratio;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(477)
						hx::MultEq(_x_inc,tmp25);
						HX_STACK_LINE(480)
						hx::AddEq(_cur_x,_x_inc);
						HX_STACK_LINE(483)
						(_idx)++;
					}
				}
				HX_STACK_LINE(488)
				(_line_idx)++;
			}
		}
		HX_STACK_LINE(495)
		int tmp4 = this->vertices->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(495)
		Float tmp5 = (Float(tmp4) / Float((int)6));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(495)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(495)
		int _vertidx = tmp6;		HX_STACK_VAR(_vertidx,"_vertidx");
		HX_STACK_LINE(496)
		int tmp7 = (_vertidx - _total_idx);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(496)
		int _diff = tmp7;		HX_STACK_VAR(_diff,"_diff");
		HX_STACK_LINE(498)
		bool tmp8 = (_diff > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(498)
		if ((tmp8)){
			HX_STACK_LINE(499)
			int tmp9 = (_total_idx * (int)6);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(499)
			int tmp10 = (_diff * (int)6);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(499)
			this->vertices->splice(tmp9,tmp10);
		}
		HX_STACK_LINE(503)
		this->dirty_align = false;
		HX_STACK_LINE(504)
		::luxe::Emitter tmp9 = this->emitter;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(504)
		tmp9->emit((int)1,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextGeometry_obj,update_text,(void))

Void TextGeometry_obj::update_char( int _letteridx,Float _x,Float _y,Float _w,Float _h,Float _u,Float _v,Float _u2,Float _v2,::phoenix::Color _color){
{
		HX_STACK_FRAME("phoenix.geometry.TextGeometry","update_char",0x956fe05a,"phoenix.geometry.TextGeometry.update_char","phoenix/geometry/TextGeometry.hx",509,0x3cba14a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_letteridx,"_letteridx")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_ARG(_u,"_u")
		HX_STACK_ARG(_v,"_v")
		HX_STACK_ARG(_u2,"_u2")
		HX_STACK_ARG(_v2,"_v2")
		HX_STACK_ARG(_color,"_color")
		HX_STACK_LINE(511)
		::phoenix::geometry::Vertex vert0;		HX_STACK_VAR(vert0,"vert0");
		HX_STACK_LINE(511)
		::phoenix::geometry::Vertex vert1;		HX_STACK_VAR(vert1,"vert1");
		HX_STACK_LINE(511)
		::phoenix::geometry::Vertex vert2;		HX_STACK_VAR(vert2,"vert2");
		HX_STACK_LINE(512)
		::phoenix::geometry::Vertex vert3;		HX_STACK_VAR(vert3,"vert3");
		HX_STACK_LINE(512)
		::phoenix::geometry::Vertex vert4;		HX_STACK_VAR(vert4,"vert4");
		HX_STACK_LINE(512)
		::phoenix::geometry::Vertex vert5;		HX_STACK_VAR(vert5,"vert5");
		HX_STACK_LINE(514)
		Array< ::Dynamic > quad = this->cache->__get(_letteridx).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(quad,"quad");
		HX_STACK_LINE(517)
		bool tmp = (quad == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(517)
		if ((tmp)){
			HX_STACK_LINE(521)
			::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(521)
			::phoenix::Color tmp2 = _color;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(521)
			::phoenix::geometry::Vertex tmp3 = ::phoenix::geometry::Vertex_obj::__new(tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(521)
			vert0 = tmp3;
			HX_STACK_LINE(522)
			Float tmp4 = (_x + _w);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(522)
			Float tmp5 = _y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(522)
			::phoenix::Vector tmp6 = ::phoenix::Vector_obj::__new(tmp4,tmp5,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(522)
			::phoenix::Color tmp7 = _color;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(522)
			::phoenix::geometry::Vertex tmp8 = ::phoenix::geometry::Vertex_obj::__new(tmp6,tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(522)
			vert1 = tmp8;
			HX_STACK_LINE(523)
			Float tmp9 = (_x + _w);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(523)
			Float tmp10 = (_y + _h);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(523)
			::phoenix::Vector tmp11 = ::phoenix::Vector_obj::__new(tmp9,tmp10,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(523)
			::phoenix::Color tmp12 = _color;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(523)
			::phoenix::geometry::Vertex tmp13 = ::phoenix::geometry::Vertex_obj::__new(tmp11,tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(523)
			vert2 = tmp13;
			HX_STACK_LINE(525)
			Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(525)
			Float tmp15 = (_y + _h);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(525)
			::phoenix::Vector tmp16 = ::phoenix::Vector_obj::__new(tmp14,tmp15,null(),null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(525)
			::phoenix::Color tmp17 = _color;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(525)
			::phoenix::geometry::Vertex tmp18 = ::phoenix::geometry::Vertex_obj::__new(tmp16,tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(525)
			vert3 = tmp18;
			HX_STACK_LINE(526)
			::phoenix::Vector tmp19 = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(526)
			::phoenix::Color tmp20 = _color;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(526)
			::phoenix::geometry::Vertex tmp21 = ::phoenix::geometry::Vertex_obj::__new(tmp19,tmp20,null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(526)
			vert4 = tmp21;
			HX_STACK_LINE(527)
			Float tmp22 = (_x + _w);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(527)
			Float tmp23 = (_y + _h);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(527)
			::phoenix::Vector tmp24 = ::phoenix::Vector_obj::__new(tmp22,tmp23,null(),null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(527)
			::phoenix::Color tmp25 = _color;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(527)
			::phoenix::geometry::Vertex tmp26 = ::phoenix::geometry::Vertex_obj::__new(tmp24,tmp25,null());		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(527)
			vert5 = tmp26;
			HX_STACK_LINE(529)
			quad = Array_obj< ::Dynamic >::__new().Add(vert0).Add(vert1).Add(vert2).Add(vert3).Add(vert4).Add(vert5);
			HX_STACK_LINE(530)
			this->cache[_letteridx] = quad;
		}
		else{
			HX_STACK_LINE(537)
			::phoenix::geometry::Vertex tmp1 = quad->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(537)
			vert0 = tmp1;
			HX_STACK_LINE(537)
			::phoenix::geometry::Vertex tmp2 = quad->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(537)
			vert1 = tmp2;
			HX_STACK_LINE(537)
			::phoenix::geometry::Vertex tmp3 = quad->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(537)
			vert2 = tmp3;
			HX_STACK_LINE(538)
			::phoenix::geometry::Vertex tmp4 = quad->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(538)
			vert3 = tmp4;
			HX_STACK_LINE(538)
			::phoenix::geometry::Vertex tmp5 = quad->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(538)
			vert4 = tmp5;
			HX_STACK_LINE(538)
			::phoenix::geometry::Vertex tmp6 = quad->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(538)
			vert5 = tmp6;
			HX_STACK_LINE(541)
			{
				HX_STACK_LINE(541)
				::phoenix::Vector _this = vert0->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(541)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(541)
				_this->ignore_listeners = true;
				HX_STACK_LINE(541)
				{
					HX_STACK_LINE(541)
					_this->x = _x;
					HX_STACK_LINE(541)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(541)
					if ((tmp7)){
						HX_STACK_LINE(541)
						_this->x;
					}
					else{
						HX_STACK_LINE(541)
						bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(541)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(541)
						if ((tmp8)){
							HX_STACK_LINE(541)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(541)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(541)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(541)
							tmp9 = false;
						}
						HX_STACK_LINE(541)
						if ((tmp9)){
							HX_STACK_LINE(541)
							Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(541)
							_this->listen_x(tmp10);
						}
						HX_STACK_LINE(541)
						_this->x;
					}
				}
				HX_STACK_LINE(541)
				{
					HX_STACK_LINE(541)
					_this->y = _y;
					HX_STACK_LINE(541)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(541)
					if ((tmp7)){
						HX_STACK_LINE(541)
						_this->y;
					}
					else{
						HX_STACK_LINE(541)
						bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(541)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(541)
						if ((tmp8)){
							HX_STACK_LINE(541)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(541)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(541)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(541)
							tmp9 = false;
						}
						HX_STACK_LINE(541)
						if ((tmp9)){
							HX_STACK_LINE(541)
							Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(541)
							_this->listen_y(tmp10);
						}
						HX_STACK_LINE(541)
						_this->y;
					}
				}
				HX_STACK_LINE(541)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(541)
				bool tmp7 = (_this->listen_x != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(541)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(541)
				if ((tmp7)){
					HX_STACK_LINE(541)
					bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(541)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(541)
					tmp8 = !(tmp10);
				}
				else{
					HX_STACK_LINE(541)
					tmp8 = false;
				}
				HX_STACK_LINE(541)
				if ((tmp8)){
					HX_STACK_LINE(541)
					Float tmp9 = _this->x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(541)
					_this->listen_x(tmp9);
				}
				HX_STACK_LINE(541)
				bool tmp9 = (_this->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(541)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(541)
				if ((tmp9)){
					HX_STACK_LINE(541)
					bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(541)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(541)
					tmp10 = !(tmp12);
				}
				else{
					HX_STACK_LINE(541)
					tmp10 = false;
				}
				HX_STACK_LINE(541)
				if ((tmp10)){
					HX_STACK_LINE(541)
					Float tmp11 = _this->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(541)
					_this->listen_y(tmp11);
				}
				HX_STACK_LINE(541)
				_this;
			}
			HX_STACK_LINE(542)
			{
				HX_STACK_LINE(542)
				::phoenix::Vector _this = vert1->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(542)
				Float tmp7 = (_x + _w);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(542)
				Float _x1 = tmp7;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(542)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(542)
				_this->ignore_listeners = true;
				HX_STACK_LINE(542)
				{
					HX_STACK_LINE(542)
					_this->x = _x1;
					HX_STACK_LINE(542)
					bool tmp8 = _this->_construct;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(542)
					if ((tmp8)){
						HX_STACK_LINE(542)
						_this->x;
					}
					else{
						HX_STACK_LINE(542)
						bool tmp9 = (_this->listen_x != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(542)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(542)
						if ((tmp9)){
							HX_STACK_LINE(542)
							bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(542)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(542)
							tmp10 = !(tmp12);
						}
						else{
							HX_STACK_LINE(542)
							tmp10 = false;
						}
						HX_STACK_LINE(542)
						if ((tmp10)){
							HX_STACK_LINE(542)
							Float tmp11 = _x1;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(542)
							_this->listen_x(tmp11);
						}
						HX_STACK_LINE(542)
						_this->x;
					}
				}
				HX_STACK_LINE(542)
				{
					HX_STACK_LINE(542)
					_this->y = _y;
					HX_STACK_LINE(542)
					bool tmp8 = _this->_construct;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(542)
					if ((tmp8)){
						HX_STACK_LINE(542)
						_this->y;
					}
					else{
						HX_STACK_LINE(542)
						bool tmp9 = (_this->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(542)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(542)
						if ((tmp9)){
							HX_STACK_LINE(542)
							bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(542)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(542)
							tmp10 = !(tmp12);
						}
						else{
							HX_STACK_LINE(542)
							tmp10 = false;
						}
						HX_STACK_LINE(542)
						if ((tmp10)){
							HX_STACK_LINE(542)
							Float tmp11 = _y;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(542)
							_this->listen_y(tmp11);
						}
						HX_STACK_LINE(542)
						_this->y;
					}
				}
				HX_STACK_LINE(542)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(542)
				bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(542)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(542)
				if ((tmp8)){
					HX_STACK_LINE(542)
					bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(542)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(542)
					tmp9 = !(tmp11);
				}
				else{
					HX_STACK_LINE(542)
					tmp9 = false;
				}
				HX_STACK_LINE(542)
				if ((tmp9)){
					HX_STACK_LINE(542)
					Float tmp10 = _this->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(542)
					_this->listen_x(tmp10);
				}
				HX_STACK_LINE(542)
				bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(542)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(542)
				if ((tmp10)){
					HX_STACK_LINE(542)
					bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(542)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(542)
					tmp11 = !(tmp13);
				}
				else{
					HX_STACK_LINE(542)
					tmp11 = false;
				}
				HX_STACK_LINE(542)
				if ((tmp11)){
					HX_STACK_LINE(542)
					Float tmp12 = _this->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(542)
					_this->listen_y(tmp12);
				}
				HX_STACK_LINE(542)
				_this;
			}
			HX_STACK_LINE(543)
			{
				HX_STACK_LINE(543)
				::phoenix::Vector _this = vert2->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(543)
				Float tmp7 = (_x + _w);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(543)
				Float _x1 = tmp7;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(543)
				Float tmp8 = (_y + _h);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(543)
				Float _y1 = tmp8;		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(543)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(543)
				_this->ignore_listeners = true;
				HX_STACK_LINE(543)
				{
					HX_STACK_LINE(543)
					_this->x = _x1;
					HX_STACK_LINE(543)
					bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(543)
					if ((tmp9)){
						HX_STACK_LINE(543)
						_this->x;
					}
					else{
						HX_STACK_LINE(543)
						bool tmp10 = (_this->listen_x != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(543)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(543)
						if ((tmp10)){
							HX_STACK_LINE(543)
							bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(543)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(543)
							tmp11 = !(tmp13);
						}
						else{
							HX_STACK_LINE(543)
							tmp11 = false;
						}
						HX_STACK_LINE(543)
						if ((tmp11)){
							HX_STACK_LINE(543)
							Float tmp12 = _x1;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(543)
							_this->listen_x(tmp12);
						}
						HX_STACK_LINE(543)
						_this->x;
					}
				}
				HX_STACK_LINE(543)
				{
					HX_STACK_LINE(543)
					_this->y = _y1;
					HX_STACK_LINE(543)
					bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(543)
					if ((tmp9)){
						HX_STACK_LINE(543)
						_this->y;
					}
					else{
						HX_STACK_LINE(543)
						bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(543)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(543)
						if ((tmp10)){
							HX_STACK_LINE(543)
							bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(543)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(543)
							tmp11 = !(tmp13);
						}
						else{
							HX_STACK_LINE(543)
							tmp11 = false;
						}
						HX_STACK_LINE(543)
						if ((tmp11)){
							HX_STACK_LINE(543)
							Float tmp12 = _y1;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(543)
							_this->listen_y(tmp12);
						}
						HX_STACK_LINE(543)
						_this->y;
					}
				}
				HX_STACK_LINE(543)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(543)
				bool tmp9 = (_this->listen_x != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(543)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(543)
				if ((tmp9)){
					HX_STACK_LINE(543)
					bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(543)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(543)
					tmp10 = !(tmp12);
				}
				else{
					HX_STACK_LINE(543)
					tmp10 = false;
				}
				HX_STACK_LINE(543)
				if ((tmp10)){
					HX_STACK_LINE(543)
					Float tmp11 = _this->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(543)
					_this->listen_x(tmp11);
				}
				HX_STACK_LINE(543)
				bool tmp11 = (_this->listen_y != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(543)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(543)
				if ((tmp11)){
					HX_STACK_LINE(543)
					bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(543)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(543)
					tmp12 = !(tmp14);
				}
				else{
					HX_STACK_LINE(543)
					tmp12 = false;
				}
				HX_STACK_LINE(543)
				if ((tmp12)){
					HX_STACK_LINE(543)
					Float tmp13 = _this->y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(543)
					_this->listen_y(tmp13);
				}
				HX_STACK_LINE(543)
				_this;
			}
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				::phoenix::Vector _this = vert3->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(544)
				Float tmp7 = (_y + _h);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(544)
				Float _y1 = tmp7;		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(544)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(544)
				_this->ignore_listeners = true;
				HX_STACK_LINE(544)
				{
					HX_STACK_LINE(544)
					_this->x = _x;
					HX_STACK_LINE(544)
					bool tmp8 = _this->_construct;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(544)
					if ((tmp8)){
						HX_STACK_LINE(544)
						_this->x;
					}
					else{
						HX_STACK_LINE(544)
						bool tmp9 = (_this->listen_x != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(544)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(544)
						if ((tmp9)){
							HX_STACK_LINE(544)
							bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(544)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(544)
							tmp10 = !(tmp12);
						}
						else{
							HX_STACK_LINE(544)
							tmp10 = false;
						}
						HX_STACK_LINE(544)
						if ((tmp10)){
							HX_STACK_LINE(544)
							Float tmp11 = _x;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(544)
							_this->listen_x(tmp11);
						}
						HX_STACK_LINE(544)
						_this->x;
					}
				}
				HX_STACK_LINE(544)
				{
					HX_STACK_LINE(544)
					_this->y = _y1;
					HX_STACK_LINE(544)
					bool tmp8 = _this->_construct;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(544)
					if ((tmp8)){
						HX_STACK_LINE(544)
						_this->y;
					}
					else{
						HX_STACK_LINE(544)
						bool tmp9 = (_this->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(544)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(544)
						if ((tmp9)){
							HX_STACK_LINE(544)
							bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(544)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(544)
							tmp10 = !(tmp12);
						}
						else{
							HX_STACK_LINE(544)
							tmp10 = false;
						}
						HX_STACK_LINE(544)
						if ((tmp10)){
							HX_STACK_LINE(544)
							Float tmp11 = _y1;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(544)
							_this->listen_y(tmp11);
						}
						HX_STACK_LINE(544)
						_this->y;
					}
				}
				HX_STACK_LINE(544)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(544)
				bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(544)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(544)
				if ((tmp8)){
					HX_STACK_LINE(544)
					bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(544)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(544)
					tmp9 = !(tmp11);
				}
				else{
					HX_STACK_LINE(544)
					tmp9 = false;
				}
				HX_STACK_LINE(544)
				if ((tmp9)){
					HX_STACK_LINE(544)
					Float tmp10 = _this->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(544)
					_this->listen_x(tmp10);
				}
				HX_STACK_LINE(544)
				bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(544)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(544)
				if ((tmp10)){
					HX_STACK_LINE(544)
					bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(544)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(544)
					tmp11 = !(tmp13);
				}
				else{
					HX_STACK_LINE(544)
					tmp11 = false;
				}
				HX_STACK_LINE(544)
				if ((tmp11)){
					HX_STACK_LINE(544)
					Float tmp12 = _this->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(544)
					_this->listen_y(tmp12);
				}
				HX_STACK_LINE(544)
				_this;
			}
			HX_STACK_LINE(545)
			{
				HX_STACK_LINE(545)
				::phoenix::Vector _this = vert4->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(545)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(545)
				_this->ignore_listeners = true;
				HX_STACK_LINE(545)
				{
					HX_STACK_LINE(545)
					_this->x = _x;
					HX_STACK_LINE(545)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(545)
					if ((tmp7)){
						HX_STACK_LINE(545)
						_this->x;
					}
					else{
						HX_STACK_LINE(545)
						bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(545)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(545)
						if ((tmp8)){
							HX_STACK_LINE(545)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(545)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(545)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(545)
							tmp9 = false;
						}
						HX_STACK_LINE(545)
						if ((tmp9)){
							HX_STACK_LINE(545)
							Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(545)
							_this->listen_x(tmp10);
						}
						HX_STACK_LINE(545)
						_this->x;
					}
				}
				HX_STACK_LINE(545)
				{
					HX_STACK_LINE(545)
					_this->y = _y;
					HX_STACK_LINE(545)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(545)
					if ((tmp7)){
						HX_STACK_LINE(545)
						_this->y;
					}
					else{
						HX_STACK_LINE(545)
						bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(545)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(545)
						if ((tmp8)){
							HX_STACK_LINE(545)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(545)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(545)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(545)
							tmp9 = false;
						}
						HX_STACK_LINE(545)
						if ((tmp9)){
							HX_STACK_LINE(545)
							Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(545)
							_this->listen_y(tmp10);
						}
						HX_STACK_LINE(545)
						_this->y;
					}
				}
				HX_STACK_LINE(545)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(545)
				bool tmp7 = (_this->listen_x != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(545)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(545)
				if ((tmp7)){
					HX_STACK_LINE(545)
					bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(545)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(545)
					tmp8 = !(tmp10);
				}
				else{
					HX_STACK_LINE(545)
					tmp8 = false;
				}
				HX_STACK_LINE(545)
				if ((tmp8)){
					HX_STACK_LINE(545)
					Float tmp9 = _this->x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(545)
					_this->listen_x(tmp9);
				}
				HX_STACK_LINE(545)
				bool tmp9 = (_this->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(545)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(545)
				if ((tmp9)){
					HX_STACK_LINE(545)
					bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(545)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(545)
					tmp10 = !(tmp12);
				}
				else{
					HX_STACK_LINE(545)
					tmp10 = false;
				}
				HX_STACK_LINE(545)
				if ((tmp10)){
					HX_STACK_LINE(545)
					Float tmp11 = _this->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(545)
					_this->listen_y(tmp11);
				}
				HX_STACK_LINE(545)
				_this;
			}
			HX_STACK_LINE(546)
			{
				HX_STACK_LINE(546)
				::phoenix::Vector _this = vert5->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(546)
				Float tmp7 = (_x + _w);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(546)
				Float _x1 = tmp7;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(546)
				Float tmp8 = (_y + _h);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(546)
				Float _y1 = tmp8;		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(546)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(546)
				_this->ignore_listeners = true;
				HX_STACK_LINE(546)
				{
					HX_STACK_LINE(546)
					_this->x = _x1;
					HX_STACK_LINE(546)
					bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(546)
					if ((tmp9)){
						HX_STACK_LINE(546)
						_this->x;
					}
					else{
						HX_STACK_LINE(546)
						bool tmp10 = (_this->listen_x != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(546)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(546)
						if ((tmp10)){
							HX_STACK_LINE(546)
							bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(546)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(546)
							tmp11 = !(tmp13);
						}
						else{
							HX_STACK_LINE(546)
							tmp11 = false;
						}
						HX_STACK_LINE(546)
						if ((tmp11)){
							HX_STACK_LINE(546)
							Float tmp12 = _x1;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(546)
							_this->listen_x(tmp12);
						}
						HX_STACK_LINE(546)
						_this->x;
					}
				}
				HX_STACK_LINE(546)
				{
					HX_STACK_LINE(546)
					_this->y = _y1;
					HX_STACK_LINE(546)
					bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(546)
					if ((tmp9)){
						HX_STACK_LINE(546)
						_this->y;
					}
					else{
						HX_STACK_LINE(546)
						bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(546)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(546)
						if ((tmp10)){
							HX_STACK_LINE(546)
							bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(546)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(546)
							tmp11 = !(tmp13);
						}
						else{
							HX_STACK_LINE(546)
							tmp11 = false;
						}
						HX_STACK_LINE(546)
						if ((tmp11)){
							HX_STACK_LINE(546)
							Float tmp12 = _y1;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(546)
							_this->listen_y(tmp12);
						}
						HX_STACK_LINE(546)
						_this->y;
					}
				}
				HX_STACK_LINE(546)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(546)
				bool tmp9 = (_this->listen_x != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(546)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(546)
				if ((tmp9)){
					HX_STACK_LINE(546)
					bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(546)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(546)
					tmp10 = !(tmp12);
				}
				else{
					HX_STACK_LINE(546)
					tmp10 = false;
				}
				HX_STACK_LINE(546)
				if ((tmp10)){
					HX_STACK_LINE(546)
					Float tmp11 = _this->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(546)
					_this->listen_x(tmp11);
				}
				HX_STACK_LINE(546)
				bool tmp11 = (_this->listen_y != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(546)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(546)
				if ((tmp11)){
					HX_STACK_LINE(546)
					bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(546)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(546)
					tmp12 = !(tmp14);
				}
				else{
					HX_STACK_LINE(546)
					tmp12 = false;
				}
				HX_STACK_LINE(546)
				if ((tmp12)){
					HX_STACK_LINE(546)
					Float tmp13 = _this->y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(546)
					_this->listen_y(tmp13);
				}
				HX_STACK_LINE(546)
				_this;
			}
		}
		HX_STACK_LINE(550)
		{
			HX_STACK_LINE(550)
			::phoenix::geometry::TextureCoord tmp1 = vert0->uv->uv0;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(550)
			::phoenix::geometry::TextureCoord _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(550)
			_this->u = _u;
			HX_STACK_LINE(550)
			_this->v = _v;
			HX_STACK_LINE(550)
			_this;
		}
		HX_STACK_LINE(551)
		{
			HX_STACK_LINE(551)
			::phoenix::geometry::TextureCoord tmp1 = vert1->uv->uv0;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(551)
			::phoenix::geometry::TextureCoord _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(551)
			_this->u = _u2;
			HX_STACK_LINE(551)
			_this->v = _v;
			HX_STACK_LINE(551)
			_this;
		}
		HX_STACK_LINE(552)
		{
			HX_STACK_LINE(552)
			::phoenix::geometry::TextureCoord tmp1 = vert2->uv->uv0;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(552)
			::phoenix::geometry::TextureCoord _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(552)
			_this->u = _u2;
			HX_STACK_LINE(552)
			_this->v = _v2;
			HX_STACK_LINE(552)
			_this;
		}
		HX_STACK_LINE(553)
		{
			HX_STACK_LINE(553)
			::phoenix::geometry::TextureCoord tmp1 = vert3->uv->uv0;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(553)
			::phoenix::geometry::TextureCoord _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(553)
			_this->u = _u;
			HX_STACK_LINE(553)
			_this->v = _v2;
			HX_STACK_LINE(553)
			_this;
		}
		HX_STACK_LINE(554)
		{
			HX_STACK_LINE(554)
			::phoenix::geometry::TextureCoord tmp1 = vert4->uv->uv0;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(554)
			::phoenix::geometry::TextureCoord _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(554)
			_this->u = _u;
			HX_STACK_LINE(554)
			_this->v = _v;
			HX_STACK_LINE(554)
			_this;
		}
		HX_STACK_LINE(555)
		{
			HX_STACK_LINE(555)
			::phoenix::geometry::TextureCoord tmp1 = vert5->uv->uv0;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(555)
			::phoenix::geometry::TextureCoord _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(555)
			_this->u = _u2;
			HX_STACK_LINE(555)
			_this->v = _v2;
			HX_STACK_LINE(555)
			_this;
		}
		HX_STACK_LINE(560)
		int tmp1 = this->vertices->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(560)
		Float tmp2 = (Float(tmp1) / Float((int)6));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(560)
		int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(560)
		int _vertidx = tmp3;		HX_STACK_VAR(_vertidx,"_vertidx");
		HX_STACK_LINE(562)
		bool tmp4 = (_vertidx <= _letteridx);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(562)
		if ((tmp4)){
			HX_STACK_LINE(563)
			::phoenix::geometry::Vertex tmp5 = vert0;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(563)
			this->add(tmp5);
			HX_STACK_LINE(563)
			::phoenix::geometry::Vertex tmp6 = vert1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(563)
			this->add(tmp6);
			HX_STACK_LINE(563)
			::phoenix::geometry::Vertex tmp7 = vert2;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(563)
			this->add(tmp7);
			HX_STACK_LINE(564)
			::phoenix::geometry::Vertex tmp8 = vert3;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(564)
			this->add(tmp8);
			HX_STACK_LINE(564)
			::phoenix::geometry::Vertex tmp9 = vert4;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(564)
			this->add(tmp9);
			HX_STACK_LINE(564)
			::phoenix::geometry::Vertex tmp10 = vert5;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(564)
			this->add(tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC10(TextGeometry_obj,update_char,(void))

bool TextGeometry_obj::set_dirty_sizing( bool _b){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_dirty_sizing",0xc3e956fa,"phoenix.geometry.TextGeometry.set_dirty_sizing","phoenix/geometry/TextGeometry.hx",572,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_b,"_b")
	HX_STACK_LINE(574)
	this->dirty_align = true;
	HX_STACK_LINE(576)
	bool tmp = this->dirty_sizing = _b;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(576)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_dirty_sizing,return )

::phoenix::Rectangle TextGeometry_obj::set_bounds( ::phoenix::Rectangle _bounds){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_bounds",0x3002ac24,"phoenix.geometry.TextGeometry.set_bounds","phoenix/geometry/TextGeometry.hx",581,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_bounds,"_bounds")
	HX_STACK_LINE(583)
	this->bounds = _bounds;
	HX_STACK_LINE(585)
	::phoenix::Rectangle tmp = this->bounds;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(585)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(585)
	if ((tmp1)){
		HX_STACK_LINE(585)
		::phoenix::Rectangle tmp2 = this->bounds;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(585)
		return tmp2;
	}
	HX_STACK_LINE(587)
	this->set_dirty_sizing(true);
	HX_STACK_LINE(588)
	this->update_text();
	HX_STACK_LINE(590)
	::phoenix::Rectangle tmp2 = this->bounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(590)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_bounds,return )

bool TextGeometry_obj::set_bounds_wrap( bool _wrap){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_bounds_wrap",0x51b72705,"phoenix.geometry.TextGeometry.set_bounds_wrap","phoenix/geometry/TextGeometry.hx",595,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_wrap,"_wrap")
	HX_STACK_LINE(597)
	this->bounds_wrap = _wrap;
	HX_STACK_LINE(599)
	this->set_dirty_sizing(true);
	HX_STACK_LINE(600)
	this->update_text();
	HX_STACK_LINE(602)
	bool tmp = this->bounds_wrap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(602)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_bounds_wrap,return )

bool TextGeometry_obj::set_letter_snapping( bool _snap){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_letter_snapping",0x766edfe6,"phoenix.geometry.TextGeometry.set_letter_snapping","phoenix/geometry/TextGeometry.hx",607,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_snap,"_snap")
	HX_STACK_LINE(609)
	this->letter_snapping = _snap;
	HX_STACK_LINE(611)
	this->set_dirty_sizing(true);
	HX_STACK_LINE(612)
	this->update_text();
	HX_STACK_LINE(614)
	bool tmp = this->letter_snapping;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(614)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_letter_snapping,return )

Float TextGeometry_obj::set_line_spacing( Float _line_spacing){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_line_spacing",0x07a8cbe7,"phoenix.geometry.TextGeometry.set_line_spacing","phoenix/geometry/TextGeometry.hx",619,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_line_spacing,"_line_spacing")
	HX_STACK_LINE(621)
	this->line_spacing = _line_spacing;
	HX_STACK_LINE(623)
	this->set_dirty_sizing(true);
	HX_STACK_LINE(624)
	this->update_text();
	HX_STACK_LINE(626)
	Float tmp = this->line_spacing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(626)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_line_spacing,return )

Float TextGeometry_obj::set_letter_spacing( Float _letter_spacing){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_letter_spacing",0x3c057c99,"phoenix.geometry.TextGeometry.set_letter_spacing","phoenix/geometry/TextGeometry.hx",631,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_letter_spacing,"_letter_spacing")
	HX_STACK_LINE(633)
	this->letter_spacing = _letter_spacing;
	HX_STACK_LINE(635)
	this->set_dirty_sizing(true);
	HX_STACK_LINE(636)
	this->update_text();
	HX_STACK_LINE(638)
	Float tmp = this->letter_spacing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(638)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_letter_spacing,return )

int TextGeometry_obj::set_align( int _align){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_align",0x88a4bbf6,"phoenix.geometry.TextGeometry.set_align","phoenix/geometry/TextGeometry.hx",643,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_align,"_align")
	HX_STACK_LINE(645)
	this->align = _align;
	HX_STACK_LINE(647)
	this->dirty_align = true;
	HX_STACK_LINE(648)
	this->update_text();
	HX_STACK_LINE(650)
	int tmp = this->align;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(650)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_align,return )

int TextGeometry_obj::set_align_vertical( int _align_vertical){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_align_vertical",0x21a6c91f,"phoenix.geometry.TextGeometry.set_align_vertical","phoenix/geometry/TextGeometry.hx",655,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_align_vertical,"_align_vertical")
	HX_STACK_LINE(657)
	this->align_vertical = _align_vertical;
	HX_STACK_LINE(659)
	this->dirty_align = true;
	HX_STACK_LINE(660)
	this->update_text();
	HX_STACK_LINE(662)
	int tmp = this->align_vertical;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(662)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_align_vertical,return )

Float TextGeometry_obj::set_point_size( Float s){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_point_size",0x02f08f7f,"phoenix.geometry.TextGeometry.set_point_size","phoenix/geometry/TextGeometry.hx",667,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(669)
	bool tmp = (s < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(669)
	if ((tmp)){
		HX_STACK_LINE(669)
		s = (int)0;
	}
	HX_STACK_LINE(670)
	this->point_size = s;
	HX_STACK_LINE(672)
	this->set_dirty_sizing(true);
	HX_STACK_LINE(673)
	this->update_text();
	HX_STACK_LINE(675)
	Float tmp1 = this->point_size;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(675)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_point_size,return )

::phoenix::BitmapFont TextGeometry_obj::set_font( ::phoenix::BitmapFont _font){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_font",0x50d769be,"phoenix.geometry.TextGeometry.set_font","phoenix/geometry/TextGeometry.hx",680,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_font,"_font")
	HX_STACK_LINE(682)
	this->font = _font;
	HX_STACK_LINE(684)
	bool tmp = this->setup_;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(684)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(684)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(684)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(684)
	if ((tmp2)){
		HX_STACK_LINE(684)
		tmp3 = (_font != null());
	}
	else{
		HX_STACK_LINE(684)
		tmp3 = false;
	}
	HX_STACK_LINE(684)
	if ((tmp3)){
		HX_STACK_LINE(686)
		::phoenix::BitmapFont tmp4 = this->font;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(686)
		::phoenix::Texture tmp5 = tmp4->pages->get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(686)
		::phoenix::Texture tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(686)
		this->set_texture(tmp6);
		HX_STACK_LINE(687)
		this->set_dirty_sizing(true);
		HX_STACK_LINE(688)
		this->dirty_align = true;
		HX_STACK_LINE(689)
		this->update_text();
	}
	HX_STACK_LINE(692)
	::phoenix::BitmapFont tmp4 = this->font;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(692)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_font,return )

Float TextGeometry_obj::set_smoothness( Float s){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_smoothness",0x49fb60f4,"phoenix.geometry.TextGeometry.set_smoothness","phoenix/geometry/TextGeometry.hx",701,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(703)
	bool tmp = (s < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(703)
	if ((tmp)){
		HX_STACK_LINE(703)
		s = (int)0;
	}
	HX_STACK_LINE(705)
	::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(705)
	::phoenix::Shader tmp2 = tmp1->shader;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(705)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(705)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(705)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(705)
	if ((tmp4)){
		HX_STACK_LINE(705)
		tmp5 = this->sdf;
	}
	else{
		HX_STACK_LINE(705)
		tmp5 = false;
	}
	HX_STACK_LINE(705)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(705)
	if ((tmp5)){
		HX_STACK_LINE(705)
		tmp6 = this->unique;
	}
	else{
		HX_STACK_LINE(705)
		tmp6 = false;
	}
	HX_STACK_LINE(705)
	if ((tmp6)){
		HX_STACK_LINE(706)
		::phoenix::geometry::GeometryState tmp7 = this->state;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(706)
		::phoenix::Shader _this = tmp7->shader;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(706)
		{
			HX_STACK_LINE(706)
			::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(706)
			::opengl::GLObject tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(706)
			{
				HX_STACK_LINE(706)
				::opengl::GLObject program = _this->program;		HX_STACK_VAR(program,"program");
				HX_STACK_LINE(706)
				{
					HX_STACK_LINE(706)
					bool tmp9 = (program == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(706)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(706)
					if ((tmp9)){
						HX_STACK_LINE(706)
						tmp10 = (int)0;
					}
					else{
						HX_STACK_LINE(706)
						tmp10 = program->id;
					}
					HX_STACK_LINE(706)
					int tmp11 = glGetUniformLocation(tmp10,HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(706)
					int _id = tmp11;		HX_STACK_VAR(_id,"_id");
					HX_STACK_LINE(706)
					::opengl::GLObject tmp12 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(706)
					tmp8 = tmp12;
				}
			}
			HX_STACK_LINE(706)
			::opengl::GLObject _location = tmp8;		HX_STACK_VAR(_location,"_location");
			HX_STACK_LINE(706)
			::phoenix::_Shader::Uniform_Float tmp9 = _this1->floats->get(HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(706)
			::phoenix::_Shader::Uniform_Float _float = tmp9;		HX_STACK_VAR(_float,"_float");
			HX_STACK_LINE(706)
			bool tmp10 = (_float != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(706)
			if ((tmp10)){
				HX_STACK_LINE(706)
				_float->value = s;
			}
			else{
				HX_STACK_LINE(706)
				::phoenix::_Shader::Uniform_Float tmp11 = ::phoenix::_Shader::Uniform_Float_obj::__new(HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"),s,_location);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(706)
				_float = tmp11;
				HX_STACK_LINE(706)
				::phoenix::_Shader::Uniform_Float tmp12 = _float;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(706)
				_this1->floats->set(HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"),tmp12);
			}
			HX_STACK_LINE(706)
			::phoenix::_Shader::Uniform_Float tmp11 = _float;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(706)
			_this1->dirty_floats->push(tmp11);
		}
	}
	HX_STACK_LINE(709)
	Float tmp7 = this->smoothness = s;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(709)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_smoothness,return )

Float TextGeometry_obj::set_thickness( Float s){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_thickness",0xf6334325,"phoenix.geometry.TextGeometry.set_thickness","phoenix/geometry/TextGeometry.hx",714,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(716)
	bool tmp = (s < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(716)
	if ((tmp)){
		HX_STACK_LINE(716)
		s = (int)0;
	}
	HX_STACK_LINE(718)
	::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(718)
	::phoenix::Shader tmp2 = tmp1->shader;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(718)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(718)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(718)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(718)
	if ((tmp4)){
		HX_STACK_LINE(718)
		tmp5 = this->sdf;
	}
	else{
		HX_STACK_LINE(718)
		tmp5 = false;
	}
	HX_STACK_LINE(718)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(718)
	if ((tmp5)){
		HX_STACK_LINE(718)
		tmp6 = this->unique;
	}
	else{
		HX_STACK_LINE(718)
		tmp6 = false;
	}
	HX_STACK_LINE(718)
	if ((tmp6)){
		HX_STACK_LINE(719)
		::phoenix::geometry::GeometryState tmp7 = this->state;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(719)
		::phoenix::Shader _this = tmp7->shader;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(719)
		{
			HX_STACK_LINE(719)
			::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(719)
			::opengl::GLObject tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(719)
			{
				HX_STACK_LINE(719)
				::opengl::GLObject program = _this->program;		HX_STACK_VAR(program,"program");
				HX_STACK_LINE(719)
				{
					HX_STACK_LINE(719)
					bool tmp9 = (program == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(719)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(719)
					if ((tmp9)){
						HX_STACK_LINE(719)
						tmp10 = (int)0;
					}
					else{
						HX_STACK_LINE(719)
						tmp10 = program->id;
					}
					HX_STACK_LINE(719)
					int tmp11 = glGetUniformLocation(tmp10,HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(719)
					int _id = tmp11;		HX_STACK_VAR(_id,"_id");
					HX_STACK_LINE(719)
					::opengl::GLObject tmp12 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(719)
					tmp8 = tmp12;
				}
			}
			HX_STACK_LINE(719)
			::opengl::GLObject _location = tmp8;		HX_STACK_VAR(_location,"_location");
			HX_STACK_LINE(719)
			::phoenix::_Shader::Uniform_Float tmp9 = _this1->floats->get(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(719)
			::phoenix::_Shader::Uniform_Float _float = tmp9;		HX_STACK_VAR(_float,"_float");
			HX_STACK_LINE(719)
			bool tmp10 = (_float != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(719)
			if ((tmp10)){
				HX_STACK_LINE(719)
				_float->value = s;
			}
			else{
				HX_STACK_LINE(719)
				::phoenix::_Shader::Uniform_Float tmp11 = ::phoenix::_Shader::Uniform_Float_obj::__new(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"),s,_location);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(719)
				_float = tmp11;
				HX_STACK_LINE(719)
				::phoenix::_Shader::Uniform_Float tmp12 = _float;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(719)
				_this1->floats->set(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"),tmp12);
			}
			HX_STACK_LINE(719)
			::phoenix::_Shader::Uniform_Float tmp11 = _float;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(719)
			_this1->dirty_floats->push(tmp11);
		}
	}
	HX_STACK_LINE(722)
	Float tmp7 = this->thickness = s;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(722)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_thickness,return )

Float TextGeometry_obj::set_outline( Float s){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_outline",0xc059eaf3,"phoenix.geometry.TextGeometry.set_outline","phoenix/geometry/TextGeometry.hx",727,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(729)
	bool tmp = (s < ((Float)0.0));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(729)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(729)
	if ((tmp)){
		HX_STACK_LINE(729)
		tmp1 = ((Float)0.0);
	}
	else{
		HX_STACK_LINE(729)
		bool tmp2 = (s > ((Float)1.0));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(729)
		if ((tmp2)){
			HX_STACK_LINE(729)
			tmp1 = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(729)
			tmp1 = s;
		}
	}
	HX_STACK_LINE(729)
	s = tmp1;
	HX_STACK_LINE(731)
	::phoenix::geometry::GeometryState tmp2 = this->state;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(731)
	::phoenix::Shader tmp3 = tmp2->shader;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(731)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(731)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(731)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(731)
	if ((tmp5)){
		HX_STACK_LINE(731)
		tmp6 = this->sdf;
	}
	else{
		HX_STACK_LINE(731)
		tmp6 = false;
	}
	HX_STACK_LINE(731)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(731)
	if ((tmp6)){
		HX_STACK_LINE(731)
		tmp7 = this->unique;
	}
	else{
		HX_STACK_LINE(731)
		tmp7 = false;
	}
	HX_STACK_LINE(731)
	if ((tmp7)){
		HX_STACK_LINE(732)
		::phoenix::geometry::GeometryState tmp8 = this->state;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(732)
		::phoenix::Shader _this = tmp8->shader;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(732)
		{
			HX_STACK_LINE(732)
			::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(732)
			::opengl::GLObject tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(732)
			{
				HX_STACK_LINE(732)
				::opengl::GLObject program = _this->program;		HX_STACK_VAR(program,"program");
				HX_STACK_LINE(732)
				{
					HX_STACK_LINE(732)
					bool tmp10 = (program == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(732)
					int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(732)
					if ((tmp10)){
						HX_STACK_LINE(732)
						tmp11 = (int)0;
					}
					else{
						HX_STACK_LINE(732)
						tmp11 = program->id;
					}
					HX_STACK_LINE(732)
					int tmp12 = glGetUniformLocation(tmp11,HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(732)
					int _id = tmp12;		HX_STACK_VAR(_id,"_id");
					HX_STACK_LINE(732)
					::opengl::GLObject tmp13 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(732)
					tmp9 = tmp13;
				}
			}
			HX_STACK_LINE(732)
			::opengl::GLObject _location = tmp9;		HX_STACK_VAR(_location,"_location");
			HX_STACK_LINE(732)
			::phoenix::_Shader::Uniform_Float tmp10 = _this1->floats->get(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(732)
			::phoenix::_Shader::Uniform_Float _float = tmp10;		HX_STACK_VAR(_float,"_float");
			HX_STACK_LINE(732)
			bool tmp11 = (_float != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(732)
			if ((tmp11)){
				HX_STACK_LINE(732)
				_float->value = s;
			}
			else{
				HX_STACK_LINE(732)
				::phoenix::_Shader::Uniform_Float tmp12 = ::phoenix::_Shader::Uniform_Float_obj::__new(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"),s,_location);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(732)
				_float = tmp12;
				HX_STACK_LINE(732)
				::phoenix::_Shader::Uniform_Float tmp13 = _float;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(732)
				_this1->floats->set(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"),tmp13);
			}
			HX_STACK_LINE(732)
			::phoenix::_Shader::Uniform_Float tmp12 = _float;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(732)
			_this1->dirty_floats->push(tmp12);
		}
	}
	HX_STACK_LINE(735)
	Float tmp8 = this->outline = s;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(735)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_outline,return )

Float TextGeometry_obj::set_glow_threshold( Float s){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_glow_threshold",0x88b50ce8,"phoenix.geometry.TextGeometry.set_glow_threshold","phoenix/geometry/TextGeometry.hx",740,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(742)
	bool tmp = (s < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(742)
	if ((tmp)){
		HX_STACK_LINE(742)
		s = (int)0;
	}
	HX_STACK_LINE(744)
	::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(744)
	::phoenix::Shader tmp2 = tmp1->shader;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(744)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(744)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(744)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(744)
	if ((tmp4)){
		HX_STACK_LINE(744)
		tmp5 = this->sdf;
	}
	else{
		HX_STACK_LINE(744)
		tmp5 = false;
	}
	HX_STACK_LINE(744)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(744)
	if ((tmp5)){
		HX_STACK_LINE(744)
		tmp6 = this->unique;
	}
	else{
		HX_STACK_LINE(744)
		tmp6 = false;
	}
	HX_STACK_LINE(744)
	if ((tmp6)){
		HX_STACK_LINE(745)
		::phoenix::geometry::GeometryState tmp7 = this->state;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(745)
		::phoenix::Shader _this = tmp7->shader;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(745)
		{
			HX_STACK_LINE(745)
			::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(745)
			::opengl::GLObject tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(745)
			{
				HX_STACK_LINE(745)
				::opengl::GLObject program = _this->program;		HX_STACK_VAR(program,"program");
				HX_STACK_LINE(745)
				{
					HX_STACK_LINE(745)
					bool tmp9 = (program == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(745)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(745)
					if ((tmp9)){
						HX_STACK_LINE(745)
						tmp10 = (int)0;
					}
					else{
						HX_STACK_LINE(745)
						tmp10 = program->id;
					}
					HX_STACK_LINE(745)
					int tmp11 = glGetUniformLocation(tmp10,HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(745)
					int _id = tmp11;		HX_STACK_VAR(_id,"_id");
					HX_STACK_LINE(745)
					::opengl::GLObject tmp12 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(745)
					tmp8 = tmp12;
				}
			}
			HX_STACK_LINE(745)
			::opengl::GLObject _location = tmp8;		HX_STACK_VAR(_location,"_location");
			HX_STACK_LINE(745)
			::phoenix::_Shader::Uniform_Float tmp9 = _this1->floats->get(HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(745)
			::phoenix::_Shader::Uniform_Float _float = tmp9;		HX_STACK_VAR(_float,"_float");
			HX_STACK_LINE(745)
			bool tmp10 = (_float != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(745)
			if ((tmp10)){
				HX_STACK_LINE(745)
				_float->value = s;
			}
			else{
				HX_STACK_LINE(745)
				::phoenix::_Shader::Uniform_Float tmp11 = ::phoenix::_Shader::Uniform_Float_obj::__new(HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"),s,_location);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(745)
				_float = tmp11;
				HX_STACK_LINE(745)
				::phoenix::_Shader::Uniform_Float tmp12 = _float;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(745)
				_this1->floats->set(HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"),tmp12);
			}
			HX_STACK_LINE(745)
			::phoenix::_Shader::Uniform_Float tmp11 = _float;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(745)
			_this1->dirty_floats->push(tmp11);
		}
	}
	HX_STACK_LINE(748)
	Float tmp7 = this->glow_threshold = s;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(748)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_glow_threshold,return )

Float TextGeometry_obj::set_glow_amount( Float s){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_glow_amount",0xae4a507b,"phoenix.geometry.TextGeometry.set_glow_amount","phoenix/geometry/TextGeometry.hx",753,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(755)
	bool tmp = (s < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(755)
	if ((tmp)){
		HX_STACK_LINE(755)
		s = (int)0;
	}
	HX_STACK_LINE(757)
	::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(757)
	::phoenix::Shader tmp2 = tmp1->shader;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(757)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(757)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(757)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(757)
	if ((tmp4)){
		HX_STACK_LINE(757)
		tmp5 = this->sdf;
	}
	else{
		HX_STACK_LINE(757)
		tmp5 = false;
	}
	HX_STACK_LINE(757)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(757)
	if ((tmp5)){
		HX_STACK_LINE(757)
		tmp6 = this->unique;
	}
	else{
		HX_STACK_LINE(757)
		tmp6 = false;
	}
	HX_STACK_LINE(757)
	if ((tmp6)){
		HX_STACK_LINE(758)
		::phoenix::geometry::GeometryState tmp7 = this->state;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(758)
		::phoenix::Shader _this = tmp7->shader;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(758)
		{
			HX_STACK_LINE(758)
			::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(758)
			::opengl::GLObject tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(758)
			{
				HX_STACK_LINE(758)
				::opengl::GLObject program = _this->program;		HX_STACK_VAR(program,"program");
				HX_STACK_LINE(758)
				{
					HX_STACK_LINE(758)
					bool tmp9 = (program == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(758)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(758)
					if ((tmp9)){
						HX_STACK_LINE(758)
						tmp10 = (int)0;
					}
					else{
						HX_STACK_LINE(758)
						tmp10 = program->id;
					}
					HX_STACK_LINE(758)
					int tmp11 = glGetUniformLocation(tmp10,HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(758)
					int _id = tmp11;		HX_STACK_VAR(_id,"_id");
					HX_STACK_LINE(758)
					::opengl::GLObject tmp12 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(758)
					tmp8 = tmp12;
				}
			}
			HX_STACK_LINE(758)
			::opengl::GLObject _location = tmp8;		HX_STACK_VAR(_location,"_location");
			HX_STACK_LINE(758)
			::phoenix::_Shader::Uniform_Float tmp9 = _this1->floats->get(HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(758)
			::phoenix::_Shader::Uniform_Float _float = tmp9;		HX_STACK_VAR(_float,"_float");
			HX_STACK_LINE(758)
			bool tmp10 = (_float != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(758)
			if ((tmp10)){
				HX_STACK_LINE(758)
				_float->value = s;
			}
			else{
				HX_STACK_LINE(758)
				::phoenix::_Shader::Uniform_Float tmp11 = ::phoenix::_Shader::Uniform_Float_obj::__new(HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"),s,_location);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(758)
				_float = tmp11;
				HX_STACK_LINE(758)
				::phoenix::_Shader::Uniform_Float tmp12 = _float;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(758)
				_this1->floats->set(HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"),tmp12);
			}
			HX_STACK_LINE(758)
			::phoenix::_Shader::Uniform_Float tmp11 = _float;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(758)
			_this1->dirty_floats->push(tmp11);
		}
	}
	HX_STACK_LINE(761)
	Float tmp7 = this->glow_amount = s;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(761)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_glow_amount,return )

::phoenix::Color TextGeometry_obj::set_outline_color( ::phoenix::Color c){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_outline_color",0x66c8dbd7,"phoenix.geometry.TextGeometry.set_outline_color","phoenix/geometry/TextGeometry.hx",766,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(768)
	bool tmp = (c == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(768)
	if ((tmp)){
		HX_STACK_LINE(768)
		::phoenix::Color tmp1 = this->outline_color = c;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(768)
		return tmp1;
	}
	HX_STACK_LINE(770)
	::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(770)
	::phoenix::Shader tmp2 = tmp1->shader;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(770)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(770)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(770)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(770)
	if ((tmp4)){
		HX_STACK_LINE(770)
		tmp5 = this->sdf;
	}
	else{
		HX_STACK_LINE(770)
		tmp5 = false;
	}
	HX_STACK_LINE(770)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(770)
	if ((tmp5)){
		HX_STACK_LINE(770)
		tmp6 = this->unique;
	}
	else{
		HX_STACK_LINE(770)
		tmp6 = false;
	}
	HX_STACK_LINE(770)
	if ((tmp6)){
		HX_STACK_LINE(771)
		::phoenix::geometry::GeometryState tmp7 = this->state;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(771)
		::phoenix::Shader _this = tmp7->shader;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(771)
		{
			HX_STACK_LINE(771)
			::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(771)
			::opengl::GLObject tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(771)
			{
				HX_STACK_LINE(771)
				::opengl::GLObject program = _this->program;		HX_STACK_VAR(program,"program");
				HX_STACK_LINE(771)
				{
					HX_STACK_LINE(771)
					bool tmp9 = (program == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(771)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(771)
					if ((tmp9)){
						HX_STACK_LINE(771)
						tmp10 = (int)0;
					}
					else{
						HX_STACK_LINE(771)
						tmp10 = program->id;
					}
					HX_STACK_LINE(771)
					int tmp11 = glGetUniformLocation(tmp10,HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(771)
					int _id = tmp11;		HX_STACK_VAR(_id,"_id");
					HX_STACK_LINE(771)
					::opengl::GLObject tmp12 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(771)
					tmp8 = tmp12;
				}
			}
			HX_STACK_LINE(771)
			::opengl::GLObject _location = tmp8;		HX_STACK_VAR(_location,"_location");
			HX_STACK_LINE(771)
			::phoenix::_Shader::Uniform_phoenix_Color tmp9 = _this1->colors->get(HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(771)
			::phoenix::_Shader::Uniform_phoenix_Color _color = tmp9;		HX_STACK_VAR(_color,"_color");
			HX_STACK_LINE(771)
			bool tmp10 = (_color != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(771)
			if ((tmp10)){
				HX_STACK_LINE(771)
				_color->value = c;
			}
			else{
				HX_STACK_LINE(771)
				::phoenix::_Shader::Uniform_phoenix_Color tmp11 = ::phoenix::_Shader::Uniform_phoenix_Color_obj::__new(HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"),c,_location);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(771)
				_color = tmp11;
				HX_STACK_LINE(771)
				::phoenix::_Shader::Uniform_phoenix_Color tmp12 = _color;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(771)
				_this1->colors->set(HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"),tmp12);
			}
			HX_STACK_LINE(771)
			::phoenix::_Shader::Uniform_phoenix_Color tmp11 = _color;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(771)
			_this1->dirty_colors->push(tmp11);
		}
	}
	HX_STACK_LINE(774)
	::phoenix::Color tmp7 = this->outline_color = c;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(774)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_outline_color,return )

::phoenix::Color TextGeometry_obj::set_glow_color( ::phoenix::Color c){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_glow_color",0x7a671820,"phoenix.geometry.TextGeometry.set_glow_color","phoenix/geometry/TextGeometry.hx",779,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(781)
	bool tmp = (c == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(781)
	if ((tmp)){
		HX_STACK_LINE(781)
		::phoenix::Color tmp1 = this->glow_color = c;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(781)
		return tmp1;
	}
	HX_STACK_LINE(783)
	::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(783)
	::phoenix::Shader tmp2 = tmp1->shader;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(783)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(783)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(783)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(783)
	if ((tmp4)){
		HX_STACK_LINE(783)
		tmp5 = this->sdf;
	}
	else{
		HX_STACK_LINE(783)
		tmp5 = false;
	}
	HX_STACK_LINE(783)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(783)
	if ((tmp5)){
		HX_STACK_LINE(783)
		tmp6 = this->unique;
	}
	else{
		HX_STACK_LINE(783)
		tmp6 = false;
	}
	HX_STACK_LINE(783)
	if ((tmp6)){
		HX_STACK_LINE(784)
		::phoenix::geometry::GeometryState tmp7 = this->state;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(784)
		::phoenix::Shader _this = tmp7->shader;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(784)
		{
			HX_STACK_LINE(784)
			::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(784)
			::opengl::GLObject tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(784)
			{
				HX_STACK_LINE(784)
				::opengl::GLObject program = _this->program;		HX_STACK_VAR(program,"program");
				HX_STACK_LINE(784)
				{
					HX_STACK_LINE(784)
					bool tmp9 = (program == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(784)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(784)
					if ((tmp9)){
						HX_STACK_LINE(784)
						tmp10 = (int)0;
					}
					else{
						HX_STACK_LINE(784)
						tmp10 = program->id;
					}
					HX_STACK_LINE(784)
					int tmp11 = glGetUniformLocation(tmp10,HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(784)
					int _id = tmp11;		HX_STACK_VAR(_id,"_id");
					HX_STACK_LINE(784)
					::opengl::GLObject tmp12 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(784)
					tmp8 = tmp12;
				}
			}
			HX_STACK_LINE(784)
			::opengl::GLObject _location = tmp8;		HX_STACK_VAR(_location,"_location");
			HX_STACK_LINE(784)
			::phoenix::_Shader::Uniform_phoenix_Color tmp9 = _this1->colors->get(HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(784)
			::phoenix::_Shader::Uniform_phoenix_Color _color = tmp9;		HX_STACK_VAR(_color,"_color");
			HX_STACK_LINE(784)
			bool tmp10 = (_color != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(784)
			if ((tmp10)){
				HX_STACK_LINE(784)
				_color->value = c;
			}
			else{
				HX_STACK_LINE(784)
				::phoenix::_Shader::Uniform_phoenix_Color tmp11 = ::phoenix::_Shader::Uniform_phoenix_Color_obj::__new(HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"),c,_location);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(784)
				_color = tmp11;
				HX_STACK_LINE(784)
				::phoenix::_Shader::Uniform_phoenix_Color tmp12 = _color;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(784)
				_this1->colors->set(HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"),tmp12);
			}
			HX_STACK_LINE(784)
			::phoenix::_Shader::Uniform_phoenix_Color tmp11 = _color;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(784)
			_this1->dirty_colors->push(tmp11);
		}
	}
	HX_STACK_LINE(787)
	::phoenix::Color tmp7 = this->glow_color = c;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(787)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_glow_color,return )

Void TextGeometry_obj::flush_uniforms( ){
{
		HX_STACK_FRAME("phoenix.geometry.TextGeometry","flush_uniforms",0x77bca14c,"phoenix.geometry.TextGeometry.flush_uniforms","phoenix/geometry/TextGeometry.hx",795,0x3cba14a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(796)
		::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(796)
		::phoenix::Shader tmp1 = tmp->shader;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(796)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(796)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(796)
		if ((tmp2)){
			HX_STACK_LINE(796)
			tmp3 = this->sdf;
		}
		else{
			HX_STACK_LINE(796)
			tmp3 = false;
		}
		HX_STACK_LINE(796)
		if ((tmp3)){
			HX_STACK_LINE(797)
			{
				HX_STACK_LINE(797)
				::phoenix::geometry::GeometryState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(797)
				::phoenix::Shader _this = tmp4->shader;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(797)
				Float tmp5 = this->smoothness;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(797)
				Float _value = tmp5;		HX_STACK_VAR(_value,"_value");
				HX_STACK_LINE(797)
				{
					HX_STACK_LINE(797)
					::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(797)
					::opengl::GLObject tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(797)
					{
						HX_STACK_LINE(797)
						::opengl::GLObject program = _this->program;		HX_STACK_VAR(program,"program");
						HX_STACK_LINE(797)
						{
							HX_STACK_LINE(797)
							bool tmp7 = (program == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(797)
							int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(797)
							if ((tmp7)){
								HX_STACK_LINE(797)
								tmp8 = (int)0;
							}
							else{
								HX_STACK_LINE(797)
								tmp8 = program->id;
							}
							HX_STACK_LINE(797)
							int tmp9 = glGetUniformLocation(tmp8,HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(797)
							int _id = tmp9;		HX_STACK_VAR(_id,"_id");
							HX_STACK_LINE(797)
							::opengl::GLObject tmp10 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(797)
							tmp6 = tmp10;
						}
					}
					HX_STACK_LINE(797)
					::opengl::GLObject _location = tmp6;		HX_STACK_VAR(_location,"_location");
					HX_STACK_LINE(797)
					::phoenix::_Shader::Uniform_Float tmp7 = _this1->floats->get(HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(797)
					::phoenix::_Shader::Uniform_Float _float = tmp7;		HX_STACK_VAR(_float,"_float");
					HX_STACK_LINE(797)
					bool tmp8 = (_float != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(797)
					if ((tmp8)){
						HX_STACK_LINE(797)
						_float->value = _value;
					}
					else{
						HX_STACK_LINE(797)
						::phoenix::_Shader::Uniform_Float tmp9 = ::phoenix::_Shader::Uniform_Float_obj::__new(HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"),_value,_location);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(797)
						_float = tmp9;
						HX_STACK_LINE(797)
						::phoenix::_Shader::Uniform_Float tmp10 = _float;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(797)
						_this1->floats->set(HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"),tmp10);
					}
					HX_STACK_LINE(797)
					::phoenix::_Shader::Uniform_Float tmp9 = _float;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(797)
					_this1->dirty_floats->push(tmp9);
				}
			}
			HX_STACK_LINE(798)
			{
				HX_STACK_LINE(798)
				::phoenix::geometry::GeometryState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(798)
				::phoenix::Shader _this = tmp4->shader;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(798)
				Float tmp5 = this->thickness;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(798)
				Float _value = tmp5;		HX_STACK_VAR(_value,"_value");
				HX_STACK_LINE(798)
				{
					HX_STACK_LINE(798)
					::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(798)
					::opengl::GLObject tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(798)
					{
						HX_STACK_LINE(798)
						::opengl::GLObject program = _this->program;		HX_STACK_VAR(program,"program");
						HX_STACK_LINE(798)
						{
							HX_STACK_LINE(798)
							bool tmp7 = (program == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(798)
							int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(798)
							if ((tmp7)){
								HX_STACK_LINE(798)
								tmp8 = (int)0;
							}
							else{
								HX_STACK_LINE(798)
								tmp8 = program->id;
							}
							HX_STACK_LINE(798)
							int tmp9 = glGetUniformLocation(tmp8,HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(798)
							int _id = tmp9;		HX_STACK_VAR(_id,"_id");
							HX_STACK_LINE(798)
							::opengl::GLObject tmp10 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(798)
							tmp6 = tmp10;
						}
					}
					HX_STACK_LINE(798)
					::opengl::GLObject _location = tmp6;		HX_STACK_VAR(_location,"_location");
					HX_STACK_LINE(798)
					::phoenix::_Shader::Uniform_Float tmp7 = _this1->floats->get(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(798)
					::phoenix::_Shader::Uniform_Float _float = tmp7;		HX_STACK_VAR(_float,"_float");
					HX_STACK_LINE(798)
					bool tmp8 = (_float != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(798)
					if ((tmp8)){
						HX_STACK_LINE(798)
						_float->value = _value;
					}
					else{
						HX_STACK_LINE(798)
						::phoenix::_Shader::Uniform_Float tmp9 = ::phoenix::_Shader::Uniform_Float_obj::__new(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"),_value,_location);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(798)
						_float = tmp9;
						HX_STACK_LINE(798)
						::phoenix::_Shader::Uniform_Float tmp10 = _float;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(798)
						_this1->floats->set(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"),tmp10);
					}
					HX_STACK_LINE(798)
					::phoenix::_Shader::Uniform_Float tmp9 = _float;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(798)
					_this1->dirty_floats->push(tmp9);
				}
			}
			HX_STACK_LINE(799)
			{
				HX_STACK_LINE(799)
				::phoenix::geometry::GeometryState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(799)
				::phoenix::Shader _this = tmp4->shader;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(799)
				Float tmp5 = this->outline;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(799)
				Float _value = tmp5;		HX_STACK_VAR(_value,"_value");
				HX_STACK_LINE(799)
				{
					HX_STACK_LINE(799)
					::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(799)
					::opengl::GLObject tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(799)
					{
						HX_STACK_LINE(799)
						::opengl::GLObject program = _this->program;		HX_STACK_VAR(program,"program");
						HX_STACK_LINE(799)
						{
							HX_STACK_LINE(799)
							bool tmp7 = (program == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(799)
							int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(799)
							if ((tmp7)){
								HX_STACK_LINE(799)
								tmp8 = (int)0;
							}
							else{
								HX_STACK_LINE(799)
								tmp8 = program->id;
							}
							HX_STACK_LINE(799)
							int tmp9 = glGetUniformLocation(tmp8,HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(799)
							int _id = tmp9;		HX_STACK_VAR(_id,"_id");
							HX_STACK_LINE(799)
							::opengl::GLObject tmp10 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(799)
							tmp6 = tmp10;
						}
					}
					HX_STACK_LINE(799)
					::opengl::GLObject _location = tmp6;		HX_STACK_VAR(_location,"_location");
					HX_STACK_LINE(799)
					::phoenix::_Shader::Uniform_Float tmp7 = _this1->floats->get(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(799)
					::phoenix::_Shader::Uniform_Float _float = tmp7;		HX_STACK_VAR(_float,"_float");
					HX_STACK_LINE(799)
					bool tmp8 = (_float != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(799)
					if ((tmp8)){
						HX_STACK_LINE(799)
						_float->value = _value;
					}
					else{
						HX_STACK_LINE(799)
						::phoenix::_Shader::Uniform_Float tmp9 = ::phoenix::_Shader::Uniform_Float_obj::__new(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"),_value,_location);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(799)
						_float = tmp9;
						HX_STACK_LINE(799)
						::phoenix::_Shader::Uniform_Float tmp10 = _float;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(799)
						_this1->floats->set(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"),tmp10);
					}
					HX_STACK_LINE(799)
					::phoenix::_Shader::Uniform_Float tmp9 = _float;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(799)
					_this1->dirty_floats->push(tmp9);
				}
			}
			HX_STACK_LINE(800)
			{
				HX_STACK_LINE(800)
				::phoenix::geometry::GeometryState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(800)
				::phoenix::Shader _this = tmp4->shader;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(800)
				Float tmp5 = this->glow_threshold;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(800)
				Float _value = tmp5;		HX_STACK_VAR(_value,"_value");
				HX_STACK_LINE(800)
				{
					HX_STACK_LINE(800)
					::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(800)
					::opengl::GLObject tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(800)
					{
						HX_STACK_LINE(800)
						::opengl::GLObject program = _this->program;		HX_STACK_VAR(program,"program");
						HX_STACK_LINE(800)
						{
							HX_STACK_LINE(800)
							bool tmp7 = (program == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(800)
							int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(800)
							if ((tmp7)){
								HX_STACK_LINE(800)
								tmp8 = (int)0;
							}
							else{
								HX_STACK_LINE(800)
								tmp8 = program->id;
							}
							HX_STACK_LINE(800)
							int tmp9 = glGetUniformLocation(tmp8,HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(800)
							int _id = tmp9;		HX_STACK_VAR(_id,"_id");
							HX_STACK_LINE(800)
							::opengl::GLObject tmp10 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(800)
							tmp6 = tmp10;
						}
					}
					HX_STACK_LINE(800)
					::opengl::GLObject _location = tmp6;		HX_STACK_VAR(_location,"_location");
					HX_STACK_LINE(800)
					::phoenix::_Shader::Uniform_Float tmp7 = _this1->floats->get(HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(800)
					::phoenix::_Shader::Uniform_Float _float = tmp7;		HX_STACK_VAR(_float,"_float");
					HX_STACK_LINE(800)
					bool tmp8 = (_float != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(800)
					if ((tmp8)){
						HX_STACK_LINE(800)
						_float->value = _value;
					}
					else{
						HX_STACK_LINE(800)
						::phoenix::_Shader::Uniform_Float tmp9 = ::phoenix::_Shader::Uniform_Float_obj::__new(HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"),_value,_location);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(800)
						_float = tmp9;
						HX_STACK_LINE(800)
						::phoenix::_Shader::Uniform_Float tmp10 = _float;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(800)
						_this1->floats->set(HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"),tmp10);
					}
					HX_STACK_LINE(800)
					::phoenix::_Shader::Uniform_Float tmp9 = _float;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(800)
					_this1->dirty_floats->push(tmp9);
				}
			}
			HX_STACK_LINE(801)
			{
				HX_STACK_LINE(801)
				::phoenix::geometry::GeometryState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(801)
				::phoenix::Shader _this = tmp4->shader;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(801)
				Float tmp5 = this->glow_amount;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(801)
				Float _value = tmp5;		HX_STACK_VAR(_value,"_value");
				HX_STACK_LINE(801)
				{
					HX_STACK_LINE(801)
					::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(801)
					::opengl::GLObject tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(801)
					{
						HX_STACK_LINE(801)
						::opengl::GLObject program = _this->program;		HX_STACK_VAR(program,"program");
						HX_STACK_LINE(801)
						{
							HX_STACK_LINE(801)
							bool tmp7 = (program == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(801)
							int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(801)
							if ((tmp7)){
								HX_STACK_LINE(801)
								tmp8 = (int)0;
							}
							else{
								HX_STACK_LINE(801)
								tmp8 = program->id;
							}
							HX_STACK_LINE(801)
							int tmp9 = glGetUniformLocation(tmp8,HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(801)
							int _id = tmp9;		HX_STACK_VAR(_id,"_id");
							HX_STACK_LINE(801)
							::opengl::GLObject tmp10 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(801)
							tmp6 = tmp10;
						}
					}
					HX_STACK_LINE(801)
					::opengl::GLObject _location = tmp6;		HX_STACK_VAR(_location,"_location");
					HX_STACK_LINE(801)
					::phoenix::_Shader::Uniform_Float tmp7 = _this1->floats->get(HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(801)
					::phoenix::_Shader::Uniform_Float _float = tmp7;		HX_STACK_VAR(_float,"_float");
					HX_STACK_LINE(801)
					bool tmp8 = (_float != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(801)
					if ((tmp8)){
						HX_STACK_LINE(801)
						_float->value = _value;
					}
					else{
						HX_STACK_LINE(801)
						::phoenix::_Shader::Uniform_Float tmp9 = ::phoenix::_Shader::Uniform_Float_obj::__new(HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"),_value,_location);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(801)
						_float = tmp9;
						HX_STACK_LINE(801)
						::phoenix::_Shader::Uniform_Float tmp10 = _float;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(801)
						_this1->floats->set(HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"),tmp10);
					}
					HX_STACK_LINE(801)
					::phoenix::_Shader::Uniform_Float tmp9 = _float;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(801)
					_this1->dirty_floats->push(tmp9);
				}
			}
			HX_STACK_LINE(802)
			{
				HX_STACK_LINE(802)
				::phoenix::geometry::GeometryState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(802)
				::phoenix::Shader _this = tmp4->shader;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(802)
				::phoenix::Color tmp5 = this->outline_color;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(802)
				::phoenix::Color _value = tmp5;		HX_STACK_VAR(_value,"_value");
				HX_STACK_LINE(802)
				{
					HX_STACK_LINE(802)
					::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(802)
					::opengl::GLObject tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(802)
					{
						HX_STACK_LINE(802)
						::opengl::GLObject program = _this->program;		HX_STACK_VAR(program,"program");
						HX_STACK_LINE(802)
						{
							HX_STACK_LINE(802)
							bool tmp7 = (program == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(802)
							int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(802)
							if ((tmp7)){
								HX_STACK_LINE(802)
								tmp8 = (int)0;
							}
							else{
								HX_STACK_LINE(802)
								tmp8 = program->id;
							}
							HX_STACK_LINE(802)
							int tmp9 = glGetUniformLocation(tmp8,HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(802)
							int _id = tmp9;		HX_STACK_VAR(_id,"_id");
							HX_STACK_LINE(802)
							::opengl::GLObject tmp10 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(802)
							tmp6 = tmp10;
						}
					}
					HX_STACK_LINE(802)
					::opengl::GLObject _location = tmp6;		HX_STACK_VAR(_location,"_location");
					HX_STACK_LINE(802)
					::phoenix::_Shader::Uniform_phoenix_Color tmp7 = _this1->colors->get(HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(802)
					::phoenix::_Shader::Uniform_phoenix_Color _color = tmp7;		HX_STACK_VAR(_color,"_color");
					HX_STACK_LINE(802)
					bool tmp8 = (_color != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(802)
					if ((tmp8)){
						HX_STACK_LINE(802)
						_color->value = _value;
					}
					else{
						HX_STACK_LINE(802)
						::phoenix::_Shader::Uniform_phoenix_Color tmp9 = ::phoenix::_Shader::Uniform_phoenix_Color_obj::__new(HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"),_value,_location);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(802)
						_color = tmp9;
						HX_STACK_LINE(802)
						::phoenix::_Shader::Uniform_phoenix_Color tmp10 = _color;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(802)
						_this1->colors->set(HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"),tmp10);
					}
					HX_STACK_LINE(802)
					::phoenix::_Shader::Uniform_phoenix_Color tmp9 = _color;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(802)
					_this1->dirty_colors->push(tmp9);
				}
			}
			HX_STACK_LINE(803)
			{
				HX_STACK_LINE(803)
				::phoenix::geometry::GeometryState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(803)
				::phoenix::Shader _this = tmp4->shader;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(803)
				::phoenix::Color tmp5 = this->glow_color;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(803)
				::phoenix::Color _value = tmp5;		HX_STACK_VAR(_value,"_value");
				HX_STACK_LINE(803)
				{
					HX_STACK_LINE(803)
					::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(803)
					::opengl::GLObject tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(803)
					{
						HX_STACK_LINE(803)
						::opengl::GLObject program = _this->program;		HX_STACK_VAR(program,"program");
						HX_STACK_LINE(803)
						{
							HX_STACK_LINE(803)
							bool tmp7 = (program == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(803)
							int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(803)
							if ((tmp7)){
								HX_STACK_LINE(803)
								tmp8 = (int)0;
							}
							else{
								HX_STACK_LINE(803)
								tmp8 = program->id;
							}
							HX_STACK_LINE(803)
							int tmp9 = glGetUniformLocation(tmp8,HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(803)
							int _id = tmp9;		HX_STACK_VAR(_id,"_id");
							HX_STACK_LINE(803)
							::opengl::GLObject tmp10 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(803)
							tmp6 = tmp10;
						}
					}
					HX_STACK_LINE(803)
					::opengl::GLObject _location = tmp6;		HX_STACK_VAR(_location,"_location");
					HX_STACK_LINE(803)
					::phoenix::_Shader::Uniform_phoenix_Color tmp7 = _this1->colors->get(HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(803)
					::phoenix::_Shader::Uniform_phoenix_Color _color = tmp7;		HX_STACK_VAR(_color,"_color");
					HX_STACK_LINE(803)
					bool tmp8 = (_color != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(803)
					if ((tmp8)){
						HX_STACK_LINE(803)
						_color->value = _value;
					}
					else{
						HX_STACK_LINE(803)
						::phoenix::_Shader::Uniform_phoenix_Color tmp9 = ::phoenix::_Shader::Uniform_phoenix_Color_obj::__new(HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"),_value,_location);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(803)
						_color = tmp9;
						HX_STACK_LINE(803)
						::phoenix::_Shader::Uniform_phoenix_Color tmp10 = _color;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(803)
						_this1->colors->set(HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"),tmp10);
					}
					HX_STACK_LINE(803)
					::phoenix::_Shader::Uniform_phoenix_Color tmp9 = _color;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(803)
					_this1->dirty_colors->push(tmp9);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextGeometry_obj,flush_uniforms,(void))

::EReg TextGeometry_obj::tab_regex;


TextGeometry_obj::TextGeometry_obj()
{
}

void TextGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextGeometry);
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(point_size,"point_size");
	HX_MARK_MEMBER_NAME(line_spacing,"line_spacing");
	HX_MARK_MEMBER_NAME(letter_spacing,"letter_spacing");
	HX_MARK_MEMBER_NAME(letter_snapping,"letter_snapping");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(bounds_wrap,"bounds_wrap");
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_MEMBER_NAME(align_vertical,"align_vertical");
	HX_MARK_MEMBER_NAME(sdf,"sdf");
	HX_MARK_MEMBER_NAME(unique,"unique");
	HX_MARK_MEMBER_NAME(smoothness,"smoothness");
	HX_MARK_MEMBER_NAME(thickness,"thickness");
	HX_MARK_MEMBER_NAME(outline,"outline");
	HX_MARK_MEMBER_NAME(outline_color,"outline_color");
	HX_MARK_MEMBER_NAME(glow_threshold,"glow_threshold");
	HX_MARK_MEMBER_NAME(glow_amount,"glow_amount");
	HX_MARK_MEMBER_NAME(glow_color,"glow_color");
	HX_MARK_MEMBER_NAME(line_widths,"line_widths");
	HX_MARK_MEMBER_NAME(text_width,"text_width");
	HX_MARK_MEMBER_NAME(text_height,"text_height");
	HX_MARK_MEMBER_NAME(line_offsets,"line_offsets");
	HX_MARK_MEMBER_NAME(lines,"lines");
	HX_MARK_MEMBER_NAME(emitter,"emitter");
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(text_h_w,"text_h_w");
	HX_MARK_MEMBER_NAME(text_h_h,"text_h_h");
	HX_MARK_MEMBER_NAME(point_ratio,"point_ratio");
	HX_MARK_MEMBER_NAME(dirty_sizing,"dirty_sizing");
	HX_MARK_MEMBER_NAME(dirty_align,"dirty_align");
	HX_MARK_MEMBER_NAME(setup_,"setup_");
	::phoenix::geometry::Geometry_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(point_size,"point_size");
	HX_VISIT_MEMBER_NAME(line_spacing,"line_spacing");
	HX_VISIT_MEMBER_NAME(letter_spacing,"letter_spacing");
	HX_VISIT_MEMBER_NAME(letter_snapping,"letter_snapping");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(bounds_wrap,"bounds_wrap");
	HX_VISIT_MEMBER_NAME(align,"align");
	HX_VISIT_MEMBER_NAME(align_vertical,"align_vertical");
	HX_VISIT_MEMBER_NAME(sdf,"sdf");
	HX_VISIT_MEMBER_NAME(unique,"unique");
	HX_VISIT_MEMBER_NAME(smoothness,"smoothness");
	HX_VISIT_MEMBER_NAME(thickness,"thickness");
	HX_VISIT_MEMBER_NAME(outline,"outline");
	HX_VISIT_MEMBER_NAME(outline_color,"outline_color");
	HX_VISIT_MEMBER_NAME(glow_threshold,"glow_threshold");
	HX_VISIT_MEMBER_NAME(glow_amount,"glow_amount");
	HX_VISIT_MEMBER_NAME(glow_color,"glow_color");
	HX_VISIT_MEMBER_NAME(line_widths,"line_widths");
	HX_VISIT_MEMBER_NAME(text_width,"text_width");
	HX_VISIT_MEMBER_NAME(text_height,"text_height");
	HX_VISIT_MEMBER_NAME(line_offsets,"line_offsets");
	HX_VISIT_MEMBER_NAME(lines,"lines");
	HX_VISIT_MEMBER_NAME(emitter,"emitter");
	HX_VISIT_MEMBER_NAME(cache,"cache");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(text_h_w,"text_h_w");
	HX_VISIT_MEMBER_NAME(text_h_h,"text_h_h");
	HX_VISIT_MEMBER_NAME(point_ratio,"point_ratio");
	HX_VISIT_MEMBER_NAME(dirty_sizing,"dirty_sizing");
	HX_VISIT_MEMBER_NAME(dirty_align,"dirty_align");
	HX_VISIT_MEMBER_NAME(setup_,"setup_");
	::phoenix::geometry::Geometry_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextGeometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sdf") ) { return sdf; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"tidy") ) { return tidy_dyn(); }
		if (HX_FIELD_EQ(inName,"drop") ) { return drop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return align; }
		if (HX_FIELD_EQ(inName,"lines") ) { return lines; }
		if (HX_FIELD_EQ(inName,"cache") ) { return cache; }
		if (HX_FIELD_EQ(inName,"stats") ) { return stats_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"unique") ) { return unique; }
		if (HX_FIELD_EQ(inName,"setup_") ) { return setup_; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { return outline; }
		if (HX_FIELD_EQ(inName,"emitter") ) { return emitter; }
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"text_h_w") ) { return text_h_w; }
		if (HX_FIELD_EQ(inName,"text_h_h") ) { return text_h_h; }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { return thickness; }
		if (HX_FIELD_EQ(inName,"set_align") ) { return set_align_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"point_size") ) { return point_size; }
		if (HX_FIELD_EQ(inName,"smoothness") ) { return smoothness; }
		if (HX_FIELD_EQ(inName,"glow_color") ) { return glow_color; }
		if (HX_FIELD_EQ(inName,"text_width") ) { return text_width; }
		if (HX_FIELD_EQ(inName,"set_bounds") ) { return set_bounds_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bounds_wrap") ) { return bounds_wrap; }
		if (HX_FIELD_EQ(inName,"glow_amount") ) { return glow_amount; }
		if (HX_FIELD_EQ(inName,"line_widths") ) { return line_widths; }
		if (HX_FIELD_EQ(inName,"text_height") ) { return text_height; }
		if (HX_FIELD_EQ(inName,"point_ratio") ) { return point_ratio; }
		if (HX_FIELD_EQ(inName,"dirty_align") ) { return dirty_align; }
		if (HX_FIELD_EQ(inName,"update_text") ) { return update_text_dyn(); }
		if (HX_FIELD_EQ(inName,"update_char") ) { return update_char_dyn(); }
		if (HX_FIELD_EQ(inName,"set_outline") ) { return set_outline_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"line_spacing") ) { return line_spacing; }
		if (HX_FIELD_EQ(inName,"line_offsets") ) { return line_offsets; }
		if (HX_FIELD_EQ(inName,"dirty_sizing") ) { return dirty_sizing; }
		if (HX_FIELD_EQ(inName,"update_sizes") ) { return update_sizes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"outline_color") ) { return outline_color; }
		if (HX_FIELD_EQ(inName,"set_thickness") ) { return set_thickness_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"letter_spacing") ) { return letter_spacing; }
		if (HX_FIELD_EQ(inName,"align_vertical") ) { return align_vertical; }
		if (HX_FIELD_EQ(inName,"glow_threshold") ) { return glow_threshold; }
		if (HX_FIELD_EQ(inName,"set_point_size") ) { return set_point_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_smoothness") ) { return set_smoothness_dyn(); }
		if (HX_FIELD_EQ(inName,"set_glow_color") ) { return set_glow_color_dyn(); }
		if (HX_FIELD_EQ(inName,"flush_uniforms") ) { return flush_uniforms_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"letter_snapping") ) { return letter_snapping; }
		if (HX_FIELD_EQ(inName,"default_options") ) { return default_options_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bounds_wrap") ) { return set_bounds_wrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_glow_amount") ) { return set_glow_amount_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_dirty_sizing") ) { return set_dirty_sizing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_line_spacing") ) { return set_line_spacing_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_outline_color") ) { return set_outline_color_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_letter_spacing") ) { return set_letter_spacing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_align_vertical") ) { return set_align_vertical_dyn(); }
		if (HX_FIELD_EQ(inName,"set_glow_threshold") ) { return set_glow_threshold_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_letter_snapping") ) { return set_letter_snapping_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextGeometry_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"tab_regex") ) { outValue = tab_regex; return true;  }
	}
	return false;
}

Dynamic TextGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sdf") ) { sdf=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue);text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == hx::paccAlways) return set_font(inValue);font=inValue.Cast< ::phoenix::BitmapFont >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { if (inCallProp == hx::paccAlways) return set_align(inValue);align=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lines") ) { lines=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { if (inCallProp == hx::paccAlways) return set_bounds(inValue);bounds=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unique") ) { unique=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"setup_") ) { setup_=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { if (inCallProp == hx::paccAlways) return set_outline(inValue);outline=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emitter") ) { emitter=inValue.Cast< ::luxe::Emitter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"text_h_w") ) { text_h_w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text_h_h") ) { text_h_h=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { if (inCallProp == hx::paccAlways) return set_thickness(inValue);thickness=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"point_size") ) { if (inCallProp == hx::paccAlways) return set_point_size(inValue);point_size=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smoothness") ) { if (inCallProp == hx::paccAlways) return set_smoothness(inValue);smoothness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glow_color") ) { if (inCallProp == hx::paccAlways) return set_glow_color(inValue);glow_color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text_width") ) { text_width=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bounds_wrap") ) { if (inCallProp == hx::paccAlways) return set_bounds_wrap(inValue);bounds_wrap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glow_amount") ) { if (inCallProp == hx::paccAlways) return set_glow_amount(inValue);glow_amount=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"line_widths") ) { line_widths=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text_height") ) { text_height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point_ratio") ) { point_ratio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_align") ) { dirty_align=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"line_spacing") ) { if (inCallProp == hx::paccAlways) return set_line_spacing(inValue);line_spacing=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"line_offsets") ) { line_offsets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_sizing") ) { if (inCallProp == hx::paccAlways) return set_dirty_sizing(inValue);dirty_sizing=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"outline_color") ) { if (inCallProp == hx::paccAlways) return set_outline_color(inValue);outline_color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"letter_spacing") ) { if (inCallProp == hx::paccAlways) return set_letter_spacing(inValue);letter_spacing=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"align_vertical") ) { if (inCallProp == hx::paccAlways) return set_align_vertical(inValue);align_vertical=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glow_threshold") ) { if (inCallProp == hx::paccAlways) return set_glow_threshold(inValue);glow_threshold=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"letter_snapping") ) { if (inCallProp == hx::paccAlways) return set_letter_snapping(inValue);letter_snapping=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextGeometry_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"tab_regex") ) { tab_regex=ioValue.Cast< ::EReg >(); return true; }
	}
	return false;
}

void TextGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b"));
	outFields->push(HX_HCSTRING("line_spacing","\xf8","\xb8","\xad","\x3c"));
	outFields->push(HX_HCSTRING("letter_spacing","\xea","\x8f","\xec","\x6d"));
	outFields->push(HX_HCSTRING("letter_snapping","\x75","\xb3","\xb8","\xee"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("bounds_wrap","\x14","\x47","\xee","\xec"));
	outFields->push(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"));
	outFields->push(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53"));
	outFields->push(HX_HCSTRING("sdf","\xb5","\x9a","\x57","\x00"));
	outFields->push(HX_HCSTRING("unique","\x11","\x93","\x92","\x63"));
	outFields->push(HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"));
	outFields->push(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"));
	outFields->push(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"));
	outFields->push(HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"));
	outFields->push(HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"));
	outFields->push(HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"));
	outFields->push(HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"));
	outFields->push(HX_HCSTRING("line_widths","\xd8","\x2f","\x76","\x2b"));
	outFields->push(HX_HCSTRING("text_width","\xb4","\x09","\xa6","\xc8"));
	outFields->push(HX_HCSTRING("text_height","\x79","\xec","\xf1","\x7e"));
	outFields->push(HX_HCSTRING("line_offsets","\xf5","\x8e","\x57","\x82"));
	outFields->push(HX_HCSTRING("lines","\xff","\xdd","\x01","\x75"));
	outFields->push(HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"));
	outFields->push(HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	outFields->push(HX_HCSTRING("text_h_w","\xce","\xa9","\x3c","\x57"));
	outFields->push(HX_HCSTRING("text_h_h","\xbf","\xa9","\x3c","\x57"));
	outFields->push(HX_HCSTRING("point_ratio","\x9c","\x4c","\x0f","\x92"));
	outFields->push(HX_HCSTRING("dirty_sizing","\x0b","\x44","\xee","\xf8"));
	outFields->push(HX_HCSTRING("dirty_align","\x98","\x47","\xe7","\xd4"));
	outFields->push(HX_HCSTRING("setup_","\x42","\xff","\x88","\x6f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TextGeometry_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsObject /*::phoenix::BitmapFont*/ ,(int)offsetof(TextGeometry_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,point_size),HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,line_spacing),HX_HCSTRING("line_spacing","\xf8","\xb8","\xad","\x3c")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,letter_spacing),HX_HCSTRING("letter_spacing","\xea","\x8f","\xec","\x6d")},
	{hx::fsBool,(int)offsetof(TextGeometry_obj,letter_snapping),HX_HCSTRING("letter_snapping","\x75","\xb3","\xb8","\xee")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(TextGeometry_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsBool,(int)offsetof(TextGeometry_obj,bounds_wrap),HX_HCSTRING("bounds_wrap","\x14","\x47","\xee","\xec")},
	{hx::fsInt,(int)offsetof(TextGeometry_obj,align),HX_HCSTRING("align","\xc5","\x56","\x91","\x21")},
	{hx::fsInt,(int)offsetof(TextGeometry_obj,align_vertical),HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53")},
	{hx::fsBool,(int)offsetof(TextGeometry_obj,sdf),HX_HCSTRING("sdf","\xb5","\x9a","\x57","\x00")},
	{hx::fsBool,(int)offsetof(TextGeometry_obj,unique),HX_HCSTRING("unique","\x11","\x93","\x92","\x63")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,smoothness),HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,thickness),HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,outline),HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(TextGeometry_obj,outline_color),HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,glow_threshold),HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,glow_amount),HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(TextGeometry_obj,glow_color),HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextGeometry_obj,line_widths),HX_HCSTRING("line_widths","\xd8","\x2f","\x76","\x2b")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,text_width),HX_HCSTRING("text_width","\xb4","\x09","\xa6","\xc8")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,text_height),HX_HCSTRING("text_height","\x79","\xec","\xf1","\x7e")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextGeometry_obj,line_offsets),HX_HCSTRING("line_offsets","\xf5","\x8e","\x57","\x82")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TextGeometry_obj,lines),HX_HCSTRING("lines","\xff","\xdd","\x01","\x75")},
	{hx::fsObject /*::luxe::Emitter*/ ,(int)offsetof(TextGeometry_obj,emitter),HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextGeometry_obj,cache),HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextGeometry_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,text_h_w),HX_HCSTRING("text_h_w","\xce","\xa9","\x3c","\x57")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,text_h_h),HX_HCSTRING("text_h_h","\xbf","\xa9","\x3c","\x57")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,point_ratio),HX_HCSTRING("point_ratio","\x9c","\x4c","\x0f","\x92")},
	{hx::fsBool,(int)offsetof(TextGeometry_obj,dirty_sizing),HX_HCSTRING("dirty_sizing","\x0b","\x44","\xee","\xf8")},
	{hx::fsBool,(int)offsetof(TextGeometry_obj,dirty_align),HX_HCSTRING("dirty_align","\x98","\x47","\xe7","\xd4")},
	{hx::fsBool,(int)offsetof(TextGeometry_obj,setup_),HX_HCSTRING("setup_","\x42","\xff","\x88","\x6f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::EReg*/ ,(void *) &TextGeometry_obj::tab_regex,HX_HCSTRING("tab_regex","\x1d","\xbe","\x5e","\x0f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b"),
	HX_HCSTRING("line_spacing","\xf8","\xb8","\xad","\x3c"),
	HX_HCSTRING("letter_spacing","\xea","\x8f","\xec","\x6d"),
	HX_HCSTRING("letter_snapping","\x75","\xb3","\xb8","\xee"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("bounds_wrap","\x14","\x47","\xee","\xec"),
	HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),
	HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53"),
	HX_HCSTRING("sdf","\xb5","\x9a","\x57","\x00"),
	HX_HCSTRING("unique","\x11","\x93","\x92","\x63"),
	HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"),
	HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"),
	HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"),
	HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"),
	HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"),
	HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"),
	HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"),
	HX_HCSTRING("line_widths","\xd8","\x2f","\x76","\x2b"),
	HX_HCSTRING("text_width","\xb4","\x09","\xa6","\xc8"),
	HX_HCSTRING("text_height","\x79","\xec","\xf1","\x7e"),
	HX_HCSTRING("line_offsets","\xf5","\x8e","\x57","\x82"),
	HX_HCSTRING("lines","\xff","\xdd","\x01","\x75"),
	HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"),
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("text_h_w","\xce","\xa9","\x3c","\x57"),
	HX_HCSTRING("text_h_h","\xbf","\xa9","\x3c","\x57"),
	HX_HCSTRING("point_ratio","\x9c","\x4c","\x0f","\x92"),
	HX_HCSTRING("dirty_sizing","\x0b","\x44","\xee","\xf8"),
	HX_HCSTRING("dirty_align","\x98","\x47","\xe7","\xd4"),
	HX_HCSTRING("setup_","\x42","\xff","\x88","\x6f"),
	HX_HCSTRING("tidy","\x4a","\xc4","\xfc","\x4c"),
	HX_HCSTRING("drop","\x2f","\x38","\x70","\x42"),
	HX_HCSTRING("default_options","\xa0","\x8e","\x12","\x69"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"),
	HX_HCSTRING("update_sizes","\x9c","\x82","\xef","\x43"),
	HX_HCSTRING("update_text","\xe3","\xe1","\x75","\x52"),
	HX_HCSTRING("update_char","\x0c","\x74","\x3b","\x47"),
	HX_HCSTRING("set_dirty_sizing","\x08","\x1e","\xcf","\x53"),
	HX_HCSTRING("set_bounds","\xb2","\x94","\x22","\x5a"),
	HX_HCSTRING("set_bounds_wrap","\xb7","\x7b","\x9b","\xa9"),
	HX_HCSTRING("set_letter_snapping","\x98","\x75","\x60","\xb6"),
	HX_HCSTRING("set_line_spacing","\xf5","\x92","\x8e","\x97"),
	HX_HCSTRING("set_letter_spacing","\x27","\xa3","\x35","\xe6"),
	HX_HCSTRING("set_align","\x28","\x9f","\x8b","\x48"),
	HX_HCSTRING("set_align_vertical","\xad","\xef","\xd6","\xcb"),
	HX_HCSTRING("set_point_size","\x0d","\xd7","\x0a","\xe2"),
	HX_HCSTRING("set_font","\xcc","\x72","\xd8","\x71"),
	HX_HCSTRING("set_smoothness","\x82","\xa8","\x15","\x29"),
	HX_HCSTRING("set_thickness","\x57","\xa7","\xd0","\x60"),
	HX_HCSTRING("set_outline","\xa5","\x7e","\x25","\x72"),
	HX_HCSTRING("set_glow_threshold","\x76","\x33","\xe5","\x32"),
	HX_HCSTRING("set_glow_amount","\x2d","\xa5","\x2e","\x06"),
	HX_HCSTRING("set_outline_color","\x09","\x41","\xf1","\xbf"),
	HX_HCSTRING("set_glow_color","\xae","\x5f","\x81","\x59"),
	HX_HCSTRING("flush_uniforms","\xda","\xe8","\xd6","\x56"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextGeometry_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextGeometry_obj::tab_regex,"tab_regex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextGeometry_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextGeometry_obj::tab_regex,"tab_regex");
};

#endif

hx::Class TextGeometry_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("tab_regex","\x1d","\xbe","\x5e","\x0f"),
	::String(null()) };

void TextGeometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.TextGeometry","\xbc","\x0f","\x18","\xb9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextGeometry_obj::__GetStatic;
	__mClass->mSetStaticField = &TextGeometry_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextGeometry_obj >;
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

void TextGeometry_obj::__boot()
{
	tab_regex= ::EReg_obj::__new(HX_HCSTRING("\t","\x09","\x00","\x00","\x00"),HX_HCSTRING("gim","\x0b","\x84","\x4e","\x00"));
}

} // end namespace phoenix
} // end namespace geometry
