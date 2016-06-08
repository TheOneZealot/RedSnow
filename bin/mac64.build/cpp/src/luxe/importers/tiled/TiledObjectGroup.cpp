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
#ifndef INCLUDED_luxe_importers_tiled_TiledMapData
#include <luxe/importers/tiled/TiledMapData.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledObject
#include <luxe/importers/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledObjectGroup
#include <luxe/importers/tiled/TiledObjectGroup.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledUtil
#include <luxe/importers/tiled/TiledUtil.h>
#endif
namespace luxe{
namespace importers{
namespace tiled{

Void TiledObjectGroup_obj::__construct(::luxe::importers::tiled::TiledMapData _map)
{
HX_STACK_FRAME("luxe.importers.tiled.TiledObjectGroup","new",0x144dd019,"luxe.importers.tiled.TiledObjectGroup.new","luxe/importers/tiled/TiledObjectGroup.hx",206,0x738a9294)
HX_STACK_THIS(this)
HX_STACK_ARG(_map,"_map")
{
	HX_STACK_LINE(215)
	this->color = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(214)
	this->opacity = ((Float)1.0);
	HX_STACK_LINE(213)
	this->visible = true;
	HX_STACK_LINE(212)
	this->height = (int)0;
	HX_STACK_LINE(211)
	this->width = (int)0;
	HX_STACK_LINE(209)
	this->name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(220)
	this->map = _map;
	HX_STACK_LINE(222)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	{
		HX_STACK_LINE(222)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(222)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(222)
		tmp = tmp2;
	}
	HX_STACK_LINE(222)
	this->properties = tmp;
	HX_STACK_LINE(223)
	this->objects = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//TiledObjectGroup_obj::~TiledObjectGroup_obj() { }

Dynamic TiledObjectGroup_obj::__CreateEmpty() { return  new TiledObjectGroup_obj; }
hx::ObjectPtr< TiledObjectGroup_obj > TiledObjectGroup_obj::__new(::luxe::importers::tiled::TiledMapData _map)
{  hx::ObjectPtr< TiledObjectGroup_obj > _result_ = new TiledObjectGroup_obj();
	_result_->__construct(_map);
	return _result_;}

Dynamic TiledObjectGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledObjectGroup_obj > _result_ = new TiledObjectGroup_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void TiledObjectGroup_obj::from_xml( ::Xml xml){
{
		HX_STACK_FRAME("luxe.importers.tiled.TiledObjectGroup","from_xml",0x9088b6e9,"luxe.importers.tiled.TiledObjectGroup.from_xml","luxe/importers/tiled/TiledObjectGroup.hx",227,0x738a9294)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_LINE(229)
		::String tmp = xml->get(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(229)
		this->name = tmp;
		HX_STACK_LINE(230)
		::String tmp1 = xml->get(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(230)
		this->color = tmp1;
		HX_STACK_LINE(231)
		::String tmp2 = xml->get(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(231)
		bool tmp3 = (tmp2 != HX_HCSTRING("0","\x30","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(231)
		this->visible = tmp3;
		HX_STACK_LINE(232)
		::String tmp4 = xml->get(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(232)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(232)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(232)
		if ((tmp5)){
			HX_STACK_LINE(232)
			tmp6 = (int)1;
		}
		else{
			HX_STACK_LINE(232)
			::String tmp7 = xml->get(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(232)
			tmp6 = ::Std_obj::parseFloat(tmp7);
		}
		HX_STACK_LINE(232)
		this->opacity = tmp6;
		HX_STACK_LINE(233)
		::String tmp7 = xml->get(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(233)
		Dynamic tmp8 = ::Std_obj::parseInt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(233)
		this->width = tmp8;
		HX_STACK_LINE(234)
		::String tmp9 = xml->get(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(234)
		Dynamic tmp10 = ::Std_obj::parseInt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(234)
		this->height = tmp10;
		HX_STACK_LINE(236)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(236)
		{
			HX_STACK_LINE(236)
			{
				HX_STACK_LINE(236)
				int tmp12 = xml->nodeType;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(236)
				int tmp13 = ::Xml_obj::Document;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(236)
				bool tmp14 = (tmp12 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(236)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(236)
				if ((tmp14)){
					HX_STACK_LINE(236)
					int tmp16 = xml->nodeType;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(236)
					int tmp17 = ::Xml_obj::Element;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(236)
					int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(236)
					tmp15 = (tmp16 != tmp18);
				}
				else{
					HX_STACK_LINE(236)
					tmp15 = false;
				}
				HX_STACK_LINE(236)
				if ((tmp15)){
					HX_STACK_LINE(236)
					::String tmp16 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + xml->nodeType);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(236)
					HX_STACK_DO_THROW(tmp16);
				}
			}
			HX_STACK_LINE(236)
			tmp11 = xml->children->iteratorFast< ::Xml >();
		}
		HX_STACK_LINE(236)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp11);  __it->hasNext(); ){
			::Xml child = __it->next();
			{
				HX_STACK_LINE(237)
				::Xml tmp12 = child;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(237)
				bool tmp13 = ::luxe::importers::tiled::TiledUtil_obj::valid_element(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(237)
				if ((tmp13)){
					HX_STACK_LINE(239)
					::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(239)
					{
						HX_STACK_LINE(239)
						int tmp15 = child->nodeType;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(239)
						int tmp16 = ::Xml_obj::Element;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(239)
						bool tmp17 = (tmp15 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(239)
						if ((tmp17)){
							HX_STACK_LINE(239)
							::String tmp18 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + child->nodeType);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(239)
							HX_STACK_DO_THROW(tmp18);
						}
						HX_STACK_LINE(239)
						tmp14 = child->nodeName;
					}
					HX_STACK_LINE(239)
					bool tmp15 = (tmp14 == HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(239)
					if ((tmp15)){
						HX_STACK_LINE(240)
						Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(240)
						{
							HX_STACK_LINE(240)
							{
								HX_STACK_LINE(240)
								int tmp17 = child->nodeType;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(240)
								int tmp18 = ::Xml_obj::Document;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(240)
								bool tmp19 = (tmp17 != tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(240)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(240)
								if ((tmp19)){
									HX_STACK_LINE(240)
									int tmp21 = child->nodeType;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(240)
									int tmp22 = ::Xml_obj::Element;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(240)
									int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(240)
									tmp20 = (tmp21 != tmp23);
								}
								else{
									HX_STACK_LINE(240)
									tmp20 = false;
								}
								HX_STACK_LINE(240)
								if ((tmp20)){
									HX_STACK_LINE(240)
									::String tmp21 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + child->nodeType);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(240)
									HX_STACK_DO_THROW(tmp21);
								}
							}
							HX_STACK_LINE(240)
							tmp16 = child->children->iteratorFast< ::Xml >();
						}
						HX_STACK_LINE(240)
						for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp16);  __it->hasNext(); ){
							::Xml property = __it->next();
							{
								HX_STACK_LINE(241)
								::Xml tmp17 = property;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(241)
								bool tmp18 = ::luxe::importers::tiled::TiledUtil_obj::valid_element(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(241)
								if ((tmp18)){
									HX_STACK_LINE(242)
									::String tmp19 = property->get(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(242)
									::String key = tmp19;		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(242)
									::String tmp20 = property->get(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(242)
									::String value = tmp20;		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(242)
									::haxe::ds::StringMap tmp21 = this->properties;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(242)
									::String tmp22 = key;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(242)
									::String tmp23 = value;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(242)
									tmp21->set(tmp22,tmp23);
								}
							}
;
						}
					}
					HX_STACK_LINE(247)
					::String tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(247)
					{
						HX_STACK_LINE(247)
						int tmp17 = child->nodeType;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(247)
						int tmp18 = ::Xml_obj::Element;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(247)
						bool tmp19 = (tmp17 != tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(247)
						if ((tmp19)){
							HX_STACK_LINE(247)
							::String tmp20 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + child->nodeType);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(247)
							HX_STACK_DO_THROW(tmp20);
						}
						HX_STACK_LINE(247)
						tmp16 = child->nodeName;
					}
					HX_STACK_LINE(247)
					bool tmp17 = (tmp16 == HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(247)
					if ((tmp17)){
						HX_STACK_LINE(248)
						::luxe::importers::tiled::TiledObject tmp18 = ::luxe::importers::tiled::TiledObject_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(248)
						::luxe::importers::tiled::TiledObject object = tmp18;		HX_STACK_VAR(object,"object");
						HX_STACK_LINE(249)
						::Xml tmp19 = child;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(249)
						object->from_xml(tmp19);
						HX_STACK_LINE(250)
						::luxe::importers::tiled::TiledObject tmp20 = object;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(250)
						this->objects->push(tmp20);
					}
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledObjectGroup_obj,from_xml,(void))

Void TiledObjectGroup_obj::from_json( Dynamic json){
{
		HX_STACK_FRAME("luxe.importers.tiled.TiledObjectGroup","from_json",0xdddae8d6,"luxe.importers.tiled.TiledObjectGroup.from_json","luxe/importers/tiled/TiledObjectGroup.hx",256,0x738a9294)
		HX_STACK_THIS(this)
		HX_STACK_ARG(json,"json")
		HX_STACK_LINE(258)
		Dynamic tmp = json;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		Dynamic tmp1 = ::Reflect_obj::field(tmp,HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(258)
		this->name = tmp1;
		HX_STACK_LINE(259)
		Dynamic tmp2 = json;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(259)
		Dynamic tmp3 = ::Reflect_obj::field(tmp2,HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(259)
		this->color = tmp3;
		HX_STACK_LINE(260)
		Dynamic tmp4 = json;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(260)
		Dynamic tmp5 = ::Reflect_obj::field(tmp4,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(260)
		this->visible = ((bool)(tmp5));
		HX_STACK_LINE(261)
		Dynamic tmp6 = json;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(261)
		Dynamic tmp7 = ::Reflect_obj::field(tmp6,HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(261)
		this->opacity = tmp7;
		HX_STACK_LINE(262)
		Dynamic tmp8 = json;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(262)
		Dynamic tmp9 = ::Reflect_obj::field(tmp8,HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(262)
		this->width = ((int)(tmp9));
		HX_STACK_LINE(263)
		Dynamic tmp10 = json;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(263)
		Dynamic tmp11 = ::Reflect_obj::field(tmp10,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(263)
		this->height = ((int)(tmp11));
		HX_STACK_LINE(265)
		Dynamic tmp12 = json;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(265)
		Array< ::String > fields = ::Reflect_obj::fields(tmp12);		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(266)
		{
			HX_STACK_LINE(266)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(266)
			while((true)){
				HX_STACK_LINE(266)
				bool tmp13 = (_g < fields->length);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(266)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(266)
				if ((tmp14)){
					HX_STACK_LINE(266)
					break;
				}
				HX_STACK_LINE(266)
				::String tmp15 = fields->__get(_g);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(266)
				::String nodename = tmp15;		HX_STACK_VAR(nodename,"nodename");
				HX_STACK_LINE(266)
				++(_g);
				HX_STACK_LINE(267)
				Dynamic tmp16 = json;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(267)
				::String tmp17 = nodename;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(267)
				Dynamic tmp18 = ::Reflect_obj::field(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(267)
				Dynamic child = tmp18;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(268)
				::String tmp19 = nodename;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(268)
				::String _switch_1 = (tmp19);
				if (  ( _switch_1==HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"))){
					HX_STACK_LINE(271)
					cpp::ArrayBase list = ((cpp::ArrayBase)(child));		HX_STACK_VAR(list,"list");
					HX_STACK_LINE(272)
					{
						HX_STACK_LINE(272)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(272)
						while((true)){
							HX_STACK_LINE(272)
							bool tmp20 = (_g1 < list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(272)
							bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(272)
							if ((tmp21)){
								HX_STACK_LINE(272)
								break;
							}
							HX_STACK_LINE(272)
							Dynamic tmp22 = list->__GetItem(_g1);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(272)
							Dynamic _object_json = tmp22;		HX_STACK_VAR(_object_json,"_object_json");
							HX_STACK_LINE(272)
							++(_g1);
							HX_STACK_LINE(274)
							::luxe::importers::tiled::TiledObject tmp23 = ::luxe::importers::tiled::TiledObject_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(274)
							::luxe::importers::tiled::TiledObject object = tmp23;		HX_STACK_VAR(object,"object");
							HX_STACK_LINE(275)
							Dynamic tmp24 = _object_json;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(275)
							object->from_json(tmp24);
							HX_STACK_LINE(276)
							::luxe::importers::tiled::TiledObject tmp25 = object;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(276)
							this->objects->push(tmp25);
						}
					}
				}
				else if (  ( _switch_1==HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"))){
					HX_STACK_LINE(283)
					Dynamic tmp20 = child;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(283)
					Array< ::String > child_fields = ::Reflect_obj::fields(tmp20);		HX_STACK_VAR(child_fields,"child_fields");
					HX_STACK_LINE(284)
					{
						HX_STACK_LINE(284)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(284)
						while((true)){
							HX_STACK_LINE(284)
							bool tmp21 = (_g1 < child_fields->length);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(284)
							bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(284)
							if ((tmp22)){
								HX_STACK_LINE(284)
								break;
							}
							HX_STACK_LINE(284)
							::String tmp23 = child_fields->__get(_g1);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(284)
							::String property_name = tmp23;		HX_STACK_VAR(property_name,"property_name");
							HX_STACK_LINE(284)
							++(_g1);
							HX_STACK_LINE(285)
							{
								HX_STACK_LINE(285)
								Dynamic tmp24 = child;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(285)
								::String tmp25 = property_name;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(285)
								Dynamic tmp26 = ::Reflect_obj::field(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(285)
								::String value = tmp26;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(285)
								::haxe::ds::StringMap tmp27 = this->properties;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(285)
								::String tmp28 = property_name;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(285)
								::String tmp29 = value;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(285)
								tmp27->set(tmp28,tmp29);
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledObjectGroup_obj,from_json,(void))


TiledObjectGroup_obj::TiledObjectGroup_obj()
{
}

void TiledObjectGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledObjectGroup);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(opacity,"opacity");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_END_CLASS();
}

void TiledObjectGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(opacity,"opacity");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(objects,"objects");
}

Dynamic TiledObjectGroup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"opacity") ) { return opacity; }
		if (HX_FIELD_EQ(inName,"objects") ) { return objects; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"from_xml") ) { return from_xml_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"from_json") ) { return from_json_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledObjectGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::luxe::importers::tiled::TiledMapData >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"opacity") ) { opacity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledObjectGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	outFields->push(HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::importers::tiled::TiledMapData*/ ,(int)offsetof(TiledObjectGroup_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsString,(int)offsetof(TiledObjectGroup_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(TiledObjectGroup_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(TiledObjectGroup_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsBool,(int)offsetof(TiledObjectGroup_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsFloat,(int)offsetof(TiledObjectGroup_obj,opacity),HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb")},
	{hx::fsString,(int)offsetof(TiledObjectGroup_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TiledObjectGroup_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledObjectGroup_obj,objects),HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"),
	HX_HCSTRING("from_xml","\x42","\x55","\x19","\xb2"),
	HX_HCSTRING("from_json","\x5d","\xd8","\xd4","\x1a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledObjectGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledObjectGroup_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledObjectGroup_obj::__mClass;

void TiledObjectGroup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.importers.tiled.TiledObjectGroup","\xa7","\xcf","\x13","\xd6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledObjectGroup_obj >;
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
