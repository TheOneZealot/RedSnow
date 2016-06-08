#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_collision_data_RayCollision
#include <luxe/collision/data/RayCollision.h>
#endif
#ifndef INCLUDED_luxe_collision_data_ShapeCollision
#include <luxe/collision/data/ShapeCollision.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Circle
#include <luxe/collision/shapes/Circle.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Polygon
#include <luxe/collision/shapes/Polygon.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Ray
#include <luxe/collision/shapes/Ray.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Shape
#include <luxe/collision/shapes/Shape.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{
namespace collision{
namespace shapes{

Void Shape_obj::__construct(Float _x,Float _y)
{
HX_STACK_FRAME("luxe.collision.shapes.Shape","new",0xc2131c6b,"luxe.collision.shapes.Shape.new","luxe/collision/shapes/Shape.hx",9,0xfa059164)
HX_STACK_THIS(this)
HX_STACK_ARG(_x,"_x")
HX_STACK_ARG(_y,"_y")
{
	HX_STACK_LINE(42)
	this->_transformed = false;
	HX_STACK_LINE(40)
	this->_scaleY = ((Float)1);
	HX_STACK_LINE(39)
	this->_scaleX = ((Float)1);
	HX_STACK_LINE(35)
	this->_rotation_radians = ((Float)0);
	HX_STACK_LINE(34)
	this->_rotation = ((Float)0);
	HX_STACK_LINE(15)
	this->name = HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c");
	HX_STACK_LINE(13)
	this->active = true;
	HX_STACK_LINE(52)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		tmp = tmp2;
	}
	HX_STACK_LINE(52)
	this->tags = tmp;
	HX_STACK_LINE(54)
	::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	this->_position = tmp1;
	HX_STACK_LINE(55)
	::phoenix::Vector tmp2 = ::phoenix::Vector_obj::__new((int)1,(int)1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	this->_scale = tmp2;
	HX_STACK_LINE(56)
	::phoenix::Quaternion tmp3 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	this->_rotation_quat = tmp3;
	HX_STACK_LINE(57)
	this->_rotation = (int)0;
	HX_STACK_LINE(59)
	this->_scaleX = (int)1;
	HX_STACK_LINE(60)
	this->_scaleY = (int)1;
	HX_STACK_LINE(62)
	::phoenix::Vector tmp4 = this->_position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	Dynamic tmp5 = this->_pos_changed_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(62)
	::phoenix::Vector_obj::Listen(tmp4,tmp5);
	HX_STACK_LINE(64)
	::phoenix::Matrix tmp6 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(64)
	this->_transformMatrix = tmp6;
	HX_STACK_LINE(65)
	{
		HX_STACK_LINE(65)
		::phoenix::Matrix tmp7 = this->_transformMatrix;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(65)
		::phoenix::Matrix _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(65)
			e[(int)0] = (int)1;
			HX_STACK_LINE(65)
			e[(int)4] = (int)0;
			HX_STACK_LINE(65)
			e[(int)8] = (int)0;
			HX_STACK_LINE(65)
			::phoenix::Vector tmp8 = this->_position;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(65)
			Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(65)
			e[(int)12] = tmp9;
			HX_STACK_LINE(65)
			e[(int)1] = (int)0;
			HX_STACK_LINE(65)
			e[(int)5] = (int)1;
			HX_STACK_LINE(65)
			e[(int)9] = (int)0;
			HX_STACK_LINE(65)
			::phoenix::Vector tmp10 = this->_position;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(65)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(65)
			e[(int)13] = tmp11;
			HX_STACK_LINE(65)
			e[(int)2] = (int)0;
			HX_STACK_LINE(65)
			e[(int)6] = (int)0;
			HX_STACK_LINE(65)
			e[(int)10] = (int)1;
			HX_STACK_LINE(65)
			e[(int)14] = (int)0;
			HX_STACK_LINE(65)
			e[(int)3] = (int)0;
			HX_STACK_LINE(65)
			e[(int)7] = (int)0;
			HX_STACK_LINE(65)
			e[(int)11] = (int)0;
			HX_STACK_LINE(65)
			e[(int)15] = (int)1;
			HX_STACK_LINE(65)
			_this;
		}
		HX_STACK_LINE(65)
		_this;
	}
}
;
	return null();
}

//Shape_obj::~Shape_obj() { }

Dynamic Shape_obj::__CreateEmpty() { return  new Shape_obj; }
hx::ObjectPtr< Shape_obj > Shape_obj::__new(Float _x,Float _y)
{  hx::ObjectPtr< Shape_obj > _result_ = new Shape_obj();
	_result_->__construct(_x,_y);
	return _result_;}

Dynamic Shape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shape_obj > _result_ = new Shape_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::luxe::collision::data::ShapeCollision Shape_obj::test( ::luxe::collision::shapes::Shape shape){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","test",0x129d05e7,"luxe.collision.shapes.Shape.test","luxe/collision/shapes/Shape.hx",72,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shape,"shape")
	HX_STACK_LINE(72)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,test,return )

::luxe::collision::data::ShapeCollision Shape_obj::testCircle( ::luxe::collision::shapes::Circle circle,hx::Null< bool >  __o_flip){
bool flip = __o_flip.Default(false);
	HX_STACK_FRAME("luxe.collision.shapes.Shape","testCircle",0x622ed357,"luxe.collision.shapes.Shape.testCircle","luxe/collision/shapes/Shape.hx",74,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_ARG(circle,"circle")
	HX_STACK_ARG(flip,"flip")
{
		HX_STACK_LINE(74)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Shape_obj,testCircle,return )

::luxe::collision::data::ShapeCollision Shape_obj::testPolygon( ::luxe::collision::shapes::Polygon polygon,hx::Null< bool >  __o_flip){
bool flip = __o_flip.Default(false);
	HX_STACK_FRAME("luxe.collision.shapes.Shape","testPolygon",0xa3a4bf53,"luxe.collision.shapes.Shape.testPolygon","luxe/collision/shapes/Shape.hx",76,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_ARG(polygon,"polygon")
	HX_STACK_ARG(flip,"flip")
{
		HX_STACK_LINE(76)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Shape_obj,testPolygon,return )

::luxe::collision::data::RayCollision Shape_obj::testRay( ::luxe::collision::shapes::Ray ray){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","testRay",0x9482f243,"luxe.collision.shapes.Shape.testRay","luxe/collision/shapes/Shape.hx",78,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_LINE(78)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,testRay,return )

Void Shape_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.collision.shapes.Shape","destroy",0xfb43da85,"luxe.collision.shapes.Shape.destroy","luxe/collision/shapes/Shape.hx",81,0xfa059164)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		this->_position = null();
		HX_STACK_LINE(84)
		this->_scale = null();
		HX_STACK_LINE(85)
		this->_transformMatrix = null();
		HX_STACK_LINE(86)
		this->_rotation_quat = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,destroy,(void))

Void Shape_obj::refresh_transform( ){
{
		HX_STACK_FRAME("luxe.collision.shapes.Shape","refresh_transform",0xc9c1ac13,"luxe.collision.shapes.Shape.refresh_transform","luxe/collision/shapes/Shape.hx",92,0xfa059164)
		HX_STACK_THIS(this)
		HX_STACK_LINE(94)
		::phoenix::Quaternion tmp = this->_rotation_quat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		Float tmp1 = this->_rotation_radians;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		::phoenix::Vector tmp2 = ::phoenix::Vector_obj::__new((int)0,(int)0,tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		tmp->setFromEuler(tmp2,null());
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			::phoenix::Matrix tmp3 = this->_transformMatrix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(96)
			::phoenix::Matrix _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(96)
			::phoenix::Vector tmp4 = this->_position;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(96)
			::phoenix::Vector _position = tmp4;		HX_STACK_VAR(_position,"_position");
			HX_STACK_LINE(96)
			::phoenix::Quaternion tmp5 = this->_rotation_quat;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(96)
			::phoenix::Quaternion _quaternion = tmp5;		HX_STACK_VAR(_quaternion,"_quaternion");
			HX_STACK_LINE(96)
			::phoenix::Vector tmp6 = this->_scale;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(96)
			::phoenix::Vector _scale = tmp6;		HX_STACK_VAR(_scale,"_scale");
			HX_STACK_LINE(96)
			{
				HX_STACK_LINE(96)
				Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
				HX_STACK_LINE(96)
				Float tmp7 = (_quaternion->x + _quaternion->x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(96)
				Float x2 = tmp7;		HX_STACK_VAR(x2,"x2");
				HX_STACK_LINE(96)
				Float tmp8 = (_quaternion->y + _quaternion->y);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(96)
				Float y2 = tmp8;		HX_STACK_VAR(y2,"y2");
				HX_STACK_LINE(96)
				Float tmp9 = (_quaternion->z + _quaternion->z);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(96)
				Float z2 = tmp9;		HX_STACK_VAR(z2,"z2");
				HX_STACK_LINE(96)
				Float tmp10 = (_quaternion->x * x2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(96)
				Float xx = tmp10;		HX_STACK_VAR(xx,"xx");
				HX_STACK_LINE(96)
				Float tmp11 = (_quaternion->x * y2);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(96)
				Float xy = tmp11;		HX_STACK_VAR(xy,"xy");
				HX_STACK_LINE(96)
				Float tmp12 = (_quaternion->x * z2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(96)
				Float xz = tmp12;		HX_STACK_VAR(xz,"xz");
				HX_STACK_LINE(96)
				Float tmp13 = (_quaternion->y * y2);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(96)
				Float yy = tmp13;		HX_STACK_VAR(yy,"yy");
				HX_STACK_LINE(96)
				Float tmp14 = (_quaternion->y * z2);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(96)
				Float yz = tmp14;		HX_STACK_VAR(yz,"yz");
				HX_STACK_LINE(96)
				Float tmp15 = (_quaternion->z * z2);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(96)
				Float zz = tmp15;		HX_STACK_VAR(zz,"zz");
				HX_STACK_LINE(96)
				Float tmp16 = (_quaternion->w * x2);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(96)
				Float wx = tmp16;		HX_STACK_VAR(wx,"wx");
				HX_STACK_LINE(96)
				Float tmp17 = (_quaternion->w * y2);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(96)
				Float wy = tmp17;		HX_STACK_VAR(wy,"wy");
				HX_STACK_LINE(96)
				Float tmp18 = (_quaternion->w * z2);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(96)
				Float wz = tmp18;		HX_STACK_VAR(wz,"wz");
				HX_STACK_LINE(96)
				Float tmp19 = (yy + zz);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(96)
				Float tmp20 = ((int)1 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(96)
				te[(int)0] = tmp20;
				HX_STACK_LINE(96)
				Float tmp21 = (xy - wz);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(96)
				te[(int)4] = tmp21;
				HX_STACK_LINE(96)
				Float tmp22 = (xz + wy);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(96)
				te[(int)8] = tmp22;
				HX_STACK_LINE(96)
				Float tmp23 = (xy + wz);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(96)
				te[(int)1] = tmp23;
				HX_STACK_LINE(96)
				Float tmp24 = (xx + zz);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(96)
				Float tmp25 = ((int)1 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(96)
				te[(int)5] = tmp25;
				HX_STACK_LINE(96)
				Float tmp26 = (yz - wx);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(96)
				te[(int)9] = tmp26;
				HX_STACK_LINE(96)
				Float tmp27 = (xz - wy);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(96)
				te[(int)2] = tmp27;
				HX_STACK_LINE(96)
				Float tmp28 = (yz + wx);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(96)
				te[(int)6] = tmp28;
				HX_STACK_LINE(96)
				Float tmp29 = (xx + yy);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(96)
				Float tmp30 = ((int)1 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(96)
				te[(int)10] = tmp30;
				HX_STACK_LINE(96)
				te[(int)3] = (int)0;
				HX_STACK_LINE(96)
				te[(int)7] = (int)0;
				HX_STACK_LINE(96)
				te[(int)11] = (int)0;
				HX_STACK_LINE(96)
				te[(int)12] = (int)0;
				HX_STACK_LINE(96)
				te[(int)13] = (int)0;
				HX_STACK_LINE(96)
				te[(int)14] = (int)0;
				HX_STACK_LINE(96)
				te[(int)15] = (int)1;
				HX_STACK_LINE(96)
				_this;
			}
			HX_STACK_LINE(96)
			{
				HX_STACK_LINE(96)
				Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
				HX_STACK_LINE(96)
				Float _x = _scale->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(96)
				Float _y = _scale->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(96)
				Float _z = _scale->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(96)
				Float tmp7 = _x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(96)
				hx::MultEq(te[(int)0],tmp7);
				HX_STACK_LINE(96)
				Float tmp8 = _y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(96)
				hx::MultEq(te[(int)4],tmp8);
				HX_STACK_LINE(96)
				Float tmp9 = _z;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(96)
				hx::MultEq(te[(int)8],tmp9);
				HX_STACK_LINE(96)
				Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(96)
				hx::MultEq(te[(int)1],tmp10);
				HX_STACK_LINE(96)
				Float tmp11 = _y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(96)
				hx::MultEq(te[(int)5],tmp11);
				HX_STACK_LINE(96)
				Float tmp12 = _z;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(96)
				hx::MultEq(te[(int)9],tmp12);
				HX_STACK_LINE(96)
				Float tmp13 = _x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(96)
				hx::MultEq(te[(int)2],tmp13);
				HX_STACK_LINE(96)
				Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(96)
				hx::MultEq(te[(int)6],tmp14);
				HX_STACK_LINE(96)
				Float tmp15 = _z;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(96)
				hx::MultEq(te[(int)10],tmp15);
				HX_STACK_LINE(96)
				Float tmp16 = _x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(96)
				hx::MultEq(te[(int)3],tmp16);
				HX_STACK_LINE(96)
				Float tmp17 = _y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(96)
				hx::MultEq(te[(int)7],tmp17);
				HX_STACK_LINE(96)
				Float tmp18 = _z;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(96)
				hx::MultEq(te[(int)11],tmp18);
				HX_STACK_LINE(96)
				_this;
			}
			HX_STACK_LINE(96)
			{
				HX_STACK_LINE(96)
				Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
				HX_STACK_LINE(96)
				Float tmp7 = _position->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(96)
				te[(int)12] = tmp7;
				HX_STACK_LINE(96)
				Float tmp8 = _position->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(96)
				te[(int)13] = tmp8;
				HX_STACK_LINE(96)
				Float tmp9 = _position->z;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(96)
				te[(int)14] = tmp9;
				HX_STACK_LINE(96)
				_this;
			}
			HX_STACK_LINE(96)
			_this;
		}
		HX_STACK_LINE(97)
		this->_transformed = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,refresh_transform,(void))

::phoenix::Vector Shape_obj::get_position( ){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","get_position",0x6d3eaf47,"luxe.collision.shapes.Shape.get_position","luxe/collision/shapes/Shape.hx",103,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_LINE(104)
	::phoenix::Vector tmp = this->_position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_position,return )

::phoenix::Vector Shape_obj::set_position( ::phoenix::Vector v){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","set_position",0x8237d2bb,"luxe.collision.shapes.Shape.set_position","luxe/collision/shapes/Shape.hx",107,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(109)
	this->_position = v;
	HX_STACK_LINE(110)
	this->refresh_transform();
	HX_STACK_LINE(112)
	::phoenix::Vector tmp = this->_position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	if ((tmp1)){
		HX_STACK_LINE(112)
		::phoenix::Vector tmp2 = this->_position;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		Dynamic tmp3 = this->_pos_changed_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		::phoenix::Vector_obj::Listen(tmp2,tmp3);
	}
	HX_STACK_LINE(114)
	::phoenix::Vector tmp2 = this->_position;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(114)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_position,return )

Float Shape_obj::get_x( ){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","get_x",0xba934a1a,"luxe.collision.shapes.Shape.get_x","luxe/collision/shapes/Shape.hx",120,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_LINE(121)
	::phoenix::Vector tmp = this->_position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(121)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_x,return )

Float Shape_obj::set_x( Float x){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","set_x",0xa3624026,"luxe.collision.shapes.Shape.set_x","luxe/collision/shapes/Shape.hx",124,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(125)
	::phoenix::Vector tmp = this->_position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	tmp->ignore_listeners = true;
	HX_STACK_LINE(126)
	{
		HX_STACK_LINE(126)
		::phoenix::Vector tmp1 = this->_position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(126)
		_this->x = x;
		HX_STACK_LINE(126)
		bool tmp2 = _this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		if ((tmp2)){
			HX_STACK_LINE(126)
			_this->x;
		}
		else{
			HX_STACK_LINE(126)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(126)
			if ((tmp3)){
				HX_STACK_LINE(126)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(126)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(126)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(126)
				tmp4 = false;
			}
			HX_STACK_LINE(126)
			if ((tmp4)){
				HX_STACK_LINE(126)
				Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(126)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(126)
			_this->x;
		}
	}
	HX_STACK_LINE(127)
	this->refresh_transform();
	HX_STACK_LINE(128)
	::phoenix::Vector tmp1 = this->_position;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	tmp1->ignore_listeners = false;
	HX_STACK_LINE(129)
	::phoenix::Vector tmp2 = this->_position;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(129)
	Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(129)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_x,return )

Float Shape_obj::get_y( ){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","get_y",0xba934a1b,"luxe.collision.shapes.Shape.get_y","luxe/collision/shapes/Shape.hx",134,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_LINE(135)
	::phoenix::Vector tmp = this->_position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	Float tmp1 = tmp->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(135)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_y,return )

Float Shape_obj::set_y( Float y){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","set_y",0xa3624027,"luxe.collision.shapes.Shape.set_y","luxe/collision/shapes/Shape.hx",138,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(139)
	::phoenix::Vector tmp = this->_position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	tmp->ignore_listeners = true;
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		::phoenix::Vector tmp1 = this->_position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(140)
		_this->y = y;
		HX_STACK_LINE(140)
		bool tmp2 = _this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		if ((tmp2)){
			HX_STACK_LINE(140)
			_this->y;
		}
		else{
			HX_STACK_LINE(140)
			bool tmp3 = (_this->listen_y != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			if ((tmp3)){
				HX_STACK_LINE(140)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(140)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(140)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(140)
				tmp4 = false;
			}
			HX_STACK_LINE(140)
			if ((tmp4)){
				HX_STACK_LINE(140)
				Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(140)
				_this->listen_y(tmp5);
			}
			HX_STACK_LINE(140)
			_this->y;
		}
	}
	HX_STACK_LINE(141)
	this->refresh_transform();
	HX_STACK_LINE(142)
	::phoenix::Vector tmp1 = this->_position;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(142)
	tmp1->ignore_listeners = false;
	HX_STACK_LINE(143)
	::phoenix::Vector tmp2 = this->_position;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(143)
	Float tmp3 = tmp2->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(143)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_y,return )

Float Shape_obj::get_rotation( ){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","get_rotation",0xaaca4bdc,"luxe.collision.shapes.Shape.get_rotation","luxe/collision/shapes/Shape.hx",148,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_LINE(149)
	Float tmp = this->_rotation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_rotation,return )

Float Shape_obj::set_rotation( Float v){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","set_rotation",0xbfc36f50,"luxe.collision.shapes.Shape.set_rotation","luxe/collision/shapes/Shape.hx",152,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(154)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	Float tmp2 = (Float(tmp1) / Float((int)180));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(154)
	this->_rotation_radians = tmp3;
	HX_STACK_LINE(156)
	this->refresh_transform();
	HX_STACK_LINE(158)
	Float tmp4 = this->_rotation = v;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(158)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_rotation,return )

Float Shape_obj::get_scaleX( ){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","get_scaleX",0x1fda75ac,"luxe.collision.shapes.Shape.get_scaleX","luxe/collision/shapes/Shape.hx",164,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	Float tmp = this->_scaleX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_scaleX,return )

Float Shape_obj::set_scaleX( Float scale){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","set_scaleX",0x23581420,"luxe.collision.shapes.Shape.set_scaleX","luxe/collision/shapes/Shape.hx",168,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scale,"scale")
	HX_STACK_LINE(169)
	this->_scaleX = scale;
	HX_STACK_LINE(170)
	{
		HX_STACK_LINE(170)
		::phoenix::Vector tmp = this->_scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(170)
		::phoenix::Vector _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(170)
		Float tmp1 = this->_scaleX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(170)
		Float _x = tmp1;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(170)
		_this->x = _x;
		HX_STACK_LINE(170)
		bool tmp2 = _this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		if ((tmp2)){
			HX_STACK_LINE(170)
			_this->x;
		}
		else{
			HX_STACK_LINE(170)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(170)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(170)
			if ((tmp3)){
				HX_STACK_LINE(170)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(170)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(170)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(170)
				tmp4 = false;
			}
			HX_STACK_LINE(170)
			if ((tmp4)){
				HX_STACK_LINE(170)
				Float tmp5 = _x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(170)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(170)
			_this->x;
		}
	}
	HX_STACK_LINE(171)
	this->refresh_transform();
	HX_STACK_LINE(172)
	Float tmp = this->_scaleX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_scaleX,return )

Float Shape_obj::get_scaleY( ){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","get_scaleY",0x1fda75ad,"luxe.collision.shapes.Shape.get_scaleY","luxe/collision/shapes/Shape.hx",177,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_LINE(178)
	Float tmp = this->_scaleY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_scaleY,return )

Float Shape_obj::set_scaleY( Float scale){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","set_scaleY",0x23581421,"luxe.collision.shapes.Shape.set_scaleY","luxe/collision/shapes/Shape.hx",181,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scale,"scale")
	HX_STACK_LINE(182)
	this->_scaleY = scale;
	HX_STACK_LINE(183)
	{
		HX_STACK_LINE(183)
		::phoenix::Vector tmp = this->_scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(183)
		::phoenix::Vector _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(183)
		Float tmp1 = this->_scaleY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(183)
		Float _y = tmp1;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(183)
		_this->y = _y;
		HX_STACK_LINE(183)
		bool tmp2 = _this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		if ((tmp2)){
			HX_STACK_LINE(183)
			_this->y;
		}
		else{
			HX_STACK_LINE(183)
			bool tmp3 = (_this->listen_y != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(183)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(183)
			if ((tmp3)){
				HX_STACK_LINE(183)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(183)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(183)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(183)
				tmp4 = false;
			}
			HX_STACK_LINE(183)
			if ((tmp4)){
				HX_STACK_LINE(183)
				Float tmp5 = _y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(183)
				_this->listen_y(tmp5);
			}
			HX_STACK_LINE(183)
			_this->y;
		}
	}
	HX_STACK_LINE(184)
	this->refresh_transform();
	HX_STACK_LINE(185)
	Float tmp = this->_scaleY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_scaleY,return )

Void Shape_obj::_pos_changed( Float _){
{
		HX_STACK_FRAME("luxe.collision.shapes.Shape","_pos_changed",0xddc4249f,"luxe.collision.shapes.Shape._pos_changed","luxe/collision/shapes/Shape.hx",191,0xfa059164)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(191)
		this->refresh_transform();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,_pos_changed,(void))


Shape_obj::Shape_obj()
{
}

void Shape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shape);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(tags,"tags");
	HX_MARK_MEMBER_NAME(_position,"_position");
	HX_MARK_MEMBER_NAME(_rotation,"_rotation");
	HX_MARK_MEMBER_NAME(_rotation_radians,"_rotation_radians");
	HX_MARK_MEMBER_NAME(_rotation_quat,"_rotation_quat");
	HX_MARK_MEMBER_NAME(_scale,"_scale");
	HX_MARK_MEMBER_NAME(_scaleX,"_scaleX");
	HX_MARK_MEMBER_NAME(_scaleY,"_scaleY");
	HX_MARK_MEMBER_NAME(_transformed,"_transformed");
	HX_MARK_MEMBER_NAME(_transformMatrix,"_transformMatrix");
	HX_MARK_END_CLASS();
}

void Shape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(tags,"tags");
	HX_VISIT_MEMBER_NAME(_position,"_position");
	HX_VISIT_MEMBER_NAME(_rotation,"_rotation");
	HX_VISIT_MEMBER_NAME(_rotation_radians,"_rotation_radians");
	HX_VISIT_MEMBER_NAME(_rotation_quat,"_rotation_quat");
	HX_VISIT_MEMBER_NAME(_scale,"_scale");
	HX_VISIT_MEMBER_NAME(_scaleX,"_scaleX");
	HX_VISIT_MEMBER_NAME(_scaleY,"_scaleY");
	HX_VISIT_MEMBER_NAME(_transformed,"_transformed");
	HX_VISIT_MEMBER_NAME(_transformMatrix,"_transformMatrix");
}

Dynamic Shape_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"tags") ) { return tags; }
		if (HX_FIELD_EQ(inName,"test") ) { return test_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return get_scaleX(); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return get_scaleY(); }
		if (HX_FIELD_EQ(inName,"_scale") ) { return _scale; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_scaleX") ) { return _scaleX; }
		if (HX_FIELD_EQ(inName,"_scaleY") ) { return _scaleY; }
		if (HX_FIELD_EQ(inName,"testRay") ) { return testRay_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return get_position(); }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return get_rotation(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_position") ) { return _position; }
		if (HX_FIELD_EQ(inName,"_rotation") ) { return _rotation; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testCircle") ) { return testCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { return get_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { return get_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"testPolygon") ) { return testPolygon_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_transformed") ) { return _transformed; }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"_pos_changed") ) { return _pos_changed_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_rotation_quat") ) { return _rotation_quat; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_transformMatrix") ) { return _transformMatrix; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_rotation_radians") ) { return _rotation_radians; }
		if (HX_FIELD_EQ(inName,"refresh_transform") ) { return refresh_transform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Shape_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tags") ) { tags=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return set_scaleX(inValue); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return set_scaleY(inValue); }
		if (HX_FIELD_EQ(inName,"_scale") ) { _scale=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_scaleX") ) { _scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleY") ) { _scaleY=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return set_position(inValue); }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return set_rotation(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_position") ) { _position=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotation") ) { _rotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_transformed") ) { _transformed=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_rotation_quat") ) { _rotation_quat=inValue.Cast< ::phoenix::Quaternion >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_transformMatrix") ) { _transformMatrix=inValue.Cast< ::phoenix::Matrix >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_rotation_radians") ) { _rotation_radians=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("tags","\xd9","\xb4","\xf6","\x4c"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("_position","\x08","\x98","\x90","\x12"));
	outFields->push(HX_HCSTRING("_rotation","\x9d","\x34","\x1c","\x50"));
	outFields->push(HX_HCSTRING("_rotation_radians","\x90","\x39","\x26","\x94"));
	outFields->push(HX_HCSTRING("_rotation_quat","\xf9","\x46","\x4a","\x1d"));
	outFields->push(HX_HCSTRING("_scale","\xcb","\x15","\xb6","\x74"));
	outFields->push(HX_HCSTRING("_scaleX","\x2d","\xfc","\x9c","\xaa"));
	outFields->push(HX_HCSTRING("_scaleY","\x2e","\xfc","\x9c","\xaa"));
	outFields->push(HX_HCSTRING("_transformed","\xcc","\x66","\xd4","\x98"));
	outFields->push(HX_HCSTRING("_transformMatrix","\x4e","\xf3","\xfc","\xe1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Shape_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsString,(int)offsetof(Shape_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Shape_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Shape_obj,tags),HX_HCSTRING("tags","\xd9","\xb4","\xf6","\x4c")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Shape_obj,_position),HX_HCSTRING("_position","\x08","\x98","\x90","\x12")},
	{hx::fsFloat,(int)offsetof(Shape_obj,_rotation),HX_HCSTRING("_rotation","\x9d","\x34","\x1c","\x50")},
	{hx::fsFloat,(int)offsetof(Shape_obj,_rotation_radians),HX_HCSTRING("_rotation_radians","\x90","\x39","\x26","\x94")},
	{hx::fsObject /*::phoenix::Quaternion*/ ,(int)offsetof(Shape_obj,_rotation_quat),HX_HCSTRING("_rotation_quat","\xf9","\x46","\x4a","\x1d")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Shape_obj,_scale),HX_HCSTRING("_scale","\xcb","\x15","\xb6","\x74")},
	{hx::fsFloat,(int)offsetof(Shape_obj,_scaleX),HX_HCSTRING("_scaleX","\x2d","\xfc","\x9c","\xaa")},
	{hx::fsFloat,(int)offsetof(Shape_obj,_scaleY),HX_HCSTRING("_scaleY","\x2e","\xfc","\x9c","\xaa")},
	{hx::fsBool,(int)offsetof(Shape_obj,_transformed),HX_HCSTRING("_transformed","\xcc","\x66","\xd4","\x98")},
	{hx::fsObject /*::phoenix::Matrix*/ ,(int)offsetof(Shape_obj,_transformMatrix),HX_HCSTRING("_transformMatrix","\x4e","\xf3","\xfc","\xe1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("tags","\xd9","\xb4","\xf6","\x4c"),
	HX_HCSTRING("_position","\x08","\x98","\x90","\x12"),
	HX_HCSTRING("_rotation","\x9d","\x34","\x1c","\x50"),
	HX_HCSTRING("_rotation_radians","\x90","\x39","\x26","\x94"),
	HX_HCSTRING("_rotation_quat","\xf9","\x46","\x4a","\x1d"),
	HX_HCSTRING("_scale","\xcb","\x15","\xb6","\x74"),
	HX_HCSTRING("_scaleX","\x2d","\xfc","\x9c","\xaa"),
	HX_HCSTRING("_scaleY","\x2e","\xfc","\x9c","\xaa"),
	HX_HCSTRING("_transformed","\xcc","\x66","\xd4","\x98"),
	HX_HCSTRING("_transformMatrix","\x4e","\xf3","\xfc","\xe1"),
	HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c"),
	HX_HCSTRING("testCircle","\x02","\xb8","\x01","\x6f"),
	HX_HCSTRING("testPolygon","\x48","\xf0","\x59","\xcf"),
	HX_HCSTRING("testRay","\xb8","\x44","\xc5","\xbd"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("refresh_transform","\xc8","\x82","\x85","\xfd"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_rotation","\x47","\xf1","\x9f","\xbd"),
	HX_HCSTRING("set_rotation","\xbb","\x14","\x99","\xd2"),
	HX_HCSTRING("get_scaleX","\x57","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleX","\xcb","\xf8","\x2a","\x30"),
	HX_HCSTRING("get_scaleY","\x58","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleY","\xcc","\xf8","\x2a","\x30"),
	HX_HCSTRING("_pos_changed","\x0a","\xca","\x99","\xf0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shape_obj::__mClass,"__mClass");
};

#endif

hx::Class Shape_obj::__mClass;

void Shape_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.collision.shapes.Shape","\xf9","\x0a","\xc4","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Shape_obj >;
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
