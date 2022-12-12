#include <hxcpp.h>

#ifndef INCLUDED_client_ClientMain
#include <client/ClientMain.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_HaxeThread
#include <sys/thread/_Thread/HaxeThread.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_881e57feaa542296_11_new,"client.ClientMain","new",0xd2a5fdf9,"client.ClientMain.new","client/ClientMain.hx",11,0x13faf6f6)
HX_LOCAL_STACK_FRAME(_hx_pos_881e57feaa542296_22_joinServer,"client.ClientMain","joinServer",0x155b65d4,"client.ClientMain.joinServer","client/ClientMain.hx",22,0x13faf6f6)
HX_LOCAL_STACK_FRAME(_hx_pos_881e57feaa542296_34_threadListen,"client.ClientMain","threadListen",0x6590c1f8,"client.ClientMain.threadListen","client/ClientMain.hx",34,0x13faf6f6)
namespace client{

void ClientMain_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_881e57feaa542296_11_new)
HXLINE(  16)		this->maxConnections = 8;
HXLINE(  15)		this->Port = 9000;
HXLINE(  14)		this->IP = HX_("127.0.0.1",fd,bc,5e,a1);
HXLINE(  20)		super::__construct();
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

void ClientMain_obj::joinServer(){
            	HX_GC_STACKFRAME(&_hx_pos_881e57feaa542296_22_joinServer)
HXLINE(  23)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  24)			this->socket =  ::sys::net::Socket_obj::__alloc( HX_CTX );
HXLINE(  25)			 ::sys::net::Socket _hx_tmp = this->socket;
HXDLIN(  25)			_hx_tmp->connect( ::sys::net::Host_obj::__alloc( HX_CTX ,this->IP),this->Port);
HXLINE(  26)			::haxe::Log_obj::trace(HX_("[Client] Connected.",4e,b2,7c,80),::hx::SourceInfo(HX_("src/client/ClientMain.hx",41,9f,af,12),26,HX_("client.ClientMain",87,8d,87,a9),HX_("joinServer",4d,be,37,0c)));
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  27)				{
HXLINE(  27)					null();
            				}
HXLINE(  28)				::haxe::Log_obj::trace(HX_("[Client] Failed To Connect.",6f,af,8b,ef),::hx::SourceInfo(HX_("src/client/ClientMain.hx",41,9f,af,12),28,HX_("client.ClientMain",87,8d,87,a9),HX_("joinServer",4d,be,37,0c)));
HXLINE(  29)				return;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  31)		::sys::thread::_Thread::HaxeThread_obj::create(this->threadListen_dyn(),false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClientMain_obj,joinServer,(void))

void ClientMain_obj::threadListen(){
            	HX_STACKFRAME(&_hx_pos_881e57feaa542296_34_threadListen)
HXDLIN(  34)		while(true){
HXLINE(  35)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  36)				::String text = this->socket->input->readLine();
HXLINE(  37)				::haxe::Log_obj::trace(((HX_("[CLIENT] ",89,83,e5,6a) + text) + HX_("\n",0a,00,00,00)),::hx::SourceInfo(HX_("src/client/ClientMain.hx",41,9f,af,12),37,HX_("client.ClientMain",87,8d,87,a9),HX_("threadListen",b1,ea,8e,0e)));
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(  38)					{
HXLINE(  38)						null();
            					}
HXLINE(  39)					::haxe::Log_obj::trace((HX_("[CLIENT] ",89,83,e5,6a) + HX_("Connection lost.\n",a2,6a,00,25)),::hx::SourceInfo(HX_("src/client/ClientMain.hx",41,9f,af,12),39,HX_("client.ClientMain",87,8d,87,a9),HX_("threadListen",b1,ea,8e,0e)));
HXLINE(  40)					return;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClientMain_obj,threadListen,(void))


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
	HX_MARK_MEMBER_NAME(socket,"socket");
	HX_MARK_MEMBER_NAME(IP,"IP");
	HX_MARK_MEMBER_NAME(Port,"Port");
	HX_MARK_MEMBER_NAME(maxConnections,"maxConnections");
	HX_MARK_MEMBER_NAME(localPlayerInfo,"localPlayerInfo");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ClientMain_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(socket,"socket");
	HX_VISIT_MEMBER_NAME(IP,"IP");
	HX_VISIT_MEMBER_NAME(Port,"Port");
	HX_VISIT_MEMBER_NAME(maxConnections,"maxConnections");
	HX_VISIT_MEMBER_NAME(localPlayerInfo,"localPlayerInfo");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ClientMain_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"IP") ) { return ::hx::Val( IP ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"Port") ) { return ::hx::Val( Port ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"socket") ) { return ::hx::Val( socket ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"joinServer") ) { return ::hx::Val( joinServer_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"threadListen") ) { return ::hx::Val( threadListen_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxConnections") ) { return ::hx::Val( maxConnections ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"localPlayerInfo") ) { return ::hx::Val( localPlayerInfo ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ClientMain_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"IP") ) { IP=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"Port") ) { Port=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"socket") ) { socket=inValue.Cast<  ::sys::net::Socket >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxConnections") ) { maxConnections=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"localPlayerInfo") ) { localPlayerInfo=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClientMain_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("socket",b3,8b,46,26));
	outFields->push(HX_("IP",e7,3f,00,00));
	outFields->push(HX_("Port",a1,af,35,35));
	outFields->push(HX_("maxConnections",51,82,e3,82));
	outFields->push(HX_("localPlayerInfo",ba,f5,4a,23));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ClientMain_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::sys::net::Socket */ ,(int)offsetof(ClientMain_obj,socket),HX_("socket",b3,8b,46,26)},
	{::hx::fsString,(int)offsetof(ClientMain_obj,IP),HX_("IP",e7,3f,00,00)},
	{::hx::fsInt,(int)offsetof(ClientMain_obj,Port),HX_("Port",a1,af,35,35)},
	{::hx::fsInt,(int)offsetof(ClientMain_obj,maxConnections),HX_("maxConnections",51,82,e3,82)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ClientMain_obj,localPlayerInfo),HX_("localPlayerInfo",ba,f5,4a,23)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ClientMain_obj_sStaticStorageInfo = 0;
#endif

static ::String ClientMain_obj_sMemberFields[] = {
	HX_("socket",b3,8b,46,26),
	HX_("IP",e7,3f,00,00),
	HX_("Port",a1,af,35,35),
	HX_("maxConnections",51,82,e3,82),
	HX_("localPlayerInfo",ba,f5,4a,23),
	HX_("joinServer",4d,be,37,0c),
	HX_("threadListen",b1,ea,8e,0e),
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
