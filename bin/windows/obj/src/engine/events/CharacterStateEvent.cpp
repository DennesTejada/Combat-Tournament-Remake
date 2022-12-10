#include <hxcpp.h>

#ifndef INCLUDED_engine_events_CharacterStateEvent
#include <engine/events/CharacterStateEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_utils__Object_Object_Impl_
#include <openfl/utils/_Object/Object_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d1065e738626c91e_23_new,"engine.events.CharacterStateEvent","new",0xa6c211fb,"engine.events.CharacterStateEvent.new","engine/events/CharacterStateEvent.hx",23,0x48488ff5)
HX_LOCAL_STACK_FRAME(_hx_pos_d1065e738626c91e_12_boot,"engine.events.CharacterStateEvent","boot",0x3b26aa37,"engine.events.CharacterStateEvent.boot","engine/events/CharacterStateEvent.hx",12,0x48488ff5)
HX_LOCAL_STACK_FRAME(_hx_pos_d1065e738626c91e_13_boot,"engine.events.CharacterStateEvent","boot",0x3b26aa37,"engine.events.CharacterStateEvent.boot","engine/events/CharacterStateEvent.hx",13,0x48488ff5)
HX_LOCAL_STACK_FRAME(_hx_pos_d1065e738626c91e_14_boot,"engine.events.CharacterStateEvent","boot",0x3b26aa37,"engine.events.CharacterStateEvent.boot","engine/events/CharacterStateEvent.hx",14,0x48488ff5)
HX_LOCAL_STACK_FRAME(_hx_pos_d1065e738626c91e_15_boot,"engine.events.CharacterStateEvent","boot",0x3b26aa37,"engine.events.CharacterStateEvent.boot","engine/events/CharacterStateEvent.hx",15,0x48488ff5)
HX_LOCAL_STACK_FRAME(_hx_pos_d1065e738626c91e_16_boot,"engine.events.CharacterStateEvent","boot",0x3b26aa37,"engine.events.CharacterStateEvent.boot","engine/events/CharacterStateEvent.hx",16,0x48488ff5)
HX_LOCAL_STACK_FRAME(_hx_pos_d1065e738626c91e_17_boot,"engine.events.CharacterStateEvent","boot",0x3b26aa37,"engine.events.CharacterStateEvent.boot","engine/events/CharacterStateEvent.hx",17,0x48488ff5)
HX_LOCAL_STACK_FRAME(_hx_pos_d1065e738626c91e_18_boot,"engine.events.CharacterStateEvent","boot",0x3b26aa37,"engine.events.CharacterStateEvent.boot","engine/events/CharacterStateEvent.hx",18,0x48488ff5)
HX_LOCAL_STACK_FRAME(_hx_pos_d1065e738626c91e_19_boot,"engine.events.CharacterStateEvent","boot",0x3b26aa37,"engine.events.CharacterStateEvent.boot","engine/events/CharacterStateEvent.hx",19,0x48488ff5)
namespace engine{
namespace events{

void CharacterStateEvent_obj::__construct(::String __o_type, ::Dynamic obj){
            		::String type = __o_type;
            		if (::hx::IsNull(__o_type)) type = HX_("null",87,9e,0e,49);
            	HX_STACKFRAME(&_hx_pos_d1065e738626c91e_23_new)
HXLINE(  24)		this->data = obj;
HXLINE(  25)		super::__construct(type,::openfl::utils::_Object::Object_Impl__obj::toBool(obj),null());
            	}

Dynamic CharacterStateEvent_obj::__CreateEmpty() { return new CharacterStateEvent_obj; }

void *CharacterStateEvent_obj::_hx_vtable = 0;

Dynamic CharacterStateEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CharacterStateEvent_obj > _hx_result = new CharacterStateEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CharacterStateEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0077d037) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0077d037;
	} else {
		return inClassId==(int)0x08ec4c31;
	}
}

::String CharacterStateEvent_obj::STANCE;

::String CharacterStateEvent_obj::RUN;

::String CharacterStateEvent_obj::START_JUMP;

::String CharacterStateEvent_obj::JUMP_UP;

::String CharacterStateEvent_obj::JUMP_DOWN;

::String CharacterStateEvent_obj::DUCK;

::String CharacterStateEvent_obj::ON_TOUCH_GROUND;

::String CharacterStateEvent_obj::ON_GOT_HIT;


::hx::ObjectPtr< CharacterStateEvent_obj > CharacterStateEvent_obj::__new(::String __o_type, ::Dynamic obj) {
	::hx::ObjectPtr< CharacterStateEvent_obj > __this = new CharacterStateEvent_obj();
	__this->__construct(__o_type,obj);
	return __this;
}

::hx::ObjectPtr< CharacterStateEvent_obj > CharacterStateEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_type, ::Dynamic obj) {
	CharacterStateEvent_obj *__this = (CharacterStateEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CharacterStateEvent_obj), true, "engine.events.CharacterStateEvent"));
	*(void **)__this = CharacterStateEvent_obj::_hx_vtable;
	__this->__construct(__o_type,obj);
	return __this;
}

CharacterStateEvent_obj::CharacterStateEvent_obj()
{
}

void CharacterStateEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CharacterStateEvent);
	HX_MARK_MEMBER_NAME(data,"data");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CharacterStateEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CharacterStateEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CharacterStateEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"RUN") ) { outValue = ( RUN ); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"DUCK") ) { outValue = ( DUCK ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"STANCE") ) { outValue = ( STANCE ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"JUMP_UP") ) { outValue = ( JUMP_UP ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"JUMP_DOWN") ) { outValue = ( JUMP_DOWN ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"START_JUMP") ) { outValue = ( START_JUMP ); return true; }
		if (HX_FIELD_EQ(inName,"ON_GOT_HIT") ) { outValue = ( ON_GOT_HIT ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ON_TOUCH_GROUND") ) { outValue = ( ON_TOUCH_GROUND ); return true; }
	}
	return false;
}

::hx::Val CharacterStateEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CharacterStateEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"RUN") ) { RUN=ioValue.Cast< ::String >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"DUCK") ) { DUCK=ioValue.Cast< ::String >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"STANCE") ) { STANCE=ioValue.Cast< ::String >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"JUMP_UP") ) { JUMP_UP=ioValue.Cast< ::String >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"JUMP_DOWN") ) { JUMP_DOWN=ioValue.Cast< ::String >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"START_JUMP") ) { START_JUMP=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"ON_GOT_HIT") ) { ON_GOT_HIT=ioValue.Cast< ::String >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ON_TOUCH_GROUND") ) { ON_TOUCH_GROUND=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void CharacterStateEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CharacterStateEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CharacterStateEvent_obj,data),HX_("data",2a,56,63,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo CharacterStateEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &CharacterStateEvent_obj::STANCE,HX_("STANCE",f0,f5,79,b8)},
	{::hx::fsString,(void *) &CharacterStateEvent_obj::RUN,HX_("RUN",2b,83,3e,00)},
	{::hx::fsString,(void *) &CharacterStateEvent_obj::START_JUMP,HX_("START_JUMP",4b,4d,40,e1)},
	{::hx::fsString,(void *) &CharacterStateEvent_obj::JUMP_UP,HX_("JUMP_UP",4c,1c,8e,8c)},
	{::hx::fsString,(void *) &CharacterStateEvent_obj::JUMP_DOWN,HX_("JUMP_DOWN",93,b0,49,56)},
	{::hx::fsString,(void *) &CharacterStateEvent_obj::DUCK,HX_("DUCK",79,3c,33,2d)},
	{::hx::fsString,(void *) &CharacterStateEvent_obj::ON_TOUCH_GROUND,HX_("ON_TOUCH_GROUND",c7,98,91,e5)},
	{::hx::fsString,(void *) &CharacterStateEvent_obj::ON_GOT_HIT,HX_("ON_GOT_HIT",00,a8,91,91)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CharacterStateEvent_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	::String(null()) };

static void CharacterStateEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CharacterStateEvent_obj::STANCE,"STANCE");
	HX_MARK_MEMBER_NAME(CharacterStateEvent_obj::RUN,"RUN");
	HX_MARK_MEMBER_NAME(CharacterStateEvent_obj::START_JUMP,"START_JUMP");
	HX_MARK_MEMBER_NAME(CharacterStateEvent_obj::JUMP_UP,"JUMP_UP");
	HX_MARK_MEMBER_NAME(CharacterStateEvent_obj::JUMP_DOWN,"JUMP_DOWN");
	HX_MARK_MEMBER_NAME(CharacterStateEvent_obj::DUCK,"DUCK");
	HX_MARK_MEMBER_NAME(CharacterStateEvent_obj::ON_TOUCH_GROUND,"ON_TOUCH_GROUND");
	HX_MARK_MEMBER_NAME(CharacterStateEvent_obj::ON_GOT_HIT,"ON_GOT_HIT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CharacterStateEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CharacterStateEvent_obj::STANCE,"STANCE");
	HX_VISIT_MEMBER_NAME(CharacterStateEvent_obj::RUN,"RUN");
	HX_VISIT_MEMBER_NAME(CharacterStateEvent_obj::START_JUMP,"START_JUMP");
	HX_VISIT_MEMBER_NAME(CharacterStateEvent_obj::JUMP_UP,"JUMP_UP");
	HX_VISIT_MEMBER_NAME(CharacterStateEvent_obj::JUMP_DOWN,"JUMP_DOWN");
	HX_VISIT_MEMBER_NAME(CharacterStateEvent_obj::DUCK,"DUCK");
	HX_VISIT_MEMBER_NAME(CharacterStateEvent_obj::ON_TOUCH_GROUND,"ON_TOUCH_GROUND");
	HX_VISIT_MEMBER_NAME(CharacterStateEvent_obj::ON_GOT_HIT,"ON_GOT_HIT");
};

#endif

::hx::Class CharacterStateEvent_obj::__mClass;

static ::String CharacterStateEvent_obj_sStaticFields[] = {
	HX_("STANCE",f0,f5,79,b8),
	HX_("RUN",2b,83,3e,00),
	HX_("START_JUMP",4b,4d,40,e1),
	HX_("JUMP_UP",4c,1c,8e,8c),
	HX_("JUMP_DOWN",93,b0,49,56),
	HX_("DUCK",79,3c,33,2d),
	HX_("ON_TOUCH_GROUND",c7,98,91,e5),
	HX_("ON_GOT_HIT",00,a8,91,91),
	::String(null())
};

void CharacterStateEvent_obj::__register()
{
	CharacterStateEvent_obj _hx_dummy;
	CharacterStateEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("engine.events.CharacterStateEvent",89,f8,44,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CharacterStateEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &CharacterStateEvent_obj::__SetStatic;
	__mClass->mMarkFunc = CharacterStateEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CharacterStateEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CharacterStateEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CharacterStateEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CharacterStateEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CharacterStateEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CharacterStateEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CharacterStateEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d1065e738626c91e_12_boot)
HXDLIN(  12)		STANCE = HX_("STANCE",f0,f5,79,b8);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d1065e738626c91e_13_boot)
HXDLIN(  13)		RUN = HX_("RUN",2b,83,3e,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d1065e738626c91e_14_boot)
HXDLIN(  14)		START_JUMP = HX_("START_JUMP",4b,4d,40,e1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d1065e738626c91e_15_boot)
HXDLIN(  15)		JUMP_UP = HX_("JUMP_UP",4c,1c,8e,8c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d1065e738626c91e_16_boot)
HXDLIN(  16)		JUMP_DOWN = HX_("JUMP_DOWN",93,b0,49,56);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d1065e738626c91e_17_boot)
HXDLIN(  17)		DUCK = HX_("DUCK",79,3c,33,2d);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d1065e738626c91e_18_boot)
HXDLIN(  18)		ON_TOUCH_GROUND = HX_("ON_TOUCH_GROUND",c7,98,91,e5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d1065e738626c91e_19_boot)
HXDLIN(  19)		ON_GOT_HIT = HX_("ON_GOT_HIT",00,a8,91,91);
            	}
}

} // end namespace engine
} // end namespace events
