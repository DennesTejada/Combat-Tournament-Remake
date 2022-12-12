package engine;
import openfl.Assets;
import openfl.media.Sound;

/**
 * This is where all the hitbox infomation require for a customizable hitbox
 * ...
 * @author ...
 */
class HitBoxInfomation 
{
	public var xspeed:Float = 0;
	public var yspeed:Float = 0;
	public var friction:Float = .8;
	public var gravity:Float = .5;
	public var damage:Float = 0;
	public var remainingFrames:Int = 0;
	//should the player getting go in "launch state"(go to knockdown on ground, bounce off walls)
	public var isLauncher:Bool = false;
	public var hitter:PlayerDefault;
	public var hitStun:Float = null;
	public var hitStop:Float = null;
	public var blockStun:Float = null;
	public var blockStop:Float = null;
	public var blockXspeed:Float = 0;
	public var blockYspeed:Float = 0;
	public var blockFriction:Float = .8;
	public var blockGravity:Float = .5;
	public var blockDirectionX:Float = 0;
	public var blockDirectionY:Float = 0;
	public var hitSoundList:Array<Sound> = new Array<Sound>();
	public var blockSoundList:Array<Sound> = new Array<Sound>();
	public function new() 
	{
		
	}
	
}