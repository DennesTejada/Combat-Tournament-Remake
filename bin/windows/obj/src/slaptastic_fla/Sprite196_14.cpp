#include <hxcpp.h>

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
#ifndef INCLUDED_slaptastic_fla_Sprite196_14
#include <slaptastic_fla/Sprite196_14.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateLibrary
#include <swf/exporters/animate/AnimateLibrary.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateSymbol
#include <swf/exporters/animate/AnimateSymbol.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_88e1b640f06278c7_12_new,"slaptastic_fla.Sprite196_14","new",0xbb9113ad,"slaptastic_fla.Sprite196_14.new","slaptastic_fla/Sprite196_14.hx",12,0xafebe982)
namespace slaptastic_fla{

void Sprite196_14_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_88e1b640f06278c7_12_new)
HXLINE(  13)		 ::swf::exporters::animate::AnimateLibrary library = ::swf::exporters::animate::AnimateLibrary_obj::get(HX_("GrqRG2oAkTqXis4g3obp",e0,21,07,b3));
HXLINE(  14)		 ::swf::exporters::animate::AnimateSymbol symbol = ( ( ::swf::exporters::animate::AnimateSymbol)(library->symbols->get(63)) );
HXLINE(  15)		symbol->_hx___init(library);
HXLINE(  17)		super::__construct();
            	}

Dynamic Sprite196_14_obj::__CreateEmpty() { return new Sprite196_14_obj; }

void *Sprite196_14_obj::_hx_vtable = 0;

Dynamic Sprite196_14_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Sprite196_14_obj > _hx_result = new Sprite196_14_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sprite196_14_obj::_hx_isInstanceOf(int inClassId) {
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
			return inClassId==(int)0x1fb6d335 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}


::hx::ObjectPtr< Sprite196_14_obj > Sprite196_14_obj::__new() {
	::hx::ObjectPtr< Sprite196_14_obj > __this = new Sprite196_14_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Sprite196_14_obj > Sprite196_14_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Sprite196_14_obj *__this = (Sprite196_14_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Sprite196_14_obj), true, "slaptastic_fla.Sprite196_14"));
	*(void **)__this = Sprite196_14_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Sprite196_14_obj::Sprite196_14_obj()
{
}

void Sprite196_14_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sprite196_14);
	HX_MARK_MEMBER_NAME(Bar,"Bar");
	HX_MARK_MEMBER_NAME(TeamMate,"TeamMate");
	 ::openfl::display::MovieClip_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sprite196_14_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(Bar,"Bar");
	HX_VISIT_MEMBER_NAME(TeamMate,"TeamMate");
	 ::openfl::display::MovieClip_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Sprite196_14_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Bar") ) { return ::hx::Val( Bar ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"TeamMate") ) { return ::hx::Val( TeamMate ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Sprite196_14_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Bar") ) { Bar=inValue.Cast<  ::openfl::display::MovieClip >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"TeamMate") ) { TeamMate=inValue.Cast<  ::openfl::display::MovieClip >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sprite196_14_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("Bar",b3,69,32,00));
	outFields->push(HX_("TeamMate",22,f5,ff,ea));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Sprite196_14_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::MovieClip */ ,(int)offsetof(Sprite196_14_obj,Bar),HX_("Bar",b3,69,32,00)},
	{::hx::fsObject /*  ::openfl::display::MovieClip */ ,(int)offsetof(Sprite196_14_obj,TeamMate),HX_("TeamMate",22,f5,ff,ea)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Sprite196_14_obj_sStaticStorageInfo = 0;
#endif

static ::String Sprite196_14_obj_sMemberFields[] = {
	HX_("Bar",b3,69,32,00),
	HX_("TeamMate",22,f5,ff,ea),
	::String(null()) };

::hx::Class Sprite196_14_obj::__mClass;

void Sprite196_14_obj::__register()
{
	Sprite196_14_obj _hx_dummy;
	Sprite196_14_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("slaptastic_fla.Sprite196_14",3b,b9,e0,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Sprite196_14_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Sprite196_14_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sprite196_14_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sprite196_14_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace slaptastic_fla
