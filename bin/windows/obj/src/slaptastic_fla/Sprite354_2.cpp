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
#ifndef INCLUDED_slaptastic_fla_Sprite354_2
#include <slaptastic_fla/Sprite354_2.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateLibrary
#include <swf/exporters/animate/AnimateLibrary.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateSymbol
#include <swf/exporters/animate/AnimateSymbol.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_170e6d08f815ea3c_10_new,"slaptastic_fla.Sprite354_2","new",0xe649b6d0,"slaptastic_fla.Sprite354_2.new","slaptastic_fla/Sprite354_2.hx",10,0x2c66b261)
namespace slaptastic_fla{

void Sprite354_2_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_170e6d08f815ea3c_10_new)
HXLINE(  11)		 ::swf::exporters::animate::AnimateLibrary library = ::swf::exporters::animate::AnimateLibrary_obj::get(HX_("HdXepoOueHQVMzQBUMNw",f5,66,81,f9));
HXLINE(  12)		 ::swf::exporters::animate::AnimateSymbol symbol = ( ( ::swf::exporters::animate::AnimateSymbol)(library->symbols->get(333)) );
HXLINE(  13)		symbol->_hx___init(library);
HXLINE(  15)		super::__construct();
            	}

Dynamic Sprite354_2_obj::__CreateEmpty() { return new Sprite354_2_obj; }

void *Sprite354_2_obj::_hx_vtable = 0;

Dynamic Sprite354_2_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Sprite354_2_obj > _hx_result = new Sprite354_2_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sprite354_2_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1a68edb4) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x17c2d032 || inClassId==(int)0x1a68edb4;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}


::hx::ObjectPtr< Sprite354_2_obj > Sprite354_2_obj::__new() {
	::hx::ObjectPtr< Sprite354_2_obj > __this = new Sprite354_2_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Sprite354_2_obj > Sprite354_2_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Sprite354_2_obj *__this = (Sprite354_2_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Sprite354_2_obj), true, "slaptastic_fla.Sprite354_2"));
	*(void **)__this = Sprite354_2_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Sprite354_2_obj::Sprite354_2_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Sprite354_2_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Sprite354_2_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Sprite354_2_obj::__mClass;

void Sprite354_2_obj::__register()
{
	Sprite354_2_obj _hx_dummy;
	Sprite354_2_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("slaptastic_fla.Sprite354_2",de,4e,5a,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Sprite354_2_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sprite354_2_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sprite354_2_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace slaptastic_fla
