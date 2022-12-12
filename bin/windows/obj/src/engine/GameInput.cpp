#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_client_ClientMain
#include <client/ClientMain.h>
#endif
#ifndef INCLUDED_engine_GameInput
#include <engine/GameInput.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_server_ServerMain
#include <server/ServerMain.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f74bffafb0b300d8_13_new,"engine.GameInput","new",0xa186f1de,"engine.GameInput.new","engine/GameInput.hx",13,0xb262f0d3)
HX_LOCAL_STACK_FRAME(_hx_pos_f74bffafb0b300d8_41_key_down,"engine.GameInput","key_down",0xf4880004,"engine.GameInput.key_down","engine/GameInput.hx",41,0xb262f0d3)
HX_LOCAL_STACK_FRAME(_hx_pos_f74bffafb0b300d8_84_key_up,"engine.GameInput","key_up",0x43ebe17d,"engine.GameInput.key_up","engine/GameInput.hx",84,0xb262f0d3)
namespace engine{

void GameInput_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f74bffafb0b300d8_13_new)
HXLINE(  33)		this->JUMP = false;
HXLINE(  32)		this->BLOCK = false;
HXLINE(  31)		this->SPECIAL = false;
HXLINE(  30)		this->ATTACK = false;
HXLINE(  29)		this->RIGHT = false;
HXLINE(  28)		this->LEFT = false;
HXLINE(  27)		this->DOWN = false;
HXLINE(  26)		this->UP = false;
HXLINE(  24)		this->BIND_JUMP = 32;
HXLINE(  23)		this->BIND_BLOCK = 68;
HXLINE(  22)		this->BIND_SPECIAL = 83;
HXLINE(  21)		this->BIND_ATTACK = 65;
HXLINE(  20)		this->BIND_RIGHT = 39;
HXLINE(  19)		this->BIND_LEFT = 37;
HXLINE(  18)		this->BIND_DOWN = 40;
HXLINE(  17)		this->BIND_UP = 38;
HXLINE(  37)		super::__construct();
HXLINE(  38)		this->addEventListener(HX_("keyDown",a1,69,47,9c),this->key_down_dyn(),null(),null(),null());
HXLINE(  39)		this->addEventListener(HX_("keyUp",da,b9,fe,de),this->key_up_dyn(),null(),null(),null());
            	}

Dynamic GameInput_obj::__CreateEmpty() { return new GameInput_obj; }

void *GameInput_obj::_hx_vtable = 0;

Dynamic GameInput_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameInput_obj > _hx_result = new GameInput_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GameInput_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x6b353933) {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
		} else {
			return inClassId==(int)0x7f8ab92e;
		}
	}
}

void GameInput_obj::key_down( ::openfl::events::KeyboardEvent e){
            	HX_STACKFRAME(&_hx_pos_f74bffafb0b300d8_41_key_down)
HXLINE(  42)		if ((e->keyCode == this->BIND_UP)) {
HXLINE(  43)			this->UP = true;
            		}
HXLINE(  45)		if ((e->keyCode == this->BIND_DOWN)) {
HXLINE(  46)			this->DOWN = true;
            		}
HXLINE(  48)		if ((e->keyCode == this->BIND_LEFT)) {
HXLINE(  49)			this->LEFT = true;
            		}
HXLINE(  51)		if ((e->keyCode == this->BIND_RIGHT)) {
HXLINE(  52)			this->RIGHT = true;
            		}
HXLINE(  54)		if ((e->keyCode == this->BIND_ATTACK)) {
HXLINE(  55)			this->ATTACK = true;
            		}
HXLINE(  57)		if ((e->keyCode == this->BIND_SPECIAL)) {
HXLINE(  58)			this->SPECIAL = true;
            		}
HXLINE(  60)		if ((e->keyCode == this->BIND_BLOCK)) {
HXLINE(  61)			this->BLOCK = true;
            		}
HXLINE(  63)		if ((e->keyCode == this->BIND_JUMP)) {
HXLINE(  64)			this->JUMP = true;
            		}
HXLINE(  69)		if ((e->keyCode == 112)) {
HXLINE(  70)			::Global_obj::restart();
HXLINE(  71)			::Global_obj::gameServer->createServer();
            		}
HXLINE(  74)		if ((e->keyCode == 113)) {
HXLINE(  76)			 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(0));
HXDLIN(  76)			 ::Dynamic data = this1;
HXLINE(  77)			{
HXLINE(  77)				 ::Dynamic value = (HX_("player",61,eb,b8,37) + ::hx::Mod(::Math_obj::random(),999));
HXDLIN(  77)				{
HXLINE(  77)					 ::Dynamic this2 = data;
HXDLIN(  77)					if (::hx::IsNotNull( this2 )) {
HXLINE(  77)						::Reflect_obj::setProperty(this2,HX_("username",16,86,eb,20),value);
            					}
            				}
            			}
HXLINE(  78)			{
HXLINE(  78)				 ::Dynamic this3 = data;
HXDLIN(  78)				if (::hx::IsNotNull( this3 )) {
HXLINE(  78)					::Reflect_obj::setProperty(this3,HX_("character",a9,db,d1,41),HX_("Slaptastic",90,66,1e,bb));
            				}
            			}
HXLINE(  79)			::Global_obj::gameClient->localPlayerInfo = data;
HXLINE(  81)			::Global_obj::gameClient->joinServer();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameInput_obj,key_down,(void))

void GameInput_obj::key_up( ::openfl::events::KeyboardEvent e){
            	HX_STACKFRAME(&_hx_pos_f74bffafb0b300d8_84_key_up)
HXLINE(  85)		if ((e->keyCode == this->BIND_UP)) {
HXLINE(  86)			this->UP = false;
            		}
HXLINE(  88)		if ((e->keyCode == this->BIND_DOWN)) {
HXLINE(  89)			this->DOWN = false;
            		}
HXLINE(  91)		if ((e->keyCode == this->BIND_LEFT)) {
HXLINE(  92)			this->LEFT = false;
            		}
HXLINE(  94)		if ((e->keyCode == this->BIND_RIGHT)) {
HXLINE(  95)			this->RIGHT = false;
            		}
HXLINE(  97)		if ((e->keyCode == this->BIND_ATTACK)) {
HXLINE(  98)			this->ATTACK = false;
            		}
HXLINE( 100)		if ((e->keyCode == this->BIND_SPECIAL)) {
HXLINE( 101)			this->SPECIAL = false;
            		}
HXLINE( 103)		if ((e->keyCode == this->BIND_BLOCK)) {
HXLINE( 104)			this->BLOCK = false;
            		}
HXLINE( 106)		if ((e->keyCode == this->BIND_JUMP)) {
HXLINE( 107)			this->JUMP = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameInput_obj,key_up,(void))


::hx::ObjectPtr< GameInput_obj > GameInput_obj::__new() {
	::hx::ObjectPtr< GameInput_obj > __this = new GameInput_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GameInput_obj > GameInput_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GameInput_obj *__this = (GameInput_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameInput_obj), true, "engine.GameInput"));
	*(void **)__this = GameInput_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GameInput_obj::GameInput_obj()
{
}

::hx::Val GameInput_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"UP") ) { return ::hx::Val( UP ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"DOWN") ) { return ::hx::Val( DOWN ); }
		if (HX_FIELD_EQ(inName,"LEFT") ) { return ::hx::Val( LEFT ); }
		if (HX_FIELD_EQ(inName,"JUMP") ) { return ::hx::Val( JUMP ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { return ::hx::Val( RIGHT ); }
		if (HX_FIELD_EQ(inName,"BLOCK") ) { return ::hx::Val( BLOCK ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ATTACK") ) { return ::hx::Val( ATTACK ); }
		if (HX_FIELD_EQ(inName,"key_up") ) { return ::hx::Val( key_up_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"BIND_UP") ) { return ::hx::Val( BIND_UP ); }
		if (HX_FIELD_EQ(inName,"SPECIAL") ) { return ::hx::Val( SPECIAL ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"key_down") ) { return ::hx::Val( key_down_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"BIND_DOWN") ) { return ::hx::Val( BIND_DOWN ); }
		if (HX_FIELD_EQ(inName,"BIND_LEFT") ) { return ::hx::Val( BIND_LEFT ); }
		if (HX_FIELD_EQ(inName,"BIND_JUMP") ) { return ::hx::Val( BIND_JUMP ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"BIND_RIGHT") ) { return ::hx::Val( BIND_RIGHT ); }
		if (HX_FIELD_EQ(inName,"BIND_BLOCK") ) { return ::hx::Val( BIND_BLOCK ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BIND_ATTACK") ) { return ::hx::Val( BIND_ATTACK ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"BIND_SPECIAL") ) { return ::hx::Val( BIND_SPECIAL ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GameInput_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"UP") ) { UP=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"DOWN") ) { DOWN=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LEFT") ) { LEFT=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"JUMP") ) { JUMP=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { RIGHT=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLOCK") ) { BLOCK=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ATTACK") ) { ATTACK=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"BIND_UP") ) { BIND_UP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SPECIAL") ) { SPECIAL=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"BIND_DOWN") ) { BIND_DOWN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BIND_LEFT") ) { BIND_LEFT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BIND_JUMP") ) { BIND_JUMP=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"BIND_RIGHT") ) { BIND_RIGHT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BIND_BLOCK") ) { BIND_BLOCK=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BIND_ATTACK") ) { BIND_ATTACK=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"BIND_SPECIAL") ) { BIND_SPECIAL=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("BIND_UP",dd,16,12,ff));
	outFields->push(HX_("BIND_DOWN",64,31,ae,6d));
	outFields->push(HX_("BIND_LEFT",09,41,f0,72));
	outFields->push(HX_("BIND_RIGHT",7a,b4,55,96));
	outFields->push(HX_("BIND_ATTACK",4a,dd,91,86));
	outFields->push(HX_("BIND_SPECIAL",57,ea,78,ea));
	outFields->push(HX_("BIND_BLOCK",eb,1d,ee,61));
	outFields->push(HX_("BIND_JUMP",f0,fd,a9,71));
	outFields->push(HX_("UP",5b,4a,00,00));
	outFields->push(HX_("DOWN",62,c0,2e,2d));
	outFields->push(HX_("LEFT",07,d0,70,32));
	outFields->push(HX_("RIGHT",bc,43,52,67));
	outFields->push(HX_("ATTACK",c8,a7,92,92));
	outFields->push(HX_("SPECIAL",19,4e,29,5f));
	outFields->push(HX_("BLOCK",2d,ad,ea,32));
	outFields->push(HX_("JUMP",ee,8c,2a,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameInput_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(GameInput_obj,BIND_UP),HX_("BIND_UP",dd,16,12,ff)},
	{::hx::fsInt,(int)offsetof(GameInput_obj,BIND_DOWN),HX_("BIND_DOWN",64,31,ae,6d)},
	{::hx::fsInt,(int)offsetof(GameInput_obj,BIND_LEFT),HX_("BIND_LEFT",09,41,f0,72)},
	{::hx::fsInt,(int)offsetof(GameInput_obj,BIND_RIGHT),HX_("BIND_RIGHT",7a,b4,55,96)},
	{::hx::fsInt,(int)offsetof(GameInput_obj,BIND_ATTACK),HX_("BIND_ATTACK",4a,dd,91,86)},
	{::hx::fsInt,(int)offsetof(GameInput_obj,BIND_SPECIAL),HX_("BIND_SPECIAL",57,ea,78,ea)},
	{::hx::fsInt,(int)offsetof(GameInput_obj,BIND_BLOCK),HX_("BIND_BLOCK",eb,1d,ee,61)},
	{::hx::fsInt,(int)offsetof(GameInput_obj,BIND_JUMP),HX_("BIND_JUMP",f0,fd,a9,71)},
	{::hx::fsBool,(int)offsetof(GameInput_obj,UP),HX_("UP",5b,4a,00,00)},
	{::hx::fsBool,(int)offsetof(GameInput_obj,DOWN),HX_("DOWN",62,c0,2e,2d)},
	{::hx::fsBool,(int)offsetof(GameInput_obj,LEFT),HX_("LEFT",07,d0,70,32)},
	{::hx::fsBool,(int)offsetof(GameInput_obj,RIGHT),HX_("RIGHT",bc,43,52,67)},
	{::hx::fsBool,(int)offsetof(GameInput_obj,ATTACK),HX_("ATTACK",c8,a7,92,92)},
	{::hx::fsBool,(int)offsetof(GameInput_obj,SPECIAL),HX_("SPECIAL",19,4e,29,5f)},
	{::hx::fsBool,(int)offsetof(GameInput_obj,BLOCK),HX_("BLOCK",2d,ad,ea,32)},
	{::hx::fsBool,(int)offsetof(GameInput_obj,JUMP),HX_("JUMP",ee,8c,2a,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GameInput_obj_sStaticStorageInfo = 0;
#endif

static ::String GameInput_obj_sMemberFields[] = {
	HX_("BIND_UP",dd,16,12,ff),
	HX_("BIND_DOWN",64,31,ae,6d),
	HX_("BIND_LEFT",09,41,f0,72),
	HX_("BIND_RIGHT",7a,b4,55,96),
	HX_("BIND_ATTACK",4a,dd,91,86),
	HX_("BIND_SPECIAL",57,ea,78,ea),
	HX_("BIND_BLOCK",eb,1d,ee,61),
	HX_("BIND_JUMP",f0,fd,a9,71),
	HX_("UP",5b,4a,00,00),
	HX_("DOWN",62,c0,2e,2d),
	HX_("LEFT",07,d0,70,32),
	HX_("RIGHT",bc,43,52,67),
	HX_("ATTACK",c8,a7,92,92),
	HX_("SPECIAL",19,4e,29,5f),
	HX_("BLOCK",2d,ad,ea,32),
	HX_("JUMP",ee,8c,2a,31),
	HX_("key_down",42,4a,bb,a6),
	HX_("key_up",3b,80,eb,3f),
	::String(null()) };

::hx::Class GameInput_obj::__mClass;

void GameInput_obj::__register()
{
	GameInput_obj _hx_dummy;
	GameInput_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("engine.GameInput",ec,6a,3d,c4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameInput_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameInput_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameInput_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace engine
