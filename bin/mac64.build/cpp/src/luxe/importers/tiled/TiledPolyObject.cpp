#include <hxcpp.h>

#ifndef INCLUDED_luxe_importers_tiled_TiledPolyObject
#include <luxe/importers/tiled/TiledPolyObject.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{
namespace importers{
namespace tiled{

Void TiledPolyObject_obj::__construct(::phoenix::Vector _origin,Array< ::Dynamic > _points)
{
HX_STACK_FRAME("luxe.importers.tiled.TiledPolyObject","new",0x6b35c756,"luxe.importers.tiled.TiledPolyObject.new","luxe/importers/tiled/TiledObjectGroup.hx",18,0x738a9294)
HX_STACK_THIS(this)
HX_STACK_ARG(_origin,"_origin")
HX_STACK_ARG(_points,"_points")
{
	HX_STACK_LINE(19)
	this->origin = _origin;
	HX_STACK_LINE(20)
	this->points = _points;
}
;
	return null();
}

//TiledPolyObject_obj::~TiledPolyObject_obj() { }

Dynamic TiledPolyObject_obj::__CreateEmpty() { return  new TiledPolyObject_obj; }
hx::ObjectPtr< TiledPolyObject_obj > TiledPolyObject_obj::__new(::phoenix::Vector _origin,Array< ::Dynamic > _points)
{  hx::ObjectPtr< TiledPolyObject_obj > _result_ = new TiledPolyObject_obj();
	_result_->__construct(_origin,_points);
	return _result_;}

Dynamic TiledPolyObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledPolyObject_obj > _result_ = new TiledPolyObject_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


TiledPolyObject_obj::TiledPolyObject_obj()
{
}

void TiledPolyObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledPolyObject);
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_END_CLASS();
}

void TiledPolyObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(points,"points");
}

Dynamic TiledPolyObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		if (HX_FIELD_EQ(inName,"points") ) { return points; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledPolyObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledPolyObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"));
	outFields->push(HX_HCSTRING("points","\x23","\x12","\x2e","\xf7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(TiledPolyObject_obj,origin),HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledPolyObject_obj,points),HX_HCSTRING("points","\x23","\x12","\x2e","\xf7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"),
	HX_HCSTRING("points","\x23","\x12","\x2e","\xf7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledPolyObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledPolyObject_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledPolyObject_obj::__mClass;

void TiledPolyObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.importers.tiled.TiledPolyObject","\x64","\x24","\x86","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledPolyObject_obj >;
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
} // end namespace importers
} // end namespace tiled
