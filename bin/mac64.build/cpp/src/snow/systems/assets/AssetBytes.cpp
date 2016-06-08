#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetBytes
#include <snow/systems/assets/AssetBytes.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Assets
#include <snow/systems/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_systems_io_IO
#include <snow/systems/io/IO.h>
#endif
namespace snow{
namespace systems{
namespace assets{

Void AssetBytes_obj::__construct(::snow::systems::assets::Assets _system,::String _id,::snow::api::buffers::ArrayBufferView _bytes)
{
HX_STACK_FRAME("snow.systems.assets.AssetBytes","new",0x834ec803,"snow.systems.assets.AssetBytes.new","snow/systems/assets/Asset.hx",282,0x7a5509c3)
HX_STACK_THIS(this)
HX_STACK_ARG(_system,"_system")
HX_STACK_ARG(_id,"_id")
HX_STACK_ARG(_bytes,"_bytes")
{
	HX_STACK_LINE(284)
	::snow::systems::assets::Assets tmp = _system;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(284)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(284)
	super::__construct(tmp,tmp1,(int)1);
	HX_STACK_LINE(285)
	::snow::api::buffers::ArrayBufferView tmp2 = _bytes;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(285)
	this->set_bytes(tmp2);
}
;
	return null();
}

//AssetBytes_obj::~AssetBytes_obj() { }

Dynamic AssetBytes_obj::__CreateEmpty() { return  new AssetBytes_obj; }
hx::ObjectPtr< AssetBytes_obj > AssetBytes_obj::__new(::snow::systems::assets::Assets _system,::String _id,::snow::api::buffers::ArrayBufferView _bytes)
{  hx::ObjectPtr< AssetBytes_obj > _result_ = new AssetBytes_obj();
	_result_->__construct(_system,_id,_bytes);
	return _result_;}

Dynamic AssetBytes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetBytes_obj > _result_ = new AssetBytes_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::snow::api::Promise AssetBytes_obj::reload( ){
	HX_STACK_FRAME("snow.systems.assets.AssetBytes","reload",0xc8968396,"snow.systems.assets.AssetBytes.reload","snow/systems/assets/Asset.hx",292,0x7a5509c3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(292)
	::snow::systems::assets::AssetBytes _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::systems::assets::AssetBytes,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/systems/assets/Asset.hx",294,0x7a5509c3)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(296)
			::snow::Snow tmp = _g->_system->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(296)
			::String tmp1 = _g->_system->root;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(296)
			::String tmp2 = _g->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(296)
			::String tmp3 = ::haxe::io::Path_obj::join(Array_obj< ::String >::__new().Add(tmp1).Add(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(296)
			::snow::api::Promise tmp4 = tmp->io->data_flow(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::snow::systems::assets::AssetBytes,_g,Dynamic,resolve)
			int __ArgCount() const { return 1; }
			Void run(::snow::api::buffers::ArrayBufferView _bytes){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/systems/assets/Asset.hx",296,0x7a5509c3)
				HX_STACK_ARG(_bytes,"_bytes")
				{
					HX_STACK_LINE(298)
					::snow::api::buffers::ArrayBufferView tmp5 = _bytes;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(298)
					_g->set_bytes(tmp5);
					HX_STACK_LINE(299)
					::snow::systems::assets::AssetBytes tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(299)
					resolve(tmp6);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(296)
			::snow::api::Promise tmp5 = tmp4->then( Dynamic(new _Function_2_1(_g,resolve)),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(301)
			Dynamic tmp6 = reject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(296)
			tmp5->error(tmp6);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(294)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AssetBytes_obj,reload,return )

Void AssetBytes_obj::destroy( ){
{
		HX_STACK_FRAME("snow.systems.assets.AssetBytes","destroy",0x8019321d,"snow.systems.assets.AssetBytes.destroy","snow/systems/assets/Asset.hx",307,0x7a5509c3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(309)
		::snow::api::buffers::ArrayBufferView tmp = this->bytes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(309)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(309)
		if ((tmp1)){
			HX_STACK_LINE(309)
			::snow::api::buffers::ArrayBufferView tmp2 = this->bytes;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(309)
			tmp2->buffer = null();
		}
		HX_STACK_LINE(310)
		this->set_bytes(null());
	}
return null();
}


::snow::api::buffers::ArrayBufferView AssetBytes_obj::set_bytes( ::snow::api::buffers::ArrayBufferView _bytes){
	HX_STACK_FRAME("snow.systems.assets.AssetBytes","set_bytes",0x8ecb24b1,"snow.systems.assets.AssetBytes.set_bytes","snow/systems/assets/Asset.hx",326,0x7a5509c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_LINE(328)
	bool tmp = (_bytes != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(328)
	this->loaded = tmp;
	HX_STACK_LINE(329)
	::snow::api::buffers::ArrayBufferView tmp1 = this->bytes = _bytes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(329)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetBytes_obj,set_bytes,return )

::snow::api::Promise AssetBytes_obj::load( ::snow::systems::assets::Assets _system,::String _id){
	HX_STACK_FRAME("snow.systems.assets.AssetBytes","load",0x60555123,"snow.systems.assets.AssetBytes.load","snow/systems/assets/Asset.hx",316,0x7a5509c3)
	HX_STACK_ARG(_system,"_system")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(318)
	::snow::systems::assets::AssetBytes tmp = ::snow::systems::assets::AssetBytes_obj::__new(_system,_id,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(318)
	::snow::api::Promise tmp1 = tmp->reload();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(318)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetBytes_obj,load,return )


AssetBytes_obj::AssetBytes_obj()
{
}

void AssetBytes_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetBytes);
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	::snow::systems::assets::Asset_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AssetBytes_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	::snow::systems::assets::Asset_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AssetBytes_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reload") ) { return reload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_bytes") ) { return set_bytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool AssetBytes_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
	}
	return false;
}

Dynamic AssetBytes_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { if (inCallProp == hx::paccAlways) return set_bytes(inValue);bytes=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetBytes_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(AssetBytes_obj,bytes),HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("set_bytes","\xce","\x50","\x92","\xe4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetBytes_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetBytes_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetBytes_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	::String(null()) };

void AssetBytes_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.systems.assets.AssetBytes","\x91","\x0a","\xac","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetBytes_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetBytes_obj >;
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

} // end namespace snow
} // end namespace systems
} // end namespace assets
