#ifndef INCLUDED_openfl_net_ServerSocket
#define INCLUDED_openfl_net_ServerSocket

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,net,ServerSocket)
HX_DECLARE_CLASS2(openfl,net,Socket)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS2(sys,net,Socket)

namespace openfl{
namespace net{


class HXCPP_CLASS_ATTRIBUTES ServerSocket_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef ServerSocket_obj OBJ_;
		ServerSocket_obj();

	public:
		enum { _hx_ClassId = 0x1f3a77c3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.net.ServerSocket")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.net.ServerSocket"); }
		static ::hx::ObjectPtr< ServerSocket_obj > __new();
		static ::hx::ObjectPtr< ServerSocket_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ServerSocket_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ServerSocket",f6,8a,91,75); }

		static void __boot();
		static bool isSupported;
		bool bound;
		bool listening;
		::String localAddress;
		int localPort;
		 ::sys::net::Socket _hx___serverSocket;
		bool _hx___closed;
		void bind(::hx::Null< int >  localPort,::String localAddress);
		::Dynamic bind_dyn();

		void close();
		::Dynamic close_dyn();

		void listen(::hx::Null< int >  backlog);
		::Dynamic listen_dyn();

		 ::openfl::net::Socket _hx___fromSocket( ::sys::net::Socket socket);
		::Dynamic _hx___fromSocket_dyn();

		void this_onEnterFrame( ::openfl::events::Event e);
		::Dynamic this_onEnterFrame_dyn();

		void addEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference);

		void removeEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  useCapture);

		bool get_isSupported();
		::Dynamic get_isSupported_dyn();

};

} // end namespace openfl
} // end namespace net

#endif /* INCLUDED_openfl_net_ServerSocket */ 
