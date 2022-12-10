#include <hxcpp.h>

#ifndef INCLUDED_Slaptastic
#include <Slaptastic.h>
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
#ifndef INCLUDED_slaptastic_fla_Sprite354_2
#include <slaptastic_fla/Sprite354_2.h>
#endif
#ifndef INCLUDED_slaptastic_fla_Sprite356_3
#include <slaptastic_fla/Sprite356_3.h>
#endif
#ifndef INCLUDED_slaptastic_fla_Sprite365_4
#include <slaptastic_fla/Sprite365_4.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5b34e0d2d2606640_15_new,"Slaptastic","new",0x89b88f82,"Slaptastic.new","Slaptastic.hx",15,0x56b7562e)

void Slaptastic_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5b34e0d2d2606640_15_new)
HXLINE(  16)		 ::swf::exporters::animate::AnimateLibrary library = ::swf::exporters::animate::AnimateLibrary_obj::get(HX_("HdXepoOueHQVMzQBUMNw",f5,66,81,f9));
HXLINE(  17)		 ::swf::exporters::animate::AnimateSymbol symbol = ( ( ::swf::exporters::animate::AnimateSymbol)(library->symbols->get(586)) );
HXLINE(  18)		symbol->_hx___init(library);
HXLINE(  20)		super::__construct();
            	}

Dynamic Slaptastic_obj::__CreateEmpty() { return new Slaptastic_obj; }

void *Slaptastic_obj::_hx_vtable = 0;

Dynamic Slaptastic_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Slaptastic_obj > _hx_result = new Slaptastic_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Slaptastic_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17c2d032) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x12128fb4 || inClassId==(int)0x17c2d032;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}


::hx::ObjectPtr< Slaptastic_obj > Slaptastic_obj::__new() {
	::hx::ObjectPtr< Slaptastic_obj > __this = new Slaptastic_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Slaptastic_obj > Slaptastic_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Slaptastic_obj *__this = (Slaptastic_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Slaptastic_obj), true, "Slaptastic"));
	*(void **)__this = Slaptastic_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Slaptastic_obj::Slaptastic_obj()
{
}

void Slaptastic_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Slaptastic);
	HX_MARK_MEMBER_NAME(hurtBox,"hurtBox");
	HX_MARK_MEMBER_NAME(Lala,"Lala");
	HX_MARK_MEMBER_NAME(Powercharge,"Powercharge");
	HX_MARK_MEMBER_NAME(Man,"Man");
	HX_MARK_MEMBER_NAME(Skin,"Skin");
	 ::openfl::display::MovieClip_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Slaptastic_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hurtBox,"hurtBox");
	HX_VISIT_MEMBER_NAME(Lala,"Lala");
	HX_VISIT_MEMBER_NAME(Powercharge,"Powercharge");
	HX_VISIT_MEMBER_NAME(Man,"Man");
	HX_VISIT_MEMBER_NAME(Skin,"Skin");
	 ::openfl::display::MovieClip_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Slaptastic_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Man") ) { return ::hx::Val( Man ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"Lala") ) { return ::hx::Val( Lala ); }
		if (HX_FIELD_EQ(inName,"Skin") ) { return ::hx::Val( Skin ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hurtBox") ) { return ::hx::Val( hurtBox ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"Powercharge") ) { return ::hx::Val( Powercharge ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Slaptastic_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Man") ) { Man=inValue.Cast<  ::openfl::display::MovieClip >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"Lala") ) { Lala=inValue.Cast<  ::slaptastic_fla::Sprite356_3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Skin") ) { Skin=inValue.Cast<  ::slaptastic_fla::Sprite371_13 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hurtBox") ) { hurtBox=inValue.Cast<  ::slaptastic_fla::Sprite354_2 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"Powercharge") ) { Powercharge=inValue.Cast<  ::slaptastic_fla::Sprite365_4 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Slaptastic_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("hurtBox",3c,cd,06,9d));
	outFields->push(HX_("Lala",4a,30,86,32));
	outFields->push(HX_("Powercharge",19,d0,ee,80));
	outFields->push(HX_("Man",7a,c2,3a,00));
	outFields->push(HX_("Skin",9d,42,2e,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Slaptastic_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::slaptastic_fla::Sprite354_2 */ ,(int)offsetof(Slaptastic_obj,hurtBox),HX_("hurtBox",3c,cd,06,9d)},
	{::hx::fsObject /*  ::slaptastic_fla::Sprite356_3 */ ,(int)offsetof(Slaptastic_obj,Lala),HX_("Lala",4a,30,86,32)},
	{::hx::fsObject /*  ::slaptastic_fla::Sprite365_4 */ ,(int)offsetof(Slaptastic_obj,Powercharge),HX_("Powercharge",19,d0,ee,80)},
	{::hx::fsObject /*  ::openfl::display::MovieClip */ ,(int)offsetof(Slaptastic_obj,Man),HX_("Man",7a,c2,3a,00)},
	{::hx::fsObject /*  ::slaptastic_fla::Sprite371_13 */ ,(int)offsetof(Slaptastic_obj,Skin),HX_("Skin",9d,42,2e,37)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Slaptastic_obj_sStaticStorageInfo = 0;
#endif

static ::String Slaptastic_obj_sMemberFields[] = {
	HX_("hurtBox",3c,cd,06,9d),
	HX_("Lala",4a,30,86,32),
	HX_("Powercharge",19,d0,ee,80),
	HX_("Man",7a,c2,3a,00),
	HX_("Skin",9d,42,2e,37),
	::String(null()) };

::hx::Class Slaptastic_obj::__mClass;

void Slaptastic_obj::__register()
{
	Slaptastic_obj _hx_dummy;
	Slaptastic_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Slaptastic",90,66,1e,bb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Slaptastic_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Slaptastic_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Slaptastic_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Slaptastic_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

