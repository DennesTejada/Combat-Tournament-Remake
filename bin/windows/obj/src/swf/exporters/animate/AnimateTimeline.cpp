#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_FrameLabel
#include <openfl/display/FrameLabel.h>
#endif
#ifndef INCLUDED_openfl_display_FrameScript
#include <openfl/display/FrameScript.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_display_Scene
#include <openfl/display/Scene.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Timeline
#include <openfl/display/Timeline.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_BlurFilter
#include <openfl/filters/BlurFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ColorMatrixFilter
#include <openfl/filters/ColorMatrixFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_DropShadowFilter
#include <openfl/filters/DropShadowFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_GlowFilter
#include <openfl/filters/GlowFilter.h>
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
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
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
#ifndef INCLUDED_swf_exporters_animate_AnimateSpriteSymbol
#include <swf/exporters/animate/AnimateSpriteSymbol.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateSymbol
#include <swf/exporters/animate/AnimateSymbol.h>
#endif
#ifndef INCLUDED_swf_exporters_animate_AnimateTimeline
#include <swf/exporters/animate/AnimateTimeline.h>
#endif
#ifndef INCLUDED_swf_exporters_animate__AnimateTimeline_FrameSymbolInstance
#include <swf/exporters/animate/_AnimateTimeline/FrameSymbolInstance.h>
#endif
#ifndef INCLUDED_swf_exporters_core_FilterType
#include <swf/exporters/core/FilterType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6b815c0a222e4771_56_new,"swf.exporters.animate.AnimateTimeline","new",0x5137fb9f,"swf.exporters.animate.AnimateTimeline.new","swf/exporters/animate/AnimateTimeline.hx",56,0x1283a6b4)
HX_LOCAL_STACK_FRAME(_hx_pos_6b815c0a222e4771_158_attachMovieClip,"swf.exporters.animate.AnimateTimeline","attachMovieClip",0x732c53da,"swf.exporters.animate.AnimateTimeline.attachMovieClip","swf/exporters/animate/AnimateTimeline.hx",158,0x1283a6b4)
HX_LOCAL_STACK_FRAME(_hx_pos_6b815c0a222e4771_163_enterFrame,"swf.exporters.animate.AnimateTimeline","enterFrame",0xe2814e96,"swf.exporters.animate.AnimateTimeline.enterFrame","swf/exporters/animate/AnimateTimeline.hx",163,0x1283a6b4)
HX_LOCAL_STACK_FRAME(_hx_pos_6b815c0a222e4771_335_init,"swf.exporters.animate.AnimateTimeline","init",0xbc7ce6f1,"swf.exporters.animate.AnimateTimeline.init","swf/exporters/animate/AnimateTimeline.hx",335,0x1283a6b4)
HX_LOCAL_STACK_FRAME(_hx_pos_6b815c0a222e4771_436_initializeSprite,"swf.exporters.animate.AnimateTimeline","initializeSprite",0x33d9d6d6,"swf.exporters.animate.AnimateTimeline.initializeSprite","swf/exporters/animate/AnimateTimeline.hx",436,0x1283a6b4)
HX_LOCAL_STACK_FRAME(_hx_pos_6b815c0a222e4771_452___sortDepths,"swf.exporters.animate.AnimateTimeline","__sortDepths",0x4a13d80f,"swf.exporters.animate.AnimateTimeline.__sortDepths","swf/exporters/animate/AnimateTimeline.hx",452,0x1283a6b4)
HX_LOCAL_STACK_FRAME(_hx_pos_6b815c0a222e4771_456___updateDisplayObject,"swf.exporters.animate.AnimateTimeline","__updateDisplayObject",0xa2a03ab7,"swf.exporters.animate.AnimateTimeline.__updateDisplayObject","swf/exporters/animate/AnimateTimeline.hx",456,0x1283a6b4)
HX_LOCAL_STACK_FRAME(_hx_pos_6b815c0a222e4771_534___updateInstanceFields,"swf.exporters.animate.AnimateTimeline","__updateInstanceFields",0x2d659318,"swf.exporters.animate.AnimateTimeline.__updateInstanceFields","swf/exporters/animate/AnimateTimeline.hx",534,0x1283a6b4)
namespace swf{
namespace exporters{
namespace animate{

void AnimateTimeline_obj::__construct( ::swf::exporters::animate::AnimateLibrary library, ::swf::exporters::animate::AnimateSpriteSymbol symbol){
            	HX_GC_STACKFRAME(&_hx_pos_6b815c0a222e4771_56_new)
HXLINE(  57)		super::__construct();
HXLINE(  59)		this->_hx___library = library;
HXLINE(  60)		this->_hx___symbol = symbol;
HXLINE(  62)		this->frameRate = library->frameRate;
HXLINE(  63)		::Array< ::Dynamic> labels = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  64)		this->scripts = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  66)		int frame;
HXLINE(  67)		 ::swf::exporters::animate::AnimateFrame frameData;
HXLINE(  73)		{
HXLINE(  73)			int _g = 0;
HXDLIN(  73)			int _g1 = this->_hx___symbol->frames->length;
HXDLIN(  73)			while((_g < _g1)){
HXLINE(  73)				_g = (_g + 1);
HXDLIN(  73)				int i = (_g - 1);
HXLINE(  75)				frame = (i + 1);
HXLINE(  76)				frameData = this->_hx___symbol->frames->__get(i).StaticCast<  ::swf::exporters::animate::AnimateFrame >();
HXLINE(  78)				if (::hx::IsNotNull( frameData->labels )) {
HXLINE(  80)					int _g = 0;
HXDLIN(  80)					::Array< ::String > _g1 = frameData->labels;
HXDLIN(  80)					while((_g < _g1->length)){
HXLINE(  80)						::String label = _g1->__get(_g);
HXDLIN(  80)						_g = (_g + 1);
HXLINE(  82)						labels->push( ::openfl::display::FrameLabel_obj::__alloc( HX_CTX ,label,frame));
            					}
            				}
HXLINE(  86)				if (::hx::IsNotNull( frameData->script )) {
HXLINE(  88)					::Array< ::Dynamic> _hx_tmp = this->scripts;
HXDLIN(  88)					_hx_tmp->push( ::openfl::display::FrameScript_obj::__alloc( HX_CTX ,frameData->script,frame));
            				}
            				else {
HXLINE(  90)					if (::hx::IsNotNull( frameData->scriptSource )) {
HXLINE(  92)						try {
            							HX_STACK_CATCHABLE( ::Dynamic, 0);
            						} catch( ::Dynamic _hx_e) {
            							if (_hx_e.IsClass<  ::Dynamic >() ){
            								HX_STACK_BEGIN_CATCH
            								 ::Dynamic _g = _hx_e;
HXLINE( 138)								{
HXLINE( 138)									null();
            								}
HXLINE( 140)								if (::hx::IsNotNull( this->_hx___symbol->className )) {
HXLINE( 142)									::lime::utils::Log_obj::warn((((((HX_("Unable to evaluate frame script source for symbol \"",a3,42,39,7c) + this->_hx___symbol->className) + HX_("\" frame ",91,af,e7,77)) + frame) + HX_("\n",0a,00,00,00)) + frameData->scriptSource),::hx::SourceInfo(HX_("swf/exporters/animate/AnimateTimeline.hx",b4,a6,83,12),142,HX_("swf.exporters.animate.AnimateTimeline",2d,40,54,ea),HX_("new",60,d0,53,00)));
            								}
            								else {
HXLINE( 147)									::lime::utils::Log_obj::warn((HX_("Unable to evaluate frame script source:\n",1e,90,6f,3e) + frameData->scriptSource),::hx::SourceInfo(HX_("swf/exporters/animate/AnimateTimeline.hx",b4,a6,83,12),147,HX_("swf.exporters.animate.AnimateTimeline",2d,40,54,ea),HX_("new",60,d0,53,00)));
            								}
            							}
            							else {
            								HX_STACK_DO_THROW(_hx_e);
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 153)		this->scenes = ::Array_obj< ::Dynamic>::__new(1)->init(0, ::openfl::display::Scene_obj::__alloc( HX_CTX ,HX_("",00,00,00,00),labels,this->_hx___symbol->frames->length));
            	}

Dynamic AnimateTimeline_obj::__CreateEmpty() { return new AnimateTimeline_obj; }

void *AnimateTimeline_obj::_hx_vtable = 0;

Dynamic AnimateTimeline_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimateTimeline_obj > _hx_result = new AnimateTimeline_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AnimateTimeline_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c3e20d1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2c3e20d1;
	} else {
		return inClassId==(int)0x38ecf92f;
	}
}

void AnimateTimeline_obj::attachMovieClip( ::openfl::display::MovieClip movieClip){
            	HX_STACKFRAME(&_hx_pos_6b815c0a222e4771_158_attachMovieClip)
HXDLIN( 158)		this->init(movieClip);
            	}


void AnimateTimeline_obj::enterFrame(int currentFrame){
            	HX_GC_STACKFRAME(&_hx_pos_6b815c0a222e4771_163_enterFrame)
HXDLIN( 163)		bool _hx_tmp;
HXDLIN( 163)		if (::hx::IsNotNull( this->_hx___symbol )) {
HXDLIN( 163)			_hx_tmp = (currentFrame != this->_hx___previousFrame);
            		}
            		else {
HXDLIN( 163)			_hx_tmp = false;
            		}
HXDLIN( 163)		if (_hx_tmp) {
HXLINE( 165)			int frame;
HXLINE( 166)			 ::swf::exporters::animate::AnimateFrame frameData;
HXLINE( 167)			 ::swf::exporters::animate::_AnimateTimeline::FrameSymbolInstance instance;
HXLINE( 169)			int updateFrameStart;
HXDLIN( 169)			if ((this->_hx___previousFrame < currentFrame)) {
HXLINE( 169)				if ((this->_hx___previousFrame == -1)) {
HXLINE( 169)					updateFrameStart = 0;
            				}
            				else {
HXLINE( 169)					updateFrameStart = this->_hx___previousFrame;
            				}
            			}
            			else {
HXLINE( 169)				updateFrameStart = 0;
            			}
HXLINE( 170)			bool skipFrame = false;
HXLINE( 173)			bool _hx_tmp;
HXDLIN( 173)			bool _hx_tmp1;
HXDLIN( 173)			if ((currentFrame == 1)) {
HXLINE( 173)				_hx_tmp1 = (this->_hx___previousFrame > currentFrame);
            			}
            			else {
HXLINE( 173)				_hx_tmp1 = false;
            			}
HXDLIN( 173)			if (_hx_tmp1) {
HXLINE( 173)				_hx_tmp = ::hx::IsNotNull( this->_hx___symbol->frames->__get(0).StaticCast<  ::swf::exporters::animate::AnimateFrame >()->objects );
            			}
            			else {
HXLINE( 173)				_hx_tmp = false;
            			}
HXDLIN( 173)			if (_hx_tmp) {
HXLINE( 176)				skipFrame = true;
HXLINE( 177)				{
HXLINE( 177)					int _g = 1;
HXDLIN( 177)					int _g1 = this->_hx___symbol->frames->length;
HXDLIN( 177)					while((_g < _g1)){
HXLINE( 177)						_g = (_g + 1);
HXDLIN( 177)						int i = (_g - 1);
HXLINE( 179)						if (::hx::IsNotNull( this->_hx___symbol->frames->__get(i).StaticCast<  ::swf::exporters::animate::AnimateFrame >()->objects )) {
HXLINE( 181)							skipFrame = false;
HXLINE( 182)							goto _hx_goto_4;
            						}
            					}
            					_hx_goto_4:;
            				}
            			}
HXLINE( 187)			if (!(skipFrame)) {
HXLINE( 190)				if ((updateFrameStart <= 0)) {
HXLINE( 192)					this->_hx___currentInstancesByFrameObjectID =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            				}
HXLINE( 195)				{
HXLINE( 195)					int _g = updateFrameStart;
HXDLIN( 195)					int _g1 = currentFrame;
HXDLIN( 195)					while((_g < _g1)){
HXLINE( 195)						_g = (_g + 1);
HXDLIN( 195)						int i = (_g - 1);
HXLINE( 197)						frame = (i + 1);
HXLINE( 198)						frameData = this->_hx___symbol->frames->__get(i).StaticCast<  ::swf::exporters::animate::AnimateFrame >();
HXLINE( 200)						if (::hx::IsNull( frameData->objects )) {
HXLINE( 200)							continue;
            						}
HXLINE( 202)						{
HXLINE( 202)							int _g1 = 0;
HXDLIN( 202)							::Array< ::Dynamic> _g2 = frameData->objects;
HXDLIN( 202)							while((_g1 < _g2->length)){
HXLINE( 202)								 ::swf::exporters::animate::AnimateFrameObject frameObject = _g2->__get(_g1).StaticCast<  ::swf::exporters::animate::AnimateFrameObject >();
HXDLIN( 202)								_g1 = (_g1 + 1);
HXLINE( 204)								instance = ( ( ::swf::exporters::animate::_AnimateTimeline::FrameSymbolInstance)(this->_hx___activeInstancesByFrameObjectID->get(frameObject->id)) );
HXLINE( 206)								if (::hx::IsNotNull( instance )) {
HXLINE( 208)									switch((int)(frameObject->type)){
            										case (int)0: {
HXLINE( 211)											this->_hx___currentInstancesByFrameObjectID->set(frameObject->id,instance);
HXLINE( 212)											this->_hx___updateDisplayObject(instance->displayObject,frameObject,true);
            										}
            										break;
            										case (int)1: {
HXLINE( 215)											this->_hx___updateDisplayObject(instance->displayObject,frameObject,null());
            										}
            										break;
            										case (int)2: {
HXLINE( 218)											this->_hx___currentInstancesByFrameObjectID->remove(frameObject->id);
            										}
            										break;
            									}
            								}
            							}
            						}
            					}
            				}
HXLINE( 226)				::Array< ::Dynamic> currentInstances = ::Array_obj< ::Dynamic>::__new();
HXLINE( 227)				::Array< ::Dynamic> currentMasks = ::Array_obj< ::Dynamic>::__new();
HXLINE( 229)				{
HXLINE( 229)					 ::Dynamic instance1 = this->_hx___currentInstancesByFrameObjectID->iterator();
HXDLIN( 229)					while(( (bool)(instance1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 229)						 ::swf::exporters::animate::_AnimateTimeline::FrameSymbolInstance instance = ( ( ::swf::exporters::animate::_AnimateTimeline::FrameSymbolInstance)(instance1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 231)						if ((currentInstances->indexOf(instance,null()) == -1)) {
HXLINE( 233)							currentInstances->push(instance);
HXLINE( 235)							if ((instance->clipDepth > 0)) {
HXLINE( 237)								currentMasks->push(instance);
            							}
            						}
            					}
            				}
HXLINE( 242)				currentInstances->sort(this->_hx___sortDepths_dyn());
HXLINE( 244)				 ::openfl::display::DisplayObject existingChild;
HXLINE( 245)				int targetDepth;
HXLINE( 246)				 ::openfl::display::DisplayObject targetChild;
HXLINE( 247)				 ::openfl::display::DisplayObject child;
HXLINE( 248)				bool maskApplied;
HXLINE( 250)				{
HXLINE( 250)					int _g2 = 0;
HXDLIN( 250)					int _g3 = currentInstances->length;
HXDLIN( 250)					while((_g2 < _g3)){
HXLINE( 250)						_g2 = (_g2 + 1);
HXDLIN( 250)						int i = (_g2 - 1);
HXLINE( 252)						if ((i < this->_hx___sprite->get_numChildren())) {
HXLINE( 252)							existingChild = this->_hx___sprite->getChildAt(i);
            						}
            						else {
HXLINE( 252)							existingChild = null();
            						}
HXLINE( 253)						instance = currentInstances->__get(i).StaticCast<  ::swf::exporters::animate::_AnimateTimeline::FrameSymbolInstance >();
HXLINE( 255)						targetDepth = instance->depth;
HXLINE( 256)						targetChild = instance->displayObject;
HXLINE( 258)						if (::hx::IsInstanceNotEq( existingChild,targetChild )) {
HXLINE( 260)							this->_hx___sprite->addChildAt(targetChild,i);
            						}
HXLINE( 263)						child = targetChild;
HXLINE( 264)						maskApplied = false;
HXLINE( 266)						{
HXLINE( 266)							int _g = 0;
HXDLIN( 266)							while((_g < currentMasks->length)){
HXLINE( 266)								 ::swf::exporters::animate::_AnimateTimeline::FrameSymbolInstance mask = currentMasks->__get(_g).StaticCast<  ::swf::exporters::animate::_AnimateTimeline::FrameSymbolInstance >();
HXDLIN( 266)								_g = (_g + 1);
HXLINE( 268)								bool _hx_tmp;
HXDLIN( 268)								if ((targetDepth > mask->depth)) {
HXLINE( 268)									_hx_tmp = (targetDepth <= mask->clipDepth);
            								}
            								else {
HXLINE( 268)									_hx_tmp = false;
            								}
HXDLIN( 268)								if (_hx_tmp) {
HXLINE( 270)									child->set_mask(mask->displayObject);
HXLINE( 271)									maskApplied = true;
HXLINE( 272)									goto _hx_goto_9;
            								}
            							}
            							_hx_goto_9:;
            						}
HXLINE( 276)						bool _hx_tmp;
HXDLIN( 276)						bool _hx_tmp1;
HXDLIN( 276)						if ((currentMasks->length > 0)) {
HXLINE( 276)							_hx_tmp1 = !(maskApplied);
            						}
            						else {
HXLINE( 276)							_hx_tmp1 = false;
            						}
HXDLIN( 276)						if (_hx_tmp1) {
HXLINE( 276)							_hx_tmp = ::hx::IsNotNull( child->get_mask() );
            						}
            						else {
HXLINE( 276)							_hx_tmp = false;
            						}
HXDLIN( 276)						if (_hx_tmp) {
HXLINE( 278)							child->set_mask(null());
            						}
            					}
            				}
HXLINE( 283)				if (::hx::IsNotNull( this->_hx___sprite->get_scale9Grid() )) {
HXLINE( 285)					this->_hx___sprite->get_graphics()->clear();
HXLINE( 286)					if ((currentInstances->length > 0)) {
HXLINE( 288)						 ::openfl::display::Shape shape = ( ( ::openfl::display::Shape)(currentInstances->__get(0).StaticCast<  ::swf::exporters::animate::_AnimateTimeline::FrameSymbolInstance >()->displayObject) );
HXLINE( 289)						 ::openfl::display::Graphics _hx_tmp = this->_hx___sprite->get_graphics();
HXDLIN( 289)						_hx_tmp->copyFrom(shape->get_graphics());
            					}
            				}
            				else {
HXLINE( 294)					 ::openfl::display::DisplayObject child;
HXLINE( 295)					int i = currentInstances->length;
HXLINE( 296)					int length = this->_hx___sprite->get_numChildren();
HXLINE( 298)					while((i < length)){
HXLINE( 300)						child = this->_hx___sprite->getChildAt(i);
HXLINE( 304)						{
HXLINE( 304)							int _g = 0;
HXDLIN( 304)							::Array< ::Dynamic> _g1 = this->_hx___activeInstances;
HXDLIN( 304)							while((_g < _g1->length)){
HXLINE( 304)								 ::swf::exporters::animate::_AnimateTimeline::FrameSymbolInstance instance = _g1->__get(_g).StaticCast<  ::swf::exporters::animate::_AnimateTimeline::FrameSymbolInstance >();
HXDLIN( 304)								_g = (_g + 1);
HXLINE( 306)								if (::hx::IsInstanceEq( instance->displayObject,child )) {
HXLINE( 309)									if (::Std_obj::isOfType(child,::hx::ClassOf< ::openfl::display::MovieClip >())) {
HXLINE( 311)										 ::openfl::display::MovieClip movie = ( ( ::openfl::display::MovieClip)(child) );
HXLINE( 312)										movie->gotoAndPlay(1,null());
            									}
HXLINE( 315)									this->_hx___sprite->removeChild(child);
HXLINE( 316)									i = (i - 1);
HXLINE( 317)									length = (length - 1);
            								}
            							}
            						}
HXLINE( 321)						i = (i + 1);
            					}
            				}
HXLINE( 326)				this->_hx___updateInstanceFields();
            			}
HXLINE( 330)			this->_hx___previousFrame = currentFrame;
            		}
            	}


void AnimateTimeline_obj::init( ::openfl::display::Sprite sprite){
            	HX_GC_STACKFRAME(&_hx_pos_6b815c0a222e4771_335_init)
HXLINE( 336)		if (::hx::IsNotNull( this->_hx___activeInstances )) {
HXLINE( 336)			return;
            		}
HXLINE( 338)		this->_hx___sprite = sprite;
HXLINE( 340)		this->_hx___instanceFields = ::Array_obj< ::String >::__new(0);
HXLINE( 341)		this->_hx___previousFrame = -1;
HXLINE( 343)		this->_hx___activeInstances = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 344)		this->_hx___activeInstancesByFrameObjectID =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 345)		this->_hx___currentInstancesByFrameObjectID =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 346)		this->_hx___lastUpdated =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE( 348)		int frame;
HXLINE( 349)		 ::swf::exporters::animate::AnimateFrame frameData;
HXLINE( 350)		 ::swf::exporters::animate::_AnimateTimeline::FrameSymbolInstance instance;
HXLINE( 351)		bool duplicate;
HXLINE( 352)		 ::swf::exporters::animate::AnimateSymbol symbol;
HXLINE( 353)		 ::openfl::display::DisplayObject displayObject;
HXLINE( 357)		{
HXLINE( 357)			int _g = 0;
HXDLIN( 357)			int _g1 = this->scenes->__get(0).StaticCast<  ::openfl::display::Scene >()->numFrames;
HXDLIN( 357)			while((_g < _g1)){
HXLINE( 357)				_g = (_g + 1);
HXDLIN( 357)				int i = (_g - 1);
HXLINE( 359)				frame = (i + 1);
HXLINE( 360)				frameData = this->_hx___symbol->frames->__get(i).StaticCast<  ::swf::exporters::animate::AnimateFrame >();
HXLINE( 362)				if (::hx::IsNull( frameData->objects )) {
HXLINE( 362)					continue;
            				}
HXLINE( 364)				{
HXLINE( 364)					int _g1 = 0;
HXDLIN( 364)					::Array< ::Dynamic> _g2 = frameData->objects;
HXDLIN( 364)					while((_g1 < _g2->length)){
HXLINE( 364)						 ::swf::exporters::animate::AnimateFrameObject frameObject = _g2->__get(_g1).StaticCast<  ::swf::exporters::animate::AnimateFrameObject >();
HXDLIN( 364)						_g1 = (_g1 + 1);
HXLINE( 366)						if ((frameObject->type == 0)) {
HXLINE( 368)							if (this->_hx___activeInstancesByFrameObjectID->exists(frameObject->id)) {
HXLINE( 370)								continue;
            							}
            							else {
HXLINE( 374)								instance = null();
HXLINE( 375)								duplicate = false;
HXLINE( 377)								{
HXLINE( 377)									int _g = 0;
HXDLIN( 377)									::Array< ::Dynamic> _g1 = this->_hx___activeInstances;
HXDLIN( 377)									while((_g < _g1->length)){
HXLINE( 377)										 ::swf::exporters::animate::_AnimateTimeline::FrameSymbolInstance activeInstance = _g1->__get(_g).StaticCast<  ::swf::exporters::animate::_AnimateTimeline::FrameSymbolInstance >();
HXDLIN( 377)										_g = (_g + 1);
HXLINE( 379)										bool _hx_tmp;
HXDLIN( 379)										bool _hx_tmp1;
HXDLIN( 379)										if (::hx::IsNotNull( activeInstance->displayObject )) {
HXLINE( 379)											_hx_tmp1 = (activeInstance->characterID == frameObject->symbol);
            										}
            										else {
HXLINE( 379)											_hx_tmp1 = false;
            										}
HXDLIN( 379)										if (_hx_tmp1) {
HXLINE( 379)											_hx_tmp = (activeInstance->depth == frameObject->depth);
            										}
            										else {
HXLINE( 379)											_hx_tmp = false;
            										}
HXDLIN( 379)										if (_hx_tmp) {
HXLINE( 384)											instance = activeInstance;
HXLINE( 385)											duplicate = true;
HXLINE( 386)											goto _hx_goto_15;
            										}
            									}
            									_hx_goto_15:;
            								}
            							}
HXLINE( 391)							if (::hx::IsNull( instance )) {
HXLINE( 393)								symbol = ( ( ::swf::exporters::animate::AnimateSymbol)(this->_hx___library->symbols->get(frameObject->symbol)) );
HXLINE( 395)								if (::hx::IsNotNull( symbol )) {
HXLINE( 397)									displayObject = symbol->_hx___createObject(this->_hx___library);
HXLINE( 399)									if (::hx::IsNotNull( displayObject )) {
HXLINE( 408)										instance =  ::swf::exporters::animate::_AnimateTimeline::FrameSymbolInstance_obj::__alloc( HX_CTX ,frame,frameObject->id,frameObject->symbol,frameObject->depth,displayObject,frameObject->clipDepth);
            									}
            								}
            							}
HXLINE( 414)							if (::hx::IsNotNull( instance )) {
HXLINE( 416)								this->_hx___activeInstancesByFrameObjectID->set(frameObject->id,instance);
HXLINE( 418)								if (!(duplicate)) {
HXLINE( 420)									this->_hx___activeInstances->push(instance);
HXLINE( 421)									this->_hx___updateDisplayObject(instance->displayObject,frameObject,null());
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 429)		this->_hx___instanceFields = ::Type_obj::getInstanceFields(::Type_obj::getClass(this->_hx___sprite));
HXLINE( 432)		this->enterFrame(1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimateTimeline_obj,init,(void))

void AnimateTimeline_obj::initializeSprite( ::openfl::display::Sprite sprite){
            	HX_STACKFRAME(&_hx_pos_6b815c0a222e4771_436_initializeSprite)
HXLINE( 437)		if (::hx::IsNotNull( this->_hx___activeInstances )) {
HXLINE( 437)			return;
            		}
HXLINE( 439)		this->init(sprite);
HXLINE( 441)		this->_hx___activeInstances = null();
HXLINE( 442)		this->_hx___activeInstancesByFrameObjectID = null();
HXLINE( 443)		this->_hx___currentInstancesByFrameObjectID = null();
HXLINE( 444)		this->_hx___instanceFields = null();
HXLINE( 445)		this->_hx___lastUpdated = null();
HXLINE( 446)		this->_hx___sprite = null();
HXLINE( 447)		this->_hx___previousFrame = -1;
            	}


int AnimateTimeline_obj::_hx___sortDepths( ::swf::exporters::animate::_AnimateTimeline::FrameSymbolInstance a, ::swf::exporters::animate::_AnimateTimeline::FrameSymbolInstance b){
            	HX_STACKFRAME(&_hx_pos_6b815c0a222e4771_452___sortDepths)
HXDLIN( 452)		return (a->depth - b->depth);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AnimateTimeline_obj,_hx___sortDepths,return )

void AnimateTimeline_obj::_hx___updateDisplayObject( ::openfl::display::DisplayObject displayObject, ::swf::exporters::animate::AnimateFrameObject frameObject,::hx::Null< bool >  __o_reset){
            		bool reset = __o_reset.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_6b815c0a222e4771_456___updateDisplayObject)
HXLINE( 457)		if (::hx::IsNull( displayObject )) {
HXLINE( 457)			return;
            		}
HXLINE( 458)		if (::hx::IsInstanceEq( this->_hx___lastUpdated->get(displayObject),frameObject )) {
HXLINE( 458)			return;
            		}
HXLINE( 460)		if (::hx::IsNotNull( frameObject->name )) {
HXLINE( 462)			displayObject->set_name(frameObject->name);
            		}
HXLINE( 465)		if (::hx::IsNotNull( frameObject->matrix )) {
HXLINE( 467)			displayObject->get_transform()->set_matrix(frameObject->matrix);
            		}
HXLINE( 470)		if (::hx::IsNotNull( frameObject->colorTransform )) {
HXLINE( 472)			displayObject->get_transform()->set_colorTransform(frameObject->colorTransform);
            		}
            		else {
HXLINE( 474)			bool _hx_tmp;
HXDLIN( 474)			if (reset) {
HXLINE( 474)				_hx_tmp = !(displayObject->get_transform()->get_colorTransform()->_hx___isDefault(false));
            			}
            			else {
HXLINE( 474)				_hx_tmp = false;
            			}
HXDLIN( 474)			if (_hx_tmp) {
HXLINE( 476)				 ::openfl::geom::Transform _hx_tmp = displayObject->get_transform();
HXDLIN( 476)				_hx_tmp->set_colorTransform( ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null()));
            			}
            		}
HXLINE( 479)		displayObject->set_transform(displayObject->get_transform());
HXLINE( 481)		if (::hx::IsNotNull( frameObject->filters )) {
HXLINE( 483)			::Array< ::Dynamic> filters = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 485)			{
HXLINE( 485)				int _g = 0;
HXDLIN( 485)				::Array< ::Dynamic> _g1 = frameObject->filters;
HXDLIN( 485)				while((_g < _g1->length)){
HXLINE( 485)					 ::swf::exporters::core::FilterType filter = _g1->__get(_g).StaticCast<  ::swf::exporters::core::FilterType >();
HXDLIN( 485)					_g = (_g + 1);
HXLINE( 487)					switch((int)(filter->_hx_getIndex())){
            						case (int)0: {
HXLINE( 489)							Float blurX = filter->_hx_getFloat(0);
HXDLIN( 489)							Float blurY = filter->_hx_getFloat(1);
HXDLIN( 489)							int quality = filter->_hx_getInt(2);
HXLINE( 490)							filters->push( ::openfl::filters::BlurFilter_obj::__alloc( HX_CTX ,blurX,blurY,quality));
            						}
            						break;
            						case (int)1: {
HXLINE( 492)							::Array< Float > matrix = filter->_hx_getObject(0).StaticCast< ::Array< Float > >();
HXLINE( 493)							filters->push( ::openfl::filters::ColorMatrixFilter_obj::__alloc( HX_CTX ,matrix));
            						}
            						break;
            						case (int)2: {
HXLINE( 495)							Float distance = filter->_hx_getFloat(0);
HXDLIN( 495)							Float angle = filter->_hx_getFloat(1);
HXDLIN( 495)							int color = filter->_hx_getInt(2);
HXDLIN( 495)							Float alpha = filter->_hx_getFloat(3);
HXDLIN( 495)							Float blurX = filter->_hx_getFloat(4);
HXDLIN( 495)							Float blurY = filter->_hx_getFloat(5);
HXDLIN( 495)							Float strength = filter->_hx_getFloat(6);
HXDLIN( 495)							int quality = filter->_hx_getInt(7);
HXDLIN( 495)							bool inner = filter->_hx_getBool(8);
HXDLIN( 495)							bool knockout = filter->_hx_getBool(9);
HXDLIN( 495)							bool hideObject = filter->_hx_getBool(10);
HXLINE( 496)							filters->push( ::openfl::filters::DropShadowFilter_obj::__alloc( HX_CTX ,distance,angle,color,alpha,blurX,blurY,strength,quality,inner,knockout,hideObject));
            						}
            						break;
            						case (int)3: {
HXLINE( 498)							int color = filter->_hx_getInt(0);
HXDLIN( 498)							Float alpha = filter->_hx_getFloat(1);
HXDLIN( 498)							Float blurX = filter->_hx_getFloat(2);
HXDLIN( 498)							Float blurY = filter->_hx_getFloat(3);
HXDLIN( 498)							Float strength = filter->_hx_getFloat(4);
HXDLIN( 498)							int quality = filter->_hx_getInt(5);
HXDLIN( 498)							bool inner = filter->_hx_getBool(6);
HXDLIN( 498)							bool knockout = filter->_hx_getBool(7);
HXLINE( 499)							filters->push( ::openfl::filters::GlowFilter_obj::__alloc( HX_CTX ,color,alpha,blurX,blurY,strength,quality,inner,knockout));
            						}
            						break;
            					}
            				}
            			}
HXLINE( 503)			displayObject->set_filters(filters);
            		}
            		else {
HXLINE( 507)			displayObject->set_filters(null());
            		}
HXLINE( 510)		if (::hx::IsNotNull( frameObject->visible )) {
HXLINE( 512)			displayObject->set_visible(( (bool)(frameObject->visible) ));
            		}
HXLINE( 515)		if (::hx::IsNotNull( frameObject->blendMode )) {
HXLINE( 517)			displayObject->set_blendMode(frameObject->blendMode);
            		}
HXLINE( 520)		if (::hx::IsNotNull( frameObject->cacheAsBitmap )) {
HXLINE( 522)			displayObject->set_cacheAsBitmap(( (bool)(frameObject->cacheAsBitmap) ));
            		}
HXLINE( 529)		this->_hx___lastUpdated->set(displayObject,frameObject);
            	}


HX_DEFINE_DYNAMIC_FUNC3(AnimateTimeline_obj,_hx___updateDisplayObject,(void))

void AnimateTimeline_obj::_hx___updateInstanceFields(){
            	HX_STACKFRAME(&_hx_pos_6b815c0a222e4771_534___updateInstanceFields)
HXDLIN( 534)		int _g = 0;
HXDLIN( 534)		::Array< ::String > _g1 = this->_hx___instanceFields;
HXDLIN( 534)		while((_g < _g1->length)){
HXDLIN( 534)			::String field = _g1->__get(_g);
HXDLIN( 534)			_g = (_g + 1);
HXLINE( 536)			int length = this->_hx___sprite->get_numChildren();
HXLINE( 537)			{
HXLINE( 537)				int _g2 = 0;
HXDLIN( 537)				int _g3 = length;
HXDLIN( 537)				while((_g2 < _g3)){
HXLINE( 537)					_g2 = (_g2 + 1);
HXDLIN( 537)					int i = (_g2 - 1);
HXLINE( 539)					 ::openfl::display::DisplayObject child = this->_hx___sprite->getChildAt(i);
HXLINE( 540)					if ((child->get_name() == field)) {
HXLINE( 542)						::Reflect_obj::setField(this->_hx___sprite,field,child);
HXLINE( 543)						goto _hx_goto_22;
            					}
            				}
            				_hx_goto_22:;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimateTimeline_obj,_hx___updateInstanceFields,(void))


::hx::ObjectPtr< AnimateTimeline_obj > AnimateTimeline_obj::__new( ::swf::exporters::animate::AnimateLibrary library, ::swf::exporters::animate::AnimateSpriteSymbol symbol) {
	::hx::ObjectPtr< AnimateTimeline_obj > __this = new AnimateTimeline_obj();
	__this->__construct(library,symbol);
	return __this;
}

::hx::ObjectPtr< AnimateTimeline_obj > AnimateTimeline_obj::__alloc(::hx::Ctx *_hx_ctx, ::swf::exporters::animate::AnimateLibrary library, ::swf::exporters::animate::AnimateSpriteSymbol symbol) {
	AnimateTimeline_obj *__this = (AnimateTimeline_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimateTimeline_obj), true, "swf.exporters.animate.AnimateTimeline"));
	*(void **)__this = AnimateTimeline_obj::_hx_vtable;
	__this->__construct(library,symbol);
	return __this;
}

AnimateTimeline_obj::AnimateTimeline_obj()
{
}

void AnimateTimeline_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimateTimeline);
	HX_MARK_MEMBER_NAME(_hx___activeInstances,"__activeInstances");
	HX_MARK_MEMBER_NAME(_hx___activeInstancesByFrameObjectID,"__activeInstancesByFrameObjectID");
	HX_MARK_MEMBER_NAME(_hx___currentInstancesByFrameObjectID,"__currentInstancesByFrameObjectID");
	HX_MARK_MEMBER_NAME(_hx___instanceFields,"__instanceFields");
	HX_MARK_MEMBER_NAME(_hx___lastUpdated,"__lastUpdated");
	HX_MARK_MEMBER_NAME(_hx___library,"__library");
	HX_MARK_MEMBER_NAME(_hx___previousFrame,"__previousFrame");
	HX_MARK_MEMBER_NAME(_hx___sprite,"__sprite");
	HX_MARK_MEMBER_NAME(_hx___symbol,"__symbol");
	 ::openfl::display::Timeline_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimateTimeline_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___activeInstances,"__activeInstances");
	HX_VISIT_MEMBER_NAME(_hx___activeInstancesByFrameObjectID,"__activeInstancesByFrameObjectID");
	HX_VISIT_MEMBER_NAME(_hx___currentInstancesByFrameObjectID,"__currentInstancesByFrameObjectID");
	HX_VISIT_MEMBER_NAME(_hx___instanceFields,"__instanceFields");
	HX_VISIT_MEMBER_NAME(_hx___lastUpdated,"__lastUpdated");
	HX_VISIT_MEMBER_NAME(_hx___library,"__library");
	HX_VISIT_MEMBER_NAME(_hx___previousFrame,"__previousFrame");
	HX_VISIT_MEMBER_NAME(_hx___sprite,"__sprite");
	HX_VISIT_MEMBER_NAME(_hx___symbol,"__symbol");
	 ::openfl::display::Timeline_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AnimateTimeline_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__sprite") ) { return ::hx::Val( _hx___sprite ); }
		if (HX_FIELD_EQ(inName,"__symbol") ) { return ::hx::Val( _hx___symbol ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__library") ) { return ::hx::Val( _hx___library ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"enterFrame") ) { return ::hx::Val( enterFrame_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__sortDepths") ) { return ::hx::Val( _hx___sortDepths_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__lastUpdated") ) { return ::hx::Val( _hx___lastUpdated ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__previousFrame") ) { return ::hx::Val( _hx___previousFrame ); }
		if (HX_FIELD_EQ(inName,"attachMovieClip") ) { return ::hx::Val( attachMovieClip_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__instanceFields") ) { return ::hx::Val( _hx___instanceFields ); }
		if (HX_FIELD_EQ(inName,"initializeSprite") ) { return ::hx::Val( initializeSprite_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__activeInstances") ) { return ::hx::Val( _hx___activeInstances ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__updateDisplayObject") ) { return ::hx::Val( _hx___updateDisplayObject_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__updateInstanceFields") ) { return ::hx::Val( _hx___updateInstanceFields_dyn() ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"__activeInstancesByFrameObjectID") ) { return ::hx::Val( _hx___activeInstancesByFrameObjectID ); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"__currentInstancesByFrameObjectID") ) { return ::hx::Val( _hx___currentInstancesByFrameObjectID ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnimateTimeline_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__sprite") ) { _hx___sprite=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__symbol") ) { _hx___symbol=inValue.Cast<  ::swf::exporters::animate::AnimateSpriteSymbol >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__library") ) { _hx___library=inValue.Cast<  ::swf::exporters::animate::AnimateLibrary >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__lastUpdated") ) { _hx___lastUpdated=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__previousFrame") ) { _hx___previousFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__instanceFields") ) { _hx___instanceFields=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__activeInstances") ) { _hx___activeInstances=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"__activeInstancesByFrameObjectID") ) { _hx___activeInstancesByFrameObjectID=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"__currentInstancesByFrameObjectID") ) { _hx___currentInstancesByFrameObjectID=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimateTimeline_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__activeInstances",78,e9,49,03));
	outFields->push(HX_("__activeInstancesByFrameObjectID",b8,3a,9c,5b));
	outFields->push(HX_("__currentInstancesByFrameObjectID",eb,3b,89,d9));
	outFields->push(HX_("__instanceFields",0e,0b,63,af));
	outFields->push(HX_("__lastUpdated",65,b7,f3,9a));
	outFields->push(HX_("__library",db,77,be,c0));
	outFields->push(HX_("__previousFrame",56,bd,29,b5));
	outFields->push(HX_("__sprite",25,47,c5,6b));
	outFields->push(HX_("__symbol",78,1a,0d,97));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimateTimeline_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AnimateTimeline_obj,_hx___activeInstances),HX_("__activeInstances",78,e9,49,03)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(AnimateTimeline_obj,_hx___activeInstancesByFrameObjectID),HX_("__activeInstancesByFrameObjectID",b8,3a,9c,5b)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(AnimateTimeline_obj,_hx___currentInstancesByFrameObjectID),HX_("__currentInstancesByFrameObjectID",eb,3b,89,d9)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(AnimateTimeline_obj,_hx___instanceFields),HX_("__instanceFields",0e,0b,63,af)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(AnimateTimeline_obj,_hx___lastUpdated),HX_("__lastUpdated",65,b7,f3,9a)},
	{::hx::fsObject /*  ::swf::exporters::animate::AnimateLibrary */ ,(int)offsetof(AnimateTimeline_obj,_hx___library),HX_("__library",db,77,be,c0)},
	{::hx::fsInt,(int)offsetof(AnimateTimeline_obj,_hx___previousFrame),HX_("__previousFrame",56,bd,29,b5)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(AnimateTimeline_obj,_hx___sprite),HX_("__sprite",25,47,c5,6b)},
	{::hx::fsObject /*  ::swf::exporters::animate::AnimateSpriteSymbol */ ,(int)offsetof(AnimateTimeline_obj,_hx___symbol),HX_("__symbol",78,1a,0d,97)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnimateTimeline_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimateTimeline_obj_sMemberFields[] = {
	HX_("__activeInstances",78,e9,49,03),
	HX_("__activeInstancesByFrameObjectID",b8,3a,9c,5b),
	HX_("__currentInstancesByFrameObjectID",eb,3b,89,d9),
	HX_("__instanceFields",0e,0b,63,af),
	HX_("__lastUpdated",65,b7,f3,9a),
	HX_("__library",db,77,be,c0),
	HX_("__previousFrame",56,bd,29,b5),
	HX_("__sprite",25,47,c5,6b),
	HX_("__symbol",78,1a,0d,97),
	HX_("attachMovieClip",1b,c6,d4,dc),
	HX_("enterFrame",f5,03,50,02),
	HX_("init",10,3b,bb,45),
	HX_("initializeSprite",75,5d,95,3d),
	HX_("__sortDepths",2e,e3,01,03),
	HX_("__updateDisplayObject",b8,53,1d,d8),
	HX_("__updateInstanceFields",f7,5a,5e,c5),
	::String(null()) };

::hx::Class AnimateTimeline_obj::__mClass;

void AnimateTimeline_obj::__register()
{
	AnimateTimeline_obj _hx_dummy;
	AnimateTimeline_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("swf.exporters.animate.AnimateTimeline",2d,40,54,ea);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimateTimeline_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimateTimeline_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimateTimeline_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimateTimeline_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace swf
} // end namespace exporters
} // end namespace animate
