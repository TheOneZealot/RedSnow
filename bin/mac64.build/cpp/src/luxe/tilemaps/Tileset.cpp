#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
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
namespace tilemaps{

Void Tileset_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("luxe.tilemaps.Tileset","new",0xa6e7b255,"luxe.tilemaps.Tileset.new","luxe/tilemaps/Tilemap.hx",396,0x1cf567e1)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(406)
	this->spacing = (int)0;
	HX_STACK_LINE(404)
	this->margin = (int)0;
	HX_STACK_LINE(402)
	this->tile_height = (int)0;
	HX_STACK_LINE(401)
	this->tile_width = (int)0;
	HX_STACK_LINE(400)
	this->first_id = (int)1;
	HX_STACK_LINE(410)
	{
		HX_STACK_LINE(410)
		bool tmp = (options == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(410)
		if ((tmp)){
			HX_STACK_LINE(230)
			::String tmp1 = HX_HCSTRING(" ( Tileset requires a non-null options on new()","\x4e","\x7f","\x78","\x4e");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(230)
			::String tmp2 = (tmp1 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(410)
			::String tmp3 = (HX_HCSTRING("options was null","\xe0","\x49","\xa9","\x08") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(410)
			::luxe::DebugError tmp4 = ::luxe::DebugError_obj::null_assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(410)
			HX_STACK_DO_THROW(tmp4);
		}
	}
	HX_STACK_LINE(411)
	{
		HX_STACK_LINE(411)
		bool tmp = (options->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(411)
		if ((tmp)){
			HX_STACK_LINE(230)
			::String tmp1 = HX_HCSTRING(" ( Tileset requires a texture that is not null","\x43","\x5c","\x61","\x95");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(230)
			::String tmp2 = (tmp1 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(411)
			::String tmp3 = (HX_HCSTRING("options.texture was null","\xd3","\x7b","\x02","\x0d") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(411)
			::luxe::DebugError tmp4 = ::luxe::DebugError_obj::null_assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(411)
			HX_STACK_DO_THROW(tmp4);
		}
	}
	HX_STACK_LINE(413)
	this->name = options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
	HX_STACK_LINE(414)
	this->texture = options->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic );
	HX_STACK_LINE(415)
	this->tile_width = options->__Field(HX_HCSTRING("tile_width","\xf5","\x5e","\x4c","\xf6"), hx::paccDynamic );
	HX_STACK_LINE(416)
	this->tile_height = options->__Field(HX_HCSTRING("tile_height","\x18","\x30","\xd6","\x42"), hx::paccDynamic );
	HX_STACK_LINE(418)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(418)
	{
		HX_STACK_LINE(418)
		bool tmp1 = (options->__Field(HX_HCSTRING("first_id","\xca","\x37","\x20","\xf1"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(418)
		if ((tmp1)){
			HX_STACK_LINE(418)
			options->__FieldRef(HX_HCSTRING("first_id","\xca","\x37","\x20","\xf1")) = (int)1;
		}
		HX_STACK_LINE(418)
		tmp = options->__Field(HX_HCSTRING("first_id","\xca","\x37","\x20","\xf1"), hx::paccDynamic );
	}
	HX_STACK_LINE(418)
	this->first_id = tmp;
	HX_STACK_LINE(419)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(419)
	{
		HX_STACK_LINE(419)
		bool tmp2 = (options->__Field(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(419)
		if ((tmp2)){
			HX_STACK_LINE(419)
			options->__FieldRef(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba")) = (int)0;
		}
		HX_STACK_LINE(419)
		tmp1 = options->__Field(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"), hx::paccDynamic );
	}
	HX_STACK_LINE(419)
	this->margin = tmp1;
	HX_STACK_LINE(420)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(420)
	{
		HX_STACK_LINE(420)
		bool tmp3 = (options->__Field(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(420)
		if ((tmp3)){
			HX_STACK_LINE(420)
			options->__FieldRef(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91")) = (int)0;
		}
		HX_STACK_LINE(420)
		tmp2 = options->__Field(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"), hx::paccDynamic );
	}
	HX_STACK_LINE(420)
	this->spacing = tmp2;
}
;
	return null();
}

//Tileset_obj::~Tileset_obj() { }

Dynamic Tileset_obj::__CreateEmpty() { return  new Tileset_obj; }
hx::ObjectPtr< Tileset_obj > Tileset_obj::__new(Dynamic options)
{  hx::ObjectPtr< Tileset_obj > _result_ = new Tileset_obj();
	_result_->__construct(options);
	return _result_;}

Dynamic Tileset_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tileset_obj > _result_ = new Tileset_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Tileset_obj::toString( ){
	HX_STACK_FRAME("luxe.tilemaps.Tileset","toString",0x1e9ab697,"luxe.tilemaps.Tileset.toString","luxe/tilemaps/Tilemap.hx",424,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(425)
	::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(425)
	::String tmp1 = (HX_HCSTRING("Tileset; ","\x99","\x49","\x30","\x14") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(425)
	::String tmp2 = (tmp1 + HX_HCSTRING(" tw(","\x25","\x41","\x7f","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(425)
	int tmp3 = this->tile_width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(425)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(425)
	::String tmp5 = (tmp4 + HX_HCSTRING(") th(","\xbd","\xfc","\xec","\xb0"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(425)
	int tmp6 = this->tile_height;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(425)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(425)
	::String tmp8 = (tmp7 + HX_HCSTRING(") first_id(","\x67","\xc2","\xfe","\xb7"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(425)
	int tmp9 = this->first_id;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(425)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(425)
	::String tmp11 = (tmp10 + HX_HCSTRING(") margin(","\x43","\xcd","\x4c","\x54"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(425)
	int tmp12 = this->margin;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(425)
	::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(425)
	::String tmp14 = (tmp13 + HX_HCSTRING(") spacing(","\x1c","\x32","\x2c","\x1c"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(425)
	int tmp15 = this->spacing;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(425)
	::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(425)
	::String tmp17 = (tmp16 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(425)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(Tileset_obj,toString,return )

::phoenix::Vector Tileset_obj::pos_in_texture( int _id){
	HX_STACK_FRAME("luxe.tilemaps.Tileset","pos_in_texture",0x588c0377,"luxe.tilemaps.Tileset.pos_in_texture","luxe/tilemaps/Tilemap.hx",429,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(431)
	int tmp = _id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(431)
	int tmp1 = this->first_id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(431)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(431)
	int tileid = tmp2;		HX_STACK_VAR(tileid,"tileid");
	HX_STACK_LINE(432)
	int tmp3 = tileid;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(432)
	int tmp4 = this->texture_x(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(432)
	int tmp5 = tileid;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(432)
	int tmp6 = this->texture_y(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(432)
	::phoenix::Vector tmp7 = ::phoenix::Vector_obj::__new(tmp4,tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(432)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Tileset_obj,pos_in_texture,return )

int Tileset_obj::texture_x( int _id){
	HX_STACK_FRAME("luxe.tilemaps.Tileset","texture_x",0x2f869089,"luxe.tilemaps.Tileset.texture_x","luxe/tilemaps/Tilemap.hx",437,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(438)
	::phoenix::Texture tmp = this->texture;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(438)
	int tmp1 = tmp->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(438)
	int tmp2 = this->tile_width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(438)
	Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(438)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(438)
	int _tx = tmp4;		HX_STACK_VAR(_tx,"_tx");
	HX_STACK_LINE(439)
	bool tmp5 = (_tx == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(439)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(439)
	if ((tmp5)){
		HX_STACK_LINE(439)
		tmp6 = (int)0;
	}
	else{
		HX_STACK_LINE(439)
		tmp6 = hx::Mod(_id,_tx);
	}
	HX_STACK_LINE(439)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Tileset_obj,texture_x,return )

int Tileset_obj::texture_y( int _id){
	HX_STACK_FRAME("luxe.tilemaps.Tileset","texture_y",0x2f86908a,"luxe.tilemaps.Tileset.texture_y","luxe/tilemaps/Tilemap.hx",444,0x1cf567e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(446)
	::phoenix::Texture tmp = this->texture;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(446)
	int tmp1 = tmp->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(446)
	int tmp2 = this->tile_width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(446)
	Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(446)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(446)
	int _ty = tmp4;		HX_STACK_VAR(_ty,"_ty");
	HX_STACK_LINE(447)
	bool tmp5 = (_ty == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(447)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(447)
	if ((tmp5)){
		HX_STACK_LINE(447)
		tmp6 = (int)0;
	}
	else{
		HX_STACK_LINE(447)
		Float tmp7 = (Float(_id) / Float(_ty));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(447)
		tmp6 = ::Std_obj::_int(tmp7);
	}
	HX_STACK_LINE(447)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Tileset_obj,texture_y,return )


Tileset_obj::Tileset_obj()
{
}

void Tileset_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tileset);
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(first_id,"first_id");
	HX_MARK_MEMBER_NAME(tile_width,"tile_width");
	HX_MARK_MEMBER_NAME(tile_height,"tile_height");
	HX_MARK_MEMBER_NAME(margin,"margin");
	HX_MARK_MEMBER_NAME(spacing,"spacing");
	HX_MARK_END_CLASS();
}

void Tileset_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(first_id,"first_id");
	HX_VISIT_MEMBER_NAME(tile_width,"tile_width");
	HX_VISIT_MEMBER_NAME(tile_height,"tile_height");
	HX_VISIT_MEMBER_NAME(margin,"margin");
	HX_VISIT_MEMBER_NAME(spacing,"spacing");
}

Dynamic Tileset_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { return margin; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		if (HX_FIELD_EQ(inName,"spacing") ) { return spacing; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"first_id") ) { return first_id; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"texture_x") ) { return texture_x_dyn(); }
		if (HX_FIELD_EQ(inName,"texture_y") ) { return texture_y_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tile_width") ) { return tile_width; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tile_height") ) { return tile_height; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pos_in_texture") ) { return pos_in_texture_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tileset_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { margin=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spacing") ) { spacing=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"first_id") ) { first_id=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tile_width") ) { tile_width=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tile_height") ) { tile_height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tileset_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("first_id","\xca","\x37","\x20","\xf1"));
	outFields->push(HX_HCSTRING("tile_width","\xf5","\x5e","\x4c","\xf6"));
	outFields->push(HX_HCSTRING("tile_height","\x18","\x30","\xd6","\x42"));
	outFields->push(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"));
	outFields->push(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(Tileset_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsString,(int)offsetof(Tileset_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(Tileset_obj,first_id),HX_HCSTRING("first_id","\xca","\x37","\x20","\xf1")},
	{hx::fsInt,(int)offsetof(Tileset_obj,tile_width),HX_HCSTRING("tile_width","\xf5","\x5e","\x4c","\xf6")},
	{hx::fsInt,(int)offsetof(Tileset_obj,tile_height),HX_HCSTRING("tile_height","\x18","\x30","\xd6","\x42")},
	{hx::fsInt,(int)offsetof(Tileset_obj,margin),HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba")},
	{hx::fsInt,(int)offsetof(Tileset_obj,spacing),HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("first_id","\xca","\x37","\x20","\xf1"),
	HX_HCSTRING("tile_width","\xf5","\x5e","\x4c","\xf6"),
	HX_HCSTRING("tile_height","\x18","\x30","\xd6","\x42"),
	HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"),
	HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("pos_in_texture","\x4c","\x5b","\xb2","\x20"),
	HX_HCSTRING("texture_x","\xd4","\x48","\x49","\xaf"),
	HX_HCSTRING("texture_y","\xd5","\x48","\x49","\xaf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tileset_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tileset_obj::__mClass,"__mClass");
};

#endif

hx::Class Tileset_obj::__mClass;

void Tileset_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tilemaps.Tileset","\xe3","\xe3","\x88","\xfa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tileset_obj >;
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
} // end namespace tilemaps
