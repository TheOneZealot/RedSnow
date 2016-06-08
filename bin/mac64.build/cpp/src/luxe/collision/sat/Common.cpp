#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_luxe_collision_sat_Common
#include <luxe/collision/sat/Common.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{
namespace collision{
namespace sat{

Void Common_obj::__construct()
{
	return null();
}

//Common_obj::~Common_obj() { }

Dynamic Common_obj::__CreateEmpty() { return  new Common_obj; }
hx::ObjectPtr< Common_obj > Common_obj::__new()
{  hx::ObjectPtr< Common_obj > _result_ = new Common_obj();
	_result_->__construct();
	return _result_;}

Dynamic Common_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Common_obj > _result_ = new Common_obj();
	_result_->__construct();
	return _result_;}

::phoenix::Vector Common_obj::findNormalAxis( Array< ::Dynamic > vertices,int index){
	HX_STACK_FRAME("luxe.collision.sat.Common","findNormalAxis",0x1d3745c8,"luxe.collision.sat.Common.findNormalAxis","luxe/collision/sat/Common.hx",9,0x4376edb4)
	HX_STACK_ARG(vertices,"vertices")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(11)
	::phoenix::Vector tmp = vertices->__get(index).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	::phoenix::Vector vector1 = tmp;		HX_STACK_VAR(vector1,"vector1");
	HX_STACK_LINE(13)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	int tmp2 = (vertices->length - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13)
	bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(13)
	::phoenix::Vector tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(13)
	if ((tmp3)){
		HX_STACK_LINE(13)
		tmp4 = vertices->__get((int)0).StaticCast< ::phoenix::Vector >();
	}
	else{
		HX_STACK_LINE(13)
		int tmp5 = (index + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(13)
		tmp4 = vertices->__get(tmp5).StaticCast< ::phoenix::Vector >();
	}
	HX_STACK_LINE(13)
	::phoenix::Vector vector2 = tmp4;		HX_STACK_VAR(vector2,"vector2");
	HX_STACK_LINE(15)
	Float tmp5 = (vector2->y - vector1->y);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(15)
	Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(15)
	Float tmp7 = (vector2->x - vector1->x);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(15)
	::phoenix::Vector tmp8 = ::phoenix::Vector_obj::__new(tmp6,tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(15)
	::phoenix::Vector normalAxis = tmp8;		HX_STACK_VAR(normalAxis,"normalAxis");
	HX_STACK_LINE(17)
	::phoenix::Vector tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(17)
	{
		HX_STACK_LINE(17)
		Float tmp10 = (normalAxis->x * normalAxis->x);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(17)
		Float tmp11 = (normalAxis->y * normalAxis->y);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(17)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(17)
		Float tmp13 = (normalAxis->z * normalAxis->z);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(17)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(17)
		Float tmp15 = ::Math_obj::sqrt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(17)
		Float v = tmp15;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(17)
		bool tmp16 = (v != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(17)
		if ((tmp16)){
			HX_STACK_LINE(17)
			Float tmp17 = (Float(normalAxis->x) / Float(v));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(17)
			Float _x = tmp17;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(17)
			Float tmp18 = (Float(normalAxis->y) / Float(v));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(17)
			Float _y = tmp18;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(17)
			Float tmp19 = (Float(normalAxis->z) / Float(v));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(17)
			Float _z = tmp19;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(17)
			bool prev = normalAxis->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(17)
			normalAxis->ignore_listeners = true;
			HX_STACK_LINE(17)
			{
				HX_STACK_LINE(17)
				normalAxis->x = _x;
				HX_STACK_LINE(17)
				bool tmp20 = normalAxis->_construct;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(17)
				if ((tmp20)){
					HX_STACK_LINE(17)
					normalAxis->x;
				}
				else{
					HX_STACK_LINE(17)
					bool tmp21 = (normalAxis->listen_x != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(17)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(17)
					if ((tmp21)){
						HX_STACK_LINE(17)
						bool tmp23 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(17)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(17)
						tmp22 = !(tmp24);
					}
					else{
						HX_STACK_LINE(17)
						tmp22 = false;
					}
					HX_STACK_LINE(17)
					if ((tmp22)){
						HX_STACK_LINE(17)
						Float tmp23 = _x;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(17)
						normalAxis->listen_x(tmp23);
					}
					HX_STACK_LINE(17)
					normalAxis->x;
				}
			}
			HX_STACK_LINE(17)
			{
				HX_STACK_LINE(17)
				normalAxis->y = _y;
				HX_STACK_LINE(17)
				bool tmp20 = normalAxis->_construct;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(17)
				if ((tmp20)){
					HX_STACK_LINE(17)
					normalAxis->y;
				}
				else{
					HX_STACK_LINE(17)
					bool tmp21 = (normalAxis->listen_y != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(17)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(17)
					if ((tmp21)){
						HX_STACK_LINE(17)
						bool tmp23 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(17)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(17)
						tmp22 = !(tmp24);
					}
					else{
						HX_STACK_LINE(17)
						tmp22 = false;
					}
					HX_STACK_LINE(17)
					if ((tmp22)){
						HX_STACK_LINE(17)
						Float tmp23 = _y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(17)
						normalAxis->listen_y(tmp23);
					}
					HX_STACK_LINE(17)
					normalAxis->y;
				}
			}
			HX_STACK_LINE(17)
			{
				HX_STACK_LINE(17)
				normalAxis->z = _z;
				HX_STACK_LINE(17)
				bool tmp20 = normalAxis->_construct;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(17)
				if ((tmp20)){
					HX_STACK_LINE(17)
					normalAxis->z;
				}
				else{
					HX_STACK_LINE(17)
					bool tmp21 = (normalAxis->listen_z != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(17)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(17)
					if ((tmp21)){
						HX_STACK_LINE(17)
						bool tmp23 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(17)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(17)
						tmp22 = !(tmp24);
					}
					else{
						HX_STACK_LINE(17)
						tmp22 = false;
					}
					HX_STACK_LINE(17)
					if ((tmp22)){
						HX_STACK_LINE(17)
						Float tmp23 = _z;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(17)
						normalAxis->listen_z(tmp23);
					}
					HX_STACK_LINE(17)
					normalAxis->z;
				}
			}
			HX_STACK_LINE(17)
			normalAxis->ignore_listeners = prev;
			HX_STACK_LINE(17)
			bool tmp20 = (normalAxis->listen_x != null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(17)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(17)
			if ((tmp20)){
				HX_STACK_LINE(17)
				bool tmp22 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(17)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(17)
				tmp21 = !(tmp23);
			}
			else{
				HX_STACK_LINE(17)
				tmp21 = false;
			}
			HX_STACK_LINE(17)
			if ((tmp21)){
				HX_STACK_LINE(17)
				Float tmp22 = normalAxis->x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(17)
				normalAxis->listen_x(tmp22);
			}
			HX_STACK_LINE(17)
			bool tmp22 = (normalAxis->listen_y != null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(17)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(17)
			if ((tmp22)){
				HX_STACK_LINE(17)
				bool tmp24 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(17)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(17)
				tmp23 = !(tmp25);
			}
			else{
				HX_STACK_LINE(17)
				tmp23 = false;
			}
			HX_STACK_LINE(17)
			if ((tmp23)){
				HX_STACK_LINE(17)
				Float tmp24 = normalAxis->y;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(17)
				normalAxis->listen_y(tmp24);
			}
			HX_STACK_LINE(17)
			bool tmp24 = (normalAxis->listen_z != null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(17)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(17)
			if ((tmp24)){
				HX_STACK_LINE(17)
				bool tmp26 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(17)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(17)
				tmp25 = !(tmp27);
			}
			else{
				HX_STACK_LINE(17)
				tmp25 = false;
			}
			HX_STACK_LINE(17)
			if ((tmp25)){
				HX_STACK_LINE(17)
				Float tmp26 = normalAxis->z;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(17)
				normalAxis->listen_z(tmp26);
			}
			HX_STACK_LINE(17)
			normalAxis;
		}
		else{
			HX_STACK_LINE(17)
			bool prev = normalAxis->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(17)
			normalAxis->ignore_listeners = true;
			HX_STACK_LINE(17)
			{
				HX_STACK_LINE(17)
				normalAxis->x = (int)0;
				HX_STACK_LINE(17)
				bool tmp17 = normalAxis->_construct;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(17)
				if ((tmp17)){
					HX_STACK_LINE(17)
					normalAxis->x;
				}
				else{
					HX_STACK_LINE(17)
					bool tmp18 = (normalAxis->listen_x != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(17)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(17)
					if ((tmp18)){
						HX_STACK_LINE(17)
						bool tmp20 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(17)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(17)
						tmp19 = !(tmp21);
					}
					else{
						HX_STACK_LINE(17)
						tmp19 = false;
					}
					HX_STACK_LINE(17)
					if ((tmp19)){
						HX_STACK_LINE(17)
						normalAxis->listen_x((int)0);
					}
					HX_STACK_LINE(17)
					normalAxis->x;
				}
			}
			HX_STACK_LINE(17)
			{
				HX_STACK_LINE(17)
				normalAxis->y = (int)0;
				HX_STACK_LINE(17)
				bool tmp17 = normalAxis->_construct;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(17)
				if ((tmp17)){
					HX_STACK_LINE(17)
					normalAxis->y;
				}
				else{
					HX_STACK_LINE(17)
					bool tmp18 = (normalAxis->listen_y != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(17)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(17)
					if ((tmp18)){
						HX_STACK_LINE(17)
						bool tmp20 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(17)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(17)
						tmp19 = !(tmp21);
					}
					else{
						HX_STACK_LINE(17)
						tmp19 = false;
					}
					HX_STACK_LINE(17)
					if ((tmp19)){
						HX_STACK_LINE(17)
						normalAxis->listen_y((int)0);
					}
					HX_STACK_LINE(17)
					normalAxis->y;
				}
			}
			HX_STACK_LINE(17)
			{
				HX_STACK_LINE(17)
				normalAxis->z = (int)0;
				HX_STACK_LINE(17)
				bool tmp17 = normalAxis->_construct;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(17)
				if ((tmp17)){
					HX_STACK_LINE(17)
					normalAxis->z;
				}
				else{
					HX_STACK_LINE(17)
					bool tmp18 = (normalAxis->listen_z != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(17)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(17)
					if ((tmp18)){
						HX_STACK_LINE(17)
						bool tmp20 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(17)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(17)
						tmp19 = !(tmp21);
					}
					else{
						HX_STACK_LINE(17)
						tmp19 = false;
					}
					HX_STACK_LINE(17)
					if ((tmp19)){
						HX_STACK_LINE(17)
						normalAxis->listen_z((int)0);
					}
					HX_STACK_LINE(17)
					normalAxis->z;
				}
			}
			HX_STACK_LINE(17)
			normalAxis->ignore_listeners = prev;
			HX_STACK_LINE(17)
			bool tmp17 = (normalAxis->listen_x != null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(17)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(17)
			if ((tmp17)){
				HX_STACK_LINE(17)
				bool tmp19 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(17)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(17)
				tmp18 = !(tmp20);
			}
			else{
				HX_STACK_LINE(17)
				tmp18 = false;
			}
			HX_STACK_LINE(17)
			if ((tmp18)){
				HX_STACK_LINE(17)
				Float tmp19 = normalAxis->x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(17)
				normalAxis->listen_x(tmp19);
			}
			HX_STACK_LINE(17)
			bool tmp19 = (normalAxis->listen_y != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(17)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(17)
			if ((tmp19)){
				HX_STACK_LINE(17)
				bool tmp21 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(17)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(17)
				tmp20 = !(tmp22);
			}
			else{
				HX_STACK_LINE(17)
				tmp20 = false;
			}
			HX_STACK_LINE(17)
			if ((tmp20)){
				HX_STACK_LINE(17)
				Float tmp21 = normalAxis->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(17)
				normalAxis->listen_y(tmp21);
			}
			HX_STACK_LINE(17)
			bool tmp21 = (normalAxis->listen_z != null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(17)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(17)
			if ((tmp21)){
				HX_STACK_LINE(17)
				bool tmp23 = normalAxis->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(17)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(17)
				tmp22 = !(tmp24);
			}
			else{
				HX_STACK_LINE(17)
				tmp22 = false;
			}
			HX_STACK_LINE(17)
			if ((tmp22)){
				HX_STACK_LINE(17)
				Float tmp23 = normalAxis->z;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(17)
				normalAxis->listen_z(tmp23);
			}
			HX_STACK_LINE(17)
			normalAxis;
		}
		HX_STACK_LINE(17)
		tmp9 = normalAxis;
	}
	HX_STACK_LINE(17)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Common_obj,findNormalAxis,return )


Common_obj::Common_obj()
{
}

bool Common_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"findNormalAxis") ) { outValue = findNormalAxis_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Common_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Common_obj::__mClass,"__mClass");
};

#endif

hx::Class Common_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("findNormalAxis","\x01","\x10","\xd4","\x21"),
	::String(null()) };

void Common_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.collision.sat.Common","\xc7","\x36","\xf0","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Common_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Common_obj >;
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
} // end namespace sat
