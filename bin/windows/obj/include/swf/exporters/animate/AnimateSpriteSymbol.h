#ifndef INCLUDED_swf_exporters_animate_AnimateSpriteSymbol
#define INCLUDED_swf_exporters_animate_AnimateSpriteSymbol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_swf_exporters_animate_AnimateSymbol
#include <swf/exporters/animate/AnimateSymbol.h>
#endif
HX_DECLARE_CLASS2(lime,utils,AssetLibrary)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,utils,AssetLibrary)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateFrame)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateLibrary)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateSpriteSymbol)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateSymbol)

namespace swf{
namespace exporters{
namespace animate{


class HXCPP_CLASS_ATTRIBUTES AnimateSpriteSymbol_obj : public  ::swf::exporters::animate::AnimateSymbol_obj
{
	public:
		typedef  ::swf::exporters::animate::AnimateSymbol_obj super;
		typedef AnimateSpriteSymbol_obj OBJ_;
		AnimateSpriteSymbol_obj();

	public:
		enum { _hx_ClassId = 0x7daec081 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="swf.exporters.animate.AnimateSpriteSymbol")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"swf.exporters.animate.AnimateSpriteSymbol"); }
		static ::hx::ObjectPtr< AnimateSpriteSymbol_obj > __new();
		static ::hx::ObjectPtr< AnimateSpriteSymbol_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimateSpriteSymbol_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimateSpriteSymbol",5e,dd,6a,32); }

		::String baseClassName;
		::Array< ::Dynamic> frames;
		 ::openfl::geom::Rectangle scale9Grid;
		 ::swf::exporters::animate::AnimateLibrary library;
		void _hx___constructor( ::openfl::display::Sprite sprite);
		::Dynamic _hx___constructor_dyn();

		 ::openfl::display::DisplayObject _hx___createObject( ::swf::exporters::animate::AnimateLibrary library);

		void _hx___init( ::swf::exporters::animate::AnimateLibrary library);

		void _hx___initObject( ::swf::exporters::animate::AnimateLibrary library, ::openfl::display::DisplayObject instance);

};

} // end namespace swf
} // end namespace exporters
} // end namespace animate

#endif /* INCLUDED_swf_exporters_animate_AnimateSpriteSymbol */ 
