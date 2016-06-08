#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_RenderPath
#include <phoenix/RenderPath.h>
#endif
#ifndef INCLUDED_phoenix_RenderState
#include <phoenix/RenderState.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_RendererStats
#include <phoenix/RendererStats.h>
#endif
namespace phoenix{

Void RenderPath_obj::__construct(::phoenix::Renderer _renderer)
{
HX_STACK_FRAME("phoenix.RenderPath","new",0x7c190cac,"phoenix.RenderPath.new","phoenix/RenderPath.hx",13,0x9e7f7fa3)
HX_STACK_THIS(this)
HX_STACK_ARG(_renderer,"_renderer")
{
	HX_STACK_LINE(13)
	this->renderer = _renderer;
}
;
	return null();
}

//RenderPath_obj::~RenderPath_obj() { }

Dynamic RenderPath_obj::__CreateEmpty() { return  new RenderPath_obj; }
hx::ObjectPtr< RenderPath_obj > RenderPath_obj::__new(::phoenix::Renderer _renderer)
{  hx::ObjectPtr< RenderPath_obj > _result_ = new RenderPath_obj();
	_result_->__construct(_renderer);
	return _result_;}

Dynamic RenderPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderPath_obj > _result_ = new RenderPath_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void RenderPath_obj::render( Array< ::Dynamic > _batchers,::phoenix::RendererStats _stats){
{
		HX_STACK_FRAME("phoenix.RenderPath","render",0x4d8de68a,"phoenix.RenderPath.render","phoenix/RenderPath.hx",16,0x9e7f7fa3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_batchers,"_batchers")
		HX_STACK_ARG(_stats,"_stats")
		HX_STACK_LINE(18)
		int c = _batchers->length;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(19)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(20)
		while((true)){
			HX_STACK_LINE(20)
			bool tmp = (i < c);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(20)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(20)
			if ((tmp1)){
				HX_STACK_LINE(20)
				break;
			}
			HX_STACK_LINE(21)
			::phoenix::Batcher tmp2 = _batchers->__get(i).StaticCast< ::phoenix::Batcher >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(21)
			::phoenix::Batcher batch = tmp2;		HX_STACK_VAR(batch,"batch");
			HX_STACK_LINE(22)
			bool tmp3 = batch->enabled;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(22)
			if ((tmp3)){
				HX_STACK_LINE(25)
				::luxe::Debug tmp4 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(25)
				::String tmp5 = (HX_HCSTRING("batch.","\x34","\xdb","\xcf","\x55") + batch->name);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(25)
				tmp4->start(tmp5,null());
				HX_STACK_LINE(28)
				{
					HX_STACK_LINE(28)
					batch->draw_calls = (int)0;
					HX_STACK_LINE(28)
					batch->vert_count = (int)0;
					HX_STACK_LINE(28)
					::phoenix::Batcher tmp6 = batch;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(28)
					batch->emitter->emit((int)1,tmp6);
					HX_STACK_LINE(28)
					{
						HX_STACK_LINE(28)
						batch->view->process();
						HX_STACK_LINE(28)
						::phoenix::RenderState tmp7 = batch->renderer->state;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(28)
						::phoenix::Rectangle tmp8 = batch->view->viewport;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(28)
						Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(28)
						::phoenix::Rectangle tmp10 = batch->view->viewport;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(28)
						Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(28)
						::phoenix::Rectangle tmp12 = batch->view->viewport;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(28)
						Float tmp13 = tmp12->w;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(28)
						::phoenix::Rectangle tmp14 = batch->view->viewport;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(28)
						Float tmp15 = tmp14->h;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(28)
						tmp7->viewport(tmp9,tmp11,tmp13,tmp15);
					}
					HX_STACK_LINE(28)
					batch->batch(false);
					HX_STACK_LINE(28)
					::phoenix::Batcher tmp7 = batch;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(28)
					batch->emitter->emit((int)2,tmp7);
				}
				HX_STACK_LINE(31)
				int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(31)
				{
					HX_STACK_LINE(31)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp7 = batch->geometry->root;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(31)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp7;		HX_STACK_VAR(_node,"_node");
					HX_STACK_LINE(31)
					bool tmp8 = (_node == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(31)
					if ((tmp8)){
						HX_STACK_LINE(31)
						tmp6 = (int)0;
					}
					else{
						HX_STACK_LINE(31)
						tmp6 = _node->nodecount;
					}
				}
				HX_STACK_LINE(31)
				hx::AddEq(_stats->geometry_count,tmp6);
				HX_STACK_LINE(32)
				hx::AddEq(_stats->dynamic_batched_count,batch->dynamic_batched_count);
				HX_STACK_LINE(33)
				hx::AddEq(_stats->static_batched_count,batch->static_batched_count);
				HX_STACK_LINE(34)
				hx::AddEq(_stats->visible_count,batch->visible_count);
				HX_STACK_LINE(35)
				hx::AddEq(_stats->draw_calls,batch->draw_calls);
				HX_STACK_LINE(36)
				hx::AddEq(_stats->vert_count,batch->vert_count);
				HX_STACK_LINE(39)
				::luxe::Debug tmp7 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(39)
				::String tmp8 = (HX_HCSTRING("batch.","\x34","\xdb","\xcf","\x55") + batch->name);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(39)
				tmp7->end(tmp8);
			}
			HX_STACK_LINE(42)
			batch = null();
			HX_STACK_LINE(43)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RenderPath_obj,render,(void))


RenderPath_obj::RenderPath_obj()
{
}

void RenderPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderPath);
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_END_CLASS();
}

void RenderPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
}

Dynamic RenderPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::phoenix::Renderer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Renderer*/ ,(int)offsetof(RenderPath_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderPath_obj::__mClass,"__mClass");
};

#endif

hx::Class RenderPath_obj::__mClass;

void RenderPath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.RenderPath","\xba","\x86","\x1a","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RenderPath_obj >;
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

} // end namespace phoenix
