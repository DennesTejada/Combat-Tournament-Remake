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
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(server,ClientInfo)
HX_DECLARE_CLASS1(server,ServerMain)
HX_DECLARE_CLASS2(sys,net,Socket)

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

		 ::sys::net::Socket socket;
		::String IP;
		int Port;
		int maxConnections;
		::Array< ::Dynamic> clients;
		void createServer();
		::Dynamic createServer_dyn();

		void threadAccept();
		::Dynamic threadAccept_dyn();

		 ::Dynamic getThreadListen( ::server::ClientInfo cl);
		::Dynamic getThreadListen_dyn();

};

} // end namespace server

#endif /* INCLUDED_server_ServerMain */ 
