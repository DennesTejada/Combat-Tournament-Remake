#ifndef INCLUDED_swf_exporters_animate_AnimateSymbol
#define INCLUDED_swf_exporters_animate_AnimateSymbol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,utils,AssetLibrary)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,AssetLibrary)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateLibrary)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateSymbol)

namespace swf{
namespace exporters{
namespace animate{


class HXCPP_CLASS_ATTRIBUTES AnimateSymbol_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AnimateSymbol_obj OBJ_;
		AnimateSymbol_obj();

	public:
		enum { _hx_ClassId = 0x235a5670 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="swf.exporters.animate.AnimateSymbol")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"swf.exporters.animate.AnimateSymbol"); }
		static ::hx::ObjectPtr< AnimateSymbol_obj > __new();
		static ::hx::ObjectPtr< AnimateSymbol_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimateSymbol_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimateSymbol",b9,7c,ce,14); }

		::String className;
		int id;
		virtual  ::openfl::display::DisplayObject _hx___createObject( ::swf::exporters::animate::AnimateLibrary library);
		::Dynamic _hx___createObject_dyn();

		virtual void _hx___init( ::swf::exporters::animate::AnimateLibrary library);
		::Dynamic _hx___init_dyn();

		virtual void _hx___initObject( ::swf::exporters::animate::AnimateLibrary library, ::openfl::display::DisplayObject instance);
		::Dynamic _hx___initObject_dyn();

};

} // end namespace swf
} // end namespace exporters
} // end namespace animate

#endif /* INCLUDED_swf_exporters_animate_AnimateSymbol */ 
