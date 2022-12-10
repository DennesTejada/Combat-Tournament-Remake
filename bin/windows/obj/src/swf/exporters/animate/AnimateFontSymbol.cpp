#include <hxcpp.h>

#ifndef INCLUDED_swf_exporters_animate_AnimateFontSymbol
#include <swf/exporters/animate/AnimateFontSymbol.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateShapeCommand
#include <swf/exporters/animate/AnimateShapeCommand.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateSymbol
#include <swf/exporters/animate/AnimateSymbol.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_867cb1928ee282c5_21_new,"swf.exporters.animate.AnimateFontSymbol","new",0x3b9791a5,"swf.exporters.animate.AnimateFontSymbol.new","swf/exporters/animate/AnimateFontSymbol.hx",21,0x0357fa2e)
namespace swf{
namespace exporters{
namespace animate{

void AnimateFontSymbol_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_867cb1928ee282c5_21_new)
HXDLIN(  21)		super::__construct();
            	}

Dynamic AnimateFontSymbol_obj::__CreateEmpty() { return new AnimateFontSymbol_obj; }

void *AnimateFontSymbol_obj::_hx_vtable = 0;

Dynamic AnimateFontSymbol_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimateFontSymbol_obj > _hx_result = new AnimateFontSymbol_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AnimateFontSymbol_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1016433b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1016433b;
	} else {
		return inClassId==(int)0x235a5670;
	}
}


::hx::ObjectPtr< AnimateFontSymbol_obj > AnimateFontSymbol_obj::__new() {
	::hx::ObjectPtr< AnimateFontSymbol_obj > __this = new AnimateFontSymbol_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AnimateFontSymbol_obj > AnimateFontSymbol_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AnimateFontSymbol_obj *__this = (AnimateFontSymbol_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimateFontSymbol_obj), true, "swf.exporters.animate.AnimateFontSymbol"));
	*(void **)__this = AnimateFontSymbol_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AnimateFontSymbol_obj::AnimateFontSymbol_obj()
{
}

void AnimateFontSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimateFontSymbol);
	HX_MARK_MEMBER_NAME(advances,"advances");
	HX_MARK_MEMBER_NAME(ascent,"ascent");
	HX_MARK_MEMBER_NAME(bold,"bold");
	HX_MARK_MEMBER_NAME(codes,"codes");
	HX_MARK_MEMBER_NAME(descent,"descent");
	HX_MARK_MEMBER_NAME(glyphs,"glyphs");
	HX_MARK_MEMBER_NAME(italic,"italic");
	HX_MARK_MEMBER_NAME(leading,"leading");
	HX_MARK_MEMBER_NAME(name,"name");
	 ::swf::exporters::animate::AnimateSymbol_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimateFontSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(advances,"advances");
	HX_VISIT_MEMBER_NAME(ascent,"ascent");
	HX_VISIT_MEMBER_NAME(bold,"bold");
	HX_VISIT_MEMBER_NAME(codes,"codes");
	HX_VISIT_MEMBER_NAME(descent,"descent");
	HX_VISIT_MEMBER_NAME(glyphs,"glyphs");
	HX_VISIT_MEMBER_NAME(italic,"italic");
	HX_VISIT_MEMBER_NAME(leading,"leading");
	HX_VISIT_MEMBER_NAME(name,"name");
	 ::swf::exporters::animate::AnimateSymbol_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AnimateFontSymbol_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { return ::hx::Val( bold ); }
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"codes") ) { return ::hx::Val( codes ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ascent") ) { return ::hx::Val( ascent ); }
		if (HX_FIELD_EQ(inName,"glyphs") ) { return ::hx::Val( glyphs ); }
		if (HX_FIELD_EQ(inName,"italic") ) { return ::hx::Val( italic ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { return ::hx::Val( descent ); }
		if (HX_FIELD_EQ(inName,"leading") ) { return ::hx::Val( leading ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"advances") ) { return ::hx::Val( advances ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnimateFontSymbol_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { bold=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"codes") ) { codes=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ascent") ) { ascent=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glyphs") ) { glyphs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"italic") ) { italic=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { descent=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leading") ) { leading=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"advances") ) { advances=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimateFontSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("advances",b1,69,7b,3b));
	outFields->push(HX_("ascent",5a,d9,6f,41));
	outFields->push(HX_("bold",85,81,1b,41));
	outFields->push(HX_("codes",a6,56,56,4a));
	outFields->push(HX_("descent",3a,ae,3f,19));
	outFields->push(HX_("glyphs",47,f9,58,ae));
	outFields->push(HX_("italic",f0,2e,64,06));
	outFields->push(HX_("leading",c6,32,61,09));
	outFields->push(HX_("name",4b,72,ff,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimateFontSymbol_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(AnimateFontSymbol_obj,advances),HX_("advances",b1,69,7b,3b)},
	{::hx::fsInt,(int)offsetof(AnimateFontSymbol_obj,ascent),HX_("ascent",5a,d9,6f,41)},
	{::hx::fsBool,(int)offsetof(AnimateFontSymbol_obj,bold),HX_("bold",85,81,1b,41)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(AnimateFontSymbol_obj,codes),HX_("codes",a6,56,56,4a)},
	{::hx::fsInt,(int)offsetof(AnimateFontSymbol_obj,descent),HX_("descent",3a,ae,3f,19)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AnimateFontSymbol_obj,glyphs),HX_("glyphs",47,f9,58,ae)},
	{::hx::fsBool,(int)offsetof(AnimateFontSymbol_obj,italic),HX_("italic",f0,2e,64,06)},
	{::hx::fsInt,(int)offsetof(AnimateFontSymbol_obj,leading),HX_("leading",c6,32,61,09)},
	{::hx::fsString,(int)offsetof(AnimateFontSymbol_obj,name),HX_("name",4b,72,ff,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnimateFontSymbol_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimateFontSymbol_obj_sMemberFields[] = {
	HX_("advances",b1,69,7b,3b),
	HX_("ascent",5a,d9,6f,41),
	HX_("bold",85,81,1b,41),
	HX_("codes",a6,56,56,4a),
	HX_("descent",3a,ae,3f,19),
	HX_("glyphs",47,f9,58,ae),
	HX_("italic",f0,2e,64,06),
	HX_("leading",c6,32,61,09),
	HX_("name",4b,72,ff,48),
	::String(null()) };

::hx::Class AnimateFontSymbol_obj::__mClass;

void AnimateFontSymbol_obj::__register()
{
	AnimateFontSymbol_obj _hx_dummy;
	AnimateFontSymbol_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("swf.exporters.animate.AnimateFontSymbol",33,db,62,a5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimateFontSymbol_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimateFontSymbol_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimateFontSymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimateFontSymbol_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace swf
} // end namespace exporters
} // end namespace animate
