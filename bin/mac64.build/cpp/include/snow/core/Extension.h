#ifndef INCLUDED_snow_core_Extension
#define INCLUDED_snow_core_Extension

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,core,Extension)
HX_DECLARE_CLASS2(snow,types,SystemEvent)
namespace snow{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Extension_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Extension_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void onevent( ::snow::types::SystemEvent event)=0;
virtual Dynamic onevent_dyn()=0;
};



template<typename IMPL>
class Extension_delegate_ : public Extension_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Extension_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void onevent( ::snow::types::SystemEvent event) { return mDelegate->onevent(event);}
		Dynamic onevent_dyn() { return mDelegate->onevent_dyn();}
};

} // end namespace snow
} // end namespace core

#endif /* INCLUDED_snow_core_Extension */ 
