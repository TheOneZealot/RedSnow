#include <hxcpp.h>

#ifndef INCLUDED_luxe_collision_data_RayCollision
#include <luxe/collision/data/RayCollision.h>
#endif
#ifndef INCLUDED_luxe_collision_data_RayCollisionHelper
#include <luxe/collision/data/RayCollisionHelper.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Ray
#include <luxe/collision/shapes/Ray.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{
namespace collision{
namespace data{

Void RayCollisionHelper_obj::__construct()
{
	return null();
}

//RayCollisionHelper_obj::~RayCollisionHelper_obj() { }

Dynamic RayCollisionHelper_obj::__CreateEmpty() { return  new RayCollisionHelper_obj; }
hx::ObjectPtr< RayCollisionHelper_obj > RayCollisionHelper_obj::__new()
{  hx::ObjectPtr< RayCollisionHelper_obj > _result_ = new RayCollisionHelper_obj();
	_result_->__construct();
	return _result_;}

Dynamic RayCollisionHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RayCollisionHelper_obj > _result_ = new RayCollisionHelper_obj();
	_result_->__construct();
	return _result_;}

::phoenix::Vector RayCollisionHelper_obj::hitStart( ::luxe::collision::data::RayCollision data){
	HX_STACK_FRAME("luxe.collision.data.RayCollisionHelper","hitStart",0x831f9897,"luxe.collision.data.RayCollisionHelper.hitStart","luxe/collision/data/RayCollision.hx",40,0x7e85e4c7)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(41)
	::phoenix::Vector tmp = data->ray->get_dir();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	::phoenix::Vector dir = tmp;		HX_STACK_VAR(dir,"dir");
	HX_STACK_LINE(42)
	Float tmp1 = (dir->x * data->start);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	Float offsetx = tmp1;		HX_STACK_VAR(offsetx,"offsetx");
	HX_STACK_LINE(43)
	Float tmp2 = (dir->y * data->start);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	Float offsety = tmp2;		HX_STACK_VAR(offsety,"offsety");
	HX_STACK_LINE(44)
	::phoenix::Vector tmp3 = data->ray->start;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(44)
	Float tmp5 = offsetx;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(44)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	::phoenix::Vector tmp7 = data->ray->start;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(44)
	Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(44)
	Float tmp9 = offsety;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(44)
	Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(44)
	::phoenix::Vector tmp11 = ::phoenix::Vector_obj::__new(tmp6,tmp10,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(44)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RayCollisionHelper_obj,hitStart,return )

::phoenix::Vector RayCollisionHelper_obj::hitEnd( ::luxe::collision::data::RayCollision data){
	HX_STACK_FRAME("luxe.collision.data.RayCollisionHelper","hitEnd",0xe66040d0,"luxe.collision.data.RayCollisionHelper.hitEnd","luxe/collision/data/RayCollision.hx",52,0x7e85e4c7)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(53)
	::phoenix::Vector tmp = data->ray->get_dir();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	::phoenix::Vector dir = tmp;		HX_STACK_VAR(dir,"dir");
	HX_STACK_LINE(54)
	Float tmp1 = (dir->x * data->end);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	Float offsetx = tmp1;		HX_STACK_VAR(offsetx,"offsetx");
	HX_STACK_LINE(55)
	Float tmp2 = (dir->y * data->end);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	Float offsety = tmp2;		HX_STACK_VAR(offsety,"offsety");
	HX_STACK_LINE(56)
	::phoenix::Vector tmp3 = data->ray->start;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	Float tmp5 = offsetx;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(56)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(56)
	::phoenix::Vector tmp7 = data->ray->start;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(56)
	Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(56)
	Float tmp9 = offsety;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(56)
	Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(56)
	::phoenix::Vector tmp11 = ::phoenix::Vector_obj::__new(tmp6,tmp10,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(56)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RayCollisionHelper_obj,hitEnd,return )


RayCollisionHelper_obj::RayCollisionHelper_obj()
{
}

bool RayCollisionHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"hitEnd") ) { outValue = hitEnd_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hitStart") ) { outValue = hitStart_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RayCollisionHelper_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RayCollisionHelper_obj::__mClass,"__mClass");
};

#endif

hx::Class RayCollisionHelper_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("hitStart","\x0f","\xd1","\x6a","\xc3"),
	HX_HCSTRING("hitEnd","\x48","\xeb","\x11","\x57"),
	::String(null()) };

void RayCollisionHelper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.collision.data.RayCollisionHelper","\xe6","\xa9","\xf6","\xc4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RayCollisionHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< RayCollisionHelper_obj >;
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
