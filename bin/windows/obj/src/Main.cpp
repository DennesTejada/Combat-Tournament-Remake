#include <hxcpp.h>

#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_GameScene
#include <GameScene.h>
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
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e47a9afac0942eb9_21_new,"Main","new",0x6616a5cb,"Main.new","Main.hx",21,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_34_createMatch,"Main","createMatch",0x2ba53914,"Main.createMatch","Main.hx",34,0x087e5c05)

void Main_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_21_new)
HXLINE(  22)		super::__construct();
HXLINE(  23)		::Main_obj::instance = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  25)		::Main_obj::gameLoop =  ::engine::GameLoop_obj::__alloc( HX_CTX );
HXLINE(  26)		this->stage->addChild(::Main_obj::gameLoop);
HXLINE(  28)		::Main_obj::gameInput =  ::engine::GameInput_obj::__alloc( HX_CTX );
HXLINE(  29)		this->stage->addChild(::Main_obj::gameInput);
HXLINE(  32)		this->createMatch();
            	}

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x07825a7d) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x07825a7d;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Main_obj::createMatch(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_34_createMatch)
HXLINE(  35)		::Global_obj::game->localPlayer = 1;
HXLINE(  36)		::Global_obj::game->createPlayerInfomation(HX_("player1",b0,09,15,8a),HX_("Slaptastic",90,66,1e,bb),HX_("default",c1,d8,c3,9b),null(),1);
HXLINE(  37)		::Global_obj::game->createPlayerInfomation(HX_("bot1",4a,88,1b,41),HX_("Slaptastic",90,66,1e,bb),HX_("default",c1,d8,c3,9b),null(),-1);
HXLINE(  38)		this->scene =  ::GameScene_obj::__alloc( HX_CTX );
HXLINE(  39)		this->addChild(this->scene);
HXLINE(  40)		::Main_obj::gameLoop->resetTime();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,createMatch,(void))

 ::engine::GameInput Main_obj::gameInput;

 ::engine::GameLoop Main_obj::gameLoop;

 ::Main Main_obj::instance;


::hx::ObjectPtr< Main_obj > Main_obj::__new() {
	::hx::ObjectPtr< Main_obj > __this = new Main_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Main_obj > Main_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Main_obj *__this = (Main_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Main_obj), true, "Main"));
	*(void **)__this = Main_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(scene,"scene");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scene,"scene");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Main_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { return ::hx::Val( scene ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createMatch") ) { return ::hx::Val( createMatch_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"gameLoop") ) { outValue = ( gameLoop ); return true; }
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameInput") ) { outValue = ( gameInput ); return true; }
	}
	return false;
}

::hx::Val Main_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"gameLoop") ) { gameLoop=ioValue.Cast<  ::engine::GameLoop >(); return true; }
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::Main >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameInput") ) { gameInput=ioValue.Cast<  ::engine::GameInput >(); return true; }
	}
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("scene",4c,d9,d1,78));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Main_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(Main_obj,scene),HX_("scene",4c,d9,d1,78)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Main_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::engine::GameInput */ ,(void *) &Main_obj::gameInput,HX_("gameInput",b8,b2,38,f3)},
	{::hx::fsObject /*  ::engine::GameLoop */ ,(void *) &Main_obj::gameLoop,HX_("gameLoop",76,a7,dd,b3)},
	{::hx::fsObject /*  ::Main */ ,(void *) &Main_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Main_obj_sMemberFields[] = {
	HX_("scene",4c,d9,d1,78),
	HX_("createMatch",a9,80,9e,2c),
	::String(null()) };

static void Main_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::gameInput,"gameInput");
	HX_MARK_MEMBER_NAME(Main_obj::gameLoop,"gameLoop");
	HX_MARK_MEMBER_NAME(Main_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Main_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::gameInput,"gameInput");
	HX_VISIT_MEMBER_NAME(Main_obj::gameLoop,"gameLoop");
	HX_VISIT_MEMBER_NAME(Main_obj::instance,"instance");
};

#endif

::hx::Class Main_obj::__mClass;

static ::String Main_obj_sStaticFields[] = {
	HX_("gameInput",b8,b2,38,f3),
	HX_("gameLoop",76,a7,dd,b3),
	HX_("instance",95,1f,e1,59),
	::String(null())
};

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Main",59,64,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = Main_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Main_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Main_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Main_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Main_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

