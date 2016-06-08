#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_luxe_resource_JSONResource
#include <luxe/resource/JSONResource.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetJSON
#include <snow/systems/assets/AssetJSON.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Assets
#include <snow/systems/assets/Assets.h>
#endif
namespace luxe{
namespace resource{

Void JSONResource_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.resource.JSONResource","new",0x58905bf0,"luxe.resource.JSONResource.new","luxe/resource/Resource.hx",309,0x204e02c8)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		bool tmp = (_options == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(311)
		if ((tmp)){
			HX_STACK_LINE(311)
			::String tmp1 = HX_HCSTRING("_options was null","\x3f","\x38","\x24","\xa1");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(311)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(311)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(313)
	_options->__FieldRef(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c")) = (int)2;
	HX_STACK_LINE(315)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(315)
	super::__construct(tmp);
	HX_STACK_LINE(317)
	this->asset = _options->__Field(HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"), hx::paccDynamic );
}
;
	return null();
}

//JSONResource_obj::~JSONResource_obj() { }

Dynamic JSONResource_obj::__CreateEmpty() { return  new JSONResource_obj; }
hx::ObjectPtr< JSONResource_obj > JSONResource_obj::__new(Dynamic _options)
{  hx::ObjectPtr< JSONResource_obj > _result_ = new JSONResource_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic JSONResource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JSONResource_obj > _result_ = new JSONResource_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::snow::api::Promise JSONResource_obj::reload( ){
	HX_STACK_FRAME("luxe.resource.JSONResource","reload",0xb8fa61c9,"luxe.resource.JSONResource.reload","luxe/resource/Resource.hx",321,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(321)
	::luxe::resource::JSONResource _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(323)
	{
		HX_STACK_LINE(323)
		int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(323)
		bool tmp1 = (tmp != (int)6);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(323)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(323)
		if ((tmp2)){
			HX_STACK_LINE(323)
			::String tmp3 = HX_HCSTRING("state != ResourceState.destroyed","\x79","\xbe","\xa0","\xbf");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(323)
			::luxe::DebugError tmp4 = ::luxe::DebugError_obj::assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(323)
			HX_STACK_DO_THROW(tmp4);
		}
	}
	HX_STACK_LINE(325)
	this->clear();

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::luxe::resource::JSONResource,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/resource/Resource.hx",327,0x204e02c8)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(329)
			_g->set_state((int)2);
			HX_STACK_LINE(331)
			::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(331)
			::snow::systems::assets::Assets tmp1 = tmp->app->assets;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(331)
			::String tmp2 = _g->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(331)
			::snow::api::Promise tmp3 = ::snow::systems::assets::AssetJSON_obj::load(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(331)
			::snow::api::Promise get = tmp3;		HX_STACK_VAR(get,"get");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::luxe::resource::JSONResource,_g,Dynamic,resolve)
			int __ArgCount() const { return 1; }
			Void run(::snow::systems::assets::AssetJSON _asset){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","luxe/resource/Resource.hx",333,0x204e02c8)
				HX_STACK_ARG(_asset,"_asset")
				{
					HX_STACK_LINE(335)
					_g->asset = _asset;
					HX_STACK_LINE(336)
					_g->set_state((int)3);
					HX_STACK_LINE(337)
					::luxe::resource::JSONResource tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(337)
					resolve(tmp4);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(333)
			get->then( Dynamic(new _Function_2_1(_g,resolve)),null());

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_2,::luxe::resource::JSONResource,_g,Dynamic,reject)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _error){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","luxe/resource/Resource.hx",341,0x204e02c8)
				HX_STACK_ARG(_error,"_error")
				{
					HX_STACK_LINE(343)
					_g->set_state((int)4);
					HX_STACK_LINE(344)
					Dynamic tmp4 = _error;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(344)
					reject(tmp4);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(341)
			get->error( Dynamic(new _Function_2_2(_g,reject)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(327)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(327)
	return tmp;
}


Void JSONResource_obj::clear( ){
{
		HX_STACK_FRAME("luxe.resource.JSONResource","clear",0x917e011d,"luxe.resource.JSONResource.clear","luxe/resource/Resource.hx",352,0x204e02c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(354)
		::snow::systems::assets::AssetJSON tmp = this->asset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(354)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(354)
		if ((tmp1)){
			HX_STACK_LINE(355)
			::snow::systems::assets::AssetJSON tmp2 = this->asset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(355)
			tmp2->destroy();
			HX_STACK_LINE(356)
			this->asset = null();
		}
	}
return null();
}



JSONResource_obj::JSONResource_obj()
{
}

void JSONResource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JSONResource);
	HX_MARK_MEMBER_NAME(asset,"asset");
	::luxe::resource::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void JSONResource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(asset,"asset");
	::luxe::resource::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic JSONResource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { return asset; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reload") ) { return reload_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JSONResource_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { asset=inValue.Cast< ::snow::systems::assets::AssetJSON >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JSONResource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::systems::assets::AssetJSON*/ ,(int)offsetof(JSONResource_obj,asset),HX_HCSTRING("asset","\xf0","\x69","\x39","\x26")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"),
	HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JSONResource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JSONResource_obj::__mClass,"__mClass");
};

#endif

hx::Class JSONResource_obj::__mClass;

void JSONResource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.resource.JSONResource","\xfe","\xe3","\xdf","\xa8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JSONResource_obj >;
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
} // end namespace resource
