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
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IOError
#include <openfl/errors/IOError.h>
#endif
#ifndef INCLUDED_openfl_errors_SecurityError
#include <openfl/errors/SecurityError.h>
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
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
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
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_Lib
#include <openfl/utils/_internal/Lib.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_261_new,"openfl.net.Socket","new",0xed4fa1d4,"openfl.net.Socket.new","openfl/net/Socket.hx",261,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_289_close,"openfl.net.Socket","close",0x490d2e2c,"openfl.net.Socket.close","openfl/net/Socket.hx",289,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_344_connect,"openfl.net.Socket","connect",0x25b3d75e,"openfl.net.Socket.connect","openfl/net/Socket.hx",344,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_428_flush,"openfl.net.Socket","flush",0x03457938,"openfl.net.Socket.flush","openfl/net/Socket.hx",428,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_467_readBoolean,"openfl.net.Socket","readBoolean",0x5d02e366,"openfl.net.Socket.readBoolean","openfl/net/Socket.hx",467,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_485_readByte,"openfl.net.Socket","readByte",0x860f638a,"openfl.net.Socket.readByte","openfl/net/Socket.hx",485,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_509_readBytes,"openfl.net.Socket","readBytes",0xc767b5a9,"openfl.net.Socket.readBytes","openfl/net/Socket.hx",509,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_528_readDouble,"openfl.net.Socket","readDouble",0xbeb31413,"openfl.net.Socket.readDouble","openfl/net/Socket.hx",528,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_547_readFloat,"openfl.net.Socket","readFloat",0x0c6672da,"openfl.net.Socket.readFloat","openfl/net/Socket.hx",547,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_565_readInt,"openfl.net.Socket","readInt",0x12fd4ead,"openfl.net.Socket.readInt","openfl/net/Socket.hx",565,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_598_readMultiByte,"openfl.net.Socket","readMultiByte",0x24dd2a5f,"openfl.net.Socket.readMultiByte","openfl/net/Socket.hx",598,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_617_readObject,"openfl.net.Socket","readObject",0xa12767c1,"openfl.net.Socket.readObject","openfl/net/Socket.hx",617,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_637_readShort,"openfl.net.Socket","readShort",0x85f731ba,"openfl.net.Socket.readShort","openfl/net/Socket.hx",637,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_655_readUnsignedByte,"openfl.net.Socket","readUnsignedByte",0xa58d611f,"openfl.net.Socket.readUnsignedByte","openfl/net/Socket.hx",655,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_672_readUnsignedInt,"openfl.net.Socket","readUnsignedInt",0xc079dab8,"openfl.net.Socket.readUnsignedInt","openfl/net/Socket.hx",672,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_690_readUnsignedShort,"openfl.net.Socket","readUnsignedShort",0xf4b71685,"openfl.net.Socket.readUnsignedShort","openfl/net/Socket.hx",690,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_710_readUTF,"openfl.net.Socket","readUTF",0x130652e5,"openfl.net.Socket.readUTF","openfl/net/Socket.hx",710,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_730_readUTFBytes,"openfl.net.Socket","readUTFBytes",0x5b4f8746,"openfl.net.Socket.readUTFBytes","openfl/net/Socket.hx",730,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_749_writeBoolean,"openfl.net.Socket","writeBoolean",0x4c6def95,"openfl.net.Socket.writeBoolean","openfl/net/Socket.hx",749,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_767_writeByte,"openfl.net.Socket","writeByte",0x82bf73fb,"openfl.net.Socket.writeByte","openfl/net/Socket.hx",767,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_798_writeBytes,"openfl.net.Socket","writeBytes",0xe4c60818,"openfl.net.Socket.writeBytes","openfl/net/Socket.hx",798,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_816_writeDouble,"openfl.net.Socket","writeDouble",0x53dce2c4,"openfl.net.Socket.writeDouble","openfl/net/Socket.hx",816,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_834_writeFloat,"openfl.net.Socket","writeFloat",0x29c4c549,"openfl.net.Socket.writeFloat","openfl/net/Socket.hx",834,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_851_writeInt,"openfl.net.Socket","writeInt",0x40e4d75c,"openfl.net.Socket.writeInt","openfl/net/Socket.hx",851,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_873_writeMultiByte,"openfl.net.Socket","writeMultiByte",0x0e46e04e,"openfl.net.Socket.writeMultiByte","openfl/net/Socket.hx",873,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_891_writeObject,"openfl.net.Socket","writeObject",0x36513672,"openfl.net.Socket.writeObject","openfl/net/Socket.hx",891,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_917_writeShort,"openfl.net.Socket","writeShort",0xa3558429,"openfl.net.Socket.writeShort","openfl/net/Socket.hx",917,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_934_writeUnsignedInt,"openfl.net.Socket","writeUnsignedInt",0x20302a67,"openfl.net.Socket.writeUnsignedInt","openfl/net/Socket.hx",934,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_956_writeUTF,"openfl.net.Socket","writeUTF",0x40eddb94,"openfl.net.Socket.writeUTF","openfl/net/Socket.hx",956,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_973_writeUTFBytes,"openfl.net.Socket","writeUTFBytes",0xe98f2437,"openfl.net.Socket.writeUTFBytes","openfl/net/Socket.hx",973,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_983___cleanSocket,"openfl.net.Socket","__cleanSocket",0x6b69a970,"openfl.net.Socket.__cleanSocket","openfl/net/Socket.hx",983,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_998_socket_onClose,"openfl.net.Socket","socket_onClose",0xa9908159,"openfl.net.Socket.socket_onClose","openfl/net/Socket.hx",998,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_1003_socket_onError,"openfl.net.Socket","socket_onError",0xd4573569,"openfl.net.Socket.socket_onError","openfl/net/Socket.hx",1003,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_1007_socket_onMessage,"openfl.net.Socket","socket_onMessage",0xb0a509a8,"openfl.net.Socket.socket_onMessage","openfl/net/Socket.hx",1007,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_1035_socket_onOpen,"openfl.net.Socket","socket_onOpen",0x9a7f6949,"openfl.net.Socket.socket_onOpen","openfl/net/Socket.hx",1035,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_1041_this_onEnterFrame,"openfl.net.Socket","this_onEnterFrame",0x0bcb0429,"openfl.net.Socket.this_onEnterFrame","openfl/net/Socket.hx",1041,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_1154_get_bytesAvailable,"openfl.net.Socket","get_bytesAvailable",0xb0011db3,"openfl.net.Socket.get_bytesAvailable","openfl/net/Socket.hx",1154,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_1159_get_bytesPending,"openfl.net.Socket","get_bytesPending",0x28aaadc1,"openfl.net.Socket.get_bytesPending","openfl/net/Socket.hx",1159,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_1164_get_connected,"openfl.net.Socket","get_connected",0x736e6114,"openfl.net.Socket.get_connected","openfl/net/Socket.hx",1164,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_1169_get_endian,"openfl.net.Socket","get_endian",0x7d7c0d70,"openfl.net.Socket.get_endian","openfl/net/Socket.hx",1169,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_1173_set_endian,"openfl.net.Socket","set_endian",0x80f9abe4,"openfl.net.Socket.set_endian","openfl/net/Socket.hx",1173,0x34d23f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b3c8c666d2a175c_127_boot,"openfl.net.Socket","boot",0xb076f83e,"openfl.net.Socket.boot","openfl/net/Socket.hx",127,0x34d23f5a)
namespace openfl{
namespace net{

void Socket_obj::__construct(::String host,::hx::Null< int >  __o_port){
            		int port = __o_port.Default(0);
            	HX_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_261_new)
HXLINE( 262)		super::__construct(null());
HXLINE( 264)		this->set_endian(0);
HXLINE( 265)		this->timeout = 20000;
HXLINE( 267)		this->_hx___buffer = ::haxe::io::Bytes_obj::alloc(4096);
HXLINE( 269)		bool _hx_tmp;
HXDLIN( 269)		if ((port > 0)) {
HXLINE( 269)			_hx_tmp = (port < 65535);
            		}
            		else {
HXLINE( 269)			_hx_tmp = false;
            		}
HXDLIN( 269)		if (_hx_tmp) {
HXLINE( 271)			this->connect(host,port);
            		}
            	}

Dynamic Socket_obj::__CreateEmpty() { return new Socket_obj; }

void *Socket_obj::_hx_vtable = 0;

Dynamic Socket_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Socket_obj > _hx_result = new Socket_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Socket_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x5e5831fc;
	}
}

static ::openfl::utils::IDataOutput_obj _hx_openfl_net_Socket__hx_openfl_utils_IDataOutput= {
	(  ::Dynamic (::hx::Object::*)())&::openfl::net::Socket_obj::get_endian,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::openfl::net::Socket_obj::set_endian,
	( void (::hx::Object::*)(bool))&::openfl::net::Socket_obj::writeBoolean,
	( void (::hx::Object::*)(int))&::openfl::net::Socket_obj::writeByte,
	( void (::hx::Object::*)( ::openfl::utils::ByteArrayData,::hx::Null< int > ,::hx::Null< int > ))&::openfl::net::Socket_obj::writeBytes,
	( void (::hx::Object::*)(Float))&::openfl::net::Socket_obj::writeDouble,
	( void (::hx::Object::*)(Float))&::openfl::net::Socket_obj::writeFloat,
	( void (::hx::Object::*)(int))&::openfl::net::Socket_obj::writeInt,
	( void (::hx::Object::*)(::String,::String))&::openfl::net::Socket_obj::writeMultiByte,
	( void (::hx::Object::*)( ::Dynamic))&::openfl::net::Socket_obj::writeObject,
	( void (::hx::Object::*)(int))&::openfl::net::Socket_obj::writeShort,
	( void (::hx::Object::*)(int))&::openfl::net::Socket_obj::writeUnsignedInt,
	( void (::hx::Object::*)(::String))&::openfl::net::Socket_obj::writeUTF,
	( void (::hx::Object::*)(::String))&::openfl::net::Socket_obj::writeUTFBytes,
};

static ::openfl::utils::IDataInput_obj _hx_openfl_net_Socket__hx_openfl_utils_IDataInput= {
	( int (::hx::Object::*)())&::openfl::net::Socket_obj::get_bytesAvailable,
	(  ::Dynamic (::hx::Object::*)())&::openfl::net::Socket_obj::get_endian,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::openfl::net::Socket_obj::set_endian,
	( bool (::hx::Object::*)())&::openfl::net::Socket_obj::readBoolean,
	( int (::hx::Object::*)())&::openfl::net::Socket_obj::readByte,
	( void (::hx::Object::*)( ::openfl::utils::ByteArrayData,::hx::Null< int > ,::hx::Null< int > ))&::openfl::net::Socket_obj::readBytes,
	( Float (::hx::Object::*)())&::openfl::net::Socket_obj::readDouble,
	( Float (::hx::Object::*)())&::openfl::net::Socket_obj::readFloat,
	( int (::hx::Object::*)())&::openfl::net::Socket_obj::readInt,
	( ::String (::hx::Object::*)(int,::String))&::openfl::net::Socket_obj::readMultiByte,
	(  ::Dynamic (::hx::Object::*)())&::openfl::net::Socket_obj::readObject,
	( int (::hx::Object::*)())&::openfl::net::Socket_obj::readShort,
	( int (::hx::Object::*)())&::openfl::net::Socket_obj::readUnsignedByte,
	( int (::hx::Object::*)())&::openfl::net::Socket_obj::readUnsignedInt,
	( int (::hx::Object::*)())&::openfl::net::Socket_obj::readUnsignedShort,
	( ::String (::hx::Object::*)())&::openfl::net::Socket_obj::readUTF,
	( ::String (::hx::Object::*)(int))&::openfl::net::Socket_obj::readUTFBytes,
};

void *Socket_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x948d2d33: return &_hx_openfl_net_Socket__hx_openfl_utils_IDataOutput;
		case (int)0xbeb9f218: return &_hx_openfl_net_Socket__hx_openfl_utils_IDataInput;
	}
	return super::_hx_getInterface(inHash);
}

void Socket_obj::close(){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_289_close)
HXDLIN( 289)		if (::hx::IsNotNull( this->_hx___socket )) {
HXLINE( 291)			this->_hx___cleanSocket();
            		}
            		else {
HXLINE( 295)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,close,(void))

void Socket_obj::connect(::String host,::hx::Null< int >  __o_port){
            		int port = __o_port.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_344_connect)
HXLINE( 345)		if (::hx::IsNotNull( this->_hx___socket )) {
HXLINE( 347)			this->close();
            		}
HXLINE( 350)		bool _hx_tmp;
HXDLIN( 350)		if ((port >= 0)) {
HXLINE( 350)			_hx_tmp = (port > 65535);
            		}
            		else {
HXLINE( 350)			_hx_tmp = true;
            		}
HXDLIN( 350)		if (_hx_tmp) {
HXLINE( 352)			HX_STACK_DO_THROW( ::openfl::errors::SecurityError_obj::__alloc( HX_CTX ,HX_("Invalid socket port number specified.",5a,8e,7c,a7)));
            		}
HXLINE( 358)		 ::sys::net::Host h = null();
HXLINE( 360)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 362)			h =  ::sys::net::Host_obj::__alloc( HX_CTX ,host);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 364)				{
HXLINE( 364)					null();
            				}
HXLINE( 366)				this->dispatchEvent( ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),true,false,HX_("Invalid host",51,b1,1f,8c),null()));
HXLINE( 367)				return;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 370)		this->_hx___timestamp = ::Sys_obj::time();
HXLINE( 373)		this->_hx___host = host;
HXLINE( 374)		this->_hx___port = port;
HXLINE( 376)		 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN( 376)		this->_hx___output = this1;
HXLINE( 377)		this->_hx___output->_hx___endian = this->_hx___endian;
HXLINE( 379)		 ::openfl::utils::ByteArrayData this2 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN( 379)		this->_hx___input = this2;
HXLINE( 380)		this->_hx___input->_hx___endian = this->_hx___endian;
HXLINE( 401)		this->_hx___socket =  ::sys::net::Socket_obj::__alloc( HX_CTX );
HXLINE( 403)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 405)			this->_hx___socket->setBlocking(false);
HXLINE( 406)			this->_hx___socket->connect(h,port);
HXLINE( 407)			this->_hx___socket->setFastSend(true);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 409)				{
HXLINE( 409)					null();
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 412)		::openfl::utils::_internal::Lib_obj::current->addEventListener(HX_("enterFrame",f5,03,50,02),this->this_onEnterFrame_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Socket_obj,connect,(void))

void Socket_obj::flush(){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_428_flush)
HXLINE( 429)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 431)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 434)		int a = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(this->_hx___output);
HXDLIN( 434)		bool aNeg = (a < 0);
HXDLIN( 434)		bool bNeg = (0 < 0);
HXDLIN( 434)		bool _hx_tmp;
HXDLIN( 434)		if ((aNeg != bNeg)) {
HXLINE( 434)			_hx_tmp = aNeg;
            		}
            		else {
HXLINE( 434)			_hx_tmp = (a > 0);
            		}
HXDLIN( 434)		if (_hx_tmp) {
HXLINE( 436)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 443)				 ::haxe::io::Output _hx_tmp = this->_hx___socket->output;
HXDLIN( 443)				 ::haxe::io::Bytes _hx_tmp1 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(this->_hx___output);
HXDLIN( 443)				_hx_tmp->writeBytes(_hx_tmp1,0,::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(this->_hx___output));
HXLINE( 445)				 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN( 445)				this->_hx___output = this1;
HXLINE( 446)				this->_hx___output->_hx___endian = this->_hx___endian;
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 448)					{
HXLINE( 448)						null();
            					}
HXLINE( 450)					HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,flush,(void))

bool Socket_obj::readBoolean(){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_467_readBoolean)
HXLINE( 468)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 470)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 473)		return this->_hx___input->readBoolean();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,readBoolean,return )

int Socket_obj::readByte(){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_485_readByte)
HXLINE( 486)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 488)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 491)		return this->_hx___input->readByte();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,readByte,return )

void Socket_obj::readBytes( ::openfl::utils::ByteArrayData bytes,::hx::Null< int >  __o_offset,::hx::Null< int >  __o_length){
            		int offset = __o_offset.Default(0);
            		int length = __o_length.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_509_readBytes)
HXLINE( 510)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 512)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 515)		this->_hx___input->readBytes(bytes,offset,length);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Socket_obj,readBytes,(void))

Float Socket_obj::readDouble(){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_528_readDouble)
HXLINE( 529)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 531)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 534)		return this->_hx___input->readDouble();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,readDouble,return )

Float Socket_obj::readFloat(){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_547_readFloat)
HXLINE( 548)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 550)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 553)		return this->_hx___input->readFloat();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,readFloat,return )

int Socket_obj::readInt(){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_565_readInt)
HXLINE( 566)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 568)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 571)		return this->_hx___input->readInt();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,readInt,return )

::String Socket_obj::readMultiByte(int length,::String charSet){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_598_readMultiByte)
HXLINE( 599)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 601)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 604)		return this->_hx___input->readMultiByte(length,charSet);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Socket_obj,readMultiByte,return )

 ::Dynamic Socket_obj::readObject(){
            	HX_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_617_readObject)
HXDLIN( 617)		if ((this->objectEncoding == 10)) {
HXLINE( 619)			return ::haxe::Unserializer_obj::run(this->readUTF());
            		}
            		else {
HXLINE( 624)			return null();
            		}
HXLINE( 617)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,readObject,return )

int Socket_obj::readShort(){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_637_readShort)
HXLINE( 638)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 640)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 643)		return this->_hx___input->readShort();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,readShort,return )

int Socket_obj::readUnsignedByte(){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_655_readUnsignedByte)
HXLINE( 656)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 658)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 660)		return this->_hx___input->readUnsignedByte();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,readUnsignedByte,return )

int Socket_obj::readUnsignedInt(){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_672_readUnsignedInt)
HXLINE( 673)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 675)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 678)		return this->_hx___input->readUnsignedInt();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,readUnsignedInt,return )

int Socket_obj::readUnsignedShort(){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_690_readUnsignedShort)
HXLINE( 691)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 693)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 696)		return this->_hx___input->readUnsignedShort();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,readUnsignedShort,return )

::String Socket_obj::readUTF(){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_710_readUTF)
HXLINE( 711)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 713)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 716)		return this->_hx___input->readUTF();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,readUTF,return )

::String Socket_obj::readUTFBytes(int length){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_730_readUTFBytes)
HXLINE( 731)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 733)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 736)		return this->_hx___input->readUTFBytes(length);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,readUTFBytes,return )

void Socket_obj::writeBoolean(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_749_writeBoolean)
HXLINE( 750)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 752)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 755)		this->_hx___output->writeBoolean(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,writeBoolean,(void))

void Socket_obj::writeByte(int value){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_767_writeByte)
HXLINE( 768)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 770)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 773)		this->_hx___output->writeByte(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,writeByte,(void))

void Socket_obj::writeBytes( ::openfl::utils::ByteArrayData bytes,::hx::Null< int >  __o_offset,::hx::Null< int >  __o_length){
            		int offset = __o_offset.Default(0);
            		int length = __o_length.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_798_writeBytes)
HXLINE( 799)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 801)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 804)		this->_hx___output->writeBytes(bytes,offset,length);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Socket_obj,writeBytes,(void))

void Socket_obj::writeDouble(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_816_writeDouble)
HXLINE( 817)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 819)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 822)		this->_hx___output->writeDouble(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,writeDouble,(void))

void Socket_obj::writeFloat(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_834_writeFloat)
HXLINE( 835)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 837)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 840)		this->_hx___output->writeFloat(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,writeFloat,(void))

void Socket_obj::writeInt(int value){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_851_writeInt)
HXLINE( 852)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 854)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 857)		this->_hx___output->writeInt(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,writeInt,(void))

void Socket_obj::writeMultiByte(::String value,::String charSet){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_873_writeMultiByte)
HXLINE( 874)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 876)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 879)		this->_hx___output->writeUTFBytes(value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Socket_obj,writeMultiByte,(void))

void Socket_obj::writeObject( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_891_writeObject)
HXDLIN( 891)		if ((this->objectEncoding == 10)) {
HXLINE( 893)			 ::openfl::utils::ByteArrayData this1 = this->_hx___output;
HXDLIN( 893)			this1->writeUTF(::haxe::Serializer_obj::run(object));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,writeObject,(void))

void Socket_obj::writeShort(int value){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_917_writeShort)
HXLINE( 918)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 920)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 923)		this->_hx___output->writeShort(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,writeShort,(void))

void Socket_obj::writeUnsignedInt(int value){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_934_writeUnsignedInt)
HXLINE( 935)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 937)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 940)		this->_hx___output->writeUnsignedInt(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,writeUnsignedInt,(void))

void Socket_obj::writeUTF(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_956_writeUTF)
HXLINE( 957)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 959)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 962)		this->_hx___output->writeUTF(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,writeUTF,(void))

void Socket_obj::writeUTFBytes(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_973_writeUTFBytes)
HXLINE( 974)		if (::hx::IsNull( this->_hx___socket )) {
HXLINE( 976)			HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            		}
HXLINE( 979)		this->_hx___output->writeUTFBytes(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,writeUTFBytes,(void))

void Socket_obj::_hx___cleanSocket(){
            	HX_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_983___cleanSocket)
HXLINE( 984)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 986)			this->_hx___socket->close();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 988)				{
HXLINE( 988)					null();
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 990)		this->_hx___socket = null();
HXLINE( 991)		this->_hx___connected = false;
HXLINE( 992)		::openfl::utils::_internal::Lib_obj::current->removeEventListener(HX_("enterFrame",f5,03,50,02),this->this_onEnterFrame_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,_hx___cleanSocket,(void))

void Socket_obj::socket_onClose( ::Dynamic _){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_998_socket_onClose)
HXDLIN( 998)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("close",b8,17,63,48),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,socket_onClose,(void))

void Socket_obj::socket_onError( ::Dynamic e){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_1003_socket_onError)
HXDLIN(1003)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,socket_onError,(void))

void Socket_obj::socket_onMessage( ::Dynamic msg){
            	HX_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_1007_socket_onMessage)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,socket_onMessage,(void))

void Socket_obj::socket_onOpen( ::Dynamic _){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_1035_socket_onOpen)
HXLINE(1036)		this->_hx___connected = true;
HXLINE(1037)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("connect",ea,3b,80,15),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,socket_onOpen,(void))

void Socket_obj::this_onEnterFrame( ::openfl::events::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_1041_this_onEnterFrame)
HXLINE(1048)		bool doConnect = false;
HXLINE(1049)		bool doClose = false;
HXLINE(1051)		if (!(this->get_connected())) {
HXLINE(1053)			 ::Dynamic r = ::sys::net::Socket_obj::select(null(),::Array_obj< ::Dynamic>::__new(1)->init(0,this->_hx___socket),null(),0);
HXLINE(1055)			if (::hx::IsInstanceEq( Dynamic(  ::Dynamic(r->__Field(HX_("write",df,6c,59,d0),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::sys::net::Socket >(),this->_hx___socket )) {
HXLINE(1057)				doConnect = true;
            			}
            			else {
HXLINE(1059)				Float _hx_tmp = ::Sys_obj::time();
HXDLIN(1059)				if (((_hx_tmp - this->_hx___timestamp) > (( (Float)(this->timeout) ) / ( (Float)(1000) )))) {
HXLINE(1061)					doClose = true;
            				}
            			}
            		}
HXLINE(1065)		 ::haxe::io::BytesBuffer b =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE(1066)		int bLength = 0;
HXLINE(1068)		bool _hx_tmp;
HXDLIN(1068)		if (!(this->get_connected())) {
HXLINE(1068)			_hx_tmp = doConnect;
            		}
            		else {
HXLINE(1068)			_hx_tmp = true;
            		}
HXDLIN(1068)		if (_hx_tmp) {
HXLINE(1070)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1072)				int l;
HXLINE(1074)				while(true){
HXLINE(1076)					l = this->_hx___socket->input->readBytes(this->_hx___buffer,0,this->_hx___buffer->length);
HXLINE(1078)					if ((l > 0)) {
HXLINE(1080)						{
HXLINE(1080)							 ::haxe::io::Bytes src = this->_hx___buffer;
HXDLIN(1080)							bool _hx_tmp;
HXDLIN(1080)							if ((l >= 0)) {
HXLINE(1080)								_hx_tmp = (l > src->length);
            							}
            							else {
HXLINE(1080)								_hx_tmp = true;
            							}
HXDLIN(1080)							if (_hx_tmp) {
HXLINE(1080)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            							}
HXDLIN(1080)							::Array< unsigned char > b1 = b->b;
HXDLIN(1080)							::Array< unsigned char > b2 = src->b;
HXDLIN(1080)							{
HXLINE(1080)								int _g = 0;
HXDLIN(1080)								int _g1 = l;
HXDLIN(1080)								while((_g < _g1)){
HXLINE(1080)									_g = (_g + 1);
HXDLIN(1080)									int i = (_g - 1);
HXDLIN(1080)									b->b->push(b2->__get(i));
            								}
            							}
            						}
HXLINE(1081)						bLength = (bLength + l);
            					}
HXLINE(1074)					if (!((l == this->_hx___buffer->length))) {
HXLINE(1074)						goto _hx_goto_35;
            					}
            				}
            				_hx_goto_35:;
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(1086)					{
HXLINE(1086)						null();
            					}
HXDLIN(1086)					 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE(1070)					if (!(::Std_obj::isOfType(_g1,::hx::ClassOf< ::haxe::io::Eof >()))) {
HXLINE(1070)						if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::haxe::io::Error >())) {
HXLINE(1090)							 ::haxe::io::Error e = _g1;
HXLINE(1092)							if (::hx::IsPointerNotEq( e,::haxe::io::Error_obj::Blocked_dyn() )) {
HXLINE(1094)								doClose = true;
            							}
            						}
            						else {
HXLINE(1099)							doClose = true;
            						}
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
HXLINE(1103)		bool _hx_tmp1;
HXDLIN(1103)		if (doClose) {
HXLINE(1103)			_hx_tmp1 = this->get_connected();
            		}
            		else {
HXLINE(1103)			_hx_tmp1 = false;
            		}
HXDLIN(1103)		if (_hx_tmp1) {
HXLINE(1105)			this->_hx___cleanSocket();
HXLINE(1107)			this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("close",b8,17,63,48),null(),null()));
            		}
            		else {
HXLINE(1109)			if (doClose) {
HXLINE(1111)				this->_hx___cleanSocket();
HXLINE(1113)				this->dispatchEvent( ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),true,false,HX_("Connection failed",5f,1d,9e,a8),null()));
            			}
            			else {
HXLINE(1115)				if (doConnect) {
HXLINE(1117)					this->_hx___connected = true;
HXLINE(1118)					this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("connect",ea,3b,80,15),null(),null()));
            				}
            			}
            		}
HXLINE(1121)		if ((bLength > 0)) {
HXLINE(1123)			 ::haxe::io::Bytes newData = b->getBytes();
HXLINE(1125)			int a = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(this->_hx___input);
HXDLIN(1125)			int rl = (a - this->_hx___input->position);
HXLINE(1126)			bool aNeg = (0 < 0);
HXDLIN(1126)			bool bNeg = (rl < 0);
HXDLIN(1126)			bool _hx_tmp;
HXDLIN(1126)			if ((aNeg != bNeg)) {
HXLINE(1126)				_hx_tmp = aNeg;
            			}
            			else {
HXLINE(1126)				_hx_tmp = (0 > rl);
            			}
HXDLIN(1126)			if (_hx_tmp) {
HXLINE(1126)				rl = 0;
            			}
HXLINE(1128)			 ::haxe::io::Bytes newInput = ::haxe::io::Bytes_obj::alloc((rl + newData->length));
HXLINE(1129)			bool aNeg1 = (rl < 0);
HXDLIN(1129)			bool bNeg1 = (0 < 0);
HXDLIN(1129)			bool _hx_tmp1;
HXDLIN(1129)			if ((aNeg1 != bNeg1)) {
HXLINE(1129)				_hx_tmp1 = aNeg1;
            			}
            			else {
HXLINE(1129)				_hx_tmp1 = (rl > 0);
            			}
HXDLIN(1129)			if (_hx_tmp1) {
HXLINE(1129)				newInput->blit(0,::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(this->_hx___input),this->_hx___input->position,rl);
            			}
HXLINE(1130)			newInput->blit(rl,newData,0,newData->length);
HXLINE(1131)			this->_hx___input = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(newInput);
HXLINE(1132)			this->_hx___input->_hx___endian = this->_hx___endian;
HXLINE(1134)			this->dispatchEvent( ::openfl::events::ProgressEvent_obj::__alloc( HX_CTX ,HX_("socketData",7d,63,de,b1),false,false,newData->length,0));
            		}
HXLINE(1137)		if (::hx::IsNotNull( this->_hx___socket )) {
HXLINE(1139)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1141)				this->flush();
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(1143)					 ::haxe::Exception _g1 = ::haxe::Exception_obj::caught(_g);
HXLINE(1139)					if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::openfl::errors::IOError >())) {
HXLINE(1143)						 ::openfl::errors::IOError e = ( ( ::openfl::errors::IOError)(_g1) );
HXLINE(1145)						this->dispatchEvent( ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),true,false,e->get_message(),null()));
            					}
            					else {
HXLINE(1139)						HX_STACK_DO_THROW(_g);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,this_onEnterFrame,(void))

int Socket_obj::get_bytesAvailable(){
            	HX_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_1154_get_bytesAvailable)
HXDLIN(1154)		 ::openfl::utils::ByteArrayData this1 = this->_hx___input;
HXDLIN(1154)		return (this1->length - this1->position);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,get_bytesAvailable,return )

int Socket_obj::get_bytesPending(){
            	HX_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_1159_get_bytesPending)
HXDLIN(1159)		return ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(this->_hx___output);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,get_bytesPending,return )

bool Socket_obj::get_connected(){
            	HX_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_1164_get_connected)
HXDLIN(1164)		return this->_hx___connected;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,get_connected,return )

 ::Dynamic Socket_obj::get_endian(){
            	HX_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_1169_get_endian)
HXDLIN(1169)		return this->_hx___endian;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,get_endian,return )

 ::Dynamic Socket_obj::set_endian( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_1173_set_endian)
HXLINE(1174)		this->_hx___endian = value;
HXLINE(1176)		if (::hx::IsNotNull( this->_hx___input )) {
HXLINE(1176)			this->_hx___input->_hx___endian = value;
            		}
HXLINE(1177)		if (::hx::IsNotNull( this->_hx___output )) {
HXLINE(1177)			this->_hx___output->_hx___endian = value;
            		}
HXLINE(1179)		return this->_hx___endian;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,set_endian,return )


::hx::ObjectPtr< Socket_obj > Socket_obj::__new(::String host,::hx::Null< int >  __o_port) {
	::hx::ObjectPtr< Socket_obj > __this = new Socket_obj();
	__this->__construct(host,__o_port);
	return __this;
}

::hx::ObjectPtr< Socket_obj > Socket_obj::__alloc(::hx::Ctx *_hx_ctx,::String host,::hx::Null< int >  __o_port) {
	Socket_obj *__this = (Socket_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Socket_obj), true, "openfl.net.Socket"));
	*(void **)__this = Socket_obj::_hx_vtable;
	__this->__construct(host,__o_port);
	return __this;
}

Socket_obj::Socket_obj()
{
}

void Socket_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Socket);
	HX_MARK_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_MARK_MEMBER_NAME(secure,"secure");
	HX_MARK_MEMBER_NAME(timeout,"timeout");
	HX_MARK_MEMBER_NAME(_hx___buffer,"__buffer");
	HX_MARK_MEMBER_NAME(_hx___connected,"__connected");
	HX_MARK_MEMBER_NAME(_hx___endian,"__endian");
	HX_MARK_MEMBER_NAME(_hx___host,"__host");
	HX_MARK_MEMBER_NAME(_hx___input,"__input");
	HX_MARK_MEMBER_NAME(_hx___output,"__output");
	HX_MARK_MEMBER_NAME(_hx___port,"__port");
	HX_MARK_MEMBER_NAME(_hx___socket,"__socket");
	HX_MARK_MEMBER_NAME(_hx___timestamp,"__timestamp");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Socket_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_VISIT_MEMBER_NAME(secure,"secure");
	HX_VISIT_MEMBER_NAME(timeout,"timeout");
	HX_VISIT_MEMBER_NAME(_hx___buffer,"__buffer");
	HX_VISIT_MEMBER_NAME(_hx___connected,"__connected");
	HX_VISIT_MEMBER_NAME(_hx___endian,"__endian");
	HX_VISIT_MEMBER_NAME(_hx___host,"__host");
	HX_VISIT_MEMBER_NAME(_hx___input,"__input");
	HX_VISIT_MEMBER_NAME(_hx___output,"__output");
	HX_VISIT_MEMBER_NAME(_hx___port,"__port");
	HX_VISIT_MEMBER_NAME(_hx___socket,"__socket");
	HX_VISIT_MEMBER_NAME(_hx___timestamp,"__timestamp");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Socket_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"flush") ) { return ::hx::Val( flush_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_endian() ); }
		if (HX_FIELD_EQ(inName,"secure") ) { return ::hx::Val( secure ); }
		if (HX_FIELD_EQ(inName,"__host") ) { return ::hx::Val( _hx___host ); }
		if (HX_FIELD_EQ(inName,"__port") ) { return ::hx::Val( _hx___port ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"timeout") ) { return ::hx::Val( timeout ); }
		if (HX_FIELD_EQ(inName,"__input") ) { return ::hx::Val( _hx___input ); }
		if (HX_FIELD_EQ(inName,"connect") ) { return ::hx::Val( connect_dyn() ); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return ::hx::Val( readInt_dyn() ); }
		if (HX_FIELD_EQ(inName,"readUTF") ) { return ::hx::Val( readUTF_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__buffer") ) { return ::hx::Val( _hx___buffer ); }
		if (HX_FIELD_EQ(inName,"__endian") ) { return ::hx::Val( _hx___endian ); }
		if (HX_FIELD_EQ(inName,"__output") ) { return ::hx::Val( _hx___output ); }
		if (HX_FIELD_EQ(inName,"__socket") ) { return ::hx::Val( _hx___socket ); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return ::hx::Val( readByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeInt") ) { return ::hx::Val( writeInt_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeUTF") ) { return ::hx::Val( writeUTF_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_connected() ); }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return ::hx::Val( readBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return ::hx::Val( readFloat_dyn() ); }
		if (HX_FIELD_EQ(inName,"readShort") ) { return ::hx::Val( readShort_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return ::hx::Val( writeByte_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readDouble") ) { return ::hx::Val( readDouble_dyn() ); }
		if (HX_FIELD_EQ(inName,"readObject") ) { return ::hx::Val( readObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return ::hx::Val( writeBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return ::hx::Val( writeFloat_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeShort") ) { return ::hx::Val( writeShort_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_endian") ) { return ::hx::Val( get_endian_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_endian") ) { return ::hx::Val( set_endian_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__connected") ) { return ::hx::Val( _hx___connected ); }
		if (HX_FIELD_EQ(inName,"__timestamp") ) { return ::hx::Val( _hx___timestamp ); }
		if (HX_FIELD_EQ(inName,"readBoolean") ) { return ::hx::Val( readBoolean_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeDouble") ) { return ::hx::Val( writeDouble_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeObject") ) { return ::hx::Val( writeObject_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bytesPending") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bytesPending() ); }
		if (HX_FIELD_EQ(inName,"readUTFBytes") ) { return ::hx::Val( readUTFBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeBoolean") ) { return ::hx::Val( writeBoolean_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readMultiByte") ) { return ::hx::Val( readMultiByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeUTFBytes") ) { return ::hx::Val( writeUTFBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"__cleanSocket") ) { return ::hx::Val( _hx___cleanSocket_dyn() ); }
		if (HX_FIELD_EQ(inName,"socket_onOpen") ) { return ::hx::Val( socket_onOpen_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_connected") ) { return ::hx::Val( get_connected_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bytesAvailable() ); }
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { return ::hx::Val( objectEncoding ); }
		if (HX_FIELD_EQ(inName,"writeMultiByte") ) { return ::hx::Val( writeMultiByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"socket_onClose") ) { return ::hx::Val( socket_onClose_dyn() ); }
		if (HX_FIELD_EQ(inName,"socket_onError") ) { return ::hx::Val( socket_onError_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readUnsignedInt") ) { return ::hx::Val( readUnsignedInt_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readUnsignedByte") ) { return ::hx::Val( readUnsignedByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeUnsignedInt") ) { return ::hx::Val( writeUnsignedInt_dyn() ); }
		if (HX_FIELD_EQ(inName,"socket_onMessage") ) { return ::hx::Val( socket_onMessage_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bytesPending") ) { return ::hx::Val( get_bytesPending_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readUnsignedShort") ) { return ::hx::Val( readUnsignedShort_dyn() ); }
		if (HX_FIELD_EQ(inName,"this_onEnterFrame") ) { return ::hx::Val( this_onEnterFrame_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_bytesAvailable") ) { return ::hx::Val( get_bytesAvailable_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Socket_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_endian(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"secure") ) { secure=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__host") ) { _hx___host=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__port") ) { _hx___port=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"timeout") ) { timeout=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__input") ) { _hx___input=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__buffer") ) { _hx___buffer=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__endian") ) { _hx___endian=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__output") ) { _hx___output=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__socket") ) { _hx___socket=inValue.Cast<  ::sys::net::Socket >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__connected") ) { _hx___connected=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__timestamp") ) { _hx___timestamp=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { objectEncoding=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Socket_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bytesAvailable",de,4b,9d,9b));
	outFields->push(HX_("bytesPending",2c,6b,4c,1a));
	outFields->push(HX_("connected",c9,e2,f6,a2));
	outFields->push(HX_("endian",9b,98,88,fa));
	outFields->push(HX_("objectEncoding",b2,1e,15,2a));
	outFields->push(HX_("secure",77,60,4c,64));
	outFields->push(HX_("timeout",a1,1a,f7,d8));
	outFields->push(HX_("__buffer",20,28,c4,78));
	outFields->push(HX_("__connected",a9,2b,23,d1));
	outFields->push(HX_("__endian",bb,03,b8,a2));
	outFields->push(HX_("__host",88,32,0b,f4));
	outFields->push(HX_("__input",ea,1c,7c,28));
	outFields->push(HX_("__output",21,7a,b0,b4));
	outFields->push(HX_("__port",a1,e6,54,f9));
	outFields->push(HX_("__socket",d3,f6,75,ce));
	outFields->push(HX_("__timestamp",b6,1d,fb,d3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Socket_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Socket_obj,objectEncoding),HX_("objectEncoding",b2,1e,15,2a)},
	{::hx::fsBool,(int)offsetof(Socket_obj,secure),HX_("secure",77,60,4c,64)},
	{::hx::fsInt,(int)offsetof(Socket_obj,timeout),HX_("timeout",a1,1a,f7,d8)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(Socket_obj,_hx___buffer),HX_("__buffer",20,28,c4,78)},
	{::hx::fsBool,(int)offsetof(Socket_obj,_hx___connected),HX_("__connected",a9,2b,23,d1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Socket_obj,_hx___endian),HX_("__endian",bb,03,b8,a2)},
	{::hx::fsString,(int)offsetof(Socket_obj,_hx___host),HX_("__host",88,32,0b,f4)},
	{::hx::fsObject /*  ::openfl::utils::ByteArrayData */ ,(int)offsetof(Socket_obj,_hx___input),HX_("__input",ea,1c,7c,28)},
	{::hx::fsObject /*  ::openfl::utils::ByteArrayData */ ,(int)offsetof(Socket_obj,_hx___output),HX_("__output",21,7a,b0,b4)},
	{::hx::fsInt,(int)offsetof(Socket_obj,_hx___port),HX_("__port",a1,e6,54,f9)},
	{::hx::fsObject /*  ::sys::net::Socket */ ,(int)offsetof(Socket_obj,_hx___socket),HX_("__socket",d3,f6,75,ce)},
	{::hx::fsFloat,(int)offsetof(Socket_obj,_hx___timestamp),HX_("__timestamp",b6,1d,fb,d3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Socket_obj_sStaticStorageInfo = 0;
#endif

static ::String Socket_obj_sMemberFields[] = {
	HX_("objectEncoding",b2,1e,15,2a),
	HX_("secure",77,60,4c,64),
	HX_("timeout",a1,1a,f7,d8),
	HX_("__buffer",20,28,c4,78),
	HX_("__connected",a9,2b,23,d1),
	HX_("__endian",bb,03,b8,a2),
	HX_("__host",88,32,0b,f4),
	HX_("__input",ea,1c,7c,28),
	HX_("__output",21,7a,b0,b4),
	HX_("__port",a1,e6,54,f9),
	HX_("__socket",d3,f6,75,ce),
	HX_("__timestamp",b6,1d,fb,d3),
	HX_("close",b8,17,63,48),
	HX_("connect",ea,3b,80,15),
	HX_("flush",c4,62,9b,02),
	HX_("readBoolean",f2,7d,ea,d0),
	HX_("readByte",7e,f9,1a,69),
	HX_("readBytes",35,55,7f,8e),
	HX_("readDouble",07,0f,47,2c),
	HX_("readFloat",66,12,7e,d3),
	HX_("readInt",39,b3,c9,02),
	HX_("readMultiByte",eb,7f,c9,15),
	HX_("readObject",b5,62,bb,0e),
	HX_("readShort",46,d1,0e,4d),
	HX_("readUnsignedByte",13,0b,ce,9b),
	HX_("readUnsignedInt",44,ab,4f,05),
	HX_("readUnsignedShort",11,22,0b,77),
	HX_("readUTF",71,b7,d2,02),
	HX_("readUTFBytes",3a,27,0f,52),
	HX_("writeBoolean",89,8f,2d,43),
	HX_("writeByte",87,13,d7,49),
	HX_("writeBytes",0c,03,5a,52),
	HX_("writeDouble",50,7d,c4,c7),
	HX_("writeFloat",3d,c0,58,97),
	HX_("writeInt",50,6d,f0,23),
	HX_("writeMultiByte",42,65,25,ec),
	HX_("writeObject",fe,d0,38,aa),
	HX_("writeShort",1d,7f,e9,10),
	HX_("writeUnsignedInt",5b,d4,70,16),
	HX_("writeUTF",88,71,f9,23),
	HX_("writeUTFBytes",c3,79,7b,da),
	HX_("__cleanSocket",fc,fe,55,5c),
	HX_("socket_onClose",4d,06,6f,87),
	HX_("socket_onError",5d,ba,35,b2),
	HX_("socket_onMessage",9c,b3,e5,a6),
	HX_("socket_onOpen",d5,be,6b,8b),
	HX_("this_onEnterFrame",b5,0f,1f,8e),
	HX_("get_bytesAvailable",a7,2c,37,37),
	HX_("get_bytesPending",b5,57,eb,1e),
	HX_("get_connected",a0,b6,5a,64),
	HX_("get_endian",64,08,10,eb),
	HX_("set_endian",d8,a6,8d,ee),
	::String(null()) };

::hx::Class Socket_obj::__mClass;

void Socket_obj::__register()
{
	Socket_obj _hx_dummy;
	Socket_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.net.Socket",e2,67,c5,a1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Socket_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Socket_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Socket_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Socket_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Socket_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1b3c8c666d2a175c_127_boot)
HXDLIN( 127)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("secure",77,60,4c,64), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))))));
            	}
}

} // end namespace openfl
} // end namespace net
