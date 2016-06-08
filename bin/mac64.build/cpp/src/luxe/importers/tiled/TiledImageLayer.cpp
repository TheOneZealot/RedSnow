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
#ifndef INCLUDED_luxe_importers_tiled_TiledImage
#include <luxe/importers/tiled/TiledImage.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledImageLayer
#include <luxe/importers/tiled/TiledImageLayer.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledMapData
#include <luxe/importers/tiled/TiledMapData.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledUtil
#include <luxe/importers/tiled/TiledUtil.h>
#endif
namespace luxe{
namespace importers{
namespace tiled{

Void TiledImageLayer_obj::__construct(::luxe::importers::tiled::TiledMapData _map)
{
HX_STACK_FRAME("luxe.importers.tiled.TiledImageLayer","new",0xf2925f21,"luxe.importers.tiled.TiledImageLayer.new","luxe/importers/tiled/TiledImageLayer.hx",8,0x88cf54f2)
HX_STACK_THIS(this)
HX_STACK_ARG(_map,"_map")
{
	HX_STACK_LINE(19)
	this->visible = true;
	HX_STACK_LINE(17)
	this->opacity = ((Float)1.0);
	HX_STACK_LINE(15)
	this->y = (int)0;
	HX_STACK_LINE(13)
	this->x = (int)0;
	HX_STACK_LINE(11)
	this->name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(28)
	this->map = _map;
	HX_STACK_LINE(29)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		tmp = tmp2;
	}
	HX_STACK_LINE(29)
	this->properties = tmp;
}
;
	return null();
}

//TiledImageLayer_obj::~TiledImageLayer_obj() { }

Dynamic TiledImageLayer_obj::__CreateEmpty() { return  new TiledImageLayer_obj; }
hx::ObjectPtr< TiledImageLayer_obj > TiledImageLayer_obj::__new(::luxe::importers::tiled::TiledMapData _map)
{  hx::ObjectPtr< TiledImageLayer_obj > _result_ = new TiledImageLayer_obj();
	_result_->__construct(_map);
	return _result_;}

Dynamic TiledImageLayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledImageLayer_obj > _result_ = new TiledImageLayer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void TiledImageLayer_obj::from_xml( ::Xml xml){
{
		HX_STACK_FRAME("luxe.importers.tiled.TiledImageLayer","from_xml",0xb738aae1,"luxe.importers.tiled.TiledImageLayer.from_xml","luxe/importers/tiled/TiledImageLayer.hx",33,0x88cf54f2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_LINE(35)
		::String tmp = xml->get(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		this->name = tmp;
		HX_STACK_LINE(36)
		::String tmp1 = xml->get(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		Dynamic tmp2 = ::Std_obj::parseInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		this->x = tmp2;
		HX_STACK_LINE(37)
		::String tmp3 = xml->get(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		Dynamic tmp4 = ::Std_obj::parseInt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		this->y = tmp4;
		HX_STACK_LINE(39)
		::String tmp5 = xml->get(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		::String _opacity = tmp5;		HX_STACK_VAR(_opacity,"_opacity");
		HX_STACK_LINE(40)
		::String tmp6 = xml->get(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(40)
		::String _visible = tmp6;		HX_STACK_VAR(_visible,"_visible");
		HX_STACK_LINE(42)
		bool tmp7 = (_opacity == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(42)
		if ((tmp7)){
			HX_STACK_LINE(42)
			tmp8 = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(42)
			::String tmp9 = _opacity;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(42)
			tmp8 = ::Std_obj::parseFloat(tmp9);
		}
		HX_STACK_LINE(42)
		this->opacity = tmp8;
		HX_STACK_LINE(43)
		bool tmp9 = (_visible == HX_HCSTRING("0","\x30","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(43)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(43)
		if ((tmp9)){
			HX_STACK_LINE(43)
			tmp10 = false;
		}
		else{
			HX_STACK_LINE(43)
			tmp10 = true;
		}
		HX_STACK_LINE(43)
		this->visible = tmp10;
		HX_STACK_LINE(45)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				int tmp12 = xml->nodeType;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(45)
				int tmp13 = ::Xml_obj::Document;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(45)
				bool tmp14 = (tmp12 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(45)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(45)
				if ((tmp14)){
					HX_STACK_LINE(45)
					int tmp16 = xml->nodeType;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(45)
					int tmp17 = ::Xml_obj::Element;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(45)
					int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(45)
					tmp15 = (tmp16 != tmp18);
				}
				else{
					HX_STACK_LINE(45)
					tmp15 = false;
				}
				HX_STACK_LINE(45)
				if ((tmp15)){
					HX_STACK_LINE(45)
					::String tmp16 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + xml->nodeType);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(45)
					HX_STACK_DO_THROW(tmp16);
				}
			}
			HX_STACK_LINE(45)
			tmp11 = xml->children->iteratorFast< ::Xml >();
		}
		HX_STACK_LINE(45)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp11);  __it->hasNext(); ){
			::Xml child = __it->next();
			{
				HX_STACK_LINE(46)
				::Xml tmp12 = child;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(46)
				bool tmp13 = ::luxe::importers::tiled::TiledUtil_obj::valid_element(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(46)
				if ((tmp13)){
					HX_STACK_LINE(48)
					::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(48)
					{
						HX_STACK_LINE(48)
						int tmp15 = child->nodeType;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(48)
						int tmp16 = ::Xml_obj::Element;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(48)
						bool tmp17 = (tmp15 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(48)
						if ((tmp17)){
							HX_STACK_LINE(48)
							::String tmp18 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + child->nodeType);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(48)
							HX_STACK_DO_THROW(tmp18);
						}
						HX_STACK_LINE(48)
						tmp14 = child->nodeName;
					}
					HX_STACK_LINE(48)
					bool tmp15 = (tmp14 == HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(48)
					if ((tmp15)){
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
								HX_STACK_LINE(50)
								::Xml tmp17 = property;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(50)
								bool tmp18 = ::luxe::importers::tiled::TiledUtil_obj::valid_element(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(50)
								if ((tmp18)){
									HX_STACK_LINE(51)
									::String tmp19 = property->get(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(51)
									::String key = tmp19;		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(51)
									::String tmp20 = property->get(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(51)
									::String value = tmp20;		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(51)
									::haxe::ds::StringMap tmp21 = this->properties;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(51)
									::String tmp22 = key;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(51)
									::String tmp23 = value;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(51)
									tmp21->set(tmp22,tmp23);
								}
							}
;
						}
					}
					HX_STACK_LINE(56)
					::String tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(56)
					{
						HX_STACK_LINE(56)
						int tmp17 = child->nodeType;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(56)
						int tmp18 = ::Xml_obj::Element;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(56)
						bool tmp19 = (tmp17 != tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(56)
						if ((tmp19)){
							HX_STACK_LINE(56)
							::String tmp20 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + child->nodeType);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(56)
							HX_STACK_DO_THROW(tmp20);
						}
						HX_STACK_LINE(56)
						tmp16 = child->nodeName;
					}
					HX_STACK_LINE(56)
					bool tmp17 = (tmp16 == HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(56)
					if ((tmp17)){
						HX_STACK_LINE(58)
						::String tmp18 = child->get(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(58)
						::String _source = tmp18;		HX_STACK_VAR(_source,"_source");
						HX_STACK_LINE(59)
						::String tmp19 = child->get(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(59)
						::String _format = tmp19;		HX_STACK_VAR(_format,"_format");
						HX_STACK_LINE(61)
						::String tmp20 = child->get(HX_HCSTRING("trans","\x28","\x98","\x1f","\x16"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(61)
						::String _transparent_col = tmp20;		HX_STACK_VAR(_transparent_col,"_transparent_col");
						HX_STACK_LINE(62)
						bool tmp21 = (_transparent_col == null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(62)
						if ((tmp21)){
							HX_STACK_LINE(62)
							_transparent_col = HX_HCSTRING("","\x00","\x00","\x00","\x00");
						}
						HX_STACK_LINE(63)
						::String tmp22 = _transparent_col;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(63)
						::String tmp23 = ::StringTools_obj::replace(tmp22,HX_HCSTRING("#","\x23","\x00","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(63)
						_transparent_col = tmp23;
						HX_STACK_LINE(65)
						::String tmp24 = _format;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(65)
						::String tmp25 = _source;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(65)
						::String tmp26 = _transparent_col;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(65)
						Dynamic tmp27 = ::Std_obj::parseInt(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(65)
						::luxe::importers::tiled::TiledImage tmp28 = ::luxe::importers::tiled::TiledImage_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp24,tmp25,tmp27,null(),null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(65)
						this->image = tmp28;
					}
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledImageLayer_obj,from_xml,(void))

Void TiledImageLayer_obj::from_json( Dynamic json){
{
		HX_STACK_FRAME("luxe.importers.tiled.TiledImageLayer","from_json",0x91206dde,"luxe.importers.tiled.TiledImageLayer.from_json","luxe/importers/tiled/TiledImageLayer.hx",72,0x88cf54f2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(json,"json")
		HX_STACK_LINE(74)
		Dynamic tmp = json;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		Dynamic tmp1 = ::Reflect_obj::field(tmp,HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		this->name = tmp1;
		HX_STACK_LINE(75)
		Dynamic tmp2 = json;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		Dynamic tmp3 = ::Reflect_obj::field(tmp2,HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		this->x = ((int)(tmp3));
		HX_STACK_LINE(76)
		Dynamic tmp4 = json;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(76)
		Dynamic tmp5 = ::Reflect_obj::field(tmp4,HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(76)
		this->y = ((int)(tmp5));
		HX_STACK_LINE(77)
		Dynamic tmp6 = json;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		Dynamic tmp7 = ::Reflect_obj::field(tmp6,HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		this->opacity = tmp7;
		HX_STACK_LINE(78)
		Dynamic tmp8 = json;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(78)
		Dynamic tmp9 = ::Reflect_obj::field(tmp8,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(78)
		this->visible = tmp9;
		HX_STACK_LINE(80)
		Dynamic tmp10 = json;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(80)
		Dynamic tmp11 = ::Reflect_obj::field(tmp10,HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(80)
		::String _image = tmp11;		HX_STACK_VAR(_image,"_image");
		HX_STACK_LINE(81)
		Dynamic tmp12 = json;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(81)
		Dynamic tmp13 = ::Reflect_obj::field(tmp12,HX_HCSTRING("transparentcolor","\xd1","\xfc","\x29","\x27"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(81)
		::String _transparent_col = tmp13;		HX_STACK_VAR(_transparent_col,"_transparent_col");
		HX_STACK_LINE(82)
		Dynamic tmp14 = json;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(82)
		Dynamic tmp15 = ::Reflect_obj::field(tmp14,HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(82)
		int _w = tmp15;		HX_STACK_VAR(_w,"_w");
		HX_STACK_LINE(83)
		Dynamic tmp16 = json;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(83)
		Dynamic tmp17 = ::Reflect_obj::field(tmp16,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(83)
		int _h = tmp17;		HX_STACK_VAR(_h,"_h");
		HX_STACK_LINE(84)
		Dynamic tmp18 = json;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(84)
		Dynamic tmp19 = ::Reflect_obj::field(tmp18,HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(84)
		::String _format = tmp19;		HX_STACK_VAR(_format,"_format");
		HX_STACK_LINE(86)
		bool tmp20 = (_transparent_col == null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(86)
		if ((tmp20)){
			HX_STACK_LINE(86)
			_transparent_col = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		HX_STACK_LINE(87)
		::String tmp21 = _transparent_col;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(87)
		::String tmp22 = ::StringTools_obj::replace(tmp21,HX_HCSTRING("#","\x23","\x00","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(87)
		_transparent_col = tmp22;
		HX_STACK_LINE(89)
		::String tmp23 = _format;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(89)
		::String tmp24 = _image;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(89)
		::String tmp25 = _transparent_col;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(89)
		Dynamic tmp26 = ::Std_obj::parseInt(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(89)
		int tmp27 = _w;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(89)
		int tmp28 = _h;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(89)
		::luxe::importers::tiled::TiledImage tmp29 = ::luxe::importers::tiled::TiledImage_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp23,tmp24,tmp26,tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(89)
		this->image = tmp29;
		HX_STACK_LINE(91)
		Dynamic tmp30 = json;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(91)
		Dynamic tmp31 = ::Reflect_obj::field(tmp30,HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(91)
		Dynamic _properties = tmp31;		HX_STACK_VAR(_properties,"_properties");
		HX_STACK_LINE(92)
		bool tmp32 = (_properties != null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(92)
		if ((tmp32)){
			HX_STACK_LINE(94)
			Dynamic tmp33 = _properties;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(94)
			Array< ::String > _props = ::Reflect_obj::fields(tmp33);		HX_STACK_VAR(_props,"_props");
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(95)
				while((true)){
					HX_STACK_LINE(95)
					bool tmp34 = (_g < _props->length);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(95)
					bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(95)
					if ((tmp35)){
						HX_STACK_LINE(95)
						break;
					}
					HX_STACK_LINE(95)
					::String tmp36 = _props->__get(_g);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(95)
					::String property_name = tmp36;		HX_STACK_VAR(property_name,"property_name");
					HX_STACK_LINE(95)
					++(_g);
					HX_STACK_LINE(96)
					{
						HX_STACK_LINE(96)
						Dynamic tmp37 = _properties;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(96)
						::String tmp38 = property_name;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(96)
						Dynamic tmp39 = ::Reflect_obj::field(tmp37,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(96)
						::String value = tmp39;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(96)
						::haxe::ds::StringMap tmp40 = this->properties;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(96)
						::String tmp41 = property_name;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(96)
						::String tmp42 = value;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(96)
						tmp40->set(tmp41,tmp42);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledImageLayer_obj,from_json,(void))


TiledImageLayer_obj::TiledImageLayer_obj()
{
}

void TiledImageLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledImageLayer);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(opacity,"opacity");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_END_CLASS();
}

void TiledImageLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(opacity,"opacity");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(map,"map");
}

Dynamic TiledImageLayer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
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
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledImageLayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::luxe::importers::tiled::TiledMapData >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::luxe::importers::tiled::TiledImage >(); return inValue; }
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

void TiledImageLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TiledImageLayer_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(TiledImageLayer_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(TiledImageLayer_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TiledImageLayer_obj,opacity),HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb")},
	{hx::fsBool,(int)offsetof(TiledImageLayer_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TiledImageLayer_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsObject /*::luxe::importers::tiled::TiledImage*/ ,(int)offsetof(TiledImageLayer_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{hx::fsObject /*::luxe::importers::tiled::TiledMapData*/ ,(int)offsetof(TiledImageLayer_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("from_xml","\x42","\x55","\x19","\xb2"),
	HX_HCSTRING("from_json","\x5d","\xd8","\xd4","\x1a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledImageLayer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledImageLayer_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledImageLayer_obj::__mClass;

void TiledImageLayer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.importers.tiled.TiledImageLayer","\xaf","\x3a","\x12","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledImageLayer_obj >;
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
