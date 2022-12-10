#include <hxcpp.h>

#ifndef INCLUDED_BoxStage
#include <BoxStage.h>
#endif
#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_GameScene
#include <GameScene.h>
#endif
#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_engine_Camera
#include <engine/Camera.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9905504ef0d86991_15_new,"GameScene","new",0x2a353dcc,"GameScene.new","GameScene.hx",15,0xc47e7f24)
HX_LOCAL_STACK_FRAME(_hx_pos_9905504ef0d86991_22_added_to_stage,"GameScene","added_to_stage",0x6edc626d,"GameScene.added_to_stage","GameScene.hx",22,0xc47e7f24)

void GameScene_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9905504ef0d86991_15_new)
HXLINE(  16)		super::__construct();
HXLINE(  20)		this->addEventListener(HX_("addedToStage",63,22,55,0c),this->added_to_stage_dyn(),null(),null(),null());
            	}

Dynamic GameScene_obj::__CreateEmpty() { return new GameScene_obj; }

void *GameScene_obj::_hx_vtable = 0;

Dynamic GameScene_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameScene_obj > _hx_result = new GameScene_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GameScene_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x13031d1a) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x13031d1a;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void GameScene_obj::added_to_stage( ::openfl::events::Event e){
            	HX_GC_STACKFRAME(&_hx_pos_9905504ef0d86991_22_added_to_stage)
HXLINE(  23)		 ::openfl::display::MovieClip stage =  ::openfl::display::MovieClip_obj::__alloc( HX_CTX );
HXLINE(  24)		if ((::Global_obj::game->map == HX_("Box",eb,75,32,00))) {
HXLINE(  25)			stage =  ::BoxStage_obj::__alloc( HX_CTX );
HXLINE(  26)			this->addChild(stage);
HXLINE(  27)			 ::Game _hx_tmp = ::Global_obj::game;
HXDLIN(  27)			_hx_tmp->createAllPlayers(::hx::ObjectPtr<OBJ_>(this),( ( ::BoxStage)(::Std_obj::downcast(stage,::hx::ClassOf< ::BoxStage >())) )->ground);
            		}
HXLINE(  29)		this->camera =  ::engine::Camera_obj::__alloc( HX_CTX );
HXLINE(  30)		this->camera->target = ( ( ::openfl::display::Sprite)(::Global_obj::game->setViewToPlayer(::Global_obj::game->localPlayer)) );
HXLINE(  31)		this->addChild(this->camera);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameScene_obj,added_to_stage,(void))


::hx::ObjectPtr< GameScene_obj > GameScene_obj::__new() {
	::hx::ObjectPtr< GameScene_obj > __this = new GameScene_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GameScene_obj > GameScene_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GameScene_obj *__this = (GameScene_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameScene_obj), true, "GameScene"));
	*(void **)__this = GameScene_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GameScene_obj::GameScene_obj()
{
}

void GameScene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameScene);
	HX_MARK_MEMBER_NAME(camera,"camera");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameScene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(camera,"camera");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GameScene_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { return ::hx::Val( camera ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"added_to_stage") ) { return ::hx::Val( added_to_stage_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GameScene_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast<  ::engine::Camera >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameScene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("camera",a5,46,8c,b7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameScene_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::engine::Camera */ ,(int)offsetof(GameScene_obj,camera),HX_("camera",a5,46,8c,b7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GameScene_obj_sStaticStorageInfo = 0;
#endif

static ::String GameScene_obj_sMemberFields[] = {
	HX_("camera",a5,46,8c,b7),
	HX_("added_to_stage",59,70,ae,60),
	::String(null()) };

::hx::Class GameScene_obj::__mClass;

void GameScene_obj::__register()
{
	GameScene_obj _hx_dummy;
	GameScene_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GameScene",da,a7,bf,4f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameScene_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameScene_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameScene_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameScene_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

