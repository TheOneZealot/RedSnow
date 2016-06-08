#ifndef INCLUDED_snow_modules_sdl_IO
#define INCLUDED_snow_modules_sdl_IO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_core_native_io_IO
#include <snow/core/native/io/IO.h>
#endif
#include <linc_sdl.h>
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,core,native,io,IO)
HX_DECLARE_CLASS3(snow,modules,interfaces,IO)
HX_DECLARE_CLASS3(snow,modules,sdl,IO)
namespace snow{
namespace modules{
namespace sdl{


class HXCPP_CLASS_ATTRIBUTES  IO_obj : public ::snow::core::native::io::IO_obj{
	public:
		typedef ::snow::core::native::io::IO_obj super;
		typedef IO_obj OBJ_;
		IO_obj();
		Void __construct(::snow::Snow _app);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.modules.sdl.IO")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IO_obj > __new(::snow::Snow _app);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IO_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("IO","\xe6","\x3f","\x00","\x00"); }

		virtual ::String app_path( );

		virtual ::String app_path_prefs( );

		virtual ::cpp::Pointer< SDL_RWops > file_handle( ::String _path,::String _mode);

		virtual ::cpp::Pointer< SDL_RWops > file_handle_from_mem( ::snow::api::buffers::ArrayBufferView mem,int size);

		virtual int file_read( ::cpp::Pointer< SDL_RWops > file,::snow::api::buffers::ArrayBufferView dest,int size,int maxnum);

		virtual int file_write( ::cpp::Pointer< SDL_RWops > file,::snow::api::buffers::ArrayBufferView src,int size,int num);

		virtual int file_seek( ::cpp::Pointer< SDL_RWops > file,int offset,int whence);

		virtual int file_tell( ::cpp::Pointer< SDL_RWops > file);

		virtual int file_close( ::cpp::Pointer< SDL_RWops > file);

};

} // end namespace snow
} // end namespace modules
} // end namespace sdl

#endif /* INCLUDED_snow_modules_sdl_IO */ 
