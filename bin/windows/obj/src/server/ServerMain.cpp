#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_server_ClientInfo
#include <server/ClientInfo.h>
#endif
#ifndef INCLUDED_server_ServerMain
#include <server/ServerMain.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_04eef72e8cad9d28_10_new,"server.ServerMain","new",0x16527cf9,"server.ServerMain.new","server/ServerMain.hx",10,0x83a357f6)
HX_LOCAL_STACK_FRAME(_hx_pos_04eef72e8cad9d28_22_createServer,"server.ServerMain","createServer",0xbfda0326,"server.ServerMain.createServer","server/ServerMain.hx",22,0x83a357f6)
HX_LOCAL_STACK_FRAME(_hx_pos_04eef72e8cad9d28_40_threadAccept,"server.ServerMain","threadAccept",0x58e92db9,"server.ServerMain.threadAccept","server/ServerMain.hx",40,0x83a357f6)
HX_LOCAL_STACK_FRAME(_hx_pos_04eef72e8cad9d28_52_getThreadListen,"server.ServerMain","getThreadListen",0x50d4ee80,"server.ServerMain.getThreadListen","server/ServerMain.hx",52,0x83a357f6)
HX_LOCAL_STACK_FRAME(_hx_pos_04eef72e8cad9d28_51_getThreadListen,"server.ServerMain","getThreadListen",0x50d4ee80,"server.ServerMain.getThreadListen","server/ServerMain.hx",51,0x83a357f6)
namespace server{

void ServerMain_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_04eef72e8cad9d28_10_new)
HXLINE(  15)		this->maxConnections = 8;
HXLINE(  14)		this->Port = 9000;
HXLINE(  13)		this->IP = HX_("127.0.0.1",fd,bc,5e,a1);
HXLINE(  19)		super::__construct();
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

void ServerMain_obj::createServer(){
            	HX_GC_STACKFRAME(&_hx_pos_04eef72e8cad9d28_22_createServer)
HXLINE(  23)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  25)			this->socket =  ::sys::net::Socket_obj::__alloc( HX_CTX );
HXLINE(  26)			 ::sys::net::Socket _hx_tmp = this->socket;
HXDLIN(  26)			_hx_tmp->bind( ::sys::net::Host_obj::__alloc( HX_CTX ,this->IP),this->Port);
HXLINE(  27)			this->socket->listen(this->maxConnections);
HXLINE(  28)			::haxe::Log_obj::trace(HX_("[SERVER] Created Server.",b2,c8,d0,f6),::hx::SourceInfo(HX_("src/server/ServerMain.hx",41,00,58,82),28,HX_("server.ServerMain",87,8c,48,df),HX_("createServer",df,8a,8c,90)));
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  30)				{
HXLINE(  30)					null();
            				}
HXLINE(  32)				::haxe::Log_obj::trace(HX_("[SERVER] Could not bind to port.\n",0c,f5,f8,f6),::hx::SourceInfo(HX_("src/server/ServerMain.hx",41,00,58,82),32,HX_("server.ServerMain",87,8c,48,df),HX_("createServer",df,8a,8c,90)));
HXLINE(  33)				return;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  35)		this->clients = ::Array_obj< ::Dynamic>::__new();
HXLINE(  36)		::sys::thread::_Thread::HaxeThread_obj::create(this->threadAccept_dyn(),false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ServerMain_obj,createServer,(void))

void ServerMain_obj::threadAccept(){
            	HX_GC_STACKFRAME(&_hx_pos_04eef72e8cad9d28_40_threadAccept)
HXDLIN(  40)		while(true){
HXLINE(  43)			 ::sys::net::Socket sk = this->socket->accept();
HXLINE(  44)			if (::hx::IsNotNull( sk )) {
HXLINE(  46)				 ::server::ClientInfo cl =  ::server::ClientInfo_obj::__alloc( HX_CTX ,this->socket,sk);
HXLINE(  47)				::sys::thread::_Thread::HaxeThread_obj::create(this->getThreadListen(cl),false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ServerMain_obj,threadAccept,(void))

 ::Dynamic ServerMain_obj::getThreadListen( ::server::ClientInfo cl){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::server::ServerMain,_gthis, ::server::ClientInfo,cl) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_04eef72e8cad9d28_52_getThreadListen)
HXLINE(  53)			_gthis->clients->push(cl);
HXLINE(  54)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  54)			::String _hx_tmp1 = (::Std_obj::string(cl) + HX_(" connected.\n",05,c3,79,b0));
HXDLIN(  54)			_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("src/server/ServerMain.hx",41,00,58,82),54,HX_("server.ServerMain",87,8c,48,df),HX_("getThreadListen",67,40,79,31)));
HXLINE(  55)			while(cl->active){
HXLINE(  56)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  57)					::String text = cl->socket->input->readLine();
HXLINE(  58)					::haxe::Log_obj::trace(text,::hx::SourceInfo(HX_("src/server/ServerMain.hx",41,00,58,82),58,HX_("server.ServerMain",87,8c,48,df),HX_("getThreadListen",67,40,79,31)));
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE(  59)						{
HXLINE(  59)							null();
            						}
HXLINE(  60)						goto _hx_goto_4;
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            			_hx_goto_4:;
HXLINE(  63)			 ::Dynamic _hx_tmp2 = ::haxe::Log_obj::trace;
HXDLIN(  63)			::String _hx_tmp3 = ((HX_("[CLIENT] ",89,83,e5,6a) + ::Std_obj::string(cl)) + HX_(" timed out.\n",e1,aa,e8,1d));
HXDLIN(  63)			_hx_tmp2(_hx_tmp3,::hx::SourceInfo(HX_("src/server/ServerMain.hx",41,00,58,82),63,HX_("server.ServerMain",87,8c,48,df),HX_("getThreadListen",67,40,79,31)));
HXLINE(  64)			::haxe::Log_obj::trace((cl->name + HX_(" disconnected.\n",b7,50,a6,48)),::hx::SourceInfo(HX_("src/server/ServerMain.hx",41,00,58,82),64,HX_("server.ServerMain",87,8c,48,df),HX_("getThreadListen",67,40,79,31)));
HXLINE(  65)			_gthis->clients->remove(cl);
HXLINE(  66)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  67)				cl->socket->shutdown(true,true);
HXLINE(  68)				cl->socket->close();
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(  69)					{
HXLINE(  69)						null();
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_04eef72e8cad9d28_51_getThreadListen)
HXDLIN(  51)		 ::server::ServerMain _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  52)		return  ::Dynamic(new _hx_Closure_0(_gthis,cl));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ServerMain_obj,getThreadListen,return )


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
	HX_MARK_MEMBER_NAME(socket,"socket");
	HX_MARK_MEMBER_NAME(IP,"IP");
	HX_MARK_MEMBER_NAME(Port,"Port");
	HX_MARK_MEMBER_NAME(maxConnections,"maxConnections");
	HX_MARK_MEMBER_NAME(clients,"clients");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ServerMain_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(socket,"socket");
	HX_VISIT_MEMBER_NAME(IP,"IP");
	HX_VISIT_MEMBER_NAME(Port,"Port");
	HX_VISIT_MEMBER_NAME(maxConnections,"maxConnections");
	HX_VISIT_MEMBER_NAME(clients,"clients");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ServerMain_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
	case 7:
		if (HX_FIELD_EQ(inName,"clients") ) { return ::hx::Val( clients ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createServer") ) { return ::hx::Val( createServer_dyn() ); }
		if (HX_FIELD_EQ(inName,"threadAccept") ) { return ::hx::Val( threadAccept_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxConnections") ) { return ::hx::Val( maxConnections ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getThreadListen") ) { return ::hx::Val( getThreadListen_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ServerMain_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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
	case 7:
		if (HX_FIELD_EQ(inName,"clients") ) { clients=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxConnections") ) { maxConnections=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ServerMain_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("socket",b3,8b,46,26));
	outFields->push(HX_("IP",e7,3f,00,00));
	outFields->push(HX_("Port",a1,af,35,35));
	outFields->push(HX_("maxConnections",51,82,e3,82));
	outFields->push(HX_("clients",c8,37,81,fb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ServerMain_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::sys::net::Socket */ ,(int)offsetof(ServerMain_obj,socket),HX_("socket",b3,8b,46,26)},
	{::hx::fsString,(int)offsetof(ServerMain_obj,IP),HX_("IP",e7,3f,00,00)},
	{::hx::fsInt,(int)offsetof(ServerMain_obj,Port),HX_("Port",a1,af,35,35)},
	{::hx::fsInt,(int)offsetof(ServerMain_obj,maxConnections),HX_("maxConnections",51,82,e3,82)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ServerMain_obj,clients),HX_("clients",c8,37,81,fb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ServerMain_obj_sStaticStorageInfo = 0;
#endif

static ::String ServerMain_obj_sMemberFields[] = {
	HX_("socket",b3,8b,46,26),
	HX_("IP",e7,3f,00,00),
	HX_("Port",a1,af,35,35),
	HX_("maxConnections",51,82,e3,82),
	HX_("clients",c8,37,81,fb),
	HX_("createServer",df,8a,8c,90),
	HX_("threadAccept",72,b5,9b,29),
	HX_("getThreadListen",67,40,79,31),
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
