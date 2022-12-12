package characters;
import engine.HitBoxInfomation;
import engine.PlayerDefault;
import engine.events.CharacterStateEvent;
import engine.events.GameEvent;
import openfl.Assets;
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
		addEventListener(CharacterStateEvent.ON_BLOCK_ATTACK, onBlockAttack);
		addEventListener(CharacterStateEvent.ON_BLOCK_DIRECTION, onBlockingDirection);
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
			stickmen.gotoAndStop("HurtLaunch");
		} else {
			stickmen.gotoAndStop("HurtTop");
		}
		loopAnimation = true;
		playAnimation = true;
		returnToIdleOnLastFrame = false;
	}
	public function onBlockAttack(e:CharacterStateEvent){
		
	}
	public function onBlockingDirection(e:CharacterStateEvent){
		var data:Object = e.data;
		var directionX:Float = data.directionX;
		var directionY:Float = data.directionY;
		if (directionX > 0 && directionY == 0){
			//right
			stickmen.gotoAndStop("BlockGroundHorizontal");
		}
		if (directionX < 0 && directionY == 0){
			//left
			stickmen.gotoAndStop("BlockGroundHorizontal");
		}
		if (directionX == 0 && directionY < 0){
			//up
			stickmen.gotoAndStop("BlockGroundUp");
		}
		if (directionX == 0 && directionY > 0){
			//down
			stickmen.gotoAndStop("BlockGroundDown");
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
			//get how many frames are left in an animation
			var remainingFrames = (stickmen.Man.totalFrames - stickmen.Man.currentFrame);
			if (stickmen.currentFrameLabel == "Attack1"){
				hitbox = new HitBoxInfomation();
				hitbox.remainingFrames = remainingFrames;
				hitbox.xspeed = 0;
				hitbox.yspeed = 0;
				hitbox.friction = .8;
				hitbox.gravity = .5;
				hitbox.damage = 3;
				hitbox.isLauncher = false;
				hitbox.hitter = this;
				// no frame advantage
				hitbox.hitStun = remainingFrames;
				hitbox.hitStop = 0;
				// this is - 2 on block meaning the defender can move first 2 frame ahead of attacker.
				hitbox.blockStun = remainingFrames - 2;
				hitbox.blockStop = 0;
				hitbox.blockXspeed = 0;
				hitbox.blockYspeed = 0;
				hitbox.blockGravity = 0.5;
				hitbox.blockFriction = 0.8;
				
				hitbox.blockDirectionX = scaleX;
				hitbox.blockDirectionY = 0;
				
				hitbox.hitSoundList = [
				Assets.getSound("sounds/4_HandSlap1.wav")
				];
				hitbox.blockSoundList = [
				Assets.getSound("sounds/Block1.wav"),
				Assets.getSound("sounds/Block2.wav")
				];
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
		updateSounds();
	}
	private function updateSounds(){
		if (stickmen.currentFrameLabel == "run"){
			if (stickmen.Man.currentFrame == 5){
				soundFXChannel = Assets.getSound("sounds/Step1.wav").play();
			}
			if (stickmen.Man.currentFrame == 15){
				soundFXChannel = Assets.getSound("sounds/Step2.wav").play();
			}
		}
		if (stickmen.currentFrameLabel == "Attack1"){
			if (stickmen.Man.currentFrame == 2){
				soundFXChannel = Assets.getSound("sounds/Swing4.wav").play();
			}
		}
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
				hitbox.visible = false;
			}
			a++;
		}
		Global.game.hurtBoxes.push(stickmen.hurtBox);
		stickmen.hurtBox.visible = false;
	}
}