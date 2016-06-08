#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
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
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledLayer
#include <luxe/importers/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledMap
#include <luxe/importers/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledMapData
#include <luxe/importers/tiled/TiledMapData.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledTile
#include <luxe/importers/tiled/TiledTile.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledTileset
#include <luxe/importers/tiled/TiledTileset.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_Tile
#include <luxe/tilemaps/Tile.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_TileLayer
#include <luxe/tilemaps/TileLayer.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_Tilemap
#include <luxe/tilemaps/Tilemap.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_TilemapOrientation
#include <luxe/tilemaps/TilemapOrientation.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_Tileset
#include <luxe/tilemaps/Tileset.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{
namespace importers{
namespace tiled{

Void TiledMap_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("luxe.importers.tiled.TiledMap","new",0x7dfd89b5,"luxe.importers.tiled.TiledMap.new","luxe/importers/tiled/TiledMap.hx",21,0xd3ea1b78)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		bool tmp = (options->__Field(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		if ((tmp)){
			HX_STACK_LINE(24)
			options->__FieldRef(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")) = HX_HCSTRING("xml","\xd7","\x6d","\x5b","\x00");
		}
		HX_STACK_LINE(24)
		options->__Field(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"), hx::paccDynamic );
	}
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		bool tmp = (options->__Field(HX_HCSTRING("asset_path","\x94","\x91","\x13","\x17"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		if ((tmp)){
			HX_STACK_LINE(25)
			options->__FieldRef(HX_HCSTRING("asset_path","\x94","\x91","\x13","\x17")) = HX_HCSTRING("assets/","\x4c","\x2a","\xdc","\x36");
		}
		HX_STACK_LINE(25)
		options->__Field(HX_HCSTRING("asset_path","\x94","\x91","\x13","\x17"), hx::paccDynamic );
	}
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		bool tmp = (options->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		if ((tmp)){
			HX_STACK_LINE(26)
			::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(26)
			options->__FieldRef(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")) = tmp1;
		}
		HX_STACK_LINE(26)
		options->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(28)
	bool tmp = (options->__Field(HX_HCSTRING("tiled_file_data","\xc4","\xca","\xc9","\xcf"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	if ((tmp1)){
		HX_STACK_LINE(28)
		int tmp3 = options->__Field(HX_HCSTRING("tiled_file_data","\xc4","\xca","\xc9","\xcf"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		tmp2 = (tmp4 == (int)0);
	}
	else{
		HX_STACK_LINE(28)
		tmp2 = true;
	}
	HX_STACK_LINE(28)
	if ((tmp2)){
		HX_STACK_LINE(29)
		HX_STACK_DO_THROW(HX_HCSTRING("TiledMap handed invalid file data, pass the text contents of the tmx/json file","\x3c","\xaa","\xd3","\x28"));
	}
	HX_STACK_LINE(33)
	::luxe::importers::tiled::TiledMapData tmp3 = ::luxe::importers::tiled::TiledMapData_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	this->tiledmap_data = tmp3;
	HX_STACK_LINE(36)
	bool tmp4 = (options->__Field(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"), hx::paccDynamic ) == HX_HCSTRING("json","\x28","\x42","\x68","\x46"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(36)
	if ((tmp4)){
		HX_STACK_LINE(37)
		::luxe::importers::tiled::TiledMapData tmp5 = this->tiledmap_data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		::haxe::format::JsonParser tmp6 = ::haxe::format::JsonParser_obj::__new(options->__Field(HX_HCSTRING("tiled_file_data","\xc4","\xca","\xc9","\xcf"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		Dynamic tmp7 = tmp6->parseRec();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(37)
		tmp5->parseFromJSON(tmp7);
	}
	else{
		HX_STACK_LINE(39)
		::luxe::importers::tiled::TiledMapData tmp5 = this->tiledmap_data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		::String tmp6 = options->__Field(HX_HCSTRING("tiled_file_data","\xc4","\xca","\xc9","\xcf"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		::Xml tmp7 = ::Xml_obj::parse(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(39)
		tmp5->parseFromXML(tmp7);
	}
	HX_STACK_LINE(45)
	Float tmp5 = options->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(45)
	int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(46)
	Float tmp7 = options->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(46)
	int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(47)
	::luxe::importers::tiled::TiledMapData tmp9 = this->tiledmap_data;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(47)
	int tmp10 = tmp9->width;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(48)
	::luxe::importers::tiled::TiledMapData tmp11 = this->tiledmap_data;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(48)
	int tmp12 = tmp11->height;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(49)
	::luxe::importers::tiled::TiledMapData tmp13 = this->tiledmap_data;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(49)
	int tmp14 = tmp13->tile_width;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(50)
	::luxe::importers::tiled::TiledMapData tmp15 = this->tiledmap_data;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(50)
	int tmp16 = tmp15->tile_height;		HX_STACK_VAR(tmp16,"tmp16");
	struct _Function_1_1{
		inline static Dynamic Block( int &tmp6,int &tmp10,int &tmp8,int &tmp12,int &tmp16,int &tmp14){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/importers/tiled/TiledMap.hx",44,0xd3ea1b78)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp6,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp8,false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp10,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp12,false);
				__result->Add(HX_HCSTRING("tile_width","\xf5","\x5e","\x4c","\xf6") , tmp14,false);
				__result->Add(HX_HCSTRING("tile_height","\x18","\x30","\xd6","\x42") , tmp16,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(44)
	Dynamic tmp17 = _Function_1_1::Block(tmp6,tmp10,tmp8,tmp12,tmp16,tmp14);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(44)
	super::__construct(tmp17);
	HX_STACK_LINE(54)
	Dynamic tmp18 = options;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(54)
	this->_load_tilesets(tmp18);
	HX_STACK_LINE(55)
	Dynamic tmp19 = options;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(55)
	this->_load_layers(tmp19);
	HX_STACK_LINE(58)
	::luxe::importers::tiled::TiledMapData tmp20 = this->tiledmap_data;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(58)
	this->orientation = tmp20->orientation;
}
;
	return null();
}

//TiledMap_obj::~TiledMap_obj() { }

Dynamic TiledMap_obj::__CreateEmpty() { return  new TiledMap_obj; }
hx::ObjectPtr< TiledMap_obj > TiledMap_obj::__new(Dynamic options)
{  hx::ObjectPtr< TiledMap_obj > _result_ = new TiledMap_obj();
	_result_->__construct(options);
	return _result_;}

Dynamic TiledMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledMap_obj > _result_ = new TiledMap_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void TiledMap_obj::_load_tilesets( Dynamic options){
{
		HX_STACK_FRAME("luxe.importers.tiled.TiledMap","_load_tilesets",0x2db6b244,"luxe.importers.tiled.TiledMap._load_tilesets","luxe/importers/tiled/TiledMap.hx",64,0xd3ea1b78)
		HX_STACK_THIS(this)
		HX_STACK_ARG(options,"options")
		HX_STACK_LINE(64)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(64)
		::luxe::importers::tiled::TiledMapData tmp = this->tiledmap_data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		Array< ::Dynamic > _g1 = tmp->tilesets;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(64)
		while((true)){
			HX_STACK_LINE(64)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(64)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(64)
			if ((tmp2)){
				HX_STACK_LINE(64)
				break;
			}
			HX_STACK_LINE(64)
			::luxe::importers::tiled::TiledTileset tmp3 = _g1->__get(_g).StaticCast< ::luxe::importers::tiled::TiledTileset >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(64)
			::luxe::importers::tiled::TiledTileset _tileset = tmp3;		HX_STACK_VAR(_tileset,"_tileset");
			HX_STACK_LINE(64)
			++(_g);
			HX_STACK_LINE(66)
			::String tmp4 = ::haxe::io::Path_obj::join(Array_obj< ::String >::__new().Add(options->__Field(HX_HCSTRING("asset_path","\x94","\x91","\x13","\x17"), hx::paccDynamic )).Add(_tileset->texture_name));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			::String _tileset_id = tmp4;		HX_STACK_VAR(_tileset_id,"_tileset_id");
			HX_STACK_LINE(67)
			::luxe::Resources tmp5 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			::String tmp6 = _tileset_id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			::luxe::resource::Resource tmp7 = tmp5->cache->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			::phoenix::Texture _texture = ((::phoenix::Texture)(tmp7));		HX_STACK_VAR(_texture,"_texture");
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(69)
				bool tmp8 = (_texture == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(69)
				if ((tmp8)){
					HX_STACK_LINE(69)
					::String tmp9 = (HX_HCSTRING("Tiled; trying to load ","\x93","\xff","\x48","\xb2") + _tileset_id);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(69)
					::String tmp10 = (tmp9 + HX_HCSTRING(" but texture not found in resources","\x39","\x5a","\xf8","\x9d"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(230)
					::String tmp11 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(230)
					::String tmp12 = (tmp11 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(69)
					::String tmp13 = (HX_HCSTRING("_texture was null","\x22","\x8b","\x23","\x32") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(69)
					::luxe::DebugError tmp14 = ::luxe::DebugError_obj::null_assertion(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(69)
					HX_STACK_DO_THROW(tmp14);
				}
			}
			struct _Function_2_1{
				inline static Dynamic Block( ::luxe::importers::tiled::TiledTileset &_tileset,::phoenix::Texture &_texture){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/importers/tiled/TiledMap.hx",71,0xd3ea1b78)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , _tileset->name,false);
						__result->Add(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e") , _texture,false);
						__result->Add(HX_HCSTRING("first_id","\xca","\x37","\x20","\xf1") , _tileset->first_id,false);
						__result->Add(HX_HCSTRING("tile_width","\xf5","\x5e","\x4c","\xf6") , _tileset->tile_width,false);
						__result->Add(HX_HCSTRING("tile_height","\x18","\x30","\xd6","\x42") , _tileset->tile_height,false);
						__result->Add(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91") , _tileset->spacing,false);
						__result->Add(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba") , _tileset->margin,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(71)
			Dynamic tmp8 = _Function_2_1::Block(_tileset,_texture);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(71)
			this->add_tileset(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,_load_tilesets,(void))

Void TiledMap_obj::_load_layers( Dynamic options){
{
		HX_STACK_FRAME("luxe.importers.tiled.TiledMap","_load_layers",0xdf0f5fc7,"luxe.importers.tiled.TiledMap._load_layers","luxe/importers/tiled/TiledMap.hx",87,0xd3ea1b78)
		HX_STACK_THIS(this)
		HX_STACK_ARG(options,"options")
		HX_STACK_LINE(89)
		int layer_index = (int)0;		HX_STACK_VAR(layer_index,"layer_index");
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(90)
			::luxe::importers::tiled::TiledMapData tmp = this->tiledmap_data;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(90)
			Array< ::Dynamic > _g1 = tmp->layers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(90)
			while((true)){
				HX_STACK_LINE(90)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(90)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(90)
				if ((tmp2)){
					HX_STACK_LINE(90)
					break;
				}
				HX_STACK_LINE(90)
				::luxe::importers::tiled::TiledLayer tmp3 = _g1->__get(_g).StaticCast< ::luxe::importers::tiled::TiledLayer >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(90)
				::luxe::importers::tiled::TiledLayer _layer = tmp3;		HX_STACK_VAR(_layer,"_layer");
				HX_STACK_LINE(90)
				++(_g);
				HX_STACK_LINE(92)
				::haxe::ds::StringMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					::haxe::ds::StringMap tmp5 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(92)
					::haxe::ds::StringMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(92)
					tmp4 = tmp6;
				}
				HX_STACK_LINE(92)
				::haxe::ds::StringMap _layer_properties = tmp4;		HX_STACK_VAR(_layer_properties,"_layer_properties");
				HX_STACK_LINE(94)
				Dynamic tmp5 = _layer->properties->keys();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(94)
				for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp5);  __it->hasNext(); ){
					::String _prop = __it->next();
					{
						HX_STACK_LINE(95)
						::String tmp6 = _prop;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(95)
						::String tmp7 = _layer->properties->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						::String value = tmp7;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(95)
						::String tmp8 = _prop;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(95)
						::String tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(95)
						_layer_properties->set(tmp8,tmp9);
					}
;
				}
				struct _Function_3_1{
					inline static Dynamic Block( int &layer_index,::luxe::importers::tiled::TiledLayer &_layer,::haxe::ds::StringMap &_layer_properties){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/importers/tiled/TiledMap.hx",99,0xd3ea1b78)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , _layer->name,false);
							__result->Add(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f") , layer_index,false);
							__result->Add(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb") , _layer->opacity,false);
							__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , _layer->visible,false);
							__result->Add(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61") , _layer_properties,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(99)
				Dynamic tmp6 = _Function_3_1::Block(layer_index,_layer,_layer_properties);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(99)
				this->add_layer(tmp6);
				HX_STACK_LINE(108)
				::String tmp7 = _layer->name;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(108)
				this->add_tiles_fill_by_id(tmp7,(int)0);
				HX_STACK_LINE(111)
				::haxe::ds::StringMap tmp8 = this->layers;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(111)
				::String tmp9 = _layer->name;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(111)
				::luxe::tilemaps::TileLayer tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(111)
				::luxe::tilemaps::TileLayer tilemap_layer = tmp10;		HX_STACK_VAR(tilemap_layer,"tilemap_layer");
				HX_STACK_LINE(112)
				int _gid_counter = (int)0;		HX_STACK_VAR(_gid_counter,"_gid_counter");
				HX_STACK_LINE(114)
				{
					HX_STACK_LINE(114)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(114)
					int _g2 = _layer->height;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(114)
					while((true)){
						HX_STACK_LINE(114)
						bool tmp11 = (_g3 < _g2);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(114)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(114)
						if ((tmp12)){
							HX_STACK_LINE(114)
							break;
						}
						HX_STACK_LINE(114)
						int tmp13 = (_g3)++;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(114)
						int _y = tmp13;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(115)
						{
							HX_STACK_LINE(115)
							int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(115)
							int _g4 = _layer->width;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(115)
							while((true)){
								HX_STACK_LINE(115)
								bool tmp14 = (_g5 < _g4);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(115)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(115)
								if ((tmp15)){
									HX_STACK_LINE(115)
									break;
								}
								HX_STACK_LINE(115)
								int tmp16 = (_g5)++;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(115)
								int _x = tmp16;		HX_STACK_VAR(_x,"_x");
								HX_STACK_LINE(117)
								::luxe::importers::tiled::TiledTile tmp17 = _layer->tiles->__get(_gid_counter).StaticCast< ::luxe::importers::tiled::TiledTile >();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(117)
								::luxe::importers::tiled::TiledTile _layer_tile = tmp17;		HX_STACK_VAR(_layer_tile,"_layer_tile");
								HX_STACK_LINE(119)
								bool tmp18 = (_layer_tile->id != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(119)
								if ((tmp18)){
									HX_STACK_LINE(120)
									::luxe::tilemaps::Tile tmp19 = tilemap_layer->tiles->__get(_y).StaticCast< Array< ::Dynamic > >()->__get(_x).StaticCast< ::luxe::tilemaps::Tile >();		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(120)
									::luxe::tilemaps::Tile tile = tmp19;		HX_STACK_VAR(tile,"tile");
									HX_STACK_LINE(121)
									int tmp20 = _layer_tile->id;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(121)
									tile->set_id(tmp20);
									HX_STACK_LINE(122)
									bool tmp21 = _layer_tile->flip_horizontal;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(122)
									tile->set_flipx(tmp21);
									HX_STACK_LINE(123)
									bool tmp22 = _layer_tile->flip_vertical;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(123)
									tile->set_flipy(tmp22);
									HX_STACK_LINE(124)
									bool tmp23 = _layer_tile->flip_diagonal;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(124)
									if ((tmp23)){
										HX_STACK_LINE(125)
										tile->set_angle((int)90);
										HX_STACK_LINE(126)
										bool tmp24 = tile->flipx;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(126)
										bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(126)
										tile->set_flipx(tmp25);
									}
								}
								HX_STACK_LINE(130)
								(_gid_counter)++;
							}
						}
					}
				}
				HX_STACK_LINE(136)
				(layer_index)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,_load_layers,(void))


TiledMap_obj::TiledMap_obj()
{
}

void TiledMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledMap);
	HX_MARK_MEMBER_NAME(tiledmap_data,"tiledmap_data");
	::luxe::tilemaps::Tilemap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TiledMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tiledmap_data,"tiledmap_data");
	::luxe::tilemaps::Tilemap_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TiledMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_load_layers") ) { return _load_layers_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tiledmap_data") ) { return tiledmap_data; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_load_tilesets") ) { return _load_tilesets_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"tiledmap_data") ) { tiledmap_data=inValue.Cast< ::luxe::importers::tiled::TiledMapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tiledmap_data","\x63","\xd5","\xc9","\x0d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::importers::tiled::TiledMapData*/ ,(int)offsetof(TiledMap_obj,tiledmap_data),HX_HCSTRING("tiledmap_data","\x63","\xd5","\xc9","\x0d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tiledmap_data","\x63","\xd5","\xc9","\x0d"),
	HX_HCSTRING("_load_tilesets","\x79","\x65","\xf8","\x01"),
	HX_HCSTRING("_load_layers","\xbc","\x6b","\x7e","\x30"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledMap_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledMap_obj::__mClass;

void TiledMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.importers.tiled.TiledMap","\x43","\x8b","\x47","\x69");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledMap_obj >;
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
