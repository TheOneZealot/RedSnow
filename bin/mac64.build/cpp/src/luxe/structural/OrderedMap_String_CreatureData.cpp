#include <hxcpp.h>

#ifndef INCLUDED_CreatureData
#include <CreatureData.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_structural_OrderedMapIterator_String_CreatureData
#include <luxe/structural/OrderedMapIterator_String_CreatureData.h>
#endif
#ifndef INCLUDED_luxe_structural_OrderedMap_String_CreatureData
#include <luxe/structural/OrderedMap_String_CreatureData.h>
#endif
namespace luxe{
namespace structural{

Void OrderedMap_String_CreatureData_obj::__construct(::haxe::ds::StringMap _map)
{
HX_STACK_FRAME("luxe.structural.OrderedMap_String_CreatureData","new",0x7a4f13f2,"luxe.structural.OrderedMap_String_CreatureData.new","luxe/structural/OrderedMap.hx",32,0x2ffa3116)
HX_STACK_THIS(this)
HX_STACK_ARG(_map,"_map")
{
	HX_STACK_LINE(35)
	this->idx = (int)0;
	HX_STACK_LINE(41)
	this->_keys = Array_obj< ::String >::__new();
	HX_STACK_LINE(42)
	this->map = _map;
}
;
	return null();
}

//OrderedMap_String_CreatureData_obj::~OrderedMap_String_CreatureData_obj() { }

Dynamic OrderedMap_String_CreatureData_obj::__CreateEmpty() { return  new OrderedMap_String_CreatureData_obj; }
hx::ObjectPtr< OrderedMap_String_CreatureData_obj > OrderedMap_String_CreatureData_obj::__new(::haxe::ds::StringMap _map)
{  hx::ObjectPtr< OrderedMap_String_CreatureData_obj > _result_ = new OrderedMap_String_CreatureData_obj();
	_result_->__construct(_map);
	return _result_;}

Dynamic OrderedMap_String_CreatureData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OrderedMap_String_CreatureData_obj > _result_ = new OrderedMap_String_CreatureData_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *OrderedMap_String_CreatureData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::IMap_obj)) return operator ::haxe::IMap_obj *();
	return super::__ToInterface(inType);
}

OrderedMap_String_CreatureData_obj::operator ::haxe::IMap_obj *()
	{ return new ::haxe::IMap_delegate_< OrderedMap_String_CreatureData_obj >(this); }
Void OrderedMap_String_CreatureData_obj::set( ::String key,::CreatureData value){
{
		HX_STACK_FRAME("luxe.structural.OrderedMap_String_CreatureData","set",0x7a52df34,"luxe.structural.OrderedMap_String_CreatureData.set","luxe/structural/OrderedMap.hx",45,0x2ffa3116)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(46)
		::haxe::ds::StringMap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		if ((tmp3)){
			HX_STACK_LINE(46)
			::String tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			this->_keys->push(tmp4);
		}
		HX_STACK_LINE(47)
		::CreatureData tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			::haxe::ds::StringMap tmp5 = this->map;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(47)
			::String tmp6 = key;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(47)
			::CreatureData tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(47)
			tmp5->set(tmp6,tmp7);
			HX_STACK_LINE(47)
			tmp4 = value;
		}
		HX_STACK_LINE(47)
		tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(OrderedMap_String_CreatureData_obj,set,(void))

::String OrderedMap_String_CreatureData_obj::toString( ){
	HX_STACK_FRAME("luxe.structural.OrderedMap_String_CreatureData","toString",0xf9db5bda,"luxe.structural.OrderedMap_String_CreatureData.toString","luxe/structural/OrderedMap.hx",50,0x2ffa3116)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	::String _ret = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(_ret,"_ret");
	HX_STACK_LINE(51)
	int _cnt = (int)0;		HX_STACK_VAR(_cnt,"_cnt");
	HX_STACK_LINE(51)
	int tmp = this->_keys->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	int _len = tmp;		HX_STACK_VAR(_len,"_len");
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		Array< ::String > _g1 = this->_keys;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(52)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			if ((tmp2)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(52)
			::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			::String k = tmp3;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(52)
			++(_g);
			HX_STACK_LINE(52)
			::String tmp4 = k;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(52)
			::String tmp7 = (tmp6 + HX_HCSTRING(" => ","\x7f","\x53","\x55","\x15"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(52)
			::haxe::ds::StringMap tmp8 = this->map;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(52)
			::String tmp9 = k;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(52)
			::CreatureData tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(52)
			::CreatureData tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(52)
			::String tmp12 = ::Std_obj::string(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(52)
			::String tmp13 = (tmp7 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(52)
			int tmp14 = (_cnt)++;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(52)
			int tmp15 = (_len - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(52)
			bool tmp16 = (tmp14 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(52)
			::String tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(52)
			if ((tmp16)){
				HX_STACK_LINE(52)
				tmp17 = HX_HCSTRING(", ","\x74","\x26","\x00","\x00");
			}
			else{
				HX_STACK_LINE(52)
				tmp17 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
			HX_STACK_LINE(52)
			::String tmp18 = (tmp13 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(52)
			hx::AddEq(_ret,tmp18);
		}
	}
	HX_STACK_LINE(53)
	::String tmp1 = (HX_HCSTRING("{","\x7b","\x00","\x00","\x00") + _ret);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	::String tmp2 = (tmp1 + HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(OrderedMap_String_CreatureData_obj,toString,return )

::luxe::structural::OrderedMapIterator_String_CreatureData OrderedMap_String_CreatureData_obj::iterator( ){
	HX_STACK_FRAME("luxe.structural.OrderedMap_String_CreatureData","iterator",0x5506d51c,"luxe.structural.OrderedMap_String_CreatureData.iterator","luxe/structural/OrderedMap.hx",56,0x2ffa3116)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	::luxe::structural::OrderedMapIterator_String_CreatureData tmp = ::luxe::structural::OrderedMapIterator_String_CreatureData_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(OrderedMap_String_CreatureData_obj,iterator,return )

bool OrderedMap_String_CreatureData_obj::remove( ::String key){
	HX_STACK_FRAME("luxe.structural.OrderedMap_String_CreatureData","remove",0x633a5ff2,"luxe.structural.OrderedMap_String_CreatureData.remove","luxe/structural/OrderedMap.hx",57,0x2ffa3116)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(57)
	::haxe::ds::StringMap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	::String tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	bool tmp3 = tmp->remove(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(57)
	if ((tmp3)){
		HX_STACK_LINE(57)
		::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(57)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(57)
		tmp4 = this->_keys->remove(tmp6);
	}
	else{
		HX_STACK_LINE(57)
		tmp4 = false;
	}
	HX_STACK_LINE(57)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(OrderedMap_String_CreatureData_obj,remove,return )

bool OrderedMap_String_CreatureData_obj::exists( ::String key){
	HX_STACK_FRAME("luxe.structural.OrderedMap_String_CreatureData","exists",0x1e91e18a,"luxe.structural.OrderedMap_String_CreatureData.exists","luxe/structural/OrderedMap.hx",58,0x2ffa3116)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(58)
	::haxe::ds::StringMap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(OrderedMap_String_CreatureData_obj,exists,return )

::CreatureData OrderedMap_String_CreatureData_obj::get( ::String key){
	HX_STACK_FRAME("luxe.structural.OrderedMap_String_CreatureData","get",0x7a49c428,"luxe.structural.OrderedMap_String_CreatureData.get","luxe/structural/OrderedMap.hx",59,0x2ffa3116)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(59)
	::haxe::ds::StringMap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	::CreatureData tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	::CreatureData tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(OrderedMap_String_CreatureData_obj,get,return )

Dynamic OrderedMap_String_CreatureData_obj::keys( ){
	HX_STACK_FRAME("luxe.structural.OrderedMap_String_CreatureData","keys",0x88e6be22,"luxe.structural.OrderedMap_String_CreatureData.keys","luxe/structural/OrderedMap.hx",60,0x2ffa3116)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	Dynamic tmp = this->_keys->iterator();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(OrderedMap_String_CreatureData_obj,keys,return )


OrderedMap_String_CreatureData_obj::OrderedMap_String_CreatureData_obj()
{
}

void OrderedMap_String_CreatureData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OrderedMap_String_CreatureData);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(idx,"idx");
	HX_MARK_MEMBER_NAME(_keys,"_keys");
	HX_MARK_END_CLASS();
}

void OrderedMap_String_CreatureData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(idx,"idx");
	HX_VISIT_MEMBER_NAME(_keys,"_keys");
}

Dynamic OrderedMap_String_CreatureData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		if (HX_FIELD_EQ(inName,"idx") ) { return idx; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return keys_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_keys") ) { return _keys; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OrderedMap_String_CreatureData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"idx") ) { idx=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_keys") ) { _keys=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OrderedMap_String_CreatureData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("idx","\x3d","\x04","\x50","\x00"));
	outFields->push(HX_HCSTRING("_keys","\xd3","\xfd","\x17","\xfa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(OrderedMap_String_CreatureData_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsInt,(int)offsetof(OrderedMap_String_CreatureData_obj,idx),HX_HCSTRING("idx","\x3d","\x04","\x50","\x00")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(OrderedMap_String_CreatureData_obj,_keys),HX_HCSTRING("_keys","\xd3","\xfd","\x17","\xfa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("idx","\x3d","\x04","\x50","\x00"),
	HX_HCSTRING("_keys","\xd3","\xfd","\x17","\xfa"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OrderedMap_String_CreatureData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OrderedMap_String_CreatureData_obj::__mClass,"__mClass");
};

#endif

hx::Class OrderedMap_String_CreatureData_obj::__mClass;

void OrderedMap_String_CreatureData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.structural.OrderedMap_String_CreatureData","\x00","\xf3","\x1d","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OrderedMap_String_CreatureData_obj >;
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
} // end namespace structural
