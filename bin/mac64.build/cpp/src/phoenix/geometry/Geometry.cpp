#include <hxcpp.h>

#include "linc_opengl.h"
#include "linc_timestamp.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
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
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
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
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryKey
#include <phoenix/geometry/GeometryKey.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
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
namespace phoenix{
namespace geometry{

Void Geometry_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.geometry.Geometry","new",0xf65473e1,"phoenix.geometry.Geometry.new","phoenix/geometry/Geometry.hx",25,0xdab136cf)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(525)
	this->_prev_count = (int)0;
	HX_STACK_LINE(92)
	this->dirty_based = true;
	HX_STACK_LINE(87)
	this->dirty = false;
	HX_STACK_LINE(86)
	this->locked = false;
	HX_STACK_LINE(85)
	this->immediate = false;
	HX_STACK_LINE(84)
	this->visible = true;
	HX_STACK_LINE(81)
	this->dirty_clip = false;
	HX_STACK_LINE(80)
	this->dirty_depth = false;
	HX_STACK_LINE(79)
	this->dirty_shader = false;
	HX_STACK_LINE(78)
	this->dirty_texture = false;
	HX_STACK_LINE(77)
	this->dirty_primitive_type = false;
	HX_STACK_LINE(75)
	this->shadow_clip = false;
	HX_STACK_LINE(74)
	this->shadow_depth = ((Float)0.0);
	HX_STACK_LINE(62)
	this->id = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(61)
	this->uuid = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(60)
	this->dropped = false;
	HX_STACK_LINE(55)
	this->added = false;
	HX_STACK_LINE(39)
	this->buffer_type = (int)35048;
	HX_STACK_LINE(38)
	this->buffer_based = false;
	HX_STACK_LINE(36)
	this->object_space = false;
	HX_STACK_LINE(108)
	::luxe::utils::Utils tmp = ::Luxe_obj::utils;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	::String tmp1 = tmp->uniqueid(null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	this->uuid = tmp1;
	HX_STACK_LINE(109)
	::String tmp2 = this->uuid;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(109)
	this->id = tmp2;
	HX_STACK_LINE(111)
	::phoenix::geometry::GeometryState tmp3 = ::phoenix::geometry::GeometryState_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(111)
	this->state = tmp3;
	HX_STACK_LINE(112)
	this->vertices = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(113)
	this->batchers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(116)
	::phoenix::Transform tmp4 = ::phoenix::Transform_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(116)
	this->transform = tmp4;
	HX_STACK_LINE(119)
	::phoenix::Vector tmp5 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(119)
	this->_final_vert_position = tmp5;
	HX_STACK_LINE(122)
	this->set_clip_rect(null());
	HX_STACK_LINE(123)
	this->set_clip(false);
	HX_STACK_LINE(126)
	bool _do_add = true;		HX_STACK_VAR(_do_add,"_do_add");
	HX_STACK_LINE(129)
	::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(129)
	{
		HX_STACK_LINE(129)
		bool tmp7 = (_options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(129)
		if ((tmp7)){
			HX_STACK_LINE(129)
			::String tmp8 = this->uuid;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(129)
			_options->__FieldRef(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")) = tmp8;
		}
		HX_STACK_LINE(129)
		tmp6 = _options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(129)
	this->id = tmp6;
	HX_STACK_LINE(130)
	::phoenix::Color tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(130)
	{
		HX_STACK_LINE(130)
		bool tmp8 = (_options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(130)
		if ((tmp8)){
			HX_STACK_LINE(130)
			::phoenix::Color tmp9 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(130)
			_options->__FieldRef(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) = tmp9;
		}
		HX_STACK_LINE(130)
		tmp7 = _options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
	}
	HX_STACK_LINE(130)
	this->set_color(tmp7);
	HX_STACK_LINE(131)
	Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(131)
	{
		HX_STACK_LINE(131)
		bool tmp9 = (_options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(131)
		if ((tmp9)){
			HX_STACK_LINE(131)
			_options->__FieldRef(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")) = true;
		}
		HX_STACK_LINE(131)
		tmp8 = _options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );
	}
	HX_STACK_LINE(131)
	this->set_visible(tmp8);
	HX_STACK_LINE(132)
	Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(132)
	{
		HX_STACK_LINE(132)
		bool tmp10 = (_options->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(132)
		if ((tmp10)){
			HX_STACK_LINE(132)
			_options->__FieldRef(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf")) = false;
		}
		HX_STACK_LINE(132)
		tmp9 = _options->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic );
	}
	HX_STACK_LINE(132)
	this->immediate = tmp9;
	HX_STACK_LINE(135)
	Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(135)
	{
		HX_STACK_LINE(135)
		bool tmp11 = (_options->__Field(HX_HCSTRING("buffer_based","\x74","\xeb","\xe1","\x79"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(135)
		if ((tmp11)){
			HX_STACK_LINE(135)
			_options->__FieldRef(HX_HCSTRING("buffer_based","\x74","\xeb","\xe1","\x79")) = false;
		}
		HX_STACK_LINE(135)
		tmp10 = _options->__Field(HX_HCSTRING("buffer_based","\x74","\xeb","\xe1","\x79"), hx::paccDynamic );
	}
	HX_STACK_LINE(135)
	this->buffer_based = tmp10;
	HX_STACK_LINE(136)
	Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(136)
	{
		HX_STACK_LINE(136)
		bool tmp12 = (_options->__Field(HX_HCSTRING("object_space","\x06","\x6c","\xc3","\x22"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(136)
		if ((tmp12)){
			HX_STACK_LINE(136)
			_options->__FieldRef(HX_HCSTRING("object_space","\x06","\x6c","\xc3","\x22")) = false;
		}
		HX_STACK_LINE(136)
		tmp11 = _options->__Field(HX_HCSTRING("object_space","\x06","\x6c","\xc3","\x22"), hx::paccDynamic );
	}
	HX_STACK_LINE(136)
	this->object_space = tmp11;
	HX_STACK_LINE(139)
	{
		HX_STACK_LINE(139)
		Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			bool tmp13 = (_options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(139)
			if ((tmp13)){
				HX_STACK_LINE(139)
				::phoenix::geometry::GeometryState tmp14 = this->state;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(139)
				_options->__FieldRef(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")) = tmp14->depth;
			}
			HX_STACK_LINE(139)
			tmp12 = _options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );
		}
		HX_STACK_LINE(139)
		Float val = tmp12;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(139)
		::phoenix::geometry::GeometryState tmp13 = this->state;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(139)
		tmp13->depth = val;
	}
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		::phoenix::geometry::GeometryState tmp12 = this->state;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(140)
		::phoenix::geometry::GeometryState _this = tmp12;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(140)
		::phoenix::Texture tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			bool tmp14 = (_options->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(140)
			if ((tmp14)){
				HX_STACK_LINE(140)
				::phoenix::geometry::GeometryState tmp15 = this->state;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(140)
				_options->__FieldRef(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")) = tmp15->texture;
			}
			HX_STACK_LINE(140)
			tmp13 = _options->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic );
		}
		HX_STACK_LINE(140)
		::phoenix::Texture val = tmp13;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(140)
		_this->dirty = true;
		HX_STACK_LINE(140)
		_this->texture = val;
	}
	HX_STACK_LINE(141)
	{
		HX_STACK_LINE(141)
		::phoenix::geometry::GeometryState tmp12 = this->state;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(141)
		::phoenix::geometry::GeometryState _this = tmp12;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(141)
		Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(141)
		{
			HX_STACK_LINE(141)
			bool tmp14 = (_options->__Field(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(141)
			if ((tmp14)){
				HX_STACK_LINE(141)
				::phoenix::geometry::GeometryState tmp15 = this->state;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(141)
				_options->__FieldRef(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88")) = tmp15->primitive_type;
			}
			HX_STACK_LINE(141)
			tmp13 = _options->__Field(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88"), hx::paccDynamic );
		}
		HX_STACK_LINE(141)
		int val = tmp13;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(141)
		_this->dirty = true;
		HX_STACK_LINE(141)
		_this->primitive_type = val;
	}
	HX_STACK_LINE(142)
	{
		HX_STACK_LINE(142)
		::phoenix::geometry::GeometryState tmp12 = this->state;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(142)
		::phoenix::geometry::GeometryState _this = tmp12;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(142)
		::phoenix::Shader tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(142)
		{
			HX_STACK_LINE(142)
			bool tmp14 = (_options->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(142)
			if ((tmp14)){
				HX_STACK_LINE(142)
				::phoenix::geometry::GeometryState tmp15 = this->state;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(142)
				_options->__FieldRef(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")) = tmp15->shader;
			}
			HX_STACK_LINE(142)
			tmp13 = _options->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );
		}
		HX_STACK_LINE(142)
		::phoenix::Shader val = tmp13;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(142)
		_this->dirty = true;
		HX_STACK_LINE(142)
		_this->shader = val;
	}
	HX_STACK_LINE(144)
	bool tmp12 = (_options->__Field(HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(144)
	if ((tmp12)){
		HX_STACK_LINE(145)
		::phoenix::Rectangle _r = _options->__Field(HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"), hx::paccDynamic );		HX_STACK_VAR(_r,"_r");
		HX_STACK_LINE(146)
		{
			HX_STACK_LINE(146)
			::phoenix::geometry::GeometryState tmp13 = this->state;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(146)
			::phoenix::geometry::GeometryState _this = tmp13;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(146)
			_this->dirty = true;
			HX_STACK_LINE(146)
			_this->clip_x = _r->x;
		}
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			::phoenix::geometry::GeometryState tmp13 = this->state;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(147)
			::phoenix::geometry::GeometryState _this = tmp13;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(147)
			_this->dirty = true;
			HX_STACK_LINE(147)
			_this->clip_y = _r->y;
		}
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			::phoenix::geometry::GeometryState tmp13 = this->state;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(148)
			::phoenix::geometry::GeometryState _this = tmp13;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(148)
			_this->dirty = true;
			HX_STACK_LINE(148)
			_this->clip_w = _r->w;
		}
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			::phoenix::geometry::GeometryState tmp13 = this->state;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(149)
			::phoenix::geometry::GeometryState _this = tmp13;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(149)
			_this->dirty = true;
			HX_STACK_LINE(149)
			_this->clip_h = _r->h;
		}
	}
	HX_STACK_LINE(152)
	{
		HX_STACK_LINE(152)
		::phoenix::Vector tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(152)
		{
			HX_STACK_LINE(152)
			bool tmp14 = (_options->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(152)
			if ((tmp14)){
				HX_STACK_LINE(152)
				::phoenix::Transform tmp15 = this->transform;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(152)
				::phoenix::Vector tmp16 = tmp15->local->pos;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(152)
				_options->__FieldRef(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")) = tmp16;
			}
			HX_STACK_LINE(152)
			tmp13 = _options->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );
		}
		HX_STACK_LINE(152)
		::phoenix::Vector value = tmp13;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(152)
		{
			HX_STACK_LINE(152)
			::phoenix::Transform tmp14 = this->transform;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(152)
			::phoenix::Spatial _this = tmp14->local;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(152)
			_this->pos = value;
			HX_STACK_LINE(152)
			bool tmp15 = (value != null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(152)
			if ((tmp15)){
				HX_STACK_LINE(152)
				::phoenix::Vector tmp16 = _this->pos;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(152)
				Dynamic tmp17 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(152)
				::phoenix::Vector_obj::Listen(tmp16,tmp17);
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					bool tmp18 = (_this->pos_changed != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(152)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(152)
					if ((tmp18)){
						HX_STACK_LINE(152)
						bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(152)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(152)
						tmp19 = !(tmp21);
					}
					else{
						HX_STACK_LINE(152)
						tmp19 = false;
					}
					HX_STACK_LINE(152)
					if ((tmp19)){
						HX_STACK_LINE(152)
						::phoenix::Vector tmp20 = _this->pos;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(152)
						_this->pos_changed(tmp20);
					}
				}
			}
			HX_STACK_LINE(152)
			_this->pos;
		}
	}
	HX_STACK_LINE(153)
	{
		HX_STACK_LINE(153)
		::phoenix::Quaternion tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			bool tmp14 = (_options->__Field(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(153)
			if ((tmp14)){
				HX_STACK_LINE(153)
				::phoenix::Transform tmp15 = this->transform;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(153)
				::phoenix::Quaternion tmp16 = tmp15->local->rotation;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(153)
				_options->__FieldRef(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08")) = tmp16;
			}
			HX_STACK_LINE(153)
			tmp13 = _options->__Field(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"), hx::paccDynamic );
		}
		HX_STACK_LINE(153)
		::phoenix::Quaternion value = tmp13;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			::phoenix::Transform tmp14 = this->transform;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(153)
			::phoenix::Spatial _this = tmp14->local;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(153)
			_this->rotation = value;
			HX_STACK_LINE(153)
			bool tmp15 = (value != null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(153)
			if ((tmp15)){
				HX_STACK_LINE(153)
				{
					HX_STACK_LINE(153)
					::phoenix::Quaternion _q = _this->rotation;		HX_STACK_VAR(_q,"_q");
					HX_STACK_LINE(153)
					Dynamic listener = _this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(153)
					_q->listen_x = listener;
					HX_STACK_LINE(153)
					_q->listen_y = listener;
					HX_STACK_LINE(153)
					_q->listen_z = listener;
					HX_STACK_LINE(153)
					_q->listen_w = listener;
				}
				HX_STACK_LINE(153)
				{
					HX_STACK_LINE(153)
					bool tmp16 = (_this->rotation_changed != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(153)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(153)
					if ((tmp16)){
						HX_STACK_LINE(153)
						bool tmp18 = _this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(153)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(153)
						tmp17 = !(tmp19);
					}
					else{
						HX_STACK_LINE(153)
						tmp17 = false;
					}
					HX_STACK_LINE(153)
					if ((tmp17)){
						HX_STACK_LINE(153)
						::phoenix::Quaternion tmp18 = _this->rotation;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(153)
						_this->rotation_changed(tmp18);
					}
				}
			}
			HX_STACK_LINE(153)
			_this->rotation;
		}
	}
	HX_STACK_LINE(154)
	{
		HX_STACK_LINE(154)
		::phoenix::Vector tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(154)
		{
			HX_STACK_LINE(154)
			bool tmp14 = (_options->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(154)
			if ((tmp14)){
				HX_STACK_LINE(154)
				::phoenix::Transform tmp15 = this->transform;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(154)
				::phoenix::Vector tmp16 = tmp15->local->scale;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(154)
				_options->__FieldRef(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")) = tmp16;
			}
			HX_STACK_LINE(154)
			tmp13 = _options->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );
		}
		HX_STACK_LINE(154)
		::phoenix::Vector value = tmp13;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(154)
		{
			HX_STACK_LINE(154)
			::phoenix::Transform tmp14 = this->transform;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(154)
			::phoenix::Spatial _this = tmp14->local;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(154)
			_this->scale = value;
			HX_STACK_LINE(154)
			bool tmp15 = (value != null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(154)
			if ((tmp15)){
				HX_STACK_LINE(154)
				::phoenix::Vector tmp16 = _this->scale;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(154)
				Dynamic tmp17 = _this->_scale_change_dyn();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(154)
				::phoenix::Vector_obj::Listen(tmp16,tmp17);
				HX_STACK_LINE(154)
				{
					HX_STACK_LINE(154)
					bool tmp18 = (_this->scale_changed != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(154)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(154)
					if ((tmp18)){
						HX_STACK_LINE(154)
						bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(154)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(154)
						tmp19 = !(tmp21);
					}
					else{
						HX_STACK_LINE(154)
						tmp19 = false;
					}
					HX_STACK_LINE(154)
					if ((tmp19)){
						HX_STACK_LINE(154)
						::phoenix::Vector tmp20 = _this->scale;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(154)
						_this->scale_changed(tmp20);
					}
				}
			}
			HX_STACK_LINE(154)
			_this->scale;
		}
	}
	HX_STACK_LINE(155)
	{
		HX_STACK_LINE(155)
		::phoenix::Transform tmp13 = this->transform;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(155)
		::phoenix::Transform _this = tmp13;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(155)
		::phoenix::Vector tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(155)
		{
			HX_STACK_LINE(155)
			bool tmp15 = (_options->__Field(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(155)
			if ((tmp15)){
				HX_STACK_LINE(155)
				::phoenix::Transform tmp16 = this->transform;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(155)
				_options->__FieldRef(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b")) = tmp16->origin;
			}
			HX_STACK_LINE(155)
			tmp14 = _options->__Field(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"), hx::paccDynamic );
		}
		HX_STACK_LINE(155)
		::phoenix::Vector o = tmp14;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(155)
		{
			HX_STACK_LINE(155)
			_this->dirty = true;
			HX_STACK_LINE(155)
			bool tmp15 = _this->dirty;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(155)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(155)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(155)
			if ((tmp16)){
				HX_STACK_LINE(155)
				bool tmp18 = _this->_setup;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(155)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(155)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(155)
				tmp17 = !(tmp20);
			}
			else{
				HX_STACK_LINE(155)
				tmp17 = false;
			}
			HX_STACK_LINE(155)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(155)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(155)
			if ((tmp18)){
				HX_STACK_LINE(155)
				tmp19 = (_this->_dirty_handlers != null());
			}
			else{
				HX_STACK_LINE(155)
				tmp19 = false;
			}
			HX_STACK_LINE(155)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(155)
			if ((tmp19)){
				HX_STACK_LINE(155)
				int tmp21 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(155)
				int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(155)
				tmp20 = (tmp22 > (int)0);
			}
			else{
				HX_STACK_LINE(155)
				tmp20 = false;
			}
			HX_STACK_LINE(155)
			if ((tmp20)){
				HX_STACK_LINE(155)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(155)
				cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(155)
				while((true)){
					HX_STACK_LINE(155)
					bool tmp21 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(155)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(155)
					if ((tmp22)){
						HX_STACK_LINE(155)
						break;
					}
					HX_STACK_LINE(155)
					Dynamic tmp23 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(155)
					Dynamic _handler = tmp23;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(155)
					++(_g);
					HX_STACK_LINE(155)
					bool tmp24 = (_handler != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(155)
					if ((tmp24)){
						HX_STACK_LINE(155)
						::phoenix::Transform tmp25 = _this;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(155)
						_handler(tmp25).Cast< Void >();
					}
				}
			}
			HX_STACK_LINE(155)
			_this->dirty;
		}
		HX_STACK_LINE(155)
		_this->origin = o;
		HX_STACK_LINE(155)
		bool tmp15 = (_this->_origin_handlers != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(155)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(155)
		if ((tmp15)){
			HX_STACK_LINE(155)
			int tmp17 = _this->_origin_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(155)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(155)
			tmp16 = (tmp18 > (int)0);
		}
		else{
			HX_STACK_LINE(155)
			tmp16 = false;
		}
		HX_STACK_LINE(155)
		if ((tmp16)){
			HX_STACK_LINE(155)
			::phoenix::Vector _origin = _this->origin;		HX_STACK_VAR(_origin,"_origin");
			HX_STACK_LINE(155)
			{
				HX_STACK_LINE(155)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(155)
				cpp::ArrayBase _g1 = _this->_origin_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(155)
				while((true)){
					HX_STACK_LINE(155)
					bool tmp17 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(155)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(155)
					if ((tmp18)){
						HX_STACK_LINE(155)
						break;
					}
					HX_STACK_LINE(155)
					Dynamic tmp19 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(155)
					Dynamic _handler = tmp19;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(155)
					++(_g);
					HX_STACK_LINE(155)
					bool tmp20 = (_handler != null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(155)
					if ((tmp20)){
						HX_STACK_LINE(155)
						::phoenix::Vector tmp21 = _origin;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(155)
						_handler(tmp21).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(155)
		_this->origin;
	}
	HX_STACK_LINE(157)
	bool tmp13 = (_options->__Field(HX_HCSTRING("no_batcher_add","\x0b","\x25","\xc3","\x59"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(157)
	bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(157)
	if ((tmp13)){
		HX_STACK_LINE(157)
		tmp14 = (_options->__Field(HX_HCSTRING("no_batcher_add","\x0b","\x25","\xc3","\x59"), hx::paccDynamic ) == true);
	}
	else{
		HX_STACK_LINE(157)
		tmp14 = false;
	}
	HX_STACK_LINE(157)
	if ((tmp14)){
		HX_STACK_LINE(158)
		_do_add = false;
	}
	HX_STACK_LINE(161)
	(::phoenix::geometry::Geometry_obj::_sequence_key)++;
	HX_STACK_LINE(163)
	::phoenix::geometry::GeometryKey tmp15 = ::phoenix::geometry::GeometryKey_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(163)
	this->key = tmp15;
	HX_STACK_LINE(165)
	::String tmp16 = this->uuid;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(165)
	::phoenix::geometry::GeometryKey tmp17 = this->key;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(165)
	tmp17->uuid = tmp16;
	HX_STACK_LINE(166)
	Float tmp18 = linc::timestamp::now();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(166)
	Float tmp19 = ::snow::modules::sdl::Runtime_obj::timestamp_start;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(166)
	Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(166)
	::phoenix::geometry::GeometryKey tmp21 = this->key;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(166)
	tmp21->timestamp = tmp20;
	HX_STACK_LINE(167)
	int tmp22 = ::phoenix::geometry::Geometry_obj::_sequence_key;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(167)
	::phoenix::geometry::GeometryKey tmp23 = this->key;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(167)
	tmp23->sequence = tmp22;
	HX_STACK_LINE(168)
	::phoenix::geometry::GeometryState tmp24 = this->state;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(168)
	::phoenix::geometry::GeometryKey tmp25 = this->key;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(168)
	tmp25->primitive_type = tmp24->primitive_type;
	HX_STACK_LINE(169)
	::phoenix::geometry::GeometryState tmp26 = this->state;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(169)
	::phoenix::geometry::GeometryKey tmp27 = this->key;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(169)
	tmp27->texture = tmp26->texture;
	HX_STACK_LINE(170)
	::phoenix::geometry::GeometryState tmp28 = this->state;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(170)
	::phoenix::geometry::GeometryKey tmp29 = this->key;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(170)
	tmp29->shader = tmp28->shader;
	HX_STACK_LINE(171)
	::phoenix::geometry::GeometryState tmp30 = this->state;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(171)
	::phoenix::geometry::GeometryKey tmp31 = this->key;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(171)
	tmp31->depth = tmp30->depth;
	HX_STACK_LINE(172)
	::phoenix::geometry::GeometryState tmp32 = this->state;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(172)
	::phoenix::geometry::GeometryKey tmp33 = this->key;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(172)
	tmp33->clip = tmp32->clip;
	HX_STACK_LINE(174)
	::String tmp34 = this->uuid;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(174)
	::phoenix::Transform tmp35 = this->transform;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(174)
	tmp35->id = tmp34;
	HX_STACK_LINE(175)
	::String tmp36 = this->id;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(175)
	::phoenix::Transform tmp37 = this->transform;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(175)
	tmp37->name = tmp36;
	HX_STACK_LINE(179)
	bool tmp38 = (_options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(179)
	bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(179)
	if ((tmp38)){
		HX_STACK_LINE(179)
		tmp39 = _do_add;
	}
	else{
		HX_STACK_LINE(179)
		tmp39 = false;
	}
	HX_STACK_LINE(179)
	if ((tmp39)){
		HX_STACK_LINE(180)
		_options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this),null());
	}
	HX_STACK_LINE(184)
	bool tmp40 = this->buffer_based;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(184)
	if ((tmp40)){
		HX_STACK_LINE(184)
		::opengl::GLObject tmp41 = this->vb_pos;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(184)
		bool tmp42 = (tmp41 != null());		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(184)
		if ((tmp42)){
			HX_STACK_LINE(184)
			Dynamic();
		}
		else{
			HX_STACK_LINE(184)
			::opengl::GLObject tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(184)
			{
				HX_STACK_LINE(184)
				int tmp44 = linc::opengl::webgl::createBuffer();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(184)
				int _id = tmp44;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(184)
				::opengl::GLObject tmp45 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(184)
				tmp43 = tmp45;
			}
			HX_STACK_LINE(184)
			this->vb_pos = tmp43;
			HX_STACK_LINE(184)
			::opengl::GLObject tmp44;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(184)
			{
				HX_STACK_LINE(184)
				int tmp45 = linc::opengl::webgl::createBuffer();		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(184)
				int _id = tmp45;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(184)
				::opengl::GLObject tmp46 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(184)
				tmp44 = tmp46;
			}
			HX_STACK_LINE(184)
			this->vb_tcoords = tmp44;
			HX_STACK_LINE(184)
			::opengl::GLObject tmp45;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(184)
			{
				HX_STACK_LINE(184)
				int tmp46 = linc::opengl::webgl::createBuffer();		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(184)
				int _id = tmp46;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(184)
				::opengl::GLObject tmp47 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(184)
				tmp45 = tmp47;
			}
			HX_STACK_LINE(184)
			this->vb_colors = tmp45;
			HX_STACK_LINE(184)
			this->set_dirty(true);
		}
	}
	HX_STACK_LINE(185)
	::phoenix::Uniforms tmp41 = ::phoenix::Uniforms_obj::__new();		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(185)
	this->uniforms = tmp41;
}
;
	return null();
}

//Geometry_obj::~Geometry_obj() { }

Dynamic Geometry_obj::__CreateEmpty() { return  new Geometry_obj; }
hx::ObjectPtr< Geometry_obj > Geometry_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Geometry_obj > _result_ = new Geometry_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Geometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Geometry_obj > _result_ = new Geometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Geometry_obj::key_string( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","key_string",0xdbf2f150,"phoenix.geometry.Geometry.key_string","phoenix/geometry/Geometry.hx",189,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::phoenix::geometry::GeometryKey tmp = this->key;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	Float tmp1 = tmp->timestamp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	::String tmp2 = (HX_HCSTRING("ts: ","\xe5","\x35","\x04","\x4d") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(192)
	::String tmp3 = (tmp2 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(192)
	::String tmp4 = (tmp3 + HX_HCSTRING("sequence: ","\x27","\x23","\x22","\xd5"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(193)
	::phoenix::geometry::GeometryKey tmp5 = this->key;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(193)
	int tmp6 = tmp5->sequence;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(192)
	::String tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(192)
	::String tmp8 = (tmp7 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(192)
	::String tmp9 = (tmp8 + HX_HCSTRING("primitive_type: ","\xb8","\xc3","\xde","\xd5"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(194)
	::phoenix::geometry::GeometryKey tmp10 = this->key;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(194)
	int tmp11 = tmp10->primitive_type;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(192)
	::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(192)
	::String tmp13 = (tmp12 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(192)
	::String tmp14 = (tmp13 + HX_HCSTRING("texture: ","\x41","\x28","\x49","\xaf"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(195)
	::phoenix::geometry::GeometryKey tmp15 = this->key;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(195)
	::phoenix::Texture tmp16 = tmp15->texture;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(195)
	bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(195)
	::String tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(195)
	if ((tmp17)){
		HX_STACK_LINE(195)
		tmp18 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
	}
	else{
		HX_STACK_LINE(195)
		::phoenix::geometry::GeometryKey tmp19 = this->key;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(195)
		tmp18 = tmp19->texture->id;
	}
	HX_STACK_LINE(192)
	::String tmp19 = (tmp14 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(192)
	::String tmp20 = (tmp19 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(192)
	::String tmp21 = (tmp20 + HX_HCSTRING("shader: ","\x0b","\xc5","\x2a","\x36"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(196)
	::phoenix::geometry::GeometryKey tmp22 = this->key;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(196)
	::phoenix::Shader tmp23 = tmp22->shader;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(196)
	bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(196)
	::String tmp25;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(196)
	if ((tmp24)){
		HX_STACK_LINE(196)
		tmp25 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
	}
	else{
		HX_STACK_LINE(196)
		::phoenix::geometry::GeometryKey tmp26 = this->key;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(196)
		tmp25 = tmp26->shader->id;
	}
	HX_STACK_LINE(192)
	::String tmp26 = (tmp21 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(192)
	::String tmp27 = (tmp26 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(192)
	::String tmp28 = (tmp27 + HX_HCSTRING("depth: ","\x69","\xaa","\x4a","\x6a"));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(197)
	::phoenix::geometry::GeometryKey tmp29 = this->key;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(197)
	Float tmp30 = tmp29->depth;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(192)
	::String tmp31 = (tmp28 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(192)
	::String tmp32 = (tmp31 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(192)
	::String tmp33 = (tmp32 + HX_HCSTRING("clip: ","\x76","\xf5","\x57","\x0a"));		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(198)
	::phoenix::geometry::GeometryKey tmp34 = this->key;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(198)
	bool tmp35 = tmp34->clip;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(198)
	::String tmp36 = ::Std_obj::string(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(192)
	::String tmp37 = (tmp33 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(191)
	return tmp37;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,key_string,return )

Void Geometry_obj::refresh_key( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","refresh_key",0x4060be7c,"phoenix.geometry.Geometry.refresh_key","phoenix/geometry/Geometry.hx",202,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(206)
		::String tmp = this->uuid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		::phoenix::geometry::GeometryKey tmp1 = this->key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		tmp1->uuid = tmp;
		HX_STACK_LINE(207)
		Float tmp2 = linc::timestamp::now();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(207)
		Float tmp3 = ::snow::modules::sdl::Runtime_obj::timestamp_start;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(207)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(207)
		::phoenix::geometry::GeometryKey tmp5 = this->key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(207)
		tmp5->timestamp = tmp4;
		HX_STACK_LINE(209)
		::phoenix::geometry::GeometryState tmp6 = this->state;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(209)
		::phoenix::geometry::GeometryKey tmp7 = this->key;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(209)
		tmp7->primitive_type = tmp6->primitive_type;
		HX_STACK_LINE(210)
		::phoenix::geometry::GeometryState tmp8 = this->state;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(210)
		::phoenix::geometry::GeometryKey tmp9 = this->key;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(210)
		tmp9->texture = tmp8->texture;
		HX_STACK_LINE(211)
		::phoenix::geometry::GeometryState tmp10 = this->state;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(211)
		::phoenix::geometry::GeometryKey tmp11 = this->key;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(211)
		tmp11->shader = tmp10->shader;
		HX_STACK_LINE(212)
		::phoenix::geometry::GeometryState tmp12 = this->state;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(212)
		::phoenix::geometry::GeometryKey tmp13 = this->key;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(212)
		tmp13->depth = tmp12->depth;
		HX_STACK_LINE(213)
		::phoenix::geometry::GeometryState tmp14 = this->state;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(213)
		::phoenix::geometry::GeometryKey tmp15 = this->key;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(213)
		tmp15->clip = tmp14->clip;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,refresh_key,(void))

Void Geometry_obj::str( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","str",0xf6584c32,"phoenix.geometry.Geometry.str","phoenix/geometry/Geometry.hx",217,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(218)
		::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(218)
		bool tmp1 = tmp->log;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(218)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(218)
		if ((tmp2)){
			HX_STACK_LINE(218)
			return null();
		}
		HX_STACK_LINE(219)
		::String tmp3 = this->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(219)
		::String tmp4 = (HX_HCSTRING("\t\tgeometry ; ","\x53","\xf8","\xa3","\x08") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(219)
		Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("Geometry.hx","\x2c","\x13","\x62","\x29"),219,HX_HCSTRING("phoenix.geometry.Geometry","\x6f","\xef","\x7a","\x64"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(219)
		::haxe::Log_obj::trace(tmp4,tmp5);
		HX_STACK_LINE(220)
		::phoenix::geometry::GeometryState tmp6 = this->state;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(220)
		tmp6->log = true;
		HX_STACK_LINE(221)
		::phoenix::geometry::GeometryState tmp7 = this->state;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(221)
		tmp7->str();
		HX_STACK_LINE(222)
		::phoenix::geometry::GeometryState tmp8 = this->state;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(222)
		tmp8->log = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,str,(void))

Void Geometry_obj::drop( Dynamic __o_remove){
Dynamic remove = __o_remove.Default(true);
	HX_STACK_FRAME("phoenix.geometry.Geometry","drop",0x8cfea58e,"phoenix.geometry.Geometry.drop","phoenix/geometry/Geometry.hx",225,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(remove,"remove")
{
		HX_STACK_LINE(227)
		Dynamic tmp = remove;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		if ((tmp)){
			HX_STACK_LINE(227)
			tmp1 = this->added;
		}
		else{
			HX_STACK_LINE(227)
			tmp1 = false;
		}
		HX_STACK_LINE(227)
		if ((tmp1)){
			HX_STACK_LINE(229)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(229)
			Array< ::Dynamic > _g1 = this->batchers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(229)
			while((true)){
				HX_STACK_LINE(229)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(229)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(229)
				if ((tmp3)){
					HX_STACK_LINE(229)
					break;
				}
				HX_STACK_LINE(229)
				::phoenix::Batcher tmp4 = _g1->__get(_g).StaticCast< ::phoenix::Batcher >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(229)
				::phoenix::Batcher b = tmp4;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(229)
				++(_g);
				HX_STACK_LINE(230)
				b->remove(hx::ObjectPtr<OBJ_>(this),true);
			}
		}
		HX_STACK_LINE(235)
		this->key = null();
		HX_STACK_LINE(236)
		this->set_color(null());
		HX_STACK_LINE(237)
		this->state = null();
		HX_STACK_LINE(238)
		this->_final_vert_position = null();
		HX_STACK_LINE(239)
		this->batchers = null();
		HX_STACK_LINE(240)
		this->uuid = null();
		HX_STACK_LINE(241)
		this->id = null();
		HX_STACK_LINE(242)
		this->shadow_texture = null();
		HX_STACK_LINE(243)
		this->shadow_shader = null();
		HX_STACK_LINE(244)
		this->vertices = null();
		HX_STACK_LINE(246)
		::phoenix::Transform tmp2 = this->transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(246)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(246)
		if ((tmp3)){
			HX_STACK_LINE(247)
			::phoenix::Transform tmp4 = this->transform;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(247)
			tmp4->destroy();
			HX_STACK_LINE(248)
			this->transform = null();
		}
		HX_STACK_LINE(251)
		::phoenix::Uniforms tmp4 = this->uniforms;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(251)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(251)
		if ((tmp5)){
			HX_STACK_LINE(252)
			::phoenix::Uniforms tmp6 = this->uniforms;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(252)
			tmp6->destroy();
			HX_STACK_LINE(253)
			this->uniforms = null();
		}
		HX_STACK_LINE(256)
		this->destroy_vbos();
		HX_STACK_LINE(257)
		::snow::api::buffers::ArrayBufferView tmp6 = this->buffer_pos;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(257)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(257)
		if ((tmp7)){
			HX_STACK_LINE(258)
			this->buffer_pos = null();
			HX_STACK_LINE(259)
			this->buffer_tcoords = null();
			HX_STACK_LINE(260)
			this->buffer_colors = null();
			HX_STACK_LINE(261)
			this->buffer_normals = null();
		}
		HX_STACK_LINE(264)
		this->dropped = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,drop,(void))

Void Geometry_obj::add( ::phoenix::geometry::Vertex v){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","add",0xf64a95a2,"phoenix.geometry.Geometry.add","phoenix/geometry/Geometry.hx",268,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(270)
		::phoenix::geometry::Vertex tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		this->vertices->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,add,(void))

Void Geometry_obj::remove( ::phoenix::geometry::Vertex v){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","remove",0xe1945f63,"phoenix.geometry.Geometry.remove","phoenix/geometry/Geometry.hx",274,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(276)
		::phoenix::geometry::Vertex tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(276)
		this->vertices->remove(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,remove,(void))

Void Geometry_obj::batch( int vert_index,int tcoord_index,int color_index,int normal_index,::snow::api::buffers::ArrayBufferView vertlist,::snow::api::buffers::ArrayBufferView tcoordlist,::snow::api::buffers::ArrayBufferView colorlist,::snow::api::buffers::ArrayBufferView normallist){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","batch",0x9fcc2d7b,"phoenix.geometry.Geometry.batch","phoenix/geometry/Geometry.hx",283,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vert_index,"vert_index")
		HX_STACK_ARG(tcoord_index,"tcoord_index")
		HX_STACK_ARG(color_index,"color_index")
		HX_STACK_ARG(normal_index,"normal_index")
		HX_STACK_ARG(vertlist,"vertlist")
		HX_STACK_ARG(tcoordlist,"tcoordlist")
		HX_STACK_ARG(colorlist,"colorlist")
		HX_STACK_ARG(normallist,"normallist")
		HX_STACK_LINE(285)
		::phoenix::Matrix tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(285)
		{
			HX_STACK_LINE(285)
			::phoenix::Spatial tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(285)
			{
				HX_STACK_LINE(285)
				::phoenix::Transform tmp2 = this->transform;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(285)
				::phoenix::Transform _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(285)
				bool tmp3 = _this->_destroying;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(285)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(285)
				if ((tmp4)){
					HX_STACK_LINE(285)
					bool tmp5 = (_this->parent != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(285)
					if ((tmp5)){
						HX_STACK_LINE(285)
						bool tmp6 = _this->parent->dirty;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(285)
						if ((tmp6)){
							HX_STACK_LINE(285)
							_this->parent->clean();
						}
					}
					HX_STACK_LINE(285)
					bool tmp6 = _this->dirty;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(285)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(285)
					if ((tmp6)){
						HX_STACK_LINE(285)
						bool tmp8 = _this->_cleaning;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(285)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(285)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(285)
						tmp7 = false;
					}
					HX_STACK_LINE(285)
					if ((tmp7)){
						HX_STACK_LINE(285)
						_this->clean();
					}
				}
				HX_STACK_LINE(285)
				tmp1 = _this->world;
			}
			HX_STACK_LINE(285)
			::phoenix::Spatial _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(285)
			tmp = _this->matrix;
		}
		HX_STACK_LINE(285)
		::phoenix::Matrix _mat = tmp;		HX_STACK_VAR(_mat,"_mat");
		HX_STACK_LINE(286)
		Array< Float > _el = _mat->elements;		HX_STACK_VAR(_el,"_el");
		HX_STACK_LINE(298)
		int tmp1 = this->vertices->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(298)
		int _count = tmp1;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(299)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(301)
		while((true)){
			HX_STACK_LINE(301)
			bool tmp2 = (_idx < _count);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(301)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(301)
			if ((tmp3)){
				HX_STACK_LINE(301)
				break;
			}
			HX_STACK_LINE(302)
			::phoenix::geometry::Vertex tmp4 = this->vertices->__get(_idx).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(302)
			::phoenix::geometry::Vertex v = tmp4;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(304)
			Float tmp5 = v->pos->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(304)
			Float _vx = tmp5;		HX_STACK_VAR(_vx,"_vx");
			HX_STACK_LINE(305)
			Float tmp6 = v->pos->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(305)
			Float _vy = tmp6;		HX_STACK_VAR(_vy,"_vy");
			HX_STACK_LINE(306)
			Float tmp7 = v->pos->z;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(306)
			Float _vz = tmp7;		HX_STACK_VAR(_vz,"_vz");
			HX_STACK_LINE(310)
			Float tmp8 = _el->__unsafe_get((int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(310)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(310)
			Float tmp10 = _vx;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(310)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(310)
			Float tmp12 = _el->__unsafe_get((int)4);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(310)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(310)
			Float tmp14 = _vy;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(310)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(310)
			Float tmp16 = (tmp11 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(310)
			Float tmp17 = _el->__unsafe_get((int)8);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(310)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(310)
			Float tmp19 = _vz;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(310)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(310)
			Float tmp21 = (tmp16 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(310)
			Float tmp22 = _el->__unsafe_get((int)12);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(310)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(310)
			Float tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(310)
			Float _tvx = tmp24;		HX_STACK_VAR(_tvx,"_tvx");
			HX_STACK_LINE(311)
			Float tmp25 = _el->__unsafe_get((int)1);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(311)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(311)
			Float tmp27 = _vx;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(311)
			Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(311)
			Float tmp29 = _el->__unsafe_get((int)5);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(311)
			Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(311)
			Float tmp31 = _vy;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(311)
			Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(311)
			Float tmp33 = (tmp28 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(311)
			Float tmp34 = _el->__unsafe_get((int)9);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(311)
			Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(311)
			Float tmp36 = _vz;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(311)
			Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(311)
			Float tmp38 = (tmp33 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(311)
			Float tmp39 = _el->__unsafe_get((int)13);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(311)
			Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(311)
			Float tmp41 = (tmp38 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(311)
			Float _tvy = tmp41;		HX_STACK_VAR(_tvy,"_tvy");
			HX_STACK_LINE(312)
			Float tmp42 = _el->__unsafe_get((int)2);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(312)
			Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(312)
			Float tmp44 = _vx;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(312)
			Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(312)
			Float tmp46 = _el->__unsafe_get((int)6);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(312)
			Float tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(312)
			Float tmp48 = _vy;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(312)
			Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(312)
			Float tmp50 = (tmp45 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(312)
			Float tmp51 = _el->__unsafe_get((int)10);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(312)
			Float tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(312)
			Float tmp53 = _vz;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(312)
			Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(312)
			Float tmp55 = (tmp50 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(312)
			Float tmp56 = _el->__unsafe_get((int)14);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(312)
			Float tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(312)
			Float tmp58 = (tmp55 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(312)
			Float _tvz = tmp58;		HX_STACK_VAR(_tvz,"_tvz");
			HX_STACK_LINE(314)
			::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (vert_index * (int)4)),_tvx);
			HX_STACK_LINE(315)
			::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (((vert_index + (int)1)) * (int)4)),_tvy);
			HX_STACK_LINE(316)
			::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (((vert_index + (int)2)) * (int)4)),_tvz);
			HX_STACK_LINE(317)
			::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (((vert_index + (int)3)) * (int)4)),v->pos->w);
			HX_STACK_LINE(319)
			hx::AddEq(vert_index,(int)4);
			HX_STACK_LINE(321)
			::phoenix::geometry::TextureCoord tmp59 = v->uv->uv0;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(321)
			::phoenix::geometry::TextureCoord _vuv = tmp59;		HX_STACK_VAR(_vuv,"_vuv");
			HX_STACK_LINE(323)
			::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (tcoord_index * (int)4)),_vuv->u);
			HX_STACK_LINE(324)
			::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (((tcoord_index + (int)1)) * (int)4)),_vuv->v);
			HX_STACK_LINE(325)
			::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (((tcoord_index + (int)2)) * (int)4)),_vuv->w);
			HX_STACK_LINE(326)
			::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (((tcoord_index + (int)3)) * (int)4)),_vuv->t);
			HX_STACK_LINE(328)
			hx::AddEq(tcoord_index,(int)4);
			HX_STACK_LINE(330)
			::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (color_index * (int)4)),v->color->r);
			HX_STACK_LINE(331)
			::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (((color_index + (int)1)) * (int)4)),v->color->g);
			HX_STACK_LINE(332)
			::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (((color_index + (int)2)) * (int)4)),v->color->b);
			HX_STACK_LINE(333)
			::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (((color_index + (int)3)) * (int)4)),v->color->a);
			HX_STACK_LINE(335)
			hx::AddEq(color_index,(int)4);
			HX_STACK_LINE(345)
			hx::AddEq(normal_index,(int)4);
			HX_STACK_LINE(348)
			(_idx)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Geometry_obj,batch,(void))

Void Geometry_obj::batch_object_space( int vert_index,int tcoord_index,int color_index,int normal_index,::snow::api::buffers::ArrayBufferView vertlist,::snow::api::buffers::ArrayBufferView tcoordlist,::snow::api::buffers::ArrayBufferView colorlist,::snow::api::buffers::ArrayBufferView normallist){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","batch_object_space",0x76d4c08a,"phoenix.geometry.Geometry.batch_object_space","phoenix/geometry/Geometry.hx",360,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vert_index,"vert_index")
		HX_STACK_ARG(tcoord_index,"tcoord_index")
		HX_STACK_ARG(color_index,"color_index")
		HX_STACK_ARG(normal_index,"normal_index")
		HX_STACK_ARG(vertlist,"vertlist")
		HX_STACK_ARG(tcoordlist,"tcoordlist")
		HX_STACK_ARG(colorlist,"colorlist")
		HX_STACK_ARG(normallist,"normallist")
		HX_STACK_LINE(360)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(360)
		Array< ::Dynamic > _g1 = this->vertices;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(360)
		while((true)){
			HX_STACK_LINE(360)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(360)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(360)
			if ((tmp1)){
				HX_STACK_LINE(360)
				break;
			}
			HX_STACK_LINE(360)
			::phoenix::geometry::Vertex tmp2 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(360)
			::phoenix::geometry::Vertex v = tmp2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(360)
			++(_g);
			HX_STACK_LINE(362)
			::phoenix::Vector _vpos = v->pos;		HX_STACK_VAR(_vpos,"_vpos");
			HX_STACK_LINE(363)
			::phoenix::geometry::TextureCoord tmp3 = v->uv->uv0;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(363)
			::phoenix::geometry::TextureCoord _vuv = tmp3;		HX_STACK_VAR(_vuv,"_vuv");
			HX_STACK_LINE(364)
			::phoenix::Color _vcol = v->color;		HX_STACK_VAR(_vcol,"_vcol");
			HX_STACK_LINE(366)
			::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (vert_index * (int)4)),_vpos->x);
			HX_STACK_LINE(367)
			::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (((vert_index + (int)1)) * (int)4)),_vpos->y);
			HX_STACK_LINE(368)
			::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (((vert_index + (int)2)) * (int)4)),_vpos->z);
			HX_STACK_LINE(369)
			::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (((vert_index + (int)3)) * (int)4)),_vpos->w);
			HX_STACK_LINE(371)
			hx::AddEq(vert_index,(int)4);
			HX_STACK_LINE(373)
			::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (tcoord_index * (int)4)),_vuv->u);
			HX_STACK_LINE(374)
			::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (((tcoord_index + (int)1)) * (int)4)),_vuv->v);
			HX_STACK_LINE(375)
			::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (((tcoord_index + (int)2)) * (int)4)),_vuv->w);
			HX_STACK_LINE(376)
			::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (((tcoord_index + (int)3)) * (int)4)),_vuv->t);
			HX_STACK_LINE(378)
			hx::AddEq(tcoord_index,(int)4);
			HX_STACK_LINE(380)
			::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (color_index * (int)4)),_vcol->r);
			HX_STACK_LINE(381)
			::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (((color_index + (int)1)) * (int)4)),_vcol->g);
			HX_STACK_LINE(382)
			::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (((color_index + (int)2)) * (int)4)),_vcol->b);
			HX_STACK_LINE(383)
			::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (((color_index + (int)3)) * (int)4)),_vcol->a);
			HX_STACK_LINE(385)
			hx::AddEq(color_index,(int)4);
			HX_STACK_LINE(395)
			hx::AddEq(normal_index,(int)4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Geometry_obj,batch_object_space,(void))

Void Geometry_obj::batch_into_arrays( Array< Float > vertlist,Array< Float > tcoordlist,Array< Float > colorlist,Array< Float > normallist){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","batch_into_arrays",0xe545c1b5,"phoenix.geometry.Geometry.batch_into_arrays","phoenix/geometry/Geometry.hx",404,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vertlist,"vertlist")
		HX_STACK_ARG(tcoordlist,"tcoordlist")
		HX_STACK_ARG(colorlist,"colorlist")
		HX_STACK_ARG(normallist,"normallist")
		HX_STACK_LINE(404)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(404)
		Array< ::Dynamic > _g1 = this->vertices;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(404)
		while((true)){
			HX_STACK_LINE(404)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(404)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(404)
			if ((tmp1)){
				HX_STACK_LINE(404)
				break;
			}
			HX_STACK_LINE(404)
			::phoenix::geometry::Vertex tmp2 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(404)
			::phoenix::geometry::Vertex v = tmp2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(404)
			++(_g);
			HX_STACK_LINE(407)
			{
				HX_STACK_LINE(407)
				::phoenix::Vector tmp3 = this->_final_vert_position;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(407)
				::phoenix::Vector _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(407)
				Float tmp4 = v->pos->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(407)
				Float _x = tmp4;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(407)
				Float tmp5 = v->pos->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(407)
				Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(407)
				Float tmp6 = v->pos->z;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(407)
				Float _z = tmp6;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(407)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(407)
				_this->ignore_listeners = true;
				HX_STACK_LINE(407)
				{
					HX_STACK_LINE(407)
					_this->x = _x;
					HX_STACK_LINE(407)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(407)
					if ((tmp7)){
						HX_STACK_LINE(407)
						_this->x;
					}
					else{
						HX_STACK_LINE(407)
						bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(407)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(407)
						if ((tmp8)){
							HX_STACK_LINE(407)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(407)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(407)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(407)
							tmp9 = false;
						}
						HX_STACK_LINE(407)
						if ((tmp9)){
							HX_STACK_LINE(407)
							Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(407)
							_this->listen_x(tmp10);
						}
						HX_STACK_LINE(407)
						_this->x;
					}
				}
				HX_STACK_LINE(407)
				{
					HX_STACK_LINE(407)
					_this->y = _y;
					HX_STACK_LINE(407)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(407)
					if ((tmp7)){
						HX_STACK_LINE(407)
						_this->y;
					}
					else{
						HX_STACK_LINE(407)
						bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(407)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(407)
						if ((tmp8)){
							HX_STACK_LINE(407)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(407)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(407)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(407)
							tmp9 = false;
						}
						HX_STACK_LINE(407)
						if ((tmp9)){
							HX_STACK_LINE(407)
							Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(407)
							_this->listen_y(tmp10);
						}
						HX_STACK_LINE(407)
						_this->y;
					}
				}
				HX_STACK_LINE(407)
				{
					HX_STACK_LINE(407)
					_this->z = _z;
					HX_STACK_LINE(407)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(407)
					if ((tmp7)){
						HX_STACK_LINE(407)
						_this->z;
					}
					else{
						HX_STACK_LINE(407)
						bool tmp8 = (_this->listen_z != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(407)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(407)
						if ((tmp8)){
							HX_STACK_LINE(407)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(407)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(407)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(407)
							tmp9 = false;
						}
						HX_STACK_LINE(407)
						if ((tmp9)){
							HX_STACK_LINE(407)
							Float tmp10 = _z;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(407)
							_this->listen_z(tmp10);
						}
						HX_STACK_LINE(407)
						_this->z;
					}
				}
				HX_STACK_LINE(407)
				Float tmp7 = v->pos->w;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(407)
				_this->w = tmp7;
				HX_STACK_LINE(407)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(407)
				bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(407)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(407)
				if ((tmp8)){
					HX_STACK_LINE(407)
					bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(407)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(407)
					tmp9 = !(tmp11);
				}
				else{
					HX_STACK_LINE(407)
					tmp9 = false;
				}
				HX_STACK_LINE(407)
				if ((tmp9)){
					HX_STACK_LINE(407)
					Float tmp10 = _this->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(407)
					_this->listen_x(tmp10);
				}
				HX_STACK_LINE(407)
				bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(407)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(407)
				if ((tmp10)){
					HX_STACK_LINE(407)
					bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(407)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(407)
					tmp11 = !(tmp13);
				}
				else{
					HX_STACK_LINE(407)
					tmp11 = false;
				}
				HX_STACK_LINE(407)
				if ((tmp11)){
					HX_STACK_LINE(407)
					Float tmp12 = _this->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(407)
					_this->listen_y(tmp12);
				}
				HX_STACK_LINE(407)
				bool tmp12 = (_this->listen_z != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(407)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(407)
				if ((tmp12)){
					HX_STACK_LINE(407)
					bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(407)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(407)
					tmp13 = !(tmp15);
				}
				else{
					HX_STACK_LINE(407)
					tmp13 = false;
				}
				HX_STACK_LINE(407)
				if ((tmp13)){
					HX_STACK_LINE(407)
					Float tmp14 = _this->z;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(407)
					_this->listen_z(tmp14);
				}
				HX_STACK_LINE(407)
				_this;
			}
			HX_STACK_LINE(409)
			{
				HX_STACK_LINE(409)
				::phoenix::Vector tmp3 = this->_final_vert_position;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(409)
				::phoenix::Vector _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(409)
				::phoenix::Matrix tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(409)
				{
					HX_STACK_LINE(409)
					::phoenix::Spatial tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						::phoenix::Transform tmp6 = this->transform;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(409)
						::phoenix::Transform _this1 = tmp6;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(409)
						bool tmp7 = _this1->_destroying;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(409)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(409)
						if ((tmp8)){
							HX_STACK_LINE(409)
							bool tmp9 = (_this1->parent != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(409)
							if ((tmp9)){
								HX_STACK_LINE(409)
								bool tmp10 = _this1->parent->dirty;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(409)
								if ((tmp10)){
									HX_STACK_LINE(409)
									_this1->parent->clean();
								}
							}
							HX_STACK_LINE(409)
							bool tmp10 = _this1->dirty;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(409)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(409)
							if ((tmp10)){
								HX_STACK_LINE(409)
								bool tmp12 = _this1->_cleaning;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(409)
								bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(409)
								tmp11 = !(tmp13);
							}
							else{
								HX_STACK_LINE(409)
								tmp11 = false;
							}
							HX_STACK_LINE(409)
							if ((tmp11)){
								HX_STACK_LINE(409)
								_this1->clean();
							}
						}
						HX_STACK_LINE(409)
						tmp5 = _this1->world;
					}
					HX_STACK_LINE(409)
					::phoenix::Spatial _this1 = tmp5;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(409)
					tmp4 = _this1->matrix;
				}
				HX_STACK_LINE(409)
				::phoenix::Matrix _m = tmp4;		HX_STACK_VAR(_m,"_m");
				HX_STACK_LINE(409)
				Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(409)
				Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(409)
				Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(409)
				Array< Float > e = _m->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(409)
				{
					HX_STACK_LINE(409)
					Float tmp5 = e->__get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(409)
					Float tmp6 = _x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(409)
					Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(409)
					Float tmp8 = e->__get((int)4);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(409)
					Float tmp9 = _y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(409)
					Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(409)
					Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(409)
					Float tmp12 = e->__get((int)8);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(409)
					Float tmp13 = _z;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(409)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(409)
					Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(409)
					Float tmp16 = e->__get((int)12);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(409)
					Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(409)
					Float _x1 = tmp17;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(409)
					Float tmp18 = e->__get((int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(409)
					Float tmp19 = _x;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(409)
					Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(409)
					Float tmp21 = e->__get((int)5);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(409)
					Float tmp22 = _y;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(409)
					Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(409)
					Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(409)
					Float tmp25 = e->__get((int)9);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(409)
					Float tmp26 = _z;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(409)
					Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(409)
					Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(409)
					Float tmp29 = e->__get((int)13);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(409)
					Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(409)
					Float _y1 = tmp30;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(409)
					Float tmp31 = e->__get((int)2);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(409)
					Float tmp32 = _x;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(409)
					Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(409)
					Float tmp34 = e->__get((int)6);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(409)
					Float tmp35 = _y;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(409)
					Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(409)
					Float tmp37 = (tmp33 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(409)
					Float tmp38 = e->__get((int)10);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(409)
					Float tmp39 = _z;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(409)
					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(409)
					Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(409)
					Float tmp42 = e->__get((int)14);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(409)
					Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(409)
					Float _z1 = tmp43;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(409)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(409)
					_this->ignore_listeners = true;
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						_this->x = _x1;
						HX_STACK_LINE(409)
						bool tmp44 = _this->_construct;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(409)
						if ((tmp44)){
							HX_STACK_LINE(409)
							_this->x;
						}
						else{
							HX_STACK_LINE(409)
							bool tmp45 = (_this->listen_x != null());		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(409)
							bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(409)
							if ((tmp45)){
								HX_STACK_LINE(409)
								bool tmp47 = _this->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(409)
								bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(409)
								tmp46 = !(tmp48);
							}
							else{
								HX_STACK_LINE(409)
								tmp46 = false;
							}
							HX_STACK_LINE(409)
							if ((tmp46)){
								HX_STACK_LINE(409)
								Float tmp47 = _x1;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(409)
								_this->listen_x(tmp47);
							}
							HX_STACK_LINE(409)
							_this->x;
						}
					}
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						_this->y = _y1;
						HX_STACK_LINE(409)
						bool tmp44 = _this->_construct;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(409)
						if ((tmp44)){
							HX_STACK_LINE(409)
							_this->y;
						}
						else{
							HX_STACK_LINE(409)
							bool tmp45 = (_this->listen_y != null());		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(409)
							bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(409)
							if ((tmp45)){
								HX_STACK_LINE(409)
								bool tmp47 = _this->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(409)
								bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(409)
								tmp46 = !(tmp48);
							}
							else{
								HX_STACK_LINE(409)
								tmp46 = false;
							}
							HX_STACK_LINE(409)
							if ((tmp46)){
								HX_STACK_LINE(409)
								Float tmp47 = _y1;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(409)
								_this->listen_y(tmp47);
							}
							HX_STACK_LINE(409)
							_this->y;
						}
					}
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						_this->z = _z1;
						HX_STACK_LINE(409)
						bool tmp44 = _this->_construct;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(409)
						if ((tmp44)){
							HX_STACK_LINE(409)
							_this->z;
						}
						else{
							HX_STACK_LINE(409)
							bool tmp45 = (_this->listen_z != null());		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(409)
							bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(409)
							if ((tmp45)){
								HX_STACK_LINE(409)
								bool tmp47 = _this->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(409)
								bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(409)
								tmp46 = !(tmp48);
							}
							else{
								HX_STACK_LINE(409)
								tmp46 = false;
							}
							HX_STACK_LINE(409)
							if ((tmp46)){
								HX_STACK_LINE(409)
								Float tmp47 = _z1;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(409)
								_this->listen_z(tmp47);
							}
							HX_STACK_LINE(409)
							_this->z;
						}
					}
					HX_STACK_LINE(409)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(409)
					bool tmp44 = (_this->listen_x != null());		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(409)
					bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(409)
					if ((tmp44)){
						HX_STACK_LINE(409)
						bool tmp46 = _this->ignore_listeners;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(409)
						bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(409)
						tmp45 = !(tmp47);
					}
					else{
						HX_STACK_LINE(409)
						tmp45 = false;
					}
					HX_STACK_LINE(409)
					if ((tmp45)){
						HX_STACK_LINE(409)
						Float tmp46 = _this->x;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(409)
						_this->listen_x(tmp46);
					}
					HX_STACK_LINE(409)
					bool tmp46 = (_this->listen_y != null());		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(409)
					bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(409)
					if ((tmp46)){
						HX_STACK_LINE(409)
						bool tmp48 = _this->ignore_listeners;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(409)
						bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(409)
						tmp47 = !(tmp49);
					}
					else{
						HX_STACK_LINE(409)
						tmp47 = false;
					}
					HX_STACK_LINE(409)
					if ((tmp47)){
						HX_STACK_LINE(409)
						Float tmp48 = _this->y;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(409)
						_this->listen_y(tmp48);
					}
					HX_STACK_LINE(409)
					bool tmp48 = (_this->listen_z != null());		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(409)
					bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(409)
					if ((tmp48)){
						HX_STACK_LINE(409)
						bool tmp50 = _this->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(409)
						bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(409)
						tmp49 = !(tmp51);
					}
					else{
						HX_STACK_LINE(409)
						tmp49 = false;
					}
					HX_STACK_LINE(409)
					if ((tmp49)){
						HX_STACK_LINE(409)
						Float tmp50 = _this->z;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(409)
						_this->listen_z(tmp50);
					}
					HX_STACK_LINE(409)
					_this;
				}
				HX_STACK_LINE(409)
				_this;
			}
			HX_STACK_LINE(412)
			::phoenix::Vector tmp3 = this->_final_vert_position;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(412)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(412)
			vertlist->push(tmp4);
			HX_STACK_LINE(413)
			::phoenix::Vector tmp5 = this->_final_vert_position;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(413)
			Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(413)
			vertlist->push(tmp6);
			HX_STACK_LINE(414)
			::phoenix::Vector tmp7 = this->_final_vert_position;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(414)
			Float tmp8 = tmp7->z;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(414)
			vertlist->push(tmp8);
			HX_STACK_LINE(415)
			::phoenix::Vector tmp9 = this->_final_vert_position;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(415)
			Float tmp10 = tmp9->w;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(415)
			vertlist->push(tmp10);
			HX_STACK_LINE(418)
			::phoenix::geometry::TextureCoord tmp11 = v->uv->uv0;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(418)
			Float tmp12 = tmp11->u;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(418)
			tcoordlist->push(tmp12);
			HX_STACK_LINE(419)
			::phoenix::geometry::TextureCoord tmp13 = v->uv->uv0;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(419)
			Float tmp14 = tmp13->v;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(419)
			tcoordlist->push(tmp14);
			HX_STACK_LINE(420)
			::phoenix::geometry::TextureCoord tmp15 = v->uv->uv0;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(420)
			Float tmp16 = tmp15->w;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(420)
			tcoordlist->push(tmp16);
			HX_STACK_LINE(421)
			::phoenix::geometry::TextureCoord tmp17 = v->uv->uv0;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(421)
			Float tmp18 = tmp17->t;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(421)
			tcoordlist->push(tmp18);
			HX_STACK_LINE(424)
			Float tmp19 = v->color->r;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(424)
			colorlist->push(tmp19);
			HX_STACK_LINE(425)
			Float tmp20 = v->color->g;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(425)
			colorlist->push(tmp20);
			HX_STACK_LINE(426)
			Float tmp21 = v->color->b;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(426)
			colorlist->push(tmp21);
			HX_STACK_LINE(427)
			Float tmp22 = v->color->a;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(427)
			colorlist->push(tmp22);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Geometry_obj,batch_into_arrays,(void))

Void Geometry_obj::destroy_vbos( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","destroy_vbos",0xfa06f454,"phoenix.geometry.Geometry.destroy_vbos","phoenix/geometry/Geometry.hx",442,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(443)
		::opengl::GLObject tmp = this->vb_pos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(443)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(443)
		if ((tmp1)){
			HX_STACK_LINE(443)
			return null();
		}
		HX_STACK_LINE(444)
		{
			HX_STACK_LINE(444)
			::opengl::GLObject tmp2 = this->vb_pos;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(444)
			::opengl::GLObject buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(444)
			bool tmp3 = (buffer == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(444)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(444)
			if ((tmp3)){
				HX_STACK_LINE(444)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(444)
				tmp4 = buffer->id;
			}
			HX_STACK_LINE(444)
			linc::opengl::webgl::deleteBuffer(tmp4);
		}
		HX_STACK_LINE(445)
		{
			HX_STACK_LINE(445)
			::opengl::GLObject tmp2 = this->vb_tcoords;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(445)
			::opengl::GLObject buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(445)
			bool tmp3 = (buffer == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(445)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(445)
			if ((tmp3)){
				HX_STACK_LINE(445)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(445)
				tmp4 = buffer->id;
			}
			HX_STACK_LINE(445)
			linc::opengl::webgl::deleteBuffer(tmp4);
		}
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			::opengl::GLObject tmp2 = this->vb_colors;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(446)
			::opengl::GLObject buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(446)
			bool tmp3 = (buffer == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(446)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(446)
			if ((tmp3)){
				HX_STACK_LINE(446)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(446)
				tmp4 = buffer->id;
			}
			HX_STACK_LINE(446)
			linc::opengl::webgl::deleteBuffer(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,destroy_vbos,(void))

Void Geometry_obj::create_vbos( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","create_vbos",0x8f2a5b34,"phoenix.geometry.Geometry.create_vbos","phoenix/geometry/Geometry.hx",453,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(454)
		::opengl::GLObject tmp = this->vb_pos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(454)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(454)
		if ((tmp1)){
			HX_STACK_LINE(454)
			return null();
		}
		HX_STACK_LINE(455)
		::opengl::GLObject tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(455)
		{
			HX_STACK_LINE(455)
			int tmp3 = linc::opengl::webgl::createBuffer();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(455)
			int _id = tmp3;		HX_STACK_VAR(_id,"_id");
			HX_STACK_LINE(455)
			::opengl::GLObject tmp4 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(455)
			tmp2 = tmp4;
		}
		HX_STACK_LINE(455)
		this->vb_pos = tmp2;
		HX_STACK_LINE(456)
		::opengl::GLObject tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(456)
		{
			HX_STACK_LINE(456)
			int tmp4 = linc::opengl::webgl::createBuffer();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(456)
			int _id = tmp4;		HX_STACK_VAR(_id,"_id");
			HX_STACK_LINE(456)
			::opengl::GLObject tmp5 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(456)
			tmp3 = tmp5;
		}
		HX_STACK_LINE(456)
		this->vb_tcoords = tmp3;
		HX_STACK_LINE(457)
		::opengl::GLObject tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(457)
		{
			HX_STACK_LINE(457)
			int tmp5 = linc::opengl::webgl::createBuffer();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(457)
			int _id = tmp5;		HX_STACK_VAR(_id,"_id");
			HX_STACK_LINE(457)
			::opengl::GLObject tmp6 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(457)
			tmp4 = tmp6;
		}
		HX_STACK_LINE(457)
		this->vb_colors = tmp4;
		HX_STACK_LINE(461)
		this->set_dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,create_vbos,(void))

Void Geometry_obj::bind( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","bind",0x8ba5631c,"phoenix.geometry.Geometry.bind","phoenix/geometry/Geometry.hx",465,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(466)
		{
			HX_STACK_LINE(466)
			{
				HX_STACK_LINE(466)
				::opengl::GLObject tmp = this->vb_pos;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(466)
				::opengl::GLObject buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(466)
				bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(466)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(466)
				if ((tmp1)){
					HX_STACK_LINE(466)
					tmp2 = (int)0;
				}
				else{
					HX_STACK_LINE(466)
					tmp2 = buffer->id;
				}
				HX_STACK_LINE(466)
				glBindBuffer((int)34962,tmp2);
			}
			HX_STACK_LINE(466)
			glVertexAttribPointer((int)0, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
		}
		HX_STACK_LINE(467)
		{
			HX_STACK_LINE(467)
			{
				HX_STACK_LINE(467)
				::opengl::GLObject tmp = this->vb_tcoords;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(467)
				::opengl::GLObject buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(467)
				bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(467)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(467)
				if ((tmp1)){
					HX_STACK_LINE(467)
					tmp2 = (int)0;
				}
				else{
					HX_STACK_LINE(467)
					tmp2 = buffer->id;
				}
				HX_STACK_LINE(467)
				glBindBuffer((int)34962,tmp2);
			}
			HX_STACK_LINE(467)
			glVertexAttribPointer((int)1, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
		}
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				::opengl::GLObject tmp = this->vb_colors;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(468)
				::opengl::GLObject buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(468)
				bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(468)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(468)
				if ((tmp1)){
					HX_STACK_LINE(468)
					tmp2 = (int)0;
				}
				else{
					HX_STACK_LINE(468)
					tmp2 = buffer->id;
				}
				HX_STACK_LINE(468)
				glBindBuffer((int)34962,tmp2);
			}
			HX_STACK_LINE(468)
			glVertexAttribPointer((int)2, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,bind,(void))

Void Geometry_obj::bind_pos( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","bind_pos",0xcbebc3b1,"phoenix.geometry.Geometry.bind_pos","phoenix/geometry/Geometry.hx",476,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(477)
		{
			HX_STACK_LINE(477)
			::opengl::GLObject tmp = this->vb_pos;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(477)
			::opengl::GLObject buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(477)
			bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(477)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(477)
			if ((tmp1)){
				HX_STACK_LINE(477)
				tmp2 = (int)0;
			}
			else{
				HX_STACK_LINE(477)
				tmp2 = buffer->id;
			}
			HX_STACK_LINE(477)
			glBindBuffer((int)34962,tmp2);
		}
		HX_STACK_LINE(478)
		glVertexAttribPointer((int)0, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,bind_pos,(void))

Void Geometry_obj::bind_tcoords( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","bind_tcoords",0x809eac2f,"phoenix.geometry.Geometry.bind_tcoords","phoenix/geometry/Geometry.hx",482,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(483)
		{
			HX_STACK_LINE(483)
			::opengl::GLObject tmp = this->vb_tcoords;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(483)
			::opengl::GLObject buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(483)
			bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(483)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(483)
			if ((tmp1)){
				HX_STACK_LINE(483)
				tmp2 = (int)0;
			}
			else{
				HX_STACK_LINE(483)
				tmp2 = buffer->id;
			}
			HX_STACK_LINE(483)
			glBindBuffer((int)34962,tmp2);
		}
		HX_STACK_LINE(484)
		glVertexAttribPointer((int)1, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,bind_tcoords,(void))

Void Geometry_obj::bind_colors( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","bind_colors",0x5b9f4fb3,"phoenix.geometry.Geometry.bind_colors","phoenix/geometry/Geometry.hx",488,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(489)
		{
			HX_STACK_LINE(489)
			::opengl::GLObject tmp = this->vb_colors;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(489)
			::opengl::GLObject buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(489)
			bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(489)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(489)
			if ((tmp1)){
				HX_STACK_LINE(489)
				tmp2 = (int)0;
			}
			else{
				HX_STACK_LINE(489)
				tmp2 = buffer->id;
			}
			HX_STACK_LINE(489)
			glBindBuffer((int)34962,tmp2);
		}
		HX_STACK_LINE(490)
		glVertexAttribPointer((int)2, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,bind_colors,(void))

Void Geometry_obj::unbind( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","unbind",0x3bf7bfb5,"phoenix.geometry.Geometry.unbind","phoenix/geometry/Geometry.hx",502,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(503)
		bool tmp = (((::opengl::GLObject)(null())) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(503)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(503)
		if ((tmp)){
			HX_STACK_LINE(503)
			tmp1 = (int)0;
		}
		else{
			HX_STACK_LINE(503)
			tmp1 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
		}
		HX_STACK_LINE(503)
		glBindBuffer((int)34962,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,unbind,(void))

Void Geometry_obj::bind_and_upload( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","bind_and_upload",0xd9d1412c,"phoenix.geometry.Geometry.bind_and_upload","phoenix/geometry/Geometry.hx",507,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(509)
		{
			HX_STACK_LINE(509)
			{
				HX_STACK_LINE(509)
				::opengl::GLObject tmp = this->vb_pos;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(509)
				::opengl::GLObject buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(509)
				bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(509)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(509)
				if ((tmp1)){
					HX_STACK_LINE(509)
					tmp2 = (int)0;
				}
				else{
					HX_STACK_LINE(509)
					tmp2 = buffer->id;
				}
				HX_STACK_LINE(509)
				glBindBuffer((int)34962,tmp2);
			}
			HX_STACK_LINE(509)
			glVertexAttribPointer((int)0, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
		}
		HX_STACK_LINE(510)
		glBufferData((int)34962, this->buffer_pos->byteLength, (GLvoid*)(&this->buffer_pos->buffer[0] + this->buffer_pos->byteOffset), this->buffer_type);
		HX_STACK_LINE(512)
		{
			HX_STACK_LINE(512)
			{
				HX_STACK_LINE(512)
				::opengl::GLObject tmp = this->vb_tcoords;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(512)
				::opengl::GLObject buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(512)
				bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(512)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(512)
				if ((tmp1)){
					HX_STACK_LINE(512)
					tmp2 = (int)0;
				}
				else{
					HX_STACK_LINE(512)
					tmp2 = buffer->id;
				}
				HX_STACK_LINE(512)
				glBindBuffer((int)34962,tmp2);
			}
			HX_STACK_LINE(512)
			glVertexAttribPointer((int)1, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
		}
		HX_STACK_LINE(513)
		glBufferData((int)34962, this->buffer_tcoords->byteLength, (GLvoid*)(&this->buffer_tcoords->buffer[0] + this->buffer_tcoords->byteOffset), this->buffer_type);
		HX_STACK_LINE(515)
		{
			HX_STACK_LINE(515)
			{
				HX_STACK_LINE(515)
				::opengl::GLObject tmp = this->vb_colors;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(515)
				::opengl::GLObject buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(515)
				bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(515)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(515)
				if ((tmp1)){
					HX_STACK_LINE(515)
					tmp2 = (int)0;
				}
				else{
					HX_STACK_LINE(515)
					tmp2 = buffer->id;
				}
				HX_STACK_LINE(515)
				glBindBuffer((int)34962,tmp2);
			}
			HX_STACK_LINE(515)
			glVertexAttribPointer((int)2, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
		}
		HX_STACK_LINE(516)
		glBufferData((int)34962, this->buffer_colors->byteLength, (GLvoid*)(&this->buffer_colors->buffer[0] + this->buffer_colors->byteOffset), this->buffer_type);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,bind_and_upload,(void))

bool Geometry_obj::update_buffers( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","update_buffers",0x1503ae1c,"phoenix.geometry.Geometry.update_buffers","phoenix/geometry/Geometry.hx",526,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(528)
	bool tmp = this->dirty;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(528)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(528)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(528)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(528)
	if ((tmp2)){
		HX_STACK_LINE(528)
		tmp3 = this->dirty_based;
	}
	else{
		HX_STACK_LINE(528)
		tmp3 = false;
	}
	HX_STACK_LINE(528)
	if ((tmp3)){
		HX_STACK_LINE(528)
		return false;
	}
	HX_STACK_LINE(530)
	int tmp4 = this->vertices->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(530)
	int _verts = tmp4;		HX_STACK_VAR(_verts,"_verts");
	HX_STACK_LINE(533)
	int tmp5 = _verts;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(533)
	int tmp6 = this->_prev_count;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(533)
	bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(533)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(533)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(533)
	if ((tmp8)){
		HX_STACK_LINE(533)
		::snow::api::buffers::ArrayBufferView tmp10 = this->buffer_pos;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(533)
		::snow::api::buffers::ArrayBufferView tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(533)
		tmp9 = (tmp11 == null());
	}
	else{
		HX_STACK_LINE(533)
		tmp9 = true;
	}
	HX_STACK_LINE(533)
	if ((tmp9)){
		HX_STACK_LINE(534)
		int tmp10 = this->vertices->length;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(534)
		int tmp11 = (tmp10 * (int)4);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(534)
		int _length = tmp11;		HX_STACK_VAR(_length,"_length");
		HX_STACK_LINE(535)
		this->buffer_pos = null();
		HX_STACK_LINE(536)
		this->buffer_normals = null();
		HX_STACK_LINE(537)
		this->buffer_colors = null();
		HX_STACK_LINE(538)
		this->buffer_tcoords = null();
		HX_STACK_LINE(539)
		::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(539)
		{
			HX_STACK_LINE(539)
			::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(539)
			::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(539)
			{
				HX_STACK_LINE(539)
				int _elements = _length;		HX_STACK_VAR(_elements,"_elements");
				HX_STACK_LINE(539)
				bool tmp14 = (_elements < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(539)
				if ((tmp14)){
					HX_STACK_LINE(539)
					_elements = (int)0;
				}
				HX_STACK_LINE(539)
				::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(539)
				::snow::api::buffers::ArrayBufferView _view = tmp15;		HX_STACK_VAR(_view,"_view");
				HX_STACK_LINE(539)
				int tmp16 = (_elements * _view->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(539)
				int _bytelen = tmp16;		HX_STACK_VAR(_bytelen,"_bytelen");
				HX_STACK_LINE(539)
				_view->byteOffset = (int)0;
				HX_STACK_LINE(539)
				_view->byteLength = _bytelen;
				HX_STACK_LINE(539)
				Array< unsigned char > tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(539)
				{
					HX_STACK_LINE(539)
					Array< unsigned char > this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(539)
					this2 = Array_obj< unsigned char >::__new();
					HX_STACK_LINE(539)
					bool tmp18 = (_bytelen > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(539)
					if ((tmp18)){
						HX_STACK_LINE(539)
						int tmp19 = (_bytelen - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(539)
						this2[tmp19] = (int)0;
					}
					HX_STACK_LINE(539)
					tmp17 = this2;
				}
				HX_STACK_LINE(539)
				_view->buffer = tmp17;
				HX_STACK_LINE(539)
				_view->length = _elements;
				HX_STACK_LINE(539)
				tmp13 = _view;
			}
			HX_STACK_LINE(539)
			this1 = tmp13;
			HX_STACK_LINE(539)
			tmp12 = this1;
		}
		HX_STACK_LINE(539)
		this->buffer_pos = tmp12;
		HX_STACK_LINE(540)
		::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(540)
			::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(540)
			{
				HX_STACK_LINE(540)
				int _elements = _length;		HX_STACK_VAR(_elements,"_elements");
				HX_STACK_LINE(540)
				bool tmp15 = (_elements < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(540)
				if ((tmp15)){
					HX_STACK_LINE(540)
					_elements = (int)0;
				}
				HX_STACK_LINE(540)
				::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(540)
				::snow::api::buffers::ArrayBufferView _view = tmp16;		HX_STACK_VAR(_view,"_view");
				HX_STACK_LINE(540)
				int tmp17 = (_elements * _view->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(540)
				int _bytelen = tmp17;		HX_STACK_VAR(_bytelen,"_bytelen");
				HX_STACK_LINE(540)
				_view->byteOffset = (int)0;
				HX_STACK_LINE(540)
				_view->byteLength = _bytelen;
				HX_STACK_LINE(540)
				Array< unsigned char > tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(540)
				{
					HX_STACK_LINE(540)
					Array< unsigned char > this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(540)
					this2 = Array_obj< unsigned char >::__new();
					HX_STACK_LINE(540)
					bool tmp19 = (_bytelen > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(540)
					if ((tmp19)){
						HX_STACK_LINE(540)
						int tmp20 = (_bytelen - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(540)
						this2[tmp20] = (int)0;
					}
					HX_STACK_LINE(540)
					tmp18 = this2;
				}
				HX_STACK_LINE(540)
				_view->buffer = tmp18;
				HX_STACK_LINE(540)
				_view->length = _elements;
				HX_STACK_LINE(540)
				tmp14 = _view;
			}
			HX_STACK_LINE(540)
			this1 = tmp14;
			HX_STACK_LINE(540)
			tmp13 = this1;
		}
		HX_STACK_LINE(540)
		this->buffer_tcoords = tmp13;
		HX_STACK_LINE(541)
		::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(541)
		{
			HX_STACK_LINE(541)
			::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(541)
			::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(541)
			{
				HX_STACK_LINE(541)
				int _elements = _length;		HX_STACK_VAR(_elements,"_elements");
				HX_STACK_LINE(541)
				bool tmp16 = (_elements < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(541)
				if ((tmp16)){
					HX_STACK_LINE(541)
					_elements = (int)0;
				}
				HX_STACK_LINE(541)
				::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(541)
				::snow::api::buffers::ArrayBufferView _view = tmp17;		HX_STACK_VAR(_view,"_view");
				HX_STACK_LINE(541)
				int tmp18 = (_elements * _view->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(541)
				int _bytelen = tmp18;		HX_STACK_VAR(_bytelen,"_bytelen");
				HX_STACK_LINE(541)
				_view->byteOffset = (int)0;
				HX_STACK_LINE(541)
				_view->byteLength = _bytelen;
				HX_STACK_LINE(541)
				Array< unsigned char > tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(541)
				{
					HX_STACK_LINE(541)
					Array< unsigned char > this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(541)
					this2 = Array_obj< unsigned char >::__new();
					HX_STACK_LINE(541)
					bool tmp20 = (_bytelen > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(541)
					if ((tmp20)){
						HX_STACK_LINE(541)
						int tmp21 = (_bytelen - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(541)
						this2[tmp21] = (int)0;
					}
					HX_STACK_LINE(541)
					tmp19 = this2;
				}
				HX_STACK_LINE(541)
				_view->buffer = tmp19;
				HX_STACK_LINE(541)
				_view->length = _elements;
				HX_STACK_LINE(541)
				tmp15 = _view;
			}
			HX_STACK_LINE(541)
			this1 = tmp15;
			HX_STACK_LINE(541)
			tmp14 = this1;
		}
		HX_STACK_LINE(541)
		this->buffer_colors = tmp14;
	}
	HX_STACK_LINE(547)
	bool tmp10 = this->object_space;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(547)
	if ((tmp10)){
		HX_STACK_LINE(548)
		int vert_index = (int)0;		HX_STACK_VAR(vert_index,"vert_index");
		HX_STACK_LINE(548)
		int tcoord_index = (int)0;		HX_STACK_VAR(tcoord_index,"tcoord_index");
		HX_STACK_LINE(548)
		int color_index = (int)0;		HX_STACK_VAR(color_index,"color_index");
		HX_STACK_LINE(548)
		int normal_index = (int)0;		HX_STACK_VAR(normal_index,"normal_index");
		HX_STACK_LINE(548)
		::snow::api::buffers::ArrayBufferView tmp11 = this->buffer_pos;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(548)
		::snow::api::buffers::ArrayBufferView vertlist = tmp11;		HX_STACK_VAR(vertlist,"vertlist");
		HX_STACK_LINE(548)
		::snow::api::buffers::ArrayBufferView tmp12 = this->buffer_tcoords;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(548)
		::snow::api::buffers::ArrayBufferView tcoordlist = tmp12;		HX_STACK_VAR(tcoordlist,"tcoordlist");
		HX_STACK_LINE(548)
		::snow::api::buffers::ArrayBufferView tmp13 = this->buffer_colors;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(548)
		::snow::api::buffers::ArrayBufferView colorlist = tmp13;		HX_STACK_VAR(colorlist,"colorlist");
		HX_STACK_LINE(548)
		{
			HX_STACK_LINE(548)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(548)
			Array< ::Dynamic > _g1 = this->vertices;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(548)
			while((true)){
				HX_STACK_LINE(548)
				bool tmp14 = (_g < _g1->length);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(548)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(548)
				if ((tmp15)){
					HX_STACK_LINE(548)
					break;
				}
				HX_STACK_LINE(548)
				::phoenix::geometry::Vertex tmp16 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(548)
				::phoenix::geometry::Vertex v = tmp16;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(548)
				++(_g);
				HX_STACK_LINE(548)
				::phoenix::Vector _vpos = v->pos;		HX_STACK_VAR(_vpos,"_vpos");
				HX_STACK_LINE(548)
				::phoenix::geometry::TextureCoord tmp17 = v->uv->uv0;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(548)
				::phoenix::geometry::TextureCoord _vuv = tmp17;		HX_STACK_VAR(_vuv,"_vuv");
				HX_STACK_LINE(548)
				::phoenix::Color _vcol = v->color;		HX_STACK_VAR(_vcol,"_vcol");
				HX_STACK_LINE(548)
				::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (vert_index * (int)4)),_vpos->x);
				HX_STACK_LINE(548)
				::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (((vert_index + (int)1)) * (int)4)),_vpos->y);
				HX_STACK_LINE(548)
				::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (((vert_index + (int)2)) * (int)4)),_vpos->z);
				HX_STACK_LINE(548)
				::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (((vert_index + (int)3)) * (int)4)),_vpos->w);
				HX_STACK_LINE(548)
				hx::AddEq(vert_index,(int)4);
				HX_STACK_LINE(548)
				::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (tcoord_index * (int)4)),_vuv->u);
				HX_STACK_LINE(548)
				::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (((tcoord_index + (int)1)) * (int)4)),_vuv->v);
				HX_STACK_LINE(548)
				::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (((tcoord_index + (int)2)) * (int)4)),_vuv->w);
				HX_STACK_LINE(548)
				::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (((tcoord_index + (int)3)) * (int)4)),_vuv->t);
				HX_STACK_LINE(548)
				hx::AddEq(tcoord_index,(int)4);
				HX_STACK_LINE(548)
				::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (color_index * (int)4)),_vcol->r);
				HX_STACK_LINE(548)
				::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (((color_index + (int)1)) * (int)4)),_vcol->g);
				HX_STACK_LINE(548)
				::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (((color_index + (int)2)) * (int)4)),_vcol->b);
				HX_STACK_LINE(548)
				::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (((color_index + (int)3)) * (int)4)),_vcol->a);
				HX_STACK_LINE(548)
				hx::AddEq(color_index,(int)4);
				HX_STACK_LINE(548)
				hx::AddEq(normal_index,(int)4);
			}
		}
	}
	else{
		HX_STACK_LINE(550)
		int vert_index = (int)0;		HX_STACK_VAR(vert_index,"vert_index");
		HX_STACK_LINE(550)
		int tcoord_index = (int)0;		HX_STACK_VAR(tcoord_index,"tcoord_index");
		HX_STACK_LINE(550)
		int color_index = (int)0;		HX_STACK_VAR(color_index,"color_index");
		HX_STACK_LINE(550)
		int normal_index = (int)0;		HX_STACK_VAR(normal_index,"normal_index");
		HX_STACK_LINE(550)
		::snow::api::buffers::ArrayBufferView tmp11 = this->buffer_pos;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(550)
		::snow::api::buffers::ArrayBufferView vertlist = tmp11;		HX_STACK_VAR(vertlist,"vertlist");
		HX_STACK_LINE(550)
		::snow::api::buffers::ArrayBufferView tmp12 = this->buffer_tcoords;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(550)
		::snow::api::buffers::ArrayBufferView tcoordlist = tmp12;		HX_STACK_VAR(tcoordlist,"tcoordlist");
		HX_STACK_LINE(550)
		::snow::api::buffers::ArrayBufferView tmp13 = this->buffer_colors;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(550)
		::snow::api::buffers::ArrayBufferView colorlist = tmp13;		HX_STACK_VAR(colorlist,"colorlist");
		HX_STACK_LINE(550)
		::phoenix::Matrix tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(550)
		{
			HX_STACK_LINE(550)
			::phoenix::Spatial tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(550)
			{
				HX_STACK_LINE(550)
				::phoenix::Transform tmp16 = this->transform;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(550)
				::phoenix::Transform _this = tmp16;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(550)
				bool tmp17 = _this->_destroying;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(550)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(550)
				if ((tmp18)){
					HX_STACK_LINE(550)
					bool tmp19 = (_this->parent != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(550)
					if ((tmp19)){
						HX_STACK_LINE(550)
						bool tmp20 = _this->parent->dirty;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(550)
						if ((tmp20)){
							HX_STACK_LINE(550)
							_this->parent->clean();
						}
					}
					HX_STACK_LINE(550)
					bool tmp20 = _this->dirty;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(550)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(550)
					if ((tmp20)){
						HX_STACK_LINE(550)
						bool tmp22 = _this->_cleaning;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(550)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(550)
						tmp21 = !(tmp23);
					}
					else{
						HX_STACK_LINE(550)
						tmp21 = false;
					}
					HX_STACK_LINE(550)
					if ((tmp21)){
						HX_STACK_LINE(550)
						_this->clean();
					}
				}
				HX_STACK_LINE(550)
				tmp15 = _this->world;
			}
			HX_STACK_LINE(550)
			::phoenix::Spatial _this = tmp15;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(550)
			tmp14 = _this->matrix;
		}
		HX_STACK_LINE(550)
		::phoenix::Matrix _mat = tmp14;		HX_STACK_VAR(_mat,"_mat");
		HX_STACK_LINE(550)
		Array< Float > _el = _mat->elements;		HX_STACK_VAR(_el,"_el");
		HX_STACK_LINE(550)
		int tmp15 = this->vertices->length;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(550)
		int _count = tmp15;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(550)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(550)
		while((true)){
			HX_STACK_LINE(550)
			bool tmp16 = (_idx < _count);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(550)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(550)
			if ((tmp17)){
				HX_STACK_LINE(550)
				break;
			}
			HX_STACK_LINE(550)
			::phoenix::geometry::Vertex tmp18 = this->vertices->__get(_idx).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(550)
			::phoenix::geometry::Vertex v = tmp18;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(550)
			Float tmp19 = v->pos->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(550)
			Float _vx = tmp19;		HX_STACK_VAR(_vx,"_vx");
			HX_STACK_LINE(550)
			Float tmp20 = v->pos->y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(550)
			Float _vy = tmp20;		HX_STACK_VAR(_vy,"_vy");
			HX_STACK_LINE(550)
			Float tmp21 = v->pos->z;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(550)
			Float _vz = tmp21;		HX_STACK_VAR(_vz,"_vz");
			HX_STACK_LINE(550)
			Float tmp22 = _el->__unsafe_get((int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(550)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(550)
			Float tmp24 = _vx;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(550)
			Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(550)
			Float tmp26 = _el->__unsafe_get((int)4);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(550)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(550)
			Float tmp28 = _vy;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(550)
			Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(550)
			Float tmp30 = (tmp25 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(550)
			Float tmp31 = _el->__unsafe_get((int)8);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(550)
			Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(550)
			Float tmp33 = _vz;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(550)
			Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(550)
			Float tmp35 = (tmp30 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(550)
			Float tmp36 = _el->__unsafe_get((int)12);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(550)
			Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(550)
			Float tmp38 = (tmp35 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(550)
			Float _tvx = tmp38;		HX_STACK_VAR(_tvx,"_tvx");
			HX_STACK_LINE(550)
			Float tmp39 = _el->__unsafe_get((int)1);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(550)
			Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(550)
			Float tmp41 = _vx;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(550)
			Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(550)
			Float tmp43 = _el->__unsafe_get((int)5);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(550)
			Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(550)
			Float tmp45 = _vy;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(550)
			Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(550)
			Float tmp47 = (tmp42 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(550)
			Float tmp48 = _el->__unsafe_get((int)9);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(550)
			Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(550)
			Float tmp50 = _vz;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(550)
			Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(550)
			Float tmp52 = (tmp47 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(550)
			Float tmp53 = _el->__unsafe_get((int)13);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(550)
			Float tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(550)
			Float tmp55 = (tmp52 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(550)
			Float _tvy = tmp55;		HX_STACK_VAR(_tvy,"_tvy");
			HX_STACK_LINE(550)
			Float tmp56 = _el->__unsafe_get((int)2);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(550)
			Float tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(550)
			Float tmp58 = _vx;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(550)
			Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(550)
			Float tmp60 = _el->__unsafe_get((int)6);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(550)
			Float tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(550)
			Float tmp62 = _vy;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(550)
			Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(550)
			Float tmp64 = (tmp59 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(550)
			Float tmp65 = _el->__unsafe_get((int)10);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(550)
			Float tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(550)
			Float tmp67 = _vz;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(550)
			Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(550)
			Float tmp69 = (tmp64 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(550)
			Float tmp70 = _el->__unsafe_get((int)14);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(550)
			Float tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(550)
			Float tmp72 = (tmp69 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(550)
			Float _tvz = tmp72;		HX_STACK_VAR(_tvz,"_tvz");
			HX_STACK_LINE(550)
			::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (vert_index * (int)4)),_tvx);
			HX_STACK_LINE(550)
			::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (((vert_index + (int)1)) * (int)4)),_tvy);
			HX_STACK_LINE(550)
			::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (((vert_index + (int)2)) * (int)4)),_tvz);
			HX_STACK_LINE(550)
			::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (((vert_index + (int)3)) * (int)4)),v->pos->w);
			HX_STACK_LINE(550)
			hx::AddEq(vert_index,(int)4);
			HX_STACK_LINE(550)
			::phoenix::geometry::TextureCoord tmp73 = v->uv->uv0;		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(550)
			::phoenix::geometry::TextureCoord _vuv = tmp73;		HX_STACK_VAR(_vuv,"_vuv");
			HX_STACK_LINE(550)
			::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (tcoord_index * (int)4)),_vuv->u);
			HX_STACK_LINE(550)
			::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (((tcoord_index + (int)1)) * (int)4)),_vuv->v);
			HX_STACK_LINE(550)
			::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (((tcoord_index + (int)2)) * (int)4)),_vuv->w);
			HX_STACK_LINE(550)
			::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (((tcoord_index + (int)3)) * (int)4)),_vuv->t);
			HX_STACK_LINE(550)
			hx::AddEq(tcoord_index,(int)4);
			HX_STACK_LINE(550)
			::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (color_index * (int)4)),v->color->r);
			HX_STACK_LINE(550)
			::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (((color_index + (int)1)) * (int)4)),v->color->g);
			HX_STACK_LINE(550)
			::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (((color_index + (int)2)) * (int)4)),v->color->b);
			HX_STACK_LINE(550)
			::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (((color_index + (int)3)) * (int)4)),v->color->a);
			HX_STACK_LINE(550)
			hx::AddEq(color_index,(int)4);
			HX_STACK_LINE(550)
			hx::AddEq(normal_index,(int)4);
			HX_STACK_LINE(550)
			(_idx)++;
		}
	}
	HX_STACK_LINE(553)
	this->set_dirty(false);
	HX_STACK_LINE(555)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,update_buffers,return )

Void Geometry_obj::draw( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","draw",0x8cfe9963,"phoenix.geometry.Geometry.draw","phoenix/geometry/Geometry.hx",564,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(564)
		::snow::api::buffers::ArrayBufferView tmp = this->buffer_pos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(564)
		int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(564)
		Float tmp2 = (Float(tmp1) / Float((int)4));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(564)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(564)
		int count = tmp3;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(564)
		::phoenix::geometry::GeometryState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(564)
		int tmp5 = tmp4->primitive_type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(564)
		int tmp6 = count;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(564)
		glDrawArrays(tmp5,(int)0,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,draw,(void))

Void Geometry_obj::translate( ::phoenix::Vector _offset){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","translate",0xde6d918f,"phoenix.geometry.Geometry.translate","phoenix/geometry/Geometry.hx",571,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_offset,"_offset")
		HX_STACK_LINE(571)
		::phoenix::Transform tmp = this->transform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(571)
		::phoenix::Vector tmp1 = tmp->local->pos;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(571)
		::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(571)
		::phoenix::Transform tmp2 = this->transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(571)
		::phoenix::Vector tmp3 = tmp2->local->pos;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(571)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(571)
		Float tmp5 = _offset->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(571)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(571)
		Float _x = tmp6;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(571)
		::phoenix::Transform tmp7 = this->transform;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(571)
		::phoenix::Vector tmp8 = tmp7->local->pos;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(571)
		Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(571)
		Float tmp10 = _offset->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(571)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(571)
		Float _y = tmp11;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(571)
		::phoenix::Transform tmp12 = this->transform;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(571)
		::phoenix::Vector tmp13 = tmp12->local->pos;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(571)
		Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(571)
		Float tmp15 = _offset->z;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(571)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(571)
		Float _z = tmp16;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(571)
		bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(571)
		_this->ignore_listeners = true;
		HX_STACK_LINE(571)
		{
			HX_STACK_LINE(571)
			_this->x = _x;
			HX_STACK_LINE(571)
			bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(571)
			if ((tmp17)){
				HX_STACK_LINE(571)
				_this->x;
			}
			else{
				HX_STACK_LINE(571)
				bool tmp18 = (_this->listen_x != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(571)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(571)
				if ((tmp18)){
					HX_STACK_LINE(571)
					bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(571)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(571)
					tmp19 = !(tmp21);
				}
				else{
					HX_STACK_LINE(571)
					tmp19 = false;
				}
				HX_STACK_LINE(571)
				if ((tmp19)){
					HX_STACK_LINE(571)
					Float tmp20 = _x;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(571)
					_this->listen_x(tmp20);
				}
				HX_STACK_LINE(571)
				_this->x;
			}
		}
		HX_STACK_LINE(571)
		{
			HX_STACK_LINE(571)
			_this->y = _y;
			HX_STACK_LINE(571)
			bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(571)
			if ((tmp17)){
				HX_STACK_LINE(571)
				_this->y;
			}
			else{
				HX_STACK_LINE(571)
				bool tmp18 = (_this->listen_y != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(571)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(571)
				if ((tmp18)){
					HX_STACK_LINE(571)
					bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(571)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(571)
					tmp19 = !(tmp21);
				}
				else{
					HX_STACK_LINE(571)
					tmp19 = false;
				}
				HX_STACK_LINE(571)
				if ((tmp19)){
					HX_STACK_LINE(571)
					Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(571)
					_this->listen_y(tmp20);
				}
				HX_STACK_LINE(571)
				_this->y;
			}
		}
		HX_STACK_LINE(571)
		{
			HX_STACK_LINE(571)
			_this->z = _z;
			HX_STACK_LINE(571)
			bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(571)
			if ((tmp17)){
				HX_STACK_LINE(571)
				_this->z;
			}
			else{
				HX_STACK_LINE(571)
				bool tmp18 = (_this->listen_z != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(571)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(571)
				if ((tmp18)){
					HX_STACK_LINE(571)
					bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(571)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(571)
					tmp19 = !(tmp21);
				}
				else{
					HX_STACK_LINE(571)
					tmp19 = false;
				}
				HX_STACK_LINE(571)
				if ((tmp19)){
					HX_STACK_LINE(571)
					Float tmp20 = _z;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(571)
					_this->listen_z(tmp20);
				}
				HX_STACK_LINE(571)
				_this->z;
			}
		}
		HX_STACK_LINE(571)
		_this->ignore_listeners = prev;
		HX_STACK_LINE(571)
		bool tmp17 = (_this->listen_x != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(571)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(571)
		if ((tmp17)){
			HX_STACK_LINE(571)
			bool tmp19 = _this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(571)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(571)
			tmp18 = !(tmp20);
		}
		else{
			HX_STACK_LINE(571)
			tmp18 = false;
		}
		HX_STACK_LINE(571)
		if ((tmp18)){
			HX_STACK_LINE(571)
			Float tmp19 = _this->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(571)
			_this->listen_x(tmp19);
		}
		HX_STACK_LINE(571)
		bool tmp19 = (_this->listen_y != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(571)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(571)
		if ((tmp19)){
			HX_STACK_LINE(571)
			bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(571)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(571)
			tmp20 = !(tmp22);
		}
		else{
			HX_STACK_LINE(571)
			tmp20 = false;
		}
		HX_STACK_LINE(571)
		if ((tmp20)){
			HX_STACK_LINE(571)
			Float tmp21 = _this->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(571)
			_this->listen_y(tmp21);
		}
		HX_STACK_LINE(571)
		bool tmp21 = (_this->listen_z != null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(571)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(571)
		if ((tmp21)){
			HX_STACK_LINE(571)
			bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(571)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(571)
			tmp22 = !(tmp24);
		}
		else{
			HX_STACK_LINE(571)
			tmp22 = false;
		}
		HX_STACK_LINE(571)
		if ((tmp22)){
			HX_STACK_LINE(571)
			Float tmp23 = _this->z;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(571)
			_this->listen_z(tmp23);
		}
		HX_STACK_LINE(571)
		_this;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,translate,(void))

bool Geometry_obj::set_locked( bool _locked){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_locked",0x08e151e6,"phoenix.geometry.Geometry.set_locked","phoenix/geometry/Geometry.hx",575,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_locked,"_locked")
	HX_STACK_LINE(577)
	bool tmp = _locked;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(577)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(577)
	if ((tmp)){
		HX_STACK_LINE(577)
		tmp1 = (int)35044;
	}
	else{
		HX_STACK_LINE(577)
		tmp1 = (int)35048;
	}
	HX_STACK_LINE(577)
	this->buffer_type = tmp1;
	HX_STACK_LINE(579)
	bool tmp2 = _locked;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(579)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(579)
	if ((tmp2)){
		HX_STACK_LINE(579)
		::opengl::GLObject tmp4 = this->vb_pos;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(579)
		::opengl::GLObject tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(579)
		tmp3 = (tmp5 == null());
	}
	else{
		HX_STACK_LINE(579)
		tmp3 = false;
	}
	HX_STACK_LINE(579)
	if ((tmp3)){
		HX_STACK_LINE(579)
		::opengl::GLObject tmp4 = this->vb_pos;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(579)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(579)
		if ((tmp5)){
			HX_STACK_LINE(579)
			Dynamic();
		}
		else{
			HX_STACK_LINE(579)
			::opengl::GLObject tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				int tmp7 = linc::opengl::webgl::createBuffer();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(579)
				int _id = tmp7;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(579)
				::opengl::GLObject tmp8 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(579)
				tmp6 = tmp8;
			}
			HX_STACK_LINE(579)
			this->vb_pos = tmp6;
			HX_STACK_LINE(579)
			::opengl::GLObject tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				int tmp8 = linc::opengl::webgl::createBuffer();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(579)
				int _id = tmp8;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(579)
				::opengl::GLObject tmp9 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(579)
				tmp7 = tmp9;
			}
			HX_STACK_LINE(579)
			this->vb_tcoords = tmp7;
			HX_STACK_LINE(579)
			::opengl::GLObject tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				int tmp9 = linc::opengl::webgl::createBuffer();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(579)
				int _id = tmp9;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(579)
				::opengl::GLObject tmp10 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(579)
				tmp8 = tmp10;
			}
			HX_STACK_LINE(579)
			this->vb_colors = tmp8;
			HX_STACK_LINE(579)
			this->set_dirty(true);
		}
	}
	HX_STACK_LINE(580)
	bool tmp4 = _locked;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(580)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(580)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(580)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(580)
	if ((tmp6)){
		HX_STACK_LINE(580)
		::opengl::GLObject tmp8 = this->vb_pos;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(580)
		::opengl::GLObject tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(580)
		tmp7 = (tmp9 != null());
	}
	else{
		HX_STACK_LINE(580)
		tmp7 = false;
	}
	HX_STACK_LINE(580)
	if ((tmp7)){
		HX_STACK_LINE(580)
		this->destroy_vbos();
	}
	HX_STACK_LINE(582)
	bool tmp8 = this->locked = _locked;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(582)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_locked,return )

bool Geometry_obj::get_locked( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_locked",0x0563b372,"phoenix.geometry.Geometry.get_locked","phoenix/geometry/Geometry.hx",586,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(588)
	bool tmp = this->locked;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(588)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_locked,return )

bool Geometry_obj::set_dirty( bool _dirty){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_dirty",0x95b852b6,"phoenix.geometry.Geometry.set_dirty","phoenix/geometry/Geometry.hx",592,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_dirty,"_dirty")
	HX_STACK_LINE(594)
	bool tmp = this->dirty = _dirty;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(594)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_dirty,return )

bool Geometry_obj::get_dirty( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_dirty",0xb26766aa,"phoenix.geometry.Geometry.get_dirty","phoenix/geometry/Geometry.hx",598,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(600)
	bool tmp = this->dirty;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(600)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_dirty,return )

Void Geometry_obj::refresh( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","refresh",0x7a5fd1dc,"phoenix.geometry.Geometry.refresh","phoenix/geometry/Geometry.hx",606,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(609)
		{
			HX_STACK_LINE(609)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(609)
			Array< ::Dynamic > _g1 = this->batchers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(609)
			while((true)){
				HX_STACK_LINE(609)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(609)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(609)
				if ((tmp1)){
					HX_STACK_LINE(609)
					break;
				}
				HX_STACK_LINE(609)
				::phoenix::Batcher tmp2 = _g1->__get(_g).StaticCast< ::phoenix::Batcher >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(609)
				::phoenix::Batcher b = tmp2;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(609)
				++(_g);
				HX_STACK_LINE(610)
				b->remove(hx::ObjectPtr<OBJ_>(this),false);
			}
		}
		HX_STACK_LINE(614)
		bool tmp = this->dirty_primitive_type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(614)
		if ((tmp)){
			HX_STACK_LINE(615)
			this->dirty_primitive_type = false;
			HX_STACK_LINE(616)
			{
				HX_STACK_LINE(616)
				::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(616)
				::phoenix::geometry::GeometryState _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(616)
				_this->dirty = true;
				HX_STACK_LINE(616)
				int tmp2 = this->shadow_primitive_type;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(616)
				_this->primitive_type = tmp2;
			}
		}
		HX_STACK_LINE(619)
		bool tmp1 = this->dirty_texture;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(619)
		if ((tmp1)){
			HX_STACK_LINE(620)
			this->dirty_texture = false;
			HX_STACK_LINE(621)
			{
				HX_STACK_LINE(621)
				::phoenix::geometry::GeometryState tmp2 = this->state;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(621)
				::phoenix::geometry::GeometryState _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(621)
				_this->dirty = true;
				HX_STACK_LINE(621)
				::phoenix::Texture tmp3 = this->shadow_texture;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(621)
				_this->texture = tmp3;
			}
		}
		HX_STACK_LINE(624)
		bool tmp2 = this->dirty_shader;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(624)
		if ((tmp2)){
			HX_STACK_LINE(625)
			this->dirty_shader = false;
			HX_STACK_LINE(626)
			{
				HX_STACK_LINE(626)
				::phoenix::geometry::GeometryState tmp3 = this->state;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(626)
				::phoenix::geometry::GeometryState _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(626)
				_this->dirty = true;
				HX_STACK_LINE(626)
				::phoenix::Shader tmp4 = this->shadow_shader;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(626)
				_this->shader = tmp4;
			}
		}
		HX_STACK_LINE(629)
		bool tmp3 = this->dirty_depth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(629)
		if ((tmp3)){
			HX_STACK_LINE(630)
			this->dirty_depth = false;
			HX_STACK_LINE(631)
			Float tmp4 = this->shadow_depth;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(631)
			::phoenix::geometry::GeometryState tmp5 = this->state;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(631)
			tmp5->depth = tmp4;
		}
		HX_STACK_LINE(634)
		bool tmp4 = this->dirty_clip;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(634)
		if ((tmp4)){
			HX_STACK_LINE(635)
			this->dirty_clip = false;
			HX_STACK_LINE(636)
			{
				HX_STACK_LINE(636)
				::phoenix::geometry::GeometryState tmp5 = this->state;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(636)
				::phoenix::geometry::GeometryState _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(636)
				_this->dirty = true;
				HX_STACK_LINE(636)
				bool tmp6 = this->shadow_clip;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(636)
				_this->clip = tmp6;
			}
		}
		HX_STACK_LINE(640)
		this->refresh_key();
		HX_STACK_LINE(642)
		{
			HX_STACK_LINE(642)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(642)
			Array< ::Dynamic > _g1 = this->batchers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(642)
			while((true)){
				HX_STACK_LINE(642)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(642)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(642)
				if ((tmp6)){
					HX_STACK_LINE(642)
					break;
				}
				HX_STACK_LINE(642)
				::phoenix::Batcher tmp7 = _g1->__get(_g).StaticCast< ::phoenix::Batcher >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(642)
				::phoenix::Batcher b = tmp7;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(642)
				++(_g);
				HX_STACK_LINE(643)
				b->add(hx::ObjectPtr<OBJ_>(this),false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,refresh,(void))

int Geometry_obj::get_primitive_type( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_primitive_type",0xf77b1efa,"phoenix.geometry.Geometry.get_primitive_type","phoenix/geometry/Geometry.hx",650,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(652)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(652)
	int tmp1 = tmp->primitive_type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(652)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_primitive_type,return )

int Geometry_obj::set_primitive_type( int val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_primitive_type",0xd42a516e,"phoenix.geometry.Geometry.set_primitive_type","phoenix/geometry/Geometry.hx",656,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(658)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(658)
	int tmp1 = tmp->primitive_type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(658)
	int tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(658)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(658)
	if ((tmp3)){
		HX_STACK_LINE(659)
		this->shadow_primitive_type = val;
		HX_STACK_LINE(660)
		this->dirty_primitive_type = true;
		HX_STACK_LINE(661)
		this->refresh();
	}
	HX_STACK_LINE(664)
	int tmp4 = this->primitive_type = val;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(664)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_primitive_type,return )

::phoenix::Texture Geometry_obj::get_texture( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_texture",0x1c5cb573,"phoenix.geometry.Geometry.get_texture","phoenix/geometry/Geometry.hx",670,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(672)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(672)
	::phoenix::Texture tmp1 = tmp->texture;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(672)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_texture,return )

::phoenix::Texture Geometry_obj::set_texture( ::phoenix::Texture val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_texture",0x26c9bc7f,"phoenix.geometry.Geometry.set_texture","phoenix/geometry/Geometry.hx",676,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(678)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(678)
	::phoenix::Texture tmp1 = tmp->texture;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(678)
	::phoenix::Texture tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(678)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(678)
	if ((tmp3)){
		HX_STACK_LINE(679)
		this->shadow_texture = val;
		HX_STACK_LINE(680)
		this->dirty_texture = true;
		HX_STACK_LINE(681)
		this->refresh();
	}
	HX_STACK_LINE(684)
	::phoenix::Texture tmp4 = this->texture = val;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(684)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_texture,return )

bool Geometry_obj::set_visible( bool val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_visible",0x2b0d6c16,"phoenix.geometry.Geometry.set_visible","phoenix/geometry/Geometry.hx",690,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(692)
	bool tmp = this->visible = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(692)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_visible,return )

::phoenix::Color Geometry_obj::set_color( ::phoenix::Color val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_color",0x06447407,"phoenix.geometry.Geometry.set_color","phoenix/geometry/Geometry.hx",698,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(700)
	bool tmp = (this->vertices != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(700)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(700)
	if ((tmp)){
		HX_STACK_LINE(700)
		int tmp2 = this->vertices->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(700)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(700)
		tmp1 = (tmp3 > (int)0);
	}
	else{
		HX_STACK_LINE(700)
		tmp1 = false;
	}
	HX_STACK_LINE(700)
	if ((tmp1)){
		HX_STACK_LINE(701)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(701)
		Array< ::Dynamic > _g1 = this->vertices;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(701)
		while((true)){
			HX_STACK_LINE(701)
			bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(701)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(701)
			if ((tmp3)){
				HX_STACK_LINE(701)
				break;
			}
			HX_STACK_LINE(701)
			::phoenix::geometry::Vertex tmp4 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(701)
			::phoenix::geometry::Vertex v = tmp4;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(701)
			++(_g);
			HX_STACK_LINE(702)
			v->color = val;
		}
	}
	HX_STACK_LINE(706)
	::phoenix::Color tmp2 = this->color = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(706)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_color,return )

::phoenix::Shader Geometry_obj::get_shader( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_shader",0xc8bd6d8d,"phoenix.geometry.Geometry.get_shader","phoenix/geometry/Geometry.hx",712,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(714)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(714)
	::phoenix::Shader tmp1 = tmp->shader;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(714)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_shader,return )

::phoenix::Shader Geometry_obj::set_shader( ::phoenix::Shader val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_shader",0xcc3b0c01,"phoenix.geometry.Geometry.set_shader","phoenix/geometry/Geometry.hx",718,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(720)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(720)
	::phoenix::Shader tmp1 = tmp->shader;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(720)
	::phoenix::Shader tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(720)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(720)
	if ((tmp3)){
		HX_STACK_LINE(721)
		this->shadow_shader = val;
		HX_STACK_LINE(722)
		this->dirty_shader = true;
		HX_STACK_LINE(723)
		this->refresh();
	}
	HX_STACK_LINE(726)
	::phoenix::Shader tmp4 = this->shader = val;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(726)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_shader,return )

Float Geometry_obj::get_depth( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_depth",0xafc1079b,"phoenix.geometry.Geometry.get_depth","phoenix/geometry/Geometry.hx",732,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(734)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(734)
	Float tmp1 = tmp->depth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(734)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_depth,return )

Float Geometry_obj::set_depth( Float val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_depth",0x9311f3a7,"phoenix.geometry.Geometry.set_depth","phoenix/geometry/Geometry.hx",739,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(741)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(741)
	Float tmp1 = tmp->depth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(741)
	Float tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(741)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(741)
	if ((tmp3)){
		HX_STACK_LINE(742)
		this->shadow_depth = val;
		HX_STACK_LINE(743)
		this->dirty_depth = true;
		HX_STACK_LINE(744)
		this->refresh();
	}
	HX_STACK_LINE(747)
	Float tmp4 = this->depth = val;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(747)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_depth,return )

bool Geometry_obj::get_clip( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_clip",0xcb573338,"phoenix.geometry.Geometry.get_clip","phoenix/geometry/Geometry.hx",753,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(755)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(755)
	bool tmp1 = tmp->clip;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(755)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_clip,return )

bool Geometry_obj::set_clip( bool val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_clip",0x79b48cac,"phoenix.geometry.Geometry.set_clip","phoenix/geometry/Geometry.hx",759,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(761)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(761)
	bool tmp1 = tmp->clip;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(761)
	bool tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(761)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(761)
	if ((tmp3)){
		HX_STACK_LINE(762)
		this->shadow_clip = val;
		HX_STACK_LINE(763)
		this->dirty_clip = true;
		HX_STACK_LINE(764)
		this->refresh();
	}
	HX_STACK_LINE(767)
	bool tmp4 = this->clip = val;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(767)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_clip,return )

::phoenix::Rectangle Geometry_obj::get_clip_rect( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_clip_rect",0x4f648acb,"phoenix.geometry.Geometry.get_clip_rect","phoenix/geometry/Geometry.hx",773,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(775)
	::phoenix::Rectangle tmp = this->clip_rect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(775)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_clip_rect,return )

::phoenix::Rectangle Geometry_obj::set_clip_rect( ::phoenix::Rectangle val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_clip_rect",0x946a6cd7,"phoenix.geometry.Geometry.set_clip_rect","phoenix/geometry/Geometry.hx",779,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(781)
	bool tmp = (val == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(781)
	if ((tmp)){
		HX_STACK_LINE(782)
		this->set_clip(false);
	}
	else{
		HX_STACK_LINE(784)
		this->set_clip(true);
		HX_STACK_LINE(785)
		{
			HX_STACK_LINE(785)
			::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(785)
			::phoenix::geometry::GeometryState _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(785)
			_this->dirty = true;
			HX_STACK_LINE(785)
			_this->clip_x = val->x;
		}
		HX_STACK_LINE(786)
		{
			HX_STACK_LINE(786)
			::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(786)
			::phoenix::geometry::GeometryState _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(786)
			_this->dirty = true;
			HX_STACK_LINE(786)
			_this->clip_y = val->y;
		}
		HX_STACK_LINE(787)
		{
			HX_STACK_LINE(787)
			::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(787)
			::phoenix::geometry::GeometryState _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(787)
			_this->dirty = true;
			HX_STACK_LINE(787)
			_this->clip_w = val->w;
		}
		HX_STACK_LINE(788)
		{
			HX_STACK_LINE(788)
			::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(788)
			::phoenix::geometry::GeometryState _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(788)
			_this->dirty = true;
			HX_STACK_LINE(788)
			_this->clip_h = val->h;
		}
	}
	HX_STACK_LINE(791)
	::phoenix::Rectangle tmp1 = this->clip_rect = val;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(791)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_clip_rect,return )

int Geometry_obj::_sequence_key;


Geometry_obj::Geometry_obj()
{
}

void Geometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Geometry);
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_MEMBER_NAME(object_space,"object_space");
	HX_MARK_MEMBER_NAME(buffer_based,"buffer_based");
	HX_MARK_MEMBER_NAME(buffer_type,"buffer_type");
	HX_MARK_MEMBER_NAME(buffer_pos,"buffer_pos");
	HX_MARK_MEMBER_NAME(buffer_tcoords,"buffer_tcoords");
	HX_MARK_MEMBER_NAME(buffer_colors,"buffer_colors");
	HX_MARK_MEMBER_NAME(buffer_normals,"buffer_normals");
	HX_MARK_MEMBER_NAME(vb_pos,"vb_pos");
	HX_MARK_MEMBER_NAME(vb_tcoords,"vb_tcoords");
	HX_MARK_MEMBER_NAME(vb_colors,"vb_colors");
	HX_MARK_MEMBER_NAME(vb_normals,"vb_normals");
	HX_MARK_MEMBER_NAME(uniforms,"uniforms");
	HX_MARK_MEMBER_NAME(added,"added");
	HX_MARK_MEMBER_NAME(batchers,"batchers");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(dropped,"dropped");
	HX_MARK_MEMBER_NAME(uuid,"uuid");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(primitive_type,"primitive_type");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(clip_rect,"clip_rect");
	HX_MARK_MEMBER_NAME(shadow_primitive_type,"shadow_primitive_type");
	HX_MARK_MEMBER_NAME(shadow_texture,"shadow_texture");
	HX_MARK_MEMBER_NAME(shadow_shader,"shadow_shader");
	HX_MARK_MEMBER_NAME(shadow_depth,"shadow_depth");
	HX_MARK_MEMBER_NAME(shadow_clip,"shadow_clip");
	HX_MARK_MEMBER_NAME(dirty_primitive_type,"dirty_primitive_type");
	HX_MARK_MEMBER_NAME(dirty_texture,"dirty_texture");
	HX_MARK_MEMBER_NAME(dirty_shader,"dirty_shader");
	HX_MARK_MEMBER_NAME(dirty_depth,"dirty_depth");
	HX_MARK_MEMBER_NAME(dirty_clip,"dirty_clip");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(immediate,"immediate");
	HX_MARK_MEMBER_NAME(locked,"locked");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(dirty_based,"dirty_based");
	HX_MARK_MEMBER_NAME(clip,"clip");
	HX_MARK_MEMBER_NAME(_final_vert_position,"_final_vert_position");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(_prev_count,"_prev_count");
	HX_MARK_END_CLASS();
}

void Geometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(transform,"transform");
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
	HX_VISIT_MEMBER_NAME(object_space,"object_space");
	HX_VISIT_MEMBER_NAME(buffer_based,"buffer_based");
	HX_VISIT_MEMBER_NAME(buffer_type,"buffer_type");
	HX_VISIT_MEMBER_NAME(buffer_pos,"buffer_pos");
	HX_VISIT_MEMBER_NAME(buffer_tcoords,"buffer_tcoords");
	HX_VISIT_MEMBER_NAME(buffer_colors,"buffer_colors");
	HX_VISIT_MEMBER_NAME(buffer_normals,"buffer_normals");
	HX_VISIT_MEMBER_NAME(vb_pos,"vb_pos");
	HX_VISIT_MEMBER_NAME(vb_tcoords,"vb_tcoords");
	HX_VISIT_MEMBER_NAME(vb_colors,"vb_colors");
	HX_VISIT_MEMBER_NAME(vb_normals,"vb_normals");
	HX_VISIT_MEMBER_NAME(uniforms,"uniforms");
	HX_VISIT_MEMBER_NAME(added,"added");
	HX_VISIT_MEMBER_NAME(batchers,"batchers");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(dropped,"dropped");
	HX_VISIT_MEMBER_NAME(uuid,"uuid");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(primitive_type,"primitive_type");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(clip_rect,"clip_rect");
	HX_VISIT_MEMBER_NAME(shadow_primitive_type,"shadow_primitive_type");
	HX_VISIT_MEMBER_NAME(shadow_texture,"shadow_texture");
	HX_VISIT_MEMBER_NAME(shadow_shader,"shadow_shader");
	HX_VISIT_MEMBER_NAME(shadow_depth,"shadow_depth");
	HX_VISIT_MEMBER_NAME(shadow_clip,"shadow_clip");
	HX_VISIT_MEMBER_NAME(dirty_primitive_type,"dirty_primitive_type");
	HX_VISIT_MEMBER_NAME(dirty_texture,"dirty_texture");
	HX_VISIT_MEMBER_NAME(dirty_shader,"dirty_shader");
	HX_VISIT_MEMBER_NAME(dirty_depth,"dirty_depth");
	HX_VISIT_MEMBER_NAME(dirty_clip,"dirty_clip");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(immediate,"immediate");
	HX_VISIT_MEMBER_NAME(locked,"locked");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(dirty_based,"dirty_based");
	HX_VISIT_MEMBER_NAME(clip,"clip");
	HX_VISIT_MEMBER_NAME(_final_vert_position,"_final_vert_position");
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(_prev_count,"_prev_count");
}

Dynamic Geometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		if (HX_FIELD_EQ(inName,"str") ) { return str_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"uuid") ) { return uuid; }
		if (HX_FIELD_EQ(inName,"clip") ) { return inCallProp == hx::paccAlways ? get_clip() : clip; }
		if (HX_FIELD_EQ(inName,"drop") ) { return drop_dyn(); }
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { return added; }
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"depth") ) { return inCallProp == hx::paccAlways ? get_depth() : depth; }
		if (HX_FIELD_EQ(inName,"dirty") ) { return inCallProp == hx::paccAlways ? get_dirty() : dirty; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"batch") ) { return batch_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vb_pos") ) { return vb_pos; }
		if (HX_FIELD_EQ(inName,"shader") ) { return inCallProp == hx::paccAlways ? get_shader() : shader; }
		if (HX_FIELD_EQ(inName,"locked") ) { return inCallProp == hx::paccAlways ? get_locked() : locked; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"unbind") ) { return unbind_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dropped") ) { return dropped; }
		if (HX_FIELD_EQ(inName,"texture") ) { return inCallProp == hx::paccAlways ? get_texture() : texture; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return vertices; }
		if (HX_FIELD_EQ(inName,"uniforms") ) { return uniforms; }
		if (HX_FIELD_EQ(inName,"batchers") ) { return batchers; }
		if (HX_FIELD_EQ(inName,"bind_pos") ) { return bind_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"get_clip") ) { return get_clip_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clip") ) { return set_clip_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return transform; }
		if (HX_FIELD_EQ(inName,"vb_colors") ) { return vb_colors; }
		if (HX_FIELD_EQ(inName,"clip_rect") ) { return inCallProp == hx::paccAlways ? get_clip_rect() : clip_rect; }
		if (HX_FIELD_EQ(inName,"immediate") ) { return immediate; }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dirty") ) { return set_dirty_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dirty") ) { return get_dirty_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_depth") ) { return get_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return set_depth_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buffer_pos") ) { return buffer_pos; }
		if (HX_FIELD_EQ(inName,"vb_tcoords") ) { return vb_tcoords; }
		if (HX_FIELD_EQ(inName,"vb_normals") ) { return vb_normals; }
		if (HX_FIELD_EQ(inName,"dirty_clip") ) { return dirty_clip; }
		if (HX_FIELD_EQ(inName,"key_string") ) { return key_string_dyn(); }
		if (HX_FIELD_EQ(inName,"set_locked") ) { return set_locked_dyn(); }
		if (HX_FIELD_EQ(inName,"get_locked") ) { return get_locked_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shader") ) { return get_shader_dyn(); }
		if (HX_FIELD_EQ(inName,"set_shader") ) { return set_shader_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buffer_type") ) { return buffer_type; }
		if (HX_FIELD_EQ(inName,"shadow_clip") ) { return shadow_clip; }
		if (HX_FIELD_EQ(inName,"dirty_depth") ) { return dirty_depth; }
		if (HX_FIELD_EQ(inName,"dirty_based") ) { return dirty_based; }
		if (HX_FIELD_EQ(inName,"refresh_key") ) { return refresh_key_dyn(); }
		if (HX_FIELD_EQ(inName,"create_vbos") ) { return create_vbos_dyn(); }
		if (HX_FIELD_EQ(inName,"bind_colors") ) { return bind_colors_dyn(); }
		if (HX_FIELD_EQ(inName,"_prev_count") ) { return _prev_count; }
		if (HX_FIELD_EQ(inName,"get_texture") ) { return get_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"object_space") ) { return object_space; }
		if (HX_FIELD_EQ(inName,"buffer_based") ) { return buffer_based; }
		if (HX_FIELD_EQ(inName,"shadow_depth") ) { return shadow_depth; }
		if (HX_FIELD_EQ(inName,"dirty_shader") ) { return dirty_shader; }
		if (HX_FIELD_EQ(inName,"destroy_vbos") ) { return destroy_vbos_dyn(); }
		if (HX_FIELD_EQ(inName,"bind_tcoords") ) { return bind_tcoords_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"buffer_colors") ) { return buffer_colors; }
		if (HX_FIELD_EQ(inName,"shadow_shader") ) { return shadow_shader; }
		if (HX_FIELD_EQ(inName,"dirty_texture") ) { return dirty_texture; }
		if (HX_FIELD_EQ(inName,"get_clip_rect") ) { return get_clip_rect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clip_rect") ) { return set_clip_rect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"buffer_tcoords") ) { return buffer_tcoords; }
		if (HX_FIELD_EQ(inName,"buffer_normals") ) { return buffer_normals; }
		if (HX_FIELD_EQ(inName,"primitive_type") ) { return inCallProp == hx::paccAlways ? get_primitive_type() : primitive_type; }
		if (HX_FIELD_EQ(inName,"shadow_texture") ) { return shadow_texture; }
		if (HX_FIELD_EQ(inName,"update_buffers") ) { return update_buffers_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bind_and_upload") ) { return bind_and_upload_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"batch_into_arrays") ) { return batch_into_arrays_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"batch_object_space") ) { return batch_object_space_dyn(); }
		if (HX_FIELD_EQ(inName,"get_primitive_type") ) { return get_primitive_type_dyn(); }
		if (HX_FIELD_EQ(inName,"set_primitive_type") ) { return set_primitive_type_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"dirty_primitive_type") ) { return dirty_primitive_type; }
		if (HX_FIELD_EQ(inName,"_final_vert_position") ) { return _final_vert_position; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"shadow_primitive_type") ) { return shadow_primitive_type; }
	}
	return super::__Field(inName,inCallProp);
}

bool Geometry_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_sequence_key") ) { outValue = _sequence_key; return true;  }
	}
	return false;
}

Dynamic Geometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< ::phoenix::geometry::GeometryKey >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"uuid") ) { uuid=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clip") ) { if (inCallProp == hx::paccAlways) return set_clip(inValue);clip=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { added=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::phoenix::geometry::GeometryState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == hx::paccAlways) return set_depth(inValue);depth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { if (inCallProp == hx::paccAlways) return set_dirty(inValue);dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue);color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vb_pos") ) { vb_pos=inValue.Cast< ::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { if (inCallProp == hx::paccAlways) return set_shader(inValue);shader=inValue.Cast< ::phoenix::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"locked") ) { if (inCallProp == hx::paccAlways) return set_locked(inValue);locked=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dropped") ) { dropped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == hx::paccAlways) return set_texture(inValue);texture=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uniforms") ) { uniforms=inValue.Cast< ::phoenix::Uniforms >(); return inValue; }
		if (HX_FIELD_EQ(inName,"batchers") ) { batchers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast< ::phoenix::Transform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vb_colors") ) { vb_colors=inValue.Cast< ::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clip_rect") ) { if (inCallProp == hx::paccAlways) return set_clip_rect(inValue);clip_rect=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"immediate") ) { immediate=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buffer_pos") ) { buffer_pos=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vb_tcoords") ) { vb_tcoords=inValue.Cast< ::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vb_normals") ) { vb_normals=inValue.Cast< ::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_clip") ) { dirty_clip=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buffer_type") ) { buffer_type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadow_clip") ) { shadow_clip=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_depth") ) { dirty_depth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_based") ) { dirty_based=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prev_count") ) { _prev_count=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"object_space") ) { object_space=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer_based") ) { buffer_based=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadow_depth") ) { shadow_depth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_shader") ) { dirty_shader=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"buffer_colors") ) { buffer_colors=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadow_shader") ) { shadow_shader=inValue.Cast< ::phoenix::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_texture") ) { dirty_texture=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"buffer_tcoords") ) { buffer_tcoords=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer_normals") ) { buffer_normals=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"primitive_type") ) { if (inCallProp == hx::paccAlways) return set_primitive_type(inValue);primitive_type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadow_texture") ) { shadow_texture=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"dirty_primitive_type") ) { dirty_primitive_type=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_final_vert_position") ) { _final_vert_position=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"shadow_primitive_type") ) { shadow_primitive_type=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Geometry_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_sequence_key") ) { _sequence_key=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Geometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	outFields->push(HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"));
	outFields->push(HX_HCSTRING("object_space","\x06","\x6c","\xc3","\x22"));
	outFields->push(HX_HCSTRING("buffer_based","\x74","\xeb","\xe1","\x79"));
	outFields->push(HX_HCSTRING("buffer_type","\x99","\x31","\x38","\x0a"));
	outFields->push(HX_HCSTRING("buffer_pos","\x95","\xdf","\x57","\xa5"));
	outFields->push(HX_HCSTRING("buffer_tcoords","\x13","\x8a","\x10","\x99"));
	outFields->push(HX_HCSTRING("buffer_colors","\x4f","\xba","\x2a","\x9d"));
	outFields->push(HX_HCSTRING("buffer_normals","\xed","\x86","\xac","\x24"));
	outFields->push(HX_HCSTRING("vb_pos","\xc1","\x0f","\x82","\xda"));
	outFields->push(HX_HCSTRING("vb_tcoords","\x3f","\x40","\xb4","\x3c"));
	outFields->push(HX_HCSTRING("vb_colors","\xa3","\xed","\x93","\x55"));
	outFields->push(HX_HCSTRING("vb_normals","\x19","\x3d","\x50","\xc8"));
	outFields->push(HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02"));
	outFields->push(HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c"));
	outFields->push(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("dropped","\x00","\x24","\xe9","\x06"));
	outFields->push(HX_HCSTRING("uuid","\x3b","\x1a","\xaf","\x4d"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"));
	outFields->push(HX_HCSTRING("shadow_primitive_type","\x51","\x25","\xc9","\x32"));
	outFields->push(HX_HCSTRING("shadow_texture","\x3c","\xca","\x94","\x51"));
	outFields->push(HX_HCSTRING("shadow_shader","\xe4","\xc4","\x51","\x95"));
	outFields->push(HX_HCSTRING("shadow_depth","\x24","\x28","\x49","\x1a"));
	outFields->push(HX_HCSTRING("shadow_clip","\xcf","\x36","\x72","\xd8"));
	outFields->push(HX_HCSTRING("dirty_primitive_type","\x5f","\xa5","\x3a","\x90"));
	outFields->push(HX_HCSTRING("dirty_texture","\x6e","\xd4","\x32","\x48"));
	outFields->push(HX_HCSTRING("dirty_shader","\xf2","\x86","\xfd","\x54"));
	outFields->push(HX_HCSTRING("dirty_depth","\xd6","\xe1","\x7f","\x8a"));
	outFields->push(HX_HCSTRING("dirty_clip","\x5d","\xb9","\x4d","\x48"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"));
	outFields->push(HX_HCSTRING("locked","\x0a","\x05","\xc7","\x59"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("dirty_based","\x06","\x18","\x10","\x61"));
	outFields->push(HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"));
	outFields->push(HX_HCSTRING("_final_vert_position","\x6f","\x0e","\xa4","\x12"));
	outFields->push(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"));
	outFields->push(HX_HCSTRING("_prev_count","\x62","\x50","\xb5","\xe4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Transform*/ ,(int)offsetof(Geometry_obj,transform),HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Geometry_obj,vertices),HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a")},
	{hx::fsBool,(int)offsetof(Geometry_obj,object_space),HX_HCSTRING("object_space","\x06","\x6c","\xc3","\x22")},
	{hx::fsBool,(int)offsetof(Geometry_obj,buffer_based),HX_HCSTRING("buffer_based","\x74","\xeb","\xe1","\x79")},
	{hx::fsInt,(int)offsetof(Geometry_obj,buffer_type),HX_HCSTRING("buffer_type","\x99","\x31","\x38","\x0a")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Geometry_obj,buffer_pos),HX_HCSTRING("buffer_pos","\x95","\xdf","\x57","\xa5")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Geometry_obj,buffer_tcoords),HX_HCSTRING("buffer_tcoords","\x13","\x8a","\x10","\x99")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Geometry_obj,buffer_colors),HX_HCSTRING("buffer_colors","\x4f","\xba","\x2a","\x9d")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Geometry_obj,buffer_normals),HX_HCSTRING("buffer_normals","\xed","\x86","\xac","\x24")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(Geometry_obj,vb_pos),HX_HCSTRING("vb_pos","\xc1","\x0f","\x82","\xda")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(Geometry_obj,vb_tcoords),HX_HCSTRING("vb_tcoords","\x3f","\x40","\xb4","\x3c")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(Geometry_obj,vb_colors),HX_HCSTRING("vb_colors","\xa3","\xed","\x93","\x55")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(Geometry_obj,vb_normals),HX_HCSTRING("vb_normals","\x19","\x3d","\x50","\xc8")},
	{hx::fsObject /*::phoenix::Uniforms*/ ,(int)offsetof(Geometry_obj,uniforms),HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02")},
	{hx::fsBool,(int)offsetof(Geometry_obj,added),HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Geometry_obj,batchers),HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e")},
	{hx::fsObject /*::phoenix::geometry::GeometryState*/ ,(int)offsetof(Geometry_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dropped),HX_HCSTRING("dropped","\x00","\x24","\xe9","\x06")},
	{hx::fsString,(int)offsetof(Geometry_obj,uuid),HX_HCSTRING("uuid","\x3b","\x1a","\xaf","\x4d")},
	{hx::fsString,(int)offsetof(Geometry_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Geometry_obj,primitive_type),HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(Geometry_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsObject /*::phoenix::Shader*/ ,(int)offsetof(Geometry_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsFloat,(int)offsetof(Geometry_obj,depth),HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Geometry_obj,clip_rect),HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89")},
	{hx::fsInt,(int)offsetof(Geometry_obj,shadow_primitive_type),HX_HCSTRING("shadow_primitive_type","\x51","\x25","\xc9","\x32")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(Geometry_obj,shadow_texture),HX_HCSTRING("shadow_texture","\x3c","\xca","\x94","\x51")},
	{hx::fsObject /*::phoenix::Shader*/ ,(int)offsetof(Geometry_obj,shadow_shader),HX_HCSTRING("shadow_shader","\xe4","\xc4","\x51","\x95")},
	{hx::fsFloat,(int)offsetof(Geometry_obj,shadow_depth),HX_HCSTRING("shadow_depth","\x24","\x28","\x49","\x1a")},
	{hx::fsBool,(int)offsetof(Geometry_obj,shadow_clip),HX_HCSTRING("shadow_clip","\xcf","\x36","\x72","\xd8")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_primitive_type),HX_HCSTRING("dirty_primitive_type","\x5f","\xa5","\x3a","\x90")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_texture),HX_HCSTRING("dirty_texture","\x6e","\xd4","\x32","\x48")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_shader),HX_HCSTRING("dirty_shader","\xf2","\x86","\xfd","\x54")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_depth),HX_HCSTRING("dirty_depth","\xd6","\xe1","\x7f","\x8a")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_clip),HX_HCSTRING("dirty_clip","\x5d","\xb9","\x4d","\x48")},
	{hx::fsBool,(int)offsetof(Geometry_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsBool,(int)offsetof(Geometry_obj,immediate),HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf")},
	{hx::fsBool,(int)offsetof(Geometry_obj,locked),HX_HCSTRING("locked","\x0a","\x05","\xc7","\x59")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Geometry_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_based),HX_HCSTRING("dirty_based","\x06","\x18","\x10","\x61")},
	{hx::fsBool,(int)offsetof(Geometry_obj,clip),HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Geometry_obj,_final_vert_position),HX_HCSTRING("_final_vert_position","\x6f","\x0e","\xa4","\x12")},
	{hx::fsObject /*::phoenix::geometry::GeometryKey*/ ,(int)offsetof(Geometry_obj,key),HX_HCSTRING("key","\x9f","\x89","\x51","\x00")},
	{hx::fsInt,(int)offsetof(Geometry_obj,_prev_count),HX_HCSTRING("_prev_count","\x62","\x50","\xb5","\xe4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Geometry_obj::_sequence_key,HX_HCSTRING("_sequence_key","\x40","\x34","\x6b","\xf7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"),
	HX_HCSTRING("object_space","\x06","\x6c","\xc3","\x22"),
	HX_HCSTRING("buffer_based","\x74","\xeb","\xe1","\x79"),
	HX_HCSTRING("buffer_type","\x99","\x31","\x38","\x0a"),
	HX_HCSTRING("buffer_pos","\x95","\xdf","\x57","\xa5"),
	HX_HCSTRING("buffer_tcoords","\x13","\x8a","\x10","\x99"),
	HX_HCSTRING("buffer_colors","\x4f","\xba","\x2a","\x9d"),
	HX_HCSTRING("buffer_normals","\xed","\x86","\xac","\x24"),
	HX_HCSTRING("vb_pos","\xc1","\x0f","\x82","\xda"),
	HX_HCSTRING("vb_tcoords","\x3f","\x40","\xb4","\x3c"),
	HX_HCSTRING("vb_colors","\xa3","\xed","\x93","\x55"),
	HX_HCSTRING("vb_normals","\x19","\x3d","\x50","\xc8"),
	HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02"),
	HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c"),
	HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("dropped","\x00","\x24","\xe9","\x06"),
	HX_HCSTRING("uuid","\x3b","\x1a","\xaf","\x4d"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"),
	HX_HCSTRING("shadow_primitive_type","\x51","\x25","\xc9","\x32"),
	HX_HCSTRING("shadow_texture","\x3c","\xca","\x94","\x51"),
	HX_HCSTRING("shadow_shader","\xe4","\xc4","\x51","\x95"),
	HX_HCSTRING("shadow_depth","\x24","\x28","\x49","\x1a"),
	HX_HCSTRING("shadow_clip","\xcf","\x36","\x72","\xd8"),
	HX_HCSTRING("dirty_primitive_type","\x5f","\xa5","\x3a","\x90"),
	HX_HCSTRING("dirty_texture","\x6e","\xd4","\x32","\x48"),
	HX_HCSTRING("dirty_shader","\xf2","\x86","\xfd","\x54"),
	HX_HCSTRING("dirty_depth","\xd6","\xe1","\x7f","\x8a"),
	HX_HCSTRING("dirty_clip","\x5d","\xb9","\x4d","\x48"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"),
	HX_HCSTRING("locked","\x0a","\x05","\xc7","\x59"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("dirty_based","\x06","\x18","\x10","\x61"),
	HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"),
	HX_HCSTRING("_final_vert_position","\x6f","\x0e","\xa4","\x12"),
	HX_HCSTRING("key","\x9f","\x89","\x51","\x00"),
	HX_HCSTRING("key_string","\xb1","\xb2","\xdd","\x20"),
	HX_HCSTRING("refresh_key","\xfb","\x31","\xdf","\x48"),
	HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"),
	HX_HCSTRING("drop","\x2f","\x38","\x70","\x42"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("batch","\xba","\xe7","\xba","\xad"),
	HX_HCSTRING("batch_object_space","\xeb","\x4a","\x61","\xa3"),
	HX_HCSTRING("batch_into_arrays","\x74","\x5e","\xc2","\x25"),
	HX_HCSTRING("destroy_vbos","\xf5","\x8f","\x2d","\x60"),
	HX_HCSTRING("create_vbos","\xb3","\xce","\xa8","\x97"),
	HX_HCSTRING("bind","\xbd","\xf5","\x16","\x41"),
	HX_HCSTRING("bind_pos","\xd2","\xba","\x11","\xc2"),
	HX_HCSTRING("bind_tcoords","\xd0","\x47","\xc5","\xe6"),
	HX_HCSTRING("bind_colors","\x32","\xc3","\x1d","\x64"),
	HX_HCSTRING("unbind","\x96","\xfc","\xeb","\x5e"),
	HX_HCSTRING("bind_and_upload","\x2b","\xe0","\xe8","\x2d"),
	HX_HCSTRING("_prev_count","\x62","\x50","\xb5","\xe4"),
	HX_HCSTRING("update_buffers","\xfd","\x33","\xc1","\x46"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"),
	HX_HCSTRING("set_locked","\x47","\x13","\xcc","\x4d"),
	HX_HCSTRING("get_locked","\xd3","\x74","\x4e","\x4a"),
	HX_HCSTRING("set_dirty","\x75","\x98","\xca","\x00"),
	HX_HCSTRING("get_dirty","\x69","\xac","\x79","\x1d"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("get_primitive_type","\x5b","\xa9","\x07","\x24"),
	HX_HCSTRING("set_primitive_type","\xcf","\xdb","\xb6","\x00"),
	HX_HCSTRING("get_texture","\xf2","\x28","\xdb","\x24"),
	HX_HCSTRING("set_texture","\xfe","\x2f","\x48","\x2f"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("get_shader","\xee","\x2e","\xa8","\x0d"),
	HX_HCSTRING("set_shader","\x62","\xcd","\x25","\x11"),
	HX_HCSTRING("get_depth","\x5a","\x4d","\xd3","\x1a"),
	HX_HCSTRING("set_depth","\x66","\x39","\x24","\xfe"),
	HX_HCSTRING("get_clip","\x59","\x2a","\x7d","\xc1"),
	HX_HCSTRING("set_clip","\xcd","\x83","\xda","\x6f"),
	HX_HCSTRING("get_clip_rect","\x0a","\x1c","\x06","\x4b"),
	HX_HCSTRING("set_clip_rect","\x16","\xfe","\x0b","\x90"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Geometry_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Geometry_obj::_sequence_key,"_sequence_key");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Geometry_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Geometry_obj::_sequence_key,"_sequence_key");
};

#endif

hx::Class Geometry_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_sequence_key","\x40","\x34","\x6b","\xf7"),
	::String(null()) };

void Geometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.Geometry","\x6f","\xef","\x7a","\x64");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Geometry_obj::__GetStatic;
	__mClass->mSetStaticField = &Geometry_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Geometry_obj >;
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

void Geometry_obj::__boot()
{
	_sequence_key= (int)-1;
}

} // end namespace phoenix
} // end namespace geometry
