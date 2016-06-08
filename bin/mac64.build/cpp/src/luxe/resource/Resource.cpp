#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
namespace luxe{
namespace resource{

Void Resource_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.resource.Resource","new",0x99ea21c8,"luxe.resource.Resource.new","luxe/resource/Resource.hx",11,0x204e02c8)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(30)
	this->ref = (int)0;
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		bool tmp = (_options == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		if ((tmp)){
			HX_STACK_LINE(34)
			::String tmp1 = HX_HCSTRING("_options was null","\x3f","\x38","\x24","\xa1");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(34)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		bool tmp = (_options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		if ((tmp)){
			HX_STACK_LINE(35)
			::String tmp1 = HX_HCSTRING("_options.id was null","\xb4","\x3b","\xea","\x09");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(35)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(35)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		bool tmp = (_options->__Field(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		if ((tmp)){
			HX_STACK_LINE(37)
			::luxe::Resources tmp1 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(37)
			_options->__FieldRef(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2")) = tmp1;
		}
		HX_STACK_LINE(37)
		_options->__Field(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"), hx::paccDynamic );
	}
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		bool tmp = (_options->__Field(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		if ((tmp)){
			HX_STACK_LINE(38)
			_options->__FieldRef(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c")) = (int)0;
		}
		HX_STACK_LINE(38)
		_options->__Field(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c"), hx::paccDynamic );
	}
	HX_STACK_LINE(40)
	this->id = _options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
	HX_STACK_LINE(41)
	this->_system = _options->__Field(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"), hx::paccDynamic );
	HX_STACK_LINE(42)
	this->resource_type = _options->__Field(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c"), hx::paccDynamic );
	HX_STACK_LINE(43)
	this->set_state((int)0);
	HX_STACK_LINE(44)
	this->set_ref((int)1);
}
;
	return null();
}

//Resource_obj::~Resource_obj() { }

Dynamic Resource_obj::__CreateEmpty() { return  new Resource_obj; }
hx::ObjectPtr< Resource_obj > Resource_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Resource_obj > _result_ = new Resource_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Resource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Resource_obj > _result_ = new Resource_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Resource_obj::destroy( Dynamic __o__force){
Dynamic _force = __o__force.Default(false);
	HX_STACK_FRAME("luxe.resource.Resource","destroy",0x97c55262,"luxe.resource.Resource.destroy","luxe/resource/Resource.hx",52,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_force,"_force")
{
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(54)
			bool tmp1 = (tmp != (int)6);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(54)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(54)
			if ((tmp2)){
				HX_STACK_LINE(54)
				::String tmp3 = HX_HCSTRING("state != ResourceState.destroyed","\x79","\xbe","\xa0","\xbf");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(54)
				::luxe::DebugError tmp4 = ::luxe::DebugError_obj::assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(54)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(56)
		Dynamic tmp = _force;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		if ((tmp1)){
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				int tmp2 = this->ref;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(57)
				bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(57)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(57)
				if ((tmp4)){
					HX_STACK_LINE(57)
					::String tmp5 = HX_HCSTRING("ref > 0","\x81","\x7a","\xcf","\xb6");		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(57)
					::luxe::DebugError tmp6 = ::luxe::DebugError_obj::assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(57)
					HX_STACK_DO_THROW(tmp6);
				}
			}
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				::luxe::resource::Resource _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(58)
				int _g1 = _g->ref;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(58)
				int tmp2 = (_g1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(58)
				_g->set_ref(tmp2);
				HX_STACK_LINE(58)
				_g1;
			}
			HX_STACK_LINE(59)
			{
				HX_STACK_LINE(59)
				int tmp2 = this->ref;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(59)
				bool tmp3 = (tmp2 >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(59)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(59)
				if ((tmp4)){
					HX_STACK_LINE(59)
					::String tmp5 = HX_HCSTRING("ref >= 0","\xfc","\xa9","\xd1","\x3e");		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(59)
					::luxe::DebugError tmp6 = ::luxe::DebugError_obj::assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(59)
					HX_STACK_DO_THROW(tmp6);
				}
			}
		}
		HX_STACK_LINE(64)
		int tmp2 = this->ref;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(64)
		if ((tmp4)){
			HX_STACK_LINE(64)
			tmp5 = _force;
		}
		else{
			HX_STACK_LINE(64)
			tmp5 = true;
		}
		HX_STACK_LINE(64)
		if ((tmp5)){
			HX_STACK_LINE(66)
			this->clear();
			HX_STACK_LINE(67)
			this->set_state((int)6);
			HX_STACK_LINE(68)
			::luxe::Resources tmp6 = this->_system;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(68)
			tmp6->remove(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(69)
			::luxe::Resources tmp7 = this->_system;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(69)
			tmp7->emit((int)8,hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Resource_obj,destroy,(void))

Void Resource_obj::invalidate( ){
{
		HX_STACK_FRAME("luxe.resource.Resource","invalidate",0x1eee4513,"luxe.resource.Resource.invalidate","luxe/resource/Resource.hx",77,0x204e02c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(79)
			bool tmp1 = (tmp != (int)6);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(79)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(79)
			if ((tmp2)){
				HX_STACK_LINE(79)
				::String tmp3 = HX_HCSTRING("state != ResourceState.destroyed","\x79","\xbe","\xa0","\xbf");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(79)
				::luxe::DebugError tmp4 = ::luxe::DebugError_obj::assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(79)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(81)
		this->clear();
		HX_STACK_LINE(82)
		this->set_state((int)5);
		HX_STACK_LINE(83)
		::luxe::Resources tmp = this->_system;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		tmp->emit((int)6,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,invalidate,(void))

::snow::api::Promise Resource_obj::reload( ){
	HX_STACK_FRAME("luxe.resource.Resource","reload",0xdb0fd2f1,"luxe.resource.Resource.reload","luxe/resource/Resource.hx",90,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,reload,return )

Float Resource_obj::memory_use( ){
	HX_STACK_FRAME("luxe.resource.Resource","memory_use",0x92507c61,"luxe.resource.Resource.memory_use","luxe/resource/Resource.hx",97,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,memory_use,return )

int Resource_obj::set_ref( int _ref){
	HX_STACK_FRAME("luxe.resource.Resource","set_ref",0x8d0c585e,"luxe.resource.Resource.set_ref","luxe/resource/Resource.hx",102,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_ref,"_ref")
	HX_STACK_LINE(104)
	int tmp = this->ref;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	int pre = tmp;		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(105)
	this->ref = _ref;
	HX_STACK_LINE(107)
	int tmp1 = this->ref;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(107)
	int tmp2 = pre;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(107)
	bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(107)
	if ((tmp3)){
		HX_STACK_LINE(108)
		::luxe::Resources tmp4 = this->_system;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		tmp4->emit((int)9,hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(109)
		int tmp4 = this->ref;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(109)
		int tmp5 = pre;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(109)
		bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(109)
		if ((tmp6)){
			HX_STACK_LINE(110)
			::luxe::Resources tmp7 = this->_system;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(110)
			tmp7->emit((int)10,hx::ObjectPtr<OBJ_>(this));
		}
	}
	HX_STACK_LINE(113)
	int tmp4 = this->ref;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(113)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Resource_obj,set_ref,return )

int Resource_obj::set_state( int _state){
	HX_STACK_FRAME("luxe.resource.Resource","set_state",0xc8670ddc,"luxe.resource.Resource.set_state","luxe/resource/Resource.hx",117,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_state,"_state")
	HX_STACK_LINE(119)
	this->state = _state;
	HX_STACK_LINE(121)
	{
		HX_STACK_LINE(121)
		int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(121)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(121)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(121)
		switch( (int)(tmp1)){
			case (int)2: {
				HX_STACK_LINE(123)
				::luxe::Resources tmp2 = this->_system;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(123)
				tmp2->emit((int)3,hx::ObjectPtr<OBJ_>(this));
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(125)
				::luxe::Resources tmp2 = this->_system;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(125)
				tmp2->emit((int)4,hx::ObjectPtr<OBJ_>(this));
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(127)
				::luxe::Resources tmp2 = this->_system;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(127)
				tmp2->emit((int)5,hx::ObjectPtr<OBJ_>(this));
			}
			;break;
			default: {
			}
		}
	}
	HX_STACK_LINE(131)
	int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Resource_obj,set_state,return )

Void Resource_obj::clear( ){
{
		HX_STACK_FRAME("luxe.resource.Resource","clear",0x3136ecf5,"luxe.resource.Resource.clear","luxe/resource/Resource.hx",136,0x204e02c8)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,clear,(void))

::String Resource_obj::state_string( ){
	HX_STACK_FRAME("luxe.resource.Resource","state_string",0xa1c85a17,"luxe.resource.Resource.state_string","luxe/resource/Resource.hx",141,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(142)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	{
		HX_STACK_LINE(142)
		int tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(142)
		int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(142)
		switch( (int)(tmp2)){
			case (int)1: {
				HX_STACK_LINE(143)
				tmp = HX_HCSTRING("listed","\x3d","\xc8","\xf9","\xef");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(144)
				tmp = HX_HCSTRING("loading","\x7c","\xce","\xf2","\x08");
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(145)
				tmp = HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58");
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(146)
				tmp = HX_HCSTRING("failed","\xbd","\xc5","\xfe","\xe7");
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(147)
				tmp = HX_HCSTRING("invalidated","\x89","\x32","\xac","\xbd");
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(148)
				tmp = HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4");
			}
			;break;
			default: {
				HX_STACK_LINE(149)
				tmp = HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
			}
		}
	}
	HX_STACK_LINE(142)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,state_string,return )

::String Resource_obj::type_string( ){
	HX_STACK_FRAME("luxe.resource.Resource","type_string",0xd6096c5e,"luxe.resource.Resource.type_string","luxe/resource/Resource.hx",153,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(154)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	{
		HX_STACK_LINE(154)
		int tmp1 = this->resource_type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(154)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(154)
		int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		switch( (int)(tmp2)){
			case (int)3: {
				HX_STACK_LINE(155)
				tmp = HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd");
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(156)
				tmp = HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(157)
				tmp = HX_HCSTRING("json","\x28","\x42","\x68","\x46");
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(158)
				tmp = HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e");
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(159)
				tmp = HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d");
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(160)
				tmp = HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43");
			}
			;break;
			default: {
				HX_STACK_LINE(161)
				int tmp3 = this->resource_type;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(161)
				tmp = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);
			}
		}
	}
	HX_STACK_LINE(154)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,type_string,return )

::String Resource_obj::toString( ){
	HX_STACK_FRAME("luxe.resource.Resource","toString",0x9c706644,"luxe.resource.Resource.toString","luxe/resource/Resource.hx",165,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(166)
	::String tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(166)
	::String tmp1 = (HX_HCSTRING("Resource(`","\xa6","\xd3","\xbc","\x37") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(166)
	::String tmp2 = (tmp1 + HX_HCSTRING("`, ","\xd4","\xfe","\x48","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	::String tmp3 = this->type_string();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(166)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(166)
	::String tmp5 = (tmp4 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(166)
	::String tmp6 = this->state_string();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(166)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(166)
	::String tmp8 = (tmp7 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(166)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,toString,return )


Resource_obj::Resource_obj()
{
}

void Resource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Resource);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(_system,"system");
	HX_MARK_MEMBER_NAME(resource_type,"resource_type");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(ref,"ref");
	HX_MARK_END_CLASS();
}

void Resource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(_system,"system");
	HX_VISIT_MEMBER_NAME(resource_type,"resource_type");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(ref,"ref");
}

Dynamic Resource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ref") ) { return ref; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { return _system; }
		if (HX_FIELD_EQ(inName,"reload") ) { return reload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ref") ) { return set_ref_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_state") ) { return set_state_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"memory_use") ) { return memory_use_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"type_string") ) { return type_string_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"state_string") ) { return state_string_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resource_type") ) { return resource_type; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Resource_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ref") ) { if (inCallProp == hx::paccAlways) return set_ref(inValue);ref=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { if (inCallProp == hx::paccAlways) return set_state(inValue);state=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { _system=inValue.Cast< ::luxe::Resources >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resource_type") ) { resource_type=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Resource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"));
	outFields->push(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("ref","\x53","\xd9","\x56","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Resource_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::luxe::Resources*/ ,(int)offsetof(Resource_obj,_system),HX_HCSTRING("system","\xef","\x96","\xe2","\xf2")},
	{hx::fsInt,(int)offsetof(Resource_obj,resource_type),HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c")},
	{hx::fsInt,(int)offsetof(Resource_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsInt,(int)offsetof(Resource_obj,ref),HX_HCSTRING("ref","\x53","\xd9","\x56","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"),
	HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("ref","\x53","\xd9","\x56","\x00"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"),
	HX_HCSTRING("memory_use","\xc9","\x50","\x8c","\xfa"),
	HX_HCSTRING("set_ref","\xf6","\x32","\xcd","\x19"),
	HX_HCSTRING("set_state","\x74","\xbe","\x05","\xab"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("state_string","\x7f","\x18","\xf0","\x6f"),
	HX_HCSTRING("type_string","\xf6","\x72","\x27","\xa2"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Resource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Resource_obj::__mClass,"__mClass");
};

#endif

hx::Class Resource_obj::__mClass;

void Resource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.resource.Resource","\xd6","\xdd","\xbb","\xbb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Resource_obj >;
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
} // end namespace resource
