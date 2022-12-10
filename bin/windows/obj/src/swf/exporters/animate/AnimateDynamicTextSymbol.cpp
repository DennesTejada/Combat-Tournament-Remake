#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateDynamicTextSymbol
#include <swf/exporters/animate/AnimateDynamicTextSymbol.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateFontSymbol
#include <swf/exporters/animate/AnimateFontSymbol.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateLibrary
#include <swf/exporters/animate/AnimateLibrary.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateSymbol
#include <swf/exporters/animate/AnimateSymbol.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_64af2aa6ee9e5c7e_42_new,"swf.exporters.animate.AnimateDynamicTextSymbol","new",0xb1346e0a,"swf.exporters.animate.AnimateDynamicTextSymbol.new","swf/exporters/animate/AnimateDynamicTextSymbol.hx",42,0xeadcbe43)
HX_LOCAL_STACK_FRAME(_hx_pos_64af2aa6ee9e5c7e_46___createObject,"swf.exporters.animate.AnimateDynamicTextSymbol","__createObject",0xa2ce9091,"swf.exporters.animate.AnimateDynamicTextSymbol.__createObject","swf/exporters/animate/AnimateDynamicTextSymbol.hx",46,0xeadcbe43)
namespace swf{
namespace exporters{
namespace animate{

void AnimateDynamicTextSymbol_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_64af2aa6ee9e5c7e_42_new)
HXDLIN(  42)		super::__construct();
            	}

Dynamic AnimateDynamicTextSymbol_obj::__CreateEmpty() { return new AnimateDynamicTextSymbol_obj; }

void *AnimateDynamicTextSymbol_obj::_hx_vtable = 0;

Dynamic AnimateDynamicTextSymbol_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimateDynamicTextSymbol_obj > _hx_result = new AnimateDynamicTextSymbol_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AnimateDynamicTextSymbol_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x235a5670) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x235a5670;
	} else {
		return inClassId==(int)0x71254bf4;
	}
}

 ::openfl::display::DisplayObject AnimateDynamicTextSymbol_obj::_hx___createObject( ::swf::exporters::animate::AnimateLibrary library){
            	HX_GC_STACKFRAME(&_hx_pos_64af2aa6ee9e5c7e_46___createObject)
HXLINE(  47)		 ::openfl::text::TextField textField =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  53)		textField->set_width(this->width);
HXLINE(  54)		textField->set_height(this->height);
HXLINE(  57)		textField->_hx___offsetX = this->x;
HXLINE(  58)		textField->_hx___offsetY = this->y;
HXLINE(  61)		textField->set_multiline(this->multiline);
HXLINE(  62)		textField->set_wordWrap(this->wordWrap);
HXLINE(  63)		textField->set_displayAsPassword(this->password);
HXLINE(  65)		if (this->border) {
HXLINE(  67)			textField->set_border(true);
HXLINE(  68)			textField->set_background(true);
            		}
HXLINE(  71)		textField->set_selectable(this->selectable);
HXLINE(  73)		if (this->input) {
HXLINE(  75)			textField->set_type(1);
            		}
HXLINE(  78)		 ::openfl::text::TextFormat format =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  79)		if (::hx::IsNotNull( this->color )) {
HXLINE(  79)			format->color = (( (int)(this->color) ) & 16777215);
            		}
HXLINE(  80)		format->size = ::Math_obj::round((( (Float)(this->fontHeight) ) / ( (Float)(20) )));
HXLINE(  82)		 ::swf::exporters::animate::AnimateFontSymbol font = ( ( ::swf::exporters::animate::AnimateFontSymbol)(library->symbols->get(this->fontID)) );
HXLINE(  84)		if (::hx::IsNotNull( font )) {
HXLINE(  95)			format->_hx___ascent = ((( (Float)(font->ascent) ) / ( (Float)(20) )) / ( (Float)(1024) ));
HXLINE(  96)			format->_hx___descent = ((( (Float)(font->descent) ) / ( (Float)(20) )) / ( (Float)(1024) ));
            		}
HXLINE( 100)		format->font = this->fontName;
HXLINE( 102)		bool found = false;
HXLINE( 104)		{
HXLINE( 104)			::String _g = format->font;
HXDLIN( 104)			if (::hx::IsNull( _g )) {
HXLINE( 107)				found = true;
            			}
            			else {
HXLINE( 104)				::String _hx_switch_0 = _g;
            				if (  (_hx_switch_0==HX_("",00,00,00,00)) ||  (_hx_switch_0==HX_("_sans",32,a0,5e,ff)) ||  (_hx_switch_0==HX_("_serif",be,66,15,76)) ||  (_hx_switch_0==HX_("_typewriter",0c,5e,52,94)) ){
HXLINE( 107)					found = true;
HXDLIN( 107)					goto _hx_goto_2;
            				}
            				/* default */{
HXLINE( 110)					int _g = 0;
HXDLIN( 110)					::Array< ::Dynamic> _g1 = ::openfl::text::Font_obj::enumerateFonts(null());
HXDLIN( 110)					while((_g < _g1->length)){
HXLINE( 110)						 ::openfl::text::Font font = _g1->__get(_g).StaticCast<  ::openfl::text::Font >();
HXDLIN( 110)						_g = (_g + 1);
HXLINE( 112)						if ((font->name == format->font)) {
HXLINE( 114)							found = true;
HXLINE( 115)							goto _hx_goto_1;
            						}
            					}
            					_hx_goto_1:;
            				}
            				_hx_goto_2:;
            			}
            		}
HXLINE( 120)		if (!(found)) {
HXLINE( 122)			 ::EReg alpha =  ::EReg_obj::__alloc( HX_CTX ,HX_("[^a-zA-Z]+",51,38,19,1d),HX_("g",67,00,00,00));
HXLINE( 124)			{
HXLINE( 124)				int _g = 0;
HXDLIN( 124)				::Array< ::Dynamic> _g1 = ::openfl::text::Font_obj::enumerateFonts(null());
HXDLIN( 124)				while((_g < _g1->length)){
HXLINE( 124)					 ::openfl::text::Font font = _g1->__get(_g).StaticCast<  ::openfl::text::Font >();
HXDLIN( 124)					_g = (_g + 1);
HXLINE( 126)					::String _hx_tmp = alpha->replace(font->name,HX_("",00,00,00,00)).substr(0,this->fontName.length);
HXDLIN( 126)					if ((_hx_tmp == this->fontName)) {
HXLINE( 128)						format->font = font->name;
HXLINE( 129)						found = true;
HXLINE( 130)						goto _hx_goto_3;
            					}
            				}
            				_hx_goto_3:;
            			}
            		}
HXLINE( 135)		if (found) {
HXLINE( 137)			textField->set_embedFonts(true);
            		}
            		else {
HXLINE( 140)			if (!(::openfl::text::TextField_obj::_hx___missingFontWarning->exists(format->font))) {
HXLINE( 142)				::openfl::text::TextField_obj::_hx___missingFontWarning->set(format->font,true);
HXLINE( 143)				::lime::utils::Log_obj::warn(((HX_("Could not find required font \"",97,15,e8,5b) + format->font) + HX_("\", it has not been embedded",4c,66,7a,0a)),::hx::SourceInfo(HX_("swf/exporters/animate/AnimateDynamicTextSymbol.hx",43,be,dc,ea),143,HX_("swf.exporters.animate.AnimateDynamicTextSymbol",18,61,96,5f),HX_("__createObject",fb,41,55,58)));
            			}
            		}
HXLINE( 147)		if (::hx::IsNotNull( this->align )) {
HXLINE( 149)			if ((this->align == HX_("center",d5,25,db,05))) {
HXLINE( 149)				format->align = 0;
            			}
            			else {
HXLINE( 150)				if ((this->align == HX_("right",dc,0b,64,e9))) {
HXLINE( 150)					format->align = 4;
            				}
            				else {
HXLINE( 151)					if ((this->align == HX_("justify",50,df,b5,83))) {
HXLINE( 151)						format->align = 2;
            					}
            				}
            			}
HXLINE( 153)			format->leftMargin = ::Std_obj::_hx_int((( (Float)(this->leftMargin) ) / ( (Float)(20) )));
HXLINE( 154)			format->rightMargin = ::Std_obj::_hx_int((( (Float)(this->rightMargin) ) / ( (Float)(20) )));
HXLINE( 155)			format->indent = ::Std_obj::_hx_int((( (Float)(this->indent) ) / ( (Float)(20) )));
HXLINE( 156)			format->leading = ::Std_obj::_hx_int((( (Float)(this->leading) ) / ( (Float)(20) )));
            		}
HXLINE( 159)		textField->set_defaultTextFormat(format);
HXLINE( 161)		if (::hx::IsNotNull( this->text )) {
HXLINE( 163)			if (this->html) {
HXLINE( 165)				textField->set_htmlText(this->text);
            			}
            			else {
HXLINE( 169)				textField->set_text(this->text);
            			}
            		}
HXLINE( 174)		return textField;
            	}



::hx::ObjectPtr< AnimateDynamicTextSymbol_obj > AnimateDynamicTextSymbol_obj::__new() {
	::hx::ObjectPtr< AnimateDynamicTextSymbol_obj > __this = new AnimateDynamicTextSymbol_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AnimateDynamicTextSymbol_obj > AnimateDynamicTextSymbol_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AnimateDynamicTextSymbol_obj *__this = (AnimateDynamicTextSymbol_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimateDynamicTextSymbol_obj), true, "swf.exporters.animate.AnimateDynamicTextSymbol"));
	*(void **)__this = AnimateDynamicTextSymbol_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AnimateDynamicTextSymbol_obj::AnimateDynamicTextSymbol_obj()
{
}

void AnimateDynamicTextSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimateDynamicTextSymbol);
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(fontHeight,"fontHeight");
	HX_MARK_MEMBER_NAME(fontID,"fontID");
	HX_MARK_MEMBER_NAME(fontName,"fontName");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(html,"html");
	HX_MARK_MEMBER_NAME(indent,"indent");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(leading,"leading");
	HX_MARK_MEMBER_NAME(leftMargin,"leftMargin");
	HX_MARK_MEMBER_NAME(multiline,"multiline");
	HX_MARK_MEMBER_NAME(password,"password");
	HX_MARK_MEMBER_NAME(rightMargin,"rightMargin");
	HX_MARK_MEMBER_NAME(selectable,"selectable");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(wordWrap,"wordWrap");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	 ::swf::exporters::animate::AnimateSymbol_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimateDynamicTextSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(align,"align");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(fontHeight,"fontHeight");
	HX_VISIT_MEMBER_NAME(fontID,"fontID");
	HX_VISIT_MEMBER_NAME(fontName,"fontName");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(html,"html");
	HX_VISIT_MEMBER_NAME(indent,"indent");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(leading,"leading");
	HX_VISIT_MEMBER_NAME(leftMargin,"leftMargin");
	HX_VISIT_MEMBER_NAME(multiline,"multiline");
	HX_VISIT_MEMBER_NAME(password,"password");
	HX_VISIT_MEMBER_NAME(rightMargin,"rightMargin");
	HX_VISIT_MEMBER_NAME(selectable,"selectable");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(wordWrap,"wordWrap");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	 ::swf::exporters::animate::AnimateSymbol_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AnimateDynamicTextSymbol_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"html") ) { return ::hx::Val( html ); }
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return ::hx::Val( align ); }
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"input") ) { return ::hx::Val( input ); }
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return ::hx::Val( border ); }
		if (HX_FIELD_EQ(inName,"fontID") ) { return ::hx::Val( fontID ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"indent") ) { return ::hx::Val( indent ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leading") ) { return ::hx::Val( leading ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { return ::hx::Val( fontName ); }
		if (HX_FIELD_EQ(inName,"password") ) { return ::hx::Val( password ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return ::hx::Val( wordWrap ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { return ::hx::Val( multiline ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fontHeight") ) { return ::hx::Val( fontHeight ); }
		if (HX_FIELD_EQ(inName,"leftMargin") ) { return ::hx::Val( leftMargin ); }
		if (HX_FIELD_EQ(inName,"selectable") ) { return ::hx::Val( selectable ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rightMargin") ) { return ::hx::Val( rightMargin ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__createObject") ) { return ::hx::Val( _hx___createObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnimateDynamicTextSymbol_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"html") ) { html=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { align=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontID") ) { fontID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indent") ) { indent=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leading") ) { leading=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { fontName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"password") ) { password=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { wordWrap=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { multiline=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fontHeight") ) { fontHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftMargin") ) { leftMargin=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectable") ) { selectable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rightMargin") ) { rightMargin=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimateDynamicTextSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("align",c5,56,91,21));
	outFields->push(HX_("border",ec,4c,1a,64));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("fontHeight",16,9f,9f,b6));
	outFields->push(HX_("fontID",6a,ef,ee,fa));
	outFields->push(HX_("fontName",ba,8f,7d,cb));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("html",6b,95,16,45));
	outFields->push(HX_("indent",6c,0c,f3,93));
	outFields->push(HX_("input",0a,c4,1d,be));
	outFields->push(HX_("leading",c6,32,61,09));
	outFields->push(HX_("leftMargin",95,2b,7e,e9));
	outFields->push(HX_("multiline",ed,d2,11,9e));
	outFields->push(HX_("password",1b,23,d0,48));
	outFields->push(HX_("rightMargin",2a,3d,f2,23));
	outFields->push(HX_("selectable",96,b6,2a,c4));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("wordWrap",b4,14,db,00));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimateDynamicTextSymbol_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(AnimateDynamicTextSymbol_obj,align),HX_("align",c5,56,91,21)},
	{::hx::fsBool,(int)offsetof(AnimateDynamicTextSymbol_obj,border),HX_("border",ec,4c,1a,64)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AnimateDynamicTextSymbol_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsInt,(int)offsetof(AnimateDynamicTextSymbol_obj,fontHeight),HX_("fontHeight",16,9f,9f,b6)},
	{::hx::fsInt,(int)offsetof(AnimateDynamicTextSymbol_obj,fontID),HX_("fontID",6a,ef,ee,fa)},
	{::hx::fsString,(int)offsetof(AnimateDynamicTextSymbol_obj,fontName),HX_("fontName",ba,8f,7d,cb)},
	{::hx::fsFloat,(int)offsetof(AnimateDynamicTextSymbol_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsBool,(int)offsetof(AnimateDynamicTextSymbol_obj,html),HX_("html",6b,95,16,45)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AnimateDynamicTextSymbol_obj,indent),HX_("indent",6c,0c,f3,93)},
	{::hx::fsBool,(int)offsetof(AnimateDynamicTextSymbol_obj,input),HX_("input",0a,c4,1d,be)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AnimateDynamicTextSymbol_obj,leading),HX_("leading",c6,32,61,09)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AnimateDynamicTextSymbol_obj,leftMargin),HX_("leftMargin",95,2b,7e,e9)},
	{::hx::fsBool,(int)offsetof(AnimateDynamicTextSymbol_obj,multiline),HX_("multiline",ed,d2,11,9e)},
	{::hx::fsBool,(int)offsetof(AnimateDynamicTextSymbol_obj,password),HX_("password",1b,23,d0,48)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AnimateDynamicTextSymbol_obj,rightMargin),HX_("rightMargin",2a,3d,f2,23)},
	{::hx::fsBool,(int)offsetof(AnimateDynamicTextSymbol_obj,selectable),HX_("selectable",96,b6,2a,c4)},
	{::hx::fsString,(int)offsetof(AnimateDynamicTextSymbol_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsFloat,(int)offsetof(AnimateDynamicTextSymbol_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsBool,(int)offsetof(AnimateDynamicTextSymbol_obj,wordWrap),HX_("wordWrap",b4,14,db,00)},
	{::hx::fsFloat,(int)offsetof(AnimateDynamicTextSymbol_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(AnimateDynamicTextSymbol_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnimateDynamicTextSymbol_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimateDynamicTextSymbol_obj_sMemberFields[] = {
	HX_("align",c5,56,91,21),
	HX_("border",ec,4c,1a,64),
	HX_("color",63,71,5c,4a),
	HX_("fontHeight",16,9f,9f,b6),
	HX_("fontID",6a,ef,ee,fa),
	HX_("fontName",ba,8f,7d,cb),
	HX_("height",e7,07,4c,02),
	HX_("html",6b,95,16,45),
	HX_("indent",6c,0c,f3,93),
	HX_("input",0a,c4,1d,be),
	HX_("leading",c6,32,61,09),
	HX_("leftMargin",95,2b,7e,e9),
	HX_("multiline",ed,d2,11,9e),
	HX_("password",1b,23,d0,48),
	HX_("rightMargin",2a,3d,f2,23),
	HX_("selectable",96,b6,2a,c4),
	HX_("text",ad,cc,f9,4c),
	HX_("width",06,b6,62,ca),
	HX_("wordWrap",b4,14,db,00),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("__createObject",fb,41,55,58),
	::String(null()) };

::hx::Class AnimateDynamicTextSymbol_obj::__mClass;

void AnimateDynamicTextSymbol_obj::__register()
{
	AnimateDynamicTextSymbol_obj _hx_dummy;
	AnimateDynamicTextSymbol_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("swf.exporters.animate.AnimateDynamicTextSymbol",18,61,96,5f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimateDynamicTextSymbol_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimateDynamicTextSymbol_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimateDynamicTextSymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimateDynamicTextSymbol_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace swf
} // end namespace exporters
} // end namespace animate
