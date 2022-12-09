package;

import engine.GameInput;
import engine.GameLoop;
import flash.display.MovieClip;
import openfl.display.Sprite;
import openfl.Lib;

/**
 * ...
 * 
 * @author Dennes Tejada
 */
class Main extends Sprite 
{
	private var scene:Sprite;
	static public var gameInput:GameInput;
	static public var gameLoop:GameLoop;
	static public var instance:Main;
	public function new() 
	{
		super();
		instance = this;
		
		gameLoop = new GameLoop();
		stage.addChild(gameLoop);
		
		gameInput = new GameInput();
		stage.addChild(gameInput);
		
		//debug test
		createMatch();
	}
	public function createMatch(){
		Global.game.localPlayer = 1;
		Global.game.createPlayerInfomation("player1", "Slaptastic", "default", null, 1);
		scene = new GameScene();
		addChild(scene);
		gameLoop.resetTime();
	}
}
