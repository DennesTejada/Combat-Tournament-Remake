#ifndef INCLUDED_swf_exporters_animate_AnimateFontSymbol
#define INCLUDED_swf_exporters_animate_AnimateFontSymbol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_swf_exporters_animate_AnimateSymbol
#include <swf/exporters/animate/AnimateSymbol.h>
#endif
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateFontSymbol)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateShapeCommand)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateSymbol)

namespace swf{
namespace exporters{
namespace animate{


class HXCPP_CLASS_ATTRIBUTES AnimateFontSymbol_obj : public  ::swf::exporters::animate::AnimateSymbol_obj
{
	public:
		typedef  ::swf::exporters::animate::AnimateSymbol_obj super;
		typedef AnimateFontSymbol_obj OBJ_;
		AnimateFontSymbol_obj();

	public:
		enum { _hx_ClassId = 0x1016433b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="swf.exporters.animate.AnimateFontSymbol")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"swf.exporters.animate.AnimateFontSymbol"); }
		static ::hx::ObjectPtr< AnimateFontSymbol_obj > __new();
		static ::hx::ObjectPtr< AnimateFontSymbol_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimateFontSymbol_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimateFontSymbol",68,d8,ea,7f); }

		::Array< int > advances;
		int ascent;
		bool bold;
		::Array< int > codes;
		int descent;
		::Array< ::Dynamic> glyphs;
		bool italic;
		int leading;
		::String name;
};

} // end namespace swf
} // end namespace exporters
} // end namespace animate

#endif /* INCLUDED_swf_exporters_animate_AnimateFontSymbol */ 
