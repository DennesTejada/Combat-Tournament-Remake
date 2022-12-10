#include <hxcpp.h>

#ifndef INCLUDED_engine_events_NetworkEvent
#include <engine/events/NetworkEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_utils__Object_Object_Impl_
#include <openfl/utils/_Object/Object_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_085486d91b2989b7_15_new,"engine.events.NetworkEvent","new",0xd4d093e7,"engine.events.NetworkEvent.new","engine/events/NetworkEvent.hx",15,0xcea79749)
HX_LOCAL_STACK_FRAME(_hx_pos_085486d91b2989b7_11_boot,"engine.events.NetworkEvent","boot",0x59c9d6cb,"engine.events.NetworkEvent.boot","engine/events/NetworkEvent.hx",11,0xcea79749)
namespace engine{
namespace events{

void NetworkEvent_obj::__construct(::String __o_type, ::Dynamic obj){
            		::String type = __o_type;
            		if (::hx::IsNull(__o_type)) type = HX_("null",87,9e,0e,49);
            	HX_STACKFRAME(&_hx_pos_085486d91b2989b7_15_new)
HXLINE(  16)		this->data = obj;
HXLINE(  17)		super::__construct(type,::openfl::utils::_Object::Object_Impl__obj::toBool(obj),null());
            	}

Dynamic NetworkEvent_obj::__CreateEmpty() { return new NetworkEvent_obj; }

void *NetworkEvent_obj::_hx_vtable = 0;

Dynamic NetworkEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NetworkEvent_obj > _hx_result = new NetworkEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool NetworkEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x1993f1cf;
	}
}

::String NetworkEvent_obj::ON_INPUT_UPDATE;


::hx::ObjectPtr< NetworkEvent_obj > NetworkEvent_obj::__new(::String __o_type, ::Dynamic obj) {
	::hx::ObjectPtr< NetworkEvent_obj > __this = new NetworkEvent_obj();
	__this->__construct(__o_type,obj);
	return __this;
}

::hx::ObjectPtr< NetworkEvent_obj > NetworkEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_type, ::Dynamic obj) {
	NetworkEvent_obj *__this = (NetworkEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NetworkEvent_obj), true, "engine.events.NetworkEvent"));
	*(void **)__this = NetworkEvent_obj::_hx_vtable;
	__this->__construct(__o_type,obj);
	return __this;
}

NetworkEvent_obj::NetworkEvent_obj()
{
}

void NetworkEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NetworkEvent);
	HX_MARK_MEMBER_NAME(data,"data");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NetworkEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NetworkEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
	}
	return super::__Field(inName,inCallProp);
}

bool NetworkEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"ON_INPUT_UPDATE") ) { outValue = ( ON_INPUT_UPDATE ); return true; }
	}
	return false;
}

::hx::Val NetworkEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NetworkEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"ON_INPUT_UPDATE") ) { ON_INPUT_UPDATE=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void NetworkEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NetworkEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NetworkEvent_obj,data),HX_("data",2a,56,63,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NetworkEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &NetworkEvent_obj::ON_INPUT_UPDATE,HX_("ON_INPUT_UPDATE",5e,3f,39,be)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NetworkEvent_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	::String(null()) };

static void NetworkEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NetworkEvent_obj::ON_INPUT_UPDATE,"ON_INPUT_UPDATE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NetworkEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NetworkEvent_obj::ON_INPUT_UPDATE,"ON_INPUT_UPDATE");
};

#endif

::hx::Class NetworkEvent_obj::__mClass;

static ::String NetworkEvent_obj_sStaticFields[] = {
	HX_("ON_INPUT_UPDATE",5e,3f,39,be),
	::String(null())
};

void NetworkEvent_obj::__register()
{
	NetworkEvent_obj _hx_dummy;
	NetworkEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("engine.events.NetworkEvent",75,14,19,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NetworkEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &NetworkEvent_obj::__SetStatic;
	__mClass->mMarkFunc = NetworkEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NetworkEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NetworkEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NetworkEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NetworkEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NetworkEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NetworkEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NetworkEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_085486d91b2989b7_11_boot)
HXDLIN(  11)		ON_INPUT_UPDATE = HX_("ON_INPUT_UPDATE",5e,3f,39,be);
            	}
}

} // end namespace engine
} // end namespace events
