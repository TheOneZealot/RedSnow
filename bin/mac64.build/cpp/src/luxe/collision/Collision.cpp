#include <hxcpp.h>

#ifndef INCLUDED_luxe_collision_Collision
#include <luxe/collision/Collision.h>
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
#ifndef INCLUDED_luxe_collision_sat_SAT2D
#include <luxe/collision/sat/SAT2D.h>
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

Void Collision_obj::__construct()
{
	return null();
}

//Collision_obj::~Collision_obj() { }

Dynamic Collision_obj::__CreateEmpty() { return  new Collision_obj; }
hx::ObjectPtr< Collision_obj > Collision_obj::__new()
{  hx::ObjectPtr< Collision_obj > _result_ = new Collision_obj();
	_result_->__construct();
	return _result_;}

Dynamic Collision_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Collision_obj > _result_ = new Collision_obj();
	_result_->__construct();
	return _result_;}

::luxe::collision::data::ShapeCollision Collision_obj::shapeWithShape( ::luxe::collision::shapes::Shape shape1,::luxe::collision::shapes::Shape shape2){
	HX_STACK_FRAME("luxe.collision.Collision","shapeWithShape",0x6c3341aa,"luxe.collision.Collision.shapeWithShape","luxe/collision/Collision.hx",13,0x1f361322)
	HX_STACK_ARG(shape1,"shape1")
	HX_STACK_ARG(shape2,"shape2")
	HX_STACK_LINE(15)
	::luxe::collision::shapes::Shape tmp = shape2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	::luxe::collision::data::ShapeCollision tmp1 = shape1->test(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Collision_obj,shapeWithShape,return )

Array< ::Dynamic > Collision_obj::shapeWithShapes( ::luxe::collision::shapes::Shape shape1,Array< ::Dynamic > shapes){
	HX_STACK_FRAME("luxe.collision.Collision","shapeWithShapes",0x40a63389,"luxe.collision.Collision.shapeWithShapes","luxe/collision/Collision.hx",22,0x1f361322)
	HX_STACK_ARG(shape1,"shape1")
	HX_STACK_ARG(shapes,"shapes")
	HX_STACK_LINE(24)
	Array< ::Dynamic > results = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		while((true)){
			HX_STACK_LINE(27)
			bool tmp = (_g < shapes->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(27)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(27)
			if ((tmp1)){
				HX_STACK_LINE(27)
				break;
			}
			HX_STACK_LINE(27)
			::luxe::collision::shapes::Shape tmp2 = shapes->__get(_g).StaticCast< ::luxe::collision::shapes::Shape >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(27)
			::luxe::collision::shapes::Shape other_shape = tmp2;		HX_STACK_VAR(other_shape,"other_shape");
			HX_STACK_LINE(27)
			++(_g);
			HX_STACK_LINE(29)
			::luxe::collision::shapes::Shape tmp3 = shape1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(29)
			::luxe::collision::shapes::Shape tmp4 = other_shape;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(29)
			::luxe::collision::data::ShapeCollision tmp5 = ::luxe::collision::Collision_obj::shapeWithShape(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(29)
			::luxe::collision::data::ShapeCollision result = tmp5;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(30)
			bool tmp6 = (result != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(30)
			if ((tmp6)){
				HX_STACK_LINE(31)
				::luxe::collision::data::ShapeCollision tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(31)
				results->push(tmp7);
			}
		}
	}
	HX_STACK_LINE(36)
	return results;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Collision_obj,shapeWithShapes,return )

::luxe::collision::data::RayCollision Collision_obj::rayWithShape( ::luxe::collision::shapes::Ray ray,::luxe::collision::shapes::Shape shape){
	HX_STACK_FRAME("luxe.collision.Collision","rayWithShape",0xc26619c1,"luxe.collision.Collision.rayWithShape","luxe/collision/Collision.hx",43,0x1f361322)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(shape,"shape")
	HX_STACK_LINE(45)
	::luxe::collision::shapes::Ray tmp = ray;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	::luxe::collision::data::RayCollision tmp1 = shape->testRay(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Collision_obj,rayWithShape,return )

Array< ::Dynamic > Collision_obj::rayWithShapes( ::luxe::collision::shapes::Ray ray,Array< ::Dynamic > shapes){
	HX_STACK_FRAME("luxe.collision.Collision","rayWithShapes",0x56f06f92,"luxe.collision.Collision.rayWithShapes","luxe/collision/Collision.hx",52,0x1f361322)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(shapes,"shapes")
	HX_STACK_LINE(54)
	Array< ::Dynamic > results = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(56)
		while((true)){
			HX_STACK_LINE(56)
			bool tmp = (_g < shapes->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(56)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(56)
			if ((tmp1)){
				HX_STACK_LINE(56)
				break;
			}
			HX_STACK_LINE(56)
			::luxe::collision::shapes::Shape tmp2 = shapes->__get(_g).StaticCast< ::luxe::collision::shapes::Shape >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			::luxe::collision::shapes::Shape shape = tmp2;		HX_STACK_VAR(shape,"shape");
			HX_STACK_LINE(56)
			++(_g);
			HX_STACK_LINE(57)
			::luxe::collision::shapes::Ray tmp3 = ray;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(57)
			::luxe::collision::data::RayCollision tmp4 = shape->testRay(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(57)
			::luxe::collision::data::RayCollision result = tmp4;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(58)
			bool tmp5 = (result != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(58)
			if ((tmp5)){
				HX_STACK_LINE(59)
				::luxe::collision::data::RayCollision tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(59)
				results->push(tmp6);
			}
		}
	}
	HX_STACK_LINE(63)
	return results;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Collision_obj,rayWithShapes,return )

::luxe::collision::data::RayIntersection Collision_obj::rayWithRay( ::luxe::collision::shapes::Ray ray1,::luxe::collision::shapes::Ray ray2){
	HX_STACK_FRAME("luxe.collision.Collision","rayWithRay",0x22f7248a,"luxe.collision.Collision.rayWithRay","luxe/collision/Collision.hx",70,0x1f361322)
	HX_STACK_ARG(ray1,"ray1")
	HX_STACK_ARG(ray2,"ray2")
	HX_STACK_LINE(72)
	::luxe::collision::shapes::Ray tmp = ray1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	::luxe::collision::shapes::Ray tmp1 = ray2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	::luxe::collision::data::RayIntersection tmp2 = ::luxe::collision::sat::SAT2D_obj::testRayVsRay(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Collision_obj,rayWithRay,return )

Array< ::Dynamic > Collision_obj::rayWithRays( ::luxe::collision::shapes::Ray ray,Array< ::Dynamic > rays){
	HX_STACK_FRAME("luxe.collision.Collision","rayWithRays",0x7548d4a9,"luxe.collision.Collision.rayWithRays","luxe/collision/Collision.hx",79,0x1f361322)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(rays,"rays")
	HX_STACK_LINE(81)
	Array< ::Dynamic > results = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(83)
		while((true)){
			HX_STACK_LINE(83)
			bool tmp = (_g < rays->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(83)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(83)
			if ((tmp1)){
				HX_STACK_LINE(83)
				break;
			}
			HX_STACK_LINE(83)
			::luxe::collision::shapes::Ray tmp2 = rays->__get(_g).StaticCast< ::luxe::collision::shapes::Ray >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			::luxe::collision::shapes::Ray other = tmp2;		HX_STACK_VAR(other,"other");
			HX_STACK_LINE(83)
			++(_g);
			HX_STACK_LINE(84)
			::luxe::collision::shapes::Ray tmp3 = ray;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			::luxe::collision::shapes::Ray tmp4 = other;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			::luxe::collision::data::RayIntersection tmp5 = ::luxe::collision::sat::SAT2D_obj::testRayVsRay(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			::luxe::collision::data::RayIntersection result = tmp5;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(85)
			bool tmp6 = (result != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(85)
			if ((tmp6)){
				HX_STACK_LINE(86)
				::luxe::collision::data::RayIntersection tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(86)
				results->push(tmp7);
			}
		}
	}
	HX_STACK_LINE(90)
	return results;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Collision_obj,rayWithRays,return )

bool Collision_obj::pointInPoly( ::phoenix::Vector point,::luxe::collision::shapes::Polygon poly){
	HX_STACK_FRAME("luxe.collision.Collision","pointInPoly",0xf7437571,"luxe.collision.Collision.pointInPoly","luxe/collision/Collision.hx",96,0x1f361322)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(poly,"poly")
	HX_STACK_LINE(98)
	int tmp = poly->get_transformedVertices()->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	int sides = tmp;		HX_STACK_VAR(sides,"sides");
	HX_STACK_LINE(99)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(100)
	int tmp1 = (sides - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	int j = tmp1;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(101)
	bool oddNodes = false;		HX_STACK_VAR(oddNodes,"oddNodes");
	HX_STACK_LINE(103)
	{
		HX_STACK_LINE(103)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(103)
		while((true)){
			HX_STACK_LINE(103)
			bool tmp2 = (_g < sides);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(103)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(103)
			if ((tmp3)){
				HX_STACK_LINE(103)
				break;
			}
			HX_STACK_LINE(103)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(103)
			int i1 = tmp4;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(105)
			::phoenix::Vector tmp5 = poly->get_transformedVertices()->__get(i1).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(105)
			Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(105)
			Float tmp7 = point->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(105)
			bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(105)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(105)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(105)
			if ((tmp9)){
				HX_STACK_LINE(105)
				::phoenix::Vector tmp11 = poly->get_transformedVertices()->__get(j).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(105)
				::phoenix::Vector tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(105)
				::phoenix::Vector tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(105)
				Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(105)
				Float tmp15 = point->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(105)
				tmp10 = (tmp14 >= tmp15);
			}
			else{
				HX_STACK_LINE(105)
				tmp10 = false;
			}
			HX_STACK_LINE(105)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(105)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(105)
			if ((tmp11)){
				HX_STACK_LINE(106)
				::phoenix::Vector tmp13 = poly->get_transformedVertices()->__get(j).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(106)
				::phoenix::Vector tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(106)
				Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(106)
				Float tmp16 = point->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(106)
				bool tmp17 = (tmp15 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(106)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(106)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(106)
				if ((tmp19)){
					HX_STACK_LINE(106)
					::phoenix::Vector tmp20 = poly->get_transformedVertices()->__get(i1).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(106)
					::phoenix::Vector tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(106)
					::phoenix::Vector tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(106)
					Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(106)
					Float tmp24 = point->y;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(106)
					tmp12 = (tmp23 >= tmp24);
				}
				else{
					HX_STACK_LINE(106)
					tmp12 = false;
				}
			}
			else{
				HX_STACK_LINE(105)
				tmp12 = true;
			}
			HX_STACK_LINE(105)
			if ((tmp12)){
				HX_STACK_LINE(108)
				::phoenix::Vector tmp13 = poly->get_transformedVertices()->__get(i1).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(108)
				Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(109)
				Float tmp15 = point->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(109)
				::phoenix::Vector tmp16 = poly->get_transformedVertices()->__get(i1).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(109)
				Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(109)
				Float tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(110)
				::phoenix::Vector tmp19 = poly->get_transformedVertices()->__get(j).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(110)
				Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(110)
				::phoenix::Vector tmp21 = poly->get_transformedVertices()->__get(i1).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(110)
				Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(110)
				Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(109)
				Float tmp24 = (Float(tmp18) / Float(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(111)
				::phoenix::Vector tmp25 = poly->get_transformedVertices()->__get(j).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(111)
				Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(111)
				::phoenix::Vector tmp27 = poly->get_transformedVertices()->__get(i1).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(111)
				Float tmp28 = tmp27->x;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(111)
				Float tmp29 = (tmp26 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(109)
				Float tmp30 = (tmp24 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(108)
				Float tmp31 = (tmp14 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(111)
				Float tmp32 = point->x;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(108)
				bool tmp33 = (tmp31 < tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(108)
				if ((tmp33)){
					HX_STACK_LINE(113)
					bool tmp34 = oddNodes;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(113)
					bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(113)
					oddNodes = tmp35;
				}
			}
			HX_STACK_LINE(118)
			j = i1;
		}
	}
	HX_STACK_LINE(122)
	bool tmp2 = oddNodes;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(122)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Collision_obj,pointInPoly,return )


Collision_obj::Collision_obj()
{
}

bool Collision_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"rayWithRay") ) { outValue = rayWithRay_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rayWithRays") ) { outValue = rayWithRays_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pointInPoly") ) { outValue = pointInPoly_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rayWithShape") ) { outValue = rayWithShape_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rayWithShapes") ) { outValue = rayWithShapes_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"shapeWithShape") ) { outValue = shapeWithShape_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"shapeWithShapes") ) { outValue = shapeWithShapes_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Collision_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Collision_obj::__mClass,"__mClass");
};

#endif

hx::Class Collision_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("shapeWithShape","\xda","\x57","\x25","\x94"),
	HX_HCSTRING("shapeWithShapes","\x59","\x87","\x87","\x0c"),
	HX_HCSTRING("rayWithShape","\xf1","\x43","\x95","\xa0"),
	HX_HCSTRING("rayWithShapes","\x62","\x2f","\x06","\xe2"),
	HX_HCSTRING("rayWithRay","\xba","\x62","\x36","\xc4"),
	HX_HCSTRING("rayWithRays","\x79","\x00","\x60","\xeb"),
	HX_HCSTRING("pointInPoly","\x41","\xa1","\x5a","\x6d"),
	::String(null()) };

void Collision_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.collision.Collision","\x9e","\xac","\xe3","\x8f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Collision_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Collision_obj >;
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
