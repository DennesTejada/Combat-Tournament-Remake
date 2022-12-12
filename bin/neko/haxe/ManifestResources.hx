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
		Assets.libraryPaths["default"] = rootPath + "manifest/default.json";
		

		library = Assets.getLibrary ("Slaptastic");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("Slaptastic");
		library = Assets.getLibrary ("Box");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("Box");
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

@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1008_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1032_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1045_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1060_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1065_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_10_hardpunch1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1104_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1107_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1118_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1132_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1145_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1187_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1188_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1192_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_11_cut04_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1215_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1216_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1252_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1257_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1258_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1277_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_12_cut03_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1304_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1387_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_13_cut02_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_142_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_14_cut01_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1558_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1560_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1561_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1565_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1579_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1586_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1595_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_15_breakbone_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1604_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_162_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1685_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_16_pompeii_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1706_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1717_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1724_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1734_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_17_andyhunter_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1834_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1836_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1838_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1840_wav extends null { }
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
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_18_swing12_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1927_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1935_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1938_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1940_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1942_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1959_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1961_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1967_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_1_twack2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2082_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2083_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2097_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2103_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2107_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2113_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2124_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2125_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2126_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2131_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2132_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2133_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2140_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2162_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2166_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2167_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2168_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_22_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_23_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_24_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_2_twack1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__sounds_382_wav extends null { }
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
@:keep @:bind @:noCompletion #if display private #end class __ASSET__c__users_dennes_documents_games_ctr_bin_neko_haxe__generated_slaptastic_fla_sprite1361_17_hx extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__c__users_dennes_documents_games_ctr_bin_neko_haxe__generated_slaptastic_fla_sprite1338_16_hx extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__c__users_dennes_documents_games_ctr_bin_neko_haxe__generated_slaptastic_fla_sprite1331_15_hx extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__c__users_dennes_documents_games_ctr_bin_neko_haxe__generated_slaptastic_hx extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__c__users_dennes_documents_games_ctr_bin_neko_haxe__generated_slaptastic_fla_hurttop_30_hx extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__c__users_dennes_documents_games_ctr_bin_neko_haxe__generated_slaptastic_fla_attack1_22_hx extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__c__users_dennes_documents_games_ctr_bin_neko_haxe__generated_slaptastic_fla_sprite356_3_hx extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__c__users_dennes_documents_games_ctr_bin_neko_haxe__generated_slaptastic_fla_sprite354_2_hx extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__c__users_dennes_documents_games_ctr_bin_neko_haxe__generated_slaptastic_fla_sprite1490_18_hx extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__c__users_dennes_documents_games_ctr_bin_neko_haxe__generated_slaptasticattack_hx extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__c__users_dennes_documents_games_ctr_bin_neko_haxe__generated_slaptastic_fla_sprite245_20_hx extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__c__users_dennes_documents_games_ctr_bin_neko_haxe__generated_slaptastic_fla_sprite365_4_hx extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__c__users_dennes_documents_games_ctr_bin_neko_haxe__generated_hitbox_hx extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__c__users_dennes_documents_games_ctr_bin_neko_haxe__generated_slaptastic_fla_sprite206_7_hx extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__lib_slaptastic_zip extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__lib_box_zip extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)




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