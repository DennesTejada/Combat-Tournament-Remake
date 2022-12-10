#ifndef INCLUDED_swf_exporters_animate_AnimateShapeCommand
#define INCLUDED_swf_exporters_animate_AnimateShapeCommand

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateShapeCommand)
namespace swf{
namespace exporters{
namespace animate{


class AnimateShapeCommand_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef AnimateShapeCommand_obj OBJ_;

	public:
		AnimateShapeCommand_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("swf.exporters.animate.AnimateShapeCommand",d6,e3,15,0a); }
		::String __ToString() const { return HX_("AnimateShapeCommand.",83,e9,ed,5a) + _hx_tag; }

		static ::swf::exporters::animate::AnimateShapeCommand BeginBitmapFill(int bitmap, ::openfl::geom::Matrix matrix,bool repeat,bool smooth);
		static ::Dynamic BeginBitmapFill_dyn();
		static ::swf::exporters::animate::AnimateShapeCommand BeginFill(int color,Float alpha);
		static ::Dynamic BeginFill_dyn();
		static ::swf::exporters::animate::AnimateShapeCommand BeginGradientFill( ::Dynamic fillType,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,Float focalPointRatio);
		static ::Dynamic BeginGradientFill_dyn();
		static ::swf::exporters::animate::AnimateShapeCommand CurveTo(Float controlX,Float controlY,Float anchorX,Float anchorY);
		static ::Dynamic CurveTo_dyn();
		static ::swf::exporters::animate::AnimateShapeCommand EndFill;
		static inline ::swf::exporters::animate::AnimateShapeCommand EndFill_dyn() { return EndFill; }
		static ::swf::exporters::animate::AnimateShapeCommand LineStyle( ::Dynamic thickness, ::Dynamic color, ::Dynamic alpha, ::Dynamic pixelHinting, ::Dynamic scaleMode, ::Dynamic caps, ::Dynamic joints, ::Dynamic miterLimit);
		static ::Dynamic LineStyle_dyn();
		static ::swf::exporters::animate::AnimateShapeCommand LineTo(Float x,Float y);
		static ::Dynamic LineTo_dyn();
		static ::swf::exporters::animate::AnimateShapeCommand MoveTo(Float x,Float y);
		static ::Dynamic MoveTo_dyn();
};

} // end namespace swf
} // end namespace exporters
} // end namespace animate

#endif /* INCLUDED_swf_exporters_animate_AnimateShapeCommand */ 
