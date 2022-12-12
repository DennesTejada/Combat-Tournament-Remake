package characters;
import engine.HitBoxInfomation;
import engine.events.CharacterStateEvent;
import engine.events.GameEvent;

/**
 * ...
 * @author ...
 */
class SlaptasticBot extends SlaptasticGameplay
{
	var blockChance:Float = 80;
	var counterChance:Float = 10;
	public function new() 
	{
		super();
		addEventListener(CharacterStateEvent.ON_BEFORE_GETTING_HIT, onBeforeGettingHit);
		Main.gameLoop.addEventListener(GameEvent.ON_GAME_LOOP, onGameLoop);
	}
	public function onGameLoop(e:GameEvent){
		if (hitStop <= 0 && hitStun <= 0){
			resetButtons();
		}
	}
	public function resetButtons(){
		UP = false;
		DOWN = false;
		LEFT = false;
		RIGHT = false;
		ATTACK = false;
		SPECIAL = false;
		BLOCK = false;
		JUMP = false;
		COUNTER = false;
		COUNTER_PRESSED_BUFFER = 0;
	}
	public function onBeforeGettingHit(e:CharacterStateEvent){
		var hitBox:HitBoxInfomation = e.data.hitbox;
		var perfectCounter = (Math.random() * 100 <= counterChance);
		if (perfectCounter){
			if (hitBox.blockDirectionX < 0){
				LEFT = true;
			}
			if (hitBox.blockDirectionX > 0){
				RIGHT = true;
			}
			if (hitBox.blockDirectionY < 0){
				UP = true;
			}
			if (hitBox.blockDirectionY > 0){
				DOWN = true;
			}
			COUNTER_PRESSED_BUFFER = 1;
		}
		COUNTER = perfectCounter;
		var perfectBlock = (Math.random() * 100 <= blockChance);
		/*if (perfectBlock){
			if (hitBox.blockDirectionX < 0){
				LEFT = true;
			}
			if (hitBox.blockDirectionX > 0){
				RIGHT = true;
			}
			if (hitBox.blockDirectionY < 0){
				UP = true;
			}
			if (hitBox.blockDirectionY > 0){
				DOWN = true;
			}
		}*/
		BLOCK = perfectBlock;
	}
}