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
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledPropertyTile
#include <luxe/importers/tiled/TiledPropertyTile.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledTileset
#include <luxe/importers/tiled/TiledTileset.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledUtil
#include <luxe/importers/tiled/TiledUtil.h>
#endif
namespace luxe{
namespace importers{
namespace tiled{

Void TiledTileset_obj::__construct()
{
HX_STACK_FRAME("luxe.importers.tiled.TiledTileset","new",0x9869cbcd,"luxe.importers.tiled.TiledTileset.new","luxe/importers/tiled/TiledTileset.hx",8,0xa0b076e0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->spacing = (int)0;
	HX_STACK_LINE(16)
	this->margin = (int)0;
	HX_STACK_LINE(15)
	this->tile_height = (int)0;
	HX_STACK_LINE(14)
	this->tile_width = (int)0;
	HX_STACK_LINE(13)
	this->first_id = (int)1;
	HX_STACK_LINE(11)
	this->texture_name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(10)
	this->name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(24)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		tmp = tmp2;
	}
	HX_STACK_LINE(24)
	this->properties = tmp;
	HX_STACK_LINE(25)
	::haxe::ds::IntMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		::haxe::ds::IntMap tmp2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		::haxe::ds::IntMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(25)
	this->property_tiles = tmp1;
}
;
	return null();
}

//TiledTileset_obj::~TiledTileset_obj() { }

Dynamic TiledTileset_obj::__CreateEmpty() { return  new TiledTileset_obj; }
hx::ObjectPtr< TiledTileset_obj > TiledTileset_obj::__new()
{  hx::ObjectPtr< TiledTileset_obj > _result_ = new TiledTileset_obj();
	_result_->__construct();
	return _result_;}

Dynamic TiledTileset_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledTileset_obj > _result_ = new TiledTileset_obj();
	_result_->__construct();
	return _result_;}

Void TiledTileset_obj::from_xml( ::Xml xml){
{
		HX_STACK_FRAME("luxe.importers.tiled.TiledTileset","from_xml",0xd65bceb5,"luxe.importers.tiled.TiledTileset.from_xml","luxe/importers/tiled/TiledTileset.hx",30,0xa0b076e0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_LINE(32)
		::Xml root = xml;		HX_STACK_VAR(root,"root");
		HX_STACK_LINE(34)
		::String tmp = root->get(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		this->name = tmp;
		HX_STACK_LINE(35)
		::String tmp1 = root->get(HX_HCSTRING("tilewidth","\x18","\xa4","\x90","\xc2"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		Dynamic tmp2 = ::Std_obj::parseInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		this->tile_width = tmp2;
		HX_STACK_LINE(36)
		::String tmp3 = root->get(HX_HCSTRING("tileheight","\x95","\x69","\x4e","\x32"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		Dynamic tmp4 = ::Std_obj::parseInt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		this->tile_height = tmp4;
		HX_STACK_LINE(37)
		::String tmp5 = root->get(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		Dynamic tmp6 = ::Std_obj::parseInt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		this->spacing = tmp6;
		HX_STACK_LINE(38)
		::String tmp7 = root->get(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		Dynamic tmp8 = ::Std_obj::parseInt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(38)
		this->margin = tmp8;
		HX_STACK_LINE(40)
		Dynamic tmp9 = root->elements();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(40)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp9);  __it->hasNext(); ){
			::Xml child = __it->next();
			{
				HX_STACK_LINE(41)
				::Xml tmp10 = child;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(41)
				bool tmp11 = ::luxe::importers::tiled::TiledUtil_obj::valid_element(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(41)
				if ((tmp11)){
					HX_STACK_LINE(43)
					::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(43)
					{
						HX_STACK_LINE(43)
						int tmp13 = child->nodeType;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(43)
						int tmp14 = ::Xml_obj::Element;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(43)
						bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(43)
						if ((tmp15)){
							HX_STACK_LINE(43)
							::String tmp16 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + child->nodeType);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(43)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(43)
						tmp12 = child->nodeName;
					}
					HX_STACK_LINE(43)
					::String _g = tmp12;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(43)
					::String tmp13 = _g;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(43)
					::String _switch_1 = (tmp13);
					if (  ( _switch_1==HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"))){
						HX_STACK_LINE(46)
						Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(46)
						{
							HX_STACK_LINE(46)
							{
								HX_STACK_LINE(46)
								int tmp15 = child->nodeType;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(46)
								int tmp16 = ::Xml_obj::Document;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(46)
								bool tmp17 = (tmp15 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(46)
								bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(46)
								if ((tmp17)){
									HX_STACK_LINE(46)
									int tmp19 = child->nodeType;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(46)
									int tmp20 = ::Xml_obj::Element;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(46)
									int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(46)
									tmp18 = (tmp19 != tmp21);
								}
								else{
									HX_STACK_LINE(46)
									tmp18 = false;
								}
								HX_STACK_LINE(46)
								if ((tmp18)){
									HX_STACK_LINE(46)
									::String tmp19 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + child->nodeType);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(46)
									HX_STACK_DO_THROW(tmp19);
								}
							}
							HX_STACK_LINE(46)
							tmp14 = child->children->iteratorFast< ::Xml >();
						}
						HX_STACK_LINE(46)
						for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp14);  __it->hasNext(); ){
							::Xml property = __it->next();
							{
								HX_STACK_LINE(47)
								::Xml tmp15 = property;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(47)
								bool tmp16 = ::luxe::importers::tiled::TiledUtil_obj::valid_element(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(47)
								if ((tmp16)){
									HX_STACK_LINE(48)
									::String tmp17 = property->get(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(48)
									::String key = tmp17;		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(48)
									::String tmp18 = property->get(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(48)
									::String value = tmp18;		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(48)
									::haxe::ds::StringMap tmp19 = this->properties;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(48)
									::String tmp20 = key;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(48)
									::String tmp21 = value;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(48)
									tmp19->set(tmp20,tmp21);
								}
							}
;
						}
					}
					else if (  ( _switch_1==HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"))){
						HX_STACK_LINE(56)
						::String tmp14 = child->get(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(56)
						this->texture_name = tmp14;
					}
					else if (  ( _switch_1==HX_HCSTRING("tile","\x2e","\xcb","\xfc","\x4c"))){
						HX_STACK_LINE(60)
						::String tmp14 = child->get(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(60)
						Dynamic tmp15 = ::Std_obj::parseInt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(60)
						int _tile_id = tmp15;		HX_STACK_VAR(_tile_id,"_tile_id");
						HX_STACK_LINE(61)
						::haxe::ds::StringMap tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(61)
						{
							HX_STACK_LINE(61)
							::haxe::ds::StringMap tmp17 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(61)
							::haxe::ds::StringMap tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(61)
							tmp16 = tmp18;
						}
						HX_STACK_LINE(61)
						::haxe::ds::StringMap _tile_props = tmp16;		HX_STACK_VAR(_tile_props,"_tile_props");
						HX_STACK_LINE(63)
						Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(63)
						{
							HX_STACK_LINE(63)
							{
								HX_STACK_LINE(63)
								int tmp18 = child->nodeType;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(63)
								int tmp19 = ::Xml_obj::Document;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(63)
								bool tmp20 = (tmp18 != tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(63)
								bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(63)
								if ((tmp20)){
									HX_STACK_LINE(63)
									int tmp22 = child->nodeType;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(63)
									int tmp23 = ::Xml_obj::Element;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(63)
									int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(63)
									tmp21 = (tmp22 != tmp24);
								}
								else{
									HX_STACK_LINE(63)
									tmp21 = false;
								}
								HX_STACK_LINE(63)
								if ((tmp21)){
									HX_STACK_LINE(63)
									::String tmp22 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + child->nodeType);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(63)
									HX_STACK_DO_THROW(tmp22);
								}
							}
							HX_STACK_LINE(63)
							tmp17 = child->children->iteratorFast< ::Xml >();
						}
						HX_STACK_LINE(63)
						for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp17);  __it->hasNext(); ){
							::Xml element = __it->next();
							{
								HX_STACK_LINE(64)
								::Xml tmp18 = element;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(64)
								bool tmp19 = ::luxe::importers::tiled::TiledUtil_obj::valid_element(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(64)
								if ((tmp19)){
									HX_STACK_LINE(65)
									::String tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(65)
									{
										HX_STACK_LINE(65)
										int tmp21 = element->nodeType;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(65)
										int tmp22 = ::Xml_obj::Element;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(65)
										bool tmp23 = (tmp21 != tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(65)
										if ((tmp23)){
											HX_STACK_LINE(65)
											::String tmp24 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + element->nodeType);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(65)
											HX_STACK_DO_THROW(tmp24);
										}
										HX_STACK_LINE(65)
										tmp20 = element->nodeName;
									}
									HX_STACK_LINE(65)
									bool tmp21 = (tmp20 == HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(65)
									if ((tmp21)){
										HX_STACK_LINE(67)
										Dynamic tmp22;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(67)
										{
											HX_STACK_LINE(67)
											{
												HX_STACK_LINE(67)
												int tmp23 = element->nodeType;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(67)
												int tmp24 = ::Xml_obj::Document;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(67)
												bool tmp25 = (tmp23 != tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(67)
												bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(67)
												if ((tmp25)){
													HX_STACK_LINE(67)
													int tmp27 = element->nodeType;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(67)
													int tmp28 = ::Xml_obj::Element;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(67)
													int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(67)
													tmp26 = (tmp27 != tmp29);
												}
												else{
													HX_STACK_LINE(67)
													tmp26 = false;
												}
												HX_STACK_LINE(67)
												if ((tmp26)){
													HX_STACK_LINE(67)
													::String tmp27 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + element->nodeType);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(67)
													HX_STACK_DO_THROW(tmp27);
												}
											}
											HX_STACK_LINE(67)
											tmp22 = element->children->iteratorFast< ::Xml >();
										}
										HX_STACK_LINE(67)
										for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp22);  __it->hasNext(); ){
											::Xml property = __it->next();
											{
												HX_STACK_LINE(69)
												::Xml tmp23 = property;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(69)
												bool tmp24 = ::luxe::importers::tiled::TiledUtil_obj::valid_element(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(69)
												bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(69)
												if ((tmp25)){
													HX_STACK_LINE(70)
													continue;
												}
												HX_STACK_LINE(73)
												{
													HX_STACK_LINE(73)
													::String tmp26 = property->get(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(73)
													::String key = tmp26;		HX_STACK_VAR(key,"key");
													HX_STACK_LINE(73)
													::String tmp27 = property->get(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(73)
													::String value = tmp27;		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(73)
													::String tmp28 = key;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(73)
													::String tmp29 = value;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(73)
													_tile_props->set(tmp28,tmp29);
												}
											}
;
										}
									}
								}
							}
;
						}
						HX_STACK_LINE(81)
						{
							HX_STACK_LINE(81)
							::luxe::importers::tiled::TiledPropertyTile tmp18 = ::luxe::importers::tiled::TiledPropertyTile_obj::__new(_tile_id,_tile_props);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(81)
							::luxe::importers::tiled::TiledPropertyTile value = tmp18;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(81)
							::haxe::ds::IntMap tmp19 = this->property_tiles;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(81)
							int tmp20 = _tile_id;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(81)
							::luxe::importers::tiled::TiledPropertyTile tmp21 = value;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(81)
							tmp19->set(tmp20,tmp21);
						}
					}
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileset_obj,from_xml,(void))

Void TiledTileset_obj::from_json( Dynamic json){
{
		HX_STACK_FRAME("luxe.importers.tiled.TiledTileset","from_json",0xb0bca38a,"luxe.importers.tiled.TiledTileset.from_json","luxe/importers/tiled/TiledTileset.hx",92,0xa0b076e0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(json,"json")
		HX_STACK_LINE(94)
		Dynamic tmp = json;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		Dynamic tmp1 = ::Reflect_obj::field(tmp,HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		this->name = tmp1;
		HX_STACK_LINE(95)
		Dynamic tmp2 = json;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		Dynamic tmp3 = ::Reflect_obj::field(tmp2,HX_HCSTRING("tilewidth","\x18","\xa4","\x90","\xc2"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		this->tile_width = ((int)(tmp3));
		HX_STACK_LINE(96)
		Dynamic tmp4 = json;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		Dynamic tmp5 = ::Reflect_obj::field(tmp4,HX_HCSTRING("tileheight","\x95","\x69","\x4e","\x32"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		this->tile_height = ((int)(tmp5));
		HX_STACK_LINE(97)
		Dynamic tmp6 = json;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(97)
		Dynamic tmp7 = ::Reflect_obj::field(tmp6,HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(97)
		this->spacing = ((int)(tmp7));
		HX_STACK_LINE(98)
		Dynamic tmp8 = json;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(98)
		Dynamic tmp9 = ::Reflect_obj::field(tmp8,HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(98)
		this->margin = ((int)(tmp9));
		HX_STACK_LINE(100)
		Dynamic tmp10 = json;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(100)
		Array< ::String > fields = ::Reflect_obj::fields(tmp10);		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(101)
			while((true)){
				HX_STACK_LINE(101)
				bool tmp11 = (_g < fields->length);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(101)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(101)
				if ((tmp12)){
					HX_STACK_LINE(101)
					break;
				}
				HX_STACK_LINE(101)
				::String tmp13 = fields->__get(_g);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(101)
				::String nodename = tmp13;		HX_STACK_VAR(nodename,"nodename");
				HX_STACK_LINE(101)
				++(_g);
				HX_STACK_LINE(103)
				Dynamic tmp14 = json;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(103)
				::String tmp15 = nodename;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(103)
				Dynamic tmp16 = ::Reflect_obj::field(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(103)
				::String child = tmp16;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(104)
				::String tmp17 = nodename;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(104)
				::String _switch_2 = (tmp17);
				if (  ( _switch_2==HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"))){
					HX_STACK_LINE(107)
					::String tmp18 = child;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(107)
					Array< ::String > child_fields = ::Reflect_obj::fields(tmp18);		HX_STACK_VAR(child_fields,"child_fields");
					HX_STACK_LINE(108)
					{
						HX_STACK_LINE(108)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(108)
						while((true)){
							HX_STACK_LINE(108)
							bool tmp19 = (_g1 < child_fields->length);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(108)
							bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(108)
							if ((tmp20)){
								HX_STACK_LINE(108)
								break;
							}
							HX_STACK_LINE(108)
							::String tmp21 = child_fields->__get(_g1);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(108)
							::String property_name = tmp21;		HX_STACK_VAR(property_name,"property_name");
							HX_STACK_LINE(108)
							++(_g1);
							HX_STACK_LINE(109)
							{
								HX_STACK_LINE(109)
								::String tmp22 = child;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(109)
								::String tmp23 = property_name;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(109)
								Dynamic tmp24 = ::Reflect_obj::field(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(109)
								::String value = tmp24;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(109)
								::haxe::ds::StringMap tmp25 = this->properties;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(109)
								::String tmp26 = property_name;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(109)
								::String tmp27 = value;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(109)
								tmp25->set(tmp26,tmp27);
							}
						}
					}
				}
				else if (  ( _switch_2==HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"))){
					HX_STACK_LINE(116)
					this->texture_name = child;
				}
				else if (  ( _switch_2==HX_HCSTRING("tile","\x2e","\xcb","\xfc","\x4c"))){
					HX_STACK_LINE(120)
					::String tmp18 = child;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(120)
					Dynamic tmp19 = ::Reflect_obj::field(tmp18,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(120)
					int _tile_id = ((int)(tmp19));		HX_STACK_VAR(_tile_id,"_tile_id");
					HX_STACK_LINE(121)
					::haxe::ds::StringMap tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(121)
					{
						HX_STACK_LINE(121)
						::haxe::ds::StringMap tmp21 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(121)
						::haxe::ds::StringMap tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(121)
						tmp20 = tmp22;
					}
					HX_STACK_LINE(121)
					::haxe::ds::StringMap _tile_props = tmp20;		HX_STACK_VAR(_tile_props,"_tile_props");
					HX_STACK_LINE(123)
					::String tmp21 = child;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(123)
					Array< ::String > tile_fields = ::Reflect_obj::fields(tmp21);		HX_STACK_VAR(tile_fields,"tile_fields");
					HX_STACK_LINE(124)
					{
						HX_STACK_LINE(124)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(124)
						while((true)){
							HX_STACK_LINE(124)
							bool tmp22 = (_g1 < tile_fields->length);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(124)
							bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(124)
							if ((tmp23)){
								HX_STACK_LINE(124)
								break;
							}
							HX_STACK_LINE(124)
							::String tmp24 = tile_fields->__get(_g1);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(124)
							::String tile_node = tmp24;		HX_STACK_VAR(tile_node,"tile_node");
							HX_STACK_LINE(124)
							++(_g1);
							HX_STACK_LINE(125)
							bool tmp25 = (tile_node == HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(125)
							if ((tmp25)){
								HX_STACK_LINE(126)
								::String tmp26 = child;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(126)
								::String tmp27 = tile_node;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(126)
								Dynamic tmp28 = ::Reflect_obj::field(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(126)
								Dynamic tile_item = tmp28;		HX_STACK_VAR(tile_item,"tile_item");
								HX_STACK_LINE(127)
								Dynamic tmp29 = tile_item;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(127)
								Array< ::String > child_fields = ::Reflect_obj::fields(tmp29);		HX_STACK_VAR(child_fields,"child_fields");
								HX_STACK_LINE(128)
								{
									HX_STACK_LINE(128)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(128)
									while((true)){
										HX_STACK_LINE(128)
										bool tmp30 = (_g2 < child_fields->length);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(128)
										bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(128)
										if ((tmp31)){
											HX_STACK_LINE(128)
											break;
										}
										HX_STACK_LINE(128)
										::String tmp32 = child_fields->__get(_g2);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(128)
										::String property_name = tmp32;		HX_STACK_VAR(property_name,"property_name");
										HX_STACK_LINE(128)
										++(_g2);
										HX_STACK_LINE(129)
										{
											HX_STACK_LINE(129)
											Dynamic tmp33 = tile_item;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(129)
											::String tmp34 = property_name;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(129)
											Dynamic tmp35 = ::Reflect_obj::field(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(129)
											::String value = tmp35;		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(129)
											::haxe::ds::StringMap tmp36 = this->properties;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(129)
											::String tmp37 = property_name;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(129)
											::String tmp38 = value;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(129)
											tmp36->set(tmp37,tmp38);
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(134)
					{
						HX_STACK_LINE(134)
						::luxe::importers::tiled::TiledPropertyTile tmp22 = ::luxe::importers::tiled::TiledPropertyTile_obj::__new(_tile_id,_tile_props);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(134)
						::luxe::importers::tiled::TiledPropertyTile value = tmp22;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(134)
						::haxe::ds::IntMap tmp23 = this->property_tiles;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(134)
						int tmp24 = _tile_id;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(134)
						::luxe::importers::tiled::TiledPropertyTile tmp25 = value;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(134)
						tmp23->set(tmp24,tmp25);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileset_obj,from_json,(void))


TiledTileset_obj::TiledTileset_obj()
{
}

void TiledTileset_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledTileset);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(texture_name,"texture_name");
	HX_MARK_MEMBER_NAME(first_id,"first_id");
	HX_MARK_MEMBER_NAME(tile_width,"tile_width");
	HX_MARK_MEMBER_NAME(tile_height,"tile_height");
	HX_MARK_MEMBER_NAME(margin,"margin");
	HX_MARK_MEMBER_NAME(spacing,"spacing");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(property_tiles,"property_tiles");
	HX_MARK_END_CLASS();
}

void TiledTileset_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(texture_name,"texture_name");
	HX_VISIT_MEMBER_NAME(first_id,"first_id");
	HX_VISIT_MEMBER_NAME(tile_width,"tile_width");
	HX_VISIT_MEMBER_NAME(tile_height,"tile_height");
	HX_VISIT_MEMBER_NAME(margin,"margin");
	HX_VISIT_MEMBER_NAME(spacing,"spacing");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(property_tiles,"property_tiles");
}

Dynamic TiledTileset_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { return margin; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { return spacing; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"first_id") ) { return first_id; }
		if (HX_FIELD_EQ(inName,"from_xml") ) { return from_xml_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"from_json") ) { return from_json_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tile_width") ) { return tile_width; }
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tile_height") ) { return tile_height; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"texture_name") ) { return texture_name; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"property_tiles") ) { return property_tiles; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledTileset_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { margin=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { spacing=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"first_id") ) { first_id=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tile_width") ) { tile_width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tile_height") ) { tile_height=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"texture_name") ) { texture_name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"property_tiles") ) { property_tiles=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledTileset_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("texture_name","\x6f","\xcb","\x82","\x61"));
	outFields->push(HX_HCSTRING("first_id","\xca","\x37","\x20","\xf1"));
	outFields->push(HX_HCSTRING("tile_width","\xf5","\x5e","\x4c","\xf6"));
	outFields->push(HX_HCSTRING("tile_height","\x18","\x30","\xd6","\x42"));
	outFields->push(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"));
	outFields->push(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	outFields->push(HX_HCSTRING("property_tiles","\xdb","\xfa","\x5a","\x8a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TiledTileset_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(TiledTileset_obj,texture_name),HX_HCSTRING("texture_name","\x6f","\xcb","\x82","\x61")},
	{hx::fsInt,(int)offsetof(TiledTileset_obj,first_id),HX_HCSTRING("first_id","\xca","\x37","\x20","\xf1")},
	{hx::fsInt,(int)offsetof(TiledTileset_obj,tile_width),HX_HCSTRING("tile_width","\xf5","\x5e","\x4c","\xf6")},
	{hx::fsInt,(int)offsetof(TiledTileset_obj,tile_height),HX_HCSTRING("tile_height","\x18","\x30","\xd6","\x42")},
	{hx::fsInt,(int)offsetof(TiledTileset_obj,margin),HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba")},
	{hx::fsInt,(int)offsetof(TiledTileset_obj,spacing),HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TiledTileset_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(TiledTileset_obj,property_tiles),HX_HCSTRING("property_tiles","\xdb","\xfa","\x5a","\x8a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("texture_name","\x6f","\xcb","\x82","\x61"),
	HX_HCSTRING("first_id","\xca","\x37","\x20","\xf1"),
	HX_HCSTRING("tile_width","\xf5","\x5e","\x4c","\xf6"),
	HX_HCSTRING("tile_height","\x18","\x30","\xd6","\x42"),
	HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"),
	HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("property_tiles","\xdb","\xfa","\x5a","\x8a"),
	HX_HCSTRING("from_xml","\x42","\x55","\x19","\xb2"),
	HX_HCSTRING("from_json","\x5d","\xd8","\xd4","\x1a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledTileset_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledTileset_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledTileset_obj::__mClass;

void TiledTileset_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.importers.tiled.TiledTileset","\x5b","\xe1","\xb2","\xaa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledTileset_obj >;
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
