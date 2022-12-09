package engine;

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
	//should the player getting go in "launch state"(go to knockdown on ground, bounce off walls)
	public var isLauncher:Bool = false;
	public var hitter:PlayerDefault;
	public function new() 
	{
		
	}
	
}