package;

import haxe.io.Bytes;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

#if disable_preloader_assets
@:dox(hide) class ManifestResources {
	public static var preloadLibraries:Array<Dynamic>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;

	public static function init (config:Dynamic):Void {
		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();
	}
}
#else
@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

		}

		if (rootPath == null) {

			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif console
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		
		#end

		var data, manifest, library, bundle;

		#if kha

		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);

		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");

		#else

		Assets.bundlePaths["Slaptastic"] = rootPath + "lib/Slaptastic.zip";
		Assets.bundlePaths["Box"] = rootPath + "lib/Box.zip";
		Assets.bundlePaths["FrameAdvantageHud"] = rootPath + "lib/FrameAdvantageHud.zip";
		data = '{"name":null,"assets":"aoy4:sizei62252y4:typey5:SOUNDy2:idy14:sounds%2F1.wavy9:pathGroupaR4hy7:preloadtgoR0i29996R1R2R3y17:sounds%2F1008.wavR5aR7hR6tgoR0i29996R1R2R3y17:sounds%2F1032.wavR5aR8hR6tgoR0i23084R1R2R3y17:sounds%2F1045.wavR5aR9hR6tgoR0i18476R1R2R3y17:sounds%2F1060.wavR5aR10hR6tgoR0i21932R1R2R3y26:sounds%2F10_hardpunch1.wavR5aR11hR6tgoR0i15020R1R2R3y17:sounds%2F1107.wavR5aR12hR6tgoR0i11564R1R2R3y17:sounds%2F1118.wavR5aR13hR6tgoR0i32300R1R2R3y17:sounds%2F1145.wavR5aR14hR6tgoR0i18476R1R2R3y17:sounds%2F1187.wavR5aR15hR6tgoR0i42668R1R2R3y17:sounds%2F1188.wavR5aR16hR6tgoR0i47276R1R2R3y17:sounds%2F1192.wavR5aR17hR6tgoR0i49580R1R2R3y21:sounds%2F11_Cut04.wavR5aR18hR6tgoR0i61100R1R2R3y17:sounds%2F1215.wavR5aR19hR6tgoR0i35756R1R2R3y17:sounds%2F1216.wavR5aR20hR6tgoR0i27692R1R2R3y17:sounds%2F1252.wavR5aR21hR6tgoR0i41516R1R2R3y17:sounds%2F1257.wavR5aR22hR6tgoR0i35756R1R2R3y21:sounds%2F12_Cut03.wavR5aR23hR6tgoR0i28844R1R2R3y17:sounds%2F1387.wavR5aR24hR6tgoR0i31148R1R2R3y21:sounds%2F13_Cut02.wavR5aR25hR6tgoR0i11564R1R2R3y16:sounds%2F142.wavR5aR26hR6tgoR0i27692R1R2R3y21:sounds%2F14_Cut01.wavR5aR27hR6tgoR0i34604R1R2R3y17:sounds%2F1558.wavR5aR28hR6tgoR0i29996R1R2R3y17:sounds%2F1579.wavR5aR29hR6tgoR0i39212R1R2R3y17:sounds%2F1586.wavR5aR30hR6tgoR0i34604R1R2R3y17:sounds%2F1595.wavR5aR31hR6tgoR0i38060R1R2R3y25:sounds%2F15_Breakbone.wavR5aR32hR6tgoR0i5434028R1R2R3y16:sounds%2F162.wavR5aR33hR6tgoR0i29996R1R2R3y17:sounds%2F1685.wavR5aR34hR6tgoR0i9492524R1R2R3y23:sounds%2F16_Pompeii.wavR5aR35hR6tgoR0i34604R1R2R3y17:sounds%2F1706.wavR5aR36hR6tgoR0i103724R1R2R3y17:sounds%2F1734.wavR5aR37hR6tgoR0i410156R1R2R3y26:sounds%2F17_AndyHunter.wavR5aR38hR6tgoR0i72620R1R2R3y17:sounds%2F1870.wavR5aR39hR6tgoR0i66860R1R2R3y17:sounds%2F1872.wavR5aR40hR6tgoR0i86444R1R2R3y17:sounds%2F1874.wavR5aR41hR6tgoR0i87596R1R2R3y17:sounds%2F1876.wavR5aR42hR6tgoR0i79532R1R2R3y17:sounds%2F1878.wavR5aR43hR6tgoR0i70316R1R2R3y17:sounds%2F1880.wavR5aR44hR6tgoR0i117548R1R2R3y17:sounds%2F1882.wavR5aR45hR6tgoR0i84140R1R2R3y17:sounds%2F1884.wavR5aR46hR6tgoR0i80684R1R2R3y17:sounds%2F1886.wavR5aR47hR6tgoR0i86444R1R2R3y17:sounds%2F1888.wavR5aR48hR6tgoR0i80684R1R2R3y17:sounds%2F1890.wavR5aR49hR6tgoR0i76076R1R2R3y17:sounds%2F1892.wavR5aR50hR6tgoR0i92204R1R2R3y17:sounds%2F1894.wavR5aR51hR6tgoR0i148652R1R2R3y17:sounds%2F1896.wavR5aR52hR6tgoR0i99116R1R2R3y17:sounds%2F1898.wavR5aR53hR6tgoR0i74924R1R2R3y17:sounds%2F1938.wavR5aR54hR6tgoR0i95660R1R2R3y17:sounds%2F1940.wavR5aR55hR6tgoR0i93356R1R2R3y17:sounds%2F1942.wavR5aR56hR6tgoR0i97964R1R2R3y17:sounds%2F1959.wavR5aR57hR6tgoR0i94508R1R2R3y17:sounds%2F1961.wavR5aR58hR6tgoR0i5119532R1R2R3y17:sounds%2F1967.wavR5aR59hR6tgoR0i69164R1R2R3y21:sounds%2F1_Twack2.wavR5aR60hR6tgoR0i48428R1R2R3y14:sounds%2F2.wavR5aR61hR6tgoR0i3676076R1R2R3y17:sounds%2F2082.wavR5aR62hR6tgoR0i9300140R1R2R3y17:sounds%2F2083.wavR5aR63hR6tgoR0i4550444R1R2R3y17:sounds%2F2097.wavR5aR64hR6tgoR0i3392684R1R2R3y17:sounds%2F2103.wavR5aR65hR6tgoR0i4300460R1R2R3y17:sounds%2F2107.wavR5aR66hR6tgoR0i1949228R1R2R3y17:sounds%2F2113.wavR5aR67hR6tgoR0i26540R1R2R3y17:sounds%2F2124.wavR5aR68hR6tgoR0i96812R1R2R3y17:sounds%2F2126.wavR5aR69hR6tgoR0i102572R1R2R3y17:sounds%2F2131.wavR5aR70hR6tgoR0i51884R1R2R3y17:sounds%2F2132.wavR5aR71hR6tgoR0i62252R1R2R3y17:sounds%2F2133.wavR5aR72hR6tgoR0i4841900R1R2R3y17:sounds%2F2140.wavR5aR73hR6tgoR0i509228R1R2R3y17:sounds%2F2162.wavR5aR74hR6tgoR0i6330284R1R2R3y17:sounds%2F2166.wavR5aR75hR6tgoR0i2923820R1R2R3y17:sounds%2F2167.wavR5aR76hR6tgoR0i3262508R1R2R3y17:sounds%2F2168.wavR5aR77hR6tgoR0i69164R1R2R3y21:sounds%2F2_Twack1.wavR5aR78hR6tgoR0i51884R1R2R3y14:sounds%2F3.wavR5aR79hR6tgoR0i51884R1R2R3y18:sounds%2F3_SSH.wavR5aR80hR6tgoR0i29996R1R2R3y16:sounds%2F402.wavR5aR81hR6tgoR0i11564R1R2R3y16:sounds%2F415.wavR5aR82hR6tgoR0i9260R1R2R3y16:sounds%2F446.wavR5aR83hR6tgoR0i10412R1R2R3y16:sounds%2F466.wavR5aR84hR6tgoR0i24236R1R2R3y24:sounds%2F4_HandSlap1.wavR5aR85hR6tgoR0i16172R1R2R3y16:sounds%2F505.wavR5aR86hR6tgoR0i23084R1R2R3y16:sounds%2F535.wavR5aR87hR6tgoR0i17324R1R2R3y16:sounds%2F574.wavR5aR88hR6tgoR0i48428R1R2R3y15:sounds%2F59.wavR5aR89hR6tgoR0i52768R1R2R3y16:sounds%2F590.wavR5aR90hR6tgoR0i34604R1R2R3y20:sounds%2F5_MMDie.wavR5aR91hR6tgoR0i59948R1R2R3y15:sounds%2F60.wavR5aR92hR6tgoR0i43820R1R2R3y16:sounds%2F601.wavR5aR93hR6tgoR0i37346R1R2R3y16:sounds%2F603.wavR5aR94hR6tgoR0i153260R1R2R3y15:sounds%2F61.wavR5aR95hR6tgoR0i40364R1R2R3y16:sounds%2F627.wavR5aR96hR6tgoR0i51884R1R2R3y16:sounds%2F635.wavR5aR97hR6tgoR0i28844R1R2R3y16:sounds%2F636.wavR5aR98hR6tgoR0i36908R1R2R3y16:sounds%2F652.wavR5aR99hR6tgoR0i40364R1R2R3y16:sounds%2F664.wavR5aR100hR6tgoR0i34604R1R2R3y16:sounds%2F678.wavR5aR101hR6tgoR0i15020R1R2R3y16:sounds%2F679.wavR5aR102hR6tgoR0i11564R1R2R3y20:sounds%2F6_land1.wavR5aR103hR6tgoR0i25388R1R2R3y16:sounds%2F702.wavR5aR104hR6tgoR0i62252R1R2R3y16:sounds%2F707.wavR5aR105hR6tgoR0i15020R1R2R3y16:sounds%2F720.wavR5aR106hR6tgoR0i33452R1R2R3y16:sounds%2F732.wavR5aR107hR6tgoR0i29996R1R2R3y16:sounds%2F750.wavR5aR108hR6tgoR0i35756R1R2R3y16:sounds%2F754.wavR5aR109hR6tgoR0i32300R1R2R3y16:sounds%2F766.wavR5aR110hR6tgoR0i10412R1R2R3y20:sounds%2F7_Jumpx.wavR5aR111hR6tgoR0i28844R1R2R3y16:sounds%2F802.wavR5aR112hR6tgoR0i97964R1R2R3y16:sounds%2F820.wavR5aR113hR6tgoR0i97964R1R2R3y16:sounds%2F837.wavR5aR114hR6tgoR0i142892R1R2R3y16:sounds%2F838.wavR5aR115hR6tgoR0i256940R1R2R3y16:sounds%2F867.wavR5aR116hR6tgoR0i18476R1R2R3y25:sounds%2F8_hardpunch3.wavR5aR117hR6tgoR0i34604R1R2R3y16:sounds%2F904.wavR5aR118hR6tgoR0i40364R1R2R3y16:sounds%2F930.wavR5aR119hR6tgoR0i89900R1R2R3y16:sounds%2F995.wavR5aR120hR6tgoR0i93356R1R2R3y16:sounds%2F996.wavR5aR121hR6tgoR0i18476R1R2R3y25:sounds%2F9_hardpunch2.wavR5aR122hR6tgoR0i21190R1R2R3y19:sounds%2FBlock1.wavR5aR123hR6tgoR0i21190R1R2R3y19:sounds%2FBlock2.wavR5aR124hR6tgoR0i19628R1R2R3y21:sounds%2FBlockHit.wavR5aR125hR6tgoR0i23084R1R2R3y21:sounds%2FHandClap.wavR5aR126hR6tgoR0i99116R1R2R3y21:sounds%2FLostMath.wavR5aR127hR6tgoR0i73772R1R2R3y17:sounds%2FPlay.wavR5aR128hR6tgoR0i125612R1R2R3y20:sounds%2FSpecial.wavR5aR129hR6tgoR0i28844R1R2R3y18:sounds%2FStep1.wavR5aR130hR6tgoR0i29996R1R2R3y18:sounds%2FStep2.wavR5aR131hR6tgoR0i47276R1R2R3y19:sounds%2FSwing0.wavR5aR132hR6tgoR0i11564R1R2R3y19:sounds%2FSwing1.wavR5aR133hR6tgoR0i32300R1R2R3y19:sounds%2FSwing2.wavR5aR134hR6tgoR0i17324R1R2R3y19:sounds%2FSwing3.wavR5aR135hR6tgoR0i24236R1R2R3y19:sounds%2FSwing4.wavR5aR136hR6tgoR0i38060R1R2R3y19:sounds%2FSwing5.wavR5aR137hR6tgoR0i11564R1R2R3y19:sounds%2FSwing6.wavR5aR138hR6tgoR0i38060R1R2R3y19:sounds%2FSwing7.wavR5aR139hR6tgoR0i26532R1R2R3y19:sounds%2FSwing8.wavR5aR140hR6tgoR0i156716R1R2R3y21:sounds%2FTankBoom.wavR5aR141hR6tgoR0i107302R1R2R3y29:sounds%2FTeleportCounter1.wavR5aR142hR6tgoR0i107302R1R2R3y29:sounds%2FTeleportCounter2.wavR5aR143hR6tgoR0i51884R1R2R3y28:sounds%2FTeleportNormal1.wavR5aR144hR6tgoR0i72620R1R2R3y28:sounds%2FTeleportNormal2.wavR5aR145hR6tgoR0i39212R1R2R3y28:sounds%2FTeleportNormal3.wavR5aR146hR6tgoR0i110636R1R2R3y21:sounds%2FWonMatch.wavR5aR147hR6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("Slaptastic");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("Slaptastic");
		library = Assets.getLibrary ("Box");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("Box");
		library = Assets.getLibrary ("FrameAdvantageHud");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("FrameAdvantageHud");
		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

		#end

	}


}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1008_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1032_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1045_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1060_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_10_hardpunch1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1107_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1118_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1145_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1187_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1188_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1192_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_11_cut04_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1215_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1216_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1252_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1257_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_12_cut03_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1387_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_13_cut02_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_142_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_14_cut01_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1558_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1579_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1586_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1595_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_15_breakbone_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_162_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1685_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_16_pompeii_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1706_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1734_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_17_andyhunter_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1870_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1872_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1874_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1876_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1878_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1880_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1882_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1884_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1886_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1888_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1890_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1892_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1894_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1896_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1898_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1938_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1940_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1942_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1959_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1961_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1967_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1_twack2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2082_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2083_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2097_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2103_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2107_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2113_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2124_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2126_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2131_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2132_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2133_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2140_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2162_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2166_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2167_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2168_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2_twack1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_3_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_3_ssh_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_402_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_415_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_446_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_466_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_4_handslap1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_505_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_535_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_574_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_59_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_590_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_5_mmdie_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_60_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_601_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_603_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_61_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_627_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_635_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_636_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_652_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_664_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_678_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_679_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_6_land1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_702_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_707_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_720_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_732_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_750_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_754_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_766_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_7_jumpx_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_802_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_820_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_837_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_838_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_867_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_8_hardpunch3_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_904_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_930_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_995_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_996_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_9_hardpunch2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_block1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_block2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_blockhit_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_handclap_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_lostmath_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_play_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_special_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_step1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_step2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_swing0_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_swing1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_swing2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_swing3_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_swing4_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_swing5_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_swing6_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_swing7_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_swing8_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_tankboom_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_teleportcounter1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_teleportcounter2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_teleportnormal1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_teleportnormal2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_teleportnormal3_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_wonmatch_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__lib_slaptastic_zip extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__lib_box_zip extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__lib_frameadvantagehud_zip extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:file("assets/sounds/1.wav") @:noCompletion #if display private #end class __ASSET__sounds_1_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1008.wav") @:noCompletion #if display private #end class __ASSET__sounds_1008_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1032.wav") @:noCompletion #if display private #end class __ASSET__sounds_1032_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1045.wav") @:noCompletion #if display private #end class __ASSET__sounds_1045_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1060.wav") @:noCompletion #if display private #end class __ASSET__sounds_1060_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/10_hardpunch1.wav") @:noCompletion #if display private #end class __ASSET__sounds_10_hardpunch1_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1107.wav") @:noCompletion #if display private #end class __ASSET__sounds_1107_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1118.wav") @:noCompletion #if display private #end class __ASSET__sounds_1118_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1145.wav") @:noCompletion #if display private #end class __ASSET__sounds_1145_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1187.wav") @:noCompletion #if display private #end class __ASSET__sounds_1187_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1188.wav") @:noCompletion #if display private #end class __ASSET__sounds_1188_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1192.wav") @:noCompletion #if display private #end class __ASSET__sounds_1192_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/11_Cut04.wav") @:noCompletion #if display private #end class __ASSET__sounds_11_cut04_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1215.wav") @:noCompletion #if display private #end class __ASSET__sounds_1215_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1216.wav") @:noCompletion #if display private #end class __ASSET__sounds_1216_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1252.wav") @:noCompletion #if display private #end class __ASSET__sounds_1252_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1257.wav") @:noCompletion #if display private #end class __ASSET__sounds_1257_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/12_Cut03.wav") @:noCompletion #if display private #end class __ASSET__sounds_12_cut03_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1387.wav") @:noCompletion #if display private #end class __ASSET__sounds_1387_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/13_Cut02.wav") @:noCompletion #if display private #end class __ASSET__sounds_13_cut02_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/142.wav") @:noCompletion #if display private #end class __ASSET__sounds_142_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/14_Cut01.wav") @:noCompletion #if display private #end class __ASSET__sounds_14_cut01_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1558.wav") @:noCompletion #if display private #end class __ASSET__sounds_1558_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1579.wav") @:noCompletion #if display private #end class __ASSET__sounds_1579_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1586.wav") @:noCompletion #if display private #end class __ASSET__sounds_1586_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1595.wav") @:noCompletion #if display private #end class __ASSET__sounds_1595_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/15_Breakbone.wav") @:noCompletion #if display private #end class __ASSET__sounds_15_breakbone_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/162.wav") @:noCompletion #if display private #end class __ASSET__sounds_162_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1685.wav") @:noCompletion #if display private #end class __ASSET__sounds_1685_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/16_Pompeii.wav") @:noCompletion #if display private #end class __ASSET__sounds_16_pompeii_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1706.wav") @:noCompletion #if display private #end class __ASSET__sounds_1706_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1734.wav") @:noCompletion #if display private #end class __ASSET__sounds_1734_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/17_AndyHunter.wav") @:noCompletion #if display private #end class __ASSET__sounds_17_andyhunter_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1870.wav") @:noCompletion #if display private #end class __ASSET__sounds_1870_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1872.wav") @:noCompletion #if display private #end class __ASSET__sounds_1872_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1874.wav") @:noCompletion #if display private #end class __ASSET__sounds_1874_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1876.wav") @:noCompletion #if display private #end class __ASSET__sounds_1876_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1878.wav") @:noCompletion #if display private #end class __ASSET__sounds_1878_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1880.wav") @:noCompletion #if display private #end class __ASSET__sounds_1880_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1882.wav") @:noCompletion #if display private #end class __ASSET__sounds_1882_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1884.wav") @:noCompletion #if display private #end class __ASSET__sounds_1884_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1886.wav") @:noCompletion #if display private #end class __ASSET__sounds_1886_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1888.wav") @:noCompletion #if display private #end class __ASSET__sounds_1888_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1890.wav") @:noCompletion #if display private #end class __ASSET__sounds_1890_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1892.wav") @:noCompletion #if display private #end class __ASSET__sounds_1892_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1894.wav") @:noCompletion #if display private #end class __ASSET__sounds_1894_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1896.wav") @:noCompletion #if display private #end class __ASSET__sounds_1896_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1898.wav") @:noCompletion #if display private #end class __ASSET__sounds_1898_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1938.wav") @:noCompletion #if display private #end class __ASSET__sounds_1938_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1940.wav") @:noCompletion #if display private #end class __ASSET__sounds_1940_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1942.wav") @:noCompletion #if display private #end class __ASSET__sounds_1942_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1959.wav") @:noCompletion #if display private #end class __ASSET__sounds_1959_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1961.wav") @:noCompletion #if display private #end class __ASSET__sounds_1961_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1967.wav") @:noCompletion #if display private #end class __ASSET__sounds_1967_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/1_Twack2.wav") @:noCompletion #if display private #end class __ASSET__sounds_1_twack2_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/2.wav") @:noCompletion #if display private #end class __ASSET__sounds_2_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/2082.wav") @:noCompletion #if display private #end class __ASSET__sounds_2082_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/2083.wav") @:noCompletion #if display private #end class __ASSET__sounds_2083_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/2097.wav") @:noCompletion #if display private #end class __ASSET__sounds_2097_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/2103.wav") @:noCompletion #if display private #end class __ASSET__sounds_2103_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/2107.wav") @:noCompletion #if display private #end class __ASSET__sounds_2107_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/2113.wav") @:noCompletion #if display private #end class __ASSET__sounds_2113_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/2124.wav") @:noCompletion #if display private #end class __ASSET__sounds_2124_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/2126.wav") @:noCompletion #if display private #end class __ASSET__sounds_2126_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/2131.wav") @:noCompletion #if display private #end class __ASSET__sounds_2131_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/2132.wav") @:noCompletion #if display private #end class __ASSET__sounds_2132_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/2133.wav") @:noCompletion #if display private #end class __ASSET__sounds_2133_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/2140.wav") @:noCompletion #if display private #end class __ASSET__sounds_2140_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/2162.wav") @:noCompletion #if display private #end class __ASSET__sounds_2162_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/2166.wav") @:noCompletion #if display private #end class __ASSET__sounds_2166_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/2167.wav") @:noCompletion #if display private #end class __ASSET__sounds_2167_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/2168.wav") @:noCompletion #if display private #end class __ASSET__sounds_2168_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/2_Twack1.wav") @:noCompletion #if display private #end class __ASSET__sounds_2_twack1_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/3.wav") @:noCompletion #if display private #end class __ASSET__sounds_3_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/3_SSH.wav") @:noCompletion #if display private #end class __ASSET__sounds_3_ssh_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/402.wav") @:noCompletion #if display private #end class __ASSET__sounds_402_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/415.wav") @:noCompletion #if display private #end class __ASSET__sounds_415_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/446.wav") @:noCompletion #if display private #end class __ASSET__sounds_446_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/466.wav") @:noCompletion #if display private #end class __ASSET__sounds_466_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/4_HandSlap1.wav") @:noCompletion #if display private #end class __ASSET__sounds_4_handslap1_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/505.wav") @:noCompletion #if display private #end class __ASSET__sounds_505_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/535.wav") @:noCompletion #if display private #end class __ASSET__sounds_535_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/574.wav") @:noCompletion #if display private #end class __ASSET__sounds_574_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/59.wav") @:noCompletion #if display private #end class __ASSET__sounds_59_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/590.wav") @:noCompletion #if display private #end class __ASSET__sounds_590_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/5_MMDie.wav") @:noCompletion #if display private #end class __ASSET__sounds_5_mmdie_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/60.wav") @:noCompletion #if display private #end class __ASSET__sounds_60_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/601.wav") @:noCompletion #if display private #end class __ASSET__sounds_601_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/603.wav") @:noCompletion #if display private #end class __ASSET__sounds_603_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/61.wav") @:noCompletion #if display private #end class __ASSET__sounds_61_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/627.wav") @:noCompletion #if display private #end class __ASSET__sounds_627_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/635.wav") @:noCompletion #if display private #end class __ASSET__sounds_635_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/636.wav") @:noCompletion #if display private #end class __ASSET__sounds_636_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/652.wav") @:noCompletion #if display private #end class __ASSET__sounds_652_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/664.wav") @:noCompletion #if display private #end class __ASSET__sounds_664_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/678.wav") @:noCompletion #if display private #end class __ASSET__sounds_678_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/679.wav") @:noCompletion #if display private #end class __ASSET__sounds_679_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/6_land1.wav") @:noCompletion #if display private #end class __ASSET__sounds_6_land1_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/702.wav") @:noCompletion #if display private #end class __ASSET__sounds_702_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/707.wav") @:noCompletion #if display private #end class __ASSET__sounds_707_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/720.wav") @:noCompletion #if display private #end class __ASSET__sounds_720_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/732.wav") @:noCompletion #if display private #end class __ASSET__sounds_732_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/750.wav") @:noCompletion #if display private #end class __ASSET__sounds_750_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/754.wav") @:noCompletion #if display private #end class __ASSET__sounds_754_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/766.wav") @:noCompletion #if display private #end class __ASSET__sounds_766_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/7_Jumpx.wav") @:noCompletion #if display private #end class __ASSET__sounds_7_jumpx_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/802.wav") @:noCompletion #if display private #end class __ASSET__sounds_802_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/820.wav") @:noCompletion #if display private #end class __ASSET__sounds_820_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/837.wav") @:noCompletion #if display private #end class __ASSET__sounds_837_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/838.wav") @:noCompletion #if display private #end class __ASSET__sounds_838_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/867.wav") @:noCompletion #if display private #end class __ASSET__sounds_867_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/8_hardpunch3.wav") @:noCompletion #if display private #end class __ASSET__sounds_8_hardpunch3_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/904.wav") @:noCompletion #if display private #end class __ASSET__sounds_904_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/930.wav") @:noCompletion #if display private #end class __ASSET__sounds_930_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/995.wav") @:noCompletion #if display private #end class __ASSET__sounds_995_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/996.wav") @:noCompletion #if display private #end class __ASSET__sounds_996_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/9_hardpunch2.wav") @:noCompletion #if display private #end class __ASSET__sounds_9_hardpunch2_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/Block1.wav") @:noCompletion #if display private #end class __ASSET__sounds_block1_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/Block2.wav") @:noCompletion #if display private #end class __ASSET__sounds_block2_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/BlockHit.wav") @:noCompletion #if display private #end class __ASSET__sounds_blockhit_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/HandClap.wav") @:noCompletion #if display private #end class __ASSET__sounds_handclap_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/LostMath.wav") @:noCompletion #if display private #end class __ASSET__sounds_lostmath_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/Play.wav") @:noCompletion #if display private #end class __ASSET__sounds_play_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/Special.wav") @:noCompletion #if display private #end class __ASSET__sounds_special_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/Step1.wav") @:noCompletion #if display private #end class __ASSET__sounds_step1_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/Step2.wav") @:noCompletion #if display private #end class __ASSET__sounds_step2_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/Swing0.wav") @:noCompletion #if display private #end class __ASSET__sounds_swing0_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/Swing1.wav") @:noCompletion #if display private #end class __ASSET__sounds_swing1_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/Swing2.wav") @:noCompletion #if display private #end class __ASSET__sounds_swing2_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/Swing3.wav") @:noCompletion #if display private #end class __ASSET__sounds_swing3_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/Swing4.wav") @:noCompletion #if display private #end class __ASSET__sounds_swing4_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/Swing5.wav") @:noCompletion #if display private #end class __ASSET__sounds_swing5_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/Swing6.wav") @:noCompletion #if display private #end class __ASSET__sounds_swing6_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/Swing7.wav") @:noCompletion #if display private #end class __ASSET__sounds_swing7_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/Swing8.wav") @:noCompletion #if display private #end class __ASSET__sounds_swing8_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/TankBoom.wav") @:noCompletion #if display private #end class __ASSET__sounds_tankboom_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/TeleportCounter1.wav") @:noCompletion #if display private #end class __ASSET__sounds_teleportcounter1_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/TeleportCounter2.wav") @:noCompletion #if display private #end class __ASSET__sounds_teleportcounter2_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/TeleportNormal1.wav") @:noCompletion #if display private #end class __ASSET__sounds_teleportnormal1_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/TeleportNormal2.wav") @:noCompletion #if display private #end class __ASSET__sounds_teleportnormal2_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/TeleportNormal3.wav") @:noCompletion #if display private #end class __ASSET__sounds_teleportnormal3_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/WonMatch.wav") @:noCompletion #if display private #end class __ASSET__sounds_wonmatch_wav extends haxe.io.Bytes {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else



#end

#if (openfl && !flash)

#if html5

#else

#end

#end
#end

#end

#end