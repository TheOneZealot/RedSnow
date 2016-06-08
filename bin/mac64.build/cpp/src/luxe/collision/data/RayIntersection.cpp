#include <hxcpp.h>

#ifndef INCLUDED_luxe_collision_data_RayIntersection
#include <luxe/collision/data/RayIntersection.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Ray
#include <luxe/collision/shapes/Ray.h>
#endif
namespace luxe{
namespace collision{
namespace data{

Void RayIntersection_obj::__construct(::luxe::collision::shapes::Ray ray1,Float u1,::luxe::collision::shapes::Ray ray2,Float u2)
{
HX_STACK_FRAME("luxe.collision.data.RayIntersection","new",0xefa30695,"luxe.collision.data.RayIntersection.new","luxe/collision/data/RayIntersection.hx",20,0x175d73ba)
HX_STACK_THIS(this)
HX_STACK_ARG(ray1,"ray1")
HX_STACK_ARG(u1,"u1")
HX_STACK_ARG(ray2,"ray2")
HX_STACK_ARG(u2,"u2")
{
	HX_STACK_LINE(22)
	this->ray1 = ray1;
	HX_STACK_LINE(23)
	this->ray2 = ray2;
	HX_STACK_LINE(25)
	this->u1 = u1;
	HX_STACK_LINE(26)
	this->u2 = u2;
}
;
	return null();
}

//RayIntersection_obj::~RayIntersection_obj() { }

Dynamic RayIntersection_obj::__CreateEmpty() { return  new RayIntersection_obj; }
hx::ObjectPtr< RayIntersection_obj > RayIntersection_obj::__new(::luxe::collision::shapes::Ray ray1,Float u1,::luxe::collision::shapes::Ray ray2,Float u2)
{  hx::ObjectPtr< RayIntersection_obj > _result_ = new RayIntersection_obj();
	_result_->__construct(ray1,u1,ray2,u2);
	return _result_;}

Dynamic RayIntersection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RayIntersection_obj > _result_ = new RayIntersection_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}


RayIntersection_obj::RayIntersection_obj()
{
}

void RayIntersection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RayIntersection);
	HX_MARK_MEMBER_NAME(ray1,"ray1");
	HX_MARK_MEMBER_NAME(ray2,"ray2");
	HX_MARK_MEMBER_NAME(u1,"u1");
	HX_MARK_MEMBER_NAME(u2,"u2");
	HX_MARK_END_CLASS();
}

void RayIntersection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ray1,"ray1");
	HX_VISIT_MEMBER_NAME(ray2,"ray2");
	HX_VISIT_MEMBER_NAME(u1,"u1");
	HX_VISIT_MEMBER_NAME(u2,"u2");
}

Dynamic RayIntersection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"u1") ) { return u1; }
		if (HX_FIELD_EQ(inName,"u2") ) { return u2; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ray1") ) { return ray1; }
		if (HX_FIELD_EQ(inName,"ray2") ) { return ray2; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RayIntersection_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"u1") ) { u1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"u2") ) { u2=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ray1") ) { ray1=inValue.Cast< ::luxe::collision::shapes::Ray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ray2") ) { ray2=inValue.Cast< ::luxe::collision::shapes::Ray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RayIntersection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ray1","\x07","\x57","\xa4","\x4b"));
	outFields->push(HX_HCSTRING("ray2","\x08","\x57","\xa4","\x4b"));
	outFields->push(HX_HCSTRING("u1","\x1c","\x66","\x00","\x00"));
	outFields->push(HX_HCSTRING("u2","\x1d","\x66","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::collision::shapes::Ray*/ ,(int)offsetof(RayIntersection_obj,ray1),HX_HCSTRING("ray1","\x07","\x57","\xa4","\x4b")},
	{hx::fsObject /*::luxe::collision::shapes::Ray*/ ,(int)offsetof(RayIntersection_obj,ray2),HX_HCSTRING("ray2","\x08","\x57","\xa4","\x4b")},
	{hx::fsFloat,(int)offsetof(RayIntersection_obj,u1),HX_HCSTRING("u1","\x1c","\x66","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(RayIntersection_obj,u2),HX_HCSTRING("u2","\x1d","\x66","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ray1","\x07","\x57","\xa4","\x4b"),
	HX_HCSTRING("ray2","\x08","\x57","\xa4","\x4b"),
	HX_HCSTRING("u1","\x1c","\x66","\x00","\x00"),
	HX_HCSTRING("u2","\x1d","\x66","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RayIntersection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RayIntersection_obj::__mClass,"__mClass");
};

#endif

hx::Class RayIntersection_obj::__mClass;

void RayIntersection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.collision.data.RayIntersection","\x23","\x18","\x75","\xad");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RayIntersection_obj >;
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
