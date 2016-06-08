#include <hxcpp.h>

#ifndef INCLUDED_luxe_collision_data_ShapeCollision
#include <luxe/collision/data/ShapeCollision.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Shape
#include <luxe/collision/shapes/Shape.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{
namespace collision{
namespace data{

Void ShapeCollision_obj::__construct()
{
HX_STACK_FRAME("luxe.collision.data.ShapeCollision","new",0xe15b7bb3,"luxe.collision.data.ShapeCollision.new","luxe/collision/data/ShapeCollision.hx",8,0xa28f16be)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	this->overlap = ((Float)0);
	HX_STACK_LINE(25)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	this->separation = tmp;
	HX_STACK_LINE(26)
	::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	this->unitVector = tmp1;
}
;
	return null();
}

//ShapeCollision_obj::~ShapeCollision_obj() { }

Dynamic ShapeCollision_obj::__CreateEmpty() { return  new ShapeCollision_obj; }
hx::ObjectPtr< ShapeCollision_obj > ShapeCollision_obj::__new()
{  hx::ObjectPtr< ShapeCollision_obj > _result_ = new ShapeCollision_obj();
	_result_->__construct();
	return _result_;}

Dynamic ShapeCollision_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShapeCollision_obj > _result_ = new ShapeCollision_obj();
	_result_->__construct();
	return _result_;}


ShapeCollision_obj::ShapeCollision_obj()
{
}

void ShapeCollision_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShapeCollision);
	HX_MARK_MEMBER_NAME(overlap,"overlap");
	HX_MARK_MEMBER_NAME(separation,"separation");
	HX_MARK_MEMBER_NAME(shape1,"shape1");
	HX_MARK_MEMBER_NAME(shape2,"shape2");
	HX_MARK_MEMBER_NAME(unitVector,"unitVector");
	HX_MARK_END_CLASS();
}

void ShapeCollision_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(overlap,"overlap");
	HX_VISIT_MEMBER_NAME(separation,"separation");
	HX_VISIT_MEMBER_NAME(shape1,"shape1");
	HX_VISIT_MEMBER_NAME(shape2,"shape2");
	HX_VISIT_MEMBER_NAME(unitVector,"unitVector");
}

Dynamic ShapeCollision_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shape1") ) { return shape1; }
		if (HX_FIELD_EQ(inName,"shape2") ) { return shape2; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"overlap") ) { return overlap; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"separation") ) { return separation; }
		if (HX_FIELD_EQ(inName,"unitVector") ) { return unitVector; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShapeCollision_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shape1") ) { shape1=inValue.Cast< ::luxe::collision::shapes::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shape2") ) { shape2=inValue.Cast< ::luxe::collision::shapes::Shape >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"overlap") ) { overlap=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"separation") ) { separation=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unitVector") ) { unitVector=inValue.Cast< ::phoenix::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShapeCollision_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("overlap","\x87","\x43","\x10","\xa9"));
	outFields->push(HX_HCSTRING("separation","\x46","\x68","\xf0","\x1d"));
	outFields->push(HX_HCSTRING("shape1","\xf0","\xd9","\x29","\x1d"));
	outFields->push(HX_HCSTRING("shape2","\xf1","\xd9","\x29","\x1d"));
	outFields->push(HX_HCSTRING("unitVector","\x67","\xaa","\x20","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ShapeCollision_obj,overlap),HX_HCSTRING("overlap","\x87","\x43","\x10","\xa9")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(ShapeCollision_obj,separation),HX_HCSTRING("separation","\x46","\x68","\xf0","\x1d")},
	{hx::fsObject /*::luxe::collision::shapes::Shape*/ ,(int)offsetof(ShapeCollision_obj,shape1),HX_HCSTRING("shape1","\xf0","\xd9","\x29","\x1d")},
	{hx::fsObject /*::luxe::collision::shapes::Shape*/ ,(int)offsetof(ShapeCollision_obj,shape2),HX_HCSTRING("shape2","\xf1","\xd9","\x29","\x1d")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(ShapeCollision_obj,unitVector),HX_HCSTRING("unitVector","\x67","\xaa","\x20","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("overlap","\x87","\x43","\x10","\xa9"),
	HX_HCSTRING("separation","\x46","\x68","\xf0","\x1d"),
	HX_HCSTRING("shape1","\xf0","\xd9","\x29","\x1d"),
	HX_HCSTRING("shape2","\xf1","\xd9","\x29","\x1d"),
	HX_HCSTRING("unitVector","\x67","\xaa","\x20","\x9f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShapeCollision_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShapeCollision_obj::__mClass,"__mClass");
};

#endif

hx::Class ShapeCollision_obj::__mClass;

void ShapeCollision_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.collision.data.ShapeCollision","\x41","\x26","\x09","\x63");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShapeCollision_obj >;
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
