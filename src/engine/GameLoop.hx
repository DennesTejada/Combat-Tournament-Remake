package engine;
import engine.events.GameEvent;
import openfl.display.Sprite;
import openfl.events.Event;
import haxe.Timer;

/**
 * FixedDelta time method to insure the gameplay never slows down or speed up
 * "ENTER_FRAME" is a render frame in 60 fps. It is not the game speed
 * 
 * ...
 * @author ...
 */
class GameLoop extends Sprite
{
	private var currentTime:Float = Timer.stamp();
	private var previousTime:Float = Timer.stamp();
	private var timeAccel:Float = 0;
	private var delta:Float = 0;
	// 1 / frame Rate
	private var gameSpeed:Float = 1 / 40; 
	
	public function new() 
	{
		super();
		addEventListener(Event.ENTER_FRAME, enter_frame);
	}
	public function enter_frame(e:Event){
		// delta time formula
		currentTime = Timer.stamp();
		//difference = delta
		delta = currentTime - previousTime;
		previousTime = currentTime;
		//
		timeAccel += delta;
		//1 secound is our limit of playing the game super fast under a render frame
		timeAccel = Math.min(timeAccel, 1);
		
		while (timeAccel >= gameSpeed){
			dispatchEvent(new GameEvent(GameEvent.ON_GAME_LOOP));
			Global.game.onUpdate();
			timeAccel -= gameSpeed;
		}
		
		//make sure the game is listening to user's inputs at all times
		stage.focus = Main.gameInput;
	}
	public function resetTime(){
		timeAccel = 0;
	}
}