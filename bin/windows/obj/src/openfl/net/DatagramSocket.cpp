#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
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
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif
#ifndef INCLUDED_openfl_events_DatagramSocketDataEvent
#include <openfl/events/DatagramSocketDataEvent.h>
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
#ifndef INCLUDED_sys_net_Address
#include <sys/net/Address.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
#ifndef INCLUDED_sys_net_UdpSocket
#include <sys/net/UdpSocket.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d87cdb9c6230c044_51_new,"openfl.net.DatagramSocket","new",0x43051b35,"openfl.net.DatagramSocket.new","openfl/net/DatagramSocket.hx",51,0xb8933b19)
HX_LOCAL_STACK_FRAME(_hx_pos_d87cdb9c6230c044_135_bind,"openfl.net.DatagramSocket","bind",0x59872548,"openfl.net.DatagramSocket.bind","openfl/net/DatagramSocket.hx",135,0xb8933b19)
HX_LOCAL_STACK_FRAME(_hx_pos_d87cdb9c6230c044_164_close,"openfl.net.DatagramSocket","close",0x921c81cd,"openfl.net.DatagramSocket.close","openfl/net/DatagramSocket.hx",164,0xb8933b19)
HX_LOCAL_STACK_FRAME(_hx_pos_d87cdb9c6230c044_200_connect,"openfl.net.DatagramSocket","connect",0x4ff8153f,"openfl.net.DatagramSocket.connect","openfl/net/DatagramSocket.hx",200,0xb8933b19)
HX_LOCAL_STACK_FRAME(_hx_pos_d87cdb9c6230c044_231_receive,"openfl.net.DatagramSocket","receive",0x64d03b38,"openfl.net.DatagramSocket.receive","openfl/net/DatagramSocket.hx",231,0xb8933b19)
HX_LOCAL_STACK_FRAME(_hx_pos_d87cdb9c6230c044_266_send,"openfl.net.DatagramSocket","send",0x64c0bcd3,"openfl.net.DatagramSocket.send","openfl/net/DatagramSocket.hx",266,0xb8933b19)
HX_LOCAL_STACK_FRAME(_hx_pos_d87cdb9c6230c044_314_addEventListener,"openfl.net.DatagramSocket","addEventListener",0x2862dfd8,"openfl.net.DatagramSocket.addEventListener","openfl/net/DatagramSocket.hx",314,0xb8933b19)
HX_LOCAL_STACK_FRAME(_hx_pos_d87cdb9c6230c044_323_removeEventListener,"openfl.net.DatagramSocket","removeEventListener",0x39b88c9f,"openfl.net.DatagramSocket.removeEventListener","openfl/net/DatagramSocket.hx",323,0xb8933b19)
HX_LOCAL_STACK_FRAME(_hx_pos_d87cdb9c6230c044_333___onFrameUpdate,"openfl.net.DatagramSocket","__onFrameUpdate",0x058a5e6c,"openfl.net.DatagramSocket.__onFrameUpdate","openfl/net/DatagramSocket.hx",333,0xb8933b19)
HX_LOCAL_STACK_FRAME(_hx_pos_d87cdb9c6230c044_370_get_connected,"openfl.net.DatagramSocket","get_connected",0xd25bbdb5,"openfl.net.DatagramSocket.get_connected","openfl/net/DatagramSocket.hx",370,0xb8933b19)
HX_LOCAL_STACK_FRAME(_hx_pos_d87cdb9c6230c044_375_get_localAddress,"openfl.net.DatagramSocket","get_localAddress",0xaeba641d,"openfl.net.DatagramSocket.get_localAddress","openfl/net/DatagramSocket.hx",375,0xb8933b19)
HX_LOCAL_STACK_FRAME(_hx_pos_d87cdb9c6230c044_384_get_localPort,"openfl.net.DatagramSocket","get_localPort",0x3c03e578,"openfl.net.DatagramSocket.get_localPort","openfl/net/DatagramSocket.hx",384,0xb8933b19)
HX_LOCAL_STACK_FRAME(_hx_pos_d87cdb9c6230c044_393_get_remoteAddress,"openfl.net.DatagramSocket","get_remoteAddress",0xbe4dbcba,"openfl.net.DatagramSocket.get_remoteAddress","openfl/net/DatagramSocket.hx",393,0xb8933b19)
HX_LOCAL_STACK_FRAME(_hx_pos_d87cdb9c6230c044_402_get_remotePort,"openfl.net.DatagramSocket","get_remotePort",0x439fb8bb,"openfl.net.DatagramSocket.get_remotePort","openfl/net/DatagramSocket.hx",402,0xb8933b19)
HX_LOCAL_STACK_FRAME(_hx_pos_d87cdb9c6230c044_56_boot,"openfl.net.DatagramSocket","boot",0x598bb3bd,"openfl.net.DatagramSocket.boot","openfl/net/DatagramSocket.hx",56,0xb8933b19)
namespace openfl{
namespace net{

void DatagramSocket_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_d87cdb9c6230c044_51_new)
HXLINE(  91)		this->_hx___iBytes = ::haxe::io::Bytes_obj::alloc(4096);
HXLINE(  99)		super::__construct(null());
HXLINE( 100)		this->_hx___udpSocket =  ::sys::net::UdpSocket_obj::__alloc( HX_CTX );
HXLINE( 101)		this->_hx___isReceiving = false;
HXLINE( 102)		this->_hx___udpSocket->setBlocking(false);
HXLINE( 103)		 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN( 103)		this->_hx___buffer = this1;
            	}

Dynamic DatagramSocket_obj::__CreateEmpty() { return new DatagramSocket_obj; }

void *DatagramSocket_obj::_hx_vtable = 0;

Dynamic DatagramSocket_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DatagramSocket_obj > _hx_result = new DatagramSocket_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DatagramSocket_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x03b9d0dd) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x03b9d0dd;
	} else {
		return inClassId==(int)0x0c89e854;
	}
}

void DatagramSocket_obj::bind(::hx::Null< int >  __o_localPort,::String __o_localAddress){
            		int localPort = __o_localPort.Default(0);
            		::String localAddress = __o_localAddress;
            		if (::hx::IsNull(__o_localAddress)) localAddress = HX_("0.0.0.0",76,1a,39,f2);
            	HX_GC_STACKFRAME(&_hx_pos_d87cdb9c6230c044_135_bind)
HXLINE( 136)		bool _hx_tmp;
HXDLIN( 136)		if ((localPort <= 65535)) {
HXLINE( 136)			_hx_tmp = (localPort < 0);
            		}
            		else {
HXLINE( 136)			_hx_tmp = true;
            		}
HXDLIN( 136)		if (_hx_tmp) {
HXLINE( 138)			HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,HX_("Invalid socket port number specified.",5a,8e,7c,a7)));
            		}
HXLINE( 140)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 142)			 ::sys::net::UdpSocket _hx_tmp = this->_hx___udpSocket;
HXDLIN( 142)			_hx_tmp->bind( ::sys::net::Host_obj::__alloc( HX_CTX ,localAddress),localPort);
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


HX_DEFINE_DYNAMIC_FUNC2(DatagramSocket_obj,bind,(void))

void DatagramSocket_obj::close(){
            	HX_STACKFRAME(&_hx_pos_d87cdb9c6230c044_164_close)
HXLINE( 165)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 167)			this->_hx___udpSocket->close();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 169)				{
HXLINE( 169)					null();
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 173)		this->_hx___isReceiving = false;
HXLINE( 174)		this->bound = false;
HXLINE( 175)		::openfl::Lib_obj::get_current()->removeEventListener(HX_("enterFrame",f5,03,50,02),this->_hx___onFrameUpdate_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DatagramSocket_obj,close,(void))

void DatagramSocket_obj::connect(::String remoteAddress,int remotePort){
            	HX_GC_STACKFRAME(&_hx_pos_d87cdb9c6230c044_200_connect)
HXLINE( 201)		bool _hx_tmp;
HXDLIN( 201)		if ((this->get_localPort() <= 65535)) {
HXLINE( 201)			_hx_tmp = (this->get_localPort() < 0);
            		}
            		else {
HXLINE( 201)			_hx_tmp = true;
            		}
HXDLIN( 201)		if (_hx_tmp) {
HXLINE( 203)			HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,HX_("Invalid socket port number specified.",5a,8e,7c,a7)));
            		}
HXLINE( 206)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 208)			 ::sys::net::UdpSocket _hx_tmp = this->_hx___udpSocket;
HXDLIN( 208)			_hx_tmp->connect( ::sys::net::Host_obj::__alloc( HX_CTX ,remoteAddress),remotePort);
HXLINE( 209)			this->bound = true;
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 211)				{
HXLINE( 211)					null();
            				}
HXDLIN( 211)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 213)				 ::Dynamic _hx_switch_0 = e;
            				if (  (_hx_switch_0==HX_("Bind failed",a0,21,00,2e)) ){
HXLINE( 216)					HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
HXDLIN( 216)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("Unresolved host",77,5e,1e,d3)) ){
HXLINE( 218)					HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("One of the parameters is invalid",59,8f,fd,cd)));
HXDLIN( 218)					goto _hx_goto_4;
            				}
            				_hx_goto_4:;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DatagramSocket_obj,connect,(void))

void DatagramSocket_obj::receive(){
            	HX_STACKFRAME(&_hx_pos_d87cdb9c6230c044_231_receive)
HXDLIN( 231)		this->_hx___isReceiving = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DatagramSocket_obj,receive,(void))

void DatagramSocket_obj::send( ::openfl::utils::ByteArrayData bytes,::hx::Null< int >  __o_offset,::hx::Null< int >  __o_length,::String address,::hx::Null< int >  __o_port){
            		int offset = __o_offset.Default(0);
            		int length = __o_length.Default(0);
            		int port = __o_port.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_d87cdb9c6230c044_266_send)
HXLINE( 267)		bool _hx_tmp;
HXDLIN( 267)		if ((this->get_localPort() <= 65535)) {
HXLINE( 267)			_hx_tmp = (this->get_localPort() < 0);
            		}
            		else {
HXLINE( 267)			_hx_tmp = true;
            		}
HXDLIN( 267)		if (_hx_tmp) {
HXLINE( 269)			HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,HX_("Invalid socket port number specified.",5a,8e,7c,a7)));
            		}
HXLINE( 272)		int a = (offset + length);
HXDLIN( 272)		int b = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(bytes);
HXDLIN( 272)		bool aNeg = (a < 0);
HXDLIN( 272)		bool bNeg = (b < 0);
HXDLIN( 272)		bool _hx_tmp1;
HXDLIN( 272)		if ((aNeg != bNeg)) {
HXLINE( 272)			_hx_tmp1 = aNeg;
            		}
            		else {
HXLINE( 272)			_hx_tmp1 = (a > b);
            		}
HXDLIN( 272)		if (_hx_tmp1) {
HXLINE( 274)			HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,HX_("The supplied index is out of bounds.",17,96,1b,51)));
            		}
HXLINE( 276)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 278)			if ((length == 0)) {
HXLINE( 280)				length = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(bytes);
            			}
HXLINE( 282)			if (::hx::IsNull( address )) {
HXLINE( 284)				if (this->get_connected()) {
HXLINE( 286)					this->_hx___udpSocket->output->writeBytes(( ( ::haxe::io::Bytes)(bytes) ),offset,length);
HXLINE( 287)					this->_hx___udpSocket->output->flush();
            				}
            				else {
HXLINE( 291)					HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("One of the parameters is invalid",59,8f,fd,cd)));
            				}
            			}
            			else {
HXLINE( 296)				if (this->get_connected()) {
HXLINE( 298)					HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Cannot send data to a location when connected.",89,34,33,91)));
            				}
HXLINE( 300)				 ::sys::net::Address sAddress =  ::sys::net::Address_obj::__alloc( HX_CTX );
HXLINE( 301)				sAddress->port = port;
HXLINE( 302)				sAddress->host =  ::sys::net::Host_obj::__alloc( HX_CTX ,address)->ip;
HXLINE( 303)				this->_hx___udpSocket->sendTo(( ( ::haxe::io::Bytes)(bytes) ),offset,length,sAddress);
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 306)				{
HXLINE( 306)					null();
            				}
HXLINE( 308)				HX_STACK_DO_THROW( ::openfl::errors::IOError_obj::__alloc( HX_CTX ,HX_("Operation attempted on invalid socket.",9e,8c,0a,27)));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(DatagramSocket_obj,send,(void))

void DatagramSocket_obj::addEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  __o_useCapture,::hx::Null< int >  __o_priority,::hx::Null< bool >  __o_useWeakReference){
            		bool useCapture = __o_useCapture.Default(false);
            		int priority = __o_priority.Default(0);
            		bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_STACKFRAME(&_hx_pos_d87cdb9c6230c044_314_addEventListener)
HXLINE( 315)		::String type = _tmp_type;
HXDLIN( 315)		 ::Dynamic listener = _tmp_listener;
HXDLIN( 315)		this->super::addEventListener(type,listener,useCapture,priority,useWeakReference);
HXLINE( 316)		if ((type == HX_("data",2a,56,63,42))) {
HXLINE( 318)			::openfl::Lib_obj::get_current()->addEventListener(HX_("enterFrame",f5,03,50,02),this->_hx___onFrameUpdate_dyn(),null(),null(),null());
            		}
            	}


void DatagramSocket_obj::removeEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  __o_useCapture){
            		bool useCapture = __o_useCapture.Default(false);
            	HX_STACKFRAME(&_hx_pos_d87cdb9c6230c044_323_removeEventListener)
HXLINE( 324)		::String type = _tmp_type;
HXDLIN( 324)		 ::Dynamic listener = _tmp_listener;
HXDLIN( 324)		this->super::removeEventListener(type,listener,useCapture);
HXLINE( 325)		if ((type == HX_("data",2a,56,63,42))) {
HXLINE( 327)			::openfl::Lib_obj::get_current()->removeEventListener(HX_("enterFrame",f5,03,50,02),this->_hx___onFrameUpdate_dyn(),null());
            		}
            	}


void DatagramSocket_obj::_hx___onFrameUpdate( ::openfl::events::Event e){
            	HX_GC_STACKFRAME(&_hx_pos_d87cdb9c6230c044_333___onFrameUpdate)
HXDLIN( 333)		while(this->_hx___isReceiving){
HXLINE( 335)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 338)				 ::sys::net::Address address =  ::sys::net::Address_obj::__alloc( HX_CTX );
HXLINE( 339)				int bytesReady = this->_hx___udpSocket->readFrom(this->_hx___iBytes,0,this->_hx___iBytes->length,address);
HXLINE( 340)				{
HXLINE( 340)					 ::openfl::utils::ByteArrayData this1 = this->_hx___buffer;
HXDLIN( 340)					this1->writeBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(this->_hx___iBytes),0,bytesReady);
            				}
HXLINE( 341)				this->_hx___buffer->position = 0;
HXLINE( 342)				::String _hx_tmp = address->getHost()->toString();
HXDLIN( 342)				int address1 = address->port;
HXLINE( 343)				::String _hx_tmp1 = ( ( ::sys::net::Host)(this->_hx___udpSocket->host()->__Field(HX_("host",68,cf,12,45),::hx::paccDynamic)) )->toString();
HXLINE( 342)				this->dispatchEvent( ::openfl::events::DatagramSocketDataEvent_obj::__alloc( HX_CTX ,HX_("data",2a,56,63,42),false,false,_hx_tmp,address1,_hx_tmp1,this->_hx___udpSocket->host()->__Field(HX_("port",81,83,5c,4a),::hx::paccDynamic),this->_hx___buffer));
HXLINE( 344)				this->_hx___buffer->clear();
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 346)					{
HXLINE( 346)						null();
            					}
HXLINE( 335)					if (::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::haxe::io::Error >())) {
HXLINE( 348)						goto _hx_goto_10;
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		_hx_goto_10:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DatagramSocket_obj,_hx___onFrameUpdate,(void))

bool DatagramSocket_obj::get_connected(){
            	HX_STACKFRAME(&_hx_pos_d87cdb9c6230c044_370_get_connected)
HXDLIN( 370)		return ::hx::IsNotNull( this->_hx___udpSocket->peer() );
            	}


HX_DEFINE_DYNAMIC_FUNC0(DatagramSocket_obj,get_connected,return )

::String DatagramSocket_obj::get_localAddress(){
            	HX_STACKFRAME(&_hx_pos_d87cdb9c6230c044_375_get_localAddress)
HXLINE( 376)		if (this->bound) {
HXLINE( 378)			return ( ( ::sys::net::Host)(this->_hx___udpSocket->host()->__Field(HX_("host",68,cf,12,45),::hx::paccDynamic)) )->toString();
            		}
HXLINE( 380)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DatagramSocket_obj,get_localAddress,return )

int DatagramSocket_obj::get_localPort(){
            	HX_STACKFRAME(&_hx_pos_d87cdb9c6230c044_384_get_localPort)
HXLINE( 385)		if (this->bound) {
HXLINE( 387)			return ( (int)(this->_hx___udpSocket->host()->__Field(HX_("port",81,83,5c,4a),::hx::paccDynamic)) );
            		}
HXLINE( 389)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DatagramSocket_obj,get_localPort,return )

::String DatagramSocket_obj::get_remoteAddress(){
            	HX_STACKFRAME(&_hx_pos_d87cdb9c6230c044_393_get_remoteAddress)
HXLINE( 394)		if (this->get_connected()) {
HXLINE( 396)			return ( ( ::sys::net::Host)(this->_hx___udpSocket->peer()->__Field(HX_("host",68,cf,12,45),::hx::paccDynamic)) )->toString();
            		}
HXLINE( 398)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DatagramSocket_obj,get_remoteAddress,return )

int DatagramSocket_obj::get_remotePort(){
            	HX_STACKFRAME(&_hx_pos_d87cdb9c6230c044_402_get_remotePort)
HXLINE( 403)		if (this->get_connected()) {
HXLINE( 405)			return ( (int)(this->_hx___udpSocket->peer()->__Field(HX_("port",81,83,5c,4a),::hx::paccDynamic)) );
            		}
HXLINE( 407)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DatagramSocket_obj,get_remotePort,return )

bool DatagramSocket_obj::isSupported;


::hx::ObjectPtr< DatagramSocket_obj > DatagramSocket_obj::__new() {
	::hx::ObjectPtr< DatagramSocket_obj > __this = new DatagramSocket_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DatagramSocket_obj > DatagramSocket_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DatagramSocket_obj *__this = (DatagramSocket_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DatagramSocket_obj), true, "openfl.net.DatagramSocket"));
	*(void **)__this = DatagramSocket_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DatagramSocket_obj::DatagramSocket_obj()
{
}

void DatagramSocket_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DatagramSocket);
	HX_MARK_MEMBER_NAME(bound,"bound");
	HX_MARK_MEMBER_NAME(connected,"connected");
	HX_MARK_MEMBER_NAME(localAddress,"localAddress");
	HX_MARK_MEMBER_NAME(localPort,"localPort");
	HX_MARK_MEMBER_NAME(remoteAddress,"remoteAddress");
	HX_MARK_MEMBER_NAME(remotePort,"remotePort");
	HX_MARK_MEMBER_NAME(_hx___udpSocket,"__udpSocket");
	HX_MARK_MEMBER_NAME(_hx___isReceiving,"__isReceiving");
	HX_MARK_MEMBER_NAME(_hx___iBytes,"__iBytes");
	HX_MARK_MEMBER_NAME(_hx___buffer,"__buffer");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DatagramSocket_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bound,"bound");
	HX_VISIT_MEMBER_NAME(connected,"connected");
	HX_VISIT_MEMBER_NAME(localAddress,"localAddress");
	HX_VISIT_MEMBER_NAME(localPort,"localPort");
	HX_VISIT_MEMBER_NAME(remoteAddress,"remoteAddress");
	HX_VISIT_MEMBER_NAME(remotePort,"remotePort");
	HX_VISIT_MEMBER_NAME(_hx___udpSocket,"__udpSocket");
	HX_VISIT_MEMBER_NAME(_hx___isReceiving,"__isReceiving");
	HX_VISIT_MEMBER_NAME(_hx___iBytes,"__iBytes");
	HX_VISIT_MEMBER_NAME(_hx___buffer,"__buffer");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DatagramSocket_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return ::hx::Val( bind_dyn() ); }
		if (HX_FIELD_EQ(inName,"send") ) { return ::hx::Val( send_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { return ::hx::Val( bound ); }
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"connect") ) { return ::hx::Val( connect_dyn() ); }
		if (HX_FIELD_EQ(inName,"receive") ) { return ::hx::Val( receive_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__iBytes") ) { return ::hx::Val( _hx___iBytes ); }
		if (HX_FIELD_EQ(inName,"__buffer") ) { return ::hx::Val( _hx___buffer ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_connected() : connected ); }
		if (HX_FIELD_EQ(inName,"localPort") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_localPort() : localPort ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"remotePort") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_remotePort() : remotePort ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__udpSocket") ) { return ::hx::Val( _hx___udpSocket ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"localAddress") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_localAddress() : localAddress ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"remoteAddress") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_remoteAddress() : remoteAddress ); }
		if (HX_FIELD_EQ(inName,"__isReceiving") ) { return ::hx::Val( _hx___isReceiving ); }
		if (HX_FIELD_EQ(inName,"get_connected") ) { return ::hx::Val( get_connected_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_localPort") ) { return ::hx::Val( get_localPort_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_remotePort") ) { return ::hx::Val( get_remotePort_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__onFrameUpdate") ) { return ::hx::Val( _hx___onFrameUpdate_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return ::hx::Val( addEventListener_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_localAddress") ) { return ::hx::Val( get_localAddress_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_remoteAddress") ) { return ::hx::Val( get_remoteAddress_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return ::hx::Val( removeEventListener_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DatagramSocket_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { outValue = ( isSupported ); return true; }
	}
	return false;
}

::hx::Val DatagramSocket_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { bound=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__iBytes") ) { _hx___iBytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__buffer") ) { _hx___buffer=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localPort") ) { localPort=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"remotePort") ) { remotePort=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__udpSocket") ) { _hx___udpSocket=inValue.Cast<  ::sys::net::UdpSocket >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"localAddress") ) { localAddress=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"remoteAddress") ) { remoteAddress=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isReceiving") ) { _hx___isReceiving=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DatagramSocket_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { isSupported=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void DatagramSocket_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bound",3e,b0,fc,b6));
	outFields->push(HX_("connected",c9,e2,f6,a2));
	outFields->push(HX_("localAddress",89,a3,1c,73));
	outFields->push(HX_("localPort",8c,0a,9f,0c));
	outFields->push(HX_("remoteAddress",ce,fb,e2,cf));
	outFields->push(HX_("remotePort",27,05,c5,fa));
	outFields->push(HX_("__udpSocket",b4,ce,74,7a));
	outFields->push(HX_("__isReceiving",76,41,9b,e1));
	outFields->push(HX_("__iBytes",62,c6,6d,f4));
	outFields->push(HX_("__buffer",20,28,c4,78));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DatagramSocket_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(DatagramSocket_obj,bound),HX_("bound",3e,b0,fc,b6)},
	{::hx::fsBool,(int)offsetof(DatagramSocket_obj,connected),HX_("connected",c9,e2,f6,a2)},
	{::hx::fsString,(int)offsetof(DatagramSocket_obj,localAddress),HX_("localAddress",89,a3,1c,73)},
	{::hx::fsInt,(int)offsetof(DatagramSocket_obj,localPort),HX_("localPort",8c,0a,9f,0c)},
	{::hx::fsString,(int)offsetof(DatagramSocket_obj,remoteAddress),HX_("remoteAddress",ce,fb,e2,cf)},
	{::hx::fsInt,(int)offsetof(DatagramSocket_obj,remotePort),HX_("remotePort",27,05,c5,fa)},
	{::hx::fsObject /*  ::sys::net::UdpSocket */ ,(int)offsetof(DatagramSocket_obj,_hx___udpSocket),HX_("__udpSocket",b4,ce,74,7a)},
	{::hx::fsBool,(int)offsetof(DatagramSocket_obj,_hx___isReceiving),HX_("__isReceiving",76,41,9b,e1)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(DatagramSocket_obj,_hx___iBytes),HX_("__iBytes",62,c6,6d,f4)},
	{::hx::fsObject /*  ::openfl::utils::ByteArrayData */ ,(int)offsetof(DatagramSocket_obj,_hx___buffer),HX_("__buffer",20,28,c4,78)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DatagramSocket_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &DatagramSocket_obj::isSupported,HX_("isSupported",e4,7c,8a,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DatagramSocket_obj_sMemberFields[] = {
	HX_("bound",3e,b0,fc,b6),
	HX_("connected",c9,e2,f6,a2),
	HX_("localAddress",89,a3,1c,73),
	HX_("localPort",8c,0a,9f,0c),
	HX_("remoteAddress",ce,fb,e2,cf),
	HX_("remotePort",27,05,c5,fa),
	HX_("__udpSocket",b4,ce,74,7a),
	HX_("__isReceiving",76,41,9b,e1),
	HX_("__iBytes",62,c6,6d,f4),
	HX_("__buffer",20,28,c4,78),
	HX_("bind",bd,f5,16,41),
	HX_("close",b8,17,63,48),
	HX_("connect",ea,3b,80,15),
	HX_("receive",e3,61,58,2a),
	HX_("send",48,8d,50,4c),
	HX_("addEventListener",cd,0b,64,f1),
	HX_("removeEventListener",ca,87,75,55),
	HX_("__onFrameUpdate",17,a8,e9,4f),
	HX_("get_connected",a0,b6,5a,64),
	HX_("get_localAddress",12,90,bb,77),
	HX_("get_localPort",63,de,02,ce),
	HX_("get_remoteAddress",25,07,53,d6),
	HX_("get_remotePort",70,8d,ba,70),
	::String(null()) };

static void DatagramSocket_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DatagramSocket_obj::isSupported,"isSupported");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DatagramSocket_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DatagramSocket_obj::isSupported,"isSupported");
};

#endif

::hx::Class DatagramSocket_obj::__mClass;

static ::String DatagramSocket_obj_sStaticFields[] = {
	HX_("isSupported",e4,7c,8a,f3),
	::String(null())
};

void DatagramSocket_obj::__register()
{
	DatagramSocket_obj _hx_dummy;
	DatagramSocket_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.net.DatagramSocket",c3,5c,c8,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DatagramSocket_obj::__GetStatic;
	__mClass->mSetStaticField = &DatagramSocket_obj::__SetStatic;
	__mClass->mMarkFunc = DatagramSocket_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DatagramSocket_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DatagramSocket_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DatagramSocket_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DatagramSocket_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DatagramSocket_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DatagramSocket_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DatagramSocket_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d87cdb9c6230c044_56_boot)
HXDLIN(  56)		isSupported = true;
            	}
}

} // end namespace openfl
} // end namespace net
