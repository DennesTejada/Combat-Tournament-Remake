#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateBitmapSymbol
#include <swf/exporters/animate/AnimateBitmapSymbol.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateLibrary
#include <swf/exporters/animate/AnimateLibrary.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateShapeCommand
#include <swf/exporters/animate/AnimateShapeCommand.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateShapeSymbol
#include <swf/exporters/animate/AnimateShapeSymbol.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateSymbol
#include <swf/exporters/animate/AnimateSymbol.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b482115922b0ae55_30_new,"swf.exporters.animate.AnimateShapeSymbol","new",0x116b529f,"swf.exporters.animate.AnimateShapeSymbol.new","swf/exporters/animate/AnimateShapeSymbol.hx",30,0xe789ff8e)
HX_LOCAL_STACK_FRAME(_hx_pos_b482115922b0ae55_34___createObject,"swf.exporters.animate.AnimateShapeSymbol","__createObject",0x2464fa1c,"swf.exporters.animate.AnimateShapeSymbol.__createObject","swf/exporters/animate/AnimateShapeSymbol.hx",34,0xe789ff8e)
namespace swf{
namespace exporters{
namespace animate{

void AnimateShapeSymbol_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b482115922b0ae55_30_new)
HXDLIN(  30)		super::__construct();
            	}

Dynamic AnimateShapeSymbol_obj::__CreateEmpty() { return new AnimateShapeSymbol_obj; }

void *AnimateShapeSymbol_obj::_hx_vtable = 0;

Dynamic AnimateShapeSymbol_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimateShapeSymbol_obj > _hx_result = new AnimateShapeSymbol_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AnimateShapeSymbol_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x235a5670) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x235a5670;
	} else {
		return inClassId==(int)0x5c97b625;
	}
}

 ::openfl::display::DisplayObject AnimateShapeSymbol_obj::_hx___createObject( ::swf::exporters::animate::AnimateLibrary library){
            	HX_GC_STACKFRAME(&_hx_pos_b482115922b0ae55_34___createObject)
HXLINE(  35)		 ::openfl::display::Shape shape =  ::openfl::display::Shape_obj::__alloc( HX_CTX );
HXLINE(  36)		 ::openfl::display::Graphics graphics = shape->get_graphics();
HXLINE(  38)		if (::hx::IsNotNull( this->rendered )) {
HXLINE(  40)			graphics->copyFrom(this->rendered->get_graphics());
HXLINE(  41)			return shape;
            		}
HXLINE(  44)		{
HXLINE(  44)			int _g = 0;
HXDLIN(  44)			::Array< ::Dynamic> _g1 = this->commands;
HXDLIN(  44)			while((_g < _g1->length)){
HXLINE(  44)				 ::swf::exporters::animate::AnimateShapeCommand command = _g1->__get(_g).StaticCast<  ::swf::exporters::animate::AnimateShapeCommand >();
HXDLIN(  44)				_g = (_g + 1);
HXLINE(  46)				switch((int)(command->_hx_getIndex())){
            					case (int)0: {
HXLINE(  51)						int bitmapID = command->_hx_getInt(0);
HXDLIN(  51)						 ::openfl::geom::Matrix matrix = command->_hx_getObject(1).StaticCast<  ::openfl::geom::Matrix >();
HXDLIN(  51)						bool repeat = command->_hx_getBool(2);
HXDLIN(  51)						bool smooth = command->_hx_getBool(3);
HXDLIN(  51)						{
HXLINE(  53)							 ::swf::exporters::animate::AnimateBitmapSymbol bitmapSymbol = ( ( ::swf::exporters::animate::AnimateBitmapSymbol)(library->symbols->get(bitmapID)) );
HXLINE(  54)							 ::lime::graphics::Image bitmap = library->getImage(bitmapSymbol->path);
HXLINE(  56)							if (::hx::IsNotNull( bitmap )) {
HXLINE(  58)								graphics->beginBitmapFill(::openfl::display::BitmapData_obj::fromImage(bitmap,null()),matrix,repeat,smooth);
            							}
            						}
            					}
            					break;
            					case (int)1: {
HXLINE(  48)						int color = command->_hx_getInt(0);
HXDLIN(  48)						Float alpha = command->_hx_getFloat(1);
HXLINE(  49)						graphics->beginFill(color,alpha);
            					}
            					break;
            					case (int)2: {
HXLINE(  62)						 ::Dynamic fillType = command->_hx_getObject(0);
HXDLIN(  62)						::Array< int > colors = command->_hx_getObject(1).StaticCast< ::Array< int > >();
HXDLIN(  62)						::Array< Float > alphas = command->_hx_getObject(2).StaticCast< ::Array< Float > >();
HXDLIN(  62)						::Array< int > ratios = command->_hx_getObject(3).StaticCast< ::Array< int > >();
HXDLIN(  62)						 ::openfl::geom::Matrix matrix = command->_hx_getObject(4).StaticCast<  ::openfl::geom::Matrix >();
HXDLIN(  62)						 ::Dynamic spreadMethod = command->_hx_getObject(5);
HXDLIN(  62)						 ::Dynamic interpolationMethod = command->_hx_getObject(6);
HXDLIN(  62)						Float focalPointRatio = command->_hx_getFloat(7);
HXLINE(  66)						graphics->beginGradientFill(fillType,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,focalPointRatio);
            					}
            					break;
            					case (int)3: {
HXLINE(  69)						Float controlX = command->_hx_getFloat(0);
HXDLIN(  69)						Float controlY = command->_hx_getFloat(1);
HXDLIN(  69)						Float anchorX = command->_hx_getFloat(2);
HXDLIN(  69)						Float anchorY = command->_hx_getFloat(3);
HXLINE(  70)						graphics->curveTo(controlX,controlY,anchorX,anchorY);
            					}
            					break;
            					case (int)4: {
HXLINE(  73)						graphics->endFill();
            					}
            					break;
            					case (int)5: {
HXLINE(  75)						 ::Dynamic thickness = command->_hx_getObject(0);
HXDLIN(  75)						 ::Dynamic color = command->_hx_getObject(1);
HXDLIN(  75)						 ::Dynamic alpha = command->_hx_getObject(2);
HXDLIN(  75)						 ::Dynamic pixelHinting = command->_hx_getObject(3);
HXDLIN(  75)						 ::Dynamic scaleMode = command->_hx_getObject(4);
HXDLIN(  75)						 ::Dynamic caps = command->_hx_getObject(5);
HXDLIN(  75)						 ::Dynamic joints = command->_hx_getObject(6);
HXDLIN(  75)						 ::Dynamic miterLimit = command->_hx_getObject(7);
HXLINE(  76)						if (::hx::IsNotNull( thickness )) {
HXLINE(  78)							graphics->lineStyle(thickness,color,alpha,pixelHinting,scaleMode,caps,joints,miterLimit);
            						}
            						else {
HXLINE(  83)							graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
            						}
            					}
            					break;
            					case (int)6: {
HXLINE(  86)						Float x = command->_hx_getFloat(0);
HXDLIN(  86)						Float y = command->_hx_getFloat(1);
HXLINE(  87)						graphics->lineTo(x,y);
            					}
            					break;
            					case (int)7: {
HXLINE(  89)						Float x = command->_hx_getFloat(0);
HXDLIN(  89)						Float y = command->_hx_getFloat(1);
HXLINE(  90)						graphics->moveTo(x,y);
            					}
            					break;
            				}
            			}
            		}
HXLINE(  94)		this->commands = null();
HXLINE(  95)		this->rendered =  ::openfl::display::Shape_obj::__alloc( HX_CTX );
HXLINE(  96)		 ::openfl::display::Graphics _hx_tmp = this->rendered->get_graphics();
HXDLIN(  96)		_hx_tmp->copyFrom(shape->get_graphics());
HXLINE(  98)		return shape;
            	}



::hx::ObjectPtr< AnimateShapeSymbol_obj > AnimateShapeSymbol_obj::__new() {
	::hx::ObjectPtr< AnimateShapeSymbol_obj > __this = new AnimateShapeSymbol_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AnimateShapeSymbol_obj > AnimateShapeSymbol_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AnimateShapeSymbol_obj *__this = (AnimateShapeSymbol_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimateShapeSymbol_obj), true, "swf.exporters.animate.AnimateShapeSymbol"));
	*(void **)__this = AnimateShapeSymbol_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AnimateShapeSymbol_obj::AnimateShapeSymbol_obj()
{
}

void AnimateShapeSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimateShapeSymbol);
	HX_MARK_MEMBER_NAME(commands,"commands");
	HX_MARK_MEMBER_NAME(rendered,"rendered");
	 ::swf::exporters::animate::AnimateSymbol_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimateShapeSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(commands,"commands");
	HX_VISIT_MEMBER_NAME(rendered,"rendered");
	 ::swf::exporters::animate::AnimateSymbol_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AnimateShapeSymbol_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { return ::hx::Val( commands ); }
		if (HX_FIELD_EQ(inName,"rendered") ) { return ::hx::Val( rendered ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__createObject") ) { return ::hx::Val( _hx___createObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnimateShapeSymbol_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { commands=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rendered") ) { rendered=inValue.Cast<  ::openfl::display::Shape >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimateShapeSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("commands",c8,b0,55,be));
	outFields->push(HX_("rendered",35,c5,db,b2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimateShapeSymbol_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AnimateShapeSymbol_obj,commands),HX_("commands",c8,b0,55,be)},
	{::hx::fsObject /*  ::openfl::display::Shape */ ,(int)offsetof(AnimateShapeSymbol_obj,rendered),HX_("rendered",35,c5,db,b2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnimateShapeSymbol_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimateShapeSymbol_obj_sMemberFields[] = {
	HX_("commands",c8,b0,55,be),
	HX_("rendered",35,c5,db,b2),
	HX_("__createObject",fb,41,55,58),
	::String(null()) };

::hx::Class AnimateShapeSymbol_obj::__mClass;

void AnimateShapeSymbol_obj::__register()
{
	AnimateShapeSymbol_obj _hx_dummy;
	AnimateShapeSymbol_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("swf.exporters.animate.AnimateShapeSymbol",2d,17,50,6a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimateShapeSymbol_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimateShapeSymbol_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimateShapeSymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimateShapeSymbol_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace swf
} // end namespace exporters
} // end namespace animate
