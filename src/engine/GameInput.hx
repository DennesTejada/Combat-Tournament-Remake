package engine;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.KeyboardEvent;
import openfl.ui.Keyboard;
import openfl.utils.Object;
/**
 * ...
 * This is where we get the local inputs and what the user set up the keybinds
 * 
 * @author ...
 */
class GameInput extends Sprite
{
	//player1 keyBinds
	//It's set up in a way where its customizable for the user
	public var BIND_UP:UInt = Keyboard.UP;
	public var BIND_DOWN:UInt = Keyboard.DOWN;
	public var BIND_LEFT:UInt = Keyboard.LEFT;
	public var BIND_RIGHT:UInt = Keyboard.RIGHT;
	public var BIND_ATTACK:UInt = Keyboard.A;
	public var BIND_SPECIAL:UInt = Keyboard.S;
	public var BIND_BLOCK:UInt = Keyboard.D;
	public var BIND_JUMP:UInt = Keyboard.SPACE;
	//player1 key
	public var UP:Bool = false;
	public var DOWN:Bool = false;
	public var LEFT:Bool = false;
	public var RIGHT:Bool = false;
	public var ATTACK:Bool = false;
	public var SPECIAL:Bool = false;
	public var BLOCK:Bool = false;
	public var JUMP:Bool = false;
	public var COUNTER:Bool = false;

	public function new() 
	{
		super();
		addEventListener(KeyboardEvent.KEY_DOWN, key_down);
		addEventListener(KeyboardEvent.KEY_UP, key_up);
	}
	public function key_down(e:KeyboardEvent){
		if (e.keyCode == BIND_UP){
			UP = true;
		}
		if (e.keyCode == BIND_DOWN){
			DOWN = true;
		}
		if (e.keyCode == BIND_LEFT){
			LEFT = true;
		}
		if (e.keyCode == BIND_RIGHT){
			RIGHT = true;
		}
		if (e.keyCode == BIND_ATTACK){
			ATTACK = true;
		}
		if (e.keyCode == BIND_SPECIAL){
			SPECIAL = true;
		}
		if (e.keyCode == BIND_BLOCK){
			BLOCK = true;
		}
		if (e.keyCode == BIND_JUMP){
			JUMP = true;
		}
		
		
		//debug
		if (e.keyCode == Keyboard.F1){
			Global.restart();
			//Global.gameServer.createServer();
			
		}
		if (e.keyCode == Keyboard.F2){
			//debug username
			var data:Object = new Object();
			data.username = "player" + Math.random() % 999;
			data.character = "Slaptastic";
			//Global.gameClient.localPlayerInfo = data;
			
			//Global.gameClient.joinServer();
		}
	}
	public function key_up(e:KeyboardEvent){
		if (e.keyCode == BIND_UP){
			UP = false;
		}
		if (e.keyCode == BIND_DOWN){
			DOWN = false;
		}
		if (e.keyCode == BIND_LEFT){
			LEFT = false;
		}
		if (e.keyCode == BIND_RIGHT){
			RIGHT = false;
		}
		if (e.keyCode == BIND_ATTACK){
			ATTACK = false;
		}
		if (e.keyCode == BIND_SPECIAL){
			SPECIAL = false;
		}
		if (e.keyCode == BIND_BLOCK){
			BLOCK = false;
		}
		if (e.keyCode == BIND_JUMP){
			JUMP = false;
		}
	}
}