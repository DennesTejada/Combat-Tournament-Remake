package;
import characters.SlaptasticGameplay;
import engine.events.GameEvent;
import flash.display.Sprite;
import flash.geom.ColorTransform;
import flash.utils.Object;
import openfl.display.MovieClip;

/**
 * ...
 * @author Dennes Tejada
 */
class Game extends Sprite
{
	public var map:String = "Box";
	public var player_info:Array<Object> = new Array<Object>();
	public var hitBoxes:Array<HitBox> = new Array<HitBox>();
	public var localPlayer:Int = 1;
	public var isNetGame:Bool = false;
	public function new() 
	{
		super();
	}
	public function onUpdate(){
		var i:Int = 0;
		while (i < hitBoxes.length){
			var hitbox = hitBoxes[i];
			var b:Int = 0;
			while (b < player_info.length){
				var avatar = player_info[b]["avatar"];
				var avatar2 = hitbox.parent.parent.parent;
				if (avatar == avatar2){
					b++;
					continue;
				}
				if (hitbox.hitTestObject(avatar.stickmen.hurtBox)){
					//hitbox.parent.parent.parent = the player that hit this player
					avatar.onHit(hitbox.parent.parent.parent);
				}
				b++;
			}
			i++;
		}
		
		hitBoxes = new Array<HitBox>();
	}
	public function createPlayerInfomation(username:String, character:String, hat:String, colorTransform:ColorTransform,isPlayer:Int){
		var obj:Object = new Object();
		obj.username = username;
		obj.character = character;
		obj.hat = hat;
		obj.colorTransform = colorTransform;
		obj.avatar = null;
		obj.isPlayer = isPlayer;
		player_info.push(obj);
		trace("added " + username);
		
	}
	public function setViewToPlayer(playerNumber:Int){
		var i:Int = 0;
		while (i < player_info.length){
			var player = player_info[i];
			if (player.isPlayer == playerNumber){
				return player["avatar"];
				break;
			}
			i++;
		}
		return null;
	}
	public function createAllPlayers(a:Sprite,mapCollision:MovieClip){
		var i:Int = 0;
		while (i < player_info.length){
			var player = player_info[i];
			var character:Sprite = new Sprite();
			if (player.character == "Slaptastic"){
				character = new SlaptasticGameplay ();
				var slaptastic = Std.downcast(character, SlaptasticGameplay);
				slaptastic.mapCollision = mapCollision;
				slaptastic.isPlayer = player.isPlayer;
			}
			character.scaleX = .30;
			character.scaleY = .30;
			character.stopAllMovieClips();
			a.addChild(character);
			player["avatar"] = character;
			i++;
		}
	}
	public function getGameStateData():Object{
		return player_info;
	}
}