#ifndef INCLUDED_server_ClientInfo
#define INCLUDED_server_ClientInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(server,ClientInfo)
HX_DECLARE_CLASS2(sys,net,Socket)

namespace server{


class HXCPP_CLASS_ATTRIBUTES ClientInfo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ClientInfo_obj OBJ_;
		ClientInfo_obj();

	public:
		enum { _hx_ClassId = 0x2668a7a0 };

		void __construct( ::sys::net::Socket sv, ::sys::net::Socket skt);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="server.ClientInfo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"server.ClientInfo"); }
		static ::hx::ObjectPtr< ClientInfo_obj > __new( ::sys::net::Socket sv, ::sys::net::Socket skt);
		static ::hx::ObjectPtr< ClientInfo_obj > __alloc(::hx::Ctx *_hx_ctx, ::sys::net::Socket sv, ::sys::net::Socket skt);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ClientInfo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ClientInfo",79,b4,4f,25); }

		 ::sys::net::Socket socket;
		::String name;
		 ::sys::net::Socket server;
		bool active;
		void send(::String command);
		::Dynamic send_dyn();

};

} // end namespace server

#endif /* INCLUDED_server_ClientInfo */ 
