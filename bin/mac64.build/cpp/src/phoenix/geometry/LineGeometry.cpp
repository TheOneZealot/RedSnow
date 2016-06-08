#include <hxcpp.h>

#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_LineGeometry
#include <phoenix/geometry/LineGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
namespace phoenix{
namespace geometry{

Void LineGeometry_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.geometry.LineGeometry","new",0xef3cd875,"phoenix.geometry.LineGeometry.new","phoenix/geometry/LineGeometry.hx",19,0x0bd610bb)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(21)
	_options->__FieldRef(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88")) = (int)1;
	HX_STACK_LINE(23)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	super::__construct(tmp);
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		bool tmp1 = (_options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		if ((tmp1)){
			HX_STACK_LINE(25)
			::phoenix::Color tmp2 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(25)
			_options->__FieldRef(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) = tmp2;
		}
		HX_STACK_LINE(25)
		_options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
	}
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		bool tmp1 = (_options->__Field(HX_HCSTRING("color0","\x6d","\xc5","\x86","\xc6"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		if ((tmp1)){
			HX_STACK_LINE(26)
			_options->__FieldRef(HX_HCSTRING("color0","\x6d","\xc5","\x86","\xc6")) = _options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
		}
		HX_STACK_LINE(26)
		_options->__Field(HX_HCSTRING("color0","\x6d","\xc5","\x86","\xc6"), hx::paccDynamic );
	}
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		bool tmp1 = (_options->__Field(HX_HCSTRING("color1","\x6e","\xc5","\x86","\xc6"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		if ((tmp1)){
			HX_STACK_LINE(27)
			_options->__FieldRef(HX_HCSTRING("color1","\x6e","\xc5","\x86","\xc6")) = _options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
		}
		HX_STACK_LINE(27)
		_options->__Field(HX_HCSTRING("color1","\x6e","\xc5","\x86","\xc6"), hx::paccDynamic );
	}
	HX_STACK_LINE(29)
	::phoenix::Vector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		bool tmp2 = (_options->__Field(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		if ((tmp2)){
			HX_STACK_LINE(29)
			::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(29)
			_options->__FieldRef(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00")) = tmp3;
		}
		HX_STACK_LINE(29)
		tmp1 = _options->__Field(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(29)
	this->set_p0(tmp1);
	HX_STACK_LINE(30)
	::phoenix::Vector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		bool tmp3 = (_options->__Field(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		if ((tmp3)){
			HX_STACK_LINE(30)
			::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new((int)64,(int)64,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(30)
			_options->__FieldRef(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00")) = tmp4;
		}
		HX_STACK_LINE(30)
		tmp2 = _options->__Field(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(30)
	this->set_p1(tmp2);
	HX_STACK_LINE(32)
	::phoenix::Vector tmp3 = this->p0;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	::phoenix::Color tmp4 = _options->__Field(HX_HCSTRING("color0","\x6d","\xc5","\x86","\xc6"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	::phoenix::geometry::Vertex tmp5 = ::phoenix::geometry::Vertex_obj::__new(tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(32)
	this->add(tmp5);
	HX_STACK_LINE(33)
	::phoenix::Vector tmp6 = this->p1;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(33)
	::phoenix::Color tmp7 = _options->__Field(HX_HCSTRING("color1","\x6e","\xc5","\x86","\xc6"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(33)
	::phoenix::geometry::Vertex tmp8 = ::phoenix::geometry::Vertex_obj::__new(tmp6,tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(33)
	this->add(tmp8);
}
;
	return null();
}

//LineGeometry_obj::~LineGeometry_obj() { }

Dynamic LineGeometry_obj::__CreateEmpty() { return  new LineGeometry_obj; }
hx::ObjectPtr< LineGeometry_obj > LineGeometry_obj::__new(Dynamic _options)
{  hx::ObjectPtr< LineGeometry_obj > _result_ = new LineGeometry_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic LineGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LineGeometry_obj > _result_ = new LineGeometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::phoenix::Vector LineGeometry_obj::set_p0( ::phoenix::Vector _p){
	HX_STACK_FRAME("phoenix.geometry.LineGeometry","set_p0",0x4fc5c088,"phoenix.geometry.LineGeometry.set_p0","phoenix/geometry/LineGeometry.hx",39,0x0bd610bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(41)
	this->p0 = _p;
	HX_STACK_LINE(43)
	int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	if ((tmp1)){
		HX_STACK_LINE(43)
		::phoenix::Vector tmp2 = this->p0;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		return tmp2;
	}
	HX_STACK_LINE(45)
	::phoenix::Vector tmp2 = this->p0;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	::phoenix::geometry::Vertex tmp3 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(45)
	tmp3->pos = tmp2;
	HX_STACK_LINE(47)
	::phoenix::Vector tmp4 = this->p0 = _p;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(47)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(LineGeometry_obj,set_p0,return )

::phoenix::Vector LineGeometry_obj::set_p1( ::phoenix::Vector _p){
	HX_STACK_FRAME("phoenix.geometry.LineGeometry","set_p1",0x4fc5c089,"phoenix.geometry.LineGeometry.set_p1","phoenix/geometry/LineGeometry.hx",51,0x0bd610bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(53)
	this->p1 = _p;
	HX_STACK_LINE(55)
	int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	if ((tmp1)){
		HX_STACK_LINE(55)
		::phoenix::Vector tmp2 = this->p1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		return tmp2;
	}
	HX_STACK_LINE(57)
	::phoenix::Vector tmp2 = this->p1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	::phoenix::geometry::Vertex tmp3 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	tmp3->pos = tmp2;
	HX_STACK_LINE(59)
	::phoenix::Vector tmp4 = this->p1 = _p;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(59)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(LineGeometry_obj,set_p1,return )

::phoenix::Color LineGeometry_obj::set_color0( ::phoenix::Color _c){
	HX_STACK_FRAME("phoenix.geometry.LineGeometry","set_color0",0xaf772835,"phoenix.geometry.LineGeometry.set_color0","phoenix/geometry/LineGeometry.hx",63,0x0bd610bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_c,"_c")
	HX_STACK_LINE(65)
	this->color0 = _c;
	HX_STACK_LINE(67)
	int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	if ((tmp1)){
		HX_STACK_LINE(67)
		::phoenix::Color tmp2 = this->color0;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		return tmp2;
	}
	HX_STACK_LINE(69)
	::phoenix::Color tmp2 = this->color0;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	::phoenix::geometry::Vertex tmp3 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(69)
	tmp3->color = tmp2;
	HX_STACK_LINE(71)
	::phoenix::Color tmp4 = this->color0;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(71)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(LineGeometry_obj,set_color0,return )

::phoenix::Color LineGeometry_obj::set_color1( ::phoenix::Color _c){
	HX_STACK_FRAME("phoenix.geometry.LineGeometry","set_color1",0xaf772836,"phoenix.geometry.LineGeometry.set_color1","phoenix/geometry/LineGeometry.hx",75,0x0bd610bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_c,"_c")
	HX_STACK_LINE(77)
	this->color1 = _c;
	HX_STACK_LINE(79)
	int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	if ((tmp1)){
		HX_STACK_LINE(79)
		::phoenix::Color tmp2 = this->color1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		return tmp2;
	}
	HX_STACK_LINE(81)
	::phoenix::Color tmp2 = this->color1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	::phoenix::geometry::Vertex tmp3 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(81)
	tmp3->color = tmp2;
	HX_STACK_LINE(83)
	::phoenix::Color tmp4 = this->color1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(83)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(LineGeometry_obj,set_color1,return )


LineGeometry_obj::LineGeometry_obj()
{
}

void LineGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LineGeometry);
	HX_MARK_MEMBER_NAME(p0,"p0");
	HX_MARK_MEMBER_NAME(p1,"p1");
	HX_MARK_MEMBER_NAME(color0,"color0");
	HX_MARK_MEMBER_NAME(color1,"color1");
	::phoenix::geometry::Geometry_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LineGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p0,"p0");
	HX_VISIT_MEMBER_NAME(p1,"p1");
	HX_VISIT_MEMBER_NAME(color0,"color0");
	HX_VISIT_MEMBER_NAME(color1,"color1");
	::phoenix::geometry::Geometry_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LineGeometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"p0") ) { return p0; }
		if (HX_FIELD_EQ(inName,"p1") ) { return p1; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"color0") ) { return color0; }
		if (HX_FIELD_EQ(inName,"color1") ) { return color1; }
		if (HX_FIELD_EQ(inName,"set_p0") ) { return set_p0_dyn(); }
		if (HX_FIELD_EQ(inName,"set_p1") ) { return set_p1_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_color0") ) { return set_color0_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color1") ) { return set_color1_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LineGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"p0") ) { if (inCallProp == hx::paccAlways) return set_p0(inValue);p0=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p1") ) { if (inCallProp == hx::paccAlways) return set_p1(inValue);p1=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"color0") ) { if (inCallProp == hx::paccAlways) return set_color0(inValue);color0=inValue.Cast< ::phoenix::Color >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color1") ) { if (inCallProp == hx::paccAlways) return set_color1(inValue);color1=inValue.Cast< ::phoenix::Color >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LineGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00"));
	outFields->push(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00"));
	outFields->push(HX_HCSTRING("color0","\x6d","\xc5","\x86","\xc6"));
	outFields->push(HX_HCSTRING("color1","\x6e","\xc5","\x86","\xc6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(LineGeometry_obj,p0),HX_HCSTRING("p0","\xc0","\x61","\x00","\x00")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(LineGeometry_obj,p1),HX_HCSTRING("p1","\xc1","\x61","\x00","\x00")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(LineGeometry_obj,color0),HX_HCSTRING("color0","\x6d","\xc5","\x86","\xc6")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(LineGeometry_obj,color1),HX_HCSTRING("color1","\x6e","\xc5","\x86","\xc6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("p0","\xc0","\x61","\x00","\x00"),
	HX_HCSTRING("p1","\xc1","\x61","\x00","\x00"),
	HX_HCSTRING("color0","\x6d","\xc5","\x86","\xc6"),
	HX_HCSTRING("color1","\x6e","\xc5","\x86","\xc6"),
	HX_HCSTRING("set_p0","\x7d","\x4d","\x78","\x6f"),
	HX_HCSTRING("set_p1","\x7e","\x4d","\x78","\x6f"),
	HX_HCSTRING("set_color0","\xaa","\xd3","\x8b","\xba"),
	HX_HCSTRING("set_color1","\xab","\xd3","\x8b","\xba"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineGeometry_obj::__mClass,"__mClass");
};

#endif

hx::Class LineGeometry_obj::__mClass;

void LineGeometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.LineGeometry","\x03","\x7a","\x88","\xcf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LineGeometry_obj >;
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
} // end namespace geometry
