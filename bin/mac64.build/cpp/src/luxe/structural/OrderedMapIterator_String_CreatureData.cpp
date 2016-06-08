#include <hxcpp.h>

#ifndef INCLUDED_CreatureData
#include <CreatureData.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_structural_OrderedMapIterator_String_CreatureData
#include <luxe/structural/OrderedMapIterator_String_CreatureData.h>
#endif
#ifndef INCLUDED_luxe_structural_OrderedMap_String_CreatureData
#include <luxe/structural/OrderedMap_String_CreatureData.h>
#endif
namespace luxe{
namespace structural{

Void OrderedMapIterator_String_CreatureData_obj::__construct(::luxe::structural::OrderedMap_String_CreatureData omap)
{
HX_STACK_FRAME("luxe.structural.OrderedMapIterator_String_CreatureData","new",0x70829c00,"luxe.structural.OrderedMapIterator_String_CreatureData.new","luxe/structural/OrderedMap.hx",17,0x2ffa3116)
HX_STACK_THIS(this)
HX_STACK_ARG(omap,"omap")
{
	HX_STACK_LINE(20)
	this->index = (int)0;
	HX_STACK_LINE(23)
	this->map = omap;
}
;
	return null();
}

//OrderedMapIterator_String_CreatureData_obj::~OrderedMapIterator_String_CreatureData_obj() { }

Dynamic OrderedMapIterator_String_CreatureData_obj::__CreateEmpty() { return  new OrderedMapIterator_String_CreatureData_obj; }
hx::ObjectPtr< OrderedMapIterator_String_CreatureData_obj > OrderedMapIterator_String_CreatureData_obj::__new(::luxe::structural::OrderedMap_String_CreatureData omap)
{  hx::ObjectPtr< OrderedMapIterator_String_CreatureData_obj > _result_ = new OrderedMapIterator_String_CreatureData_obj();
	_result_->__construct(omap);
	return _result_;}

Dynamic OrderedMapIterator_String_CreatureData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OrderedMapIterator_String_CreatureData_obj > _result_ = new OrderedMapIterator_String_CreatureData_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool OrderedMapIterator_String_CreatureData_obj::hasNext( ){
	HX_STACK_FRAME("luxe.structural.OrderedMapIterator_String_CreatureData","hasNext",0xaf53c10d,"luxe.structural.OrderedMapIterator_String_CreatureData.hasNext","luxe/structural/OrderedMap.hx",25,0x2ffa3116)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	int tmp = this->index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	::luxe::structural::OrderedMap_String_CreatureData tmp1 = this->map;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	int tmp2 = tmp1->_keys->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(OrderedMapIterator_String_CreatureData_obj,hasNext,return )

::CreatureData OrderedMapIterator_String_CreatureData_obj::next( ){
	HX_STACK_FRAME("luxe.structural.OrderedMapIterator_String_CreatureData","next",0x01c5e553,"luxe.structural.OrderedMapIterator_String_CreatureData.next","luxe/structural/OrderedMap.hx",27,0x2ffa3116)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	::CreatureData tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		::luxe::structural::OrderedMap_String_CreatureData tmp1 = this->map;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		int tmp2 = (this->index)++;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		::String tmp3 = tmp1->_keys->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		::String key = tmp3;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(27)
		::luxe::structural::OrderedMap_String_CreatureData tmp4 = this->map;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		::CreatureData tmp6 = tmp4->map->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(27)
		tmp = tmp6;
	}
	HX_STACK_LINE(27)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(OrderedMapIterator_String_CreatureData_obj,next,return )


OrderedMapIterator_String_CreatureData_obj::OrderedMapIterator_String_CreatureData_obj()
{
}

void OrderedMapIterator_String_CreatureData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OrderedMapIterator_String_CreatureData);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_END_CLASS();
}

void OrderedMapIterator_String_CreatureData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(index,"index");
}

Dynamic OrderedMapIterator_String_CreatureData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OrderedMapIterator_String_CreatureData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::luxe::structural::OrderedMap_String_CreatureData >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OrderedMapIterator_String_CreatureData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::structural::OrderedMap_String_CreatureData*/ ,(int)offsetof(OrderedMapIterator_String_CreatureData_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsInt,(int)offsetof(OrderedMapIterator_String_CreatureData_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OrderedMapIterator_String_CreatureData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OrderedMapIterator_String_CreatureData_obj::__mClass,"__mClass");
};

#endif

hx::Class OrderedMapIterator_String_CreatureData_obj::__mClass;

void OrderedMapIterator_String_CreatureData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.structural.OrderedMapIterator_String_CreatureData","\x0e","\xdc","\x8c","\xe4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OrderedMapIterator_String_CreatureData_obj >;
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
} // end namespace structural
