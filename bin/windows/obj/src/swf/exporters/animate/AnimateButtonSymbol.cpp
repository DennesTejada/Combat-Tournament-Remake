#include <hxcpp.h>

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
#ifndef INCLUDED_openfl_display_SimpleButton
#include <openfl/display/SimpleButton.h>
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
#ifndef INCLUDED_swf_exporters_animate_AnimateButtonSymbol
#include <swf/exporters/animate/AnimateButtonSymbol.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c1394ae7a281029b_22_new,"swf.exporters.animate.AnimateButtonSymbol","new",0xa25a4288,"swf.exporters.animate.AnimateButtonSymbol.new","swf/exporters/animate/AnimateButtonSymbol.hx",22,0x0c722d6b)
HX_LOCAL_STACK_FRAME(_hx_pos_c1394ae7a281029b_26___constructor,"swf.exporters.animate.AnimateButtonSymbol","__constructor",0xb4472202,"swf.exporters.animate.AnimateButtonSymbol.__constructor","swf/exporters/animate/AnimateButtonSymbol.hx",26,0x0c722d6b)
HX_LOCAL_STACK_FRAME(_hx_pos_c1394ae7a281029b_49___createObject,"swf.exporters.animate.AnimateButtonSymbol","__createObject",0x0cc930d3,"swf.exporters.animate.AnimateButtonSymbol.__createObject","swf/exporters/animate/AnimateButtonSymbol.hx",49,0x0c722d6b)
HX_LOCAL_STACK_FRAME(_hx_pos_c1394ae7a281029b_91___init,"swf.exporters.animate.AnimateButtonSymbol","__init",0x4f30f508,"swf.exporters.animate.AnimateButtonSymbol.__init","swf/exporters/animate/AnimateButtonSymbol.hx",91,0x0c722d6b)
HX_LOCAL_STACK_FRAME(_hx_pos_c1394ae7a281029b_97___initObject,"swf.exporters.animate.AnimateButtonSymbol","__initObject",0x74565de7,"swf.exporters.animate.AnimateButtonSymbol.__initObject","swf/exporters/animate/AnimateButtonSymbol.hx",97,0x0c722d6b)
namespace swf{
namespace exporters{
namespace animate{

void AnimateButtonSymbol_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c1394ae7a281029b_22_new)
HXDLIN(  22)		super::__construct();
            	}

Dynamic AnimateButtonSymbol_obj::__CreateEmpty() { return new AnimateButtonSymbol_obj; }

void *AnimateButtonSymbol_obj::_hx_vtable = 0;

Dynamic AnimateButtonSymbol_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimateButtonSymbol_obj > _hx_result = new AnimateButtonSymbol_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AnimateButtonSymbol_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x235a5670) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x235a5670;
	} else {
		return inClassId==(int)0x7fdc6d92;
	}
}

void AnimateButtonSymbol_obj::_hx___constructor( ::openfl::display::SimpleButton simpleButton){
            	HX_STACKFRAME(&_hx_pos_c1394ae7a281029b_26___constructor)
HXLINE(  27)		if (::hx::IsNotNull( this->downState )) {
HXLINE(  29)			simpleButton->set_downState(Dynamic( this->downState->_hx___createObject(this->library)).StaticCast<  ::openfl::display::Sprite >());
            		}
HXLINE(  32)		if (::hx::IsNotNull( this->hitState )) {
HXLINE(  34)			simpleButton->set_hitTestState(Dynamic( this->hitState->_hx___createObject(this->library)).StaticCast<  ::openfl::display::Sprite >());
            		}
HXLINE(  37)		if (::hx::IsNotNull( this->overState )) {
HXLINE(  39)			simpleButton->set_overState(Dynamic( this->overState->_hx___createObject(this->library)).StaticCast<  ::openfl::display::Sprite >());
            		}
HXLINE(  42)		if (::hx::IsNotNull( this->upState )) {
HXLINE(  44)			simpleButton->set_upState(Dynamic( this->upState->_hx___createObject(this->library)).StaticCast<  ::openfl::display::Sprite >());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimateButtonSymbol_obj,_hx___constructor,(void))

 ::openfl::display::DisplayObject AnimateButtonSymbol_obj::_hx___createObject( ::swf::exporters::animate::AnimateLibrary library){
            	HX_GC_STACKFRAME(&_hx_pos_c1394ae7a281029b_49___createObject)
HXLINE(  50)		 ::openfl::display::SimpleButton simpleButton = null();
HXLINE(  51)		::openfl::display::SimpleButton_obj::_hx___constructor = this->_hx___constructor_dyn();
HXLINE(  52)		this->library = library;
HXLINE(  61)		if (::hx::IsNotNull( this->className )) {
HXLINE(  63)			::hx::Class symbolType = ::Type_obj::resolveClass(this->className);
HXLINE(  65)			if (::hx::IsNotNull( symbolType )) {
HXLINE(  67)				simpleButton = ( ( ::openfl::display::SimpleButton)(::Type_obj::createInstance(symbolType,::cpp::VirtualArray_obj::__new(0))) );
            			}
            		}
HXLINE(  75)		if (::hx::IsNull( simpleButton )) {
HXLINE(  77)			simpleButton =  ::openfl::display::SimpleButton_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE(  87)		return simpleButton;
            	}


void AnimateButtonSymbol_obj::_hx___init( ::swf::exporters::animate::AnimateLibrary library){
            	HX_STACKFRAME(&_hx_pos_c1394ae7a281029b_91___init)
HXLINE(  92)		::openfl::display::SimpleButton_obj::_hx___constructor = this->_hx___constructor_dyn();
HXLINE(  93)		this->library = library;
            	}


void AnimateButtonSymbol_obj::_hx___initObject( ::swf::exporters::animate::AnimateLibrary library, ::openfl::display::DisplayObject instance){
            	HX_STACKFRAME(&_hx_pos_c1394ae7a281029b_97___initObject)
HXLINE(  98)		this->library = library;
HXLINE(  99)		this->_hx___constructor(( ( ::openfl::display::SimpleButton)(instance) ));
            	}



::hx::ObjectPtr< AnimateButtonSymbol_obj > AnimateButtonSymbol_obj::__new() {
	::hx::ObjectPtr< AnimateButtonSymbol_obj > __this = new AnimateButtonSymbol_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AnimateButtonSymbol_obj > AnimateButtonSymbol_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AnimateButtonSymbol_obj *__this = (AnimateButtonSymbol_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimateButtonSymbol_obj), true, "swf.exporters.animate.AnimateButtonSymbol"));
	*(void **)__this = AnimateButtonSymbol_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AnimateButtonSymbol_obj::AnimateButtonSymbol_obj()
{
}

void AnimateButtonSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimateButtonSymbol);
	HX_MARK_MEMBER_NAME(downState,"downState");
	HX_MARK_MEMBER_NAME(hitState,"hitState");
	HX_MARK_MEMBER_NAME(overState,"overState");
	HX_MARK_MEMBER_NAME(upState,"upState");
	HX_MARK_MEMBER_NAME(library,"library");
	 ::swf::exporters::animate::AnimateSymbol_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimateButtonSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(downState,"downState");
	HX_VISIT_MEMBER_NAME(hitState,"hitState");
	HX_VISIT_MEMBER_NAME(overState,"overState");
	HX_VISIT_MEMBER_NAME(upState,"upState");
	HX_VISIT_MEMBER_NAME(library,"library");
	 ::swf::exporters::animate::AnimateSymbol_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AnimateButtonSymbol_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__init") ) { return ::hx::Val( _hx___init_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"upState") ) { return ::hx::Val( upState ); }
		if (HX_FIELD_EQ(inName,"library") ) { return ::hx::Val( library ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hitState") ) { return ::hx::Val( hitState ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"downState") ) { return ::hx::Val( downState ); }
		if (HX_FIELD_EQ(inName,"overState") ) { return ::hx::Val( overState ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__initObject") ) { return ::hx::Val( _hx___initObject_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__constructor") ) { return ::hx::Val( _hx___constructor_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__createObject") ) { return ::hx::Val( _hx___createObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnimateButtonSymbol_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"upState") ) { upState=inValue.Cast<  ::swf::exporters::animate::AnimateSpriteSymbol >(); return inValue; }
		if (HX_FIELD_EQ(inName,"library") ) { library=inValue.Cast<  ::swf::exporters::animate::AnimateLibrary >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hitState") ) { hitState=inValue.Cast<  ::swf::exporters::animate::AnimateSpriteSymbol >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"downState") ) { downState=inValue.Cast<  ::swf::exporters::animate::AnimateSpriteSymbol >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overState") ) { overState=inValue.Cast<  ::swf::exporters::animate::AnimateSpriteSymbol >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimateButtonSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("downState",4f,4a,21,9a));
	outFields->push(HX_("hitState",be,d2,6a,c3));
	outFields->push(HX_("overState",1d,04,cd,e7));
	outFields->push(HX_("upState",b6,95,80,e0));
	outFields->push(HX_("library",fb,26,70,3f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimateButtonSymbol_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::swf::exporters::animate::AnimateSpriteSymbol */ ,(int)offsetof(AnimateButtonSymbol_obj,downState),HX_("downState",4f,4a,21,9a)},
	{::hx::fsObject /*  ::swf::exporters::animate::AnimateSpriteSymbol */ ,(int)offsetof(AnimateButtonSymbol_obj,hitState),HX_("hitState",be,d2,6a,c3)},
	{::hx::fsObject /*  ::swf::exporters::animate::AnimateSpriteSymbol */ ,(int)offsetof(AnimateButtonSymbol_obj,overState),HX_("overState",1d,04,cd,e7)},
	{::hx::fsObject /*  ::swf::exporters::animate::AnimateSpriteSymbol */ ,(int)offsetof(AnimateButtonSymbol_obj,upState),HX_("upState",b6,95,80,e0)},
	{::hx::fsObject /*  ::swf::exporters::animate::AnimateLibrary */ ,(int)offsetof(AnimateButtonSymbol_obj,library),HX_("library",fb,26,70,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnimateButtonSymbol_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimateButtonSymbol_obj_sMemberFields[] = {
	HX_("downState",4f,4a,21,9a),
	HX_("hitState",be,d2,6a,c3),
	HX_("overState",1d,04,cd,e7),
	HX_("upState",b6,95,80,e0),
	HX_("library",fb,26,70,3f),
	HX_("__constructor",da,6d,3d,e0),
	HX_("__createObject",fb,41,55,58),
	HX_("__init",30,9e,b3,f4),
	HX_("__initObject",0f,55,18,52),
	::String(null()) };

::hx::Class AnimateButtonSymbol_obj::__mClass;

void AnimateButtonSymbol_obj::__register()
{
	AnimateButtonSymbol_obj _hx_dummy;
	AnimateButtonSymbol_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("swf.exporters.animate.AnimateButtonSymbol",96,9e,dc,b7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimateButtonSymbol_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimateButtonSymbol_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimateButtonSymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimateButtonSymbol_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace swf
} // end namespace exporters
} // end namespace animate
