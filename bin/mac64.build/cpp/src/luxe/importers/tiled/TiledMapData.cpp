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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledImageLayer
#include <luxe/importers/tiled/TiledImageLayer.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledLayer
#include <luxe/importers/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledMapData
#include <luxe/importers/tiled/TiledMapData.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledObjectGroup
#include <luxe/importers/tiled/TiledObjectGroup.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledTileset
#include <luxe/importers/tiled/TiledTileset.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledUtil
#include <luxe/importers/tiled/TiledUtil.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_TilemapOrientation
#include <luxe/tilemaps/TilemapOrientation.h>
#endif
namespace luxe{
namespace importers{
namespace tiled{

Void TiledMapData_obj::__construct()
{
HX_STACK_FRAME("luxe.importers.tiled.TiledMapData","new",0x1e81167f,"luxe.importers.tiled.TiledMapData.new","luxe/importers/tiled/TiledMapData.hx",14,0xb3a8886e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->background_color = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(16)
	this->version = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(42)
	this->width = (int)0;
	HX_STACK_LINE(43)
	this->height = (int)0;
	HX_STACK_LINE(44)
	this->tile_width = (int)0;
	HX_STACK_LINE(45)
	this->tile_height = (int)0;
	HX_STACK_LINE(47)
	this->orientation = ::luxe::tilemaps::TilemapOrientation_obj::none;
	HX_STACK_LINE(48)
	this->tilesets = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(49)
	this->layers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(50)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		tmp = tmp2;
	}
	HX_STACK_LINE(50)
	this->properties = tmp;
	HX_STACK_LINE(51)
	this->object_groups = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(52)
	this->image_layers = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//TiledMapData_obj::~TiledMapData_obj() { }

Dynamic TiledMapData_obj::__CreateEmpty() { return  new TiledMapData_obj; }
hx::ObjectPtr< TiledMapData_obj > TiledMapData_obj::__new()
{  hx::ObjectPtr< TiledMapData_obj > _result_ = new TiledMapData_obj();
	_result_->__construct();
	return _result_;}

Dynamic TiledMapData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledMapData_obj > _result_ = new TiledMapData_obj();
	_result_->__construct();
	return _result_;}

::String TiledMapData_obj::toString( ){
	HX_STACK_FRAME("luxe.importers.tiled.TiledMapData","toString",0xf773fa2d,"luxe.importers.tiled.TiledMapData.toString","luxe/importers/tiled/TiledMapData.hx",56,0xb3a8886e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	int tmp = this->layers->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	::String tmp1 = (HX_HCSTRING("TiledMap : layers(","\xc6","\x70","\x65","\x1c") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	::String tmp2 = (tmp1 + HX_HCSTRING(") tilesets(","\xd2","\xc3","\x4b","\x1f"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	int tmp3 = this->tilesets->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(57)
	::String tmp5 = (tmp4 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(57)
	::String tmp6 = (tmp5 + HX_HCSTRING(" tilew,tileh(","\x51","\x9c","\xfc","\x90"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(57)
	int tmp7 = this->tile_width;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(57)
	::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(57)
	::String tmp9 = (tmp8 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(57)
	int tmp10 = this->tile_height;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(57)
	::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(57)
	::String tmp12 = (tmp11 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(57)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC0(TiledMapData_obj,toString,return )

Void TiledMapData_obj::parseFromXML( ::Xml xml){
{
		HX_STACK_FRAME("luxe.importers.tiled.TiledMapData","parseFromXML",0x8bdef49b,"luxe.importers.tiled.TiledMapData.parseFromXML","luxe/importers/tiled/TiledMapData.hx",60,0xb3a8886e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_LINE(62)
		::Xml tmp = xml->firstElement();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		::Xml root = tmp;		HX_STACK_VAR(root,"root");
		HX_STACK_LINE(64)
		::String tmp1 = root->get(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		this->version = tmp1;
		HX_STACK_LINE(65)
		::String tmp2 = root->get(HX_HCSTRING("backgroundcolor","\xb5","\xde","\x19","\x7a"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		this->background_color = tmp2;
		HX_STACK_LINE(66)
		::String tmp3 = root->get(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		Dynamic tmp4 = ::Std_obj::parseInt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		this->width = tmp4;
		HX_STACK_LINE(67)
		::String tmp5 = root->get(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(67)
		Dynamic tmp6 = ::Std_obj::parseInt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(67)
		this->height = tmp6;
		HX_STACK_LINE(68)
		::String tmp7 = root->get(HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(68)
		::luxe::tilemaps::TilemapOrientation tmp8 = ::luxe::importers::tiled::TiledUtil_obj::orientation_from_string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(68)
		this->orientation = tmp8;
		HX_STACK_LINE(69)
		::String tmp9 = root->get(HX_HCSTRING("tilewidth","\x18","\xa4","\x90","\xc2"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(69)
		Dynamic tmp10 = ::Std_obj::parseInt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(69)
		this->tile_width = tmp10;
		HX_STACK_LINE(70)
		::String tmp11 = root->get(HX_HCSTRING("tileheight","\x95","\x69","\x4e","\x32"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(70)
		Dynamic tmp12 = ::Std_obj::parseInt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(70)
		this->tile_height = tmp12;
		HX_STACK_LINE(72)
		Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			{
				HX_STACK_LINE(72)
				int tmp14 = root->nodeType;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(72)
				int tmp15 = ::Xml_obj::Document;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(72)
				bool tmp16 = (tmp14 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(72)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(72)
				if ((tmp16)){
					HX_STACK_LINE(72)
					int tmp18 = root->nodeType;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(72)
					int tmp19 = ::Xml_obj::Element;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(72)
					int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(72)
					tmp17 = (tmp18 != tmp20);
				}
				else{
					HX_STACK_LINE(72)
					tmp17 = false;
				}
				HX_STACK_LINE(72)
				if ((tmp17)){
					HX_STACK_LINE(72)
					::String tmp18 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + root->nodeType);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(72)
					HX_STACK_DO_THROW(tmp18);
				}
			}
			HX_STACK_LINE(72)
			tmp13 = root->children->iteratorFast< ::Xml >();
		}
		HX_STACK_LINE(72)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp13);  __it->hasNext(); ){
			::Xml child = __it->next();
			{
				HX_STACK_LINE(73)
				::Xml tmp14 = child;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(73)
				bool tmp15 = ::luxe::importers::tiled::TiledUtil_obj::valid_element(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(73)
				if ((tmp15)){
					HX_STACK_LINE(74)
					::String tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						int tmp17 = child->nodeType;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(74)
						int tmp18 = ::Xml_obj::Element;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(74)
						bool tmp19 = (tmp17 != tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(74)
						if ((tmp19)){
							HX_STACK_LINE(74)
							::String tmp20 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + child->nodeType);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(74)
							HX_STACK_DO_THROW(tmp20);
						}
						HX_STACK_LINE(74)
						tmp16 = child->nodeName;
					}
					HX_STACK_LINE(74)
					::String _g = tmp16;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(74)
					::String tmp17 = _g;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(74)
					::String _switch_1 = (tmp17);
					if (  ( _switch_1==HX_HCSTRING("tileset","\x34","\x81","\x93","\x45"))){
						HX_STACK_LINE(77)
						::luxe::importers::tiled::TiledTileset tmp18 = ::luxe::importers::tiled::TiledTileset_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(77)
						::luxe::importers::tiled::TiledTileset tileset = tmp18;		HX_STACK_VAR(tileset,"tileset");
						HX_STACK_LINE(79)
						::String tmp19 = child->get(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(79)
						bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(79)
						if ((tmp20)){
							HX_STACK_LINE(81)
							::String tmp21 = child->get(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(81)
							::String tmp22 = (HX_HCSTRING("tilesets from other sources are not available right now? ","\x76","\x70","\x92","\x2c") + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(81)
							Dynamic tmp23 = hx::SourceInfo(HX_HCSTRING("TiledMapData.hx","\x8e","\x44","\x43","\x19"),81,HX_HCSTRING("luxe.importers.tiled.TiledMapData","\x0d","\x6b","\x7e","\x8c"),HX_HCSTRING("parseFromXML","\x9a","\x76","\xe0","\xb1"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(81)
							::haxe::Log_obj::trace(tmp22,tmp23);
						}
						else{
							HX_STACK_LINE(83)
							::Xml tmp21 = child;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(83)
							tileset->from_xml(tmp21);
						}
						HX_STACK_LINE(86)
						::String tmp21 = child->get(HX_HCSTRING("firstgid","\xd2","\x49","\x26","\xf1"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(86)
						Dynamic tmp22 = ::Std_obj::parseInt(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(86)
						tileset->first_id = tmp22;
						HX_STACK_LINE(88)
						::luxe::importers::tiled::TiledTileset tmp23 = tileset;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(88)
						this->tilesets->push(tmp23);
					}
					else if (  ( _switch_1==HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"))){
						HX_STACK_LINE(93)
						Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(93)
						{
							HX_STACK_LINE(93)
							{
								HX_STACK_LINE(93)
								int tmp19 = child->nodeType;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(93)
								int tmp20 = ::Xml_obj::Document;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(93)
								bool tmp21 = (tmp19 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(93)
								bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(93)
								if ((tmp21)){
									HX_STACK_LINE(93)
									int tmp23 = child->nodeType;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(93)
									int tmp24 = ::Xml_obj::Element;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(93)
									int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(93)
									tmp22 = (tmp23 != tmp25);
								}
								else{
									HX_STACK_LINE(93)
									tmp22 = false;
								}
								HX_STACK_LINE(93)
								if ((tmp22)){
									HX_STACK_LINE(93)
									::String tmp23 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + child->nodeType);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(93)
									HX_STACK_DO_THROW(tmp23);
								}
							}
							HX_STACK_LINE(93)
							tmp18 = child->children->iteratorFast< ::Xml >();
						}
						HX_STACK_LINE(93)
						for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp18);  __it->hasNext(); ){
							::Xml property = __it->next();
							{
								HX_STACK_LINE(95)
								::Xml tmp19 = property;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(95)
								bool tmp20 = ::luxe::importers::tiled::TiledUtil_obj::valid_element(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(95)
								bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(95)
								if ((tmp21)){
									HX_STACK_LINE(96)
									continue;
								}
								HX_STACK_LINE(99)
								{
									HX_STACK_LINE(99)
									::String tmp22 = property->get(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(99)
									::String key = tmp22;		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(99)
									::String tmp23 = property->get(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(99)
									::String value = tmp23;		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(99)
									::haxe::ds::StringMap tmp24 = this->properties;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(99)
									::String tmp25 = key;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(99)
									::String tmp26 = value;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(99)
									tmp24->set(tmp25,tmp26);
								}
							}
;
						}
					}
					else if (  ( _switch_1==HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"))){
						HX_STACK_LINE(106)
						::luxe::importers::tiled::TiledLayer tmp18 = ::luxe::importers::tiled::TiledLayer_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(106)
						::luxe::importers::tiled::TiledLayer layer = tmp18;		HX_STACK_VAR(layer,"layer");
						HX_STACK_LINE(107)
						::Xml tmp19 = child;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(107)
						layer->from_xml(tmp19);
						HX_STACK_LINE(109)
						::luxe::importers::tiled::TiledLayer tmp20 = layer;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(109)
						this->layers->push(tmp20);
					}
					else if (  ( _switch_1==HX_HCSTRING("objectgroup","\x20","\x60","\xf6","\x75"))){
						HX_STACK_LINE(115)
						::luxe::importers::tiled::TiledObjectGroup tmp18 = ::luxe::importers::tiled::TiledObjectGroup_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(115)
						::luxe::importers::tiled::TiledObjectGroup object_group = tmp18;		HX_STACK_VAR(object_group,"object_group");
						HX_STACK_LINE(116)
						::Xml tmp19 = child;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(116)
						object_group->from_xml(tmp19);
						HX_STACK_LINE(118)
						::luxe::importers::tiled::TiledObjectGroup tmp20 = object_group;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(118)
						this->object_groups->push(tmp20);
					}
					else if (  ( _switch_1==HX_HCSTRING("imagelayer","\x96","\xd8","\x60","\xe8"))){
						HX_STACK_LINE(124)
						::luxe::importers::tiled::TiledImageLayer tmp18 = ::luxe::importers::tiled::TiledImageLayer_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(124)
						::luxe::importers::tiled::TiledImageLayer image_layer = tmp18;		HX_STACK_VAR(image_layer,"image_layer");
						HX_STACK_LINE(125)
						::Xml tmp19 = child;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(125)
						image_layer->from_xml(tmp19);
						HX_STACK_LINE(127)
						::luxe::importers::tiled::TiledImageLayer tmp20 = image_layer;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(127)
						this->image_layers->push(tmp20);
					}
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMapData_obj,parseFromXML,(void))

Void TiledMapData_obj::parseFromJSON( Dynamic json){
{
		HX_STACK_FRAME("luxe.importers.tiled.TiledMapData","parseFromJSON",0xcdfaa6c4,"luxe.importers.tiled.TiledMapData.parseFromJSON","luxe/importers/tiled/TiledMapData.hx",137,0xb3a8886e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(json,"json")
		HX_STACK_LINE(139)
		Dynamic tmp = json;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		Dynamic tmp1 = ::Reflect_obj::field(tmp,HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		this->version = tmp1;
		HX_STACK_LINE(140)
		Dynamic tmp2 = json;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		Dynamic tmp3 = ::Reflect_obj::field(tmp2,HX_HCSTRING("backgroundcolor","\xb5","\xde","\x19","\x7a"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		this->background_color = tmp3;
		HX_STACK_LINE(141)
		Dynamic tmp4 = json;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(141)
		Dynamic tmp5 = ::Reflect_obj::field(tmp4,HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(141)
		Dynamic tmp6 = ::Std_obj::parseInt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(141)
		this->width = tmp6;
		HX_STACK_LINE(142)
		Dynamic tmp7 = json;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(142)
		Dynamic tmp8 = ::Reflect_obj::field(tmp7,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(142)
		Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(142)
		this->height = tmp9;
		HX_STACK_LINE(143)
		Dynamic tmp10 = json;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(143)
		Dynamic tmp11 = ::Reflect_obj::field(tmp10,HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(143)
		::luxe::tilemaps::TilemapOrientation tmp12 = ::luxe::importers::tiled::TiledUtil_obj::orientation_from_string(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(143)
		this->orientation = tmp12;
		HX_STACK_LINE(144)
		Dynamic tmp13 = json;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(144)
		Dynamic tmp14 = ::Reflect_obj::field(tmp13,HX_HCSTRING("tilewidth","\x18","\xa4","\x90","\xc2"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(144)
		Dynamic tmp15 = ::Std_obj::parseInt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(144)
		this->tile_width = tmp15;
		HX_STACK_LINE(145)
		Dynamic tmp16 = json;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(145)
		Dynamic tmp17 = ::Reflect_obj::field(tmp16,HX_HCSTRING("tileheight","\x95","\x69","\x4e","\x32"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(145)
		Dynamic tmp18 = ::Std_obj::parseInt(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(145)
		this->tile_height = tmp18;
		HX_STACK_LINE(147)
		Dynamic tmp19 = json;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(147)
		Array< ::String > fields = ::Reflect_obj::fields(tmp19);		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(148)
			while((true)){
				HX_STACK_LINE(148)
				bool tmp20 = (_g < fields->length);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(148)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(148)
				if ((tmp21)){
					HX_STACK_LINE(148)
					break;
				}
				HX_STACK_LINE(148)
				::String tmp22 = fields->__get(_g);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(148)
				::String nodename = tmp22;		HX_STACK_VAR(nodename,"nodename");
				HX_STACK_LINE(148)
				++(_g);
				HX_STACK_LINE(150)
				Dynamic tmp23 = json;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(150)
				::String tmp24 = nodename;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(150)
				Dynamic tmp25 = ::Reflect_obj::field(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(150)
				Dynamic child = tmp25;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(152)
				::String tmp26 = nodename;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(152)
				::String _switch_2 = (tmp26);
				if (  ( _switch_2==HX_HCSTRING("tilesets","\xbf","\x8c","\x7d","\x9b"))){
					HX_STACK_LINE(156)
					cpp::ArrayBase list = ((cpp::ArrayBase)(child));		HX_STACK_VAR(list,"list");
					HX_STACK_LINE(157)
					{
						HX_STACK_LINE(157)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(157)
						while((true)){
							HX_STACK_LINE(157)
							bool tmp27 = (_g1 < list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(157)
							bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(157)
							if ((tmp28)){
								HX_STACK_LINE(157)
								break;
							}
							HX_STACK_LINE(157)
							Dynamic tmp29 = list->__GetItem(_g1);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(157)
							Dynamic _tileset_json = tmp29;		HX_STACK_VAR(_tileset_json,"_tileset_json");
							HX_STACK_LINE(157)
							++(_g1);
							HX_STACK_LINE(159)
							::luxe::importers::tiled::TiledTileset tmp30 = ::luxe::importers::tiled::TiledTileset_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(159)
							::luxe::importers::tiled::TiledTileset tileset = tmp30;		HX_STACK_VAR(tileset,"tileset");
							HX_STACK_LINE(161)
							Dynamic tmp31 = _tileset_json;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(161)
							tileset->from_json(tmp31);
							HX_STACK_LINE(162)
							Dynamic tmp32 = _tileset_json;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(162)
							Dynamic tmp33 = ::Reflect_obj::field(tmp32,HX_HCSTRING("firstgid","\xd2","\x49","\x26","\xf1"));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(162)
							Dynamic tmp34 = ::Std_obj::parseInt(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(162)
							tileset->first_id = tmp34;
							HX_STACK_LINE(164)
							::luxe::importers::tiled::TiledTileset tmp35 = tileset;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(164)
							this->tilesets->push(tmp35);
						}
					}
				}
				else if (  ( _switch_2==HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"))){
					HX_STACK_LINE(171)
					Dynamic tmp27 = child;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(171)
					Array< ::String > child_fields = ::Reflect_obj::fields(tmp27);		HX_STACK_VAR(child_fields,"child_fields");
					HX_STACK_LINE(172)
					{
						HX_STACK_LINE(172)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(172)
						while((true)){
							HX_STACK_LINE(172)
							bool tmp28 = (_g1 < child_fields->length);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(172)
							bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(172)
							if ((tmp29)){
								HX_STACK_LINE(172)
								break;
							}
							HX_STACK_LINE(172)
							::String tmp30 = child_fields->__get(_g1);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(172)
							::String property_name = tmp30;		HX_STACK_VAR(property_name,"property_name");
							HX_STACK_LINE(172)
							++(_g1);
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								Dynamic tmp31 = child;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(173)
								::String tmp32 = property_name;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(173)
								Dynamic tmp33 = ::Reflect_obj::field(tmp31,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(173)
								::String value = tmp33;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(173)
								::haxe::ds::StringMap tmp34 = this->properties;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(173)
								::String tmp35 = property_name;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(173)
								::String tmp36 = value;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(173)
								tmp34->set(tmp35,tmp36);
							}
						}
					}
				}
				else if (  ( _switch_2==HX_HCSTRING("layers","\x82","\x15","\xb1","\x58"))){
					HX_STACK_LINE(179)
					cpp::ArrayBase list = ((cpp::ArrayBase)(child));		HX_STACK_VAR(list,"list");
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(180)
						while((true)){
							HX_STACK_LINE(180)
							bool tmp27 = (_g1 < list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(180)
							bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(180)
							if ((tmp28)){
								HX_STACK_LINE(180)
								break;
							}
							HX_STACK_LINE(180)
							Dynamic tmp29 = list->__GetItem(_g1);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(180)
							Dynamic _layer_json = tmp29;		HX_STACK_VAR(_layer_json,"_layer_json");
							HX_STACK_LINE(180)
							++(_g1);
							HX_STACK_LINE(182)
							Dynamic tmp30 = _layer_json;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(182)
							Dynamic tmp31 = ::Reflect_obj::field(tmp30,HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(182)
							::String type = tmp31;		HX_STACK_VAR(type,"type");
							HX_STACK_LINE(183)
							::String tmp32 = type;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(183)
							::String _switch_3 = (tmp32);
							if (  ( _switch_3==HX_HCSTRING("tilelayer","\xe3","\x6f","\xee","\x67"))){
								HX_STACK_LINE(186)
								::luxe::importers::tiled::TiledLayer tmp33 = ::luxe::importers::tiled::TiledLayer_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(186)
								::luxe::importers::tiled::TiledLayer layer = tmp33;		HX_STACK_VAR(layer,"layer");
								HX_STACK_LINE(187)
								Dynamic tmp34 = _layer_json;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(187)
								layer->from_json(tmp34);
								HX_STACK_LINE(189)
								::luxe::importers::tiled::TiledLayer tmp35 = layer;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(189)
								this->layers->push(tmp35);
							}
							else if (  ( _switch_3==HX_HCSTRING("objectgroup","\x20","\x60","\xf6","\x75"))){
								HX_STACK_LINE(193)
								::luxe::importers::tiled::TiledObjectGroup tmp33 = ::luxe::importers::tiled::TiledObjectGroup_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(193)
								::luxe::importers::tiled::TiledObjectGroup object_group = tmp33;		HX_STACK_VAR(object_group,"object_group");
								HX_STACK_LINE(194)
								Dynamic tmp34 = _layer_json;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(194)
								object_group->from_json(tmp34);
								HX_STACK_LINE(196)
								::luxe::importers::tiled::TiledObjectGroup tmp35 = object_group;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(196)
								this->object_groups->push(tmp35);
							}
							else if (  ( _switch_3==HX_HCSTRING("imagelayer","\x96","\xd8","\x60","\xe8"))){
								HX_STACK_LINE(200)
								::luxe::importers::tiled::TiledImageLayer tmp33 = ::luxe::importers::tiled::TiledImageLayer_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(200)
								::luxe::importers::tiled::TiledImageLayer image_layer = tmp33;		HX_STACK_VAR(image_layer,"image_layer");
								HX_STACK_LINE(201)
								Dynamic tmp34 = _layer_json;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(201)
								image_layer->from_json(tmp34);
								HX_STACK_LINE(203)
								::luxe::importers::tiled::TiledImageLayer tmp35 = image_layer;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(203)
								this->image_layers->push(tmp35);
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMapData_obj,parseFromJSON,(void))


TiledMapData_obj::TiledMapData_obj()
{
}

void TiledMapData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledMapData);
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(background_color,"background_color");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(orientation,"orientation");
	HX_MARK_MEMBER_NAME(tile_width,"tile_width");
	HX_MARK_MEMBER_NAME(tile_height,"tile_height");
	HX_MARK_MEMBER_NAME(tilesets,"tilesets");
	HX_MARK_MEMBER_NAME(layers,"layers");
	HX_MARK_MEMBER_NAME(object_groups,"object_groups");
	HX_MARK_MEMBER_NAME(image_layers,"image_layers");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_END_CLASS();
}

void TiledMapData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(background_color,"background_color");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(orientation,"orientation");
	HX_VISIT_MEMBER_NAME(tile_width,"tile_width");
	HX_VISIT_MEMBER_NAME(tile_height,"tile_height");
	HX_VISIT_MEMBER_NAME(tilesets,"tilesets");
	HX_VISIT_MEMBER_NAME(layers,"layers");
	HX_VISIT_MEMBER_NAME(object_groups,"object_groups");
	HX_VISIT_MEMBER_NAME(image_layers,"image_layers");
	HX_VISIT_MEMBER_NAME(properties,"properties");
}

Dynamic TiledMapData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"layers") ) { return layers; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tilesets") ) { return tilesets; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tile_width") ) { return tile_width; }
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orientation") ) { return orientation; }
		if (HX_FIELD_EQ(inName,"tile_height") ) { return tile_height; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"image_layers") ) { return image_layers; }
		if (HX_FIELD_EQ(inName,"parseFromXML") ) { return parseFromXML_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"object_groups") ) { return object_groups; }
		if (HX_FIELD_EQ(inName,"parseFromJSON") ) { return parseFromJSON_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"background_color") ) { return background_color; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledMapData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layers") ) { layers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tilesets") ) { tilesets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tile_width") ) { tile_width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orientation") ) { orientation=inValue.Cast< ::luxe::tilemaps::TilemapOrientation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tile_height") ) { tile_height=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"image_layers") ) { image_layers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"object_groups") ) { object_groups=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"background_color") ) { background_color=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledMapData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	outFields->push(HX_HCSTRING("background_color","\x12","\xf3","\x45","\xdc"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"));
	outFields->push(HX_HCSTRING("tile_width","\xf5","\x5e","\x4c","\xf6"));
	outFields->push(HX_HCSTRING("tile_height","\x18","\x30","\xd6","\x42"));
	outFields->push(HX_HCSTRING("tilesets","\xbf","\x8c","\x7d","\x9b"));
	outFields->push(HX_HCSTRING("layers","\x82","\x15","\xb1","\x58"));
	outFields->push(HX_HCSTRING("object_groups","\x14","\x9d","\x0e","\xac"));
	outFields->push(HX_HCSTRING("image_layers","\x26","\x79","\x9f","\xe9"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TiledMapData_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsString,(int)offsetof(TiledMapData_obj,background_color),HX_HCSTRING("background_color","\x12","\xf3","\x45","\xdc")},
	{hx::fsInt,(int)offsetof(TiledMapData_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(TiledMapData_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::luxe::tilemaps::TilemapOrientation*/ ,(int)offsetof(TiledMapData_obj,orientation),HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd")},
	{hx::fsInt,(int)offsetof(TiledMapData_obj,tile_width),HX_HCSTRING("tile_width","\xf5","\x5e","\x4c","\xf6")},
	{hx::fsInt,(int)offsetof(TiledMapData_obj,tile_height),HX_HCSTRING("tile_height","\x18","\x30","\xd6","\x42")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledMapData_obj,tilesets),HX_HCSTRING("tilesets","\xbf","\x8c","\x7d","\x9b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledMapData_obj,layers),HX_HCSTRING("layers","\x82","\x15","\xb1","\x58")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledMapData_obj,object_groups),HX_HCSTRING("object_groups","\x14","\x9d","\x0e","\xac")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledMapData_obj,image_layers),HX_HCSTRING("image_layers","\x26","\x79","\x9f","\xe9")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TiledMapData_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("background_color","\x12","\xf3","\x45","\xdc"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"),
	HX_HCSTRING("tile_width","\xf5","\x5e","\x4c","\xf6"),
	HX_HCSTRING("tile_height","\x18","\x30","\xd6","\x42"),
	HX_HCSTRING("tilesets","\xbf","\x8c","\x7d","\x9b"),
	HX_HCSTRING("layers","\x82","\x15","\xb1","\x58"),
	HX_HCSTRING("object_groups","\x14","\x9d","\x0e","\xac"),
	HX_HCSTRING("image_layers","\x26","\x79","\x9f","\xe9"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("parseFromXML","\x9a","\x76","\xe0","\xb1"),
	HX_HCSTRING("parseFromJSON","\xe5","\xe3","\x4a","\xe9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledMapData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledMapData_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledMapData_obj::__mClass;

void TiledMapData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.importers.tiled.TiledMapData","\x0d","\x6b","\x7e","\x8c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledMapData_obj >;
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
