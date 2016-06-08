#include <hxcpp.h>

#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
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
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RectangleGeometry
#include <phoenix/geometry/RectangleGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
namespace phoenix{
namespace geometry{

Void RectangleGeometry_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.geometry.RectangleGeometry","new",0x08963096,"phoenix.geometry.RectangleGeometry.new","phoenix/geometry/RectangleGeometry.hx",14,0x605d1b7a)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(16)
	_options->__FieldRef(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88")) = (int)1;
	HX_STACK_LINE(18)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	super::__construct(tmp);
	HX_STACK_LINE(20)
	Dynamic _x = _options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(21)
	Dynamic _y = _options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(22)
	Dynamic _w = _options->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_w,"_w");
	HX_STACK_LINE(23)
	Dynamic _h = _options->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_h,"_h");
	HX_STACK_LINE(25)
	bool tmp1 = (_options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	if ((tmp1)){
		HX_STACK_LINE(26)
		Float tmp2 = _options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		_x = tmp2;
		HX_STACK_LINE(27)
		Float tmp3 = _options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		_y = tmp3;
		HX_STACK_LINE(28)
		Float tmp4 = _options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		_w = tmp4;
		HX_STACK_LINE(29)
		Float tmp5 = _options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(29)
		_h = tmp5;
	}
	HX_STACK_LINE(33)
	::phoenix::Vector tmp2 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	::phoenix::Color tmp3 = this->color;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	::phoenix::geometry::Vertex tmp4 = ::phoenix::geometry::Vertex_obj::__new(tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	this->add(tmp4);
	HX_STACK_LINE(35)
	::phoenix::Vector tmp5 = ::phoenix::Vector_obj::__new(_w,(int)0,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(35)
	::phoenix::Color tmp6 = this->color;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(35)
	::phoenix::geometry::Vertex tmp7 = ::phoenix::geometry::Vertex_obj::__new(tmp5,tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(35)
	this->add(tmp7);
	HX_STACK_LINE(38)
	::phoenix::Vector tmp8 = ::phoenix::Vector_obj::__new(_w,(int)0,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(38)
	::phoenix::Color tmp9 = this->color;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(38)
	::phoenix::geometry::Vertex tmp10 = ::phoenix::geometry::Vertex_obj::__new(tmp8,tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(38)
	this->add(tmp10);
	HX_STACK_LINE(40)
	::phoenix::Vector tmp11 = ::phoenix::Vector_obj::__new(_w,_h,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(40)
	::phoenix::Color tmp12 = this->color;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(40)
	::phoenix::geometry::Vertex tmp13 = ::phoenix::geometry::Vertex_obj::__new(tmp11,tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(40)
	this->add(tmp13);
	HX_STACK_LINE(43)
	::phoenix::Vector tmp14 = ::phoenix::Vector_obj::__new(_w,_h,null(),null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(43)
	::phoenix::Color tmp15 = this->color;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(43)
	::phoenix::geometry::Vertex tmp16 = ::phoenix::geometry::Vertex_obj::__new(tmp14,tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(43)
	this->add(tmp16);
	HX_STACK_LINE(45)
	::phoenix::Vector tmp17 = ::phoenix::Vector_obj::__new((int)0,_h,null(),null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(45)
	::phoenix::Color tmp18 = this->color;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(45)
	::phoenix::geometry::Vertex tmp19 = ::phoenix::geometry::Vertex_obj::__new(tmp17,tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(45)
	this->add(tmp19);
	HX_STACK_LINE(48)
	::phoenix::Vector tmp20 = ::phoenix::Vector_obj::__new((int)0,_h,null(),null());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(48)
	::phoenix::Color tmp21 = this->color;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(48)
	::phoenix::geometry::Vertex tmp22 = ::phoenix::geometry::Vertex_obj::__new(tmp20,tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(48)
	this->add(tmp22);
	HX_STACK_LINE(50)
	::phoenix::Vector tmp23 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(50)
	::phoenix::Color tmp24 = this->color;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(50)
	::phoenix::geometry::Vertex tmp25 = ::phoenix::geometry::Vertex_obj::__new(tmp23,tmp24,null());		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(50)
	this->add(tmp25);
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		::phoenix::Vector tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			::phoenix::Transform tmp27 = this->transform;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(52)
			::phoenix::Vector tmp28 = tmp27->local->pos;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(52)
			::phoenix::Vector _this = tmp28;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(52)
			Float _x1 = _x;		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(52)
			Float _y1 = _y;		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(52)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(52)
			_this->ignore_listeners = true;
			HX_STACK_LINE(52)
			{
				HX_STACK_LINE(52)
				_this->x = _x1;
				HX_STACK_LINE(52)
				bool tmp29 = _this->_construct;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(52)
				if ((tmp29)){
					HX_STACK_LINE(52)
					_this->x;
				}
				else{
					HX_STACK_LINE(52)
					bool tmp30 = (_this->listen_x != null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(52)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(52)
					if ((tmp30)){
						HX_STACK_LINE(52)
						bool tmp32 = _this->ignore_listeners;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(52)
						bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(52)
						tmp31 = !(tmp33);
					}
					else{
						HX_STACK_LINE(52)
						tmp31 = false;
					}
					HX_STACK_LINE(52)
					if ((tmp31)){
						HX_STACK_LINE(52)
						Float tmp32 = _x1;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(52)
						_this->listen_x(tmp32);
					}
					HX_STACK_LINE(52)
					_this->x;
				}
			}
			HX_STACK_LINE(52)
			{
				HX_STACK_LINE(52)
				_this->y = _y1;
				HX_STACK_LINE(52)
				bool tmp29 = _this->_construct;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(52)
				if ((tmp29)){
					HX_STACK_LINE(52)
					_this->y;
				}
				else{
					HX_STACK_LINE(52)
					bool tmp30 = (_this->listen_y != null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(52)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(52)
					if ((tmp30)){
						HX_STACK_LINE(52)
						bool tmp32 = _this->ignore_listeners;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(52)
						bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(52)
						tmp31 = !(tmp33);
					}
					else{
						HX_STACK_LINE(52)
						tmp31 = false;
					}
					HX_STACK_LINE(52)
					if ((tmp31)){
						HX_STACK_LINE(52)
						Float tmp32 = _y1;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(52)
						_this->listen_y(tmp32);
					}
					HX_STACK_LINE(52)
					_this->y;
				}
			}
			HX_STACK_LINE(52)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(52)
			bool tmp29 = (_this->listen_x != null());		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(52)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(52)
			if ((tmp29)){
				HX_STACK_LINE(52)
				bool tmp31 = _this->ignore_listeners;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(52)
				bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(52)
				tmp30 = !(tmp32);
			}
			else{
				HX_STACK_LINE(52)
				tmp30 = false;
			}
			HX_STACK_LINE(52)
			if ((tmp30)){
				HX_STACK_LINE(52)
				Float tmp31 = _this->x;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(52)
				_this->listen_x(tmp31);
			}
			HX_STACK_LINE(52)
			bool tmp31 = (_this->listen_y != null());		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(52)
			bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(52)
			if ((tmp31)){
				HX_STACK_LINE(52)
				bool tmp33 = _this->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(52)
				bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(52)
				tmp32 = !(tmp34);
			}
			else{
				HX_STACK_LINE(52)
				tmp32 = false;
			}
			HX_STACK_LINE(52)
			if ((tmp32)){
				HX_STACK_LINE(52)
				Float tmp33 = _this->y;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(52)
				_this->listen_y(tmp33);
			}
			HX_STACK_LINE(52)
			tmp26 = _this;
		}
		HX_STACK_LINE(52)
		::phoenix::Vector value = tmp26;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			::phoenix::Transform tmp27 = this->transform;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(52)
			::phoenix::Spatial _this = tmp27->local;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(52)
			_this->pos = value;
			HX_STACK_LINE(52)
			bool tmp28 = (value != null());		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(52)
			if ((tmp28)){
				HX_STACK_LINE(52)
				::phoenix::Vector tmp29 = _this->pos;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(52)
				Dynamic tmp30 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(52)
				::phoenix::Vector_obj::Listen(tmp29,tmp30);
				HX_STACK_LINE(52)
				{
					HX_STACK_LINE(52)
					bool tmp31 = (_this->pos_changed != null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(52)
					bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(52)
					if ((tmp31)){
						HX_STACK_LINE(52)
						bool tmp33 = _this->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(52)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(52)
						tmp32 = !(tmp34);
					}
					else{
						HX_STACK_LINE(52)
						tmp32 = false;
					}
					HX_STACK_LINE(52)
					if ((tmp32)){
						HX_STACK_LINE(52)
						::phoenix::Vector tmp33 = _this->pos;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(52)
						_this->pos_changed(tmp33);
					}
				}
			}
			HX_STACK_LINE(52)
			_this->pos;
		}
	}
}
;
	return null();
}

//RectangleGeometry_obj::~RectangleGeometry_obj() { }

Dynamic RectangleGeometry_obj::__CreateEmpty() { return  new RectangleGeometry_obj; }
hx::ObjectPtr< RectangleGeometry_obj > RectangleGeometry_obj::__new(Dynamic _options)
{  hx::ObjectPtr< RectangleGeometry_obj > _result_ = new RectangleGeometry_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic RectangleGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RectangleGeometry_obj > _result_ = new RectangleGeometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void RectangleGeometry_obj::set_xywh( Float _x,Float _y,Float _w,Float _h){
{
		HX_STACK_FRAME("phoenix.geometry.RectangleGeometry","set_xywh",0x202d0459,"phoenix.geometry.RectangleGeometry.set_xywh","phoenix/geometry/RectangleGeometry.hx",57,0x605d1b7a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(59)
		int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		if ((tmp1)){
			HX_STACK_LINE(59)
			return null();
		}
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(61)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(61)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(61)
			_this->ignore_listeners = true;
			HX_STACK_LINE(61)
			{
				HX_STACK_LINE(61)
				_this->x = (int)0;
				HX_STACK_LINE(61)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(61)
				if ((tmp3)){
					HX_STACK_LINE(61)
					_this->x;
				}
				else{
					HX_STACK_LINE(61)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(61)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(61)
					if ((tmp4)){
						HX_STACK_LINE(61)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(61)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(61)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(61)
						tmp5 = false;
					}
					HX_STACK_LINE(61)
					if ((tmp5)){
						HX_STACK_LINE(61)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(61)
					_this->x;
				}
			}
			HX_STACK_LINE(61)
			{
				HX_STACK_LINE(61)
				_this->y = (int)0;
				HX_STACK_LINE(61)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(61)
				if ((tmp3)){
					HX_STACK_LINE(61)
					_this->y;
				}
				else{
					HX_STACK_LINE(61)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(61)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(61)
					if ((tmp4)){
						HX_STACK_LINE(61)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(61)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(61)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(61)
						tmp5 = false;
					}
					HX_STACK_LINE(61)
					if ((tmp5)){
						HX_STACK_LINE(61)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(61)
					_this->y;
				}
			}
			HX_STACK_LINE(61)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(61)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(61)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			if ((tmp3)){
				HX_STACK_LINE(61)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(61)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(61)
				tmp4 = false;
			}
			HX_STACK_LINE(61)
			if ((tmp4)){
				HX_STACK_LINE(61)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(61)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			if ((tmp5)){
				HX_STACK_LINE(61)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(61)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(61)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(61)
				tmp6 = false;
			}
			HX_STACK_LINE(61)
			if ((tmp6)){
				HX_STACK_LINE(61)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(61)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(61)
			_this;
		}
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(63)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(63)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(63)
			_this->ignore_listeners = true;
			HX_STACK_LINE(63)
			{
				HX_STACK_LINE(63)
				_this->x = _w;
				HX_STACK_LINE(63)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(63)
				if ((tmp3)){
					HX_STACK_LINE(63)
					_this->x;
				}
				else{
					HX_STACK_LINE(63)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(63)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(63)
					if ((tmp4)){
						HX_STACK_LINE(63)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(63)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(63)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(63)
						tmp5 = false;
					}
					HX_STACK_LINE(63)
					if ((tmp5)){
						HX_STACK_LINE(63)
						Float tmp6 = _w;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(63)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(63)
					_this->x;
				}
			}
			HX_STACK_LINE(63)
			{
				HX_STACK_LINE(63)
				_this->y = (int)0;
				HX_STACK_LINE(63)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(63)
				if ((tmp3)){
					HX_STACK_LINE(63)
					_this->y;
				}
				else{
					HX_STACK_LINE(63)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(63)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(63)
					if ((tmp4)){
						HX_STACK_LINE(63)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(63)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(63)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(63)
						tmp5 = false;
					}
					HX_STACK_LINE(63)
					if ((tmp5)){
						HX_STACK_LINE(63)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(63)
					_this->y;
				}
			}
			HX_STACK_LINE(63)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(63)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(63)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(63)
			if ((tmp3)){
				HX_STACK_LINE(63)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(63)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(63)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(63)
				tmp4 = false;
			}
			HX_STACK_LINE(63)
			if ((tmp4)){
				HX_STACK_LINE(63)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(63)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(63)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(63)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(63)
			if ((tmp5)){
				HX_STACK_LINE(63)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(63)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(63)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(63)
				tmp6 = false;
			}
			HX_STACK_LINE(63)
			if ((tmp6)){
				HX_STACK_LINE(63)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(63)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(63)
			_this;
		}
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(66)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(66)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(66)
			_this->ignore_listeners = true;
			HX_STACK_LINE(66)
			{
				HX_STACK_LINE(66)
				_this->x = _w;
				HX_STACK_LINE(66)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(66)
				if ((tmp3)){
					HX_STACK_LINE(66)
					_this->x;
				}
				else{
					HX_STACK_LINE(66)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(66)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(66)
					if ((tmp4)){
						HX_STACK_LINE(66)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(66)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(66)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(66)
						tmp5 = false;
					}
					HX_STACK_LINE(66)
					if ((tmp5)){
						HX_STACK_LINE(66)
						Float tmp6 = _w;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(66)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(66)
					_this->x;
				}
			}
			HX_STACK_LINE(66)
			{
				HX_STACK_LINE(66)
				_this->y = (int)0;
				HX_STACK_LINE(66)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(66)
				if ((tmp3)){
					HX_STACK_LINE(66)
					_this->y;
				}
				else{
					HX_STACK_LINE(66)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(66)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(66)
					if ((tmp4)){
						HX_STACK_LINE(66)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(66)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(66)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(66)
						tmp5 = false;
					}
					HX_STACK_LINE(66)
					if ((tmp5)){
						HX_STACK_LINE(66)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(66)
					_this->y;
				}
			}
			HX_STACK_LINE(66)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(66)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			if ((tmp3)){
				HX_STACK_LINE(66)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(66)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(66)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(66)
				tmp4 = false;
			}
			HX_STACK_LINE(66)
			if ((tmp4)){
				HX_STACK_LINE(66)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(66)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(66)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(66)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(66)
			if ((tmp5)){
				HX_STACK_LINE(66)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(66)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(66)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(66)
				tmp6 = false;
			}
			HX_STACK_LINE(66)
			if ((tmp6)){
				HX_STACK_LINE(66)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(66)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(66)
			_this;
		}
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(68)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(68)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(68)
			_this->ignore_listeners = true;
			HX_STACK_LINE(68)
			{
				HX_STACK_LINE(68)
				_this->x = _w;
				HX_STACK_LINE(68)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(68)
				if ((tmp3)){
					HX_STACK_LINE(68)
					_this->x;
				}
				else{
					HX_STACK_LINE(68)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(68)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(68)
					if ((tmp4)){
						HX_STACK_LINE(68)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(68)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(68)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(68)
						tmp5 = false;
					}
					HX_STACK_LINE(68)
					if ((tmp5)){
						HX_STACK_LINE(68)
						Float tmp6 = _w;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(68)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(68)
					_this->x;
				}
			}
			HX_STACK_LINE(68)
			{
				HX_STACK_LINE(68)
				_this->y = _h;
				HX_STACK_LINE(68)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(68)
				if ((tmp3)){
					HX_STACK_LINE(68)
					_this->y;
				}
				else{
					HX_STACK_LINE(68)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(68)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(68)
					if ((tmp4)){
						HX_STACK_LINE(68)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(68)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(68)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(68)
						tmp5 = false;
					}
					HX_STACK_LINE(68)
					if ((tmp5)){
						HX_STACK_LINE(68)
						Float tmp6 = _h;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(68)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(68)
					_this->y;
				}
			}
			HX_STACK_LINE(68)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(68)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(68)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(68)
			if ((tmp3)){
				HX_STACK_LINE(68)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(68)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(68)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(68)
				tmp4 = false;
			}
			HX_STACK_LINE(68)
			if ((tmp4)){
				HX_STACK_LINE(68)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(68)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(68)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(68)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(68)
			if ((tmp5)){
				HX_STACK_LINE(68)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(68)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(68)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(68)
				tmp6 = false;
			}
			HX_STACK_LINE(68)
			if ((tmp6)){
				HX_STACK_LINE(68)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(68)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(68)
			_this;
		}
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(71)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(71)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(71)
			_this->ignore_listeners = true;
			HX_STACK_LINE(71)
			{
				HX_STACK_LINE(71)
				_this->x = _w;
				HX_STACK_LINE(71)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(71)
				if ((tmp3)){
					HX_STACK_LINE(71)
					_this->x;
				}
				else{
					HX_STACK_LINE(71)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(71)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(71)
					if ((tmp4)){
						HX_STACK_LINE(71)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(71)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(71)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(71)
						tmp5 = false;
					}
					HX_STACK_LINE(71)
					if ((tmp5)){
						HX_STACK_LINE(71)
						Float tmp6 = _w;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(71)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(71)
					_this->x;
				}
			}
			HX_STACK_LINE(71)
			{
				HX_STACK_LINE(71)
				_this->y = _h;
				HX_STACK_LINE(71)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(71)
				if ((tmp3)){
					HX_STACK_LINE(71)
					_this->y;
				}
				else{
					HX_STACK_LINE(71)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(71)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(71)
					if ((tmp4)){
						HX_STACK_LINE(71)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(71)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(71)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(71)
						tmp5 = false;
					}
					HX_STACK_LINE(71)
					if ((tmp5)){
						HX_STACK_LINE(71)
						Float tmp6 = _h;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(71)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(71)
					_this->y;
				}
			}
			HX_STACK_LINE(71)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(71)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(71)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(71)
			if ((tmp3)){
				HX_STACK_LINE(71)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(71)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(71)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(71)
				tmp4 = false;
			}
			HX_STACK_LINE(71)
			if ((tmp4)){
				HX_STACK_LINE(71)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(71)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(71)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(71)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(71)
			if ((tmp5)){
				HX_STACK_LINE(71)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(71)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(71)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(71)
				tmp6 = false;
			}
			HX_STACK_LINE(71)
			if ((tmp6)){
				HX_STACK_LINE(71)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(71)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(71)
			_this;
		}
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(73)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(73)
			_this->ignore_listeners = true;
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				_this->x = (int)0;
				HX_STACK_LINE(73)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(73)
				if ((tmp3)){
					HX_STACK_LINE(73)
					_this->x;
				}
				else{
					HX_STACK_LINE(73)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(73)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(73)
					if ((tmp4)){
						HX_STACK_LINE(73)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(73)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(73)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(73)
						tmp5 = false;
					}
					HX_STACK_LINE(73)
					if ((tmp5)){
						HX_STACK_LINE(73)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(73)
					_this->x;
				}
			}
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				_this->y = _h;
				HX_STACK_LINE(73)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(73)
				if ((tmp3)){
					HX_STACK_LINE(73)
					_this->y;
				}
				else{
					HX_STACK_LINE(73)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(73)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(73)
					if ((tmp4)){
						HX_STACK_LINE(73)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(73)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(73)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(73)
						tmp5 = false;
					}
					HX_STACK_LINE(73)
					if ((tmp5)){
						HX_STACK_LINE(73)
						Float tmp6 = _h;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(73)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(73)
					_this->y;
				}
			}
			HX_STACK_LINE(73)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(73)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(73)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			if ((tmp3)){
				HX_STACK_LINE(73)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(73)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(73)
				tmp4 = false;
			}
			HX_STACK_LINE(73)
			if ((tmp4)){
				HX_STACK_LINE(73)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(73)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(73)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(73)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(73)
			if ((tmp5)){
				HX_STACK_LINE(73)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(73)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(73)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(73)
				tmp6 = false;
			}
			HX_STACK_LINE(73)
			if ((tmp6)){
				HX_STACK_LINE(73)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(73)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(73)
			_this;
		}
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)6).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(76)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(76)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(76)
			_this->ignore_listeners = true;
			HX_STACK_LINE(76)
			{
				HX_STACK_LINE(76)
				_this->x = (int)0;
				HX_STACK_LINE(76)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(76)
				if ((tmp3)){
					HX_STACK_LINE(76)
					_this->x;
				}
				else{
					HX_STACK_LINE(76)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(76)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(76)
					if ((tmp4)){
						HX_STACK_LINE(76)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(76)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(76)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(76)
						tmp5 = false;
					}
					HX_STACK_LINE(76)
					if ((tmp5)){
						HX_STACK_LINE(76)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(76)
					_this->x;
				}
			}
			HX_STACK_LINE(76)
			{
				HX_STACK_LINE(76)
				_this->y = _h;
				HX_STACK_LINE(76)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(76)
				if ((tmp3)){
					HX_STACK_LINE(76)
					_this->y;
				}
				else{
					HX_STACK_LINE(76)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(76)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(76)
					if ((tmp4)){
						HX_STACK_LINE(76)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(76)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(76)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(76)
						tmp5 = false;
					}
					HX_STACK_LINE(76)
					if ((tmp5)){
						HX_STACK_LINE(76)
						Float tmp6 = _h;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(76)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(76)
					_this->y;
				}
			}
			HX_STACK_LINE(76)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(76)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(76)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(76)
			if ((tmp3)){
				HX_STACK_LINE(76)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(76)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(76)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(76)
				tmp4 = false;
			}
			HX_STACK_LINE(76)
			if ((tmp4)){
				HX_STACK_LINE(76)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(76)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(76)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(76)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(76)
			if ((tmp5)){
				HX_STACK_LINE(76)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(76)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(76)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(76)
				tmp6 = false;
			}
			HX_STACK_LINE(76)
			if ((tmp6)){
				HX_STACK_LINE(76)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(76)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(76)
			_this;
		}
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)7).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(78)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(78)
			_this->ignore_listeners = true;
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				_this->x = (int)0;
				HX_STACK_LINE(78)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(78)
				if ((tmp3)){
					HX_STACK_LINE(78)
					_this->x;
				}
				else{
					HX_STACK_LINE(78)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(78)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(78)
					if ((tmp4)){
						HX_STACK_LINE(78)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(78)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(78)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(78)
						tmp5 = false;
					}
					HX_STACK_LINE(78)
					if ((tmp5)){
						HX_STACK_LINE(78)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(78)
					_this->x;
				}
			}
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				_this->y = (int)0;
				HX_STACK_LINE(78)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(78)
				if ((tmp3)){
					HX_STACK_LINE(78)
					_this->y;
				}
				else{
					HX_STACK_LINE(78)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(78)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(78)
					if ((tmp4)){
						HX_STACK_LINE(78)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(78)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(78)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(78)
						tmp5 = false;
					}
					HX_STACK_LINE(78)
					if ((tmp5)){
						HX_STACK_LINE(78)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(78)
					_this->y;
				}
			}
			HX_STACK_LINE(78)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(78)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(78)
			if ((tmp3)){
				HX_STACK_LINE(78)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(78)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(78)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(78)
				tmp4 = false;
			}
			HX_STACK_LINE(78)
			if ((tmp4)){
				HX_STACK_LINE(78)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(78)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(78)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(78)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(78)
			if ((tmp5)){
				HX_STACK_LINE(78)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(78)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(78)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(78)
				tmp6 = false;
			}
			HX_STACK_LINE(78)
			if ((tmp6)){
				HX_STACK_LINE(78)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(78)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(78)
			_this;
		}
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			::phoenix::Vector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(81)
			{
				HX_STACK_LINE(81)
				::phoenix::Transform tmp3 = this->transform;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(81)
				::phoenix::Vector tmp4 = tmp3->local->pos;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(81)
				::phoenix::Vector _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(81)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(81)
				_this->ignore_listeners = true;
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					_this->x = _x;
					HX_STACK_LINE(81)
					bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(81)
					if ((tmp5)){
						HX_STACK_LINE(81)
						_this->x;
					}
					else{
						HX_STACK_LINE(81)
						bool tmp6 = (_this->listen_x != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(81)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(81)
						if ((tmp6)){
							HX_STACK_LINE(81)
							bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(81)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(81)
							tmp7 = !(tmp9);
						}
						else{
							HX_STACK_LINE(81)
							tmp7 = false;
						}
						HX_STACK_LINE(81)
						if ((tmp7)){
							HX_STACK_LINE(81)
							Float tmp8 = _x;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(81)
							_this->listen_x(tmp8);
						}
						HX_STACK_LINE(81)
						_this->x;
					}
				}
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					_this->y = _y;
					HX_STACK_LINE(81)
					bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(81)
					if ((tmp5)){
						HX_STACK_LINE(81)
						_this->y;
					}
					else{
						HX_STACK_LINE(81)
						bool tmp6 = (_this->listen_y != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(81)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(81)
						if ((tmp6)){
							HX_STACK_LINE(81)
							bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(81)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(81)
							tmp7 = !(tmp9);
						}
						else{
							HX_STACK_LINE(81)
							tmp7 = false;
						}
						HX_STACK_LINE(81)
						if ((tmp7)){
							HX_STACK_LINE(81)
							Float tmp8 = _y;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(81)
							_this->listen_y(tmp8);
						}
						HX_STACK_LINE(81)
						_this->y;
					}
				}
				HX_STACK_LINE(81)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(81)
				bool tmp5 = (_this->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(81)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(81)
				if ((tmp5)){
					HX_STACK_LINE(81)
					bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(81)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(81)
					tmp6 = !(tmp8);
				}
				else{
					HX_STACK_LINE(81)
					tmp6 = false;
				}
				HX_STACK_LINE(81)
				if ((tmp6)){
					HX_STACK_LINE(81)
					Float tmp7 = _this->x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(81)
					_this->listen_x(tmp7);
				}
				HX_STACK_LINE(81)
				bool tmp7 = (_this->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(81)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(81)
				if ((tmp7)){
					HX_STACK_LINE(81)
					bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(81)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(81)
					tmp8 = !(tmp10);
				}
				else{
					HX_STACK_LINE(81)
					tmp8 = false;
				}
				HX_STACK_LINE(81)
				if ((tmp8)){
					HX_STACK_LINE(81)
					Float tmp9 = _this->y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(81)
					_this->listen_y(tmp9);
				}
				HX_STACK_LINE(81)
				tmp2 = _this;
			}
			HX_STACK_LINE(81)
			::phoenix::Vector value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(81)
			{
				HX_STACK_LINE(81)
				::phoenix::Transform tmp3 = this->transform;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(81)
				::phoenix::Spatial _this = tmp3->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(81)
				_this->pos = value;
				HX_STACK_LINE(81)
				bool tmp4 = (value != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(81)
				if ((tmp4)){
					HX_STACK_LINE(81)
					::phoenix::Vector tmp5 = _this->pos;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(81)
					Dynamic tmp6 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(81)
					::phoenix::Vector_obj::Listen(tmp5,tmp6);
					HX_STACK_LINE(81)
					{
						HX_STACK_LINE(81)
						bool tmp7 = (_this->pos_changed != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(81)
						bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(81)
						if ((tmp7)){
							HX_STACK_LINE(81)
							bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(81)
							bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(81)
							tmp8 = !(tmp10);
						}
						else{
							HX_STACK_LINE(81)
							tmp8 = false;
						}
						HX_STACK_LINE(81)
						if ((tmp8)){
							HX_STACK_LINE(81)
							::phoenix::Vector tmp9 = _this->pos;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(81)
							_this->pos_changed(tmp9);
						}
					}
				}
				HX_STACK_LINE(81)
				_this->pos;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(RectangleGeometry_obj,set_xywh,(void))

Void RectangleGeometry_obj::set( ::phoenix::Rectangle _rect){
{
		HX_STACK_FRAME("phoenix.geometry.RectangleGeometry","set",0x0899fbd8,"phoenix.geometry.RectangleGeometry.set","phoenix/geometry/RectangleGeometry.hx",86,0x605d1b7a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rect,"_rect")
		HX_STACK_LINE(88)
		Float tmp = _rect->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		Float tmp1 = _rect->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		Float tmp2 = _rect->w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		Float tmp3 = _rect->h;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(88)
		this->set_xywh(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RectangleGeometry_obj,set,(void))


RectangleGeometry_obj::RectangleGeometry_obj()
{
}

Dynamic RectangleGeometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_xywh") ) { return set_xywh_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("set_xywh","\x4f","\xe8","\xc5","\x7d"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RectangleGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RectangleGeometry_obj::__mClass,"__mClass");
};

#endif

hx::Class RectangleGeometry_obj::__mClass;

void RectangleGeometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.RectangleGeometry","\xa4","\xed","\xa8","\x10");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RectangleGeometry_obj >;
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
