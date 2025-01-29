class CfgPatches {
	class CWA_CE_CHN_LANG_2_0_2_07 {
		name = "CWA_CE_CHN_LANG_2_0_2_07";
		author = "IF";
		units[] = {};
		requiredAddons[] = {}; // IMPORTANT!
		requiredVersion = 2.02;
	};
};
class CfgFonts {
	// take care. Total length of font can't be longer than 32 chars
	class Chinese {
		TahomaB24 = "CHN\CNb_Li_64";
		TahomaB36 = "CHN\ThmB_Li_36";
		TahomaB48 = "CHN\CNb_Li_64";
		CourierNewB64 = "CHN\CNb_Li_64";
		AudreysHandB48 = "CHN\hwxk48";
		AudreysHandI48 = "CHN\hwxk48";
		Garamond64 = "CHN\CNb_Li_64";
		SteelfishB128 = "CHN\Sf_Cfs_B_64";
		SteelfishB64 = "CHN\Sf_Cfs_B_64";
		SteelfishB64CE = "CHN\Sf_Cfs_B_64";
	};
	class Chinese_ChatOnly : Chinese {
		// TahomaB36 = "TahomaB36";
	};
};