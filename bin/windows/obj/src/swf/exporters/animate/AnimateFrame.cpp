#include <hxcpp.h>

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
#ifndef INCLUDED_swf_exporters_animate_AnimateFrame
#include <swf/exporters/animate/AnimateFrame.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateFrameObject
#include <swf/exporters/animate/AnimateFrameObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c984b063f3ee6f36_17_new,"swf.exporters.animate.AnimateFrame","new",0xaa01d873,"swf.exporters.animate.AnimateFrame.new","swf/exporters/animate/AnimateFrame.hx",17,0x85631c7a)
namespace swf{
namespace exporters{
namespace animate{

void AnimateFrame_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c984b063f3ee6f36_17_new)
            	}

Dynamic AnimateFrame_obj::__CreateEmpty() { return new AnimateFrame_obj; }

void *AnimateFrame_obj::_hx_vtable = 0;

Dynamic AnimateFrame_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimateFrame_obj > _hx_result = new AnimateFrame_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AnimateFrame_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x545d33dd;
}


AnimateFrame_obj::AnimateFrame_obj()
{
}

void AnimateFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimateFrame);
	HX_MARK_MEMBER_NAME(labels,"labels");
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_MEMBER_NAME(script,"script");
	HX_MARK_MEMBER_NAME(scriptSource,"scriptSource");
	HX_MARK_END_CLASS();
}

void AnimateFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(labels,"labels");
	HX_VISIT_MEMBER_NAME(objects,"objects");
	HX_VISIT_MEMBER_NAME(script,"script");
	HX_VISIT_MEMBER_NAME(scriptSource,"scriptSource");
}

::hx::Val AnimateFrame_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"labels") ) { return ::hx::Val( labels ); }
		if (HX_FIELD_EQ(inName,"script") ) { return ::hx::Val( script ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { return ::hx::Val( objects ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scriptSource") ) { return ::hx::Val( scriptSource ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnimateFrame_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"labels") ) { labels=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"script") ) { script=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scriptSource") ) { scriptSource=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimateFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("labels",ff,27,7d,49));
	outFields->push(HX_("objects",d4,68,4f,82));
	outFields->push(HX_("scriptSource",46,0d,c1,c9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimateFrame_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(AnimateFrame_obj,labels),HX_("labels",ff,27,7d,49)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AnimateFrame_obj,objects),HX_("objects",d4,68,4f,82)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AnimateFrame_obj,script),HX_("script",0b,4e,60,47)},
	{::hx::fsString,(int)offsetof(AnimateFrame_obj,scriptSource),HX_("scriptSource",46,0d,c1,c9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnimateFrame_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimateFrame_obj_sMemberFields[] = {
	HX_("labels",ff,27,7d,49),
	HX_("objects",d4,68,4f,82),
	HX_("script",0b,4e,60,47),
	HX_("scriptSource",46,0d,c1,c9),
	::String(null()) };

::hx::Class AnimateFrame_obj::__mClass;

void AnimateFrame_obj::__register()
{
	AnimateFrame_obj _hx_dummy;
	AnimateFrame_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("swf.exporters.animate.AnimateFrame",01,23,92,40);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimateFrame_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimateFrame_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimateFrame_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimateFrame_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace swf
} // end namespace exporters
} // end namespace animate
