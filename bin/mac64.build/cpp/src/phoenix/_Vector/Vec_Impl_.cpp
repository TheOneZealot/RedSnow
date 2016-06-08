#include <hxcpp.h>

#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix__Vector_Vec_Impl_
#include <phoenix/_Vector/Vec_Impl_.h>
#endif
namespace phoenix{
namespace _Vector{

Void Vec_Impl__obj::__construct()
{
	return null();
}

//Vec_Impl__obj::~Vec_Impl__obj() { }

Dynamic Vec_Impl__obj::__CreateEmpty() { return  new Vec_Impl__obj; }
hx::ObjectPtr< Vec_Impl__obj > Vec_Impl__obj::__new()
{  hx::ObjectPtr< Vec_Impl__obj > _result_ = new Vec_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Vec_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vec_Impl__obj > _result_ = new Vec_Impl__obj();
	_result_->__construct();
	return _result_;}

::phoenix::Vector Vec_Impl__obj::_new( Dynamic _x,Dynamic _y,Dynamic _z,Dynamic _w){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_new",0x7addb3a6,"phoenix._Vector.Vec_Impl_._new","phoenix/Vector.hx",813,0x5d0bf7fb)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_z,"_z")
	HX_STACK_ARG(_w,"_w")
	HX_STACK_LINE(813)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(_x,_y,_z,_w);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(813)
	::phoenix::Vector tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(813)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Vec_Impl__obj,_new,return )

::phoenix::Vector Vec_Impl__obj::_multiply( ::phoenix::Vector lhs,::phoenix::Vector rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_multiply",0x4f47611e,"phoenix._Vector.Vec_Impl_._multiply","phoenix/Vector.hx",816,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(817)
	Float tmp = (lhs->x * rhs->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(817)
	Float tmp1 = (lhs->y * rhs->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(817)
	Float tmp2 = (lhs->z * rhs->z);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(817)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(817)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_multiply,return )

::phoenix::Vector Vec_Impl__obj::_multiply_scalar( ::phoenix::Vector lhs,Float rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_multiply_scalar",0xb35d176d,"phoenix._Vector.Vec_Impl_._multiply_scalar","phoenix/Vector.hx",819,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(820)
	::phoenix::Vector tmp = lhs;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(820)
	Float tmp1 = rhs;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(820)
	::phoenix::Vector tmp2 = ::phoenix::Vector_obj::Multiply(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(820)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_multiply_scalar,return )

::phoenix::Vector Vec_Impl__obj::_multiply_scalar_int( ::phoenix::Vector lhs,int rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_multiply_scalar_int",0x5efd23dd,"phoenix._Vector.Vec_Impl_._multiply_scalar_int","phoenix/Vector.hx",822,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(823)
	::phoenix::Vector tmp = lhs;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(823)
	int tmp1 = rhs;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(823)
	::phoenix::Vector tmp2 = ::phoenix::Vector_obj::Multiply(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(823)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_multiply_scalar_int,return )

::phoenix::Vector Vec_Impl__obj::_divide( ::phoenix::Vector lhs,::phoenix::Vector rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_divide",0xf9dd1bf3,"phoenix._Vector.Vec_Impl_._divide","phoenix/Vector.hx",826,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(827)
	Float tmp = (Float(lhs->x) / Float(rhs->x));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(827)
	Float tmp1 = (Float(lhs->y) / Float(rhs->y));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(827)
	Float tmp2 = (Float(lhs->z) / Float(rhs->z));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(827)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(827)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_divide,return )

::phoenix::Vector Vec_Impl__obj::_divide_scalar( ::phoenix::Vector lhs,Float rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_divide_scalar",0xf34b9138,"phoenix._Vector.Vec_Impl_._divide_scalar","phoenix/Vector.hx",829,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(830)
	Float tmp = (Float(lhs->x) / Float(rhs));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(830)
	Float tmp1 = (Float(lhs->y) / Float(rhs));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(830)
	Float tmp2 = (Float(lhs->z) / Float(rhs));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(830)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(830)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_divide_scalar,return )

::phoenix::Vector Vec_Impl__obj::_divide_scalar_int( ::phoenix::Vector lhs,int rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_divide_scalar_int",0x8c73df28,"phoenix._Vector.Vec_Impl_._divide_scalar_int","phoenix/Vector.hx",832,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(833)
	Float tmp = (Float(lhs->x) / Float(rhs));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(833)
	Float tmp1 = (Float(lhs->y) / Float(rhs));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(833)
	Float tmp2 = (Float(lhs->z) / Float(rhs));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(833)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(833)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_divide_scalar_int,return )

::phoenix::Vector Vec_Impl__obj::_add( ::phoenix::Vector lhs,::phoenix::Vector rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_add",0x7ad3d567,"phoenix._Vector.Vec_Impl_._add","phoenix/Vector.hx",836,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(837)
	Float tmp = (lhs->x + rhs->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(837)
	Float tmp1 = (lhs->y + rhs->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(837)
	Float tmp2 = (lhs->z + rhs->z);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(837)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(837)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_add,return )

::phoenix::Vector Vec_Impl__obj::_add_scalar( ::phoenix::Vector lhs,Float rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_add_scalar",0x7c69ae44,"phoenix._Vector.Vec_Impl_._add_scalar","phoenix/Vector.hx",839,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(840)
	Float tmp = (lhs->x + rhs);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(840)
	Float tmp1 = (lhs->y + rhs);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(840)
	Float tmp2 = (lhs->z + rhs);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(840)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(840)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_add_scalar,return )

::phoenix::Vector Vec_Impl__obj::_add_scalar_int( ::phoenix::Vector lhs,int rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_add_scalar_int",0x84337234,"phoenix._Vector.Vec_Impl_._add_scalar_int","phoenix/Vector.hx",842,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(843)
	Float tmp = (lhs->x + rhs);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(843)
	Float tmp1 = (lhs->y + rhs);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(843)
	Float tmp2 = (lhs->z + rhs);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(843)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(843)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_add_scalar_int,return )

::phoenix::Vector Vec_Impl__obj::_subtract( ::phoenix::Vector lhs,::phoenix::Vector rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_subtract",0xaccbf40e,"phoenix._Vector.Vec_Impl_._subtract","phoenix/Vector.hx",846,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(847)
	Float tmp = (lhs->x - rhs->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(847)
	Float tmp1 = (lhs->y - rhs->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(847)
	Float tmp2 = (lhs->z - rhs->z);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(847)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(847)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_subtract,return )

::phoenix::Vector Vec_Impl__obj::_subtract_scalar( ::phoenix::Vector lhs,Float rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_subtract_scalar",0x32b9c27d,"phoenix._Vector.Vec_Impl_._subtract_scalar","phoenix/Vector.hx",849,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(850)
	Float tmp = (lhs->x - rhs);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(850)
	Float tmp1 = (lhs->y - rhs);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(850)
	Float tmp2 = (lhs->z - rhs);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(850)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(850)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_subtract_scalar,return )

::phoenix::Vector Vec_Impl__obj::_subtract_scalar_int( ::phoenix::Vector lhs,int rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_subtract_scalar_int",0x77f496ed,"phoenix._Vector.Vec_Impl_._subtract_scalar_int","phoenix/Vector.hx",852,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(853)
	Float tmp = (lhs->x - rhs);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(853)
	Float tmp1 = (lhs->y - rhs);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(853)
	Float tmp2 = (lhs->z - rhs);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(853)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(853)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_subtract_scalar_int,return )


Vec_Impl__obj::Vec_Impl__obj()
{
}

bool Vec_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_add") ) { outValue = _add_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_divide") ) { outValue = _divide_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_multiply") ) { outValue = _multiply_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_subtract") ) { outValue = _subtract_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_add_scalar") ) { outValue = _add_scalar_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_divide_scalar") ) { outValue = _divide_scalar_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_add_scalar_int") ) { outValue = _add_scalar_int_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_multiply_scalar") ) { outValue = _multiply_scalar_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_subtract_scalar") ) { outValue = _subtract_scalar_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_divide_scalar_int") ) { outValue = _divide_scalar_int_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_multiply_scalar_int") ) { outValue = _multiply_scalar_int_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_subtract_scalar_int") ) { outValue = _subtract_scalar_int_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vec_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vec_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Vec_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("_multiply","\x83","\xd9","\x22","\xe2"),
	HX_HCSTRING("_multiply_scalar","\xa8","\xa5","\x47","\x38"),
	HX_HCSTRING("_multiply_scalar_int","\x98","\xeb","\xea","\x7f"),
	HX_HCSTRING("_divide","\x18","\x41","\x89","\x2d"),
	HX_HCSTRING("_divide_scalar","\xb3","\x8a","\xe8","\x5b"),
	HX_HCSTRING("_divide_scalar_int","\x23","\xb2","\xca","\x0b"),
	HX_HCSTRING("_add","\x22","\x37","\x15","\x3f"),
	HX_HCSTRING("_add_scalar","\xe9","\xc9","\x5f","\x17"),
	HX_HCSTRING("_add_scalar_int","\x59","\xc4","\xf0","\xa4"),
	HX_HCSTRING("_subtract","\x73","\x6c","\xa7","\x3f"),
	HX_HCSTRING("_subtract_scalar","\xb8","\x50","\xa4","\xb7"),
	HX_HCSTRING("_subtract_scalar_int","\xa8","\x5e","\xe2","\x98"),
	::String(null()) };

void Vec_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix._Vector.Vec_Impl_","\x49","\x68","\xc4","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vec_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Vec_Impl__obj >;
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
} // end namespace _Vector
