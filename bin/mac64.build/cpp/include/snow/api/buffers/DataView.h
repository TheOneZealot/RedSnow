#ifndef INCLUDED_snow_api_buffers_DataView
#define INCLUDED_snow_api_buffers_DataView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,api,buffers,DataView)
namespace snow{
namespace api{
namespace buffers{


class HXCPP_CLASS_ATTRIBUTES  DataView_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DataView_obj OBJ_;
		DataView_obj();
		Void __construct(Array< unsigned char > buffer,hx::Null< int >  __o_byteOffset,Dynamic byteLength);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.api.buffers.DataView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DataView_obj > __new(Array< unsigned char > buffer,hx::Null< int >  __o_byteOffset,Dynamic byteLength);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DataView_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DataView","\xcf","\xcd","\x74","\x67"); }

		Array< unsigned char > buffer;
		int byteLength;
		int byteOffset;
		virtual int getInt8( int byteOffset);
		Dynamic getInt8_dyn();

		virtual int getInt16( int byteOffset);
		Dynamic getInt16_dyn();

		virtual int getInt32( int byteOffset);
		Dynamic getInt32_dyn();

		virtual int getUint8( int byteOffset);
		Dynamic getUint8_dyn();

		virtual int getUint16( int byteOffset);
		Dynamic getUint16_dyn();

		virtual int getUint32( int byteOffset);
		Dynamic getUint32_dyn();

		virtual Float getFloat32( int byteOffset);
		Dynamic getFloat32_dyn();

		virtual Float getFloat64( int byteOffset);
		Dynamic getFloat64_dyn();

		virtual Void setInt8( int byteOffset,int value);
		Dynamic setInt8_dyn();

		virtual Void setInt16( int byteOffset,int value);
		Dynamic setInt16_dyn();

		virtual Void setInt32( int byteOffset,int value);
		Dynamic setInt32_dyn();

		virtual Void setUint8( int byteOffset,int value);
		Dynamic setUint8_dyn();

		virtual Void setUint16( int byteOffset,int value);
		Dynamic setUint16_dyn();

		virtual Void setUint32( int byteOffset,int value);
		Dynamic setUint32_dyn();

		virtual Void setFloat32( int byteOffset,Float value);
		Dynamic setFloat32_dyn();

		virtual Void setFloat64( int byteOffset,Float value);
		Dynamic setFloat64_dyn();

};

} // end namespace snow
} // end namespace api
} // end namespace buffers

#endif /* INCLUDED_snow_api_buffers_DataView */ 
