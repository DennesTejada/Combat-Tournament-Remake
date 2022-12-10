#include <hxcpp.h>

#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_HitBox
#include <HitBox.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Slaptastic
#include <Slaptastic.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_characters_SlaptasticGameplay
#include <characters/SlaptasticGameplay.h>
#endif
#ifndef INCLUDED_engine_GameLoop
#include <engine/GameLoop.h>
#endif
#ifndef INCLUDED_engine_HitBoxInfomation
#include <engine/HitBoxInfomation.h>
#endif
#ifndef INCLUDED_engine_PlayerDefault
#include <engine/PlayerDefault.h>
#endif
#ifndef INCLUDED_engine_States
#include <engine/States.h>
#endif
#ifndef INCLUDED_engine_events_CharacterStateEvent
#include <engine/events/CharacterStateEvent.h>
#endif
#ifndef INCLUDED_engine_events_GameEvent
#include <engine/events/GameEvent.h>
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
#ifndef INCLUDED_openfl_utils__Object_Object_Impl_
#include <openfl/utils/_Object/Object_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e50784b092cdd707_14_new,"characters.SlaptasticGameplay","new",0x2636e8cc,"characters.SlaptasticGameplay.new","characters/SlaptasticGameplay.hx",14,0x85e97e83)
HX_LOCAL_STACK_FRAME(_hx_pos_e50784b092cdd707_37_onTouchGround,"characters.SlaptasticGameplay","onTouchGround",0x9bcefc33,"characters.SlaptasticGameplay.onTouchGround","characters/SlaptasticGameplay.hx",37,0x85e97e83)
HX_LOCAL_STACK_FRAME(_hx_pos_e50784b092cdd707_39_onStance,"characters.SlaptasticGameplay","onStance",0x48152083,"characters.SlaptasticGameplay.onStance","characters/SlaptasticGameplay.hx",39,0x85e97e83)
HX_LOCAL_STACK_FRAME(_hx_pos_e50784b092cdd707_45_onRun,"characters.SlaptasticGameplay","onRun",0xe99986d8,"characters.SlaptasticGameplay.onRun","characters/SlaptasticGameplay.hx",45,0x85e97e83)
HX_LOCAL_STACK_FRAME(_hx_pos_e50784b092cdd707_51_onDuck,"characters.SlaptasticGameplay","onDuck",0x737b704c,"characters.SlaptasticGameplay.onDuck","characters/SlaptasticGameplay.hx",51,0x85e97e83)
HX_LOCAL_STACK_FRAME(_hx_pos_e50784b092cdd707_57_onStartJump,"characters.SlaptasticGameplay","onStartJump",0x023385bd,"characters.SlaptasticGameplay.onStartJump","characters/SlaptasticGameplay.hx",57,0x85e97e83)
HX_LOCAL_STACK_FRAME(_hx_pos_e50784b092cdd707_63_onJumpUp,"characters.SlaptasticGameplay","onJumpUp",0x4a357d7c,"characters.SlaptasticGameplay.onJumpUp","characters/SlaptasticGameplay.hx",63,0x85e97e83)
HX_LOCAL_STACK_FRAME(_hx_pos_e50784b092cdd707_70_onJumpDown,"characters.SlaptasticGameplay","onJumpDown",0x556fd9c3,"characters.SlaptasticGameplay.onJumpDown","characters/SlaptasticGameplay.hx",70,0x85e97e83)
HX_LOCAL_STACK_FRAME(_hx_pos_e50784b092cdd707_77_onGotHit,"characters.SlaptasticGameplay","onGotHit",0xa73e22fa,"characters.SlaptasticGameplay.onGotHit","characters/SlaptasticGameplay.hx",77,0x85e97e83)
HX_LOCAL_STACK_FRAME(_hx_pos_e50784b092cdd707_83_onUpdate,"characters.SlaptasticGameplay","onUpdate",0xc9235c9c,"characters.SlaptasticGameplay.onUpdate","characters/SlaptasticGameplay.hx",83,0x85e97e83)
HX_LOCAL_STACK_FRAME(_hx_pos_e50784b092cdd707_141_updateSpriteAnimation,"characters.SlaptasticGameplay","updateSpriteAnimation",0xc2b721a2,"characters.SlaptasticGameplay.updateSpriteAnimation","characters/SlaptasticGameplay.hx",141,0x85e97e83)
HX_LOCAL_STACK_FRAME(_hx_pos_e50784b092cdd707_176_updateHitBoxes,"characters.SlaptasticGameplay","updateHitBoxes",0x098e6623,"characters.SlaptasticGameplay.updateHitBoxes","characters/SlaptasticGameplay.hx",176,0x85e97e83)
namespace characters{

void SlaptasticGameplay_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e50784b092cdd707_14_new)
HXLINE(  19)		this->returnToIdleOnLastFrame = false;
HXLINE(  18)		this->playAnimation = false;
HXLINE(  17)		this->loopAnimation = false;
HXLINE(  16)		this->stickmen =  ::Slaptastic_obj::__alloc( HX_CTX );
HXLINE(  22)		super::__construct();
HXLINE(  24)		this->stickmen =  ::Slaptastic_obj::__alloc( HX_CTX );
HXLINE(  25)		this->addChild(this->stickmen);
HXLINE(  26)		this->addEventListener(::engine::events::CharacterStateEvent_obj::STANCE,this->onStance_dyn(),null(),null(),null());
HXLINE(  27)		this->addEventListener(::engine::events::CharacterStateEvent_obj::RUN,this->onRun_dyn(),null(),null(),null());
HXLINE(  28)		this->addEventListener(::engine::events::CharacterStateEvent_obj::DUCK,this->onDuck_dyn(),null(),null(),null());
HXLINE(  29)		this->addEventListener(::engine::events::CharacterStateEvent_obj::START_JUMP,this->onStartJump_dyn(),null(),null(),null());
HXLINE(  30)		this->addEventListener(::engine::events::CharacterStateEvent_obj::JUMP_UP,this->onJumpUp_dyn(),null(),null(),null());
HXLINE(  31)		this->addEventListener(::engine::events::CharacterStateEvent_obj::JUMP_DOWN,this->onJumpDown_dyn(),null(),null(),null());
HXLINE(  32)		this->addEventListener(::engine::events::CharacterStateEvent_obj::ON_TOUCH_GROUND,this->onTouchGround_dyn(),null(),null(),null());
HXLINE(  33)		this->addEventListener(::engine::events::CharacterStateEvent_obj::ON_GOT_HIT,this->onGotHit_dyn(),null(),null(),null());
HXLINE(  34)		::Main_obj::gameLoop->addEventListener(::engine::events::GameEvent_obj::ON_GAME_LOOP,this->onUpdate_dyn(),null(),null(),null());
            	}

Dynamic SlaptasticGameplay_obj::__CreateEmpty() { return new SlaptasticGameplay_obj; }

void *SlaptasticGameplay_obj::_hx_vtable = 0;

Dynamic SlaptasticGameplay_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SlaptasticGameplay_obj > _hx_result = new SlaptasticGameplay_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SlaptasticGameplay_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0a5cbc5a) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0a5cbc5a;
			}
		} else {
			return inClassId==(int)0x0c89e854 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x573da588) {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x573da588;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void SlaptasticGameplay_obj::onTouchGround( ::engine::events::CharacterStateEvent e){
            	HX_STACKFRAME(&_hx_pos_e50784b092cdd707_37_onTouchGround)
HXDLIN(  37)		this->jumpCount = this->maxJumps;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SlaptasticGameplay_obj,onTouchGround,(void))

void SlaptasticGameplay_obj::onStance( ::engine::events::CharacterStateEvent e){
            	HX_STACKFRAME(&_hx_pos_e50784b092cdd707_39_onStance)
HXLINE(  40)		this->stickmen->gotoAndStop(HX_("stand",d6,70,0b,84),null());
HXLINE(  41)		this->loopAnimation = true;
HXLINE(  42)		this->playAnimation = true;
HXLINE(  43)		this->returnToIdleOnLastFrame = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SlaptasticGameplay_obj,onStance,(void))

void SlaptasticGameplay_obj::onRun( ::engine::events::CharacterStateEvent e){
            	HX_STACKFRAME(&_hx_pos_e50784b092cdd707_45_onRun)
HXLINE(  46)		this->stickmen->gotoAndStop(HX_("run",4b,e7,56,00),null());
HXLINE(  47)		this->loopAnimation = true;
HXLINE(  48)		this->playAnimation = true;
HXLINE(  49)		this->returnToIdleOnLastFrame = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SlaptasticGameplay_obj,onRun,(void))

void SlaptasticGameplay_obj::onDuck( ::engine::events::CharacterStateEvent e){
            	HX_STACKFRAME(&_hx_pos_e50784b092cdd707_51_onDuck)
HXLINE(  52)		this->stickmen->gotoAndStop(HX_("Duck",99,a0,4b,2d),null());
HXLINE(  53)		this->loopAnimation = false;
HXLINE(  54)		this->playAnimation = false;
HXLINE(  55)		this->returnToIdleOnLastFrame = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SlaptasticGameplay_obj,onDuck,(void))

void SlaptasticGameplay_obj::onStartJump( ::engine::events::CharacterStateEvent e){
            	HX_STACKFRAME(&_hx_pos_e50784b092cdd707_57_onStartJump)
HXLINE(  58)		this->stickmen->gotoAndStop(HX_("StartJump",50,1e,30,a1),null());
HXLINE(  59)		this->loopAnimation = false;
HXLINE(  60)		this->playAnimation = true;
HXLINE(  61)		this->returnToIdleOnLastFrame = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SlaptasticGameplay_obj,onStartJump,(void))

void SlaptasticGameplay_obj::onJumpUp( ::engine::events::CharacterStateEvent e){
            	HX_STACKFRAME(&_hx_pos_e50784b092cdd707_63_onJumpUp)
HXLINE(  64)		this->stickmen->gotoAndStop(HX_("Jump",0e,f1,42,31),null());
HXLINE(  65)		this->stickmen->Man->gotoAndStop(1,null());
HXLINE(  66)		this->loopAnimation = false;
HXLINE(  67)		this->playAnimation = true;
HXLINE(  68)		this->returnToIdleOnLastFrame = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SlaptasticGameplay_obj,onJumpUp,(void))

void SlaptasticGameplay_obj::onJumpDown( ::engine::events::CharacterStateEvent e){
            	HX_STACKFRAME(&_hx_pos_e50784b092cdd707_70_onJumpDown)
HXLINE(  71)		this->stickmen->gotoAndStop(HX_("Jump",0e,f1,42,31),null());
HXLINE(  72)		this->stickmen->Man->gotoAndStop(8,null());
HXLINE(  73)		this->loopAnimation = false;
HXLINE(  74)		this->playAnimation = true;
HXLINE(  75)		this->returnToIdleOnLastFrame = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SlaptasticGameplay_obj,onJumpDown,(void))

void SlaptasticGameplay_obj::onGotHit( ::engine::events::CharacterStateEvent e){
            	HX_STACKFRAME(&_hx_pos_e50784b092cdd707_77_onGotHit)
HXLINE(  78)		 ::Dynamic data = e->data;
HXLINE(  79)		if (::openfl::utils::_Object::Object_Impl__obj::toBool(::openfl::utils::_Object::Object_Impl__obj::__get(data,HX_("isLauncher",6a,9f,2d,bd)))) {
HXLINE(  80)			this->stickmen->gotoAndStop(HX_("HurtTop",a6,9d,65,6a),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SlaptasticGameplay_obj,onGotHit,(void))

void SlaptasticGameplay_obj::onUpdate( ::engine::events::GameEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_e50784b092cdd707_83_onUpdate)
HXLINE(  84)		if (::hx::IsPointerEq( this->state,::engine::States_obj::FREE_dyn() )) {
HXLINE(  85)			if (this->onground) {
HXLINE(  86)				if (this->ATTACK_PRESSED) {
HXLINE(  87)					this->stickmen->gotoAndStop(HX_("Attack1",49,7b,3d,fb),null());
HXLINE(  88)					this->stickmen->Man->gotoAndStop(1,null());
HXLINE(  89)					this->loopAnimation = false;
HXLINE(  90)					this->playAnimation = true;
HXLINE(  91)					this->returnToIdleOnLastFrame = true;
HXLINE(  92)					this->canAttack = false;
HXLINE(  93)					this->state = ::engine::States_obj::ATTACK_dyn();
HXLINE(  94)					this->changeCharState(HX_("ATTACK",c8,a7,92,92));
            				}
            			}
            		}
HXLINE(  98)		if (::hx::IsPointerEq( this->state,::engine::States_obj::ATTACK_dyn() )) {
HXLINE(  99)			if ((this->stickmen->get_currentFrameLabel() == HX_("Attack1",49,7b,3d,fb))) {
HXLINE( 100)				this->hitbox =  ::engine::HitBoxInfomation_obj::__alloc( HX_CTX );
HXLINE( 101)				this->hitbox->xspeed = ( (Float)(0) );
HXLINE( 102)				this->hitbox->yspeed = ( (Float)(0) );
HXLINE( 103)				this->hitbox->friction = ((Float).8);
HXLINE( 104)				this->hitbox->gravity = ((Float).5);
HXLINE( 105)				this->hitbox->damage = ( (Float)(3) );
HXLINE( 106)				this->hitbox->isLauncher = false;
HXLINE( 107)				this->hitbox->hitter = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 108)				this->canAttack = (this->stickmen->Man->get_currentFrame() >= 13);
HXLINE( 109)				if (this->canAttack) {
HXLINE( 110)					if (this->ATTACK_PRESSED) {
HXLINE( 111)						this->stickmen->gotoAndStop(HX_("Attack2",4a,7b,3d,fb),null());
HXLINE( 112)						this->stickmen->Man->gotoAndStop(1,null());
HXLINE( 113)						this->loopAnimation = false;
HXLINE( 114)						this->playAnimation = true;
HXLINE( 115)						this->returnToIdleOnLastFrame = true;
HXLINE( 116)						this->canAttack = false;
HXLINE( 117)						this->state = ::engine::States_obj::ATTACK_dyn();
HXLINE( 118)						this->changeCharState(HX_("ATTACK",c8,a7,92,92));
            					}
            				}
            			}
HXLINE( 122)			if ((this->stickmen->get_currentFrameLabel() == HX_("Attack2",4a,7b,3d,fb))) {
HXLINE( 123)				this->canAttack = (this->stickmen->Man->get_currentFrame() >= 13);
HXLINE( 124)				if (this->canAttack) {
HXLINE( 125)					if (this->ATTACK_PRESSED) {
HXLINE( 126)						this->stickmen->gotoAndStop(HX_("Attack3",4b,7b,3d,fb),null());
HXLINE( 127)						this->stickmen->Man->gotoAndStop(1,null());
HXLINE( 128)						this->loopAnimation = false;
HXLINE( 129)						this->playAnimation = true;
HXLINE( 130)						this->returnToIdleOnLastFrame = true;
HXLINE( 131)						this->canAttack = false;
HXLINE( 132)						this->state = ::engine::States_obj::ATTACK_dyn();
HXLINE( 133)						this->changeCharState(HX_("ATTACK",c8,a7,92,92));
            					}
            				}
            			}
            		}
HXLINE( 138)		this->updateSpriteAnimation();
HXLINE( 139)		this->updateHitBoxes();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SlaptasticGameplay_obj,onUpdate,(void))

void SlaptasticGameplay_obj::updateSpriteAnimation(){
            	HX_STACKFRAME(&_hx_pos_e50784b092cdd707_141_updateSpriteAnimation)
HXLINE( 142)		if ((this->stickmen->get_currentFrameLabel() == HX_("StartJump",50,1e,30,a1))) {
HXLINE( 143)			bool _hx_tmp;
HXDLIN( 143)			int _hx_tmp1 = this->stickmen->Man->get_currentFrame();
HXDLIN( 143)			if ((_hx_tmp1 == (this->stickmen->Man->get_totalFrames() - 1))) {
HXLINE( 143)				_hx_tmp = (this->JUMP == false);
            			}
            			else {
HXLINE( 143)				_hx_tmp = false;
            			}
HXDLIN( 143)			if (_hx_tmp) {
HXLINE( 144)				this->jumpUp((( (Float)(this->jumpPower) ) / ((Float)1.5)));
            			}
HXLINE( 147)			int _hx_tmp2 = this->stickmen->Man->get_currentFrame();
HXDLIN( 147)			if ((_hx_tmp2 == this->stickmen->Man->get_totalFrames())) {
HXLINE( 148)				this->jumpUp(( (Float)(this->jumpPower) ));
            			}
            		}
HXLINE( 151)		if ((this->stickmen->get_currentFrameLabel() == HX_("Jump",0e,f1,42,31))) {
HXLINE( 152)			bool _hx_tmp;
HXDLIN( 152)			if ((this->stickmen->Man->get_currentFrame() >= 7)) {
HXLINE( 152)				_hx_tmp = (this->yspeed < 0);
            			}
            			else {
HXLINE( 152)				_hx_tmp = false;
            			}
HXDLIN( 152)			if (_hx_tmp) {
HXLINE( 153)				this->stickmen->Man->gotoAndStop(7,null());
            			}
HXLINE( 155)			bool _hx_tmp1;
HXDLIN( 155)			if ((this->stickmen->Man->get_currentFrame() <= 7)) {
HXLINE( 155)				_hx_tmp1 = (this->yspeed > 0);
            			}
            			else {
HXLINE( 155)				_hx_tmp1 = false;
            			}
HXDLIN( 155)			if (_hx_tmp1) {
HXLINE( 156)				this->stickmen->Man->gotoAndStop(8,null());
            			}
            		}
HXLINE( 159)		if (this->loopAnimation) {
HXLINE( 160)			int _hx_tmp = this->stickmen->Man->get_currentFrame();
HXDLIN( 160)			if ((_hx_tmp == this->stickmen->Man->get_totalFrames())) {
HXLINE( 161)				this->stickmen->Man->gotoAndStop(1,null());
HXLINE( 162)				this->stickmen->stopAllMovieClips();
HXLINE( 163)				return;
            			}
            		}
HXLINE( 166)		if (this->returnToIdleOnLastFrame) {
HXLINE( 167)			int _hx_tmp = this->stickmen->Man->get_currentFrame();
HXDLIN( 167)			if ((_hx_tmp == this->stickmen->Man->get_totalFrames())) {
HXLINE( 168)				this->stickmen->gotoAndStop(1,null());
HXLINE( 169)				this->state = ::engine::States_obj::FREE_dyn();
HXLINE( 170)				this->returnToIdleOnLastFrame = false;
            			}
            		}
HXLINE( 173)		if (this->playAnimation) {
HXLINE( 173)			this->stickmen->Man->nextFrame();
            		}
HXLINE( 174)		this->stickmen->stopAllMovieClips();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SlaptasticGameplay_obj,updateSpriteAnimation,(void))

void SlaptasticGameplay_obj::updateHitBoxes(){
            	HX_STACKFRAME(&_hx_pos_e50784b092cdd707_176_updateHitBoxes)
HXLINE( 177)		int a = 0;
HXLINE( 178)		while((a < this->stickmen->Man->get_numChildren())){
HXLINE( 179)			 ::openfl::display::DisplayObject mc = this->stickmen->Man->getChildAt(a);
HXLINE( 180)			 ::HitBox hitbox = ( ( ::HitBox)(::Std_obj::downcast(mc,::hx::ClassOf< ::HitBox >())) );
HXLINE( 181)			if (::hx::IsNotNull( hitbox )) {
HXLINE( 182)				::Global_obj::game->hitBoxes->push(hitbox);
            			}
HXLINE( 184)			a = (a + 1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SlaptasticGameplay_obj,updateHitBoxes,(void))


::hx::ObjectPtr< SlaptasticGameplay_obj > SlaptasticGameplay_obj::__new() {
	::hx::ObjectPtr< SlaptasticGameplay_obj > __this = new SlaptasticGameplay_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SlaptasticGameplay_obj > SlaptasticGameplay_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SlaptasticGameplay_obj *__this = (SlaptasticGameplay_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SlaptasticGameplay_obj), true, "characters.SlaptasticGameplay"));
	*(void **)__this = SlaptasticGameplay_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SlaptasticGameplay_obj::SlaptasticGameplay_obj()
{
}

void SlaptasticGameplay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SlaptasticGameplay);
	HX_MARK_MEMBER_NAME(stickmen,"stickmen");
	HX_MARK_MEMBER_NAME(loopAnimation,"loopAnimation");
	HX_MARK_MEMBER_NAME(playAnimation,"playAnimation");
	HX_MARK_MEMBER_NAME(returnToIdleOnLastFrame,"returnToIdleOnLastFrame");
	 ::engine::PlayerDefault_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SlaptasticGameplay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stickmen,"stickmen");
	HX_VISIT_MEMBER_NAME(loopAnimation,"loopAnimation");
	HX_VISIT_MEMBER_NAME(playAnimation,"playAnimation");
	HX_VISIT_MEMBER_NAME(returnToIdleOnLastFrame,"returnToIdleOnLastFrame");
	 ::engine::PlayerDefault_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SlaptasticGameplay_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"onRun") ) { return ::hx::Val( onRun_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onDuck") ) { return ::hx::Val( onDuck_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stickmen") ) { return ::hx::Val( stickmen ); }
		if (HX_FIELD_EQ(inName,"onStance") ) { return ::hx::Val( onStance_dyn() ); }
		if (HX_FIELD_EQ(inName,"onJumpUp") ) { return ::hx::Val( onJumpUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"onGotHit") ) { return ::hx::Val( onGotHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return ::hx::Val( onUpdate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onJumpDown") ) { return ::hx::Val( onJumpDown_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onStartJump") ) { return ::hx::Val( onStartJump_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loopAnimation") ) { return ::hx::Val( loopAnimation ); }
		if (HX_FIELD_EQ(inName,"playAnimation") ) { return ::hx::Val( playAnimation ); }
		if (HX_FIELD_EQ(inName,"onTouchGround") ) { return ::hx::Val( onTouchGround_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateHitBoxes") ) { return ::hx::Val( updateHitBoxes_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateSpriteAnimation") ) { return ::hx::Val( updateSpriteAnimation_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"returnToIdleOnLastFrame") ) { return ::hx::Val( returnToIdleOnLastFrame ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SlaptasticGameplay_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"stickmen") ) { stickmen=inValue.Cast<  ::Slaptastic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loopAnimation") ) { loopAnimation=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playAnimation") ) { playAnimation=inValue.Cast< bool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"returnToIdleOnLastFrame") ) { returnToIdleOnLastFrame=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SlaptasticGameplay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("stickmen",c6,46,94,cc));
	outFields->push(HX_("loopAnimation",00,3c,42,dd));
	outFields->push(HX_("playAnimation",70,42,7a,e5));
	outFields->push(HX_("returnToIdleOnLastFrame",19,44,a7,12));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SlaptasticGameplay_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Slaptastic */ ,(int)offsetof(SlaptasticGameplay_obj,stickmen),HX_("stickmen",c6,46,94,cc)},
	{::hx::fsBool,(int)offsetof(SlaptasticGameplay_obj,loopAnimation),HX_("loopAnimation",00,3c,42,dd)},
	{::hx::fsBool,(int)offsetof(SlaptasticGameplay_obj,playAnimation),HX_("playAnimation",70,42,7a,e5)},
	{::hx::fsBool,(int)offsetof(SlaptasticGameplay_obj,returnToIdleOnLastFrame),HX_("returnToIdleOnLastFrame",19,44,a7,12)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SlaptasticGameplay_obj_sStaticStorageInfo = 0;
#endif

static ::String SlaptasticGameplay_obj_sMemberFields[] = {
	HX_("stickmen",c6,46,94,cc),
	HX_("loopAnimation",00,3c,42,dd),
	HX_("playAnimation",70,42,7a,e5),
	HX_("returnToIdleOnLastFrame",19,44,a7,12),
	HX_("onTouchGround",c7,a4,48,e4),
	HX_("onStance",6f,40,a4,e5),
	HX_("onRun",6c,7b,6e,32),
	HX_("onDuck",38,7d,fc,e4),
	HX_("onStartJump",51,21,a0,21),
	HX_("onJumpUp",68,9d,c4,e7),
	HX_("onJumpDown",af,cc,f7,cc),
	HX_("onGotHit",e6,42,cd,44),
	HX_("onUpdate",88,7c,b2,66),
	HX_("updateSpriteAnimation",36,7e,a9,0c),
	HX_("updateHitBoxes",0f,3f,88,2b),
	::String(null()) };

::hx::Class SlaptasticGameplay_obj::__mClass;

void SlaptasticGameplay_obj::__register()
{
	SlaptasticGameplay_obj _hx_dummy;
	SlaptasticGameplay_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("characters.SlaptasticGameplay",da,d2,cf,48);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SlaptasticGameplay_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SlaptasticGameplay_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SlaptasticGameplay_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SlaptasticGameplay_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace characters
