class CfgPatches {
	class CWA_CE_CHN_LANG_2_0_2_05 {
		name = "CWA_CE_CHN_LANG_2_0_2_05";
		author = "IF";
		units[] = {};
		requiredAddons[] = {}; // IMPORTANT!
		requiredVersion = 2.02;
	};
};
class CfgFonts {
	class Korean {
		TahomaB24 = "hfont16";
		TahomaB36 = "hfont16";
		TahomaB48 = "hfont16";
		CourierNewB64 = "hfont16";
		Garamond64 = "hfont16";
		SteelfishB64 = "hfont32";
		SteelfishB128 = "hfont32_16";
		AudreysHandB48 = "hfont16";
		AudreysHandI48 = "hfont16";
	};

	// 2.01 add Czech/Russian Fonts supporting
	class Czech {
		TahomaB24 = "Czech\CZ_TahomaB24";
		TahomaB36 = "Czech\CZ_TahomaB36";
		TahomaB48 = "Czech\CZ_TahomaB48";
		CourierNewB64 = "Czech\CZ_CourierNewB64";
		AudreysHandB48 = "Czech\CZ_AudreysHandB48";
		AudreysHandI48 = "Czech\CZ_AudreysHandI48";
		Garamond64 = "Czech\CZ_Garamond64";
		SteelfishB128 = "Czech\CZ_SteelfishB128";
		SteelfishB64 = "Czech\CZ_SteelfishB64";
		SteelfishB64CE = "Czech\CZ_SteelfishB64CE";
	};
	class Russian {
		TahomaB24 = "Russian\TahomaB24";
		TahomaB36 = "Russian\TahomaB36";
		TahomaB48 = "Russian\TahomaB48";
		CourierNewB64 = "Russian\CourierNewB64";
		AudreysHandB48 = "Russian\AudreysHandB48";
		AudreysHandI48 = "Russian\AudreysHandI48";
		Garamond64 = "Russian\Garamond64";
		SteelfishB128 = "Russian\SteelfishB128";
		SteelfishB64 = "Russian\SteelfishB64";
		SteelfishB64CE = "Russian\SteelfishB64CE";
	};
	// take care. Total length of font can't be longer than 32 chars
	class Chinese {
		TahomaB24 = "Chinese\CNb_Hei_64";
		TahomaB36 = "Chinese\CNb_Hei_64";
		TahomaB48 = "Chinese\CNb_Hei_64";
		CourierNewB64 = "Chinese\CNb_Hei_64";
		AudreysHandB48 = "Chinese\AHb_Kai_48";
		AudreysHandI48 = "Chinese\AHb_Kai_48";
		Garamond64 = "Chinese\AHb_Kai_48";
		SteelfishB128 = "Chinese\Sb_Lib_64";
		SteelfishB64 = "Chinese\Sb_Lib_64";
		SteelfishB64CE = "Chinese\Sb_Lib_64";
	};
	class Chinese_ChatOnly : Chinese {};
};