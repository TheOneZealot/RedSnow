#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledUtil
#include <luxe/importers/tiled/TiledUtil.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_TilemapOrientation
#include <luxe/tilemaps/TilemapOrientation.h>
#endif
namespace luxe{
namespace importers{
namespace tiled{

Void TiledUtil_obj::__construct()
{
	return null();
}

//TiledUtil_obj::~TiledUtil_obj() { }

Dynamic TiledUtil_obj::__CreateEmpty() { return  new TiledUtil_obj; }
hx::ObjectPtr< TiledUtil_obj > TiledUtil_obj::__new()
{  hx::ObjectPtr< TiledUtil_obj > _result_ = new TiledUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic TiledUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledUtil_obj > _result_ = new TiledUtil_obj();
	_result_->__construct();
	return _result_;}

bool TiledUtil_obj::valid_element( ::Xml element){
	HX_STACK_FRAME("luxe.importers.tiled.TiledUtil","valid_element",0x07b7bf06,"luxe.importers.tiled.TiledUtil.valid_element","luxe/importers/tiled/TiledUtil.hx",7,0x9f629966)
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(12)
	bool tmp = (element->nodeType == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TiledUtil_obj,valid_element,return )

::luxe::tilemaps::TilemapOrientation TiledUtil_obj::orientation_from_string( ::String _orientation_string){
	HX_STACK_FRAME("luxe.importers.tiled.TiledUtil","orientation_from_string",0x7df91324,"luxe.importers.tiled.TiledUtil.orientation_from_string","luxe/importers/tiled/TiledUtil.hx",18,0x9f629966)
	HX_STACK_ARG(_orientation_string,"_orientation_string")
	HX_STACK_LINE(20)
	::String tmp = _orientation_string;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	::luxe::tilemaps::TilemapOrientation tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("orthogonal","\x79","\xf9","\xf3","\x18"))){
		HX_STACK_LINE(21)
		tmp1 = ::luxe::tilemaps::TilemapOrientation_obj::ortho;
	}
	else if (  ( _switch_1==HX_HCSTRING("isometric","\x35","\x5b","\xde","\x47"))){
		HX_STACK_LINE(22)
		tmp1 = ::luxe::tilemaps::TilemapOrientation_obj::isometric;
	}
	else  {
		HX_STACK_LINE(23)
		tmp1 = ::luxe::tilemaps::TilemapOrientation_obj::none;
	}
;
;
	HX_STACK_LINE(20)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TiledUtil_obj,orientation_from_string,return )


TiledUtil_obj::TiledUtil_obj()
{
}

bool TiledUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"valid_element") ) { outValue = valid_element_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"orientation_from_string") ) { outValue = orientation_from_string_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("valid_element","\x39","\xd9","\xfc","\xf2"),
	HX_HCSTRING("orientation_from_string","\x17","\x0b","\xb2","\x54"),
	::String(null()) };

void TiledUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.importers.tiled.TiledUtil","\x7b","\x69","\xaa","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TiledUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TiledUtil_obj >;
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
