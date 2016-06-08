#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_collision_data_RayCollision
#include <luxe/collision/data/RayCollision.h>
#endif
#ifndef INCLUDED_luxe_collision_data_RayIntersection
#include <luxe/collision/data/RayIntersection.h>
#endif
#ifndef INCLUDED_luxe_collision_data_ShapeCollision
#include <luxe/collision/data/ShapeCollision.h>
#endif
#ifndef INCLUDED_luxe_collision_sat_Common
#include <luxe/collision/sat/Common.h>
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
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{
namespace collision{
namespace sat{

Void SAT2D_obj::__construct()
{
	return null();
}

//SAT2D_obj::~SAT2D_obj() { }

Dynamic SAT2D_obj::__CreateEmpty() { return  new SAT2D_obj; }
hx::ObjectPtr< SAT2D_obj > SAT2D_obj::__new()
{  hx::ObjectPtr< SAT2D_obj > _result_ = new SAT2D_obj();
	_result_->__construct();
	return _result_;}

Dynamic SAT2D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SAT2D_obj > _result_ = new SAT2D_obj();
	_result_->__construct();
	return _result_;}

::luxe::collision::data::ShapeCollision SAT2D_obj::testCircleVsPolygon( ::luxe::collision::shapes::Circle circle,::luxe::collision::shapes::Polygon polygon,hx::Null< bool >  __o_flip){
bool flip = __o_flip.Default(false);
	HX_STACK_FRAME("luxe.collision.sat.SAT2D","testCircleVsPolygon",0xd9d5ba49,"luxe.collision.sat.SAT2D.testCircleVsPolygon","luxe/collision/sat/SAT2D.hx",13,0x7b849025)
	HX_STACK_ARG(circle,"circle")
	HX_STACK_ARG(polygon,"polygon")
	HX_STACK_ARG(flip,"flip")
{
		HX_STACK_LINE(15)
		Float ep = ((Float)0.0000000001);		HX_STACK_VAR(ep,"ep");
		HX_STACK_LINE(16)
		Float test1;		HX_STACK_VAR(test1,"test1");
		HX_STACK_LINE(17)
		Float test2;		HX_STACK_VAR(test2,"test2");
		HX_STACK_LINE(18)
		Float test;		HX_STACK_VAR(test,"test");
		HX_STACK_LINE(20)
		Float min1 = (int)0;		HX_STACK_VAR(min1,"min1");
		HX_STACK_LINE(21)
		Float max1 = (int)1073741823;		HX_STACK_VAR(max1,"max1");
		HX_STACK_LINE(22)
		Float min2 = (int)0;		HX_STACK_VAR(min2,"min2");
		HX_STACK_LINE(23)
		Float max2 = (int)1073741823;		HX_STACK_VAR(max2,"max2");
		HX_STACK_LINE(24)
		::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		::phoenix::Vector normalAxis = tmp;		HX_STACK_VAR(normalAxis,"normalAxis");
		HX_STACK_LINE(25)
		Float offset;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(26)
		::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		::phoenix::Vector vectorOffset = tmp1;		HX_STACK_VAR(vectorOffset,"vectorOffset");
		HX_STACK_LINE(27)
		Array< ::Dynamic > vectors;		HX_STACK_VAR(vectors,"vectors");
		HX_STACK_LINE(28)
		Float shortestDistance = (int)1073741823;		HX_STACK_VAR(shortestDistance,"shortestDistance");
		HX_STACK_LINE(29)
		::luxe::collision::data::ShapeCollision tmp2 = ::luxe::collision::data::ShapeCollision_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		::luxe::collision::data::ShapeCollision collisionData = tmp2;		HX_STACK_VAR(collisionData,"collisionData");
		HX_STACK_LINE(30)
		Float distMin;		HX_STACK_VAR(distMin,"distMin");
		HX_STACK_LINE(32)
		Float distance = (int)-1;		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(33)
		Float testDistance = (int)1073741823;		HX_STACK_VAR(testDistance,"testDistance");
		HX_STACK_LINE(34)
		::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		::phoenix::Vector closestVector = tmp3;		HX_STACK_VAR(closestVector,"closestVector");
		HX_STACK_LINE(37)
		Float tmp4 = circle->_position->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		Float tmp6 = circle->_position->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(37)
		::phoenix::Vector tmp8 = ::phoenix::Vector_obj::__new(tmp5,tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(37)
		vectorOffset = tmp8;
		HX_STACK_LINE(38)
		vectors = polygon->get_transformedVertices()->copy();
		HX_STACK_LINE(41)
		bool tmp9 = (vectors->length == (int)2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(41)
		if ((tmp9)){
			HX_STACK_LINE(42)
			::phoenix::Vector tmp10 = vectors->__get((int)1).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(42)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(42)
			::phoenix::Vector tmp12 = vectors->__get((int)0).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(42)
			Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(42)
			Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(42)
			Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(42)
			::phoenix::Vector tmp16 = vectors->__get((int)1).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(42)
			Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(42)
			::phoenix::Vector tmp18 = vectors->__get((int)0).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(42)
			Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(42)
			Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(42)
			::phoenix::Vector tmp21 = ::phoenix::Vector_obj::__new(tmp15,tmp20,null(),null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(42)
			::phoenix::Vector temp = tmp21;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				{
					HX_STACK_LINE(43)
					Float tmp22 = ep;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(43)
					Float tmp23 = (temp->x * temp->x);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(43)
					Float tmp24 = (temp->y * temp->y);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(43)
					Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(43)
					Float tmp26 = (temp->z * temp->z);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(43)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(43)
					Float tmp28 = ::Math_obj::sqrt(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(43)
					Float tmp29 = ::Math_obj::min(tmp22,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(43)
					Float value = tmp29;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(43)
					{
						HX_STACK_LINE(43)
						::phoenix::Vector tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(43)
						{
							HX_STACK_LINE(43)
							Float tmp31 = (temp->x * temp->x);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(43)
							Float tmp32 = (temp->y * temp->y);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(43)
							Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(43)
							Float tmp34 = (temp->z * temp->z);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(43)
							Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(43)
							Float tmp36 = ::Math_obj::sqrt(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(43)
							Float v = tmp36;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(43)
							bool tmp37 = (v != (int)0);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(43)
							if ((tmp37)){
								HX_STACK_LINE(43)
								Float tmp38 = (Float(temp->x) / Float(v));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(43)
								Float _x = tmp38;		HX_STACK_VAR(_x,"_x");
								HX_STACK_LINE(43)
								Float tmp39 = (Float(temp->y) / Float(v));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(43)
								Float _y = tmp39;		HX_STACK_VAR(_y,"_y");
								HX_STACK_LINE(43)
								Float tmp40 = (Float(temp->z) / Float(v));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(43)
								Float _z = tmp40;		HX_STACK_VAR(_z,"_z");
								HX_STACK_LINE(43)
								bool prev = temp->ignore_listeners;		HX_STACK_VAR(prev,"prev");
								HX_STACK_LINE(43)
								temp->ignore_listeners = true;
								HX_STACK_LINE(43)
								{
									HX_STACK_LINE(43)
									temp->x = _x;
									HX_STACK_LINE(43)
									bool tmp41 = temp->_construct;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(43)
									if ((tmp41)){
										HX_STACK_LINE(43)
										temp->x;
									}
									else{
										HX_STACK_LINE(43)
										bool tmp42 = (temp->listen_x != null());		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(43)
										bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(43)
										if ((tmp42)){
											HX_STACK_LINE(43)
											bool tmp44 = temp->ignore_listeners;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(43)
											bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(43)
											tmp43 = !(tmp45);
										}
										else{
											HX_STACK_LINE(43)
											tmp43 = false;
										}
										HX_STACK_LINE(43)
										if ((tmp43)){
											HX_STACK_LINE(43)
											Float tmp44 = _x;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(43)
											temp->listen_x(tmp44);
										}
										HX_STACK_LINE(43)
										temp->x;
									}
								}
								HX_STACK_LINE(43)
								{
									HX_STACK_LINE(43)
									temp->y = _y;
									HX_STACK_LINE(43)
									bool tmp41 = temp->_construct;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(43)
									if ((tmp41)){
										HX_STACK_LINE(43)
										temp->y;
									}
									else{
										HX_STACK_LINE(43)
										bool tmp42 = (temp->listen_y != null());		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(43)
										bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(43)
										if ((tmp42)){
											HX_STACK_LINE(43)
											bool tmp44 = temp->ignore_listeners;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(43)
											bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(43)
											tmp43 = !(tmp45);
										}
										else{
											HX_STACK_LINE(43)
											tmp43 = false;
										}
										HX_STACK_LINE(43)
										if ((tmp43)){
											HX_STACK_LINE(43)
											Float tmp44 = _y;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(43)
											temp->listen_y(tmp44);
										}
										HX_STACK_LINE(43)
										temp->y;
									}
								}
								HX_STACK_LINE(43)
								{
									HX_STACK_LINE(43)
									temp->z = _z;
									HX_STACK_LINE(43)
									bool tmp41 = temp->_construct;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(43)
									if ((tmp41)){
										HX_STACK_LINE(43)
										temp->z;
									}
									else{
										HX_STACK_LINE(43)
										bool tmp42 = (temp->listen_z != null());		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(43)
										bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(43)
										if ((tmp42)){
											HX_STACK_LINE(43)
											bool tmp44 = temp->ignore_listeners;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(43)
											bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(43)
											tmp43 = !(tmp45);
										}
										else{
											HX_STACK_LINE(43)
											tmp43 = false;
										}
										HX_STACK_LINE(43)
										if ((tmp43)){
											HX_STACK_LINE(43)
											Float tmp44 = _z;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(43)
											temp->listen_z(tmp44);
										}
										HX_STACK_LINE(43)
										temp->z;
									}
								}
								HX_STACK_LINE(43)
								temp->ignore_listeners = prev;
								HX_STACK_LINE(43)
								bool tmp41 = (temp->listen_x != null());		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(43)
								bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(43)
								if ((tmp41)){
									HX_STACK_LINE(43)
									bool tmp43 = temp->ignore_listeners;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(43)
									bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(43)
									tmp42 = !(tmp44);
								}
								else{
									HX_STACK_LINE(43)
									tmp42 = false;
								}
								HX_STACK_LINE(43)
								if ((tmp42)){
									HX_STACK_LINE(43)
									Float tmp43 = temp->x;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(43)
									temp->listen_x(tmp43);
								}
								HX_STACK_LINE(43)
								bool tmp43 = (temp->listen_y != null());		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(43)
								bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(43)
								if ((tmp43)){
									HX_STACK_LINE(43)
									bool tmp45 = temp->ignore_listeners;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(43)
									bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(43)
									tmp44 = !(tmp46);
								}
								else{
									HX_STACK_LINE(43)
									tmp44 = false;
								}
								HX_STACK_LINE(43)
								if ((tmp44)){
									HX_STACK_LINE(43)
									Float tmp45 = temp->y;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(43)
									temp->listen_y(tmp45);
								}
								HX_STACK_LINE(43)
								bool tmp45 = (temp->listen_z != null());		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(43)
								bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(43)
								if ((tmp45)){
									HX_STACK_LINE(43)
									bool tmp47 = temp->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(43)
									bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(43)
									tmp46 = !(tmp48);
								}
								else{
									HX_STACK_LINE(43)
									tmp46 = false;
								}
								HX_STACK_LINE(43)
								if ((tmp46)){
									HX_STACK_LINE(43)
									Float tmp47 = temp->z;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(43)
									temp->listen_z(tmp47);
								}
								HX_STACK_LINE(43)
								temp;
							}
							else{
								HX_STACK_LINE(43)
								bool prev = temp->ignore_listeners;		HX_STACK_VAR(prev,"prev");
								HX_STACK_LINE(43)
								temp->ignore_listeners = true;
								HX_STACK_LINE(43)
								{
									HX_STACK_LINE(43)
									temp->x = (int)0;
									HX_STACK_LINE(43)
									bool tmp38 = temp->_construct;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(43)
									if ((tmp38)){
										HX_STACK_LINE(43)
										temp->x;
									}
									else{
										HX_STACK_LINE(43)
										bool tmp39 = (temp->listen_x != null());		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(43)
										bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(43)
										if ((tmp39)){
											HX_STACK_LINE(43)
											bool tmp41 = temp->ignore_listeners;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(43)
											bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(43)
											tmp40 = !(tmp42);
										}
										else{
											HX_STACK_LINE(43)
											tmp40 = false;
										}
										HX_STACK_LINE(43)
										if ((tmp40)){
											HX_STACK_LINE(43)
											temp->listen_x((int)0);
										}
										HX_STACK_LINE(43)
										temp->x;
									}
								}
								HX_STACK_LINE(43)
								{
									HX_STACK_LINE(43)
									temp->y = (int)0;
									HX_STACK_LINE(43)
									bool tmp38 = temp->_construct;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(43)
									if ((tmp38)){
										HX_STACK_LINE(43)
										temp->y;
									}
									else{
										HX_STACK_LINE(43)
										bool tmp39 = (temp->listen_y != null());		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(43)
										bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(43)
										if ((tmp39)){
											HX_STACK_LINE(43)
											bool tmp41 = temp->ignore_listeners;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(43)
											bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(43)
											tmp40 = !(tmp42);
										}
										else{
											HX_STACK_LINE(43)
											tmp40 = false;
										}
										HX_STACK_LINE(43)
										if ((tmp40)){
											HX_STACK_LINE(43)
											temp->listen_y((int)0);
										}
										HX_STACK_LINE(43)
										temp->y;
									}
								}
								HX_STACK_LINE(43)
								{
									HX_STACK_LINE(43)
									temp->z = (int)0;
									HX_STACK_LINE(43)
									bool tmp38 = temp->_construct;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(43)
									if ((tmp38)){
										HX_STACK_LINE(43)
										temp->z;
									}
									else{
										HX_STACK_LINE(43)
										bool tmp39 = (temp->listen_z != null());		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(43)
										bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(43)
										if ((tmp39)){
											HX_STACK_LINE(43)
											bool tmp41 = temp->ignore_listeners;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(43)
											bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(43)
											tmp40 = !(tmp42);
										}
										else{
											HX_STACK_LINE(43)
											tmp40 = false;
										}
										HX_STACK_LINE(43)
										if ((tmp40)){
											HX_STACK_LINE(43)
											temp->listen_z((int)0);
										}
										HX_STACK_LINE(43)
										temp->z;
									}
								}
								HX_STACK_LINE(43)
								temp->ignore_listeners = prev;
								HX_STACK_LINE(43)
								bool tmp38 = (temp->listen_x != null());		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(43)
								bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(43)
								if ((tmp38)){
									HX_STACK_LINE(43)
									bool tmp40 = temp->ignore_listeners;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(43)
									bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(43)
									tmp39 = !(tmp41);
								}
								else{
									HX_STACK_LINE(43)
									tmp39 = false;
								}
								HX_STACK_LINE(43)
								if ((tmp39)){
									HX_STACK_LINE(43)
									Float tmp40 = temp->x;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(43)
									temp->listen_x(tmp40);
								}
								HX_STACK_LINE(43)
								bool tmp40 = (temp->listen_y != null());		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(43)
								bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(43)
								if ((tmp40)){
									HX_STACK_LINE(43)
									bool tmp42 = temp->ignore_listeners;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(43)
									bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(43)
									tmp41 = !(tmp43);
								}
								else{
									HX_STACK_LINE(43)
									tmp41 = false;
								}
								HX_STACK_LINE(43)
								if ((tmp41)){
									HX_STACK_LINE(43)
									Float tmp42 = temp->y;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(43)
									temp->listen_y(tmp42);
								}
								HX_STACK_LINE(43)
								bool tmp42 = (temp->listen_z != null());		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(43)
								bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(43)
								if ((tmp42)){
									HX_STACK_LINE(43)
									bool tmp44 = temp->ignore_listeners;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(43)
									bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(43)
									tmp43 = !(tmp45);
								}
								else{
									HX_STACK_LINE(43)
									tmp43 = false;
								}
								HX_STACK_LINE(43)
								if ((tmp43)){
									HX_STACK_LINE(43)
									Float tmp44 = temp->z;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(43)
									temp->listen_z(tmp44);
								}
								HX_STACK_LINE(43)
								temp;
							}
							HX_STACK_LINE(43)
							tmp30 = temp;
						}
						HX_STACK_LINE(43)
						::phoenix::Vector _this = tmp30;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(43)
						{
							HX_STACK_LINE(43)
							Float tmp31 = (_this->x * value);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(43)
							Float _x = tmp31;		HX_STACK_VAR(_x,"_x");
							HX_STACK_LINE(43)
							Float tmp32 = (_this->y * value);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(43)
							Float _y = tmp32;		HX_STACK_VAR(_y,"_y");
							HX_STACK_LINE(43)
							Float tmp33 = (_this->z * value);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(43)
							Float _z = tmp33;		HX_STACK_VAR(_z,"_z");
							HX_STACK_LINE(43)
							bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(43)
							_this->ignore_listeners = true;
							HX_STACK_LINE(43)
							{
								HX_STACK_LINE(43)
								_this->x = _x;
								HX_STACK_LINE(43)
								bool tmp34 = _this->_construct;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(43)
								if ((tmp34)){
									HX_STACK_LINE(43)
									_this->x;
								}
								else{
									HX_STACK_LINE(43)
									bool tmp35 = (_this->listen_x != null());		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(43)
									bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(43)
									if ((tmp35)){
										HX_STACK_LINE(43)
										bool tmp37 = _this->ignore_listeners;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(43)
										bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(43)
										tmp36 = !(tmp38);
									}
									else{
										HX_STACK_LINE(43)
										tmp36 = false;
									}
									HX_STACK_LINE(43)
									if ((tmp36)){
										HX_STACK_LINE(43)
										Float tmp37 = _x;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(43)
										_this->listen_x(tmp37);
									}
									HX_STACK_LINE(43)
									_this->x;
								}
							}
							HX_STACK_LINE(43)
							{
								HX_STACK_LINE(43)
								_this->y = _y;
								HX_STACK_LINE(43)
								bool tmp34 = _this->_construct;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(43)
								if ((tmp34)){
									HX_STACK_LINE(43)
									_this->y;
								}
								else{
									HX_STACK_LINE(43)
									bool tmp35 = (_this->listen_y != null());		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(43)
									bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(43)
									if ((tmp35)){
										HX_STACK_LINE(43)
										bool tmp37 = _this->ignore_listeners;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(43)
										bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(43)
										tmp36 = !(tmp38);
									}
									else{
										HX_STACK_LINE(43)
										tmp36 = false;
									}
									HX_STACK_LINE(43)
									if ((tmp36)){
										HX_STACK_LINE(43)
										Float tmp37 = _y;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(43)
										_this->listen_y(tmp37);
									}
									HX_STACK_LINE(43)
									_this->y;
								}
							}
							HX_STACK_LINE(43)
							{
								HX_STACK_LINE(43)
								_this->z = _z;
								HX_STACK_LINE(43)
								bool tmp34 = _this->_construct;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(43)
								if ((tmp34)){
									HX_STACK_LINE(43)
									_this->z;
								}
								else{
									HX_STACK_LINE(43)
									bool tmp35 = (_this->listen_z != null());		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(43)
									bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(43)
									if ((tmp35)){
										HX_STACK_LINE(43)
										bool tmp37 = _this->ignore_listeners;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(43)
										bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(43)
										tmp36 = !(tmp38);
									}
									else{
										HX_STACK_LINE(43)
										tmp36 = false;
									}
									HX_STACK_LINE(43)
									if ((tmp36)){
										HX_STACK_LINE(43)
										Float tmp37 = _z;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(43)
										_this->listen_z(tmp37);
									}
									HX_STACK_LINE(43)
									_this->z;
								}
							}
							HX_STACK_LINE(43)
							_this->ignore_listeners = prev;
							HX_STACK_LINE(43)
							bool tmp34 = (_this->listen_x != null());		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(43)
							bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(43)
							if ((tmp34)){
								HX_STACK_LINE(43)
								bool tmp36 = _this->ignore_listeners;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(43)
								bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(43)
								tmp35 = !(tmp37);
							}
							else{
								HX_STACK_LINE(43)
								tmp35 = false;
							}
							HX_STACK_LINE(43)
							if ((tmp35)){
								HX_STACK_LINE(43)
								Float tmp36 = _this->x;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(43)
								_this->listen_x(tmp36);
							}
							HX_STACK_LINE(43)
							bool tmp36 = (_this->listen_y != null());		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(43)
							bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(43)
							if ((tmp36)){
								HX_STACK_LINE(43)
								bool tmp38 = _this->ignore_listeners;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(43)
								bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(43)
								tmp37 = !(tmp39);
							}
							else{
								HX_STACK_LINE(43)
								tmp37 = false;
							}
							HX_STACK_LINE(43)
							if ((tmp37)){
								HX_STACK_LINE(43)
								Float tmp38 = _this->y;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(43)
								_this->listen_y(tmp38);
							}
							HX_STACK_LINE(43)
							bool tmp38 = (_this->listen_z != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(43)
							bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(43)
							if ((tmp38)){
								HX_STACK_LINE(43)
								bool tmp40 = _this->ignore_listeners;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(43)
								bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(43)
								tmp39 = !(tmp41);
							}
							else{
								HX_STACK_LINE(43)
								tmp39 = false;
							}
							HX_STACK_LINE(43)
							if ((tmp39)){
								HX_STACK_LINE(43)
								Float tmp40 = _this->z;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(43)
								_this->listen_z(tmp40);
							}
							HX_STACK_LINE(43)
							_this;
						}
						HX_STACK_LINE(43)
						_this;
					}
					HX_STACK_LINE(43)
					value;
				}
				HX_STACK_LINE(43)
				temp;
			}
			HX_STACK_LINE(44)
			::phoenix::Vector tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				::phoenix::Vector tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(44)
				{
					HX_STACK_LINE(44)
					::phoenix::Vector tmp24 = vectors->__get((int)1).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(44)
					::phoenix::Vector _this = tmp24;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(44)
					tmp23 = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
				}
				HX_STACK_LINE(44)
				::phoenix::Vector _this = tmp23;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(44)
				{
					HX_STACK_LINE(44)
					bool tmp24 = (temp == null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(44)
					if ((tmp24)){
						HX_STACK_LINE(44)
						::String tmp25 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(44)
						::luxe::DebugError tmp26 = ::luxe::DebugError_obj::null_assertion(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(44)
						HX_STACK_DO_THROW(tmp26);
					}
				}
				HX_STACK_LINE(44)
				{
					HX_STACK_LINE(44)
					Float tmp24 = (_this->x + temp->x);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(44)
					Float _x = tmp24;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(44)
					Float tmp25 = (_this->y + temp->y);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(44)
					Float _y = tmp25;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(44)
					Float tmp26 = (_this->z + temp->z);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(44)
					Float _z = tmp26;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(44)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(44)
					_this->ignore_listeners = true;
					HX_STACK_LINE(44)
					{
						HX_STACK_LINE(44)
						_this->x = _x;
						HX_STACK_LINE(44)
						bool tmp27 = _this->_construct;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(44)
						if ((tmp27)){
							HX_STACK_LINE(44)
							_this->x;
						}
						else{
							HX_STACK_LINE(44)
							bool tmp28 = (_this->listen_x != null());		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(44)
							bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(44)
							if ((tmp28)){
								HX_STACK_LINE(44)
								bool tmp30 = _this->ignore_listeners;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(44)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(44)
								tmp29 = !(tmp31);
							}
							else{
								HX_STACK_LINE(44)
								tmp29 = false;
							}
							HX_STACK_LINE(44)
							if ((tmp29)){
								HX_STACK_LINE(44)
								Float tmp30 = _x;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(44)
								_this->listen_x(tmp30);
							}
							HX_STACK_LINE(44)
							_this->x;
						}
					}
					HX_STACK_LINE(44)
					{
						HX_STACK_LINE(44)
						_this->y = _y;
						HX_STACK_LINE(44)
						bool tmp27 = _this->_construct;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(44)
						if ((tmp27)){
							HX_STACK_LINE(44)
							_this->y;
						}
						else{
							HX_STACK_LINE(44)
							bool tmp28 = (_this->listen_y != null());		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(44)
							bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(44)
							if ((tmp28)){
								HX_STACK_LINE(44)
								bool tmp30 = _this->ignore_listeners;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(44)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(44)
								tmp29 = !(tmp31);
							}
							else{
								HX_STACK_LINE(44)
								tmp29 = false;
							}
							HX_STACK_LINE(44)
							if ((tmp29)){
								HX_STACK_LINE(44)
								Float tmp30 = _y;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(44)
								_this->listen_y(tmp30);
							}
							HX_STACK_LINE(44)
							_this->y;
						}
					}
					HX_STACK_LINE(44)
					{
						HX_STACK_LINE(44)
						_this->z = _z;
						HX_STACK_LINE(44)
						bool tmp27 = _this->_construct;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(44)
						if ((tmp27)){
							HX_STACK_LINE(44)
							_this->z;
						}
						else{
							HX_STACK_LINE(44)
							bool tmp28 = (_this->listen_z != null());		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(44)
							bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(44)
							if ((tmp28)){
								HX_STACK_LINE(44)
								bool tmp30 = _this->ignore_listeners;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(44)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(44)
								tmp29 = !(tmp31);
							}
							else{
								HX_STACK_LINE(44)
								tmp29 = false;
							}
							HX_STACK_LINE(44)
							if ((tmp29)){
								HX_STACK_LINE(44)
								Float tmp30 = _z;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(44)
								_this->listen_z(tmp30);
							}
							HX_STACK_LINE(44)
							_this->z;
						}
					}
					HX_STACK_LINE(44)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(44)
					bool tmp27 = (_this->listen_x != null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(44)
					bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(44)
					if ((tmp27)){
						HX_STACK_LINE(44)
						bool tmp29 = _this->ignore_listeners;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(44)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(44)
						tmp28 = !(tmp30);
					}
					else{
						HX_STACK_LINE(44)
						tmp28 = false;
					}
					HX_STACK_LINE(44)
					if ((tmp28)){
						HX_STACK_LINE(44)
						Float tmp29 = _this->x;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(44)
						_this->listen_x(tmp29);
					}
					HX_STACK_LINE(44)
					bool tmp29 = (_this->listen_y != null());		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(44)
					bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(44)
					if ((tmp29)){
						HX_STACK_LINE(44)
						bool tmp31 = _this->ignore_listeners;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(44)
						bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(44)
						tmp30 = !(tmp32);
					}
					else{
						HX_STACK_LINE(44)
						tmp30 = false;
					}
					HX_STACK_LINE(44)
					if ((tmp30)){
						HX_STACK_LINE(44)
						Float tmp31 = _this->y;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(44)
						_this->listen_y(tmp31);
					}
					HX_STACK_LINE(44)
					bool tmp31 = (_this->listen_z != null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(44)
					bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(44)
					if ((tmp31)){
						HX_STACK_LINE(44)
						bool tmp33 = _this->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(44)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(44)
						tmp32 = !(tmp34);
					}
					else{
						HX_STACK_LINE(44)
						tmp32 = false;
					}
					HX_STACK_LINE(44)
					if ((tmp32)){
						HX_STACK_LINE(44)
						Float tmp33 = _this->z;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(44)
						_this->listen_z(tmp33);
					}
					HX_STACK_LINE(44)
					_this;
				}
				HX_STACK_LINE(44)
				tmp22 = _this;
			}
			HX_STACK_LINE(44)
			vectors->push(tmp22);
		}
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(48)
			int _g = vectors->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(48)
			while((true)){
				HX_STACK_LINE(48)
				bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(48)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(48)
				if ((tmp11)){
					HX_STACK_LINE(48)
					break;
				}
				HX_STACK_LINE(48)
				int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(48)
				int i = tmp12;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(52)
				Float tmp13 = circle->_position->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(52)
				::phoenix::Vector tmp14 = vectors->__get(i).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(52)
				Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(52)
				Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(52)
				Float tmp17 = circle->_position->x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(52)
				::phoenix::Vector tmp18 = vectors->__get(i).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(52)
				Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(52)
				Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(52)
				Float tmp21 = (tmp16 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(53)
				Float tmp22 = circle->_position->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(53)
				::phoenix::Vector tmp23 = vectors->__get(i).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(53)
				Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(53)
				Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(53)
				Float tmp26 = circle->_position->y;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(53)
				::phoenix::Vector tmp27 = vectors->__get(i).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(53)
				Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(53)
				Float tmp29 = (tmp26 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(53)
				Float tmp30 = (tmp25 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(52)
				Float tmp31 = (tmp21 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(52)
				distance = tmp31;
				HX_STACK_LINE(55)
				bool tmp32 = (distance < testDistance);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(55)
				if ((tmp32)){
					HX_STACK_LINE(56)
					testDistance = distance;
					HX_STACK_LINE(57)
					{
						HX_STACK_LINE(57)
						::phoenix::Vector tmp33 = vectors->__get(i).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(57)
						Float _x = tmp33->x;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(57)
						closestVector->x = _x;
						HX_STACK_LINE(57)
						bool tmp34 = closestVector->_construct;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(57)
						if ((tmp34)){
							HX_STACK_LINE(57)
							closestVector->x;
						}
						else{
							HX_STACK_LINE(57)
							bool tmp35 = (closestVector->listen_x != null());		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(57)
							bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(57)
							if ((tmp35)){
								HX_STACK_LINE(57)
								bool tmp37 = closestVector->ignore_listeners;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(57)
								bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(57)
								tmp36 = !(tmp38);
							}
							else{
								HX_STACK_LINE(57)
								tmp36 = false;
							}
							HX_STACK_LINE(57)
							if ((tmp36)){
								HX_STACK_LINE(57)
								Float tmp37 = _x;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(57)
								closestVector->listen_x(tmp37);
							}
							HX_STACK_LINE(57)
							closestVector->x;
						}
					}
					HX_STACK_LINE(58)
					{
						HX_STACK_LINE(58)
						::phoenix::Vector tmp33 = vectors->__get(i).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(58)
						Float _y = tmp33->y;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(58)
						closestVector->y = _y;
						HX_STACK_LINE(58)
						bool tmp34 = closestVector->_construct;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(58)
						if ((tmp34)){
							HX_STACK_LINE(58)
							closestVector->y;
						}
						else{
							HX_STACK_LINE(58)
							bool tmp35 = (closestVector->listen_y != null());		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(58)
							bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(58)
							if ((tmp35)){
								HX_STACK_LINE(58)
								bool tmp37 = closestVector->ignore_listeners;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(58)
								bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(58)
								tmp36 = !(tmp38);
							}
							else{
								HX_STACK_LINE(58)
								tmp36 = false;
							}
							HX_STACK_LINE(58)
							if ((tmp36)){
								HX_STACK_LINE(58)
								Float tmp37 = _y;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(58)
								closestVector->listen_y(tmp37);
							}
							HX_STACK_LINE(58)
							closestVector->y;
						}
					}
				}
			}
		}
		HX_STACK_LINE(64)
		Float tmp10 = closestVector->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(64)
		Float tmp11 = circle->_position->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(64)
		Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(64)
		Float tmp13 = closestVector->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(64)
		Float tmp14 = circle->_position->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(64)
		Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(64)
		::phoenix::Vector tmp16 = ::phoenix::Vector_obj::__new(tmp12,tmp15,null(),null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(64)
		normalAxis = tmp16;
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			Float tmp17 = (normalAxis->x * normalAxis->x);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(65)
			Float tmp18 = (normalAxis->y * normalAxis->y);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(65)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(65)
			Float tmp20 = (normalAxis->z * normalAxis->z);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(65)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(65)
			Float tmp22 = ::Math_obj::sqrt(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(65)
			Float v = tmp22;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(65)
			bool tmp23 = (v != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(65)
			if ((tmp23)){
				HX_STACK_LINE(65)
				Float tmp24 = (Float(normalAxis->x) / Float(v));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(65)
				Float _x = tmp24;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(65)
				Float tmp25 = (Float(normalAxis->y) / Float(v));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(65)
				Float _y = tmp25;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(65)
				Float tmp26 = (Float(normalAxis->z) / Float(v));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(65)
				Float _z = tmp26;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(65)
				bool prev = normalAxis->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(65)
				normalAxis->ignore_listeners = true;
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					normalAxis->x = _x;
					HX_STACK_LINE(65)
					bool tmp27 = normalAxis->_construct;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(65)
					if ((tmp27)){
						HX_STACK_LINE(65)
						normalAxis->x;
					}
					else{
						HX_STACK_LINE(65)
						bool tmp28 = (normalAxis->listen_x != null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(65)
						bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(65)
						if ((tmp28)){
							HX_STACK_LINE(65)
							bool tmp30 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(65)
							bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(65)
							tmp29 = !(tmp31);
						}
						else{
							HX_STACK_LINE(65)
							tmp29 = false;
						}
						HX_STACK_LINE(65)
						if ((tmp29)){
							HX_STACK_LINE(65)
							Float tmp30 = _x;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(65)
							normalAxis->listen_x(tmp30);
						}
						HX_STACK_LINE(65)
						normalAxis->x;
					}
				}
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					normalAxis->y = _y;
					HX_STACK_LINE(65)
					bool tmp27 = normalAxis->_construct;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(65)
					if ((tmp27)){
						HX_STACK_LINE(65)
						normalAxis->y;
					}
					else{
						HX_STACK_LINE(65)
						bool tmp28 = (normalAxis->listen_y != null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(65)
						bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(65)
						if ((tmp28)){
							HX_STACK_LINE(65)
							bool tmp30 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(65)
							bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(65)
							tmp29 = !(tmp31);
						}
						else{
							HX_STACK_LINE(65)
							tmp29 = false;
						}
						HX_STACK_LINE(65)
						if ((tmp29)){
							HX_STACK_LINE(65)
							Float tmp30 = _y;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(65)
							normalAxis->listen_y(tmp30);
						}
						HX_STACK_LINE(65)
						normalAxis->y;
					}
				}
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					normalAxis->z = _z;
					HX_STACK_LINE(65)
					bool tmp27 = normalAxis->_construct;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(65)
					if ((tmp27)){
						HX_STACK_LINE(65)
						normalAxis->z;
					}
					else{
						HX_STACK_LINE(65)
						bool tmp28 = (normalAxis->listen_z != null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(65)
						bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(65)
						if ((tmp28)){
							HX_STACK_LINE(65)
							bool tmp30 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(65)
							bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(65)
							tmp29 = !(tmp31);
						}
						else{
							HX_STACK_LINE(65)
							tmp29 = false;
						}
						HX_STACK_LINE(65)
						if ((tmp29)){
							HX_STACK_LINE(65)
							Float tmp30 = _z;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(65)
							normalAxis->listen_z(tmp30);
						}
						HX_STACK_LINE(65)
						normalAxis->z;
					}
				}
				HX_STACK_LINE(65)
				normalAxis->ignore_listeners = prev;
				HX_STACK_LINE(65)
				bool tmp27 = (normalAxis->listen_x != null());		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(65)
				bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(65)
				if ((tmp27)){
					HX_STACK_LINE(65)
					bool tmp29 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(65)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(65)
					tmp28 = !(tmp30);
				}
				else{
					HX_STACK_LINE(65)
					tmp28 = false;
				}
				HX_STACK_LINE(65)
				if ((tmp28)){
					HX_STACK_LINE(65)
					Float tmp29 = normalAxis->x;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(65)
					normalAxis->listen_x(tmp29);
				}
				HX_STACK_LINE(65)
				bool tmp29 = (normalAxis->listen_y != null());		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(65)
				bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(65)
				if ((tmp29)){
					HX_STACK_LINE(65)
					bool tmp31 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(65)
					bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(65)
					tmp30 = !(tmp32);
				}
				else{
					HX_STACK_LINE(65)
					tmp30 = false;
				}
				HX_STACK_LINE(65)
				if ((tmp30)){
					HX_STACK_LINE(65)
					Float tmp31 = normalAxis->y;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(65)
					normalAxis->listen_y(tmp31);
				}
				HX_STACK_LINE(65)
				bool tmp31 = (normalAxis->listen_z != null());		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(65)
				bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(65)
				if ((tmp31)){
					HX_STACK_LINE(65)
					bool tmp33 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(65)
					bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(65)
					tmp32 = !(tmp34);
				}
				else{
					HX_STACK_LINE(65)
					tmp32 = false;
				}
				HX_STACK_LINE(65)
				if ((tmp32)){
					HX_STACK_LINE(65)
					Float tmp33 = normalAxis->z;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(65)
					normalAxis->listen_z(tmp33);
				}
				HX_STACK_LINE(65)
				normalAxis;
			}
			else{
				HX_STACK_LINE(65)
				bool prev = normalAxis->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(65)
				normalAxis->ignore_listeners = true;
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					normalAxis->x = (int)0;
					HX_STACK_LINE(65)
					bool tmp24 = normalAxis->_construct;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(65)
					if ((tmp24)){
						HX_STACK_LINE(65)
						normalAxis->x;
					}
					else{
						HX_STACK_LINE(65)
						bool tmp25 = (normalAxis->listen_x != null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(65)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(65)
						if ((tmp25)){
							HX_STACK_LINE(65)
							bool tmp27 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(65)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(65)
							tmp26 = !(tmp28);
						}
						else{
							HX_STACK_LINE(65)
							tmp26 = false;
						}
						HX_STACK_LINE(65)
						if ((tmp26)){
							HX_STACK_LINE(65)
							normalAxis->listen_x((int)0);
						}
						HX_STACK_LINE(65)
						normalAxis->x;
					}
				}
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					normalAxis->y = (int)0;
					HX_STACK_LINE(65)
					bool tmp24 = normalAxis->_construct;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(65)
					if ((tmp24)){
						HX_STACK_LINE(65)
						normalAxis->y;
					}
					else{
						HX_STACK_LINE(65)
						bool tmp25 = (normalAxis->listen_y != null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(65)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(65)
						if ((tmp25)){
							HX_STACK_LINE(65)
							bool tmp27 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(65)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(65)
							tmp26 = !(tmp28);
						}
						else{
							HX_STACK_LINE(65)
							tmp26 = false;
						}
						HX_STACK_LINE(65)
						if ((tmp26)){
							HX_STACK_LINE(65)
							normalAxis->listen_y((int)0);
						}
						HX_STACK_LINE(65)
						normalAxis->y;
					}
				}
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					normalAxis->z = (int)0;
					HX_STACK_LINE(65)
					bool tmp24 = normalAxis->_construct;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(65)
					if ((tmp24)){
						HX_STACK_LINE(65)
						normalAxis->z;
					}
					else{
						HX_STACK_LINE(65)
						bool tmp25 = (normalAxis->listen_z != null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(65)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(65)
						if ((tmp25)){
							HX_STACK_LINE(65)
							bool tmp27 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(65)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(65)
							tmp26 = !(tmp28);
						}
						else{
							HX_STACK_LINE(65)
							tmp26 = false;
						}
						HX_STACK_LINE(65)
						if ((tmp26)){
							HX_STACK_LINE(65)
							normalAxis->listen_z((int)0);
						}
						HX_STACK_LINE(65)
						normalAxis->z;
					}
				}
				HX_STACK_LINE(65)
				normalAxis->ignore_listeners = prev;
				HX_STACK_LINE(65)
				bool tmp24 = (normalAxis->listen_x != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(65)
				bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(65)
				if ((tmp24)){
					HX_STACK_LINE(65)
					bool tmp26 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(65)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(65)
					tmp25 = !(tmp27);
				}
				else{
					HX_STACK_LINE(65)
					tmp25 = false;
				}
				HX_STACK_LINE(65)
				if ((tmp25)){
					HX_STACK_LINE(65)
					Float tmp26 = normalAxis->x;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(65)
					normalAxis->listen_x(tmp26);
				}
				HX_STACK_LINE(65)
				bool tmp26 = (normalAxis->listen_y != null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(65)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(65)
				if ((tmp26)){
					HX_STACK_LINE(65)
					bool tmp28 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(65)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(65)
					tmp27 = !(tmp29);
				}
				else{
					HX_STACK_LINE(65)
					tmp27 = false;
				}
				HX_STACK_LINE(65)
				if ((tmp27)){
					HX_STACK_LINE(65)
					Float tmp28 = normalAxis->y;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(65)
					normalAxis->listen_y(tmp28);
				}
				HX_STACK_LINE(65)
				bool tmp28 = (normalAxis->listen_z != null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(65)
				bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(65)
				if ((tmp28)){
					HX_STACK_LINE(65)
					bool tmp30 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(65)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(65)
					tmp29 = !(tmp31);
				}
				else{
					HX_STACK_LINE(65)
					tmp29 = false;
				}
				HX_STACK_LINE(65)
				if ((tmp29)){
					HX_STACK_LINE(65)
					Float tmp30 = normalAxis->z;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(65)
					normalAxis->listen_z(tmp30);
				}
				HX_STACK_LINE(65)
				normalAxis;
			}
			HX_STACK_LINE(65)
			normalAxis;
		}
		HX_STACK_LINE(68)
		Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			::phoenix::Vector tmp18 = vectors->__get((int)0).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(68)
			::phoenix::Vector other = tmp18;		HX_STACK_VAR(other,"other");
			HX_STACK_LINE(68)
			Float tmp19 = (normalAxis->x * other->x);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(68)
			Float tmp20 = (normalAxis->y * other->y);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(68)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(68)
			Float tmp22 = (normalAxis->z * other->z);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(68)
			tmp17 = (tmp21 + tmp22);
		}
		HX_STACK_LINE(68)
		min1 = tmp17;
		HX_STACK_LINE(69)
		max1 = min1;
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(71)
			int _g = vectors->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(71)
			while((true)){
				HX_STACK_LINE(71)
				bool tmp18 = (_g1 < _g);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(71)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(71)
				if ((tmp19)){
					HX_STACK_LINE(71)
					break;
				}
				HX_STACK_LINE(71)
				int tmp20 = (_g1)++;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(71)
				int j = tmp20;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(72)
				Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(72)
				{
					HX_STACK_LINE(72)
					::phoenix::Vector tmp22 = vectors->__get(j).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(72)
					::phoenix::Vector other = tmp22;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(72)
					Float tmp23 = (normalAxis->x * other->x);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(72)
					Float tmp24 = (normalAxis->y * other->y);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(72)
					Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(72)
					Float tmp26 = (normalAxis->z * other->z);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(72)
					tmp21 = (tmp25 + tmp26);
				}
				HX_STACK_LINE(72)
				test = tmp21;
				HX_STACK_LINE(73)
				bool tmp22 = (test < min1);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(73)
				if ((tmp22)){
					HX_STACK_LINE(74)
					min1 = test;
				}
				HX_STACK_LINE(76)
				bool tmp23 = (test > max1);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(76)
				if ((tmp23)){
					HX_STACK_LINE(77)
					max1 = test;
				}
			}
		}
		HX_STACK_LINE(82)
		Float tmp18 = circle->get_transformedRadius();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(82)
		max2 = tmp18;
		HX_STACK_LINE(83)
		Float tmp19 = circle->get_transformedRadius();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(83)
		hx::SubEq(min2,tmp19);
		HX_STACK_LINE(86)
		Float tmp20 = (normalAxis->x * vectorOffset->x);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(86)
		Float tmp21 = (normalAxis->y * vectorOffset->y);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(86)
		Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(86)
		Float tmp23 = (normalAxis->z * vectorOffset->z);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(86)
		Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(86)
		offset = tmp24;
		HX_STACK_LINE(87)
		hx::AddEq(min1,offset);
		HX_STACK_LINE(88)
		hx::AddEq(max1,offset);
		HX_STACK_LINE(91)
		Float tmp25 = (min1 - max2);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(91)
		test1 = tmp25;
		HX_STACK_LINE(92)
		Float tmp26 = (min2 - max1);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(92)
		test2 = tmp26;
		HX_STACK_LINE(94)
		bool tmp27 = (test1 > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(94)
		bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(94)
		bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(94)
		if ((tmp28)){
			HX_STACK_LINE(94)
			tmp29 = (test2 > (int)0);
		}
		else{
			HX_STACK_LINE(94)
			tmp29 = true;
		}
		HX_STACK_LINE(94)
		if ((tmp29)){
			HX_STACK_LINE(95)
			return null();
		}
		HX_STACK_LINE(99)
		Float tmp30 = (max2 - min1);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(99)
		Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(99)
		distMin = tmp31;
		HX_STACK_LINE(100)
		bool tmp32 = flip;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(100)
		if ((tmp32)){
			HX_STACK_LINE(100)
			hx::MultEq(distMin,(int)-1);
		}
		HX_STACK_LINE(101)
		Float tmp33 = distMin;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(101)
		Float tmp34 = ::Math_obj::abs(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(101)
		Float tmp35 = shortestDistance;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(101)
		bool tmp36 = (tmp34 < tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(101)
		if ((tmp36)){
			HX_STACK_LINE(102)
			collisionData->unitVector = normalAxis;
			HX_STACK_LINE(103)
			collisionData->overlap = distMin;
			HX_STACK_LINE(104)
			Float tmp37 = distMin;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(104)
			Float tmp38 = ::Math_obj::abs(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(104)
			shortestDistance = tmp38;
		}
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(108)
			int _g = vectors->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(108)
			while((true)){
				HX_STACK_LINE(108)
				bool tmp37 = (_g1 < _g);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(108)
				bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(108)
				if ((tmp38)){
					HX_STACK_LINE(108)
					break;
				}
				HX_STACK_LINE(108)
				int tmp39 = (_g1)++;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(108)
				int i = tmp39;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(110)
				int tmp40 = i;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(110)
				::phoenix::Vector tmp41 = ::luxe::collision::sat::Common_obj::findNormalAxis(vectors,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(110)
				normalAxis = tmp41;
				HX_STACK_LINE(113)
				Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(113)
				{
					HX_STACK_LINE(113)
					::phoenix::Vector tmp43 = vectors->__get((int)0).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(113)
					::phoenix::Vector other = tmp43;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(113)
					Float tmp44 = (normalAxis->x * other->x);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(113)
					Float tmp45 = (normalAxis->y * other->y);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(113)
					Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(113)
					Float tmp47 = (normalAxis->z * other->z);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(113)
					tmp42 = (tmp46 + tmp47);
				}
				HX_STACK_LINE(113)
				min1 = tmp42;
				HX_STACK_LINE(114)
				max1 = min1;
				HX_STACK_LINE(117)
				{
					HX_STACK_LINE(117)
					int _g3 = (int)1;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(117)
					int _g2 = vectors->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(117)
					while((true)){
						HX_STACK_LINE(117)
						bool tmp43 = (_g3 < _g2);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(117)
						bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(117)
						if ((tmp44)){
							HX_STACK_LINE(117)
							break;
						}
						HX_STACK_LINE(117)
						int tmp45 = (_g3)++;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(117)
						int j = tmp45;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(118)
						Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(118)
						{
							HX_STACK_LINE(118)
							::phoenix::Vector tmp47 = vectors->__get(j).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(118)
							::phoenix::Vector other = tmp47;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(118)
							Float tmp48 = (normalAxis->x * other->x);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(118)
							Float tmp49 = (normalAxis->y * other->y);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(118)
							Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(118)
							Float tmp51 = (normalAxis->z * other->z);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(118)
							tmp46 = (tmp50 + tmp51);
						}
						HX_STACK_LINE(118)
						test = tmp46;
						HX_STACK_LINE(119)
						bool tmp47 = (test < min1);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(119)
						if ((tmp47)){
							HX_STACK_LINE(120)
							min1 = test;
						}
						HX_STACK_LINE(122)
						bool tmp48 = (test > max1);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(122)
						if ((tmp48)){
							HX_STACK_LINE(123)
							max1 = test;
						}
					}
				}
				HX_STACK_LINE(128)
				Float tmp43 = circle->get_transformedRadius();		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(128)
				max2 = tmp43;
				HX_STACK_LINE(129)
				Float tmp44 = circle->get_transformedRadius();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(129)
				Float tmp45 = -(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(129)
				min2 = tmp45;
				HX_STACK_LINE(132)
				Float tmp46 = (normalAxis->x * vectorOffset->x);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(132)
				Float tmp47 = (normalAxis->y * vectorOffset->y);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(132)
				Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(132)
				Float tmp49 = (normalAxis->z * vectorOffset->z);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(132)
				Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(132)
				offset = tmp50;
				HX_STACK_LINE(133)
				hx::AddEq(min1,offset);
				HX_STACK_LINE(134)
				hx::AddEq(max1,offset);
				HX_STACK_LINE(137)
				Float tmp51 = (min1 - max2);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(137)
				test1 = tmp51;
				HX_STACK_LINE(138)
				Float tmp52 = (min2 - max1);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(138)
				test2 = tmp52;
				HX_STACK_LINE(141)
				bool tmp53 = (test1 > (int)0);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(141)
				bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(141)
				bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(141)
				if ((tmp54)){
					HX_STACK_LINE(141)
					tmp55 = (test2 > (int)0);
				}
				else{
					HX_STACK_LINE(141)
					tmp55 = true;
				}
				HX_STACK_LINE(141)
				if ((tmp55)){
					HX_STACK_LINE(142)
					return null();
				}
				HX_STACK_LINE(145)
				Float tmp56 = (max2 - min1);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(145)
				Float tmp57 = -(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(145)
				distMin = tmp57;
				HX_STACK_LINE(146)
				bool tmp58 = flip;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(146)
				if ((tmp58)){
					HX_STACK_LINE(146)
					hx::MultEq(distMin,(int)-1);
				}
				HX_STACK_LINE(147)
				Float tmp59 = distMin;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(147)
				Float tmp60 = ::Math_obj::abs(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(147)
				Float tmp61 = shortestDistance;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(147)
				bool tmp62 = (tmp60 < tmp61);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(147)
				if ((tmp62)){
					HX_STACK_LINE(148)
					collisionData->unitVector = normalAxis;
					HX_STACK_LINE(149)
					collisionData->overlap = distMin;
					HX_STACK_LINE(150)
					Float tmp63 = distMin;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(150)
					Float tmp64 = ::Math_obj::abs(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(150)
					shortestDistance = tmp64;
				}
			}
		}
		HX_STACK_LINE(157)
		bool tmp37 = flip;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(157)
		::luxe::collision::shapes::Shape tmp38;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(157)
		if ((tmp37)){
			HX_STACK_LINE(157)
			tmp38 = polygon;
		}
		else{
			HX_STACK_LINE(157)
			tmp38 = circle;
		}
		HX_STACK_LINE(157)
		collisionData->shape2 = tmp38;
		HX_STACK_LINE(158)
		bool tmp39 = flip;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(158)
		::luxe::collision::shapes::Shape tmp40;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(158)
		if ((tmp39)){
			HX_STACK_LINE(158)
			tmp40 = circle;
		}
		else{
			HX_STACK_LINE(158)
			tmp40 = polygon;
		}
		HX_STACK_LINE(158)
		collisionData->shape1 = tmp40;
		HX_STACK_LINE(159)
		Float tmp41 = collisionData->unitVector->x;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(159)
		Float tmp42 = -(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(159)
		Float tmp43 = collisionData->overlap;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(159)
		Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(160)
		Float tmp45 = collisionData->unitVector->y;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(160)
		Float tmp46 = -(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(160)
		Float tmp47 = collisionData->overlap;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(160)
		Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(159)
		::phoenix::Vector tmp49 = ::phoenix::Vector_obj::__new(tmp44,tmp48,null(),null());		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(159)
		collisionData->separation = tmp49;
		HX_STACK_LINE(162)
		bool tmp50 = flip;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(162)
		if ((tmp50)){
			HX_STACK_LINE(162)
			collisionData->unitVector->invert();
		}
		HX_STACK_LINE(164)
		::luxe::collision::data::ShapeCollision tmp51 = collisionData;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(164)
		return tmp51;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SAT2D_obj,testCircleVsPolygon,return )

::luxe::collision::data::ShapeCollision SAT2D_obj::testCircleVsCircle( ::luxe::collision::shapes::Circle circle1,::luxe::collision::shapes::Circle circle2){
	HX_STACK_FRAME("luxe.collision.sat.SAT2D","testCircleVsCircle",0xd9d0e921,"luxe.collision.sat.SAT2D.testCircleVsCircle","luxe/collision/sat/SAT2D.hx",169,0x7b849025)
	HX_STACK_ARG(circle1,"circle1")
	HX_STACK_ARG(circle2,"circle2")
	HX_STACK_LINE(173)
	Float tmp = circle1->get_transformedRadius();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	Float tmp1 = circle2->get_transformedRadius();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(173)
	Float totalRadius = tmp2;		HX_STACK_VAR(totalRadius,"totalRadius");
	HX_STACK_LINE(175)
	Float tmp3 = circle1->_position->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(175)
	Float tmp4 = circle2->_position->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(175)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(175)
	Float tmp6 = circle1->_position->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(175)
	Float tmp7 = circle2->_position->x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(175)
	Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(175)
	Float tmp9 = (tmp5 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(175)
	Float tmp10 = circle1->_position->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(175)
	Float tmp11 = circle2->_position->y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(175)
	Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(175)
	Float tmp13 = circle1->_position->y;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(175)
	Float tmp14 = circle2->_position->y;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(175)
	Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(175)
	Float tmp16 = (tmp12 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(175)
	Float tmp17 = (tmp9 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(175)
	Float distancesq = tmp17;		HX_STACK_VAR(distancesq,"distancesq");
	HX_STACK_LINE(178)
	Float tmp18 = distancesq;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(178)
	Float tmp19 = (totalRadius * totalRadius);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(178)
	bool tmp20 = (tmp18 < tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(178)
	if ((tmp20)){
		HX_STACK_LINE(181)
		Float tmp21 = totalRadius;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(181)
		Float tmp22 = distancesq;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(181)
		Float tmp23 = ::Math_obj::sqrt(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(181)
		Float tmp24 = (tmp21 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(181)
		Float difference = tmp24;		HX_STACK_VAR(difference,"difference");
		HX_STACK_LINE(183)
		::luxe::collision::data::ShapeCollision tmp25 = ::luxe::collision::data::ShapeCollision_obj::__new();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(183)
		::luxe::collision::data::ShapeCollision collisionData = tmp25;		HX_STACK_VAR(collisionData,"collisionData");
		HX_STACK_LINE(185)
		collisionData->shape1 = circle1;
		HX_STACK_LINE(186)
		collisionData->shape2 = circle2;
		HX_STACK_LINE(187)
		Float tmp26 = circle1->_position->x;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(187)
		Float tmp27 = circle2->_position->x;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(187)
		Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(187)
		Float tmp29 = circle1->_position->y;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(187)
		Float tmp30 = circle2->_position->y;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(187)
		Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(187)
		::phoenix::Vector tmp32 = ::phoenix::Vector_obj::__new(tmp28,tmp31,null(),null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(187)
		collisionData->unitVector = tmp32;
		HX_STACK_LINE(188)
		{
			HX_STACK_LINE(188)
			::phoenix::Vector _this = collisionData->unitVector;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(188)
			{
				HX_STACK_LINE(188)
				Float tmp33 = (_this->x * _this->x);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(188)
				Float tmp34 = (_this->y * _this->y);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(188)
				Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(188)
				Float tmp36 = (_this->z * _this->z);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(188)
				Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(188)
				Float tmp38 = ::Math_obj::sqrt(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(188)
				Float v = tmp38;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(188)
				bool tmp39 = (v != (int)0);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(188)
				if ((tmp39)){
					HX_STACK_LINE(188)
					Float tmp40 = (Float(_this->x) / Float(v));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(188)
					Float _x = tmp40;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(188)
					Float tmp41 = (Float(_this->y) / Float(v));		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(188)
					Float _y = tmp41;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(188)
					Float tmp42 = (Float(_this->z) / Float(v));		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(188)
					Float _z = tmp42;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(188)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(188)
					_this->ignore_listeners = true;
					HX_STACK_LINE(188)
					{
						HX_STACK_LINE(188)
						_this->x = _x;
						HX_STACK_LINE(188)
						bool tmp43 = _this->_construct;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(188)
						if ((tmp43)){
							HX_STACK_LINE(188)
							_this->x;
						}
						else{
							HX_STACK_LINE(188)
							bool tmp44 = (_this->listen_x != null());		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(188)
							bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(188)
							if ((tmp44)){
								HX_STACK_LINE(188)
								bool tmp46 = _this->ignore_listeners;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(188)
								bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(188)
								tmp45 = !(tmp47);
							}
							else{
								HX_STACK_LINE(188)
								tmp45 = false;
							}
							HX_STACK_LINE(188)
							if ((tmp45)){
								HX_STACK_LINE(188)
								Float tmp46 = _x;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(188)
								_this->listen_x(tmp46);
							}
							HX_STACK_LINE(188)
							_this->x;
						}
					}
					HX_STACK_LINE(188)
					{
						HX_STACK_LINE(188)
						_this->y = _y;
						HX_STACK_LINE(188)
						bool tmp43 = _this->_construct;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(188)
						if ((tmp43)){
							HX_STACK_LINE(188)
							_this->y;
						}
						else{
							HX_STACK_LINE(188)
							bool tmp44 = (_this->listen_y != null());		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(188)
							bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(188)
							if ((tmp44)){
								HX_STACK_LINE(188)
								bool tmp46 = _this->ignore_listeners;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(188)
								bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(188)
								tmp45 = !(tmp47);
							}
							else{
								HX_STACK_LINE(188)
								tmp45 = false;
							}
							HX_STACK_LINE(188)
							if ((tmp45)){
								HX_STACK_LINE(188)
								Float tmp46 = _y;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(188)
								_this->listen_y(tmp46);
							}
							HX_STACK_LINE(188)
							_this->y;
						}
					}
					HX_STACK_LINE(188)
					{
						HX_STACK_LINE(188)
						_this->z = _z;
						HX_STACK_LINE(188)
						bool tmp43 = _this->_construct;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(188)
						if ((tmp43)){
							HX_STACK_LINE(188)
							_this->z;
						}
						else{
							HX_STACK_LINE(188)
							bool tmp44 = (_this->listen_z != null());		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(188)
							bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(188)
							if ((tmp44)){
								HX_STACK_LINE(188)
								bool tmp46 = _this->ignore_listeners;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(188)
								bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(188)
								tmp45 = !(tmp47);
							}
							else{
								HX_STACK_LINE(188)
								tmp45 = false;
							}
							HX_STACK_LINE(188)
							if ((tmp45)){
								HX_STACK_LINE(188)
								Float tmp46 = _z;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(188)
								_this->listen_z(tmp46);
							}
							HX_STACK_LINE(188)
							_this->z;
						}
					}
					HX_STACK_LINE(188)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(188)
					bool tmp43 = (_this->listen_x != null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(188)
					bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(188)
					if ((tmp43)){
						HX_STACK_LINE(188)
						bool tmp45 = _this->ignore_listeners;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(188)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(188)
						tmp44 = !(tmp46);
					}
					else{
						HX_STACK_LINE(188)
						tmp44 = false;
					}
					HX_STACK_LINE(188)
					if ((tmp44)){
						HX_STACK_LINE(188)
						Float tmp45 = _this->x;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(188)
						_this->listen_x(tmp45);
					}
					HX_STACK_LINE(188)
					bool tmp45 = (_this->listen_y != null());		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(188)
					bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(188)
					if ((tmp45)){
						HX_STACK_LINE(188)
						bool tmp47 = _this->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(188)
						bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(188)
						tmp46 = !(tmp48);
					}
					else{
						HX_STACK_LINE(188)
						tmp46 = false;
					}
					HX_STACK_LINE(188)
					if ((tmp46)){
						HX_STACK_LINE(188)
						Float tmp47 = _this->y;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(188)
						_this->listen_y(tmp47);
					}
					HX_STACK_LINE(188)
					bool tmp47 = (_this->listen_z != null());		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(188)
					bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(188)
					if ((tmp47)){
						HX_STACK_LINE(188)
						bool tmp49 = _this->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(188)
						bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(188)
						tmp48 = !(tmp50);
					}
					else{
						HX_STACK_LINE(188)
						tmp48 = false;
					}
					HX_STACK_LINE(188)
					if ((tmp48)){
						HX_STACK_LINE(188)
						Float tmp49 = _this->z;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(188)
						_this->listen_z(tmp49);
					}
					HX_STACK_LINE(188)
					_this;
				}
				else{
					HX_STACK_LINE(188)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(188)
					_this->ignore_listeners = true;
					HX_STACK_LINE(188)
					{
						HX_STACK_LINE(188)
						_this->x = (int)0;
						HX_STACK_LINE(188)
						bool tmp40 = _this->_construct;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(188)
						if ((tmp40)){
							HX_STACK_LINE(188)
							_this->x;
						}
						else{
							HX_STACK_LINE(188)
							bool tmp41 = (_this->listen_x != null());		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(188)
							bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(188)
							if ((tmp41)){
								HX_STACK_LINE(188)
								bool tmp43 = _this->ignore_listeners;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(188)
								bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(188)
								tmp42 = !(tmp44);
							}
							else{
								HX_STACK_LINE(188)
								tmp42 = false;
							}
							HX_STACK_LINE(188)
							if ((tmp42)){
								HX_STACK_LINE(188)
								_this->listen_x((int)0);
							}
							HX_STACK_LINE(188)
							_this->x;
						}
					}
					HX_STACK_LINE(188)
					{
						HX_STACK_LINE(188)
						_this->y = (int)0;
						HX_STACK_LINE(188)
						bool tmp40 = _this->_construct;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(188)
						if ((tmp40)){
							HX_STACK_LINE(188)
							_this->y;
						}
						else{
							HX_STACK_LINE(188)
							bool tmp41 = (_this->listen_y != null());		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(188)
							bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(188)
							if ((tmp41)){
								HX_STACK_LINE(188)
								bool tmp43 = _this->ignore_listeners;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(188)
								bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(188)
								tmp42 = !(tmp44);
							}
							else{
								HX_STACK_LINE(188)
								tmp42 = false;
							}
							HX_STACK_LINE(188)
							if ((tmp42)){
								HX_STACK_LINE(188)
								_this->listen_y((int)0);
							}
							HX_STACK_LINE(188)
							_this->y;
						}
					}
					HX_STACK_LINE(188)
					{
						HX_STACK_LINE(188)
						_this->z = (int)0;
						HX_STACK_LINE(188)
						bool tmp40 = _this->_construct;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(188)
						if ((tmp40)){
							HX_STACK_LINE(188)
							_this->z;
						}
						else{
							HX_STACK_LINE(188)
							bool tmp41 = (_this->listen_z != null());		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(188)
							bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(188)
							if ((tmp41)){
								HX_STACK_LINE(188)
								bool tmp43 = _this->ignore_listeners;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(188)
								bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(188)
								tmp42 = !(tmp44);
							}
							else{
								HX_STACK_LINE(188)
								tmp42 = false;
							}
							HX_STACK_LINE(188)
							if ((tmp42)){
								HX_STACK_LINE(188)
								_this->listen_z((int)0);
							}
							HX_STACK_LINE(188)
							_this->z;
						}
					}
					HX_STACK_LINE(188)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(188)
					bool tmp40 = (_this->listen_x != null());		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(188)
					bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(188)
					if ((tmp40)){
						HX_STACK_LINE(188)
						bool tmp42 = _this->ignore_listeners;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(188)
						bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(188)
						tmp41 = !(tmp43);
					}
					else{
						HX_STACK_LINE(188)
						tmp41 = false;
					}
					HX_STACK_LINE(188)
					if ((tmp41)){
						HX_STACK_LINE(188)
						Float tmp42 = _this->x;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(188)
						_this->listen_x(tmp42);
					}
					HX_STACK_LINE(188)
					bool tmp42 = (_this->listen_y != null());		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(188)
					bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(188)
					if ((tmp42)){
						HX_STACK_LINE(188)
						bool tmp44 = _this->ignore_listeners;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(188)
						bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(188)
						tmp43 = !(tmp45);
					}
					else{
						HX_STACK_LINE(188)
						tmp43 = false;
					}
					HX_STACK_LINE(188)
					if ((tmp43)){
						HX_STACK_LINE(188)
						Float tmp44 = _this->y;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(188)
						_this->listen_y(tmp44);
					}
					HX_STACK_LINE(188)
					bool tmp44 = (_this->listen_z != null());		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(188)
					bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(188)
					if ((tmp44)){
						HX_STACK_LINE(188)
						bool tmp46 = _this->ignore_listeners;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(188)
						bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(188)
						tmp45 = !(tmp47);
					}
					else{
						HX_STACK_LINE(188)
						tmp45 = false;
					}
					HX_STACK_LINE(188)
					if ((tmp45)){
						HX_STACK_LINE(188)
						Float tmp46 = _this->z;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(188)
						_this->listen_z(tmp46);
					}
					HX_STACK_LINE(188)
					_this;
				}
				HX_STACK_LINE(188)
				_this;
			}
		}
		HX_STACK_LINE(191)
		Float tmp33 = collisionData->unitVector->x;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(191)
		Float tmp34 = difference;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(191)
		Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(192)
		Float tmp36 = collisionData->unitVector->y;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(192)
		Float tmp37 = difference;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(192)
		Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(191)
		::phoenix::Vector tmp39 = ::phoenix::Vector_obj::__new(tmp35,tmp38,null(),null());		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(191)
		collisionData->separation = tmp39;
		HX_STACK_LINE(195)
		Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(195)
		{
			HX_STACK_LINE(195)
			::phoenix::Vector _this = collisionData->separation;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(195)
			Float tmp41 = (_this->x * _this->x);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(195)
			Float tmp42 = (_this->y * _this->y);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(195)
			Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(195)
			Float tmp44 = (_this->z * _this->z);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(195)
			Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(195)
			tmp40 = ::Math_obj::sqrt(tmp45);
		}
		HX_STACK_LINE(195)
		collisionData->overlap = tmp40;
		HX_STACK_LINE(197)
		::luxe::collision::data::ShapeCollision tmp41 = collisionData;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(197)
		return tmp41;
	}
	HX_STACK_LINE(201)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SAT2D_obj,testCircleVsCircle,return )

::luxe::collision::data::ShapeCollision SAT2D_obj::testPolygonVsPolygon( ::luxe::collision::shapes::Polygon polygon1,::luxe::collision::shapes::Polygon polygon2,hx::Null< bool >  __o_flip){
bool flip = __o_flip.Default(false);
	HX_STACK_FRAME("luxe.collision.sat.SAT2D","testPolygonVsPolygon",0x381ddda7,"luxe.collision.sat.SAT2D.testPolygonVsPolygon","luxe/collision/sat/SAT2D.hx",206,0x7b849025)
	HX_STACK_ARG(polygon1,"polygon1")
	HX_STACK_ARG(polygon2,"polygon2")
	HX_STACK_ARG(flip,"flip")
{
		HX_STACK_LINE(208)
		::luxe::collision::shapes::Polygon tmp = polygon1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		::luxe::collision::shapes::Polygon tmp1 = polygon2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(208)
		bool tmp2 = flip;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(208)
		::luxe::collision::data::ShapeCollision tmp3 = ::luxe::collision::sat::SAT2D_obj::checkPolygons(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(208)
		::luxe::collision::data::ShapeCollision result1 = tmp3;		HX_STACK_VAR(result1,"result1");
		HX_STACK_LINE(210)
		bool tmp4 = (result1 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(210)
		if ((tmp4)){
			HX_STACK_LINE(210)
			return null();
		}
		HX_STACK_LINE(212)
		::luxe::collision::shapes::Polygon tmp5 = polygon2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(212)
		::luxe::collision::shapes::Polygon tmp6 = polygon1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(212)
		bool tmp7 = flip;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(212)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(212)
		::luxe::collision::data::ShapeCollision tmp9 = ::luxe::collision::sat::SAT2D_obj::checkPolygons(tmp5,tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(212)
		::luxe::collision::data::ShapeCollision result2 = tmp9;		HX_STACK_VAR(result2,"result2");
		HX_STACK_LINE(214)
		bool tmp10 = (result2 == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(214)
		if ((tmp10)){
			HX_STACK_LINE(214)
			return null();
		}
		HX_STACK_LINE(217)
		Float tmp11 = result1->overlap;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(217)
		Float tmp12 = ::Math_obj::abs(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(217)
		Float tmp13 = result2->overlap;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(217)
		Float tmp14 = ::Math_obj::abs(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(217)
		bool tmp15 = (tmp12 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(217)
		if ((tmp15)){
			HX_STACK_LINE(218)
			::luxe::collision::data::ShapeCollision tmp16 = result1;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(218)
			return tmp16;
		}
		else{
			HX_STACK_LINE(219)
			::luxe::collision::data::ShapeCollision tmp16 = result2;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(219)
			return tmp16;
		}
		HX_STACK_LINE(217)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SAT2D_obj,testPolygonVsPolygon,return )

::luxe::collision::data::RayCollision SAT2D_obj::testRayVsCircle( ::luxe::collision::shapes::Ray ray,::luxe::collision::shapes::Circle circle){
	HX_STACK_FRAME("luxe.collision.sat.SAT2D","testRayVsCircle",0x1c6510f3,"luxe.collision.sat.SAT2D.testRayVsCircle","luxe/collision/sat/SAT2D.hx",224,0x7b849025)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(circle,"circle")
	HX_STACK_LINE(226)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(226)
	{
		HX_STACK_LINE(226)
		::phoenix::Vector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(226)
		{
			HX_STACK_LINE(226)
			::phoenix::Vector _this = ray->end;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(226)
			tmp1 = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
		}
		HX_STACK_LINE(226)
		::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(226)
		::phoenix::Vector other = ray->start;		HX_STACK_VAR(other,"other");
		HX_STACK_LINE(226)
		{
			HX_STACK_LINE(226)
			bool tmp2 = (other == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(226)
			if ((tmp2)){
				HX_STACK_LINE(226)
				::String tmp3 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(226)
				::luxe::DebugError tmp4 = ::luxe::DebugError_obj::null_assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(226)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(226)
		{
			HX_STACK_LINE(226)
			Float tmp2 = (_this->x - other->x);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(226)
			Float _x = tmp2;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(226)
			Float tmp3 = (_this->y - other->y);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(226)
			Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(226)
			Float tmp4 = (_this->z - other->z);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(226)
			Float _z = tmp4;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(226)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(226)
			_this->ignore_listeners = true;
			HX_STACK_LINE(226)
			{
				HX_STACK_LINE(226)
				_this->x = _x;
				HX_STACK_LINE(226)
				bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(226)
				if ((tmp5)){
					HX_STACK_LINE(226)
					_this->x;
				}
				else{
					HX_STACK_LINE(226)
					bool tmp6 = (_this->listen_x != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(226)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(226)
					if ((tmp6)){
						HX_STACK_LINE(226)
						bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(226)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(226)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(226)
						tmp7 = false;
					}
					HX_STACK_LINE(226)
					if ((tmp7)){
						HX_STACK_LINE(226)
						Float tmp8 = _x;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(226)
						_this->listen_x(tmp8);
					}
					HX_STACK_LINE(226)
					_this->x;
				}
			}
			HX_STACK_LINE(226)
			{
				HX_STACK_LINE(226)
				_this->y = _y;
				HX_STACK_LINE(226)
				bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(226)
				if ((tmp5)){
					HX_STACK_LINE(226)
					_this->y;
				}
				else{
					HX_STACK_LINE(226)
					bool tmp6 = (_this->listen_y != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(226)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(226)
					if ((tmp6)){
						HX_STACK_LINE(226)
						bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(226)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(226)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(226)
						tmp7 = false;
					}
					HX_STACK_LINE(226)
					if ((tmp7)){
						HX_STACK_LINE(226)
						Float tmp8 = _y;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(226)
						_this->listen_y(tmp8);
					}
					HX_STACK_LINE(226)
					_this->y;
				}
			}
			HX_STACK_LINE(226)
			{
				HX_STACK_LINE(226)
				_this->z = _z;
				HX_STACK_LINE(226)
				bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(226)
				if ((tmp5)){
					HX_STACK_LINE(226)
					_this->z;
				}
				else{
					HX_STACK_LINE(226)
					bool tmp6 = (_this->listen_z != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(226)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(226)
					if ((tmp6)){
						HX_STACK_LINE(226)
						bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(226)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(226)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(226)
						tmp7 = false;
					}
					HX_STACK_LINE(226)
					if ((tmp7)){
						HX_STACK_LINE(226)
						Float tmp8 = _z;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(226)
						_this->listen_z(tmp8);
					}
					HX_STACK_LINE(226)
					_this->z;
				}
			}
			HX_STACK_LINE(226)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(226)
			bool tmp5 = (_this->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(226)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(226)
			if ((tmp5)){
				HX_STACK_LINE(226)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(226)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(226)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(226)
				tmp6 = false;
			}
			HX_STACK_LINE(226)
			if ((tmp6)){
				HX_STACK_LINE(226)
				Float tmp7 = _this->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(226)
				_this->listen_x(tmp7);
			}
			HX_STACK_LINE(226)
			bool tmp7 = (_this->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(226)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(226)
			if ((tmp7)){
				HX_STACK_LINE(226)
				bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(226)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(226)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(226)
				tmp8 = false;
			}
			HX_STACK_LINE(226)
			if ((tmp8)){
				HX_STACK_LINE(226)
				Float tmp9 = _this->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(226)
				_this->listen_y(tmp9);
			}
			HX_STACK_LINE(226)
			bool tmp9 = (_this->listen_z != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(226)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(226)
			if ((tmp9)){
				HX_STACK_LINE(226)
				bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(226)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(226)
				tmp10 = !(tmp12);
			}
			else{
				HX_STACK_LINE(226)
				tmp10 = false;
			}
			HX_STACK_LINE(226)
			if ((tmp10)){
				HX_STACK_LINE(226)
				Float tmp11 = _this->z;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(226)
				_this->listen_z(tmp11);
			}
			HX_STACK_LINE(226)
			_this;
		}
		HX_STACK_LINE(226)
		tmp = _this;
	}
	HX_STACK_LINE(226)
	::phoenix::Vector delta = tmp;		HX_STACK_VAR(delta,"delta");
	HX_STACK_LINE(227)
	::phoenix::Vector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(227)
	{
		HX_STACK_LINE(227)
		::phoenix::Vector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			::phoenix::Vector _this = ray->start;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(227)
			tmp2 = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
		}
		HX_STACK_LINE(227)
		::phoenix::Vector _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(227)
		::phoenix::Vector other = circle->_position;		HX_STACK_VAR(other,"other");
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			bool tmp3 = (other == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(227)
			if ((tmp3)){
				HX_STACK_LINE(227)
				::String tmp4 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(227)
				::luxe::DebugError tmp5 = ::luxe::DebugError_obj::null_assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(227)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			Float tmp3 = (_this->x - other->x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(227)
			Float _x = tmp3;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(227)
			Float tmp4 = (_this->y - other->y);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(227)
			Float _y = tmp4;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(227)
			Float tmp5 = (_this->z - other->z);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(227)
			Float _z = tmp5;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(227)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(227)
			_this->ignore_listeners = true;
			HX_STACK_LINE(227)
			{
				HX_STACK_LINE(227)
				_this->x = _x;
				HX_STACK_LINE(227)
				bool tmp6 = _this->_construct;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(227)
				if ((tmp6)){
					HX_STACK_LINE(227)
					_this->x;
				}
				else{
					HX_STACK_LINE(227)
					bool tmp7 = (_this->listen_x != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(227)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(227)
					if ((tmp7)){
						HX_STACK_LINE(227)
						bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(227)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(227)
						tmp8 = !(tmp10);
					}
					else{
						HX_STACK_LINE(227)
						tmp8 = false;
					}
					HX_STACK_LINE(227)
					if ((tmp8)){
						HX_STACK_LINE(227)
						Float tmp9 = _x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(227)
						_this->listen_x(tmp9);
					}
					HX_STACK_LINE(227)
					_this->x;
				}
			}
			HX_STACK_LINE(227)
			{
				HX_STACK_LINE(227)
				_this->y = _y;
				HX_STACK_LINE(227)
				bool tmp6 = _this->_construct;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(227)
				if ((tmp6)){
					HX_STACK_LINE(227)
					_this->y;
				}
				else{
					HX_STACK_LINE(227)
					bool tmp7 = (_this->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(227)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(227)
					if ((tmp7)){
						HX_STACK_LINE(227)
						bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(227)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(227)
						tmp8 = !(tmp10);
					}
					else{
						HX_STACK_LINE(227)
						tmp8 = false;
					}
					HX_STACK_LINE(227)
					if ((tmp8)){
						HX_STACK_LINE(227)
						Float tmp9 = _y;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(227)
						_this->listen_y(tmp9);
					}
					HX_STACK_LINE(227)
					_this->y;
				}
			}
			HX_STACK_LINE(227)
			{
				HX_STACK_LINE(227)
				_this->z = _z;
				HX_STACK_LINE(227)
				bool tmp6 = _this->_construct;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(227)
				if ((tmp6)){
					HX_STACK_LINE(227)
					_this->z;
				}
				else{
					HX_STACK_LINE(227)
					bool tmp7 = (_this->listen_z != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(227)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(227)
					if ((tmp7)){
						HX_STACK_LINE(227)
						bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(227)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(227)
						tmp8 = !(tmp10);
					}
					else{
						HX_STACK_LINE(227)
						tmp8 = false;
					}
					HX_STACK_LINE(227)
					if ((tmp8)){
						HX_STACK_LINE(227)
						Float tmp9 = _z;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(227)
						_this->listen_z(tmp9);
					}
					HX_STACK_LINE(227)
					_this->z;
				}
			}
			HX_STACK_LINE(227)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(227)
			bool tmp6 = (_this->listen_x != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(227)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(227)
			if ((tmp6)){
				HX_STACK_LINE(227)
				bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(227)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(227)
				tmp7 = !(tmp9);
			}
			else{
				HX_STACK_LINE(227)
				tmp7 = false;
			}
			HX_STACK_LINE(227)
			if ((tmp7)){
				HX_STACK_LINE(227)
				Float tmp8 = _this->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(227)
				_this->listen_x(tmp8);
			}
			HX_STACK_LINE(227)
			bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(227)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(227)
			if ((tmp8)){
				HX_STACK_LINE(227)
				bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(227)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(227)
				tmp9 = !(tmp11);
			}
			else{
				HX_STACK_LINE(227)
				tmp9 = false;
			}
			HX_STACK_LINE(227)
			if ((tmp9)){
				HX_STACK_LINE(227)
				Float tmp10 = _this->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(227)
				_this->listen_y(tmp10);
			}
			HX_STACK_LINE(227)
			bool tmp10 = (_this->listen_z != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(227)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(227)
			if ((tmp10)){
				HX_STACK_LINE(227)
				bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(227)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(227)
				tmp11 = !(tmp13);
			}
			else{
				HX_STACK_LINE(227)
				tmp11 = false;
			}
			HX_STACK_LINE(227)
			if ((tmp11)){
				HX_STACK_LINE(227)
				Float tmp12 = _this->z;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(227)
				_this->listen_z(tmp12);
			}
			HX_STACK_LINE(227)
			_this;
		}
		HX_STACK_LINE(227)
		tmp1 = _this;
	}
	HX_STACK_LINE(227)
	::phoenix::Vector ray2circle = tmp1;		HX_STACK_VAR(ray2circle,"ray2circle");
	HX_STACK_LINE(229)
	Float tmp2 = (delta->x * delta->x);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(229)
	Float tmp3 = (delta->y * delta->y);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(229)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(229)
	Float tmp5 = (delta->z * delta->z);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(229)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(229)
	Float a = tmp6;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(230)
	Float tmp7 = (delta->x * ray2circle->x);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(230)
	Float tmp8 = (delta->y * ray2circle->y);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(230)
	Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(230)
	Float tmp10 = (delta->z * ray2circle->z);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(230)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(230)
	Float tmp12 = ((int)2 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(230)
	Float b = tmp12;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(231)
	Float tmp13 = (ray2circle->x * ray2circle->x);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(231)
	Float tmp14 = (ray2circle->y * ray2circle->y);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(231)
	Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(231)
	Float tmp16 = (ray2circle->z * ray2circle->z);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(231)
	Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(231)
	Float tmp18 = circle->get_radius();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(231)
	Float tmp19 = circle->get_radius();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(231)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(231)
	Float tmp21 = (tmp17 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(231)
	Float c = tmp21;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(233)
	Float tmp22 = (b * b);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(233)
	Float tmp23 = ((int)4 * a);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(233)
	Float tmp24 = c;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(233)
	Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(233)
	Float tmp26 = (tmp22 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(233)
	Float d = tmp26;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(235)
	bool tmp27 = (d >= (int)0);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(235)
	if ((tmp27)){
		HX_STACK_LINE(237)
		Float tmp28 = d;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(237)
		Float tmp29 = ::Math_obj::sqrt(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(237)
		d = tmp29;
		HX_STACK_LINE(239)
		Float tmp30 = b;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(239)
		Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(239)
		Float tmp32 = d;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(239)
		Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(239)
		Float tmp34 = ((int)2 * a);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(239)
		Float tmp35 = (Float(tmp33) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(239)
		Float t1 = tmp35;		HX_STACK_VAR(t1,"t1");
		HX_STACK_LINE(240)
		Float tmp36 = b;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(240)
		Float tmp37 = -(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(240)
		Float tmp38 = d;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(240)
		Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(240)
		Float tmp40 = ((int)2 * a);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(240)
		Float tmp41 = (Float(tmp39) / Float(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(240)
		Float t2 = tmp41;		HX_STACK_VAR(t2,"t2");
		HX_STACK_LINE(242)
		bool tmp42 = ray->infinite;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(242)
		bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(242)
		bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(242)
		if ((tmp43)){
			HX_STACK_LINE(242)
			bool tmp45 = (t1 <= ((Float)1.0));		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(242)
			bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(242)
			bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(242)
			if ((tmp47)){
				HX_STACK_LINE(242)
				tmp44 = (t1 >= ((Float)0.0));
			}
			else{
				HX_STACK_LINE(242)
				tmp44 = false;
			}
		}
		else{
			HX_STACK_LINE(242)
			tmp44 = true;
		}
		HX_STACK_LINE(242)
		if ((tmp44)){
			HX_STACK_LINE(243)
			::luxe::collision::data::RayCollision tmp45 = ::luxe::collision::data::RayCollision_obj::__new(circle,ray,t1,t2);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(243)
			return tmp45;
		}
	}
	HX_STACK_LINE(248)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SAT2D_obj,testRayVsCircle,return )

::luxe::collision::data::RayCollision SAT2D_obj::testRayVsPolygon( ::luxe::collision::shapes::Ray ray,::luxe::collision::shapes::Polygon polygon){
	HX_STACK_FRAME("luxe.collision.sat.SAT2D","testRayVsPolygon",0xd8e46a37,"luxe.collision.sat.SAT2D.testRayVsPolygon","luxe/collision/sat/SAT2D.hx",253,0x7b849025)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(polygon,"polygon")
	HX_STACK_LINE(255)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(255)
	{
		HX_STACK_LINE(255)
		::phoenix::Vector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(255)
		{
			HX_STACK_LINE(255)
			::phoenix::Vector _this = ray->end;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(255)
			tmp1 = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
		}
		HX_STACK_LINE(255)
		::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(255)
		::phoenix::Vector other = ray->start;		HX_STACK_VAR(other,"other");
		HX_STACK_LINE(255)
		{
			HX_STACK_LINE(255)
			bool tmp2 = (other == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(255)
			if ((tmp2)){
				HX_STACK_LINE(255)
				::String tmp3 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(255)
				::luxe::DebugError tmp4 = ::luxe::DebugError_obj::null_assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(255)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(255)
		{
			HX_STACK_LINE(255)
			Float tmp2 = (_this->x - other->x);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(255)
			Float _x = tmp2;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(255)
			Float tmp3 = (_this->y - other->y);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(255)
			Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(255)
			Float tmp4 = (_this->z - other->z);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(255)
			Float _z = tmp4;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(255)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(255)
			_this->ignore_listeners = true;
			HX_STACK_LINE(255)
			{
				HX_STACK_LINE(255)
				_this->x = _x;
				HX_STACK_LINE(255)
				bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(255)
				if ((tmp5)){
					HX_STACK_LINE(255)
					_this->x;
				}
				else{
					HX_STACK_LINE(255)
					bool tmp6 = (_this->listen_x != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(255)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(255)
					if ((tmp6)){
						HX_STACK_LINE(255)
						bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(255)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(255)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(255)
						tmp7 = false;
					}
					HX_STACK_LINE(255)
					if ((tmp7)){
						HX_STACK_LINE(255)
						Float tmp8 = _x;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(255)
						_this->listen_x(tmp8);
					}
					HX_STACK_LINE(255)
					_this->x;
				}
			}
			HX_STACK_LINE(255)
			{
				HX_STACK_LINE(255)
				_this->y = _y;
				HX_STACK_LINE(255)
				bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(255)
				if ((tmp5)){
					HX_STACK_LINE(255)
					_this->y;
				}
				else{
					HX_STACK_LINE(255)
					bool tmp6 = (_this->listen_y != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(255)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(255)
					if ((tmp6)){
						HX_STACK_LINE(255)
						bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(255)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(255)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(255)
						tmp7 = false;
					}
					HX_STACK_LINE(255)
					if ((tmp7)){
						HX_STACK_LINE(255)
						Float tmp8 = _y;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(255)
						_this->listen_y(tmp8);
					}
					HX_STACK_LINE(255)
					_this->y;
				}
			}
			HX_STACK_LINE(255)
			{
				HX_STACK_LINE(255)
				_this->z = _z;
				HX_STACK_LINE(255)
				bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(255)
				if ((tmp5)){
					HX_STACK_LINE(255)
					_this->z;
				}
				else{
					HX_STACK_LINE(255)
					bool tmp6 = (_this->listen_z != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(255)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(255)
					if ((tmp6)){
						HX_STACK_LINE(255)
						bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(255)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(255)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(255)
						tmp7 = false;
					}
					HX_STACK_LINE(255)
					if ((tmp7)){
						HX_STACK_LINE(255)
						Float tmp8 = _z;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(255)
						_this->listen_z(tmp8);
					}
					HX_STACK_LINE(255)
					_this->z;
				}
			}
			HX_STACK_LINE(255)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(255)
			bool tmp5 = (_this->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(255)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(255)
			if ((tmp5)){
				HX_STACK_LINE(255)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(255)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(255)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(255)
				tmp6 = false;
			}
			HX_STACK_LINE(255)
			if ((tmp6)){
				HX_STACK_LINE(255)
				Float tmp7 = _this->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(255)
				_this->listen_x(tmp7);
			}
			HX_STACK_LINE(255)
			bool tmp7 = (_this->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(255)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(255)
			if ((tmp7)){
				HX_STACK_LINE(255)
				bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(255)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(255)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(255)
				tmp8 = false;
			}
			HX_STACK_LINE(255)
			if ((tmp8)){
				HX_STACK_LINE(255)
				Float tmp9 = _this->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(255)
				_this->listen_y(tmp9);
			}
			HX_STACK_LINE(255)
			bool tmp9 = (_this->listen_z != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(255)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(255)
			if ((tmp9)){
				HX_STACK_LINE(255)
				bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(255)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(255)
				tmp10 = !(tmp12);
			}
			else{
				HX_STACK_LINE(255)
				tmp10 = false;
			}
			HX_STACK_LINE(255)
			if ((tmp10)){
				HX_STACK_LINE(255)
				Float tmp11 = _this->z;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(255)
				_this->listen_z(tmp11);
			}
			HX_STACK_LINE(255)
			_this;
		}
		HX_STACK_LINE(255)
		tmp = _this;
	}
	HX_STACK_LINE(255)
	::phoenix::Vector delta = tmp;		HX_STACK_VAR(delta,"delta");
	HX_STACK_LINE(256)
	Array< ::Dynamic > vertices = polygon->get_transformedVertices();		HX_STACK_VAR(vertices,"vertices");
	HX_STACK_LINE(258)
	Float tmp1 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(258)
	Float min_u = tmp1;		HX_STACK_VAR(min_u,"min_u");
	HX_STACK_LINE(259)
	Float max_u = ((Float)0.0);		HX_STACK_VAR(max_u,"max_u");
	HX_STACK_LINE(261)
	bool tmp2 = (vertices->length > (int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(261)
	if ((tmp2)){
		HX_STACK_LINE(263)
		int tmp3 = (vertices->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(263)
		::phoenix::Vector tmp4 = vertices->__get(tmp3).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(263)
		::phoenix::Vector v1 = tmp4;		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(264)
		::phoenix::Vector tmp5 = vertices->__get((int)0).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(264)
		::phoenix::Vector v2 = tmp5;		HX_STACK_VAR(v2,"v2");
		HX_STACK_LINE(266)
		::phoenix::Vector tmp6 = ray->start;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(266)
		::phoenix::Vector tmp7 = delta;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(266)
		::phoenix::Vector tmp8 = v1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(266)
		::phoenix::Vector tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(266)
		{
			HX_STACK_LINE(266)
			::phoenix::Vector tmp10 = ::phoenix::Vector_obj::__new(v2->x,v2->y,v2->z,v2->w);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(266)
			::phoenix::Vector _this = tmp10;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(266)
			{
				HX_STACK_LINE(266)
				bool tmp11 = (v1 == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(266)
				if ((tmp11)){
					HX_STACK_LINE(266)
					::String tmp12 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(266)
					::luxe::DebugError tmp13 = ::luxe::DebugError_obj::null_assertion(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(266)
					HX_STACK_DO_THROW(tmp13);
				}
			}
			HX_STACK_LINE(266)
			{
				HX_STACK_LINE(266)
				Float tmp11 = (_this->x - v1->x);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(266)
				Float _x = tmp11;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(266)
				Float tmp12 = (_this->y - v1->y);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(266)
				Float _y = tmp12;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(266)
				Float tmp13 = (_this->z - v1->z);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(266)
				Float _z = tmp13;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(266)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(266)
				_this->ignore_listeners = true;
				HX_STACK_LINE(266)
				{
					HX_STACK_LINE(266)
					_this->x = _x;
					HX_STACK_LINE(266)
					bool tmp14 = _this->_construct;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(266)
					if ((tmp14)){
						HX_STACK_LINE(266)
						_this->x;
					}
					else{
						HX_STACK_LINE(266)
						bool tmp15 = (_this->listen_x != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(266)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(266)
						if ((tmp15)){
							HX_STACK_LINE(266)
							bool tmp17 = _this->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(266)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(266)
							tmp16 = !(tmp18);
						}
						else{
							HX_STACK_LINE(266)
							tmp16 = false;
						}
						HX_STACK_LINE(266)
						if ((tmp16)){
							HX_STACK_LINE(266)
							Float tmp17 = _x;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(266)
							_this->listen_x(tmp17);
						}
						HX_STACK_LINE(266)
						_this->x;
					}
				}
				HX_STACK_LINE(266)
				{
					HX_STACK_LINE(266)
					_this->y = _y;
					HX_STACK_LINE(266)
					bool tmp14 = _this->_construct;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(266)
					if ((tmp14)){
						HX_STACK_LINE(266)
						_this->y;
					}
					else{
						HX_STACK_LINE(266)
						bool tmp15 = (_this->listen_y != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(266)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(266)
						if ((tmp15)){
							HX_STACK_LINE(266)
							bool tmp17 = _this->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(266)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(266)
							tmp16 = !(tmp18);
						}
						else{
							HX_STACK_LINE(266)
							tmp16 = false;
						}
						HX_STACK_LINE(266)
						if ((tmp16)){
							HX_STACK_LINE(266)
							Float tmp17 = _y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(266)
							_this->listen_y(tmp17);
						}
						HX_STACK_LINE(266)
						_this->y;
					}
				}
				HX_STACK_LINE(266)
				{
					HX_STACK_LINE(266)
					_this->z = _z;
					HX_STACK_LINE(266)
					bool tmp14 = _this->_construct;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(266)
					if ((tmp14)){
						HX_STACK_LINE(266)
						_this->z;
					}
					else{
						HX_STACK_LINE(266)
						bool tmp15 = (_this->listen_z != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(266)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(266)
						if ((tmp15)){
							HX_STACK_LINE(266)
							bool tmp17 = _this->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(266)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(266)
							tmp16 = !(tmp18);
						}
						else{
							HX_STACK_LINE(266)
							tmp16 = false;
						}
						HX_STACK_LINE(266)
						if ((tmp16)){
							HX_STACK_LINE(266)
							Float tmp17 = _z;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(266)
							_this->listen_z(tmp17);
						}
						HX_STACK_LINE(266)
						_this->z;
					}
				}
				HX_STACK_LINE(266)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(266)
				bool tmp14 = (_this->listen_x != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(266)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(266)
				if ((tmp14)){
					HX_STACK_LINE(266)
					bool tmp16 = _this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(266)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(266)
					tmp15 = !(tmp17);
				}
				else{
					HX_STACK_LINE(266)
					tmp15 = false;
				}
				HX_STACK_LINE(266)
				if ((tmp15)){
					HX_STACK_LINE(266)
					Float tmp16 = _this->x;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(266)
					_this->listen_x(tmp16);
				}
				HX_STACK_LINE(266)
				bool tmp16 = (_this->listen_y != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(266)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(266)
				if ((tmp16)){
					HX_STACK_LINE(266)
					bool tmp18 = _this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(266)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(266)
					tmp17 = !(tmp19);
				}
				else{
					HX_STACK_LINE(266)
					tmp17 = false;
				}
				HX_STACK_LINE(266)
				if ((tmp17)){
					HX_STACK_LINE(266)
					Float tmp18 = _this->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(266)
					_this->listen_y(tmp18);
				}
				HX_STACK_LINE(266)
				bool tmp18 = (_this->listen_z != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(266)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(266)
				if ((tmp18)){
					HX_STACK_LINE(266)
					bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(266)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(266)
					tmp19 = !(tmp21);
				}
				else{
					HX_STACK_LINE(266)
					tmp19 = false;
				}
				HX_STACK_LINE(266)
				if ((tmp19)){
					HX_STACK_LINE(266)
					Float tmp20 = _this->z;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(266)
					_this->listen_z(tmp20);
				}
				HX_STACK_LINE(266)
				_this;
			}
			HX_STACK_LINE(266)
			tmp9 = _this;
		}
		HX_STACK_LINE(266)
		Dynamic tmp10 = ::luxe::collision::sat::SAT2D_obj::intersectRayRay(tmp6,tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(266)
		Dynamic r = tmp10;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(268)
		bool tmp11 = (r != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(268)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(268)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(268)
		if ((tmp12)){
			HX_STACK_LINE(268)
			tmp13 = (r->__Field(HX_HCSTRING("ub","\x4d","\x66","\x00","\x00"), hx::paccDynamic ) >= ((Float)0.0));
		}
		else{
			HX_STACK_LINE(268)
			tmp13 = false;
		}
		HX_STACK_LINE(268)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(268)
		if ((tmp13)){
			HX_STACK_LINE(268)
			tmp14 = (r->__Field(HX_HCSTRING("ub","\x4d","\x66","\x00","\x00"), hx::paccDynamic ) <= ((Float)1.0));
		}
		else{
			HX_STACK_LINE(268)
			tmp14 = false;
		}
		HX_STACK_LINE(268)
		if ((tmp14)){
			HX_STACK_LINE(269)
			bool tmp15 = (r->__Field(HX_HCSTRING("ua","\x4c","\x66","\x00","\x00"), hx::paccDynamic ) < min_u);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(269)
			if ((tmp15)){
				HX_STACK_LINE(269)
				min_u = r->__Field(HX_HCSTRING("ua","\x4c","\x66","\x00","\x00"), hx::paccDynamic );
			}
			HX_STACK_LINE(270)
			bool tmp16 = (r->__Field(HX_HCSTRING("ua","\x4c","\x66","\x00","\x00"), hx::paccDynamic ) > max_u);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(270)
			if ((tmp16)){
				HX_STACK_LINE(270)
				max_u = r->__Field(HX_HCSTRING("ua","\x4c","\x66","\x00","\x00"), hx::paccDynamic );
			}
		}
		HX_STACK_LINE(273)
		{
			HX_STACK_LINE(273)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(273)
			int _g = vertices->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(273)
			while((true)){
				HX_STACK_LINE(273)
				bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(273)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(273)
				if ((tmp16)){
					HX_STACK_LINE(273)
					break;
				}
				HX_STACK_LINE(273)
				int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(273)
				int i = tmp17;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(275)
				int tmp18 = (i - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(275)
				::phoenix::Vector tmp19 = vertices->__get(tmp18).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(275)
				v1 = tmp19;
				HX_STACK_LINE(276)
				::phoenix::Vector tmp20 = vertices->__get(i).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(276)
				v2 = tmp20;
				HX_STACK_LINE(278)
				::phoenix::Vector tmp21 = ray->start;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(278)
				::phoenix::Vector tmp22 = delta;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(278)
				::phoenix::Vector tmp23 = v1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(278)
				::phoenix::Vector tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(278)
				{
					HX_STACK_LINE(278)
					::phoenix::Vector tmp25 = ::phoenix::Vector_obj::__new(v2->x,v2->y,v2->z,v2->w);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(278)
					::phoenix::Vector _this = tmp25;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(278)
					{
						HX_STACK_LINE(278)
						bool tmp26 = (v1 == null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(278)
						if ((tmp26)){
							HX_STACK_LINE(278)
							::String tmp27 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(278)
							::luxe::DebugError tmp28 = ::luxe::DebugError_obj::null_assertion(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(278)
							HX_STACK_DO_THROW(tmp28);
						}
					}
					HX_STACK_LINE(278)
					{
						HX_STACK_LINE(278)
						Float tmp26 = (_this->x - v1->x);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(278)
						Float _x = tmp26;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(278)
						Float tmp27 = (_this->y - v1->y);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(278)
						Float _y = tmp27;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(278)
						Float tmp28 = (_this->z - v1->z);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(278)
						Float _z = tmp28;		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(278)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(278)
						_this->ignore_listeners = true;
						HX_STACK_LINE(278)
						{
							HX_STACK_LINE(278)
							_this->x = _x;
							HX_STACK_LINE(278)
							bool tmp29 = _this->_construct;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(278)
							if ((tmp29)){
								HX_STACK_LINE(278)
								_this->x;
							}
							else{
								HX_STACK_LINE(278)
								bool tmp30 = (_this->listen_x != null());		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(278)
								bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(278)
								if ((tmp30)){
									HX_STACK_LINE(278)
									bool tmp32 = _this->ignore_listeners;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(278)
									bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(278)
									tmp31 = !(tmp33);
								}
								else{
									HX_STACK_LINE(278)
									tmp31 = false;
								}
								HX_STACK_LINE(278)
								if ((tmp31)){
									HX_STACK_LINE(278)
									Float tmp32 = _x;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(278)
									_this->listen_x(tmp32);
								}
								HX_STACK_LINE(278)
								_this->x;
							}
						}
						HX_STACK_LINE(278)
						{
							HX_STACK_LINE(278)
							_this->y = _y;
							HX_STACK_LINE(278)
							bool tmp29 = _this->_construct;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(278)
							if ((tmp29)){
								HX_STACK_LINE(278)
								_this->y;
							}
							else{
								HX_STACK_LINE(278)
								bool tmp30 = (_this->listen_y != null());		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(278)
								bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(278)
								if ((tmp30)){
									HX_STACK_LINE(278)
									bool tmp32 = _this->ignore_listeners;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(278)
									bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(278)
									tmp31 = !(tmp33);
								}
								else{
									HX_STACK_LINE(278)
									tmp31 = false;
								}
								HX_STACK_LINE(278)
								if ((tmp31)){
									HX_STACK_LINE(278)
									Float tmp32 = _y;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(278)
									_this->listen_y(tmp32);
								}
								HX_STACK_LINE(278)
								_this->y;
							}
						}
						HX_STACK_LINE(278)
						{
							HX_STACK_LINE(278)
							_this->z = _z;
							HX_STACK_LINE(278)
							bool tmp29 = _this->_construct;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(278)
							if ((tmp29)){
								HX_STACK_LINE(278)
								_this->z;
							}
							else{
								HX_STACK_LINE(278)
								bool tmp30 = (_this->listen_z != null());		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(278)
								bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(278)
								if ((tmp30)){
									HX_STACK_LINE(278)
									bool tmp32 = _this->ignore_listeners;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(278)
									bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(278)
									tmp31 = !(tmp33);
								}
								else{
									HX_STACK_LINE(278)
									tmp31 = false;
								}
								HX_STACK_LINE(278)
								if ((tmp31)){
									HX_STACK_LINE(278)
									Float tmp32 = _z;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(278)
									_this->listen_z(tmp32);
								}
								HX_STACK_LINE(278)
								_this->z;
							}
						}
						HX_STACK_LINE(278)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(278)
						bool tmp29 = (_this->listen_x != null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(278)
						bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(278)
						if ((tmp29)){
							HX_STACK_LINE(278)
							bool tmp31 = _this->ignore_listeners;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(278)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(278)
							tmp30 = !(tmp32);
						}
						else{
							HX_STACK_LINE(278)
							tmp30 = false;
						}
						HX_STACK_LINE(278)
						if ((tmp30)){
							HX_STACK_LINE(278)
							Float tmp31 = _this->x;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(278)
							_this->listen_x(tmp31);
						}
						HX_STACK_LINE(278)
						bool tmp31 = (_this->listen_y != null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(278)
						bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(278)
						if ((tmp31)){
							HX_STACK_LINE(278)
							bool tmp33 = _this->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(278)
							bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(278)
							tmp32 = !(tmp34);
						}
						else{
							HX_STACK_LINE(278)
							tmp32 = false;
						}
						HX_STACK_LINE(278)
						if ((tmp32)){
							HX_STACK_LINE(278)
							Float tmp33 = _this->y;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(278)
							_this->listen_y(tmp33);
						}
						HX_STACK_LINE(278)
						bool tmp33 = (_this->listen_z != null());		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(278)
						bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(278)
						if ((tmp33)){
							HX_STACK_LINE(278)
							bool tmp35 = _this->ignore_listeners;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(278)
							bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(278)
							tmp34 = !(tmp36);
						}
						else{
							HX_STACK_LINE(278)
							tmp34 = false;
						}
						HX_STACK_LINE(278)
						if ((tmp34)){
							HX_STACK_LINE(278)
							Float tmp35 = _this->z;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(278)
							_this->listen_z(tmp35);
						}
						HX_STACK_LINE(278)
						_this;
					}
					HX_STACK_LINE(278)
					tmp24 = _this;
				}
				HX_STACK_LINE(278)
				Dynamic tmp25 = ::luxe::collision::sat::SAT2D_obj::intersectRayRay(tmp21,tmp22,tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(278)
				r = tmp25;
				HX_STACK_LINE(280)
				bool tmp26 = (r != null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(280)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(280)
				bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(280)
				if ((tmp27)){
					HX_STACK_LINE(280)
					tmp28 = (r->__Field(HX_HCSTRING("ub","\x4d","\x66","\x00","\x00"), hx::paccDynamic ) >= ((Float)0.0));
				}
				else{
					HX_STACK_LINE(280)
					tmp28 = false;
				}
				HX_STACK_LINE(280)
				bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(280)
				if ((tmp28)){
					HX_STACK_LINE(280)
					tmp29 = (r->__Field(HX_HCSTRING("ub","\x4d","\x66","\x00","\x00"), hx::paccDynamic ) <= ((Float)1.0));
				}
				else{
					HX_STACK_LINE(280)
					tmp29 = false;
				}
				HX_STACK_LINE(280)
				if ((tmp29)){
					HX_STACK_LINE(281)
					bool tmp30 = (r->__Field(HX_HCSTRING("ua","\x4c","\x66","\x00","\x00"), hx::paccDynamic ) < min_u);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(281)
					if ((tmp30)){
						HX_STACK_LINE(281)
						min_u = r->__Field(HX_HCSTRING("ua","\x4c","\x66","\x00","\x00"), hx::paccDynamic );
					}
					HX_STACK_LINE(282)
					bool tmp31 = (r->__Field(HX_HCSTRING("ua","\x4c","\x66","\x00","\x00"), hx::paccDynamic ) > max_u);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(282)
					if ((tmp31)){
						HX_STACK_LINE(282)
						max_u = r->__Field(HX_HCSTRING("ua","\x4c","\x66","\x00","\x00"), hx::paccDynamic );
					}
				}
			}
		}
		HX_STACK_LINE(287)
		bool tmp15 = ray->infinite;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(287)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(287)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(287)
		if ((tmp16)){
			HX_STACK_LINE(287)
			bool tmp18 = (min_u <= ((Float)1.0));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(287)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(287)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(287)
			if ((tmp20)){
				HX_STACK_LINE(287)
				tmp17 = (min_u >= ((Float)0.0));
			}
			else{
				HX_STACK_LINE(287)
				tmp17 = false;
			}
		}
		else{
			HX_STACK_LINE(287)
			tmp17 = true;
		}
		HX_STACK_LINE(287)
		if ((tmp17)){
			HX_STACK_LINE(288)
			::luxe::collision::data::RayCollision tmp18 = ::luxe::collision::data::RayCollision_obj::__new(polygon,ray,min_u,max_u);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(288)
			return tmp18;
		}
	}
	HX_STACK_LINE(293)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SAT2D_obj,testRayVsPolygon,return )

::luxe::collision::data::RayIntersection SAT2D_obj::testRayVsRay( ::luxe::collision::shapes::Ray ray1,::luxe::collision::shapes::Ray ray2){
	HX_STACK_FRAME("luxe.collision.sat.SAT2D","testRayVsRay",0x22925b27,"luxe.collision.sat.SAT2D.testRayVsRay","luxe/collision/sat/SAT2D.hx",298,0x7b849025)
	HX_STACK_ARG(ray1,"ray1")
	HX_STACK_ARG(ray2,"ray2")
	HX_STACK_LINE(300)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(300)
	{
		HX_STACK_LINE(300)
		::phoenix::Vector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(300)
		{
			HX_STACK_LINE(300)
			::phoenix::Vector _this = ray1->end;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(300)
			tmp1 = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
		}
		HX_STACK_LINE(300)
		::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(300)
		::phoenix::Vector other = ray1->start;		HX_STACK_VAR(other,"other");
		HX_STACK_LINE(300)
		{
			HX_STACK_LINE(300)
			bool tmp2 = (other == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(300)
			if ((tmp2)){
				HX_STACK_LINE(300)
				::String tmp3 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(300)
				::luxe::DebugError tmp4 = ::luxe::DebugError_obj::null_assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(300)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(300)
		{
			HX_STACK_LINE(300)
			Float tmp2 = (_this->x - other->x);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(300)
			Float _x = tmp2;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(300)
			Float tmp3 = (_this->y - other->y);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(300)
			Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(300)
			Float tmp4 = (_this->z - other->z);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(300)
			Float _z = tmp4;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(300)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(300)
			_this->ignore_listeners = true;
			HX_STACK_LINE(300)
			{
				HX_STACK_LINE(300)
				_this->x = _x;
				HX_STACK_LINE(300)
				bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(300)
				if ((tmp5)){
					HX_STACK_LINE(300)
					_this->x;
				}
				else{
					HX_STACK_LINE(300)
					bool tmp6 = (_this->listen_x != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(300)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(300)
					if ((tmp6)){
						HX_STACK_LINE(300)
						bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(300)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(300)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(300)
						tmp7 = false;
					}
					HX_STACK_LINE(300)
					if ((tmp7)){
						HX_STACK_LINE(300)
						Float tmp8 = _x;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(300)
						_this->listen_x(tmp8);
					}
					HX_STACK_LINE(300)
					_this->x;
				}
			}
			HX_STACK_LINE(300)
			{
				HX_STACK_LINE(300)
				_this->y = _y;
				HX_STACK_LINE(300)
				bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(300)
				if ((tmp5)){
					HX_STACK_LINE(300)
					_this->y;
				}
				else{
					HX_STACK_LINE(300)
					bool tmp6 = (_this->listen_y != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(300)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(300)
					if ((tmp6)){
						HX_STACK_LINE(300)
						bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(300)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(300)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(300)
						tmp7 = false;
					}
					HX_STACK_LINE(300)
					if ((tmp7)){
						HX_STACK_LINE(300)
						Float tmp8 = _y;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(300)
						_this->listen_y(tmp8);
					}
					HX_STACK_LINE(300)
					_this->y;
				}
			}
			HX_STACK_LINE(300)
			{
				HX_STACK_LINE(300)
				_this->z = _z;
				HX_STACK_LINE(300)
				bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(300)
				if ((tmp5)){
					HX_STACK_LINE(300)
					_this->z;
				}
				else{
					HX_STACK_LINE(300)
					bool tmp6 = (_this->listen_z != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(300)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(300)
					if ((tmp6)){
						HX_STACK_LINE(300)
						bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(300)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(300)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(300)
						tmp7 = false;
					}
					HX_STACK_LINE(300)
					if ((tmp7)){
						HX_STACK_LINE(300)
						Float tmp8 = _z;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(300)
						_this->listen_z(tmp8);
					}
					HX_STACK_LINE(300)
					_this->z;
				}
			}
			HX_STACK_LINE(300)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(300)
			bool tmp5 = (_this->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(300)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(300)
			if ((tmp5)){
				HX_STACK_LINE(300)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(300)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(300)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(300)
				tmp6 = false;
			}
			HX_STACK_LINE(300)
			if ((tmp6)){
				HX_STACK_LINE(300)
				Float tmp7 = _this->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(300)
				_this->listen_x(tmp7);
			}
			HX_STACK_LINE(300)
			bool tmp7 = (_this->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(300)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(300)
			if ((tmp7)){
				HX_STACK_LINE(300)
				bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(300)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(300)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(300)
				tmp8 = false;
			}
			HX_STACK_LINE(300)
			if ((tmp8)){
				HX_STACK_LINE(300)
				Float tmp9 = _this->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(300)
				_this->listen_y(tmp9);
			}
			HX_STACK_LINE(300)
			bool tmp9 = (_this->listen_z != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(300)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(300)
			if ((tmp9)){
				HX_STACK_LINE(300)
				bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(300)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(300)
				tmp10 = !(tmp12);
			}
			else{
				HX_STACK_LINE(300)
				tmp10 = false;
			}
			HX_STACK_LINE(300)
			if ((tmp10)){
				HX_STACK_LINE(300)
				Float tmp11 = _this->z;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(300)
				_this->listen_z(tmp11);
			}
			HX_STACK_LINE(300)
			_this;
		}
		HX_STACK_LINE(300)
		tmp = _this;
	}
	HX_STACK_LINE(300)
	::phoenix::Vector delta1 = tmp;		HX_STACK_VAR(delta1,"delta1");
	HX_STACK_LINE(301)
	::phoenix::Vector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(301)
	{
		HX_STACK_LINE(301)
		::phoenix::Vector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(301)
		{
			HX_STACK_LINE(301)
			::phoenix::Vector _this = ray2->end;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(301)
			tmp2 = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
		}
		HX_STACK_LINE(301)
		::phoenix::Vector _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(301)
		::phoenix::Vector other = ray2->start;		HX_STACK_VAR(other,"other");
		HX_STACK_LINE(301)
		{
			HX_STACK_LINE(301)
			bool tmp3 = (other == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(301)
			if ((tmp3)){
				HX_STACK_LINE(301)
				::String tmp4 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(301)
				::luxe::DebugError tmp5 = ::luxe::DebugError_obj::null_assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(301)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(301)
		{
			HX_STACK_LINE(301)
			Float tmp3 = (_this->x - other->x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(301)
			Float _x = tmp3;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(301)
			Float tmp4 = (_this->y - other->y);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(301)
			Float _y = tmp4;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(301)
			Float tmp5 = (_this->z - other->z);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(301)
			Float _z = tmp5;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(301)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(301)
			_this->ignore_listeners = true;
			HX_STACK_LINE(301)
			{
				HX_STACK_LINE(301)
				_this->x = _x;
				HX_STACK_LINE(301)
				bool tmp6 = _this->_construct;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(301)
				if ((tmp6)){
					HX_STACK_LINE(301)
					_this->x;
				}
				else{
					HX_STACK_LINE(301)
					bool tmp7 = (_this->listen_x != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(301)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(301)
					if ((tmp7)){
						HX_STACK_LINE(301)
						bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(301)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(301)
						tmp8 = !(tmp10);
					}
					else{
						HX_STACK_LINE(301)
						tmp8 = false;
					}
					HX_STACK_LINE(301)
					if ((tmp8)){
						HX_STACK_LINE(301)
						Float tmp9 = _x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(301)
						_this->listen_x(tmp9);
					}
					HX_STACK_LINE(301)
					_this->x;
				}
			}
			HX_STACK_LINE(301)
			{
				HX_STACK_LINE(301)
				_this->y = _y;
				HX_STACK_LINE(301)
				bool tmp6 = _this->_construct;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(301)
				if ((tmp6)){
					HX_STACK_LINE(301)
					_this->y;
				}
				else{
					HX_STACK_LINE(301)
					bool tmp7 = (_this->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(301)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(301)
					if ((tmp7)){
						HX_STACK_LINE(301)
						bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(301)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(301)
						tmp8 = !(tmp10);
					}
					else{
						HX_STACK_LINE(301)
						tmp8 = false;
					}
					HX_STACK_LINE(301)
					if ((tmp8)){
						HX_STACK_LINE(301)
						Float tmp9 = _y;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(301)
						_this->listen_y(tmp9);
					}
					HX_STACK_LINE(301)
					_this->y;
				}
			}
			HX_STACK_LINE(301)
			{
				HX_STACK_LINE(301)
				_this->z = _z;
				HX_STACK_LINE(301)
				bool tmp6 = _this->_construct;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(301)
				if ((tmp6)){
					HX_STACK_LINE(301)
					_this->z;
				}
				else{
					HX_STACK_LINE(301)
					bool tmp7 = (_this->listen_z != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(301)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(301)
					if ((tmp7)){
						HX_STACK_LINE(301)
						bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(301)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(301)
						tmp8 = !(tmp10);
					}
					else{
						HX_STACK_LINE(301)
						tmp8 = false;
					}
					HX_STACK_LINE(301)
					if ((tmp8)){
						HX_STACK_LINE(301)
						Float tmp9 = _z;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(301)
						_this->listen_z(tmp9);
					}
					HX_STACK_LINE(301)
					_this->z;
				}
			}
			HX_STACK_LINE(301)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(301)
			bool tmp6 = (_this->listen_x != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(301)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(301)
			if ((tmp6)){
				HX_STACK_LINE(301)
				bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(301)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(301)
				tmp7 = !(tmp9);
			}
			else{
				HX_STACK_LINE(301)
				tmp7 = false;
			}
			HX_STACK_LINE(301)
			if ((tmp7)){
				HX_STACK_LINE(301)
				Float tmp8 = _this->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(301)
				_this->listen_x(tmp8);
			}
			HX_STACK_LINE(301)
			bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(301)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(301)
			if ((tmp8)){
				HX_STACK_LINE(301)
				bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(301)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(301)
				tmp9 = !(tmp11);
			}
			else{
				HX_STACK_LINE(301)
				tmp9 = false;
			}
			HX_STACK_LINE(301)
			if ((tmp9)){
				HX_STACK_LINE(301)
				Float tmp10 = _this->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(301)
				_this->listen_y(tmp10);
			}
			HX_STACK_LINE(301)
			bool tmp10 = (_this->listen_z != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(301)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(301)
			if ((tmp10)){
				HX_STACK_LINE(301)
				bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(301)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(301)
				tmp11 = !(tmp13);
			}
			else{
				HX_STACK_LINE(301)
				tmp11 = false;
			}
			HX_STACK_LINE(301)
			if ((tmp11)){
				HX_STACK_LINE(301)
				Float tmp12 = _this->z;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(301)
				_this->listen_z(tmp12);
			}
			HX_STACK_LINE(301)
			_this;
		}
		HX_STACK_LINE(301)
		tmp1 = _this;
	}
	HX_STACK_LINE(301)
	::phoenix::Vector delta2 = tmp1;		HX_STACK_VAR(delta2,"delta2");
	HX_STACK_LINE(303)
	::phoenix::Vector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(303)
	{
		HX_STACK_LINE(303)
		::phoenix::Vector tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(303)
		{
			HX_STACK_LINE(303)
			::phoenix::Vector _this = ray1->start;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(303)
			tmp3 = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
		}
		HX_STACK_LINE(303)
		::phoenix::Vector _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(303)
		::phoenix::Vector other = ray2->start;		HX_STACK_VAR(other,"other");
		HX_STACK_LINE(303)
		{
			HX_STACK_LINE(303)
			bool tmp4 = (other == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(303)
			if ((tmp4)){
				HX_STACK_LINE(303)
				::String tmp5 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(303)
				::luxe::DebugError tmp6 = ::luxe::DebugError_obj::null_assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(303)
				HX_STACK_DO_THROW(tmp6);
			}
		}
		HX_STACK_LINE(303)
		{
			HX_STACK_LINE(303)
			Float tmp4 = (_this->x - other->x);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(303)
			Float _x = tmp4;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(303)
			Float tmp5 = (_this->y - other->y);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(303)
			Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(303)
			Float tmp6 = (_this->z - other->z);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(303)
			Float _z = tmp6;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(303)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(303)
			_this->ignore_listeners = true;
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(303)
				_this->x = _x;
				HX_STACK_LINE(303)
				bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(303)
				if ((tmp7)){
					HX_STACK_LINE(303)
					_this->x;
				}
				else{
					HX_STACK_LINE(303)
					bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(303)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(303)
					if ((tmp8)){
						HX_STACK_LINE(303)
						bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(303)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(303)
						tmp9 = !(tmp11);
					}
					else{
						HX_STACK_LINE(303)
						tmp9 = false;
					}
					HX_STACK_LINE(303)
					if ((tmp9)){
						HX_STACK_LINE(303)
						Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(303)
						_this->listen_x(tmp10);
					}
					HX_STACK_LINE(303)
					_this->x;
				}
			}
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(303)
				_this->y = _y;
				HX_STACK_LINE(303)
				bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(303)
				if ((tmp7)){
					HX_STACK_LINE(303)
					_this->y;
				}
				else{
					HX_STACK_LINE(303)
					bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(303)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(303)
					if ((tmp8)){
						HX_STACK_LINE(303)
						bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(303)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(303)
						tmp9 = !(tmp11);
					}
					else{
						HX_STACK_LINE(303)
						tmp9 = false;
					}
					HX_STACK_LINE(303)
					if ((tmp9)){
						HX_STACK_LINE(303)
						Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(303)
						_this->listen_y(tmp10);
					}
					HX_STACK_LINE(303)
					_this->y;
				}
			}
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(303)
				_this->z = _z;
				HX_STACK_LINE(303)
				bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(303)
				if ((tmp7)){
					HX_STACK_LINE(303)
					_this->z;
				}
				else{
					HX_STACK_LINE(303)
					bool tmp8 = (_this->listen_z != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(303)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(303)
					if ((tmp8)){
						HX_STACK_LINE(303)
						bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(303)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(303)
						tmp9 = !(tmp11);
					}
					else{
						HX_STACK_LINE(303)
						tmp9 = false;
					}
					HX_STACK_LINE(303)
					if ((tmp9)){
						HX_STACK_LINE(303)
						Float tmp10 = _z;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(303)
						_this->listen_z(tmp10);
					}
					HX_STACK_LINE(303)
					_this->z;
				}
			}
			HX_STACK_LINE(303)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(303)
			bool tmp7 = (_this->listen_x != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(303)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(303)
			if ((tmp7)){
				HX_STACK_LINE(303)
				bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(303)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(303)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(303)
				tmp8 = false;
			}
			HX_STACK_LINE(303)
			if ((tmp8)){
				HX_STACK_LINE(303)
				Float tmp9 = _this->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(303)
				_this->listen_x(tmp9);
			}
			HX_STACK_LINE(303)
			bool tmp9 = (_this->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(303)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(303)
			if ((tmp9)){
				HX_STACK_LINE(303)
				bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(303)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(303)
				tmp10 = !(tmp12);
			}
			else{
				HX_STACK_LINE(303)
				tmp10 = false;
			}
			HX_STACK_LINE(303)
			if ((tmp10)){
				HX_STACK_LINE(303)
				Float tmp11 = _this->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(303)
				_this->listen_y(tmp11);
			}
			HX_STACK_LINE(303)
			bool tmp11 = (_this->listen_z != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(303)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(303)
			if ((tmp11)){
				HX_STACK_LINE(303)
				bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(303)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(303)
				tmp12 = !(tmp14);
			}
			else{
				HX_STACK_LINE(303)
				tmp12 = false;
			}
			HX_STACK_LINE(303)
			if ((tmp12)){
				HX_STACK_LINE(303)
				Float tmp13 = _this->z;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(303)
				_this->listen_z(tmp13);
			}
			HX_STACK_LINE(303)
			_this;
		}
		HX_STACK_LINE(303)
		tmp2 = _this;
	}
	HX_STACK_LINE(303)
	::phoenix::Vector dx = tmp2;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(305)
	Float tmp3 = (delta2->y * delta1->x);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(305)
	Float tmp4 = (delta2->x * delta1->y);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(305)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(305)
	Float d = tmp5;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(307)
	bool tmp6 = (d == ((Float)0.0));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(307)
	if ((tmp6)){
		HX_STACK_LINE(307)
		return null();
	}
	HX_STACK_LINE(309)
	Float tmp7 = (delta2->x * dx->y);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(309)
	Float tmp8 = (delta2->y * dx->x);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(309)
	Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(309)
	Float tmp10 = d;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(309)
	Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(309)
	Float u1 = tmp11;		HX_STACK_VAR(u1,"u1");
	HX_STACK_LINE(310)
	Float tmp12 = (delta1->x * dx->y);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(310)
	Float tmp13 = (delta1->y * dx->x);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(310)
	Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(310)
	Float tmp15 = d;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(310)
	Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(310)
	Float u2 = tmp16;		HX_STACK_VAR(u2,"u2");
	HX_STACK_LINE(312)
	bool tmp17 = ray1->infinite;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(312)
	bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(312)
	bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(312)
	bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(312)
	if ((tmp19)){
		HX_STACK_LINE(312)
		tmp20 = (u1 <= ((Float)1.0));
	}
	else{
		HX_STACK_LINE(312)
		tmp20 = true;
	}
	HX_STACK_LINE(312)
	bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(312)
	if ((tmp20)){
		HX_STACK_LINE(312)
		bool tmp22 = ray2->infinite;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(312)
		bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(312)
		bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(312)
		bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(312)
		bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(312)
		if ((tmp26)){
			HX_STACK_LINE(312)
			tmp21 = (u2 <= ((Float)1.0));
		}
		else{
			HX_STACK_LINE(312)
			tmp21 = true;
		}
	}
	else{
		HX_STACK_LINE(312)
		tmp21 = false;
	}
	HX_STACK_LINE(312)
	if ((tmp21)){
		HX_STACK_LINE(312)
		::luxe::collision::data::RayIntersection tmp22 = ::luxe::collision::data::RayIntersection_obj::__new(ray1,u1,ray2,u2);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(312)
		return tmp22;
	}
	HX_STACK_LINE(314)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SAT2D_obj,testRayVsRay,return )

Array< ::Dynamic > SAT2D_obj::bresenhamLine( ::phoenix::Vector start,::phoenix::Vector end){
	HX_STACK_FRAME("luxe.collision.sat.SAT2D","bresenhamLine",0x7a5ac18f,"luxe.collision.sat.SAT2D.bresenhamLine","luxe/collision/sat/SAT2D.hx",321,0x7b849025)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(325)
	Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
	HX_STACK_LINE(326)
	Float tmp = (end->y - start->y);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(326)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(326)
	Float tmp2 = (end->x - start->x);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(326)
	Float tmp3 = ::Math_obj::abs(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(326)
	bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(326)
	bool steep = tmp4;		HX_STACK_VAR(steep,"steep");
	HX_STACK_LINE(328)
	bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
	HX_STACK_LINE(331)
	bool tmp5 = steep;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(331)
	if ((tmp5)){
		HX_STACK_LINE(332)
		::phoenix::Vector tmp6 = ::phoenix::Vector_obj::__new(start->y,start->x,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(332)
		start = tmp6;
		HX_STACK_LINE(333)
		::phoenix::Vector tmp7 = ::phoenix::Vector_obj::__new(end->y,end->x,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(333)
		end = tmp7;
	}
	HX_STACK_LINE(337)
	bool tmp6 = (start->x > end->x);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(337)
	if ((tmp6)){
		HX_STACK_LINE(339)
		Float t = start->x;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(341)
		{
			HX_STACK_LINE(341)
			Float _x = end->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(341)
			start->x = _x;
			HX_STACK_LINE(341)
			bool tmp7 = start->_construct;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(341)
			if ((tmp7)){
				HX_STACK_LINE(341)
				start->x;
			}
			else{
				HX_STACK_LINE(341)
				bool tmp8 = (start->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(341)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(341)
				if ((tmp8)){
					HX_STACK_LINE(341)
					bool tmp10 = start->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(341)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(341)
					tmp9 = !(tmp11);
				}
				else{
					HX_STACK_LINE(341)
					tmp9 = false;
				}
				HX_STACK_LINE(341)
				if ((tmp9)){
					HX_STACK_LINE(341)
					Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(341)
					start->listen_x(tmp10);
				}
				HX_STACK_LINE(341)
				start->x;
			}
		}
		HX_STACK_LINE(342)
		{
			HX_STACK_LINE(342)
			end->x = t;
			HX_STACK_LINE(342)
			bool tmp7 = end->_construct;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(342)
			if ((tmp7)){
				HX_STACK_LINE(342)
				end->x;
			}
			else{
				HX_STACK_LINE(342)
				bool tmp8 = (end->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(342)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(342)
				if ((tmp8)){
					HX_STACK_LINE(342)
					bool tmp10 = end->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(342)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(342)
					tmp9 = !(tmp11);
				}
				else{
					HX_STACK_LINE(342)
					tmp9 = false;
				}
				HX_STACK_LINE(342)
				if ((tmp9)){
					HX_STACK_LINE(342)
					Float tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(342)
					end->listen_x(tmp10);
				}
				HX_STACK_LINE(342)
				end->x;
			}
		}
		HX_STACK_LINE(343)
		t = start->y;
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			Float _y = end->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(344)
			start->y = _y;
			HX_STACK_LINE(344)
			bool tmp7 = start->_construct;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(344)
			if ((tmp7)){
				HX_STACK_LINE(344)
				start->y;
			}
			else{
				HX_STACK_LINE(344)
				bool tmp8 = (start->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(344)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(344)
				if ((tmp8)){
					HX_STACK_LINE(344)
					bool tmp10 = start->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(344)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(344)
					tmp9 = !(tmp11);
				}
				else{
					HX_STACK_LINE(344)
					tmp9 = false;
				}
				HX_STACK_LINE(344)
				if ((tmp9)){
					HX_STACK_LINE(344)
					Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(344)
					start->listen_y(tmp10);
				}
				HX_STACK_LINE(344)
				start->y;
			}
		}
		HX_STACK_LINE(345)
		{
			HX_STACK_LINE(345)
			end->y = t;
			HX_STACK_LINE(345)
			bool tmp7 = end->_construct;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(345)
			if ((tmp7)){
				HX_STACK_LINE(345)
				end->y;
			}
			else{
				HX_STACK_LINE(345)
				bool tmp8 = (end->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(345)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(345)
				if ((tmp8)){
					HX_STACK_LINE(345)
					bool tmp10 = end->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(345)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(345)
					tmp9 = !(tmp11);
				}
				else{
					HX_STACK_LINE(345)
					tmp9 = false;
				}
				HX_STACK_LINE(345)
				if ((tmp9)){
					HX_STACK_LINE(345)
					Float tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(345)
					end->listen_y(tmp10);
				}
				HX_STACK_LINE(345)
				end->y;
			}
		}
		HX_STACK_LINE(346)
		swapped = true;
	}
	HX_STACK_LINE(351)
	Float tmp7 = (end->x - start->x);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(351)
	Float deltax = tmp7;		HX_STACK_VAR(deltax,"deltax");
	HX_STACK_LINE(353)
	Float tmp8 = (end->y - start->y);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(353)
	Float tmp9 = ::Math_obj::abs(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(353)
	Float deltay = tmp9;		HX_STACK_VAR(deltay,"deltay");
	HX_STACK_LINE(355)
	Float tmp10 = (Float(deltax) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(355)
	Float error = tmp10;		HX_STACK_VAR(error,"error");
	HX_STACK_LINE(356)
	Float ystep;		HX_STACK_VAR(ystep,"ystep");
	HX_STACK_LINE(357)
	Float y = start->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(359)
	bool tmp11 = (start->y < end->y);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(359)
	if ((tmp11)){
		HX_STACK_LINE(360)
		ystep = (int)1;
	}
	else{
		HX_STACK_LINE(362)
		ystep = (int)-1;
	}
	HX_STACK_LINE(365)
	Float tmp12 = start->x;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(365)
	int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(365)
	int x = tmp13;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(366)
	{
		HX_STACK_LINE(366)
		Float tmp14 = start->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(366)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(366)
		int _g1 = tmp15;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(366)
		Float tmp16 = end->x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(366)
		int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(366)
		int _g = tmp17;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(366)
		while((true)){
			HX_STACK_LINE(366)
			bool tmp18 = (_g1 < _g);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(366)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(366)
			if ((tmp19)){
				HX_STACK_LINE(366)
				break;
			}
			HX_STACK_LINE(366)
			int tmp20 = (_g1)++;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(366)
			int x1 = tmp20;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(368)
			bool tmp21 = steep;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(368)
			if ((tmp21)){
				HX_STACK_LINE(369)
				::phoenix::Vector tmp22 = ::phoenix::Vector_obj::__new(y,x1,null(),null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(369)
				points->push(tmp22);
			}
			else{
				HX_STACK_LINE(371)
				::phoenix::Vector tmp22 = ::phoenix::Vector_obj::__new(x1,y,null(),null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(371)
				points->push(tmp22);
			}
			HX_STACK_LINE(374)
			hx::SubEq(error,deltay);
			HX_STACK_LINE(376)
			bool tmp22 = (error < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(376)
			if ((tmp22)){
				HX_STACK_LINE(377)
				hx::AddEq(y,ystep);
				HX_STACK_LINE(378)
				hx::AddEq(error,deltax);
			}
		}
	}
	HX_STACK_LINE(382)
	bool tmp14 = swapped;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(382)
	if ((tmp14)){
		HX_STACK_LINE(383)
		points->reverse();
	}
	HX_STACK_LINE(386)
	return points;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SAT2D_obj,bresenhamLine,return )

::luxe::collision::data::ShapeCollision SAT2D_obj::checkPolygons( ::luxe::collision::shapes::Polygon polygon1,::luxe::collision::shapes::Polygon polygon2,hx::Null< bool >  __o_flip){
bool flip = __o_flip.Default(false);
	HX_STACK_FRAME("luxe.collision.sat.SAT2D","checkPolygons",0xeb680d0f,"luxe.collision.sat.SAT2D.checkPolygons","luxe/collision/sat/SAT2D.hx",393,0x7b849025)
	HX_STACK_ARG(polygon1,"polygon1")
	HX_STACK_ARG(polygon2,"polygon2")
	HX_STACK_ARG(flip,"flip")
{
		HX_STACK_LINE(395)
		Float ep = ((Float)0.0000000001);		HX_STACK_VAR(ep,"ep");
		HX_STACK_LINE(396)
		Float test1;		HX_STACK_VAR(test1,"test1");
		HX_STACK_LINE(397)
		Float test2;		HX_STACK_VAR(test2,"test2");
		HX_STACK_LINE(398)
		Float testNum;		HX_STACK_VAR(testNum,"testNum");
		HX_STACK_LINE(399)
		Float min1;		HX_STACK_VAR(min1,"min1");
		HX_STACK_LINE(400)
		Float max1;		HX_STACK_VAR(max1,"max1");
		HX_STACK_LINE(401)
		Float min2;		HX_STACK_VAR(min2,"min2");
		HX_STACK_LINE(402)
		Float max2;		HX_STACK_VAR(max2,"max2");
		HX_STACK_LINE(403)
		::phoenix::Vector axis;		HX_STACK_VAR(axis,"axis");
		HX_STACK_LINE(404)
		Float offset;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(405)
		Array< ::Dynamic > vectors1;		HX_STACK_VAR(vectors1,"vectors1");
		HX_STACK_LINE(406)
		Array< ::Dynamic > vectors2;		HX_STACK_VAR(vectors2,"vectors2");
		HX_STACK_LINE(407)
		Float shortestDistance = (int)1073741823;		HX_STACK_VAR(shortestDistance,"shortestDistance");
		HX_STACK_LINE(408)
		::luxe::collision::data::ShapeCollision tmp = ::luxe::collision::data::ShapeCollision_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(408)
		::luxe::collision::data::ShapeCollision collisionData = tmp;		HX_STACK_VAR(collisionData,"collisionData");
		HX_STACK_LINE(410)
		vectors1 = polygon1->get_transformedVertices()->copy();
		HX_STACK_LINE(411)
		vectors2 = polygon2->get_transformedVertices()->copy();
		HX_STACK_LINE(414)
		bool tmp1 = (vectors1->length == (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(414)
		if ((tmp1)){
			HX_STACK_LINE(415)
			::phoenix::Vector tmp2 = vectors1->__get((int)1).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(415)
			Float tmp3 = tmp2->y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(415)
			::phoenix::Vector tmp4 = vectors1->__get((int)0).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(415)
			Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(415)
			Float tmp6 = (tmp3 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(415)
			Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(415)
			::phoenix::Vector tmp8 = vectors1->__get((int)1).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(415)
			Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(415)
			::phoenix::Vector tmp10 = vectors1->__get((int)0).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(415)
			Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(415)
			Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(415)
			::phoenix::Vector tmp13 = ::phoenix::Vector_obj::__new(tmp7,tmp12,null(),null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(415)
			::phoenix::Vector temp = tmp13;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(416)
			{
				HX_STACK_LINE(416)
				{
					HX_STACK_LINE(416)
					Float tmp14 = ep;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(416)
					Float tmp15 = (temp->x * temp->x);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(416)
					Float tmp16 = (temp->y * temp->y);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(416)
					Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(416)
					Float tmp18 = (temp->z * temp->z);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(416)
					Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(416)
					Float tmp20 = ::Math_obj::sqrt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(416)
					Float tmp21 = ::Math_obj::min(tmp14,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(416)
					Float value = tmp21;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(416)
					{
						HX_STACK_LINE(416)
						::phoenix::Vector tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							Float tmp23 = (temp->x * temp->x);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(416)
							Float tmp24 = (temp->y * temp->y);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(416)
							Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(416)
							Float tmp26 = (temp->z * temp->z);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(416)
							Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(416)
							Float tmp28 = ::Math_obj::sqrt(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(416)
							Float v = tmp28;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(416)
							bool tmp29 = (v != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(416)
							if ((tmp29)){
								HX_STACK_LINE(416)
								Float tmp30 = (Float(temp->x) / Float(v));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(416)
								Float _x = tmp30;		HX_STACK_VAR(_x,"_x");
								HX_STACK_LINE(416)
								Float tmp31 = (Float(temp->y) / Float(v));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(416)
								Float _y = tmp31;		HX_STACK_VAR(_y,"_y");
								HX_STACK_LINE(416)
								Float tmp32 = (Float(temp->z) / Float(v));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(416)
								Float _z = tmp32;		HX_STACK_VAR(_z,"_z");
								HX_STACK_LINE(416)
								bool prev = temp->ignore_listeners;		HX_STACK_VAR(prev,"prev");
								HX_STACK_LINE(416)
								temp->ignore_listeners = true;
								HX_STACK_LINE(416)
								{
									HX_STACK_LINE(416)
									temp->x = _x;
									HX_STACK_LINE(416)
									bool tmp33 = temp->_construct;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(416)
									if ((tmp33)){
										HX_STACK_LINE(416)
										temp->x;
									}
									else{
										HX_STACK_LINE(416)
										bool tmp34 = (temp->listen_x != null());		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(416)
										bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(416)
										if ((tmp34)){
											HX_STACK_LINE(416)
											bool tmp36 = temp->ignore_listeners;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(416)
											bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(416)
											tmp35 = !(tmp37);
										}
										else{
											HX_STACK_LINE(416)
											tmp35 = false;
										}
										HX_STACK_LINE(416)
										if ((tmp35)){
											HX_STACK_LINE(416)
											Float tmp36 = _x;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(416)
											temp->listen_x(tmp36);
										}
										HX_STACK_LINE(416)
										temp->x;
									}
								}
								HX_STACK_LINE(416)
								{
									HX_STACK_LINE(416)
									temp->y = _y;
									HX_STACK_LINE(416)
									bool tmp33 = temp->_construct;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(416)
									if ((tmp33)){
										HX_STACK_LINE(416)
										temp->y;
									}
									else{
										HX_STACK_LINE(416)
										bool tmp34 = (temp->listen_y != null());		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(416)
										bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(416)
										if ((tmp34)){
											HX_STACK_LINE(416)
											bool tmp36 = temp->ignore_listeners;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(416)
											bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(416)
											tmp35 = !(tmp37);
										}
										else{
											HX_STACK_LINE(416)
											tmp35 = false;
										}
										HX_STACK_LINE(416)
										if ((tmp35)){
											HX_STACK_LINE(416)
											Float tmp36 = _y;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(416)
											temp->listen_y(tmp36);
										}
										HX_STACK_LINE(416)
										temp->y;
									}
								}
								HX_STACK_LINE(416)
								{
									HX_STACK_LINE(416)
									temp->z = _z;
									HX_STACK_LINE(416)
									bool tmp33 = temp->_construct;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(416)
									if ((tmp33)){
										HX_STACK_LINE(416)
										temp->z;
									}
									else{
										HX_STACK_LINE(416)
										bool tmp34 = (temp->listen_z != null());		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(416)
										bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(416)
										if ((tmp34)){
											HX_STACK_LINE(416)
											bool tmp36 = temp->ignore_listeners;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(416)
											bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(416)
											tmp35 = !(tmp37);
										}
										else{
											HX_STACK_LINE(416)
											tmp35 = false;
										}
										HX_STACK_LINE(416)
										if ((tmp35)){
											HX_STACK_LINE(416)
											Float tmp36 = _z;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(416)
											temp->listen_z(tmp36);
										}
										HX_STACK_LINE(416)
										temp->z;
									}
								}
								HX_STACK_LINE(416)
								temp->ignore_listeners = prev;
								HX_STACK_LINE(416)
								bool tmp33 = (temp->listen_x != null());		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(416)
								bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(416)
								if ((tmp33)){
									HX_STACK_LINE(416)
									bool tmp35 = temp->ignore_listeners;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(416)
									bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(416)
									tmp34 = !(tmp36);
								}
								else{
									HX_STACK_LINE(416)
									tmp34 = false;
								}
								HX_STACK_LINE(416)
								if ((tmp34)){
									HX_STACK_LINE(416)
									Float tmp35 = temp->x;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(416)
									temp->listen_x(tmp35);
								}
								HX_STACK_LINE(416)
								bool tmp35 = (temp->listen_y != null());		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(416)
								bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(416)
								if ((tmp35)){
									HX_STACK_LINE(416)
									bool tmp37 = temp->ignore_listeners;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(416)
									bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(416)
									tmp36 = !(tmp38);
								}
								else{
									HX_STACK_LINE(416)
									tmp36 = false;
								}
								HX_STACK_LINE(416)
								if ((tmp36)){
									HX_STACK_LINE(416)
									Float tmp37 = temp->y;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(416)
									temp->listen_y(tmp37);
								}
								HX_STACK_LINE(416)
								bool tmp37 = (temp->listen_z != null());		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(416)
								bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(416)
								if ((tmp37)){
									HX_STACK_LINE(416)
									bool tmp39 = temp->ignore_listeners;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(416)
									bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(416)
									tmp38 = !(tmp40);
								}
								else{
									HX_STACK_LINE(416)
									tmp38 = false;
								}
								HX_STACK_LINE(416)
								if ((tmp38)){
									HX_STACK_LINE(416)
									Float tmp39 = temp->z;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(416)
									temp->listen_z(tmp39);
								}
								HX_STACK_LINE(416)
								temp;
							}
							else{
								HX_STACK_LINE(416)
								bool prev = temp->ignore_listeners;		HX_STACK_VAR(prev,"prev");
								HX_STACK_LINE(416)
								temp->ignore_listeners = true;
								HX_STACK_LINE(416)
								{
									HX_STACK_LINE(416)
									temp->x = (int)0;
									HX_STACK_LINE(416)
									bool tmp30 = temp->_construct;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(416)
									if ((tmp30)){
										HX_STACK_LINE(416)
										temp->x;
									}
									else{
										HX_STACK_LINE(416)
										bool tmp31 = (temp->listen_x != null());		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(416)
										bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(416)
										if ((tmp31)){
											HX_STACK_LINE(416)
											bool tmp33 = temp->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(416)
											bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(416)
											tmp32 = !(tmp34);
										}
										else{
											HX_STACK_LINE(416)
											tmp32 = false;
										}
										HX_STACK_LINE(416)
										if ((tmp32)){
											HX_STACK_LINE(416)
											temp->listen_x((int)0);
										}
										HX_STACK_LINE(416)
										temp->x;
									}
								}
								HX_STACK_LINE(416)
								{
									HX_STACK_LINE(416)
									temp->y = (int)0;
									HX_STACK_LINE(416)
									bool tmp30 = temp->_construct;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(416)
									if ((tmp30)){
										HX_STACK_LINE(416)
										temp->y;
									}
									else{
										HX_STACK_LINE(416)
										bool tmp31 = (temp->listen_y != null());		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(416)
										bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(416)
										if ((tmp31)){
											HX_STACK_LINE(416)
											bool tmp33 = temp->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(416)
											bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(416)
											tmp32 = !(tmp34);
										}
										else{
											HX_STACK_LINE(416)
											tmp32 = false;
										}
										HX_STACK_LINE(416)
										if ((tmp32)){
											HX_STACK_LINE(416)
											temp->listen_y((int)0);
										}
										HX_STACK_LINE(416)
										temp->y;
									}
								}
								HX_STACK_LINE(416)
								{
									HX_STACK_LINE(416)
									temp->z = (int)0;
									HX_STACK_LINE(416)
									bool tmp30 = temp->_construct;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(416)
									if ((tmp30)){
										HX_STACK_LINE(416)
										temp->z;
									}
									else{
										HX_STACK_LINE(416)
										bool tmp31 = (temp->listen_z != null());		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(416)
										bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(416)
										if ((tmp31)){
											HX_STACK_LINE(416)
											bool tmp33 = temp->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(416)
											bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(416)
											tmp32 = !(tmp34);
										}
										else{
											HX_STACK_LINE(416)
											tmp32 = false;
										}
										HX_STACK_LINE(416)
										if ((tmp32)){
											HX_STACK_LINE(416)
											temp->listen_z((int)0);
										}
										HX_STACK_LINE(416)
										temp->z;
									}
								}
								HX_STACK_LINE(416)
								temp->ignore_listeners = prev;
								HX_STACK_LINE(416)
								bool tmp30 = (temp->listen_x != null());		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(416)
								bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(416)
								if ((tmp30)){
									HX_STACK_LINE(416)
									bool tmp32 = temp->ignore_listeners;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(416)
									bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(416)
									tmp31 = !(tmp33);
								}
								else{
									HX_STACK_LINE(416)
									tmp31 = false;
								}
								HX_STACK_LINE(416)
								if ((tmp31)){
									HX_STACK_LINE(416)
									Float tmp32 = temp->x;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(416)
									temp->listen_x(tmp32);
								}
								HX_STACK_LINE(416)
								bool tmp32 = (temp->listen_y != null());		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(416)
								bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(416)
								if ((tmp32)){
									HX_STACK_LINE(416)
									bool tmp34 = temp->ignore_listeners;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(416)
									bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(416)
									tmp33 = !(tmp35);
								}
								else{
									HX_STACK_LINE(416)
									tmp33 = false;
								}
								HX_STACK_LINE(416)
								if ((tmp33)){
									HX_STACK_LINE(416)
									Float tmp34 = temp->y;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(416)
									temp->listen_y(tmp34);
								}
								HX_STACK_LINE(416)
								bool tmp34 = (temp->listen_z != null());		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(416)
								bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(416)
								if ((tmp34)){
									HX_STACK_LINE(416)
									bool tmp36 = temp->ignore_listeners;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(416)
									bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(416)
									tmp35 = !(tmp37);
								}
								else{
									HX_STACK_LINE(416)
									tmp35 = false;
								}
								HX_STACK_LINE(416)
								if ((tmp35)){
									HX_STACK_LINE(416)
									Float tmp36 = temp->z;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(416)
									temp->listen_z(tmp36);
								}
								HX_STACK_LINE(416)
								temp;
							}
							HX_STACK_LINE(416)
							tmp22 = temp;
						}
						HX_STACK_LINE(416)
						::phoenix::Vector _this = tmp22;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							Float tmp23 = (_this->x * value);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(416)
							Float _x = tmp23;		HX_STACK_VAR(_x,"_x");
							HX_STACK_LINE(416)
							Float tmp24 = (_this->y * value);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(416)
							Float _y = tmp24;		HX_STACK_VAR(_y,"_y");
							HX_STACK_LINE(416)
							Float tmp25 = (_this->z * value);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(416)
							Float _z = tmp25;		HX_STACK_VAR(_z,"_z");
							HX_STACK_LINE(416)
							bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(416)
							_this->ignore_listeners = true;
							HX_STACK_LINE(416)
							{
								HX_STACK_LINE(416)
								_this->x = _x;
								HX_STACK_LINE(416)
								bool tmp26 = _this->_construct;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(416)
								if ((tmp26)){
									HX_STACK_LINE(416)
									_this->x;
								}
								else{
									HX_STACK_LINE(416)
									bool tmp27 = (_this->listen_x != null());		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(416)
									bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(416)
									if ((tmp27)){
										HX_STACK_LINE(416)
										bool tmp29 = _this->ignore_listeners;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(416)
										bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(416)
										tmp28 = !(tmp30);
									}
									else{
										HX_STACK_LINE(416)
										tmp28 = false;
									}
									HX_STACK_LINE(416)
									if ((tmp28)){
										HX_STACK_LINE(416)
										Float tmp29 = _x;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(416)
										_this->listen_x(tmp29);
									}
									HX_STACK_LINE(416)
									_this->x;
								}
							}
							HX_STACK_LINE(416)
							{
								HX_STACK_LINE(416)
								_this->y = _y;
								HX_STACK_LINE(416)
								bool tmp26 = _this->_construct;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(416)
								if ((tmp26)){
									HX_STACK_LINE(416)
									_this->y;
								}
								else{
									HX_STACK_LINE(416)
									bool tmp27 = (_this->listen_y != null());		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(416)
									bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(416)
									if ((tmp27)){
										HX_STACK_LINE(416)
										bool tmp29 = _this->ignore_listeners;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(416)
										bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(416)
										tmp28 = !(tmp30);
									}
									else{
										HX_STACK_LINE(416)
										tmp28 = false;
									}
									HX_STACK_LINE(416)
									if ((tmp28)){
										HX_STACK_LINE(416)
										Float tmp29 = _y;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(416)
										_this->listen_y(tmp29);
									}
									HX_STACK_LINE(416)
									_this->y;
								}
							}
							HX_STACK_LINE(416)
							{
								HX_STACK_LINE(416)
								_this->z = _z;
								HX_STACK_LINE(416)
								bool tmp26 = _this->_construct;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(416)
								if ((tmp26)){
									HX_STACK_LINE(416)
									_this->z;
								}
								else{
									HX_STACK_LINE(416)
									bool tmp27 = (_this->listen_z != null());		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(416)
									bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(416)
									if ((tmp27)){
										HX_STACK_LINE(416)
										bool tmp29 = _this->ignore_listeners;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(416)
										bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(416)
										tmp28 = !(tmp30);
									}
									else{
										HX_STACK_LINE(416)
										tmp28 = false;
									}
									HX_STACK_LINE(416)
									if ((tmp28)){
										HX_STACK_LINE(416)
										Float tmp29 = _z;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(416)
										_this->listen_z(tmp29);
									}
									HX_STACK_LINE(416)
									_this->z;
								}
							}
							HX_STACK_LINE(416)
							_this->ignore_listeners = prev;
							HX_STACK_LINE(416)
							bool tmp26 = (_this->listen_x != null());		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(416)
							bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(416)
							if ((tmp26)){
								HX_STACK_LINE(416)
								bool tmp28 = _this->ignore_listeners;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(416)
								bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(416)
								tmp27 = !(tmp29);
							}
							else{
								HX_STACK_LINE(416)
								tmp27 = false;
							}
							HX_STACK_LINE(416)
							if ((tmp27)){
								HX_STACK_LINE(416)
								Float tmp28 = _this->x;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(416)
								_this->listen_x(tmp28);
							}
							HX_STACK_LINE(416)
							bool tmp28 = (_this->listen_y != null());		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(416)
							bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(416)
							if ((tmp28)){
								HX_STACK_LINE(416)
								bool tmp30 = _this->ignore_listeners;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(416)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(416)
								tmp29 = !(tmp31);
							}
							else{
								HX_STACK_LINE(416)
								tmp29 = false;
							}
							HX_STACK_LINE(416)
							if ((tmp29)){
								HX_STACK_LINE(416)
								Float tmp30 = _this->y;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(416)
								_this->listen_y(tmp30);
							}
							HX_STACK_LINE(416)
							bool tmp30 = (_this->listen_z != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(416)
							bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(416)
							if ((tmp30)){
								HX_STACK_LINE(416)
								bool tmp32 = _this->ignore_listeners;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(416)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(416)
								tmp31 = !(tmp33);
							}
							else{
								HX_STACK_LINE(416)
								tmp31 = false;
							}
							HX_STACK_LINE(416)
							if ((tmp31)){
								HX_STACK_LINE(416)
								Float tmp32 = _this->z;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(416)
								_this->listen_z(tmp32);
							}
							HX_STACK_LINE(416)
							_this;
						}
						HX_STACK_LINE(416)
						_this;
					}
					HX_STACK_LINE(416)
					value;
				}
				HX_STACK_LINE(416)
				temp;
			}
			HX_STACK_LINE(417)
			::phoenix::Vector tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(417)
			{
				HX_STACK_LINE(417)
				::phoenix::Vector tmp15 = vectors1->__get((int)1).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(417)
				::phoenix::Vector _this = tmp15;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(417)
				{
					HX_STACK_LINE(417)
					bool tmp16 = (temp == null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(417)
					if ((tmp16)){
						HX_STACK_LINE(417)
						::String tmp17 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(417)
						::luxe::DebugError tmp18 = ::luxe::DebugError_obj::null_assertion(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(417)
						HX_STACK_DO_THROW(tmp18);
					}
				}
				HX_STACK_LINE(417)
				{
					HX_STACK_LINE(417)
					Float tmp16 = (_this->x + temp->x);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(417)
					Float _x = tmp16;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(417)
					Float tmp17 = (_this->y + temp->y);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(417)
					Float _y = tmp17;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(417)
					Float tmp18 = (_this->z + temp->z);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(417)
					Float _z = tmp18;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(417)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(417)
					_this->ignore_listeners = true;
					HX_STACK_LINE(417)
					{
						HX_STACK_LINE(417)
						_this->x = _x;
						HX_STACK_LINE(417)
						bool tmp19 = _this->_construct;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(417)
						if ((tmp19)){
							HX_STACK_LINE(417)
							_this->x;
						}
						else{
							HX_STACK_LINE(417)
							bool tmp20 = (_this->listen_x != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(417)
							bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(417)
							if ((tmp20)){
								HX_STACK_LINE(417)
								bool tmp22 = _this->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(417)
								bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(417)
								tmp21 = !(tmp23);
							}
							else{
								HX_STACK_LINE(417)
								tmp21 = false;
							}
							HX_STACK_LINE(417)
							if ((tmp21)){
								HX_STACK_LINE(417)
								Float tmp22 = _x;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(417)
								_this->listen_x(tmp22);
							}
							HX_STACK_LINE(417)
							_this->x;
						}
					}
					HX_STACK_LINE(417)
					{
						HX_STACK_LINE(417)
						_this->y = _y;
						HX_STACK_LINE(417)
						bool tmp19 = _this->_construct;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(417)
						if ((tmp19)){
							HX_STACK_LINE(417)
							_this->y;
						}
						else{
							HX_STACK_LINE(417)
							bool tmp20 = (_this->listen_y != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(417)
							bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(417)
							if ((tmp20)){
								HX_STACK_LINE(417)
								bool tmp22 = _this->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(417)
								bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(417)
								tmp21 = !(tmp23);
							}
							else{
								HX_STACK_LINE(417)
								tmp21 = false;
							}
							HX_STACK_LINE(417)
							if ((tmp21)){
								HX_STACK_LINE(417)
								Float tmp22 = _y;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(417)
								_this->listen_y(tmp22);
							}
							HX_STACK_LINE(417)
							_this->y;
						}
					}
					HX_STACK_LINE(417)
					{
						HX_STACK_LINE(417)
						_this->z = _z;
						HX_STACK_LINE(417)
						bool tmp19 = _this->_construct;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(417)
						if ((tmp19)){
							HX_STACK_LINE(417)
							_this->z;
						}
						else{
							HX_STACK_LINE(417)
							bool tmp20 = (_this->listen_z != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(417)
							bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(417)
							if ((tmp20)){
								HX_STACK_LINE(417)
								bool tmp22 = _this->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(417)
								bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(417)
								tmp21 = !(tmp23);
							}
							else{
								HX_STACK_LINE(417)
								tmp21 = false;
							}
							HX_STACK_LINE(417)
							if ((tmp21)){
								HX_STACK_LINE(417)
								Float tmp22 = _z;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(417)
								_this->listen_z(tmp22);
							}
							HX_STACK_LINE(417)
							_this->z;
						}
					}
					HX_STACK_LINE(417)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(417)
					bool tmp19 = (_this->listen_x != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(417)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(417)
					if ((tmp19)){
						HX_STACK_LINE(417)
						bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(417)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(417)
						tmp20 = !(tmp22);
					}
					else{
						HX_STACK_LINE(417)
						tmp20 = false;
					}
					HX_STACK_LINE(417)
					if ((tmp20)){
						HX_STACK_LINE(417)
						Float tmp21 = _this->x;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(417)
						_this->listen_x(tmp21);
					}
					HX_STACK_LINE(417)
					bool tmp21 = (_this->listen_y != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(417)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(417)
					if ((tmp21)){
						HX_STACK_LINE(417)
						bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(417)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(417)
						tmp22 = !(tmp24);
					}
					else{
						HX_STACK_LINE(417)
						tmp22 = false;
					}
					HX_STACK_LINE(417)
					if ((tmp22)){
						HX_STACK_LINE(417)
						Float tmp23 = _this->y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(417)
						_this->listen_y(tmp23);
					}
					HX_STACK_LINE(417)
					bool tmp23 = (_this->listen_z != null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(417)
					bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(417)
					if ((tmp23)){
						HX_STACK_LINE(417)
						bool tmp25 = _this->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(417)
						bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(417)
						tmp24 = !(tmp26);
					}
					else{
						HX_STACK_LINE(417)
						tmp24 = false;
					}
					HX_STACK_LINE(417)
					if ((tmp24)){
						HX_STACK_LINE(417)
						Float tmp25 = _this->z;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(417)
						_this->listen_z(tmp25);
					}
					HX_STACK_LINE(417)
					_this;
				}
				HX_STACK_LINE(417)
				tmp14 = _this;
			}
			HX_STACK_LINE(417)
			vectors1->push(tmp14);
		}
		HX_STACK_LINE(420)
		bool tmp2 = (vectors2->length == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(420)
		if ((tmp2)){
			HX_STACK_LINE(421)
			::phoenix::Vector tmp3 = vectors2->__get((int)1).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(421)
			Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(421)
			::phoenix::Vector tmp5 = vectors2->__get((int)0).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(421)
			Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(421)
			Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(421)
			Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(421)
			::phoenix::Vector tmp9 = vectors2->__get((int)1).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(421)
			Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(421)
			::phoenix::Vector tmp11 = vectors2->__get((int)0).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(421)
			Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(421)
			Float tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(421)
			::phoenix::Vector tmp14 = ::phoenix::Vector_obj::__new(tmp8,tmp13,null(),null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(421)
			::phoenix::Vector temp = tmp14;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(422)
			{
				HX_STACK_LINE(422)
				{
					HX_STACK_LINE(422)
					Float tmp15 = ep;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(422)
					Float tmp16 = (temp->x * temp->x);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(422)
					Float tmp17 = (temp->y * temp->y);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(422)
					Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(422)
					Float tmp19 = (temp->z * temp->z);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(422)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(422)
					Float tmp21 = ::Math_obj::sqrt(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(422)
					Float tmp22 = ::Math_obj::min(tmp15,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(422)
					Float value = tmp22;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(422)
					{
						HX_STACK_LINE(422)
						::phoenix::Vector tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(422)
						{
							HX_STACK_LINE(422)
							Float tmp24 = (temp->x * temp->x);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(422)
							Float tmp25 = (temp->y * temp->y);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(422)
							Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(422)
							Float tmp27 = (temp->z * temp->z);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(422)
							Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(422)
							Float tmp29 = ::Math_obj::sqrt(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(422)
							Float v = tmp29;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(422)
							bool tmp30 = (v != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(422)
							if ((tmp30)){
								HX_STACK_LINE(422)
								Float tmp31 = (Float(temp->x) / Float(v));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(422)
								Float _x = tmp31;		HX_STACK_VAR(_x,"_x");
								HX_STACK_LINE(422)
								Float tmp32 = (Float(temp->y) / Float(v));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(422)
								Float _y = tmp32;		HX_STACK_VAR(_y,"_y");
								HX_STACK_LINE(422)
								Float tmp33 = (Float(temp->z) / Float(v));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(422)
								Float _z = tmp33;		HX_STACK_VAR(_z,"_z");
								HX_STACK_LINE(422)
								bool prev = temp->ignore_listeners;		HX_STACK_VAR(prev,"prev");
								HX_STACK_LINE(422)
								temp->ignore_listeners = true;
								HX_STACK_LINE(422)
								{
									HX_STACK_LINE(422)
									temp->x = _x;
									HX_STACK_LINE(422)
									bool tmp34 = temp->_construct;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(422)
									if ((tmp34)){
										HX_STACK_LINE(422)
										temp->x;
									}
									else{
										HX_STACK_LINE(422)
										bool tmp35 = (temp->listen_x != null());		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(422)
										bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(422)
										if ((tmp35)){
											HX_STACK_LINE(422)
											bool tmp37 = temp->ignore_listeners;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(422)
											bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(422)
											tmp36 = !(tmp38);
										}
										else{
											HX_STACK_LINE(422)
											tmp36 = false;
										}
										HX_STACK_LINE(422)
										if ((tmp36)){
											HX_STACK_LINE(422)
											Float tmp37 = _x;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(422)
											temp->listen_x(tmp37);
										}
										HX_STACK_LINE(422)
										temp->x;
									}
								}
								HX_STACK_LINE(422)
								{
									HX_STACK_LINE(422)
									temp->y = _y;
									HX_STACK_LINE(422)
									bool tmp34 = temp->_construct;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(422)
									if ((tmp34)){
										HX_STACK_LINE(422)
										temp->y;
									}
									else{
										HX_STACK_LINE(422)
										bool tmp35 = (temp->listen_y != null());		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(422)
										bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(422)
										if ((tmp35)){
											HX_STACK_LINE(422)
											bool tmp37 = temp->ignore_listeners;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(422)
											bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(422)
											tmp36 = !(tmp38);
										}
										else{
											HX_STACK_LINE(422)
											tmp36 = false;
										}
										HX_STACK_LINE(422)
										if ((tmp36)){
											HX_STACK_LINE(422)
											Float tmp37 = _y;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(422)
											temp->listen_y(tmp37);
										}
										HX_STACK_LINE(422)
										temp->y;
									}
								}
								HX_STACK_LINE(422)
								{
									HX_STACK_LINE(422)
									temp->z = _z;
									HX_STACK_LINE(422)
									bool tmp34 = temp->_construct;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(422)
									if ((tmp34)){
										HX_STACK_LINE(422)
										temp->z;
									}
									else{
										HX_STACK_LINE(422)
										bool tmp35 = (temp->listen_z != null());		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(422)
										bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(422)
										if ((tmp35)){
											HX_STACK_LINE(422)
											bool tmp37 = temp->ignore_listeners;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(422)
											bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(422)
											tmp36 = !(tmp38);
										}
										else{
											HX_STACK_LINE(422)
											tmp36 = false;
										}
										HX_STACK_LINE(422)
										if ((tmp36)){
											HX_STACK_LINE(422)
											Float tmp37 = _z;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(422)
											temp->listen_z(tmp37);
										}
										HX_STACK_LINE(422)
										temp->z;
									}
								}
								HX_STACK_LINE(422)
								temp->ignore_listeners = prev;
								HX_STACK_LINE(422)
								bool tmp34 = (temp->listen_x != null());		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(422)
								bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(422)
								if ((tmp34)){
									HX_STACK_LINE(422)
									bool tmp36 = temp->ignore_listeners;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(422)
									bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(422)
									tmp35 = !(tmp37);
								}
								else{
									HX_STACK_LINE(422)
									tmp35 = false;
								}
								HX_STACK_LINE(422)
								if ((tmp35)){
									HX_STACK_LINE(422)
									Float tmp36 = temp->x;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(422)
									temp->listen_x(tmp36);
								}
								HX_STACK_LINE(422)
								bool tmp36 = (temp->listen_y != null());		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(422)
								bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(422)
								if ((tmp36)){
									HX_STACK_LINE(422)
									bool tmp38 = temp->ignore_listeners;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(422)
									bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(422)
									tmp37 = !(tmp39);
								}
								else{
									HX_STACK_LINE(422)
									tmp37 = false;
								}
								HX_STACK_LINE(422)
								if ((tmp37)){
									HX_STACK_LINE(422)
									Float tmp38 = temp->y;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(422)
									temp->listen_y(tmp38);
								}
								HX_STACK_LINE(422)
								bool tmp38 = (temp->listen_z != null());		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(422)
								bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(422)
								if ((tmp38)){
									HX_STACK_LINE(422)
									bool tmp40 = temp->ignore_listeners;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(422)
									bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(422)
									tmp39 = !(tmp41);
								}
								else{
									HX_STACK_LINE(422)
									tmp39 = false;
								}
								HX_STACK_LINE(422)
								if ((tmp39)){
									HX_STACK_LINE(422)
									Float tmp40 = temp->z;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(422)
									temp->listen_z(tmp40);
								}
								HX_STACK_LINE(422)
								temp;
							}
							else{
								HX_STACK_LINE(422)
								bool prev = temp->ignore_listeners;		HX_STACK_VAR(prev,"prev");
								HX_STACK_LINE(422)
								temp->ignore_listeners = true;
								HX_STACK_LINE(422)
								{
									HX_STACK_LINE(422)
									temp->x = (int)0;
									HX_STACK_LINE(422)
									bool tmp31 = temp->_construct;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(422)
									if ((tmp31)){
										HX_STACK_LINE(422)
										temp->x;
									}
									else{
										HX_STACK_LINE(422)
										bool tmp32 = (temp->listen_x != null());		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(422)
										bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(422)
										if ((tmp32)){
											HX_STACK_LINE(422)
											bool tmp34 = temp->ignore_listeners;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(422)
											bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(422)
											tmp33 = !(tmp35);
										}
										else{
											HX_STACK_LINE(422)
											tmp33 = false;
										}
										HX_STACK_LINE(422)
										if ((tmp33)){
											HX_STACK_LINE(422)
											temp->listen_x((int)0);
										}
										HX_STACK_LINE(422)
										temp->x;
									}
								}
								HX_STACK_LINE(422)
								{
									HX_STACK_LINE(422)
									temp->y = (int)0;
									HX_STACK_LINE(422)
									bool tmp31 = temp->_construct;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(422)
									if ((tmp31)){
										HX_STACK_LINE(422)
										temp->y;
									}
									else{
										HX_STACK_LINE(422)
										bool tmp32 = (temp->listen_y != null());		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(422)
										bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(422)
										if ((tmp32)){
											HX_STACK_LINE(422)
											bool tmp34 = temp->ignore_listeners;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(422)
											bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(422)
											tmp33 = !(tmp35);
										}
										else{
											HX_STACK_LINE(422)
											tmp33 = false;
										}
										HX_STACK_LINE(422)
										if ((tmp33)){
											HX_STACK_LINE(422)
											temp->listen_y((int)0);
										}
										HX_STACK_LINE(422)
										temp->y;
									}
								}
								HX_STACK_LINE(422)
								{
									HX_STACK_LINE(422)
									temp->z = (int)0;
									HX_STACK_LINE(422)
									bool tmp31 = temp->_construct;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(422)
									if ((tmp31)){
										HX_STACK_LINE(422)
										temp->z;
									}
									else{
										HX_STACK_LINE(422)
										bool tmp32 = (temp->listen_z != null());		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(422)
										bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(422)
										if ((tmp32)){
											HX_STACK_LINE(422)
											bool tmp34 = temp->ignore_listeners;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(422)
											bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(422)
											tmp33 = !(tmp35);
										}
										else{
											HX_STACK_LINE(422)
											tmp33 = false;
										}
										HX_STACK_LINE(422)
										if ((tmp33)){
											HX_STACK_LINE(422)
											temp->listen_z((int)0);
										}
										HX_STACK_LINE(422)
										temp->z;
									}
								}
								HX_STACK_LINE(422)
								temp->ignore_listeners = prev;
								HX_STACK_LINE(422)
								bool tmp31 = (temp->listen_x != null());		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(422)
								bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(422)
								if ((tmp31)){
									HX_STACK_LINE(422)
									bool tmp33 = temp->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(422)
									bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(422)
									tmp32 = !(tmp34);
								}
								else{
									HX_STACK_LINE(422)
									tmp32 = false;
								}
								HX_STACK_LINE(422)
								if ((tmp32)){
									HX_STACK_LINE(422)
									Float tmp33 = temp->x;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(422)
									temp->listen_x(tmp33);
								}
								HX_STACK_LINE(422)
								bool tmp33 = (temp->listen_y != null());		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(422)
								bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(422)
								if ((tmp33)){
									HX_STACK_LINE(422)
									bool tmp35 = temp->ignore_listeners;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(422)
									bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(422)
									tmp34 = !(tmp36);
								}
								else{
									HX_STACK_LINE(422)
									tmp34 = false;
								}
								HX_STACK_LINE(422)
								if ((tmp34)){
									HX_STACK_LINE(422)
									Float tmp35 = temp->y;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(422)
									temp->listen_y(tmp35);
								}
								HX_STACK_LINE(422)
								bool tmp35 = (temp->listen_z != null());		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(422)
								bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(422)
								if ((tmp35)){
									HX_STACK_LINE(422)
									bool tmp37 = temp->ignore_listeners;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(422)
									bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(422)
									tmp36 = !(tmp38);
								}
								else{
									HX_STACK_LINE(422)
									tmp36 = false;
								}
								HX_STACK_LINE(422)
								if ((tmp36)){
									HX_STACK_LINE(422)
									Float tmp37 = temp->z;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(422)
									temp->listen_z(tmp37);
								}
								HX_STACK_LINE(422)
								temp;
							}
							HX_STACK_LINE(422)
							tmp23 = temp;
						}
						HX_STACK_LINE(422)
						::phoenix::Vector _this = tmp23;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(422)
						{
							HX_STACK_LINE(422)
							Float tmp24 = (_this->x * value);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(422)
							Float _x = tmp24;		HX_STACK_VAR(_x,"_x");
							HX_STACK_LINE(422)
							Float tmp25 = (_this->y * value);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(422)
							Float _y = tmp25;		HX_STACK_VAR(_y,"_y");
							HX_STACK_LINE(422)
							Float tmp26 = (_this->z * value);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(422)
							Float _z = tmp26;		HX_STACK_VAR(_z,"_z");
							HX_STACK_LINE(422)
							bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(422)
							_this->ignore_listeners = true;
							HX_STACK_LINE(422)
							{
								HX_STACK_LINE(422)
								_this->x = _x;
								HX_STACK_LINE(422)
								bool tmp27 = _this->_construct;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(422)
								if ((tmp27)){
									HX_STACK_LINE(422)
									_this->x;
								}
								else{
									HX_STACK_LINE(422)
									bool tmp28 = (_this->listen_x != null());		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(422)
									bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(422)
									if ((tmp28)){
										HX_STACK_LINE(422)
										bool tmp30 = _this->ignore_listeners;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(422)
										bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(422)
										tmp29 = !(tmp31);
									}
									else{
										HX_STACK_LINE(422)
										tmp29 = false;
									}
									HX_STACK_LINE(422)
									if ((tmp29)){
										HX_STACK_LINE(422)
										Float tmp30 = _x;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(422)
										_this->listen_x(tmp30);
									}
									HX_STACK_LINE(422)
									_this->x;
								}
							}
							HX_STACK_LINE(422)
							{
								HX_STACK_LINE(422)
								_this->y = _y;
								HX_STACK_LINE(422)
								bool tmp27 = _this->_construct;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(422)
								if ((tmp27)){
									HX_STACK_LINE(422)
									_this->y;
								}
								else{
									HX_STACK_LINE(422)
									bool tmp28 = (_this->listen_y != null());		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(422)
									bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(422)
									if ((tmp28)){
										HX_STACK_LINE(422)
										bool tmp30 = _this->ignore_listeners;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(422)
										bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(422)
										tmp29 = !(tmp31);
									}
									else{
										HX_STACK_LINE(422)
										tmp29 = false;
									}
									HX_STACK_LINE(422)
									if ((tmp29)){
										HX_STACK_LINE(422)
										Float tmp30 = _y;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(422)
										_this->listen_y(tmp30);
									}
									HX_STACK_LINE(422)
									_this->y;
								}
							}
							HX_STACK_LINE(422)
							{
								HX_STACK_LINE(422)
								_this->z = _z;
								HX_STACK_LINE(422)
								bool tmp27 = _this->_construct;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(422)
								if ((tmp27)){
									HX_STACK_LINE(422)
									_this->z;
								}
								else{
									HX_STACK_LINE(422)
									bool tmp28 = (_this->listen_z != null());		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(422)
									bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(422)
									if ((tmp28)){
										HX_STACK_LINE(422)
										bool tmp30 = _this->ignore_listeners;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(422)
										bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(422)
										tmp29 = !(tmp31);
									}
									else{
										HX_STACK_LINE(422)
										tmp29 = false;
									}
									HX_STACK_LINE(422)
									if ((tmp29)){
										HX_STACK_LINE(422)
										Float tmp30 = _z;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(422)
										_this->listen_z(tmp30);
									}
									HX_STACK_LINE(422)
									_this->z;
								}
							}
							HX_STACK_LINE(422)
							_this->ignore_listeners = prev;
							HX_STACK_LINE(422)
							bool tmp27 = (_this->listen_x != null());		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(422)
							bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(422)
							if ((tmp27)){
								HX_STACK_LINE(422)
								bool tmp29 = _this->ignore_listeners;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(422)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(422)
								tmp28 = !(tmp30);
							}
							else{
								HX_STACK_LINE(422)
								tmp28 = false;
							}
							HX_STACK_LINE(422)
							if ((tmp28)){
								HX_STACK_LINE(422)
								Float tmp29 = _this->x;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(422)
								_this->listen_x(tmp29);
							}
							HX_STACK_LINE(422)
							bool tmp29 = (_this->listen_y != null());		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(422)
							bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(422)
							if ((tmp29)){
								HX_STACK_LINE(422)
								bool tmp31 = _this->ignore_listeners;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(422)
								bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(422)
								tmp30 = !(tmp32);
							}
							else{
								HX_STACK_LINE(422)
								tmp30 = false;
							}
							HX_STACK_LINE(422)
							if ((tmp30)){
								HX_STACK_LINE(422)
								Float tmp31 = _this->y;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(422)
								_this->listen_y(tmp31);
							}
							HX_STACK_LINE(422)
							bool tmp31 = (_this->listen_z != null());		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(422)
							bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(422)
							if ((tmp31)){
								HX_STACK_LINE(422)
								bool tmp33 = _this->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(422)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(422)
								tmp32 = !(tmp34);
							}
							else{
								HX_STACK_LINE(422)
								tmp32 = false;
							}
							HX_STACK_LINE(422)
							if ((tmp32)){
								HX_STACK_LINE(422)
								Float tmp33 = _this->z;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(422)
								_this->listen_z(tmp33);
							}
							HX_STACK_LINE(422)
							_this;
						}
						HX_STACK_LINE(422)
						_this;
					}
					HX_STACK_LINE(422)
					value;
				}
				HX_STACK_LINE(422)
				temp;
			}
			HX_STACK_LINE(423)
			::phoenix::Vector tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(423)
			{
				HX_STACK_LINE(423)
				::phoenix::Vector tmp16 = vectors2->__get((int)1).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(423)
				::phoenix::Vector _this = tmp16;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(423)
				{
					HX_STACK_LINE(423)
					bool tmp17 = (temp == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(423)
					if ((tmp17)){
						HX_STACK_LINE(423)
						::String tmp18 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(423)
						::luxe::DebugError tmp19 = ::luxe::DebugError_obj::null_assertion(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(423)
						HX_STACK_DO_THROW(tmp19);
					}
				}
				HX_STACK_LINE(423)
				{
					HX_STACK_LINE(423)
					Float tmp17 = (_this->x + temp->x);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(423)
					Float _x = tmp17;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(423)
					Float tmp18 = (_this->y + temp->y);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(423)
					Float _y = tmp18;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(423)
					Float tmp19 = (_this->z + temp->z);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(423)
					Float _z = tmp19;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(423)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(423)
					_this->ignore_listeners = true;
					HX_STACK_LINE(423)
					{
						HX_STACK_LINE(423)
						_this->x = _x;
						HX_STACK_LINE(423)
						bool tmp20 = _this->_construct;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(423)
						if ((tmp20)){
							HX_STACK_LINE(423)
							_this->x;
						}
						else{
							HX_STACK_LINE(423)
							bool tmp21 = (_this->listen_x != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(423)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(423)
							if ((tmp21)){
								HX_STACK_LINE(423)
								bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(423)
								bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(423)
								tmp22 = !(tmp24);
							}
							else{
								HX_STACK_LINE(423)
								tmp22 = false;
							}
							HX_STACK_LINE(423)
							if ((tmp22)){
								HX_STACK_LINE(423)
								Float tmp23 = _x;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(423)
								_this->listen_x(tmp23);
							}
							HX_STACK_LINE(423)
							_this->x;
						}
					}
					HX_STACK_LINE(423)
					{
						HX_STACK_LINE(423)
						_this->y = _y;
						HX_STACK_LINE(423)
						bool tmp20 = _this->_construct;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(423)
						if ((tmp20)){
							HX_STACK_LINE(423)
							_this->y;
						}
						else{
							HX_STACK_LINE(423)
							bool tmp21 = (_this->listen_y != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(423)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(423)
							if ((tmp21)){
								HX_STACK_LINE(423)
								bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(423)
								bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(423)
								tmp22 = !(tmp24);
							}
							else{
								HX_STACK_LINE(423)
								tmp22 = false;
							}
							HX_STACK_LINE(423)
							if ((tmp22)){
								HX_STACK_LINE(423)
								Float tmp23 = _y;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(423)
								_this->listen_y(tmp23);
							}
							HX_STACK_LINE(423)
							_this->y;
						}
					}
					HX_STACK_LINE(423)
					{
						HX_STACK_LINE(423)
						_this->z = _z;
						HX_STACK_LINE(423)
						bool tmp20 = _this->_construct;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(423)
						if ((tmp20)){
							HX_STACK_LINE(423)
							_this->z;
						}
						else{
							HX_STACK_LINE(423)
							bool tmp21 = (_this->listen_z != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(423)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(423)
							if ((tmp21)){
								HX_STACK_LINE(423)
								bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(423)
								bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(423)
								tmp22 = !(tmp24);
							}
							else{
								HX_STACK_LINE(423)
								tmp22 = false;
							}
							HX_STACK_LINE(423)
							if ((tmp22)){
								HX_STACK_LINE(423)
								Float tmp23 = _z;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(423)
								_this->listen_z(tmp23);
							}
							HX_STACK_LINE(423)
							_this->z;
						}
					}
					HX_STACK_LINE(423)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(423)
					bool tmp20 = (_this->listen_x != null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(423)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(423)
					if ((tmp20)){
						HX_STACK_LINE(423)
						bool tmp22 = _this->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(423)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(423)
						tmp21 = !(tmp23);
					}
					else{
						HX_STACK_LINE(423)
						tmp21 = false;
					}
					HX_STACK_LINE(423)
					if ((tmp21)){
						HX_STACK_LINE(423)
						Float tmp22 = _this->x;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(423)
						_this->listen_x(tmp22);
					}
					HX_STACK_LINE(423)
					bool tmp22 = (_this->listen_y != null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(423)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(423)
					if ((tmp22)){
						HX_STACK_LINE(423)
						bool tmp24 = _this->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(423)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(423)
						tmp23 = !(tmp25);
					}
					else{
						HX_STACK_LINE(423)
						tmp23 = false;
					}
					HX_STACK_LINE(423)
					if ((tmp23)){
						HX_STACK_LINE(423)
						Float tmp24 = _this->y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(423)
						_this->listen_y(tmp24);
					}
					HX_STACK_LINE(423)
					bool tmp24 = (_this->listen_z != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(423)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(423)
					if ((tmp24)){
						HX_STACK_LINE(423)
						bool tmp26 = _this->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(423)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(423)
						tmp25 = !(tmp27);
					}
					else{
						HX_STACK_LINE(423)
						tmp25 = false;
					}
					HX_STACK_LINE(423)
					if ((tmp25)){
						HX_STACK_LINE(423)
						Float tmp26 = _this->z;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(423)
						_this->listen_z(tmp26);
					}
					HX_STACK_LINE(423)
					_this;
				}
				HX_STACK_LINE(423)
				tmp15 = _this;
			}
			HX_STACK_LINE(423)
			vectors2->push(tmp15);
		}
		HX_STACK_LINE(427)
		{
			HX_STACK_LINE(427)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(427)
			int _g = vectors1->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(427)
			while((true)){
				HX_STACK_LINE(427)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(427)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(427)
				if ((tmp4)){
					HX_STACK_LINE(427)
					break;
				}
				HX_STACK_LINE(427)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(427)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(430)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(430)
				::phoenix::Vector tmp7 = ::luxe::collision::sat::Common_obj::findNormalAxis(vectors1,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(430)
				axis = tmp7;
				HX_STACK_LINE(433)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(433)
				{
					HX_STACK_LINE(433)
					::phoenix::Vector tmp9 = vectors1->__get((int)0).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(433)
					::phoenix::Vector other = tmp9;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(433)
					Float tmp10 = (axis->x * other->x);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(433)
					Float tmp11 = (axis->y * other->y);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(433)
					Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(433)
					Float tmp13 = (axis->z * other->z);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(433)
					tmp8 = (tmp12 + tmp13);
				}
				HX_STACK_LINE(433)
				min1 = tmp8;
				HX_STACK_LINE(434)
				max1 = min1;
				HX_STACK_LINE(436)
				{
					HX_STACK_LINE(436)
					int _g3 = (int)1;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(436)
					int _g2 = vectors1->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(436)
					while((true)){
						HX_STACK_LINE(436)
						bool tmp9 = (_g3 < _g2);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(436)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(436)
						if ((tmp10)){
							HX_STACK_LINE(436)
							break;
						}
						HX_STACK_LINE(436)
						int tmp11 = (_g3)++;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(436)
						int j = tmp11;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(437)
						Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(437)
						{
							HX_STACK_LINE(437)
							::phoenix::Vector tmp13 = vectors1->__get(j).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(437)
							::phoenix::Vector other = tmp13;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(437)
							Float tmp14 = (axis->x * other->x);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(437)
							Float tmp15 = (axis->y * other->y);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(437)
							Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(437)
							Float tmp17 = (axis->z * other->z);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(437)
							tmp12 = (tmp16 + tmp17);
						}
						HX_STACK_LINE(437)
						testNum = tmp12;
						HX_STACK_LINE(438)
						bool tmp13 = (testNum < min1);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(438)
						if ((tmp13)){
							HX_STACK_LINE(439)
							min1 = testNum;
						}
						HX_STACK_LINE(441)
						bool tmp14 = (testNum > max1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(441)
						if ((tmp14)){
							HX_STACK_LINE(442)
							max1 = testNum;
						}
					}
				}
				HX_STACK_LINE(447)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(447)
				{
					HX_STACK_LINE(447)
					::phoenix::Vector tmp10 = vectors2->__get((int)0).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(447)
					::phoenix::Vector other = tmp10;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(447)
					Float tmp11 = (axis->x * other->x);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(447)
					Float tmp12 = (axis->y * other->y);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(447)
					Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(447)
					Float tmp14 = (axis->z * other->z);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(447)
					tmp9 = (tmp13 + tmp14);
				}
				HX_STACK_LINE(447)
				min2 = tmp9;
				HX_STACK_LINE(448)
				max2 = min2;
				HX_STACK_LINE(450)
				{
					HX_STACK_LINE(450)
					int _g3 = (int)1;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(450)
					int _g2 = vectors2->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(450)
					while((true)){
						HX_STACK_LINE(450)
						bool tmp10 = (_g3 < _g2);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(450)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(450)
						if ((tmp11)){
							HX_STACK_LINE(450)
							break;
						}
						HX_STACK_LINE(450)
						int tmp12 = (_g3)++;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(450)
						int j = tmp12;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(451)
						Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(451)
						{
							HX_STACK_LINE(451)
							::phoenix::Vector tmp14 = vectors2->__get(j).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(451)
							::phoenix::Vector other = tmp14;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(451)
							Float tmp15 = (axis->x * other->x);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(451)
							Float tmp16 = (axis->y * other->y);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(451)
							Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(451)
							Float tmp18 = (axis->z * other->z);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(451)
							tmp13 = (tmp17 + tmp18);
						}
						HX_STACK_LINE(451)
						testNum = tmp13;
						HX_STACK_LINE(452)
						bool tmp14 = (testNum < min2);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(452)
						if ((tmp14)){
							HX_STACK_LINE(453)
							min2 = testNum;
						}
						HX_STACK_LINE(455)
						bool tmp15 = (testNum > max2);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(455)
						if ((tmp15)){
							HX_STACK_LINE(456)
							max2 = testNum;
						}
					}
				}
				HX_STACK_LINE(461)
				Float tmp10 = (min1 - max2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(461)
				test1 = tmp10;
				HX_STACK_LINE(462)
				Float tmp11 = (min2 - max1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(462)
				test2 = tmp11;
				HX_STACK_LINE(463)
				bool tmp12 = (test1 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(463)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(463)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(463)
				if ((tmp13)){
					HX_STACK_LINE(463)
					tmp14 = (test2 > (int)0);
				}
				else{
					HX_STACK_LINE(463)
					tmp14 = true;
				}
				HX_STACK_LINE(463)
				if ((tmp14)){
					HX_STACK_LINE(464)
					return null();
				}
				HX_STACK_LINE(467)
				Float tmp15 = (max2 - min1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(467)
				Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(467)
				Float distMin = tmp16;		HX_STACK_VAR(distMin,"distMin");
				HX_STACK_LINE(468)
				bool tmp17 = flip;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(468)
				if ((tmp17)){
					HX_STACK_LINE(468)
					hx::MultEq(distMin,(int)-1);
				}
				HX_STACK_LINE(469)
				Float tmp18 = distMin;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(469)
				Float tmp19 = ::Math_obj::abs(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(469)
				Float tmp20 = shortestDistance;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(469)
				bool tmp21 = (tmp19 < tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(469)
				if ((tmp21)){
					HX_STACK_LINE(470)
					collisionData->unitVector = axis;
					HX_STACK_LINE(471)
					collisionData->overlap = distMin;
					HX_STACK_LINE(472)
					Float tmp22 = distMin;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(472)
					Float tmp23 = ::Math_obj::abs(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(472)
					shortestDistance = tmp23;
				}
			}
		}
		HX_STACK_LINE(478)
		bool tmp3 = flip;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(478)
		::luxe::collision::shapes::Shape tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(478)
		if ((tmp3)){
			HX_STACK_LINE(478)
			tmp4 = polygon2;
		}
		else{
			HX_STACK_LINE(478)
			tmp4 = polygon1;
		}
		HX_STACK_LINE(478)
		collisionData->shape1 = tmp4;
		HX_STACK_LINE(479)
		bool tmp5 = flip;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(479)
		::luxe::collision::shapes::Shape tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(479)
		if ((tmp5)){
			HX_STACK_LINE(479)
			tmp6 = polygon1;
		}
		else{
			HX_STACK_LINE(479)
			tmp6 = polygon2;
		}
		HX_STACK_LINE(479)
		collisionData->shape2 = tmp6;
		HX_STACK_LINE(480)
		Float tmp7 = collisionData->unitVector->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(480)
		Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(480)
		Float tmp9 = collisionData->overlap;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(480)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(481)
		Float tmp11 = collisionData->unitVector->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(481)
		Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(481)
		Float tmp13 = collisionData->overlap;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(481)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(480)
		::phoenix::Vector tmp15 = ::phoenix::Vector_obj::__new(tmp10,tmp14,null(),null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(480)
		collisionData->separation = tmp15;
		HX_STACK_LINE(482)
		bool tmp16 = flip;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(482)
		if ((tmp16)){
			HX_STACK_LINE(482)
			collisionData->unitVector->invert();
		}
		HX_STACK_LINE(484)
		::luxe::collision::data::ShapeCollision tmp17 = collisionData;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(484)
		return tmp17;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SAT2D_obj,checkPolygons,return )

::phoenix::Vector SAT2D_obj::swap( ::phoenix::Vector v){
	HX_STACK_FRAME("luxe.collision.sat.SAT2D","swap",0xba4848e5,"luxe.collision.sat.SAT2D.swap","luxe/collision/sat/SAT2D.hx",489,0x7b849025)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(489)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(v->y,v->x,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(489)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SAT2D_obj,swap,return )

Dynamic SAT2D_obj::intersectRayRay( ::phoenix::Vector a,::phoenix::Vector adelta,::phoenix::Vector b,::phoenix::Vector bdelta){
	HX_STACK_FRAME("luxe.collision.sat.SAT2D","intersectRayRay",0x99426b4d,"luxe.collision.sat.SAT2D.intersectRayRay","luxe/collision/sat/SAT2D.hx",492,0x7b849025)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(adelta,"adelta")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(bdelta,"bdelta")
	HX_STACK_LINE(494)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(494)
	{
		HX_STACK_LINE(494)
		::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(a->x,a->y,a->z,a->w);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(494)
		::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(494)
		{
			HX_STACK_LINE(494)
			bool tmp2 = (b == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(494)
			if ((tmp2)){
				HX_STACK_LINE(494)
				::String tmp3 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(494)
				::luxe::DebugError tmp4 = ::luxe::DebugError_obj::null_assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(494)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(494)
		{
			HX_STACK_LINE(494)
			Float tmp2 = (_this->x - b->x);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(494)
			Float _x = tmp2;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(494)
			Float tmp3 = (_this->y - b->y);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(494)
			Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(494)
			Float tmp4 = (_this->z - b->z);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(494)
			Float _z = tmp4;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(494)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(494)
			_this->ignore_listeners = true;
			HX_STACK_LINE(494)
			{
				HX_STACK_LINE(494)
				_this->x = _x;
				HX_STACK_LINE(494)
				bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(494)
				if ((tmp5)){
					HX_STACK_LINE(494)
					_this->x;
				}
				else{
					HX_STACK_LINE(494)
					bool tmp6 = (_this->listen_x != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(494)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(494)
					if ((tmp6)){
						HX_STACK_LINE(494)
						bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(494)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(494)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(494)
						tmp7 = false;
					}
					HX_STACK_LINE(494)
					if ((tmp7)){
						HX_STACK_LINE(494)
						Float tmp8 = _x;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(494)
						_this->listen_x(tmp8);
					}
					HX_STACK_LINE(494)
					_this->x;
				}
			}
			HX_STACK_LINE(494)
			{
				HX_STACK_LINE(494)
				_this->y = _y;
				HX_STACK_LINE(494)
				bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(494)
				if ((tmp5)){
					HX_STACK_LINE(494)
					_this->y;
				}
				else{
					HX_STACK_LINE(494)
					bool tmp6 = (_this->listen_y != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(494)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(494)
					if ((tmp6)){
						HX_STACK_LINE(494)
						bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(494)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(494)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(494)
						tmp7 = false;
					}
					HX_STACK_LINE(494)
					if ((tmp7)){
						HX_STACK_LINE(494)
						Float tmp8 = _y;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(494)
						_this->listen_y(tmp8);
					}
					HX_STACK_LINE(494)
					_this->y;
				}
			}
			HX_STACK_LINE(494)
			{
				HX_STACK_LINE(494)
				_this->z = _z;
				HX_STACK_LINE(494)
				bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(494)
				if ((tmp5)){
					HX_STACK_LINE(494)
					_this->z;
				}
				else{
					HX_STACK_LINE(494)
					bool tmp6 = (_this->listen_z != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(494)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(494)
					if ((tmp6)){
						HX_STACK_LINE(494)
						bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(494)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(494)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(494)
						tmp7 = false;
					}
					HX_STACK_LINE(494)
					if ((tmp7)){
						HX_STACK_LINE(494)
						Float tmp8 = _z;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(494)
						_this->listen_z(tmp8);
					}
					HX_STACK_LINE(494)
					_this->z;
				}
			}
			HX_STACK_LINE(494)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(494)
			bool tmp5 = (_this->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(494)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(494)
			if ((tmp5)){
				HX_STACK_LINE(494)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(494)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(494)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(494)
				tmp6 = false;
			}
			HX_STACK_LINE(494)
			if ((tmp6)){
				HX_STACK_LINE(494)
				Float tmp7 = _this->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(494)
				_this->listen_x(tmp7);
			}
			HX_STACK_LINE(494)
			bool tmp7 = (_this->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(494)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(494)
			if ((tmp7)){
				HX_STACK_LINE(494)
				bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(494)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(494)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(494)
				tmp8 = false;
			}
			HX_STACK_LINE(494)
			if ((tmp8)){
				HX_STACK_LINE(494)
				Float tmp9 = _this->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(494)
				_this->listen_y(tmp9);
			}
			HX_STACK_LINE(494)
			bool tmp9 = (_this->listen_z != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(494)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(494)
			if ((tmp9)){
				HX_STACK_LINE(494)
				bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(494)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(494)
				tmp10 = !(tmp12);
			}
			else{
				HX_STACK_LINE(494)
				tmp10 = false;
			}
			HX_STACK_LINE(494)
			if ((tmp10)){
				HX_STACK_LINE(494)
				Float tmp11 = _this->z;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(494)
				_this->listen_z(tmp11);
			}
			HX_STACK_LINE(494)
			_this;
		}
		HX_STACK_LINE(494)
		tmp = _this;
	}
	HX_STACK_LINE(494)
	::phoenix::Vector dx = tmp;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(496)
	Float tmp1 = (bdelta->y * adelta->x);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(496)
	Float tmp2 = (bdelta->x * adelta->y);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(496)
	Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(496)
	Float d = tmp3;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(498)
	bool tmp4 = (d == ((Float)0.0));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(498)
	if ((tmp4)){
		HX_STACK_LINE(498)
		return null();
	}
	HX_STACK_LINE(500)
	Float tmp5 = (bdelta->x * dx->y);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(500)
	Float tmp6 = (bdelta->y * dx->x);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(500)
	Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(500)
	Float tmp8 = d;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(500)
	Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(500)
	Float ua = tmp9;		HX_STACK_VAR(ua,"ua");
	HX_STACK_LINE(501)
	Float tmp10 = (adelta->x * dx->y);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(501)
	Float tmp11 = (adelta->y * dx->x);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(501)
	Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(501)
	Float tmp13 = d;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(501)
	Float tmp14 = (Float(tmp12) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(501)
	Float ub = tmp14;		HX_STACK_VAR(ub,"ub");
	struct _Function_1_1{
		inline static Dynamic Block( Float &ub,Float &ua){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/collision/sat/SAT2D.hx",503,0x7b849025)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("ua","\x4c","\x66","\x00","\x00") , ua,false);
				__result->Add(HX_HCSTRING("ub","\x4d","\x66","\x00","\x00") , ub,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(503)
	Dynamic tmp15 = _Function_1_1::Block(ub,ua);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(503)
	return tmp15;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(SAT2D_obj,intersectRayRay,return )


SAT2D_obj::SAT2D_obj()
{
}

bool SAT2D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"swap") ) { outValue = swap_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"testRayVsRay") ) { outValue = testRayVsRay_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bresenhamLine") ) { outValue = bresenhamLine_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"checkPolygons") ) { outValue = checkPolygons_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"testRayVsCircle") ) { outValue = testRayVsCircle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"intersectRayRay") ) { outValue = intersectRayRay_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"testRayVsPolygon") ) { outValue = testRayVsPolygon_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"testCircleVsCircle") ) { outValue = testCircleVsCircle_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"testCircleVsPolygon") ) { outValue = testCircleVsPolygon_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"testPolygonVsPolygon") ) { outValue = testPolygonVsPolygon_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SAT2D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SAT2D_obj::__mClass,"__mClass");
};

#endif

hx::Class SAT2D_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("testCircleVsPolygon","\x5b","\xec","\x40","\x9e"),
	HX_HCSTRING("testCircleVsCircle","\x4f","\x1f","\x15","\x71"),
	HX_HCSTRING("testPolygonVsPolygon","\x55","\x7b","\x7e","\x51"),
	HX_HCSTRING("testRayVsCircle","\x05","\x52","\xe5","\xb7"),
	HX_HCSTRING("testRayVsPolygon","\xe5","\x18","\x9d","\x4d"),
	HX_HCSTRING("testRayVsRay","\xd5","\x9a","\x06","\xdf"),
	HX_HCSTRING("bresenhamLine","\x21","\x3a","\x9e","\xa3"),
	HX_HCSTRING("checkPolygons","\xa1","\x85","\xab","\x14"),
	HX_HCSTRING("swap","\x93","\x2a","\x5e","\x4c"),
	HX_HCSTRING("intersectRayRay","\x5f","\xac","\xc2","\x34"),
	::String(null()) };

void SAT2D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.collision.sat.SAT2D","\x5c","\xe3","\x02","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SAT2D_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SAT2D_obj >;
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
} // end namespace sat
