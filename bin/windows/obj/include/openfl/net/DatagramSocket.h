#ifndef INCLUDED_openfl_net_DatagramSocket
#define INCLUDED_openfl_net_DatagramSocket

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,net,DatagramSocket)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS2(sys,net,Socket)
HX_DECLARE_CLASS2(sys,net,UdpSocket)

namespace openfl{
namespace net{


class HXCPP_CLASS_ATTRIBUTES DatagramSocket_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef DatagramSocket_obj OBJ_;
		DatagramSocket_obj();

	public:
		enum { _hx_ClassId = 0x03b9d0dd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.net.DatagramSocket")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.net.DatagramSocket"); }
		static ::hx::ObjectPtr< DatagramSocket_obj > __new();
		static ::hx::ObjectPtr< DatagramSocket_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DatagramSocket_obj();

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
		::String __ToString() const { return HX_("DatagramSocket",b4,cd,10,cc); }

		static void __boot();
		static bool isSupported;
		bool bound;
		bool connected;
		::String localAddress;
		int localPort;
		::String remoteAddress;
		int remotePort;
		 ::sys::net::UdpSocket _hx___udpSocket;
		bool _hx___isReceiving;
		 ::haxe::io::Bytes _hx___iBytes;
		 ::openfl::utils::ByteArrayData _hx___buffer;
		void bind(::hx::Null< int >  localPort,::String localAddress);
		::Dynamic bind_dyn();

		void close();
		::Dynamic close_dyn();

		void connect(::String remoteAddress,int remotePort);
		::Dynamic connect_dyn();

		void receive();
		::Dynamic receive_dyn();

		void send( ::openfl::utils::ByteArrayData bytes,::hx::Null< int >  offset,::hx::Null< int >  length,::String address,::hx::Null< int >  port);
		::Dynamic send_dyn();

		void addEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference);

		void removeEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  useCapture);

		void _hx___onFrameUpdate( ::openfl::events::Event e);
		::Dynamic _hx___onFrameUpdate_dyn();

		bool get_connected();
		::Dynamic get_connected_dyn();

		::String get_localAddress();
		::Dynamic get_localAddress_dyn();

		int get_localPort();
		::Dynamic get_localPort_dyn();

		::String get_remoteAddress();
		::Dynamic get_remoteAddress_dyn();

		int get_remotePort();
		::Dynamic get_remotePort_dyn();

};

} // end namespace openfl
} // end namespace net

#endif /* INCLUDED_openfl_net_DatagramSocket */ 
