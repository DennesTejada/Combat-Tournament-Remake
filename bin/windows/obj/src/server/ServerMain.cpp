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
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
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
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
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
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_openfl_events_SecurityErrorEvent
#include <openfl/events/SecurityErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ServerSocketConnectEvent
#include <openfl/events/ServerSocketConnectEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_net_DatagramSocket
#include <openfl/net/DatagramSocket.h>
#endif
#ifndef INCLUDED_openfl_net_ServerSocket
#include <openfl/net/ServerSocket.h>
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
#ifndef INCLUDED_openfl_utils__Object_Object_Impl_
#include <openfl/utils/_Object/Object_Impl_.h>
#endif
#ifndef INCLUDED_server_ServerMain
#include <server/ServerMain.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_04eef72e8cad9d28_17_new,"server.ServerMain","new",0x16527cf9,"server.ServerMain.new","server/ServerMain.hx",17,0x83a357f6)
HX_LOCAL_STACK_FRAME(_hx_pos_04eef72e8cad9d28_26_createServer,"server.ServerMain","createServer",0xbfda0326,"server.ServerMain.createServer","server/ServerMain.hx",26,0x83a357f6)
HX_LOCAL_STACK_FRAME(_hx_pos_04eef72e8cad9d28_42_onClientConnect,"server.ServerMain","onClientConnect",0x87165e59,"server.ServerMain.onClientConnect","server/ServerMain.hx",42,0x83a357f6)
HX_LOCAL_STACK_FRAME(_hx_pos_04eef72e8cad9d28_64_ioErrorHandler,"server.ServerMain","ioErrorHandler",0x8e76d5ef,"server.ServerMain.ioErrorHandler","server/ServerMain.hx",64,0x83a357f6)
HX_LOCAL_STACK_FRAME(_hx_pos_04eef72e8cad9d28_67_securityErrorHandler,"server.ServerMain","securityErrorHandler",0x1e30b309,"server.ServerMain.securityErrorHandler","server/ServerMain.hx",67,0x83a357f6)
HX_LOCAL_STACK_FRAME(_hx_pos_04eef72e8cad9d28_70_sendToClient,"server.ServerMain","sendToClient",0xa198bbd5,"server.ServerMain.sendToClient","server/ServerMain.hx",70,0x83a357f6)
HX_LOCAL_STACK_FRAME(_hx_pos_04eef72e8cad9d28_74_onClientDisonnect,"server.ServerMain","onClientDisonnect",0x280c5744,"server.ServerMain.onClientDisonnect","server/ServerMain.hx",74,0x83a357f6)
HX_LOCAL_STACK_FRAME(_hx_pos_04eef72e8cad9d28_81_onClientSocketData,"server.ServerMain","onClientSocketData",0xa4a8306e,"server.ServerMain.onClientSocketData","server/ServerMain.hx",81,0x83a357f6)
HX_LOCAL_STACK_FRAME(_hx_pos_04eef72e8cad9d28_92_FindClientByTCP,"server.ServerMain","FindClientByTCP",0xdc94fe7f,"server.ServerMain.FindClientByTCP","server/ServerMain.hx",92,0x83a357f6)
HX_LOCAL_STACK_FRAME(_hx_pos_04eef72e8cad9d28_104_onClose,"server.ServerMain","onClose",0xcfb42332,"server.ServerMain.onClose","server/ServerMain.hx",104,0x83a357f6)
namespace server{

void ServerMain_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_04eef72e8cad9d28_17_new)
HXLINE(  21)		this->clients = ::cpp::VirtualArray_obj::__new();
HXLINE(  24)		super::__construct();
            	}

Dynamic ServerMain_obj::__CreateEmpty() { return new ServerMain_obj; }

void *ServerMain_obj::_hx_vtable = 0;

Dynamic ServerMain_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ServerMain_obj > _hx_result = new ServerMain_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ServerMain_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x07ccb97f) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x07ccb97f;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void ServerMain_obj::createServer(::String __o_IP,::hx::Null< int >  __o_Port){
            		::String IP = __o_IP;
            		if (::hx::IsNull(__o_IP)) IP = HX_("127.0.0.1",fd,bc,5e,a1);
            		int Port = __o_Port.Default(9000);
            	HX_GC_STACKFRAME(&_hx_pos_04eef72e8cad9d28_26_createServer)
HXLINE(  27)		this->serverSocket =  ::openfl::net::ServerSocket_obj::__alloc( HX_CTX );
HXLINE(  28)		this->serverSocket->bind(Port,IP);
HXLINE(  29)		this->serverSocket->addEventListener(HX_("connect",ea,3b,80,15),this->onClientConnect_dyn(),null(),null(),null());
HXLINE(  30)		this->serverSocket->listen(null());
HXLINE(  31)		if (this->serverSocket->listening) {
HXLINE(  32)			::haxe::Log_obj::trace(HX_("[SERVER] CREATED",e7,29,6f,af),::hx::SourceInfo(HX_("src/server/ServerMain.hx",41,00,58,82),32,HX_("server.ServerMain",87,8c,48,df),HX_("createServer",df,8a,8c,90)));
HXLINE(  33)			::Main_obj::instance->createMatch();
HXLINE(  36)			::Global_obj::game->localPlayer = 0;
HXLINE(  37)			::Global_obj::game->isNetGame = true;
            		}
            		else {
HXLINE(  39)			::haxe::Log_obj::trace(HX_("[SERVER] FAILED TO CREATE",df,56,65,2f),::hx::SourceInfo(HX_("src/server/ServerMain.hx",41,00,58,82),39,HX_("server.ServerMain",87,8c,48,df),HX_("createServer",df,8a,8c,90)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ServerMain_obj,createServer,(void))

void ServerMain_obj::onClientConnect( ::openfl::events::ServerSocketConnectEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_04eef72e8cad9d28_42_onClientConnect)
HXLINE(  43)		 ::openfl::net::Socket clientSocket = event->socket;
HXLINE(  44)		clientSocket->addEventListener(HX_("ioError",02,fe,41,76),this->ioErrorHandler_dyn(),null(),null(),null());
HXLINE(  45)		clientSocket->addEventListener(HX_("securityError",e8,28,7c,a2),this->securityErrorHandler_dyn(),null(),null(),null());
HXLINE(  46)		clientSocket->addEventListener(HX_("socketData",7d,63,de,b1),this->onClientSocketData_dyn(),null(),null(),null());
HXLINE(  47)		clientSocket->addEventListener(HX_("close",b8,17,63,48),this->onClientDisonnect_dyn(),null(),null(),null());
HXLINE(  49)		 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(0));
HXDLIN(  49)		 ::Dynamic obj = this1;
HXLINE(  50)		{
HXLINE(  50)			 ::Dynamic this2 = obj;
HXDLIN(  50)			if (::hx::IsNotNull( this2 )) {
HXLINE(  50)				::Reflect_obj::setProperty(this2,HX_("TCP",01,f8,3f,00),clientSocket);
            			}
            		}
HXLINE(  51)		{
HXLINE(  51)			 ::Dynamic value =  ::openfl::net::DatagramSocket_obj::__alloc( HX_CTX );
HXDLIN(  51)			{
HXLINE(  51)				 ::Dynamic this3 = obj;
HXDLIN(  51)				if (::hx::IsNotNull( this3 )) {
HXLINE(  51)					::Reflect_obj::setProperty(this3,HX_("UDP",21,bb,40,00),value);
            				}
            			}
            		}
HXLINE(  52)		this->clients->push(obj);
HXLINE(  61)		::haxe::Log_obj::trace(HX_("[SERVER] Client Connected ",cb,e9,e0,5a),::hx::SourceInfo(HX_("src/server/ServerMain.hx",41,00,58,82),61,HX_("server.ServerMain",87,8c,48,df),HX_("onClientConnect",40,b0,ba,67)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ServerMain_obj,onClientConnect,(void))

void ServerMain_obj::ioErrorHandler( ::openfl::events::IOErrorEvent event){
            	HX_STACKFRAME(&_hx_pos_04eef72e8cad9d28_64_ioErrorHandler)
HXDLIN(  64)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  64)		::String _hx_tmp1 = (HX_("ioErrorHandler: ",8e,fa,6e,e9) + ::Std_obj::string(event));
HXDLIN(  64)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("src/server/ServerMain.hx",41,00,58,82),64,HX_("server.ServerMain",87,8c,48,df),HX_("ioErrorHandler",e8,7d,a5,d6)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ServerMain_obj,ioErrorHandler,(void))

void ServerMain_obj::securityErrorHandler( ::openfl::events::SecurityErrorEvent event){
            	HX_STACKFRAME(&_hx_pos_04eef72e8cad9d28_67_securityErrorHandler)
HXDLIN(  67)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  67)		::String _hx_tmp1 = (HX_("securityErrorHandler: ",e8,42,87,60) + ::Std_obj::string(event));
HXDLIN(  67)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("src/server/ServerMain.hx",41,00,58,82),67,HX_("server.ServerMain",87,8c,48,df),HX_("securityErrorHandler",c2,1b,b7,af)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ServerMain_obj,securityErrorHandler,(void))

void ServerMain_obj::sendToClient( ::openfl::net::Socket client, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_04eef72e8cad9d28_70_sendToClient)
HXLINE(  71)		client->writeObject(data);
HXLINE(  72)		client->flush();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ServerMain_obj,sendToClient,(void))

void ServerMain_obj::onClientDisonnect( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_04eef72e8cad9d28_74_onClientDisonnect)
HXLINE(  75)		 ::openfl::net::Socket clientSocket = ( ( ::openfl::net::Socket)(event->target) );
HXLINE(  79)		::haxe::Log_obj::trace(HX_("[SERVER] Client Disconnected",4f,35,bc,10),::hx::SourceInfo(HX_("src/server/ServerMain.hx",41,00,58,82),79,HX_("server.ServerMain",87,8c,48,df),HX_("onClientDisonnect",eb,30,d6,b7)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ServerMain_obj,onClientDisonnect,(void))

void ServerMain_obj::onClientSocketData( ::openfl::events::ProgressEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_04eef72e8cad9d28_81_onClientSocketData)
HXLINE(  82)		::haxe::Log_obj::trace(HX_("[SERVER] GOT DATA FROM CLIENT",40,2d,54,a3),::hx::SourceInfo(HX_("src/server/ServerMain.hx",41,00,58,82),82,HX_("server.ServerMain",87,8c,48,df),HX_("onClientSocketData",e7,c8,7c,e5)));
HXLINE(  83)		 ::Dynamic clientObj = this->FindClientByTCP(( ( ::openfl::net::Socket)(e->target) ));
HXLINE(  84)		 ::Dynamic obj = ::openfl::utils::_Object::Object_Impl__obj::__get(e->target,HX_("readObject",b5,62,bb,0e))();
HXLINE(  85)		if (::hx::IsEq( obj->__Field(HX_("command",4b,71,6d,81),::hx::paccDynamic),HX_("SETUP",5d,e6,1d,f8) )) {
HXLINE(  86)			::haxe::Log_obj::trace(HX_("[SERVER] UDP Setup",fd,19,bc,96),::hx::SourceInfo(HX_("src/server/ServerMain.hx",41,00,58,82),86,HX_("server.ServerMain",87,8c,48,df),HX_("onClientSocketData",e7,c8,7c,e5)));
HXLINE(  87)			 ::openfl::net::DatagramSocket udpSocket =  ::openfl::net::DatagramSocket_obj::__alloc( HX_CTX );
HXLINE(  88)			udpSocket->bind(obj->__Field(HX_("PORT",81,4b,1d,35),::hx::paccDynamic),( (::String)(obj->__Field(HX_("IP",e7,3f,00,00),::hx::paccDynamic)) ));
HXLINE(  89)			{
HXLINE(  89)				 ::Dynamic this1 = clientObj;
HXDLIN(  89)				if (::hx::IsNotNull( this1 )) {
HXLINE(  89)					::Reflect_obj::setProperty(this1,HX_("UDP",21,bb,40,00),udpSocket);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ServerMain_obj,onClientSocketData,(void))

 ::Dynamic ServerMain_obj::FindClientByTCP( ::openfl::net::Socket clientSocket){
            	HX_STACKFRAME(&_hx_pos_04eef72e8cad9d28_92_FindClientByTCP)
HXLINE(  93)		int i = 0;
HXLINE(  94)		while((i < this->clients->get_length())){
HXLINE(  95)			if (::openfl::utils::_Object::Object_Impl__obj::_hx___eq(::openfl::utils::_Object::Object_Impl__obj::__get(this->clients->__get(i),HX_("TCP",01,f8,3f,00)),clientSocket)) {
HXLINE(  96)				return this->clients->__get(i);
            			}
HXLINE(  98)			i = (i + 1);
            		}
HXLINE( 100)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[SERVER] Could not find client by TCP",13,6e,81,0a)));
HXDLIN( 100)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ServerMain_obj,FindClientByTCP,return )

void ServerMain_obj::onClose( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_04eef72e8cad9d28_104_onClose)
HXDLIN( 104)		::haxe::Log_obj::trace(HX_("[SERVER] Client Disconnected To Server",b7,10,73,87),::hx::SourceInfo(HX_("src/server/ServerMain.hx",41,00,58,82),104,HX_("server.ServerMain",87,8c,48,df),HX_("onClose",19,b6,a0,de)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ServerMain_obj,onClose,(void))


::hx::ObjectPtr< ServerMain_obj > ServerMain_obj::__new() {
	::hx::ObjectPtr< ServerMain_obj > __this = new ServerMain_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ServerMain_obj > ServerMain_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ServerMain_obj *__this = (ServerMain_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ServerMain_obj), true, "server.ServerMain"));
	*(void **)__this = ServerMain_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ServerMain_obj::ServerMain_obj()
{
}

void ServerMain_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ServerMain);
	HX_MARK_MEMBER_NAME(serverSocket,"serverSocket");
	HX_MARK_MEMBER_NAME(clients,"clients");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ServerMain_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(serverSocket,"serverSocket");
	HX_VISIT_MEMBER_NAME(clients,"clients");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ServerMain_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"clients") ) { return ::hx::Val( clients ); }
		if (HX_FIELD_EQ(inName,"onClose") ) { return ::hx::Val( onClose_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"serverSocket") ) { return ::hx::Val( serverSocket ); }
		if (HX_FIELD_EQ(inName,"createServer") ) { return ::hx::Val( createServer_dyn() ); }
		if (HX_FIELD_EQ(inName,"sendToClient") ) { return ::hx::Val( sendToClient_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ioErrorHandler") ) { return ::hx::Val( ioErrorHandler_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onClientConnect") ) { return ::hx::Val( onClientConnect_dyn() ); }
		if (HX_FIELD_EQ(inName,"FindClientByTCP") ) { return ::hx::Val( FindClientByTCP_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onClientDisonnect") ) { return ::hx::Val( onClientDisonnect_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onClientSocketData") ) { return ::hx::Val( onClientSocketData_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"securityErrorHandler") ) { return ::hx::Val( securityErrorHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ServerMain_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"clients") ) { clients=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"serverSocket") ) { serverSocket=inValue.Cast<  ::openfl::net::ServerSocket >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ServerMain_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("serverSocket",d6,3e,7f,ad));
	outFields->push(HX_("clients",c8,37,81,fb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ServerMain_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::net::ServerSocket */ ,(int)offsetof(ServerMain_obj,serverSocket),HX_("serverSocket",d6,3e,7f,ad)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(ServerMain_obj,clients),HX_("clients",c8,37,81,fb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ServerMain_obj_sStaticStorageInfo = 0;
#endif

static ::String ServerMain_obj_sMemberFields[] = {
	HX_("serverSocket",d6,3e,7f,ad),
	HX_("clients",c8,37,81,fb),
	HX_("createServer",df,8a,8c,90),
	HX_("onClientConnect",40,b0,ba,67),
	HX_("ioErrorHandler",e8,7d,a5,d6),
	HX_("securityErrorHandler",c2,1b,b7,af),
	HX_("sendToClient",8e,43,4b,72),
	HX_("onClientDisonnect",eb,30,d6,b7),
	HX_("onClientSocketData",e7,c8,7c,e5),
	HX_("FindClientByTCP",66,50,39,bd),
	HX_("onClose",19,b6,a0,de),
	::String(null()) };

::hx::Class ServerMain_obj::__mClass;

void ServerMain_obj::__register()
{
	ServerMain_obj _hx_dummy;
	ServerMain_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("server.ServerMain",87,8c,48,df);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ServerMain_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ServerMain_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ServerMain_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ServerMain_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace server
