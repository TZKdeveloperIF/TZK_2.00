// replace big interger with minus value (e.g. 4294967295 = -1)
// remove ending 0 in decimal
// adjust '{' position
// fill ';' in the end of line
// adjust definition pos of those "transitionsInterpolated" attributes

// 2.01 add isBinocular and isNVG attribute. Not good enough design because
// on upgrading 2.01 many mod should adjust their design to fit this
// Is it possible to make this attribute optional?
// 2.01 add ammo from addons as well

// Add MineAPE in put
// Add MineAPE definition
// Apply TZK design on mine/satchel
// Apply TZK design on LAWLauncher (I forgot why)

class CfgWeapons {
	access = 1;
	class Default {
		access = 3;
		scopeWeapon = 0;
		scopeMagazine = 0;
		valueWeapon = 2;
		valueMagazine = 2;
		picture = "";
		uiPicture = "ivojak";
		ammo = "";
		cursor = "w_weapon";
		cursorAim = "w_lock";
		weaponType = 65536;
		magazineType = 0;
		displayName = "";
		displayNameMagazine = "";
		shortNameMagazine = "";
		nameSound = "weapon";
		count = 0;
		multiplier = 1;
		burst = 1;
		magazineReloadTime = 0;
		reloadTime = 1;
		sound[] = {"",1,1};
		soundContinuous = 0;
		drySound[] = {"",1,1};
		reloadSound[] = {"",1,1};
		reloadMagazineSound[] = {"",1,1};
		initSpeed = 0;
		maxLeadSpeed = 50;
		flash = "";
		flashSize = 0;
		dispersion = 0.002;
		aiDispersionCoefX = 1;
		aiDispersionCoefY = 1;
		canLock = 2;
		enableAttack = 1;
		ffMagnitude = 0;
		ffFrequency = 1;
		ffCount = 1;
		recoil = "Empty";
		model = "";
		modelSpecial = "";
		modelMagazine = "\misc\mag_univ.p3d";
		muzzlePos = "usti hlavne";
		muzzleEnd = "konec hlavne";
		cartridgePos = "nabojnicestart";
		cartridgeVel = "nabojniceend";
		modelOptics = "";
		opticsFlare = 1;
		optics = 1;
		forceOptics = 0;
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
		distanceZoomMin = 400;
		distanceZoomMax = 400;
		primary = 10;
		showEmpty = 1;
		autoFire = 0;
		autoReload = 1;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 500;
		backgroundReload = 0;
		reloadAction = "ManActReloadMagazine";
		muzzles[] = {"this"};
		magazines[] = {"this"};
		modes[] = {"this"};
		useAction = 0;
		useActionTitle = "";
		canDrop = 1;
	};
	class Shell73: Default {
		scopeWeapon = 0;
		scopeMagazine = 2;
		displayName = "$STR_DN_SHELL";
		displayNameMagazine = "$STR_MN_SHELL";
		shortNameMagazine = "$STR_SN_SHELL";
		nameSound = "shell";
		ammo = "Shell73";
		count = 15;
		initSpeed = 700;
		reloadTime = 16;
		sound[] = {"Weapons\gun73",10,1};
		reloadSound[] = {"Weapons\reload",0.001,1};
		ffCount = 1;
	};
	class Heat73: Shell73 {
		ammo = "Heat73";
		displayName = "$STR_DN_HEAT";
		displayNameMagazine = "$STR_MN_HEAT";
		shortNameMagazine = "$STR_SN_HEAT";
		nameSound = "heat";
	};
	class Gun73: Default {
		scopeWeapon = 2;
		scopeMagazine = 0;
		displayName = "$STR_DN_GUN";
		sound[] = {"Weapons\gun73",10,1};
		reloadSound[] = {"Weapons\reload",0.001,1};
		backgroundReload = 1;
		ffMagnitude = 1;
		ffFrequency = 5;
		magazines[] = {"Heat73","Shell73"};
	};
	class Shell105: Shell73 {
		ammo = "Shell105";
		count = 35;
		initSpeed = 900;
		reloadTime = 16;
		sound[] = {"Weapons\gun105",10,1};
		reloadSound[] = {"Weapons\missload",0.000316,1};
	};
	class Heat105: Shell105 {
		ammo = "Heat105";
		displayName = "$STR_DN_HEAT";
		displayNameMagazine = "$STR_MN_HEAT";
		shortNameMagazine = "$STR_SN_HEAT";
		nameSound = "heat";
		sound[] = {"Weapons\gun105",10,1};
		reloadSound[] = {"Weapons\missload",0.000316,1};
	};
	class Gun105: Gun73 {
		sound[] = {"Weapons\gun105",10,1};
		reloadSound[] = {"Weapons\missload",0.000316,1};
		magazines[] = {"Heat105","Shell105"};
	};
	class Shell120: Shell105 {
		ammo = "Shell120";
		count = 35;
		initSpeed = 1500;
		reloadTime = 8;
		sound[] = {"Weapons\gun120",10,1};
		reloadSound[] = {"Weapons\missload",0.000316,1};
	};
	class Heat120: Shell120 {
		ammo = "Heat120";
		displayName = "$STR_DN_HEAT";
		displayNameMagazine = "$STR_MN_HEAT";
		shortNameMagazine = "$STR_SN_HEAT";
		nameSound = "heat";
		sound[] = {"Weapons\gun120",10,1};
		reloadSound[] = {"Weapons\missload",0.000316,1};
	};
	class Gun120: Gun105 {
		sound[] = {"Weapons\gun120",10,1};
		reloadSound[] = {"Weapons\missload",0.000316,1};
		magazines[] = {"Heat120","Shell120"};
	};
	class Shell125: Shell120 {
		ammo = "Shell125";
		count = 35;
		initSpeed = 1200;
		reloadTime = 8;
		sound[] = {"Weapons\gun125",10,1};
		reloadSound[] = {"Weapons\missload",0.000316,1};
	};
	class Heat125: Shell125 {
		ammo = "Heat125";
		displayName = "$STR_DN_HEAT";
		displayNameMagazine = "$STR_MN_HEAT";
		shortNameMagazine = "$STR_SN_HEAT";
		nameSound = "heat";
		sound[] = {"Weapons\gun125",10,1};
		reloadSound[] = {"Weapons\missload",0.000316,1};
	};
	class Gun125: Gun120 {
		sound[] = {"Weapons\gun125",10,1};
		reloadSound[] = {"Weapons\missload",0.000316,1};
		magazines[] = {"Heat125","Shell125"};
	};
	class MGun: Default {
		ammo = "BulletSingle";
		displayName = "$STR_DN_MGUN";
		displayNameMagazine = "$STR_MN_MGUN";
		shortNameMagazine = "$STR_SN_MGUN";
		nameSound = "mgun";
		count = 100;
		reloadTime = 0.25;
		sound[] = {"Weapons\M60mgun",1,1};
		soundContinuous = 1;
		reloadSound[] = {"",1,1};
		initSpeed = 900;
		flash = "gunfire";
		flashSize = 0.5;
		optics = 0;
	};
	class Riffle: MGun {
		cursor = "w_weapon_T";
		cursorAim = "w_weapon_S";
		valueWeapon = 4;
		valueMagazine = 4;
		ammo = "BulletSingle";
		displayName = "$STR_DN_RIFLE";
		displayNameMagazine = "$STR_MN_MGUN";
		shortNameMagazine = "$STR_SN_MGUN";
		weaponType = 1;
		magazineType = 256;
		count = 30;
		reloadTime = 0.15;
		magazineReloadTime = 5;
		sound[] = {"42m16",1,1};
		reloadSound[] = {"",1,1};
		reloadMagazineSound[] = {"weapons\m16load",0.000316,1};
		opticsFlare = 0;
		autoReload = 0;
		flash = "gunfire";
		flashSize = 0.5;
		dispersion = 0.0001;
		aiDispersionCoefX = 2;
		aiDispersionCoefY = 2;
		maxLeadSpeed = 23;
		canLock = 0;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		ffCount = 3;
	};
	class StrokeFist: Default {
		scopeWeapon = 1;
		scopeMagazine = 1;
		ammo = "StrokeFistHit";
		weaponType = 0;
		magazineType = 0;
		displayName = "$STR_DN_FIST";
		displayNameMagazine = "$STR_MN_FIST";
		shortNameMagazine = "$STR_SN_FIST";
		sound[] = {"Weapons\grenade_launch",0.003162,1};
		reloadSound[] = {"",0.000316,1};
		aiDispersionCoefX = 2;
		aiDispersionCoefY = 2;
		enableAttack = 0;
		primary = 1;
		showEmpty = 0;
		autoReload = 1;
		burst = 0;
		multiplier = 0;
		magazines[] = {"StrokeFist"};
		reloadTime = 0;
		initSpeed = 0;
		canLock = 0;
		ffMagnitude = 0.1;
		ffFrequency = 1;
		ffCount = 1;
		recoil = "Empty";
		dispersion = 0.015;
		maxLeadSpeed = 15;
		optics = 0;
		muzzlePos = "";
		muzzleEnd = "";
		count = 100;
		canDrop = 0;
	};
	class StrokeGun: StrokeFist {
		ammo = "StrokeGunHit";
		scopeWeapon = 0;
		scopeMagazine = 1;
		displayName = "$STR_DN_STRIKE";
		displayNameMagazine = "$STR_MN_STRIKE";
		shortNameMagazine = "$STR_SN_STRIKE";
		count = 100;
		modelOptics = "";
		magazines[] = {"StrokeGun"};
		primary = 1;
	};
	class M16: Riffle {
		scopeWeapon = 2;
		scopeMagazine = 2;
		valueWeapon = 0;
		valueMagazine = 1;
		model = "m16_proxy";
		modelOptics = "optika_m16";
		optics = 1;
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
		displayName = "$STR_DN_M16";
		displayNameMagazine = "$STR_MN_M16";
		shortNameMagazine = "$STR_SN_M16";
		drySound[] = {"weapons\M16dry",0.01,1};
		magazines[] = {"M16","Mortar"};
		modes[] = {"Single","Burst"};
		class Single {
			ammo = "BulletSingleW";
			multiplier = 1;
			burst = 1;
			displayName = "$STR_DN_M16";
			dispersion = 0.0002;
			sound[] = {"Weapons\M16Single",1,1};
			soundContinuous = 0;
			reloadTime = 0.07;
			ffCount = 1;
			recoil = "riffleSingle";
			autoFire = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class Burst {
			ammo = "BulletBurstW";
			multiplier = 1;
			burst = 3;
			displayName = "$STR_DN_M16_BURST";
			dispersion = 0.0004;
			sound[] = {"Weapons\M16Burst",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 3;
			recoil = "riffleBurst3";
			autoFire = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
	};
	class M16S: M16 {
		muzzles[] = {"M16Muzzle","M16StrikeMuzzle"};
		picture = "M16";
		class M16Muzzle: M16 {
			magazines[] = {"M16"};
		};
		class M16StrikeMuzzle: StrokeGun {};
	};
	class M4: Riffle {
		scopeWeapon = 2;
		scopeMagazine = 2;
		model = "XM-177E2_proxy";
		modelOptics = "optika_m16";
		optics = 1;
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
		valueWeapon = 2;
		valueMagazine = 2;
		displayName = "$STR_DN_M4";
		displayNameMagazine = "$STR_MN_M4";
		shortNameMagazine = "$STR_SN_M4";
		drySound[] = {"weapons\M16Dry",0.003162,1};
		magazines[] = {"M4","Mortar"};
		modes[] = {"Single","FullAuto"};
		class Single {
			ammo = "BulletSingleW";
			multiplier = 1;
			burst = 1;
			displayName = "$STR_DN_M4";
			dispersion = 0.002;
			sound[] = {"Weapons\M16Single",1,1};
			soundContinuous = 0;
			reloadTime = 0.07;
			ffCount = 1;
			recoil = "riffleSingle";
			autoFire = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class FullAuto {
			ammo = "BulletFullAutoW";
			multiplier = 1;
			burst = 1;
			displayName = "$STR_DN_M4_AUTO";
			dispersion = 0.004;
			sound[] = {"Weapons\M16Single",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "riffleBurst3";
			autoFire = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
	};
	class AK47: Riffle {
		scopeWeapon = 2;
		scopeMagazine = 2;
		valueWeapon = 0;
		valueMagazine = 1;
		model = "AK_47_proxy";
		modelOptics = "optika_ak47";
		optics = 1;
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
		displayName = "$STR_DN_AK47";
		displayNameMagazine = "$STR_MN_AK47";
		shortNameMagazine = "$STR_SN_AK47";
		drySound[] = {"weapons\AK74Dry",0.01,1};
		modes[] = {"Single","Burst","FullAuto"};
		class Single {
			ammo = "BulletSingleG";
			multiplier = 1;
			burst = 1;
			displayName = "$STR_DN_AK47";
			dispersion = 0.0002;
			sound[] = {"Weapons\AK74Single",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 1;
			recoil = "riffleSingle";
			autoFire = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class Burst {
			ammo = "BulletBurstG";
			multiplier = 1;
			burst = 3;
			displayName = "$STR_DN_AK47_BURST";
			dispersion = 0.0004;
			sound[] = {"Weapons\AK74Burst",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 3;
			recoil = "riffleBurst3";
			autoFire = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class FullAuto {
			ammo = "BulletFullAutoG";
			multiplier = 1;
			burst = 1;
			displayName = "$STR_DN_AK47_AUTO";
			dispersion = 0.0008;
			sound[] = {"Weapons\AK74Single",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "riffleBurst3";
			autoFire = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
	};
	class AK47CZ: AK47 {
		scopeWeapon = 2;
		scopeMagazine = 0;
		model = "AK_47_v58_proxy";
		modelOptics = "optika_ak47";
		optics = 1;
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
		displayName = "$STR_DN_AK47_CZ";
		drySound[] = {"weapons\AK74Dry",0.01,1};
		modes[] = {"Single","Burst","FullAuto"};
		magazines[] = {"AK47"};
	};
	class AK74: Riffle {
		scopeWeapon = 2;
		scopeMagazine = 2;
		valueWeapon = 0;
		valueMagazine = 1;
		model = "AK_74_proxy";
		modelOptics = "optika_ak47";
		optics = 1;
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
		displayName = "$STR_DN_AK74";
		displayNameMagazine = "$STR_MN_AK74";
		shortNameMagazine = "$STR_SN_AK74";
		drySound[] = {"weapons\AK74Dry",1,1};
		modes[] = {"Single","Burst","FullAuto"};
		class Single {
			ammo = "BulletSingleE";
			multiplier = 1;
			burst = 1;
			displayName = "$STR_DN_AK74";
			dispersion = 0.0002;
			sound[] = {"Weapons\AK74Single",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 1;
			recoil = "riffleSingle";
			autoFire = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class Burst {
			ammo = "BulletBurstE";
			multiplier = 1;
			burst = 3;
			displayName = "$STR_DN_AK74_BURST";
			dispersion = 0.0004;
			sound[] = {"Weapons\AK74Burst",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 3;
			recoil = "riffleBurst3";
			autoFire = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class FullAuto {
			ammo = "BulletFullAutoE";
			multiplier = 1;
			burst = 1;
			displayName = "$STR_DN_AK74_AUTO";
			dispersion = 0.0008;
			sound[] = {"Weapons\AK74Single",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "riffleBurst3";
			autoFire = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
	};
	class AK74SU: AK74 {
		scopeWeapon = 2;
		scopeMagazine = 0;
		model = "AK_74_SU_proxy";
		modelOptics = "optika_ak47";
		optics = 1;
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
		valueWeapon = 1;
		valueMagazine = 1;
		displayName = "$STR_DN_AK74_SU";
		drySound[] = {"weapons\AK74Dry",0.01,1};
		modes[] = {"Single","Burst","FullAuto"};
		magazines[] = {"AK74"};
	};
	class HK: Riffle {
		scopeWeapon = 2;
		scopeMagazine = 2;
		model = "HKM5_SD6_proxy";
		modelOptics = "optika_HK";
		displayName = "$STR_DN_HK";
		displayNameMagazine = "$STR_MN_HK";
		shortNameMagazine = "$STR_SN_HK";
		drySound[] = {"weapons\m16dry",0.000316,1};
		optics = 1;
		opticsZoomMin = 0.3;
		opticsZoomMax = 0.3;
		distanceZoomMin = 150;
		distanceZoomMax = 150;
		valueWeapon = 1000;
		valueMagazine = 1000;
		initSpeed = 400;
		modes[] = {"Single","FullAuto"};
		class Single {
			ammo = "BulletSilencedSingleW";
			multiplier = 1;
			burst = 1;
			displayName = "$STR_DN_HK";
			dispersion = 0.002;
			sound[] = {"Weapons\hk_singleshot",0.000316,1};
			soundContinuous = 0;
			reloadTime = 0.07;
			recoil = "riffleSilenced";
			ffCount = 1;
			autoFire = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class FullAuto {
			ammo = "BulletSilencedBurstW";
			multiplier = 1;
			burst = 1;
			displayName = "$STR_DN_HK_AUTO";
			dispersion = 0.004;
			sound[] = {"Weapons\hk_fullauto",0.000316,1};
			soundContinuous = 1;
			reloadTime = 0.1;
			ffCount = 1;
			recoil = "riffleSilenced";
			autoFire = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
	};
	class SniperRiffle: Riffle {
		ammo = "BulletSingle";
		displayName = "$STR_DN_SNIPER_RIFFLE";
		dispersion = 0.00003;
		optics = 1;
		opticsZoomMin = 0.16;
		opticsZoomMax = 0.16;
		sound[] = {"Weapons\AKFire_Single",1,1};
		soundContinuous = 0;
		reloadTime = 0.3;
		recoil = "sniperSingle";
		opticsFlare = 1;
		valueWeapon = 1000;
		valueMagazine = 1000;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 500;
		maxLeadSpeed = 50;
		uiPicture = "\misc\isniper_new.paa";
	};
	class M21: SniperRiffle {
		scopeWeapon = 2;
		scopeMagazine = 2;
		model = "M21_proxy";
		modelOptics = "optika_snpierw";
		sound[] = {"Weapons\m21",1,1};
		count = 20;
		ammo = "BulletSniperW";
		opticsZoomMin = 0.04;
		opticsZoomMax = 0.12;
		distanceZoomMin = 400;
		distanceZoomMax = 80;
		displayName = "$STR_DN_M21";
		displayNameMagazine = "$STR_MN_M21";
		shortNameMagazine = "$STR_SN_M21";
	};
	class SVDDragunov: SniperRiffle {
		scopeWeapon = 2;
		scopeMagazine = 2;
		model = "SVD_dragunov_proxy";
		modelOptics = "optika_snpiere";
		count = 10;
		ammo = "BulletSniperE";
		opticsZoomMin = 0.04;
		opticsZoomMax = 0.04;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		displayName = "$STR_DN_SVD";
		displayNameMagazine = "$STR_MN_SVD";
		shortNameMagazine = "$STR_SN_SVD";
	};
	class Binocular: Default {
		scopeWeapon = 2;
		scopeMagazine = 1;
		model = "dalekohled_proxy";
		modelOptics = "optika_dalekohled";
		valueWeapon = 5;
		weaponType = 4096;
		magazineType = 0;
		ammo = "";
		displayName = "$STR_DN_BINOCULAR";
		reloadTime = 0;
		sound[] = {"",0,1};
		canLock = 0;
		optics = 1;
		forceOptics = 1;
		primary = 0;
		opticsZoomMin = 0.085;
		opticsZoomMax = 0.085;
		magazines[] = {};
	};
	class NVGoggles: Binocular {
		displayName = "$STR_DN_NV_GOGGLES";
		showEmpty = 0;
		valueWeapon = 5;
		opticsZoomMin = 1;
		opticsZoomMax = 1;
		modelOptics = "optika_night";
		model = "nvg_proxy";
	};
	class Phone: Binocular {
		scopeWeapon = 1;
		displayName = "$STR_DN_PHONE";
		showEmpty = 0;
		opticsZoomMin = 1;
		opticsZoomMax = 1;
		model = "sluchatko_proxy";
		modelOptics = "";
	};
	class MachineGun7_6: MGun {
		scopeWeapon = 2;
		scopeMagazine = 2;
		valueWeapon = 2;
		valueMagazine = 2;
		ammo = "Bullet7_6";
		count = 500;
		reloadTime = 0.1;
		reloadSound[] = {"",1,1};
		sound[] = {"Weapons\M60mgun",3.162278,1};
		initSpeed = 1000;
		flash = "gunfire";
		flashSize = 0.9;
		dispersion = 0.0007;
		maxLeadSpeed = 300;
		aiDispersionCoefX = 5;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		ffCount = 6;
		recoil = "mgunBurst3";
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 1000;
		autoFire = 1;
		optics = 1;
		uiPicture = "ismg";
	};
	class MachineGun7_6Manual: MachineGun7_6 {
		scopeWeapon = 0;
		scopeMagazine = 0;
		weaponType = "1	 + 	16";
		count = 100;
		magazineType = "2 * 		256";
		canLock = 0;
		reloadAction = "ManActReloadMagazine";
		autoReload = 0;
		reloadMagazineSound[] = {"weapons\m16load",0.000316,1};
		optics = 1;
		opticsFlare = 0;
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
	};
	class M60: MachineGun7_6Manual {
		scopeWeapon = 2;
		scopeMagazine = 2;
		ammo = "Bullet7_6W";
		model = "M60_MG_proxy";
		modelOptics = "optika_M60_MG";
		displayName = "$STR_DN_M60_MG";
		displayNameMagazine = "$STR_MN_M60_MG";
		shortNameMagazine = "$STR_SN_M60_MG";
	};
	class PK: MachineGun7_6Manual {
		scopeWeapon = 2;
		scopeMagazine = 2;
		ammo = "Bullet7_6E";
		model = "PK_MG_proxy";
		modelOptics = "optika_PK";
		sound[] = {"Weapons\AK74full",3.162278,1};
		displayName = "$STR_DN_PK";
		displayNameMagazine = "$STR_MN_PK";
		shortNameMagazine = "$STR_SN_PK";
	};
	class MachineGun12_7: MachineGun7_6 {
		ammo = "Bullet12_7";
		count = 500;
		initSpeed = 1000;
		reloadTime = 0.1;
		sound[] = {"Weapons\m2-50-loop",3.162278,1};
		flashSize = 1.1;
		maxLeadSpeed = 350;
	};
	class Browning: MachineGun12_7 {
		ammo = "Bullet12_7";
		sound[] = {"Weapons\m2-50-loop",31.622778,1};
	};
	class MachineGun30: MachineGun7_6 {
		displayName = "$STR_DN_MG30";
		displayNameMagazine = "$STR_MN_MG30";
		shortNameMagazine = "$STR_SN_MG30";
		ammo = "Bullet30";
		count = 500;
		reloadTime = 0.18;
		initSpeed = 1000;
		sound[] = {"Weapons\automatic_cannon",3.162278,1};
		flashSize = 1.1;
		maxLeadSpeed = 450;
		optics = 1;
	};
	class MachineGun30W: MachineGun30 {
		ammo = "Bullet30W";
	};
	class MachineGun30E: MachineGun30 {
		ammo = "Bullet30E";
	};
	class MachineGun30A10: MachineGun30 {
		canLock = 0;
		sound[] = {"Weapons\vulcan",3.162278,1};
		count = 2000;
		multiplier = 4;
	};
	class MachineGun30A10Burst: MachineGun30A10 {
		ammo = "Bullet30A10";
	};
	class ZsuCannon: MachineGun30 {
		ammo = "Bullet4x23";
		count = 2000;
		multiplier = 4;
		initSpeed = 900;
		flashSize = 1.2;
		reloadTime = 0.1;
		displayName = "$STR_DN_AZP23";
		displayNameMagazine = "$STR_MN_AZP23";
		shortNameMagazine = "$STR_SN_AZP23";
		dispersion = 0.0015;
		maxLeadSpeed = 900;
		aiRateOfFire = 0.3;
		aiRateOfFireDistance = 3000;
	};
	class GrenadeLauncher: Default {
		cursor = "t_select.paa";
		scopeMagazine = 2;
		valueWeapon = 3;
		valueMagazine = 2;
		weaponType = 0;
		magazineType = "2 * 		256";
		ammo = "Grenade";
		displayName = "$STR_DN_GRENADE";
		displayNameMagazine = "$STR_MN_GRENADE";
		shortNameMagazine = "$STR_SN_GRENADE";
		count = 1;
		reloadTime = 0;
		sound[] = {"Weapons\grenade_launch",0.000316,1};
		reloadSound[] = {"Weapons\M16load",0.000316,1};
		initSpeed = 60;
		canLock = 0;
		autoReload = 0;
		ffMagnitude = 0.1;
		ffFrequency = 1;
		ffCount = 1;
		recoil = "Empty";
		dispersion = 0.015;
		aiDispersionCoefY = 2;
		maxLeadSpeed = 15;
		optics = 0;
		muzzlePos = "usti granatometu";
		muzzleEnd = "konec granatometu";
		uiPicture = "igrenadier";
	};
	class RiffleGrenadeLauncher {
		scopeWeapon = 0;
		scopeMagazine = 0;
		weaponType = 1;
		valueWeapon = 0;
		valueMagazine = 0;
		displayName = "$STR_DN_RIFLE_GRENADE";
		model = "";
		picture = "";
		muzzles[] = {"RiffleMuzzle","GrenadesMuzzle"};
		class RiffleMuzzle: Riffle {
			modelOptics = "";
			magazines[] = {"Riffle"};
		};
		class GrenadesMuzzle: GrenadeLauncher {
			modelOptics = "";
			magazines[] = {"GrenadeLauncher","Flare","FlareGreen","FlareRed","FlareYellow"};
		};
		canDrop = 1;
		uiPicture = "igrenadier";
	};
	class M16GrenadeLauncher {
		scopeWeapon = 2;
		scopeMagazine = 0;
		weaponType = 1;
		valueWeapon = 2;
		valueMagazine = 2;
		displayName = "$STR_DN_M16_GRENADE";
		model = "m16_granatomet_proxy";
		picture = "";
		uiPicture = "igrenadier";
		muzzles[] = {"M16Muzzle","M203Muzzle"};
		class M16Muzzle: M16 {
			magazines[] = {"M16"};
		};
		class M203Muzzle: GrenadeLauncher {
			displayName = "$STR_DN_M203";
			sound[] = {"weapons\M16GrenadeLaunch",0.000316,1};
			magazines[] = {"GrenadeLauncher","Flare","FlareGreen","FlareRed","FlareYellow"};
		};
		canDrop = 1;
	};
	class AK47GrenadeLauncher {
		scopeWeapon = 2;
		scopeMagazine = 0;
		weaponType = 1;
		valueWeapon = 2;
		valueMagazine = 2;
		displayName = "$STR_DN_AK47_GRENADE";
		model = "ak_47_granatomet_proxy";
		picture = "";
		uiPicture = "igrenadier";
		muzzles[] = {"AK47Muzzle","GrenadesMuzzle"};
		class AK47Muzzle: AK47 {
			magazines[] = {"AK47"};
		};
		class GrenadesMuzzle: GrenadeLauncher {
			magazines[] = {"GrenadeLauncher","Flare","FlareGreen","FlareRed","FlareYellow"};
		};
		canDrop = 1;
	};
	class AK74GrenadeLauncher {
		scopeWeapon = 2;
		scopeMagazine = 0;
		weaponType = 1;
		valueWeapon = 2;
		valueMagazine = 2;
		displayName = "$STR_DN_AK74_GRENADE";
		model = "ak_74_granatomet_proxy";
		picture = "";
		uiPicture = "igrenadier";
		muzzles[] = {"AK74Muzzle","GrenadesMuzzle"};
		class AK74Muzzle: AK74 {
			magazines[] = {"AK74"};
		};
		class GrenadesMuzzle: GrenadeLauncher {
			magazines[] = {"GrenadeLauncher","Flare","FlareGreen","FlareRed","FlareYellow"};
		};
		canDrop = 1;
	};
	class Mortar: GrenadeLauncher {
		scopeWeapon = 0;
		scopeMagazine = 2;
		modelSpecial = "m16_mortar_proxy";
		valueMagazine = 5;
		magazineType = "2 * 		256";
		ammo = "MortarShell";
		displayName = "$STR_DN_MORTAR_W";
		displayNameMagazine = "$STR_MN_MORTAR_W";
		shortNameMagazine = "$STR_SN_MORTAR_W";
		count = 1;
		initSpeed = 70;
		reloadAction = "ManActReloadMortar";
		modes[] = {"this","this"};
	};
	class Flare: GrenadeLauncher {
		scopeWeapon = 0;
		scopeMagazine = 2;
		valueMagazine = 5;
		magazineType = 256;
		count = 1;
		ammo = "Flare";
		displayName = "$STR_DN_FLARE";
		displayNameMagazine = "$STR_MN_FLARE";
		shortNameMagazine = "$STR_SN_FLARE";
		initSpeed = 80;
	};
	class FlareGreen: Flare {
		ammo = "FlareGreen";
		displayName = "$STR_DN_FLARE_GREEN";
		displayNameMagazine = "$STR_MN_FLARE_GREEN";
		shortNameMagazine = "$STR_SN_FLARE_GREEN";
	};
	class FlareRed: Flare {
		ammo = "FlareRed";
		displayName = "$STR_DN_FLARE_RED";
		displayNameMagazine = "$STR_MN_FLARE_RED";
		shortNameMagazine = "$STR_SN_FLARE_RED";
	};
	class FlareYellow: Flare {
		ammo = "FlareYellow";
		displayName = "$STR_DN_FLARE_YELLOW";
		displayNameMagazine = "$STR_MN_FLARE_YELLOW";
		shortNameMagazine = "$STR_SN_FLARE_YELLOW";
	};
	class Throw: GrenadeLauncher {
		scopeWeapon = 1;
		scopeMagazine = 0;
		valueWeapon = 0;
		weaponType = 0;
		displayName = "$STR_DN_THROW";
		sound[] = {"",0.000316,1};
		reloadSound[] = {"",0.000316,1};
		aiDispersionCoefX = 2;
		aiDispersionCoefY = 2;
		enableAttack = 0;
		showEmpty = 0;
		autoReload = 1;
		magazines[] = {"HandGrenade","SmokeShell","SmokeShellRed","SmokeShellGreen"};
		canDrop = 0;
	};
	class HandGrenade: GrenadeLauncher {
		scopeWeapon = 0;
		scopeMagazine = 2;
		valueMagazine = 1;
		magazineType = 256;
		ammo = "GrenadeHand";
		displayName = "$STR_DN_HAND_GRENADE";
		displayNameMagazine = "$STR_MN_HAND_GRENADE";
		shortNameMagazine = "$STR_SN_HAND_GRENADE";
		initSpeed = 22;
		maxLeadSpeed = 7;
		reloadTime = 1.5;
		count = 1;
		sound[] = {"",0.000316,1};
	};
	class SmokeShell: HandGrenade {
		valueMagazine = 2;
		ammo = "SmokeShell";
		displayName = "$STR_DN_SMOKE";
		displayNameMagazine = "$STR_MN_SMOKE";
		shortNameMagazine = "$STR_SN_SMOKE";
	};
	class SmokeShellRed: SmokeShell {
		ammo = "SmokeShellRed";
		displayName = "$STR_DN_SMOKE_RED";
		displayNameMagazine = "$STR_MN_SMOKE_RED";
		shortNameMagazine = "$STR_SN_SMOKE_RED";
	};
	class SmokeShellGreen: SmokeShell {
		picture = "smokeshell";
		ammo = "SmokeShellGreen";
		displayName = "$STR_DN_SMOKE_GREEN";
		displayNameMagazine = "$STR_MN_SMOKE_GREEN";
		shortNameMagazine = "$STR_SN_SMOKE_GREEN";
	};
	class Put: Default {
		scopeWeapon = 1;
		scopeMagazine = 0;
		valueWeapon = 0;
		weaponType = 0;
		displayName = "$STR_DN_PUT";
		sound[] = {"",0.000316,1};
		reloadSound[] = {"",0.000316,1};
		canLock = 0;
		enableAttack = 0;
		optics = 0;
		primary = 0;
		showEmpty = 0;
		// magazines[] = {"TimeBomb","PipeBomb","Mine","MineE"};
		magazines[] = {"TimeBomb","PipeBomb","Mine","MineE","MineAPE"};
		canDrop = 0;
	};
	class TimeBomb: Default {
		scopeWeapon = 0;
		scopeMagazine = 0;
		magazineType = "2 * 		256";
		ammo = "TimeBomb";
		displayName = "$STR_DN_TIME_BOMB";
		displayNameMagazine = "$STR_MN_TIME_BOMB";
		shortNameMagazine = "$STR_SN_TIME_BOMB";
		enableAttack = 1;
		valueMagazine = 5;
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		useAction = 1;
		useActionTitle = "$STR_ACTION_PUTBOMB";
		sound[] = {"People\gravel_L",0.000316,1};
	};
	class Mine: TimeBomb {
		scopeMagazine = 2;
		enableAttack = 0;
		// magazineType = "2 * 		256";
        // TZK design
		magazineType = "1 * 		256";

		ammo = "Mine";
		displayName = "$STR_DN_MINE";
		displayNameMagazine = "$STR_MN_MINE";
		shortNameMagazine = "$STR_SN_MINE";
	};
	class MineE: TimeBomb {
		scopeMagazine = 2;
		enableAttack = 0;
		// picture = "mine";
        // 2.01 feature
		picture = "\res\equip\m_MineE.paa";

		// magazineType = "2 * 		256";
        // TZK design
		magazineType = "1 *  256";

		ammo = "MineE";
		displayName = "$STR_DN_MINE";
		displayNameMagazine = "$STR_MN_MINE";
		shortNameMagazine = "$STR_SN_MINE";
	};

    #include "cfgWeapons_MineAPE.h"

	class PipeBomb: Put {
		scopeWeapon = 0;
		scopeMagazine = 2;
		enableAttack = 1;
		valueMagazine = 5;

		// magazineType = "2 * 		256";
        // TZK design
		magazineType = "1 * 		256";

		ammo = "PipeBomb";
		displayName = "$STR_DN_PIPE_BOMB";
		displayNameMagazine = "$STR_MN_PIPE_BOMB";
		shortNameMagazine = "$STR_SN_PIPE_BOMB";
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		showEmpty = 0;
		useAction = 1;
		useActionTitle = "$STR_ACTION_PUTBOMB";
		sound[] = {"People\gravel_L",0.000316,1};
		magazines[] = {"this"};
	};
	class LAWLauncher: Default {
		scopeWeapon = 2;
		scopeMagazine = 2;
		weaponType = 16;
		magazineType = "2 * 		256";
		valueWeapon = 10;
		valueMagazine = 5;
		model = "law_proxy";
		modelOptics = "optika_LAW";
		ammo = "LAW";
		displayName = "$STR_DN_LAW";
		displayNameMagazine = "$STR_MN_LAW";
		shortNameMagazine = "$STR_SN_LAW";
		count = 1;
		// magazineReloadTime = 12; // BIS origin value
		magazineReloadTime = 2.5; // TZK modified value
		reloadTime = 0.5;
		sound[] = {"Weapons\at_launch",0.01,1};
		reloadMagazineSound[] = {"Weapons\at_load",0.000316,1};
		initSpeed = 30;
		canLock = 0;
		reloadAction = "ManActReloadAT";
		autoReload = 0;
		ffMagnitude = 0.1;
		ffFrequency = 1;
		ffCount = 1;
		recoil = "LAWSingle";
		aiRateOfFire = 10;
		aiRateOfFireDistance = 500;
		optics = 1;
		primary = 0;
		opticsZoomMin = 0.18;
		opticsZoomMax = 0.18;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		uiPicture = "islaw";
	};
	class RPGLauncher: LAWLauncher {
		model = "RPG7_proxy";
		modelOptics = "optika_RPG";
		ammo = "RPG";
		displayName = "$STR_DN_RPG";
		displayNameMagazine = "$STR_MN_RPG";
		shortNameMagazine = "$STR_SN_RPG";
	};
	class CarlGustavLauncher: LAWLauncher {
		magazineType = "6 * 		256";
		model = "carlgustav84_proxy";
		modelOptics = "optika_CarlGustav";
		canLock = 1;
		valueWeapon = 20;
		valueMagazine = 10;
		ammo = "CarlGustav";
		displayName = "$STR_DN_CARL_GUSTAV";
		displayNameMagazine = "$STR_MN_CARL_GUSTAV";
		shortNameMagazine = "$STR_SN_CARL_GUSTAV";
		uiPicture = "isat";
	};
	class AT4Launcher: CarlGustavLauncher {
		model = "AT-4_SpigotB_proxy";
		modelOptics = "optika_AT4_Spigot_B";
		ammo = "AT4";
		displayName = "$STR_DN_AT4";
		displayNameMagazine = "$STR_MN_AT4";
		shortNameMagazine = "$STR_SN_AT4";
	};
	class AALauncher: CarlGustavLauncher {
		scopeWeapon = 2;
		scopeMagazine = 2;
		model = "Stinger_proxy";
		modelOptics = "optika_stinger";
		magazineType = "6 * 		256";
		canLock = 2;
		valueWeapon = 20;
		valueMagazine = 10;
		ammo = "AA";
		displayName = "$STR_DN_AA";
		displayNameMagazine = "$STR_MN_AA";
		shortNameMagazine = "$STR_SN_AA";
		initSpeed = 30;
		maxLeadSpeed = 600;
		primary = 0;
		uiPicture = "isaa";
	};
	class 9K32Launcher: AALauncher {
		model = "9K32_Strela_proxy";
		modelOptics = "optika_strela";
		ammo = "9K32";
		displayName = "$STR_DN_9K32";
		displayNameMagazine = "$STR_MN_9K32";
		shortNameMagazine = "$STR_SN_9K32";
	};
	class AT3Launcher: CarlGustavLauncher {
		scopeWeapon = 2;
		scopeMagazine = 2;
		weaponType = 65536;
		magazineType = 0;
		ammo = "AT3";
		displayName = "$STR_DN_AT3";
		displayNameMagazine = "$STR_MN_AT3";
		shortNameMagazine = "$STR_SN_AT3";
		count = 6;
		reloadTime = 30;
		sound[] = {"Weapons\missile",0.003162,1};
		reloadSound[] = {"Weapons\missload",0.000316,1};
		initSpeed = 30;
		primary = 10;
		canLock = 2;
		autoReload = 1;
	};
	class HellfireLauncher: AT3Launcher {
		scopeWeapon = 2;
		scopeMagazine = 2;
		ammo = "Hellfire";
		displayName = "$STR_DN_TOW";
		displayNameMagazine = "$STR_MN_TOW";
		shortNameMagazine = "$STR_SN_TOW";
		count = 8;
		reloadTime = 0.5;
		sound[] = {"Weapons\TOW",0.031623,1};
		reloadSound[] = {"Weapons\missload",0.000316,1};
		initSpeed = 0;
		aiRateOfFire = 13;
		aiRateOfFireDistance = 2500;
	};
	class ZuniLauncher38: AT3Launcher {
		scopeWeapon = 2;
		scopeMagazine = 2;
		ammo = "Zuni";
		displayName = "$STR_DN_FFAR";
		displayNameMagazine = "$STR_MN_FFAR";
		shortNameMagazine = "$STR_SN_FFAR";
		count = 38;
		reloadTime = 0.1;
		aiRateOfFire = 0.4;
		aiRateOfFireDistance = 1000;
		sound[] = {"Weapons\rocket1",0.031623,1};
		reloadSound[] = {"Weapons\missload",0.000316,1};
		initSpeed = 44;
		autoFire = 1;
	};
	class Rocket57x64: ZuniLauncher38 {
		ammo = "Rocket57";
		displayName = "$STR_DN_ROCKET_57";
		displayNameMagazine = "$STR_MN_ROCKET_57";
		shortNameMagazine = "$STR_SN_ROCKET_57";
		count = 64;
	};
	class Rocket57x192: Rocket57x64 {
		count = 192;
	};
	class HellfireLauncherCobra: HellfireLauncher {
		count = 8;
	};
	class HellfireLauncherHind: HellfireLauncher {
		ammo = "AT6";
		displayName = "$STR_DN_AT6";
		displayNameMagazine = "$STR_MN_AT6";
		shortNameMagazine = "$STR_SN_AT6";
		count = 8;
		initSpeed = 30;
	};
	class MaverickLauncher: HellfireLauncher {
		ammo = "Maverick";
		displayName = "$STR_DN_MAVERICK";
		displayNameMagazine = "$STR_MN_MAVERICK";
		shortNameMagazine = "$STR_SN_MAVERICK";
		count = 8;
		reloadTime = 0.5;
		sound[] = {"Weapons\Missile",0.003162,1};
		reloadSound[] = {"",0,1};
		initSpeed = 0;
	};
	class CarHorn: Default {
		scopeWeapon = 1;
		ammo = "";
		displayName = "$STR_DN_HORN";
		reloadTime = 0;
		drySound[] = {"Vehicles\carhorn",0.1,1};
		canLock = 0;
		optics = 0;
		enableAttack = 0;
		magazines[] = {};
	};
	class TruckHorn: CarHorn {
		drySound[] = {"Vehicles\carhorn",0.1,0.7};
	};
	class SportCarHorn: CarHorn {
		drySound[] = {"Vehicles\sportcarhorn",0.1,1};
	};
};
