#ifndef INCLUDED_swf_exporters_animate_AnimateButtonSymbol
#define INCLUDED_swf_exporters_animate_AnimateButtonSymbol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_swf_exporters_animate_AnimateSymbol
#include <swf/exporters/animate/AnimateSymbol.h>
#endif
HX_DECLARE_CLASS2(lime,utils,AssetLibrary)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,SimpleButton)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,AssetLibrary)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateButtonSymbol)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateLibrary)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateSpriteSymbol)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateSymbol)

namespace swf{
namespace exporters{
namespace animate{


class HXCPP_CLASS_ATTRIBUTES AnimateButtonSymbol_obj : public  ::swf::exporters::animate::AnimateSymbol_obj
{
	public:
		typedef  ::swf::exporters::animate::AnimateSymbol_obj super;
		typedef AnimateButtonSymbol_obj OBJ_;
		AnimateButtonSymbol_obj();

	public:
		enum { _hx_ClassId = 0x7fdc6d92 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="swf.exporters.animate.AnimateButtonSymbol")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"swf.exporters.animate.AnimateButtonSymbol"); }
		static ::hx::ObjectPtr< AnimateButtonSymbol_obj > __new();
		static ::hx::ObjectPtr< AnimateButtonSymbol_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimateButtonSymbol_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimateButtonSymbol",0b,13,46,42); }

		 ::swf::exporters::animate::AnimateSpriteSymbol downState;
		 ::swf::exporters::animate::AnimateSpriteSymbol hitState;
		 ::swf::exporters::animate::AnimateSpriteSymbol overState;
		 ::swf::exporters::animate::AnimateSpriteSymbol upState;
		 ::swf::exporters::animate::AnimateLibrary library;
		void _hx___constructor( ::openfl::display::SimpleButton simpleButton);
		::Dynamic _hx___constructor_dyn();

		 ::openfl::display::DisplayObject _hx___createObject( ::swf::exporters::animate::AnimateLibrary library);

		void _hx___init( ::swf::exporters::animate::AnimateLibrary library);

		void _hx___initObject( ::swf::exporters::animate::AnimateLibrary library, ::openfl::display::DisplayObject instance);

};

} // end namespace swf
} // end namespace exporters
} // end namespace animate

#endif /* INCLUDED_swf_exporters_animate_AnimateButtonSymbol */ 
