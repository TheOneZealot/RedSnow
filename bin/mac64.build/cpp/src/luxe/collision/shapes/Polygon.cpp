#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_luxe_collision_data_RayCollision
#include <luxe/collision/data/RayCollision.h>
#endif
#ifndef INCLUDED_luxe_collision_data_ShapeCollision
#include <luxe/collision/data/ShapeCollision.h>
#endif
#ifndef INCLUDED_luxe_collision_sat_SAT2D
#include <luxe/collision/sat/SAT2D.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Circle
#include <luxe/collision/shapes/Circle.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Polygon
#include <luxe/collision/shapes/Polygon.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Ray
#include <luxe/collision/shapes/Ray.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Shape
#include <luxe/collision/shapes/Shape.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{
namespace collision{
namespace shapes{

Void Polygon_obj::__construct(Float x,Float y,Array< ::Dynamic > vertices)
{
HX_STACK_FRAME("luxe.collision.shapes.Polygon","new",0xc0f30244,"luxe.collision.shapes.Polygon.new","luxe/collision/shapes/Polygon.hx",22,0x6040276b)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(vertices,"vertices")
{
	HX_STACK_LINE(24)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(26)
	::String tmp2 = (HX_HCSTRING("polygon(sides:","\xac","\xf4","\x5b","\xaa") + vertices->length);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	::String tmp3 = (tmp2 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(26)
	this->name = tmp3;
	HX_STACK_LINE(28)
	this->_transformedVertices = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(29)
	this->_vertices = vertices;
}
;
	return null();
}

//Polygon_obj::~Polygon_obj() { }

Dynamic Polygon_obj::__CreateEmpty() { return  new Polygon_obj; }
hx::ObjectPtr< Polygon_obj > Polygon_obj::__new(Float x,Float y,Array< ::Dynamic > vertices)
{  hx::ObjectPtr< Polygon_obj > _result_ = new Polygon_obj();
	_result_->__construct(x,y,vertices);
	return _result_;}

Dynamic Polygon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Polygon_obj > _result_ = new Polygon_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::luxe::collision::data::ShapeCollision Polygon_obj::test( ::luxe::collision::shapes::Shape shape){
	HX_STACK_FRAME("luxe.collision.shapes.Polygon","test",0x17a63dee,"luxe.collision.shapes.Polygon.test","luxe/collision/shapes/Polygon.hx",34,0x6040276b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shape,"shape")
	HX_STACK_LINE(36)
	::luxe::collision::data::ShapeCollision tmp = shape->testPolygon(hx::ObjectPtr<OBJ_>(this),true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	return tmp;
}


::luxe::collision::data::ShapeCollision Polygon_obj::testCircle( ::luxe::collision::shapes::Circle circle,hx::Null< bool >  __o_flip){
bool flip = __o_flip.Default(false);
	HX_STACK_FRAME("luxe.collision.shapes.Polygon","testCircle",0x29084a9e,"luxe.collision.shapes.Polygon.testCircle","luxe/collision/shapes/Polygon.hx",41,0x6040276b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(circle,"circle")
	HX_STACK_ARG(flip,"flip")
{
		HX_STACK_LINE(43)
		::luxe::collision::shapes::Circle tmp = circle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		bool tmp1 = flip;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		::luxe::collision::data::ShapeCollision tmp2 = ::luxe::collision::sat::SAT2D_obj::testCircleVsPolygon(tmp,hx::ObjectPtr<OBJ_>(this),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		return tmp2;
	}
}


::luxe::collision::data::ShapeCollision Polygon_obj::testPolygon( ::luxe::collision::shapes::Polygon polygon,hx::Null< bool >  __o_flip){
bool flip = __o_flip.Default(false);
	HX_STACK_FRAME("luxe.collision.shapes.Polygon","testPolygon",0xdb13a62c,"luxe.collision.shapes.Polygon.testPolygon","luxe/collision/shapes/Polygon.hx",48,0x6040276b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(polygon,"polygon")
	HX_STACK_ARG(flip,"flip")
{
		HX_STACK_LINE(50)
		::luxe::collision::shapes::Polygon tmp = polygon;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		bool tmp1 = flip;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		::luxe::collision::data::ShapeCollision tmp2 = ::luxe::collision::sat::SAT2D_obj::testPolygonVsPolygon(hx::ObjectPtr<OBJ_>(this),tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		return tmp2;
	}
}


::luxe::collision::data::RayCollision Polygon_obj::testRay( ::luxe::collision::shapes::Ray ray){
	HX_STACK_FRAME("luxe.collision.shapes.Polygon","testRay",0xa3ad389c,"luxe.collision.shapes.Polygon.testRay","luxe/collision/shapes/Polygon.hx",55,0x6040276b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_LINE(57)
	::luxe::collision::shapes::Ray tmp = ray;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	::luxe::collision::data::RayCollision tmp1 = ::luxe::collision::sat::SAT2D_obj::testRayVsPolygon(tmp,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	return tmp1;
}


Void Polygon_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.collision.shapes.Polygon","destroy",0x0a6e20de,"luxe.collision.shapes.Polygon.destroy","luxe/collision/shapes/Polygon.hx",62,0x6040276b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		int tmp = this->_vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		int _count = tmp;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(66)
			while((true)){
				HX_STACK_LINE(66)
				bool tmp1 = (_g < _count);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(66)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(66)
				if ((tmp2)){
					HX_STACK_LINE(66)
					break;
				}
				HX_STACK_LINE(66)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(66)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(67)
				this->_vertices[i] = null();
			}
		}
		HX_STACK_LINE(70)
		this->_transformedVertices = null();
		HX_STACK_LINE(71)
		this->_vertices = null();
		HX_STACK_LINE(73)
		this->super::destroy();
	}
return null();
}


Array< ::Dynamic > Polygon_obj::get_transformedVertices( ){
	HX_STACK_FRAME("luxe.collision.shapes.Polygon","get_transformedVertices",0x97331a5f,"luxe.collision.shapes.Polygon.get_transformedVertices","luxe/collision/shapes/Polygon.hx",148,0x6040276b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(150)
	bool tmp = this->_transformed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	if ((tmp1)){
		HX_STACK_LINE(151)
		this->_transformedVertices = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(152)
		this->_transformed = true;
		HX_STACK_LINE(154)
		int tmp2 = this->_vertices->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		int _count = tmp2;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(156)
			while((true)){
				HX_STACK_LINE(156)
				bool tmp3 = (_g < _count);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(156)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(156)
				if ((tmp4)){
					HX_STACK_LINE(156)
					break;
				}
				HX_STACK_LINE(156)
				int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(156)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(157)
				::phoenix::Vector tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(157)
				{
					HX_STACK_LINE(157)
					::phoenix::Vector tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(157)
					{
						HX_STACK_LINE(157)
						::phoenix::Vector tmp8 = this->_vertices->__get(i).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(157)
						::phoenix::Vector _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(157)
						tmp7 = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
					}
					HX_STACK_LINE(157)
					::phoenix::Vector _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(157)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(157)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(157)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(157)
					::phoenix::Matrix tmp8 = this->_transformMatrix;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(157)
					Array< Float > e = tmp8->elements;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(157)
					{
						HX_STACK_LINE(157)
						Float tmp9 = e->__get((int)0);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(157)
						Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(157)
						Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(157)
						Float tmp12 = e->__get((int)4);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(157)
						Float tmp13 = _y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(157)
						Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(157)
						Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(157)
						Float tmp16 = e->__get((int)8);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(157)
						Float tmp17 = _z;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(157)
						Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(157)
						Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(157)
						Float tmp20 = e->__get((int)12);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(157)
						Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(157)
						Float _x1 = tmp21;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(157)
						Float tmp22 = e->__get((int)1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(157)
						Float tmp23 = _x;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(157)
						Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(157)
						Float tmp25 = e->__get((int)5);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(157)
						Float tmp26 = _y;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(157)
						Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(157)
						Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(157)
						Float tmp29 = e->__get((int)9);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(157)
						Float tmp30 = _z;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(157)
						Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(157)
						Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(157)
						Float tmp33 = e->__get((int)13);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(157)
						Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(157)
						Float _y1 = tmp34;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(157)
						Float tmp35 = e->__get((int)2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(157)
						Float tmp36 = _x;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(157)
						Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(157)
						Float tmp38 = e->__get((int)6);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(157)
						Float tmp39 = _y;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(157)
						Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(157)
						Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(157)
						Float tmp42 = e->__get((int)10);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(157)
						Float tmp43 = _z;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(157)
						Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(157)
						Float tmp45 = (tmp41 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(157)
						Float tmp46 = e->__get((int)14);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(157)
						Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(157)
						Float _z1 = tmp47;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(157)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(157)
						_this->ignore_listeners = true;
						HX_STACK_LINE(157)
						{
							HX_STACK_LINE(157)
							_this->x = _x1;
							HX_STACK_LINE(157)
							bool tmp48 = _this->_construct;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(157)
							if ((tmp48)){
								HX_STACK_LINE(157)
								_this->x;
							}
							else{
								HX_STACK_LINE(157)
								bool tmp49 = (_this->listen_x != null());		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(157)
								bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(157)
								if ((tmp49)){
									HX_STACK_LINE(157)
									bool tmp51 = _this->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(157)
									bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(157)
									tmp50 = !(tmp52);
								}
								else{
									HX_STACK_LINE(157)
									tmp50 = false;
								}
								HX_STACK_LINE(157)
								if ((tmp50)){
									HX_STACK_LINE(157)
									Float tmp51 = _x1;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(157)
									_this->listen_x(tmp51);
								}
								HX_STACK_LINE(157)
								_this->x;
							}
						}
						HX_STACK_LINE(157)
						{
							HX_STACK_LINE(157)
							_this->y = _y1;
							HX_STACK_LINE(157)
							bool tmp48 = _this->_construct;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(157)
							if ((tmp48)){
								HX_STACK_LINE(157)
								_this->y;
							}
							else{
								HX_STACK_LINE(157)
								bool tmp49 = (_this->listen_y != null());		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(157)
								bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(157)
								if ((tmp49)){
									HX_STACK_LINE(157)
									bool tmp51 = _this->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(157)
									bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(157)
									tmp50 = !(tmp52);
								}
								else{
									HX_STACK_LINE(157)
									tmp50 = false;
								}
								HX_STACK_LINE(157)
								if ((tmp50)){
									HX_STACK_LINE(157)
									Float tmp51 = _y1;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(157)
									_this->listen_y(tmp51);
								}
								HX_STACK_LINE(157)
								_this->y;
							}
						}
						HX_STACK_LINE(157)
						{
							HX_STACK_LINE(157)
							_this->z = _z1;
							HX_STACK_LINE(157)
							bool tmp48 = _this->_construct;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(157)
							if ((tmp48)){
								HX_STACK_LINE(157)
								_this->z;
							}
							else{
								HX_STACK_LINE(157)
								bool tmp49 = (_this->listen_z != null());		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(157)
								bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(157)
								if ((tmp49)){
									HX_STACK_LINE(157)
									bool tmp51 = _this->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(157)
									bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(157)
									tmp50 = !(tmp52);
								}
								else{
									HX_STACK_LINE(157)
									tmp50 = false;
								}
								HX_STACK_LINE(157)
								if ((tmp50)){
									HX_STACK_LINE(157)
									Float tmp51 = _z1;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(157)
									_this->listen_z(tmp51);
								}
								HX_STACK_LINE(157)
								_this->z;
							}
						}
						HX_STACK_LINE(157)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(157)
						bool tmp48 = (_this->listen_x != null());		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(157)
						bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(157)
						if ((tmp48)){
							HX_STACK_LINE(157)
							bool tmp50 = _this->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(157)
							bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(157)
							tmp49 = !(tmp51);
						}
						else{
							HX_STACK_LINE(157)
							tmp49 = false;
						}
						HX_STACK_LINE(157)
						if ((tmp49)){
							HX_STACK_LINE(157)
							Float tmp50 = _this->x;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(157)
							_this->listen_x(tmp50);
						}
						HX_STACK_LINE(157)
						bool tmp50 = (_this->listen_y != null());		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(157)
						bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(157)
						if ((tmp50)){
							HX_STACK_LINE(157)
							bool tmp52 = _this->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(157)
							bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(157)
							tmp51 = !(tmp53);
						}
						else{
							HX_STACK_LINE(157)
							tmp51 = false;
						}
						HX_STACK_LINE(157)
						if ((tmp51)){
							HX_STACK_LINE(157)
							Float tmp52 = _this->y;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(157)
							_this->listen_y(tmp52);
						}
						HX_STACK_LINE(157)
						bool tmp52 = (_this->listen_z != null());		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(157)
						bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(157)
						if ((tmp52)){
							HX_STACK_LINE(157)
							bool tmp54 = _this->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(157)
							bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(157)
							tmp53 = !(tmp55);
						}
						else{
							HX_STACK_LINE(157)
							tmp53 = false;
						}
						HX_STACK_LINE(157)
						if ((tmp53)){
							HX_STACK_LINE(157)
							Float tmp54 = _this->z;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(157)
							_this->listen_z(tmp54);
						}
						HX_STACK_LINE(157)
						_this;
					}
					HX_STACK_LINE(157)
					tmp6 = _this;
				}
				HX_STACK_LINE(157)
				this->_transformedVertices->push(tmp6);
			}
		}
	}
	HX_STACK_LINE(161)
	return this->_transformedVertices;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_transformedVertices,return )

Array< ::Dynamic > Polygon_obj::get_vertices( ){
	HX_STACK_FRAME("luxe.collision.shapes.Polygon","get_vertices",0x55f4e59e,"luxe.collision.shapes.Polygon.get_vertices","luxe/collision/shapes/Polygon.hx",165,0x6040276b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	return this->_vertices;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_vertices,return )

::luxe::collision::shapes::Polygon Polygon_obj::create( Float x,Float y,int sides,hx::Null< Float >  __o_radius){
Float radius = __o_radius.Default(100);
	HX_STACK_FRAME("luxe.collision.shapes.Polygon","create",0xa2f97b98,"luxe.collision.shapes.Polygon.create","luxe/collision/shapes/Polygon.hx",81,0x6040276b)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(sides,"sides")
	HX_STACK_ARG(radius,"radius")
{
		HX_STACK_LINE(83)
		bool tmp = (sides < (int)3);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		if ((tmp)){
			HX_STACK_LINE(84)
			HX_STACK_DO_THROW(HX_HCSTRING("Polygon - Needs at least 3 sides","\x07","\x3f","\x1e","\x8d"));
		}
		HX_STACK_LINE(87)
		Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		Float tmp2 = (tmp1 * (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		int tmp3 = sides;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(87)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(87)
		Float rotation = tmp4;		HX_STACK_VAR(rotation,"rotation");
		HX_STACK_LINE(88)
		Float angle;		HX_STACK_VAR(angle,"angle");
		HX_STACK_LINE(89)
		::phoenix::Vector vector;		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(90)
		Array< ::Dynamic > vertices = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(92)
			while((true)){
				HX_STACK_LINE(92)
				bool tmp5 = (_g < sides);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(92)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(92)
				if ((tmp6)){
					HX_STACK_LINE(92)
					break;
				}
				HX_STACK_LINE(92)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(92)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(93)
				Float tmp8 = (i * rotation);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(93)
				Float tmp9 = ::Math_obj::PI;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(93)
				Float tmp10 = rotation;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(93)
				Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(93)
				Float tmp12 = (tmp11 * ((Float)0.5));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(93)
				Float tmp13 = (tmp8 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(93)
				angle = tmp13;
				HX_STACK_LINE(94)
				::phoenix::Vector tmp14 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(94)
				vector = tmp14;
				HX_STACK_LINE(95)
				{
					HX_STACK_LINE(95)
					Float tmp15 = angle;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(95)
					Float tmp16 = ::Math_obj::cos(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(95)
					Float tmp17 = radius;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(95)
					Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(95)
					Float _x = tmp18;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(95)
					vector->x = _x;
					HX_STACK_LINE(95)
					bool tmp19 = vector->_construct;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(95)
					if ((tmp19)){
						HX_STACK_LINE(95)
						vector->x;
					}
					else{
						HX_STACK_LINE(95)
						bool tmp20 = (vector->listen_x != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(95)
						bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(95)
						if ((tmp20)){
							HX_STACK_LINE(95)
							bool tmp22 = vector->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(95)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(95)
							tmp21 = !(tmp23);
						}
						else{
							HX_STACK_LINE(95)
							tmp21 = false;
						}
						HX_STACK_LINE(95)
						if ((tmp21)){
							HX_STACK_LINE(95)
							Float tmp22 = _x;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(95)
							vector->listen_x(tmp22);
						}
						HX_STACK_LINE(95)
						vector->x;
					}
				}
				HX_STACK_LINE(96)
				{
					HX_STACK_LINE(96)
					Float tmp15 = angle;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(96)
					Float tmp16 = ::Math_obj::sin(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(96)
					Float tmp17 = radius;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(96)
					Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(96)
					Float _y = tmp18;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(96)
					vector->y = _y;
					HX_STACK_LINE(96)
					bool tmp19 = vector->_construct;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(96)
					if ((tmp19)){
						HX_STACK_LINE(96)
						vector->y;
					}
					else{
						HX_STACK_LINE(96)
						bool tmp20 = (vector->listen_y != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(96)
						bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(96)
						if ((tmp20)){
							HX_STACK_LINE(96)
							bool tmp22 = vector->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(96)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(96)
							tmp21 = !(tmp23);
						}
						else{
							HX_STACK_LINE(96)
							tmp21 = false;
						}
						HX_STACK_LINE(96)
						if ((tmp21)){
							HX_STACK_LINE(96)
							Float tmp22 = _y;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(96)
							vector->listen_y(tmp22);
						}
						HX_STACK_LINE(96)
						vector->y;
					}
				}
				HX_STACK_LINE(97)
				::phoenix::Vector tmp15 = vector;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(97)
				vertices->push(tmp15);
			}
		}
		HX_STACK_LINE(100)
		::luxe::collision::shapes::Polygon tmp5 = ::luxe::collision::shapes::Polygon_obj::__new(x,y,vertices);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(100)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Polygon_obj,create,return )

::luxe::collision::shapes::Polygon Polygon_obj::rectangle( Float x,Float y,Float width,Float height,hx::Null< bool >  __o_centered){
bool centered = __o_centered.Default(true);
	HX_STACK_FRAME("luxe.collision.shapes.Polygon","rectangle",0x40348913,"luxe.collision.shapes.Polygon.rectangle","luxe/collision/shapes/Polygon.hx",106,0x6040276b)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(centered,"centered")
{
		HX_STACK_LINE(108)
		Array< ::Dynamic > vertices = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(110)
		bool tmp = centered;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		if ((tmp)){
			HX_STACK_LINE(112)
			Float tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(112)
			Float tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(112)
			Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(112)
			Float tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(112)
			Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(112)
			Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(112)
			::phoenix::Vector tmp7 = ::phoenix::Vector_obj::__new(tmp3,tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(112)
			vertices->push(tmp7);
			HX_STACK_LINE(113)
			Float tmp8 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(113)
			Float tmp9 = height;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(113)
			Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(113)
			Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(113)
			::phoenix::Vector tmp12 = ::phoenix::Vector_obj::__new(tmp8,tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(113)
			vertices->push(tmp12);
			HX_STACK_LINE(114)
			Float tmp13 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(114)
			Float tmp14 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(114)
			::phoenix::Vector tmp15 = ::phoenix::Vector_obj::__new(tmp13,tmp14,null(),null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(114)
			vertices->push(tmp15);
			HX_STACK_LINE(115)
			Float tmp16 = width;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(115)
			Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(115)
			Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(115)
			Float tmp19 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(115)
			::phoenix::Vector tmp20 = ::phoenix::Vector_obj::__new(tmp18,tmp19,null(),null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(115)
			vertices->push(tmp20);
		}
		else{
			HX_STACK_LINE(119)
			::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(119)
			vertices->push(tmp1);
			HX_STACK_LINE(120)
			::phoenix::Vector tmp2 = ::phoenix::Vector_obj::__new(width,(int)0,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(120)
			vertices->push(tmp2);
			HX_STACK_LINE(121)
			::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(width,height,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(121)
			vertices->push(tmp3);
			HX_STACK_LINE(122)
			::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new((int)0,height,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(122)
			vertices->push(tmp4);
		}
		HX_STACK_LINE(126)
		::luxe::collision::shapes::Polygon tmp1 = ::luxe::collision::shapes::Polygon_obj::__new(x,y,vertices);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Polygon_obj,rectangle,return )

::luxe::collision::shapes::Polygon Polygon_obj::square( Float x,Float y,Float width,hx::Null< bool >  __o_centered){
bool centered = __o_centered.Default(true);
	HX_STACK_FRAME("luxe.collision.shapes.Polygon","square",0x7fdc1539,"luxe.collision.shapes.Polygon.square","luxe/collision/shapes/Polygon.hx",132,0x6040276b)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(centered,"centered")
{
		HX_STACK_LINE(134)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		Float tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		Float tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		bool tmp4 = centered;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		::luxe::collision::shapes::Polygon tmp5 = ::luxe::collision::shapes::Polygon_obj::rectangle(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(134)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Polygon_obj,square,return )

::luxe::collision::shapes::Polygon Polygon_obj::triangle( Float x,Float y,Float radius){
	HX_STACK_FRAME("luxe.collision.shapes.Polygon","triangle",0xd2d33264,"luxe.collision.shapes.Polygon.triangle","luxe/collision/shapes/Polygon.hx",140,0x6040276b)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_LINE(142)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(142)
	Float tmp2 = radius;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(142)
	::luxe::collision::shapes::Polygon tmp3 = ::luxe::collision::shapes::Polygon_obj::create(tmp,tmp1,(int)3,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(142)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygon_obj,triangle,return )


Polygon_obj::Polygon_obj()
{
}

void Polygon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Polygon);
	HX_MARK_MEMBER_NAME(_transformedVertices,"_transformedVertices");
	HX_MARK_MEMBER_NAME(_vertices,"_vertices");
	::luxe::collision::shapes::Shape_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Polygon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_transformedVertices,"_transformedVertices");
	HX_VISIT_MEMBER_NAME(_vertices,"_vertices");
	::luxe::collision::shapes::Shape_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Polygon_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"test") ) { return test_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"testRay") ) { return testRay_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { if (inCallProp == hx::paccAlways) return get_vertices(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_vertices") ) { return _vertices; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testCircle") ) { return testCircle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"testPolygon") ) { return testPolygon_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_vertices") ) { return get_vertices_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"transformedVertices") ) { if (inCallProp == hx::paccAlways) return get_transformedVertices(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_transformedVertices") ) { return _transformedVertices; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_transformedVertices") ) { return get_transformedVertices_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Polygon_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"square") ) { outValue = square_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"triangle") ) { outValue = triangle_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rectangle") ) { outValue = rectangle_dyn(); return true;  }
	}
	return false;
}

Dynamic Polygon_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_vertices") ) { _vertices=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_transformedVertices") ) { _transformedVertices=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Polygon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("transformedVertices","\xe4","\x77","\x78","\x19"));
	outFields->push(HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"));
	outFields->push(HX_HCSTRING("_transformedVertices","\xe5","\x8e","\xd1","\x18"));
	outFields->push(HX_HCSTRING("_vertices","\x58","\xb7","\xab","\xb1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Polygon_obj,_transformedVertices),HX_HCSTRING("_transformedVertices","\xe5","\x8e","\xd1","\x18")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Polygon_obj,_vertices),HX_HCSTRING("_vertices","\x58","\xb7","\xab","\xb1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_transformedVertices","\xe5","\x8e","\xd1","\x18"),
	HX_HCSTRING("_vertices","\x58","\xb7","\xab","\xb1"),
	HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c"),
	HX_HCSTRING("testCircle","\x02","\xb8","\x01","\x6f"),
	HX_HCSTRING("testPolygon","\x48","\xf0","\x59","\xcf"),
	HX_HCSTRING("testRay","\xb8","\x44","\xc5","\xbd"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("get_transformedVertices","\x7b","\x1e","\xce","\x21"),
	HX_HCSTRING("get_vertices","\x02","\x74","\x2f","\x1f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
};

#endif

hx::Class Polygon_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("rectangle","\x2f","\xd4","\x7c","\x19"),
	HX_HCSTRING("square","\x9d","\x00","\xf2","\x58"),
	HX_HCSTRING("triangle","\xc8","\xbe","\xc5","\x8d"),
	::String(null()) };

void Polygon_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.collision.shapes.Polygon","\x52","\xd0","\x33","\xfd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Polygon_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Polygon_obj >;
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

} // end namespace luxe
} // end namespace collision
} // end namespace shapes
