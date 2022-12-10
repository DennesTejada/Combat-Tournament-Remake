#ifndef INCLUDED_engine_PlayerDefault
#define INCLUDED_engine_PlayerDefault

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(engine,HitBoxInfomation)
HX_DECLARE_CLASS1(engine,PlayerDefault)
HX_DECLARE_CLASS1(engine,States)
HX_DECLARE_CLASS2(engine,events,GameEvent)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace engine{


class HXCPP_CLASS_ATTRIBUTES PlayerDefault_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef PlayerDefault_obj OBJ_;
		PlayerDefault_obj();

	public:
		enum { _hx_ClassId = 0x0a5cbc5a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="engine.PlayerDefault")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"engine.PlayerDefault"); }
		static ::hx::ObjectPtr< PlayerDefault_obj > __new();
		static ::hx::ObjectPtr< PlayerDefault_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PlayerDefault_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PlayerDefault",40,03,2d,5b); }

		Float hp;
		 ::engine::HitBoxInfomation hitbox;
		Float maxXspeed;
		Float xspeed;
		Float yspeed;
		Float friction;
		Float gravity;
		 ::openfl::display::Sprite mapCollision;
		bool onground;
		bool onrightWall;
		bool onleftWall;
		bool UP;
		bool DOWN;
		bool LEFT;
		bool RIGHT;
		bool ATTACK;
		bool SPECIAL;
		bool BLOCK;
		bool JUMP;
		bool JUMP_PRESSED;
		bool ATTACK_PRESSED;
		int isPlayer;
		Float runSpeed;
		Float airMoveSpeed;
		int jumpPower;
		int maxJumps;
		int jumpCount;
		bool canMove;
		bool canAttack;
		bool canJump;
		bool canAirJump;
		 ::engine::States state;
		::String lastCallCharacterStateEvent;
		void getInputs();
		::Dynamic getInputs_dyn();

		void changeCharState(::String state);
		::Dynamic changeCharState_dyn();

		void onHit( ::openfl::display::DisplayObject mc);
		::Dynamic onHit_dyn();

		void update( ::engine::events::GameEvent e);
		::Dynamic update_dyn();

		void jumpUp(Float power);
		::Dynamic jumpUp_dyn();

		void turnRight();
		::Dynamic turnRight_dyn();

		void turnLeft();
		::Dynamic turnLeft_dyn();

};

} // end namespace engine

#endif /* INCLUDED_engine_PlayerDefault */ 
