#include <hxcpp.h>

#ifndef INCLUDED_HitBox
#include <HitBox.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f8fafb3aed409713_10_new,"HitBox","new",0xd5c8668a,"HitBox.new","HitBox.hx",10,0x3dcd3826)

void HitBox_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f8fafb3aed409713_10_new)
HXLINE(  11)		 ::swf::exporters::animate::AnimateLibrary library = ::swf::exporters::animate::AnimateLibrary_obj::get(HX_("HdXepoOueHQVMzQBUMNw",f5,66,81,f9));
HXLINE(  12)		 ::swf::exporters::animate::AnimateSymbol symbol = ( ( ::swf::exporters::animate::AnimateSymbol)(library->symbols->get(35)) );
HXLINE(  13)		symbol->_hx___init(library);
HXLINE(  15)		super::__construct();
            	}

Dynamic HitBox_obj::__CreateEmpty() { return new HitBox_obj; }

void *HitBox_obj::_hx_vtable = 0;

Dynamic HitBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HitBox_obj > _hx_result = new HitBox_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HitBox_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x533be0bc) {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x533be0bc;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}


::hx::ObjectPtr< HitBox_obj > HitBox_obj::__new() {
	::hx::ObjectPtr< HitBox_obj > __this = new HitBox_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HitBox_obj > HitBox_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HitBox_obj *__this = (HitBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HitBox_obj), true, "HitBox"));
	*(void **)__this = HitBox_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HitBox_obj::HitBox_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HitBox_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HitBox_obj_sStaticStorageInfo = 0;
#endif

::hx::Class HitBox_obj::__mClass;

void HitBox_obj::__register()
{
	HitBox_obj _hx_dummy;
	HitBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HitBox",98,19,a4,8b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HitBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HitBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HitBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

