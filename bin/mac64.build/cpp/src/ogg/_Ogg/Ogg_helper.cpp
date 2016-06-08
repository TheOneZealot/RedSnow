#include <hxcpp.h>

#include "cpp/Pointer.h"
#include "linc_ogg.h"
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_ogg__Ogg_Ogg_helper
#include <ogg/_Ogg/Ogg_helper.h>
#endif
namespace ogg{
namespace _Ogg{

Void Ogg_helper_obj::__construct()
{
	return null();
}

//Ogg_helper_obj::~Ogg_helper_obj() { }

Dynamic Ogg_helper_obj::__CreateEmpty() { return  new Ogg_helper_obj; }
hx::ObjectPtr< Ogg_helper_obj > Ogg_helper_obj::__new()
{  hx::ObjectPtr< Ogg_helper_obj > _result_ = new Ogg_helper_obj();
	_result_->__construct();
	return _result_;}

Dynamic Ogg_helper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ogg_helper_obj > _result_ = new Ogg_helper_obj();
	_result_->__construct();
	return _result_;}

bool Ogg_helper_obj::callbacks_set;

::haxe::ds::IntMap Ogg_helper_obj::callbacks;

int Ogg_helper_obj::cb_seq;

int Ogg_helper_obj::ov_open_callbacks( Dynamic userdata,::cpp::Pointer< OggVorbis_File > file,Array< unsigned char > initial,int ibytes,Dynamic _callbacks){
	HX_STACK_FRAME("ogg._Ogg.Ogg_helper","ov_open_callbacks",0x85f374e0,"ogg._Ogg.Ogg_helper.ov_open_callbacks","ogg/Ogg.hx",139,0x0dd76eef)
	HX_STACK_ARG(userdata,"userdata")
	HX_STACK_ARG(file,"file")
	HX_STACK_ARG(initial,"initial")
	HX_STACK_ARG(ibytes,"ibytes")
	HX_STACK_ARG(_callbacks,"_callbacks")
	HX_STACK_LINE(141)
	bool tmp = ::ogg::_Ogg::Ogg_helper_obj::callbacks_set;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(141)
	if ((tmp1)){
		HX_STACK_LINE(142)
		linc::ogg::init_callbacks(::cpp::Function< int ( int cb_id,int size,int nmemb,Array< unsigned char > data)>(&::ogg::_Ogg::Ogg_helper_obj::read_callback ),::cpp::Function< int ( int cb_id,int offset,int whence)>(&::ogg::_Ogg::Ogg_helper_obj::seek_callback ),::cpp::Function< int ( int cb_id)>(&::ogg::_Ogg::Ogg_helper_obj::close_callback ),::cpp::Function< int ( int cb_id)>(&::ogg::_Ogg::Ogg_helper_obj::tell_callback ));
	}
	HX_STACK_LINE(150)
	{
		HX_STACK_LINE(150)
		Dynamic tmp2 = userdata;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		::cpp::Pointer< OggVorbis_File > tmp3 = file;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(150)
		Dynamic tmp4 = _callbacks;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(150)
		int tmp5 = ++(::ogg::_Ogg::Ogg_helper_obj::cb_seq);		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_2_1{
			inline static Dynamic Block( int &tmp5,Dynamic &tmp4,Dynamic &tmp2,::cpp::Pointer< OggVorbis_File > &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ogg/Ogg.hx",150,0x0dd76eef)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("userdata","\xf5","\x69","\x4f","\x1a") , tmp2,false);
					__result->Add(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43") , tmp3,false);
					__result->Add(HX_HCSTRING("callbacks","\x0e","\xf3","\xbf","\xa6") , tmp4,false);
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp5,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(150)
		Dynamic tmp6 = _Function_2_1::Block(tmp5,tmp4,tmp2,tmp3);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(150)
		Dynamic value = tmp6;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(150)
		::haxe::ds::IntMap tmp7 = ::ogg::_Ogg::Ogg_helper_obj::callbacks;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(150)
		int tmp8 = ::ogg::_Ogg::Ogg_helper_obj::cb_seq;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(150)
		Dynamic tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(150)
		tmp7->set(tmp8,tmp9);
	}
	HX_STACK_LINE(152)
	int tmp2 = ::ogg::_Ogg::Ogg_helper_obj::cb_seq;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(152)
	::cpp::Pointer< OggVorbis_File > tmp3 = file;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(152)
	int tmp4 = ibytes;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(152)
	int tmp5 = linc::ogg::internal_open_callbacks(tmp2,tmp3,initial,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(152)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Ogg_helper_obj,ov_open_callbacks,return )

int Ogg_helper_obj::read_callback( int cb_id,int size,int nmemb,Array< unsigned char > data){
	HX_STACK_FRAME("ogg._Ogg.Ogg_helper","read_callback",0xd481ddfd,"ogg._Ogg.Ogg_helper.read_callback","ogg/Ogg.hx",156,0x0dd76eef)
	HX_STACK_ARG(cb_id,"cb_id")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(nmemb,"nmemb")
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(158)
	::haxe::ds::IntMap tmp = ::ogg::_Ogg::Ogg_helper_obj::callbacks;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	int tmp1 = cb_id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(158)
	Dynamic info = tmp2;		HX_STACK_VAR(info,"info");
	HX_STACK_LINE(160)
	bool tmp3 = (info != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(160)
	if ((tmp3)){
		HX_STACK_LINE(161)
		Dynamic tmp4 = info->__Field(HX_HCSTRING("userdata","\xf5","\x69","\x4f","\x1a"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(161)
		int tmp5 = size;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(161)
		int tmp6 = nmemb;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(161)
		int tmp7 = info->__Field(HX_HCSTRING("callbacks","\x0e","\xf3","\xbf","\xa6"), hx::paccDynamic )->__Field(HX_HCSTRING("read_fn","\xd1","\x5d","\xda","\x02"), hx::paccDynamic )(tmp4,tmp5,tmp6,data);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(161)
		return tmp7;
	}
	HX_STACK_LINE(165)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Ogg_helper_obj,read_callback,return )

int Ogg_helper_obj::seek_callback( int cb_id,int offset,int whence){
	HX_STACK_FRAME("ogg._Ogg.Ogg_helper","seek_callback",0x5fc54f9b,"ogg._Ogg.Ogg_helper.seek_callback","ogg/Ogg.hx",169,0x0dd76eef)
	HX_STACK_ARG(cb_id,"cb_id")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(whence,"whence")
	HX_STACK_LINE(171)
	::haxe::ds::IntMap tmp = ::ogg::_Ogg::Ogg_helper_obj::callbacks;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	int tmp1 = cb_id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(171)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(171)
	Dynamic info = tmp2;		HX_STACK_VAR(info,"info");
	HX_STACK_LINE(173)
	bool tmp3 = (info != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(173)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(173)
	if ((tmp3)){
		HX_STACK_LINE(173)
		Dynamic tmp5 = info->__Field(HX_HCSTRING("callbacks","\x0e","\xf3","\xbf","\xa6"), hx::paccDynamic )->__Field(HX_HCSTRING("seek_fn","\xef","\xa4","\xaa","\x7e"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(173)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(173)
		tmp4 = (tmp6 != null());
	}
	else{
		HX_STACK_LINE(173)
		tmp4 = false;
	}
	HX_STACK_LINE(173)
	if ((tmp4)){
		HX_STACK_LINE(174)
		Dynamic tmp5 = info->__Field(HX_HCSTRING("userdata","\xf5","\x69","\x4f","\x1a"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(174)
		int tmp6 = offset;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(174)
		int tmp7 = whence;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(174)
		info->__Field(HX_HCSTRING("callbacks","\x0e","\xf3","\xbf","\xa6"), hx::paccDynamic )->__Field(HX_HCSTRING("seek_fn","\xef","\xa4","\xaa","\x7e"), hx::paccDynamic )(tmp5,tmp6,tmp7);
		HX_STACK_LINE(175)
		return (int)0;
	}
	HX_STACK_LINE(179)
	return (int)-1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Ogg_helper_obj,seek_callback,return )

int Ogg_helper_obj::close_callback( int cb_id){
	HX_STACK_FRAME("ogg._Ogg.Ogg_helper","close_callback",0x6457a09d,"ogg._Ogg.Ogg_helper.close_callback","ogg/Ogg.hx",183,0x0dd76eef)
	HX_STACK_ARG(cb_id,"cb_id")
	HX_STACK_LINE(185)
	::haxe::ds::IntMap tmp = ::ogg::_Ogg::Ogg_helper_obj::callbacks;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	int tmp1 = cb_id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(185)
	Dynamic info = tmp2;		HX_STACK_VAR(info,"info");
	HX_STACK_LINE(187)
	bool tmp3 = (info != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(187)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(187)
	if ((tmp3)){
		HX_STACK_LINE(187)
		Dynamic tmp5 = info->__Field(HX_HCSTRING("callbacks","\x0e","\xf3","\xbf","\xa6"), hx::paccDynamic )->__Field(HX_HCSTRING("close_fn","\xaf","\xfa","\x4c","\x85"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(187)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(187)
		tmp4 = (tmp6 != null());
	}
	else{
		HX_STACK_LINE(187)
		tmp4 = false;
	}
	HX_STACK_LINE(187)
	if ((tmp4)){
		HX_STACK_LINE(188)
		Dynamic tmp5 = info->__Field(HX_HCSTRING("userdata","\xf5","\x69","\x4f","\x1a"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(188)
		info->__Field(HX_HCSTRING("callbacks","\x0e","\xf3","\xbf","\xa6"), hx::paccDynamic )->__Field(HX_HCSTRING("close_fn","\xaf","\xfa","\x4c","\x85"), hx::paccDynamic )(tmp5);
	}
	HX_STACK_LINE(192)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ogg_helper_obj,close_callback,return )

int Ogg_helper_obj::tell_callback( int cb_id){
	HX_STACK_FRAME("ogg._Ogg.Ogg_helper","tell_callback",0xebe533c2,"ogg._Ogg.Ogg_helper.tell_callback","ogg/Ogg.hx",196,0x0dd76eef)
	HX_STACK_ARG(cb_id,"cb_id")
	HX_STACK_LINE(198)
	::haxe::ds::IntMap tmp = ::ogg::_Ogg::Ogg_helper_obj::callbacks;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	int tmp1 = cb_id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(198)
	Dynamic info = tmp2;		HX_STACK_VAR(info,"info");
	HX_STACK_LINE(200)
	bool tmp3 = (info != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(200)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(200)
	if ((tmp3)){
		HX_STACK_LINE(200)
		Dynamic tmp5 = info->__Field(HX_HCSTRING("callbacks","\x0e","\xf3","\xbf","\xa6"), hx::paccDynamic )->__Field(HX_HCSTRING("tell_fn","\xd6","\x61","\xb7","\xb0"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(200)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(200)
		tmp4 = (tmp6 != null());
	}
	else{
		HX_STACK_LINE(200)
		tmp4 = false;
	}
	HX_STACK_LINE(200)
	if ((tmp4)){
		HX_STACK_LINE(201)
		Dynamic tmp5 = info->__Field(HX_HCSTRING("userdata","\xf5","\x69","\x4f","\x1a"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(201)
		int tmp6 = info->__Field(HX_HCSTRING("callbacks","\x0e","\xf3","\xbf","\xa6"), hx::paccDynamic )->__Field(HX_HCSTRING("tell_fn","\xd6","\x61","\xb7","\xb0"), hx::paccDynamic )(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(201)
		return tmp6;
	}
	HX_STACK_LINE(206)
	return (int)-1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ogg_helper_obj,tell_callback,return )


Ogg_helper_obj::Ogg_helper_obj()
{
}

bool Ogg_helper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"cb_seq") ) { outValue = cb_seq; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"callbacks") ) { outValue = callbacks; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"callbacks_set") ) { outValue = callbacks_set; return true;  }
		if (HX_FIELD_EQ(inName,"read_callback") ) { outValue = read_callback_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"seek_callback") ) { outValue = seek_callback_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"tell_callback") ) { outValue = tell_callback_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"close_callback") ) { outValue = close_callback_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ov_open_callbacks") ) { outValue = ov_open_callbacks_dyn(); return true;  }
	}
	return false;
}

bool Ogg_helper_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"cb_seq") ) { cb_seq=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"callbacks") ) { callbacks=ioValue.Cast< ::haxe::ds::IntMap >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"callbacks_set") ) { callbacks_set=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Ogg_helper_obj::callbacks_set,HX_HCSTRING("callbacks_set","\xb1","\x72","\xf4","\x1f")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &Ogg_helper_obj::callbacks,HX_HCSTRING("callbacks","\x0e","\xf3","\xbf","\xa6")},
	{hx::fsInt,(void *) &Ogg_helper_obj::cb_seq,HX_HCSTRING("cb_seq","\xbf","\x72","\xbc","\x41")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ogg_helper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Ogg_helper_obj::callbacks_set,"callbacks_set");
	HX_MARK_MEMBER_NAME(Ogg_helper_obj::callbacks,"callbacks");
	HX_MARK_MEMBER_NAME(Ogg_helper_obj::cb_seq,"cb_seq");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ogg_helper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Ogg_helper_obj::callbacks_set,"callbacks_set");
	HX_VISIT_MEMBER_NAME(Ogg_helper_obj::callbacks,"callbacks");
	HX_VISIT_MEMBER_NAME(Ogg_helper_obj::cb_seq,"cb_seq");
};

#endif

hx::Class Ogg_helper_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("callbacks_set","\xb1","\x72","\xf4","\x1f"),
	HX_HCSTRING("callbacks","\x0e","\xf3","\xbf","\xa6"),
	HX_HCSTRING("cb_seq","\xbf","\x72","\xbc","\x41"),
	HX_HCSTRING("ov_open_callbacks","\x71","\x1e","\x24","\x21"),
	HX_HCSTRING("read_callback","\x0e","\x2b","\x38","\xb8"),
	HX_HCSTRING("seek_callback","\xac","\x9c","\x7b","\x43"),
	HX_HCSTRING("close_callback","\x6c","\xc2","\x24","\xc0"),
	HX_HCSTRING("tell_callback","\xd3","\x80","\x9b","\xcf"),
	::String(null()) };

void Ogg_helper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ogg._Ogg.Ogg_helper","\x1d","\x5f","\x1b","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Ogg_helper_obj::__GetStatic;
	__mClass->mSetStaticField = &Ogg_helper_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Ogg_helper_obj >;
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

void Ogg_helper_obj::__boot()
{
	callbacks_set= false;
struct _Function_0_1{
	inline static ::haxe::ds::IntMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ogg/Ogg.hx",136,0x0dd76eef)
		{
			HX_STACK_LINE(136)
			::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(136)
			::haxe::ds::IntMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(136)
			return tmp1;
		}
		return null();
	}
};
	callbacks= _Function_0_1::Block();
	cb_seq= (int)0;
}

} // end namespace ogg
} // end namespace _Ogg
