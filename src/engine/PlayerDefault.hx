package engine;
import engine.events.CharacterStateEvent;
import engine.events.GameEvent;
import openfl.display.DisplayObject;
import openfl.display.MovieClip;
import openfl.display.Sprite;
import openfl.utils.Object;

/**
 * ...
 * @author ...
 */
enum States {
		FREE;
		ATTACK;
		HURT;
		START_JUMP;
		DEAD;
	}
class PlayerDefault extends Sprite
{
	public var hp:Float = 100;
	public var hitbox:HitBoxInfomation;
	public var maxXspeed:Float = 0;
	public var xspeed:Float = 0;
	public var yspeed:Float = 0;
	public var friction:Float = .70;
	public var gravity:Float = 0.8;
	
	public var mapCollision:Sprite;
	public var onground:Bool = false;
	public var onrightWall:Bool = false;
	public var onleftWall:Bool = false;
	
	public var UP:Bool = false;
	public var DOWN:Bool = false;
	public var LEFT:Bool = false;
	public var RIGHT:Bool = false;
	public var ATTACK:Bool = false;
	public var SPECIAL:Bool = false;
	public var BLOCK:Bool = false;
	public var JUMP:Bool = false;
	
	public var JUMP_PRESSED:Bool = false;
	public var ATTACK_PRESSED:Bool = false;
	
	public var isPlayer:Int = 0;
	
	//character stats default
	private var runSpeed = 2.5;
	private var airMoveSpeed = 2.5 / 3;
	private var jumpPower = -10;
	private var maxJumps = 3;
	
	
	private var jumpCount = 0;
	public var canMove:Bool = false;
	public var canAttack:Bool = false;
	public var canJump:Bool = false;
	public var canAirJump:Bool = false;
	public var state = States.FREE;
	private var lastCallCharacterStateEvent:String;
	public function new() 
	{
		super();
		hp = 100;
		Main.gameLoop.addEventListener(GameEvent.ON_GAME_LOOP, update);
	}
	public function getInputs(){
		if (isPlayer == Global.game.localPlayer && Global.game.isNetGame==false){
			JUMP_PRESSED = !JUMP && Main.gameInput.JUMP;
			ATTACK_PRESSED = !ATTACK && Main.gameInput.ATTACK;
			UP = Main.gameInput.UP;
			DOWN = Main.gameInput.DOWN;
			LEFT = Main.gameInput.LEFT;
			RIGHT = Main.gameInput.RIGHT;
			ATTACK = Main.gameInput.ATTACK;
			SPECIAL = Main.gameInput.SPECIAL;
			BLOCK = Main.gameInput.BLOCK;
			JUMP = Main.gameInput.JUMP;
		}
	}
	private function changeCharState(state){
		if (lastCallCharacterStateEvent != state){
			dispatchEvent(new CharacterStateEvent(state));
			lastCallCharacterStateEvent = state;
		}
	}
	public function onHit(mc:DisplayObject){
		var playerWhoHitMe:PlayerDefault = Std.downcast(mc, PlayerDefault);
		if (playerWhoHitMe == null){
			return;
		}
		var hitbox:HitBoxInfomation = playerWhoHitMe.hitbox;
		if (hitbox == null){
			return;
		}
		xspeed = hitbox.xspeed;
		yspeed = hitbox.yspeed;
		friction = hitbox.friction;
		gravity = hitbox.gravity;
		this.hp = hitbox.damage;
		if (hitbox.isLauncher){
			
		}
		if (playerWhoHitMe.x > this.x){
			turnRight();
		}
		if (playerWhoHitMe.x < this.x){
			turnLeft();
		}
		var eventObj:Object = new Object();
		eventObj.victim = this;
		eventObj.hitter = hitbox.hitter;
		eventObj.isLauncher = hitbox.isLauncher;
		dispatchEvent(new CharacterStateEvent(CharacterStateEvent.ON_GOT_HIT, eventObj));
	}
	public function update(e:GameEvent){
		getInputs();
		/*
		 * movement
		 */
		if (state == States.FREE){
			gravity = 0.5;
			canMove = true;
			canAttack = true;
			canJump = true;
			canAirJump = (!onground);
		}
		if (state == States.ATTACK){
			canMove = !onground;
			canJump = false;
			canAirJump = false;
		}
		if (state == States.START_JUMP){
			canMove = false;
			canAttack = true;
			canJump = false;
			canAirJump = false;
		}
		
		if (canMove){
			maxXspeed = 10;
			if (!onground){
				friction = .95;
				if (RIGHT){
					xspeed += airMoveSpeed;
				}
				if (LEFT){
					xspeed -= airMoveSpeed;
				}
				if (yspeed > 0){
					changeCharState(CharacterStateEvent.JUMP_DOWN);
				} else {
					changeCharState(CharacterStateEvent.JUMP_UP);
				}
			}
			if (onground){
				friction = .7;
				if (RIGHT){
					xspeed += runSpeed;
					turnRight();
					changeCharState(CharacterStateEvent.RUN);
				} else if (LEFT){
					xspeed -= runSpeed;
					turnLeft();
					changeCharState(CharacterStateEvent.RUN);
				} else if (DOWN){
					changeCharState(CharacterStateEvent.DUCK);
				} else {
					changeCharState(CharacterStateEvent.STANCE);
				}
			}
			if (xspeed > maxXspeed){
				xspeed = maxXspeed;
			}
			if (xspeed < -maxXspeed){
				xspeed = -maxXspeed;
			}
		}
		if (canJump){
			if (JUMP_PRESSED && onground){
				state = States.START_JUMP;
				changeCharState(CharacterStateEvent.START_JUMP);
			}
		}
		if (canAirJump){
			if (JUMP_PRESSED){
				jumpUp(jumpPower);
			}
		}
		/*
		 * Physics
		 */ 
		onground = false;
		onrightWall = false;
		onleftWall = false;
		xspeed *= friction;
		yspeed += gravity;
		while (mapCollision.hitTestPoint(x-30, y, true)){
			x++;
		}
		while (mapCollision.hitTestPoint(x+30, y, true)){
			x--;
		}
		while (mapCollision.hitTestPoint(x, y+30, true)){
			y--;
		}
		while (mapCollision.hitTestPoint(x, y-30, true)){
			y++;
		}
		if (mapCollision.hitTestPoint(x, y+32, true) && yspeed > 0){
			onground = true;
			dispatchEvent(new CharacterStateEvent(CharacterStateEvent.ON_TOUCH_GROUND));
			yspeed = 0;
		}
		if (mapCollision.hitTestPoint(x+32, y, true)){
			onrightWall = true;
			if (xspeed > 0) xspeed = 0;
		}
		if (mapCollision.hitTestPoint(x-32, y, true)){
			onleftWall = true;
			if (xspeed < 0) xspeed = 0;
		}
		x += xspeed;
		y += yspeed;
	}
	public function jumpUp(power:Float){
		if (jumpCount <= 0){
			return;
		}
		state = States.FREE;
		yspeed = power;
		dispatchEvent(new CharacterStateEvent(CharacterStateEvent.JUMP_UP));
		onground = false;
		jumpCount -= 1;
	}
	public function turnRight(){
		scaleX = 0.3;
	}
	public function turnLeft(){
		scaleX = -0.3;
	}
	
}