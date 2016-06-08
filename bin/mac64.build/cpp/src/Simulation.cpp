#include <hxcpp.h>

#ifndef INCLUDED_DynamicShape
#include <DynamicShape.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Simulation
#include <Simulation.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Events
#include <luxe/Events.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Physics
#include <luxe/Physics.h>
#endif
#ifndef INCLUDED_luxe_PhysicsEngine
#include <luxe/PhysicsEngine.h>
#endif
#ifndef INCLUDED_luxe_collision_Collision
#include <luxe/collision/Collision.h>
#endif
#ifndef INCLUDED_luxe_collision_data_ShapeCollision
#include <luxe/collision/data/ShapeCollision.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Polygon
#include <luxe/collision/shapes/Polygon.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Shape
#include <luxe/collision/shapes/Shape.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Spatial
#include <phoenix/Spatial.h>
#endif
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif

Void Simulation_obj::__construct()
{
HX_STACK_FRAME("Simulation","new",0x7ac77759,"Simulation.new","Simulation.hx",20,0x05247637)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	super::__construct();
	HX_STACK_LINE(23)
	::phoenix::Renderer tmp = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::phoenix::Batcher tmp1 = ::phoenix::Batcher_obj::__new(tmp,HX_HCSTRING("debug_batcher","\x7b","\xd9","\xce","\x3f"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	this->debug_batcher = tmp1;
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		::phoenix::Batcher tmp2 = this->debug_batcher;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		::phoenix::Batcher _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(24)
		_this->layer = (int)2;
		HX_STACK_LINE(24)
		Dynamic tmp3 = _this->renderer->sort_batchers_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(24)
		_this->renderer->batchers->sort(tmp3);
		HX_STACK_LINE(24)
		_this->layer;
	}
	HX_STACK_LINE(25)
	::phoenix::Renderer tmp2 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	::phoenix::Batcher tmp3 = this->debug_batcher;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	tmp2->add_batch(tmp3);
	HX_STACK_LINE(27)
	this->dynamic_colliders = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(28)
	this->static_colliders = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(30)
	::phoenix::Color tmp4 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(30)
	this->dynamic_color = tmp4;
	HX_STACK_LINE(31)
	::phoenix::Color tmp5 = ::phoenix::Color_obj::__new((int)1,(int)0,(int)0,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	this->static_color = tmp5;
}
;
	return null();
}

//Simulation_obj::~Simulation_obj() { }

Dynamic Simulation_obj::__CreateEmpty() { return  new Simulation_obj; }
hx::ObjectPtr< Simulation_obj > Simulation_obj::__new()
{  hx::ObjectPtr< Simulation_obj > _result_ = new Simulation_obj();
	_result_->__construct();
	return _result_;}

Dynamic Simulation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Simulation_obj > _result_ = new Simulation_obj();
	_result_->__construct();
	return _result_;}

Void Simulation_obj::update( ){
{
		HX_STACK_FRAME("Simulation","update",0x3473c0b0,"Simulation.update","Simulation.hx",36,0x05247637)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		Array< ::Dynamic > _g1 = this->dynamic_colliders;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(36)
		while((true)){
			HX_STACK_LINE(36)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(36)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(36)
			if ((tmp1)){
				HX_STACK_LINE(36)
				break;
			}
			HX_STACK_LINE(36)
			::DynamicShape tmp2 = _g1->__get(_g).StaticCast< ::DynamicShape >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(36)
			::DynamicShape shape = tmp2;		HX_STACK_VAR(shape,"shape");
			HX_STACK_LINE(36)
			++(_g);
			HX_STACK_LINE(38)
			{
				HX_STACK_LINE(38)
				::phoenix::Vector _g2 = shape->velocity;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(38)
				{
					HX_STACK_LINE(38)
					Float tmp3 = (_g2->x * shape->dampening);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(38)
					Float _x = tmp3;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(38)
					_g2->x = _x;
					HX_STACK_LINE(38)
					bool tmp4 = _g2->_construct;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(38)
					if ((tmp4)){
						HX_STACK_LINE(38)
						_g2->x;
					}
					else{
						HX_STACK_LINE(38)
						bool tmp5 = (_g2->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(38)
						bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(38)
						if ((tmp5)){
							HX_STACK_LINE(38)
							bool tmp7 = _g2->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(38)
							bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(38)
							tmp6 = !(tmp8);
						}
						else{
							HX_STACK_LINE(38)
							tmp6 = false;
						}
						HX_STACK_LINE(38)
						if ((tmp6)){
							HX_STACK_LINE(38)
							Float tmp7 = _x;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(38)
							_g2->listen_x(tmp7);
						}
						HX_STACK_LINE(38)
						_g2->x;
					}
				}
			}
			HX_STACK_LINE(39)
			{
				HX_STACK_LINE(39)
				::phoenix::Vector _g2 = shape->velocity;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(39)
				{
					HX_STACK_LINE(39)
					Float tmp3 = (_g2->y * shape->dampening);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(39)
					Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(39)
					_g2->y = _y;
					HX_STACK_LINE(39)
					bool tmp4 = _g2->_construct;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(39)
					if ((tmp4)){
						HX_STACK_LINE(39)
						_g2->y;
					}
					else{
						HX_STACK_LINE(39)
						bool tmp5 = (_g2->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(39)
						bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(39)
						if ((tmp5)){
							HX_STACK_LINE(39)
							bool tmp7 = _g2->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(39)
							bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(39)
							tmp6 = !(tmp8);
						}
						else{
							HX_STACK_LINE(39)
							tmp6 = false;
						}
						HX_STACK_LINE(39)
						if ((tmp6)){
							HX_STACK_LINE(39)
							Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(39)
							_g2->listen_y(tmp7);
						}
						HX_STACK_LINE(39)
						_g2->y;
					}
				}
			}
			HX_STACK_LINE(41)
			{
				HX_STACK_LINE(41)
				::phoenix::Vector _this = shape->velocity;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(41)
				Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					Float tmp4 = shape->velocity->x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(41)
					Float value = tmp4;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(41)
					Float tmp5 = shape->max_speed;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(41)
					Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(41)
					Float a = tmp6;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(41)
					Float b = shape->max_speed;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(41)
					bool tmp7 = (value < a);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(41)
					if ((tmp7)){
						HX_STACK_LINE(41)
						tmp3 = a;
					}
					else{
						HX_STACK_LINE(41)
						bool tmp8 = (value > b);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(41)
						if ((tmp8)){
							HX_STACK_LINE(41)
							tmp3 = b;
						}
						else{
							HX_STACK_LINE(41)
							tmp3 = value;
						}
					}
				}
				HX_STACK_LINE(41)
				Float _x = tmp3;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(41)
				_this->x = _x;
				HX_STACK_LINE(41)
				bool tmp4 = _this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(41)
				if ((tmp4)){
					HX_STACK_LINE(41)
					_this->x;
				}
				else{
					HX_STACK_LINE(41)
					bool tmp5 = (_this->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(41)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(41)
					if ((tmp5)){
						HX_STACK_LINE(41)
						bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(41)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(41)
						tmp6 = !(tmp8);
					}
					else{
						HX_STACK_LINE(41)
						tmp6 = false;
					}
					HX_STACK_LINE(41)
					if ((tmp6)){
						HX_STACK_LINE(41)
						Float tmp7 = _x;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(41)
						_this->listen_x(tmp7);
					}
					HX_STACK_LINE(41)
					_this->x;
				}
			}
			HX_STACK_LINE(42)
			{
				HX_STACK_LINE(42)
				::phoenix::Vector _this = shape->velocity;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(42)
				Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(42)
				{
					HX_STACK_LINE(42)
					Float tmp4 = shape->velocity->y;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(42)
					Float value = tmp4;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(42)
					Float tmp5 = shape->max_speed;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(42)
					Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(42)
					Float a = tmp6;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(42)
					Float b = shape->max_speed;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(42)
					bool tmp7 = (value < a);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(42)
					if ((tmp7)){
						HX_STACK_LINE(42)
						tmp3 = a;
					}
					else{
						HX_STACK_LINE(42)
						bool tmp8 = (value > b);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(42)
						if ((tmp8)){
							HX_STACK_LINE(42)
							tmp3 = b;
						}
						else{
							HX_STACK_LINE(42)
							tmp3 = value;
						}
					}
				}
				HX_STACK_LINE(42)
				Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(42)
				_this->y = _y;
				HX_STACK_LINE(42)
				bool tmp4 = _this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(42)
				if ((tmp4)){
					HX_STACK_LINE(42)
					_this->y;
				}
				else{
					HX_STACK_LINE(42)
					bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(42)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(42)
					if ((tmp5)){
						HX_STACK_LINE(42)
						bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(42)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(42)
						tmp6 = !(tmp8);
					}
					else{
						HX_STACK_LINE(42)
						tmp6 = false;
					}
					HX_STACK_LINE(42)
					if ((tmp6)){
						HX_STACK_LINE(42)
						Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(42)
						_this->listen_y(tmp7);
					}
					HX_STACK_LINE(42)
					_this->y;
				}
			}
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				::phoenix::Vector tmp3 = shape->get_pos();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(44)
				::phoenix::Vector _g2 = tmp3;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(44)
				{
					HX_STACK_LINE(44)
					Float tmp4 = _g2->x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(44)
					Float tmp5 = shape->velocity->x;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(44)
					::luxe::Physics tmp6 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(44)
					Float tmp7 = tmp6->step_delta;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(44)
					Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(44)
					Float tmp9 = (tmp4 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(44)
					Float _x = tmp9;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(44)
					_g2->x = _x;
					HX_STACK_LINE(44)
					bool tmp10 = _g2->_construct;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(44)
					if ((tmp10)){
						HX_STACK_LINE(44)
						_g2->x;
					}
					else{
						HX_STACK_LINE(44)
						bool tmp11 = (_g2->listen_x != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(44)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(44)
						if ((tmp11)){
							HX_STACK_LINE(44)
							bool tmp13 = _g2->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(44)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(44)
							tmp12 = !(tmp14);
						}
						else{
							HX_STACK_LINE(44)
							tmp12 = false;
						}
						HX_STACK_LINE(44)
						if ((tmp12)){
							HX_STACK_LINE(44)
							Float tmp13 = _x;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(44)
							_g2->listen_x(tmp13);
						}
						HX_STACK_LINE(44)
						_g2->x;
					}
				}
			}
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				::phoenix::Vector tmp3 = shape->get_pos();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(45)
				::phoenix::Vector _g2 = tmp3;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					Float tmp4 = _g2->y;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(45)
					Float tmp5 = shape->velocity->y;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(45)
					::luxe::Physics tmp6 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(45)
					Float tmp7 = tmp6->step_delta;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(45)
					Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(45)
					Float tmp9 = (tmp4 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(45)
					Float _y = tmp9;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(45)
					_g2->y = _y;
					HX_STACK_LINE(45)
					bool tmp10 = _g2->_construct;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(45)
					if ((tmp10)){
						HX_STACK_LINE(45)
						_g2->y;
					}
					else{
						HX_STACK_LINE(45)
						bool tmp11 = (_g2->listen_y != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(45)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(45)
						if ((tmp11)){
							HX_STACK_LINE(45)
							bool tmp13 = _g2->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(45)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(45)
							tmp12 = !(tmp14);
						}
						else{
							HX_STACK_LINE(45)
							tmp12 = false;
						}
						HX_STACK_LINE(45)
						if ((tmp12)){
							HX_STACK_LINE(45)
							Float tmp13 = _y;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(45)
							_g2->listen_y(tmp13);
						}
						HX_STACK_LINE(45)
						_g2->y;
					}
				}
			}
			HX_STACK_LINE(47)
			::luxe::collision::shapes::Shape tmp3 = shape->shape;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(47)
			Array< ::Dynamic > collisions = ::luxe::collision::Collision_obj::shapeWithShapes(tmp3,this->static_colliders);		HX_STACK_VAR(collisions,"collisions");
			HX_STACK_LINE(48)
			{
				HX_STACK_LINE(48)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(48)
				while((true)){
					HX_STACK_LINE(48)
					bool tmp4 = (_g2 < collisions->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(48)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(48)
					if ((tmp5)){
						HX_STACK_LINE(48)
						break;
					}
					HX_STACK_LINE(48)
					::luxe::collision::data::ShapeCollision tmp6 = collisions->__get(_g2).StaticCast< ::luxe::collision::data::ShapeCollision >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(48)
					::luxe::collision::data::ShapeCollision collision = tmp6;		HX_STACK_VAR(collision,"collision");
					HX_STACK_LINE(48)
					++(_g2);
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(50)
						::phoenix::Vector tmp7 = shape->get_pos();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(50)
						::phoenix::Vector _g3 = tmp7;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(50)
						{
							HX_STACK_LINE(50)
							Float tmp8 = _g3->x;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(50)
							Float tmp9 = collision->separation->x;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(50)
							Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(50)
							Float _x = tmp10;		HX_STACK_VAR(_x,"_x");
							HX_STACK_LINE(50)
							_g3->x = _x;
							HX_STACK_LINE(50)
							bool tmp11 = _g3->_construct;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(50)
							if ((tmp11)){
								HX_STACK_LINE(50)
								_g3->x;
							}
							else{
								HX_STACK_LINE(50)
								bool tmp12 = (_g3->listen_x != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(50)
								bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(50)
								if ((tmp12)){
									HX_STACK_LINE(50)
									bool tmp14 = _g3->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(50)
									bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(50)
									tmp13 = !(tmp15);
								}
								else{
									HX_STACK_LINE(50)
									tmp13 = false;
								}
								HX_STACK_LINE(50)
								if ((tmp13)){
									HX_STACK_LINE(50)
									Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(50)
									_g3->listen_x(tmp14);
								}
								HX_STACK_LINE(50)
								_g3->x;
							}
						}
					}
					HX_STACK_LINE(51)
					{
						HX_STACK_LINE(51)
						::phoenix::Vector tmp7 = shape->get_pos();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(51)
						::phoenix::Vector _g3 = tmp7;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(51)
						{
							HX_STACK_LINE(51)
							Float tmp8 = _g3->y;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(51)
							Float tmp9 = collision->separation->y;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(51)
							Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(51)
							Float _y = tmp10;		HX_STACK_VAR(_y,"_y");
							HX_STACK_LINE(51)
							_g3->y = _y;
							HX_STACK_LINE(51)
							bool tmp11 = _g3->_construct;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(51)
							if ((tmp11)){
								HX_STACK_LINE(51)
								_g3->y;
							}
							else{
								HX_STACK_LINE(51)
								bool tmp12 = (_g3->listen_y != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(51)
								bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(51)
								if ((tmp12)){
									HX_STACK_LINE(51)
									bool tmp14 = _g3->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(51)
									bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(51)
									tmp13 = !(tmp15);
								}
								else{
									HX_STACK_LINE(51)
									tmp13 = false;
								}
								HX_STACK_LINE(51)
								if ((tmp13)){
									HX_STACK_LINE(51)
									Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(51)
									_g3->listen_y(tmp14);
								}
								HX_STACK_LINE(51)
								_g3->y;
							}
						}
					}
					HX_STACK_LINE(53)
					Float tmp7 = collision->unitVector->x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(53)
					bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					if ((tmp8)){
						HX_STACK_LINE(55)
						::phoenix::Vector _this = shape->velocity;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(55)
						_this->x = (int)0;
						HX_STACK_LINE(55)
						bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(55)
						if ((tmp9)){
							HX_STACK_LINE(55)
							_this->x;
						}
						else{
							HX_STACK_LINE(55)
							bool tmp10 = (_this->listen_x != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(55)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(55)
							if ((tmp10)){
								HX_STACK_LINE(55)
								bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(55)
								bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(55)
								tmp11 = !(tmp13);
							}
							else{
								HX_STACK_LINE(55)
								tmp11 = false;
							}
							HX_STACK_LINE(55)
							if ((tmp11)){
								HX_STACK_LINE(55)
								_this->listen_x((int)0);
							}
							HX_STACK_LINE(55)
							_this->x;
						}
					}
					HX_STACK_LINE(57)
					Float tmp9 = collision->unitVector->y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(57)
					bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(57)
					if ((tmp10)){
						HX_STACK_LINE(59)
						::phoenix::Vector _this = shape->velocity;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(59)
						_this->y = (int)0;
						HX_STACK_LINE(59)
						bool tmp11 = _this->_construct;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(59)
						if ((tmp11)){
							HX_STACK_LINE(59)
							_this->y;
						}
						else{
							HX_STACK_LINE(59)
							bool tmp12 = (_this->listen_y != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(59)
							bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(59)
							if ((tmp12)){
								HX_STACK_LINE(59)
								bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(59)
								bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(59)
								tmp13 = !(tmp15);
							}
							else{
								HX_STACK_LINE(59)
								tmp13 = false;
							}
							HX_STACK_LINE(59)
							if ((tmp13)){
								HX_STACK_LINE(59)
								_this->listen_y((int)0);
							}
							HX_STACK_LINE(59)
							_this->y;
						}
					}
				}
			}
			HX_STACK_LINE(62)
			{
				HX_STACK_LINE(62)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(62)
				Array< ::Dynamic > _g3 = this->dynamic_colliders;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(62)
				while((true)){
					HX_STACK_LINE(62)
					bool tmp4 = (_g2 < _g3->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(62)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(62)
					if ((tmp5)){
						HX_STACK_LINE(62)
						break;
					}
					HX_STACK_LINE(62)
					::DynamicShape tmp6 = _g3->__get(_g2).StaticCast< ::DynamicShape >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(62)
					::DynamicShape other_shape = tmp6;		HX_STACK_VAR(other_shape,"other_shape");
					HX_STACK_LINE(62)
					++(_g2);
					HX_STACK_LINE(64)
					bool tmp7 = (shape == other_shape);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(64)
					if ((tmp7)){
						HX_STACK_LINE(64)
						continue;
					}
					HX_STACK_LINE(65)
					::luxe::collision::shapes::Shape tmp8 = shape->shape;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(65)
					::luxe::collision::shapes::Shape tmp9 = other_shape->shape;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(65)
					::luxe::collision::data::ShapeCollision tmp10 = ::luxe::collision::Collision_obj::shapeWithShape(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(65)
					::luxe::collision::data::ShapeCollision collision = tmp10;		HX_STACK_VAR(collision,"collision");
					HX_STACK_LINE(67)
					bool tmp11 = (collision == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(67)
					if ((tmp11)){
						HX_STACK_LINE(67)
						continue;
					}
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						::phoenix::Vector tmp12 = shape->get_pos();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(69)
						::phoenix::Vector _g4 = tmp12;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(69)
						{
							HX_STACK_LINE(69)
							Float tmp13 = _g4->x;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(69)
							Float tmp14 = collision->separation->x;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(69)
							Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(69)
							Float _x = tmp15;		HX_STACK_VAR(_x,"_x");
							HX_STACK_LINE(69)
							_g4->x = _x;
							HX_STACK_LINE(69)
							bool tmp16 = _g4->_construct;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(69)
							if ((tmp16)){
								HX_STACK_LINE(69)
								_g4->x;
							}
							else{
								HX_STACK_LINE(69)
								bool tmp17 = (_g4->listen_x != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(69)
								bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(69)
								if ((tmp17)){
									HX_STACK_LINE(69)
									bool tmp19 = _g4->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(69)
									bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(69)
									tmp18 = !(tmp20);
								}
								else{
									HX_STACK_LINE(69)
									tmp18 = false;
								}
								HX_STACK_LINE(69)
								if ((tmp18)){
									HX_STACK_LINE(69)
									Float tmp19 = _x;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(69)
									_g4->listen_x(tmp19);
								}
								HX_STACK_LINE(69)
								_g4->x;
							}
						}
					}
					HX_STACK_LINE(70)
					{
						HX_STACK_LINE(70)
						::phoenix::Vector tmp12 = shape->get_pos();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(70)
						::phoenix::Vector _g4 = tmp12;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(70)
						{
							HX_STACK_LINE(70)
							Float tmp13 = _g4->y;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(70)
							Float tmp14 = collision->separation->y;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(70)
							Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(70)
							Float _y = tmp15;		HX_STACK_VAR(_y,"_y");
							HX_STACK_LINE(70)
							_g4->y = _y;
							HX_STACK_LINE(70)
							bool tmp16 = _g4->_construct;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(70)
							if ((tmp16)){
								HX_STACK_LINE(70)
								_g4->y;
							}
							else{
								HX_STACK_LINE(70)
								bool tmp17 = (_g4->listen_y != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(70)
								bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(70)
								if ((tmp17)){
									HX_STACK_LINE(70)
									bool tmp19 = _g4->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(70)
									bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(70)
									tmp18 = !(tmp20);
								}
								else{
									HX_STACK_LINE(70)
									tmp18 = false;
								}
								HX_STACK_LINE(70)
								if ((tmp18)){
									HX_STACK_LINE(70)
									Float tmp19 = _y;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(70)
									_g4->listen_y(tmp19);
								}
								HX_STACK_LINE(70)
								_g4->y;
							}
						}
					}
					HX_STACK_LINE(72)
					Float tmp12 = collision->unitVector->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(72)
					bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(72)
					if ((tmp13)){
						HX_STACK_LINE(74)
						::phoenix::Vector _this = shape->velocity;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(74)
						_this->x = (int)0;
						HX_STACK_LINE(74)
						bool tmp14 = _this->_construct;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(74)
						if ((tmp14)){
							HX_STACK_LINE(74)
							_this->x;
						}
						else{
							HX_STACK_LINE(74)
							bool tmp15 = (_this->listen_x != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(74)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(74)
							if ((tmp15)){
								HX_STACK_LINE(74)
								bool tmp17 = _this->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(74)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(74)
								tmp16 = !(tmp18);
							}
							else{
								HX_STACK_LINE(74)
								tmp16 = false;
							}
							HX_STACK_LINE(74)
							if ((tmp16)){
								HX_STACK_LINE(74)
								_this->listen_x((int)0);
							}
							HX_STACK_LINE(74)
							_this->x;
						}
					}
					HX_STACK_LINE(76)
					Float tmp14 = collision->unitVector->y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(76)
					bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(76)
					if ((tmp15)){
						HX_STACK_LINE(78)
						::phoenix::Vector _this = shape->velocity;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(78)
						_this->y = (int)0;
						HX_STACK_LINE(78)
						bool tmp16 = _this->_construct;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(78)
						if ((tmp16)){
							HX_STACK_LINE(78)
							_this->y;
						}
						else{
							HX_STACK_LINE(78)
							bool tmp17 = (_this->listen_y != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(78)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(78)
							if ((tmp17)){
								HX_STACK_LINE(78)
								bool tmp19 = _this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(78)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(78)
								tmp18 = !(tmp20);
							}
							else{
								HX_STACK_LINE(78)
								tmp18 = false;
							}
							HX_STACK_LINE(78)
							if ((tmp18)){
								HX_STACK_LINE(78)
								_this->listen_y((int)0);
							}
							HX_STACK_LINE(78)
							_this->y;
						}
					}
					HX_STACK_LINE(81)
					::luxe::Entity tmp16 = shape->get_entity();		HX_STACK_VAR(tmp16,"tmp16");
					struct _Function_4_1{
						inline static Dynamic Block( ::DynamicShape &other_shape,::luxe::collision::data::ShapeCollision &collision){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Simulation.hx",81,0x05247637)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("data","\x2a","\x56","\x63","\x42") , collision,false);
								__result->Add(HX_HCSTRING("other","\xd0","\x66","\x76","\x36") , other_shape,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(81)
					Dynamic tmp17 = _Function_4_1::Block(other_shape,collision);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(81)
					tmp16->events->fire(HX_HCSTRING("oncollision","\x73","\xab","\xaa","\x5b"),tmp17,null());
				}
			}
		}
	}
return null();
}


Void Simulation_obj::render( ){
{
		HX_STACK_FRAME("Simulation","render",0xb297a5fd,"Simulation.render","Simulation.hx",87,0x05247637)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		bool tmp = this->get_draw();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		if ((tmp1)){
			HX_STACK_LINE(88)
			return null();
		}
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(90)
			Array< ::Dynamic > _g1 = this->static_colliders;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(90)
			while((true)){
				HX_STACK_LINE(90)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(90)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(90)
				if ((tmp3)){
					HX_STACK_LINE(90)
					break;
				}
				HX_STACK_LINE(90)
				::luxe::collision::shapes::Shape tmp4 = _g1->__get(_g).StaticCast< ::luxe::collision::shapes::Shape >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(90)
				::luxe::collision::shapes::Shape shape = tmp4;		HX_STACK_VAR(shape,"shape");
				HX_STACK_LINE(90)
				++(_g);
				HX_STACK_LINE(92)
				::luxe::collision::shapes::Polygon tmp5 = ((::luxe::collision::shapes::Polygon)(shape));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(92)
				::phoenix::Color tmp6 = this->static_color;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(92)
				this->draw_polygon(tmp5,tmp6,null());
			}
		}
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(94)
			Array< ::Dynamic > _g1 = this->dynamic_colliders;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(94)
			while((true)){
				HX_STACK_LINE(94)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(94)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(94)
				if ((tmp3)){
					HX_STACK_LINE(94)
					break;
				}
				HX_STACK_LINE(94)
				::DynamicShape tmp4 = _g1->__get(_g).StaticCast< ::DynamicShape >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(94)
				::DynamicShape shape = tmp4;		HX_STACK_VAR(shape,"shape");
				HX_STACK_LINE(94)
				++(_g);
				HX_STACK_LINE(96)
				::luxe::collision::shapes::Polygon tmp5 = ((::luxe::collision::shapes::Polygon)(shape->shape));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(96)
				::phoenix::Color tmp6 = this->dynamic_color;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(96)
				::phoenix::Vector tmp7 = shape->get_pos();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(96)
				bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(96)
				::phoenix::Vector tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(96)
				if ((tmp8)){
					HX_STACK_LINE(96)
					tmp9 = shape->shape->_position;
				}
				else{
					HX_STACK_LINE(96)
					tmp9 = shape->get_pos();
				}
				HX_STACK_LINE(96)
				this->draw_polygon(tmp5,tmp6,tmp9);
			}
		}
	}
return null();
}


Void Simulation_obj::draw_polygon( ::luxe::collision::shapes::Polygon poly,::phoenix::Color col,::phoenix::Vector pos){
{
		HX_STACK_FRAME("Simulation","draw_polygon",0xb9e15de6,"Simulation.draw_polygon","Simulation.hx",101,0x05247637)
		HX_STACK_THIS(this)
		HX_STACK_ARG(poly,"poly")
		HX_STACK_ARG(col,"col")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(102)
		::luxe::Draw tmp = ::Luxe_obj::draw;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		::phoenix::Color tmp1 = col;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		::phoenix::Batcher tmp2 = this->debug_batcher;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_1{
			inline static Dynamic Block( ::luxe::collision::shapes::Polygon &poly,::phoenix::Batcher &tmp2,::phoenix::Color &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Simulation.hx",102,0x05247637)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("points","\x23","\x12","\x2e","\xf7") , poly->get_vertices(),false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp1,false);
					__result->Add(HX_HCSTRING("solid","\x2b","\xb4","\xc5","\x80") , false,false);
					__result->Add(HX_HCSTRING("close","\xb8","\x17","\x63","\x48") , true,false);
					__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , true,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(102)
		Dynamic tmp3 = _Function_1_1::Block(poly,tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(102)
		::phoenix::geometry::Geometry tmp4 = tmp->poly(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(102)
		::phoenix::geometry::Geometry geo = tmp4;		HX_STACK_VAR(geo,"geo");
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			::phoenix::Spatial tmp5 = geo->transform->local;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(110)
			::phoenix::Vector _this = tmp5->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(110)
			bool tmp6 = (pos == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(110)
			::phoenix::Vector tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(110)
			if ((tmp6)){
				HX_STACK_LINE(110)
				tmp7 = poly->_position;
			}
			else{
				HX_STACK_LINE(110)
				tmp7 = pos;
			}
			HX_STACK_LINE(110)
			::phoenix::Vector _other = tmp7;		HX_STACK_VAR(_other,"_other");
			HX_STACK_LINE(110)
			{
				HX_STACK_LINE(110)
				Float _x = _other->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(110)
				Float _y = _other->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(110)
				Float _z = _other->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(110)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(110)
				_this->ignore_listeners = true;
				HX_STACK_LINE(110)
				{
					HX_STACK_LINE(110)
					_this->x = _x;
					HX_STACK_LINE(110)
					bool tmp8 = _this->_construct;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(110)
					if ((tmp8)){
						HX_STACK_LINE(110)
						_this->x;
					}
					else{
						HX_STACK_LINE(110)
						bool tmp9 = (_this->listen_x != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(110)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(110)
						if ((tmp9)){
							HX_STACK_LINE(110)
							bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(110)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(110)
							tmp10 = !(tmp12);
						}
						else{
							HX_STACK_LINE(110)
							tmp10 = false;
						}
						HX_STACK_LINE(110)
						if ((tmp10)){
							HX_STACK_LINE(110)
							Float tmp11 = _x;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(110)
							_this->listen_x(tmp11);
						}
						HX_STACK_LINE(110)
						_this->x;
					}
				}
				HX_STACK_LINE(110)
				{
					HX_STACK_LINE(110)
					_this->y = _y;
					HX_STACK_LINE(110)
					bool tmp8 = _this->_construct;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(110)
					if ((tmp8)){
						HX_STACK_LINE(110)
						_this->y;
					}
					else{
						HX_STACK_LINE(110)
						bool tmp9 = (_this->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(110)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(110)
						if ((tmp9)){
							HX_STACK_LINE(110)
							bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(110)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(110)
							tmp10 = !(tmp12);
						}
						else{
							HX_STACK_LINE(110)
							tmp10 = false;
						}
						HX_STACK_LINE(110)
						if ((tmp10)){
							HX_STACK_LINE(110)
							Float tmp11 = _y;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(110)
							_this->listen_y(tmp11);
						}
						HX_STACK_LINE(110)
						_this->y;
					}
				}
				HX_STACK_LINE(110)
				{
					HX_STACK_LINE(110)
					_this->z = _z;
					HX_STACK_LINE(110)
					bool tmp8 = _this->_construct;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(110)
					if ((tmp8)){
						HX_STACK_LINE(110)
						_this->z;
					}
					else{
						HX_STACK_LINE(110)
						bool tmp9 = (_this->listen_z != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(110)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(110)
						if ((tmp9)){
							HX_STACK_LINE(110)
							bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(110)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(110)
							tmp10 = !(tmp12);
						}
						else{
							HX_STACK_LINE(110)
							tmp10 = false;
						}
						HX_STACK_LINE(110)
						if ((tmp10)){
							HX_STACK_LINE(110)
							Float tmp11 = _z;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(110)
							_this->listen_z(tmp11);
						}
						HX_STACK_LINE(110)
						_this->z;
					}
				}
				HX_STACK_LINE(110)
				_this->w = _other->w;
				HX_STACK_LINE(110)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(110)
				bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(110)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(110)
				if ((tmp8)){
					HX_STACK_LINE(110)
					bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(110)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(110)
					tmp9 = !(tmp11);
				}
				else{
					HX_STACK_LINE(110)
					tmp9 = false;
				}
				HX_STACK_LINE(110)
				if ((tmp9)){
					HX_STACK_LINE(110)
					Float tmp10 = _this->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(110)
					_this->listen_x(tmp10);
				}
				HX_STACK_LINE(110)
				bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(110)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(110)
				if ((tmp10)){
					HX_STACK_LINE(110)
					bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(110)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(110)
					tmp11 = !(tmp13);
				}
				else{
					HX_STACK_LINE(110)
					tmp11 = false;
				}
				HX_STACK_LINE(110)
				if ((tmp11)){
					HX_STACK_LINE(110)
					Float tmp12 = _this->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(110)
					_this->listen_y(tmp12);
				}
				HX_STACK_LINE(110)
				bool tmp12 = (_this->listen_z != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(110)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(110)
				if ((tmp12)){
					HX_STACK_LINE(110)
					bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(110)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(110)
					tmp13 = !(tmp15);
				}
				else{
					HX_STACK_LINE(110)
					tmp13 = false;
				}
				HX_STACK_LINE(110)
				if ((tmp13)){
					HX_STACK_LINE(110)
					Float tmp14 = _this->z;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(110)
					_this->listen_z(tmp14);
				}
				HX_STACK_LINE(110)
				_this;
			}
			HX_STACK_LINE(110)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Simulation_obj,draw_polygon,(void))


Simulation_obj::Simulation_obj()
{
}

void Simulation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Simulation);
	HX_MARK_MEMBER_NAME(debug_batcher,"debug_batcher");
	HX_MARK_MEMBER_NAME(dynamic_colliders,"dynamic_colliders");
	HX_MARK_MEMBER_NAME(static_colliders,"static_colliders");
	HX_MARK_MEMBER_NAME(dynamic_color,"dynamic_color");
	HX_MARK_MEMBER_NAME(static_color,"static_color");
	::luxe::PhysicsEngine_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Simulation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(debug_batcher,"debug_batcher");
	HX_VISIT_MEMBER_NAME(dynamic_colliders,"dynamic_colliders");
	HX_VISIT_MEMBER_NAME(static_colliders,"static_colliders");
	HX_VISIT_MEMBER_NAME(dynamic_color,"dynamic_color");
	HX_VISIT_MEMBER_NAME(static_color,"static_color");
	::luxe::PhysicsEngine_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Simulation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"static_color") ) { return static_color; }
		if (HX_FIELD_EQ(inName,"draw_polygon") ) { return draw_polygon_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"debug_batcher") ) { return debug_batcher; }
		if (HX_FIELD_EQ(inName,"dynamic_color") ) { return dynamic_color; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"static_colliders") ) { return static_colliders; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"dynamic_colliders") ) { return dynamic_colliders; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Simulation_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"static_color") ) { static_color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"debug_batcher") ) { debug_batcher=inValue.Cast< ::phoenix::Batcher >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dynamic_color") ) { dynamic_color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"static_colliders") ) { static_colliders=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"dynamic_colliders") ) { dynamic_colliders=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Simulation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("debug_batcher","\x7b","\xd9","\xce","\x3f"));
	outFields->push(HX_HCSTRING("dynamic_colliders","\xbf","\x7e","\x39","\xc2"));
	outFields->push(HX_HCSTRING("static_colliders","\xae","\xac","\x03","\x56"));
	outFields->push(HX_HCSTRING("dynamic_color","\x63","\x81","\x00","\x30"));
	outFields->push(HX_HCSTRING("static_color","\xd2","\x4b","\x23","\x30"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Batcher*/ ,(int)offsetof(Simulation_obj,debug_batcher),HX_HCSTRING("debug_batcher","\x7b","\xd9","\xce","\x3f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Simulation_obj,dynamic_colliders),HX_HCSTRING("dynamic_colliders","\xbf","\x7e","\x39","\xc2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Simulation_obj,static_colliders),HX_HCSTRING("static_colliders","\xae","\xac","\x03","\x56")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Simulation_obj,dynamic_color),HX_HCSTRING("dynamic_color","\x63","\x81","\x00","\x30")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Simulation_obj,static_color),HX_HCSTRING("static_color","\xd2","\x4b","\x23","\x30")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("debug_batcher","\x7b","\xd9","\xce","\x3f"),
	HX_HCSTRING("dynamic_colliders","\xbf","\x7e","\x39","\xc2"),
	HX_HCSTRING("static_colliders","\xae","\xac","\x03","\x56"),
	HX_HCSTRING("dynamic_color","\x63","\x81","\x00","\x30"),
	HX_HCSTRING("static_color","\xd2","\x4b","\x23","\x30"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("draw_polygon","\xff","\x2b","\x8b","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Simulation_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Simulation_obj::__mClass,"__mClass");
};

#endif

hx::Class Simulation_obj::__mClass;

void Simulation_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Simulation","\xe7","\xd6","\x58","\x8e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Simulation_obj >;
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

