#include <hxcpp.h>

#ifndef INCLUDED_CreatureData
#include <CreatureData.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif

Void CreatureData_obj::__construct(Dynamic data)
{
HX_STACK_FRAME("CreatureData","new",0x8dcde91b,"CreatureData.new","Creature.hx",102,0xc6ca163f)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
{
	HX_STACK_LINE(103)
	this->components = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(105)
	{
		HX_STACK_LINE(105)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(105)
		Dynamic tmp = data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		Array< ::String > _g1 = ::Reflect_obj::fields(tmp);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(105)
		while((true)){
			HX_STACK_LINE(105)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(105)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(105)
			if ((tmp2)){
				HX_STACK_LINE(105)
				break;
			}
			HX_STACK_LINE(105)
			::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(105)
			::String data_field = tmp3;		HX_STACK_VAR(data_field,"data_field");
			HX_STACK_LINE(105)
			++(_g);
			HX_STACK_LINE(107)
			bool hasField = false;		HX_STACK_VAR(hasField,"hasField");
			HX_STACK_LINE(108)
			{
				HX_STACK_LINE(108)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(108)
				::hx::Class tmp4 = ::Type_obj::resolveClass(HX_HCSTRING("CreatureData","\xa9","\xbf","\x8e","\x38"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(108)
				Array< ::String > _g3 = ::Type_obj::getInstanceFields(tmp4);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(108)
				while((true)){
					HX_STACK_LINE(108)
					bool tmp5 = (_g2 < _g3->length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(108)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(108)
					if ((tmp6)){
						HX_STACK_LINE(108)
						break;
					}
					HX_STACK_LINE(108)
					::String tmp7 = _g3->__get(_g2);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(108)
					::String field = tmp7;		HX_STACK_VAR(field,"field");
					HX_STACK_LINE(108)
					++(_g2);
					HX_STACK_LINE(110)
					bool tmp8 = (field == data_field);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(110)
					if ((tmp8)){
						HX_STACK_LINE(112)
						hasField = true;
						HX_STACK_LINE(113)
						break;
					}
				}
			}
			HX_STACK_LINE(116)
			{
				HX_STACK_LINE(116)
				bool tmp4 = hasField;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(116)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(116)
				if ((tmp5)){
					HX_STACK_LINE(116)
					::String tmp6 = (HX_HCSTRING("CreatureData has no field with name ","\x03","\x6d","\xf8","\x02") + data_field);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(214)
					::String tmp7 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(214)
					::String tmp8 = (tmp7 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(116)
					::String tmp9 = (HX_HCSTRING("hasField","\x00","\xdf","\xeb","\x8c") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(116)
					::luxe::DebugError tmp10 = ::luxe::DebugError_obj::assertion(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(116)
					HX_STACK_DO_THROW(tmp10);
				}
			}
			HX_STACK_LINE(117)
			bool tmp4 = hasField;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(117)
			if ((tmp4)){
				HX_STACK_LINE(119)
				::String tmp5 = data_field;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(119)
				Dynamic tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(119)
				::String tmp7 = data_field;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(119)
				Dynamic tmp8 = ::Reflect_obj::field(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(119)
				::Reflect_obj::setField(hx::ObjectPtr<OBJ_>(this),tmp5,tmp8);
			}
		}
	}
}
;
	return null();
}

//CreatureData_obj::~CreatureData_obj() { }

Dynamic CreatureData_obj::__CreateEmpty() { return  new CreatureData_obj; }
hx::ObjectPtr< CreatureData_obj > CreatureData_obj::__new(Dynamic data)
{  hx::ObjectPtr< CreatureData_obj > _result_ = new CreatureData_obj();
	_result_->__construct(data);
	return _result_;}

Dynamic CreatureData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CreatureData_obj > _result_ = new CreatureData_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


CreatureData_obj::CreatureData_obj()
{
}

void CreatureData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CreatureData);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_MEMBER_NAME(components,"components");
	HX_MARK_END_CLASS();
}

void CreatureData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(animation,"animation");
	HX_VISIT_MEMBER_NAME(components,"components");
}

Dynamic CreatureData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { return animation; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"components") ) { return components; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CreatureData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"components") ) { components=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CreatureData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"));
	outFields->push(HX_HCSTRING("components","\x16","\xb5","\x1e","\x5a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(CreatureData_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(CreatureData_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(CreatureData_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(CreatureData_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CreatureData_obj,animation),HX_HCSTRING("animation","\x04","\xef","\x34","\x4b")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(CreatureData_obj,components),HX_HCSTRING("components","\x16","\xb5","\x1e","\x5a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"),
	HX_HCSTRING("components","\x16","\xb5","\x1e","\x5a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CreatureData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CreatureData_obj::__mClass,"__mClass");
};

#endif

hx::Class CreatureData_obj::__mClass;

void CreatureData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("CreatureData","\xa9","\xbf","\x8e","\x38");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CreatureData_obj >;
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

