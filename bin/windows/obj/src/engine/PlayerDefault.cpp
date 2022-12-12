#include <hxcpp.h>

#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_engine_GameInput
#include <engine/GameInput.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1b07d5ba1db1ad5b_20_new,"engine.PlayerDefault","new",0x51cb9086,"engine.PlayerDefault.new","engine/PlayerDefault.hx",20,0xa5c233ab)
HX_LOCAL_STACK_FRAME(_hx_pos_1b07d5ba1db1ad5b_70_getInputs,"engine.PlayerDefault","getInputs",0xa23baf05,"engine.PlayerDefault.getInputs","engine/PlayerDefault.hx",70,0xa5c233ab)
HX_LOCAL_STACK_FRAME(_hx_pos_1b07d5ba1db1ad5b_84_changeCharState,"engine.PlayerDefault","changeCharState",0xd8a900f1,"engine.PlayerDefault.changeCharState","engine/PlayerDefault.hx",84,0xa5c233ab)
HX_LOCAL_STACK_FRAME(_hx_pos_1b07d5ba1db1ad5b_89_onHit,"engine.PlayerDefault","onHit",0xa16b701a,"engine.PlayerDefault.onHit","engine/PlayerDefault.hx",89,0xa5c233ab)
HX_LOCAL_STACK_FRAME(_hx_pos_1b07d5ba1db1ad5b_115_update,"engine.PlayerDefault","update",0x3c03e1a3,"engine.PlayerDefault.update","engine/PlayerDefault.hx",115,0xa5c233ab)
HX_LOCAL_STACK_FRAME(_hx_pos_1b07d5ba1db1ad5b_225_jumpUp,"engine.PlayerDefault","jumpUp",0xbd160283,"engine.PlayerDefault.jumpUp","engine/PlayerDefault.hx",225,0xa5c233ab)
HX_LOCAL_STACK_FRAME(_hx_pos_1b07d5ba1db1ad5b_236_turnRight,"engine.PlayerDefault","turnRight",0x3fcb2bc5,"engine.PlayerDefault.turnRight","engine/PlayerDefault.hx",236,0xa5c233ab)
HX_LOCAL_STACK_FRAME(_hx_pos_1b07d5ba1db1ad5b_239_turnLeft,"engine.PlayerDefault","turnLeft",0xbf77183e,"engine.PlayerDefault.turnLeft","engine/PlayerDefault.hx",239,0xa5c233ab)
namespace engine{

void PlayerDefault_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1b07d5ba1db1ad5b_20_new)
HXLINE(  61)		this->state = ::engine::States_obj::FREE_dyn();
HXLINE(  60)		this->canAirJump = false;
HXLINE(  59)		this->canJump = false;
HXLINE(  58)		this->canAttack = false;
HXLINE(  57)		this->canMove = false;
HXLINE(  56)		this->jumpCount = 0;
HXLINE(  53)		this->maxJumps = 3;
HXLINE(  52)		this->jumpPower = -10;
HXLINE(  51)		this->airMoveSpeed = ((Float)0.83333333333333337);
HXLINE(  50)		this->runSpeed = ((Float)2.5);
HXLINE(  47)		this->isPlayer = 0;
HXLINE(  45)		this->ATTACK_PRESSED = false;
HXLINE(  44)		this->JUMP_PRESSED = false;
HXLINE(  42)		this->JUMP = false;
HXLINE(  41)		this->BLOCK = false;
HXLINE(  40)		this->SPECIAL = false;
HXLINE(  39)		this->ATTACK = false;
HXLINE(  38)		this->RIGHT = false;
HXLINE(  37)		this->LEFT = false;
HXLINE(  36)		this->DOWN = false;
HXLINE(  35)		this->UP = false;
HXLINE(  33)		this->onleftWall = false;
HXLINE(  32)		this->onrightWall = false;
HXLINE(  31)		this->onground = false;
HXLINE(  28)		this->gravity = ((Float)0.8);
HXLINE(  27)		this->friction = ((Float).70);
HXLINE(  26)		this->yspeed = ((Float)0);
HXLINE(  25)		this->xspeed = ((Float)0);
HXLINE(  24)		this->maxXspeed = ((Float)0);
HXLINE(  22)		this->hp = ((Float)100);
HXLINE(  65)		super::__construct();
HXLINE(  66)		this->hp = ( (Float)(100) );
HXLINE(  67)		::Main_obj::gameLoop->addEventListener(::engine::events::GameEvent_obj::ON_GAME_LOOP,this->update_dyn(),null(),null(),null());
            	}

Dynamic PlayerDefault_obj::__CreateEmpty() { return new PlayerDefault_obj; }

void *PlayerDefault_obj::_hx_vtable = 0;

Dynamic PlayerDefault_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayerDefault_obj > _hx_result = new PlayerDefault_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PlayerDefault_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x0a5cbc5a) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0a5cbc5a;
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

void PlayerDefault_obj::getInputs(){
            	HX_STACKFRAME(&_hx_pos_1b07d5ba1db1ad5b_70_getInputs)
HXDLIN(  70)		bool _hx_tmp;
HXDLIN(  70)		if ((this->isPlayer == ::Global_obj::game->localPlayer)) {
HXDLIN(  70)			_hx_tmp = (::Global_obj::game->isNetGame == false);
            		}
            		else {
HXDLIN(  70)			_hx_tmp = false;
            		}
HXDLIN(  70)		if (_hx_tmp) {
HXLINE(  71)			bool _hx_tmp;
HXDLIN(  71)			if (!(this->JUMP)) {
HXLINE(  71)				_hx_tmp = ::Main_obj::gameInput->JUMP;
            			}
            			else {
HXLINE(  71)				_hx_tmp = false;
            			}
HXDLIN(  71)			this->JUMP_PRESSED = _hx_tmp;
HXLINE(  72)			bool _hx_tmp1;
HXDLIN(  72)			if (!(this->ATTACK)) {
HXLINE(  72)				_hx_tmp1 = ::Main_obj::gameInput->ATTACK;
            			}
            			else {
HXLINE(  72)				_hx_tmp1 = false;
            			}
HXDLIN(  72)			this->ATTACK_PRESSED = _hx_tmp1;
HXLINE(  73)			this->UP = ::Main_obj::gameInput->UP;
HXLINE(  74)			this->DOWN = ::Main_obj::gameInput->DOWN;
HXLINE(  75)			this->LEFT = ::Main_obj::gameInput->LEFT;
HXLINE(  76)			this->RIGHT = ::Main_obj::gameInput->RIGHT;
HXLINE(  77)			this->ATTACK = ::Main_obj::gameInput->ATTACK;
HXLINE(  78)			this->SPECIAL = ::Main_obj::gameInput->SPECIAL;
HXLINE(  79)			this->BLOCK = ::Main_obj::gameInput->BLOCK;
HXLINE(  80)			this->JUMP = ::Main_obj::gameInput->JUMP;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayerDefault_obj,getInputs,(void))

void PlayerDefault_obj::changeCharState(::String state){
            	HX_GC_STACKFRAME(&_hx_pos_1b07d5ba1db1ad5b_84_changeCharState)
HXDLIN(  84)		if ((this->lastCallCharacterStateEvent != state)) {
HXLINE(  85)			this->dispatchEvent( ::engine::events::CharacterStateEvent_obj::__alloc( HX_CTX ,state,null()));
HXLINE(  86)			this->lastCallCharacterStateEvent = state;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayerDefault_obj,changeCharState,(void))

void PlayerDefault_obj::onHit( ::openfl::display::DisplayObject mc){
            	HX_GC_STACKFRAME(&_hx_pos_1b07d5ba1db1ad5b_89_onHit)
HXLINE(  90)		 ::engine::PlayerDefault playerWhoHitMe = ( ( ::engine::PlayerDefault)(::Std_obj::downcast(mc,::hx::ClassOf< ::engine::PlayerDefault >())) );
HXLINE(  91)		if (::hx::IsNull( playerWhoHitMe )) {
HXLINE(  92)			return;
            		}
HXLINE(  94)		 ::engine::HitBoxInfomation hitbox = playerWhoHitMe->hitbox;
HXLINE(  95)		if (::hx::IsNull( hitbox )) {
HXLINE(  96)			return;
            		}
HXLINE(  98)		this->xspeed = hitbox->xspeed;
HXLINE(  99)		this->yspeed = hitbox->yspeed;
HXLINE( 100)		this->friction = hitbox->friction;
HXLINE( 101)		this->gravity = hitbox->gravity;
HXLINE( 102)		this->hp = hitbox->damage;
HXLINE( 103)		Float _hx_tmp = playerWhoHitMe->get_x();
HXDLIN( 103)		bool _hx_tmp1 = (_hx_tmp > this->get_x());
HXLINE( 106)		Float _hx_tmp2 = playerWhoHitMe->get_x();
HXDLIN( 106)		bool _hx_tmp3 = (_hx_tmp2 < this->get_x());
HXLINE( 109)		 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(0));
HXDLIN( 109)		 ::Dynamic eventObj = this1;
HXLINE( 110)		{
HXLINE( 110)			 ::Dynamic this2 = eventObj;
HXDLIN( 110)			if (::hx::IsNotNull( this2 )) {
HXLINE( 110)				::Reflect_obj::setProperty(this2,HX_("victim",88,fd,f7,e4),::hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE( 111)		{
HXLINE( 111)			 ::Dynamic value = hitbox->hitter;
HXDLIN( 111)			{
HXLINE( 111)				 ::Dynamic this3 = eventObj;
HXDLIN( 111)				if (::hx::IsNotNull( this3 )) {
HXLINE( 111)					::Reflect_obj::setProperty(this3,HX_("hitter",6e,8d,35,57),value);
            				}
            			}
            		}
HXLINE( 112)		{
HXLINE( 112)			 ::Dynamic value1 = hitbox->isLauncher;
HXDLIN( 112)			{
HXLINE( 112)				 ::Dynamic this4 = eventObj;
HXDLIN( 112)				if (::hx::IsNotNull( this4 )) {
HXLINE( 112)					::Reflect_obj::setProperty(this4,HX_("isLauncher",6a,9f,2d,bd),value1);
            				}
            			}
            		}
HXLINE( 113)		this->dispatchEvent( ::engine::events::CharacterStateEvent_obj::__alloc( HX_CTX ,::engine::events::CharacterStateEvent_obj::ON_GOT_HIT,eventObj));
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayerDefault_obj,onHit,(void))

void PlayerDefault_obj::update( ::engine::events::GameEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_1b07d5ba1db1ad5b_115_update)
HXLINE( 116)		this->getInputs();
HXLINE( 120)		if (::hx::IsPointerEq( this->state,::engine::States_obj::FREE_dyn() )) {
HXLINE( 121)			this->gravity = ((Float)0.5);
HXLINE( 122)			this->canMove = true;
HXLINE( 123)			this->canAttack = true;
HXLINE( 124)			this->canJump = true;
HXLINE( 125)			this->canAirJump = !(this->onground);
            		}
HXLINE( 127)		if (::hx::IsPointerEq( this->state,::engine::States_obj::ATTACK_dyn() )) {
HXLINE( 128)			this->canMove = !(this->onground);
HXLINE( 129)			this->canJump = false;
HXLINE( 130)			this->canAirJump = false;
            		}
HXLINE( 132)		if (::hx::IsPointerEq( this->state,::engine::States_obj::START_JUMP_dyn() )) {
HXLINE( 133)			this->canMove = false;
HXLINE( 134)			this->canAttack = true;
HXLINE( 135)			this->canJump = false;
HXLINE( 136)			this->canAirJump = false;
            		}
HXLINE( 139)		if (this->canMove) {
HXLINE( 140)			this->maxXspeed = ( (Float)(10) );
HXLINE( 141)			if (!(this->onground)) {
HXLINE( 142)				this->friction = ((Float).95);
HXLINE( 143)				if (this->RIGHT) {
HXLINE( 144)					 ::engine::PlayerDefault _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 144)					_hx_tmp->xspeed = (_hx_tmp->xspeed + this->airMoveSpeed);
            				}
HXLINE( 146)				if (this->LEFT) {
HXLINE( 147)					 ::engine::PlayerDefault _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 147)					_hx_tmp->xspeed = (_hx_tmp->xspeed - this->airMoveSpeed);
            				}
HXLINE( 149)				if ((this->yspeed > 0)) {
HXLINE( 150)					this->changeCharState(::engine::events::CharacterStateEvent_obj::JUMP_DOWN);
            				}
            				else {
HXLINE( 152)					this->changeCharState(::engine::events::CharacterStateEvent_obj::JUMP_UP);
            				}
            			}
HXLINE( 155)			if (this->onground) {
HXLINE( 156)				this->friction = ((Float).7);
HXLINE( 157)				if (this->RIGHT) {
HXLINE( 158)					 ::engine::PlayerDefault _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 158)					_hx_tmp->xspeed = (_hx_tmp->xspeed + this->runSpeed);
HXLINE( 159)					this->turnRight();
HXLINE( 160)					this->changeCharState(::engine::events::CharacterStateEvent_obj::RUN);
            				}
            				else {
HXLINE( 161)					if (this->LEFT) {
HXLINE( 162)						 ::engine::PlayerDefault _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 162)						_hx_tmp->xspeed = (_hx_tmp->xspeed - this->runSpeed);
HXLINE( 163)						this->turnLeft();
HXLINE( 164)						this->changeCharState(::engine::events::CharacterStateEvent_obj::RUN);
            					}
            					else {
HXLINE( 165)						if (this->DOWN) {
HXLINE( 166)							this->changeCharState(::engine::events::CharacterStateEvent_obj::DUCK);
            						}
            						else {
HXLINE( 168)							this->changeCharState(::engine::events::CharacterStateEvent_obj::STANCE);
            						}
            					}
            				}
            			}
HXLINE( 171)			if ((this->xspeed > this->maxXspeed)) {
HXLINE( 172)				this->xspeed = this->maxXspeed;
            			}
HXLINE( 174)			if ((this->xspeed < -(this->maxXspeed))) {
HXLINE( 175)				this->xspeed = -(this->maxXspeed);
            			}
            		}
HXLINE( 178)		if (this->canJump) {
HXLINE( 179)			bool _hx_tmp;
HXDLIN( 179)			if (this->JUMP_PRESSED) {
HXLINE( 179)				_hx_tmp = this->onground;
            			}
            			else {
HXLINE( 179)				_hx_tmp = false;
            			}
HXDLIN( 179)			if (_hx_tmp) {
HXLINE( 180)				this->state = ::engine::States_obj::START_JUMP_dyn();
HXLINE( 181)				this->changeCharState(::engine::events::CharacterStateEvent_obj::START_JUMP);
            			}
            		}
HXLINE( 184)		if (this->canAirJump) {
HXLINE( 185)			if (this->JUMP_PRESSED) {
HXLINE( 186)				this->jumpUp(( (Float)(this->jumpPower) ));
            			}
            		}
HXLINE( 192)		this->onground = false;
HXLINE( 193)		this->onrightWall = false;
HXLINE( 194)		this->onleftWall = false;
HXLINE( 195)		 ::engine::PlayerDefault _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 195)		_hx_tmp->xspeed = (_hx_tmp->xspeed * this->friction);
HXLINE( 196)		 ::engine::PlayerDefault _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)		_hx_tmp1->yspeed = (_hx_tmp1->yspeed + this->gravity);
HXLINE( 197)		while(true){
HXLINE( 197)			 ::openfl::display::Sprite _hx_tmp = this->mapCollision;
HXDLIN( 197)			Float _hx_tmp1 = (this->get_x() - ( (Float)(30) ));
HXDLIN( 197)			if (!(_hx_tmp->hitTestPoint(_hx_tmp1,this->get_y(),true))) {
HXLINE( 197)				goto _hx_goto_4;
            			}
HXLINE( 198)			this->set_x((this->get_x() + 1));
            		}
            		_hx_goto_4:;
HXLINE( 200)		while(true){
HXLINE( 200)			 ::openfl::display::Sprite _hx_tmp = this->mapCollision;
HXDLIN( 200)			Float _hx_tmp1 = (this->get_x() + 30);
HXDLIN( 200)			if (!(_hx_tmp->hitTestPoint(_hx_tmp1,this->get_y(),true))) {
HXLINE( 200)				goto _hx_goto_5;
            			}
HXLINE( 201)			this->set_x((this->get_x() - ( (Float)(1) )));
            		}
            		_hx_goto_5:;
HXLINE( 203)		while(true){
HXLINE( 203)			 ::openfl::display::Sprite _hx_tmp = this->mapCollision;
HXDLIN( 203)			Float _hx_tmp1 = this->get_x();
HXDLIN( 203)			if (!(_hx_tmp->hitTestPoint(_hx_tmp1,(this->get_y() + 30),true))) {
HXLINE( 203)				goto _hx_goto_6;
            			}
HXLINE( 204)			this->set_y((this->get_y() - ( (Float)(1) )));
            		}
            		_hx_goto_6:;
HXLINE( 206)		while(true){
HXLINE( 206)			 ::openfl::display::Sprite _hx_tmp = this->mapCollision;
HXDLIN( 206)			Float _hx_tmp1 = this->get_x();
HXDLIN( 206)			if (!(_hx_tmp->hitTestPoint(_hx_tmp1,(this->get_y() - ( (Float)(30) )),true))) {
HXLINE( 206)				goto _hx_goto_7;
            			}
HXLINE( 207)			this->set_y((this->get_y() + 1));
            		}
            		_hx_goto_7:;
HXLINE( 209)		bool _hx_tmp2;
HXDLIN( 209)		 ::openfl::display::Sprite _hx_tmp3 = this->mapCollision;
HXDLIN( 209)		Float _hx_tmp4 = this->get_x();
HXDLIN( 209)		if (_hx_tmp3->hitTestPoint(_hx_tmp4,(this->get_y() + 32),true)) {
HXLINE( 209)			_hx_tmp2 = (this->yspeed > 0);
            		}
            		else {
HXLINE( 209)			_hx_tmp2 = false;
            		}
HXDLIN( 209)		if (_hx_tmp2) {
HXLINE( 210)			this->onground = true;
HXLINE( 211)			this->dispatchEvent( ::engine::events::CharacterStateEvent_obj::__alloc( HX_CTX ,::engine::events::CharacterStateEvent_obj::ON_TOUCH_GROUND,null()));
HXLINE( 212)			this->yspeed = ( (Float)(0) );
            		}
HXLINE( 214)		 ::openfl::display::Sprite _hx_tmp5 = this->mapCollision;
HXDLIN( 214)		Float _hx_tmp6 = (this->get_x() + 32);
HXDLIN( 214)		if (_hx_tmp5->hitTestPoint(_hx_tmp6,this->get_y(),true)) {
HXLINE( 215)			this->onrightWall = true;
HXLINE( 216)			if ((this->xspeed > 0)) {
HXLINE( 216)				this->xspeed = ( (Float)(0) );
            			}
            		}
HXLINE( 218)		 ::openfl::display::Sprite _hx_tmp7 = this->mapCollision;
HXDLIN( 218)		Float _hx_tmp8 = (this->get_x() - ( (Float)(32) ));
HXDLIN( 218)		if (_hx_tmp7->hitTestPoint(_hx_tmp8,this->get_y(),true)) {
HXLINE( 219)			this->onleftWall = true;
HXLINE( 220)			if ((this->xspeed < 0)) {
HXLINE( 220)				this->xspeed = ( (Float)(0) );
            			}
            		}
HXLINE( 222)		Float _hx_tmp9 = this->get_x();
HXDLIN( 222)		this->set_x((_hx_tmp9 + this->xspeed));
HXLINE( 223)		Float _hx_tmp10 = this->get_y();
HXDLIN( 223)		this->set_y((_hx_tmp10 + this->yspeed));
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayerDefault_obj,update,(void))

void PlayerDefault_obj::jumpUp(Float power){
            	HX_GC_STACKFRAME(&_hx_pos_1b07d5ba1db1ad5b_225_jumpUp)
HXLINE( 226)		if ((this->jumpCount <= 0)) {
HXLINE( 227)			return;
            		}
HXLINE( 229)		this->state = ::engine::States_obj::FREE_dyn();
HXLINE( 230)		this->yspeed = power;
HXLINE( 231)		this->dispatchEvent( ::engine::events::CharacterStateEvent_obj::__alloc( HX_CTX ,::engine::events::CharacterStateEvent_obj::JUMP_UP,null()));
HXLINE( 232)		this->onground = false;
HXLINE( 233)		 ::engine::PlayerDefault _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)		_hx_tmp->jumpCount = (_hx_tmp->jumpCount - 1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayerDefault_obj,jumpUp,(void))

void PlayerDefault_obj::turnRight(){
            	HX_STACKFRAME(&_hx_pos_1b07d5ba1db1ad5b_236_turnRight)
HXDLIN( 236)		this->set_scaleX(((Float)0.3));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayerDefault_obj,turnRight,(void))

void PlayerDefault_obj::turnLeft(){
            	HX_STACKFRAME(&_hx_pos_1b07d5ba1db1ad5b_239_turnLeft)
HXDLIN( 239)		this->set_scaleX(((Float)-0.3));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayerDefault_obj,turnLeft,(void))


::hx::ObjectPtr< PlayerDefault_obj > PlayerDefault_obj::__new() {
	::hx::ObjectPtr< PlayerDefault_obj > __this = new PlayerDefault_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PlayerDefault_obj > PlayerDefault_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PlayerDefault_obj *__this = (PlayerDefault_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayerDefault_obj), true, "engine.PlayerDefault"));
	*(void **)__this = PlayerDefault_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PlayerDefault_obj::PlayerDefault_obj()
{
}

void PlayerDefault_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayerDefault);
	HX_MARK_MEMBER_NAME(hp,"hp");
	HX_MARK_MEMBER_NAME(hitbox,"hitbox");
	HX_MARK_MEMBER_NAME(maxXspeed,"maxXspeed");
	HX_MARK_MEMBER_NAME(xspeed,"xspeed");
	HX_MARK_MEMBER_NAME(yspeed,"yspeed");
	HX_MARK_MEMBER_NAME(friction,"friction");
	HX_MARK_MEMBER_NAME(gravity,"gravity");
	HX_MARK_MEMBER_NAME(mapCollision,"mapCollision");
	HX_MARK_MEMBER_NAME(onground,"onground");
	HX_MARK_MEMBER_NAME(onrightWall,"onrightWall");
	HX_MARK_MEMBER_NAME(onleftWall,"onleftWall");
	HX_MARK_MEMBER_NAME(UP,"UP");
	HX_MARK_MEMBER_NAME(DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(ATTACK,"ATTACK");
	HX_MARK_MEMBER_NAME(SPECIAL,"SPECIAL");
	HX_MARK_MEMBER_NAME(BLOCK,"BLOCK");
	HX_MARK_MEMBER_NAME(JUMP,"JUMP");
	HX_MARK_MEMBER_NAME(JUMP_PRESSED,"JUMP_PRESSED");
	HX_MARK_MEMBER_NAME(ATTACK_PRESSED,"ATTACK_PRESSED");
	HX_MARK_MEMBER_NAME(isPlayer,"isPlayer");
	HX_MARK_MEMBER_NAME(runSpeed,"runSpeed");
	HX_MARK_MEMBER_NAME(airMoveSpeed,"airMoveSpeed");
	HX_MARK_MEMBER_NAME(jumpPower,"jumpPower");
	HX_MARK_MEMBER_NAME(maxJumps,"maxJumps");
	HX_MARK_MEMBER_NAME(jumpCount,"jumpCount");
	HX_MARK_MEMBER_NAME(canMove,"canMove");
	HX_MARK_MEMBER_NAME(canAttack,"canAttack");
	HX_MARK_MEMBER_NAME(canJump,"canJump");
	HX_MARK_MEMBER_NAME(canAirJump,"canAirJump");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(lastCallCharacterStateEvent,"lastCallCharacterStateEvent");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayerDefault_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hp,"hp");
	HX_VISIT_MEMBER_NAME(hitbox,"hitbox");
	HX_VISIT_MEMBER_NAME(maxXspeed,"maxXspeed");
	HX_VISIT_MEMBER_NAME(xspeed,"xspeed");
	HX_VISIT_MEMBER_NAME(yspeed,"yspeed");
	HX_VISIT_MEMBER_NAME(friction,"friction");
	HX_VISIT_MEMBER_NAME(gravity,"gravity");
	HX_VISIT_MEMBER_NAME(mapCollision,"mapCollision");
	HX_VISIT_MEMBER_NAME(onground,"onground");
	HX_VISIT_MEMBER_NAME(onrightWall,"onrightWall");
	HX_VISIT_MEMBER_NAME(onleftWall,"onleftWall");
	HX_VISIT_MEMBER_NAME(UP,"UP");
	HX_VISIT_MEMBER_NAME(DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(ATTACK,"ATTACK");
	HX_VISIT_MEMBER_NAME(SPECIAL,"SPECIAL");
	HX_VISIT_MEMBER_NAME(BLOCK,"BLOCK");
	HX_VISIT_MEMBER_NAME(JUMP,"JUMP");
	HX_VISIT_MEMBER_NAME(JUMP_PRESSED,"JUMP_PRESSED");
	HX_VISIT_MEMBER_NAME(ATTACK_PRESSED,"ATTACK_PRESSED");
	HX_VISIT_MEMBER_NAME(isPlayer,"isPlayer");
	HX_VISIT_MEMBER_NAME(runSpeed,"runSpeed");
	HX_VISIT_MEMBER_NAME(airMoveSpeed,"airMoveSpeed");
	HX_VISIT_MEMBER_NAME(jumpPower,"jumpPower");
	HX_VISIT_MEMBER_NAME(maxJumps,"maxJumps");
	HX_VISIT_MEMBER_NAME(jumpCount,"jumpCount");
	HX_VISIT_MEMBER_NAME(canMove,"canMove");
	HX_VISIT_MEMBER_NAME(canAttack,"canAttack");
	HX_VISIT_MEMBER_NAME(canJump,"canJump");
	HX_VISIT_MEMBER_NAME(canAirJump,"canAirJump");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(lastCallCharacterStateEvent,"lastCallCharacterStateEvent");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PlayerDefault_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"hp") ) { return ::hx::Val( hp ); }
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
		if (HX_FIELD_EQ(inName,"state") ) { return ::hx::Val( state ); }
		if (HX_FIELD_EQ(inName,"onHit") ) { return ::hx::Val( onHit_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hitbox") ) { return ::hx::Val( hitbox ); }
		if (HX_FIELD_EQ(inName,"xspeed") ) { return ::hx::Val( xspeed ); }
		if (HX_FIELD_EQ(inName,"yspeed") ) { return ::hx::Val( yspeed ); }
		if (HX_FIELD_EQ(inName,"ATTACK") ) { return ::hx::Val( ATTACK ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"jumpUp") ) { return ::hx::Val( jumpUp_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { return ::hx::Val( gravity ); }
		if (HX_FIELD_EQ(inName,"SPECIAL") ) { return ::hx::Val( SPECIAL ); }
		if (HX_FIELD_EQ(inName,"canMove") ) { return ::hx::Val( canMove ); }
		if (HX_FIELD_EQ(inName,"canJump") ) { return ::hx::Val( canJump ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { return ::hx::Val( friction ); }
		if (HX_FIELD_EQ(inName,"onground") ) { return ::hx::Val( onground ); }
		if (HX_FIELD_EQ(inName,"isPlayer") ) { return ::hx::Val( isPlayer ); }
		if (HX_FIELD_EQ(inName,"runSpeed") ) { return ::hx::Val( runSpeed ); }
		if (HX_FIELD_EQ(inName,"maxJumps") ) { return ::hx::Val( maxJumps ); }
		if (HX_FIELD_EQ(inName,"turnLeft") ) { return ::hx::Val( turnLeft_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxXspeed") ) { return ::hx::Val( maxXspeed ); }
		if (HX_FIELD_EQ(inName,"jumpPower") ) { return ::hx::Val( jumpPower ); }
		if (HX_FIELD_EQ(inName,"jumpCount") ) { return ::hx::Val( jumpCount ); }
		if (HX_FIELD_EQ(inName,"canAttack") ) { return ::hx::Val( canAttack ); }
		if (HX_FIELD_EQ(inName,"getInputs") ) { return ::hx::Val( getInputs_dyn() ); }
		if (HX_FIELD_EQ(inName,"turnRight") ) { return ::hx::Val( turnRight_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onleftWall") ) { return ::hx::Val( onleftWall ); }
		if (HX_FIELD_EQ(inName,"canAirJump") ) { return ::hx::Val( canAirJump ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onrightWall") ) { return ::hx::Val( onrightWall ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mapCollision") ) { return ::hx::Val( mapCollision ); }
		if (HX_FIELD_EQ(inName,"JUMP_PRESSED") ) { return ::hx::Val( JUMP_PRESSED ); }
		if (HX_FIELD_EQ(inName,"airMoveSpeed") ) { return ::hx::Val( airMoveSpeed ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ATTACK_PRESSED") ) { return ::hx::Val( ATTACK_PRESSED ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeCharState") ) { return ::hx::Val( changeCharState_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lastCallCharacterStateEvent") ) { return ::hx::Val( lastCallCharacterStateEvent ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PlayerDefault_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"hp") ) { hp=inValue.Cast< Float >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast<  ::engine::States >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hitbox") ) { hitbox=inValue.Cast<  ::engine::HitBoxInfomation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xspeed") ) { xspeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yspeed") ) { yspeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ATTACK") ) { ATTACK=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { gravity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SPECIAL") ) { SPECIAL=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canMove") ) { canMove=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canJump") ) { canJump=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { friction=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onground") ) { onground=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isPlayer") ) { isPlayer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"runSpeed") ) { runSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxJumps") ) { maxJumps=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxXspeed") ) { maxXspeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpPower") ) { jumpPower=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpCount") ) { jumpCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canAttack") ) { canAttack=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onleftWall") ) { onleftWall=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canAirJump") ) { canAirJump=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onrightWall") ) { onrightWall=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mapCollision") ) { mapCollision=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"JUMP_PRESSED") ) { JUMP_PRESSED=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"airMoveSpeed") ) { airMoveSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ATTACK_PRESSED") ) { ATTACK_PRESSED=inValue.Cast< bool >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lastCallCharacterStateEvent") ) { lastCallCharacterStateEvent=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayerDefault_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("hp",08,5b,00,00));
	outFields->push(HX_("hitbox",98,ed,27,57));
	outFields->push(HX_("maxXspeed",d3,f5,c7,ab));
	outFields->push(HX_("xspeed",0f,e4,3c,7c));
	outFields->push(HX_("yspeed",6e,40,98,e2));
	outFields->push(HX_("friction",fa,78,c9,97));
	outFields->push(HX_("gravity",4e,6e,ff,77));
	outFields->push(HX_("mapCollision",36,4a,6a,70));
	outFields->push(HX_("onground",e6,a4,40,c7));
	outFields->push(HX_("onrightWall",07,b6,28,3a));
	outFields->push(HX_("onleftWall",d0,b8,f2,59));
	outFields->push(HX_("UP",5b,4a,00,00));
	outFields->push(HX_("DOWN",62,c0,2e,2d));
	outFields->push(HX_("LEFT",07,d0,70,32));
	outFields->push(HX_("RIGHT",bc,43,52,67));
	outFields->push(HX_("ATTACK",c8,a7,92,92));
	outFields->push(HX_("SPECIAL",19,4e,29,5f));
	outFields->push(HX_("BLOCK",2d,ad,ea,32));
	outFields->push(HX_("JUMP",ee,8c,2a,31));
	outFields->push(HX_("JUMP_PRESSED",f1,2a,79,80));
	outFields->push(HX_("ATTACK_PRESSED",cb,af,1e,b0));
	outFields->push(HX_("isPlayer",eb,86,22,90));
	outFields->push(HX_("runSpeed",3c,d0,9e,89));
	outFields->push(HX_("airMoveSpeed",cc,2e,ef,46));
	outFields->push(HX_("jumpPower",37,58,67,52));
	outFields->push(HX_("maxJumps",81,de,3f,00));
	outFields->push(HX_("jumpCount",01,51,30,d6));
	outFields->push(HX_("canMove",41,cb,b8,66));
	outFields->push(HX_("canAttack",f8,4f,56,32));
	outFields->push(HX_("canJump",1e,ad,c1,64));
	outFields->push(HX_("canAirJump",68,4a,4f,3d));
	outFields->push(HX_("state",11,76,0b,84));
	outFields->push(HX_("lastCallCharacterStateEvent",9e,f3,41,85));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayerDefault_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(PlayerDefault_obj,hp),HX_("hp",08,5b,00,00)},
	{::hx::fsObject /*  ::engine::HitBoxInfomation */ ,(int)offsetof(PlayerDefault_obj,hitbox),HX_("hitbox",98,ed,27,57)},
	{::hx::fsFloat,(int)offsetof(PlayerDefault_obj,maxXspeed),HX_("maxXspeed",d3,f5,c7,ab)},
	{::hx::fsFloat,(int)offsetof(PlayerDefault_obj,xspeed),HX_("xspeed",0f,e4,3c,7c)},
	{::hx::fsFloat,(int)offsetof(PlayerDefault_obj,yspeed),HX_("yspeed",6e,40,98,e2)},
	{::hx::fsFloat,(int)offsetof(PlayerDefault_obj,friction),HX_("friction",fa,78,c9,97)},
	{::hx::fsFloat,(int)offsetof(PlayerDefault_obj,gravity),HX_("gravity",4e,6e,ff,77)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(PlayerDefault_obj,mapCollision),HX_("mapCollision",36,4a,6a,70)},
	{::hx::fsBool,(int)offsetof(PlayerDefault_obj,onground),HX_("onground",e6,a4,40,c7)},
	{::hx::fsBool,(int)offsetof(PlayerDefault_obj,onrightWall),HX_("onrightWall",07,b6,28,3a)},
	{::hx::fsBool,(int)offsetof(PlayerDefault_obj,onleftWall),HX_("onleftWall",d0,b8,f2,59)},
	{::hx::fsBool,(int)offsetof(PlayerDefault_obj,UP),HX_("UP",5b,4a,00,00)},
	{::hx::fsBool,(int)offsetof(PlayerDefault_obj,DOWN),HX_("DOWN",62,c0,2e,2d)},
	{::hx::fsBool,(int)offsetof(PlayerDefault_obj,LEFT),HX_("LEFT",07,d0,70,32)},
	{::hx::fsBool,(int)offsetof(PlayerDefault_obj,RIGHT),HX_("RIGHT",bc,43,52,67)},
	{::hx::fsBool,(int)offsetof(PlayerDefault_obj,ATTACK),HX_("ATTACK",c8,a7,92,92)},
	{::hx::fsBool,(int)offsetof(PlayerDefault_obj,SPECIAL),HX_("SPECIAL",19,4e,29,5f)},
	{::hx::fsBool,(int)offsetof(PlayerDefault_obj,BLOCK),HX_("BLOCK",2d,ad,ea,32)},
	{::hx::fsBool,(int)offsetof(PlayerDefault_obj,JUMP),HX_("JUMP",ee,8c,2a,31)},
	{::hx::fsBool,(int)offsetof(PlayerDefault_obj,JUMP_PRESSED),HX_("JUMP_PRESSED",f1,2a,79,80)},
	{::hx::fsBool,(int)offsetof(PlayerDefault_obj,ATTACK_PRESSED),HX_("ATTACK_PRESSED",cb,af,1e,b0)},
	{::hx::fsInt,(int)offsetof(PlayerDefault_obj,isPlayer),HX_("isPlayer",eb,86,22,90)},
	{::hx::fsFloat,(int)offsetof(PlayerDefault_obj,runSpeed),HX_("runSpeed",3c,d0,9e,89)},
	{::hx::fsFloat,(int)offsetof(PlayerDefault_obj,airMoveSpeed),HX_("airMoveSpeed",cc,2e,ef,46)},
	{::hx::fsInt,(int)offsetof(PlayerDefault_obj,jumpPower),HX_("jumpPower",37,58,67,52)},
	{::hx::fsInt,(int)offsetof(PlayerDefault_obj,maxJumps),HX_("maxJumps",81,de,3f,00)},
	{::hx::fsInt,(int)offsetof(PlayerDefault_obj,jumpCount),HX_("jumpCount",01,51,30,d6)},
	{::hx::fsBool,(int)offsetof(PlayerDefault_obj,canMove),HX_("canMove",41,cb,b8,66)},
	{::hx::fsBool,(int)offsetof(PlayerDefault_obj,canAttack),HX_("canAttack",f8,4f,56,32)},
	{::hx::fsBool,(int)offsetof(PlayerDefault_obj,canJump),HX_("canJump",1e,ad,c1,64)},
	{::hx::fsBool,(int)offsetof(PlayerDefault_obj,canAirJump),HX_("canAirJump",68,4a,4f,3d)},
	{::hx::fsObject /*  ::engine::States */ ,(int)offsetof(PlayerDefault_obj,state),HX_("state",11,76,0b,84)},
	{::hx::fsString,(int)offsetof(PlayerDefault_obj,lastCallCharacterStateEvent),HX_("lastCallCharacterStateEvent",9e,f3,41,85)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PlayerDefault_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayerDefault_obj_sMemberFields[] = {
	HX_("hp",08,5b,00,00),
	HX_("hitbox",98,ed,27,57),
	HX_("maxXspeed",d3,f5,c7,ab),
	HX_("xspeed",0f,e4,3c,7c),
	HX_("yspeed",6e,40,98,e2),
	HX_("friction",fa,78,c9,97),
	HX_("gravity",4e,6e,ff,77),
	HX_("mapCollision",36,4a,6a,70),
	HX_("onground",e6,a4,40,c7),
	HX_("onrightWall",07,b6,28,3a),
	HX_("onleftWall",d0,b8,f2,59),
	HX_("UP",5b,4a,00,00),
	HX_("DOWN",62,c0,2e,2d),
	HX_("LEFT",07,d0,70,32),
	HX_("RIGHT",bc,43,52,67),
	HX_("ATTACK",c8,a7,92,92),
	HX_("SPECIAL",19,4e,29,5f),
	HX_("BLOCK",2d,ad,ea,32),
	HX_("JUMP",ee,8c,2a,31),
	HX_("JUMP_PRESSED",f1,2a,79,80),
	HX_("ATTACK_PRESSED",cb,af,1e,b0),
	HX_("isPlayer",eb,86,22,90),
	HX_("runSpeed",3c,d0,9e,89),
	HX_("airMoveSpeed",cc,2e,ef,46),
	HX_("jumpPower",37,58,67,52),
	HX_("maxJumps",81,de,3f,00),
	HX_("jumpCount",01,51,30,d6),
	HX_("canMove",41,cb,b8,66),
	HX_("canAttack",f8,4f,56,32),
	HX_("canJump",1e,ad,c1,64),
	HX_("canAirJump",68,4a,4f,3d),
	HX_("state",11,76,0b,84),
	HX_("lastCallCharacterStateEvent",9e,f3,41,85),
	HX_("getInputs",5f,4e,44,18),
	HX_("changeCharState",cb,9f,fe,f7),
	HX_("onHit",74,da,66,32),
	HX_("update",09,86,05,87),
	HX_("jumpUp",e9,a6,17,08),
	HX_("turnRight",1f,cb,d3,b5),
	HX_("turnLeft",24,22,77,09),
	::String(null()) };

::hx::Class PlayerDefault_obj::__mClass;

void PlayerDefault_obj::__register()
{
	PlayerDefault_obj _hx_dummy;
	PlayerDefault_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("engine.PlayerDefault",94,95,d3,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayerDefault_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayerDefault_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayerDefault_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayerDefault_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace engine
