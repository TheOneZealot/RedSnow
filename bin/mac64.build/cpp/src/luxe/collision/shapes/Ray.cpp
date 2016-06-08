#include <hxcpp.h>

#ifndef INCLUDED_luxe_collision_shapes_Ray
#include <luxe/collision/shapes/Ray.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{
namespace collision{
namespace shapes{

Void Ray_obj::__construct(::phoenix::Vector _start,::phoenix::Vector _end,hx::Null< bool >  __o__infinite)
{
HX_STACK_FRAME("luxe.collision.shapes.Ray","new",0x020781b4,"luxe.collision.shapes.Ray.new","luxe/collision/shapes/Ray.hx",23,0x54c6da7b)
HX_STACK_THIS(this)
HX_STACK_ARG(_start,"_start")
HX_STACK_ARG(_end,"_end")
HX_STACK_ARG(__o__infinite,"_infinite")
bool _infinite = __o__infinite.Default(true);
{
	HX_STACK_LINE(25)
	this->start = _start;
	HX_STACK_LINE(26)
	this->end = _end;
	HX_STACK_LINE(27)
	this->infinite = _infinite;
	HX_STACK_LINE(30)
	::phoenix::Vector tmp = this->end;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	::phoenix::Vector tmp2 = this->start;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(30)
	::phoenix::Vector tmp5 = this->end;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(30)
	Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(30)
	::phoenix::Vector tmp7 = this->start;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(30)
	Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(30)
	Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(30)
	::phoenix::Vector tmp10 = ::phoenix::Vector_obj::__new(tmp4,tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(30)
	this->dir_cache = tmp10;
}
;
	return null();
}

//Ray_obj::~Ray_obj() { }

Dynamic Ray_obj::__CreateEmpty() { return  new Ray_obj; }
hx::ObjectPtr< Ray_obj > Ray_obj::__new(::phoenix::Vector _start,::phoenix::Vector _end,hx::Null< bool >  __o__infinite)
{  hx::ObjectPtr< Ray_obj > _result_ = new Ray_obj();
	_result_->__construct(_start,_end,__o__infinite);
	return _result_;}

Dynamic Ray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ray_obj > _result_ = new Ray_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::phoenix::Vector Ray_obj::get_dir( ){
	HX_STACK_FRAME("luxe.collision.shapes.Ray","get_dir",0xc849f138,"luxe.collision.shapes.Ray.get_dir","luxe/collision/shapes/Ray.hx",37,0x54c6da7b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		::phoenix::Vector tmp = this->dir_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		::phoenix::Vector _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(38)
		::phoenix::Vector tmp1 = this->end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		::phoenix::Vector tmp3 = this->start;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		Float _x = tmp5;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(38)
		_this->x = _x;
		HX_STACK_LINE(38)
		bool tmp6 = _this->_construct;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		if ((tmp6)){
			HX_STACK_LINE(38)
			_this->x;
		}
		else{
			HX_STACK_LINE(38)
			bool tmp7 = (_this->listen_x != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(38)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(38)
			if ((tmp7)){
				HX_STACK_LINE(38)
				bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(38)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(38)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(38)
				tmp8 = false;
			}
			HX_STACK_LINE(38)
			if ((tmp8)){
				HX_STACK_LINE(38)
				Float tmp9 = _x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(38)
				_this->listen_x(tmp9);
			}
			HX_STACK_LINE(38)
			_this->x;
		}
	}
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		::phoenix::Vector tmp = this->dir_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		::phoenix::Vector _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(39)
		::phoenix::Vector tmp1 = this->end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		Float tmp2 = tmp1->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		::phoenix::Vector tmp3 = this->start;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(39)
		Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(39)
		_this->y = _y;
		HX_STACK_LINE(39)
		bool tmp6 = _this->_construct;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		if ((tmp6)){
			HX_STACK_LINE(39)
			_this->y;
		}
		else{
			HX_STACK_LINE(39)
			bool tmp7 = (_this->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(39)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(39)
			if ((tmp7)){
				HX_STACK_LINE(39)
				bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(39)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(39)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(39)
				tmp8 = false;
			}
			HX_STACK_LINE(39)
			if ((tmp8)){
				HX_STACK_LINE(39)
				Float tmp9 = _y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(39)
				_this->listen_y(tmp9);
			}
			HX_STACK_LINE(39)
			_this->y;
		}
	}
	HX_STACK_LINE(40)
	::phoenix::Vector tmp = this->dir_cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,get_dir,return )


Ray_obj::Ray_obj()
{
}

void Ray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ray);
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(infinite,"infinite");
	HX_MARK_MEMBER_NAME(dir_cache,"dir_cache");
	HX_MARK_END_CLASS();
}

void Ray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(infinite,"infinite");
	HX_VISIT_MEMBER_NAME(dir_cache,"dir_cache");
}

Dynamic Ray_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end; }
		if (HX_FIELD_EQ(inName,"dir") ) { if (inCallProp == hx::paccAlways) return get_dir(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_dir") ) { return get_dir_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"infinite") ) { return infinite; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dir_cache") ) { return dir_cache; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ray_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"infinite") ) { infinite=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dir_cache") ) { dir_cache=inValue.Cast< ::phoenix::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	outFields->push(HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"));
	outFields->push(HX_HCSTRING("infinite","\xd4","\x16","\x69","\xda"));
	outFields->push(HX_HCSTRING("dir_cache","\x90","\x96","\x88","\x9d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Ray_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Ray_obj,end),HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{hx::fsBool,(int)offsetof(Ray_obj,infinite),HX_HCSTRING("infinite","\xd4","\x16","\x69","\xda")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Ray_obj,dir_cache),HX_HCSTRING("dir_cache","\x90","\x96","\x88","\x9d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("infinite","\xd4","\x16","\x69","\xda"),
	HX_HCSTRING("dir_cache","\x90","\x96","\x88","\x9d"),
	HX_HCSTRING("get_dir","\xe4","\x05","\xc1","\x26"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ray_obj::__mClass,"__mClass");
};

#endif

hx::Class Ray_obj::__mClass;

void Ray_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.collision.shapes.Ray","\xc2","\xd7","\x57","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Ray_obj >;
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
} // end namespace collision
} // end namespace shapes
