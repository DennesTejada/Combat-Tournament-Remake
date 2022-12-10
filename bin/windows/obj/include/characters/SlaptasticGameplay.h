#ifndef INCLUDED_characters_SlaptasticGameplay
#define INCLUDED_characters_SlaptasticGameplay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_engine_PlayerDefault
#include <engine/PlayerDefault.h>
#endif
HX_DECLARE_CLASS0(Slaptastic)
HX_DECLARE_CLASS1(characters,SlaptasticGameplay)
HX_DECLARE_CLASS1(engine,PlayerDefault)
HX_DECLARE_CLASS2(engine,events,CharacterStateEvent)
HX_DECLARE_CLASS2(engine,events,GameEvent)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace characters{


class HXCPP_CLASS_ATTRIBUTES SlaptasticGameplay_obj : public  ::engine::PlayerDefault_obj
{
	public:
		typedef  ::engine::PlayerDefault_obj super;
		typedef SlaptasticGameplay_obj OBJ_;
		SlaptasticGameplay_obj();

	public:
		enum { _hx_ClassId = 0x573da588 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="characters.SlaptasticGameplay")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"characters.SlaptasticGameplay"); }
		static ::hx::ObjectPtr< SlaptasticGameplay_obj > __new();
		static ::hx::ObjectPtr< SlaptasticGameplay_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SlaptasticGameplay_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SlaptasticGameplay",96,35,18,86); }

		 ::Slaptastic stickmen;
		bool loopAnimation;
		bool playAnimation;
		bool returnToIdleOnLastFrame;
		void onTouchGround( ::engine::events::CharacterStateEvent e);
		::Dynamic onTouchGround_dyn();

		void onStance( ::engine::events::CharacterStateEvent e);
		::Dynamic onStance_dyn();

		void onRun( ::engine::events::CharacterStateEvent e);
		::Dynamic onRun_dyn();

		void onDuck( ::engine::events::CharacterStateEvent e);
		::Dynamic onDuck_dyn();

		void onStartJump( ::engine::events::CharacterStateEvent e);
		::Dynamic onStartJump_dyn();

		void onJumpUp( ::engine::events::CharacterStateEvent e);
		::Dynamic onJumpUp_dyn();

		void onJumpDown( ::engine::events::CharacterStateEvent e);
		::Dynamic onJumpDown_dyn();

		void onGotHit( ::engine::events::CharacterStateEvent e);
		::Dynamic onGotHit_dyn();

		void onUpdate( ::engine::events::GameEvent e);
		::Dynamic onUpdate_dyn();

		void updateSpriteAnimation();
		::Dynamic updateSpriteAnimation_dyn();

		void updateHitBoxes();
		::Dynamic updateHitBoxes_dyn();

};

} // end namespace characters

#endif /* INCLUDED_characters_SlaptasticGameplay */ 
