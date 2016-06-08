#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
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
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#include <phoenix/geometry/QuadGeometry.h>
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

Void QuadGeometry_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.geometry.QuadGeometry","new",0xa66b69c8,"phoenix.geometry.QuadGeometry.new","phoenix/geometry/QuadGeometry.hx",12,0x485a4ac8)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(22)
	this->_uv_h = ((Float)1);
	HX_STACK_LINE(21)
	this->_uv_w = ((Float)1);
	HX_STACK_LINE(20)
	this->_uv_y = ((Float)0);
	HX_STACK_LINE(19)
	this->_uv_x = ((Float)0);
	HX_STACK_LINE(17)
	this->uv_angle = (int)0;
	HX_STACK_LINE(15)
	this->flipy = false;
	HX_STACK_LINE(14)
	this->flipx = false;
	HX_STACK_LINE(26)
	_options->__FieldRef(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88")) = (int)4;
	HX_STACK_LINE(28)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	super::__construct(tmp);
	HX_STACK_LINE(31)
	bool tmp1 = (_options->__Field(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	if ((tmp1)){
		HX_STACK_LINE(31)
		Dynamic tmp2 = _options->__Field(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		this->set_flipx(tmp2);
	}
	HX_STACK_LINE(32)
	bool tmp2 = (_options->__Field(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	if ((tmp2)){
		HX_STACK_LINE(32)
		Dynamic tmp3 = _options->__Field(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		this->set_flipy(tmp3);
	}
	HX_STACK_LINE(34)
	Float _x = _options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(35)
	Float _y = _options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(36)
	Float _w = _options->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_w,"_w");
	HX_STACK_LINE(37)
	Float _h = _options->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_h,"_h");
	HX_STACK_LINE(39)
	bool tmp3 = (_options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	if ((tmp3)){
		HX_STACK_LINE(40)
		Float tmp4 = _options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		_x = tmp4;
		HX_STACK_LINE(41)
		Float tmp5 = _options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		_y = tmp5;
		HX_STACK_LINE(42)
		Float tmp6 = _options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		_w = tmp6;
		HX_STACK_LINE(43)
		Float tmp7 = _options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		_h = tmp7;
	}
	HX_STACK_LINE(48)
	::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(48)
	::phoenix::Color tmp5 = this->color;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(48)
	::phoenix::geometry::Vertex tmp6 = ::phoenix::geometry::Vertex_obj::__new(tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(48)
	this->add(tmp6);
	HX_STACK_LINE(50)
	::phoenix::Vector tmp7 = ::phoenix::Vector_obj::__new(_w,(int)0,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(50)
	::phoenix::Color tmp8 = this->color;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(50)
	::phoenix::geometry::Vertex tmp9 = ::phoenix::geometry::Vertex_obj::__new(tmp7,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(50)
	this->add(tmp9);
	HX_STACK_LINE(52)
	::phoenix::Vector tmp10 = ::phoenix::Vector_obj::__new(_w,_h,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(52)
	::phoenix::Color tmp11 = this->color;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(52)
	::phoenix::geometry::Vertex tmp12 = ::phoenix::geometry::Vertex_obj::__new(tmp10,tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(52)
	this->add(tmp12);
	HX_STACK_LINE(56)
	::phoenix::Vector tmp13 = ::phoenix::Vector_obj::__new((int)0,_h,null(),null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(56)
	::phoenix::Color tmp14 = this->color;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(56)
	::phoenix::geometry::Vertex tmp15 = ::phoenix::geometry::Vertex_obj::__new(tmp13,tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(56)
	this->add(tmp15);
	HX_STACK_LINE(58)
	::phoenix::Vector tmp16 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(58)
	::phoenix::Color tmp17 = this->color;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(58)
	::phoenix::geometry::Vertex tmp18 = ::phoenix::geometry::Vertex_obj::__new(tmp16,tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(58)
	this->add(tmp18);
	HX_STACK_LINE(60)
	::phoenix::Vector tmp19 = ::phoenix::Vector_obj::__new(_w,_h,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(60)
	::phoenix::Color tmp20 = this->color;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(60)
	::phoenix::geometry::Vertex tmp21 = ::phoenix::geometry::Vertex_obj::__new(tmp19,tmp20,null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(60)
	this->add(tmp21);
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		::phoenix::Vector tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			::phoenix::Transform tmp23 = this->transform;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(62)
			::phoenix::Vector tmp24 = tmp23->local->pos;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(62)
			::phoenix::Vector _this = tmp24;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(62)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(62)
			_this->ignore_listeners = true;
			HX_STACK_LINE(62)
			{
				HX_STACK_LINE(62)
				_this->x = _x;
				HX_STACK_LINE(62)
				bool tmp25 = _this->_construct;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(62)
				if ((tmp25)){
					HX_STACK_LINE(62)
					_this->x;
				}
				else{
					HX_STACK_LINE(62)
					bool tmp26 = (_this->listen_x != null());		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(62)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(62)
					if ((tmp26)){
						HX_STACK_LINE(62)
						bool tmp28 = _this->ignore_listeners;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(62)
						bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(62)
						tmp27 = !(tmp29);
					}
					else{
						HX_STACK_LINE(62)
						tmp27 = false;
					}
					HX_STACK_LINE(62)
					if ((tmp27)){
						HX_STACK_LINE(62)
						Float tmp28 = _x;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(62)
						_this->listen_x(tmp28);
					}
					HX_STACK_LINE(62)
					_this->x;
				}
			}
			HX_STACK_LINE(62)
			{
				HX_STACK_LINE(62)
				_this->y = _y;
				HX_STACK_LINE(62)
				bool tmp25 = _this->_construct;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(62)
				if ((tmp25)){
					HX_STACK_LINE(62)
					_this->y;
				}
				else{
					HX_STACK_LINE(62)
					bool tmp26 = (_this->listen_y != null());		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(62)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(62)
					if ((tmp26)){
						HX_STACK_LINE(62)
						bool tmp28 = _this->ignore_listeners;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(62)
						bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(62)
						tmp27 = !(tmp29);
					}
					else{
						HX_STACK_LINE(62)
						tmp27 = false;
					}
					HX_STACK_LINE(62)
					if ((tmp27)){
						HX_STACK_LINE(62)
						Float tmp28 = _y;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(62)
						_this->listen_y(tmp28);
					}
					HX_STACK_LINE(62)
					_this->y;
				}
			}
			HX_STACK_LINE(62)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(62)
			bool tmp25 = (_this->listen_x != null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(62)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(62)
			if ((tmp25)){
				HX_STACK_LINE(62)
				bool tmp27 = _this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(62)
				bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(62)
				tmp26 = !(tmp28);
			}
			else{
				HX_STACK_LINE(62)
				tmp26 = false;
			}
			HX_STACK_LINE(62)
			if ((tmp26)){
				HX_STACK_LINE(62)
				Float tmp27 = _this->x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(62)
				_this->listen_x(tmp27);
			}
			HX_STACK_LINE(62)
			bool tmp27 = (_this->listen_y != null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(62)
			bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(62)
			if ((tmp27)){
				HX_STACK_LINE(62)
				bool tmp29 = _this->ignore_listeners;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(62)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(62)
				tmp28 = !(tmp30);
			}
			else{
				HX_STACK_LINE(62)
				tmp28 = false;
			}
			HX_STACK_LINE(62)
			if ((tmp28)){
				HX_STACK_LINE(62)
				Float tmp29 = _this->y;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(62)
				_this->listen_y(tmp29);
			}
			HX_STACK_LINE(62)
			tmp22 = _this;
		}
		HX_STACK_LINE(62)
		::phoenix::Vector value = tmp22;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			::phoenix::Transform tmp23 = this->transform;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(62)
			::phoenix::Spatial _this = tmp23->local;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(62)
			_this->pos = value;
			HX_STACK_LINE(62)
			bool tmp24 = (value != null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(62)
			if ((tmp24)){
				HX_STACK_LINE(62)
				::phoenix::Vector tmp25 = _this->pos;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(62)
				Dynamic tmp26 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(62)
				::phoenix::Vector_obj::Listen(tmp25,tmp26);
				HX_STACK_LINE(62)
				{
					HX_STACK_LINE(62)
					bool tmp27 = (_this->pos_changed != null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(62)
					bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(62)
					if ((tmp27)){
						HX_STACK_LINE(62)
						bool tmp29 = _this->ignore_listeners;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(62)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(62)
						tmp28 = !(tmp30);
					}
					else{
						HX_STACK_LINE(62)
						tmp28 = false;
					}
					HX_STACK_LINE(62)
					if ((tmp28)){
						HX_STACK_LINE(62)
						::phoenix::Vector tmp29 = _this->pos;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(62)
						_this->pos_changed(tmp29);
					}
				}
			}
			HX_STACK_LINE(62)
			_this->pos;
		}
	}
	HX_STACK_LINE(64)
	bool tmp22 = (_options->__Field(HX_HCSTRING("uv","\x61","\x66","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(64)
	if ((tmp22)){
		HX_STACK_LINE(65)
		::phoenix::Rectangle _rect = _options->__Field(HX_HCSTRING("uv","\x61","\x66","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_rect,"_rect");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			::phoenix::geometry::GeometryState tmp23 = this->state;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(65)
			::phoenix::Texture tmp24 = tmp23->texture;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(65)
			bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(65)
			if ((tmp25)){
				HX_STACK_LINE(65)
				::String tmp26 = HX_HCSTRING(" ( QuadGeometry; Calling UV on a geometry with null texture.","\x4d","\xfb","\xd1","\xd3");		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(65)
				::String tmp27 = (tmp26 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(65)
				::String tmp28 = (HX_HCSTRING("texture was null","\xc3","\x9c","\xa8","\x99") + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(65)
				::luxe::DebugError tmp29 = ::luxe::DebugError_obj::null_assertion(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(65)
				HX_STACK_DO_THROW(tmp29);
			}
		}
		HX_STACK_LINE(65)
		Float tmp23 = _rect->x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(65)
		::phoenix::geometry::GeometryState tmp24 = this->state;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(65)
		int tmp25 = tmp24->texture->width_actual;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(65)
		Float tmp26 = (Float(tmp23) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(65)
		Float tlx = tmp26;		HX_STACK_VAR(tlx,"tlx");
		HX_STACK_LINE(65)
		Float tmp27 = _rect->y;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(65)
		::phoenix::geometry::GeometryState tmp28 = this->state;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(65)
		int tmp29 = tmp28->texture->height_actual;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(65)
		Float tmp30 = (Float(tmp27) / Float(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(65)
		Float tly = tmp30;		HX_STACK_VAR(tly,"tly");
		HX_STACK_LINE(65)
		Float tmp31 = _rect->w;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(65)
		::phoenix::geometry::GeometryState tmp32 = this->state;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(65)
		int tmp33 = tmp32->texture->width_actual;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(65)
		Float tmp34 = (Float(tmp31) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(65)
		Float szx = tmp34;		HX_STACK_VAR(szx,"szx");
		HX_STACK_LINE(65)
		Float tmp35 = _rect->h;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(65)
		::phoenix::geometry::GeometryState tmp36 = this->state;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(65)
		int tmp37 = tmp36->texture->height_actual;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(65)
		Float tmp38 = (Float(tmp35) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(65)
		Float szy = tmp38;		HX_STACK_VAR(szy,"szy");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			int tmp39 = this->vertices->length;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(65)
			bool tmp40 = (tmp39 == (int)0);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(65)
			if ((tmp40)){
				HX_STACK_LINE(65)
				Dynamic();
			}
			else{
				HX_STACK_LINE(65)
				Float sz_x = szx;		HX_STACK_VAR(sz_x,"sz_x");
				HX_STACK_LINE(65)
				Float sz_y = szy;		HX_STACK_VAR(sz_y,"sz_y");
				HX_STACK_LINE(65)
				Float tl_x = tlx;		HX_STACK_VAR(tl_x,"tl_x");
				HX_STACK_LINE(65)
				Float tl_y = tly;		HX_STACK_VAR(tl_y,"tl_y");
				HX_STACK_LINE(65)
				this->_uv_x = tl_x;
				HX_STACK_LINE(65)
				this->_uv_y = tl_y;
				HX_STACK_LINE(65)
				this->_uv_w = sz_x;
				HX_STACK_LINE(65)
				this->_uv_h = sz_y;
				HX_STACK_LINE(65)
				Float tmp41 = (tl_x + sz_x);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(65)
				Float tr_x = tmp41;		HX_STACK_VAR(tr_x,"tr_x");
				HX_STACK_LINE(65)
				Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
				HX_STACK_LINE(65)
				Float tmp42 = (tl_x + sz_x);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(65)
				Float br_x = tmp42;		HX_STACK_VAR(br_x,"br_x");
				HX_STACK_LINE(65)
				Float tmp43 = (tl_y + sz_y);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(65)
				Float br_y = tmp43;		HX_STACK_VAR(br_y,"br_y");
				HX_STACK_LINE(65)
				Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
				HX_STACK_LINE(65)
				Float tmp44 = (tl_y + sz_y);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(65)
				Float bl_y = tmp44;		HX_STACK_VAR(bl_y,"bl_y");
				HX_STACK_LINE(65)
				Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
				HX_STACK_LINE(65)
				Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
				HX_STACK_LINE(65)
				int tmp45 = this->uv_angle;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(65)
				Float tmp46 = (Float(tmp45) / Float((int)90));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(65)
				int tmp47 = ::Std_obj::_int(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(65)
				int rotations = tmp47;		HX_STACK_VAR(rotations,"rotations");
				HX_STACK_LINE(65)
				int tmp48 = rotations;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(65)
				Float tmp49 = (Float(rotations) / Float((int)4));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(65)
				int tmp50 = ::Math_obj::floor(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(65)
				int tmp51 = ((int)4 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(65)
				int tmp52 = (tmp48 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(65)
				rotations = tmp52;
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(65)
					while((true)){
						HX_STACK_LINE(65)
						bool tmp53 = (_g < rotations);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(65)
						bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(65)
						if ((tmp54)){
							HX_STACK_LINE(65)
							break;
						}
						HX_STACK_LINE(65)
						int tmp55 = (_g)++;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(65)
						int r = tmp55;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(65)
						{
							HX_STACK_LINE(65)
							tmp_x = tl_x;
							HX_STACK_LINE(65)
							tl_x = bl_x;
							HX_STACK_LINE(65)
							bl_x = br_x;
							HX_STACK_LINE(65)
							br_x = tr_x;
							HX_STACK_LINE(65)
							tr_x = tmp_x;
							HX_STACK_LINE(65)
							tmp_y = tl_y;
							HX_STACK_LINE(65)
							tl_y = bl_y;
							HX_STACK_LINE(65)
							bl_y = br_y;
							HX_STACK_LINE(65)
							br_y = tr_y;
							HX_STACK_LINE(65)
							tr_y = tmp_y;
						}
					}
				}
				HX_STACK_LINE(65)
				bool tmp53 = this->flipy;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(65)
				if ((tmp53)){
					HX_STACK_LINE(65)
					tmp_y = bl_y;
					HX_STACK_LINE(65)
					bl_y = tl_y;
					HX_STACK_LINE(65)
					tl_y = tmp_y;
					HX_STACK_LINE(65)
					tmp_x = bl_x;
					HX_STACK_LINE(65)
					bl_x = tl_x;
					HX_STACK_LINE(65)
					tl_x = tmp_x;
					HX_STACK_LINE(65)
					tmp_y = br_y;
					HX_STACK_LINE(65)
					br_y = tr_y;
					HX_STACK_LINE(65)
					tr_y = tmp_y;
					HX_STACK_LINE(65)
					tmp_x = br_x;
					HX_STACK_LINE(65)
					br_x = tr_x;
					HX_STACK_LINE(65)
					tr_x = tmp_x;
				}
				HX_STACK_LINE(65)
				bool tmp54 = this->flipx;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(65)
				if ((tmp54)){
					HX_STACK_LINE(65)
					tmp_x = tr_x;
					HX_STACK_LINE(65)
					tr_x = tl_x;
					HX_STACK_LINE(65)
					tl_x = tmp_x;
					HX_STACK_LINE(65)
					tmp_y = tr_y;
					HX_STACK_LINE(65)
					tr_y = tl_y;
					HX_STACK_LINE(65)
					tl_y = tmp_y;
					HX_STACK_LINE(65)
					tmp_x = br_x;
					HX_STACK_LINE(65)
					br_x = bl_x;
					HX_STACK_LINE(65)
					bl_x = tmp_x;
					HX_STACK_LINE(65)
					tmp_y = br_y;
					HX_STACK_LINE(65)
					br_y = bl_y;
					HX_STACK_LINE(65)
					bl_y = tmp_y;
				}
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					::phoenix::geometry::Vertex tmp55 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(65)
					::phoenix::geometry::TextureCoord tmp56 = tmp55->uv->uv0;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(65)
					::phoenix::geometry::TextureCoord _this = tmp56;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(65)
					_this->u = tl_x;
					HX_STACK_LINE(65)
					_this->v = tl_y;
					HX_STACK_LINE(65)
					_this;
				}
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					::phoenix::geometry::Vertex tmp55 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(65)
					::phoenix::geometry::TextureCoord tmp56 = tmp55->uv->uv0;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(65)
					::phoenix::geometry::TextureCoord _this = tmp56;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(65)
					_this->u = tr_x;
					HX_STACK_LINE(65)
					_this->v = tr_y;
					HX_STACK_LINE(65)
					_this;
				}
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					::phoenix::geometry::Vertex tmp55 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(65)
					::phoenix::geometry::TextureCoord tmp56 = tmp55->uv->uv0;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(65)
					::phoenix::geometry::TextureCoord _this = tmp56;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(65)
					_this->u = br_x;
					HX_STACK_LINE(65)
					_this->v = br_y;
					HX_STACK_LINE(65)
					_this;
				}
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					::phoenix::geometry::Vertex tmp55 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(65)
					::phoenix::geometry::TextureCoord tmp56 = tmp55->uv->uv0;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(65)
					::phoenix::geometry::TextureCoord _this = tmp56;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(65)
					_this->u = bl_x;
					HX_STACK_LINE(65)
					_this->v = bl_y;
					HX_STACK_LINE(65)
					_this;
				}
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					::phoenix::geometry::Vertex tmp55 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(65)
					::phoenix::geometry::TextureCoord tmp56 = tmp55->uv->uv0;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(65)
					::phoenix::geometry::TextureCoord _this = tmp56;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(65)
					_this->u = tl_x;
					HX_STACK_LINE(65)
					_this->v = tl_y;
					HX_STACK_LINE(65)
					_this;
				}
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					::phoenix::geometry::Vertex tmp55 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(65)
					::phoenix::geometry::TextureCoord tmp56 = tmp55->uv->uv0;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(65)
					::phoenix::geometry::TextureCoord _this = tmp56;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(65)
					_this->u = br_x;
					HX_STACK_LINE(65)
					_this->v = br_y;
					HX_STACK_LINE(65)
					_this;
				}
				HX_STACK_LINE(65)
				this->set_dirty(true);
			}
		}
	}
	else{
		HX_STACK_LINE(67)
		int tmp23 = this->vertices->length;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(67)
		bool tmp24 = (tmp23 == (int)0);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(67)
		if ((tmp24)){
			HX_STACK_LINE(67)
			Dynamic();
		}
		else{
			HX_STACK_LINE(67)
			Float sz_x = (int)1;		HX_STACK_VAR(sz_x,"sz_x");
			HX_STACK_LINE(67)
			Float sz_y = (int)1;		HX_STACK_VAR(sz_y,"sz_y");
			HX_STACK_LINE(67)
			Float tl_x = (int)0;		HX_STACK_VAR(tl_x,"tl_x");
			HX_STACK_LINE(67)
			Float tl_y = (int)0;		HX_STACK_VAR(tl_y,"tl_y");
			HX_STACK_LINE(67)
			this->_uv_x = tl_x;
			HX_STACK_LINE(67)
			this->_uv_y = tl_y;
			HX_STACK_LINE(67)
			this->_uv_w = sz_x;
			HX_STACK_LINE(67)
			this->_uv_h = sz_y;
			HX_STACK_LINE(67)
			Float tmp25 = (tl_x + sz_x);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(67)
			Float tr_x = tmp25;		HX_STACK_VAR(tr_x,"tr_x");
			HX_STACK_LINE(67)
			Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
			HX_STACK_LINE(67)
			Float tmp26 = (tl_x + sz_x);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(67)
			Float br_x = tmp26;		HX_STACK_VAR(br_x,"br_x");
			HX_STACK_LINE(67)
			Float tmp27 = (tl_y + sz_y);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(67)
			Float br_y = tmp27;		HX_STACK_VAR(br_y,"br_y");
			HX_STACK_LINE(67)
			Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
			HX_STACK_LINE(67)
			Float tmp28 = (tl_y + sz_y);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(67)
			Float bl_y = tmp28;		HX_STACK_VAR(bl_y,"bl_y");
			HX_STACK_LINE(67)
			Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
			HX_STACK_LINE(67)
			Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
			HX_STACK_LINE(67)
			int tmp29 = this->uv_angle;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(67)
			Float tmp30 = (Float(tmp29) / Float((int)90));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(67)
			int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(67)
			int rotations = tmp31;		HX_STACK_VAR(rotations,"rotations");
			HX_STACK_LINE(67)
			int tmp32 = rotations;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(67)
			Float tmp33 = (Float(rotations) / Float((int)4));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(67)
			int tmp34 = ::Math_obj::floor(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(67)
			int tmp35 = ((int)4 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(67)
			int tmp36 = (tmp32 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(67)
			rotations = tmp36;
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(67)
				while((true)){
					HX_STACK_LINE(67)
					bool tmp37 = (_g < rotations);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(67)
					bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(67)
					if ((tmp38)){
						HX_STACK_LINE(67)
						break;
					}
					HX_STACK_LINE(67)
					int tmp39 = (_g)++;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(67)
					int r = tmp39;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						tmp_x = tl_x;
						HX_STACK_LINE(67)
						tl_x = bl_x;
						HX_STACK_LINE(67)
						bl_x = br_x;
						HX_STACK_LINE(67)
						br_x = tr_x;
						HX_STACK_LINE(67)
						tr_x = tmp_x;
						HX_STACK_LINE(67)
						tmp_y = tl_y;
						HX_STACK_LINE(67)
						tl_y = bl_y;
						HX_STACK_LINE(67)
						bl_y = br_y;
						HX_STACK_LINE(67)
						br_y = tr_y;
						HX_STACK_LINE(67)
						tr_y = tmp_y;
					}
				}
			}
			HX_STACK_LINE(67)
			bool tmp37 = this->flipy;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(67)
			if ((tmp37)){
				HX_STACK_LINE(67)
				tmp_y = bl_y;
				HX_STACK_LINE(67)
				bl_y = tl_y;
				HX_STACK_LINE(67)
				tl_y = tmp_y;
				HX_STACK_LINE(67)
				tmp_x = bl_x;
				HX_STACK_LINE(67)
				bl_x = tl_x;
				HX_STACK_LINE(67)
				tl_x = tmp_x;
				HX_STACK_LINE(67)
				tmp_y = br_y;
				HX_STACK_LINE(67)
				br_y = tr_y;
				HX_STACK_LINE(67)
				tr_y = tmp_y;
				HX_STACK_LINE(67)
				tmp_x = br_x;
				HX_STACK_LINE(67)
				br_x = tr_x;
				HX_STACK_LINE(67)
				tr_x = tmp_x;
			}
			HX_STACK_LINE(67)
			bool tmp38 = this->flipx;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(67)
			if ((tmp38)){
				HX_STACK_LINE(67)
				tmp_x = tr_x;
				HX_STACK_LINE(67)
				tr_x = tl_x;
				HX_STACK_LINE(67)
				tl_x = tmp_x;
				HX_STACK_LINE(67)
				tmp_y = tr_y;
				HX_STACK_LINE(67)
				tr_y = tl_y;
				HX_STACK_LINE(67)
				tl_y = tmp_y;
				HX_STACK_LINE(67)
				tmp_x = br_x;
				HX_STACK_LINE(67)
				br_x = bl_x;
				HX_STACK_LINE(67)
				bl_x = tmp_x;
				HX_STACK_LINE(67)
				tmp_y = br_y;
				HX_STACK_LINE(67)
				br_y = bl_y;
				HX_STACK_LINE(67)
				bl_y = tmp_y;
			}
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				::phoenix::geometry::Vertex tmp39 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(67)
				::phoenix::geometry::TextureCoord tmp40 = tmp39->uv->uv0;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(67)
				::phoenix::geometry::TextureCoord _this = tmp40;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(67)
				_this->u = tl_x;
				HX_STACK_LINE(67)
				_this->v = tl_y;
				HX_STACK_LINE(67)
				_this;
			}
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				::phoenix::geometry::Vertex tmp39 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(67)
				::phoenix::geometry::TextureCoord tmp40 = tmp39->uv->uv0;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(67)
				::phoenix::geometry::TextureCoord _this = tmp40;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(67)
				_this->u = tr_x;
				HX_STACK_LINE(67)
				_this->v = tr_y;
				HX_STACK_LINE(67)
				_this;
			}
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				::phoenix::geometry::Vertex tmp39 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(67)
				::phoenix::geometry::TextureCoord tmp40 = tmp39->uv->uv0;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(67)
				::phoenix::geometry::TextureCoord _this = tmp40;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(67)
				_this->u = br_x;
				HX_STACK_LINE(67)
				_this->v = br_y;
				HX_STACK_LINE(67)
				_this;
			}
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				::phoenix::geometry::Vertex tmp39 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(67)
				::phoenix::geometry::TextureCoord tmp40 = tmp39->uv->uv0;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(67)
				::phoenix::geometry::TextureCoord _this = tmp40;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(67)
				_this->u = bl_x;
				HX_STACK_LINE(67)
				_this->v = bl_y;
				HX_STACK_LINE(67)
				_this;
			}
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				::phoenix::geometry::Vertex tmp39 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(67)
				::phoenix::geometry::TextureCoord tmp40 = tmp39->uv->uv0;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(67)
				::phoenix::geometry::TextureCoord _this = tmp40;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(67)
				_this->u = tl_x;
				HX_STACK_LINE(67)
				_this->v = tl_y;
				HX_STACK_LINE(67)
				_this;
			}
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				::phoenix::geometry::Vertex tmp39 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(67)
				::phoenix::geometry::TextureCoord tmp40 = tmp39->uv->uv0;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(67)
				::phoenix::geometry::TextureCoord _this = tmp40;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(67)
				_this->u = br_x;
				HX_STACK_LINE(67)
				_this->v = br_y;
				HX_STACK_LINE(67)
				_this;
			}
			HX_STACK_LINE(67)
			this->set_dirty(true);
		}
	}
}
;
	return null();
}

//QuadGeometry_obj::~QuadGeometry_obj() { }

Dynamic QuadGeometry_obj::__CreateEmpty() { return  new QuadGeometry_obj; }
hx::ObjectPtr< QuadGeometry_obj > QuadGeometry_obj::__new(Dynamic _options)
{  hx::ObjectPtr< QuadGeometry_obj > _result_ = new QuadGeometry_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic QuadGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuadGeometry_obj > _result_ = new QuadGeometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void QuadGeometry_obj::uv( ::phoenix::Rectangle _rect){
{
		HX_STACK_FRAME("phoenix.geometry.QuadGeometry","uv",0x7822f1f9,"phoenix.geometry.QuadGeometry.uv","phoenix/geometry/QuadGeometry.hx",72,0x485a4ac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rect,"_rect")
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(74)
			::phoenix::Texture tmp1 = tmp->texture;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(74)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(74)
			if ((tmp2)){
				HX_STACK_LINE(230)
				::String tmp3 = HX_HCSTRING(" ( QuadGeometry; Calling UV on a geometry with null texture.","\x4d","\xfb","\xd1","\xd3");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(230)
				::String tmp4 = (tmp3 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(74)
				::String tmp5 = (HX_HCSTRING("texture was null","\xc3","\x9c","\xa8","\x99") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(74)
				::luxe::DebugError tmp6 = ::luxe::DebugError_obj::null_assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(74)
				HX_STACK_DO_THROW(tmp6);
			}
		}
		HX_STACK_LINE(76)
		Float tmp = _rect->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		int tmp2 = tmp1->texture->width_actual;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		Float tmp3 = (Float(tmp) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(76)
		Float tlx = tmp3;		HX_STACK_VAR(tlx,"tlx");
		HX_STACK_LINE(77)
		Float tmp4 = _rect->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		::phoenix::geometry::GeometryState tmp5 = this->state;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		int tmp6 = tmp5->texture->height_actual;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		Float tmp7 = (Float(tmp4) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		Float tly = tmp7;		HX_STACK_VAR(tly,"tly");
		HX_STACK_LINE(78)
		Float tmp8 = _rect->w;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(78)
		::phoenix::geometry::GeometryState tmp9 = this->state;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(78)
		int tmp10 = tmp9->texture->width_actual;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(78)
		Float tmp11 = (Float(tmp8) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(78)
		Float szx = tmp11;		HX_STACK_VAR(szx,"szx");
		HX_STACK_LINE(79)
		Float tmp12 = _rect->h;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(79)
		::phoenix::geometry::GeometryState tmp13 = this->state;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(79)
		int tmp14 = tmp13->texture->height_actual;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(79)
		Float tmp15 = (Float(tmp12) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(79)
		Float szy = tmp15;		HX_STACK_VAR(szy,"szy");
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			int tmp16 = this->vertices->length;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(81)
			bool tmp17 = (tmp16 == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(81)
			if ((tmp17)){
				HX_STACK_LINE(81)
				Dynamic();
			}
			else{
				HX_STACK_LINE(81)
				Float sz_x = szx;		HX_STACK_VAR(sz_x,"sz_x");
				HX_STACK_LINE(81)
				Float sz_y = szy;		HX_STACK_VAR(sz_y,"sz_y");
				HX_STACK_LINE(81)
				Float tl_x = tlx;		HX_STACK_VAR(tl_x,"tl_x");
				HX_STACK_LINE(81)
				Float tl_y = tly;		HX_STACK_VAR(tl_y,"tl_y");
				HX_STACK_LINE(81)
				this->_uv_x = tl_x;
				HX_STACK_LINE(81)
				this->_uv_y = tl_y;
				HX_STACK_LINE(81)
				this->_uv_w = sz_x;
				HX_STACK_LINE(81)
				this->_uv_h = sz_y;
				HX_STACK_LINE(81)
				Float tmp18 = (tl_x + sz_x);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(81)
				Float tr_x = tmp18;		HX_STACK_VAR(tr_x,"tr_x");
				HX_STACK_LINE(81)
				Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
				HX_STACK_LINE(81)
				Float tmp19 = (tl_x + sz_x);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(81)
				Float br_x = tmp19;		HX_STACK_VAR(br_x,"br_x");
				HX_STACK_LINE(81)
				Float tmp20 = (tl_y + sz_y);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(81)
				Float br_y = tmp20;		HX_STACK_VAR(br_y,"br_y");
				HX_STACK_LINE(81)
				Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
				HX_STACK_LINE(81)
				Float tmp21 = (tl_y + sz_y);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(81)
				Float bl_y = tmp21;		HX_STACK_VAR(bl_y,"bl_y");
				HX_STACK_LINE(81)
				Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
				HX_STACK_LINE(81)
				Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
				HX_STACK_LINE(81)
				int tmp22 = this->uv_angle;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(81)
				Float tmp23 = (Float(tmp22) / Float((int)90));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(81)
				int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(81)
				int rotations = tmp24;		HX_STACK_VAR(rotations,"rotations");
				HX_STACK_LINE(81)
				int tmp25 = rotations;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(81)
				Float tmp26 = (Float(rotations) / Float((int)4));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(81)
				int tmp27 = ::Math_obj::floor(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(81)
				int tmp28 = ((int)4 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(81)
				int tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(81)
				rotations = tmp29;
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(81)
					while((true)){
						HX_STACK_LINE(81)
						bool tmp30 = (_g < rotations);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(81)
						bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(81)
						if ((tmp31)){
							HX_STACK_LINE(81)
							break;
						}
						HX_STACK_LINE(81)
						int tmp32 = (_g)++;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(81)
						int r = tmp32;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(81)
						{
							HX_STACK_LINE(81)
							tmp_x = tl_x;
							HX_STACK_LINE(81)
							tl_x = bl_x;
							HX_STACK_LINE(81)
							bl_x = br_x;
							HX_STACK_LINE(81)
							br_x = tr_x;
							HX_STACK_LINE(81)
							tr_x = tmp_x;
							HX_STACK_LINE(81)
							tmp_y = tl_y;
							HX_STACK_LINE(81)
							tl_y = bl_y;
							HX_STACK_LINE(81)
							bl_y = br_y;
							HX_STACK_LINE(81)
							br_y = tr_y;
							HX_STACK_LINE(81)
							tr_y = tmp_y;
						}
					}
				}
				HX_STACK_LINE(81)
				bool tmp30 = this->flipy;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(81)
				if ((tmp30)){
					HX_STACK_LINE(81)
					tmp_y = bl_y;
					HX_STACK_LINE(81)
					bl_y = tl_y;
					HX_STACK_LINE(81)
					tl_y = tmp_y;
					HX_STACK_LINE(81)
					tmp_x = bl_x;
					HX_STACK_LINE(81)
					bl_x = tl_x;
					HX_STACK_LINE(81)
					tl_x = tmp_x;
					HX_STACK_LINE(81)
					tmp_y = br_y;
					HX_STACK_LINE(81)
					br_y = tr_y;
					HX_STACK_LINE(81)
					tr_y = tmp_y;
					HX_STACK_LINE(81)
					tmp_x = br_x;
					HX_STACK_LINE(81)
					br_x = tr_x;
					HX_STACK_LINE(81)
					tr_x = tmp_x;
				}
				HX_STACK_LINE(81)
				bool tmp31 = this->flipx;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(81)
				if ((tmp31)){
					HX_STACK_LINE(81)
					tmp_x = tr_x;
					HX_STACK_LINE(81)
					tr_x = tl_x;
					HX_STACK_LINE(81)
					tl_x = tmp_x;
					HX_STACK_LINE(81)
					tmp_y = tr_y;
					HX_STACK_LINE(81)
					tr_y = tl_y;
					HX_STACK_LINE(81)
					tl_y = tmp_y;
					HX_STACK_LINE(81)
					tmp_x = br_x;
					HX_STACK_LINE(81)
					br_x = bl_x;
					HX_STACK_LINE(81)
					bl_x = tmp_x;
					HX_STACK_LINE(81)
					tmp_y = br_y;
					HX_STACK_LINE(81)
					br_y = bl_y;
					HX_STACK_LINE(81)
					bl_y = tmp_y;
				}
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					::phoenix::geometry::Vertex tmp32 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(81)
					::phoenix::geometry::TextureCoord tmp33 = tmp32->uv->uv0;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(81)
					::phoenix::geometry::TextureCoord _this = tmp33;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(81)
					_this->u = tl_x;
					HX_STACK_LINE(81)
					_this->v = tl_y;
					HX_STACK_LINE(81)
					_this;
				}
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					::phoenix::geometry::Vertex tmp32 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(81)
					::phoenix::geometry::TextureCoord tmp33 = tmp32->uv->uv0;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(81)
					::phoenix::geometry::TextureCoord _this = tmp33;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(81)
					_this->u = tr_x;
					HX_STACK_LINE(81)
					_this->v = tr_y;
					HX_STACK_LINE(81)
					_this;
				}
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					::phoenix::geometry::Vertex tmp32 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(81)
					::phoenix::geometry::TextureCoord tmp33 = tmp32->uv->uv0;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(81)
					::phoenix::geometry::TextureCoord _this = tmp33;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(81)
					_this->u = br_x;
					HX_STACK_LINE(81)
					_this->v = br_y;
					HX_STACK_LINE(81)
					_this;
				}
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					::phoenix::geometry::Vertex tmp32 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(81)
					::phoenix::geometry::TextureCoord tmp33 = tmp32->uv->uv0;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(81)
					::phoenix::geometry::TextureCoord _this = tmp33;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(81)
					_this->u = bl_x;
					HX_STACK_LINE(81)
					_this->v = bl_y;
					HX_STACK_LINE(81)
					_this;
				}
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					::phoenix::geometry::Vertex tmp32 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(81)
					::phoenix::geometry::TextureCoord tmp33 = tmp32->uv->uv0;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(81)
					::phoenix::geometry::TextureCoord _this = tmp33;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(81)
					_this->u = tl_x;
					HX_STACK_LINE(81)
					_this->v = tl_y;
					HX_STACK_LINE(81)
					_this;
				}
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					::phoenix::geometry::Vertex tmp32 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(81)
					::phoenix::geometry::TextureCoord tmp33 = tmp32->uv->uv0;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(81)
					::phoenix::geometry::TextureCoord _this = tmp33;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(81)
					_this->u = br_x;
					HX_STACK_LINE(81)
					_this->v = br_y;
					HX_STACK_LINE(81)
					_this;
				}
				HX_STACK_LINE(81)
				this->set_dirty(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,uv,(void))

Void QuadGeometry_obj::uv_space( Float _rect_x,Float _rect_y,Float _rect_w,Float _rect_h){
{
		HX_STACK_FRAME("phoenix.geometry.QuadGeometry","uv_space",0xe21c06c0,"phoenix.geometry.QuadGeometry.uv_space","phoenix/geometry/QuadGeometry.hx",85,0x485a4ac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rect_x,"_rect_x")
		HX_STACK_ARG(_rect_y,"_rect_y")
		HX_STACK_ARG(_rect_w,"_rect_w")
		HX_STACK_ARG(_rect_h,"_rect_h")
		HX_STACK_LINE(87)
		int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		if ((tmp1)){
			HX_STACK_LINE(87)
			return null();
		}
		HX_STACK_LINE(90)
		Float sz_x = _rect_w;		HX_STACK_VAR(sz_x,"sz_x");
		HX_STACK_LINE(91)
		Float sz_y = _rect_h;		HX_STACK_VAR(sz_y,"sz_y");
		HX_STACK_LINE(94)
		Float tl_x = _rect_x;		HX_STACK_VAR(tl_x,"tl_x");
		HX_STACK_LINE(95)
		Float tl_y = _rect_y;		HX_STACK_VAR(tl_y,"tl_y");
		HX_STACK_LINE(98)
		this->_uv_x = tl_x;
		HX_STACK_LINE(99)
		this->_uv_y = tl_y;
		HX_STACK_LINE(100)
		this->_uv_w = sz_x;
		HX_STACK_LINE(101)
		this->_uv_h = sz_y;
		HX_STACK_LINE(104)
		Float tmp2 = (tl_x + sz_x);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		Float tr_x = tmp2;		HX_STACK_VAR(tr_x,"tr_x");
		HX_STACK_LINE(105)
		Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
		HX_STACK_LINE(107)
		Float tmp3 = (tl_x + sz_x);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		Float br_x = tmp3;		HX_STACK_VAR(br_x,"br_x");
		HX_STACK_LINE(108)
		Float tmp4 = (tl_y + sz_y);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		Float br_y = tmp4;		HX_STACK_VAR(br_y,"br_y");
		HX_STACK_LINE(110)
		Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
		HX_STACK_LINE(111)
		Float tmp5 = (tl_y + sz_y);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(111)
		Float bl_y = tmp5;		HX_STACK_VAR(bl_y,"bl_y");
		HX_STACK_LINE(113)
		Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
		HX_STACK_LINE(114)
		Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
		HX_STACK_LINE(131)
		int tmp6 = this->uv_angle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(131)
		Float tmp7 = (Float(tmp6) / Float((int)90));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(131)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(131)
		int rotations = tmp8;		HX_STACK_VAR(rotations,"rotations");
		HX_STACK_LINE(132)
		int tmp9 = rotations;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(132)
		Float tmp10 = (Float(rotations) / Float((int)4));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(132)
		int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(132)
		int tmp12 = ((int)4 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(132)
		int tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(132)
		rotations = tmp13;
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(134)
			while((true)){
				HX_STACK_LINE(134)
				bool tmp14 = (_g < rotations);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(134)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(134)
				if ((tmp15)){
					HX_STACK_LINE(134)
					break;
				}
				HX_STACK_LINE(134)
				int tmp16 = (_g)++;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(134)
				int r = tmp16;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(135)
				{
					HX_STACK_LINE(135)
					tmp_x = tl_x;
					HX_STACK_LINE(135)
					tl_x = bl_x;
					HX_STACK_LINE(135)
					bl_x = br_x;
					HX_STACK_LINE(135)
					br_x = tr_x;
					HX_STACK_LINE(135)
					tr_x = tmp_x;
					HX_STACK_LINE(135)
					tmp_y = tl_y;
					HX_STACK_LINE(135)
					tl_y = bl_y;
					HX_STACK_LINE(135)
					bl_y = br_y;
					HX_STACK_LINE(135)
					br_y = tr_y;
					HX_STACK_LINE(135)
					tr_y = tmp_y;
				}
			}
		}
		HX_STACK_LINE(138)
		bool tmp14 = this->flipy;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(138)
		if ((tmp14)){
			HX_STACK_LINE(140)
			tmp_y = bl_y;
			HX_STACK_LINE(141)
			bl_y = tl_y;
			HX_STACK_LINE(142)
			tl_y = tmp_y;
			HX_STACK_LINE(144)
			tmp_x = bl_x;
			HX_STACK_LINE(145)
			bl_x = tl_x;
			HX_STACK_LINE(146)
			tl_x = tmp_x;
			HX_STACK_LINE(149)
			tmp_y = br_y;
			HX_STACK_LINE(150)
			br_y = tr_y;
			HX_STACK_LINE(151)
			tr_y = tmp_y;
			HX_STACK_LINE(153)
			tmp_x = br_x;
			HX_STACK_LINE(154)
			br_x = tr_x;
			HX_STACK_LINE(155)
			tr_x = tmp_x;
		}
		HX_STACK_LINE(159)
		bool tmp15 = this->flipx;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(159)
		if ((tmp15)){
			HX_STACK_LINE(161)
			tmp_x = tr_x;
			HX_STACK_LINE(162)
			tr_x = tl_x;
			HX_STACK_LINE(163)
			tl_x = tmp_x;
			HX_STACK_LINE(165)
			tmp_y = tr_y;
			HX_STACK_LINE(166)
			tr_y = tl_y;
			HX_STACK_LINE(167)
			tl_y = tmp_y;
			HX_STACK_LINE(170)
			tmp_x = br_x;
			HX_STACK_LINE(171)
			br_x = bl_x;
			HX_STACK_LINE(172)
			bl_x = tmp_x;
			HX_STACK_LINE(174)
			tmp_y = br_y;
			HX_STACK_LINE(175)
			br_y = bl_y;
			HX_STACK_LINE(176)
			bl_y = tmp_y;
		}
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			::phoenix::geometry::Vertex tmp16 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(179)
			::phoenix::geometry::TextureCoord tmp17 = tmp16->uv->uv0;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(179)
			::phoenix::geometry::TextureCoord _this = tmp17;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(179)
			_this->u = tl_x;
			HX_STACK_LINE(179)
			_this->v = tl_y;
			HX_STACK_LINE(179)
			_this;
		}
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			::phoenix::geometry::Vertex tmp16 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(180)
			::phoenix::geometry::TextureCoord tmp17 = tmp16->uv->uv0;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(180)
			::phoenix::geometry::TextureCoord _this = tmp17;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(180)
			_this->u = tr_x;
			HX_STACK_LINE(180)
			_this->v = tr_y;
			HX_STACK_LINE(180)
			_this;
		}
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			::phoenix::geometry::Vertex tmp16 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(181)
			::phoenix::geometry::TextureCoord tmp17 = tmp16->uv->uv0;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(181)
			::phoenix::geometry::TextureCoord _this = tmp17;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(181)
			_this->u = br_x;
			HX_STACK_LINE(181)
			_this->v = br_y;
			HX_STACK_LINE(181)
			_this;
		}
		HX_STACK_LINE(183)
		{
			HX_STACK_LINE(183)
			::phoenix::geometry::Vertex tmp16 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(183)
			::phoenix::geometry::TextureCoord tmp17 = tmp16->uv->uv0;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(183)
			::phoenix::geometry::TextureCoord _this = tmp17;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(183)
			_this->u = bl_x;
			HX_STACK_LINE(183)
			_this->v = bl_y;
			HX_STACK_LINE(183)
			_this;
		}
		HX_STACK_LINE(184)
		{
			HX_STACK_LINE(184)
			::phoenix::geometry::Vertex tmp16 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(184)
			::phoenix::geometry::TextureCoord tmp17 = tmp16->uv->uv0;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(184)
			::phoenix::geometry::TextureCoord _this = tmp17;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(184)
			_this->u = tl_x;
			HX_STACK_LINE(184)
			_this->v = tl_y;
			HX_STACK_LINE(184)
			_this;
		}
		HX_STACK_LINE(185)
		{
			HX_STACK_LINE(185)
			::phoenix::geometry::Vertex tmp16 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(185)
			::phoenix::geometry::TextureCoord tmp17 = tmp16->uv->uv0;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(185)
			::phoenix::geometry::TextureCoord _this = tmp17;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(185)
			_this->u = br_x;
			HX_STACK_LINE(185)
			_this->v = br_y;
			HX_STACK_LINE(185)
			_this;
		}
		HX_STACK_LINE(188)
		this->set_dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(QuadGeometry_obj,uv_space,(void))

Void QuadGeometry_obj::resize_xy( Float _x,Float _y){
{
		HX_STACK_FRAME("phoenix.geometry.QuadGeometry","resize_xy",0xb5fb6d14,"phoenix.geometry.QuadGeometry.resize_xy","phoenix/geometry/QuadGeometry.hx",192,0x485a4ac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_LINE(194)
		int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		if ((tmp1)){
			HX_STACK_LINE(194)
			return null();
		}
		HX_STACK_LINE(196)
		{
			HX_STACK_LINE(196)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(196)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(196)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(196)
			_this->ignore_listeners = true;
			HX_STACK_LINE(196)
			{
				HX_STACK_LINE(196)
				_this->x = (int)0;
				HX_STACK_LINE(196)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(196)
				if ((tmp3)){
					HX_STACK_LINE(196)
					_this->x;
				}
				else{
					HX_STACK_LINE(196)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(196)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(196)
					if ((tmp4)){
						HX_STACK_LINE(196)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(196)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(196)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(196)
						tmp5 = false;
					}
					HX_STACK_LINE(196)
					if ((tmp5)){
						HX_STACK_LINE(196)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(196)
					_this->x;
				}
			}
			HX_STACK_LINE(196)
			{
				HX_STACK_LINE(196)
				_this->y = (int)0;
				HX_STACK_LINE(196)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(196)
				if ((tmp3)){
					HX_STACK_LINE(196)
					_this->y;
				}
				else{
					HX_STACK_LINE(196)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(196)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(196)
					if ((tmp4)){
						HX_STACK_LINE(196)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(196)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(196)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(196)
						tmp5 = false;
					}
					HX_STACK_LINE(196)
					if ((tmp5)){
						HX_STACK_LINE(196)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(196)
					_this->y;
				}
			}
			HX_STACK_LINE(196)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(196)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(196)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(196)
			if ((tmp3)){
				HX_STACK_LINE(196)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(196)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(196)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(196)
				tmp4 = false;
			}
			HX_STACK_LINE(196)
			if ((tmp4)){
				HX_STACK_LINE(196)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(196)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(196)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(196)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(196)
			if ((tmp5)){
				HX_STACK_LINE(196)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(196)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(196)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(196)
				tmp6 = false;
			}
			HX_STACK_LINE(196)
			if ((tmp6)){
				HX_STACK_LINE(196)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(196)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(196)
			_this;
		}
		HX_STACK_LINE(197)
		{
			HX_STACK_LINE(197)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(197)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(197)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(197)
			_this->ignore_listeners = true;
			HX_STACK_LINE(197)
			{
				HX_STACK_LINE(197)
				_this->x = _x;
				HX_STACK_LINE(197)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(197)
				if ((tmp3)){
					HX_STACK_LINE(197)
					_this->x;
				}
				else{
					HX_STACK_LINE(197)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(197)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(197)
					if ((tmp4)){
						HX_STACK_LINE(197)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(197)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(197)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(197)
						tmp5 = false;
					}
					HX_STACK_LINE(197)
					if ((tmp5)){
						HX_STACK_LINE(197)
						Float tmp6 = _x;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(197)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(197)
					_this->x;
				}
			}
			HX_STACK_LINE(197)
			{
				HX_STACK_LINE(197)
				_this->y = (int)0;
				HX_STACK_LINE(197)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(197)
				if ((tmp3)){
					HX_STACK_LINE(197)
					_this->y;
				}
				else{
					HX_STACK_LINE(197)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(197)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(197)
					if ((tmp4)){
						HX_STACK_LINE(197)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(197)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(197)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(197)
						tmp5 = false;
					}
					HX_STACK_LINE(197)
					if ((tmp5)){
						HX_STACK_LINE(197)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(197)
					_this->y;
				}
			}
			HX_STACK_LINE(197)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(197)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(197)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(197)
			if ((tmp3)){
				HX_STACK_LINE(197)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(197)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(197)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(197)
				tmp4 = false;
			}
			HX_STACK_LINE(197)
			if ((tmp4)){
				HX_STACK_LINE(197)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(197)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(197)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(197)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(197)
			if ((tmp5)){
				HX_STACK_LINE(197)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(197)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(197)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(197)
				tmp6 = false;
			}
			HX_STACK_LINE(197)
			if ((tmp6)){
				HX_STACK_LINE(197)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(197)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(197)
			_this;
		}
		HX_STACK_LINE(198)
		{
			HX_STACK_LINE(198)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(198)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(198)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(198)
			_this->ignore_listeners = true;
			HX_STACK_LINE(198)
			{
				HX_STACK_LINE(198)
				_this->x = _x;
				HX_STACK_LINE(198)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(198)
				if ((tmp3)){
					HX_STACK_LINE(198)
					_this->x;
				}
				else{
					HX_STACK_LINE(198)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(198)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(198)
					if ((tmp4)){
						HX_STACK_LINE(198)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(198)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(198)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(198)
						tmp5 = false;
					}
					HX_STACK_LINE(198)
					if ((tmp5)){
						HX_STACK_LINE(198)
						Float tmp6 = _x;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(198)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(198)
					_this->x;
				}
			}
			HX_STACK_LINE(198)
			{
				HX_STACK_LINE(198)
				_this->y = _y;
				HX_STACK_LINE(198)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(198)
				if ((tmp3)){
					HX_STACK_LINE(198)
					_this->y;
				}
				else{
					HX_STACK_LINE(198)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(198)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(198)
					if ((tmp4)){
						HX_STACK_LINE(198)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(198)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(198)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(198)
						tmp5 = false;
					}
					HX_STACK_LINE(198)
					if ((tmp5)){
						HX_STACK_LINE(198)
						Float tmp6 = _y;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(198)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(198)
					_this->y;
				}
			}
			HX_STACK_LINE(198)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(198)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(198)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(198)
			if ((tmp3)){
				HX_STACK_LINE(198)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(198)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(198)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(198)
				tmp4 = false;
			}
			HX_STACK_LINE(198)
			if ((tmp4)){
				HX_STACK_LINE(198)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(198)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(198)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(198)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(198)
			if ((tmp5)){
				HX_STACK_LINE(198)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(198)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(198)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(198)
				tmp6 = false;
			}
			HX_STACK_LINE(198)
			if ((tmp6)){
				HX_STACK_LINE(198)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(198)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(198)
			_this;
		}
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(200)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(200)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(200)
			_this->ignore_listeners = true;
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				_this->x = (int)0;
				HX_STACK_LINE(200)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(200)
				if ((tmp3)){
					HX_STACK_LINE(200)
					_this->x;
				}
				else{
					HX_STACK_LINE(200)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(200)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(200)
					if ((tmp4)){
						HX_STACK_LINE(200)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(200)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(200)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(200)
						tmp5 = false;
					}
					HX_STACK_LINE(200)
					if ((tmp5)){
						HX_STACK_LINE(200)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(200)
					_this->x;
				}
			}
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				_this->y = _y;
				HX_STACK_LINE(200)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(200)
				if ((tmp3)){
					HX_STACK_LINE(200)
					_this->y;
				}
				else{
					HX_STACK_LINE(200)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(200)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(200)
					if ((tmp4)){
						HX_STACK_LINE(200)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(200)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(200)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(200)
						tmp5 = false;
					}
					HX_STACK_LINE(200)
					if ((tmp5)){
						HX_STACK_LINE(200)
						Float tmp6 = _y;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(200)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(200)
					_this->y;
				}
			}
			HX_STACK_LINE(200)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(200)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(200)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(200)
			if ((tmp3)){
				HX_STACK_LINE(200)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(200)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(200)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(200)
				tmp4 = false;
			}
			HX_STACK_LINE(200)
			if ((tmp4)){
				HX_STACK_LINE(200)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(200)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(200)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(200)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(200)
			if ((tmp5)){
				HX_STACK_LINE(200)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(200)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(200)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(200)
				tmp6 = false;
			}
			HX_STACK_LINE(200)
			if ((tmp6)){
				HX_STACK_LINE(200)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(200)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(200)
			_this;
		}
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(201)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(201)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(201)
			_this->ignore_listeners = true;
			HX_STACK_LINE(201)
			{
				HX_STACK_LINE(201)
				_this->x = (int)0;
				HX_STACK_LINE(201)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(201)
				if ((tmp3)){
					HX_STACK_LINE(201)
					_this->x;
				}
				else{
					HX_STACK_LINE(201)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(201)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(201)
					if ((tmp4)){
						HX_STACK_LINE(201)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(201)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(201)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(201)
						tmp5 = false;
					}
					HX_STACK_LINE(201)
					if ((tmp5)){
						HX_STACK_LINE(201)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(201)
					_this->x;
				}
			}
			HX_STACK_LINE(201)
			{
				HX_STACK_LINE(201)
				_this->y = (int)0;
				HX_STACK_LINE(201)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(201)
				if ((tmp3)){
					HX_STACK_LINE(201)
					_this->y;
				}
				else{
					HX_STACK_LINE(201)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(201)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(201)
					if ((tmp4)){
						HX_STACK_LINE(201)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(201)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(201)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(201)
						tmp5 = false;
					}
					HX_STACK_LINE(201)
					if ((tmp5)){
						HX_STACK_LINE(201)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(201)
					_this->y;
				}
			}
			HX_STACK_LINE(201)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(201)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(201)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(201)
			if ((tmp3)){
				HX_STACK_LINE(201)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(201)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(201)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(201)
				tmp4 = false;
			}
			HX_STACK_LINE(201)
			if ((tmp4)){
				HX_STACK_LINE(201)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(201)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(201)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(201)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(201)
			if ((tmp5)){
				HX_STACK_LINE(201)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(201)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(201)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(201)
				tmp6 = false;
			}
			HX_STACK_LINE(201)
			if ((tmp6)){
				HX_STACK_LINE(201)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(201)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(201)
			_this;
		}
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(202)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(202)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(202)
			_this->ignore_listeners = true;
			HX_STACK_LINE(202)
			{
				HX_STACK_LINE(202)
				_this->x = _x;
				HX_STACK_LINE(202)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(202)
				if ((tmp3)){
					HX_STACK_LINE(202)
					_this->x;
				}
				else{
					HX_STACK_LINE(202)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(202)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(202)
					if ((tmp4)){
						HX_STACK_LINE(202)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(202)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(202)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(202)
						tmp5 = false;
					}
					HX_STACK_LINE(202)
					if ((tmp5)){
						HX_STACK_LINE(202)
						Float tmp6 = _x;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(202)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(202)
					_this->x;
				}
			}
			HX_STACK_LINE(202)
			{
				HX_STACK_LINE(202)
				_this->y = _y;
				HX_STACK_LINE(202)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(202)
				if ((tmp3)){
					HX_STACK_LINE(202)
					_this->y;
				}
				else{
					HX_STACK_LINE(202)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(202)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(202)
					if ((tmp4)){
						HX_STACK_LINE(202)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(202)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(202)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(202)
						tmp5 = false;
					}
					HX_STACK_LINE(202)
					if ((tmp5)){
						HX_STACK_LINE(202)
						Float tmp6 = _y;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(202)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(202)
					_this->y;
				}
			}
			HX_STACK_LINE(202)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(202)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(202)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(202)
			if ((tmp3)){
				HX_STACK_LINE(202)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(202)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(202)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(202)
				tmp4 = false;
			}
			HX_STACK_LINE(202)
			if ((tmp4)){
				HX_STACK_LINE(202)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(202)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(202)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(202)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(202)
			if ((tmp5)){
				HX_STACK_LINE(202)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(202)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(202)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(202)
				tmp6 = false;
			}
			HX_STACK_LINE(202)
			if ((tmp6)){
				HX_STACK_LINE(202)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(202)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(202)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(QuadGeometry_obj,resize_xy,(void))

Void QuadGeometry_obj::resize( ::phoenix::Vector quad){
{
		HX_STACK_FRAME("phoenix.geometry.QuadGeometry","resize",0x7127918c,"phoenix.geometry.QuadGeometry.resize","phoenix/geometry/QuadGeometry.hx",206,0x485a4ac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(quad,"quad")
		HX_STACK_LINE(208)
		Float tmp = quad->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		Float tmp1 = quad->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(208)
		this->resize_xy(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,resize,(void))

Void QuadGeometry_obj::set( ::phoenix::Rectangle quad){
{
		HX_STACK_FRAME("phoenix.geometry.QuadGeometry","set",0xa66f350a,"phoenix.geometry.QuadGeometry.set","phoenix/geometry/QuadGeometry.hx",212,0x485a4ac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(quad,"quad")
		HX_STACK_LINE(214)
		Float tmp = quad->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(214)
		Float tmp1 = quad->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(214)
		Float tmp2 = quad->w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(214)
		Float tmp3 = quad->h;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(214)
		this->set_xywh(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,set,(void))

Void QuadGeometry_obj::set_xywh( Float _x,Float _y,Float _w,Float _h){
{
		HX_STACK_FRAME("phoenix.geometry.QuadGeometry","set_xywh",0x93a135e7,"phoenix.geometry.QuadGeometry.set_xywh","phoenix/geometry/QuadGeometry.hx",218,0x485a4ac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(220)
		int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		if ((tmp1)){
			HX_STACK_LINE(220)
			return null();
		}
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(223)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(223)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(223)
			_this->ignore_listeners = true;
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				_this->x = (int)0;
				HX_STACK_LINE(223)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(223)
				if ((tmp3)){
					HX_STACK_LINE(223)
					_this->x;
				}
				else{
					HX_STACK_LINE(223)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(223)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(223)
					if ((tmp4)){
						HX_STACK_LINE(223)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(223)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(223)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(223)
						tmp5 = false;
					}
					HX_STACK_LINE(223)
					if ((tmp5)){
						HX_STACK_LINE(223)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(223)
					_this->x;
				}
			}
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				_this->y = (int)0;
				HX_STACK_LINE(223)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(223)
				if ((tmp3)){
					HX_STACK_LINE(223)
					_this->y;
				}
				else{
					HX_STACK_LINE(223)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(223)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(223)
					if ((tmp4)){
						HX_STACK_LINE(223)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(223)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(223)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(223)
						tmp5 = false;
					}
					HX_STACK_LINE(223)
					if ((tmp5)){
						HX_STACK_LINE(223)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(223)
					_this->y;
				}
			}
			HX_STACK_LINE(223)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(223)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(223)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(223)
			if ((tmp3)){
				HX_STACK_LINE(223)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(223)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(223)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(223)
				tmp4 = false;
			}
			HX_STACK_LINE(223)
			if ((tmp4)){
				HX_STACK_LINE(223)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(223)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(223)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(223)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(223)
			if ((tmp5)){
				HX_STACK_LINE(223)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(223)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(223)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(223)
				tmp6 = false;
			}
			HX_STACK_LINE(223)
			if ((tmp6)){
				HX_STACK_LINE(223)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(223)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(223)
			_this;
		}
		HX_STACK_LINE(225)
		{
			HX_STACK_LINE(225)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(225)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(225)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(225)
			_this->ignore_listeners = true;
			HX_STACK_LINE(225)
			{
				HX_STACK_LINE(225)
				_this->x = _w;
				HX_STACK_LINE(225)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(225)
				if ((tmp3)){
					HX_STACK_LINE(225)
					_this->x;
				}
				else{
					HX_STACK_LINE(225)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(225)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(225)
					if ((tmp4)){
						HX_STACK_LINE(225)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(225)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(225)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(225)
						tmp5 = false;
					}
					HX_STACK_LINE(225)
					if ((tmp5)){
						HX_STACK_LINE(225)
						Float tmp6 = _w;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(225)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(225)
					_this->x;
				}
			}
			HX_STACK_LINE(225)
			{
				HX_STACK_LINE(225)
				_this->y = (int)0;
				HX_STACK_LINE(225)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(225)
				if ((tmp3)){
					HX_STACK_LINE(225)
					_this->y;
				}
				else{
					HX_STACK_LINE(225)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(225)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(225)
					if ((tmp4)){
						HX_STACK_LINE(225)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(225)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(225)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(225)
						tmp5 = false;
					}
					HX_STACK_LINE(225)
					if ((tmp5)){
						HX_STACK_LINE(225)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(225)
					_this->y;
				}
			}
			HX_STACK_LINE(225)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(225)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(225)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(225)
			if ((tmp3)){
				HX_STACK_LINE(225)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(225)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(225)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(225)
				tmp4 = false;
			}
			HX_STACK_LINE(225)
			if ((tmp4)){
				HX_STACK_LINE(225)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(225)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(225)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(225)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(225)
			if ((tmp5)){
				HX_STACK_LINE(225)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(225)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(225)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(225)
				tmp6 = false;
			}
			HX_STACK_LINE(225)
			if ((tmp6)){
				HX_STACK_LINE(225)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(225)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(225)
			_this;
		}
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(227)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(227)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(227)
			_this->ignore_listeners = true;
			HX_STACK_LINE(227)
			{
				HX_STACK_LINE(227)
				_this->x = _w;
				HX_STACK_LINE(227)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(227)
				if ((tmp3)){
					HX_STACK_LINE(227)
					_this->x;
				}
				else{
					HX_STACK_LINE(227)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(227)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(227)
					if ((tmp4)){
						HX_STACK_LINE(227)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(227)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(227)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(227)
						tmp5 = false;
					}
					HX_STACK_LINE(227)
					if ((tmp5)){
						HX_STACK_LINE(227)
						Float tmp6 = _w;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(227)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(227)
					_this->x;
				}
			}
			HX_STACK_LINE(227)
			{
				HX_STACK_LINE(227)
				_this->y = _h;
				HX_STACK_LINE(227)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(227)
				if ((tmp3)){
					HX_STACK_LINE(227)
					_this->y;
				}
				else{
					HX_STACK_LINE(227)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(227)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(227)
					if ((tmp4)){
						HX_STACK_LINE(227)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(227)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(227)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(227)
						tmp5 = false;
					}
					HX_STACK_LINE(227)
					if ((tmp5)){
						HX_STACK_LINE(227)
						Float tmp6 = _h;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(227)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(227)
					_this->y;
				}
			}
			HX_STACK_LINE(227)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(227)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(227)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(227)
			if ((tmp3)){
				HX_STACK_LINE(227)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(227)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(227)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(227)
				tmp4 = false;
			}
			HX_STACK_LINE(227)
			if ((tmp4)){
				HX_STACK_LINE(227)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(227)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(227)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(227)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(227)
			if ((tmp5)){
				HX_STACK_LINE(227)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(227)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(227)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(227)
				tmp6 = false;
			}
			HX_STACK_LINE(227)
			if ((tmp6)){
				HX_STACK_LINE(227)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(227)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(227)
			_this;
		}
		HX_STACK_LINE(230)
		{
			HX_STACK_LINE(230)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(230)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(230)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(230)
			_this->ignore_listeners = true;
			HX_STACK_LINE(230)
			{
				HX_STACK_LINE(230)
				_this->x = (int)0;
				HX_STACK_LINE(230)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(230)
				if ((tmp3)){
					HX_STACK_LINE(230)
					_this->x;
				}
				else{
					HX_STACK_LINE(230)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(230)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(230)
					if ((tmp4)){
						HX_STACK_LINE(230)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(230)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(230)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(230)
						tmp5 = false;
					}
					HX_STACK_LINE(230)
					if ((tmp5)){
						HX_STACK_LINE(230)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(230)
					_this->x;
				}
			}
			HX_STACK_LINE(230)
			{
				HX_STACK_LINE(230)
				_this->y = _h;
				HX_STACK_LINE(230)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(230)
				if ((tmp3)){
					HX_STACK_LINE(230)
					_this->y;
				}
				else{
					HX_STACK_LINE(230)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(230)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(230)
					if ((tmp4)){
						HX_STACK_LINE(230)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(230)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(230)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(230)
						tmp5 = false;
					}
					HX_STACK_LINE(230)
					if ((tmp5)){
						HX_STACK_LINE(230)
						Float tmp6 = _h;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(230)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(230)
					_this->y;
				}
			}
			HX_STACK_LINE(230)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(230)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(230)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(230)
			if ((tmp3)){
				HX_STACK_LINE(230)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(230)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(230)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(230)
				tmp4 = false;
			}
			HX_STACK_LINE(230)
			if ((tmp4)){
				HX_STACK_LINE(230)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(230)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(230)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(230)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(230)
			if ((tmp5)){
				HX_STACK_LINE(230)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(230)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(230)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(230)
				tmp6 = false;
			}
			HX_STACK_LINE(230)
			if ((tmp6)){
				HX_STACK_LINE(230)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(230)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(230)
			_this;
		}
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(232)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(232)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(232)
			_this->ignore_listeners = true;
			HX_STACK_LINE(232)
			{
				HX_STACK_LINE(232)
				_this->x = (int)0;
				HX_STACK_LINE(232)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(232)
				if ((tmp3)){
					HX_STACK_LINE(232)
					_this->x;
				}
				else{
					HX_STACK_LINE(232)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(232)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(232)
					if ((tmp4)){
						HX_STACK_LINE(232)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(232)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(232)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(232)
						tmp5 = false;
					}
					HX_STACK_LINE(232)
					if ((tmp5)){
						HX_STACK_LINE(232)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(232)
					_this->x;
				}
			}
			HX_STACK_LINE(232)
			{
				HX_STACK_LINE(232)
				_this->y = (int)0;
				HX_STACK_LINE(232)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(232)
				if ((tmp3)){
					HX_STACK_LINE(232)
					_this->y;
				}
				else{
					HX_STACK_LINE(232)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(232)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(232)
					if ((tmp4)){
						HX_STACK_LINE(232)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(232)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(232)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(232)
						tmp5 = false;
					}
					HX_STACK_LINE(232)
					if ((tmp5)){
						HX_STACK_LINE(232)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(232)
					_this->y;
				}
			}
			HX_STACK_LINE(232)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(232)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(232)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(232)
			if ((tmp3)){
				HX_STACK_LINE(232)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(232)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(232)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(232)
				tmp4 = false;
			}
			HX_STACK_LINE(232)
			if ((tmp4)){
				HX_STACK_LINE(232)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(232)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(232)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(232)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(232)
			if ((tmp5)){
				HX_STACK_LINE(232)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(232)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(232)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(232)
				tmp6 = false;
			}
			HX_STACK_LINE(232)
			if ((tmp6)){
				HX_STACK_LINE(232)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(232)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(232)
			_this;
		}
		HX_STACK_LINE(234)
		{
			HX_STACK_LINE(234)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(234)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(234)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(234)
			_this->ignore_listeners = true;
			HX_STACK_LINE(234)
			{
				HX_STACK_LINE(234)
				_this->x = _w;
				HX_STACK_LINE(234)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(234)
				if ((tmp3)){
					HX_STACK_LINE(234)
					_this->x;
				}
				else{
					HX_STACK_LINE(234)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(234)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(234)
					if ((tmp4)){
						HX_STACK_LINE(234)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(234)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(234)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(234)
						tmp5 = false;
					}
					HX_STACK_LINE(234)
					if ((tmp5)){
						HX_STACK_LINE(234)
						Float tmp6 = _w;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(234)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(234)
					_this->x;
				}
			}
			HX_STACK_LINE(234)
			{
				HX_STACK_LINE(234)
				_this->y = _h;
				HX_STACK_LINE(234)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(234)
				if ((tmp3)){
					HX_STACK_LINE(234)
					_this->y;
				}
				else{
					HX_STACK_LINE(234)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(234)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(234)
					if ((tmp4)){
						HX_STACK_LINE(234)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(234)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(234)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(234)
						tmp5 = false;
					}
					HX_STACK_LINE(234)
					if ((tmp5)){
						HX_STACK_LINE(234)
						Float tmp6 = _h;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(234)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(234)
					_this->y;
				}
			}
			HX_STACK_LINE(234)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(234)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(234)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(234)
			if ((tmp3)){
				HX_STACK_LINE(234)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(234)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(234)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(234)
				tmp4 = false;
			}
			HX_STACK_LINE(234)
			if ((tmp4)){
				HX_STACK_LINE(234)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(234)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(234)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(234)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(234)
			if ((tmp5)){
				HX_STACK_LINE(234)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(234)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(234)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(234)
				tmp6 = false;
			}
			HX_STACK_LINE(234)
			if ((tmp6)){
				HX_STACK_LINE(234)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(234)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(234)
			_this;
		}
		HX_STACK_LINE(236)
		{
			HX_STACK_LINE(236)
			::phoenix::Vector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(236)
			{
				HX_STACK_LINE(236)
				::phoenix::Transform tmp3 = this->transform;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(236)
				::phoenix::Vector tmp4 = tmp3->local->pos;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(236)
				::phoenix::Vector _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(236)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(236)
				_this->ignore_listeners = true;
				HX_STACK_LINE(236)
				{
					HX_STACK_LINE(236)
					_this->x = _x;
					HX_STACK_LINE(236)
					bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(236)
					if ((tmp5)){
						HX_STACK_LINE(236)
						_this->x;
					}
					else{
						HX_STACK_LINE(236)
						bool tmp6 = (_this->listen_x != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(236)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(236)
						if ((tmp6)){
							HX_STACK_LINE(236)
							bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(236)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(236)
							tmp7 = !(tmp9);
						}
						else{
							HX_STACK_LINE(236)
							tmp7 = false;
						}
						HX_STACK_LINE(236)
						if ((tmp7)){
							HX_STACK_LINE(236)
							Float tmp8 = _x;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(236)
							_this->listen_x(tmp8);
						}
						HX_STACK_LINE(236)
						_this->x;
					}
				}
				HX_STACK_LINE(236)
				{
					HX_STACK_LINE(236)
					_this->y = _y;
					HX_STACK_LINE(236)
					bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(236)
					if ((tmp5)){
						HX_STACK_LINE(236)
						_this->y;
					}
					else{
						HX_STACK_LINE(236)
						bool tmp6 = (_this->listen_y != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(236)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(236)
						if ((tmp6)){
							HX_STACK_LINE(236)
							bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(236)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(236)
							tmp7 = !(tmp9);
						}
						else{
							HX_STACK_LINE(236)
							tmp7 = false;
						}
						HX_STACK_LINE(236)
						if ((tmp7)){
							HX_STACK_LINE(236)
							Float tmp8 = _y;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(236)
							_this->listen_y(tmp8);
						}
						HX_STACK_LINE(236)
						_this->y;
					}
				}
				HX_STACK_LINE(236)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(236)
				bool tmp5 = (_this->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(236)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(236)
				if ((tmp5)){
					HX_STACK_LINE(236)
					bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(236)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(236)
					tmp6 = !(tmp8);
				}
				else{
					HX_STACK_LINE(236)
					tmp6 = false;
				}
				HX_STACK_LINE(236)
				if ((tmp6)){
					HX_STACK_LINE(236)
					Float tmp7 = _this->x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(236)
					_this->listen_x(tmp7);
				}
				HX_STACK_LINE(236)
				bool tmp7 = (_this->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(236)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(236)
				if ((tmp7)){
					HX_STACK_LINE(236)
					bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(236)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(236)
					tmp8 = !(tmp10);
				}
				else{
					HX_STACK_LINE(236)
					tmp8 = false;
				}
				HX_STACK_LINE(236)
				if ((tmp8)){
					HX_STACK_LINE(236)
					Float tmp9 = _this->y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(236)
					_this->listen_y(tmp9);
				}
				HX_STACK_LINE(236)
				tmp2 = _this;
			}
			HX_STACK_LINE(236)
			::phoenix::Vector value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(236)
			{
				HX_STACK_LINE(236)
				::phoenix::Transform tmp3 = this->transform;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(236)
				::phoenix::Spatial _this = tmp3->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(236)
				_this->pos = value;
				HX_STACK_LINE(236)
				bool tmp4 = (value != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(236)
				if ((tmp4)){
					HX_STACK_LINE(236)
					::phoenix::Vector tmp5 = _this->pos;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(236)
					Dynamic tmp6 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(236)
					::phoenix::Vector_obj::Listen(tmp5,tmp6);
					HX_STACK_LINE(236)
					{
						HX_STACK_LINE(236)
						bool tmp7 = (_this->pos_changed != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(236)
						bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(236)
						if ((tmp7)){
							HX_STACK_LINE(236)
							bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(236)
							bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(236)
							tmp8 = !(tmp10);
						}
						else{
							HX_STACK_LINE(236)
							tmp8 = false;
						}
						HX_STACK_LINE(236)
						if ((tmp8)){
							HX_STACK_LINE(236)
							::phoenix::Vector tmp9 = _this->pos;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(236)
							_this->pos_changed(tmp9);
						}
					}
				}
				HX_STACK_LINE(236)
				_this->pos;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(QuadGeometry_obj,set_xywh,(void))

bool QuadGeometry_obj::set_flipx( bool _val){
	HX_STACK_FRAME("phoenix.geometry.QuadGeometry","set_flipx",0x339524f6,"phoenix.geometry.QuadGeometry.set_flipx","phoenix/geometry/QuadGeometry.hx",240,0x485a4ac8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(243)
	this->flipx = _val;
	HX_STACK_LINE(245)
	{
		HX_STACK_LINE(245)
		int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(245)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(245)
		if ((tmp1)){
			HX_STACK_LINE(245)
			Dynamic();
		}
		else{
			HX_STACK_LINE(245)
			Float tmp2 = this->_uv_w;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(245)
			Float sz_x = tmp2;		HX_STACK_VAR(sz_x,"sz_x");
			HX_STACK_LINE(245)
			Float tmp3 = this->_uv_h;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(245)
			Float sz_y = tmp3;		HX_STACK_VAR(sz_y,"sz_y");
			HX_STACK_LINE(245)
			Float tmp4 = this->_uv_x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(245)
			Float tl_x = tmp4;		HX_STACK_VAR(tl_x,"tl_x");
			HX_STACK_LINE(245)
			Float tmp5 = this->_uv_y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(245)
			Float tl_y = tmp5;		HX_STACK_VAR(tl_y,"tl_y");
			HX_STACK_LINE(245)
			this->_uv_x = tl_x;
			HX_STACK_LINE(245)
			this->_uv_y = tl_y;
			HX_STACK_LINE(245)
			this->_uv_w = sz_x;
			HX_STACK_LINE(245)
			this->_uv_h = sz_y;
			HX_STACK_LINE(245)
			Float tmp6 = (tl_x + sz_x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(245)
			Float tr_x = tmp6;		HX_STACK_VAR(tr_x,"tr_x");
			HX_STACK_LINE(245)
			Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
			HX_STACK_LINE(245)
			Float tmp7 = (tl_x + sz_x);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(245)
			Float br_x = tmp7;		HX_STACK_VAR(br_x,"br_x");
			HX_STACK_LINE(245)
			Float tmp8 = (tl_y + sz_y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(245)
			Float br_y = tmp8;		HX_STACK_VAR(br_y,"br_y");
			HX_STACK_LINE(245)
			Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
			HX_STACK_LINE(245)
			Float tmp9 = (tl_y + sz_y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(245)
			Float bl_y = tmp9;		HX_STACK_VAR(bl_y,"bl_y");
			HX_STACK_LINE(245)
			Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
			HX_STACK_LINE(245)
			Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
			HX_STACK_LINE(245)
			int tmp10 = this->uv_angle;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(245)
			Float tmp11 = (Float(tmp10) / Float((int)90));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(245)
			int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(245)
			int rotations = tmp12;		HX_STACK_VAR(rotations,"rotations");
			HX_STACK_LINE(245)
			int tmp13 = rotations;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(245)
			Float tmp14 = (Float(rotations) / Float((int)4));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(245)
			int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(245)
			int tmp16 = ((int)4 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(245)
			int tmp17 = (tmp13 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(245)
			rotations = tmp17;
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(245)
				while((true)){
					HX_STACK_LINE(245)
					bool tmp18 = (_g < rotations);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(245)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(245)
					if ((tmp19)){
						HX_STACK_LINE(245)
						break;
					}
					HX_STACK_LINE(245)
					int tmp20 = (_g)++;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(245)
					int r = tmp20;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(245)
					{
						HX_STACK_LINE(245)
						tmp_x = tl_x;
						HX_STACK_LINE(245)
						tl_x = bl_x;
						HX_STACK_LINE(245)
						bl_x = br_x;
						HX_STACK_LINE(245)
						br_x = tr_x;
						HX_STACK_LINE(245)
						tr_x = tmp_x;
						HX_STACK_LINE(245)
						tmp_y = tl_y;
						HX_STACK_LINE(245)
						tl_y = bl_y;
						HX_STACK_LINE(245)
						bl_y = br_y;
						HX_STACK_LINE(245)
						br_y = tr_y;
						HX_STACK_LINE(245)
						tr_y = tmp_y;
					}
				}
			}
			HX_STACK_LINE(245)
			bool tmp18 = this->flipy;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(245)
			if ((tmp18)){
				HX_STACK_LINE(245)
				tmp_y = bl_y;
				HX_STACK_LINE(245)
				bl_y = tl_y;
				HX_STACK_LINE(245)
				tl_y = tmp_y;
				HX_STACK_LINE(245)
				tmp_x = bl_x;
				HX_STACK_LINE(245)
				bl_x = tl_x;
				HX_STACK_LINE(245)
				tl_x = tmp_x;
				HX_STACK_LINE(245)
				tmp_y = br_y;
				HX_STACK_LINE(245)
				br_y = tr_y;
				HX_STACK_LINE(245)
				tr_y = tmp_y;
				HX_STACK_LINE(245)
				tmp_x = br_x;
				HX_STACK_LINE(245)
				br_x = tr_x;
				HX_STACK_LINE(245)
				tr_x = tmp_x;
			}
			HX_STACK_LINE(245)
			bool tmp19 = this->flipx;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(245)
			if ((tmp19)){
				HX_STACK_LINE(245)
				tmp_x = tr_x;
				HX_STACK_LINE(245)
				tr_x = tl_x;
				HX_STACK_LINE(245)
				tl_x = tmp_x;
				HX_STACK_LINE(245)
				tmp_y = tr_y;
				HX_STACK_LINE(245)
				tr_y = tl_y;
				HX_STACK_LINE(245)
				tl_y = tmp_y;
				HX_STACK_LINE(245)
				tmp_x = br_x;
				HX_STACK_LINE(245)
				br_x = bl_x;
				HX_STACK_LINE(245)
				bl_x = tmp_x;
				HX_STACK_LINE(245)
				tmp_y = br_y;
				HX_STACK_LINE(245)
				br_y = bl_y;
				HX_STACK_LINE(245)
				bl_y = tmp_y;
			}
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(245)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(245)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(245)
				_this->u = tl_x;
				HX_STACK_LINE(245)
				_this->v = tl_y;
				HX_STACK_LINE(245)
				_this;
			}
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(245)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(245)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(245)
				_this->u = tr_x;
				HX_STACK_LINE(245)
				_this->v = tr_y;
				HX_STACK_LINE(245)
				_this;
			}
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(245)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(245)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(245)
				_this->u = br_x;
				HX_STACK_LINE(245)
				_this->v = br_y;
				HX_STACK_LINE(245)
				_this;
			}
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(245)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(245)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(245)
				_this->u = bl_x;
				HX_STACK_LINE(245)
				_this->v = bl_y;
				HX_STACK_LINE(245)
				_this;
			}
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(245)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(245)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(245)
				_this->u = tl_x;
				HX_STACK_LINE(245)
				_this->v = tl_y;
				HX_STACK_LINE(245)
				_this;
			}
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(245)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(245)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(245)
				_this->u = br_x;
				HX_STACK_LINE(245)
				_this->v = br_y;
				HX_STACK_LINE(245)
				_this;
			}
			HX_STACK_LINE(245)
			this->set_dirty(true);
		}
	}
	HX_STACK_LINE(247)
	bool tmp = this->flipx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,set_flipx,return )

bool QuadGeometry_obj::set_flipy( bool _val){
	HX_STACK_FRAME("phoenix.geometry.QuadGeometry","set_flipy",0x339524f7,"phoenix.geometry.QuadGeometry.set_flipy","phoenix/geometry/QuadGeometry.hx",251,0x485a4ac8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(254)
	this->flipy = _val;
	HX_STACK_LINE(256)
	{
		HX_STACK_LINE(256)
		int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(256)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(256)
		if ((tmp1)){
			HX_STACK_LINE(256)
			Dynamic();
		}
		else{
			HX_STACK_LINE(256)
			Float tmp2 = this->_uv_w;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(256)
			Float sz_x = tmp2;		HX_STACK_VAR(sz_x,"sz_x");
			HX_STACK_LINE(256)
			Float tmp3 = this->_uv_h;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(256)
			Float sz_y = tmp3;		HX_STACK_VAR(sz_y,"sz_y");
			HX_STACK_LINE(256)
			Float tmp4 = this->_uv_x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(256)
			Float tl_x = tmp4;		HX_STACK_VAR(tl_x,"tl_x");
			HX_STACK_LINE(256)
			Float tmp5 = this->_uv_y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(256)
			Float tl_y = tmp5;		HX_STACK_VAR(tl_y,"tl_y");
			HX_STACK_LINE(256)
			this->_uv_x = tl_x;
			HX_STACK_LINE(256)
			this->_uv_y = tl_y;
			HX_STACK_LINE(256)
			this->_uv_w = sz_x;
			HX_STACK_LINE(256)
			this->_uv_h = sz_y;
			HX_STACK_LINE(256)
			Float tmp6 = (tl_x + sz_x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(256)
			Float tr_x = tmp6;		HX_STACK_VAR(tr_x,"tr_x");
			HX_STACK_LINE(256)
			Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
			HX_STACK_LINE(256)
			Float tmp7 = (tl_x + sz_x);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(256)
			Float br_x = tmp7;		HX_STACK_VAR(br_x,"br_x");
			HX_STACK_LINE(256)
			Float tmp8 = (tl_y + sz_y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(256)
			Float br_y = tmp8;		HX_STACK_VAR(br_y,"br_y");
			HX_STACK_LINE(256)
			Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
			HX_STACK_LINE(256)
			Float tmp9 = (tl_y + sz_y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(256)
			Float bl_y = tmp9;		HX_STACK_VAR(bl_y,"bl_y");
			HX_STACK_LINE(256)
			Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
			HX_STACK_LINE(256)
			Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
			HX_STACK_LINE(256)
			int tmp10 = this->uv_angle;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(256)
			Float tmp11 = (Float(tmp10) / Float((int)90));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(256)
			int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(256)
			int rotations = tmp12;		HX_STACK_VAR(rotations,"rotations");
			HX_STACK_LINE(256)
			int tmp13 = rotations;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(256)
			Float tmp14 = (Float(rotations) / Float((int)4));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(256)
			int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(256)
			int tmp16 = ((int)4 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(256)
			int tmp17 = (tmp13 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(256)
			rotations = tmp17;
			HX_STACK_LINE(256)
			{
				HX_STACK_LINE(256)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(256)
				while((true)){
					HX_STACK_LINE(256)
					bool tmp18 = (_g < rotations);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(256)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(256)
					if ((tmp19)){
						HX_STACK_LINE(256)
						break;
					}
					HX_STACK_LINE(256)
					int tmp20 = (_g)++;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(256)
					int r = tmp20;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(256)
					{
						HX_STACK_LINE(256)
						tmp_x = tl_x;
						HX_STACK_LINE(256)
						tl_x = bl_x;
						HX_STACK_LINE(256)
						bl_x = br_x;
						HX_STACK_LINE(256)
						br_x = tr_x;
						HX_STACK_LINE(256)
						tr_x = tmp_x;
						HX_STACK_LINE(256)
						tmp_y = tl_y;
						HX_STACK_LINE(256)
						tl_y = bl_y;
						HX_STACK_LINE(256)
						bl_y = br_y;
						HX_STACK_LINE(256)
						br_y = tr_y;
						HX_STACK_LINE(256)
						tr_y = tmp_y;
					}
				}
			}
			HX_STACK_LINE(256)
			bool tmp18 = this->flipy;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(256)
			if ((tmp18)){
				HX_STACK_LINE(256)
				tmp_y = bl_y;
				HX_STACK_LINE(256)
				bl_y = tl_y;
				HX_STACK_LINE(256)
				tl_y = tmp_y;
				HX_STACK_LINE(256)
				tmp_x = bl_x;
				HX_STACK_LINE(256)
				bl_x = tl_x;
				HX_STACK_LINE(256)
				tl_x = tmp_x;
				HX_STACK_LINE(256)
				tmp_y = br_y;
				HX_STACK_LINE(256)
				br_y = tr_y;
				HX_STACK_LINE(256)
				tr_y = tmp_y;
				HX_STACK_LINE(256)
				tmp_x = br_x;
				HX_STACK_LINE(256)
				br_x = tr_x;
				HX_STACK_LINE(256)
				tr_x = tmp_x;
			}
			HX_STACK_LINE(256)
			bool tmp19 = this->flipx;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(256)
			if ((tmp19)){
				HX_STACK_LINE(256)
				tmp_x = tr_x;
				HX_STACK_LINE(256)
				tr_x = tl_x;
				HX_STACK_LINE(256)
				tl_x = tmp_x;
				HX_STACK_LINE(256)
				tmp_y = tr_y;
				HX_STACK_LINE(256)
				tr_y = tl_y;
				HX_STACK_LINE(256)
				tl_y = tmp_y;
				HX_STACK_LINE(256)
				tmp_x = br_x;
				HX_STACK_LINE(256)
				br_x = bl_x;
				HX_STACK_LINE(256)
				bl_x = tmp_x;
				HX_STACK_LINE(256)
				tmp_y = br_y;
				HX_STACK_LINE(256)
				br_y = bl_y;
				HX_STACK_LINE(256)
				bl_y = tmp_y;
			}
			HX_STACK_LINE(256)
			{
				HX_STACK_LINE(256)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(256)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(256)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(256)
				_this->u = tl_x;
				HX_STACK_LINE(256)
				_this->v = tl_y;
				HX_STACK_LINE(256)
				_this;
			}
			HX_STACK_LINE(256)
			{
				HX_STACK_LINE(256)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(256)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(256)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(256)
				_this->u = tr_x;
				HX_STACK_LINE(256)
				_this->v = tr_y;
				HX_STACK_LINE(256)
				_this;
			}
			HX_STACK_LINE(256)
			{
				HX_STACK_LINE(256)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(256)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(256)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(256)
				_this->u = br_x;
				HX_STACK_LINE(256)
				_this->v = br_y;
				HX_STACK_LINE(256)
				_this;
			}
			HX_STACK_LINE(256)
			{
				HX_STACK_LINE(256)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(256)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(256)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(256)
				_this->u = bl_x;
				HX_STACK_LINE(256)
				_this->v = bl_y;
				HX_STACK_LINE(256)
				_this;
			}
			HX_STACK_LINE(256)
			{
				HX_STACK_LINE(256)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(256)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(256)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(256)
				_this->u = tl_x;
				HX_STACK_LINE(256)
				_this->v = tl_y;
				HX_STACK_LINE(256)
				_this;
			}
			HX_STACK_LINE(256)
			{
				HX_STACK_LINE(256)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(256)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(256)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(256)
				_this->u = br_x;
				HX_STACK_LINE(256)
				_this->v = br_y;
				HX_STACK_LINE(256)
				_this;
			}
			HX_STACK_LINE(256)
			this->set_dirty(true);
		}
	}
	HX_STACK_LINE(258)
	bool tmp = this->flipy;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,set_flipy,return )

int QuadGeometry_obj::set_uv_angle( int _val){
	HX_STACK_FRAME("phoenix.geometry.QuadGeometry","set_uv_angle",0x36bd414a,"phoenix.geometry.QuadGeometry.set_uv_angle","phoenix/geometry/QuadGeometry.hx",262,0x485a4ac8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(263)
	{
		HX_STACK_LINE(263)
		int tmp = hx::Mod(_val,(int)90);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(263)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(263)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(263)
		if ((tmp2)){
			HX_STACK_LINE(214)
			::String tmp3 = HX_HCSTRING(" ( uv_angle has to be a multiple of 90","\xe0","\xe7","\x01","\x93");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(214)
			::String tmp4 = (tmp3 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(263)
			::String tmp5 = (HX_HCSTRING("_val % 90 == 0","\xa0","\xbb","\xa6","\x61") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(263)
			::luxe::DebugError tmp6 = ::luxe::DebugError_obj::assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(263)
			HX_STACK_DO_THROW(tmp6);
		}
	}
	HX_STACK_LINE(264)
	this->uv_angle = _val;
	HX_STACK_LINE(265)
	{
		HX_STACK_LINE(265)
		int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(265)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(265)
		if ((tmp1)){
			HX_STACK_LINE(265)
			Dynamic();
		}
		else{
			HX_STACK_LINE(265)
			Float tmp2 = this->_uv_w;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(265)
			Float sz_x = tmp2;		HX_STACK_VAR(sz_x,"sz_x");
			HX_STACK_LINE(265)
			Float tmp3 = this->_uv_h;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(265)
			Float sz_y = tmp3;		HX_STACK_VAR(sz_y,"sz_y");
			HX_STACK_LINE(265)
			Float tmp4 = this->_uv_x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(265)
			Float tl_x = tmp4;		HX_STACK_VAR(tl_x,"tl_x");
			HX_STACK_LINE(265)
			Float tmp5 = this->_uv_y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(265)
			Float tl_y = tmp5;		HX_STACK_VAR(tl_y,"tl_y");
			HX_STACK_LINE(265)
			this->_uv_x = tl_x;
			HX_STACK_LINE(265)
			this->_uv_y = tl_y;
			HX_STACK_LINE(265)
			this->_uv_w = sz_x;
			HX_STACK_LINE(265)
			this->_uv_h = sz_y;
			HX_STACK_LINE(265)
			Float tmp6 = (tl_x + sz_x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(265)
			Float tr_x = tmp6;		HX_STACK_VAR(tr_x,"tr_x");
			HX_STACK_LINE(265)
			Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
			HX_STACK_LINE(265)
			Float tmp7 = (tl_x + sz_x);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(265)
			Float br_x = tmp7;		HX_STACK_VAR(br_x,"br_x");
			HX_STACK_LINE(265)
			Float tmp8 = (tl_y + sz_y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(265)
			Float br_y = tmp8;		HX_STACK_VAR(br_y,"br_y");
			HX_STACK_LINE(265)
			Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
			HX_STACK_LINE(265)
			Float tmp9 = (tl_y + sz_y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(265)
			Float bl_y = tmp9;		HX_STACK_VAR(bl_y,"bl_y");
			HX_STACK_LINE(265)
			Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
			HX_STACK_LINE(265)
			Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
			HX_STACK_LINE(265)
			int tmp10 = this->uv_angle;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(265)
			Float tmp11 = (Float(tmp10) / Float((int)90));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(265)
			int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(265)
			int rotations = tmp12;		HX_STACK_VAR(rotations,"rotations");
			HX_STACK_LINE(265)
			int tmp13 = rotations;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(265)
			Float tmp14 = (Float(rotations) / Float((int)4));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(265)
			int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(265)
			int tmp16 = ((int)4 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(265)
			int tmp17 = (tmp13 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(265)
			rotations = tmp17;
			HX_STACK_LINE(265)
			{
				HX_STACK_LINE(265)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(265)
				while((true)){
					HX_STACK_LINE(265)
					bool tmp18 = (_g < rotations);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(265)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(265)
					if ((tmp19)){
						HX_STACK_LINE(265)
						break;
					}
					HX_STACK_LINE(265)
					int tmp20 = (_g)++;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(265)
					int r = tmp20;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(265)
					{
						HX_STACK_LINE(265)
						tmp_x = tl_x;
						HX_STACK_LINE(265)
						tl_x = bl_x;
						HX_STACK_LINE(265)
						bl_x = br_x;
						HX_STACK_LINE(265)
						br_x = tr_x;
						HX_STACK_LINE(265)
						tr_x = tmp_x;
						HX_STACK_LINE(265)
						tmp_y = tl_y;
						HX_STACK_LINE(265)
						tl_y = bl_y;
						HX_STACK_LINE(265)
						bl_y = br_y;
						HX_STACK_LINE(265)
						br_y = tr_y;
						HX_STACK_LINE(265)
						tr_y = tmp_y;
					}
				}
			}
			HX_STACK_LINE(265)
			bool tmp18 = this->flipy;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(265)
			if ((tmp18)){
				HX_STACK_LINE(265)
				tmp_y = bl_y;
				HX_STACK_LINE(265)
				bl_y = tl_y;
				HX_STACK_LINE(265)
				tl_y = tmp_y;
				HX_STACK_LINE(265)
				tmp_x = bl_x;
				HX_STACK_LINE(265)
				bl_x = tl_x;
				HX_STACK_LINE(265)
				tl_x = tmp_x;
				HX_STACK_LINE(265)
				tmp_y = br_y;
				HX_STACK_LINE(265)
				br_y = tr_y;
				HX_STACK_LINE(265)
				tr_y = tmp_y;
				HX_STACK_LINE(265)
				tmp_x = br_x;
				HX_STACK_LINE(265)
				br_x = tr_x;
				HX_STACK_LINE(265)
				tr_x = tmp_x;
			}
			HX_STACK_LINE(265)
			bool tmp19 = this->flipx;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(265)
			if ((tmp19)){
				HX_STACK_LINE(265)
				tmp_x = tr_x;
				HX_STACK_LINE(265)
				tr_x = tl_x;
				HX_STACK_LINE(265)
				tl_x = tmp_x;
				HX_STACK_LINE(265)
				tmp_y = tr_y;
				HX_STACK_LINE(265)
				tr_y = tl_y;
				HX_STACK_LINE(265)
				tl_y = tmp_y;
				HX_STACK_LINE(265)
				tmp_x = br_x;
				HX_STACK_LINE(265)
				br_x = bl_x;
				HX_STACK_LINE(265)
				bl_x = tmp_x;
				HX_STACK_LINE(265)
				tmp_y = br_y;
				HX_STACK_LINE(265)
				br_y = bl_y;
				HX_STACK_LINE(265)
				bl_y = tmp_y;
			}
			HX_STACK_LINE(265)
			{
				HX_STACK_LINE(265)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(265)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(265)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(265)
				_this->u = tl_x;
				HX_STACK_LINE(265)
				_this->v = tl_y;
				HX_STACK_LINE(265)
				_this;
			}
			HX_STACK_LINE(265)
			{
				HX_STACK_LINE(265)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(265)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(265)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(265)
				_this->u = tr_x;
				HX_STACK_LINE(265)
				_this->v = tr_y;
				HX_STACK_LINE(265)
				_this;
			}
			HX_STACK_LINE(265)
			{
				HX_STACK_LINE(265)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(265)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(265)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(265)
				_this->u = br_x;
				HX_STACK_LINE(265)
				_this->v = br_y;
				HX_STACK_LINE(265)
				_this;
			}
			HX_STACK_LINE(265)
			{
				HX_STACK_LINE(265)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(265)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(265)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(265)
				_this->u = bl_x;
				HX_STACK_LINE(265)
				_this->v = bl_y;
				HX_STACK_LINE(265)
				_this;
			}
			HX_STACK_LINE(265)
			{
				HX_STACK_LINE(265)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(265)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(265)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(265)
				_this->u = tl_x;
				HX_STACK_LINE(265)
				_this->v = tl_y;
				HX_STACK_LINE(265)
				_this;
			}
			HX_STACK_LINE(265)
			{
				HX_STACK_LINE(265)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(265)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(265)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(265)
				_this->u = br_x;
				HX_STACK_LINE(265)
				_this->v = br_y;
				HX_STACK_LINE(265)
				_this;
			}
			HX_STACK_LINE(265)
			this->set_dirty(true);
		}
	}
	HX_STACK_LINE(266)
	int tmp = this->uv_angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,set_uv_angle,return )


QuadGeometry_obj::QuadGeometry_obj()
{
}

Dynamic QuadGeometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { return uv_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flipx") ) { return flipx; }
		if (HX_FIELD_EQ(inName,"flipy") ) { return flipy; }
		if (HX_FIELD_EQ(inName,"_uv_x") ) { return _uv_x; }
		if (HX_FIELD_EQ(inName,"_uv_y") ) { return _uv_y; }
		if (HX_FIELD_EQ(inName,"_uv_w") ) { return _uv_w; }
		if (HX_FIELD_EQ(inName,"_uv_h") ) { return _uv_h; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uv_angle") ) { return uv_angle; }
		if (HX_FIELD_EQ(inName,"uv_space") ) { return uv_space_dyn(); }
		if (HX_FIELD_EQ(inName,"set_xywh") ) { return set_xywh_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resize_xy") ) { return resize_xy_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipx") ) { return set_flipx_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipy") ) { return set_flipy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_uv_angle") ) { return set_uv_angle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QuadGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flipx") ) { if (inCallProp == hx::paccAlways) return set_flipx(inValue);flipx=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipy") ) { if (inCallProp == hx::paccAlways) return set_flipy(inValue);flipy=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uv_x") ) { _uv_x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uv_y") ) { _uv_y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uv_w") ) { _uv_w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uv_h") ) { _uv_h=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uv_angle") ) { if (inCallProp == hx::paccAlways) return set_uv_angle(inValue);uv_angle=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QuadGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("uv_angle","\x35","\x70","\xbc","\x6d"));
	outFields->push(HX_HCSTRING("_uv_x","\xb9","\xef","\xc0","\x00"));
	outFields->push(HX_HCSTRING("_uv_y","\xba","\xef","\xc0","\x00"));
	outFields->push(HX_HCSTRING("_uv_w","\xb8","\xef","\xc0","\x00"));
	outFields->push(HX_HCSTRING("_uv_h","\xa9","\xef","\xc0","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(QuadGeometry_obj,flipx),HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02")},
	{hx::fsBool,(int)offsetof(QuadGeometry_obj,flipy),HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02")},
	{hx::fsInt,(int)offsetof(QuadGeometry_obj,uv_angle),HX_HCSTRING("uv_angle","\x35","\x70","\xbc","\x6d")},
	{hx::fsFloat,(int)offsetof(QuadGeometry_obj,_uv_x),HX_HCSTRING("_uv_x","\xb9","\xef","\xc0","\x00")},
	{hx::fsFloat,(int)offsetof(QuadGeometry_obj,_uv_y),HX_HCSTRING("_uv_y","\xba","\xef","\xc0","\x00")},
	{hx::fsFloat,(int)offsetof(QuadGeometry_obj,_uv_w),HX_HCSTRING("_uv_w","\xb8","\xef","\xc0","\x00")},
	{hx::fsFloat,(int)offsetof(QuadGeometry_obj,_uv_h),HX_HCSTRING("_uv_h","\xa9","\xef","\xc0","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"),
	HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"),
	HX_HCSTRING("uv_angle","\x35","\x70","\xbc","\x6d"),
	HX_HCSTRING("_uv_x","\xb9","\xef","\xc0","\x00"),
	HX_HCSTRING("_uv_y","\xba","\xef","\xc0","\x00"),
	HX_HCSTRING("_uv_w","\xb8","\xef","\xc0","\x00"),
	HX_HCSTRING("_uv_h","\xa9","\xef","\xc0","\x00"),
	HX_HCSTRING("uv","\x61","\x66","\x00","\x00"),
	HX_HCSTRING("uv_space","\x28","\xb9","\x40","\xcc"),
	HX_HCSTRING("resize_xy","\xac","\xd5","\xf2","\xab"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("set_xywh","\x4f","\xe8","\xc5","\x7d"),
	HX_HCSTRING("set_flipx","\x8e","\x8d","\x8c","\x29"),
	HX_HCSTRING("set_flipy","\x8f","\x8d","\x8c","\x29"),
	HX_HCSTRING("set_uv_angle","\xb2","\x47","\xcf","\x37"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuadGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadGeometry_obj::__mClass,"__mClass");
};

#endif

hx::Class QuadGeometry_obj::__mClass;

void QuadGeometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.QuadGeometry","\xd6","\x25","\xf9","\x8b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QuadGeometry_obj >;
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
} // end namespace geometry
