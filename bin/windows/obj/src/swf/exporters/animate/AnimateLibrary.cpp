#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_AssetBundle
#include <lime/utils/AssetBundle.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display__BlendMode_BlendMode_Impl_
#include <openfl/display/_BlendMode/BlendMode_Impl_.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateBitmapSymbol
#include <swf/exporters/animate/AnimateBitmapSymbol.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateButtonSymbol
#include <swf/exporters/animate/AnimateButtonSymbol.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateDynamicTextSymbol
#include <swf/exporters/animate/AnimateDynamicTextSymbol.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateFontSymbol
#include <swf/exporters/animate/AnimateFontSymbol.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateFrame
#include <swf/exporters/animate/AnimateFrame.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateFrameObject
#include <swf/exporters/animate/AnimateFrameObject.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateLibrary
#include <swf/exporters/animate/AnimateLibrary.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateShapeCommand
#include <swf/exporters/animate/AnimateShapeCommand.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateShapeSymbol
#include <swf/exporters/animate/AnimateShapeSymbol.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateSpriteSymbol
#include <swf/exporters/animate/AnimateSpriteSymbol.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateStaticTextSymbol
#include <swf/exporters/animate/AnimateStaticTextSymbol.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateSymbol
#include <swf/exporters/animate/AnimateSymbol.h>
#endif
#ifndef INCLUDED_swf_exporters_core_FilterType
#include <swf/exporters/core/FilterType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_72_new,"swf.exporters.animate.AnimateLibrary","new",0x7efae341,"swf.exporters.animate.AnimateLibrary.new","swf/exporters/animate/AnimateLibrary.hx",72,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_99_bind,"swf.exporters.animate.AnimateLibrary","bind",0x94a067bc,"swf.exporters.animate.AnimateLibrary.bind","swf/exporters/animate/AnimateLibrary.hx",99,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_121_exists,"swf.exporters.animate.AnimateLibrary","exists",0x1e294d9b,"swf.exporters.animate.AnimateLibrary.exists","swf/exporters/animate/AnimateLibrary.hx",121,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_146_getImage,"swf.exporters.animate.AnimateLibrary","getImage",0x84040c64,"swf.exporters.animate.AnimateLibrary.getImage","swf/exporters/animate/AnimateLibrary.hx",146,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_181_getMovieClip,"swf.exporters.animate.AnimateLibrary","getMovieClip",0x59cba829,"swf.exporters.animate.AnimateLibrary.getMovieClip","swf/exporters/animate/AnimateLibrary.hx",181,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_213_isLocal,"swf.exporters.animate.AnimateLibrary","isLocal",0x37370482,"swf.exporters.animate.AnimateLibrary.isLocal","swf/exporters/animate/AnimateLibrary.hx",213,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_219_list,"swf.exporters.animate.AnimateLibrary","list",0x9b3c8e5d,"swf.exporters.animate.AnimateLibrary.list","swf/exporters/animate/AnimateLibrary.hx",219,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_310_load,"swf.exporters.animate.AnimateLibrary","load",0x9b410c25,"swf.exporters.animate.AnimateLibrary.load","swf/exporters/animate/AnimateLibrary.hx",310,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_249_load,"swf.exporters.animate.AnimateLibrary","load",0x9b410c25,"swf.exporters.animate.AnimateLibrary.load","swf/exporters/animate/AnimateLibrary.hx",249,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_239_load,"swf.exporters.animate.AnimateLibrary","load",0x9b410c25,"swf.exporters.animate.AnimateLibrary.load","swf/exporters/animate/AnimateLibrary.hx",239,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_354_load,"swf.exporters.animate.AnimateLibrary","load",0x9b410c25,"swf.exporters.animate.AnimateLibrary.load","swf/exporters/animate/AnimateLibrary.hx",354,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_355_load,"swf.exporters.animate.AnimateLibrary","load",0x9b410c25,"swf.exporters.animate.AnimateLibrary.load","swf/exporters/animate/AnimateLibrary.hx",355,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_404_loadImage,"swf.exporters.animate.AnimateLibrary","loadImage",0x5d3e5cf6,"swf.exporters.animate.AnimateLibrary.loadImage","swf/exporters/animate/AnimateLibrary.hx",404,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_421_loadImage,"swf.exporters.animate.AnimateLibrary","loadImage",0x5d3e5cf6,"swf.exporters.animate.AnimateLibrary.loadImage","swf/exporters/animate/AnimateLibrary.hx",421,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_420_loadImage,"swf.exporters.animate.AnimateLibrary","loadImage",0x5d3e5cf6,"swf.exporters.animate.AnimateLibrary.loadImage","swf/exporters/animate/AnimateLibrary.hx",420,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_447_unload,"swf.exporters.animate.AnimateLibrary","unload",0xc3d5d0be,"swf.exporters.animate.AnimateLibrary.unload","swf/exporters/animate/AnimateLibrary.hx",447,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_473___copyChannel,"swf.exporters.animate.AnimateLibrary","__copyChannel",0x47cc948f,"swf.exporters.animate.AnimateLibrary.__copyChannel","swf/exporters/animate/AnimateLibrary.hx",473,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_500___fromManifest,"swf.exporters.animate.AnimateLibrary","__fromManifest",0x94aee118,"swf.exporters.animate.AnimateLibrary.__fromManifest","swf/exporters/animate/AnimateLibrary.hx",500,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_516___load,"swf.exporters.animate.AnimateLibrary","__load",0x54f92d05,"swf.exporters.animate.AnimateLibrary.__load","swf/exporters/animate/AnimateLibrary.hx",516,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_523___loadImage,"swf.exporters.animate.AnimateLibrary","__loadImage",0x64031016,"swf.exporters.animate.AnimateLibrary.__loadImage","swf/exporters/animate/AnimateLibrary.hx",523,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_528___parseBitmap,"swf.exporters.animate.AnimateLibrary","__parseBitmap",0x912ed383,"swf.exporters.animate.AnimateLibrary.__parseBitmap","swf/exporters/animate/AnimateLibrary.hx",528,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_539___parseButton,"swf.exporters.animate.AnimateLibrary","__parseButton",0x7a032586,"swf.exporters.animate.AnimateLibrary.__parseButton","swf/exporters/animate/AnimateLibrary.hx",539,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_552___parseDynamicText,"swf.exporters.animate.AnimateLibrary","__parseDynamicText",0xdb5387b8,"swf.exporters.animate.AnimateLibrary.__parseDynamicText","swf/exporters/animate/AnimateLibrary.hx",552,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_580___parseFilters,"swf.exporters.animate.AnimateLibrary","__parseFilters",0x878effa7,"swf.exporters.animate.AnimateLibrary.__parseFilters","swf/exporters/animate/AnimateLibrary.hx",580,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_612___parseFont,"swf.exporters.animate.AnimateLibrary","__parseFont",0x56c95463,"swf.exporters.animate.AnimateLibrary.__parseFont","swf/exporters/animate/AnimateLibrary.hx",612,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_681___parseMatrix,"swf.exporters.animate.AnimateLibrary","__parseMatrix",0x5beaf9d5,"swf.exporters.animate.AnimateLibrary.__parseMatrix","swf/exporters/animate/AnimateLibrary.hx",681,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_685___parseShape,"swf.exporters.animate.AnimateLibrary","__parseShape",0x10ebae0d,"swf.exporters.animate.AnimateLibrary.__parseShape","swf/exporters/animate/AnimateLibrary.hx",685,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_734___parseSprite,"swf.exporters.animate.AnimateLibrary","__parseSprite",0x63b89f99,"swf.exporters.animate.AnimateLibrary.__parseSprite","swf/exporters/animate/AnimateLibrary.hx",734,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_794___parseStaticText,"swf.exporters.animate.AnimateLibrary","__parseStaticText",0x6233e20f,"swf.exporters.animate.AnimateLibrary.__parseStaticText","swf/exporters/animate/AnimateLibrary.hx",794,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_804___pixel,"swf.exporters.animate.AnimateLibrary","__pixel",0x4ec2b6c7,"swf.exporters.animate.AnimateLibrary.__pixel","swf/exporters/animate/AnimateLibrary.hx",804,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_141_get,"swf.exporters.animate.AnimateLibrary","get",0x7ef59377,"swf.exporters.animate.AnimateLibrary.get","swf/exporters/animate/AnimateLibrary.hx",141,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_364_loadFromBundle,"swf.exporters.animate.AnimateLibrary","loadFromBundle",0xb37f8911,"swf.exporters.animate.AnimateLibrary.loadFromBundle","swf/exporters/animate/AnimateLibrary.hx",364,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_383_loadFromBytes,"swf.exporters.animate.AnimateLibrary","loadFromBytes",0xd0f499bc,"swf.exporters.animate.AnimateLibrary.loadFromBytes","swf/exporters/animate/AnimateLibrary.hx",383,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_381_loadFromBytes,"swf.exporters.animate.AnimateLibrary","loadFromBytes",0xd0f499bc,"swf.exporters.animate.AnimateLibrary.loadFromBytes","swf/exporters/animate/AnimateLibrary.hx",381,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_395_loadFromFile,"swf.exporters.animate.AnimateLibrary","loadFromFile",0x8d4a924b,"swf.exporters.animate.AnimateLibrary.loadFromFile","swf/exporters/animate/AnimateLibrary.hx",395,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_393_loadFromFile,"swf.exporters.animate.AnimateLibrary","loadFromFile",0x8d4a924b,"swf.exporters.animate.AnimateLibrary.loadFromFile","swf/exporters/animate/AnimateLibrary.hx",393,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_43_boot,"swf.exporters.animate.AnimateLibrary","boot",0x94a4f631,"swf.exporters.animate.AnimateLibrary.boot","swf/exporters/animate/AnimateLibrary.hx",43,0xb2f566ac)
HX_LOCAL_STACK_FRAME(_hx_pos_4f566b3ccc8720d0_56_boot,"swf.exporters.animate.AnimateLibrary","boot",0x94a4f631,"swf.exporters.animate.AnimateLibrary.boot","swf/exporters/animate/AnimateLibrary.hx",56,0xb2f566ac)
namespace swf{
namespace exporters{
namespace animate{

void AnimateLibrary_obj::__construct(::String id,::String uuid){
            	HX_GC_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_72_new)
HXLINE(  73)		super::__construct();
HXLINE(  75)		this->id = id;
HXLINE(  77)		::String _hx_tmp;
HXDLIN(  77)		if (::hx::IsNotNull( uuid )) {
HXLINE(  77)			_hx_tmp = uuid;
            		}
            		else {
HXLINE(  77)			_hx_tmp = id;
            		}
HXDLIN(  77)		this->instanceID = _hx_tmp;
HXLINE(  79)		this->alphaCheck =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  80)		this->bitmapClassNames =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  85)		this->rootPath = HX_("",00,00,00,00);
HXLINE(  88)		::swf::exporters::animate::AnimateLibrary_obj::instances->set(uuid,::hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic AnimateLibrary_obj::__CreateEmpty() { return new AnimateLibrary_obj; }

void *AnimateLibrary_obj::_hx_vtable = 0;

Dynamic AnimateLibrary_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimateLibrary_obj > _hx_result = new AnimateLibrary_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AnimateLibrary_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12db4ee4) {
		if (inClassId<=(int)0x03f42eab) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x03f42eab;
		} else {
			return inClassId==(int)0x12db4ee4;
		}
	} else {
		return inClassId==(int)0x25654723;
	}
}

bool AnimateLibrary_obj::bind(::String className, ::Dynamic instance){
            	HX_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_99_bind)
HXLINE( 101)		 ::swf::exporters::animate::AnimateSymbol symbol = ( ( ::swf::exporters::animate::AnimateSymbol)(this->symbolsByClassName->get(className)) );
HXLINE( 102)		if (::hx::IsNotNull( symbol )) {
HXLINE( 104)			if (::hx::IsNotNull( instance )) {
HXLINE( 106)				symbol->_hx___initObject(::hx::ObjectPtr<OBJ_>(this),( ( ::openfl::display::DisplayObject)(instance) ));
            			}
            			else {
HXLINE( 110)				symbol->_hx___init(::hx::ObjectPtr<OBJ_>(this));
            			}
HXLINE( 112)			return true;
            		}
HXLINE( 115)		return false;
            	}


bool AnimateLibrary_obj::exists(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_121_exists)
HXLINE( 122)		if (::hx::IsNotNull( this->symbols )) {
HXLINE( 124)			bool _hx_tmp;
HXDLIN( 124)			if ((id == HX_("",00,00,00,00))) {
HXLINE( 124)				_hx_tmp = (type == HX_("MOVIE_CLIP",1f,e1,aa,77));
            			}
            			else {
HXLINE( 124)				_hx_tmp = false;
            			}
HXDLIN( 124)			if (_hx_tmp) {
HXLINE( 126)				return true;
            			}
HXLINE( 129)			bool _hx_tmp1;
HXDLIN( 129)			bool _hx_tmp2;
HXDLIN( 129)			if (::hx::IsNotNull( type )) {
HXLINE( 129)				_hx_tmp2 = (type == HX_("IMAGE",3b,57,57,3b));
            			}
            			else {
HXLINE( 129)				_hx_tmp2 = true;
            			}
HXDLIN( 129)			if (!(_hx_tmp2)) {
HXLINE( 129)				_hx_tmp1 = (type == HX_("MOVIE_CLIP",1f,e1,aa,77));
            			}
            			else {
HXLINE( 129)				_hx_tmp1 = true;
            			}
HXDLIN( 129)			if (_hx_tmp1) {
HXLINE( 131)				if (::hx::IsNotNull( this->symbolsByClassName )) {
HXLINE( 131)					return this->symbolsByClassName->exists(id);
            				}
            				else {
HXLINE( 131)					return false;
            				}
            			}
            		}
HXLINE( 135)		return this->super::exists(id,type);
            	}


 ::lime::graphics::Image AnimateLibrary_obj::getImage(::String id){
            	HX_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_146_getImage)
HXLINE( 147)		if (this->bitmapClassNames->exists(id)) {
HXLINE( 149)			id = this->bitmapClassNames->get_string(id);
            		}
HXLINE( 154)		if (!(this->alphaCheck->exists(id))) {
HXLINE( 156)			{
HXLINE( 156)				int _g = 0;
HXDLIN( 156)				::Array< ::Dynamic> _g1 = this->bitmapSymbols;
HXDLIN( 156)				while((_g < _g1->length)){
HXLINE( 156)					 ::swf::exporters::animate::AnimateBitmapSymbol bitmapSymbol = _g1->__get(_g).StaticCast<  ::swf::exporters::animate::AnimateBitmapSymbol >();
HXDLIN( 156)					_g = (_g + 1);
HXLINE( 158)					bool _hx_tmp;
HXDLIN( 158)					if ((bitmapSymbol->path == id)) {
HXLINE( 158)						_hx_tmp = ::hx::IsNotNull( bitmapSymbol->alpha );
            					}
            					else {
HXLINE( 158)						_hx_tmp = false;
            					}
HXDLIN( 158)					if (_hx_tmp) {
HXLINE( 160)						 ::lime::graphics::Image image = this->super::getImage(id);
HXLINE( 161)						 ::lime::graphics::Image alpha = this->super::getImage(bitmapSymbol->alpha);
HXLINE( 163)						this->_hx___copyChannel(image,alpha);
HXLINE( 165)						this->cachedImages->set(id,image);
HXLINE( 166)						this->cachedImages->remove(bitmapSymbol->alpha);
HXLINE( 167)						this->alphaCheck->set(id,true);
HXLINE( 169)						return image;
            					}
            				}
            			}
HXLINE( 172)			this->alphaCheck->set(id,true);
            		}
HXLINE( 175)		return this->super::getImage(id);
            	}


 ::openfl::display::MovieClip AnimateLibrary_obj::getMovieClip(::String id){
            	HX_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_181_getMovieClip)
HXLINE( 182)		if (::hx::IsNull( this->symbols )) {
HXLINE( 182)			return null();
            		}
HXLINE( 184)		if ((id == HX_("",00,00,00,00))) {
HXLINE( 186)			return ( ( ::openfl::display::MovieClip)(Dynamic( this->root->_hx___createObject(::hx::ObjectPtr<OBJ_>(this))).StaticCast<  ::openfl::display::Sprite >()) );
            		}
            		else {
HXLINE( 190)			 ::swf::exporters::animate::AnimateSymbol symbol = ( ( ::swf::exporters::animate::AnimateSymbol)(this->symbolsByClassName->get(id)) );
HXLINE( 191)			if (::hx::IsNotNull( symbol )) {
HXLINE( 193)				if (::Std_obj::isOfType(symbol,::hx::ClassOf< ::swf::exporters::animate::AnimateSpriteSymbol >())) {
HXLINE( 195)					 ::openfl::display::Sprite sprite = Dynamic( ::hx::TCast<  ::swf::exporters::animate::AnimateSpriteSymbol >::cast(symbol)->_hx___createObject(::hx::ObjectPtr<OBJ_>(this))).StaticCast<  ::openfl::display::Sprite >();
HXLINE( 196)					if (::Std_obj::isOfType(sprite,::hx::ClassOf< ::openfl::display::MovieClip >())) {
HXLINE( 200)						return ( ( ::openfl::display::MovieClip)(sprite) );
            					}
            				}
            			}
            		}
HXLINE( 206)		return null();
            	}


bool AnimateLibrary_obj::isLocal(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_213_isLocal)
HXDLIN( 213)		return true;
            	}


::Array< ::String > AnimateLibrary_obj::list(::String type){
            	HX_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_219_list)
HXLINE( 220)		::String requestedType;
HXDLIN( 220)		if (::hx::IsNotNull( type )) {
HXLINE( 220)			requestedType = type;
            		}
            		else {
HXLINE( 220)			requestedType = null();
            		}
HXLINE( 221)		::Array< ::String > items = ::Array_obj< ::String >::__new(0);
HXLINE( 223)		if (::hx::IsNotNull( this->symbolsByClassName )) {
HXLINE( 225)			items->push(HX_("",00,00,00,00));
HXLINE( 227)			{
HXLINE( 227)				 ::Dynamic id = this->symbolsByClassName->keys();
HXDLIN( 227)				while(( (bool)(id->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 227)					::String id1 = ( (::String)(id->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 229)					items->push(id1);
            				}
            			}
            		}
HXLINE( 233)		return items;
            	}


 ::lime::app::Future AnimateLibrary_obj::load(){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::swf::exporters::animate::AnimateLibrary,_gthis, ::lime::app::Promise,promise) HXARGC(1)
            		void _hx_run(::String data){
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::swf::exporters::animate::AnimateLibrary,_gthis, ::lime::app::Promise,promise) HXARGC(1)
            			void _hx_run( ::lime::utils::AssetLibrary _){
            				HX_GC_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_310_load)
HXLINE( 311)				_gthis->preloading = false;
HXLINE( 312)				promise->complete(_gthis);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_249_load)
HXLINE( 250)			_gthis->cachedText->set(_gthis->id,data);
HXLINE( 252)			 ::Dynamic json =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,data)->doParse();
HXLINE( 253)			 ::Dynamic version =  ::Dynamic(json->__Field(HX_("version",18,e7,f1,7c),::hx::paccDynamic));
HXLINE( 254)			_gthis->frameRate = ( (Float)(json->__Field(HX_("frameRate",ad,11,25,39),::hx::paccDynamic)) );
HXLINE( 256)			int rootIndex = ( (int)(json->__Field(HX_("root",22,ee,ae,4b),::hx::paccDynamic)) );
HXLINE( 257)			::cpp::VirtualArray symbolData = ( (::cpp::VirtualArray)(json->__Field(HX_("symbols",1b,be,1b,13),::hx::paccDynamic)) );
HXLINE( 259)			 ::Dynamic data1;
HXDLIN( 259)			int type;
HXDLIN( 259)			 ::swf::exporters::animate::AnimateSymbol symbol = null();
HXLINE( 260)			 ::swf::exporters::animate::AnimateBitmapSymbol bitmapSymbol;
HXDLIN( 260)			 ::swf::exporters::animate::AnimateSpriteSymbol spriteSymbol;
HXLINE( 262)			_gthis->symbols =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 263)			_gthis->symbolsByClassName =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 264)			_gthis->bitmapSymbols = ::Array_obj< ::Dynamic>::__new();
HXLINE( 266)			{
HXLINE( 266)				int _g = 0;
HXDLIN( 266)				int _g1 = symbolData->get_length();
HXDLIN( 266)				while((_g < _g1)){
HXLINE( 266)					_g = (_g + 1);
HXDLIN( 266)					int i = (_g - 1);
HXLINE( 268)					data1 = symbolData->__get(i);
HXLINE( 269)					if (::hx::IsNull( data1 )) {
HXLINE( 269)						continue;
            					}
HXLINE( 270)					type = ( (int)(data1->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)) );
HXLINE( 272)					switch((int)(type)){
            						case (int)0: {
HXLINE( 275)							bitmapSymbol = _gthis->_hx___parseBitmap(data1);
HXLINE( 276)							_gthis->bitmapSymbols->push(bitmapSymbol);
HXLINE( 277)							if (::hx::IsNotNull( bitmapSymbol->className )) {
HXLINE( 277)								_gthis->bitmapClassNames->set(bitmapSymbol->className,bitmapSymbol->path);
            							}
HXLINE( 278)							symbol = bitmapSymbol;
            						}
            						break;
            						case (int)1: {
HXLINE( 280)							symbol = _gthis->_hx___parseButton(data1);
            						}
            						break;
            						case (int)2: {
HXLINE( 282)							symbol = _gthis->_hx___parseDynamicText(data1);
            						}
            						break;
            						case (int)3: {
HXLINE( 284)							symbol = _gthis->_hx___parseFont(data1);
            						}
            						break;
            						case (int)4: {
HXLINE( 286)							symbol = _gthis->_hx___parseShape(data1);
            						}
            						break;
            						case (int)5: {
HXLINE( 288)							spriteSymbol = _gthis->_hx___parseSprite(data1);
HXLINE( 289)							if ((i == rootIndex)) {
HXLINE( 289)								_gthis->root = spriteSymbol;
            							}
HXLINE( 290)							symbol = spriteSymbol;
            						}
            						break;
            						case (int)6: {
HXLINE( 292)							symbol = _gthis->_hx___parseStaticText(data1);
            						}
            						break;
            						default:{
            						}
            					}
HXLINE( 296)					if (::hx::IsNull( symbol )) {
HXLINE( 296)						continue;
            					}
HXLINE( 297)					_gthis->symbols->set(symbol->id,symbol);
HXLINE( 298)					if (::hx::IsNotNull( symbol->className )) {
HXLINE( 300)						_gthis->symbolsByClassName->set(symbol->className,symbol);
HXLINE( 302)						::openfl::utils::Assets_obj::registerBinding(symbol->className,_gthis);
            					}
            				}
            			}
HXLINE( 309)			_gthis->_hx___load()->onProgress(promise->progress_dyn())->onError(promise->error_dyn())->onComplete( ::Dynamic(new _hx_Closure_0(_gthis,promise)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_239_load)
HXDLIN( 239)		 ::swf::exporters::animate::AnimateLibrary _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 240)		if (::hx::IsNotNull( this->id )) {
HXLINE( 242)			this->preload->set(this->id,true);
            		}
HXLINE( 245)		 ::lime::app::Promise promise =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE( 246)		this->preloading = true;
HXLINE( 248)		 ::Dynamic onComplete =  ::Dynamic(new _hx_Closure_1(_gthis,promise));
HXLINE( 316)		bool _hx_tmp;
HXDLIN( 316)		if (!(this->exists(this->id,HX_("TEXT",ad,94,ba,37)))) {
HXLINE( 316)			_hx_tmp = this->exists(this->id,HX_("BINARY",01,68,8e,9f));
            		}
            		else {
HXLINE( 316)			_hx_tmp = true;
            		}
HXDLIN( 316)		if (_hx_tmp) {
HXLINE( 333)			this->loadText(this->id)->onError(promise->error_dyn())->onComplete(onComplete);
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2, ::openfl::net::URLLoader,loader, ::Dynamic,onComplete) HXARGC(1)
            			void _hx_run( ::openfl::events::Event _){
            				HX_GC_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_354_load)
HXLINE( 354)				onComplete(loader->data);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::lime::app::Promise,promise) HXARGC(1)
            			void _hx_run( ::openfl::events::IOErrorEvent e){
            				HX_GC_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_355_load)
HXLINE( 355)				promise->error(e);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 337)			{
HXLINE( 337)				 ::Dynamic id = this->paths->keys();
HXDLIN( 337)				while(( (bool)(id->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 337)					::String id1 = ( (::String)(id->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 339)					this->preload->set(id1,true);
            				}
            			}
HXLINE( 342)			::String path = null();
HXLINE( 344)			if (this->paths->exists(this->id)) {
HXLINE( 346)				path = this->paths->get_string(this->id);
            			}
            			else {
HXLINE( 350)				bool path1;
HXDLIN( 350)				if (::hx::IsNotNull( this->rootPath )) {
HXLINE( 350)					path1 = (this->rootPath != HX_("",00,00,00,00));
            				}
            				else {
HXLINE( 350)					path1 = false;
            				}
HXDLIN( 350)				if (path1) {
HXLINE( 350)					path = ((this->rootPath + HX_("/",2f,00,00,00)) + this->id);
            				}
            				else {
HXLINE( 350)					path = this->id;
            				}
            			}
HXLINE( 353)			 ::openfl::net::URLLoader loader =  ::openfl::net::URLLoader_obj::__alloc( HX_CTX ,null());
HXLINE( 354)			loader->addEventListener(HX_("complete",b9,00,c8,7f), ::Dynamic(new _hx_Closure_2(loader,onComplete)),null(),null(),null());
HXLINE( 355)			loader->addEventListener(HX_("ioError",02,fe,41,76), ::Dynamic(new _hx_Closure_3(promise)),null(),null(),null());
HXLINE( 356)			 ::openfl::net::URLLoader loader1 = loader;
HXDLIN( 356)			loader1->load( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,path));
            		}
HXLINE( 359)		return promise->future;
            	}


 ::lime::app::Future AnimateLibrary_obj::loadImage(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_404_loadImage)
HXDLIN( 404)		::Array< ::String > id1 = ::Array_obj< ::String >::__new(1)->init(0,id);
HXDLIN( 404)		 ::swf::exporters::animate::AnimateLibrary _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 405)		if (this->bitmapClassNames->exists(id1->__get(0))) {
HXLINE( 407)			id1[0] = this->bitmapClassNames->get_string(id1->__get(0));
            		}
HXLINE( 410)		bool _hx_tmp;
HXDLIN( 410)		if (!(this->preloading)) {
HXLINE( 410)			_hx_tmp = !(this->alphaCheck->exists(id1->__get(0)));
            		}
            		else {
HXLINE( 410)			_hx_tmp = false;
            		}
HXDLIN( 410)		if (_hx_tmp) {
HXLINE( 412)			int _g = 0;
HXDLIN( 412)			::Array< ::Dynamic> _g1 = this->bitmapSymbols;
HXDLIN( 412)			while((_g < _g1->length)){
HXLINE( 412)				 ::swf::exporters::animate::AnimateBitmapSymbol bitmapSymbol = _g1->__get(_g).StaticCast<  ::swf::exporters::animate::AnimateBitmapSymbol >();
HXDLIN( 412)				_g = (_g + 1);
HXLINE( 414)				bool _hx_tmp;
HXDLIN( 414)				if ((bitmapSymbol->path == id1->__get(0))) {
HXLINE( 414)					_hx_tmp = ::hx::IsNotNull( bitmapSymbol->alpha );
            				}
            				else {
HXLINE( 414)					_hx_tmp = false;
            				}
HXDLIN( 414)				if (_hx_tmp) {
            					HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_1,::Array< ::String >,id1, ::swf::exporters::animate::AnimateLibrary,_gthis, ::lime::app::Promise,promise, ::swf::exporters::animate::AnimateBitmapSymbol,bitmapSymbol) HXARGC(1)
            					void _hx_run( ::lime::graphics::Image image){
            						HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_0,::Array< ::String >,id1, ::swf::exporters::animate::AnimateLibrary,_gthis, ::lime::app::Promise,promise, ::swf::exporters::animate::AnimateBitmapSymbol,bitmapSymbol, ::lime::graphics::Image,image) HXARGC(1)
            						void _hx_run( ::lime::graphics::Image alpha){
            							HX_GC_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_421_loadImage)
HXLINE( 422)							_gthis->_hx___copyChannel(image,alpha);
HXLINE( 424)							_gthis->cachedImages->set(id1->__get(0),image);
HXLINE( 425)							_gthis->cachedImages->remove(bitmapSymbol->alpha);
HXLINE( 426)							_gthis->alphaCheck->set(id1->__get(0),true);
HXLINE( 428)							promise->complete(image);
            						}
            						HX_END_LOCAL_FUNC1((void))

            						HX_GC_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_420_loadImage)
HXLINE( 420)						_gthis->_hx___loadImage(bitmapSymbol->alpha)->onError(promise->error_dyn())->onComplete( ::Dynamic(new _hx_Closure_0(id1,_gthis,promise,bitmapSymbol,image)));
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 416)					 ::lime::app::Promise promise =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE( 418)					this->_hx___loadImage(id1->__get(0))->onError(promise->error_dyn())->onComplete( ::Dynamic(new _hx_Closure_1(id1,_gthis,promise,bitmapSymbol)));
HXLINE( 432)					return promise->future;
            				}
            				else {
HXLINE( 436)					this->alphaCheck->set(id1->__get(0),true);
            				}
            			}
            		}
HXLINE( 441)		return this->super::loadImage(id1->__get(0));
            	}


void AnimateLibrary_obj::unload(){
            	HX_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_447_unload)
HXLINE( 448)		::swf::exporters::animate::AnimateLibrary_obj::instances->remove(this->uuid);
HXLINE( 449)		if (::hx::IsNull( this->symbols )) {
HXLINE( 449)			return;
            		}
HXLINE( 458)		{
HXLINE( 458)			 ::Dynamic className = this->symbolsByClassName->keys();
HXDLIN( 458)			while(( (bool)(className->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 458)				::String className1 = ( (::String)(className->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 460)				::openfl::utils::Assets_obj::unregisterBinding(className1,::hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE( 464)		{
HXLINE( 464)			int _g = 0;
HXDLIN( 464)			::Array< ::Dynamic> _g1 = this->bitmapSymbols;
HXDLIN( 464)			while((_g < _g1->length)){
HXLINE( 464)				 ::swf::exporters::animate::AnimateBitmapSymbol bitmapSymbol = _g1->__get(_g).StaticCast<  ::swf::exporters::animate::AnimateBitmapSymbol >();
HXDLIN( 464)				_g = (_g + 1);
HXLINE( 466)				::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,bitmapSymbol->path);
            			}
            		}
            	}


void AnimateLibrary_obj::_hx___copyChannel( ::lime::graphics::Image image, ::lime::graphics::Image alpha){
            	HX_GC_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_473___copyChannel)
HXLINE( 474)		if (::hx::IsNotNull( alpha )) {
HXLINE( 476)			if (!(image->get_transparent())) {
HXLINE( 483)				image->set_transparent(true);
            			}
HXLINE( 487)			 ::lime::math::Rectangle _hx_tmp = alpha->get_rect();
HXDLIN( 487)			image->copyChannel(alpha,_hx_tmp, ::lime::math::Vector2_obj::__alloc( HX_CTX ,null(),null()),::lime::graphics::ImageChannel_obj::RED_dyn(),::lime::graphics::ImageChannel_obj::ALPHA_dyn());
            		}
HXLINE( 490)		image->buffer->premultiplied = true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(AnimateLibrary_obj,_hx___copyChannel,(void))

void AnimateLibrary_obj::_hx___fromManifest( ::lime::utils::AssetManifest manifest){
            	HX_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_500___fromManifest)
HXLINE( 501)		this->rootPath = manifest->rootPath;
HXLINE( 502)		this->super::_hx___fromManifest(manifest);
HXLINE( 504)		this->bytesTotal = 0;
HXLINE( 506)		{
HXLINE( 506)			 ::Dynamic id = this->paths->keys();
HXDLIN( 506)			while(( (bool)(id->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 506)				::String id1 = ( (::String)(id->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 508)				 ::swf::exporters::animate::AnimateLibrary _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 508)				int _hx_tmp1 = _hx_tmp->bytesTotal;
HXDLIN( 508)				_hx_tmp->bytesTotal = (_hx_tmp1 + this->sizes->get(id1));
            			}
            		}
            	}


 ::lime::app::Future AnimateLibrary_obj::_hx___load(){
            	HX_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_516___load)
HXDLIN( 516)		return this->super::load();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimateLibrary_obj,_hx___load,return )

 ::lime::app::Future AnimateLibrary_obj::_hx___loadImage(::String id){
            	HX_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_523___loadImage)
HXDLIN( 523)		return this->super::loadImage(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimateLibrary_obj,_hx___loadImage,return )

 ::swf::exporters::animate::AnimateBitmapSymbol AnimateLibrary_obj::_hx___parseBitmap( ::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_528___parseBitmap)
HXLINE( 529)		 ::swf::exporters::animate::AnimateBitmapSymbol symbol =  ::swf::exporters::animate::AnimateBitmapSymbol_obj::__alloc( HX_CTX );
HXLINE( 530)		symbol->id = ( (int)(data->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) );
HXLINE( 531)		symbol->className = ( (::String)(data->__Field(HX_("className",a3,92,3d,dc),::hx::paccDynamic)) );
HXLINE( 532)		symbol->alpha = ( (::String)(data->__Field(HX_("alpha",5e,a7,96,21),::hx::paccDynamic)) );
HXLINE( 533)		symbol->path = ( (::String)(data->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic)) );
HXLINE( 534)		symbol->smooth = data->__Field(HX_("smooth",2e,08,6b,07),::hx::paccDynamic);
HXLINE( 535)		return symbol;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimateLibrary_obj,_hx___parseBitmap,return )

 ::swf::exporters::animate::AnimateButtonSymbol AnimateLibrary_obj::_hx___parseButton( ::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_539___parseButton)
HXLINE( 540)		 ::swf::exporters::animate::AnimateButtonSymbol symbol =  ::swf::exporters::animate::AnimateButtonSymbol_obj::__alloc( HX_CTX );
HXLINE( 541)		symbol->id = ( (int)(data->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) );
HXLINE( 542)		symbol->className = ( (::String)(data->__Field(HX_("className",a3,92,3d,dc),::hx::paccDynamic)) );
HXLINE( 544)		symbol->downState = this->_hx___parseSprite( ::Dynamic(data->__Field(HX_("downState",4f,4a,21,9a),::hx::paccDynamic)));
HXLINE( 545)		symbol->hitState = this->_hx___parseSprite( ::Dynamic(data->__Field(HX_("hitState",be,d2,6a,c3),::hx::paccDynamic)));
HXLINE( 546)		symbol->overState = this->_hx___parseSprite( ::Dynamic(data->__Field(HX_("overState",1d,04,cd,e7),::hx::paccDynamic)));
HXLINE( 547)		symbol->upState = this->_hx___parseSprite( ::Dynamic(data->__Field(HX_("upState",b6,95,80,e0),::hx::paccDynamic)));
HXLINE( 548)		return symbol;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimateLibrary_obj,_hx___parseButton,return )

 ::swf::exporters::animate::AnimateDynamicTextSymbol AnimateLibrary_obj::_hx___parseDynamicText( ::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_552___parseDynamicText)
HXLINE( 553)		 ::swf::exporters::animate::AnimateDynamicTextSymbol symbol =  ::swf::exporters::animate::AnimateDynamicTextSymbol_obj::__alloc( HX_CTX );
HXLINE( 554)		symbol->id = ( (int)(data->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) );
HXLINE( 555)		symbol->align = ( (::String)(data->__Field(HX_("align",c5,56,91,21),::hx::paccDynamic)) );
HXLINE( 556)		symbol->border = ( (bool)(data->__Field(HX_("border",ec,4c,1a,64),::hx::paccDynamic)) );
HXLINE( 557)		symbol->color = data->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
HXLINE( 558)		symbol->fontHeight = ( (int)(data->__Field(HX_("fontHeight",16,9f,9f,b6),::hx::paccDynamic)) );
HXLINE( 559)		symbol->fontID = ( (int)(data->__Field(HX_("fontID",6a,ef,ee,fa),::hx::paccDynamic)) );
HXLINE( 560)		symbol->fontName = ( (::String)(data->__Field(HX_("fontName",ba,8f,7d,cb),::hx::paccDynamic)) );
HXLINE( 561)		symbol->html = ( (bool)(data->__Field(HX_("html",6b,95,16,45),::hx::paccDynamic)) );
HXLINE( 562)		symbol->indent = data->__Field(HX_("indent",6c,0c,f3,93),::hx::paccDynamic);
HXLINE( 563)		symbol->input = ( (bool)(data->__Field(HX_("input",0a,c4,1d,be),::hx::paccDynamic)) );
HXLINE( 564)		symbol->leading = data->__Field(HX_("leading",c6,32,61,09),::hx::paccDynamic);
HXLINE( 565)		symbol->leftMargin = data->__Field(HX_("leftMargin",95,2b,7e,e9),::hx::paccDynamic);
HXLINE( 566)		symbol->multiline = ( (bool)(data->__Field(HX_("multiline",ed,d2,11,9e),::hx::paccDynamic)) );
HXLINE( 567)		symbol->password = ( (bool)(data->__Field(HX_("password",1b,23,d0,48),::hx::paccDynamic)) );
HXLINE( 568)		symbol->rightMargin = data->__Field(HX_("rightMargin",2a,3d,f2,23),::hx::paccDynamic);
HXLINE( 569)		symbol->selectable = ( (bool)(data->__Field(HX_("selectable",96,b6,2a,c4),::hx::paccDynamic)) );
HXLINE( 570)		symbol->text = ( (::String)(data->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) );
HXLINE( 571)		symbol->wordWrap = ( (bool)(data->__Field(HX_("wordWrap",b4,14,db,00),::hx::paccDynamic)) );
HXLINE( 572)		symbol->x = (( (Float)( ::Dynamic(data->__Field(HX_("rect",24,4d,a7,4b),::hx::paccDynamic))->__GetItem(0)) ) / ( (Float)(20) ));
HXLINE( 573)		symbol->y = (( (Float)( ::Dynamic(data->__Field(HX_("rect",24,4d,a7,4b),::hx::paccDynamic))->__GetItem(1)) ) / ( (Float)(20) ));
HXLINE( 574)		symbol->width = (( (Float)( ::Dynamic(data->__Field(HX_("rect",24,4d,a7,4b),::hx::paccDynamic))->__GetItem(2)) ) / ( (Float)(20) ));
HXLINE( 575)		symbol->height = (( (Float)( ::Dynamic(data->__Field(HX_("rect",24,4d,a7,4b),::hx::paccDynamic))->__GetItem(3)) ) / ( (Float)(20) ));
HXLINE( 576)		return symbol;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimateLibrary_obj,_hx___parseDynamicText,return )

::Array< ::Dynamic> AnimateLibrary_obj::_hx___parseFilters(::Array< ::Dynamic> filters){
            	HX_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_580___parseFilters)
HXLINE( 581)		if (::hx::IsNull( filters )) {
HXLINE( 581)			return null();
            		}
HXLINE( 583)		::Array< ::Dynamic> result = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 585)		{
HXLINE( 585)			int _g = 0;
HXDLIN( 585)			while((_g < filters->length)){
HXLINE( 585)				::cpp::VirtualArray filter = ::cpp::VirtualArray( filters->__get(_g));
HXDLIN( 585)				_g = (_g + 1);
HXLINE( 587)				bool _hx_tmp;
HXDLIN( 587)				if (::hx::IsNotNull( filter )) {
HXLINE( 587)					_hx_tmp = (filter->get_length() == 0);
            				}
            				else {
HXLINE( 587)					_hx_tmp = true;
            				}
HXDLIN( 587)				if (_hx_tmp) {
HXLINE( 587)					continue;
            				}
HXLINE( 589)				 ::Dynamic _hx_switch_0 = filter->__get(0);
            				if (  (_hx_switch_0==0) ){
HXLINE( 592)					result->push(::swf::exporters::core::FilterType_obj::BlurFilter(filter->__get(1),filter->__get(2),filter->__get(3)));
HXDLIN( 592)					goto _hx_goto_32;
            				}
            				if (  (_hx_switch_0==1) ){
HXLINE( 595)					result->push(::swf::exporters::core::FilterType_obj::ColorMatrixFilter(filter->__get(1)));
HXDLIN( 595)					goto _hx_goto_32;
            				}
            				if (  (_hx_switch_0==2) ){
HXLINE( 598)					result->push(::swf::exporters::core::FilterType_obj::DropShadowFilter(filter->__get(1),filter->__get(2),filter->__get(3),filter->__get(4),filter->__get(5),filter->__get(6),filter->__get(7),filter->__get(8),filter->__get(9),filter->__get(10),filter->__get(11)));
HXDLIN( 598)					goto _hx_goto_32;
            				}
            				if (  (_hx_switch_0==3) ){
HXLINE( 602)					result->push(::swf::exporters::core::FilterType_obj::GlowFilter(filter->__get(1),filter->__get(2),filter->__get(3),filter->__get(4),filter->__get(5),filter->__get(6),filter->__get(7),filter->__get(8)));
HXDLIN( 602)					goto _hx_goto_32;
            				}
            				/* default */{
            				}
            				_hx_goto_32:;
            			}
            		}
HXLINE( 608)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimateLibrary_obj,_hx___parseFilters,return )

 ::swf::exporters::animate::AnimateFontSymbol AnimateLibrary_obj::_hx___parseFont( ::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_612___parseFont)
HXLINE( 613)		 ::swf::exporters::animate::AnimateFontSymbol symbol =  ::swf::exporters::animate::AnimateFontSymbol_obj::__alloc( HX_CTX );
HXLINE( 614)		symbol->id = ( (int)(data->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) );
HXLINE( 615)		symbol->advances = ( (::Array< int >)(data->__Field(HX_("advances",b1,69,7b,3b),::hx::paccDynamic)) );
HXLINE( 616)		symbol->ascent = ( (int)(data->__Field(HX_("ascent",5a,d9,6f,41),::hx::paccDynamic)) );
HXLINE( 617)		symbol->bold = ( (bool)(data->__Field(HX_("bold",85,81,1b,41),::hx::paccDynamic)) );
HXLINE( 618)		symbol->codes = ( (::Array< int >)(data->__Field(HX_("codes",a6,56,56,4a),::hx::paccDynamic)) );
HXLINE( 619)		symbol->descent = ( (int)(data->__Field(HX_("descent",3a,ae,3f,19),::hx::paccDynamic)) );
HXLINE( 620)		symbol->italic = ( (bool)(data->__Field(HX_("italic",f0,2e,64,06),::hx::paccDynamic)) );
HXLINE( 621)		symbol->leading = ( (int)(data->__Field(HX_("leading",c6,32,61,09),::hx::paccDynamic)) );
HXLINE( 622)		symbol->name = ( (::String)(data->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE( 623)		if (::Reflect_obj::hasField(data,HX_("glyphs",47,f9,58,ae))) {
HXLINE( 625)			symbol->glyphs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 626)			::Array< ::Dynamic> glyphs = ( (::Array< ::Dynamic>)(data->__Field(HX_("glyphs",47,f9,58,ae),::hx::paccDynamic)) );
HXLINE( 627)			{
HXLINE( 627)				int _g = 0;
HXDLIN( 627)				int _g1 = glyphs->length;
HXDLIN( 627)				while((_g < _g1)){
HXLINE( 627)					_g = (_g + 1);
HXDLIN( 627)					int glyphIndex = (_g - 1);
HXLINE( 629)					::cpp::VirtualArray data = ::cpp::VirtualArray( glyphs->__get(glyphIndex));
HXLINE( 630)					if (::hx::IsNotNull( data )) {
HXLINE( 632)						::Array< ::Dynamic> commands = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 633)						symbol->glyphs[glyphIndex] = commands;
HXLINE( 634)						int i = 0;
HXLINE( 636)						while((i < data->get_length())){
HXLINE( 638)							 ::Dynamic _hx_switch_0 = data->__get(i);
            							if (  (_hx_switch_0==0) ){
HXLINE( 641)								 ::Dynamic data1 = data->__get((i + 1));
HXDLIN( 641)								 ::openfl::geom::Matrix _hx_tmp = this->_hx___parseMatrix(( (::Array< Float >)(data->__get((i + 2))) ));
HXDLIN( 641)								commands->push(::swf::exporters::animate::AnimateShapeCommand_obj::BeginBitmapFill(data1,_hx_tmp,data->__get((i + 3)),data->__get((i + 4))));
HXLINE( 642)								i = (i + 5);
HXLINE( 640)								goto _hx_goto_36;
            							}
            							if (  (_hx_switch_0==1) ){
HXLINE( 644)								commands->push(::swf::exporters::animate::AnimateShapeCommand_obj::BeginFill(data->__get((i + 1)),data->__get((i + 2))));
HXLINE( 645)								i = (i + 3);
HXLINE( 643)								goto _hx_goto_36;
            							}
            							if (  (_hx_switch_0==2) ){
HXLINE( 647)								 ::Dynamic data1 = data->__get((i + 1));
HXDLIN( 647)								 ::Dynamic data2 = data->__get((i + 2));
HXDLIN( 647)								 ::Dynamic data3 = data->__get((i + 3));
HXDLIN( 647)								 ::Dynamic data4 = data->__get((i + 4));
HXDLIN( 647)								 ::openfl::geom::Matrix _hx_tmp = this->_hx___parseMatrix(( (::Array< Float >)(data->__get((i + 5))) ));
HXDLIN( 647)								commands->push(::swf::exporters::animate::AnimateShapeCommand_obj::BeginGradientFill(data1,data2,data3,data4,_hx_tmp,data->__get((i + 6)),data->__get((i + 7)),data->__get((i + 8))));
HXLINE( 649)								i = (i + 9);
HXLINE( 646)								goto _hx_goto_36;
            							}
            							if (  (_hx_switch_0==3) ){
HXLINE( 651)								commands->push(::swf::exporters::animate::AnimateShapeCommand_obj::LineStyle(null(),null(),null(),null(),null(),null(),null(),null()));
HXLINE( 652)								i = (i + 1);
HXLINE( 650)								goto _hx_goto_36;
            							}
            							if (  (_hx_switch_0==4) ){
HXLINE( 654)								commands->push(::swf::exporters::animate::AnimateShapeCommand_obj::CurveTo((( (Float)(( (int)(data->__get((i + 1))) )) ) / ( (Float)(20) )),(( (Float)(( (int)(data->__get((i + 2))) )) ) / ( (Float)(20) )),(( (Float)(( (int)(data->__get((i + 3))) )) ) / ( (Float)(20) )),(( (Float)(( (int)(data->__get((i + 4))) )) ) / ( (Float)(20) ))));
HXLINE( 655)								i = (i + 5);
HXLINE( 653)								goto _hx_goto_36;
            							}
            							if (  (_hx_switch_0==5) ){
HXLINE( 657)								commands->push(::swf::exporters::animate::AnimateShapeCommand_obj::EndFill_dyn());
HXLINE( 658)								i = (i + 1);
HXLINE( 656)								goto _hx_goto_36;
            							}
            							if (  (_hx_switch_0==6) ){
HXLINE( 660)								commands->push(::swf::exporters::animate::AnimateShapeCommand_obj::LineStyle(data->__get((i + 1)),data->__get((i + 2)),data->__get((i + 3)),data->__get((i + 4)),data->__get((i + 5)),data->__get((i + 6)),data->__get((i + 7)),data->__get((i + 8))));
HXLINE( 662)								i = (i + 9);
HXLINE( 659)								goto _hx_goto_36;
            							}
            							if (  (_hx_switch_0==7) ){
HXLINE( 664)								commands->push(::swf::exporters::animate::AnimateShapeCommand_obj::LineTo((( (Float)(( (int)(data->__get((i + 1))) )) ) / ( (Float)(20) )),(( (Float)(( (int)(data->__get((i + 2))) )) ) / ( (Float)(20) ))));
HXLINE( 665)								i = (i + 3);
HXLINE( 663)								goto _hx_goto_36;
            							}
            							if (  (_hx_switch_0==8) ){
HXLINE( 667)								commands->push(::swf::exporters::animate::AnimateShapeCommand_obj::MoveTo((( (Float)(( (int)(data->__get((i + 1))) )) ) / ( (Float)(20) )),(( (Float)(( (int)(data->__get((i + 2))) )) ) / ( (Float)(20) ))));
HXLINE( 668)								i = (i + 3);
HXLINE( 666)								goto _hx_goto_36;
            							}
            							/* default */{
HXLINE( 670)								i = (i + 1);
            							}
            							_hx_goto_36:;
            						}
            					}
            				}
            			}
            		}
HXLINE( 676)		return symbol;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimateLibrary_obj,_hx___parseFont,return )

 ::openfl::geom::Matrix AnimateLibrary_obj::_hx___parseMatrix(::Array< Float > values){
            	HX_GC_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_681___parseMatrix)
HXDLIN( 681)		if (::hx::IsNotNull( values )) {
HXDLIN( 681)			return  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,values->__get(0),values->__get(1),values->__get(2),values->__get(3),(( (Float)(( (int)(values->__get(4)) )) ) / ( (Float)(20) )),(( (Float)(( (int)(values->__get(5)) )) ) / ( (Float)(20) )));
            		}
            		else {
HXDLIN( 681)			return null();
            		}
HXDLIN( 681)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimateLibrary_obj,_hx___parseMatrix,return )

 ::swf::exporters::animate::AnimateShapeSymbol AnimateLibrary_obj::_hx___parseShape( ::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_685___parseShape)
HXLINE( 686)		 ::swf::exporters::animate::AnimateShapeSymbol symbol =  ::swf::exporters::animate::AnimateShapeSymbol_obj::__alloc( HX_CTX );
HXLINE( 687)		symbol->id = ( (int)(data->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) );
HXLINE( 688)		symbol->commands = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 690)		::cpp::VirtualArray data1 = ( (::cpp::VirtualArray)(data->__Field(HX_("commands",c8,b0,55,be),::hx::paccDynamic)) );
HXLINE( 691)		::Array< ::Dynamic> commands = symbol->commands;
HXLINE( 692)		int i = 0;
HXLINE( 694)		while((i < data1->get_length())){
HXLINE( 696)			 ::Dynamic _hx_switch_0 = data1->__get(i);
            			if (  (_hx_switch_0==0) ){
HXLINE( 699)				 ::Dynamic data = data1->__get((i + 1));
HXDLIN( 699)				 ::openfl::geom::Matrix _hx_tmp = this->_hx___parseMatrix(( (::Array< Float >)(data1->__get((i + 2))) ));
HXDLIN( 699)				commands->push(::swf::exporters::animate::AnimateShapeCommand_obj::BeginBitmapFill(data,_hx_tmp,data1->__get((i + 3)),data1->__get((i + 4))));
HXLINE( 700)				i = (i + 5);
HXLINE( 698)				goto _hx_goto_40;
            			}
            			if (  (_hx_switch_0==1) ){
HXLINE( 702)				commands->push(::swf::exporters::animate::AnimateShapeCommand_obj::BeginFill(data1->__get((i + 1)),data1->__get((i + 2))));
HXLINE( 703)				i = (i + 3);
HXLINE( 701)				goto _hx_goto_40;
            			}
            			if (  (_hx_switch_0==2) ){
HXLINE( 705)				 ::Dynamic data = data1->__get((i + 1));
HXDLIN( 705)				 ::Dynamic data2 = data1->__get((i + 2));
HXDLIN( 705)				 ::Dynamic data3 = data1->__get((i + 3));
HXDLIN( 705)				 ::Dynamic data4 = data1->__get((i + 4));
HXDLIN( 705)				 ::openfl::geom::Matrix _hx_tmp = this->_hx___parseMatrix(( (::Array< Float >)(data1->__get((i + 5))) ));
HXDLIN( 705)				commands->push(::swf::exporters::animate::AnimateShapeCommand_obj::BeginGradientFill(data,data2,data3,data4,_hx_tmp,data1->__get((i + 6)),data1->__get((i + 7)),data1->__get((i + 8))));
HXLINE( 707)				i = (i + 9);
HXLINE( 704)				goto _hx_goto_40;
            			}
            			if (  (_hx_switch_0==3) ){
HXLINE( 709)				commands->push(::swf::exporters::animate::AnimateShapeCommand_obj::LineStyle(null(),null(),null(),null(),null(),null(),null(),null()));
HXLINE( 710)				i = (i + 1);
HXLINE( 708)				goto _hx_goto_40;
            			}
            			if (  (_hx_switch_0==4) ){
HXLINE( 712)				commands->push(::swf::exporters::animate::AnimateShapeCommand_obj::CurveTo((( (Float)(( (int)(data1->__get((i + 1))) )) ) / ( (Float)(20) )),(( (Float)(( (int)(data1->__get((i + 2))) )) ) / ( (Float)(20) )),(( (Float)(( (int)(data1->__get((i + 3))) )) ) / ( (Float)(20) )),(( (Float)(( (int)(data1->__get((i + 4))) )) ) / ( (Float)(20) ))));
HXLINE( 713)				i = (i + 5);
HXLINE( 711)				goto _hx_goto_40;
            			}
            			if (  (_hx_switch_0==5) ){
HXLINE( 715)				commands->push(::swf::exporters::animate::AnimateShapeCommand_obj::EndFill_dyn());
HXLINE( 716)				i = (i + 1);
HXLINE( 714)				goto _hx_goto_40;
            			}
            			if (  (_hx_switch_0==6) ){
HXLINE( 718)				commands->push(::swf::exporters::animate::AnimateShapeCommand_obj::LineStyle(data1->__get((i + 1)),data1->__get((i + 2)),data1->__get((i + 3)),data1->__get((i + 4)),data1->__get((i + 5)),data1->__get((i + 6)),data1->__get((i + 7)),data1->__get((i + 8))));
HXLINE( 719)				i = (i + 9);
HXLINE( 717)				goto _hx_goto_40;
            			}
            			if (  (_hx_switch_0==7) ){
HXLINE( 721)				commands->push(::swf::exporters::animate::AnimateShapeCommand_obj::LineTo((( (Float)(( (int)(data1->__get((i + 1))) )) ) / ( (Float)(20) )),(( (Float)(( (int)(data1->__get((i + 2))) )) ) / ( (Float)(20) ))));
HXLINE( 722)				i = (i + 3);
HXLINE( 720)				goto _hx_goto_40;
            			}
            			if (  (_hx_switch_0==8) ){
HXLINE( 724)				commands->push(::swf::exporters::animate::AnimateShapeCommand_obj::MoveTo((( (Float)(( (int)(data1->__get((i + 1))) )) ) / ( (Float)(20) )),(( (Float)(( (int)(data1->__get((i + 2))) )) ) / ( (Float)(20) ))));
HXLINE( 725)				i = (i + 3);
HXLINE( 723)				goto _hx_goto_40;
            			}
            			/* default */{
HXLINE( 727)				i = (i + 1);
            			}
            			_hx_goto_40:;
            		}
HXLINE( 730)		return symbol;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimateLibrary_obj,_hx___parseShape,return )

 ::swf::exporters::animate::AnimateSpriteSymbol AnimateLibrary_obj::_hx___parseSprite( ::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_734___parseSprite)
HXLINE( 735)		if (::hx::IsNull( data )) {
HXLINE( 735)			return null();
            		}
HXLINE( 737)		 ::swf::exporters::animate::AnimateSpriteSymbol symbol =  ::swf::exporters::animate::AnimateSpriteSymbol_obj::__alloc( HX_CTX );
HXLINE( 738)		symbol->id = ( (int)(data->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) );
HXLINE( 739)		symbol->className = ( (::String)(data->__Field(HX_("className",a3,92,3d,dc),::hx::paccDynamic)) );
HXLINE( 740)		symbol->baseClassName = ( (::String)(data->__Field(HX_("baseClassName",52,80,94,dc),::hx::paccDynamic)) );
HXLINE( 741)		 ::openfl::geom::Rectangle _hx_tmp;
HXDLIN( 741)		if (::hx::IsNotNull( data->__Field(HX_("scale9Grid",d5,50,22,8f),::hx::paccDynamic) )) {
HXLINE( 741)			_hx_tmp =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,(( (Float)( ::Dynamic(data->__Field(HX_("scale9Grid",d5,50,22,8f),::hx::paccDynamic))->__GetItem(0)) ) / ( (Float)(20) )),(( (Float)( ::Dynamic(data->__Field(HX_("scale9Grid",d5,50,22,8f),::hx::paccDynamic))->__GetItem(1)) ) / ( (Float)(20) )),(( (Float)( ::Dynamic(data->__Field(HX_("scale9Grid",d5,50,22,8f),::hx::paccDynamic))->__GetItem(2)) ) / ( (Float)(20) )),(( (Float)( ::Dynamic(data->__Field(HX_("scale9Grid",d5,50,22,8f),::hx::paccDynamic))->__GetItem(3)) ) / ( (Float)(20) )));
            		}
            		else {
HXLINE( 741)			_hx_tmp = null();
            		}
HXDLIN( 741)		symbol->scale9Grid = _hx_tmp;
HXLINE( 743)		::cpp::VirtualArray frames = ( (::cpp::VirtualArray)(data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic)) );
HXLINE( 744)		 ::swf::exporters::animate::AnimateFrame frame;
HXDLIN( 744)		::cpp::VirtualArray objects;
HXDLIN( 744)		 ::swf::exporters::animate::AnimateFrameObject object;
HXLINE( 747)		{
HXLINE( 747)			int _g = 0;
HXDLIN( 747)			while((_g < frames->get_length())){
HXLINE( 747)				 ::Dynamic frameData = frames->__get(_g);
HXDLIN( 747)				_g = (_g + 1);
HXLINE( 749)				frame =  ::swf::exporters::animate::AnimateFrame_obj::__alloc( HX_CTX );
HXLINE( 750)				if (::Reflect_obj::hasField(frameData,HX_("label",f4,0d,af,6f))) {
HXLINE( 752)					frame->labels = ::Array_obj< ::String >::__new(1)->init(0, ::Dynamic(frameData->__Field(HX_("label",f4,0d,af,6f),::hx::paccDynamic)));
            				}
            				else {
HXLINE( 754)					if (::Reflect_obj::hasField(frameData,HX_("labels",ff,27,7d,49))) {
HXLINE( 756)						frame->labels = ( (::Array< ::String >)(frameData->__Field(HX_("labels",ff,27,7d,49),::hx::paccDynamic)) );
            					}
            				}
HXLINE( 759)				if (::Reflect_obj::hasField(frameData,HX_("scriptSource",46,0d,c1,c9))) {
HXLINE( 761)					frame->scriptSource = ( (::String)(frameData->__Field(HX_("scriptSource",46,0d,c1,c9),::hx::paccDynamic)) );
            				}
HXLINE( 763)				objects = ( (::cpp::VirtualArray)(frameData->__Field(HX_("objects",d4,68,4f,82),::hx::paccDynamic)) );
HXLINE( 764)				bool _hx_tmp;
HXDLIN( 764)				if (::hx::IsNotNull( objects )) {
HXLINE( 764)					_hx_tmp = (objects->get_length() > 0);
            				}
            				else {
HXLINE( 764)					_hx_tmp = false;
            				}
HXDLIN( 764)				if (_hx_tmp) {
HXLINE( 766)					frame->objects = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 767)					{
HXLINE( 767)						int _g = 0;
HXDLIN( 767)						while((_g < objects->get_length())){
HXLINE( 767)							 ::Dynamic objectData = objects->__get(_g);
HXDLIN( 767)							_g = (_g + 1);
HXLINE( 769)							object =  ::swf::exporters::animate::AnimateFrameObject_obj::__alloc( HX_CTX );
HXLINE( 770)							object->blendMode = ::openfl::display::_BlendMode::BlendMode_Impl__obj::fromString(::Std_obj::string( ::Dynamic(objectData->__Field(HX_("blendMode",54,e4,37,0c),::hx::paccDynamic))));
HXLINE( 771)							object->cacheAsBitmap = objectData->__Field(HX_("cacheAsBitmap",e3,82,0f,6a),::hx::paccDynamic);
HXLINE( 772)							object->clipDepth = ( (int)(objectData->__Field(HX_("clipDepth",13,40,41,f5),::hx::paccDynamic)) );
HXLINE( 773)							 ::openfl::geom::ColorTransform _hx_tmp;
HXDLIN( 773)							if (::hx::IsNotNull( objectData->__Field(HX_("colorTransform",89,d7,3f,ad),::hx::paccDynamic) )) {
HXLINE( 773)								_hx_tmp =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,(( (Float)( ::Dynamic(objectData->__Field(HX_("colorTransform",89,d7,3f,ad),::hx::paccDynamic))->__GetItem(0)) ) / ( (Float)(20) )),(( (Float)( ::Dynamic(objectData->__Field(HX_("colorTransform",89,d7,3f,ad),::hx::paccDynamic))->__GetItem(1)) ) / ( (Float)(20) )),(( (Float)( ::Dynamic(objectData->__Field(HX_("colorTransform",89,d7,3f,ad),::hx::paccDynamic))->__GetItem(2)) ) / ( (Float)(20) )),(( (Float)( ::Dynamic(objectData->__Field(HX_("colorTransform",89,d7,3f,ad),::hx::paccDynamic))->__GetItem(3)) ) / ( (Float)(20) )),(( (Float)( ::Dynamic(objectData->__Field(HX_("colorTransform",89,d7,3f,ad),::hx::paccDynamic))->__GetItem(4)) ) / ( (Float)(20) )),(( (Float)( ::Dynamic(objectData->__Field(HX_("colorTransform",89,d7,3f,ad),::hx::paccDynamic))->__GetItem(5)) ) / ( (Float)(20) )),(( (Float)( ::Dynamic(objectData->__Field(HX_("colorTransform",89,d7,3f,ad),::hx::paccDynamic))->__GetItem(6)) ) / ( (Float)(20) )),(( (Float)( ::Dynamic(objectData->__Field(HX_("colorTransform",89,d7,3f,ad),::hx::paccDynamic))->__GetItem(7)) ) / ( (Float)(20) )));
            							}
            							else {
HXLINE( 773)								_hx_tmp = null();
            							}
HXDLIN( 773)							object->colorTransform = _hx_tmp;
HXLINE( 777)							object->depth = ( (int)(objectData->__Field(HX_("depth",03,f1,29,d7),::hx::paccDynamic)) );
HXLINE( 778)							object->filters = this->_hx___parseFilters(( (::Array< ::Dynamic>)(objectData->__Field(HX_("filters",bb,a1,46,09),::hx::paccDynamic)) ));
HXLINE( 779)							object->id = ( (int)(objectData->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) );
HXLINE( 780)							object->matrix = this->_hx___parseMatrix(( (::Array< Float >)(objectData->__Field(HX_("matrix",41,36,c8,bb),::hx::paccDynamic)) ));
HXLINE( 781)							object->name = ( (::String)(objectData->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE( 782)							object->symbol = ( (int)(objectData->__Field(HX_("symbol",58,af,dd,ee),::hx::paccDynamic)) );
HXLINE( 783)							object->type = ( (int)(objectData->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)) );
HXLINE( 784)							object->visible = objectData->__Field(HX_("visible",72,78,24,a3),::hx::paccDynamic);
HXLINE( 785)							frame->objects->push(object);
            						}
            					}
            				}
HXLINE( 788)				symbol->frames->push(frame);
            			}
            		}
HXLINE( 790)		return symbol;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimateLibrary_obj,_hx___parseSprite,return )

 ::swf::exporters::animate::AnimateStaticTextSymbol AnimateLibrary_obj::_hx___parseStaticText( ::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_794___parseStaticText)
HXLINE( 795)		 ::swf::exporters::animate::AnimateStaticTextSymbol symbol =  ::swf::exporters::animate::AnimateStaticTextSymbol_obj::__alloc( HX_CTX );
HXLINE( 796)		symbol->id = ( (int)(data->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) );
HXLINE( 797)		symbol->matrix = this->_hx___parseMatrix(( (::Array< Float >)(data->__Field(HX_("matrix",41,36,c8,bb),::hx::paccDynamic)) ));
HXLINE( 798)		symbol->records = ( (::Array< ::Dynamic>)(data->__Field(HX_("records",c2,48,fb,30),::hx::paccDynamic)) );
HXLINE( 799)		return symbol;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimateLibrary_obj,_hx___parseStaticText,return )

Float AnimateLibrary_obj::_hx___pixel(int value){
            	HX_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_804___pixel)
HXDLIN( 804)		return (( (Float)(value) ) / ( (Float)(20) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimateLibrary_obj,_hx___pixel,return )

 ::haxe::ds::StringMap AnimateLibrary_obj::instances;

 ::swf::exporters::animate::AnimateLibrary AnimateLibrary_obj::get(::String uuid){
            	HX_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_141_get)
HXDLIN( 141)		return ( ( ::swf::exporters::animate::AnimateLibrary)(::swf::exporters::animate::AnimateLibrary_obj::instances->get(uuid)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AnimateLibrary_obj,get,return )

 ::lime::app::Future AnimateLibrary_obj::loadFromBundle( ::lime::utils::AssetBundle bundle){
            	HX_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_364_loadFromBundle)
HXLINE( 365)		 ::openfl::utils::AssetLibrary library = ::openfl::utils::AssetLibrary_obj::fromBundle(bundle);
HXLINE( 367)		if (::Std_obj::isOfType(library,::hx::ClassOf< ::swf::exporters::animate::AnimateLibrary >())) {
HXLINE( 369)			 ::swf::exporters::animate::AnimateLibrary animateLibrary = ( ( ::swf::exporters::animate::AnimateLibrary)(library) );
HXLINE( 370)			return animateLibrary->load();
            		}
            		else {
HXLINE( 374)			return ::lime::app::Future_obj::withError(HX_("Bundle is not an AnimateLibrary",88,b1,ac,cf));
            		}
HXLINE( 367)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AnimateLibrary_obj,loadFromBundle,return )

 ::lime::app::Future AnimateLibrary_obj::loadFromBytes( ::haxe::io::Bytes bytes){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::lime::utils::AssetBundle bundle){
            			HX_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_383_loadFromBytes)
HXLINE( 383)			return ::swf::exporters::animate::AnimateLibrary_obj::loadFromBundle(bundle);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_381_loadFromBytes)
HXDLIN( 381)		return ::lime::utils::AssetBundle_obj::loadFromBytes(bytes)->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AnimateLibrary_obj,loadFromBytes,return )

 ::lime::app::Future AnimateLibrary_obj::loadFromFile(::String path){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::lime::utils::AssetBundle bundle){
            			HX_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_395_loadFromFile)
HXLINE( 395)			return ::swf::exporters::animate::AnimateLibrary_obj::loadFromBundle(bundle);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_393_loadFromFile)
HXDLIN( 393)		return ::lime::utils::AssetBundle_obj::loadFromFile(path)->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AnimateLibrary_obj,loadFromFile,return )


::hx::ObjectPtr< AnimateLibrary_obj > AnimateLibrary_obj::__new(::String id,::String uuid) {
	::hx::ObjectPtr< AnimateLibrary_obj > __this = new AnimateLibrary_obj();
	__this->__construct(id,uuid);
	return __this;
}

::hx::ObjectPtr< AnimateLibrary_obj > AnimateLibrary_obj::__alloc(::hx::Ctx *_hx_ctx,::String id,::String uuid) {
	AnimateLibrary_obj *__this = (AnimateLibrary_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimateLibrary_obj), true, "swf.exporters.animate.AnimateLibrary"));
	*(void **)__this = AnimateLibrary_obj::_hx_vtable;
	__this->__construct(id,uuid);
	return __this;
}

AnimateLibrary_obj::AnimateLibrary_obj()
{
}

void AnimateLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimateLibrary);
	HX_MARK_MEMBER_NAME(alphaCheck,"alphaCheck");
	HX_MARK_MEMBER_NAME(bitmapClassNames,"bitmapClassNames");
	HX_MARK_MEMBER_NAME(bitmapSymbols,"bitmapSymbols");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(instanceID,"instanceID");
	HX_MARK_MEMBER_NAME(preloading,"preloading");
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(rootPath,"rootPath");
	HX_MARK_MEMBER_NAME(symbols,"symbols");
	HX_MARK_MEMBER_NAME(symbolsByClassName,"symbolsByClassName");
	HX_MARK_MEMBER_NAME(uuid,"uuid");
	 ::openfl::utils::AssetLibrary_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimateLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(alphaCheck,"alphaCheck");
	HX_VISIT_MEMBER_NAME(bitmapClassNames,"bitmapClassNames");
	HX_VISIT_MEMBER_NAME(bitmapSymbols,"bitmapSymbols");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(instanceID,"instanceID");
	HX_VISIT_MEMBER_NAME(preloading,"preloading");
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(rootPath,"rootPath");
	HX_VISIT_MEMBER_NAME(symbols,"symbols");
	HX_VISIT_MEMBER_NAME(symbolsByClassName,"symbolsByClassName");
	HX_VISIT_MEMBER_NAME(uuid,"uuid");
	 ::openfl::utils::AssetLibrary_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AnimateLibrary_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return ::hx::Val( root ); }
		if (HX_FIELD_EQ(inName,"uuid") ) { return ::hx::Val( uuid ); }
		if (HX_FIELD_EQ(inName,"bind") ) { return ::hx::Val( bind_dyn() ); }
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list_dyn() ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"unload") ) { return ::hx::Val( unload_dyn() ); }
		if (HX_FIELD_EQ(inName,"__load") ) { return ::hx::Val( _hx___load_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"symbols") ) { return ::hx::Val( symbols ); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return ::hx::Val( isLocal_dyn() ); }
		if (HX_FIELD_EQ(inName,"__pixel") ) { return ::hx::Val( _hx___pixel_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { return ::hx::Val( rootPath ); }
		if (HX_FIELD_EQ(inName,"getImage") ) { return ::hx::Val( getImage_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return ::hx::Val( frameRate ); }
		if (HX_FIELD_EQ(inName,"loadImage") ) { return ::hx::Val( loadImage_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alphaCheck") ) { return ::hx::Val( alphaCheck ); }
		if (HX_FIELD_EQ(inName,"instanceID") ) { return ::hx::Val( instanceID ); }
		if (HX_FIELD_EQ(inName,"preloading") ) { return ::hx::Val( preloading ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__loadImage") ) { return ::hx::Val( _hx___loadImage_dyn() ); }
		if (HX_FIELD_EQ(inName,"__parseFont") ) { return ::hx::Val( _hx___parseFont_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { return ::hx::Val( getMovieClip_dyn() ); }
		if (HX_FIELD_EQ(inName,"__parseShape") ) { return ::hx::Val( _hx___parseShape_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitmapSymbols") ) { return ::hx::Val( bitmapSymbols ); }
		if (HX_FIELD_EQ(inName,"__copyChannel") ) { return ::hx::Val( _hx___copyChannel_dyn() ); }
		if (HX_FIELD_EQ(inName,"__parseBitmap") ) { return ::hx::Val( _hx___parseBitmap_dyn() ); }
		if (HX_FIELD_EQ(inName,"__parseButton") ) { return ::hx::Val( _hx___parseButton_dyn() ); }
		if (HX_FIELD_EQ(inName,"__parseMatrix") ) { return ::hx::Val( _hx___parseMatrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"__parseSprite") ) { return ::hx::Val( _hx___parseSprite_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__fromManifest") ) { return ::hx::Val( _hx___fromManifest_dyn() ); }
		if (HX_FIELD_EQ(inName,"__parseFilters") ) { return ::hx::Val( _hx___parseFilters_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bitmapClassNames") ) { return ::hx::Val( bitmapClassNames ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__parseStaticText") ) { return ::hx::Val( _hx___parseStaticText_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"symbolsByClassName") ) { return ::hx::Val( symbolsByClassName ); }
		if (HX_FIELD_EQ(inName,"__parseDynamicText") ) { return ::hx::Val( _hx___parseDynamicText_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AnimateLibrary_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { outValue = ( instances ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { outValue = loadFromBytes_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadFromBundle") ) { outValue = loadFromBundle_dyn(); return true; }
	}
	return false;
}

::hx::Val AnimateLibrary_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast<  ::swf::exporters::animate::AnimateSpriteSymbol >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uuid") ) { uuid=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"symbols") ) { symbols=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { rootPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alphaCheck") ) { alphaCheck=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"instanceID") ) { instanceID=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"preloading") ) { preloading=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitmapSymbols") ) { bitmapSymbols=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bitmapClassNames") ) { bitmapClassNames=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"symbolsByClassName") ) { symbolsByClassName=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AnimateLibrary_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { instances=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void AnimateLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alphaCheck",8a,ec,5b,66));
	outFields->push(HX_("bitmapClassNames",3f,b1,4e,60));
	outFields->push(HX_("bitmapSymbols",ec,41,a9,c3));
	outFields->push(HX_("frameRate",ad,11,25,39));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("instanceID",b0,2e,18,6c));
	outFields->push(HX_("preloading",b9,08,ef,a9));
	outFields->push(HX_("root",22,ee,ae,4b));
	outFields->push(HX_("rootPath",e7,b8,88,e1));
	outFields->push(HX_("symbols",1b,be,1b,13));
	outFields->push(HX_("symbolsByClassName",71,53,ec,f9));
	outFields->push(HX_("uuid",3b,1a,af,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimateLibrary_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AnimateLibrary_obj,alphaCheck),HX_("alphaCheck",8a,ec,5b,66)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AnimateLibrary_obj,bitmapClassNames),HX_("bitmapClassNames",3f,b1,4e,60)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AnimateLibrary_obj,bitmapSymbols),HX_("bitmapSymbols",ec,41,a9,c3)},
	{::hx::fsFloat,(int)offsetof(AnimateLibrary_obj,frameRate),HX_("frameRate",ad,11,25,39)},
	{::hx::fsString,(int)offsetof(AnimateLibrary_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsString,(int)offsetof(AnimateLibrary_obj,instanceID),HX_("instanceID",b0,2e,18,6c)},
	{::hx::fsBool,(int)offsetof(AnimateLibrary_obj,preloading),HX_("preloading",b9,08,ef,a9)},
	{::hx::fsObject /*  ::swf::exporters::animate::AnimateSpriteSymbol */ ,(int)offsetof(AnimateLibrary_obj,root),HX_("root",22,ee,ae,4b)},
	{::hx::fsString,(int)offsetof(AnimateLibrary_obj,rootPath),HX_("rootPath",e7,b8,88,e1)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(AnimateLibrary_obj,symbols),HX_("symbols",1b,be,1b,13)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AnimateLibrary_obj,symbolsByClassName),HX_("symbolsByClassName",71,53,ec,f9)},
	{::hx::fsString,(int)offsetof(AnimateLibrary_obj,uuid),HX_("uuid",3b,1a,af,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo AnimateLibrary_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &AnimateLibrary_obj::instances,HX_("instances",3e,83,1a,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String AnimateLibrary_obj_sMemberFields[] = {
	HX_("alphaCheck",8a,ec,5b,66),
	HX_("bitmapClassNames",3f,b1,4e,60),
	HX_("bitmapSymbols",ec,41,a9,c3),
	HX_("frameRate",ad,11,25,39),
	HX_("id",db,5b,00,00),
	HX_("instanceID",b0,2e,18,6c),
	HX_("preloading",b9,08,ef,a9),
	HX_("root",22,ee,ae,4b),
	HX_("rootPath",e7,b8,88,e1),
	HX_("symbols",1b,be,1b,13),
	HX_("symbolsByClassName",71,53,ec,f9),
	HX_("uuid",3b,1a,af,4d),
	HX_("bind",bd,f5,16,41),
	HX_("exists",dc,1d,e0,bf),
	HX_("getImage",e5,2e,40,1d),
	HX_("getMovieClip",2a,9f,71,27),
	HX_("isLocal",21,6d,76,15),
	HX_("list",5e,1c,b3,47),
	HX_("load",26,9a,b7,47),
	HX_("loadImage",55,6b,a0,d8),
	HX_("unload",ff,a0,8c,65),
	HX_("__copyChannel",6e,be,5e,6b),
	HX_("__fromManifest",59,5a,01,91),
	HX_("__load",46,fd,af,f6),
	HX_("__loadImage",35,b4,cc,06),
	HX_("__parseBitmap",62,fd,c0,b4),
	HX_("__parseButton",65,4f,95,9d),
	HX_("__parseDynamicText",79,35,e2,51),
	HX_("__parseFilters",e8,78,e1,83),
	HX_("__parseFont",82,f8,92,f9),
	HX_("__parseMatrix",b4,23,7d,7f),
	HX_("__parseShape",0e,a5,91,de),
	HX_("__parseSprite",78,c9,4a,87),
	HX_("__parseStaticText",6e,e7,e9,8a),
	HX_("__pixel",66,1f,02,2d),
	::String(null()) };

static void AnimateLibrary_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimateLibrary_obj::instances,"instances");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AnimateLibrary_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimateLibrary_obj::instances,"instances");
};

#endif

::hx::Class AnimateLibrary_obj::__mClass;

static ::String AnimateLibrary_obj_sStaticFields[] = {
	HX_("instances",3e,83,1a,4b),
	HX_("get",96,80,4e,00),
	HX_("loadFromBundle",52,02,d2,af),
	HX_("loadFromBytes",9b,c3,86,f4),
	HX_("loadFromFile",4c,89,f0,5a),
	::String(null())
};

void AnimateLibrary_obj::__register()
{
	AnimateLibrary_obj _hx_dummy;
	AnimateLibrary_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("swf.exporters.animate.AnimateLibrary",cf,2e,9e,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AnimateLibrary_obj::__GetStatic;
	__mClass->mSetStaticField = &AnimateLibrary_obj::__SetStatic;
	__mClass->mMarkFunc = AnimateLibrary_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AnimateLibrary_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimateLibrary_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimateLibrary_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AnimateLibrary_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimateLibrary_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimateLibrary_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AnimateLibrary_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_43_boot)
HXDLIN(  43)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4f566b3ccc8720d0_56_boot)
HXDLIN(  56)		instances =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace swf
} // end namespace exporters
} // end namespace animate
