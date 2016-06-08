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
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_resource_TextResource
#include <luxe/resource/TextResource.h>
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
#ifndef INCLUDED_snow_systems_assets_AssetText
#include <snow/systems/assets/AssetText.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Assets
#include <snow/systems/assets/Assets.h>
#endif
namespace luxe{
namespace resource{

Void TextResource_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.resource.TextResource","new",0x22782e15,"luxe.resource.TextResource.new","luxe/resource/Resource.hx",243,0x204e02c8)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(245)
	{
		HX_STACK_LINE(245)
		bool tmp = (_options == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(245)
		if ((tmp)){
			HX_STACK_LINE(245)
			::String tmp1 = HX_HCSTRING("_options was null","\x3f","\x38","\x24","\xa1");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(245)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(245)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(247)
	_options->__FieldRef(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c")) = (int)1;
	HX_STACK_LINE(249)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	super::__construct(tmp);
	HX_STACK_LINE(251)
	this->asset = _options->__Field(HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"), hx::paccDynamic );
}
;
	return null();
}

//TextResource_obj::~TextResource_obj() { }

Dynamic TextResource_obj::__CreateEmpty() { return  new TextResource_obj; }
hx::ObjectPtr< TextResource_obj > TextResource_obj::__new(Dynamic _options)
{  hx::ObjectPtr< TextResource_obj > _result_ = new TextResource_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic TextResource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextResource_obj > _result_ = new TextResource_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::snow::api::Promise TextResource_obj::reload( ){
	HX_STACK_FRAME("luxe.resource.TextResource","reload",0xc0b6b4c4,"luxe.resource.TextResource.reload","luxe/resource/Resource.hx",255,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(255)
	::luxe::resource::TextResource _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(257)
	{
		HX_STACK_LINE(257)
		int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		bool tmp1 = (tmp != (int)6);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(257)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(257)
		if ((tmp2)){
			HX_STACK_LINE(257)
			::String tmp3 = HX_HCSTRING("state != ResourceState.destroyed","\x79","\xbe","\xa0","\xbf");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(257)
			::luxe::DebugError tmp4 = ::luxe::DebugError_obj::assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(257)
			HX_STACK_DO_THROW(tmp4);
		}
	}
	HX_STACK_LINE(259)
	this->clear();

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::luxe::resource::TextResource,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/resource/Resource.hx",261,0x204e02c8)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(263)
			_g->set_state((int)2);
			HX_STACK_LINE(265)
			::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(265)
			::snow::systems::assets::Assets tmp1 = tmp->app->assets;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(265)
			::String tmp2 = _g->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(265)
			::snow::api::Promise tmp3 = ::snow::systems::assets::AssetText_obj::load(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(265)
			::snow::api::Promise get = tmp3;		HX_STACK_VAR(get,"get");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::luxe::resource::TextResource,_g,Dynamic,resolve)
			int __ArgCount() const { return 1; }
			Void run(::snow::systems::assets::AssetText _asset){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","luxe/resource/Resource.hx",267,0x204e02c8)
				HX_STACK_ARG(_asset,"_asset")
				{
					HX_STACK_LINE(269)
					_g->asset = _asset;
					HX_STACK_LINE(270)
					_g->set_state((int)3);
					HX_STACK_LINE(271)
					::luxe::resource::TextResource tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(271)
					resolve(tmp4);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(267)
			get->then( Dynamic(new _Function_2_1(_g,resolve)),null());

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_2,::luxe::resource::TextResource,_g,Dynamic,reject)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _error){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","luxe/resource/Resource.hx",275,0x204e02c8)
				HX_STACK_ARG(_error,"_error")
				{
					HX_STACK_LINE(277)
					_g->set_state((int)4);
					HX_STACK_LINE(278)
					Dynamic tmp4 = _error;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(278)
					reject(tmp4);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(275)
			get->error( Dynamic(new _Function_2_2(_g,reject)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(261)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(261)
	return tmp;
}


Void TextResource_obj::clear( ){
{
		HX_STACK_FRAME("luxe.resource.TextResource","clear",0x829a6682,"luxe.resource.TextResource.clear","luxe/resource/Resource.hx",286,0x204e02c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(288)
		::snow::systems::assets::AssetText tmp = this->asset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(288)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(288)
		if ((tmp1)){
			HX_STACK_LINE(289)
			::snow::systems::assets::AssetText tmp2 = this->asset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(289)
			tmp2->destroy();
			HX_STACK_LINE(290)
			this->asset = null();
		}
	}
return null();
}


Float TextResource_obj::memory_use( ){
	HX_STACK_FRAME("luxe.resource.TextResource","memory_use",0xe90843b4,"luxe.resource.TextResource.memory_use","luxe/resource/Resource.hx",295,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(297)
	::snow::systems::assets::AssetText tmp = this->asset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(297)
	if ((tmp1)){
		HX_STACK_LINE(297)
		return (int)0;
	}
	HX_STACK_LINE(299)
	::snow::systems::assets::AssetText tmp2 = this->asset;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(299)
	int tmp3 = tmp2->text.length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(299)
	return tmp3;
}



TextResource_obj::TextResource_obj()
{
}

void TextResource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextResource);
	HX_MARK_MEMBER_NAME(asset,"asset");
	::luxe::resource::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextResource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(asset,"asset");
	::luxe::resource::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextResource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { return asset; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reload") ) { return reload_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"memory_use") ) { return memory_use_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextResource_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { asset=inValue.Cast< ::snow::systems::assets::AssetText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextResource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::systems::assets::AssetText*/ ,(int)offsetof(TextResource_obj,asset),HX_HCSTRING("asset","\xf0","\x69","\x39","\x26")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"),
	HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("memory_use","\xc9","\x50","\x8c","\xfa"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextResource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextResource_obj::__mClass,"__mClass");
};

#endif

hx::Class TextResource_obj::__mClass;

void TextResource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.resource.TextResource","\xa3","\x7f","\xc0","\x65");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextResource_obj >;
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
