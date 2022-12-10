#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_events_DatagramSocketDataEvent
#include <openfl/events/DatagramSocketDataEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_72b63e99934033b6_65_new,"openfl.events.DatagramSocketDataEvent","new",0x42f15377,"openfl.events.DatagramSocketDataEvent.new","openfl/events/DatagramSocketDataEvent.hx",65,0xe96aa1f9)
HX_LOCAL_STACK_FRAME(_hx_pos_72b63e99934033b6_80_clone,"openfl.events.DatagramSocketDataEvent","clone",0x8fb8ca34,"openfl.events.DatagramSocketDataEvent.clone","openfl/events/DatagramSocketDataEvent.hx",80,0xe96aa1f9)
HX_LOCAL_STACK_FRAME(_hx_pos_72b63e99934033b6_91_toString,"openfl.events.DatagramSocketDataEvent","toString",0x4f2bba35,"openfl.events.DatagramSocketDataEvent.toString","openfl/events/DatagramSocketDataEvent.hx",91,0xe96aa1f9)
HX_LOCAL_STACK_FRAME(_hx_pos_72b63e99934033b6_17_boot,"openfl.events.DatagramSocketDataEvent","boot",0x4850b53b,"openfl.events.DatagramSocketDataEvent.boot","openfl/events/DatagramSocketDataEvent.hx",17,0xe96aa1f9)
namespace openfl{
namespace events{

void DatagramSocketDataEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_srcAddress,::hx::Null< int >  __o_srcPort,::String __o_dstAddress,::hx::Null< int >  __o_dstPort, ::openfl::utils::ByteArrayData data){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            		::String srcAddress = __o_srcAddress;
            		if (::hx::IsNull(__o_srcAddress)) srcAddress = HX_("",00,00,00,00);
            		int srcPort = __o_srcPort.Default(0);
            		::String dstAddress = __o_dstAddress;
            		if (::hx::IsNull(__o_dstAddress)) dstAddress = HX_("",00,00,00,00);
            		int dstPort = __o_dstPort.Default(0);
            	HX_STACKFRAME(&_hx_pos_72b63e99934033b6_65_new)
HXLINE(  66)		super::__construct(type,bubbles,cancelable);
HXLINE(  67)		this->data = data;
HXLINE(  68)		this->dstAddress = dstAddress;
HXLINE(  69)		this->dstPort = dstPort;
HXLINE(  70)		this->srcAddress = srcAddress;
HXLINE(  71)		this->srcPort = srcPort;
            	}

Dynamic DatagramSocketDataEvent_obj::__CreateEmpty() { return new DatagramSocketDataEvent_obj; }

void *DatagramSocketDataEvent_obj::_hx_vtable = 0;

Dynamic DatagramSocketDataEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DatagramSocketDataEvent_obj > _hx_result = new DatagramSocketDataEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool DatagramSocketDataEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x07af7333) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x07af7333;
	} else {
		return inClassId==(int)0x08ec4c31;
	}
}

 ::openfl::events::Event DatagramSocketDataEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_72b63e99934033b6_80_clone)
HXDLIN(  80)		return  ::openfl::events::DatagramSocketDataEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->srcAddress,this->srcPort,this->dstAddress,this->dstPort,this->data);
            	}


::String DatagramSocketDataEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_72b63e99934033b6_91_toString)
HXLINE(  92)		::String _hx_tmp = ((HX_("[DatagramSocketDataEvent type=",24,d3,42,e5) + this->type) + HX_(" bubbles=",16,5f,ba,28));
HXDLIN(  92)		::String _hx_tmp1 = ((_hx_tmp + ::Std_obj::string(this->bubbles)) + HX_(" cancelable=",89,25,e0,5d));
HXDLIN(  92)		::String _hx_tmp2 = ((_hx_tmp1 + ::Std_obj::string(this->cancelable)) + HX_(" srcAddress=",ed,a6,06,f7));
HXDLIN(  92)		::String _hx_tmp3 = ((((((((_hx_tmp2 + this->srcAddress) + HX_(" srcPort=",38,fc,7d,83)) + this->srcPort) + HX_(" dstAddress=",0e,cf,50,2c)) + this->dstAddress) + HX_(" dstPort=",77,e5,2f,1f)) + this->dstPort) + HX_(" data=",b3,9a,f3,9f));
HXDLIN(  92)		::String _hx_tmp4;
HXDLIN(  92)		if (::hx::IsNull( this->data )) {
HXLINE(  92)			_hx_tmp4 = HX_("null",87,9e,0e,49);
            		}
            		else {
HXLINE(  92)			_hx_tmp4 = this->data->toString();
            		}
HXLINE(  91)		return ((_hx_tmp3 + _hx_tmp4) + HX_("]",5d,00,00,00));
            	}


::String DatagramSocketDataEvent_obj::DATA;


::hx::ObjectPtr< DatagramSocketDataEvent_obj > DatagramSocketDataEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_srcAddress,::hx::Null< int >  __o_srcPort,::String __o_dstAddress,::hx::Null< int >  __o_dstPort, ::openfl::utils::ByteArrayData data) {
	::hx::ObjectPtr< DatagramSocketDataEvent_obj > __this = new DatagramSocketDataEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_srcAddress,__o_srcPort,__o_dstAddress,__o_dstPort,data);
	return __this;
}

::hx::ObjectPtr< DatagramSocketDataEvent_obj > DatagramSocketDataEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_srcAddress,::hx::Null< int >  __o_srcPort,::String __o_dstAddress,::hx::Null< int >  __o_dstPort, ::openfl::utils::ByteArrayData data) {
	DatagramSocketDataEvent_obj *__this = (DatagramSocketDataEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DatagramSocketDataEvent_obj), true, "openfl.events.DatagramSocketDataEvent"));
	*(void **)__this = DatagramSocketDataEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_srcAddress,__o_srcPort,__o_dstAddress,__o_dstPort,data);
	return __this;
}

DatagramSocketDataEvent_obj::DatagramSocketDataEvent_obj()
{
}

void DatagramSocketDataEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DatagramSocketDataEvent);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(dstAddress,"dstAddress");
	HX_MARK_MEMBER_NAME(dstPort,"dstPort");
	HX_MARK_MEMBER_NAME(srcAddress,"srcAddress");
	HX_MARK_MEMBER_NAME(srcPort,"srcPort");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DatagramSocketDataEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(dstAddress,"dstAddress");
	HX_VISIT_MEMBER_NAME(dstPort,"dstPort");
	HX_VISIT_MEMBER_NAME(srcAddress,"srcAddress");
	HX_VISIT_MEMBER_NAME(srcPort,"srcPort");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DatagramSocketDataEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dstPort") ) { return ::hx::Val( dstPort ); }
		if (HX_FIELD_EQ(inName,"srcPort") ) { return ::hx::Val( srcPort ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dstAddress") ) { return ::hx::Val( dstAddress ); }
		if (HX_FIELD_EQ(inName,"srcAddress") ) { return ::hx::Val( srcAddress ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DatagramSocketDataEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dstPort") ) { dstPort=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"srcPort") ) { srcPort=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dstAddress") ) { dstAddress=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"srcAddress") ) { srcAddress=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DatagramSocketDataEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("dstAddress",2f,4e,c1,34));
	outFields->push(HX_("dstPort",26,dc,1d,39));
	outFields->push(HX_("srcAddress",30,57,d3,d9));
	outFields->push(HX_("srcPort",85,98,b4,78));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DatagramSocketDataEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::utils::ByteArrayData */ ,(int)offsetof(DatagramSocketDataEvent_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsString,(int)offsetof(DatagramSocketDataEvent_obj,dstAddress),HX_("dstAddress",2f,4e,c1,34)},
	{::hx::fsInt,(int)offsetof(DatagramSocketDataEvent_obj,dstPort),HX_("dstPort",26,dc,1d,39)},
	{::hx::fsString,(int)offsetof(DatagramSocketDataEvent_obj,srcAddress),HX_("srcAddress",30,57,d3,d9)},
	{::hx::fsInt,(int)offsetof(DatagramSocketDataEvent_obj,srcPort),HX_("srcPort",85,98,b4,78)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DatagramSocketDataEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &DatagramSocketDataEvent_obj::DATA,HX_("DATA",2a,1e,24,2d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DatagramSocketDataEvent_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	HX_("dstAddress",2f,4e,c1,34),
	HX_("dstPort",26,dc,1d,39),
	HX_("srcAddress",30,57,d3,d9),
	HX_("srcPort",85,98,b4,78),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

static void DatagramSocketDataEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DatagramSocketDataEvent_obj::DATA,"DATA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DatagramSocketDataEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DatagramSocketDataEvent_obj::DATA,"DATA");
};

#endif

::hx::Class DatagramSocketDataEvent_obj::__mClass;

static ::String DatagramSocketDataEvent_obj_sStaticFields[] = {
	HX_("DATA",2a,1e,24,2d),
	::String(null())
};

void DatagramSocketDataEvent_obj::__register()
{
	DatagramSocketDataEvent_obj _hx_dummy;
	DatagramSocketDataEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.DatagramSocketDataEvent",05,cc,de,3d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DatagramSocketDataEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DatagramSocketDataEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DatagramSocketDataEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DatagramSocketDataEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DatagramSocketDataEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DatagramSocketDataEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DatagramSocketDataEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DatagramSocketDataEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_72b63e99934033b6_17_boot)
HXDLIN(  17)		DATA = HX_("data",2a,56,63,42);
            	}
}

} // end namespace openfl
} // end namespace events
