#include <hxcpp.h>

#ifndef INCLUDED_opengl_GLObject
#include <opengl/GLObject.h>
#endif
#ifndef INCLUDED_phoenix__Shader_Uniform_snow_api_buffers_Float32Array
#include <phoenix/_Shader/Uniform_snow_api_buffers_Float32Array.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
namespace phoenix{
namespace _Shader{

Void Uniform_snow_api_buffers_Float32Array_obj::__construct(::String _name,::snow::api::buffers::ArrayBufferView _value,::opengl::GLObject _location)
{
HX_STACK_FRAME("phoenix._Shader.Uniform_snow_api_buffers_Float32Array","new",0xfb592029,"phoenix._Shader.Uniform_snow_api_buffers_Float32Array.new","phoenix/Shader.hx",643,0x14ec92d9)
HX_STACK_THIS(this)
HX_STACK_ARG(_name,"_name")
HX_STACK_ARG(_value,"_value")
HX_STACK_ARG(_location,"_location")
{
	HX_STACK_LINE(644)
	this->name = _name;
	HX_STACK_LINE(645)
	this->value = _value;
	HX_STACK_LINE(646)
	this->location = _location;
}
;
	return null();
}

//Uniform_snow_api_buffers_Float32Array_obj::~Uniform_snow_api_buffers_Float32Array_obj() { }

Dynamic Uniform_snow_api_buffers_Float32Array_obj::__CreateEmpty() { return  new Uniform_snow_api_buffers_Float32Array_obj; }
hx::ObjectPtr< Uniform_snow_api_buffers_Float32Array_obj > Uniform_snow_api_buffers_Float32Array_obj::__new(::String _name,::snow::api::buffers::ArrayBufferView _value,::opengl::GLObject _location)
{  hx::ObjectPtr< Uniform_snow_api_buffers_Float32Array_obj > _result_ = new Uniform_snow_api_buffers_Float32Array_obj();
	_result_->__construct(_name,_value,_location);
	return _result_;}

Dynamic Uniform_snow_api_buffers_Float32Array_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Uniform_snow_api_buffers_Float32Array_obj > _result_ = new Uniform_snow_api_buffers_Float32Array_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


Uniform_snow_api_buffers_Float32Array_obj::Uniform_snow_api_buffers_Float32Array_obj()
{
}

void Uniform_snow_api_buffers_Float32Array_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Uniform_snow_api_buffers_Float32Array);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(location,"location");
	HX_MARK_END_CLASS();
}

void Uniform_snow_api_buffers_Float32Array_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(location,"location");
}

Dynamic Uniform_snow_api_buffers_Float32Array_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"location") ) { return location; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Uniform_snow_api_buffers_Float32Array_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"location") ) { location=inValue.Cast< ::opengl::GLObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Uniform_snow_api_buffers_Float32Array_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Uniform_snow_api_buffers_Float32Array_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Uniform_snow_api_buffers_Float32Array_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(Uniform_snow_api_buffers_Float32Array_obj,location),HX_HCSTRING("location","\x35","\x6e","\x46","\xe5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Uniform_snow_api_buffers_Float32Array_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Uniform_snow_api_buffers_Float32Array_obj::__mClass,"__mClass");
};

#endif

hx::Class Uniform_snow_api_buffers_Float32Array_obj::__mClass;

void Uniform_snow_api_buffers_Float32Array_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix._Shader.Uniform_snow_api_buffers_Float32Array","\xb7","\xd7","\x11","\xfb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Uniform_snow_api_buffers_Float32Array_obj >;
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

} // end namespace phoenix
} // end namespace _Shader
