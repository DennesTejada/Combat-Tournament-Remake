package engine;
import engine.events.CharacterStateEvent;
import engine.events.GameEvent;
import hud.FrameAdvantageHUDScript;
import openfl.Assets;
import openfl.display.DisplayObject;
import openfl.display.Sprite;
import openfl.media.Sound;
import openfl.media.SoundChannel;
import openfl.utils.Object;

/**
 * ...
 * @author ...
 */
enum States
{
	FREE;
	ATTACK;
	HURT;
	START_JUMP;
	BLOCK;
	DEAD;
}
class PlayerDefault extends Sprite
{
	public var soundFXChannel:SoundChannel;
	public var soundVoiceChannel:SoundChannel;
	public var blockStun:Float = 0;
	public var hitStun:Float = 0;
	public var hitStop:Float = 0;
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
	public var COUNTER:Bool = false;

	public var JUMP_PRESSED:Bool = false;
	public var ATTACK_PRESSED:Bool = false;
	public var COUNTER_PRESSED_BUFFER:Int = 0;

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
	public var canBlock:Bool = false;
	public var state = States.FREE;
	private var lastCallCharacterStateEvent:String;
	
	private var target:PlayerDefault;
	public function new()
	{
		super();
		hp = 100;
		Main.gameLoop.addEventListener(GameEvent.ON_GAME_LOOP, update);
	}
	public function getInputs()
	{
		if (isPlayer == Global.game.localPlayer && Global.game.isNetGame==false)
		{
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
			COUNTER = Main.gameInput.COUNTER;
		
			if (COUNTER){
				COUNTER_PRESSED_BUFFER += 1;
			} else {
				COUNTER_PRESSED_BUFFER = 0;
			}
		}
	}
	private function changeCharState(state)
	{
		if (lastCallCharacterStateEvent != state)
		{
			dispatchEvent(new CharacterStateEvent(state));
			lastCallCharacterStateEvent = state;
		}
	}
	public function onHit(mc:DisplayObject)
	{
		var playerWhoHitMe:PlayerDefault = Std.downcast(mc, PlayerDefault);
		if (playerWhoHitMe == null)
		{
			return;
		}
		var hitbox:HitBoxInfomation = playerWhoHitMe.hitbox;
		if (hitbox == null)
		{
			return;
		}
		//right when player is about to get hit
		var obj:Object = new Object();
		obj.hitbox = hitbox;
		dispatchEvent(new CharacterStateEvent(CharacterStateEvent.ON_BEFORE_GETTING_HIT, obj));
		
		//counter teleport
		if (COUNTER_PRESSED_BUFFER > 0 && COUNTER_PRESSED_BUFFER <= 3){
			target = hitbox.hitter;
			var offsetX = 0;
			var offsetY = 0;
			if (RIGHT){
				offsetX = 40;
			}
			if (LEFT){
				offsetX = -40;
			}
			if (UP){
				offsetY = -40;
			}
			if (DOWN){
				offsetY = 40;
			}
			teleportToEnemy(offsetX, offsetY);
			hitStop = 10;
			target.hitStop = hitStop;
			var channel:SoundChannel;
			channel = Assets.getSound("sounds/TeleportCounter1.wav").play();
			channel = Assets.getSound("sounds/TeleportCounter2.wav").play();
			return;
		}
		
		
		//frame perfect block
		var blockObj:Object = new Object();
		if (BLOCK && hitStun <= 0){
			blockObj = doBlock(null);
		}
		
		var superArmorAttack = false;
		var blockAttack = (blockObj.directionX == hitbox.blockDirectionX * -1 && blockObj.directionY == hitbox.blockDirectionY * -1);

		var infoSFX:FrameAdvantageHUDScript = new FrameAdvantageHUDScript();
		parent.addChild(infoSFX);
		infoSFX.x = hitbox.hitter.x;
		infoSFX.y = hitbox.hitter.y;
		if (blockAttack==false)
		{
			
			if (superArmorAttack==false){
				xspeed = hitbox.xspeed;
				yspeed = hitbox.yspeed;
				friction = hitbox.friction;
				gravity = hitbox.gravity;
				
				state = States.HURT;
				if (hitbox.hitStun != null){
					hitStun = hitbox.hitStun;
					infoSFX.text = Std.string((hitbox.remainingFrames - hitStun) * -1);
				}
			}
			if (hitbox.hitStop != null)	hitStop = hitbox.hitStop;
			
			this.hp -= hitbox.damage;
			if (playerWhoHitMe.x > this.x)
			{
				turnRight();
			}
			if (playerWhoHitMe.x < this.x)
			{
				turnLeft();
			}
			
			var a:Int = 0;
			while (a < hitbox.hitSoundList.length){
				var channel:SoundChannel = hitbox.hitSoundList[a].play();
				a++;
			}
			
			var eventObj:Object = new Object();
			eventObj.victim = this;
			eventObj.hitter = hitbox.hitter;
			eventObj.isLauncher = hitbox.isLauncher;
			dispatchEvent(new CharacterStateEvent(CharacterStateEvent.ON_GOT_HIT, eventObj));
		}
		if (blockAttack==true)
		{
			
			xspeed = hitbox.blockXspeed;
			yspeed = hitbox.blockYspeed;
			friction = hitbox.blockFriction;
			gravity = hitbox.blockGravity;
			
			if (hitbox.blockStun != null) {
				blockStun = hitbox.blockStun;
				infoSFX.text = Std.string((hitbox.remainingFrames - blockStun) * -1);
			}
			if (hitbox.blockStop != null) hitStop = hitbox.blockStop;
			var a:Int = 0;
			while (a < hitbox.blockSoundList.length){
				var channel:SoundChannel = hitbox.blockSoundList[a].play();
				a++;
			}
			var eventObj:Object = new Object();
			eventObj.victim = this;
			eventObj.hitter = hitbox.hitter;
			dispatchEvent(new CharacterStateEvent(CharacterStateEvent.ON_BLOCK_ATTACK, eventObj));
		}

	}
	public function updateCharacterState(){
		if (state == States.FREE)
		{
			canBlock = true;
			gravity = 0.5;
			canMove = true;
			canAttack = true;
			canJump = true;
			canAirJump = (!onground);
			target = null;
		}
		if (state == States.ATTACK)
		{
			canBlock = false;
			canMove = !onground;
			canJump = false;
			canAirJump = false;
		}
		if (state == States.HURT){
			canBlock = false;
			canMove = false;
			canAttack = false;
			canJump = false;
			canAirJump = false;
			if (hitStun > 0){
				hitStun -= 1;
			} else {
				state = States.FREE;
				changeCharState("none");
				changeCharState(CharacterStateEvent.STANCE);
			}
		}
		if (state == States.START_JUMP)
		{
			canBlock = true;
			canMove = false;
			canAttack = true;
			canJump = false;
			canAirJump = false;
		}
		if (state == States.BLOCK)
		{
			if (blockStun > 0){
				blockStun -= 1;
			}
			canBlock = false;
			canMove = false;
			canAttack = false;
			canJump = false;
			canAirJump = false;
			if (BLOCK == false && blockStun <= 0){
				state = States.FREE;
				changeCharState("none");
				changeCharState(CharacterStateEvent.STANCE);
			}
		}
	}
	public function update(e:GameEvent)
	{
		getInputs();
		if (hitStop > 0){
			hitStop -= 1;
			
			return;
		}
		
		/*
		 * movement
		 */
		updateCharacterState();
		if (canBlock){
			if (BLOCK){
				doBlock(null);
			}
		}

		if (canMove)
		{
			maxXspeed = 10;
			if (!onground)
			{
				friction = .95;
				if (RIGHT)
				{
					xspeed += airMoveSpeed;
				}
				if (LEFT)
				{
					xspeed -= airMoveSpeed;
				}
				if (yspeed > 0)
				{
					changeCharState(CharacterStateEvent.JUMP_DOWN);
				}
				else
				{
					changeCharState(CharacterStateEvent.JUMP_UP);
				}
			}
			if (onground)
			{
				friction = .7;
				if (RIGHT)
				{
					xspeed += runSpeed;
					turnRight();
					changeCharState(CharacterStateEvent.RUN);
				}
				else if (LEFT)
				{
					xspeed -= runSpeed;
					turnLeft();
					changeCharState(CharacterStateEvent.RUN);
				}
				else if (DOWN)
				{
					changeCharState(CharacterStateEvent.DUCK);
				}
				else
				{
					changeCharState(CharacterStateEvent.STANCE);
				}
			}
			if (xspeed > maxXspeed)
			{
				xspeed = maxXspeed;
			}
			if (xspeed < -maxXspeed)
			{
				xspeed = -maxXspeed;
			}
		}
		if (canJump)
		{
			if (JUMP_PRESSED && onground)
			{
				state = States.START_JUMP;
				changeCharState(CharacterStateEvent.START_JUMP);
			}
		}
		if (canAirJump)
		{
			if (JUMP_PRESSED)
			{
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
		while (mapCollision.hitTestPoint(x-30, y, true))
		{
			x++;
		}
		while (mapCollision.hitTestPoint(x+30, y, true))
		{
			x--;
		}
		while (mapCollision.hitTestPoint(x, y+30, true))
		{
			y--;
		}
		while (mapCollision.hitTestPoint(x, y-30, true))
		{
			y++;
		}
		if (mapCollision.hitTestPoint(x, y+32, true) && yspeed > 0)
		{
			onground = true;
			dispatchEvent(new CharacterStateEvent(CharacterStateEvent.ON_TOUCH_GROUND));
			yspeed = 0;
		}
		if (mapCollision.hitTestPoint(x+32, y, true))
		{
			onrightWall = true;
			if (xspeed > 0) xspeed = 0;
		}
		if (mapCollision.hitTestPoint(x-32, y, true))
		{
			onleftWall = true;
			if (xspeed < 0) xspeed = 0;
		}
		x += xspeed;
		y += yspeed;
	}
	public function doBlock(hitBox:HitBoxInfomation){
		var obj:Object = new Object();
		obj.directionX = scaleX;
		obj.directionY = 0;
		if (RIGHT){
			turnRight();
			obj.directionX = 1;
			obj.directionY = 0;
		}
		if (LEFT){
			turnLeft();
			obj.directionX = 1;
			obj.directionY = 0;
		}
		if (UP){
			obj.directionX = 0;
			obj.directionY = -1;
		}
		if (DOWN){
			turnRight();
			obj.directionX = 0;
			obj.directionY = 1;
		}
		dispatchEvent(new CharacterStateEvent(CharacterStateEvent.ON_BLOCK_DIRECTION,obj));
		state = States.BLOCK;
		return obj;
	}
	public function jumpUp(power:Float)
	{
		if (jumpCount <= 0)
		{
			return;
		}
		state = States.FREE;
		yspeed = power;
		dispatchEvent(new CharacterStateEvent(CharacterStateEvent.JUMP_UP));
		onground = false;
		jumpCount -= 1;
	}
	public function turnRight()
	{
		this.scaleX = 0.3;
	}
	public function turnLeft()
	{
		this.scaleX = -0.3;
	}
	public function teleportToEnemy(offsetX:Float=0,offsetY:Float=0){
		if (target == null){
			//no enemy to teleport too
			return;
		}
		
		//teleport effect here
		
		x = target.x + offsetX;
		y = target.y + offsetY;
		//teleport effect here
		
	}

}