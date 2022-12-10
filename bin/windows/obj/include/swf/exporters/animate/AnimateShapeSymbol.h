#ifndef INCLUDED_swf_exporters_animate_AnimateShapeSymbol
#define INCLUDED_swf_exporters_animate_AnimateShapeSymbol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_swf_exporters_animate_AnimateSymbol
#include <swf/exporters/animate/AnimateSymbol.h>
#endif
HX_DECLARE_CLASS2(lime,utils,AssetLibrary)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,AssetLibrary)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateLibrary)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateShapeCommand)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateShapeSymbol)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateSymbol)

namespace swf{
namespace exporters{
namespace animate{


class HXCPP_CLASS_ATTRIBUTES AnimateShapeSymbol_obj : public  ::swf::exporters::animate::AnimateSymbol_obj
{
	public:
		typedef  ::swf::exporters::animate::AnimateSymbol_obj super;
		typedef AnimateShapeSymbol_obj OBJ_;
		AnimateShapeSymbol_obj();

	public:
		enum { _hx_ClassId = 0x5c97b625 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="swf.exporters.animate.AnimateShapeSymbol")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"swf.exporters.animate.AnimateShapeSymbol"); }
		static ::hx::ObjectPtr< AnimateShapeSymbol_obj > __new();
		static ::hx::ObjectPtr< AnimateShapeSymbol_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimateShapeSymbol_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimateShapeSymbol",58,a8,c5,c6); }

		::Array< ::Dynamic> commands;
		 ::openfl::display::Shape rendered;
		 ::openfl::display::DisplayObject _hx___createObject( ::swf::exporters::animate::AnimateLibrary library);

};

} // end namespace swf
} // end namespace exporters
} // end namespace animate

#endif /* INCLUDED_swf_exporters_animate_AnimateShapeSymbol */ 
