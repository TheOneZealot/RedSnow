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
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RingGeometry
#include <phoenix/geometry/RingGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
namespace phoenix{
namespace geometry{

Void RingGeometry_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.geometry.RingGeometry","new",0x25deca31,"phoenix.geometry.RingGeometry.new","phoenix/geometry/RingGeometry.hx",13,0x0d3aaa7f)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(15)
	_options->__FieldRef(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88")) = (int)1;
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

//RingGeometry_obj::~RingGeometry_obj() { }

Dynamic RingGeometry_obj::__CreateEmpty() { return  new RingGeometry_obj; }
hx::ObjectPtr< RingGeometry_obj > RingGeometry_obj::__new(Dynamic _options)
{  hx::ObjectPtr< RingGeometry_obj > _result_ = new RingGeometry_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic RingGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RingGeometry_obj > _result_ = new RingGeometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void RingGeometry_obj::set( Float _x,Float _y,Float _rx,Float _ry,int _steps,hx::Null< Float >  __o__start_angle_degrees,hx::Null< Float >  __o__end_angle_degrees){
Float _start_angle_degrees = __o__start_angle_degrees.Default(0);
Float _end_angle_degrees = __o__end_angle_degrees.Default(360);
	HX_STACK_FRAME("phoenix.geometry.RingGeometry","set",0x25e29573,"phoenix.geometry.RingGeometry.set","phoenix/geometry/RingGeometry.hx",55,0x0d3aaa7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_rx,"_rx")
	HX_STACK_ARG(_ry,"_ry")
	HX_STACK_ARG(_steps,"_steps")
	HX_STACK_ARG(_start_angle_degrees,"_start_angle_degrees")
	HX_STACK_ARG(_end_angle_degrees,"_end_angle_degrees")
{
		HX_STACK_LINE(60)
		Float tmp = (_start_angle_degrees * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		Float _start_angle_rad = tmp;		HX_STACK_VAR(_start_angle_rad,"_start_angle_rad");
		HX_STACK_LINE(61)
		Float tmp1 = (_end_angle_degrees * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		Float _end_angle_rad = tmp1;		HX_STACK_VAR(_end_angle_rad,"_end_angle_rad");
		HX_STACK_LINE(63)
		Float tmp2 = (_end_angle_rad - _start_angle_rad);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		Float _range = tmp2;		HX_STACK_VAR(_range,"_range");
		HX_STACK_LINE(66)
		Float tmp3 = (Float(_range) / Float(_steps));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		Float theta = tmp3;		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(68)
		Float tmp4 = theta;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(68)
		Float tmp5 = ::Math_obj::tan(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		Float tangential_factor = tmp5;		HX_STACK_VAR(tangential_factor,"tangential_factor");
		HX_STACK_LINE(69)
		Float tmp6 = theta;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(69)
		Float tmp7 = ::Math_obj::cos(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(69)
		Float radial_factor = tmp7;		HX_STACK_VAR(radial_factor,"radial_factor");
		HX_STACK_LINE(71)
		Float tmp8 = _rx;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(71)
		Float tmp9 = _start_angle_rad;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(71)
		Float tmp10 = ::Math_obj::cos(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(71)
		Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(71)
		Float x = tmp11;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(72)
		Float tmp12 = _rx;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(72)
		Float tmp13 = _start_angle_rad;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(72)
		Float tmp14 = ::Math_obj::sin(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(72)
		Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(72)
		Float y = tmp15;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(76)
		Float tmp16 = (Float(_rx) / Float(_ry));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(76)
		Float radial_ratio = tmp16;		HX_STACK_VAR(radial_ratio,"radial_ratio");
		HX_STACK_LINE(77)
		bool tmp17 = (radial_ratio == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(77)
		if ((tmp17)){
			HX_STACK_LINE(77)
			radial_ratio = ((Float)0.000000001);
		}
		HX_STACK_LINE(79)
		int _index = (int)0;		HX_STACK_VAR(_index,"_index");
		HX_STACK_LINE(80)
		Array< ::Dynamic > _segment_pos = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_segment_pos,"_segment_pos");
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(81)
			while((true)){
				HX_STACK_LINE(81)
				bool tmp18 = (_g < _steps);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(81)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(81)
				if ((tmp19)){
					HX_STACK_LINE(81)
					break;
				}
				HX_STACK_LINE(81)
				int tmp20 = (_g)++;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(81)
				int i = tmp20;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(83)
				Float __x = x;		HX_STACK_VAR(__x,"__x");
				HX_STACK_LINE(84)
				Float tmp21 = (Float(y) / Float(radial_ratio));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(84)
				Float __y = tmp21;		HX_STACK_VAR(__y,"__y");
				HX_STACK_LINE(87)
				::phoenix::Vector tmp22 = ::phoenix::Vector_obj::__new(__x,__y,null(),null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(87)
				::phoenix::Vector _seg = tmp22;		HX_STACK_VAR(_seg,"_seg");
				HX_STACK_LINE(89)
				::phoenix::Vector tmp23 = _seg;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(89)
				_segment_pos->push(tmp23);
				HX_STACK_LINE(92)
				::phoenix::Vector tmp24 = _seg;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(92)
				::phoenix::Color tmp25 = this->color;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(92)
				::phoenix::geometry::Vertex tmp26 = ::phoenix::geometry::Vertex_obj::__new(tmp24,tmp25,null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(92)
				this->add(tmp26);
				HX_STACK_LINE(95)
				bool tmp27 = (_index > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(95)
				if ((tmp27)){
					HX_STACK_LINE(96)
					::phoenix::Vector tmp28 = _segment_pos->__get(_index).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(96)
					::phoenix::Vector prevvert = tmp28;		HX_STACK_VAR(prevvert,"prevvert");
					HX_STACK_LINE(97)
					::phoenix::Vector tmp29 = ::phoenix::Vector_obj::__new(prevvert->x,prevvert->y,prevvert->z,prevvert->w);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(97)
					::phoenix::Color tmp30 = this->color;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(97)
					::phoenix::geometry::Vertex tmp31 = ::phoenix::geometry::Vertex_obj::__new(tmp29,tmp30,null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(97)
					this->add(tmp31);
				}
				HX_STACK_LINE(100)
				Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(100)
				Float tmp29 = -(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(100)
				Float tx = tmp29;		HX_STACK_VAR(tx,"tx");
				HX_STACK_LINE(101)
				Float ty = x;		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(103)
				Float tmp30 = (tx * tangential_factor);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(103)
				hx::AddEq(x,tmp30);
				HX_STACK_LINE(104)
				Float tmp31 = (ty * tangential_factor);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(104)
				hx::AddEq(y,tmp31);
				HX_STACK_LINE(106)
				hx::MultEq(x,radial_factor);
				HX_STACK_LINE(107)
				hx::MultEq(y,radial_factor);
				HX_STACK_LINE(109)
				(_index)++;
			}
		}
		HX_STACK_LINE(114)
		bool tmp18 = (_segment_pos->length > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(114)
		if ((tmp18)){
			HX_STACK_LINE(115)
			::phoenix::Vector tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(115)
			{
				HX_STACK_LINE(115)
				::phoenix::Vector tmp20 = _segment_pos->__get((int)0).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(115)
				::phoenix::Vector _this = tmp20;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(115)
				tmp19 = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
			}
			HX_STACK_LINE(115)
			::phoenix::Color tmp20 = this->color;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(115)
			::phoenix::geometry::Vertex tmp21 = ::phoenix::geometry::Vertex_obj::__new(tmp19,tmp20,null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(115)
			this->add(tmp21);
		}
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			::phoenix::Vector tmp19 = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(119)
			::phoenix::Vector value = tmp19;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(119)
			{
				HX_STACK_LINE(119)
				::phoenix::Transform tmp20 = this->transform;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(119)
				::phoenix::Spatial _this = tmp20->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(119)
				_this->pos = value;
				HX_STACK_LINE(119)
				bool tmp21 = (value != null());		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(119)
				if ((tmp21)){
					HX_STACK_LINE(119)
					::phoenix::Vector tmp22 = _this->pos;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(119)
					Dynamic tmp23 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(119)
					::phoenix::Vector_obj::Listen(tmp22,tmp23);
					HX_STACK_LINE(119)
					{
						HX_STACK_LINE(119)
						bool tmp24 = (_this->pos_changed != null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(119)
						bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(119)
						if ((tmp24)){
							HX_STACK_LINE(119)
							bool tmp26 = _this->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(119)
							bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(119)
							tmp25 = !(tmp27);
						}
						else{
							HX_STACK_LINE(119)
							tmp25 = false;
						}
						HX_STACK_LINE(119)
						if ((tmp25)){
							HX_STACK_LINE(119)
							::phoenix::Vector tmp26 = _this->pos;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(119)
							_this->pos_changed(tmp26);
						}
					}
				}
				HX_STACK_LINE(119)
				_this->pos;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(RingGeometry_obj,set,(void))


RingGeometry_obj::RingGeometry_obj()
{
}

Dynamic RingGeometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(RingGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RingGeometry_obj::__mClass,"__mClass");
};

#endif

hx::Class RingGeometry_obj::__mClass;

void RingGeometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.RingGeometry","\xbf","\xdd","\xe7","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RingGeometry_obj >;
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
