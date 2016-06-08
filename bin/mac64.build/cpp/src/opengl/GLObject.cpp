#include <hxcpp.h>

#ifndef INCLUDED_opengl_GLObject
#include <opengl/GLObject.h>
#endif
namespace opengl{

Void GLObject_obj::__construct(int _id)
{
HX_STACK_FRAME("opengl.GLObject","new",0x4325fd15,"opengl.GLObject.new","opengl/WebGL.hx",931,0x584405a5)
HX_STACK_THIS(this)
HX_STACK_ARG(_id,"_id")
{
	HX_STACK_LINE(933)
	this->id = (int)0;
	HX_STACK_LINE(936)
	this->id = _id;
}
;
	return null();
}

//GLObject_obj::~GLObject_obj() { }

Dynamic GLObject_obj::__CreateEmpty() { return  new GLObject_obj; }
hx::ObjectPtr< GLObject_obj > GLObject_obj::__new(int _id)
{  hx::ObjectPtr< GLObject_obj > _result_ = new GLObject_obj();
	_result_->__construct(_id);
	return _result_;}

Dynamic GLObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLObject_obj > _result_ = new GLObject_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String GLObject_obj::toString( ){
	HX_STACK_FRAME("opengl.GLObject","toString",0x8ed573d7,"opengl.GLObject.toString","opengl/WebGL.hx",937,0x584405a5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(937)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(937)
	::String tmp1 = (HX_HCSTRING("GLObject(","\xe4","\x90","\x8e","\xcb") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(937)
	::String tmp2 = (tmp1 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(937)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(GLObject_obj,toString,return )

bool GLObject_obj::get_invalidated( ){
	HX_STACK_FRAME("opengl.GLObject","get_invalidated",0x1b0ad255,"opengl.GLObject.get_invalidated","opengl/WebGL.hx",938,0x584405a5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(938)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(938)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(938)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(GLObject_obj,get_invalidated,return )

bool GLObject_obj::set_invalidated( bool value){
	HX_STACK_FRAME("opengl.GLObject","set_invalidated",0x16d64f61,"opengl.GLObject.set_invalidated","opengl/WebGL.hx",939,0x584405a5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(939)
	this->id = (int)0;
	HX_STACK_LINE(939)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(939)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GLObject_obj,set_invalidated,return )


GLObject_obj::GLObject_obj()
{
}

Dynamic GLObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invalidated") ) { if (inCallProp == hx::paccAlways) return get_invalidated(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_invalidated") ) { return get_invalidated_dyn(); }
		if (HX_FIELD_EQ(inName,"set_invalidated") ) { return set_invalidated_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invalidated") ) { if (inCallProp == hx::paccAlways) return set_invalidated(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("invalidated","\x89","\x32","\xac","\xbd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GLObject_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_invalidated","\x20","\xea","\x8d","\x7e"),
	HX_HCSTRING("set_invalidated","\x2c","\x67","\x59","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLObject_obj::__mClass,"__mClass");
};

#endif

hx::Class GLObject_obj::__mClass;

void GLObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("opengl.GLObject","\xa3","\xce","\x9a","\xe9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLObject_obj >;
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

} // end namespace opengl
