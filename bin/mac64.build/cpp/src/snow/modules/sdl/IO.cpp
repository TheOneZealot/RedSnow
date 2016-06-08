#include <hxcpp.h>

#include "linc_sdl.h"
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_DebugError
#include <snow/api/DebugError.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_core_native_io_IO
#include <snow/core/native/io/IO.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_IO
#include <snow/modules/interfaces/IO.h>
#endif
#ifndef INCLUDED_snow_modules_sdl_IO
#include <snow/modules/sdl/IO.h>
#endif
#ifndef INCLUDED_snow_types_Config
#include <snow/types/Config.h>
#endif
namespace snow{
namespace modules{
namespace sdl{

Void IO_obj::__construct(::snow::Snow _app)
{
HX_STACK_FRAME("snow.modules.sdl.IO","new",0x0157eefd,"snow.modules.sdl.IO.new","snow/modules/sdl/IO.hx",13,0xacfd8230)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
{
	HX_STACK_LINE(13)
	::snow::Snow tmp = _app;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	super::__construct(tmp);
}
;
	return null();
}

//IO_obj::~IO_obj() { }

Dynamic IO_obj::__CreateEmpty() { return  new IO_obj; }
hx::ObjectPtr< IO_obj > IO_obj::__new(::snow::Snow _app)
{  hx::ObjectPtr< IO_obj > _result_ = new IO_obj();
	_result_->__construct(_app);
	return _result_;}

Dynamic IO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IO_obj > _result_ = new IO_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String IO_obj::app_path( ){
	HX_STACK_FRAME("snow.modules.sdl.IO","app_path",0xee336586,"snow.modules.sdl.IO.app_path","snow/modules/sdl/IO.hx",15,0xacfd8230)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	::String tmp = linc::sdl::getBasePath();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	::String _path = tmp;		HX_STACK_VAR(_path,"_path");
	HX_STACK_LINE(18)
	bool tmp1 = (_path == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	if ((tmp1)){
		HX_STACK_LINE(18)
		_path = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(20)
	::String tmp2 = _path;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	return tmp2;
}


::String IO_obj::app_path_prefs( ){
	HX_STACK_FRAME("snow.modules.sdl.IO","app_path_prefs",0x96f8dd77,"snow.modules.sdl.IO.app_path_prefs","snow/modules/sdl/IO.hx",24,0xacfd8230)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	::String tmp = ::snow::types::Config_obj::app_ident;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	Array< ::String > _parts = tmp.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(_parts,"_parts");
	HX_STACK_LINE(27)
	::String tmp1 = _parts->pop();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	::String _appname = tmp1;		HX_STACK_VAR(_appname,"_appname");
	HX_STACK_LINE(28)
	::String tmp2 = _parts->join(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	::String _org = tmp2;		HX_STACK_VAR(_org,"_org");
	HX_STACK_LINE(30)
	::String tmp3 = _org;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	::String tmp4 = _appname;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(30)
	::String tmp5 = linc::sdl::getPrefPath(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(30)
	return tmp5;
}


::cpp::Pointer< SDL_RWops > IO_obj::file_handle( ::String _path,::String __o__mode){
::String _mode = __o__mode.Default(HX_HCSTRING("rb","\xb0","\x63","\x00","\x00"));
	HX_STACK_FRAME("snow.modules.sdl.IO","file_handle",0x39bd51e8,"snow.modules.sdl.IO.file_handle","snow/modules/sdl/IO.hx",36,0xacfd8230)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_mode,"_mode")
{
		HX_STACK_LINE(38)
		::String tmp = _path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		::String tmp1 = _mode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		::cpp::Pointer< SDL_RWops > tmp2 = ::cpp::Pointer< SDL_RWops >(SDL_RWFromFile(tmp,tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		return tmp2;
	}
}


::cpp::Pointer< SDL_RWops > IO_obj::file_handle_from_mem( ::snow::api::buffers::ArrayBufferView mem,int size){
	HX_STACK_FRAME("snow.modules.sdl.IO","file_handle_from_mem",0xf3b41df7,"snow.modules.sdl.IO.file_handle_from_mem","snow/modules/sdl/IO.hx",42,0xacfd8230)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mem,"mem")
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(44)
	Array< unsigned char > tmp = mem->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	int tmp1 = size;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	::cpp::Pointer< SDL_RWops > tmp2 = ::cpp::Pointer< SDL_RWops >(linc::sdl::RWFromMem(tmp,tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	return tmp2;
}


int IO_obj::file_read( ::cpp::Pointer< SDL_RWops > file,::snow::api::buffers::ArrayBufferView dest,int size,int maxnum){
	HX_STACK_FRAME("snow.modules.sdl.IO","file_read",0x0e4b0996,"snow.modules.sdl.IO.file_read","snow/modules/sdl/IO.hx",48,0xacfd8230)
	HX_STACK_THIS(this)
	HX_STACK_ARG(file,"file")
	HX_STACK_ARG(dest,"dest")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(maxnum,"maxnum")
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		bool tmp = (file == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		if ((tmp)){
			HX_STACK_LINE(50)
			::String tmp1 = HX_HCSTRING("file was null","\x02","\x5b","\x9a","\x64");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(50)
			::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(50)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(52)
	::cpp::Pointer< SDL_RWops > tmp = file;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	Array< unsigned char > tmp1 = dest->buffer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	int tmp2 = size;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	int tmp3 = maxnum;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	int tmp4 = linc::sdl::RWread(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(52)
	return tmp4;
}


int IO_obj::file_write( ::cpp::Pointer< SDL_RWops > file,::snow::api::buffers::ArrayBufferView src,int size,int num){
	HX_STACK_FRAME("snow.modules.sdl.IO","file_write",0x5cfc269f,"snow.modules.sdl.IO.file_write","snow/modules/sdl/IO.hx",56,0xacfd8230)
	HX_STACK_THIS(this)
	HX_STACK_ARG(file,"file")
	HX_STACK_ARG(src,"src")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(num,"num")
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		bool tmp = (file == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		if ((tmp)){
			HX_STACK_LINE(58)
			::String tmp1 = HX_HCSTRING("file was null","\x02","\x5b","\x9a","\x64");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(58)
			::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(58)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(60)
	::cpp::Pointer< SDL_RWops > tmp = file;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	Array< unsigned char > tmp1 = src->buffer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	int tmp2 = size;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	int tmp3 = num;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	int tmp4 = linc::sdl::RWwrite(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	return tmp4;
}


int IO_obj::file_seek( ::cpp::Pointer< SDL_RWops > file,int offset,int whence){
	HX_STACK_FRAME("snow.modules.sdl.IO","file_seek",0x0ef443b8,"snow.modules.sdl.IO.file_seek","snow/modules/sdl/IO.hx",64,0xacfd8230)
	HX_STACK_THIS(this)
	HX_STACK_ARG(file,"file")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(whence,"whence")
	HX_STACK_LINE(66)
	{
		HX_STACK_LINE(66)
		bool tmp = (file == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		if ((tmp)){
			HX_STACK_LINE(66)
			::String tmp1 = HX_HCSTRING("file was null","\x02","\x5b","\x9a","\x64");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(66)
			::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(66)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(68)
	::cpp::Pointer< SDL_RWops > tmp = file;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	int tmp1 = offset;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	int tmp2 = whence;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	::cpp::Int64 tmp3 = linc::sdl::RWseek(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	return tmp3;
}


int IO_obj::file_tell( ::cpp::Pointer< SDL_RWops > file){
	HX_STACK_FRAME("snow.modules.sdl.IO","file_tell",0x0f9d8071,"snow.modules.sdl.IO.file_tell","snow/modules/sdl/IO.hx",72,0xacfd8230)
	HX_STACK_THIS(this)
	HX_STACK_ARG(file,"file")
	HX_STACK_LINE(74)
	{
		HX_STACK_LINE(74)
		bool tmp = (file == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		if ((tmp)){
			HX_STACK_LINE(74)
			::String tmp1 = HX_HCSTRING("file was null","\x02","\x5b","\x9a","\x64");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(74)
			::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(74)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(76)
	::cpp::Pointer< SDL_RWops > tmp = file;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	::cpp::Int64 tmp1 = linc::sdl::RWtell(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	return tmp1;
}


int IO_obj::file_close( ::cpp::Pointer< SDL_RWops > file){
	HX_STACK_FRAME("snow.modules.sdl.IO","file_close",0xd505d178,"snow.modules.sdl.IO.file_close","snow/modules/sdl/IO.hx",80,0xacfd8230)
	HX_STACK_THIS(this)
	HX_STACK_ARG(file,"file")
	HX_STACK_LINE(82)
	{
		HX_STACK_LINE(82)
		bool tmp = (file == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		if ((tmp)){
			HX_STACK_LINE(82)
			::String tmp1 = HX_HCSTRING("file was null","\x02","\x5b","\x9a","\x64");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(82)
			::snow::api::DebugError tmp2 = ::snow::api::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(82)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(84)
	::cpp::Pointer< SDL_RWops > tmp = file;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	int tmp1 = linc::sdl::RWclose(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	return tmp1;
}



IO_obj::IO_obj()
{
}

Dynamic IO_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"app_path") ) { return app_path_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"file_read") ) { return file_read_dyn(); }
		if (HX_FIELD_EQ(inName,"file_seek") ) { return file_seek_dyn(); }
		if (HX_FIELD_EQ(inName,"file_tell") ) { return file_tell_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"file_write") ) { return file_write_dyn(); }
		if (HX_FIELD_EQ(inName,"file_close") ) { return file_close_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"file_handle") ) { return file_handle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"app_path_prefs") ) { return app_path_prefs_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"file_handle_from_mem") ) { return file_handle_from_mem_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("app_path","\x43","\x9d","\xdc","\xa2"),
	HX_HCSTRING("app_path_prefs","\xf4","\x00","\x3e","\x80"),
	HX_HCSTRING("file_handle","\x4b","\xce","\x5d","\xec"),
	HX_HCSTRING("file_handle_from_mem","\x34","\x7d","\xf0","\x5b"),
	HX_HCSTRING("file_read","\x39","\x97","\xb2","\x6d"),
	HX_HCSTRING("file_write","\x9c","\x87","\x30","\x78"),
	HX_HCSTRING("file_seek","\x5b","\xd1","\x5b","\x6e"),
	HX_HCSTRING("file_tell","\x14","\x0e","\x05","\x6f"),
	HX_HCSTRING("file_close","\x75","\x32","\x3a","\xf0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IO_obj::__mClass,"__mClass");
};

#endif

hx::Class IO_obj::__mClass;

void IO_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.modules.sdl.IO","\x8b","\xac","\xa3","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IO_obj >;
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
} // end namespace modules
} // end namespace sdl
