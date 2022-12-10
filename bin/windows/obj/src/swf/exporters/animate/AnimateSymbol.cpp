#include <hxcpp.h>

#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_9a18620c479474fc_14_new,"swf.exporters.animate.AnimateSymbol","new",0x0d1170f6,"swf.exporters.animate.AnimateSymbol.new","swf/exporters/animate/AnimateSymbol.hx",14,0xefded27d)
HX_LOCAL_STACK_FRAME(_hx_pos_9a18620c479474fc_18___createObject,"swf.exporters.animate.AnimateSymbol","__createObject",0xe565dd25,"swf.exporters.animate.AnimateSymbol.__createObject","swf/exporters/animate/AnimateSymbol.hx",18,0xefded27d)
HX_LOCAL_STACK_FRAME(_hx_pos_9a18620c479474fc_21___init,"swf.exporters.animate.AnimateSymbol","__init",0xe15fff5a,"swf.exporters.animate.AnimateSymbol.__init","swf/exporters/animate/AnimateSymbol.hx",21,0xefded27d)
HX_LOCAL_STACK_FRAME(_hx_pos_9a18620c479474fc_23___initObject,"swf.exporters.animate.AnimateSymbol","__initObject",0x7c48f1b9,"swf.exporters.animate.AnimateSymbol.__initObject","swf/exporters/animate/AnimateSymbol.hx",23,0xefded27d)
namespace swf{
namespace exporters{
namespace animate{

void AnimateSymbol_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9a18620c479474fc_14_new)
            	}

Dynamic AnimateSymbol_obj::__CreateEmpty() { return new AnimateSymbol_obj; }

void *AnimateSymbol_obj::_hx_vtable = 0;

Dynamic AnimateSymbol_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimateSymbol_obj > _hx_result = new AnimateSymbol_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AnimateSymbol_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x235a5670;
}

 ::openfl::display::DisplayObject AnimateSymbol_obj::_hx___createObject( ::swf::exporters::animate::AnimateLibrary library){
            	HX_STACKFRAME(&_hx_pos_9a18620c479474fc_18___createObject)
HXDLIN(  18)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimateSymbol_obj,_hx___createObject,return )

void AnimateSymbol_obj::_hx___init( ::swf::exporters::animate::AnimateLibrary library){
            	HX_STACKFRAME(&_hx_pos_9a18620c479474fc_21___init)
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimateSymbol_obj,_hx___init,(void))

void AnimateSymbol_obj::_hx___initObject( ::swf::exporters::animate::AnimateLibrary library, ::openfl::display::DisplayObject instance){
            	HX_STACKFRAME(&_hx_pos_9a18620c479474fc_23___initObject)
            	}


HX_DEFINE_DYNAMIC_FUNC2(AnimateSymbol_obj,_hx___initObject,(void))


::hx::ObjectPtr< AnimateSymbol_obj > AnimateSymbol_obj::__new() {
	::hx::ObjectPtr< AnimateSymbol_obj > __this = new AnimateSymbol_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AnimateSymbol_obj > AnimateSymbol_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AnimateSymbol_obj *__this = (AnimateSymbol_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimateSymbol_obj), true, "swf.exporters.animate.AnimateSymbol"));
	*(void **)__this = AnimateSymbol_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AnimateSymbol_obj::AnimateSymbol_obj()
{
}

void AnimateSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimateSymbol);
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void AnimateSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(id,"id");
}

::hx::Val AnimateSymbol_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__init") ) { return ::hx::Val( _hx___init_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return ::hx::Val( className ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__initObject") ) { return ::hx::Val( _hx___initObject_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__createObject") ) { return ::hx::Val( _hx___createObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnimateSymbol_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimateSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("className",a3,92,3d,dc));
	outFields->push(HX_("id",db,5b,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimateSymbol_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(AnimateSymbol_obj,className),HX_("className",a3,92,3d,dc)},
	{::hx::fsInt,(int)offsetof(AnimateSymbol_obj,id),HX_("id",db,5b,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnimateSymbol_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimateSymbol_obj_sMemberFields[] = {
	HX_("className",a3,92,3d,dc),
	HX_("id",db,5b,00,00),
	HX_("__createObject",fb,41,55,58),
	HX_("__init",30,9e,b3,f4),
	HX_("__initObject",0f,55,18,52),
	::String(null()) };

::hx::Class AnimateSymbol_obj::__mClass;

void AnimateSymbol_obj::__register()
{
	AnimateSymbol_obj _hx_dummy;
	AnimateSymbol_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("swf.exporters.animate.AnimateSymbol",04,7e,a4,81);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimateSymbol_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimateSymbol_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimateSymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimateSymbol_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace swf
} // end namespace exporters
} // end namespace animate
