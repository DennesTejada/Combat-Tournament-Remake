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
#ifndef INCLUDED_slaptastic_fla_Sprite371_13
#include <slaptastic_fla/Sprite371_13.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateLibrary
#include <swf/exporters/animate/AnimateLibrary.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateSymbol
#include <swf/exporters/animate/AnimateSymbol.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a1b09564a904618e_12_new,"slaptastic_fla.Sprite371_13","new",0xe4e0624d,"slaptastic_fla.Sprite371_13.new","slaptastic_fla/Sprite371_13.hx",12,0x12d54ee2)
namespace slaptastic_fla{

void Sprite371_13_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a1b09564a904618e_12_new)
HXLINE(  13)		 ::swf::exporters::animate::AnimateLibrary library = ::swf::exporters::animate::AnimateLibrary_obj::get(HX_("HdXepoOueHQVMzQBUMNw",f5,66,81,f9));
HXLINE(  14)		 ::swf::exporters::animate::AnimateSymbol symbol = ( ( ::swf::exporters::animate::AnimateSymbol)(library->symbols->get(374)) );
HXLINE(  15)		symbol->_hx___init(library);
HXLINE(  17)		super::__construct();
            	}

Dynamic Sprite371_13_obj::__CreateEmpty() { return new Sprite371_13_obj; }

void *Sprite371_13_obj::_hx_vtable = 0;

Dynamic Sprite371_13_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Sprite371_13_obj > _hx_result = new Sprite371_13_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sprite371_13_obj::_hx_isInstanceOf(int inClassId) {
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
			return inClassId==(int)0x26389445 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}


::hx::ObjectPtr< Sprite371_13_obj > Sprite371_13_obj::__new() {
	::hx::ObjectPtr< Sprite371_13_obj > __this = new Sprite371_13_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Sprite371_13_obj > Sprite371_13_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Sprite371_13_obj *__this = (Sprite371_13_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Sprite371_13_obj), true, "slaptastic_fla.Sprite371_13"));
	*(void **)__this = Sprite371_13_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Sprite371_13_obj::Sprite371_13_obj()
{
}

void Sprite371_13_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sprite371_13);
	HX_MARK_MEMBER_NAME(Bar,"Bar");
	HX_MARK_MEMBER_NAME(TeamMate,"TeamMate");
	 ::openfl::display::MovieClip_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sprite371_13_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(Bar,"Bar");
	HX_VISIT_MEMBER_NAME(TeamMate,"TeamMate");
	 ::openfl::display::MovieClip_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Sprite371_13_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

::hx::Val Sprite371_13_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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

void Sprite371_13_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("Bar",b3,69,32,00));
	outFields->push(HX_("TeamMate",22,f5,ff,ea));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Sprite371_13_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::MovieClip */ ,(int)offsetof(Sprite371_13_obj,Bar),HX_("Bar",b3,69,32,00)},
	{::hx::fsObject /*  ::openfl::display::MovieClip */ ,(int)offsetof(Sprite371_13_obj,TeamMate),HX_("TeamMate",22,f5,ff,ea)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Sprite371_13_obj_sStaticStorageInfo = 0;
#endif

static ::String Sprite371_13_obj_sMemberFields[] = {
	HX_("Bar",b3,69,32,00),
	HX_("TeamMate",22,f5,ff,ea),
	::String(null()) };

::hx::Class Sprite371_13_obj::__mClass;

void Sprite371_13_obj::__register()
{
	Sprite371_13_obj _hx_dummy;
	Sprite371_13_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("slaptastic_fla.Sprite371_13",db,37,7c,35);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Sprite371_13_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Sprite371_13_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sprite371_13_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sprite371_13_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace slaptastic_fla
