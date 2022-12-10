#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_sys_net_Address
#include <sys/net/Address.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
#ifndef INCLUDED_sys_net_UdpSocket
#include <sys/net/UdpSocket.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2cf26941a73101ea_29_new,"sys.net.UdpSocket","new",0x7361a534,"sys.net.UdpSocket.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/UdpSocket.hx",29,0x8d5e3924)
HX_LOCAL_STACK_FRAME(_hx_pos_2cf26941a73101ea_30_init,"sys.net.UdpSocket","init",0x7ec79fbc,"sys.net.UdpSocket.init","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/UdpSocket.hx",30,0x8d5e3924)
HX_LOCAL_STACK_FRAME(_hx_pos_2cf26941a73101ea_36_sendTo,"sys.net.UdpSocket","sendTo",0x4bf4a08f,"sys.net.UdpSocket.sendTo","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/UdpSocket.hx",36,0x8d5e3924)
HX_LOCAL_STACK_FRAME(_hx_pos_2cf26941a73101ea_46_readFrom,"sys.net.UdpSocket","readFrom",0x35b4aa8c,"sys.net.UdpSocket.readFrom","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/UdpSocket.hx",46,0x8d5e3924)
namespace sys{
namespace net{

void UdpSocket_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2cf26941a73101ea_29_new)
HXDLIN(  29)		super::__construct();
            	}

Dynamic UdpSocket_obj::__CreateEmpty() { return new UdpSocket_obj; }

void *UdpSocket_obj::_hx_vtable = 0;

Dynamic UdpSocket_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UdpSocket_obj > _hx_result = new UdpSocket_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool UdpSocket_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x70c71ec3) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x70c71ec3;
	} else {
		return inClassId==(int)0x754e49e0;
	}
}

void UdpSocket_obj::init(){
            	HX_STACKFRAME(&_hx_pos_2cf26941a73101ea_30_init)
HXLINE(  31)		this->__s = _hx_std_socket_new(true);
HXLINE(  32)		this->super::init();
            	}


int UdpSocket_obj::sendTo( ::haxe::io::Bytes buf,int pos,int len, ::sys::net::Address addr){
            	HX_STACKFRAME(&_hx_pos_2cf26941a73101ea_36_sendTo)
HXDLIN(  36)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  37)			return _hx_std_socket_send_to(this->__s,buf->b,pos,len,addr);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  38)				{
HXLINE(  38)					null();
            				}
HXDLIN(  38)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE(  39)				if (::hx::IsEq( e,HX_("Blocking",d5,e1,61,f3) )) {
HXLINE(  40)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::Blocked_dyn()));
            				}
            				else {
HXLINE(  42)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::Custom(e)));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  36)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC4(UdpSocket_obj,sendTo,return )

int UdpSocket_obj::readFrom( ::haxe::io::Bytes buf,int pos,int len, ::sys::net::Address addr){
            	HX_GC_STACKFRAME(&_hx_pos_2cf26941a73101ea_46_readFrom)
HXLINE(  47)		int r;
HXLINE(  48)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  49)			r = _hx_std_socket_recv_from(this->__s,buf->b,pos,len,addr);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  50)				{
HXLINE(  50)					null();
            				}
HXDLIN(  50)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE(  51)				if (::hx::IsEq( e,HX_("Blocking",d5,e1,61,f3) )) {
HXLINE(  52)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::Blocked_dyn()));
            				}
            				else {
HXLINE(  54)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::Custom(e)));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  56)		if ((r == 0)) {
HXLINE(  57)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::haxe::io::Eof_obj::__alloc( HX_CTX )));
            		}
HXLINE(  58)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC4(UdpSocket_obj,readFrom,return )


::hx::ObjectPtr< UdpSocket_obj > UdpSocket_obj::__new() {
	::hx::ObjectPtr< UdpSocket_obj > __this = new UdpSocket_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< UdpSocket_obj > UdpSocket_obj::__alloc(::hx::Ctx *_hx_ctx) {
	UdpSocket_obj *__this = (UdpSocket_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(UdpSocket_obj), true, "sys.net.UdpSocket"));
	*(void **)__this = UdpSocket_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

UdpSocket_obj::UdpSocket_obj()
{
}

::hx::Val UdpSocket_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sendTo") ) { return ::hx::Val( sendTo_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readFrom") ) { return ::hx::Val( readFrom_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *UdpSocket_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *UdpSocket_obj_sStaticStorageInfo = 0;
#endif

static ::String UdpSocket_obj_sMemberFields[] = {
	HX_("init",10,3b,bb,45),
	HX_("sendTo",e3,b8,84,6b),
	HX_("readFrom",e0,7f,ba,6b),
	::String(null()) };

::hx::Class UdpSocket_obj::__mClass;

void UdpSocket_obj::__register()
{
	UdpSocket_obj _hx_dummy;
	UdpSocket_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("sys.net.UdpSocket",42,3b,fa,aa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(UdpSocket_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< UdpSocket_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UdpSocket_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UdpSocket_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace net
