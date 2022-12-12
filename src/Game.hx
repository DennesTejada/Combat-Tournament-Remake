package;
import characters.SlaptasticBot;
import characters.SlaptasticGameplay;
import engine.PlayerDefault;
import engine.events.GameEvent;
import openfl.display.Sprite;
import openfl.geom.ColorTransform;
import openfl.utils.Object;
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
	public var hurtBoxes:Array<MovieClip> = new Array<MovieClip>();
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
			while (b < hurtBoxes.length){
				var hurtBox:MovieClip = hurtBoxes[b];
				var avatar1:PlayerDefault = Std.downcast(hurtBox.parent.parent, PlayerDefault);
				var avatar2:PlayerDefault = Std.downcast(hitbox.parent.parent.parent, PlayerDefault);
				if (avatar1 == avatar2){
					b++;
					continue;
				}
				if (hitbox.hitTestObject(hurtBox)){
					//hitbox.parent.parent.parent = the player that hit this player
					avatar1.onHit(avatar2);
				}
				b++;
			}
			i++;
		}
		
		hitBoxes = new Array<HitBox>();
		hurtBoxes = new Array<MovieClip>();
	}
	public function createPlayerInfomation(username:String, character:String, hat:String, colorTransform:ColorTransform,isPlayer:Int,isBot:Bool){
		var obj:Object = new Object();
		obj.username = username;
		obj.character = character;
		obj.hat = hat;
		obj.colorTransform = colorTransform;
		obj.avatar = null;
		obj.isPlayer = isPlayer;
		obj.isBot = isBot;
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
			var player:Object = player_info[i];
			var character:Sprite = new Sprite();
			if (player.character == "Slaptastic"){
				if (player.isBot == false){
					character = new SlaptasticGameplay ();
					var slaptastic = Std.downcast(character, SlaptasticGameplay);
					slaptastic.mapCollision = mapCollision;
					slaptastic.isPlayer = player.isPlayer;
				}
				if (player.isBot == true){
					character = new SlaptasticBot ();
					var slaptastic = Std.downcast(character, SlaptasticBot);
					slaptastic.mapCollision = mapCollision;
					slaptastic.isPlayer = player.isPlayer;
				}
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