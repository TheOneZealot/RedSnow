#ifndef INCLUDED_snow_modules_interfaces_IO
#define INCLUDED_snow_modules_interfaces_IO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS3(snow,modules,interfaces,IO)
HX_DECLARE_CLASS2(snow,types,SystemEvent)
namespace snow{
namespace modules{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IO_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IO_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void onevent( ::snow::types::SystemEvent event)=0;
virtual Dynamic onevent_dyn()=0;
		virtual Void shutdown( )=0;
virtual Dynamic shutdown_dyn()=0;
		virtual Void url_open( ::String _url)=0;
virtual Dynamic url_open_dyn()=0;
		virtual ::snow::api::Promise data_load( ::String _path,Dynamic _options)=0;
virtual Dynamic data_load_dyn()=0;
		virtual bool data_save( ::String _path,::snow::api::buffers::ArrayBufferView _data,Dynamic _options)=0;
virtual Dynamic data_save_dyn()=0;
		virtual ::String app_path( )=0;
virtual Dynamic app_path_dyn()=0;
		virtual ::String app_path_prefs( )=0;
virtual Dynamic app_path_prefs_dyn()=0;
		virtual ::String string_save_path( Dynamic _slot)=0;
virtual Dynamic string_save_path_dyn()=0;
		virtual ::String string_slot_load( Dynamic _slot)=0;
virtual Dynamic string_slot_load_dyn()=0;
		virtual ::String string_slot_encode( ::String _string)=0;
virtual Dynamic string_slot_encode_dyn()=0;
		virtual ::String string_slot_decode( ::String _string)=0;
virtual Dynamic string_slot_decode_dyn()=0;
		virtual bool string_slot_save( Dynamic _slot,::String _contents)=0;
virtual Dynamic string_slot_save_dyn()=0;
		virtual bool string_slot_destroy( Dynamic _slot)=0;
virtual Dynamic string_slot_destroy_dyn()=0;
};



template<typename IMPL>
class IO_delegate_ : public IO_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IO_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void onevent( ::snow::types::SystemEvent event) { return mDelegate->onevent(event);}
		Dynamic onevent_dyn() { return mDelegate->onevent_dyn();}
		Void shutdown( ) { return mDelegate->shutdown();}
		Dynamic shutdown_dyn() { return mDelegate->shutdown_dyn();}
		Void url_open( ::String _url) { return mDelegate->url_open(_url);}
		Dynamic url_open_dyn() { return mDelegate->url_open_dyn();}
		::snow::api::Promise data_load( ::String _path,Dynamic _options) { return mDelegate->data_load(_path,_options);}
		Dynamic data_load_dyn() { return mDelegate->data_load_dyn();}
		bool data_save( ::String _path,::snow::api::buffers::ArrayBufferView _data,Dynamic _options) { return mDelegate->data_save(_path,_data,_options);}
		Dynamic data_save_dyn() { return mDelegate->data_save_dyn();}
		::String app_path( ) { return mDelegate->app_path();}
		Dynamic app_path_dyn() { return mDelegate->app_path_dyn();}
		::String app_path_prefs( ) { return mDelegate->app_path_prefs();}
		Dynamic app_path_prefs_dyn() { return mDelegate->app_path_prefs_dyn();}
		::String string_save_path( Dynamic _slot) { return mDelegate->string_save_path(_slot);}
		Dynamic string_save_path_dyn() { return mDelegate->string_save_path_dyn();}
		::String string_slot_load( Dynamic _slot) { return mDelegate->string_slot_load(_slot);}
		Dynamic string_slot_load_dyn() { return mDelegate->string_slot_load_dyn();}
		::String string_slot_encode( ::String _string) { return mDelegate->string_slot_encode(_string);}
		Dynamic string_slot_encode_dyn() { return mDelegate->string_slot_encode_dyn();}
		::String string_slot_decode( ::String _string) { return mDelegate->string_slot_decode(_string);}
		Dynamic string_slot_decode_dyn() { return mDelegate->string_slot_decode_dyn();}
		bool string_slot_save( Dynamic _slot,::String _contents) { return mDelegate->string_slot_save(_slot,_contents);}
		Dynamic string_slot_save_dyn() { return mDelegate->string_slot_save_dyn();}
		bool string_slot_destroy( Dynamic _slot) { return mDelegate->string_slot_destroy(_slot);}
		Dynamic string_slot_destroy_dyn() { return mDelegate->string_slot_destroy_dyn();}
};

} // end namespace snow
} // end namespace modules
} // end namespace interfaces

#endif /* INCLUDED_snow_modules_interfaces_IO */ 
