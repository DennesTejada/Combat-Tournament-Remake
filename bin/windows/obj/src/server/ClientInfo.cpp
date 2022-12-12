#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_server_ClientInfo
#include <server/ClientInfo.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_baec708f684959ab_82_new,"server.ClientInfo","new",0xf5e38336,"server.ClientInfo.new","server/ServerMain.hx",82,0x83a357f6)
HX_LOCAL_STACK_FRAME(_hx_pos_baec708f684959ab_90_send,"server.ClientInfo","send",0x347d55b2,"server.ClientInfo.send","server/ServerMain.hx",90,0x83a357f6)
namespace server{

void ClientInfo_obj::__construct( ::sys::net::Socket sv, ::sys::net::Socket skt){
            	HX_STACKFRAME(&_hx_pos_baec708f684959ab_82_new)
HXLINE(  83)		this->server = sv;
HXLINE(  84)		this->socket = skt;
HXLINE(  85)		this->name = HX_("",00,00,00,00);
HXLINE(  86)		this->active = true;
            	}

Dynamic ClientInfo_obj::__CreateEmpty() { return new ClientInfo_obj; }

void *ClientInfo_obj::_hx_vtable = 0;

Dynamic ClientInfo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ClientInfo_obj > _hx_result = new ClientInfo_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ClientInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2668a7a0;
}

void ClientInfo_obj::send(::String command){
            	HX_STACKFRAME(&_hx_pos_baec708f684959ab_90_send)
HXDLIN(  90)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  92)			this->socket->output->writeString(command,null());
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  94)				{
HXLINE(  94)					null();
            				}
HXLINE(  96)				this->active = false;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClientInfo_obj,send,(void))


::hx::ObjectPtr< ClientInfo_obj > ClientInfo_obj::__new( ::sys::net::Socket sv, ::sys::net::Socket skt) {
	::hx::ObjectPtr< ClientInfo_obj > __this = new ClientInfo_obj();
	__this->__construct(sv,skt);
	return __this;
}

::hx::ObjectPtr< ClientInfo_obj > ClientInfo_obj::__alloc(::hx::Ctx *_hx_ctx, ::sys::net::Socket sv, ::sys::net::Socket skt) {
	ClientInfo_obj *__this = (ClientInfo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ClientInfo_obj), true, "server.ClientInfo"));
	*(void **)__this = ClientInfo_obj::_hx_vtable;
	__this->__construct(sv,skt);
	return __this;
}

ClientInfo_obj::ClientInfo_obj()
{
}

void ClientInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClientInfo);
	HX_MARK_MEMBER_NAME(socket,"socket");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(server,"server");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void ClientInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(socket,"socket");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(server,"server");
	HX_VISIT_MEMBER_NAME(active,"active");
}

::hx::Val ClientInfo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"send") ) { return ::hx::Val( send_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"socket") ) { return ::hx::Val( socket ); }
		if (HX_FIELD_EQ(inName,"server") ) { return ::hx::Val( server ); }
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( active ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ClientInfo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"socket") ) { socket=inValue.Cast<  ::sys::net::Socket >(); return inValue; }
		if (HX_FIELD_EQ(inName,"server") ) { server=inValue.Cast<  ::sys::net::Socket >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClientInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("socket",b3,8b,46,26));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("server",c3,4a,37,6e));
	outFields->push(HX_("active",c6,41,46,16));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ClientInfo_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::sys::net::Socket */ ,(int)offsetof(ClientInfo_obj,socket),HX_("socket",b3,8b,46,26)},
	{::hx::fsString,(int)offsetof(ClientInfo_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /*  ::sys::net::Socket */ ,(int)offsetof(ClientInfo_obj,server),HX_("server",c3,4a,37,6e)},
	{::hx::fsBool,(int)offsetof(ClientInfo_obj,active),HX_("active",c6,41,46,16)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ClientInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String ClientInfo_obj_sMemberFields[] = {
	HX_("socket",b3,8b,46,26),
	HX_("name",4b,72,ff,48),
	HX_("server",c3,4a,37,6e),
	HX_("active",c6,41,46,16),
	HX_("send",48,8d,50,4c),
	::String(null()) };

::hx::Class ClientInfo_obj::__mClass;

void ClientInfo_obj::__register()
{
	ClientInfo_obj _hx_dummy;
	ClientInfo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("server.ClientInfo",44,70,f0,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ClientInfo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ClientInfo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClientInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClientInfo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace server
