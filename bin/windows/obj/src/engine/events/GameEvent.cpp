#include <hxcpp.h>

#ifndef INCLUDED_engine_events_GameEvent
#include <engine/events/GameEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c6f85a77ab0fac83_14_new,"engine.events.GameEvent","new",0x306defb1,"engine.events.GameEvent.new","engine/events/GameEvent.hx",14,0x116272ff)
HX_LOCAL_STACK_FRAME(_hx_pos_c6f85a77ab0fac83_10_boot,"engine.events.GameEvent","boot",0x27dccbc1,"engine.events.GameEvent.boot","engine/events/GameEvent.hx",10,0x116272ff)
namespace engine{
namespace events{

void GameEvent_obj::__construct(::String type){
            	HX_STACKFRAME(&_hx_pos_c6f85a77ab0fac83_14_new)
HXDLIN(  14)		super::__construct(type,null(),null());
            	}

Dynamic GameEvent_obj::__CreateEmpty() { return new GameEvent_obj; }

void *GameEvent_obj::_hx_vtable = 0;

Dynamic GameEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameEvent_obj > _hx_result = new GameEvent_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GameEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x3907556d;
	}
}

::String GameEvent_obj::ON_GAME_LOOP;


::hx::ObjectPtr< GameEvent_obj > GameEvent_obj::__new(::String type) {
	::hx::ObjectPtr< GameEvent_obj > __this = new GameEvent_obj();
	__this->__construct(type);
	return __this;
}

::hx::ObjectPtr< GameEvent_obj > GameEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type) {
	GameEvent_obj *__this = (GameEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameEvent_obj), true, "engine.events.GameEvent"));
	*(void **)__this = GameEvent_obj::_hx_vtable;
	__this->__construct(type);
	return __this;
}

GameEvent_obj::GameEvent_obj()
{
}

bool GameEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"ON_GAME_LOOP") ) { outValue = ( ON_GAME_LOOP ); return true; }
	}
	return false;
}

bool GameEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"ON_GAME_LOOP") ) { ON_GAME_LOOP=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GameEvent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GameEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GameEvent_obj::ON_GAME_LOOP,HX_("ON_GAME_LOOP",b1,3e,5b,ee)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GameEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameEvent_obj::ON_GAME_LOOP,"ON_GAME_LOOP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GameEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameEvent_obj::ON_GAME_LOOP,"ON_GAME_LOOP");
};

#endif

::hx::Class GameEvent_obj::__mClass;

static ::String GameEvent_obj_sStaticFields[] = {
	HX_("ON_GAME_LOOP",b1,3e,5b,ee),
	::String(null())
};

void GameEvent_obj::__register()
{
	GameEvent_obj _hx_dummy;
	GameEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("engine.events.GameEvent",3f,43,96,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GameEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &GameEvent_obj::__SetStatic;
	__mClass->mMarkFunc = GameEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GameEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GameEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GameEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GameEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c6f85a77ab0fac83_10_boot)
HXDLIN(  10)		ON_GAME_LOOP = HX_("ON_GAME_LOOP",b1,3e,5b,ee);
            	}
}

} // end namespace engine
} // end namespace events
