#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledObject
#include <luxe/importers/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledObjectGroup
#include <luxe/importers/tiled/TiledObjectGroup.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledObjectType
#include <luxe/importers/tiled/TiledObjectType.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledPolyObject
#include <luxe/importers/tiled/TiledPolyObject.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledUtil
#include <luxe/importers/tiled/TiledUtil.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{
namespace importers{
namespace tiled{

Void TiledObject_obj::__construct(::luxe::importers::tiled::TiledObjectGroup _group)
{
HX_STACK_FRAME("luxe.importers.tiled.TiledObject","new",0x9c9edd6a,"luxe.importers.tiled.TiledObject.new","luxe/importers/tiled/TiledObjectGroup.hx",24,0x738a9294)
HX_STACK_THIS(this)
HX_STACK_ARG(_group,"_group")
{
	HX_STACK_LINE(46)
	this->visible = true;
	HX_STACK_LINE(55)
	this->group = _group;
	HX_STACK_LINE(56)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		tmp = tmp2;
	}
	HX_STACK_LINE(56)
	this->properties = tmp;
	HX_STACK_LINE(57)
	::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	this->pos = tmp1;
}
;
	return null();
}

//TiledObject_obj::~TiledObject_obj() { }

Dynamic TiledObject_obj::__CreateEmpty() { return  new TiledObject_obj; }
hx::ObjectPtr< TiledObject_obj > TiledObject_obj::__new(::luxe::importers::tiled::TiledObjectGroup _group)
{  hx::ObjectPtr< TiledObject_obj > _result_ = new TiledObject_obj();
	_result_->__construct(_group);
	return _result_;}

Dynamic TiledObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledObject_obj > _result_ = new TiledObject_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::luxe::importers::tiled::TiledPolyObject TiledObject_obj::polyobject_from_xml( ::Xml xml){
	HX_STACK_FRAME("luxe.importers.tiled.TiledObject","polyobject_from_xml",0x18483640,"luxe.importers.tiled.TiledObject.polyobject_from_xml","luxe/importers/tiled/TiledObjectGroup.hx",60,0x738a9294)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_LINE(62)
	Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
	HX_STACK_LINE(63)
	::String tmp = xml->get(HX_HCSTRING("points","\x23","\x12","\x2e","\xf7"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	::String pointsAsString = tmp;		HX_STACK_VAR(pointsAsString,"pointsAsString");
	HX_STACK_LINE(64)
	Array< ::String > pointsAsStringArray = pointsAsString.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(pointsAsStringArray,"pointsAsStringArray");
	HX_STACK_LINE(66)
	{
		HX_STACK_LINE(66)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(66)
		while((true)){
			HX_STACK_LINE(66)
			bool tmp1 = (_g < pointsAsStringArray->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(66)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(66)
			if ((tmp2)){
				HX_STACK_LINE(66)
				break;
			}
			HX_STACK_LINE(66)
			::String tmp3 = pointsAsStringArray->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			::String point = tmp3;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(66)
			++(_g);
			HX_STACK_LINE(67)
			Array< ::String > coords = point.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(coords,"coords");
			HX_STACK_LINE(68)
			::String tmp4 = coords->__get((int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(68)
			Dynamic tmp5 = ::Std_obj::parseInt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(68)
			::String tmp6 = coords->__get((int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(68)
			Dynamic tmp7 = ::Std_obj::parseInt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(68)
			::phoenix::Vector tmp8 = ::phoenix::Vector_obj::__new(tmp5,tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(68)
			points->push(tmp8);
		}
	}
	HX_STACK_LINE(71)
	::phoenix::Vector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		::phoenix::Vector tmp2 = this->pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		::phoenix::Vector _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(71)
		tmp1 = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
	}
	HX_STACK_LINE(71)
	::luxe::importers::tiled::TiledPolyObject tmp2 = ::luxe::importers::tiled::TiledPolyObject_obj::__new(tmp1,points);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledObject_obj,polyobject_from_xml,return )

::luxe::importers::tiled::TiledPolyObject TiledObject_obj::polyobject_from_json( Dynamic json){
	HX_STACK_FRAME("luxe.importers.tiled.TiledObject","polyobject_from_json",0x1daad59f,"luxe.importers.tiled.TiledObject.polyobject_from_json","luxe/importers/tiled/TiledObjectGroup.hx",75,0x738a9294)
	HX_STACK_THIS(this)
	HX_STACK_ARG(json,"json")
	HX_STACK_LINE(79)
	Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
	HX_STACK_LINE(80)
	cpp::ArrayBase point_list = ((cpp::ArrayBase)(json));		HX_STACK_VAR(point_list,"point_list");
	HX_STACK_LINE(81)
	{
		HX_STACK_LINE(81)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(81)
		while((true)){
			HX_STACK_LINE(81)
			bool tmp = (_g < point_list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(81)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(81)
			if ((tmp1)){
				HX_STACK_LINE(81)
				break;
			}
			HX_STACK_LINE(81)
			Dynamic tmp2 = point_list->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(81)
			Dynamic point = tmp2;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(81)
			++(_g);
			HX_STACK_LINE(82)
			Dynamic tmp3 = point;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(82)
			Dynamic tmp4 = ::Reflect_obj::field(tmp3,HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			Float _x = ((Float)(tmp4));		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(83)
			Dynamic tmp5 = point;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(83)
			Dynamic tmp6 = ::Reflect_obj::field(tmp5,HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(83)
			Float _y = ((Float)(tmp6));		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(84)
			::phoenix::Vector tmp7 = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(84)
			points->push(tmp7);
		}
	}
	HX_STACK_LINE(87)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	{
		HX_STACK_LINE(87)
		::phoenix::Vector tmp1 = this->pos;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(87)
		tmp = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
	}
	HX_STACK_LINE(87)
	::luxe::importers::tiled::TiledPolyObject tmp1 = ::luxe::importers::tiled::TiledPolyObject_obj::__new(tmp,points);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(87)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledObject_obj,polyobject_from_json,return )

Void TiledObject_obj::from_xml( ::Xml xml){
{
		HX_STACK_FRAME("luxe.importers.tiled.TiledObject","from_xml",0x4930c3f8,"luxe.importers.tiled.TiledObject.from_xml","luxe/importers/tiled/TiledObjectGroup.hx",91,0x738a9294)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_LINE(93)
		::String tmp = xml->get(HX_HCSTRING("gid","\x02","\x84","\x4e","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		if ((tmp1)){
			HX_STACK_LINE(93)
			::String tmp3 = xml->get(HX_HCSTRING("gid","\x02","\x84","\x4e","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(93)
			tmp2 = ::Std_obj::parseInt(tmp3);
		}
		else{
			HX_STACK_LINE(93)
			tmp2 = (int)0;
		}
		HX_STACK_LINE(93)
		this->gid = tmp2;
		HX_STACK_LINE(94)
		::String tmp3 = xml->get(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		Dynamic tmp4 = ::Std_obj::parseInt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		this->id = tmp4;
		HX_STACK_LINE(95)
		::String tmp5 = xml->get(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(95)
		this->name = tmp5;
		HX_STACK_LINE(96)
		::String tmp6 = xml->get(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		this->type = tmp6;
		HX_STACK_LINE(97)
		::String tmp7 = xml->get(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(97)
		bool tmp8 = (tmp7 != HX_HCSTRING("0","\x30","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(97)
		this->visible = tmp8;
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			::phoenix::Vector tmp9 = this->pos;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(98)
			::phoenix::Vector _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(98)
			::String tmp10 = xml->get(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(98)
			Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(98)
			Float _x = tmp11;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(98)
			_this->x = _x;
			HX_STACK_LINE(98)
			bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(98)
			if ((tmp12)){
				HX_STACK_LINE(98)
				_this->x;
			}
			else{
				HX_STACK_LINE(98)
				bool tmp13 = (_this->listen_x != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(98)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(98)
				if ((tmp13)){
					HX_STACK_LINE(98)
					bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(98)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(98)
					tmp14 = !(tmp16);
				}
				else{
					HX_STACK_LINE(98)
					tmp14 = false;
				}
				HX_STACK_LINE(98)
				if ((tmp14)){
					HX_STACK_LINE(98)
					Float tmp15 = _x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(98)
					_this->listen_x(tmp15);
				}
				HX_STACK_LINE(98)
				_this->x;
			}
		}
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			::phoenix::Vector tmp9 = this->pos;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(99)
			::phoenix::Vector _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(99)
			::String tmp10 = xml->get(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(99)
			Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(99)
			Float _y = tmp11;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(99)
			_this->y = _y;
			HX_STACK_LINE(99)
			bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(99)
			if ((tmp12)){
				HX_STACK_LINE(99)
				_this->y;
			}
			else{
				HX_STACK_LINE(99)
				bool tmp13 = (_this->listen_y != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(99)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(99)
				if ((tmp13)){
					HX_STACK_LINE(99)
					bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(99)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(99)
					tmp14 = !(tmp16);
				}
				else{
					HX_STACK_LINE(99)
					tmp14 = false;
				}
				HX_STACK_LINE(99)
				if ((tmp14)){
					HX_STACK_LINE(99)
					Float tmp15 = _y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(99)
					_this->listen_y(tmp15);
				}
				HX_STACK_LINE(99)
				_this->y;
			}
		}
		HX_STACK_LINE(100)
		::String tmp9 = xml->get(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(100)
		Dynamic tmp10 = ::Std_obj::parseInt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(100)
		this->width = tmp10;
		HX_STACK_LINE(101)
		::String tmp11 = xml->get(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(101)
		Dynamic tmp12 = ::Std_obj::parseInt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(101)
		this->height = tmp12;
		HX_STACK_LINE(102)
		::String tmp13 = xml->get(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(102)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(102)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(102)
		if ((tmp14)){
			HX_STACK_LINE(102)
			::String tmp16 = xml->get(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(102)
			tmp15 = ::Std_obj::parseFloat(tmp16);
		}
		else{
			HX_STACK_LINE(102)
			tmp15 = (int)0;
		}
		HX_STACK_LINE(102)
		this->rotation = tmp15;
		HX_STACK_LINE(105)
		this->object_type = ::luxe::importers::tiled::TiledObjectType_obj::rectangle;
		HX_STACK_LINE(107)
		Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			{
				HX_STACK_LINE(107)
				int tmp17 = xml->nodeType;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(107)
				int tmp18 = ::Xml_obj::Document;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(107)
				bool tmp19 = (tmp17 != tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(107)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(107)
				if ((tmp19)){
					HX_STACK_LINE(107)
					int tmp21 = xml->nodeType;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(107)
					int tmp22 = ::Xml_obj::Element;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(107)
					int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(107)
					tmp20 = (tmp21 != tmp23);
				}
				else{
					HX_STACK_LINE(107)
					tmp20 = false;
				}
				HX_STACK_LINE(107)
				if ((tmp20)){
					HX_STACK_LINE(107)
					::String tmp21 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + xml->nodeType);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(107)
					HX_STACK_DO_THROW(tmp21);
				}
			}
			HX_STACK_LINE(107)
			tmp16 = xml->children->iteratorFast< ::Xml >();
		}
		HX_STACK_LINE(107)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp16);  __it->hasNext(); ){
			::Xml child = __it->next();
			{
				HX_STACK_LINE(108)
				::Xml tmp17 = child;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(108)
				bool tmp18 = ::luxe::importers::tiled::TiledUtil_obj::valid_element(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(108)
				if ((tmp18)){
					HX_STACK_LINE(109)
					::String tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(109)
					{
						HX_STACK_LINE(109)
						int tmp20 = child->nodeType;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(109)
						int tmp21 = ::Xml_obj::Element;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(109)
						bool tmp22 = (tmp20 != tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(109)
						if ((tmp22)){
							HX_STACK_LINE(109)
							::String tmp23 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + child->nodeType);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(109)
							HX_STACK_DO_THROW(tmp23);
						}
						HX_STACK_LINE(109)
						tmp19 = child->nodeName;
					}
					HX_STACK_LINE(109)
					::String _g = tmp19;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(109)
					::String tmp20 = _g;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(109)
					::String _switch_1 = (tmp20);
					if (  ( _switch_1==HX_HCSTRING("polygon","\x7a","\x02","\x91","\x12"))){
						HX_STACK_LINE(112)
						this->object_type = ::luxe::importers::tiled::TiledObjectType_obj::polygon;
						HX_STACK_LINE(113)
						::Xml tmp21 = child;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(113)
						::luxe::importers::tiled::TiledPolyObject tmp22 = this->polyobject_from_xml(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(113)
						this->polyobject = tmp22;
					}
					else if (  ( _switch_1==HX_HCSTRING("polyline","\x40","\xac","\x9a","\x2f"))){
						HX_STACK_LINE(117)
						this->object_type = ::luxe::importers::tiled::TiledObjectType_obj::polyline;
						HX_STACK_LINE(118)
						::Xml tmp21 = child;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(118)
						::luxe::importers::tiled::TiledPolyObject tmp22 = this->polyobject_from_xml(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(118)
						this->polyobject = tmp22;
					}
					else if (  ( _switch_1==HX_HCSTRING("ellipse","\xde","\x40","\x86","\x0b"))){
						HX_STACK_LINE(122)
						this->object_type = ::luxe::importers::tiled::TiledObjectType_obj::ellipse;
						HX_STACK_LINE(124)
						int tmp21 = this->width;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(124)
						Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(124)
						int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(124)
						int _mid_x = tmp23;		HX_STACK_VAR(_mid_x,"_mid_x");
						HX_STACK_LINE(125)
						int tmp24 = this->height;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(125)
						Float tmp25 = (Float(tmp24) / Float((int)2));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(125)
						int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(125)
						int _mid_y = tmp26;		HX_STACK_VAR(_mid_y,"_mid_y");
						HX_STACK_LINE(127)
						{
							HX_STACK_LINE(127)
							::phoenix::Vector tmp27 = this->pos;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(127)
							::phoenix::Vector _g1 = tmp27;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(127)
							{
								HX_STACK_LINE(127)
								Float tmp28 = (_g1->x + _mid_x);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(127)
								Float _x = tmp28;		HX_STACK_VAR(_x,"_x");
								HX_STACK_LINE(127)
								_g1->x = _x;
								HX_STACK_LINE(127)
								bool tmp29 = _g1->_construct;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(127)
								if ((tmp29)){
									HX_STACK_LINE(127)
									_g1->x;
								}
								else{
									HX_STACK_LINE(127)
									bool tmp30 = (_g1->listen_x != null());		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(127)
									bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(127)
									if ((tmp30)){
										HX_STACK_LINE(127)
										bool tmp32 = _g1->ignore_listeners;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(127)
										bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(127)
										tmp31 = !(tmp33);
									}
									else{
										HX_STACK_LINE(127)
										tmp31 = false;
									}
									HX_STACK_LINE(127)
									if ((tmp31)){
										HX_STACK_LINE(127)
										Float tmp32 = _x;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(127)
										_g1->listen_x(tmp32);
									}
									HX_STACK_LINE(127)
									_g1->x;
								}
							}
						}
						HX_STACK_LINE(128)
						{
							HX_STACK_LINE(128)
							::phoenix::Vector tmp27 = this->pos;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(128)
							::phoenix::Vector _g1 = tmp27;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(128)
							{
								HX_STACK_LINE(128)
								Float tmp28 = (_g1->y + _mid_y);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(128)
								Float _y = tmp28;		HX_STACK_VAR(_y,"_y");
								HX_STACK_LINE(128)
								_g1->y = _y;
								HX_STACK_LINE(128)
								bool tmp29 = _g1->_construct;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(128)
								if ((tmp29)){
									HX_STACK_LINE(128)
									_g1->y;
								}
								else{
									HX_STACK_LINE(128)
									bool tmp30 = (_g1->listen_y != null());		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(128)
									bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(128)
									if ((tmp30)){
										HX_STACK_LINE(128)
										bool tmp32 = _g1->ignore_listeners;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(128)
										bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(128)
										tmp31 = !(tmp33);
									}
									else{
										HX_STACK_LINE(128)
										tmp31 = false;
									}
									HX_STACK_LINE(128)
									if ((tmp31)){
										HX_STACK_LINE(128)
										Float tmp32 = _y;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(128)
										_g1->listen_y(tmp32);
									}
									HX_STACK_LINE(128)
									_g1->y;
								}
							}
						}
					}
					else if (  ( _switch_1==HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"))){
						HX_STACK_LINE(133)
						Dynamic tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(133)
						{
							HX_STACK_LINE(133)
							{
								HX_STACK_LINE(133)
								int tmp22 = child->nodeType;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(133)
								int tmp23 = ::Xml_obj::Document;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(133)
								bool tmp24 = (tmp22 != tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(133)
								bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(133)
								if ((tmp24)){
									HX_STACK_LINE(133)
									int tmp26 = child->nodeType;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(133)
									int tmp27 = ::Xml_obj::Element;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(133)
									int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(133)
									tmp25 = (tmp26 != tmp28);
								}
								else{
									HX_STACK_LINE(133)
									tmp25 = false;
								}
								HX_STACK_LINE(133)
								if ((tmp25)){
									HX_STACK_LINE(133)
									::String tmp26 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + child->nodeType);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(133)
									HX_STACK_DO_THROW(tmp26);
								}
							}
							HX_STACK_LINE(133)
							tmp21 = child->children->iteratorFast< ::Xml >();
						}
						HX_STACK_LINE(133)
						for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp21);  __it->hasNext(); ){
							::Xml property = __it->next();
							{
								HX_STACK_LINE(134)
								::Xml tmp22 = property;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(134)
								bool tmp23 = ::luxe::importers::tiled::TiledUtil_obj::valid_element(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(134)
								if ((tmp23)){
									HX_STACK_LINE(135)
									::String tmp24 = property->get(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(135)
									::String key = tmp24;		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(135)
									::String tmp25 = property->get(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(135)
									::String value = tmp25;		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(135)
									::haxe::ds::StringMap tmp26 = this->properties;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(135)
									::String tmp27 = key;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(135)
									::String tmp28 = value;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(135)
									tmp26->set(tmp27,tmp28);
								}
							}
;
						}
					}
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledObject_obj,from_xml,(void))

Void TiledObject_obj::from_json( Dynamic json){
{
		HX_STACK_FRAME("luxe.importers.tiled.TiledObject","from_json",0xb83e48e7,"luxe.importers.tiled.TiledObject.from_json","luxe/importers/tiled/TiledObjectGroup.hx",146,0x738a9294)
		HX_STACK_THIS(this)
		HX_STACK_ARG(json,"json")
		HX_STACK_LINE(148)
		Dynamic tmp = json;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		Dynamic tmp1 = ::Reflect_obj::field(tmp,HX_HCSTRING("gid","\x02","\x84","\x4e","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		Dynamic _gid = tmp1;		HX_STACK_VAR(_gid,"_gid");
		HX_STACK_LINE(149)
		bool tmp2 = (_gid != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(149)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		if ((tmp2)){
			HX_STACK_LINE(149)
			tmp3 = ((int)(_gid));
		}
		else{
			HX_STACK_LINE(149)
			tmp3 = (int)0;
		}
		HX_STACK_LINE(149)
		this->gid = tmp3;
		HX_STACK_LINE(151)
		Dynamic tmp4 = json;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(151)
		Dynamic tmp5 = ::Reflect_obj::field(tmp4,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(151)
		this->id = ((int)(tmp5));
		HX_STACK_LINE(152)
		Dynamic tmp6 = json;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(152)
		Dynamic tmp7 = ::Reflect_obj::field(tmp6,HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(152)
		this->name = tmp7;
		HX_STACK_LINE(153)
		Dynamic tmp8 = json;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(153)
		Dynamic tmp9 = ::Reflect_obj::field(tmp8,HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(153)
		this->type = tmp9;
		HX_STACK_LINE(154)
		Dynamic tmp10 = json;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(154)
		Dynamic tmp11 = ::Reflect_obj::field(tmp10,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(154)
		this->visible = ((bool)(tmp11));
		HX_STACK_LINE(155)
		{
			HX_STACK_LINE(155)
			::phoenix::Vector tmp12 = this->pos;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(155)
			::phoenix::Vector _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(155)
			Dynamic tmp13 = json;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(155)
			Dynamic tmp14 = ::Reflect_obj::field(tmp13,HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(155)
			Float _x = ((Float)(tmp14));		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(155)
			_this->x = _x;
			HX_STACK_LINE(155)
			bool tmp15 = _this->_construct;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(155)
			if ((tmp15)){
				HX_STACK_LINE(155)
				_this->x;
			}
			else{
				HX_STACK_LINE(155)
				bool tmp16 = (_this->listen_x != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(155)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(155)
				if ((tmp16)){
					HX_STACK_LINE(155)
					bool tmp18 = _this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(155)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(155)
					tmp17 = !(tmp19);
				}
				else{
					HX_STACK_LINE(155)
					tmp17 = false;
				}
				HX_STACK_LINE(155)
				if ((tmp17)){
					HX_STACK_LINE(155)
					Float tmp18 = _x;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(155)
					_this->listen_x(tmp18);
				}
				HX_STACK_LINE(155)
				_this->x;
			}
		}
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			::phoenix::Vector tmp12 = this->pos;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(156)
			::phoenix::Vector _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(156)
			Dynamic tmp13 = json;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(156)
			Dynamic tmp14 = ::Reflect_obj::field(tmp13,HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(156)
			Float _y = ((Float)(tmp14));		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(156)
			_this->y = _y;
			HX_STACK_LINE(156)
			bool tmp15 = _this->_construct;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(156)
			if ((tmp15)){
				HX_STACK_LINE(156)
				_this->y;
			}
			else{
				HX_STACK_LINE(156)
				bool tmp16 = (_this->listen_y != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(156)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(156)
				if ((tmp16)){
					HX_STACK_LINE(156)
					bool tmp18 = _this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(156)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(156)
					tmp17 = !(tmp19);
				}
				else{
					HX_STACK_LINE(156)
					tmp17 = false;
				}
				HX_STACK_LINE(156)
				if ((tmp17)){
					HX_STACK_LINE(156)
					Float tmp18 = _y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(156)
					_this->listen_y(tmp18);
				}
				HX_STACK_LINE(156)
				_this->y;
			}
		}
		HX_STACK_LINE(157)
		Dynamic tmp12 = json;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(157)
		Dynamic tmp13 = ::Reflect_obj::field(tmp12,HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(157)
		this->width = ((int)(tmp13));
		HX_STACK_LINE(158)
		Dynamic tmp14 = json;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(158)
		Dynamic tmp15 = ::Reflect_obj::field(tmp14,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(158)
		this->height = ((int)(tmp15));
		HX_STACK_LINE(160)
		Dynamic tmp16 = json;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(160)
		Dynamic tmp17 = ::Reflect_obj::field(tmp16,HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(160)
		Dynamic _rotation = tmp17;		HX_STACK_VAR(_rotation,"_rotation");
		HX_STACK_LINE(161)
		bool tmp18 = (_rotation != null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(161)
		Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(161)
		if ((tmp18)){
			HX_STACK_LINE(161)
			tmp19 = ((Float)(_rotation));
		}
		else{
			HX_STACK_LINE(161)
			tmp19 = (int)0;
		}
		HX_STACK_LINE(161)
		this->rotation = tmp19;
		HX_STACK_LINE(164)
		this->object_type = ::luxe::importers::tiled::TiledObjectType_obj::rectangle;
		HX_STACK_LINE(166)
		Dynamic tmp20 = json;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(166)
		Array< ::String > fields = ::Reflect_obj::fields(tmp20);		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(167)
		{
			HX_STACK_LINE(167)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(167)
			while((true)){
				HX_STACK_LINE(167)
				bool tmp21 = (_g < fields->length);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(167)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(167)
				if ((tmp22)){
					HX_STACK_LINE(167)
					break;
				}
				HX_STACK_LINE(167)
				::String tmp23 = fields->__get(_g);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(167)
				::String nodename = tmp23;		HX_STACK_VAR(nodename,"nodename");
				HX_STACK_LINE(167)
				++(_g);
				HX_STACK_LINE(168)
				Dynamic tmp24 = json;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(168)
				::String tmp25 = nodename;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(168)
				Dynamic tmp26 = ::Reflect_obj::field(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(168)
				Dynamic child = tmp26;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(169)
				::String tmp27 = nodename;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(169)
				::String _switch_2 = (tmp27);
				if (  ( _switch_2==HX_HCSTRING("polygon","\x7a","\x02","\x91","\x12"))){
					HX_STACK_LINE(172)
					this->object_type = ::luxe::importers::tiled::TiledObjectType_obj::polygon;
					HX_STACK_LINE(173)
					Dynamic tmp28 = child;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(173)
					::luxe::importers::tiled::TiledPolyObject tmp29 = this->polyobject_from_json(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(173)
					this->polyobject = tmp29;
				}
				else if (  ( _switch_2==HX_HCSTRING("polyline","\x40","\xac","\x9a","\x2f"))){
					HX_STACK_LINE(177)
					this->object_type = ::luxe::importers::tiled::TiledObjectType_obj::polyline;
					HX_STACK_LINE(178)
					Dynamic tmp28 = child;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(178)
					::luxe::importers::tiled::TiledPolyObject tmp29 = this->polyobject_from_json(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(178)
					this->polyobject = tmp29;
				}
				else if (  ( _switch_2==HX_HCSTRING("ellipse","\xde","\x40","\x86","\x0b"))){
					HX_STACK_LINE(182)
					this->object_type = ::luxe::importers::tiled::TiledObjectType_obj::ellipse;
					HX_STACK_LINE(184)
					int tmp28 = this->width;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(184)
					Float tmp29 = (Float(tmp28) / Float((int)2));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(184)
					int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(184)
					int _mid_x = tmp30;		HX_STACK_VAR(_mid_x,"_mid_x");
					HX_STACK_LINE(185)
					int tmp31 = this->height;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(185)
					Float tmp32 = (Float(tmp31) / Float((int)2));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(185)
					int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(185)
					int _mid_y = tmp33;		HX_STACK_VAR(_mid_y,"_mid_y");
					HX_STACK_LINE(187)
					{
						HX_STACK_LINE(187)
						::phoenix::Vector tmp34 = this->pos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(187)
						::phoenix::Vector _g1 = tmp34;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(187)
						{
							HX_STACK_LINE(187)
							Float tmp35 = (_g1->x + _mid_x);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(187)
							Float _x = tmp35;		HX_STACK_VAR(_x,"_x");
							HX_STACK_LINE(187)
							_g1->x = _x;
							HX_STACK_LINE(187)
							bool tmp36 = _g1->_construct;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(187)
							if ((tmp36)){
								HX_STACK_LINE(187)
								_g1->x;
							}
							else{
								HX_STACK_LINE(187)
								bool tmp37 = (_g1->listen_x != null());		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(187)
								bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(187)
								if ((tmp37)){
									HX_STACK_LINE(187)
									bool tmp39 = _g1->ignore_listeners;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(187)
									bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(187)
									tmp38 = !(tmp40);
								}
								else{
									HX_STACK_LINE(187)
									tmp38 = false;
								}
								HX_STACK_LINE(187)
								if ((tmp38)){
									HX_STACK_LINE(187)
									Float tmp39 = _x;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(187)
									_g1->listen_x(tmp39);
								}
								HX_STACK_LINE(187)
								_g1->x;
							}
						}
					}
					HX_STACK_LINE(188)
					{
						HX_STACK_LINE(188)
						::phoenix::Vector tmp34 = this->pos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(188)
						::phoenix::Vector _g1 = tmp34;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(188)
						{
							HX_STACK_LINE(188)
							Float tmp35 = (_g1->y + _mid_y);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(188)
							Float _y = tmp35;		HX_STACK_VAR(_y,"_y");
							HX_STACK_LINE(188)
							_g1->y = _y;
							HX_STACK_LINE(188)
							bool tmp36 = _g1->_construct;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(188)
							if ((tmp36)){
								HX_STACK_LINE(188)
								_g1->y;
							}
							else{
								HX_STACK_LINE(188)
								bool tmp37 = (_g1->listen_y != null());		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(188)
								bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(188)
								if ((tmp37)){
									HX_STACK_LINE(188)
									bool tmp39 = _g1->ignore_listeners;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(188)
									bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(188)
									tmp38 = !(tmp40);
								}
								else{
									HX_STACK_LINE(188)
									tmp38 = false;
								}
								HX_STACK_LINE(188)
								if ((tmp38)){
									HX_STACK_LINE(188)
									Float tmp39 = _y;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(188)
									_g1->listen_y(tmp39);
								}
								HX_STACK_LINE(188)
								_g1->y;
							}
						}
					}
				}
				else if (  ( _switch_2==HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"))){
					HX_STACK_LINE(193)
					Dynamic tmp28 = child;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(193)
					Array< ::String > child_fields = ::Reflect_obj::fields(tmp28);		HX_STACK_VAR(child_fields,"child_fields");
					HX_STACK_LINE(194)
					{
						HX_STACK_LINE(194)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(194)
						while((true)){
							HX_STACK_LINE(194)
							bool tmp29 = (_g1 < child_fields->length);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(194)
							bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(194)
							if ((tmp30)){
								HX_STACK_LINE(194)
								break;
							}
							HX_STACK_LINE(194)
							::String tmp31 = child_fields->__get(_g1);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(194)
							::String property_name = tmp31;		HX_STACK_VAR(property_name,"property_name");
							HX_STACK_LINE(194)
							++(_g1);
							HX_STACK_LINE(195)
							{
								HX_STACK_LINE(195)
								Dynamic tmp32 = child;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(195)
								::String tmp33 = property_name;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(195)
								Dynamic tmp34 = ::Reflect_obj::field(tmp32,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(195)
								::String value = tmp34;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(195)
								::haxe::ds::StringMap tmp35 = this->properties;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(195)
								::String tmp36 = property_name;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(195)
								::String tmp37 = value;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(195)
								tmp35->set(tmp36,tmp37);
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledObject_obj,from_json,(void))


TiledObject_obj::TiledObject_obj()
{
}

void TiledObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledObject);
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(gid,"gid");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(polyobject,"polyobject");
	HX_MARK_MEMBER_NAME(object_type,"object_type");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_END_CLASS();
}

void TiledObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(gid,"gid");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(polyobject,"polyobject");
	HX_VISIT_MEMBER_NAME(object_type,"object_type");
	HX_VISIT_MEMBER_NAME(properties,"properties");
}

Dynamic TiledObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		if (HX_FIELD_EQ(inName,"gid") ) { return gid; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		if (HX_FIELD_EQ(inName,"from_xml") ) { return from_xml_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"from_json") ) { return from_json_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"polyobject") ) { return polyobject; }
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"object_type") ) { return object_type; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"polyobject_from_xml") ) { return polyobject_from_xml_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"polyobject_from_json") ) { return polyobject_from_json_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gid") ) { gid=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast< ::luxe::importers::tiled::TiledObjectGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"polyobject") ) { polyobject=inValue.Cast< ::luxe::importers::tiled::TiledPolyObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"object_type") ) { object_type=inValue.Cast< ::luxe::importers::tiled::TiledObjectType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("gid","\x02","\x84","\x4e","\x00"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("polyobject","\x0b","\xbe","\x6d","\x75"));
	outFields->push(HX_HCSTRING("object_type","\x7a","\xbb","\x1b","\xdc"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::importers::tiled::TiledObjectGroup*/ ,(int)offsetof(TiledObject_obj,group),HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99")},
	{hx::fsInt,(int)offsetof(TiledObject_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsString,(int)offsetof(TiledObject_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(TiledObject_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(TiledObject_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsInt,(int)offsetof(TiledObject_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(TiledObject_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(TiledObject_obj,rotation),HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08")},
	{hx::fsInt,(int)offsetof(TiledObject_obj,gid),HX_HCSTRING("gid","\x02","\x84","\x4e","\x00")},
	{hx::fsBool,(int)offsetof(TiledObject_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsObject /*::luxe::importers::tiled::TiledPolyObject*/ ,(int)offsetof(TiledObject_obj,polyobject),HX_HCSTRING("polyobject","\x0b","\xbe","\x6d","\x75")},
	{hx::fsObject /*::luxe::importers::tiled::TiledObjectType*/ ,(int)offsetof(TiledObject_obj,object_type),HX_HCSTRING("object_type","\x7a","\xbb","\x1b","\xdc")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TiledObject_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"),
	HX_HCSTRING("gid","\x02","\x84","\x4e","\x00"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("polyobject","\x0b","\xbe","\x6d","\x75"),
	HX_HCSTRING("object_type","\x7a","\xbb","\x1b","\xdc"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("polyobject_from_xml","\x36","\xf5","\xcc","\x76"),
	HX_HCSTRING("polyobject_from_json","\xe9","\x2d","\x4d","\x73"),
	HX_HCSTRING("from_xml","\x42","\x55","\x19","\xb2"),
	HX_HCSTRING("from_json","\x5d","\xd8","\xd4","\x1a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledObject_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledObject_obj::__mClass;

void TiledObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.importers.tiled.TiledObject","\x78","\xa0","\x7d","\xc6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledObject_obj >;
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
} // end namespace importers
} // end namespace tiled
