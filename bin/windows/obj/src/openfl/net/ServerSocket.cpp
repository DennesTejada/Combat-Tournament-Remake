#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IOError
#include <openfl/errors/IOError.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
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
#ifndef INCLUDED_openfl_events_ServerSocketConnectEvent
#include <openfl/events/ServerSocketConnectEvent.h>
#endif
#ifndef INCLUDED_openfl_net_ServerSocket
#include <openfl/net/ServerSocket.h>
#endif
#ifndef INCLUDED_openfl_net_Socket
#include <openfl/net/Socket.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4348ad009ec08cf0_95_new,"openfl.net.ServerSocket","new",0xd9718fb7,"openfl.net.ServerSocket.new","openfl/net/ServerSocket.hx",95,0xb3b8e157)
HX_LOCAL_STACK_FRAME(_hx_pos_4348ad009ec08cf0_132_bind,"openfl.net.ServerSocket","bind",0x6200a286,"openfl.net.ServerSocket.bind","openfl/net/ServerSocket.hx",132,0xb3b8e157)
HX_LOCAL_STACK_FRAME(_hx_pos_4348ad009ec08cf0_165_close,"openfl.net.ServerSocket","close",0xf3f09acf,"openfl.net.ServerSocket.close","openfl/net/ServerSocket.hx",165,0xb3b8e157)
HX_LOCAL_STACK_FRAME(_hx_pos_4348ad009ec08cf0_204_listen,"openfl.net.ServerSocket","listen",0x603ef950,"openfl.net.ServerSocket.listen","openfl/net/ServerSocket.hx",204,0xb3b8e157)
HX_LOCAL_STACK_FRAME(_hx_pos_4348ad009ec08cf0_218___fromSocket,"openfl.net.ServerSocket","__fromSocket",0x261f29a6,"openfl.net.ServerSocket.__fromSocket","openfl/net/ServerSocket.hx",218,0xb3b8e157)
HX_LOCAL_STACK_FRAME(_hx_pos_4348ad009ec08cf0_242_this_onEnterFrame,"openfl.net.ServerSocket","this_onEnterFrame",0x9db0594c,"openfl.net.ServerSocket.this_onEnterFrame","openfl/net/ServerSocket.hx",242,0xb3b8e157)
HX_LOCAL_STACK_FRAME(_hx_pos_4348ad009ec08cf0_267_addEventListener,"openfl.net.ServerSocket","addEventListener",0x64424216,"openfl.net.ServerSocket.addEventListener","openfl/net/ServerSocket.hx",267,0xb3b8e157)
HX_LOCAL_STACK_FRAME(_hx_pos_4348ad009ec08cf0_277_removeEventListener,"openfl.net.ServerSocket","removeEventListener",0x631da521,"openfl.net.ServerSocket.removeEventListener","openfl/net/ServerSocket.hx",277,0xb3b8e157)
HX_LOCAL_STACK_FRAME(_hx_pos_4348ad009ec08cf0_291_get_isSupported,"openfl.net.ServerSocket","get_isSupported",0x97171a52,"openfl.net.ServerSocket.get_isSupported","openfl/net/ServerSocket.hx",291,0xb3b8e157)
HX_LOCAL_STACK_FRAME(_hx_pos_4348ad009ec08cf0_68_boot,"openfl.net.ServerSocket","boot",0x620530fb,"openfl.net.ServerSocket.boot","openfl/net/ServerSocket.hx",68,0xb3b8e157)
namespace openfl{
namespace net{

void ServerSocket_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_4348ad009ec08cf0_95_new)
HXLINE(  96)		super::__construct(null());
HXLINE(  98)		this->_hx___serverSocket =  ::sys::net::Socket_obj::__alloc( HX_CTX );
HXLINE(  99)		this->_hx___serverSocket->setBlocking(false);
HXLINE( 100)		this->_hx___serverSocket->setFastSend(true);
HXLINE( 101)		this->_hx___closed = false;
HXLINE( 102)		this->bound = false;
HXLINE( 103)		this->listening = false;
            	}

Dynamic ServerSocket_obj::__CreateEmpty() { return new ServerSocket_obj; }

void *ServerSocket_obj::_hx_vtable = 0;

Dynamic ServerSocket_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ServerSocket_obj > _hx_result = new ServerSocket_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ServerSocket_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x1f3a77c3;
	}
}

void ServerSocket_obj::bind(::hx::Null< int >  __o_localPort,::String __o_localAddress){
            		int localPort = __o_localPort.Default(0);
            		::String localAddress = __o_localAddress;
            		if (::hx::IsNull(__o_localAddress)) localAddress = HX_("0.0.0.0",76,1a,39,f2);
            	HX_GC_STACKFRAME(&_hx_pos_4348ad009ec08cf0_132_bind)
HXLINE( 133)		bool _hx_tmp;
HXDLIN( 133)		if ((localPort <= 65535)) {
HXLINE( 133)			_hx_tmp = (localPort < 0);
            		}
            		else {
HXLINE( 133)			_hx_tmp = true;
            		}
HXDLIN( 133)		if (_hx_tmp) {
HXLINE( 135)			HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,HX_("Invalid socket port number specified.",5a,8e,7c,a7)));
            		}
HXLINE( 137)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 139)			this->localAddress = localAddress;
HXLINE( 140)			this->localPort = localPort;
HXLINE( 141)			 ::sys::net::Host host =  ::sys::net::Host_obj::__alloc( HX_CTX ,localAddress);
HXLINE( 142)			this->_hx___serverSocket->bind(host,localPort);
HXLINE( 143)			this->bound = true;
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 145)				{
HXLINE( 145)					null();
            				}
HXDLIN( 145)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 147)				 ::Dynamic _hx_switch_0 = e;
            				if (  (_hx_switch_0==HX_("Bind failed",a0,21,00,2e)) ){
HXLINE( 150)					HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
HXDLIN( 150)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==HX_("Unresolved host",77,5e,1e,d3)) ){
HXLINE( 152)					HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("One of the parameters is invalid",59,8f,fd,cd)));
HXDLIN( 152)					goto _hx_goto_1;
            				}
            				_hx_goto_1:;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ServerSocket_obj,bind,(void))

void ServerSocket_obj::close(){
            	HX_GC_STACKFRAME(&_hx_pos_4348ad009ec08cf0_165_close)
HXLINE( 166)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 168)			this->_hx___serverSocket->close();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 170)				{
HXLINE( 170)					null();
            				}
HXLINE( 172)				HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27),null()));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 174)		this->listening = false;
HXLINE( 175)		this->bound = false;
HXLINE( 176)		this->_hx___closed = true;
HXLINE( 177)		::openfl::Lib_obj::get_current()->removeEventListener(HX_("enterFrame",f5,03,50,02),this->this_onEnterFrame_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ServerSocket_obj,close,(void))

void ServerSocket_obj::listen(::hx::Null< int >  __o_backlog){
            		int backlog = __o_backlog.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_4348ad009ec08cf0_204_listen)
HXLINE( 205)		if (this->_hx___closed) {
HXLINE( 207)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 209)		if ((backlog < 0)) {
HXLINE( 211)			HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,HX_("The supplied index is out of bounds.",17,96,1b,51)));
            		}
HXLINE( 213)		this->_hx___serverSocket->listen(backlog);
HXLINE( 214)		this->listening = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ServerSocket_obj,listen,(void))

 ::openfl::net::Socket ServerSocket_obj::_hx___fromSocket( ::sys::net::Socket socket){
            	HX_GC_STACKFRAME(&_hx_pos_4348ad009ec08cf0_218___fromSocket)
HXLINE( 219)		socket->setFastSend(true);
HXLINE( 220)		socket->setBlocking(false);
HXLINE( 222)		 ::openfl::net::Socket oflSocket =  ::openfl::net::Socket_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 223)		oflSocket->_hx___socket = socket;
HXLINE( 224)		oflSocket->_hx___connected = true;
HXLINE( 225)		oflSocket->_hx___timestamp = ::Sys_obj::time();
HXLINE( 227)		oflSocket->_hx___host = ( ( ::sys::net::Host)(socket->peer()->__Field(HX_("host",68,cf,12,45),::hx::paccDynamic)) )->host;
HXLINE( 228)		oflSocket->_hx___port = ( (int)(socket->peer()->__Field(HX_("port",81,83,5c,4a),::hx::paccDynamic)) );
HXLINE( 230)		 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN( 230)		oflSocket->_hx___output = this1;
HXLINE( 231)		oflSocket->_hx___output->_hx___endian = oflSocket->_hx___endian;
HXLINE( 233)		 ::openfl::utils::ByteArrayData this2 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN( 233)		oflSocket->_hx___input = this2;
HXLINE( 234)		oflSocket->_hx___input->_hx___endian = oflSocket->_hx___endian;
HXLINE( 236)		::openfl::Lib_obj::get_current()->addEventListener(HX_("enterFrame",f5,03,50,02),oflSocket->this_onEnterFrame_dyn(),null(),null(),null());
HXLINE( 238)		return oflSocket;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ServerSocket_obj,_hx___fromSocket,return )

void ServerSocket_obj::this_onEnterFrame( ::openfl::events::Event e){
            	HX_GC_STACKFRAME(&_hx_pos_4348ad009ec08cf0_242_this_onEnterFrame)
HXLINE( 243)		 ::sys::net::Socket sysSocket = null();
HXLINE( 245)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 247)			sysSocket = this->_hx___serverSocket->accept();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 249)				{
HXLINE( 249)					null();
            				}
HXLINE( 245)				if (::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::haxe::io::Error >())) {
HXLINE( 251)					this->close();
HXLINE( 252)					this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("close",b8,17,63,48),null(),null()));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 259)		if (::hx::IsNotNull( sysSocket )) {
HXLINE( 261)			this->dispatchEvent( ::openfl::events::ServerSocketConnectEvent_obj::__alloc( HX_CTX ,HX_("connect",ea,3b,80,15),false,false,this->_hx___fromSocket(sysSocket)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ServerSocket_obj,this_onEnterFrame,(void))

void ServerSocket_obj::addEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  __o_useCapture,::hx::Null< int >  __o_priority,::hx::Null< bool >  __o_useWeakReference){
            		bool useCapture = __o_useCapture.Default(false);
            		int priority = __o_priority.Default(0);
            		bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_STACKFRAME(&_hx_pos_4348ad009ec08cf0_267_addEventListener)
HXLINE( 268)		::String type = _tmp_type;
HXDLIN( 268)		 ::Dynamic listener = _tmp_listener;
HXDLIN( 268)		this->super::addEventListener(type,listener,useCapture,priority,useWeakReference);
HXLINE( 270)		if ((type == HX_("connect",ea,3b,80,15))) {
HXLINE( 272)			::openfl::Lib_obj::get_current()->addEventListener(HX_("enterFrame",f5,03,50,02),this->this_onEnterFrame_dyn(),null(),null(),null());
            		}
            	}


void ServerSocket_obj::removeEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  __o_useCapture){
            		bool useCapture = __o_useCapture.Default(false);
            	HX_STACKFRAME(&_hx_pos_4348ad009ec08cf0_277_removeEventListener)
HXLINE( 278)		::String type = _tmp_type;
HXDLIN( 278)		 ::Dynamic listener = _tmp_listener;
HXDLIN( 278)		this->super::removeEventListener(type,listener,useCapture);
HXLINE( 280)		if ((type == HX_("connect",ea,3b,80,15))) {
HXLINE( 282)			::openfl::Lib_obj::get_current()->removeEventListener(HX_("enterFrame",f5,03,50,02),this->this_onEnterFrame_dyn(),null());
            		}
            	}


bool ServerSocket_obj::get_isSupported(){
            	HX_STACKFRAME(&_hx_pos_4348ad009ec08cf0_291_get_isSupported)
HXDLIN( 291)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ServerSocket_obj,get_isSupported,return )

bool ServerSocket_obj::isSupported;


::hx::ObjectPtr< ServerSocket_obj > ServerSocket_obj::__new() {
	::hx::ObjectPtr< ServerSocket_obj > __this = new ServerSocket_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ServerSocket_obj > ServerSocket_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ServerSocket_obj *__this = (ServerSocket_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ServerSocket_obj), true, "openfl.net.ServerSocket"));
	*(void **)__this = ServerSocket_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ServerSocket_obj::ServerSocket_obj()
{
}

void ServerSocket_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ServerSocket);
	HX_MARK_MEMBER_NAME(bound,"bound");
	HX_MARK_MEMBER_NAME(listening,"listening");
	HX_MARK_MEMBER_NAME(localAddress,"localAddress");
	HX_MARK_MEMBER_NAME(localPort,"localPort");
	HX_MARK_MEMBER_NAME(_hx___serverSocket,"__serverSocket");
	HX_MARK_MEMBER_NAME(_hx___closed,"__closed");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ServerSocket_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bound,"bound");
	HX_VISIT_MEMBER_NAME(listening,"listening");
	HX_VISIT_MEMBER_NAME(localAddress,"localAddress");
	HX_VISIT_MEMBER_NAME(localPort,"localPort");
	HX_VISIT_MEMBER_NAME(_hx___serverSocket,"__serverSocket");
	HX_VISIT_MEMBER_NAME(_hx___closed,"__closed");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ServerSocket_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return ::hx::Val( bind_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { return ::hx::Val( bound ); }
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"listen") ) { return ::hx::Val( listen_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__closed") ) { return ::hx::Val( _hx___closed ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listening") ) { return ::hx::Val( listening ); }
		if (HX_FIELD_EQ(inName,"localPort") ) { return ::hx::Val( localPort ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"localAddress") ) { return ::hx::Val( localAddress ); }
		if (HX_FIELD_EQ(inName,"__fromSocket") ) { return ::hx::Val( _hx___fromSocket_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__serverSocket") ) { return ::hx::Val( _hx___serverSocket ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isSupported") ) { return ::hx::Val( get_isSupported_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return ::hx::Val( addEventListener_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"this_onEnterFrame") ) { return ::hx::Val( this_onEnterFrame_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return ::hx::Val( removeEventListener_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ServerSocket_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { outValue = ( isSupported ); return true; }
	}
	return false;
}

::hx::Val ServerSocket_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { bound=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__closed") ) { _hx___closed=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listening") ) { listening=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localPort") ) { localPort=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"localAddress") ) { localAddress=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__serverSocket") ) { _hx___serverSocket=inValue.Cast<  ::sys::net::Socket >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ServerSocket_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { isSupported=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void ServerSocket_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bound",3e,b0,fc,b6));
	outFields->push(HX_("listening",fb,6a,91,f3));
	outFields->push(HX_("localAddress",89,a3,1c,73));
	outFields->push(HX_("localPort",8c,0a,9f,0c));
	outFields->push(HX_("__serverSocket",f6,c1,3f,ce));
	outFields->push(HX_("__closed",cc,14,81,b6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ServerSocket_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(ServerSocket_obj,bound),HX_("bound",3e,b0,fc,b6)},
	{::hx::fsBool,(int)offsetof(ServerSocket_obj,listening),HX_("listening",fb,6a,91,f3)},
	{::hx::fsString,(int)offsetof(ServerSocket_obj,localAddress),HX_("localAddress",89,a3,1c,73)},
	{::hx::fsInt,(int)offsetof(ServerSocket_obj,localPort),HX_("localPort",8c,0a,9f,0c)},
	{::hx::fsObject /*  ::sys::net::Socket */ ,(int)offsetof(ServerSocket_obj,_hx___serverSocket),HX_("__serverSocket",f6,c1,3f,ce)},
	{::hx::fsBool,(int)offsetof(ServerSocket_obj,_hx___closed),HX_("__closed",cc,14,81,b6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ServerSocket_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &ServerSocket_obj::isSupported,HX_("isSupported",e4,7c,8a,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ServerSocket_obj_sMemberFields[] = {
	HX_("bound",3e,b0,fc,b6),
	HX_("listening",fb,6a,91,f3),
	HX_("localAddress",89,a3,1c,73),
	HX_("localPort",8c,0a,9f,0c),
	HX_("__serverSocket",f6,c1,3f,ce),
	HX_("__closed",cc,14,81,b6),
	HX_("bind",bd,f5,16,41),
	HX_("close",b8,17,63,48),
	HX_("listen",47,c8,f9,ef),
	HX_("__fromSocket",dd,0b,1e,a2),
	HX_("this_onEnterFrame",b5,0f,1f,8e),
	HX_("addEventListener",cd,0b,64,f1),
	HX_("removeEventListener",ca,87,75,55),
	HX_("get_isSupported",7b,34,6c,b4),
	::String(null()) };

static void ServerSocket_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ServerSocket_obj::isSupported,"isSupported");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ServerSocket_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ServerSocket_obj::isSupported,"isSupported");
};

#endif

::hx::Class ServerSocket_obj::__mClass;

static ::String ServerSocket_obj_sStaticFields[] = {
	HX_("isSupported",e4,7c,8a,f3),
	::String(null())
};

void ServerSocket_obj::__register()
{
	ServerSocket_obj _hx_dummy;
	ServerSocket_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.net.ServerSocket",45,e8,fb,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ServerSocket_obj::__GetStatic;
	__mClass->mSetStaticField = &ServerSocket_obj::__SetStatic;
	__mClass->mMarkFunc = ServerSocket_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ServerSocket_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ServerSocket_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ServerSocket_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ServerSocket_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ServerSocket_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ServerSocket_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ServerSocket_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4348ad009ec08cf0_68_boot)
HXDLIN(  68)		isSupported = true;
            	}
}

} // end namespace openfl
} // end namespace net
