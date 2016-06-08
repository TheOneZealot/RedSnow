#include <hxcpp.h>

#ifndef INCLUDED_DynamicController
#include <DynamicController.h>
#endif
#ifndef INCLUDED_DynamicShape
#include <DynamicShape.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif

Void DynamicController_obj::__construct()
{
HX_STACK_FRAME("DynamicController","new",0x8bf39b4d,"DynamicController.new","DynamicController.hx",11,0x7c9c0cc3)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	super::__construct(null());
	HX_STACK_LINE(14)
	this->name = HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04");
}
;
	return null();
}

//DynamicController_obj::~DynamicController_obj() { }

Dynamic DynamicController_obj::__CreateEmpty() { return  new DynamicController_obj; }
hx::ObjectPtr< DynamicController_obj > DynamicController_obj::__new()
{  hx::ObjectPtr< DynamicController_obj > _result_ = new DynamicController_obj();
	_result_->__construct();
	return _result_;}

Dynamic DynamicController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DynamicController_obj > _result_ = new DynamicController_obj();
	_result_->__construct();
	return _result_;}

::DynamicShape DynamicController_obj::get_shape( ){
	HX_STACK_FRAME("DynamicController","get_shape",0xbbb87a25,"DynamicController.get_shape","DynamicController.hx",18,0x7c9c0cc3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	::DynamicShape tmp = this->_shape;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	if ((tmp1)){
		HX_STACK_LINE(21)
		Dynamic tmp2 = this->get(HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9"),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(21)
		this->_shape = ((::DynamicShape)(tmp2));
	}
	HX_STACK_LINE(23)
	::DynamicShape tmp2 = this->_shape;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(DynamicController_obj,get_shape,return )

Void DynamicController_obj::init( ){
{
		HX_STACK_FRAME("DynamicController","init",0xe5ecff83,"DynamicController.init","luxe/macros/ComponentRules.hx",38,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::init();
	}
return null();
}


Void DynamicController_obj::ondestroy( ){
{
		HX_STACK_FRAME("DynamicController","ondestroy",0x2ad1f868,"DynamicController.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void DynamicController_obj::onremoved( ){
{
		HX_STACK_FRAME("DynamicController","onremoved",0xf94beb0e,"DynamicController.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}



DynamicController_obj::DynamicController_obj()
{
}

void DynamicController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DynamicController);
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_MEMBER_NAME(_shape,"_shape");
	::luxe::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DynamicController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shape,"shape");
	HX_VISIT_MEMBER_NAME(_shape,"_shape");
	::luxe::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DynamicController_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { return inCallProp == hx::paccAlways ? get_shape() : shape; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_shape") ) { return _shape; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_shape") ) { return get_shape_dyn(); }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DynamicController_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast< ::DynamicShape >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_shape") ) { _shape=inValue.Cast< ::DynamicShape >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DynamicController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c"));
	outFields->push(HX_HCSTRING("_shape","\x62","\x2a","\x04","\x78"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::DynamicShape*/ ,(int)offsetof(DynamicController_obj,shape),HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c")},
	{hx::fsObject /*::DynamicShape*/ ,(int)offsetof(DynamicController_obj,_shape),HX_HCSTRING("_shape","\x62","\x2a","\x04","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c"),
	HX_HCSTRING("_shape","\x62","\x2a","\x04","\x78"),
	HX_HCSTRING("get_shape","\x78","\x3f","\xc6","\xbf"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onremoved","\x61","\xb0","\x59","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DynamicController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DynamicController_obj::__mClass,"__mClass");
};

#endif

hx::Class DynamicController_obj::__mClass;

void DynamicController_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("DynamicController","\xdb","\xf0","\x3e","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DynamicController_obj >;
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

