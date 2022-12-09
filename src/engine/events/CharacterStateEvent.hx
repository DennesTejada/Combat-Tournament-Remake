package engine.events;
import openfl.events.Event;
import openfl.utils.Object;
import openfl.utils.Object.ObjectType;

/**
 * ...
 * @author ...
 */
class CharacterStateEvent extends Event
{
	static public var STANCE:String = "STANCE";
	static public var RUN:String = "RUN";
	static public var START_JUMP:String = "START_JUMP";
	static public var JUMP_UP:String = "JUMP_UP";
	static public var JUMP_DOWN:String = "JUMP_DOWN";
	static public var DUCK:String = "DUCK";
	static public var ON_TOUCH_GROUND:String = "ON_TOUCH_GROUND";
	static public var ON_GOT_HIT:String = "ON_GOT_HIT";
	
	public var data:Object;
	public function new(type:String="null",obj:Object=null) 
	{
		data = obj;
		super(type,obj);
	}
	
}