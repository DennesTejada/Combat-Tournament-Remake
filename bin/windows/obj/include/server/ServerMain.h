#ifndef INCLUDED_server_ServerMain
#define INCLUDED_server_ServerMain

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,ErrorEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IOErrorEvent)
HX_DECLARE_CLASS2(openfl,events,ProgressEvent)
HX_DECLARE_CLASS2(openfl,events,SecurityErrorEvent)
HX_DECLARE_CLASS2(openfl,events,ServerSocketConnectEvent)
HX_DECLARE_CLASS2(openfl,events,TextEvent)
HX_DECLARE_CLASS2(openfl,net,ServerSocket)
HX_DECLARE_CLASS2(openfl,net,Socket)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS1(server,ServerMain)

namespace server{


class HXCPP_CLASS_ATTRIBUTES ServerMain_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef ServerMain_obj OBJ_;
		ServerMain_obj();

	public:
		enum { _hx_ClassId = 0x07ccb97f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="server.ServerMain")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"server.ServerMain"); }
		static ::hx::ObjectPtr< ServerMain_obj > __new();
		static ::hx::ObjectPtr< ServerMain_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ServerMain_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ServerMain",bc,d0,a7,6d); }

		 ::openfl::net::ServerSocket serverSocket;
		::cpp::VirtualArray clients;
		void createServer(::String IP,::hx::Null< int >  Port);
		::Dynamic createServer_dyn();

		void onClientConnect( ::openfl::events::ServerSocketConnectEvent event);
		::Dynamic onClientConnect_dyn();

		void ioErrorHandler( ::openfl::events::IOErrorEvent event);
		::Dynamic ioErrorHandler_dyn();

		void securityErrorHandler( ::openfl::events::SecurityErrorEvent event);
		::Dynamic securityErrorHandler_dyn();

		void sendToClient( ::openfl::net::Socket client, ::Dynamic data);
		::Dynamic sendToClient_dyn();

		void onClientDisonnect( ::openfl::events::Event event);
		::Dynamic onClientDisonnect_dyn();

		void onClientSocketData( ::openfl::events::ProgressEvent e);
		::Dynamic onClientSocketData_dyn();

		 ::Dynamic FindClientByTCP( ::openfl::net::Socket clientSocket);
		::Dynamic FindClientByTCP_dyn();

		void onClose( ::openfl::events::Event e);
		::Dynamic onClose_dyn();

};

} // end namespace server

#endif /* INCLUDED_server_ServerMain */ 
