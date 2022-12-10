#ifndef INCLUDED_sys_net_Address
#define INCLUDED_sys_net_Address

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sys,net,Address)
HX_DECLARE_CLASS2(sys,net,Host)

namespace sys{
namespace net{


class HXCPP_CLASS_ATTRIBUTES Address_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Address_obj OBJ_;
		Address_obj();

	public:
		enum { _hx_ClassId = 0x7f9d1330 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="sys.net.Address")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"sys.net.Address"); }
		static ::hx::ObjectPtr< Address_obj > __new();
		static ::hx::ObjectPtr< Address_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Address_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Address",94,99,5c,6a); }

		int host;
		int port;
		 ::sys::net::Host getHost();
		::Dynamic getHost_dyn();

};

} // end namespace sys
} // end namespace net

#endif /* INCLUDED_sys_net_Address */ 
