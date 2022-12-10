#include <hxcpp.h>

#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_HitBox
#include <HitBox.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_characters_SlaptasticGameplay
#include <characters/SlaptasticGameplay.h>
#endif
#ifndef INCLUDED_engine_PlayerDefault
#include <engine/PlayerDefault.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_utils__Object_Object_Impl_
#include <openfl/utils/_Object/Object_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_69efd8c9269cf369_13_new,"Game","new",0x79ba3204,"Game.new","Game.hx",13,0x56a4f9ec)
HX_LOCAL_STACK_FRAME(_hx_pos_69efd8c9269cf369_24_onUpdate,"Game","onUpdate",0x4c13a864,"Game.onUpdate","Game.hx",24,0x56a4f9ec)
HX_LOCAL_STACK_FRAME(_hx_pos_69efd8c9269cf369_47_createPlayerInfomation,"Game","createPlayerInfomation",0x8000a8cf,"Game.createPlayerInfomation","Game.hx",47,0x56a4f9ec)
HX_LOCAL_STACK_FRAME(_hx_pos_69efd8c9269cf369_59_setViewToPlayer,"Game","setViewToPlayer",0x05b30927,"Game.setViewToPlayer","Game.hx",59,0x56a4f9ec)
HX_LOCAL_STACK_FRAME(_hx_pos_69efd8c9269cf369_71_createAllPlayers,"Game","createAllPlayers",0x0a65f4c9,"Game.createAllPlayers","Game.hx",71,0x56a4f9ec)
HX_LOCAL_STACK_FRAME(_hx_pos_69efd8c9269cf369_91_getGameStateData,"Game","getGameStateData",0x6988c3ef,"Game.getGameStateData","Game.hx",91,0x56a4f9ec)

void Game_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_69efd8c9269cf369_13_new)
HXLINE(  19)		this->isNetGame = false;
HXLINE(  18)		this->localPlayer = 1;
HXLINE(  17)		this->hitBoxes = ::Array_obj< ::Dynamic>::__new();
HXLINE(  16)		this->player_info = ::cpp::VirtualArray_obj::__new();
HXLINE(  15)		this->map = HX_("Box",eb,75,32,00);
HXLINE(  22)		super::__construct();
            	}

Dynamic Game_obj::__CreateEmpty() { return new Game_obj; }

void *Game_obj::_hx_vtable = 0;

Dynamic Game_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Game_obj > _hx_result = new Game_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Game_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x038b1636) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x038b1636;
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

void Game_obj::onUpdate(){
            	HX_STACKFRAME(&_hx_pos_69efd8c9269cf369_24_onUpdate)
HXLINE(  25)		int i = 0;
HXLINE(  26)		while((i < this->hitBoxes->length)){
HXLINE(  27)			 ::HitBox hitbox = this->hitBoxes->__get(i).StaticCast<  ::HitBox >();
HXLINE(  28)			int b = 0;
HXLINE(  29)			while((b < this->player_info->get_length())){
HXLINE(  30)				 ::Dynamic avatar = ::openfl::utils::_Object::Object_Impl__obj::__get(this->player_info->__get(b),HX_("avatar",19,80,5c,fa));
HXLINE(  31)				 ::openfl::display::DisplayObjectContainer avatar2 = hitbox->parent->parent->parent;
HXLINE(  32)				if (::openfl::utils::_Object::Object_Impl__obj::_hx___eq(avatar,avatar2)) {
HXLINE(  33)					b = (b + 1);
HXLINE(  34)					continue;
            				}
HXLINE(  36)				if (hitbox->hitTestObject(( ( ::openfl::display::DisplayObject)(::openfl::utils::_Object::Object_Impl__obj::__get(::openfl::utils::_Object::Object_Impl__obj::__get(avatar,HX_("stickmen",c6,46,94,cc)),HX_("hurtBox",3c,cd,06,9d))) ))) {
HXLINE(  38)					 ::Dynamic _hx_tmp = ::openfl::utils::_Object::Object_Impl__obj::__get(avatar,HX_("onHit",74,da,66,32));
HXDLIN(  38)					_hx_tmp(hitbox->parent->parent->parent);
            				}
HXLINE(  40)				b = (b + 1);
            			}
HXLINE(  42)			i = (i + 1);
            		}
HXLINE(  45)		this->hitBoxes = ::Array_obj< ::Dynamic>::__new();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,onUpdate,(void))

void Game_obj::createPlayerInfomation(::String username,::String character,::String hat, ::openfl::geom::ColorTransform colorTransform,int isPlayer){
            	HX_STACKFRAME(&_hx_pos_69efd8c9269cf369_47_createPlayerInfomation)
HXLINE(  48)		 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(0));
HXDLIN(  48)		 ::Dynamic obj = this1;
HXLINE(  49)		{
HXLINE(  49)			 ::Dynamic this2 = obj;
HXDLIN(  49)			if (::hx::IsNotNull( this2 )) {
HXLINE(  49)				::Reflect_obj::setProperty(this2,HX_("username",16,86,eb,20),username);
            			}
            		}
HXLINE(  50)		{
HXLINE(  50)			 ::Dynamic this3 = obj;
HXDLIN(  50)			if (::hx::IsNotNull( this3 )) {
HXLINE(  50)				::Reflect_obj::setProperty(this3,HX_("character",a9,db,d1,41),character);
            			}
            		}
HXLINE(  51)		{
HXLINE(  51)			 ::Dynamic this4 = obj;
HXDLIN(  51)			if (::hx::IsNotNull( this4 )) {
HXLINE(  51)				::Reflect_obj::setProperty(this4,HX_("hat",5b,3f,4f,00),hat);
            			}
            		}
HXLINE(  52)		{
HXLINE(  52)			 ::Dynamic this5 = obj;
HXDLIN(  52)			if (::hx::IsNotNull( this5 )) {
HXLINE(  52)				::Reflect_obj::setProperty(this5,HX_("colorTransform",89,d7,3f,ad),colorTransform);
            			}
            		}
HXLINE(  53)		{
HXLINE(  53)			 ::Dynamic value = null();
HXDLIN(  53)			{
HXLINE(  53)				 ::Dynamic this6 = obj;
HXDLIN(  53)				if (::hx::IsNotNull( this6 )) {
HXLINE(  53)					::Reflect_obj::setProperty(this6,HX_("avatar",19,80,5c,fa),value);
            				}
            			}
            		}
HXLINE(  54)		{
HXLINE(  54)			 ::Dynamic this7 = obj;
HXDLIN(  54)			if (::hx::IsNotNull( this7 )) {
HXLINE(  54)				::Reflect_obj::setProperty(this7,HX_("isPlayer",eb,86,22,90),isPlayer);
            			}
            		}
HXLINE(  55)		this->player_info->push(obj);
HXLINE(  56)		::haxe::Log_obj::trace((HX_("added ",60,53,16,9f) + username),::hx::SourceInfo(HX_("src/Game.hx",81,18,57,ef),56,HX_("Game",12,20,38,2f),HX_("createPlayerInfomation",f3,f3,cc,06)));
            	}


HX_DEFINE_DYNAMIC_FUNC5(Game_obj,createPlayerInfomation,(void))

 ::Dynamic Game_obj::setViewToPlayer(int playerNumber){
            	HX_STACKFRAME(&_hx_pos_69efd8c9269cf369_59_setViewToPlayer)
HXLINE(  60)		int i = 0;
HXLINE(  61)		while((i < this->player_info->get_length())){
HXLINE(  62)			 ::Dynamic player = this->player_info->__get(i);
HXLINE(  63)			if (::openfl::utils::_Object::Object_Impl__obj::_hx___eq(::openfl::utils::_Object::Object_Impl__obj::__get(player,HX_("isPlayer",eb,86,22,90)),playerNumber)) {
HXLINE(  64)				return ::openfl::utils::_Object::Object_Impl__obj::__get(player,HX_("avatar",19,80,5c,fa));
            			}
HXLINE(  67)			i = (i + 1);
            		}
HXLINE(  69)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,setViewToPlayer,return )

void Game_obj::createAllPlayers( ::openfl::display::Sprite a, ::openfl::display::MovieClip mapCollision){
            	HX_GC_STACKFRAME(&_hx_pos_69efd8c9269cf369_71_createAllPlayers)
HXLINE(  72)		int i = 0;
HXLINE(  73)		while((i < this->player_info->get_length())){
HXLINE(  74)			 ::Dynamic player = this->player_info->__get(i);
HXLINE(  75)			 ::openfl::display::Sprite character =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE(  76)			if (::openfl::utils::_Object::Object_Impl__obj::_hx___eq(::openfl::utils::_Object::Object_Impl__obj::__get(player,HX_("character",a9,db,d1,41)),HX_("Slaptastic",90,66,1e,bb))) {
HXLINE(  77)				character =  ::characters::SlaptasticGameplay_obj::__alloc( HX_CTX );
HXLINE(  78)				 ::characters::SlaptasticGameplay slaptastic = ( ( ::characters::SlaptasticGameplay)(::Std_obj::downcast(character,::hx::ClassOf< ::characters::SlaptasticGameplay >())) );
HXLINE(  79)				slaptastic->mapCollision = mapCollision;
HXLINE(  80)				slaptastic->isPlayer = ::openfl::utils::_Object::Object_Impl__obj::toInt(::openfl::utils::_Object::Object_Impl__obj::__get(player,HX_("isPlayer",eb,86,22,90)));
            			}
HXLINE(  82)			character->set_scaleX(((Float).30));
HXLINE(  83)			character->set_scaleY(((Float).30));
HXLINE(  84)			character->stopAllMovieClips();
HXLINE(  85)			a->addChild(character);
HXLINE(  86)			{
HXLINE(  86)				 ::Dynamic this1 = player;
HXDLIN(  86)				if (::hx::IsNotNull( this1 )) {
HXLINE(  86)					::Reflect_obj::setProperty(this1,HX_("avatar",19,80,5c,fa),character);
            				}
            			}
HXLINE(  87)			i = (i + 1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,createAllPlayers,(void))

 ::Dynamic Game_obj::getGameStateData(){
            	HX_STACKFRAME(&_hx_pos_69efd8c9269cf369_91_getGameStateData)
HXDLIN(  91)		return this->player_info;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getGameStateData,return )


::hx::ObjectPtr< Game_obj > Game_obj::__new() {
	::hx::ObjectPtr< Game_obj > __this = new Game_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Game_obj > Game_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Game_obj *__this = (Game_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Game_obj), true, "Game"));
	*(void **)__this = Game_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Game_obj::Game_obj()
{
}

void Game_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Game);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(player_info,"player_info");
	HX_MARK_MEMBER_NAME(hitBoxes,"hitBoxes");
	HX_MARK_MEMBER_NAME(localPlayer,"localPlayer");
	HX_MARK_MEMBER_NAME(isNetGame,"isNetGame");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Game_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(player_info,"player_info");
	HX_VISIT_MEMBER_NAME(hitBoxes,"hitBoxes");
	HX_VISIT_MEMBER_NAME(localPlayer,"localPlayer");
	HX_VISIT_MEMBER_NAME(isNetGame,"isNetGame");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Game_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return ::hx::Val( map ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hitBoxes") ) { return ::hx::Val( hitBoxes ); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return ::hx::Val( onUpdate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isNetGame") ) { return ::hx::Val( isNetGame ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"player_info") ) { return ::hx::Val( player_info ); }
		if (HX_FIELD_EQ(inName,"localPlayer") ) { return ::hx::Val( localPlayer ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setViewToPlayer") ) { return ::hx::Val( setViewToPlayer_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createAllPlayers") ) { return ::hx::Val( createAllPlayers_dyn() ); }
		if (HX_FIELD_EQ(inName,"getGameStateData") ) { return ::hx::Val( getGameStateData_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createPlayerInfomation") ) { return ::hx::Val( createPlayerInfomation_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Game_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hitBoxes") ) { hitBoxes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isNetGame") ) { isNetGame=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"player_info") ) { player_info=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localPlayer") ) { localPlayer=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Game_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("map",9c,0a,53,00));
	outFields->push(HX_("player_info",4c,89,7d,6c));
	outFields->push(HX_("hitBoxes",e6,4b,5e,f6));
	outFields->push(HX_("localPlayer",2c,8b,f3,f4));
	outFields->push(HX_("isNetGame",25,60,f6,3d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Game_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Game_obj,map),HX_("map",9c,0a,53,00)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(Game_obj,player_info),HX_("player_info",4c,89,7d,6c)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Game_obj,hitBoxes),HX_("hitBoxes",e6,4b,5e,f6)},
	{::hx::fsInt,(int)offsetof(Game_obj,localPlayer),HX_("localPlayer",2c,8b,f3,f4)},
	{::hx::fsBool,(int)offsetof(Game_obj,isNetGame),HX_("isNetGame",25,60,f6,3d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Game_obj_sStaticStorageInfo = 0;
#endif

static ::String Game_obj_sMemberFields[] = {
	HX_("map",9c,0a,53,00),
	HX_("player_info",4c,89,7d,6c),
	HX_("hitBoxes",e6,4b,5e,f6),
	HX_("localPlayer",2c,8b,f3,f4),
	HX_("isNetGame",25,60,f6,3d),
	HX_("onUpdate",88,7c,b2,66),
	HX_("createPlayerInfomation",f3,f3,cc,06),
	HX_("setViewToPlayer",83,c1,6e,6c),
	HX_("createAllPlayers",ed,8c,eb,87),
	HX_("getGameStateData",13,5c,0e,e7),
	::String(null()) };

::hx::Class Game_obj::__mClass;

void Game_obj::__register()
{
	Game_obj _hx_dummy;
	Game_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Game",12,20,38,2f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Game_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Game_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Game_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Game_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

