#ifndef INCLUDED_swf_exporters_animate_AnimateDynamicTextSymbol
#define INCLUDED_swf_exporters_animate_AnimateDynamicTextSymbol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_swf_exporters_animate_AnimateSymbol
#include <swf/exporters/animate/AnimateSymbol.h>
#endif
HX_DECLARE_CLASS2(lime,utils,AssetLibrary)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,AssetLibrary)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateDynamicTextSymbol)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateLibrary)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateSymbol)

namespace swf{
namespace exporters{
namespace animate{


class HXCPP_CLASS_ATTRIBUTES AnimateDynamicTextSymbol_obj : public  ::swf::exporters::animate::AnimateSymbol_obj
{
	public:
		typedef  ::swf::exporters::animate::AnimateSymbol_obj super;
		typedef AnimateDynamicTextSymbol_obj OBJ_;
		AnimateDynamicTextSymbol_obj();

	public:
		enum { _hx_ClassId = 0x71254bf4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="swf.exporters.animate.AnimateDynamicTextSymbol")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"swf.exporters.animate.AnimateDynamicTextSymbol"); }
		static ::hx::ObjectPtr< AnimateDynamicTextSymbol_obj > __new();
		static ::hx::ObjectPtr< AnimateDynamicTextSymbol_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimateDynamicTextSymbol_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimateDynamicTextSymbol",83,a4,29,a6); }

		::String align;
		bool border;
		 ::Dynamic color;
		int fontHeight;
		int fontID;
		::String fontName;
		Float height;
		bool html;
		 ::Dynamic indent;
		bool input;
		 ::Dynamic leading;
		 ::Dynamic leftMargin;
		bool multiline;
		bool password;
		 ::Dynamic rightMargin;
		bool selectable;
		::String text;
		Float width;
		bool wordWrap;
		Float x;
		Float y;
		 ::openfl::display::DisplayObject _hx___createObject( ::swf::exporters::animate::AnimateLibrary library);

};

} // end namespace swf
} // end namespace exporters
} // end namespace animate

#endif /* INCLUDED_swf_exporters_animate_AnimateDynamicTextSymbol */ 
