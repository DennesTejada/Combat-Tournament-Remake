#ifndef INCLUDED_swf_exporters_animate_AnimateTimeline
#define INCLUDED_swf_exporters_animate_AnimateTimeline

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Timeline
#include <openfl/display/Timeline.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(lime,utils,AssetLibrary)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Timeline)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,AssetLibrary)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateFrameObject)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateLibrary)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateSpriteSymbol)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateSymbol)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateTimeline)
HX_DECLARE_CLASS4(swf,exporters,animate,_AnimateTimeline,FrameSymbolInstance)

namespace swf{
namespace exporters{
namespace animate{


class HXCPP_CLASS_ATTRIBUTES AnimateTimeline_obj : public  ::openfl::display::Timeline_obj
{
	public:
		typedef  ::openfl::display::Timeline_obj super;
		typedef AnimateTimeline_obj OBJ_;
		AnimateTimeline_obj();

	public:
		enum { _hx_ClassId = 0x2c3e20d1 };

		void __construct( ::swf::exporters::animate::AnimateLibrary library, ::swf::exporters::animate::AnimateSpriteSymbol symbol);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="swf.exporters.animate.AnimateTimeline")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"swf.exporters.animate.AnimateTimeline"); }
		static ::hx::ObjectPtr< AnimateTimeline_obj > __new( ::swf::exporters::animate::AnimateLibrary library, ::swf::exporters::animate::AnimateSpriteSymbol symbol);
		static ::hx::ObjectPtr< AnimateTimeline_obj > __alloc(::hx::Ctx *_hx_ctx, ::swf::exporters::animate::AnimateLibrary library, ::swf::exporters::animate::AnimateSpriteSymbol symbol);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimateTimeline_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimateTimeline",22,16,03,1b); }

		::Array< ::Dynamic> _hx___activeInstances;
		 ::haxe::ds::IntMap _hx___activeInstancesByFrameObjectID;
		 ::haxe::ds::IntMap _hx___currentInstancesByFrameObjectID;
		::Array< ::String > _hx___instanceFields;
		 ::haxe::ds::ObjectMap _hx___lastUpdated;
		 ::swf::exporters::animate::AnimateLibrary _hx___library;
		int _hx___previousFrame;
		 ::openfl::display::Sprite _hx___sprite;
		 ::swf::exporters::animate::AnimateSpriteSymbol _hx___symbol;
		void attachMovieClip( ::openfl::display::MovieClip movieClip);

		void enterFrame(int currentFrame);

		void init( ::openfl::display::Sprite sprite);
		::Dynamic init_dyn();

		void initializeSprite( ::openfl::display::Sprite sprite);

		int _hx___sortDepths( ::swf::exporters::animate::_AnimateTimeline::FrameSymbolInstance a, ::swf::exporters::animate::_AnimateTimeline::FrameSymbolInstance b);
		::Dynamic _hx___sortDepths_dyn();

		void _hx___updateDisplayObject( ::openfl::display::DisplayObject displayObject, ::swf::exporters::animate::AnimateFrameObject frameObject,::hx::Null< bool >  reset);
		::Dynamic _hx___updateDisplayObject_dyn();

		void _hx___updateInstanceFields();
		::Dynamic _hx___updateInstanceFields_dyn();

};

} // end namespace swf
} // end namespace exporters
} // end namespace animate

#endif /* INCLUDED_swf_exporters_animate_AnimateTimeline */ 
