#ifndef INCLUDED_engine_States
#define INCLUDED_engine_States

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(engine,States)
namespace engine{


class States_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef States_obj OBJ_;

	public:
		States_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("engine.States",8e,b8,48,65); }
		::String __ToString() const { return HX_("States.",8c,68,b3,03) + _hx_tag; }

		static ::engine::States ATTACK;
		static inline ::engine::States ATTACK_dyn() { return ATTACK; }
		static ::engine::States DEAD;
		static inline ::engine::States DEAD_dyn() { return DEAD; }
		static ::engine::States FREE;
		static inline ::engine::States FREE_dyn() { return FREE; }
		static ::engine::States HURT;
		static inline ::engine::States HURT_dyn() { return HURT; }
		static ::engine::States START_JUMP;
		static inline ::engine::States START_JUMP_dyn() { return START_JUMP; }
};

} // end namespace engine

#endif /* INCLUDED_engine_States */ 
