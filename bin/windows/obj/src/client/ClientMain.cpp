#include <hxcpp.h>

#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_client_ClientInput
#include <client/ClientInput.h>
#endif
#ifndef INCLUDED_client_ClientMain
#include <client/ClientMain.h>
#endif
#ifndef INCLUDED_engine_GameLoop
#include <engine/GameLoop.h>
#endif
#ifndef INCLUDED_engine_events_GameEvent
#include <engine/events/GameEvent.h>
#endif
#ifndef INCLUDED_engine_events_NetworkEvent
#include <engine/events/NetworkEvent.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_net_DatagramSocket
#include <openfl/net/DatagramSocket.h>
#endif
#ifndef INCLUDED_openfl_net_Socket
#include <openfl/net/Socket.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_881e57feaa542296_23_new,"client.ClientMain","new",0xd2a5fdf9,"client.ClientMain.new","client/ClientMain.hx",23,0x13faf6f6)
HX_LOCAL_STACK_FRAME(_hx_pos_881e57feaa542296_25_joinServer,"client.ClientMain","joinServer",0x155b65d4,"client.ClientMain.joinServer","client/ClientMain.hx",25,0x13faf6f6)
HX_LOCAL_STACK_FRAME(_hx_pos_881e57feaa542296_30_onInputUpdate,"client.ClientMain","onInputUpdate",0xa9be05ad,"client.ClientMain.onInputUpdate","client/ClientMain.hx",30,0x13faf6f6)
HX_LOCAL_STACK_FRAME(_hx_pos_881e57feaa542296_35_onConnect,"client.ClientMain","onConnect",0x6930dae4,"client.ClientMain.onConnect","client/ClientMain.hx",35,0x13faf6f6)
HX_LOCAL_STACK_FRAME(_hx_pos_881e57feaa542296_54_sendToServer,"client.ClientMain","sendToServer",0x2d349b4d,"client.ClientMain.sendToServer","client/ClientMain.hx",54,0x13faf6f6)
HX_LOCAL_STACK_FRAME(_hx_pos_881e57feaa542296_58_onUpdate,"client.ClientMain","onUpdate",0x26f7644f,"client.ClientMain.onUpdate","client/ClientMain.hx",58,0x13faf6f6)
HX_LOCAL_STACK_FRAME(_hx_pos_881e57feaa542296_68_onClose,"client.ClientMain","onClose",0x625c2432,"client.ClientMain.onClose","client/ClientMain.hx",68,0x13faf6f6)
namespace client{

void ClientMain_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_881e57feaa542296_23_new)
HXDLIN(  23)		super::__construct();
            	}

Dynamic ClientMain_obj::__CreateEmpty() { return new ClientMain_obj; }

void *ClientMain_obj::_hx_vtable = 0;

Dynamic ClientMain_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ClientMain_obj > _hx_result = new ClientMain_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ClientMain_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x15a152f3) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x15a152f3;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void ClientMain_obj::joinServer(::String __o_IP,::hx::Null< int >  __o_Port){
            		::String IP = __o_IP;
            		if (::hx::IsNull(__o_IP)) IP = HX_("127.0.0.1",fd,bc,5e,a1);
            		int Port = __o_Port.Default(9000);
            	HX_GC_STACKFRAME(&_hx_pos_881e57feaa542296_25_joinServer)
HXLINE(  26)		this->clientSocket =  ::openfl::net::Socket_obj::__alloc( HX_CTX ,IP,Port);
HXLINE(  27)		this->clientSocket->addEventListener(HX_("connect",ea,3b,80,15),this->onConnect_dyn(),null(),null(),null());
HXLINE(  28)		this->clientSocket->addEventListener(HX_("close",b8,17,63,48),this->onClose_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(ClientMain_obj,joinServer,(void))

void ClientMain_obj::onInputUpdate( ::engine::events::NetworkEvent e){
            	HX_STACKFRAME(&_hx_pos_881e57feaa542296_30_onInputUpdate)
HXLINE(  31)		 ::Dynamic input = e->data;
HXLINE(  32)		this->clientSocket->writeObject(input);
HXLINE(  33)		this->clientSocket->flush();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClientMain_obj,onInputUpdate,(void))

void ClientMain_obj::onConnect( ::openfl::events::Event e){
            	HX_GC_STACKFRAME(&_hx_pos_881e57feaa542296_35_onConnect)
HXLINE(  37)		::Global_obj::game->isNetGame = true;
HXLINE(  39)		::Global_obj::restart();
HXLINE(  41)		::Main_obj::instance->createMatch();
HXLINE(  43)		this->udp =  ::openfl::net::DatagramSocket_obj::__alloc( HX_CTX );
HXLINE(  44)		this->udp->bind(0,HX_("127.0.0.1",fd,bc,5e,a1));
HXLINE(  47)		this->localInput =  ::client::ClientInput_obj::__alloc( HX_CTX );
HXLINE(  48)		this->localInput->addEventListener(::engine::events::NetworkEvent_obj::ON_INPUT_UPDATE,this->onInputUpdate_dyn(),null(),null(),null());
HXLINE(  49)		this->addChild(this->localInput);
HXLINE(  51)		::Main_obj::gameLoop->addEventListener(::engine::events::GameEvent_obj::ON_GAME_LOOP,this->onUpdate_dyn(),null(),null(),null());
HXLINE(  52)		::haxe::Log_obj::trace(HX_("[CLIENT] Connected To Server",a8,08,59,61),::hx::SourceInfo(HX_("src/client/ClientMain.hx",41,9f,af,12),52,HX_("client.ClientMain",87,8d,87,a9),HX_("onConnect",8b,f4,2a,ed)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClientMain_obj,onConnect,(void))

void ClientMain_obj::sendToServer( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_881e57feaa542296_54_sendToServer)
HXLINE(  55)		this->clientSocket->writeObject(data);
HXLINE(  56)		this->clientSocket->flush();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClientMain_obj,sendToServer,(void))

void ClientMain_obj::onUpdate( ::engine::events::GameEvent e){
            	HX_STACKFRAME(&_hx_pos_881e57feaa542296_58_onUpdate)
HXLINE(  60)		 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(0));
HXDLIN(  60)		 ::Dynamic obj = this1;
HXLINE(  61)		{
HXLINE(  61)			 ::Dynamic this2 = obj;
HXDLIN(  61)			if (::hx::IsNotNull( this2 )) {
HXLINE(  61)				::Reflect_obj::setProperty(this2,HX_("command",4b,71,6d,81),HX_("SETUP",5d,e6,1d,f8));
            			}
            		}
HXLINE(  62)		{
HXLINE(  62)			 ::Dynamic value = this->udp->get_localAddress();
HXDLIN(  62)			{
HXLINE(  62)				 ::Dynamic this3 = obj;
HXDLIN(  62)				if (::hx::IsNotNull( this3 )) {
HXLINE(  62)					::Reflect_obj::setProperty(this3,HX_("IP",e7,3f,00,00),value);
            				}
            			}
            		}
HXLINE(  63)		{
HXLINE(  63)			 ::Dynamic value1 = this->udp->get_localPort();
HXDLIN(  63)			{
HXLINE(  63)				 ::Dynamic this4 = obj;
HXDLIN(  63)				if (::hx::IsNotNull( this4 )) {
HXLINE(  63)					::Reflect_obj::setProperty(this4,HX_("PORT",81,4b,1d,35),value1);
            				}
            			}
            		}
HXLINE(  64)		{
HXLINE(  64)			 ::Dynamic value2 = this->localPlayerInfo;
HXDLIN(  64)			{
HXLINE(  64)				 ::Dynamic this5 = obj;
HXDLIN(  64)				if (::hx::IsNotNull( this5 )) {
HXLINE(  64)					::Reflect_obj::setProperty(this5,HX_("playerInfomation",d7,f8,13,15),value2);
            				}
            			}
            		}
HXLINE(  65)		this->sendToServer(obj);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClientMain_obj,onUpdate,(void))

void ClientMain_obj::onClose( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_881e57feaa542296_68_onClose)
HXDLIN(  68)		::haxe::Log_obj::trace(HX_("[CLIENT] Disconnected To Server",8c,0c,83,38),::hx::SourceInfo(HX_("src/client/ClientMain.hx",41,9f,af,12),68,HX_("client.ClientMain",87,8d,87,a9),HX_("onClose",19,b6,a0,de)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClientMain_obj,onClose,(void))


::hx::ObjectPtr< ClientMain_obj > ClientMain_obj::__new() {
	::hx::ObjectPtr< ClientMain_obj > __this = new ClientMain_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ClientMain_obj > ClientMain_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ClientMain_obj *__this = (ClientMain_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ClientMain_obj), true, "client.ClientMain"));
	*(void **)__this = ClientMain_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ClientMain_obj::ClientMain_obj()
{
}

void ClientMain_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClientMain);
	HX_MARK_MEMBER_NAME(clientSocket,"clientSocket");
	HX_MARK_MEMBER_NAME(udp,"udp");
	HX_MARK_MEMBER_NAME(localInput,"localInput");
	HX_MARK_MEMBER_NAME(localPlayerInfo,"localPlayerInfo");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ClientMain_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clientSocket,"clientSocket");
	HX_VISIT_MEMBER_NAME(udp,"udp");
	HX_VISIT_MEMBER_NAME(localInput,"localInput");
	HX_VISIT_MEMBER_NAME(localPlayerInfo,"localPlayerInfo");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ClientMain_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"udp") ) { return ::hx::Val( udp ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClose") ) { return ::hx::Val( onClose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return ::hx::Val( onUpdate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConnect") ) { return ::hx::Val( onConnect_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"localInput") ) { return ::hx::Val( localInput ); }
		if (HX_FIELD_EQ(inName,"joinServer") ) { return ::hx::Val( joinServer_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clientSocket") ) { return ::hx::Val( clientSocket ); }
		if (HX_FIELD_EQ(inName,"sendToServer") ) { return ::hx::Val( sendToServer_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onInputUpdate") ) { return ::hx::Val( onInputUpdate_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"localPlayerInfo") ) { return ::hx::Val( localPlayerInfo ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ClientMain_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"udp") ) { udp=inValue.Cast<  ::openfl::net::DatagramSocket >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"localInput") ) { localInput=inValue.Cast<  ::client::ClientInput >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clientSocket") ) { clientSocket=inValue.Cast<  ::openfl::net::Socket >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"localPlayerInfo") ) { localPlayerInfo=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClientMain_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("clientSocket",5e,14,e8,a8));
	outFields->push(HX_("udp",41,1f,59,00));
	outFields->push(HX_("localInput",9f,66,11,f6));
	outFields->push(HX_("localPlayerInfo",ba,f5,4a,23));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ClientMain_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::net::Socket */ ,(int)offsetof(ClientMain_obj,clientSocket),HX_("clientSocket",5e,14,e8,a8)},
	{::hx::fsObject /*  ::openfl::net::DatagramSocket */ ,(int)offsetof(ClientMain_obj,udp),HX_("udp",41,1f,59,00)},
	{::hx::fsObject /*  ::client::ClientInput */ ,(int)offsetof(ClientMain_obj,localInput),HX_("localInput",9f,66,11,f6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ClientMain_obj,localPlayerInfo),HX_("localPlayerInfo",ba,f5,4a,23)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ClientMain_obj_sStaticStorageInfo = 0;
#endif

static ::String ClientMain_obj_sMemberFields[] = {
	HX_("clientSocket",5e,14,e8,a8),
	HX_("udp",41,1f,59,00),
	HX_("localInput",9f,66,11,f6),
	HX_("localPlayerInfo",ba,f5,4a,23),
	HX_("joinServer",4d,be,37,0c),
	HX_("onInputUpdate",d4,7e,23,df),
	HX_("onConnect",8b,f4,2a,ed),
	HX_("sendToServer",06,c4,32,d6),
	HX_("onUpdate",88,7c,b2,66),
	HX_("onClose",19,b6,a0,de),
	::String(null()) };

::hx::Class ClientMain_obj::__mClass;

void ClientMain_obj::__register()
{
	ClientMain_obj _hx_dummy;
	ClientMain_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("client.ClientMain",87,8d,87,a9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ClientMain_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ClientMain_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClientMain_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClientMain_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace client
