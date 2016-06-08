#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledLayer
#include <luxe/importers/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledMapData
#include <luxe/importers/tiled/TiledMapData.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledTile
#include <luxe/importers/tiled/TiledTile.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledUtil
#include <luxe/importers/tiled/TiledUtil.h>
#endif
namespace luxe{
namespace importers{
namespace tiled{

Void TiledLayer_obj::__construct(::luxe::importers::tiled::TiledMapData _map)
{
HX_STACK_FRAME("luxe.importers.tiled.TiledLayer","new",0xe9e4d72a,"luxe.importers.tiled.TiledLayer.new","luxe/importers/tiled/TiledLayer.hx",9,0x48b3f4e3)
HX_STACK_THIS(this)
HX_STACK_ARG(_map,"_map")
{
	HX_STACK_LINE(12)
	this->visible = true;
	HX_STACK_LINE(11)
	this->opacity = ((Float)1.0);
	HX_STACK_LINE(22)
	this->map = _map;
	HX_STACK_LINE(23)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	{
		HX_STACK_LINE(23)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		tmp = tmp2;
	}
	HX_STACK_LINE(23)
	this->properties = tmp;
	HX_STACK_LINE(24)
	this->tiles = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//TiledLayer_obj::~TiledLayer_obj() { }

Dynamic TiledLayer_obj::__CreateEmpty() { return  new TiledLayer_obj; }
hx::ObjectPtr< TiledLayer_obj > TiledLayer_obj::__new(::luxe::importers::tiled::TiledMapData _map)
{  hx::ObjectPtr< TiledLayer_obj > _result_ = new TiledLayer_obj();
	_result_->__construct(_map);
	return _result_;}

Dynamic TiledLayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledLayer_obj > _result_ = new TiledLayer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void TiledLayer_obj::from_xml( ::Xml xml){
{
		HX_STACK_FRAME("luxe.importers.tiled.TiledLayer","from_xml",0x63297238,"luxe.importers.tiled.TiledLayer.from_xml","luxe/importers/tiled/TiledLayer.hx",27,0x48b3f4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_LINE(29)
		Array< int > tileGIDs = Array_obj< int >::__new();		HX_STACK_VAR(tileGIDs,"tileGIDs");
		HX_STACK_LINE(31)
		::Xml root = xml;		HX_STACK_VAR(root,"root");
		HX_STACK_LINE(33)
		::String tmp = root->get(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		this->name = tmp;
		HX_STACK_LINE(34)
		::String tmp1 = root->get(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		Dynamic tmp2 = ::Std_obj::parseInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		this->width = tmp2;
		HX_STACK_LINE(35)
		::String tmp3 = root->get(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		Dynamic tmp4 = ::Std_obj::parseInt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		this->height = tmp4;
		HX_STACK_LINE(37)
		::String tmp5 = root->get(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		::String _opacity = tmp5;		HX_STACK_VAR(_opacity,"_opacity");
		HX_STACK_LINE(38)
		::String tmp6 = root->get(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		::String _visible = tmp6;		HX_STACK_VAR(_visible,"_visible");
		HX_STACK_LINE(39)
		bool tmp7 = (_opacity == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(39)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(39)
		if ((tmp7)){
			HX_STACK_LINE(39)
			tmp8 = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(39)
			::String tmp9 = _opacity;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(39)
			tmp8 = ::Std_obj::parseFloat(tmp9);
		}
		HX_STACK_LINE(39)
		this->opacity = tmp8;
		HX_STACK_LINE(40)
		bool tmp9 = (_visible == HX_HCSTRING("0","\x30","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(40)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(40)
		if ((tmp9)){
			HX_STACK_LINE(40)
			tmp10 = false;
		}
		else{
			HX_STACK_LINE(40)
			tmp10 = true;
		}
		HX_STACK_LINE(40)
		this->visible = tmp10;
		HX_STACK_LINE(42)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			{
				HX_STACK_LINE(42)
				int tmp12 = root->nodeType;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(42)
				int tmp13 = ::Xml_obj::Document;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(42)
				bool tmp14 = (tmp12 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(42)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(42)
				if ((tmp14)){
					HX_STACK_LINE(42)
					int tmp16 = root->nodeType;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(42)
					int tmp17 = ::Xml_obj::Element;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(42)
					int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(42)
					tmp15 = (tmp16 != tmp18);
				}
				else{
					HX_STACK_LINE(42)
					tmp15 = false;
				}
				HX_STACK_LINE(42)
				if ((tmp15)){
					HX_STACK_LINE(42)
					::String tmp16 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + root->nodeType);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(42)
					HX_STACK_DO_THROW(tmp16);
				}
			}
			HX_STACK_LINE(42)
			tmp11 = root->children->iteratorFast< ::Xml >();
		}
		HX_STACK_LINE(42)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp11);  __it->hasNext(); ){
			::Xml child = __it->next();
			{
				HX_STACK_LINE(44)
				::Xml tmp12 = child;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(44)
				bool tmp13 = ::luxe::importers::tiled::TiledUtil_obj::valid_element(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(44)
				if ((tmp13)){
					HX_STACK_LINE(46)
					::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(46)
					{
						HX_STACK_LINE(46)
						int tmp15 = child->nodeType;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(46)
						int tmp16 = ::Xml_obj::Element;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(46)
						bool tmp17 = (tmp15 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(46)
						if ((tmp17)){
							HX_STACK_LINE(46)
							::String tmp18 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + child->nodeType);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(46)
							HX_STACK_DO_THROW(tmp18);
						}
						HX_STACK_LINE(46)
						tmp14 = child->nodeName;
					}
					HX_STACK_LINE(46)
					::String _g = tmp14;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(46)
					::String tmp15 = _g;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(46)
					::String _switch_1 = (tmp15);
					if (  ( _switch_1==HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"))){
						HX_STACK_LINE(49)
						Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(49)
						{
							HX_STACK_LINE(49)
							{
								HX_STACK_LINE(49)
								int tmp17 = child->nodeType;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(49)
								int tmp18 = ::Xml_obj::Document;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(49)
								bool tmp19 = (tmp17 != tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(49)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(49)
								if ((tmp19)){
									HX_STACK_LINE(49)
									int tmp21 = child->nodeType;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(49)
									int tmp22 = ::Xml_obj::Element;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(49)
									int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(49)
									tmp20 = (tmp21 != tmp23);
								}
								else{
									HX_STACK_LINE(49)
									tmp20 = false;
								}
								HX_STACK_LINE(49)
								if ((tmp20)){
									HX_STACK_LINE(49)
									::String tmp21 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + child->nodeType);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(49)
									HX_STACK_DO_THROW(tmp21);
								}
							}
							HX_STACK_LINE(49)
							tmp16 = child->children->iteratorFast< ::Xml >();
						}
						HX_STACK_LINE(49)
						for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp16);  __it->hasNext(); ){
							::Xml property = __it->next();
							{
								HX_STACK_LINE(51)
								::Xml tmp17 = property;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(51)
								bool tmp18 = ::luxe::importers::tiled::TiledUtil_obj::valid_element(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(51)
								bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(51)
								if ((tmp19)){
									HX_STACK_LINE(52)
									continue;
								}
								HX_STACK_LINE(55)
								{
									HX_STACK_LINE(55)
									::String tmp20 = property->get(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(55)
									::String key = tmp20;		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(55)
									::String tmp21 = property->get(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(55)
									::String value = tmp21;		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(55)
									::haxe::ds::StringMap tmp22 = this->properties;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(55)
									::String tmp23 = key;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(55)
									::String tmp24 = value;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(55)
									tmp22->set(tmp23,tmp24);
								}
							}
;
						}
					}
					else if (  ( _switch_1==HX_HCSTRING("data","\x2a","\x56","\x63","\x42"))){
						HX_STACK_LINE(62)
						bool tmp16 = child->exists(HX_HCSTRING("encoding","\xd3","\x8c","\x58","\x30"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(62)
						::String tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(62)
						if ((tmp16)){
							HX_STACK_LINE(62)
							tmp17 = child->get(HX_HCSTRING("encoding","\xd3","\x8c","\x58","\x30"));
						}
						else{
							HX_STACK_LINE(62)
							tmp17 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
						}
						HX_STACK_LINE(62)
						::String encoding = tmp17;		HX_STACK_VAR(encoding,"encoding");
						HX_STACK_LINE(63)
						::String tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(63)
						{
							HX_STACK_LINE(63)
							::Xml tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(63)
							{
								HX_STACK_LINE(63)
								{
									HX_STACK_LINE(63)
									int tmp20 = child->nodeType;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(63)
									int tmp21 = ::Xml_obj::Document;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(63)
									bool tmp22 = (tmp20 != tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(63)
									bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(63)
									if ((tmp22)){
										HX_STACK_LINE(63)
										int tmp24 = child->nodeType;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(63)
										int tmp25 = ::Xml_obj::Element;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(63)
										int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(63)
										tmp23 = (tmp24 != tmp26);
									}
									else{
										HX_STACK_LINE(63)
										tmp23 = false;
									}
									HX_STACK_LINE(63)
									if ((tmp23)){
										HX_STACK_LINE(63)
										::String tmp24 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + child->nodeType);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(63)
										HX_STACK_DO_THROW(tmp24);
									}
								}
								HX_STACK_LINE(63)
								tmp19 = child->children->__get((int)0).StaticCast< ::Xml >();
							}
							HX_STACK_LINE(63)
							::Xml _this = tmp19;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(63)
							int tmp20 = _this->nodeType;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(63)
							int tmp21 = ::Xml_obj::Document;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(63)
							bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(63)
							bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(63)
							bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(63)
							if ((tmp23)){
								HX_STACK_LINE(63)
								int tmp25 = _this->nodeType;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(63)
								int tmp26 = ::Xml_obj::Element;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(63)
								int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(63)
								tmp24 = (tmp25 == tmp27);
							}
							else{
								HX_STACK_LINE(63)
								tmp24 = true;
							}
							HX_STACK_LINE(63)
							if ((tmp24)){
								HX_STACK_LINE(63)
								::String tmp25 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + _this->nodeType);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(63)
								HX_STACK_DO_THROW(tmp25);
							}
							HX_STACK_LINE(63)
							tmp18 = _this->nodeValue;
						}
						HX_STACK_LINE(63)
						::String node_value = tmp18;		HX_STACK_VAR(node_value,"node_value");
						HX_STACK_LINE(65)
						::String tmp19 = encoding;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(65)
						::String _switch_2 = (tmp19);
						if (  ( _switch_2==HX_HCSTRING("base64","\x8f","\xfd","\x27","\x55"))){
							HX_STACK_LINE(69)
							::String tmp20 = node_value;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(69)
							::String tmp21 = child->get(HX_HCSTRING("compression","\x66","\xb7","\x2b","\x77"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(69)
							tileGIDs = ::luxe::importers::tiled::TiledLayer_obj::base64_to_array(tmp20,tmp21);
						}
						else if (  ( _switch_2==HX_HCSTRING("csv","\xc6","\x83","\x4b","\x00"))){
							HX_STACK_LINE(71)
							::String tmp20 = node_value;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(71)
							tileGIDs = this->csv_to_array(tmp20);
						}
						else  {
							HX_STACK_LINE(75)
							Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(75)
							{
								HX_STACK_LINE(75)
								{
									HX_STACK_LINE(75)
									int tmp21 = child->nodeType;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(75)
									int tmp22 = ::Xml_obj::Document;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(75)
									bool tmp23 = (tmp21 != tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(75)
									bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(75)
									if ((tmp23)){
										HX_STACK_LINE(75)
										int tmp25 = child->nodeType;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(75)
										int tmp26 = ::Xml_obj::Element;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(75)
										int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(75)
										tmp24 = (tmp25 != tmp27);
									}
									else{
										HX_STACK_LINE(75)
										tmp24 = false;
									}
									HX_STACK_LINE(75)
									if ((tmp24)){
										HX_STACK_LINE(75)
										::String tmp25 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + child->nodeType);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(75)
										HX_STACK_DO_THROW(tmp25);
									}
								}
								HX_STACK_LINE(75)
								tmp20 = child->children->iteratorFast< ::Xml >();
							}
							HX_STACK_LINE(75)
							for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp20);  __it->hasNext(); ){
								::Xml tile = __it->next();
								{
									HX_STACK_LINE(76)
									::Xml tmp21 = tile;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(76)
									bool tmp22 = ::luxe::importers::tiled::TiledUtil_obj::valid_element(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(76)
									if ((tmp22)){
										HX_STACK_LINE(78)
										::String tmp23 = tile->get(HX_HCSTRING("gid","\x02","\x84","\x4e","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(78)
										Dynamic tmp24 = ::Std_obj::parseInt(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(78)
										Dynamic gid = tmp24;		HX_STACK_VAR(gid,"gid");
										HX_STACK_LINE(79)
										Dynamic tmp25 = gid;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(79)
										tileGIDs->push(tmp25);
									}
								}
;
							}
						}
;
;
					}
				}
			}
;
		}
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(92)
			while((true)){
				HX_STACK_LINE(92)
				bool tmp12 = (_g < tileGIDs->length);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(92)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(92)
				if ((tmp13)){
					HX_STACK_LINE(92)
					break;
				}
				HX_STACK_LINE(92)
				int tmp14 = tileGIDs->__get(_g);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(92)
				int gid = tmp14;		HX_STACK_VAR(gid,"gid");
				HX_STACK_LINE(92)
				++(_g);
				HX_STACK_LINE(93)
				::luxe::importers::tiled::TiledTile tmp15 = ::luxe::importers::tiled::TiledTile_obj::__new(hx::ObjectPtr<OBJ_>(this),gid);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(93)
				this->tiles->push(tmp15);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledLayer_obj,from_xml,(void))

Void TiledLayer_obj::from_json( Dynamic json){
{
		HX_STACK_FRAME("luxe.importers.tiled.TiledLayer","from_json",0x57de12a7,"luxe.importers.tiled.TiledLayer.from_json","luxe/importers/tiled/TiledLayer.hx",98,0x48b3f4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(json,"json")
		HX_STACK_LINE(100)
		Array< Float > tileGIDs = Array_obj< Float >::__new();		HX_STACK_VAR(tileGIDs,"tileGIDs");
		HX_STACK_LINE(102)
		Dynamic tmp = json;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		Dynamic tmp1 = ::Reflect_obj::field(tmp,HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		this->name = tmp1;
		HX_STACK_LINE(103)
		Dynamic tmp2 = json;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		Dynamic tmp3 = ::Reflect_obj::field(tmp2,HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		Dynamic tmp4 = ::Std_obj::parseInt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(103)
		this->width = tmp4;
		HX_STACK_LINE(104)
		Dynamic tmp5 = json;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(104)
		Dynamic tmp6 = ::Reflect_obj::field(tmp5,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(104)
		Dynamic tmp7 = ::Std_obj::parseInt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(104)
		this->height = tmp7;
		HX_STACK_LINE(105)
		Dynamic tmp8 = json;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(105)
		Dynamic tmp9 = ::Reflect_obj::field(tmp8,HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(105)
		Float tmp10 = ::Std_obj::parseFloat(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(105)
		this->opacity = tmp10;
		HX_STACK_LINE(106)
		Dynamic tmp11 = json;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(106)
		Dynamic tmp12 = ::Reflect_obj::field(tmp11,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(106)
		bool tmp13 = (tmp12 == HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(106)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(106)
		if ((tmp13)){
			HX_STACK_LINE(106)
			tmp14 = false;
		}
		else{
			HX_STACK_LINE(106)
			tmp14 = true;
		}
		HX_STACK_LINE(106)
		this->visible = tmp14;
		HX_STACK_LINE(108)
		Dynamic tmp15 = json;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(108)
		Array< ::String > fields = ::Reflect_obj::fields(tmp15);		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(109)
			while((true)){
				HX_STACK_LINE(109)
				bool tmp16 = (_g < fields->length);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(109)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(109)
				if ((tmp17)){
					HX_STACK_LINE(109)
					break;
				}
				HX_STACK_LINE(109)
				::String tmp18 = fields->__get(_g);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(109)
				::String nodename = tmp18;		HX_STACK_VAR(nodename,"nodename");
				HX_STACK_LINE(109)
				++(_g);
				HX_STACK_LINE(110)
				Dynamic tmp19 = json;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(110)
				::String tmp20 = nodename;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(110)
				Dynamic tmp21 = ::Reflect_obj::field(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(110)
				Array< Float > child = tmp21;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(111)
				::String tmp22 = nodename;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(111)
				::String _switch_3 = (tmp22);
				if (  ( _switch_3==HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"))){
					HX_STACK_LINE(114)
					Array< ::String > child_fields = ::Reflect_obj::fields(child);		HX_STACK_VAR(child_fields,"child_fields");
					HX_STACK_LINE(115)
					{
						HX_STACK_LINE(115)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(115)
						while((true)){
							HX_STACK_LINE(115)
							bool tmp23 = (_g1 < child_fields->length);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(115)
							bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(115)
							if ((tmp24)){
								HX_STACK_LINE(115)
								break;
							}
							HX_STACK_LINE(115)
							::String tmp25 = child_fields->__get(_g1);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(115)
							::String property_name = tmp25;		HX_STACK_VAR(property_name,"property_name");
							HX_STACK_LINE(115)
							++(_g1);
							HX_STACK_LINE(116)
							{
								HX_STACK_LINE(116)
								::String tmp26 = property_name;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(116)
								Dynamic tmp27 = ::Reflect_obj::field(child,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(116)
								::String value = tmp27;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(116)
								::haxe::ds::StringMap tmp28 = this->properties;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(116)
								::String tmp29 = property_name;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(116)
								::String tmp30 = value;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(116)
								tmp28->set(tmp29,tmp30);
							}
						}
					}
				}
				else if (  ( _switch_3==HX_HCSTRING("data","\x2a","\x56","\x63","\x42"))){
					HX_STACK_LINE(121)
					tileGIDs = child;
				}
			}
		}
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(128)
			while((true)){
				HX_STACK_LINE(128)
				bool tmp16 = (_g < tileGIDs->length);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(128)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(128)
				if ((tmp17)){
					HX_STACK_LINE(128)
					break;
				}
				HX_STACK_LINE(128)
				Float tmp18 = tileGIDs->__get(_g);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(128)
				Float gid = tmp18;		HX_STACK_VAR(gid,"gid");
				HX_STACK_LINE(128)
				++(_g);
				HX_STACK_LINE(129)
				Float tmp19 = gid;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(129)
				int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(129)
				::luxe::importers::tiled::TiledTile tmp21 = ::luxe::importers::tiled::TiledTile_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(129)
				this->tiles->push(tmp21);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledLayer_obj,from_json,(void))

Array< int > TiledLayer_obj::csv_to_array( ::String input){
	HX_STACK_FRAME("luxe.importers.tiled.TiledLayer","csv_to_array",0xa4dc8364,"luxe.importers.tiled.TiledLayer.csv_to_array","luxe/importers/tiled/TiledLayer.hx",134,0x48b3f4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(input,"input")
	HX_STACK_LINE(136)
	Array< int > result = Array_obj< int >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(137)
	::String tmp = input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	::String tmp1 = ::StringTools_obj::trim(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	Array< ::String > rows = tmp1.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(rows,"rows");
	HX_STACK_LINE(138)
	::String row;		HX_STACK_VAR(row,"row");
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		while((true)){
			HX_STACK_LINE(140)
			bool tmp2 = (_g < rows->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(140)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			if ((tmp3)){
				HX_STACK_LINE(140)
				break;
			}
			HX_STACK_LINE(140)
			::String tmp4 = rows->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			::String row1 = tmp4;		HX_STACK_VAR(row1,"row1");
			HX_STACK_LINE(140)
			++(_g);
			HX_STACK_LINE(141)
			bool tmp5 = (row1 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(141)
			if ((tmp5)){
				HX_STACK_LINE(142)
				Array< int > resultRow = Array_obj< int >::__new();		HX_STACK_VAR(resultRow,"resultRow");
				HX_STACK_LINE(143)
				::String tmp6 = row1;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(143)
				::String tmp7 = ::StringTools_obj::trim(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(143)
				Array< ::String > entries = tmp7.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(entries,"entries");
				HX_STACK_LINE(144)
				::String entry;		HX_STACK_VAR(entry,"entry");
				HX_STACK_LINE(145)
				{
					HX_STACK_LINE(145)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(145)
					while((true)){
						HX_STACK_LINE(145)
						bool tmp8 = (_g1 < entries->length);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(145)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(145)
						if ((tmp9)){
							HX_STACK_LINE(145)
							break;
						}
						HX_STACK_LINE(145)
						::String tmp10 = entries->__get(_g1);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(145)
						::String entry1 = tmp10;		HX_STACK_VAR(entry1,"entry1");
						HX_STACK_LINE(145)
						++(_g1);
						HX_STACK_LINE(146)
						bool tmp11 = (entry1 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(146)
						if ((tmp11)){
							HX_STACK_LINE(147)
							::String tmp12 = entry1;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(147)
							Dynamic tmp13 = ::Std_obj::parseInt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(147)
							result->push(tmp13);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(153)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledLayer_obj,csv_to_array,return )

int TiledLayer_obj::bytes_get_int32( ::haxe::io::Bytes bytes,int pos){
	HX_STACK_FRAME("luxe.importers.tiled.TiledLayer","bytes_get_int32",0xe53a555b,"luxe.importers.tiled.TiledLayer.bytes_get_int32","luxe/importers/tiled/TiledLayer.hx",163,0x48b3f4e3)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(168)
	int tmp = bytes->b->__get(pos);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(168)
	int tmp1 = (pos + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(168)
	int tmp2 = bytes->b->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(168)
	int tmp3 = (int(tmp2) << int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(168)
	int tmp4 = (int(tmp) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(168)
	int tmp5 = (pos + (int)2);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(168)
	int tmp6 = bytes->b->__get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(168)
	int tmp7 = (int(tmp6) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(168)
	int tmp8 = (int(tmp4) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(168)
	int tmp9 = (pos + (int)3);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(168)
	int tmp10 = bytes->b->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(168)
	int tmp11 = (int(tmp10) << int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(168)
	int tmp12 = (int(tmp8) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(168)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TiledLayer_obj,bytes_get_int32,return )

::String TiledLayer_obj::base_chars;

Array< int > TiledLayer_obj::base_lookup;

Array< int > TiledLayer_obj::base64_to_array( ::String input,::String compression){
	HX_STACK_FRAME("luxe.importers.tiled.TiledLayer","base64_to_array",0xb7a5464f,"luxe.importers.tiled.TiledLayer.base64_to_array","luxe/importers/tiled/TiledLayer.hx",174,0x48b3f4e3)
	HX_STACK_ARG(input,"input")
	HX_STACK_ARG(compression,"compression")
	HX_STACK_LINE(177)
	int tmp = ::luxe::importers::tiled::TiledLayer_obj::base_lookup->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(177)
	if ((tmp1)){
		HX_STACK_LINE(178)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(178)
		::String tmp2 = ::luxe::importers::tiled::TiledLayer_obj::base_chars;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(178)
		int _g = tmp2.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(178)
		while((true)){
			HX_STACK_LINE(178)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(178)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(178)
			if ((tmp4)){
				HX_STACK_LINE(178)
				break;
			}
			HX_STACK_LINE(178)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(178)
			int c = tmp5;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(179)
			::String tmp6 = ::luxe::importers::tiled::TiledLayer_obj::base_chars;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(179)
			int tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(179)
			Dynamic tmp8 = tmp6.charCodeAt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(179)
			int tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(179)
			::luxe::importers::tiled::TiledLayer_obj::base_lookup[tmp8] = tmp9;
		}
	}
	HX_STACK_LINE(182)
	Array< int > result = Array_obj< int >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(184)
	Float tmp2 = (Float(input.length) / Float((int)4));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(184)
	Float tmp3 = (tmp2 * (int)3);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(184)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(184)
	::haxe::io::Bytes tmp5 = ::haxe::io::Bytes_obj::alloc(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(184)
	::haxe::io::Bytes bytes = tmp5;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(186)
	int byte_pos = (int)0;		HX_STACK_VAR(byte_pos,"byte_pos");
	HX_STACK_LINE(188)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(190)
	while((true)){
		HX_STACK_LINE(190)
		int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(190)
		int tmp7 = (input.length - (int)3);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(190)
		bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(190)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(190)
		if ((tmp9)){
			HX_STACK_LINE(190)
			break;
		}
		HX_STACK_LINE(192)
		int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(192)
		::String tmp11 = input.charAt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(192)
		::String input_ch = tmp11;		HX_STACK_VAR(input_ch,"input_ch");
		HX_STACK_LINE(194)
		bool tmp12 = (input_ch == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(194)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(194)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(194)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(194)
		if ((tmp14)){
			HX_STACK_LINE(194)
			tmp15 = (input_ch == HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(194)
			tmp15 = true;
		}
		HX_STACK_LINE(194)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(194)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(194)
		if ((tmp16)){
			HX_STACK_LINE(194)
			tmp17 = (input_ch == HX_HCSTRING("\r","\x0d","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(194)
			tmp17 = true;
		}
		HX_STACK_LINE(194)
		if ((tmp17)){
			HX_STACK_LINE(195)
			(i)++;
			HX_STACK_LINE(196)
			continue;
		}
		HX_STACK_LINE(200)
		int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(200)
		Dynamic tmp19 = input.charCodeAt(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(200)
		int tmp20 = ::luxe::importers::tiled::TiledLayer_obj::base_lookup->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(200)
		int a0 = tmp20;		HX_STACK_VAR(a0,"a0");
		HX_STACK_LINE(201)
		int tmp21 = (i + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(201)
		Dynamic tmp22 = input.charCodeAt(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(201)
		int tmp23 = ::luxe::importers::tiled::TiledLayer_obj::base_lookup->__get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(201)
		int a1 = tmp23;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(202)
		int tmp24 = (i + (int)2);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(202)
		Dynamic tmp25 = input.charCodeAt(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(202)
		int tmp26 = ::luxe::importers::tiled::TiledLayer_obj::base_lookup->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(202)
		int a2 = tmp26;		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(203)
		int tmp27 = (i + (int)3);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(203)
		Dynamic tmp28 = input.charCodeAt(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(203)
		int tmp29 = ::luxe::importers::tiled::TiledLayer_obj::base_lookup->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(203)
		int a3 = tmp29;		HX_STACK_VAR(a3,"a3");
		HX_STACK_LINE(209)
		bool tmp30 = (a1 < (int)64);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(209)
		if ((tmp30)){
			HX_STACK_LINE(209)
			int tmp31 = (byte_pos)++;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(209)
			int pos = tmp31;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(209)
			int tmp32 = (int(a0) << int((int)2));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(209)
			int tmp33 = (int(a1) & int((int)48));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(209)
			int tmp34 = (int(tmp33) >> int((int)4));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(209)
			int tmp35 = (tmp32 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(209)
			bytes->b[pos] = tmp35;
		}
		HX_STACK_LINE(210)
		bool tmp31 = (a2 < (int)64);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(210)
		if ((tmp31)){
			HX_STACK_LINE(210)
			int tmp32 = (byte_pos)++;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(210)
			int pos = tmp32;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(210)
			int tmp33 = (int(a1) & int((int)15));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(210)
			int tmp34 = (int(tmp33) << int((int)4));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(210)
			int tmp35 = (int(a2) & int((int)60));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(210)
			int tmp36 = (int(tmp35) >> int((int)2));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(210)
			int tmp37 = (tmp34 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(210)
			bytes->b[pos] = tmp37;
		}
		HX_STACK_LINE(211)
		bool tmp32 = (a3 < (int)64);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(211)
		if ((tmp32)){
			HX_STACK_LINE(211)
			int tmp33 = (byte_pos)++;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(211)
			int pos = tmp33;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(211)
			int tmp34 = (int(a2) & int((int)3));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(211)
			int tmp35 = (int(tmp34) << int((int)6));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(211)
			int tmp36 = a3;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(211)
			int tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(211)
			bytes->b[pos] = tmp37;
		}
		HX_STACK_LINE(213)
		hx::AddEq(i,(int)4);
	}
	HX_STACK_LINE(220)
	bool tmp6 = (compression != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(220)
	if ((tmp6)){
		HX_STACK_LINE(221)
		bool tmp7 = (compression != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(221)
		if ((tmp7)){
			HX_STACK_LINE(221)
			::String tmp8 = compression;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(221)
			::String _switch_4 = (tmp8);
			if (  ( _switch_4==HX_HCSTRING("gzip","\xda","\xe8","\x71","\x44"))){
				HX_STACK_LINE(222)
				HX_STACK_DO_THROW(HX_HCSTRING("TiledMap: gzip compression is not currently supported. Try zlib/zip compression instead.","\x6d","\x48","\xdc","\x42"));
			}
			else if (  ( _switch_4==HX_HCSTRING("zlib","\x0b","\x57","\xf6","\x50"))){
				HX_STACK_LINE(223)
				::haxe::io::Bytes tmp9 = bytes;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(223)
				::haxe::io::Bytes tmp10 = ::haxe::zip::Uncompress_obj::run(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(223)
				bytes = tmp10;
			}
		}
	}
	HX_STACK_LINE(227)
	int byte_len = bytes->length;		HX_STACK_VAR(byte_len,"byte_len");
	HX_STACK_LINE(229)
	byte_pos = (int)0;
	HX_STACK_LINE(231)
	while((true)){
		HX_STACK_LINE(231)
		bool tmp7 = (byte_pos < byte_len);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(231)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(231)
		if ((tmp8)){
			HX_STACK_LINE(231)
			break;
		}
		HX_STACK_LINE(232)
		int tmp9 = bytes->b->__get(byte_pos);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(232)
		int tmp10 = (byte_pos + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(232)
		int tmp11 = bytes->b->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(232)
		int tmp12 = (int(tmp11) << int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(232)
		int tmp13 = (int(tmp9) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(232)
		int tmp14 = (byte_pos + (int)2);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(232)
		int tmp15 = bytes->b->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(232)
		int tmp16 = (int(tmp15) << int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(232)
		int tmp17 = (int(tmp13) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(232)
		int tmp18 = (byte_pos + (int)3);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(232)
		int tmp19 = bytes->b->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(232)
		int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(232)
		int tmp21 = (int(tmp17) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(232)
		result->push(tmp21);
		HX_STACK_LINE(233)
		hx::AddEq(byte_pos,(int)4);
	}
	HX_STACK_LINE(236)
	bytes = null();
	HX_STACK_LINE(238)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TiledLayer_obj,base64_to_array,return )


TiledLayer_obj::TiledLayer_obj()
{
}

void TiledLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledLayer);
	HX_MARK_MEMBER_NAME(opacity,"opacity");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(tiles,"tiles");
	HX_MARK_END_CLASS();
}

void TiledLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(opacity,"opacity");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(tiles,"tiles");
}

Dynamic TiledLayer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"tiles") ) { return tiles; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { return opacity; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"from_xml") ) { return from_xml_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"from_json") ) { return from_json_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"csv_to_array") ) { return csv_to_array_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TiledLayer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"base_chars") ) { outValue = base_chars; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"base_lookup") ) { outValue = base_lookup; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytes_get_int32") ) { outValue = bytes_get_int32_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"base64_to_array") ) { outValue = base64_to_array_dyn(); return true;  }
	}
	return false;
}

Dynamic TiledLayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"tiles") ) { tiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { opacity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TiledLayer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"base_chars") ) { base_chars=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"base_lookup") ) { base_lookup=ioValue.Cast< Array< int > >(); return true; }
	}
	return false;
}

void TiledLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	outFields->push(HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(TiledLayer_obj,opacity),HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb")},
	{hx::fsBool,(int)offsetof(TiledLayer_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsString,(int)offsetof(TiledLayer_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(TiledLayer_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(TiledLayer_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::luxe::importers::tiled::TiledMapData*/ ,(int)offsetof(TiledLayer_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TiledLayer_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledLayer_obj,tiles),HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &TiledLayer_obj::base_chars,HX_HCSTRING("base_chars","\xef","\xae","\x36","\xe5")},
	{hx::fsObject /*Array< int >*/ ,(void *) &TiledLayer_obj::base_lookup,HX_HCSTRING("base_lookup","\x28","\x60","\xe2","\x54")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10"),
	HX_HCSTRING("from_xml","\x42","\x55","\x19","\xb2"),
	HX_HCSTRING("from_json","\x5d","\xd8","\xd4","\x1a"),
	HX_HCSTRING("csv_to_array","\x6e","\xb3","\xfb","\x4e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledLayer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TiledLayer_obj::base_chars,"base_chars");
	HX_MARK_MEMBER_NAME(TiledLayer_obj::base_lookup,"base_lookup");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledLayer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TiledLayer_obj::base_chars,"base_chars");
	HX_VISIT_MEMBER_NAME(TiledLayer_obj::base_lookup,"base_lookup");
};

#endif

hx::Class TiledLayer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("bytes_get_int32","\x91","\x47","\x55","\xd9"),
	HX_HCSTRING("base_chars","\xef","\xae","\x36","\xe5"),
	HX_HCSTRING("base_lookup","\x28","\x60","\xe2","\x54"),
	HX_HCSTRING("base64_to_array","\x85","\x38","\xc0","\xab"),
	::String(null()) };

void TiledLayer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.importers.tiled.TiledLayer","\x38","\xba","\x53","\x5f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TiledLayer_obj::__GetStatic;
	__mClass->mSetStaticField = &TiledLayer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledLayer_obj >;
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

void TiledLayer_obj::__boot()
{
	base_chars= HX_HCSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=","\xda","\xa1","\xd5","\xa3");
	base_lookup= Array_obj< int >::__new();
}

} // end namespace luxe
} // end namespace importers
} // end namespace tiled
