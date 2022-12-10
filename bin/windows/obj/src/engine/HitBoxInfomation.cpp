#include <hxcpp.h>

#ifndef INCLUDED_engine_HitBoxInfomation
#include <engine/HitBoxInfomation.h>
#endif
#ifndef INCLUDED_engine_PlayerDefault
#include <engine/PlayerDefault.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f9e91d5617a4e528_7_new,"engine.HitBoxInfomation","new",0x99fe71ec,"engine.HitBoxInfomation.new","engine/HitBoxInfomation.hx",7,0xb1b3d3a3)
namespace engine{

void HitBoxInfomation_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f9e91d5617a4e528_7_new)
HXLINE(  14)		this->isLauncher = false;
HXLINE(  13)		this->damage = ((Float)0);
HXLINE(  12)		this->gravity = ((Float).5);
HXLINE(  11)		this->friction = ((Float).8);
HXLINE(  10)		this->yspeed = ((Float)0);
HXLINE(   9)		this->xspeed = ((Float)0);
            	}

Dynamic HitBoxInfomation_obj::__CreateEmpty() { return new HitBoxInfomation_obj; }

void *HitBoxInfomation_obj::_hx_vtable = 0;

Dynamic HitBoxInfomation_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HitBoxInfomation_obj > _hx_result = new HitBoxInfomation_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HitBoxInfomation_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2aad3790;
}


HitBoxInfomation_obj::HitBoxInfomation_obj()
{
}

void HitBoxInfomation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HitBoxInfomation);
	HX_MARK_MEMBER_NAME(xspeed,"xspeed");
	HX_MARK_MEMBER_NAME(yspeed,"yspeed");
	HX_MARK_MEMBER_NAME(friction,"friction");
	HX_MARK_MEMBER_NAME(gravity,"gravity");
	HX_MARK_MEMBER_NAME(damage,"damage");
	HX_MARK_MEMBER_NAME(isLauncher,"isLauncher");
	HX_MARK_MEMBER_NAME(hitter,"hitter");
	HX_MARK_END_CLASS();
}

void HitBoxInfomation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(xspeed,"xspeed");
	HX_VISIT_MEMBER_NAME(yspeed,"yspeed");
	HX_VISIT_MEMBER_NAME(friction,"friction");
	HX_VISIT_MEMBER_NAME(gravity,"gravity");
	HX_VISIT_MEMBER_NAME(damage,"damage");
	HX_VISIT_MEMBER_NAME(isLauncher,"isLauncher");
	HX_VISIT_MEMBER_NAME(hitter,"hitter");
}

::hx::Val HitBoxInfomation_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"xspeed") ) { return ::hx::Val( xspeed ); }
		if (HX_FIELD_EQ(inName,"yspeed") ) { return ::hx::Val( yspeed ); }
		if (HX_FIELD_EQ(inName,"damage") ) { return ::hx::Val( damage ); }
		if (HX_FIELD_EQ(inName,"hitter") ) { return ::hx::Val( hitter ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { return ::hx::Val( gravity ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { return ::hx::Val( friction ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isLauncher") ) { return ::hx::Val( isLauncher ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HitBoxInfomation_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"xspeed") ) { xspeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yspeed") ) { yspeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"damage") ) { damage=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hitter") ) { hitter=inValue.Cast<  ::engine::PlayerDefault >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { gravity=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { friction=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isLauncher") ) { isLauncher=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HitBoxInfomation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("xspeed",0f,e4,3c,7c));
	outFields->push(HX_("yspeed",6e,40,98,e2));
	outFields->push(HX_("friction",fa,78,c9,97));
	outFields->push(HX_("gravity",4e,6e,ff,77));
	outFields->push(HX_("damage",6f,90,e4,1d));
	outFields->push(HX_("isLauncher",6a,9f,2d,bd));
	outFields->push(HX_("hitter",6e,8d,35,57));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HitBoxInfomation_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(HitBoxInfomation_obj,xspeed),HX_("xspeed",0f,e4,3c,7c)},
	{::hx::fsFloat,(int)offsetof(HitBoxInfomation_obj,yspeed),HX_("yspeed",6e,40,98,e2)},
	{::hx::fsFloat,(int)offsetof(HitBoxInfomation_obj,friction),HX_("friction",fa,78,c9,97)},
	{::hx::fsFloat,(int)offsetof(HitBoxInfomation_obj,gravity),HX_("gravity",4e,6e,ff,77)},
	{::hx::fsFloat,(int)offsetof(HitBoxInfomation_obj,damage),HX_("damage",6f,90,e4,1d)},
	{::hx::fsBool,(int)offsetof(HitBoxInfomation_obj,isLauncher),HX_("isLauncher",6a,9f,2d,bd)},
	{::hx::fsObject /*  ::engine::PlayerDefault */ ,(int)offsetof(HitBoxInfomation_obj,hitter),HX_("hitter",6e,8d,35,57)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HitBoxInfomation_obj_sStaticStorageInfo = 0;
#endif

static ::String HitBoxInfomation_obj_sMemberFields[] = {
	HX_("xspeed",0f,e4,3c,7c),
	HX_("yspeed",6e,40,98,e2),
	HX_("friction",fa,78,c9,97),
	HX_("gravity",4e,6e,ff,77),
	HX_("damage",6f,90,e4,1d),
	HX_("isLauncher",6a,9f,2d,bd),
	HX_("hitter",6e,8d,35,57),
	::String(null()) };

::hx::Class HitBoxInfomation_obj::__mClass;

void HitBoxInfomation_obj::__register()
{
	HitBoxInfomation_obj _hx_dummy;
	HitBoxInfomation_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("engine.HitBoxInfomation",fa,4b,94,21);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HitBoxInfomation_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HitBoxInfomation_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HitBoxInfomation_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HitBoxInfomation_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace engine
