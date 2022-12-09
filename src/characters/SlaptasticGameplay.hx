package characters;
import engine.HitBoxInfomation;
import engine.PlayerDefault;
import engine.events.CharacterStateEvent;
import engine.events.GameEvent;
import openfl.display.MovieClip;
import openfl.display.Sprite;
import openfl.utils.Object;

/**
 * ...
 * @author ...
 */
class SlaptasticGameplay extends PlayerDefault
{
	public var stickmen:Slaptastic = new Slaptastic();
	private var loopAnimation:Bool = false;
	private var playAnimation:Bool = false;
	private var returnToIdleOnLastFrame:Bool = false;
	public function new() 
	{
		super();
		//create the animated character
		stickmen = new Slaptastic();
		addChild(stickmen);
		addEventListener(CharacterStateEvent.STANCE, onStance);
		addEventListener(CharacterStateEvent.RUN, onRun);
		addEventListener(CharacterStateEvent.DUCK, onDuck);
		addEventListener(CharacterStateEvent.START_JUMP, onStartJump);
		addEventListener(CharacterStateEvent.JUMP_UP, onJumpUp);
		addEventListener(CharacterStateEvent.JUMP_DOWN, onJumpDown);
		addEventListener(CharacterStateEvent.ON_TOUCH_GROUND, onTouchGround);
		addEventListener(CharacterStateEvent.ON_GOT_HIT, onGotHit);
		Main.gameLoop.addEventListener(GameEvent.ON_GAME_LOOP, onUpdate);
	}
	public function onTouchGround(e:CharacterStateEvent){
		jumpCount = maxJumps;
	}
	public function onStance(e:CharacterStateEvent){
		stickmen.gotoAndStop("stand");
		loopAnimation = true;
		playAnimation = true;
		returnToIdleOnLastFrame = false;
	}
	public function onRun(e:CharacterStateEvent){
		stickmen.gotoAndStop("run");
		loopAnimation = true;
		playAnimation = true;
		returnToIdleOnLastFrame = false;
	}
	public function onDuck(e:CharacterStateEvent){
		stickmen.gotoAndStop("Duck");
		loopAnimation = false;
		playAnimation = false;
		returnToIdleOnLastFrame = false;
	}
	public function onStartJump(e:CharacterStateEvent){
		stickmen.gotoAndStop("StartJump");
		loopAnimation = false;
		playAnimation = true;
		returnToIdleOnLastFrame = false;
	}
	public function onJumpUp(e:CharacterStateEvent){
		stickmen.gotoAndStop("Jump");
		stickmen.Man.gotoAndStop(1);
		loopAnimation = false;
		playAnimation = true;
		returnToIdleOnLastFrame = false;
	}
	public function onJumpDown(e:CharacterStateEvent){
		stickmen.gotoAndStop("Jump");
		stickmen.Man.gotoAndStop(8);
		loopAnimation = false;
		playAnimation = true;
		returnToIdleOnLastFrame = false;
	}
	public function onGotHit(e:CharacterStateEvent){
		var data:Object = e.data;
		if (data.isLauncher){
			stickmen.gotoAndStop("HurtTop");
		}
	}
	public function onUpdate(e:GameEvent){
		if (state == States.FREE){
			if (onground){
				if (ATTACK_PRESSED){
					stickmen.gotoAndStop("Attack1");
					stickmen.Man.gotoAndStop(1);
					loopAnimation = false;
					playAnimation = true;
					returnToIdleOnLastFrame = true;
					canAttack = false;
					state = States.ATTACK;
					changeCharState("ATTACK");
				}
			}
		}
		if (state == States.ATTACK){
			if (stickmen.currentFrameLabel == "Attack1"){
				hitbox = new HitBoxInfomation();
				hitbox.xspeed = 0;
				hitbox.yspeed = 0;
				hitbox.friction = .8;
				hitbox.gravity = .5;
				hitbox.damage = 3;
				hitbox.isLauncher = false;
				hitbox.hitter = this;
				canAttack = (stickmen.Man.currentFrame >= 13);
				if (canAttack){
					if (ATTACK_PRESSED){
						stickmen.gotoAndStop("Attack2");
						stickmen.Man.gotoAndStop(1);
						loopAnimation = false;
						playAnimation = true;
						returnToIdleOnLastFrame = true;
						canAttack = false;
						state = States.ATTACK;
						changeCharState("ATTACK");
					}
				}
			}
			if (stickmen.currentFrameLabel == "Attack2"){
				canAttack = (stickmen.Man.currentFrame >= 13);
				if (canAttack){
					if (ATTACK_PRESSED){
						stickmen.gotoAndStop("Attack3");
						stickmen.Man.gotoAndStop(1);
						loopAnimation = false;
						playAnimation = true;
						returnToIdleOnLastFrame = true;
						canAttack = false;
						state = States.ATTACK;
						changeCharState("ATTACK");
					}
				}
			}
		}
		updateSpriteAnimation();
		updateHitBoxes();
	}
	private function updateSpriteAnimation(){
		if (stickmen.currentFrameLabel == "StartJump"){
			if (stickmen.Man.currentFrame == stickmen.Man.totalFrames-1 && JUMP == false){
				jumpUp(jumpPower / 1.5);
				
			}
			if (stickmen.Man.currentFrame == stickmen.Man.totalFrames){
				jumpUp(jumpPower);
			}
		}
		if (stickmen.currentFrameLabel == "Jump"){
			if (stickmen.Man.currentFrame >= 7 && yspeed < 0){
				stickmen.Man.gotoAndStop(7);
			}
			if (stickmen.Man.currentFrame <= 7 && yspeed > 0){
				stickmen.Man.gotoAndStop(8);
			}
		}
		if (loopAnimation){
			if (stickmen.Man.currentFrame == stickmen.Man.totalFrames){
				stickmen.Man.gotoAndStop(1);
				stickmen.stopAllMovieClips();
				return;
			}
		}
		if (returnToIdleOnLastFrame){
			if (stickmen.Man.currentFrame == stickmen.Man.totalFrames){
				stickmen.gotoAndStop(1);
				state = States.FREE;
				returnToIdleOnLastFrame = false;
			}
		}
		if (playAnimation) stickmen.Man.nextFrame();
		stickmen.stopAllMovieClips();
	}
	private function updateHitBoxes(){
		var a:Int = 0;
		while (a < stickmen.Man.numChildren){
			var mc = stickmen.Man.getChildAt(a);
			var hitbox = Std.downcast(mc, HitBox);
			if (hitbox != null){
				Global.game.hitBoxes.push(hitbox);
			}
			a++;
		}
	}
}