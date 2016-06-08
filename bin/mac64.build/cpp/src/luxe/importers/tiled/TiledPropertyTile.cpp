#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledPropertyTile
#include <luxe/importers/tiled/TiledPropertyTile.h>
#endif
namespace luxe{
namespace importers{
namespace tiled{

Void TiledPropertyTile_obj::__construct(int _id,::haxe::ds::StringMap _properties)
{
HX_STACK_FRAME("luxe.importers.tiled.TiledPropertyTile","new",0x92cf5f8e,"luxe.importers.tiled.TiledPropertyTile.new","luxe/importers/tiled/TiledMapData.hx",224,0xb3a8886e)
HX_STACK_THIS(this)
HX_STACK_ARG(_id,"_id")
HX_STACK_ARG(_properties,"_properties")
{
	HX_STACK_LINE(225)
	this->id = _id;
	HX_STACK_LINE(226)
	this->properties = _properties;
}
;
	return null();
}

//TiledPropertyTile_obj::~TiledPropertyTile_obj() { }

Dynamic TiledPropertyTile_obj::__CreateEmpty() { return  new TiledPropertyTile_obj; }
hx::ObjectPtr< TiledPropertyTile_obj > TiledPropertyTile_obj::__new(int _id,::haxe::ds::StringMap _properties)
{  hx::ObjectPtr< TiledPropertyTile_obj > _result_ = new TiledPropertyTile_obj();
	_result_->__construct(_id,_properties);
	return _result_;}

Dynamic TiledPropertyTile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledPropertyTile_obj > _result_ = new TiledPropertyTile_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


TiledPropertyTile_obj::TiledPropertyTile_obj()
{
}

void TiledPropertyTile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledPropertyTile);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_END_CLASS();
}

void TiledPropertyTile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(properties,"properties");
}

Dynamic TiledPropertyTile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledPropertyTile_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledPropertyTile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TiledPropertyTile_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TiledPropertyTile_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledPropertyTile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledPropertyTile_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledPropertyTile_obj::__mClass;

void TiledPropertyTile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.importers.tiled.TiledPropertyTile","\x9c","\x40","\xf1","\xaf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledPropertyTile_obj >;
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
