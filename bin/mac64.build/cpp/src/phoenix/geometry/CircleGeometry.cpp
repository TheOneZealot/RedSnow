#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_utils_GeometryUtils
#include <luxe/utils/GeometryUtils.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
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
#ifndef INCLUDED_phoenix_geometry_CircleGeometry
#include <phoenix/geometry/CircleGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
namespace phoenix{
namespace geometry{

Void CircleGeometry_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.geometry.CircleGeometry","new",0x661195d1,"phoenix.geometry.CircleGeometry.new","phoenix/geometry/CircleGeometry.hx",13,0x20b87adf)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(15)
	_options->__FieldRef(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88")) = (int)4;
	HX_STACK_LINE(17)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	super::__construct(tmp);
	HX_STACK_LINE(20)
	Float _radius_x = ((Float)32.0);		HX_STACK_VAR(_radius_x,"_radius_x");
	HX_STACK_LINE(21)
	Float _radius_y = ((Float)32.0);		HX_STACK_VAR(_radius_y,"_radius_y");
	HX_STACK_LINE(23)
	{
		HX_STACK_LINE(23)
		bool tmp1 = (_options->__Field(HX_HCSTRING("end_angle","\x2f","\x65","\x17","\x2a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		if ((tmp1)){
			HX_STACK_LINE(23)
			_options->__FieldRef(HX_HCSTRING("end_angle","\x2f","\x65","\x17","\x2a")) = (int)360;
		}
		HX_STACK_LINE(23)
		_options->__Field(HX_HCSTRING("end_angle","\x2f","\x65","\x17","\x2a"), hx::paccDynamic );
	}
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		bool tmp1 = (_options->__Field(HX_HCSTRING("start_angle","\xf6","\x74","\x1b","\x62"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		if ((tmp1)){
			HX_STACK_LINE(24)
			_options->__FieldRef(HX_HCSTRING("start_angle","\xf6","\x74","\x1b","\x62")) = (int)0;
		}
		HX_STACK_LINE(24)
		_options->__Field(HX_HCSTRING("start_angle","\xf6","\x74","\x1b","\x62"), hx::paccDynamic );
	}
	HX_STACK_LINE(26)
	bool tmp1 = (_options->__Field(HX_HCSTRING("r","\x72","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	if ((tmp1)){
		HX_STACK_LINE(27)
		_radius_x = _options->__Field(HX_HCSTRING("r","\x72","\x00","\x00","\x00"), hx::paccDynamic );
		HX_STACK_LINE(28)
		_radius_y = _options->__Field(HX_HCSTRING("r","\x72","\x00","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(31)
	bool tmp2 = (_options->__Field(HX_HCSTRING("rx","\xc6","\x63","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	if ((tmp2)){
		HX_STACK_LINE(32)
		_radius_x = _options->__Field(HX_HCSTRING("rx","\xc6","\x63","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(35)
	bool tmp3 = (_options->__Field(HX_HCSTRING("ry","\xc7","\x63","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	if ((tmp3)){
		HX_STACK_LINE(36)
		_radius_y = _options->__Field(HX_HCSTRING("ry","\xc7","\x63","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(39)
	bool tmp4 = (_options->__Field(HX_HCSTRING("steps","\xa7","\x7b","\x0e","\x84"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(39)
	if ((tmp4)){
		HX_STACK_LINE(40)
		bool tmp5 = (_options->__Field(HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		if ((tmp5)){
			HX_STACK_LINE(41)
			Float tmp6 = _radius_x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(41)
			Float tmp7 = _radius_y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(41)
			Float tmp8 = ::Math_obj::max(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(41)
			Float _max = tmp8;		HX_STACK_VAR(_max,"_max");
			HX_STACK_LINE(42)
			::luxe::utils::Utils tmp9 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(42)
			Float tmp10 = _max;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(42)
			int tmp11 = tmp9->geometry->segments_for_smooth_circle(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(42)
			_options->__FieldRef(HX_HCSTRING("steps","\xa7","\x7b","\x0e","\x84")) = tmp11;
		}
		else{
			HX_STACK_LINE(44)
			Dynamic _smooth = _options->__Field(HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"), hx::paccDynamic );		HX_STACK_VAR(_smooth,"_smooth");
			HX_STACK_LINE(45)
			Float tmp6 = _radius_x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(45)
			Float tmp7 = _radius_y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(45)
			Float tmp8 = ::Math_obj::max(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(45)
			Float _max = tmp8;		HX_STACK_VAR(_max,"_max");
			HX_STACK_LINE(46)
			::luxe::utils::Utils tmp9 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(46)
			Float tmp10 = _max;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(46)
			Dynamic tmp11 = _smooth;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(46)
			int tmp12 = tmp9->geometry->segments_for_smooth_circle(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(46)
			_options->__FieldRef(HX_HCSTRING("steps","\xa7","\x7b","\x0e","\x84")) = tmp12;
		}
	}
	HX_STACK_LINE(51)
	Dynamic tmp5 = _options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(51)
	Dynamic tmp6 = _options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(51)
	Float tmp7 = _radius_x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(51)
	Float tmp8 = _radius_y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(51)
	Dynamic tmp9 = _options->__Field(HX_HCSTRING("steps","\xa7","\x7b","\x0e","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(51)
	Dynamic tmp10 = _options->__Field(HX_HCSTRING("start_angle","\xf6","\x74","\x1b","\x62"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(51)
	Dynamic tmp11 = _options->__Field(HX_HCSTRING("end_angle","\x2f","\x65","\x17","\x2a"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(51)
	this->set(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);
}
;
	return null();
}

//CircleGeometry_obj::~CircleGeometry_obj() { }

Dynamic CircleGeometry_obj::__CreateEmpty() { return  new CircleGeometry_obj; }
hx::ObjectPtr< CircleGeometry_obj > CircleGeometry_obj::__new(Dynamic _options)
{  hx::ObjectPtr< CircleGeometry_obj > _result_ = new CircleGeometry_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic CircleGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CircleGeometry_obj > _result_ = new CircleGeometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void CircleGeometry_obj::set( Float _x,Float _y,Float _rx,Float _ry,int _steps,hx::Null< Float >  __o__start_angle,hx::Null< Float >  __o__end_angle){
Float _start_angle = __o__start_angle.Default(0);
Float _end_angle = __o__end_angle.Default(360);
	HX_STACK_FRAME("phoenix.geometry.CircleGeometry","set",0x66156113,"phoenix.geometry.CircleGeometry.set","phoenix/geometry/CircleGeometry.hx",55,0x20b87adf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_rx,"_rx")
	HX_STACK_ARG(_ry,"_ry")
	HX_STACK_ARG(_steps,"_steps")
	HX_STACK_ARG(_start_angle,"_start_angle")
	HX_STACK_ARG(_end_angle,"_end_angle")
{
		HX_STACK_LINE(60)
		Float tmp = ::Math_obj::PI;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		Float half_pi = tmp1;		HX_STACK_VAR(half_pi,"half_pi");
		HX_STACK_LINE(61)
		Float tmp2 = (_start_angle * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		Float tmp3 = half_pi;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		Float _start_angle_rad = tmp4;		HX_STACK_VAR(_start_angle_rad,"_start_angle_rad");
		HX_STACK_LINE(62)
		Float tmp5 = (_end_angle * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(62)
		Float tmp6 = half_pi;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(62)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(62)
		Float _end_angle_rad = tmp7;		HX_STACK_VAR(_end_angle_rad,"_end_angle_rad");
		HX_STACK_LINE(64)
		Float tmp8 = (_end_angle_rad - _start_angle_rad);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(64)
		Float _range = tmp8;		HX_STACK_VAR(_range,"_range");
		HX_STACK_LINE(67)
		Float tmp9 = _range;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(67)
		Float tmp10 = ::Math_obj::abs(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(67)
		Float tmp11 = ::Math_obj::PI;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(67)
		Float tmp12 = (tmp11 * (int)2);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(67)
		Float tmp13 = (Float(tmp10) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(67)
		int tmp14 = _steps;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(67)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(67)
		int tmp16 = ::Math_obj::ceil(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(67)
		_steps = tmp16;
		HX_STACK_LINE(70)
		Float tmp17 = (Float(_range) / Float(_steps));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(70)
		Float theta = tmp17;		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(72)
		Float tmp18 = theta;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(72)
		Float tmp19 = ::Math_obj::tan(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(72)
		Float tangential_factor = tmp19;		HX_STACK_VAR(tangential_factor,"tangential_factor");
		HX_STACK_LINE(73)
		Float tmp20 = theta;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(73)
		Float tmp21 = ::Math_obj::cos(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(73)
		Float radial_factor = tmp21;		HX_STACK_VAR(radial_factor,"radial_factor");
		HX_STACK_LINE(75)
		Float tmp22 = _rx;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(75)
		Float tmp23 = _start_angle_rad;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(75)
		Float tmp24 = ::Math_obj::cos(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(75)
		Float tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(75)
		Float x = tmp25;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(76)
		Float tmp26 = _rx;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(76)
		Float tmp27 = _start_angle_rad;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(76)
		Float tmp28 = ::Math_obj::sin(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(76)
		Float tmp29 = (tmp26 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(76)
		Float y = tmp29;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(79)
		Float tmp30 = (Float(_rx) / Float(_ry));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(79)
		Float radial_ratio = tmp30;		HX_STACK_VAR(radial_ratio,"radial_ratio");
		HX_STACK_LINE(80)
		bool tmp31 = (radial_ratio == (int)0);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(80)
		if ((tmp31)){
			HX_STACK_LINE(81)
			radial_ratio = ((Float)0.000000001);
		}
		HX_STACK_LINE(84)
		int _index = (int)0;		HX_STACK_VAR(_index,"_index");
		HX_STACK_LINE(85)
		Array< ::Dynamic > _segment_pos = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_segment_pos,"_segment_pos");
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(86)
			int tmp32 = (_steps + (int)1);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(86)
			int _g = tmp32;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(86)
			while((true)){
				HX_STACK_LINE(86)
				bool tmp33 = (_g1 < _g);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(86)
				bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(86)
				if ((tmp34)){
					HX_STACK_LINE(86)
					break;
				}
				HX_STACK_LINE(86)
				int tmp35 = (_g1)++;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(86)
				int i = tmp35;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(88)
				Float __x = x;		HX_STACK_VAR(__x,"__x");
				HX_STACK_LINE(89)
				Float tmp36 = (Float(y) / Float(radial_ratio));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(89)
				Float __y = tmp36;		HX_STACK_VAR(__y,"__y");
				HX_STACK_LINE(92)
				::phoenix::Vector tmp37 = ::phoenix::Vector_obj::__new(__x,__y,null(),null());		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(92)
				::phoenix::Vector _seg = tmp37;		HX_STACK_VAR(_seg,"_seg");
				HX_STACK_LINE(94)
				::phoenix::Vector tmp38 = _seg;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(94)
				_segment_pos->push(tmp38);
				HX_STACK_LINE(97)
				bool tmp39 = (_index > (int)0);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(97)
				if ((tmp39)){
					HX_STACK_LINE(98)
					::phoenix::Vector tmp40 = _seg;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(98)
					::phoenix::Color tmp41 = this->color;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(98)
					::phoenix::geometry::Vertex tmp42 = ::phoenix::geometry::Vertex_obj::__new(tmp40,tmp41,null());		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(98)
					this->add(tmp42);
				}
				HX_STACK_LINE(102)
				::phoenix::Vector tmp40 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(102)
				::phoenix::Color tmp41 = this->color;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(102)
				::phoenix::geometry::Vertex tmp42 = ::phoenix::geometry::Vertex_obj::__new(tmp40,tmp41,null());		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(102)
				this->add(tmp42);
				HX_STACK_LINE(105)
				::phoenix::Vector tmp43 = _seg;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(105)
				::phoenix::Color tmp44 = this->color;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(105)
				::phoenix::geometry::Vertex tmp45 = ::phoenix::geometry::Vertex_obj::__new(tmp43,tmp44,null());		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(105)
				this->add(tmp45);
				HX_STACK_LINE(107)
				Float tmp46 = y;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(107)
				Float tmp47 = -(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(107)
				Float tx = tmp47;		HX_STACK_VAR(tx,"tx");
				HX_STACK_LINE(108)
				Float ty = x;		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(110)
				Float tmp48 = (tx * tangential_factor);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(110)
				hx::AddEq(x,tmp48);
				HX_STACK_LINE(111)
				Float tmp49 = (ty * tangential_factor);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(111)
				hx::AddEq(y,tmp49);
				HX_STACK_LINE(113)
				hx::MultEq(x,radial_factor);
				HX_STACK_LINE(114)
				hx::MultEq(y,radial_factor);
				HX_STACK_LINE(116)
				(_index)++;
			}
		}
		HX_STACK_LINE(120)
		::phoenix::Vector tmp32 = _segment_pos->__get(_steps).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(120)
		::phoenix::Color tmp33 = this->color;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(120)
		::phoenix::geometry::Vertex tmp34 = ::phoenix::geometry::Vertex_obj::__new(tmp32,tmp33,null());		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(120)
		this->add(tmp34);
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			::phoenix::Vector tmp35 = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(123)
			::phoenix::Vector value = tmp35;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				::phoenix::Transform tmp36 = this->transform;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(123)
				::phoenix::Spatial _this = tmp36->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(123)
				_this->pos = value;
				HX_STACK_LINE(123)
				bool tmp37 = (value != null());		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(123)
				if ((tmp37)){
					HX_STACK_LINE(123)
					::phoenix::Vector tmp38 = _this->pos;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(123)
					Dynamic tmp39 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(123)
					::phoenix::Vector_obj::Listen(tmp38,tmp39);
					HX_STACK_LINE(123)
					{
						HX_STACK_LINE(123)
						bool tmp40 = (_this->pos_changed != null());		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(123)
						bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(123)
						if ((tmp40)){
							HX_STACK_LINE(123)
							bool tmp42 = _this->ignore_listeners;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(123)
							bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(123)
							tmp41 = !(tmp43);
						}
						else{
							HX_STACK_LINE(123)
							tmp41 = false;
						}
						HX_STACK_LINE(123)
						if ((tmp41)){
							HX_STACK_LINE(123)
							::phoenix::Vector tmp42 = _this->pos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(123)
							_this->pos_changed(tmp42);
						}
					}
				}
				HX_STACK_LINE(123)
				_this->pos;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(CircleGeometry_obj,set,(void))


CircleGeometry_obj::CircleGeometry_obj()
{
}

Dynamic CircleGeometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CircleGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CircleGeometry_obj::__mClass,"__mClass");
};

#endif

hx::Class CircleGeometry_obj::__mClass;

void CircleGeometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.CircleGeometry","\x5f","\x59","\xa4","\xc8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CircleGeometry_obj >;
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
