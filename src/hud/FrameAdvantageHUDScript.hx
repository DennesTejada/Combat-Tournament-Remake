package hud;
import engine.events.GameEvent;
import openfl.text.Font;
import openfl.text.TextField;
import openfl.text.TextFormat;

/**
 * ...
 * @author ...
 */
class FrameAdvantageHUDScript extends TextField
{
	public var lifeSpanFrames:Int = 10;
	public var t:TextField;
    public var tf:TextFormat;
    public var f:Font;
    
	public function new() 
	{
		super();
        tf = new TextFormat(null, 46, 0xffffff);
        defaultTextFormat = tf;
		Main.gameLoop.addEventListener(GameEvent.ON_GAME_LOOP, onUpdate);
	}
	public function onUpdate(e:GameEvent){
		if (lifeSpanFrames > 0){
			lifeSpanFrames -= 1;
		} else {
			parent.removeChild(this);
			Main.gameLoop.removeEventListener(GameEvent.ON_GAME_LOOP, onUpdate);
		}
	}
}