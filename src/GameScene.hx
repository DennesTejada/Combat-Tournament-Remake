package;
import engine.Camera;
import flash.display.MovieClip;
import flash.display.Sprite;
import flash.events.Event;

/**
 * ...
 * @author Dennes Tejada
 */
class GameScene extends Sprite
{
	public var camera:Camera;
	public function new() 
	{
		super();
		//debug
		addEventListener(Event.ADDED_TO_STAGE, added_to_stage);
	}
	public function added_to_stage(e:Event){
		var stage:MovieClip = new MovieClip();
		if (Global.game.map == "Box"){
			stage = new BoxStage();
			addChild(stage);
			var ground:MovieClip = Std.downcast(stage, BoxStage).ground;
			Global.game.createAllPlayers(this, ground);
		}
		camera = new Camera();
		camera.target = Global.game.setViewToPlayer(Global.game.localPlayer);
		addChild(camera);
	}
	
}