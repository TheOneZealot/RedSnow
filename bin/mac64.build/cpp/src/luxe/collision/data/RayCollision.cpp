#include <hxcpp.h>

#ifndef INCLUDED_luxe_collision_data_RayCollision
#include <luxe/collision/data/RayCollision.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Ray
#include <luxe/collision/shapes/Ray.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Shape
#include <luxe/collision/shapes/Shape.h>
#endif
namespace luxe{
namespace collision{
namespace data{

Void RayCollision_obj::__construct(::luxe::collision::shapes::Shape _shape,::luxe::collision::shapes::Ray _ray,Float _start,Float _end)
{
HX_STACK_FRAME("luxe.collision.data.RayCollision","new",0x600c134a,"luxe.collision.data.RayCollision.new","luxe/collision/data/RayCollision.hx",20,0x7e85e4c7)
HX_STACK_THIS(this)
HX_STACK_ARG(_shape,"_shape")
HX_STACK_ARG(_ray,"_ray")
HX_STACK_ARG(_start,"_start")
HX_STACK_ARG(_end,"_end")
{
	HX_STACK_LINE(22)
	this->ray = _ray;
	HX_STACK_LINE(23)
	this->shape = _shape;
	HX_STACK_LINE(24)
	this->start = _start;
	HX_STACK_LINE(25)
	this->end = _end;
}
;
	return null();
}

//RayCollision_obj::~RayCollision_obj() { }

Dynamic RayCollision_obj::__CreateEmpty() { return  new RayCollision_obj; }
hx::ObjectPtr< RayCollision_obj > RayCollision_obj::__new(::luxe::collision::shapes::Shape _shape,::luxe::collision::shapes::Ray _ray,Float _start,Float _end)
{  hx::ObjectPtr< RayCollision_obj > _result_ = new RayCollision_obj();
	_result_->__construct(_shape,_ray,_start,_end);
	return _result_;}

Dynamic RayCollision_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RayCollision_obj > _result_ = new RayCollision_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}


RayCollision_obj::RayCollision_obj()
{
}

void RayCollision_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RayCollision);
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_MEMBER_NAME(ray,"ray");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_END_CLASS();
}

void RayCollision_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shape,"shape");
	HX_VISIT_MEMBER_NAME(ray,"ray");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
}

Dynamic RayCollision_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ray; }
		if (HX_FIELD_EQ(inName,"end") ) { return end; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { return shape; }
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RayCollision_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { ray=inValue.Cast< ::luxe::collision::shapes::Ray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast< ::luxe::collision::shapes::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RayCollision_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c"));
	outFields->push(HX_HCSTRING("ray","\xea","\xd5","\x56","\x00"));
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::collision::shapes::Shape*/ ,(int)offsetof(RayCollision_obj,shape),HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c")},
	{hx::fsObject /*::luxe::collision::shapes::Ray*/ ,(int)offsetof(RayCollision_obj,ray),HX_HCSTRING("ray","\xea","\xd5","\x56","\x00")},
	{hx::fsFloat,(int)offsetof(RayCollision_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsFloat,(int)offsetof(RayCollision_obj,end),HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c"),
	HX_HCSTRING("ray","\xea","\xd5","\x56","\x00"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RayCollision_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RayCollision_obj::__mClass,"__mClass");
};

#endif

hx::Class RayCollision_obj::__mClass;

void RayCollision_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.collision.data.RayCollision","\x58","\x66","\xe2","\x1d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RayCollision_obj >;
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
} // end namespace data
