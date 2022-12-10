#include <hxcpp.h>

#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_client_ClientMain
#include <client/ClientMain.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_server_ServerMain
#include <server/ServerMain.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_babd1827f55eb107_17_new,"Global","new",0x2136c3f5,"Global.new","Global.hx",17,0xfa68b11b)
HX_LOCAL_STACK_FRAME(_hx_pos_babd1827f55eb107_19_restart,"Global","restart",0xce32a9e4,"Global.restart","Global.hx",19,0xfa68b11b)
HX_LOCAL_STACK_FRAME(_hx_pos_babd1827f55eb107_12_boot,"Global","boot",0xe6cdb2fd,"Global.boot","Global.hx",12,0xfa68b11b)
HX_LOCAL_STACK_FRAME(_hx_pos_babd1827f55eb107_13_boot,"Global","boot",0xe6cdb2fd,"Global.boot","Global.hx",13,0xfa68b11b)
HX_LOCAL_STACK_FRAME(_hx_pos_babd1827f55eb107_14_boot,"Global","boot",0xe6cdb2fd,"Global.boot","Global.hx",14,0xfa68b11b)

void Global_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_babd1827f55eb107_17_new)
HXDLIN(  17)		::Global_obj::restart();
            	}

Dynamic Global_obj::__CreateEmpty() { return new Global_obj; }

void *Global_obj::_hx_vtable = 0;

Dynamic Global_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Global_obj > _hx_result = new Global_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Global_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3d916843;
}

 ::Game Global_obj::game;

 ::server::ServerMain Global_obj::gameServer;

 ::client::ClientMain Global_obj::gameClient;

void Global_obj::restart(){
            	HX_GC_STACKFRAME(&_hx_pos_babd1827f55eb107_19_restart)
HXLINE(  20)		::Global_obj::game =  ::Game_obj::__alloc( HX_CTX );
HXLINE(  21)		::Global_obj::gameServer =  ::server::ServerMain_obj::__alloc( HX_CTX );
HXLINE(  22)		::Global_obj::gameClient =  ::client::ClientMain_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Global_obj,restart,(void))


Global_obj::Global_obj()
{
}

bool Global_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { outValue = ( game ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"restart") ) { outValue = restart_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameServer") ) { outValue = ( gameServer ); return true; }
		if (HX_FIELD_EQ(inName,"gameClient") ) { outValue = ( gameClient ); return true; }
	}
	return false;
}

bool Global_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=ioValue.Cast<  ::Game >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameServer") ) { gameServer=ioValue.Cast<  ::server::ServerMain >(); return true; }
		if (HX_FIELD_EQ(inName,"gameClient") ) { gameClient=ioValue.Cast<  ::client::ClientMain >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Global_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Global_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Game */ ,(void *) &Global_obj::game,HX_("game",f2,f3,5e,44)},
	{::hx::fsObject /*  ::server::ServerMain */ ,(void *) &Global_obj::gameServer,HX_("gameServer",55,34,ad,b0)},
	{::hx::fsObject /*  ::client::ClientMain */ ,(void *) &Global_obj::gameClient,HX_("gameClient",dd,b3,c5,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Global_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Global_obj::game,"game");
	HX_MARK_MEMBER_NAME(Global_obj::gameServer,"gameServer");
	HX_MARK_MEMBER_NAME(Global_obj::gameClient,"gameClient");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Global_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Global_obj::game,"game");
	HX_VISIT_MEMBER_NAME(Global_obj::gameServer,"gameServer");
	HX_VISIT_MEMBER_NAME(Global_obj::gameClient,"gameClient");
};

#endif

::hx::Class Global_obj::__mClass;

static ::String Global_obj_sStaticFields[] = {
	HX_("game",f2,f3,5e,44),
	HX_("gameServer",55,34,ad,b0),
	HX_("gameClient",dd,b3,c5,4c),
	HX_("restart",cf,c7,a5,6a),
	::String(null())
};

void Global_obj::__register()
{
	Global_obj _hx_dummy;
	Global_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Global",83,a5,46,dc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Global_obj::__GetStatic;
	__mClass->mSetStaticField = &Global_obj::__SetStatic;
	__mClass->mMarkFunc = Global_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Global_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Global_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Global_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Global_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Global_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Global_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_babd1827f55eb107_12_boot)
HXDLIN(  12)		game =  ::Game_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_babd1827f55eb107_13_boot)
HXDLIN(  13)		gameServer =  ::server::ServerMain_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_babd1827f55eb107_14_boot)
HXDLIN(  14)		gameClient =  ::client::ClientMain_obj::__alloc( HX_CTX );
            	}
}

