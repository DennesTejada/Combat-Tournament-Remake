package client;
import engine.events.GameEvent;
import engine.events.NetworkEvent;
import openfl.display.Sprite;
import openfl.utils.Object;

class ClientInput extends Sprite
{
	private var inputList:Array<Object> = new Array<Object>();
	private var maxInputs:Int = 40;
	private var index:Int = 0;
	public function new() 
	{
		super();
		//populate input List
		var a:Int = 0;
		while (a < maxInputs){
			inputList.push(new Object());
			a++;
		}
		Main.gameLoop.addEventListener(GameEvent.ON_GAME_LOOP, onUpdate);
	}
	public function reset(){
		index = 0;
	}
	public function onUpdate(e:GameEvent){
		//create new input and store it in input list
		var newInput:Object = new Object();
		newInput.UP = Main.gameInput.UP;
		newInput.DOWN = Main.gameInput.DOWN;
		newInput.LEFT = Main.gameInput.LEFT;
		newInput.RIGHT = Main.gameInput.RIGHT;
		newInput.ATTACK = Main.gameInput.ATTACK;
		newInput.SPECIAL = Main.gameInput.SPECIAL;
		newInput.BLOCK = Main.gameInput.BLOCK;
		newInput.JUMP = Main.gameInput.JUMP;
		inputList[index % inputList.length] = newInput;
		index += 1;
		dispatchEvent(new NetworkEvent(NetworkEvent.ON_INPUT_UPDATE,newInput));
	}
}