#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_engine_GameInput
#include <engine/GameInput.h>
#endif
#ifndef INCLUDED_engine_GameLoop
#include <engine/GameLoop.h>
#endif
#ifndef INCLUDED_engine_events_GameEvent
#include <engine/events/GameEvent.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_43b603dd1a48aa42_14_new,"engine.GameLoop","new",0xcc5e9bb4,"engine.GameLoop.new","engine/GameLoop.hx",14,0xec90c3db)
HX_LOCAL_STACK_FRAME(_hx_pos_43b603dd1a48aa42_28_enter_frame,"engine.GameLoop","enter_frame",0xb0884dda,"engine.GameLoop.enter_frame","engine/GameLoop.hx",28,0xec90c3db)
HX_LOCAL_STACK_FRAME(_hx_pos_43b603dd1a48aa42_49_resetTime,"engine.GameLoop","resetTime",0x2ca8d7d0,"engine.GameLoop.resetTime","engine/GameLoop.hx",49,0xec90c3db)
namespace engine{

void GameLoop_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_43b603dd1a48aa42_14_new)
HXLINE(  21)		this->gameSpeed = ((Float)0.025);
HXLINE(  19)		this->delta = ((Float)0);
HXLINE(  18)		this->timeAccel = ((Float)0);
HXLINE(  17)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  17)		Float _hx_tmp;
HXDLIN(  17)		if ((timer > 0)) {
HXLINE(  17)			_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE(  17)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN(  17)		this->previousTime = _hx_tmp;
HXLINE(  16)		int timer1 = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  16)		Float _hx_tmp1;
HXDLIN(  16)		if ((timer1 > 0)) {
HXLINE(  16)			_hx_tmp1 = (( (Float)(timer1) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE(  16)			_hx_tmp1 = ( (Float)(0) );
            		}
HXDLIN(  16)		this->currentTime = _hx_tmp1;
HXLINE(  25)		super::__construct();
HXLINE(  26)		this->addEventListener(HX_("enterFrame",f5,03,50,02),this->enter_frame_dyn(),null(),null(),null());
            	}

Dynamic GameLoop_obj::__CreateEmpty() { return new GameLoop_obj; }

void *GameLoop_obj::_hx_vtable = 0;

Dynamic GameLoop_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameLoop_obj > _hx_result = new GameLoop_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GameLoop_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x60d25758) {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x60d25758;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void GameLoop_obj::enter_frame( ::openfl::events::Event e){
            	HX_GC_STACKFRAME(&_hx_pos_43b603dd1a48aa42_28_enter_frame)
HXLINE(  30)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  30)		Float _hx_tmp;
HXDLIN(  30)		if ((timer > 0)) {
HXLINE(  30)			_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE(  30)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN(  30)		this->currentTime = _hx_tmp;
HXLINE(  32)		this->delta = (this->currentTime - this->previousTime);
HXLINE(  33)		this->previousTime = this->currentTime;
HXLINE(  35)		 ::engine::GameLoop _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  35)		_hx_tmp1->timeAccel = (_hx_tmp1->timeAccel + this->delta);
HXLINE(  37)		this->timeAccel = ::Math_obj::min(this->timeAccel,( (Float)(1) ));
HXLINE(  39)		while((this->timeAccel >= this->gameSpeed)){
HXLINE(  40)			this->dispatchEvent( ::engine::events::GameEvent_obj::__alloc( HX_CTX ,::engine::events::GameEvent_obj::ON_GAME_LOOP));
HXLINE(  41)			::Global_obj::game->onUpdate();
HXLINE(  42)			 ::engine::GameLoop _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  42)			_hx_tmp->timeAccel = (_hx_tmp->timeAccel - this->gameSpeed);
            		}
HXLINE(  46)		this->stage->set_focus(::Main_obj::gameInput);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameLoop_obj,enter_frame,(void))

void GameLoop_obj::resetTime(){
            	HX_STACKFRAME(&_hx_pos_43b603dd1a48aa42_49_resetTime)
HXDLIN(  49)		this->timeAccel = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameLoop_obj,resetTime,(void))


::hx::ObjectPtr< GameLoop_obj > GameLoop_obj::__new() {
	::hx::ObjectPtr< GameLoop_obj > __this = new GameLoop_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GameLoop_obj > GameLoop_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GameLoop_obj *__this = (GameLoop_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameLoop_obj), true, "engine.GameLoop"));
	*(void **)__this = GameLoop_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GameLoop_obj::GameLoop_obj()
{
}

::hx::Val GameLoop_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { return ::hx::Val( delta ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timeAccel") ) { return ::hx::Val( timeAccel ); }
		if (HX_FIELD_EQ(inName,"gameSpeed") ) { return ::hx::Val( gameSpeed ); }
		if (HX_FIELD_EQ(inName,"resetTime") ) { return ::hx::Val( resetTime_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { return ::hx::Val( currentTime ); }
		if (HX_FIELD_EQ(inName,"enter_frame") ) { return ::hx::Val( enter_frame_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"previousTime") ) { return ::hx::Val( previousTime ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GameLoop_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { delta=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timeAccel") ) { timeAccel=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gameSpeed") ) { gameSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { currentTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"previousTime") ) { previousTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameLoop_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("currentTime",e6,a4,8e,85));
	outFields->push(HX_("previousTime",e4,9b,9e,f3));
	outFields->push(HX_("timeAccel",9b,b0,8a,d0));
	outFields->push(HX_("delta",f8,e7,26,d7));
	outFields->push(HX_("gameSpeed",35,86,84,b6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameLoop_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(GameLoop_obj,currentTime),HX_("currentTime",e6,a4,8e,85)},
	{::hx::fsFloat,(int)offsetof(GameLoop_obj,previousTime),HX_("previousTime",e4,9b,9e,f3)},
	{::hx::fsFloat,(int)offsetof(GameLoop_obj,timeAccel),HX_("timeAccel",9b,b0,8a,d0)},
	{::hx::fsFloat,(int)offsetof(GameLoop_obj,delta),HX_("delta",f8,e7,26,d7)},
	{::hx::fsFloat,(int)offsetof(GameLoop_obj,gameSpeed),HX_("gameSpeed",35,86,84,b6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GameLoop_obj_sStaticStorageInfo = 0;
#endif

static ::String GameLoop_obj_sMemberFields[] = {
	HX_("currentTime",e6,a4,8e,85),
	HX_("previousTime",e4,9b,9e,f3),
	HX_("timeAccel",9b,b0,8a,d0),
	HX_("delta",f8,e7,26,d7),
	HX_("gameSpeed",35,86,84,b6),
	HX_("enter_frame",86,0e,04,25),
	HX_("resetTime",7c,d5,e8,92),
	::String(null()) };

::hx::Class GameLoop_obj::__mClass;

void GameLoop_obj::__register()
{
	GameLoop_obj _hx_dummy;
	GameLoop_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("engine.GameLoop",c2,f1,99,27);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameLoop_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameLoop_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameLoop_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameLoop_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace engine
