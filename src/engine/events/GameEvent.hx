package engine.events;
import openfl.events.Event;

/**
 * ...
 * @author ...
 */
class GameEvent extends Event
{
	static public var ON_GAME_LOOP:String = "ON_GAME_LOOP";

	public function new(type:String) 
	{
		super(type);
	}
	
}