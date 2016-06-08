#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_phoenix_geometry_QuadPackGeometry
#include <phoenix/geometry/QuadPackGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoord
#include <phoenix/geometry/TextureCoord.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoordSet
#include <phoenix/geometry/TextureCoordSet.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
namespace phoenix{
namespace geometry{

Void QuadPackGeometry_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","new",0x49f65041,"phoenix.geometry.QuadPackGeometry.new","phoenix/geometry/QuadPackGeometry.hx",47,0xc786266f)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(49)
	_options->__FieldRef(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88")) = (int)4;
	HX_STACK_LINE(51)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	super::__construct(tmp);
	HX_STACK_LINE(53)
	::haxe::ds::IntMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		::haxe::ds::IntMap tmp2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		::haxe::ds::IntMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(53)
	this->quads = tmp1;
}
;
	return null();
}

//QuadPackGeometry_obj::~QuadPackGeometry_obj() { }

Dynamic QuadPackGeometry_obj::__CreateEmpty() { return  new QuadPackGeometry_obj; }
hx::ObjectPtr< QuadPackGeometry_obj > QuadPackGeometry_obj::__new(Dynamic _options)
{  hx::ObjectPtr< QuadPackGeometry_obj > _result_ = new QuadPackGeometry_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic QuadPackGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuadPackGeometry_obj > _result_ = new QuadPackGeometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void QuadPackGeometry_obj::clear( ){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","clear",0x1f866bae,"phoenix.geometry.QuadPackGeometry.clear","phoenix/geometry/QuadPackGeometry.hx",57,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		::haxe::ds::IntMap tmp = this->quads;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp1);  __it->hasNext(); ){
			int q = __it->next();
			{
				HX_STACK_LINE(60)
				int tmp2 = q;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(60)
				this->quad_remove(tmp2);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(QuadPackGeometry_obj,clear,(void))

int QuadPackGeometry_obj::quad_add( Dynamic _options){
	HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_add",0xb0962fe8,"phoenix.geometry.QuadPackGeometry.quad_add","phoenix/geometry/QuadPackGeometry.hx",65,0xc786266f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_options,"_options")
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		bool tmp = (_options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		if ((tmp)){
			HX_STACK_LINE(67)
			_options->__FieldRef(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")) = true;
		}
		HX_STACK_LINE(67)
		_options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );
	}
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		bool tmp = (_options->__Field(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		if ((tmp)){
			HX_STACK_LINE(68)
			_options->__FieldRef(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02")) = false;
		}
		HX_STACK_LINE(68)
		_options->__Field(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"), hx::paccDynamic );
	}
	HX_STACK_LINE(69)
	{
		HX_STACK_LINE(69)
		bool tmp = (_options->__Field(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		if ((tmp)){
			HX_STACK_LINE(69)
			_options->__FieldRef(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02")) = false;
		}
		HX_STACK_LINE(69)
		_options->__Field(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"), hx::paccDynamic );
	}
	HX_STACK_LINE(71)
	::luxe::utils::Utils tmp = ::Luxe_obj::utils;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	int tmp1 = tmp->uniquehash();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	int _uid = tmp1;		HX_STACK_VAR(_uid,"_uid");
	HX_STACK_LINE(74)
	::phoenix::Vector tmp2 = ::phoenix::Vector_obj::__new(_options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),_options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	::phoenix::Color tmp3 = _options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(74)
	::phoenix::geometry::Vertex tmp4 = ::phoenix::geometry::Vertex_obj::__new(tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(74)
	::phoenix::geometry::Vertex vert0 = tmp4;		HX_STACK_VAR(vert0,"vert0");
	HX_STACK_LINE(75)
	Float tmp5 = (_options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ) + _options->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(75)
	Float tmp6 = _options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(75)
	::phoenix::Vector tmp7 = ::phoenix::Vector_obj::__new(tmp5,tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(75)
	::phoenix::Color tmp8 = _options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(75)
	::phoenix::geometry::Vertex tmp9 = ::phoenix::geometry::Vertex_obj::__new(tmp7,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(75)
	::phoenix::geometry::Vertex vert1 = tmp9;		HX_STACK_VAR(vert1,"vert1");
	HX_STACK_LINE(76)
	Float tmp10 = (_options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ) + _options->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(76)
	Float tmp11 = (_options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ) + _options->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(76)
	::phoenix::Vector tmp12 = ::phoenix::Vector_obj::__new(tmp10,tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(76)
	::phoenix::Color tmp13 = _options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(76)
	::phoenix::geometry::Vertex tmp14 = ::phoenix::geometry::Vertex_obj::__new(tmp12,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(76)
	::phoenix::geometry::Vertex vert2 = tmp14;		HX_STACK_VAR(vert2,"vert2");
	HX_STACK_LINE(79)
	Float tmp15 = _options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(79)
	Float tmp16 = (_options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ) + _options->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(79)
	::phoenix::Vector tmp17 = ::phoenix::Vector_obj::__new(tmp15,tmp16,null(),null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(79)
	::phoenix::Color tmp18 = _options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(79)
	::phoenix::geometry::Vertex tmp19 = ::phoenix::geometry::Vertex_obj::__new(tmp17,tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(79)
	::phoenix::geometry::Vertex vert3 = tmp19;		HX_STACK_VAR(vert3,"vert3");
	HX_STACK_LINE(80)
	::phoenix::Vector tmp20 = ::phoenix::Vector_obj::__new(_options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),_options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ),null(),null());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(80)
	::phoenix::Color tmp21 = _options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(80)
	::phoenix::geometry::Vertex tmp22 = ::phoenix::geometry::Vertex_obj::__new(tmp20,tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(80)
	::phoenix::geometry::Vertex vert4 = tmp22;		HX_STACK_VAR(vert4,"vert4");
	HX_STACK_LINE(81)
	Float tmp23 = (_options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ) + _options->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(81)
	Float tmp24 = (_options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ) + _options->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(81)
	::phoenix::Vector tmp25 = ::phoenix::Vector_obj::__new(tmp23,tmp24,null(),null());		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(81)
	::phoenix::Color tmp26 = _options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(81)
	::phoenix::geometry::Vertex tmp27 = ::phoenix::geometry::Vertex_obj::__new(tmp25,tmp26,null());		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(81)
	::phoenix::geometry::Vertex vert5 = tmp27;		HX_STACK_VAR(vert5,"vert5");
	HX_STACK_LINE(84)
	::phoenix::geometry::Vertex tmp28 = vert0;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(84)
	this->add(tmp28);
	HX_STACK_LINE(86)
	::phoenix::geometry::Vertex tmp29 = vert1;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(86)
	this->add(tmp29);
	HX_STACK_LINE(88)
	::phoenix::geometry::Vertex tmp30 = vert2;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(88)
	this->add(tmp30);
	HX_STACK_LINE(90)
	::phoenix::geometry::Vertex tmp31 = vert3;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(90)
	this->add(tmp31);
	HX_STACK_LINE(92)
	::phoenix::geometry::Vertex tmp32 = vert4;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(92)
	this->add(tmp32);
	HX_STACK_LINE(94)
	::phoenix::geometry::Vertex tmp33 = vert5;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(94)
	this->add(tmp33);
	HX_STACK_LINE(98)
	int tmp34 = _uid;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(100)
	Dynamic tmp35 = _options->__Field(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(101)
	Dynamic tmp36 = _options->__Field(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(102)
	Dynamic tmp37 = _options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(103)
	::phoenix::Rectangle tmp38 = ::phoenix::Rectangle_obj::__new((int)0,(int)0,(int)1,(int)1);		HX_STACK_VAR(tmp38,"tmp38");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &tmp36,::phoenix::Rectangle &tmp38,int &tmp34,Dynamic &tmp37,Dynamic &tmp35){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/geometry/QuadPackGeometry.hx",97,0xc786266f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("uid","\x90","\x23","\x59","\x00") , tmp34,false);
				__result->Add(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34") , Array_obj< ::Dynamic >::__new(),false);
				__result->Add(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02") , tmp35,false);
				__result->Add(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02") , tmp36,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp37,false);
				__result->Add(HX_HCSTRING("_uv_cache","\x03","\xbe","\x84","\xd3") , tmp38,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(97)
	Dynamic tmp39 = _Function_1_1::Block(tmp36,tmp38,tmp34,tmp37,tmp35);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(97)
	Dynamic _quad = tmp39;		HX_STACK_VAR(_quad,"_quad");
	HX_STACK_LINE(106)
	::phoenix::geometry::Vertex tmp40 = vert0;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(106)
	_quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp40);
	HX_STACK_LINE(107)
	::phoenix::geometry::Vertex tmp41 = vert1;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(107)
	_quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp41);
	HX_STACK_LINE(108)
	::phoenix::geometry::Vertex tmp42 = vert2;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(108)
	_quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp42);
	HX_STACK_LINE(109)
	::phoenix::geometry::Vertex tmp43 = vert3;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(109)
	_quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp43);
	HX_STACK_LINE(110)
	::phoenix::geometry::Vertex tmp44 = vert4;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(110)
	_quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp44);
	HX_STACK_LINE(111)
	::phoenix::geometry::Vertex tmp45 = vert5;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(111)
	_quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp45);
	HX_STACK_LINE(113)
	::haxe::ds::IntMap tmp46 = this->quads;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(113)
	int tmp47 = _uid;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(113)
	Dynamic tmp48 = _quad;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(113)
	tmp46->set(tmp47,tmp48);
	HX_STACK_LINE(115)
	bool tmp49 = (_options->__Field(HX_HCSTRING("uv","\x61","\x66","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(115)
	if ((tmp49)){
		HX_STACK_LINE(116)
		int tmp50 = _uid;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(116)
		::phoenix::Rectangle tmp51 = _options->__Field(HX_HCSTRING("uv","\x61","\x66","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(116)
		this->quad_uv(tmp50,tmp51);
	}
	HX_STACK_LINE(120)
	this->set_dirty(true);
	HX_STACK_LINE(122)
	int tmp50 = _uid;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(122)
	return tmp50;
}


HX_DEFINE_DYNAMIC_FUNC1(QuadPackGeometry_obj,quad_add,return )

Void QuadPackGeometry_obj::quad_remove( int _quad_id){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_remove",0x6149f4dd,"phoenix.geometry.QuadPackGeometry.quad_remove","phoenix/geometry/QuadPackGeometry.hx",126,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_quad_id,"_quad_id")
		HX_STACK_LINE(128)
		::haxe::ds::IntMap tmp = this->quads;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(128)
		int tmp1 = _quad_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(128)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(128)
		Dynamic _quad = tmp2;		HX_STACK_VAR(_quad,"_quad");
		HX_STACK_LINE(130)
		bool tmp3 = (_quad != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		if ((tmp3)){
			HX_STACK_LINE(132)
			::phoenix::geometry::Vertex tmp4 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(132)
			this->remove(tmp4);
			HX_STACK_LINE(133)
			::phoenix::geometry::Vertex tmp5 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(133)
			this->remove(tmp5);
			HX_STACK_LINE(134)
			::phoenix::geometry::Vertex tmp6 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)2);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(134)
			this->remove(tmp6);
			HX_STACK_LINE(135)
			::phoenix::geometry::Vertex tmp7 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)3);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(135)
			this->remove(tmp7);
			HX_STACK_LINE(136)
			::phoenix::geometry::Vertex tmp8 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)4);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(136)
			this->remove(tmp8);
			HX_STACK_LINE(137)
			::phoenix::geometry::Vertex tmp9 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)5);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(137)
			this->remove(tmp9);
			HX_STACK_LINE(139)
			::haxe::ds::IntMap tmp10 = this->quads;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(139)
			int tmp11 = _quad_id;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(139)
			tmp10->remove(tmp11);
			HX_STACK_LINE(142)
			this->set_dirty(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(QuadPackGeometry_obj,quad_remove,(void))

Void QuadPackGeometry_obj::quad_visible( int _quad_id,bool visible){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_visible",0x6f90a5b9,"phoenix.geometry.QuadPackGeometry.quad_visible","phoenix/geometry/QuadPackGeometry.hx",148,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_quad_id,"_quad_id")
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(150)
		::haxe::ds::IntMap tmp = this->quads;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		int tmp1 = _quad_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		Dynamic _quad = tmp2;		HX_STACK_VAR(_quad,"_quad");
		HX_STACK_LINE(152)
		bool tmp3 = (_quad != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(152)
		if ((tmp3)){
			HX_STACK_LINE(155)
			bool tmp4 = visible;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(155)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(155)
			if ((tmp4)){
				HX_STACK_LINE(155)
				bool tmp6 = _quad->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(155)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(155)
				tmp5 = !(tmp7);
			}
			else{
				HX_STACK_LINE(155)
				tmp5 = false;
			}
			HX_STACK_LINE(155)
			if ((tmp5)){
				HX_STACK_LINE(157)
				_quad->__FieldRef(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")) = false;
				HX_STACK_LINE(159)
				::phoenix::geometry::Vertex tmp6 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(159)
				this->add(tmp6);
				HX_STACK_LINE(160)
				::phoenix::geometry::Vertex tmp7 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(160)
				this->add(tmp7);
				HX_STACK_LINE(161)
				::phoenix::geometry::Vertex tmp8 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)2);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(161)
				this->add(tmp8);
				HX_STACK_LINE(162)
				::phoenix::geometry::Vertex tmp9 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)3);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(162)
				this->add(tmp9);
				HX_STACK_LINE(163)
				::phoenix::geometry::Vertex tmp10 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)4);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(163)
				this->add(tmp10);
				HX_STACK_LINE(164)
				::phoenix::geometry::Vertex tmp11 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)5);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(164)
				this->add(tmp11);
			}
			else{
				HX_STACK_LINE(166)
				bool tmp6 = visible;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(166)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(166)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(166)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(166)
				if ((tmp8)){
					HX_STACK_LINE(166)
					tmp9 = _quad->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );
				}
				else{
					HX_STACK_LINE(166)
					tmp9 = false;
				}
				HX_STACK_LINE(166)
				if ((tmp9)){
					HX_STACK_LINE(168)
					_quad->__FieldRef(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")) = false;
					HX_STACK_LINE(170)
					::phoenix::geometry::Vertex tmp10 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					this->remove(tmp10);
					HX_STACK_LINE(171)
					::phoenix::geometry::Vertex tmp11 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(171)
					this->remove(tmp11);
					HX_STACK_LINE(172)
					::phoenix::geometry::Vertex tmp12 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)2);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					this->remove(tmp12);
					HX_STACK_LINE(173)
					::phoenix::geometry::Vertex tmp13 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)3);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(173)
					this->remove(tmp13);
					HX_STACK_LINE(174)
					::phoenix::geometry::Vertex tmp14 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)4);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(174)
					this->remove(tmp14);
					HX_STACK_LINE(175)
					::phoenix::geometry::Vertex tmp15 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)5);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(175)
					this->remove(tmp15);
				}
			}
			HX_STACK_LINE(180)
			this->set_dirty(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPackGeometry_obj,quad_visible,(void))

Void QuadPackGeometry_obj::quad_resize( int _quad_id,::phoenix::Rectangle _size){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_resize",0x653cb28d,"phoenix.geometry.QuadPackGeometry.quad_resize","phoenix/geometry/QuadPackGeometry.hx",186,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_quad_id,"_quad_id")
		HX_STACK_ARG(_size,"_size")
		HX_STACK_LINE(188)
		::haxe::ds::IntMap tmp = this->quads;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		int tmp1 = _quad_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(188)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(188)
		Dynamic _quad = tmp2;		HX_STACK_VAR(_quad,"_quad");
		HX_STACK_LINE(190)
		bool tmp3 = (_quad != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		if ((tmp3)){
			HX_STACK_LINE(192)
			::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new(_size->x,_size->y,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(192)
			::phoenix::geometry::Vertex tmp5 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(192)
			tmp5->pos = tmp4;
			HX_STACK_LINE(193)
			Float tmp6 = (_size->x + _size->w);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(193)
			Float tmp7 = _size->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(193)
			::phoenix::Vector tmp8 = ::phoenix::Vector_obj::__new(tmp6,tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(193)
			::phoenix::geometry::Vertex tmp9 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(193)
			tmp9->pos = tmp8;
			HX_STACK_LINE(194)
			Float tmp10 = (_size->x + _size->w);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(194)
			Float tmp11 = (_size->y + _size->h);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(194)
			::phoenix::Vector tmp12 = ::phoenix::Vector_obj::__new(tmp10,tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(194)
			::phoenix::geometry::Vertex tmp13 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(194)
			tmp13->pos = tmp12;
			HX_STACK_LINE(196)
			Float tmp14 = _size->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(196)
			Float tmp15 = (_size->y + _size->h);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(196)
			::phoenix::Vector tmp16 = ::phoenix::Vector_obj::__new(tmp14,tmp15,null(),null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(196)
			::phoenix::geometry::Vertex tmp17 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)3);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(196)
			tmp17->pos = tmp16;
			HX_STACK_LINE(197)
			::phoenix::Vector tmp18 = ::phoenix::Vector_obj::__new(_size->x,_size->y,null(),null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(197)
			::phoenix::geometry::Vertex tmp19 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)4);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(197)
			tmp19->pos = tmp18;
			HX_STACK_LINE(198)
			Float tmp20 = (_size->x + _size->w);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(198)
			Float tmp21 = (_size->y + _size->h);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(198)
			::phoenix::Vector tmp22 = ::phoenix::Vector_obj::__new(tmp20,tmp21,null(),null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(198)
			::phoenix::geometry::Vertex tmp23 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)5);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(198)
			tmp23->pos = tmp22;
			HX_STACK_LINE(201)
			this->set_dirty(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPackGeometry_obj,quad_resize,(void))

Void QuadPackGeometry_obj::quad_pos( int _quad_id,::phoenix::Vector _p){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_pos",0xb0a19b5b,"phoenix.geometry.QuadPackGeometry.quad_pos","phoenix/geometry/QuadPackGeometry.hx",207,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_quad_id,"_quad_id")
		HX_STACK_ARG(_p,"_p")
		HX_STACK_LINE(209)
		::haxe::ds::IntMap tmp = this->quads;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		int tmp1 = _quad_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(209)
		Dynamic _quad = tmp2;		HX_STACK_VAR(_quad,"_quad");
		HX_STACK_LINE(211)
		bool tmp3 = (_quad != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(211)
		if ((tmp3)){
			HX_STACK_LINE(213)
			Float tmp4 = _p->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(213)
			::phoenix::geometry::Vertex tmp5 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(213)
			Float tmp6 = tmp5->pos->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(213)
			Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(213)
			Float _diffx = tmp7;		HX_STACK_VAR(_diffx,"_diffx");
			HX_STACK_LINE(214)
			Float tmp8 = _p->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(214)
			::phoenix::geometry::Vertex tmp9 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(214)
			Float tmp10 = tmp9->pos->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(214)
			Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(214)
			Float _diffy = tmp11;		HX_STACK_VAR(_diffy,"_diffy");
			HX_STACK_LINE(216)
			{
				HX_STACK_LINE(216)
				::phoenix::geometry::Vertex tmp12 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(216)
				::phoenix::Vector _g = tmp12->pos;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(216)
				{
					HX_STACK_LINE(216)
					Float tmp13 = (_g->x + _diffx);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(216)
					Float _x = tmp13;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(216)
					_g->x = _x;
					HX_STACK_LINE(216)
					bool tmp14 = _g->_construct;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(216)
					if ((tmp14)){
						HX_STACK_LINE(216)
						_g->x;
					}
					else{
						HX_STACK_LINE(216)
						bool tmp15 = (_g->listen_x != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(216)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(216)
						if ((tmp15)){
							HX_STACK_LINE(216)
							bool tmp17 = _g->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(216)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(216)
							tmp16 = !(tmp18);
						}
						else{
							HX_STACK_LINE(216)
							tmp16 = false;
						}
						HX_STACK_LINE(216)
						if ((tmp16)){
							HX_STACK_LINE(216)
							Float tmp17 = _x;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(216)
							_g->listen_x(tmp17);
						}
						HX_STACK_LINE(216)
						_g->x;
					}
				}
			}
			HX_STACK_LINE(217)
			{
				HX_STACK_LINE(217)
				::phoenix::geometry::Vertex tmp12 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(217)
				::phoenix::Vector _g = tmp12->pos;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(217)
				{
					HX_STACK_LINE(217)
					Float tmp13 = (_g->y + _diffy);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(217)
					Float _y = tmp13;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(217)
					_g->y = _y;
					HX_STACK_LINE(217)
					bool tmp14 = _g->_construct;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(217)
					if ((tmp14)){
						HX_STACK_LINE(217)
						_g->y;
					}
					else{
						HX_STACK_LINE(217)
						bool tmp15 = (_g->listen_y != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(217)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(217)
						if ((tmp15)){
							HX_STACK_LINE(217)
							bool tmp17 = _g->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(217)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(217)
							tmp16 = !(tmp18);
						}
						else{
							HX_STACK_LINE(217)
							tmp16 = false;
						}
						HX_STACK_LINE(217)
						if ((tmp16)){
							HX_STACK_LINE(217)
							Float tmp17 = _y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(217)
							_g->listen_y(tmp17);
						}
						HX_STACK_LINE(217)
						_g->y;
					}
				}
			}
			HX_STACK_LINE(219)
			{
				HX_STACK_LINE(219)
				::phoenix::geometry::Vertex tmp12 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(219)
				::phoenix::Vector _g = tmp12->pos;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(219)
				{
					HX_STACK_LINE(219)
					Float tmp13 = (_g->x + _diffx);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(219)
					Float _x = tmp13;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(219)
					_g->x = _x;
					HX_STACK_LINE(219)
					bool tmp14 = _g->_construct;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(219)
					if ((tmp14)){
						HX_STACK_LINE(219)
						_g->x;
					}
					else{
						HX_STACK_LINE(219)
						bool tmp15 = (_g->listen_x != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(219)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(219)
						if ((tmp15)){
							HX_STACK_LINE(219)
							bool tmp17 = _g->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(219)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(219)
							tmp16 = !(tmp18);
						}
						else{
							HX_STACK_LINE(219)
							tmp16 = false;
						}
						HX_STACK_LINE(219)
						if ((tmp16)){
							HX_STACK_LINE(219)
							Float tmp17 = _x;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(219)
							_g->listen_x(tmp17);
						}
						HX_STACK_LINE(219)
						_g->x;
					}
				}
			}
			HX_STACK_LINE(220)
			{
				HX_STACK_LINE(220)
				::phoenix::geometry::Vertex tmp12 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(220)
				::phoenix::Vector _g = tmp12->pos;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(220)
				{
					HX_STACK_LINE(220)
					Float tmp13 = (_g->y + _diffy);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(220)
					Float _y = tmp13;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(220)
					_g->y = _y;
					HX_STACK_LINE(220)
					bool tmp14 = _g->_construct;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(220)
					if ((tmp14)){
						HX_STACK_LINE(220)
						_g->y;
					}
					else{
						HX_STACK_LINE(220)
						bool tmp15 = (_g->listen_y != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(220)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(220)
						if ((tmp15)){
							HX_STACK_LINE(220)
							bool tmp17 = _g->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(220)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(220)
							tmp16 = !(tmp18);
						}
						else{
							HX_STACK_LINE(220)
							tmp16 = false;
						}
						HX_STACK_LINE(220)
						if ((tmp16)){
							HX_STACK_LINE(220)
							Float tmp17 = _y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(220)
							_g->listen_y(tmp17);
						}
						HX_STACK_LINE(220)
						_g->y;
					}
				}
			}
			HX_STACK_LINE(222)
			{
				HX_STACK_LINE(222)
				::phoenix::geometry::Vertex tmp12 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(222)
				::phoenix::Vector _g = tmp12->pos;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(222)
				{
					HX_STACK_LINE(222)
					Float tmp13 = (_g->x + _diffx);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(222)
					Float _x = tmp13;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(222)
					_g->x = _x;
					HX_STACK_LINE(222)
					bool tmp14 = _g->_construct;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(222)
					if ((tmp14)){
						HX_STACK_LINE(222)
						_g->x;
					}
					else{
						HX_STACK_LINE(222)
						bool tmp15 = (_g->listen_x != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(222)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(222)
						if ((tmp15)){
							HX_STACK_LINE(222)
							bool tmp17 = _g->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(222)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(222)
							tmp16 = !(tmp18);
						}
						else{
							HX_STACK_LINE(222)
							tmp16 = false;
						}
						HX_STACK_LINE(222)
						if ((tmp16)){
							HX_STACK_LINE(222)
							Float tmp17 = _x;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(222)
							_g->listen_x(tmp17);
						}
						HX_STACK_LINE(222)
						_g->x;
					}
				}
			}
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				::phoenix::geometry::Vertex tmp12 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(223)
				::phoenix::Vector _g = tmp12->pos;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					Float tmp13 = (_g->y + _diffy);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(223)
					Float _y = tmp13;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(223)
					_g->y = _y;
					HX_STACK_LINE(223)
					bool tmp14 = _g->_construct;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(223)
					if ((tmp14)){
						HX_STACK_LINE(223)
						_g->y;
					}
					else{
						HX_STACK_LINE(223)
						bool tmp15 = (_g->listen_y != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(223)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(223)
						if ((tmp15)){
							HX_STACK_LINE(223)
							bool tmp17 = _g->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(223)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(223)
							tmp16 = !(tmp18);
						}
						else{
							HX_STACK_LINE(223)
							tmp16 = false;
						}
						HX_STACK_LINE(223)
						if ((tmp16)){
							HX_STACK_LINE(223)
							Float tmp17 = _y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(223)
							_g->listen_y(tmp17);
						}
						HX_STACK_LINE(223)
						_g->y;
					}
				}
			}
			HX_STACK_LINE(225)
			{
				HX_STACK_LINE(225)
				::phoenix::geometry::Vertex tmp12 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)3);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(225)
				::phoenix::Vector _g = tmp12->pos;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(225)
				{
					HX_STACK_LINE(225)
					Float tmp13 = (_g->x + _diffx);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(225)
					Float _x = tmp13;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(225)
					_g->x = _x;
					HX_STACK_LINE(225)
					bool tmp14 = _g->_construct;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(225)
					if ((tmp14)){
						HX_STACK_LINE(225)
						_g->x;
					}
					else{
						HX_STACK_LINE(225)
						bool tmp15 = (_g->listen_x != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(225)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(225)
						if ((tmp15)){
							HX_STACK_LINE(225)
							bool tmp17 = _g->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(225)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(225)
							tmp16 = !(tmp18);
						}
						else{
							HX_STACK_LINE(225)
							tmp16 = false;
						}
						HX_STACK_LINE(225)
						if ((tmp16)){
							HX_STACK_LINE(225)
							Float tmp17 = _x;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(225)
							_g->listen_x(tmp17);
						}
						HX_STACK_LINE(225)
						_g->x;
					}
				}
			}
			HX_STACK_LINE(226)
			{
				HX_STACK_LINE(226)
				::phoenix::geometry::Vertex tmp12 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)3);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(226)
				::phoenix::Vector _g = tmp12->pos;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(226)
				{
					HX_STACK_LINE(226)
					Float tmp13 = (_g->y + _diffy);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(226)
					Float _y = tmp13;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(226)
					_g->y = _y;
					HX_STACK_LINE(226)
					bool tmp14 = _g->_construct;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(226)
					if ((tmp14)){
						HX_STACK_LINE(226)
						_g->y;
					}
					else{
						HX_STACK_LINE(226)
						bool tmp15 = (_g->listen_y != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(226)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(226)
						if ((tmp15)){
							HX_STACK_LINE(226)
							bool tmp17 = _g->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(226)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(226)
							tmp16 = !(tmp18);
						}
						else{
							HX_STACK_LINE(226)
							tmp16 = false;
						}
						HX_STACK_LINE(226)
						if ((tmp16)){
							HX_STACK_LINE(226)
							Float tmp17 = _y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(226)
							_g->listen_y(tmp17);
						}
						HX_STACK_LINE(226)
						_g->y;
					}
				}
			}
			HX_STACK_LINE(228)
			{
				HX_STACK_LINE(228)
				::phoenix::geometry::Vertex tmp12 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)4);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(228)
				::phoenix::Vector _g = tmp12->pos;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(228)
				{
					HX_STACK_LINE(228)
					Float tmp13 = (_g->x + _diffx);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(228)
					Float _x = tmp13;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(228)
					_g->x = _x;
					HX_STACK_LINE(228)
					bool tmp14 = _g->_construct;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(228)
					if ((tmp14)){
						HX_STACK_LINE(228)
						_g->x;
					}
					else{
						HX_STACK_LINE(228)
						bool tmp15 = (_g->listen_x != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(228)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(228)
						if ((tmp15)){
							HX_STACK_LINE(228)
							bool tmp17 = _g->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(228)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(228)
							tmp16 = !(tmp18);
						}
						else{
							HX_STACK_LINE(228)
							tmp16 = false;
						}
						HX_STACK_LINE(228)
						if ((tmp16)){
							HX_STACK_LINE(228)
							Float tmp17 = _x;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(228)
							_g->listen_x(tmp17);
						}
						HX_STACK_LINE(228)
						_g->x;
					}
				}
			}
			HX_STACK_LINE(229)
			{
				HX_STACK_LINE(229)
				::phoenix::geometry::Vertex tmp12 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)4);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(229)
				::phoenix::Vector _g = tmp12->pos;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(229)
				{
					HX_STACK_LINE(229)
					Float tmp13 = (_g->y + _diffy);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(229)
					Float _y = tmp13;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(229)
					_g->y = _y;
					HX_STACK_LINE(229)
					bool tmp14 = _g->_construct;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(229)
					if ((tmp14)){
						HX_STACK_LINE(229)
						_g->y;
					}
					else{
						HX_STACK_LINE(229)
						bool tmp15 = (_g->listen_y != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(229)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(229)
						if ((tmp15)){
							HX_STACK_LINE(229)
							bool tmp17 = _g->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(229)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(229)
							tmp16 = !(tmp18);
						}
						else{
							HX_STACK_LINE(229)
							tmp16 = false;
						}
						HX_STACK_LINE(229)
						if ((tmp16)){
							HX_STACK_LINE(229)
							Float tmp17 = _y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(229)
							_g->listen_y(tmp17);
						}
						HX_STACK_LINE(229)
						_g->y;
					}
				}
			}
			HX_STACK_LINE(231)
			{
				HX_STACK_LINE(231)
				::phoenix::geometry::Vertex tmp12 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)5);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(231)
				::phoenix::Vector _g = tmp12->pos;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(231)
				{
					HX_STACK_LINE(231)
					Float tmp13 = (_g->x + _diffx);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(231)
					Float _x = tmp13;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(231)
					_g->x = _x;
					HX_STACK_LINE(231)
					bool tmp14 = _g->_construct;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(231)
					if ((tmp14)){
						HX_STACK_LINE(231)
						_g->x;
					}
					else{
						HX_STACK_LINE(231)
						bool tmp15 = (_g->listen_x != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(231)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(231)
						if ((tmp15)){
							HX_STACK_LINE(231)
							bool tmp17 = _g->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(231)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(231)
							tmp16 = !(tmp18);
						}
						else{
							HX_STACK_LINE(231)
							tmp16 = false;
						}
						HX_STACK_LINE(231)
						if ((tmp16)){
							HX_STACK_LINE(231)
							Float tmp17 = _x;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(231)
							_g->listen_x(tmp17);
						}
						HX_STACK_LINE(231)
						_g->x;
					}
				}
			}
			HX_STACK_LINE(232)
			{
				HX_STACK_LINE(232)
				::phoenix::geometry::Vertex tmp12 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)5);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(232)
				::phoenix::Vector _g = tmp12->pos;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(232)
				{
					HX_STACK_LINE(232)
					Float tmp13 = (_g->y + _diffy);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(232)
					Float _y = tmp13;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(232)
					_g->y = _y;
					HX_STACK_LINE(232)
					bool tmp14 = _g->_construct;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(232)
					if ((tmp14)){
						HX_STACK_LINE(232)
						_g->y;
					}
					else{
						HX_STACK_LINE(232)
						bool tmp15 = (_g->listen_y != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(232)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(232)
						if ((tmp15)){
							HX_STACK_LINE(232)
							bool tmp17 = _g->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(232)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(232)
							tmp16 = !(tmp18);
						}
						else{
							HX_STACK_LINE(232)
							tmp16 = false;
						}
						HX_STACK_LINE(232)
						if ((tmp16)){
							HX_STACK_LINE(232)
							Float tmp17 = _y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(232)
							_g->listen_y(tmp17);
						}
						HX_STACK_LINE(232)
						_g->y;
					}
				}
			}
			HX_STACK_LINE(235)
			this->set_dirty(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPackGeometry_obj,quad_pos,(void))

Void QuadPackGeometry_obj::quad_color( int _quad_id,::phoenix::Color _c){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_color",0xd488eeea,"phoenix.geometry.QuadPackGeometry.quad_color","phoenix/geometry/QuadPackGeometry.hx",241,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_quad_id,"_quad_id")
		HX_STACK_ARG(_c,"_c")
		HX_STACK_LINE(243)
		::haxe::ds::IntMap tmp = this->quads;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(243)
		int tmp1 = _quad_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(243)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(243)
		Dynamic _quad = tmp2;		HX_STACK_VAR(_quad,"_quad");
		HX_STACK_LINE(245)
		bool tmp3 = (_quad != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(245)
		if ((tmp3)){
			HX_STACK_LINE(246)
			::phoenix::geometry::Vertex tmp4 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(246)
			tmp4->color = _c;
			HX_STACK_LINE(247)
			::phoenix::geometry::Vertex tmp5 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(247)
			tmp5->color = _c;
			HX_STACK_LINE(248)
			::phoenix::geometry::Vertex tmp6 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)2);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(248)
			tmp6->color = _c;
			HX_STACK_LINE(249)
			::phoenix::geometry::Vertex tmp7 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)3);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(249)
			tmp7->color = _c;
			HX_STACK_LINE(250)
			::phoenix::geometry::Vertex tmp8 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)4);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(250)
			tmp8->color = _c;
			HX_STACK_LINE(251)
			::phoenix::geometry::Vertex tmp9 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)5);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(251)
			tmp9->color = _c;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPackGeometry_obj,quad_color,(void))

Void QuadPackGeometry_obj::quad_alpha( int _quad_id,Float _a){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_alpha",0xabc324e5,"phoenix.geometry.QuadPackGeometry.quad_alpha","phoenix/geometry/QuadPackGeometry.hx",256,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_quad_id,"_quad_id")
		HX_STACK_ARG(_a,"_a")
		HX_STACK_LINE(258)
		::haxe::ds::IntMap tmp = this->quads;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		int tmp1 = _quad_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(258)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(258)
		Dynamic _quad = tmp2;		HX_STACK_VAR(_quad,"_quad");
		HX_STACK_LINE(260)
		bool tmp3 = (_quad != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(260)
		if ((tmp3)){
			HX_STACK_LINE(261)
			::phoenix::geometry::Vertex tmp4 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(261)
			tmp4->color->a = _a;
			HX_STACK_LINE(262)
			::phoenix::geometry::Vertex tmp5 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(262)
			tmp5->color->a = _a;
			HX_STACK_LINE(263)
			::phoenix::geometry::Vertex tmp6 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)2);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(263)
			tmp6->color->a = _a;
			HX_STACK_LINE(264)
			::phoenix::geometry::Vertex tmp7 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)3);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(264)
			tmp7->color->a = _a;
			HX_STACK_LINE(265)
			::phoenix::geometry::Vertex tmp8 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)4);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(265)
			tmp8->color->a = _a;
			HX_STACK_LINE(266)
			::phoenix::geometry::Vertex tmp9 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)5);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(266)
			tmp9->color->a = _a;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPackGeometry_obj,quad_alpha,(void))

Void QuadPackGeometry_obj::quad_uv_space( int _quad_id,::phoenix::Rectangle _uv){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_uv_space",0xde7c2a01,"phoenix.geometry.QuadPackGeometry.quad_uv_space","phoenix/geometry/QuadPackGeometry.hx",271,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_quad_id,"_quad_id")
		HX_STACK_ARG(_uv,"_uv")
		HX_STACK_LINE(273)
		::haxe::ds::IntMap tmp = this->quads;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		int tmp1 = _quad_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(273)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(273)
		Dynamic _quad = tmp2;		HX_STACK_VAR(_quad,"_quad");
		HX_STACK_LINE(275)
		bool tmp3 = (_quad != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(275)
		if ((tmp3)){
			HX_STACK_LINE(277)
			bool flipx = _quad->__Field(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"), hx::paccDynamic );		HX_STACK_VAR(flipx,"flipx");
			HX_STACK_LINE(278)
			bool flipy = _quad->__Field(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"), hx::paccDynamic );		HX_STACK_VAR(flipy,"flipy");
			HX_STACK_LINE(281)
			Float sz_x = _uv->w;		HX_STACK_VAR(sz_x,"sz_x");
			HX_STACK_LINE(282)
			Float sz_y = _uv->h;		HX_STACK_VAR(sz_y,"sz_y");
			HX_STACK_LINE(285)
			Float tl_x = _uv->x;		HX_STACK_VAR(tl_x,"tl_x");
			HX_STACK_LINE(286)
			Float tl_y = _uv->y;		HX_STACK_VAR(tl_y,"tl_y");
			HX_STACK_LINE(289)
			Float tmp4 = tl_x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(289)
			Float tmp5 = tl_y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(289)
			Float tmp6 = sz_x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(289)
			Float tmp7 = sz_y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(289)
			_quad->__Field(HX_HCSTRING("_uv_cache","\x03","\xbe","\x84","\xd3"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp4,tmp5,tmp6,tmp7);
			HX_STACK_LINE(292)
			Float tmp8 = (tl_x + sz_x);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(292)
			Float tr_x = tmp8;		HX_STACK_VAR(tr_x,"tr_x");
			HX_STACK_LINE(293)
			Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
			HX_STACK_LINE(295)
			Float tmp9 = (tl_x + sz_x);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(295)
			Float br_x = tmp9;		HX_STACK_VAR(br_x,"br_x");
			HX_STACK_LINE(296)
			Float tmp10 = (tl_y + sz_y);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(296)
			Float br_y = tmp10;		HX_STACK_VAR(br_y,"br_y");
			HX_STACK_LINE(298)
			Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
			HX_STACK_LINE(299)
			Float tmp11 = (tl_y + sz_y);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(299)
			Float bl_y = tmp11;		HX_STACK_VAR(bl_y,"bl_y");
			HX_STACK_LINE(301)
			Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
			HX_STACK_LINE(302)
			Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
			HX_STACK_LINE(305)
			bool tmp12 = flipy;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(305)
			if ((tmp12)){
				HX_STACK_LINE(308)
				tmp_y = bl_y;
				HX_STACK_LINE(309)
				bl_y = tl_y;
				HX_STACK_LINE(310)
				tl_y = tmp_y;
				HX_STACK_LINE(313)
				tmp_y = br_y;
				HX_STACK_LINE(314)
				br_y = tr_y;
				HX_STACK_LINE(315)
				tr_y = tmp_y;
			}
			HX_STACK_LINE(320)
			bool tmp13 = flipx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(320)
			if ((tmp13)){
				HX_STACK_LINE(323)
				tmp_x = tr_x;
				HX_STACK_LINE(324)
				tr_x = tl_x;
				HX_STACK_LINE(325)
				tl_x = tmp_x;
				HX_STACK_LINE(328)
				tmp_x = br_x;
				HX_STACK_LINE(329)
				br_x = bl_x;
				HX_STACK_LINE(330)
				bl_x = tmp_x;
			}
			HX_STACK_LINE(334)
			{
				HX_STACK_LINE(334)
				::phoenix::geometry::Vertex tmp14 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(334)
				::phoenix::geometry::TextureCoord tmp15 = tmp14->uv->uv0;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(334)
				::phoenix::geometry::TextureCoord _this = tmp15;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(334)
				_this->u = tl_x;
				HX_STACK_LINE(334)
				_this->v = tl_y;
				HX_STACK_LINE(334)
				_this;
			}
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				::phoenix::geometry::Vertex tmp14 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(335)
				::phoenix::geometry::TextureCoord tmp15 = tmp14->uv->uv0;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(335)
				::phoenix::geometry::TextureCoord _this = tmp15;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(335)
				_this->u = tr_x;
				HX_STACK_LINE(335)
				_this->v = tr_y;
				HX_STACK_LINE(335)
				_this;
			}
			HX_STACK_LINE(336)
			{
				HX_STACK_LINE(336)
				::phoenix::geometry::Vertex tmp14 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)2);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(336)
				::phoenix::geometry::TextureCoord tmp15 = tmp14->uv->uv0;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(336)
				::phoenix::geometry::TextureCoord _this = tmp15;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(336)
				_this->u = br_x;
				HX_STACK_LINE(336)
				_this->v = br_y;
				HX_STACK_LINE(336)
				_this;
			}
			HX_STACK_LINE(338)
			{
				HX_STACK_LINE(338)
				::phoenix::geometry::Vertex tmp14 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)3);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(338)
				::phoenix::geometry::TextureCoord tmp15 = tmp14->uv->uv0;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(338)
				::phoenix::geometry::TextureCoord _this = tmp15;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(338)
				_this->u = bl_x;
				HX_STACK_LINE(338)
				_this->v = bl_y;
				HX_STACK_LINE(338)
				_this;
			}
			HX_STACK_LINE(339)
			{
				HX_STACK_LINE(339)
				::phoenix::geometry::Vertex tmp14 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)4);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(339)
				::phoenix::geometry::TextureCoord tmp15 = tmp14->uv->uv0;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(339)
				::phoenix::geometry::TextureCoord _this = tmp15;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(339)
				_this->u = tl_x;
				HX_STACK_LINE(339)
				_this->v = tl_y;
				HX_STACK_LINE(339)
				_this;
			}
			HX_STACK_LINE(340)
			{
				HX_STACK_LINE(340)
				::phoenix::geometry::Vertex tmp14 = _quad->__Field(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"), hx::paccDynamic )->__GetItem((int)5);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(340)
				::phoenix::geometry::TextureCoord tmp15 = tmp14->uv->uv0;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(340)
				::phoenix::geometry::TextureCoord _this = tmp15;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(340)
				_this->u = br_x;
				HX_STACK_LINE(340)
				_this->v = br_y;
				HX_STACK_LINE(340)
				_this;
			}
			HX_STACK_LINE(343)
			this->set_dirty(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPackGeometry_obj,quad_uv_space,(void))

Void QuadPackGeometry_obj::quad_uv( int _quad_id,::phoenix::Rectangle _uv){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_uv",0x72713e7a,"phoenix.geometry.QuadPackGeometry.quad_uv","phoenix/geometry/QuadPackGeometry.hx",349,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_quad_id,"_quad_id")
		HX_STACK_ARG(_uv,"_uv")
		HX_STACK_LINE(351)
		::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(351)
		::phoenix::Texture tmp1 = tmp->texture;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(351)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(351)
		if ((tmp2)){
			HX_STACK_LINE(352)
			Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("QuadPackGeometry.hx","\xcc","\x27","\x26","\x5e"),352,HX_HCSTRING("phoenix.geometry.QuadPackGeometry","\xcf","\x1b","\x1f","\x2e"),HX_HCSTRING("quad_uv","\x19","\xba","\xfa","\x3e"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(352)
			::haxe::Log_obj::trace(HX_HCSTRING("Warning : calling UV on a PackedQuad Geometry with null texture.","\x66","\x55","\x6c","\x54"),tmp3);
			HX_STACK_LINE(353)
			return null();
		}
		HX_STACK_LINE(356)
		Float tmp3 = _uv->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(356)
		::phoenix::geometry::GeometryState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(356)
		int tmp5 = tmp4->texture->width_actual;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(356)
		Float tmp6 = (Float(tmp3) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(356)
		Float tlx = tmp6;		HX_STACK_VAR(tlx,"tlx");
		HX_STACK_LINE(357)
		Float tmp7 = _uv->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(357)
		::phoenix::geometry::GeometryState tmp8 = this->state;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(357)
		int tmp9 = tmp8->texture->height_actual;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(357)
		Float tmp10 = (Float(tmp7) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(357)
		Float tly = tmp10;		HX_STACK_VAR(tly,"tly");
		HX_STACK_LINE(358)
		Float tmp11 = _uv->w;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(358)
		::phoenix::geometry::GeometryState tmp12 = this->state;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(358)
		int tmp13 = tmp12->texture->width_actual;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(358)
		Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(358)
		Float szx = tmp14;		HX_STACK_VAR(szx,"szx");
		HX_STACK_LINE(359)
		Float tmp15 = _uv->h;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(359)
		::phoenix::geometry::GeometryState tmp16 = this->state;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(359)
		int tmp17 = tmp16->texture->height_actual;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(359)
		Float tmp18 = (Float(tmp15) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(359)
		Float szy = tmp18;		HX_STACK_VAR(szy,"szy");
		HX_STACK_LINE(361)
		int tmp19 = _quad_id;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(361)
		::phoenix::Rectangle tmp20 = ::phoenix::Rectangle_obj::__new(tlx,tly,szx,szy);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(361)
		this->quad_uv_space(tmp19,tmp20);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPackGeometry_obj,quad_uv,(void))

Void QuadPackGeometry_obj::quad_flipx( int _quad_id,bool _flip){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_flipx",0x8cbec2b2,"phoenix.geometry.QuadPackGeometry.quad_flipx","phoenix/geometry/QuadPackGeometry.hx",365,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_quad_id,"_quad_id")
		HX_STACK_ARG(_flip,"_flip")
		HX_STACK_LINE(367)
		::haxe::ds::IntMap tmp = this->quads;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(367)
		int tmp1 = _quad_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(367)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(367)
		Dynamic _quad = tmp2;		HX_STACK_VAR(_quad,"_quad");
		HX_STACK_LINE(369)
		bool tmp3 = (_quad != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(369)
		if ((tmp3)){
			HX_STACK_LINE(370)
			_quad->__FieldRef(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02")) = _flip;
			HX_STACK_LINE(371)
			int tmp4 = _quad_id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(371)
			::phoenix::Rectangle tmp5 = _quad->__Field(HX_HCSTRING("_uv_cache","\x03","\xbe","\x84","\xd3"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(371)
			this->quad_uv_space(tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPackGeometry_obj,quad_flipx,(void))

Void QuadPackGeometry_obj::quad_flipy( int _quad_id,bool _flip){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_flipy",0x8cbec2b3,"phoenix.geometry.QuadPackGeometry.quad_flipy","phoenix/geometry/QuadPackGeometry.hx",376,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_quad_id,"_quad_id")
		HX_STACK_ARG(_flip,"_flip")
		HX_STACK_LINE(378)
		::haxe::ds::IntMap tmp = this->quads;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(378)
		int tmp1 = _quad_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(378)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(378)
		Dynamic _quad = tmp2;		HX_STACK_VAR(_quad,"_quad");
		HX_STACK_LINE(380)
		bool tmp3 = (_quad != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(380)
		if ((tmp3)){
			HX_STACK_LINE(381)
			_quad->__FieldRef(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02")) = _flip;
			HX_STACK_LINE(382)
			int tmp4 = _quad_id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(382)
			::phoenix::Rectangle tmp5 = _quad->__Field(HX_HCSTRING("_uv_cache","\x03","\xbe","\x84","\xd3"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(382)
			this->quad_uv_space(tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPackGeometry_obj,quad_flipy,(void))


QuadPackGeometry_obj::QuadPackGeometry_obj()
{
}

void QuadPackGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QuadPackGeometry);
	HX_MARK_MEMBER_NAME(quads,"quads");
	::phoenix::geometry::Geometry_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void QuadPackGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(quads,"quads");
	::phoenix::geometry::Geometry_obj::__Visit(HX_VISIT_ARG);
}

Dynamic QuadPackGeometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"quads") ) { return quads; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quad_uv") ) { return quad_uv_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quad_add") ) { return quad_add_dyn(); }
		if (HX_FIELD_EQ(inName,"quad_pos") ) { return quad_pos_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quad_color") ) { return quad_color_dyn(); }
		if (HX_FIELD_EQ(inName,"quad_alpha") ) { return quad_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"quad_flipx") ) { return quad_flipx_dyn(); }
		if (HX_FIELD_EQ(inName,"quad_flipy") ) { return quad_flipy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"quad_remove") ) { return quad_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"quad_resize") ) { return quad_resize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"quad_visible") ) { return quad_visible_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"quad_uv_space") ) { return quad_uv_space_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QuadPackGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"quads") ) { quads=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QuadPackGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("quads","\xcc","\x75","\xe7","\x5d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(QuadPackGeometry_obj,quads),HX_HCSTRING("quads","\xcc","\x75","\xe7","\x5d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("quads","\xcc","\x75","\xe7","\x5d"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("quad_add","\x69","\xdf","\x58","\xdc"),
	HX_HCSTRING("quad_remove","\xfc","\x2b","\x63","\x7c"),
	HX_HCSTRING("quad_visible","\xba","\xa9","\x87","\x0a"),
	HX_HCSTRING("quad_resize","\xac","\xe9","\x55","\x80"),
	HX_HCSTRING("quad_pos","\xdc","\x4a","\x64","\xdc"),
	HX_HCSTRING("quad_color","\xab","\x40","\xf7","\x79"),
	HX_HCSTRING("quad_alpha","\xa6","\x76","\x31","\x51"),
	HX_HCSTRING("quad_uv_space","\xe0","\xa6","\xa8","\xdb"),
	HX_HCSTRING("quad_uv","\x19","\xba","\xfa","\x3e"),
	HX_HCSTRING("quad_flipx","\x73","\x14","\x2d","\x32"),
	HX_HCSTRING("quad_flipy","\x74","\x14","\x2d","\x32"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuadPackGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadPackGeometry_obj::__mClass,"__mClass");
};

#endif

hx::Class QuadPackGeometry_obj::__mClass;

void QuadPackGeometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.QuadPackGeometry","\xcf","\x1b","\x1f","\x2e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QuadPackGeometry_obj >;
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
