#include <hxcpp.h>

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
namespace luxe{
namespace collision{
namespace shapes{

Void Circle_obj::__construct(Float x,Float y,Float radius)
{
HX_STACK_FRAME("luxe.collision.shapes.Circle","new",0xd9f4c42a,"luxe.collision.shapes.Circle.new","luxe/collision/shapes/Circle.hx",18,0x913b75a7)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(radius,"radius")
{
	HX_STACK_LINE(20)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(21)
	this->_radius = radius;
	HX_STACK_LINE(22)
	Float tmp2 = this->_radius;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	::String tmp3 = (HX_HCSTRING("circle ","\x10","\x5c","\xb6","\xf5") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	this->name = tmp3;
}
;
	return null();
}

//Circle_obj::~Circle_obj() { }

Dynamic Circle_obj::__CreateEmpty() { return  new Circle_obj; }
hx::ObjectPtr< Circle_obj > Circle_obj::__new(Float x,Float y,Float radius)
{  hx::ObjectPtr< Circle_obj > _result_ = new Circle_obj();
	_result_->__construct(x,y,radius);
	return _result_;}

Dynamic Circle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Circle_obj > _result_ = new Circle_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::luxe::collision::data::ShapeCollision Circle_obj::test( ::luxe::collision::shapes::Shape shape){
	HX_STACK_FRAME("luxe.collision.shapes.Circle","test",0xe02e2548,"luxe.collision.shapes.Circle.test","luxe/collision/shapes/Circle.hx",27,0x913b75a7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shape,"shape")
	HX_STACK_LINE(29)
	::luxe::collision::data::ShapeCollision tmp = shape->testCircle(hx::ObjectPtr<OBJ_>(this),true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	return tmp;
}


::luxe::collision::data::ShapeCollision Circle_obj::testCircle( ::luxe::collision::shapes::Circle circle,hx::Null< bool >  __o_flip){
bool flip = __o_flip.Default(false);
	HX_STACK_FRAME("luxe.collision.shapes.Circle","testCircle",0x0d833178,"luxe.collision.shapes.Circle.testCircle","luxe/collision/shapes/Circle.hx",34,0x913b75a7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(circle,"circle")
	HX_STACK_ARG(flip,"flip")
{
		HX_STACK_LINE(36)
		bool tmp = flip;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		::luxe::collision::shapes::Circle tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		if ((tmp)){
			HX_STACK_LINE(36)
			tmp1 = circle;
		}
		else{
			HX_STACK_LINE(36)
			tmp1 = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(36)
		::luxe::collision::shapes::Circle c1 = tmp1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(37)
		bool tmp2 = flip;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		::luxe::collision::shapes::Circle tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		if ((tmp2)){
			HX_STACK_LINE(37)
			tmp3 = hx::ObjectPtr<OBJ_>(this);
		}
		else{
			HX_STACK_LINE(37)
			tmp3 = circle;
		}
		HX_STACK_LINE(37)
		::luxe::collision::shapes::Circle c2 = tmp3;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(39)
		::luxe::collision::shapes::Circle tmp4 = c1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(39)
		::luxe::collision::shapes::Circle tmp5 = c2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		::luxe::collision::data::ShapeCollision tmp6 = ::luxe::collision::sat::SAT2D_obj::testCircleVsCircle(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		return tmp6;
	}
}


::luxe::collision::data::ShapeCollision Circle_obj::testPolygon( ::luxe::collision::shapes::Polygon polygon,hx::Null< bool >  __o_flip){
bool flip = __o_flip.Default(false);
	HX_STACK_FRAME("luxe.collision.shapes.Circle","testPolygon",0xe222be12,"luxe.collision.shapes.Circle.testPolygon","luxe/collision/shapes/Circle.hx",44,0x913b75a7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(polygon,"polygon")
	HX_STACK_ARG(flip,"flip")
{
		HX_STACK_LINE(46)
		::luxe::collision::shapes::Polygon tmp = polygon;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		bool tmp1 = flip;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		::luxe::collision::data::ShapeCollision tmp2 = ::luxe::collision::sat::SAT2D_obj::testCircleVsPolygon(hx::ObjectPtr<OBJ_>(this),tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		return tmp2;
	}
}


::luxe::collision::data::RayCollision Circle_obj::testRay( ::luxe::collision::shapes::Ray ray){
	HX_STACK_FRAME("luxe.collision.shapes.Circle","testRay",0x954ce582,"luxe.collision.shapes.Circle.testRay","luxe/collision/shapes/Circle.hx",51,0x913b75a7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_LINE(53)
	::luxe::collision::shapes::Ray tmp = ray;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	::luxe::collision::data::RayCollision tmp1 = ::luxe::collision::sat::SAT2D_obj::testRayVsCircle(tmp,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	return tmp1;
}


Float Circle_obj::get_radius( ){
	HX_STACK_FRAME("luxe.collision.shapes.Circle","get_radius",0x3fffb991,"luxe.collision.shapes.Circle.get_radius","luxe/collision/shapes/Circle.hx",59,0x913b75a7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	Float tmp = this->_radius;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Circle_obj,get_radius,return )

Float Circle_obj::get_transformedRadius( ){
	HX_STACK_FRAME("luxe.collision.shapes.Circle","get_transformedRadius",0x598ed89e,"luxe.collision.shapes.Circle.get_transformedRadius","luxe/collision/shapes/Circle.hx",65,0x913b75a7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	Float tmp = this->_radius;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	Float tmp1 = this->_scaleX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Circle_obj,get_transformedRadius,return )


Circle_obj::Circle_obj()
{
}

Dynamic Circle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"test") ) { return test_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { if (inCallProp == hx::paccAlways) return get_radius(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		if (HX_FIELD_EQ(inName,"testRay") ) { return testRay_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testCircle") ) { return testCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_radius") ) { return get_radius_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"testPolygon") ) { return testPolygon_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"transformedRadius") ) { if (inCallProp == hx::paccAlways) return get_transformedRadius(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_transformedRadius") ) { return get_transformedRadius_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Circle_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Circle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("radius","\x52","\xd0","\xf6","\xb0"));
	outFields->push(HX_HCSTRING("transformedRadius","\x7d","\x27","\xb5","\xb2"));
	outFields->push(HX_HCSTRING("_radius","\xf1","\xe1","\x6d","\x1f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Circle_obj,_radius),HX_HCSTRING("_radius","\xf1","\xe1","\x6d","\x1f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_radius","\xf1","\xe1","\x6d","\x1f"),
	HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c"),
	HX_HCSTRING("testCircle","\x02","\xb8","\x01","\x6f"),
	HX_HCSTRING("testPolygon","\x48","\xf0","\x59","\xcf"),
	HX_HCSTRING("testRay","\xb8","\x44","\xc5","\xbd"),
	HX_HCSTRING("get_radius","\x1b","\x40","\x7e","\xa1"),
	HX_HCSTRING("get_transformedRadius","\x54","\x2a","\x63","\x31"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

#endif

hx::Class Circle_obj::__mClass;

void Circle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.collision.shapes.Circle","\x38","\x27","\xa9","\x53");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Circle_obj >;
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
