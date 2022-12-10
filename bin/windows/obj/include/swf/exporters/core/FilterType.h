#ifndef INCLUDED_swf_exporters_core_FilterType
#define INCLUDED_swf_exporters_core_FilterType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(swf,exporters,core,FilterType)
namespace swf{
namespace exporters{
namespace core{


class FilterType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FilterType_obj OBJ_;

	public:
		FilterType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("swf.exporters.core.FilterType",39,17,82,d5); }
		::String __ToString() const { return HX_("FilterType.",3c,5d,b0,ae) + _hx_tag; }

		static ::swf::exporters::core::FilterType BlurFilter(Float blurX,Float blurY,int quality);
		static ::Dynamic BlurFilter_dyn();
		static ::swf::exporters::core::FilterType ColorMatrixFilter(::Array< Float > matrix);
		static ::Dynamic ColorMatrixFilter_dyn();
		static ::swf::exporters::core::FilterType DropShadowFilter(Float distance,Float angle,int color,Float alpha,Float blurX,Float blurY,Float strength,int quality,bool inner,bool knockout,bool hideObject);
		static ::Dynamic DropShadowFilter_dyn();
		static ::swf::exporters::core::FilterType GlowFilter(int color,Float alpha,Float blurX,Float blurY,Float strength,int quality,bool inner,bool knockout);
		static ::Dynamic GlowFilter_dyn();
};

} // end namespace swf
} // end namespace exporters
} // end namespace core

#endif /* INCLUDED_swf_exporters_core_FilterType */ 
