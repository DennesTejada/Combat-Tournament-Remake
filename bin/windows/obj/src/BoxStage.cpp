#include <hxcpp.h>

#ifndef INCLUDED_BoxStage
#include <BoxStage.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
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
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateLibrary
#include <swf/exporters/animate/AnimateLibrary.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateSymbol
#include <swf/exporters/animate/AnimateSymbol.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_306d3d6511051ed3_19_new,"BoxStage","new",0x7c6c1745,"BoxStage.new","BoxStage.hx",19,0x37a937cb)

void BoxStage_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_306d3d6511051ed3_19_new)
HXLINE(  20)		 ::swf::exporters::animate::AnimateLibrary library = ::swf::exporters::animate::AnimateLibrary_obj::get(HX_("k3BombCQrMTEL64xT8iE",b2,76,bc,08));
HXLINE(  21)		 ::swf::exporters::animate::AnimateSymbol symbol = ( ( ::swf::exporters::animate::AnimateSymbol)(library->symbols->get(7)) );
HXLINE(  22)		symbol->_hx___init(library);
HXLINE(  24)		super::__construct();
            	}

Dynamic BoxStage_obj::__CreateEmpty() { return new BoxStage_obj; }

void *BoxStage_obj::_hx_vtable = 0;

Dynamic BoxStage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BoxStage_obj > _hx_result = new BoxStage_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BoxStage_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x17c2d032 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x346d0393 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}


::hx::ObjectPtr< BoxStage_obj > BoxStage_obj::__new() {
	::hx::ObjectPtr< BoxStage_obj > __this = new BoxStage_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BoxStage_obj > BoxStage_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BoxStage_obj *__this = (BoxStage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BoxStage_obj), true, "BoxStage"));
	*(void **)__this = BoxStage_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BoxStage_obj::BoxStage_obj()
{
}

void BoxStage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BoxStage);
	HX_MARK_MEMBER_NAME(PlayerStart,"PlayerStart");
	HX_MARK_MEMBER_NAME(S1,"S1");
	HX_MARK_MEMBER_NAME(S2,"S2");
	HX_MARK_MEMBER_NAME(S3,"S3");
	HX_MARK_MEMBER_NAME(S4,"S4");
	HX_MARK_MEMBER_NAME(S5,"S5");
	HX_MARK_MEMBER_NAME(S0,"S0");
	HX_MARK_MEMBER_NAME(ground,"ground");
	HX_MARK_MEMBER_NAME(playerCreateMovieclip,"playerCreateMovieclip");
	 ::openfl::display::MovieClip_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BoxStage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(PlayerStart,"PlayerStart");
	HX_VISIT_MEMBER_NAME(S1,"S1");
	HX_VISIT_MEMBER_NAME(S2,"S2");
	HX_VISIT_MEMBER_NAME(S3,"S3");
	HX_VISIT_MEMBER_NAME(S4,"S4");
	HX_VISIT_MEMBER_NAME(S5,"S5");
	HX_VISIT_MEMBER_NAME(S0,"S0");
	HX_VISIT_MEMBER_NAME(ground,"ground");
	HX_VISIT_MEMBER_NAME(playerCreateMovieclip,"playerCreateMovieclip");
	 ::openfl::display::MovieClip_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BoxStage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"S1") ) { return ::hx::Val( S1 ); }
		if (HX_FIELD_EQ(inName,"S2") ) { return ::hx::Val( S2 ); }
		if (HX_FIELD_EQ(inName,"S3") ) { return ::hx::Val( S3 ); }
		if (HX_FIELD_EQ(inName,"S4") ) { return ::hx::Val( S4 ); }
		if (HX_FIELD_EQ(inName,"S5") ) { return ::hx::Val( S5 ); }
		if (HX_FIELD_EQ(inName,"S0") ) { return ::hx::Val( S0 ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ground") ) { return ::hx::Val( ground ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"PlayerStart") ) { return ::hx::Val( PlayerStart ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"playerCreateMovieclip") ) { return ::hx::Val( playerCreateMovieclip ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BoxStage_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"S1") ) { S1=inValue.Cast<  ::openfl::display::MovieClip >(); return inValue; }
		if (HX_FIELD_EQ(inName,"S2") ) { S2=inValue.Cast<  ::openfl::display::MovieClip >(); return inValue; }
		if (HX_FIELD_EQ(inName,"S3") ) { S3=inValue.Cast<  ::openfl::display::MovieClip >(); return inValue; }
		if (HX_FIELD_EQ(inName,"S4") ) { S4=inValue.Cast<  ::openfl::display::MovieClip >(); return inValue; }
		if (HX_FIELD_EQ(inName,"S5") ) { S5=inValue.Cast<  ::openfl::display::MovieClip >(); return inValue; }
		if (HX_FIELD_EQ(inName,"S0") ) { S0=inValue.Cast<  ::openfl::display::MovieClip >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ground") ) { ground=inValue.Cast<  ::openfl::display::MovieClip >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"PlayerStart") ) { PlayerStart=inValue.Cast<  ::openfl::display::MovieClip >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"playerCreateMovieclip") ) { playerCreateMovieclip=inValue.Cast<  ::openfl::display::MovieClip >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BoxStage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("PlayerStart",21,b1,1c,6f));
	outFields->push(HX_("S1",7e,48,00,00));
	outFields->push(HX_("S2",7f,48,00,00));
	outFields->push(HX_("S3",80,48,00,00));
	outFields->push(HX_("S4",81,48,00,00));
	outFields->push(HX_("S5",82,48,00,00));
	outFields->push(HX_("S0",7d,48,00,00));
	outFields->push(HX_("ground",87,22,28,1c));
	outFields->push(HX_("playerCreateMovieclip",83,a1,09,15));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BoxStage_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::MovieClip */ ,(int)offsetof(BoxStage_obj,PlayerStart),HX_("PlayerStart",21,b1,1c,6f)},
	{::hx::fsObject /*  ::openfl::display::MovieClip */ ,(int)offsetof(BoxStage_obj,S1),HX_("S1",7e,48,00,00)},
	{::hx::fsObject /*  ::openfl::display::MovieClip */ ,(int)offsetof(BoxStage_obj,S2),HX_("S2",7f,48,00,00)},
	{::hx::fsObject /*  ::openfl::display::MovieClip */ ,(int)offsetof(BoxStage_obj,S3),HX_("S3",80,48,00,00)},
	{::hx::fsObject /*  ::openfl::display::MovieClip */ ,(int)offsetof(BoxStage_obj,S4),HX_("S4",81,48,00,00)},
	{::hx::fsObject /*  ::openfl::display::MovieClip */ ,(int)offsetof(BoxStage_obj,S5),HX_("S5",82,48,00,00)},
	{::hx::fsObject /*  ::openfl::display::MovieClip */ ,(int)offsetof(BoxStage_obj,S0),HX_("S0",7d,48,00,00)},
	{::hx::fsObject /*  ::openfl::display::MovieClip */ ,(int)offsetof(BoxStage_obj,ground),HX_("ground",87,22,28,1c)},
	{::hx::fsObject /*  ::openfl::display::MovieClip */ ,(int)offsetof(BoxStage_obj,playerCreateMovieclip),HX_("playerCreateMovieclip",83,a1,09,15)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BoxStage_obj_sStaticStorageInfo = 0;
#endif

static ::String BoxStage_obj_sMemberFields[] = {
	HX_("PlayerStart",21,b1,1c,6f),
	HX_("S1",7e,48,00,00),
	HX_("S2",7f,48,00,00),
	HX_("S3",80,48,00,00),
	HX_("S4",81,48,00,00),
	HX_("S5",82,48,00,00),
	HX_("S0",7d,48,00,00),
	HX_("ground",87,22,28,1c),
	HX_("playerCreateMovieclip",83,a1,09,15),
	::String(null()) };

::hx::Class BoxStage_obj::__mClass;

void BoxStage_obj::__register()
{
	BoxStage_obj _hx_dummy;
	BoxStage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("BoxStage",d3,10,dc,d8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BoxStage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BoxStage_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BoxStage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BoxStage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

