#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_openfl_display_Timeline
#include <openfl/display/Timeline.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateFrame
#include <swf/exporters/animate/AnimateFrame.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateLibrary
#include <swf/exporters/animate/AnimateLibrary.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateSpriteSymbol
#include <swf/exporters/animate/AnimateSpriteSymbol.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateSymbol
#include <swf/exporters/animate/AnimateSymbol.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateTimeline
#include <swf/exporters/animate/AnimateTimeline.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_05a302057e59db9c_22_new,"swf.exporters.animate.AnimateSpriteSymbol","new",0x2fee325b,"swf.exporters.animate.AnimateSpriteSymbol.new","swf/exporters/animate/AnimateSpriteSymbol.hx",22,0x86c458f8)
HX_LOCAL_STACK_FRAME(_hx_pos_05a302057e59db9c_29___constructor,"swf.exporters.animate.AnimateSpriteSymbol","__constructor",0xf50e3795,"swf.exporters.animate.AnimateSpriteSymbol.__constructor","swf/exporters/animate/AnimateSpriteSymbol.hx",29,0x86c458f8)
HX_LOCAL_STACK_FRAME(_hx_pos_05a302057e59db9c_49___createObject,"swf.exporters.animate.AnimateSpriteSymbol","__createObject",0x7a34fbe0,"swf.exporters.animate.AnimateSpriteSymbol.__createObject","swf/exporters/animate/AnimateSpriteSymbol.hx",49,0x86c458f8)
HX_LOCAL_STACK_FRAME(_hx_pos_05a302057e59db9c_117___init,"swf.exporters.animate.AnimateSpriteSymbol","__init",0xc4f46b15,"swf.exporters.animate.AnimateSpriteSymbol.__init","swf/exporters/animate/AnimateSpriteSymbol.hx",117,0x86c458f8)
HX_LOCAL_STACK_FRAME(_hx_pos_05a302057e59db9c_125___initObject,"swf.exporters.animate.AnimateSpriteSymbol","__initObject",0x1fad5bb4,"swf.exporters.animate.AnimateSpriteSymbol.__initObject","swf/exporters/animate/AnimateSpriteSymbol.hx",125,0x86c458f8)
namespace swf{
namespace exporters{
namespace animate{

void AnimateSpriteSymbol_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_05a302057e59db9c_22_new)
HXLINE(  23)		super::__construct();
HXLINE(  25)		this->frames = ::Array_obj< ::Dynamic>::__new();
            	}

Dynamic AnimateSpriteSymbol_obj::__CreateEmpty() { return new AnimateSpriteSymbol_obj; }

void *AnimateSpriteSymbol_obj::_hx_vtable = 0;

Dynamic AnimateSpriteSymbol_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimateSpriteSymbol_obj > _hx_result = new AnimateSpriteSymbol_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AnimateSpriteSymbol_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x235a5670) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x235a5670;
	} else {
		return inClassId==(int)0x7daec081;
	}
}

void AnimateSpriteSymbol_obj::_hx___constructor( ::openfl::display::Sprite sprite){
            	HX_GC_STACKFRAME(&_hx_pos_05a302057e59db9c_29___constructor)
HXLINE(  30)		 ::swf::exporters::animate::AnimateTimeline timeline =  ::swf::exporters::animate::AnimateTimeline_obj::__alloc( HX_CTX ,this->library,::hx::ObjectPtr<OBJ_>(this));
HXLINE(  31)		if (::Std_obj::isOfType(sprite,::hx::ClassOf< ::openfl::display::MovieClip >())) {
HXLINE(  33)			 ::openfl::display::MovieClip movieClip = ( ( ::openfl::display::MovieClip)(sprite) );
HXLINE(  37)			movieClip->set_scale9Grid(this->scale9Grid);
HXLINE(  38)			movieClip->attachTimeline(timeline);
            		}
            		else {
HXLINE(  43)			sprite->set_scale9Grid(this->scale9Grid);
HXLINE(  44)			timeline->initializeSprite(sprite);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimateSpriteSymbol_obj,_hx___constructor,(void))

 ::openfl::display::DisplayObject AnimateSpriteSymbol_obj::_hx___createObject( ::swf::exporters::animate::AnimateLibrary library){
            	HX_GC_STACKFRAME(&_hx_pos_05a302057e59db9c_49___createObject)
HXLINE(  51)		::openfl::display::Sprite_obj::_hx___constructor = this->_hx___constructor_dyn();
HXLINE(  53)		this->library = library;
HXLINE(  62)		::hx::Class symbolType = null();
HXLINE(  64)		if (::hx::IsNotNull( this->className )) {
HXLINE(  66)			symbolType = ::Type_obj::resolveClass(this->className);
HXLINE(  68)			bool _hx_tmp = ::hx::IsNull( symbolType );
            		}
HXLINE(  74)		bool _hx_tmp;
HXDLIN(  74)		if (::hx::IsNull( symbolType )) {
HXLINE(  74)			_hx_tmp = ::hx::IsNotNull( this->baseClassName );
            		}
            		else {
HXLINE(  74)			_hx_tmp = false;
            		}
HXDLIN(  74)		if (_hx_tmp) {
HXLINE(  83)			symbolType = ::Type_obj::resolveClass(this->baseClassName);
HXLINE(  85)			bool _hx_tmp = ::hx::IsNull( symbolType );
            		}
HXLINE(  91)		 ::openfl::display::Sprite sprite = null();
HXLINE(  93)		if (::hx::IsNotNull( symbolType )) {
HXLINE(  95)			sprite = ( ( ::openfl::display::Sprite)(::Type_obj::createInstance(symbolType,::cpp::VirtualArray_obj::__new(0))) );
            		}
            		else {
HXLINE( 102)			sprite =  ::openfl::display::MovieClip_obj::__alloc( HX_CTX );
            		}
HXLINE( 113)		return sprite;
            	}


void AnimateSpriteSymbol_obj::_hx___init( ::swf::exporters::animate::AnimateLibrary library){
            	HX_STACKFRAME(&_hx_pos_05a302057e59db9c_117___init)
HXLINE( 119)		::openfl::display::Sprite_obj::_hx___constructor = this->_hx___constructor_dyn();
HXLINE( 121)		this->library = library;
            	}


void AnimateSpriteSymbol_obj::_hx___initObject( ::swf::exporters::animate::AnimateLibrary library, ::openfl::display::DisplayObject instance){
            	HX_STACKFRAME(&_hx_pos_05a302057e59db9c_125___initObject)
HXLINE( 126)		this->library = library;
HXLINE( 127)		this->_hx___constructor(( ( ::openfl::display::Sprite)(instance) ));
            	}



::hx::ObjectPtr< AnimateSpriteSymbol_obj > AnimateSpriteSymbol_obj::__new() {
	::hx::ObjectPtr< AnimateSpriteSymbol_obj > __this = new AnimateSpriteSymbol_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AnimateSpriteSymbol_obj > AnimateSpriteSymbol_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AnimateSpriteSymbol_obj *__this = (AnimateSpriteSymbol_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimateSpriteSymbol_obj), true, "swf.exporters.animate.AnimateSpriteSymbol"));
	*(void **)__this = AnimateSpriteSymbol_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AnimateSpriteSymbol_obj::AnimateSpriteSymbol_obj()
{
}

void AnimateSpriteSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimateSpriteSymbol);
	HX_MARK_MEMBER_NAME(baseClassName,"baseClassName");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(scale9Grid,"scale9Grid");
	HX_MARK_MEMBER_NAME(library,"library");
	 ::swf::exporters::animate::AnimateSymbol_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimateSpriteSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(baseClassName,"baseClassName");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(scale9Grid,"scale9Grid");
	HX_VISIT_MEMBER_NAME(library,"library");
	 ::swf::exporters::animate::AnimateSymbol_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AnimateSpriteSymbol_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return ::hx::Val( frames ); }
		if (HX_FIELD_EQ(inName,"__init") ) { return ::hx::Val( _hx___init_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { return ::hx::Val( library ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { return ::hx::Val( scale9Grid ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__initObject") ) { return ::hx::Val( _hx___initObject_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"baseClassName") ) { return ::hx::Val( baseClassName ); }
		if (HX_FIELD_EQ(inName,"__constructor") ) { return ::hx::Val( _hx___constructor_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__createObject") ) { return ::hx::Val( _hx___createObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnimateSpriteSymbol_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { library=inValue.Cast<  ::swf::exporters::animate::AnimateLibrary >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { scale9Grid=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"baseClassName") ) { baseClassName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimateSpriteSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("baseClassName",52,80,94,dc));
	outFields->push(HX_("frames",a6,af,85,ac));
	outFields->push(HX_("scale9Grid",d5,50,22,8f));
	outFields->push(HX_("library",fb,26,70,3f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimateSpriteSymbol_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(AnimateSpriteSymbol_obj,baseClassName),HX_("baseClassName",52,80,94,dc)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AnimateSpriteSymbol_obj,frames),HX_("frames",a6,af,85,ac)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(AnimateSpriteSymbol_obj,scale9Grid),HX_("scale9Grid",d5,50,22,8f)},
	{::hx::fsObject /*  ::swf::exporters::animate::AnimateLibrary */ ,(int)offsetof(AnimateSpriteSymbol_obj,library),HX_("library",fb,26,70,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnimateSpriteSymbol_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimateSpriteSymbol_obj_sMemberFields[] = {
	HX_("baseClassName",52,80,94,dc),
	HX_("frames",a6,af,85,ac),
	HX_("scale9Grid",d5,50,22,8f),
	HX_("library",fb,26,70,3f),
	HX_("__constructor",da,6d,3d,e0),
	HX_("__createObject",fb,41,55,58),
	HX_("__init",30,9e,b3,f4),
	HX_("__initObject",0f,55,18,52),
	::String(null()) };

::hx::Class AnimateSpriteSymbol_obj::__mClass;

void AnimateSpriteSymbol_obj::__register()
{
	AnimateSpriteSymbol_obj _hx_dummy;
	AnimateSpriteSymbol_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("swf.exporters.animate.AnimateSpriteSymbol",e9,68,01,a8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimateSpriteSymbol_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimateSpriteSymbol_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimateSpriteSymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimateSpriteSymbol_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace swf
} // end namespace exporters
} // end namespace animate
