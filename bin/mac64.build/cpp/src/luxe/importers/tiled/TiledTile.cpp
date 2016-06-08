#include <hxcpp.h>

#ifndef INCLUDED_luxe_importers_tiled_TiledLayer
#include <luxe/importers/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledMapData
#include <luxe/importers/tiled/TiledMapData.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledTile
#include <luxe/importers/tiled/TiledTile.h>
#endif
namespace luxe{
namespace importers{
namespace tiled{

Void TiledTile_obj::__construct(::luxe::importers::tiled::TiledLayer _layer,int _id)
{
HX_STACK_FRAME("luxe.importers.tiled.TiledTile","new",0x843d5d19,"luxe.importers.tiled.TiledTile.new","luxe/importers/tiled/TiledTile.hx",17,0xc57369ba)
HX_STACK_THIS(this)
HX_STACK_ARG(_layer,"_layer")
HX_STACK_ARG(_id,"_id")
{
	HX_STACK_LINE(19)
	this->layer = _layer;
	HX_STACK_LINE(21)
	int tmp = (int(_id) & int((int)-2147483648));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	int tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	this->flip_horizontal = tmp2;
	HX_STACK_LINE(22)
	int tmp3 = (int(_id) & int((int)1073741824));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(22)
	bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(22)
	this->flip_vertical = tmp5;
	HX_STACK_LINE(23)
	int tmp6 = (int(_id) & int((int)536870912));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(23)
	int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(23)
	bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(23)
	this->flip_diagonal = tmp8;
	HX_STACK_LINE(25)
	int tmp9 = (int(_id) & int((int)536870911));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(25)
	this->id = tmp9;
}
;
	return null();
}

//TiledTile_obj::~TiledTile_obj() { }

Dynamic TiledTile_obj::__CreateEmpty() { return  new TiledTile_obj; }
hx::ObjectPtr< TiledTile_obj > TiledTile_obj::__new(::luxe::importers::tiled::TiledLayer _layer,int _id)
{  hx::ObjectPtr< TiledTile_obj > _result_ = new TiledTile_obj();
	_result_->__construct(_layer,_id);
	return _result_;}

Dynamic TiledTile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledTile_obj > _result_ = new TiledTile_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

int TiledTile_obj::get_width( ){
	HX_STACK_FRAME("luxe.importers.tiled.TiledTile","get_width",0xb0a96fd6,"luxe.importers.tiled.TiledTile.get_width","luxe/importers/tiled/TiledTile.hx",31,0xc57369ba)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	::luxe::importers::tiled::TiledLayer tmp = this->layer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	int tmp1 = tmp->map->tile_width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TiledTile_obj,get_width,return )

int TiledTile_obj::get_height( ){
	HX_STACK_FRAME("luxe.importers.tiled.TiledTile","get_height",0x99e7e417,"luxe.importers.tiled.TiledTile.get_height","luxe/importers/tiled/TiledTile.hx",35,0xc57369ba)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	::luxe::importers::tiled::TiledLayer tmp = this->layer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	int tmp1 = tmp->map->tile_height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TiledTile_obj,get_height,return )


TiledTile_obj::TiledTile_obj()
{
}

void TiledTile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledTile);
	HX_MARK_MEMBER_NAME(layer,"layer");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(flip_horizontal,"flip_horizontal");
	HX_MARK_MEMBER_NAME(flip_vertical,"flip_vertical");
	HX_MARK_MEMBER_NAME(flip_diagonal,"flip_diagonal");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_END_CLASS();
}

void TiledTile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(layer,"layer");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(flip_horizontal,"flip_horizontal");
	HX_VISIT_MEMBER_NAME(flip_vertical,"flip_vertical");
	HX_VISIT_MEMBER_NAME(flip_diagonal,"flip_diagonal");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
}

Dynamic TiledTile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { return layer; }
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp == hx::paccAlways ? get_width() : width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp == hx::paccAlways ? get_height() : height; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"flip_vertical") ) { return flip_vertical; }
		if (HX_FIELD_EQ(inName,"flip_diagonal") ) { return flip_diagonal; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"flip_horizontal") ) { return flip_horizontal; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledTile_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { layer=inValue.Cast< ::luxe::importers::tiled::TiledLayer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"flip_vertical") ) { flip_vertical=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flip_diagonal") ) { flip_diagonal=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"flip_horizontal") ) { flip_horizontal=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledTile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("flip_horizontal","\x76","\x0c","\x62","\xc5"));
	outFields->push(HX_HCSTRING("flip_vertical","\x88","\x63","\xee","\x34"));
	outFields->push(HX_HCSTRING("flip_diagonal","\x07","\x2c","\x71","\x91"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::importers::tiled::TiledLayer*/ ,(int)offsetof(TiledTile_obj,layer),HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f")},
	{hx::fsInt,(int)offsetof(TiledTile_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsBool,(int)offsetof(TiledTile_obj,flip_horizontal),HX_HCSTRING("flip_horizontal","\x76","\x0c","\x62","\xc5")},
	{hx::fsBool,(int)offsetof(TiledTile_obj,flip_vertical),HX_HCSTRING("flip_vertical","\x88","\x63","\xee","\x34")},
	{hx::fsBool,(int)offsetof(TiledTile_obj,flip_diagonal),HX_HCSTRING("flip_diagonal","\x07","\x2c","\x71","\x91")},
	{hx::fsInt,(int)offsetof(TiledTile_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(TiledTile_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("flip_horizontal","\x76","\x0c","\x62","\xc5"),
	HX_HCSTRING("flip_vertical","\x88","\x63","\xee","\x34"),
	HX_HCSTRING("flip_diagonal","\x07","\x2c","\x71","\x91"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledTile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledTile_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledTile_obj::__mClass;

void TiledTile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.importers.tiled.TiledTile","\xa7","\xdc","\xf8","\xb9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledTile_obj >;
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
