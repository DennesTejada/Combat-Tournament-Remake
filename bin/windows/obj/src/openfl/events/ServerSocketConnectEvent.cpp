#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_openfl_net_Socket
#include <openfl/net/Socket.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e65adcfd29db6008_31_new,"openfl.events.ServerSocketConnectEvent","new",0x5400886f,"openfl.events.ServerSocketConnectEvent.new","openfl/events/ServerSocketConnectEvent.hx",31,0x5e40dbc1)
HX_LOCAL_STACK_FRAME(_hx_pos_e65adcfd29db6008_43_clone,"openfl.events.ServerSocketConnectEvent","clone",0x6ab92d2c,"openfl.events.ServerSocketConnectEvent.clone","openfl/events/ServerSocketConnectEvent.hx",43,0x5e40dbc1)
HX_LOCAL_STACK_FRAME(_hx_pos_e65adcfd29db6008_54_toString,"openfl.events.ServerSocketConnectEvent","toString",0xbf01823d,"openfl.events.ServerSocketConnectEvent.toString","openfl/events/ServerSocketConnectEvent.hx",54,0x5e40dbc1)
HX_LOCAL_STACK_FRAME(_hx_pos_e65adcfd29db6008_16_boot,"openfl.events.ServerSocketConnectEvent","boot",0x248fd943,"openfl.events.ServerSocketConnectEvent.boot","openfl/events/ServerSocketConnectEvent.hx",16,0x5e40dbc1)
namespace openfl{
namespace events{

void ServerSocketConnectEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::net::Socket socket){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_e65adcfd29db6008_31_new)
HXLINE(  32)		super::__construct(type,bubbles,cancelable);
HXLINE(  33)		this->socket = socket;
            	}

Dynamic ServerSocketConnectEvent_obj::__CreateEmpty() { return new ServerSocketConnectEvent_obj; }

void *ServerSocketConnectEvent_obj::_hx_vtable = 0;

Dynamic ServerSocketConnectEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ServerSocketConnectEvent_obj > _hx_result = new ServerSocketConnectEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ServerSocketConnectEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x3fc3c60f;
	}
}

 ::openfl::events::Event ServerSocketConnectEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_e65adcfd29db6008_43_clone)
HXDLIN(  43)		return  ::openfl::events::ServerSocketConnectEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->socket);
            	}


::String ServerSocketConnectEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_e65adcfd29db6008_54_toString)
HXDLIN(  54)		::String _hx_tmp = ((((HX_("[ServerSocketConnectEvent type=",24,d8,a3,24) + this->type) + HX_(" bubbles=",16,5f,ba,28)) + this->type) + HX_(" cancelable=",89,25,e0,5d));
HXDLIN(  54)		::String _hx_tmp1 = ((_hx_tmp + ::Std_obj::string(this->cancelable)) + HX_(" socket=",0a,f5,c1,7d));
HXDLIN(  54)		return ((_hx_tmp1 + ::Std_obj::string(this->socket)) + HX_("]",5d,00,00,00));
            	}


::String ServerSocketConnectEvent_obj::CONNECT;


::hx::ObjectPtr< ServerSocketConnectEvent_obj > ServerSocketConnectEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::net::Socket socket) {
	::hx::ObjectPtr< ServerSocketConnectEvent_obj > __this = new ServerSocketConnectEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,socket);
	return __this;
}

::hx::ObjectPtr< ServerSocketConnectEvent_obj > ServerSocketConnectEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::net::Socket socket) {
	ServerSocketConnectEvent_obj *__this = (ServerSocketConnectEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ServerSocketConnectEvent_obj), true, "openfl.events.ServerSocketConnectEvent"));
	*(void **)__this = ServerSocketConnectEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,socket);
	return __this;
}

ServerSocketConnectEvent_obj::ServerSocketConnectEvent_obj()
{
}

void ServerSocketConnectEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ServerSocketConnectEvent);
	HX_MARK_MEMBER_NAME(socket,"socket");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ServerSocketConnectEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(socket,"socket");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ServerSocketConnectEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"socket") ) { return ::hx::Val( socket ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ServerSocketConnectEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"socket") ) { socket=inValue.Cast<  ::openfl::net::Socket >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ServerSocketConnectEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("socket",b3,8b,46,26));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ServerSocketConnectEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::net::Socket */ ,(int)offsetof(ServerSocketConnectEvent_obj,socket),HX_("socket",b3,8b,46,26)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ServerSocketConnectEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ServerSocketConnectEvent_obj::CONNECT,HX_("CONNECT",ca,0f,54,95)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ServerSocketConnectEvent_obj_sMemberFields[] = {
	HX_("socket",b3,8b,46,26),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

static void ServerSocketConnectEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ServerSocketConnectEvent_obj::CONNECT,"CONNECT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ServerSocketConnectEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ServerSocketConnectEvent_obj::CONNECT,"CONNECT");
};

#endif

::hx::Class ServerSocketConnectEvent_obj::__mClass;

static ::String ServerSocketConnectEvent_obj_sStaticFields[] = {
	HX_("CONNECT",ca,0f,54,95),
	::String(null())
};

void ServerSocketConnectEvent_obj::__register()
{
	ServerSocketConnectEvent_obj _hx_dummy;
	ServerSocketConnectEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.ServerSocketConnectEvent",fd,24,02,73);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ServerSocketConnectEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ServerSocketConnectEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ServerSocketConnectEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ServerSocketConnectEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ServerSocketConnectEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ServerSocketConnectEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ServerSocketConnectEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ServerSocketConnectEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e65adcfd29db6008_16_boot)
HXDLIN(  16)		CONNECT = HX_("connect",ea,3b,80,15);
            	}
}

} // end namespace openfl
} // end namespace events
