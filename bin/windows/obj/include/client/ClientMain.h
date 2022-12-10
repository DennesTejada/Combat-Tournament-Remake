#ifndef INCLUDED_client_ClientMain
#define INCLUDED_client_ClientMain

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(client,ClientInput)
HX_DECLARE_CLASS1(client,ClientMain)
HX_DECLARE_CLASS2(engine,events,GameEvent)
HX_DECLARE_CLASS2(engine,events,NetworkEvent)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,net,DatagramSocket)
HX_DECLARE_CLASS2(openfl,net,Socket)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace client{


class HXCPP_CLASS_ATTRIBUTES ClientMain_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef ClientMain_obj OBJ_;
		ClientMain_obj();

	public:
		enum { _hx_ClassId = 0x15a152f3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="client.ClientMain")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"client.ClientMain"); }
		static ::hx::ObjectPtr< ClientMain_obj > __new();
		static ::hx::ObjectPtr< ClientMain_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ClientMain_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ClientMain",44,b4,ea,27); }

		 ::openfl::net::Socket clientSocket;
		 ::openfl::net::DatagramSocket udp;
		 ::client::ClientInput localInput;
		 ::Dynamic localPlayerInfo;
		void joinServer(::String IP,::hx::Null< int >  Port);
		::Dynamic joinServer_dyn();

		void onInputUpdate( ::engine::events::NetworkEvent e);
		::Dynamic onInputUpdate_dyn();

		void onConnect( ::openfl::events::Event e);
		::Dynamic onConnect_dyn();

		void sendToServer( ::Dynamic data);
		::Dynamic sendToServer_dyn();

		void onUpdate( ::engine::events::GameEvent e);
		::Dynamic onUpdate_dyn();

		void onClose( ::openfl::events::Event e);
		::Dynamic onClose_dyn();

};

} // end namespace client

#endif /* INCLUDED_client_ClientMain */ 
