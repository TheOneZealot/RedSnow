#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_utils_GeometryUtils
#include <luxe/utils/GeometryUtils.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
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
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
namespace luxe{
namespace utils{

Void GeometryUtils_obj::__construct()
{
HX_STACK_FRAME("luxe.utils.GeometryUtils","new",0xd5d0d83c,"luxe.utils.GeometryUtils.new","luxe/utils/GeometryUtils.hx",13,0x749c9d76)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	this->_v_cache = tmp;
}
;
	return null();
}

//GeometryUtils_obj::~GeometryUtils_obj() { }

Dynamic GeometryUtils_obj::__CreateEmpty() { return  new GeometryUtils_obj; }
hx::ObjectPtr< GeometryUtils_obj > GeometryUtils_obj::__new()
{  hx::ObjectPtr< GeometryUtils_obj > _result_ = new GeometryUtils_obj();
	_result_->__construct();
	return _result_;}

Dynamic GeometryUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GeometryUtils_obj > _result_ = new GeometryUtils_obj();
	_result_->__construct();
	return _result_;}

int GeometryUtils_obj::segments_for_smooth_circle( Float _radius,hx::Null< Float >  __o__smooth){
Float _smooth = __o__smooth.Default(5);
	HX_STACK_FRAME("luxe.utils.GeometryUtils","segments_for_smooth_circle",0xd8797010,"luxe.utils.GeometryUtils.segments_for_smooth_circle","luxe/utils/GeometryUtils.hx",17,0x749c9d76)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_radius,"_radius")
	HX_STACK_ARG(_smooth,"_smooth")
{
		HX_STACK_LINE(19)
		Float tmp = _smooth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(19)
		Float tmp1 = _radius;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		Float tmp2 = ::Math_obj::sqrt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(19)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(19)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(GeometryUtils_obj,segments_for_smooth_circle,return )

::phoenix::Vector GeometryUtils_obj::random_point_in_unit_circle( ){
	HX_STACK_FRAME("luxe.utils.GeometryUtils","random_point_in_unit_circle",0xf851d038,"luxe.utils.GeometryUtils.random_point_in_unit_circle","luxe/utils/GeometryUtils.hx",23,0x749c9d76)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	Float tmp1 = ::Math_obj::sqrt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	Float _r = tmp1;		HX_STACK_VAR(_r,"_r");
	HX_STACK_LINE(30)
	int tmp2 = (int)-1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	Float tmp3 = ::Math_obj::random();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	Float tmp4 = ((int)2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(30)
	Float tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(30)
	Float tmp6 = (tmp5 * ((Float)6.283185307179586));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(30)
	Float _t = tmp6;		HX_STACK_VAR(_t,"_t");
	HX_STACK_LINE(33)
	Float tmp7 = _r;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(33)
	Float tmp8 = _t;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(33)
	Float tmp9 = ::Math_obj::cos(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(33)
	Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(33)
	Float tmp11 = _r;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(33)
	Float tmp12 = _t;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(33)
	Float tmp13 = ::Math_obj::sin(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(33)
	Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(33)
	::phoenix::Vector tmp15 = ::phoenix::Vector_obj::__new(tmp10,tmp14,null(),null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(33)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC0(GeometryUtils_obj,random_point_in_unit_circle,return )

bool GeometryUtils_obj::point_in_polygon( ::phoenix::Vector _point,::phoenix::Vector _offset,Array< ::Dynamic > _verts){
	HX_STACK_FRAME("luxe.utils.GeometryUtils","point_in_polygon",0xc66ebe53,"luxe.utils.GeometryUtils.point_in_polygon","luxe/utils/GeometryUtils.hx",37,0x749c9d76)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_point,"_point")
	HX_STACK_ARG(_offset,"_offset")
	HX_STACK_ARG(_verts,"_verts")
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		bool tmp = (_offset == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		if ((tmp)){
			HX_STACK_LINE(39)
			::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(39)
			_offset = tmp1;
		}
		HX_STACK_LINE(39)
		_offset;
	}
	HX_STACK_LINE(41)
	bool c = false;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(42)
	int nvert = _verts->length;		HX_STACK_VAR(nvert,"nvert");
	HX_STACK_LINE(43)
	int tmp = (nvert - (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	int j = tmp;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		while((true)){
			HX_STACK_LINE(45)
			bool tmp1 = (_g < nvert);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(45)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(45)
			if ((tmp2)){
				HX_STACK_LINE(45)
				break;
			}
			HX_STACK_LINE(45)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(45)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(47)
			::phoenix::Vector tmp4 = _verts->__get(i).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(47)
			Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(47)
			Float tmp6 = _offset->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(47)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(47)
			Float tmp8 = _point->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(47)
			bool tmp9 = (tmp7 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(47)
			::phoenix::Vector tmp10 = _verts->__get(j).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(47)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(47)
			Float tmp12 = _offset->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(47)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(47)
			Float tmp14 = _point->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(47)
			bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(47)
			bool tmp16 = (tmp9 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(47)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(47)
			if ((tmp16)){
				HX_STACK_LINE(48)
				Float tmp18 = _point->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(48)
				::phoenix::Vector tmp19 = _verts->__get(j).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(48)
				::phoenix::Vector tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(48)
				Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(48)
				Float tmp22 = _offset->x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(48)
				Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(48)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(48)
				::phoenix::Vector tmp25 = _verts->__get(i).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(48)
				::phoenix::Vector tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(48)
				Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(48)
				Float tmp28 = _offset->x;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(48)
				Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(48)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(48)
				Float tmp31 = (tmp24 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(48)
				Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(48)
				Float tmp33 = _point->y;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(48)
				::phoenix::Vector tmp34 = _verts->__get(i).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(48)
				::phoenix::Vector tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(48)
				Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(48)
				Float tmp37 = _offset->y;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(48)
				Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(48)
				Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(48)
				Float tmp40 = (tmp33 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(48)
				Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(48)
				Float tmp42 = (tmp32 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(48)
				Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(49)
				::phoenix::Vector tmp44 = _verts->__get(j).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(49)
				::phoenix::Vector tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(49)
				Float tmp46 = tmp45->y;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(49)
				Float tmp47 = _offset->y;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(49)
				Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(49)
				Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(49)
				::phoenix::Vector tmp50 = _verts->__get(i).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(49)
				::phoenix::Vector tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(49)
				Float tmp52 = tmp51->y;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(49)
				Float tmp53 = _offset->y;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(49)
				Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(49)
				Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(49)
				Float tmp56 = (tmp49 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(49)
				Float tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(48)
				Float tmp58 = (Float(tmp43) / Float(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(48)
				Float tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(49)
				::phoenix::Vector tmp60 = _verts->__get(i).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(49)
				::phoenix::Vector tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(49)
				Float tmp62 = tmp61->x;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(49)
				Float tmp63 = _offset->x;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(49)
				Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(49)
				Float tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(48)
				Float tmp66 = (tmp59 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(48)
				Float tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(48)
				tmp17 = (tmp18 < tmp67);
			}
			else{
				HX_STACK_LINE(47)
				tmp17 = false;
			}
			HX_STACK_LINE(47)
			if ((tmp17)){
				HX_STACK_LINE(50)
				bool tmp18 = c;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(50)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(50)
				c = tmp19;
			}
			HX_STACK_LINE(53)
			j = i;
		}
	}
	HX_STACK_LINE(56)
	bool tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC3(GeometryUtils_obj,point_in_polygon,return )

bool GeometryUtils_obj::point_in_geometry( ::phoenix::Vector _point,::phoenix::geometry::Geometry _geometry){
	HX_STACK_FRAME("luxe.utils.GeometryUtils","point_in_geometry",0x80cfa4b9,"luxe.utils.GeometryUtils.point_in_geometry","luxe/utils/GeometryUtils.hx",64,0x749c9d76)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_point,"_point")
	HX_STACK_ARG(_geometry,"_geometry")
	HX_STACK_LINE(66)
	bool c = false;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(67)
	int tmp = _geometry->vertices->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	int nvert = tmp;		HX_STACK_VAR(nvert,"nvert");
	HX_STACK_LINE(68)
	int tmp1 = (nvert - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	int j = tmp1;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(70)
	Float _px = _point->x;		HX_STACK_VAR(_px,"_px");
	HX_STACK_LINE(71)
	Float _py = _point->y;		HX_STACK_VAR(_py,"_py");
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		while((true)){
			HX_STACK_LINE(73)
			bool tmp2 = (_g < nvert);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(73)
			if ((tmp3)){
				HX_STACK_LINE(73)
				break;
			}
			HX_STACK_LINE(73)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(75)
			::phoenix::geometry::Vertex tmp5 = _geometry->vertices->__get(i).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(75)
			::phoenix::Vector _vert_i = tmp5->pos;		HX_STACK_VAR(_vert_i,"_vert_i");
			HX_STACK_LINE(76)
			::phoenix::geometry::Vertex tmp6 = _geometry->vertices->__get(j).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(76)
			::phoenix::Vector _vert_j = tmp6->pos;		HX_STACK_VAR(_vert_j,"_vert_j");
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				::phoenix::Vector tmp7 = this->_v_cache;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(78)
				::phoenix::Vector _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(78)
				Float _x = _vert_i->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(78)
				Float _y = _vert_i->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(78)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(78)
				_this->ignore_listeners = true;
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(78)
					_this->x = _x;
					HX_STACK_LINE(78)
					bool tmp8 = _this->_construct;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(78)
					if ((tmp8)){
						HX_STACK_LINE(78)
						_this->x;
					}
					else{
						HX_STACK_LINE(78)
						bool tmp9 = (_this->listen_x != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(78)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(78)
						if ((tmp9)){
							HX_STACK_LINE(78)
							bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(78)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(78)
							tmp10 = !(tmp12);
						}
						else{
							HX_STACK_LINE(78)
							tmp10 = false;
						}
						HX_STACK_LINE(78)
						if ((tmp10)){
							HX_STACK_LINE(78)
							Float tmp11 = _x;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(78)
							_this->listen_x(tmp11);
						}
						HX_STACK_LINE(78)
						_this->x;
					}
				}
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(78)
					_this->y = _y;
					HX_STACK_LINE(78)
					bool tmp8 = _this->_construct;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(78)
					if ((tmp8)){
						HX_STACK_LINE(78)
						_this->y;
					}
					else{
						HX_STACK_LINE(78)
						bool tmp9 = (_this->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(78)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(78)
						if ((tmp9)){
							HX_STACK_LINE(78)
							bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(78)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(78)
							tmp10 = !(tmp12);
						}
						else{
							HX_STACK_LINE(78)
							tmp10 = false;
						}
						HX_STACK_LINE(78)
						if ((tmp10)){
							HX_STACK_LINE(78)
							Float tmp11 = _y;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(78)
							_this->listen_y(tmp11);
						}
						HX_STACK_LINE(78)
						_this->y;
					}
				}
				HX_STACK_LINE(78)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(78)
				bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(78)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(78)
				if ((tmp8)){
					HX_STACK_LINE(78)
					bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(78)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(78)
					tmp9 = !(tmp11);
				}
				else{
					HX_STACK_LINE(78)
					tmp9 = false;
				}
				HX_STACK_LINE(78)
				if ((tmp9)){
					HX_STACK_LINE(78)
					Float tmp10 = _this->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(78)
					_this->listen_x(tmp10);
				}
				HX_STACK_LINE(78)
				bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(78)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(78)
				if ((tmp10)){
					HX_STACK_LINE(78)
					bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(78)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(78)
					tmp11 = !(tmp13);
				}
				else{
					HX_STACK_LINE(78)
					tmp11 = false;
				}
				HX_STACK_LINE(78)
				if ((tmp11)){
					HX_STACK_LINE(78)
					Float tmp12 = _this->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(78)
					_this->listen_y(tmp12);
				}
				HX_STACK_LINE(78)
				_this;
			}
			HX_STACK_LINE(79)
			{
				HX_STACK_LINE(79)
				::phoenix::Vector tmp7 = this->_v_cache;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(79)
				::phoenix::Vector _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(79)
				::phoenix::Matrix tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(79)
				{
					HX_STACK_LINE(79)
					::phoenix::Spatial tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(79)
					{
						HX_STACK_LINE(79)
						::phoenix::Transform _this1 = _geometry->transform;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(79)
						bool tmp10 = _this1->_destroying;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(79)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(79)
						if ((tmp11)){
							HX_STACK_LINE(79)
							bool tmp12 = (_this1->parent != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(79)
							if ((tmp12)){
								HX_STACK_LINE(79)
								bool tmp13 = _this1->parent->dirty;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(79)
								if ((tmp13)){
									HX_STACK_LINE(79)
									_this1->parent->clean();
								}
							}
							HX_STACK_LINE(79)
							bool tmp13 = _this1->dirty;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(79)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(79)
							if ((tmp13)){
								HX_STACK_LINE(79)
								bool tmp15 = _this1->_cleaning;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(79)
								bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(79)
								tmp14 = !(tmp16);
							}
							else{
								HX_STACK_LINE(79)
								tmp14 = false;
							}
							HX_STACK_LINE(79)
							if ((tmp14)){
								HX_STACK_LINE(79)
								_this1->clean();
							}
						}
						HX_STACK_LINE(79)
						tmp9 = _this1->world;
					}
					HX_STACK_LINE(79)
					::phoenix::Spatial _this1 = tmp9;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(79)
					tmp8 = _this1->matrix;
				}
				HX_STACK_LINE(79)
				::phoenix::Matrix _m = tmp8;		HX_STACK_VAR(_m,"_m");
				HX_STACK_LINE(79)
				Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(79)
				Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(79)
				Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(79)
				Array< Float > e = _m->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(79)
				{
					HX_STACK_LINE(79)
					Float tmp9 = e->__get((int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(79)
					Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(79)
					Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(79)
					Float tmp12 = e->__get((int)4);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(79)
					Float tmp13 = _y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(79)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(79)
					Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(79)
					Float tmp16 = e->__get((int)8);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(79)
					Float tmp17 = _z;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(79)
					Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(79)
					Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(79)
					Float tmp20 = e->__get((int)12);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(79)
					Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(79)
					Float _x1 = tmp21;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(79)
					Float tmp22 = e->__get((int)1);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(79)
					Float tmp23 = _x;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(79)
					Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(79)
					Float tmp25 = e->__get((int)5);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(79)
					Float tmp26 = _y;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(79)
					Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(79)
					Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(79)
					Float tmp29 = e->__get((int)9);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(79)
					Float tmp30 = _z;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(79)
					Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(79)
					Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(79)
					Float tmp33 = e->__get((int)13);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(79)
					Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(79)
					Float _y1 = tmp34;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(79)
					Float tmp35 = e->__get((int)2);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(79)
					Float tmp36 = _x;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(79)
					Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(79)
					Float tmp38 = e->__get((int)6);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(79)
					Float tmp39 = _y;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(79)
					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(79)
					Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(79)
					Float tmp42 = e->__get((int)10);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(79)
					Float tmp43 = _z;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(79)
					Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(79)
					Float tmp45 = (tmp41 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(79)
					Float tmp46 = e->__get((int)14);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(79)
					Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(79)
					Float _z1 = tmp47;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(79)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(79)
					_this->ignore_listeners = true;
					HX_STACK_LINE(79)
					{
						HX_STACK_LINE(79)
						_this->x = _x1;
						HX_STACK_LINE(79)
						bool tmp48 = _this->_construct;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(79)
						if ((tmp48)){
							HX_STACK_LINE(79)
							_this->x;
						}
						else{
							HX_STACK_LINE(79)
							bool tmp49 = (_this->listen_x != null());		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(79)
							bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(79)
							if ((tmp49)){
								HX_STACK_LINE(79)
								bool tmp51 = _this->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(79)
								bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(79)
								tmp50 = !(tmp52);
							}
							else{
								HX_STACK_LINE(79)
								tmp50 = false;
							}
							HX_STACK_LINE(79)
							if ((tmp50)){
								HX_STACK_LINE(79)
								Float tmp51 = _x1;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(79)
								_this->listen_x(tmp51);
							}
							HX_STACK_LINE(79)
							_this->x;
						}
					}
					HX_STACK_LINE(79)
					{
						HX_STACK_LINE(79)
						_this->y = _y1;
						HX_STACK_LINE(79)
						bool tmp48 = _this->_construct;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(79)
						if ((tmp48)){
							HX_STACK_LINE(79)
							_this->y;
						}
						else{
							HX_STACK_LINE(79)
							bool tmp49 = (_this->listen_y != null());		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(79)
							bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(79)
							if ((tmp49)){
								HX_STACK_LINE(79)
								bool tmp51 = _this->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(79)
								bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(79)
								tmp50 = !(tmp52);
							}
							else{
								HX_STACK_LINE(79)
								tmp50 = false;
							}
							HX_STACK_LINE(79)
							if ((tmp50)){
								HX_STACK_LINE(79)
								Float tmp51 = _y1;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(79)
								_this->listen_y(tmp51);
							}
							HX_STACK_LINE(79)
							_this->y;
						}
					}
					HX_STACK_LINE(79)
					{
						HX_STACK_LINE(79)
						_this->z = _z1;
						HX_STACK_LINE(79)
						bool tmp48 = _this->_construct;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(79)
						if ((tmp48)){
							HX_STACK_LINE(79)
							_this->z;
						}
						else{
							HX_STACK_LINE(79)
							bool tmp49 = (_this->listen_z != null());		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(79)
							bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(79)
							if ((tmp49)){
								HX_STACK_LINE(79)
								bool tmp51 = _this->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(79)
								bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(79)
								tmp50 = !(tmp52);
							}
							else{
								HX_STACK_LINE(79)
								tmp50 = false;
							}
							HX_STACK_LINE(79)
							if ((tmp50)){
								HX_STACK_LINE(79)
								Float tmp51 = _z1;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(79)
								_this->listen_z(tmp51);
							}
							HX_STACK_LINE(79)
							_this->z;
						}
					}
					HX_STACK_LINE(79)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(79)
					bool tmp48 = (_this->listen_x != null());		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(79)
					bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(79)
					if ((tmp48)){
						HX_STACK_LINE(79)
						bool tmp50 = _this->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(79)
						bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(79)
						tmp49 = !(tmp51);
					}
					else{
						HX_STACK_LINE(79)
						tmp49 = false;
					}
					HX_STACK_LINE(79)
					if ((tmp49)){
						HX_STACK_LINE(79)
						Float tmp50 = _this->x;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(79)
						_this->listen_x(tmp50);
					}
					HX_STACK_LINE(79)
					bool tmp50 = (_this->listen_y != null());		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(79)
					bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(79)
					if ((tmp50)){
						HX_STACK_LINE(79)
						bool tmp52 = _this->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(79)
						bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(79)
						tmp51 = !(tmp53);
					}
					else{
						HX_STACK_LINE(79)
						tmp51 = false;
					}
					HX_STACK_LINE(79)
					if ((tmp51)){
						HX_STACK_LINE(79)
						Float tmp52 = _this->y;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(79)
						_this->listen_y(tmp52);
					}
					HX_STACK_LINE(79)
					bool tmp52 = (_this->listen_z != null());		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(79)
					bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(79)
					if ((tmp52)){
						HX_STACK_LINE(79)
						bool tmp54 = _this->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(79)
						bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(79)
						tmp53 = !(tmp55);
					}
					else{
						HX_STACK_LINE(79)
						tmp53 = false;
					}
					HX_STACK_LINE(79)
					if ((tmp53)){
						HX_STACK_LINE(79)
						Float tmp54 = _this->z;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(79)
						_this->listen_z(tmp54);
					}
					HX_STACK_LINE(79)
					_this;
				}
				HX_STACK_LINE(79)
				_this;
			}
			HX_STACK_LINE(81)
			::phoenix::Vector tmp7 = this->_v_cache;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(81)
			Float _vert_i_x = tmp7->x;		HX_STACK_VAR(_vert_i_x,"_vert_i_x");
			HX_STACK_LINE(82)
			::phoenix::Vector tmp8 = this->_v_cache;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(82)
			Float _vert_i_y = tmp8->y;		HX_STACK_VAR(_vert_i_y,"_vert_i_y");
			HX_STACK_LINE(84)
			{
				HX_STACK_LINE(84)
				::phoenix::Vector tmp9 = this->_v_cache;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(84)
				::phoenix::Vector _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(84)
				Float _x = _vert_j->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(84)
				Float _y = _vert_j->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(84)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(84)
				_this->ignore_listeners = true;
				HX_STACK_LINE(84)
				{
					HX_STACK_LINE(84)
					_this->x = _x;
					HX_STACK_LINE(84)
					bool tmp10 = _this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(84)
					if ((tmp10)){
						HX_STACK_LINE(84)
						_this->x;
					}
					else{
						HX_STACK_LINE(84)
						bool tmp11 = (_this->listen_x != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(84)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(84)
						if ((tmp11)){
							HX_STACK_LINE(84)
							bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(84)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(84)
							tmp12 = !(tmp14);
						}
						else{
							HX_STACK_LINE(84)
							tmp12 = false;
						}
						HX_STACK_LINE(84)
						if ((tmp12)){
							HX_STACK_LINE(84)
							Float tmp13 = _x;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(84)
							_this->listen_x(tmp13);
						}
						HX_STACK_LINE(84)
						_this->x;
					}
				}
				HX_STACK_LINE(84)
				{
					HX_STACK_LINE(84)
					_this->y = _y;
					HX_STACK_LINE(84)
					bool tmp10 = _this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(84)
					if ((tmp10)){
						HX_STACK_LINE(84)
						_this->y;
					}
					else{
						HX_STACK_LINE(84)
						bool tmp11 = (_this->listen_y != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(84)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(84)
						if ((tmp11)){
							HX_STACK_LINE(84)
							bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(84)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(84)
							tmp12 = !(tmp14);
						}
						else{
							HX_STACK_LINE(84)
							tmp12 = false;
						}
						HX_STACK_LINE(84)
						if ((tmp12)){
							HX_STACK_LINE(84)
							Float tmp13 = _y;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(84)
							_this->listen_y(tmp13);
						}
						HX_STACK_LINE(84)
						_this->y;
					}
				}
				HX_STACK_LINE(84)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(84)
				bool tmp10 = (_this->listen_x != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(84)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(84)
				if ((tmp10)){
					HX_STACK_LINE(84)
					bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(84)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(84)
					tmp11 = !(tmp13);
				}
				else{
					HX_STACK_LINE(84)
					tmp11 = false;
				}
				HX_STACK_LINE(84)
				if ((tmp11)){
					HX_STACK_LINE(84)
					Float tmp12 = _this->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(84)
					_this->listen_x(tmp12);
				}
				HX_STACK_LINE(84)
				bool tmp12 = (_this->listen_y != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(84)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(84)
				if ((tmp12)){
					HX_STACK_LINE(84)
					bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(84)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(84)
					tmp13 = !(tmp15);
				}
				else{
					HX_STACK_LINE(84)
					tmp13 = false;
				}
				HX_STACK_LINE(84)
				if ((tmp13)){
					HX_STACK_LINE(84)
					Float tmp14 = _this->y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(84)
					_this->listen_y(tmp14);
				}
				HX_STACK_LINE(84)
				_this;
			}
			HX_STACK_LINE(85)
			{
				HX_STACK_LINE(85)
				::phoenix::Vector tmp9 = this->_v_cache;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(85)
				::phoenix::Vector _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(85)
				::phoenix::Matrix tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(85)
				{
					HX_STACK_LINE(85)
					::phoenix::Spatial tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(85)
					{
						HX_STACK_LINE(85)
						::phoenix::Transform _this1 = _geometry->transform;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(85)
						bool tmp12 = _this1->_destroying;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(85)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(85)
						if ((tmp13)){
							HX_STACK_LINE(85)
							bool tmp14 = (_this1->parent != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(85)
							if ((tmp14)){
								HX_STACK_LINE(85)
								bool tmp15 = _this1->parent->dirty;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(85)
								if ((tmp15)){
									HX_STACK_LINE(85)
									_this1->parent->clean();
								}
							}
							HX_STACK_LINE(85)
							bool tmp15 = _this1->dirty;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(85)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(85)
							if ((tmp15)){
								HX_STACK_LINE(85)
								bool tmp17 = _this1->_cleaning;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(85)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(85)
								tmp16 = !(tmp18);
							}
							else{
								HX_STACK_LINE(85)
								tmp16 = false;
							}
							HX_STACK_LINE(85)
							if ((tmp16)){
								HX_STACK_LINE(85)
								_this1->clean();
							}
						}
						HX_STACK_LINE(85)
						tmp11 = _this1->world;
					}
					HX_STACK_LINE(85)
					::phoenix::Spatial _this1 = tmp11;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(85)
					tmp10 = _this1->matrix;
				}
				HX_STACK_LINE(85)
				::phoenix::Matrix _m = tmp10;		HX_STACK_VAR(_m,"_m");
				HX_STACK_LINE(85)
				Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(85)
				Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(85)
				Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(85)
				Array< Float > e = _m->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(85)
				{
					HX_STACK_LINE(85)
					Float tmp11 = e->__get((int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(85)
					Float tmp12 = _x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(85)
					Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(85)
					Float tmp14 = e->__get((int)4);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(85)
					Float tmp15 = _y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(85)
					Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(85)
					Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(85)
					Float tmp18 = e->__get((int)8);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(85)
					Float tmp19 = _z;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(85)
					Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(85)
					Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(85)
					Float tmp22 = e->__get((int)12);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(85)
					Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(85)
					Float _x1 = tmp23;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(85)
					Float tmp24 = e->__get((int)1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(85)
					Float tmp25 = _x;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(85)
					Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(85)
					Float tmp27 = e->__get((int)5);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(85)
					Float tmp28 = _y;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(85)
					Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(85)
					Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(85)
					Float tmp31 = e->__get((int)9);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(85)
					Float tmp32 = _z;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(85)
					Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(85)
					Float tmp34 = (tmp30 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(85)
					Float tmp35 = e->__get((int)13);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(85)
					Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(85)
					Float _y1 = tmp36;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(85)
					Float tmp37 = e->__get((int)2);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(85)
					Float tmp38 = _x;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(85)
					Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(85)
					Float tmp40 = e->__get((int)6);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(85)
					Float tmp41 = _y;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(85)
					Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(85)
					Float tmp43 = (tmp39 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(85)
					Float tmp44 = e->__get((int)10);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(85)
					Float tmp45 = _z;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(85)
					Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(85)
					Float tmp47 = (tmp43 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(85)
					Float tmp48 = e->__get((int)14);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(85)
					Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(85)
					Float _z1 = tmp49;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(85)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(85)
					_this->ignore_listeners = true;
					HX_STACK_LINE(85)
					{
						HX_STACK_LINE(85)
						_this->x = _x1;
						HX_STACK_LINE(85)
						bool tmp50 = _this->_construct;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(85)
						if ((tmp50)){
							HX_STACK_LINE(85)
							_this->x;
						}
						else{
							HX_STACK_LINE(85)
							bool tmp51 = (_this->listen_x != null());		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(85)
							bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(85)
							if ((tmp51)){
								HX_STACK_LINE(85)
								bool tmp53 = _this->ignore_listeners;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(85)
								bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(85)
								tmp52 = !(tmp54);
							}
							else{
								HX_STACK_LINE(85)
								tmp52 = false;
							}
							HX_STACK_LINE(85)
							if ((tmp52)){
								HX_STACK_LINE(85)
								Float tmp53 = _x1;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(85)
								_this->listen_x(tmp53);
							}
							HX_STACK_LINE(85)
							_this->x;
						}
					}
					HX_STACK_LINE(85)
					{
						HX_STACK_LINE(85)
						_this->y = _y1;
						HX_STACK_LINE(85)
						bool tmp50 = _this->_construct;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(85)
						if ((tmp50)){
							HX_STACK_LINE(85)
							_this->y;
						}
						else{
							HX_STACK_LINE(85)
							bool tmp51 = (_this->listen_y != null());		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(85)
							bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(85)
							if ((tmp51)){
								HX_STACK_LINE(85)
								bool tmp53 = _this->ignore_listeners;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(85)
								bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(85)
								tmp52 = !(tmp54);
							}
							else{
								HX_STACK_LINE(85)
								tmp52 = false;
							}
							HX_STACK_LINE(85)
							if ((tmp52)){
								HX_STACK_LINE(85)
								Float tmp53 = _y1;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(85)
								_this->listen_y(tmp53);
							}
							HX_STACK_LINE(85)
							_this->y;
						}
					}
					HX_STACK_LINE(85)
					{
						HX_STACK_LINE(85)
						_this->z = _z1;
						HX_STACK_LINE(85)
						bool tmp50 = _this->_construct;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(85)
						if ((tmp50)){
							HX_STACK_LINE(85)
							_this->z;
						}
						else{
							HX_STACK_LINE(85)
							bool tmp51 = (_this->listen_z != null());		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(85)
							bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(85)
							if ((tmp51)){
								HX_STACK_LINE(85)
								bool tmp53 = _this->ignore_listeners;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(85)
								bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(85)
								tmp52 = !(tmp54);
							}
							else{
								HX_STACK_LINE(85)
								tmp52 = false;
							}
							HX_STACK_LINE(85)
							if ((tmp52)){
								HX_STACK_LINE(85)
								Float tmp53 = _z1;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(85)
								_this->listen_z(tmp53);
							}
							HX_STACK_LINE(85)
							_this->z;
						}
					}
					HX_STACK_LINE(85)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(85)
					bool tmp50 = (_this->listen_x != null());		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(85)
					bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(85)
					if ((tmp50)){
						HX_STACK_LINE(85)
						bool tmp52 = _this->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(85)
						bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(85)
						tmp51 = !(tmp53);
					}
					else{
						HX_STACK_LINE(85)
						tmp51 = false;
					}
					HX_STACK_LINE(85)
					if ((tmp51)){
						HX_STACK_LINE(85)
						Float tmp52 = _this->x;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(85)
						_this->listen_x(tmp52);
					}
					HX_STACK_LINE(85)
					bool tmp52 = (_this->listen_y != null());		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(85)
					bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(85)
					if ((tmp52)){
						HX_STACK_LINE(85)
						bool tmp54 = _this->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(85)
						bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(85)
						tmp53 = !(tmp55);
					}
					else{
						HX_STACK_LINE(85)
						tmp53 = false;
					}
					HX_STACK_LINE(85)
					if ((tmp53)){
						HX_STACK_LINE(85)
						Float tmp54 = _this->y;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(85)
						_this->listen_y(tmp54);
					}
					HX_STACK_LINE(85)
					bool tmp54 = (_this->listen_z != null());		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(85)
					bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(85)
					if ((tmp54)){
						HX_STACK_LINE(85)
						bool tmp56 = _this->ignore_listeners;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(85)
						bool tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(85)
						tmp55 = !(tmp57);
					}
					else{
						HX_STACK_LINE(85)
						tmp55 = false;
					}
					HX_STACK_LINE(85)
					if ((tmp55)){
						HX_STACK_LINE(85)
						Float tmp56 = _this->z;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(85)
						_this->listen_z(tmp56);
					}
					HX_STACK_LINE(85)
					_this;
				}
				HX_STACK_LINE(85)
				_this;
			}
			HX_STACK_LINE(87)
			::phoenix::Vector tmp9 = this->_v_cache;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(87)
			Float _vert_j_x = tmp9->x;		HX_STACK_VAR(_vert_j_x,"_vert_j_x");
			HX_STACK_LINE(88)
			::phoenix::Vector tmp10 = this->_v_cache;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(88)
			Float _vert_j_y = tmp10->y;		HX_STACK_VAR(_vert_j_y,"_vert_j_y");
			HX_STACK_LINE(90)
			bool tmp11 = (_vert_i_y > _point->y);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(90)
			bool tmp12 = (_vert_j_y > _point->y);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(90)
			bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(90)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(90)
			if ((tmp13)){
				HX_STACK_LINE(91)
				Float tmp15 = _point->x;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(91)
				Float tmp16 = (_vert_j_x - _vert_i_x);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(91)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(91)
				Float tmp18 = (_point->y - _vert_i_y);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(91)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(91)
				Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(91)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(92)
				Float tmp22 = (_vert_j_y - _vert_i_y);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(92)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(91)
				Float tmp24 = (Float(tmp21) / Float(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(91)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(92)
				Float tmp26 = _vert_i_x;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(91)
				Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(91)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(91)
				tmp14 = (tmp15 < tmp28);
			}
			else{
				HX_STACK_LINE(90)
				tmp14 = false;
			}
			HX_STACK_LINE(90)
			if ((tmp14)){
				HX_STACK_LINE(93)
				bool tmp15 = c;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(93)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(93)
				c = tmp16;
			}
			HX_STACK_LINE(96)
			j = i;
		}
	}
	HX_STACK_LINE(100)
	bool tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(GeometryUtils_obj,point_in_geometry,return )

::phoenix::Vector GeometryUtils_obj::intersect_ray_plane( ::phoenix::Vector _ray_start,::phoenix::Vector _ray_dir,::phoenix::Vector _plane_normal,::phoenix::Vector _plane_point){
	HX_STACK_FRAME("luxe.utils.GeometryUtils","intersect_ray_plane",0xfb92d043,"luxe.utils.GeometryUtils.intersect_ray_plane","luxe/utils/GeometryUtils.hx",106,0x749c9d76)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_ray_start,"_ray_start")
	HX_STACK_ARG(_ray_dir,"_ray_dir")
	HX_STACK_ARG(_plane_normal,"_plane_normal")
	HX_STACK_ARG(_plane_point,"_plane_point")
	HX_STACK_LINE(112)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	{
		HX_STACK_LINE(112)
		Float tmp1 = (_plane_point->x - _ray_start->x);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		Float tmp2 = (_plane_point->y - _ray_start->y);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		Float tmp3 = (_plane_point->z - _ray_start->z);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new(tmp1,tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(112)
		::phoenix::Vector other = tmp4;		HX_STACK_VAR(other,"other");
		HX_STACK_LINE(112)
		Float tmp5 = (_plane_normal->x * other->x);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(112)
		Float tmp6 = (_plane_normal->y * other->y);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(112)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(112)
		Float tmp8 = (_plane_normal->z * other->z);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(112)
		tmp = (tmp7 + tmp8);
	}
	HX_STACK_LINE(112)
	Float part1 = tmp;		HX_STACK_VAR(part1,"part1");
	HX_STACK_LINE(113)
	Float tmp1 = (_plane_normal->x * _ray_dir->x);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	Float tmp2 = (_plane_normal->y * _ray_dir->y);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(113)
	Float tmp4 = (_plane_normal->z * _ray_dir->z);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(113)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(113)
	Float part2 = tmp5;		HX_STACK_VAR(part2,"part2");
	HX_STACK_LINE(115)
	Float tmp6 = (Float(part1) / Float(part2));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(115)
	Float T = tmp6;		HX_STACK_VAR(T,"T");
	HX_STACK_LINE(117)
	::phoenix::Vector tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(117)
	{
		HX_STACK_LINE(117)
		::phoenix::Vector tmp8 = _ray_dir;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(117)
		Float tmp9 = T;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(117)
		::phoenix::Vector tmp10 = ::phoenix::Vector_obj::Multiply(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(117)
		::phoenix::Vector b = tmp10;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(117)
		Float tmp11 = (_ray_start->x + b->x);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(117)
		Float tmp12 = (_ray_start->y + b->y);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(117)
		Float tmp13 = (_ray_start->z + b->z);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(117)
		tmp7 = ::phoenix::Vector_obj::__new(tmp11,tmp12,tmp13,null());
	}
	HX_STACK_LINE(117)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC4(GeometryUtils_obj,intersect_ray_plane,return )

Float GeometryUtils_obj::two_pi;


GeometryUtils_obj::GeometryUtils_obj()
{
}

void GeometryUtils_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GeometryUtils);
	HX_MARK_MEMBER_NAME(_v_cache,"_v_cache");
	HX_MARK_END_CLASS();
}

void GeometryUtils_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_v_cache,"_v_cache");
}

Dynamic GeometryUtils_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_v_cache") ) { return _v_cache; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"point_in_polygon") ) { return point_in_polygon_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"point_in_geometry") ) { return point_in_geometry_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"intersect_ray_plane") ) { return intersect_ray_plane_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"segments_for_smooth_circle") ) { return segments_for_smooth_circle_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"random_point_in_unit_circle") ) { return random_point_in_unit_circle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GeometryUtils_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_v_cache") ) { _v_cache=inValue.Cast< ::phoenix::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GeometryUtils_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_v_cache","\xfa","\xf7","\x98","\xa1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(GeometryUtils_obj,_v_cache),HX_HCSTRING("_v_cache","\xfa","\xf7","\x98","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &GeometryUtils_obj::two_pi,HX_HCSTRING("two_pi","\x0c","\x0a","\xbc","\x2f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("segments_for_smooth_circle","\x6c","\xfc","\xe4","\xef"),
	HX_HCSTRING("random_point_in_unit_circle","\x5c","\x14","\x01","\x5f"),
	HX_HCSTRING("point_in_polygon","\xaf","\x7f","\xd0","\xfb"),
	HX_HCSTRING("_v_cache","\xfa","\xf7","\x98","\xa1"),
	HX_HCSTRING("point_in_geometry","\xdd","\x13","\xf7","\x00"),
	HX_HCSTRING("intersect_ray_plane","\x67","\x50","\xcf","\x67"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GeometryUtils_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GeometryUtils_obj::two_pi,"two_pi");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GeometryUtils_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GeometryUtils_obj::two_pi,"two_pi");
};

#endif

hx::Class GeometryUtils_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("two_pi","\x0c","\x0a","\xbc","\x2f"),
	::String(null()) };

void GeometryUtils_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.utils.GeometryUtils","\x4a","\x4a","\x01","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GeometryUtils_obj >;
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

void GeometryUtils_obj::__boot()
{
	two_pi= ((Float)6.283185307179586);
}

} // end namespace luxe
} // end namespace utils
