#include <hxcpp.h>

#ifndef INCLUDED_engine_States
#include <engine/States.h>
#endif
namespace engine{

::engine::States States_obj::ATTACK;

::engine::States States_obj::DEAD;

::engine::States States_obj::FREE;

::engine::States States_obj::HURT;

::engine::States States_obj::START_JUMP;

bool States_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ATTACK",c8,a7,92,92)) { outValue = States_obj::ATTACK; return true; }
	if (inName==HX_("DEAD",a4,16,27,2d)) { outValue = States_obj::DEAD; return true; }
	if (inName==HX_("FREE",ac,64,83,2e)) { outValue = States_obj::FREE; return true; }
	if (inName==HX_("HURT",0f,24,d8,2f)) { outValue = States_obj::HURT; return true; }
	if (inName==HX_("START_JUMP",4b,4d,40,e1)) { outValue = States_obj::START_JUMP; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(States_obj)

int States_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ATTACK",c8,a7,92,92)) return 1;
	if (inName==HX_("DEAD",a4,16,27,2d)) return 4;
	if (inName==HX_("FREE",ac,64,83,2e)) return 0;
	if (inName==HX_("HURT",0f,24,d8,2f)) return 2;
	if (inName==HX_("START_JUMP",4b,4d,40,e1)) return 3;
	return super::__FindIndex(inName);
}

int States_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ATTACK",c8,a7,92,92)) return 0;
	if (inName==HX_("DEAD",a4,16,27,2d)) return 0;
	if (inName==HX_("FREE",ac,64,83,2e)) return 0;
	if (inName==HX_("HURT",0f,24,d8,2f)) return 0;
	if (inName==HX_("START_JUMP",4b,4d,40,e1)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val States_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ATTACK",c8,a7,92,92)) return ATTACK;
	if (inName==HX_("DEAD",a4,16,27,2d)) return DEAD;
	if (inName==HX_("FREE",ac,64,83,2e)) return FREE;
	if (inName==HX_("HURT",0f,24,d8,2f)) return HURT;
	if (inName==HX_("START_JUMP",4b,4d,40,e1)) return START_JUMP;
	return super::__Field(inName,inCallProp);
}

static ::String States_obj_sStaticFields[] = {
	HX_("FREE",ac,64,83,2e),
	HX_("ATTACK",c8,a7,92,92),
	HX_("HURT",0f,24,d8,2f),
	HX_("START_JUMP",4b,4d,40,e1),
	HX_("DEAD",a4,16,27,2d),
	::String(null())
};

::hx::Class States_obj::__mClass;

Dynamic __Create_States_obj() { return new States_obj; }

void States_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("engine.States",8e,b8,48,65), ::hx::TCanCast< States_obj >,States_obj_sStaticFields,0,
	&__Create_States_obj, &__Create,
	&super::__SGetClass(), &CreateStates_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &States_obj::__GetStatic;
}

void States_obj::__boot()
{
ATTACK = ::hx::CreateConstEnum< States_obj >(HX_("ATTACK",c8,a7,92,92),1);
DEAD = ::hx::CreateConstEnum< States_obj >(HX_("DEAD",a4,16,27,2d),4);
FREE = ::hx::CreateConstEnum< States_obj >(HX_("FREE",ac,64,83,2e),0);
HURT = ::hx::CreateConstEnum< States_obj >(HX_("HURT",0f,24,d8,2f),2);
START_JUMP = ::hx::CreateConstEnum< States_obj >(HX_("START_JUMP",4b,4d,40,e1),3);
}


} // end namespace engine
