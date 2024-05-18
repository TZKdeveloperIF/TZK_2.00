// remove ending 0 in decimal
// adjust '{' position
// fill ';' in the end of line

////////////////////////////////////////////////////////////////////
//DeRap: D:/Program Files (x86)/Steam/steamapps/common/ARMA Cold War Assault/Res/Bin/CONFIG.BIN
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Sat May 18 16:15:32 2024 : 'file' last modified on Wed Mar 02 11:36:14 2005
////////////////////////////////////////////////////////////////////

#define _OFP_

//(102 Enums)
enum {
	manactstop,	//0
	manposweapon,	//1
	cpcommander,	//2
	manactturnr,	//3
	destructtent,	//4
	manposhandgunlying,	//5
	,	//6
	manactreloadmgun,	//7
	manposcombat,	//8
	manposhandgunstand,	//9
	manactthrowgrenade,	//10
	manposnoweapon,	//11
	manactwalklf,	//12
	manactwalkrf,	//13
	manactwalkl,	//14
	manactwalkr,	//15
	manactwalklb,	//16
	manactwalkrb,	//17
	manactwalkb,	//18
	manactslowf,	//19
	manactslowlf,	//20
	manactslowrf,	//21
	manactslowl,	//22
	manactslowr,	//23
	manactslowlb,	//24
	manactslowrb,	//25
	manactslowb,	//26
	manactfastf,	//27
	manactfastlf,	//28
	manactfastrf,	//29
	manactfastl,	//30
	manactfastr,	//31
	manactfastlb,	//32
	manactfastrb,	//33
	manactfastb,	//34
	manactdown,	//35
	manactup,	//36
	manactlying,	//37
	manactstand,	//38
	manactcombat,	//39
	manactcrouch,	//40
	manactcivil,	//41
	manactcivillying,	//42
	manactfirenotpossible,	//43
	manactdie,	//44
	manactweaponon,	//45
	manactweaponoff,	//46
	manactdefault,	//47
	manactjumpoff,	//48
	manactstrokefist,	//49
	manactstrokegun,	//50
	manactsitdown,	//51
	manactsalute,	//52
	manactbinocon,	//53
	manactbinocoff,	//54
	manactputdown,	//55
	manactmedic,	//56
	manacttreated,	//57
	manactladderondown,	//58
	manactladderonup,	//59
	manactladderoff,	//60
	manactladderofftop,	//61
	manactladderoffbottom,	//62
	manactgetincar,	//63
	manactgetoutcar,	//64
	manactgetintank,	//65
	manactgetouttank,	//66
	manacttakeflag,	//67
	manacthandgunon,	//68
	manactn,	//69
};
enum {
	manposdead,	//0
	unitinfotank,	//1
	destructengine,	//2
	destructtree,	//3
	manposlying,	//4
	unitinfohelicopter,	//5
	manposcrouch,	//6
	manposhandguncrouch,	//7
	manactreloadat,	//8
	manactreloadmortar,	//9
	manposstand,	//10
	manactwalkf,	//11
	manposbinoc,	//12
	manposbinocstand,	//13
};
enum {
	destructno,	//0
	cpgunner,	//1
	unitinfocar,	//2
	unitinfoship,	//3
	unitinfoairplane,	//4
	manactturnrrelaxed,	//5
	destructdefault,	//6
};
enum {
	unitinfosoldier,	//0
	manactstoprelaxed,	//1
	manposbinoclying,	//2
	cpcargo,	//3
	manactturnlrelaxed,	//4
	destructman,	//5
	manactreloadmagazine,	//6
};
enum {
	cpdriver,	//0
	destructbuilding,	//1
	manactturnl,	//2
	manposlyingnoweapon,	//3
};

class CfgExperience {
	access = 1;
	destroyUnit[] = {"unit1","unit2","unit3","unit4"};
	unit1[] = {2000,0};
	unit2[] = {200000,200};
	unit3[] = {500000,500};
	unit4[] = {1000000,1000};
	destroyEnemy = 1;
	destroyFriendly = -7;
	destroyCivilian = -2;
	destroyYourUnit = -0.2;
	renegadeLimit = -2000;
	playerKilled = 0;
	commandCompleted = 0;
	commandFailed = 0;
	followMe = 0;
	missionCompleted = 0;
	missionFailed = 0;
	ranks[] = {0,500,1500,2500,3500,5000,7500};
	courage[] = {0.2,0.35,0.55,0.65,0.7,0.8,0.9};
};
class CfgTextureToMaterial {
	class CarGlass {
		textures[] = {"data\jeep4x4_glass.paa","data\jeep_kab_sklo1.paa","data\jeep_kab_sklo2.paa","data\jepp4x4_glass.paa","data\jepp_kab_sklo1.paa","data\jepp_kab_sklo2.paa","data\scud_sklo.paa","data\scud_sklo2.paa","data\scud_sklo3.paa","data\scud_sklo4.paa"};
		material = "#SpecularGlass";
	};
	class AirborneGlass {
		textures[] = {"data\jeep_kab_sklo1.paa","data\uh60_kab_sklo2.paa","data\uh30_cargo_pilotdoors.paa","data\uh60_cargo_dvereokno.paa","data\uh60_gunner_okna.paa","data\ah-1_kabina_predokno.paa","data\ah-1_kabina_zadokno.paa","data\ah-1_kabina_topokno.paa"};
		material = "#SpecularGlass";
	};
	class Metal {
		textures[] = {"data\mutt_frontg.pac","data\mutt_kapotag.pac","data\mutt_sklog.pac","data\mutt_sideg.pac"};
		material = "#Metal";
	};
	class AirBorneMetal {
		textures[] = {"data\ah-1_1_pokus.pac","data\ah-1_2_pokus.pac","data\ah-1_opak_pokus.pac","data\ah-1_kabina_predo.paa","data\ah-1_kabina_topokno.paa","data\ah-1_kabina_zadokno.paa","data\cobra_rotor_top.pac","data\cobra_rotor_top.pac","data\cobra2_kridlo_predni.pac","data\cobra2_kanon_front_b.pac","data\cobra2_kulas_front.paa","data\cobra2_kanon_side.pac","data\cobra2_vejfuk.paa","data\cobra3_cumak.pac","data\ah-1_bottom1.pac","data\ah-1_bottom2.pac"};
		material = "#Metal";
	};
	class RifleMetal {
		textures[] = {"data\m16_pmp_1s.pac","data\m16_pmp_ph.pac","data\m16_pmp_lod.paa","data\m16_pmp_lod_gif.pac","data\m4_1.pac","data\m4_2.pac","data\m4_miridla.pac","data\xm177_1s.pac","data\xm177_ph.pac","data\xm177_details.pac"};
		material = "#RifleMetal";
	};
};
class CfgMaterials {
	class Water {
		ambient[] = {1,1,1,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.4,0.4,0.45,0};
		specularPower = 6;
		emmisive[] = {0,0,0,0};
	};
	class Terrain {
		ambient[] = {1,1,1,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.03,0.03,0.03,0};
		specularPower = 3;
		emmisive[] = {0,0,0,0};
	};
	class SpecularGlass {
		ambient[] = {1,1,1,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.8,0.8,0.8,0};
		specularPower = 5;
		emmisive[] = {0,0,0,0};
	};
	class Metal {
		ambient[] = {1,1,1,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.2,0.2,0.2,0};
		specularPower = 5;
		emmisive[] = {0,0,0,0};
	};
	class RifleMetal {
		ambient[] = {1,1,1,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.2,0.2,0.2,0};
		specularPower = 5;
		emmisive[] = {0,0,0,0};
	};
};
class CfgModels {
	class Default {
		sections[] = {};
		sectionsInherit = "";
	};
	class Head: Default {
		sections[] = {"osobnost","brejle"};
	};
	class Man: Default {
		sections[] = {"head injury","body injury","l arm injury","r arm injury","p arm injury","l leg injury","r leg injury","p leg injury","medic","hlava","krk","zasleh"};
		sectionsInherit = "Head";
	};
	class Vehicle: Default {
		sections[] = {"cislo","grupa","side","sektor","clan","podsvit pristroju","poskozeni","L svetlo","P svetlo","zasleh"};
	};
	class Tank: Vehicle {
		sectionsInherit = "Vehicle";
		sections[] = {"zadni svetlo","brzdove svetlo","pruh"};
	};
	class Car: Vehicle {
		sectionsInherit = "Vehicle";
		sections[] = {"ammo","sklo predni p","sklo predni l","zadni svetlo","brzdove svetlo"};
	};
	class Helicopter {
		sectionsInherit = "Vehicle";
		sections[] = {"sklo predni p","sklo predni l","velka vrtule staticka","velka vrtule blur","mala vrtule staticka","mala vrtule blur"};
	};
	class Weapon: Default {
		sections[] = {"zasleh"};
	};
	class hlavaw: Head {};
	class mc_vojakw2: Man {};
	class mc_vojakwo2: Man {};
	class mc_tankistaw2: Man {};
	class mc_pilotw2: Man {};
	class mc_sniperw2: Man {};
	class mc_saboteur: Man {};
	class mc_saboteurday: Man {};
	class mc_vojake2: Man {};
	class mc_vojakeo2: Man {};
	class mc_tankistae2: Man {};
	class mc_pilote2: Man {};
	class mc_snipere2: Man {};
	class mc_vojake2_guba: Man {};
	class angelina: Man {};
	class mc_specnas2: Man {};
	class mc_civil: Man {};
	class mc_civil2: Man {};
	class mc_civil3: Man {};
	class mc_vojakg2: Man {};
	class mc_vojakg3: Man {};
	class mc_vojakgo2: Man {};
	class mc_crewg: Man {};
	class mc_crewg2: Man {};
	class m16_proxy: Weapon {};
	class xm_177e2_proxy: Weapon {};
	class optika_m16: Weapon {};
	class m16_granatomet_proxy: Weapon {};
	class m60_mg_proxy: Weapon {};
	class optika_m60_mg: Weapon {};
	class m21_proxy: Weapon {};
	class optika_snpierw: Weapon {};
	class ak_74_su_proxy: Weapon {};
	class ak_74_granatomet_proxy: Weapon {};
	class pk_mg_proxy: Weapon {};
	class optika_pk: Weapon {};
	class ak_74_proxy: Weapon {};
	class optika_ak47: Weapon {};
	class ak_47_v58_proxy: Weapon {};
	class svd_dragunov_proxy: Weapon {};
	class optika_snpiere: Weapon {};
	class optika_night: Weapon {};
	class ak_47_granatomet_proxy: Weapon {};
	class ak_47_proxy: Weapon {};
	class kozlice: Weapon {};
	class optika_kozlice: Weapon {};
	class Steyr: Weapon {};
	class optika_steyr: Weapon {};
	class G36: Weapon {};
	class G36_optics: Weapon {};
	class XMS: Weapon {};
	class optika_XMS: Weapon {};
	class Bizon: Weapon {};
	class optika_Bizon: Weapon {};
	class 6g30: Weapon {};
	class t80: Tank {};
	class t72: Tank {};
	class t55: Tank {};
	class m1_abrams: Tank {};
	class m60: Tank {};
	class bmp: Tank {};
	class m113: Tank {};
	class m113_ambulance: Tank {};
	class bmp_ambu: Tank {};
	class zsu: Tank {};
	class truck5t: Car {};
	class truck5t2: Car {};
	class truck5trepair: Car {};
	class truck5tfuel: Car {};
	class ural: Car {};
	class uralrepair: Car {};
	class uralfuel: Car {};
	class v3s: Car {};
	class v3sfuel: Car {};
	class v3srepair: Car {};
	class jeep: Car {};
	class uaz: Car {};
	class guaz: Car {};
	class scud: Car {};
	class gjeep: Car {};
	class sguaz: Car {};
	class jeep_mg: Car {};
	class skodovka: Car {};
	class skodovka_blue: Car {};
	class skodovka_red: Car {};
	class skodovka_green: Car {};
	class traktor: Car {};
	class rapid: Car {};
	class rapid_y: Car {};
	class v3scivil: Car {};
	class m2_mg: Vehicle {};
	class uh_60: Helicopter {};
	class uh_60mg: Helicopter {};
	class ah1_cobra: Helicopter {};
	class mi24_hind: Helicopter {};
	class mi17_hip: Helicopter {};
	class a10: Vehicle {};
	class cessna182: Vehicle {
		sectionsInherit = "Vehicle";
		sections[] = {"vrtule staticka","vrtule blur"};
	};
	class Ship {
		sectionsInherit = "Vehicle";
		sections[] = {"zadni svetlo"};
	};
	class hrl: Ship {};
	class pbr: Ship {};
	class Flag: Default {
		sections[] = {"latka"};
	};
	class flag_vojak: Flag {};
	class flag_stozar: Flag {};
	class flag_alone: Flag {};
	class flag_alone_big: Flag {};
	class flag_auto: Flag {};
	class flag_plane: Flag {};
	class flag_plane_big: Flag {};
	class blok: Default {
		sections[] = {"papir"};
	};
	class trabant: Car {};
	class m163A1vulcan: Tank {};
	class su25: Vehicle {};
	class ch_47d: Helicopter {};
	class apac: Helicopter {};
	class hmmwv: Car {};
	class brmd: Car {};
	class brdm: Car {};
	class bmp2: Tank {};
	class kiowa: Helicopter {};
	class m2a2: Tank {};
};
class CfgVehicleActions {
	m113gunner = "M113Gunner";
	m113driver = "M113Driver";
	m113driverOut = "M113DriverOut";
	m113medic = "M113Medic";
	m113injured = "Nemocnej";
	m60driver = "M60Driver";
	m60gunner = "M60Gunner";
	m60commander = "M60Commander";
	m60driverOut = "M60DriverOut";
	m60commanderOut = "M60CommanderOut";
	m1A1driver = "M1A1Driver";
	m1A1gunner = "M1A1Gunner";
	m1A1commander = "M1A1Commander";
	m1A1driverOut = "M1A1DriverOut";
	m1A1commanderOut = "M1A1CommanderOut";
	bmpdriver = "BMPDriver";
	bmpgunner = "BMPGunner";
	bmpgunnerOut = "BMPGunnerOut";
	bmpcommander = "BMPCommander";
	bmpdriverOut = "BMPDriverOut";
	bmpcommanderOut = "BMPCommanderOut";
	t72driver = "T72Driver";
	t72gunner = "T72Gunner";
	t72gunnerOut = "T72GunnerOut";
	t72commander = "T72Commander";
	t72driverOut = "T72DriverOut";
	t72commanderOut = "T72CommanderOut";
	t80driver = "T72Driver";
	t80gunner = "T72Gunner";
	t80gunnerOut = "T80GunnerOut";
	t80commander = "T72Commander";
	t80driverOut = "T72DriverOut";
	t80commanderOut = "T80CommanderOut";
	t55driver = "T72Driver";
	t55gunner = "T55Gunner";
	t55gunnerOut = "T55Gunner";
	t55commander = "T55Commander";
	t55driverOut = "T55DriverOut";
	t55commanderOut = "T55CommanderOut";
	uh60pilot = "UH60Pilot";
	uh60gunner = "UH60Gunner";
	ah1pilot = "AH1Pilot";
	ah1gunner = "AH1Gunner";
	a10pilot = "A10Pilot";
	cessnaPilot = "cesnaPilot";
	cessnaCoPilot = "cesnaPilot";
	cessnaCargo = "cesnaCargo";
	mi17pilot = "Mi17Pilot";
	mi24pilot = "Mi24Pilot";
	mi24gunner = "Mi24Gunner";
	jeepDriver = "JeepDriver";
	jeepGunner = "JeepGunner";
	jeepCoDriver = "JeepCoDriver";
	jeepCoDriverBack = "JeepCoDriverBack";
	truck5TDriver = "5TDriver";
	truck5TCoDriver = "5TCoDriver";
	uralDriver = "uralDriver";
	uralCoDriver = "uralCoDriver";
	skodaDriver = "skodaDriver";
	skodaCoDriver = "skodaCoDriver";
	skodaCoDriverBack = "skodaCoDriverBack";
	pbrDriver = "pbrDriver";
	pbrGunner = "pbrGunner";
	hrlDriver = "pbrDriver";
	hrlGunner = "hrlGunner";
	m2gunner = "m2Gunner";
	ScudDriver = "ScudDriver";
	ScudCoDriver = "ScudCoDriver";
	v3sDriver = "v3sDriver";
	v3sCoDriver = "v3sCoDriver";
	cargo = "Cargo";
	UAZDriver = "UAZDriver";
	UAZCoDriver = "UAZCoDriver";
	ZSUDriver = "ZSUDriver";
	ZSUGunner = "ZSUGunner";
	ZSUGunnerOut = "ZSUGunnerOut";
	ZSUCommander = "ZSUCommander";
	ZSUCommanderOut = "ZSUCommanderOut";
	tractorDriver = "TractorDriver";
	shipCargo = "Cargo";
	shipDriver = "Cargo";
	para = "Para";
};
class CfgManActions {
	access = 3;
	Stop = "";
	StopRelaxed = "";
	TurnL = "";
	TurnR = "";
	TurnLRelaxed = "";
	TurnRRelaxed = "";
	ReloadMagazine = "";
	ReloadMGun = "";
	ReloadAT = "";
	ReloadMortar = "";
	ThrowGrenade = "";
	WalkF = "";
	WalkLF = "";
	WalkRF = "";
	WalkL = "";
	WalkR = "";
	WalkLB = "";
	WalkRB = "";
	WalkB = "";
	SlowF = "";
	SlowLF = "";
	SlowRF = "";
	SlowL = "";
	SlowR = "";
	SlowLB = "";
	SlowRB = "";
	SlowB = "";
	FastF = "";
	FastLF = "";
	FastRF = "";
	FastL = "";
	FastR = "";
	FastLB = "";
	FastRB = "";
	FastB = "";
	Down = "";
	Up = "";
	Lying = "";
	Stand = "";
	Combat = "";
	Crouch = "";
	Civil = "";
	CivilLying = "";
	FireNotPossible = "";
	Die = "";
	WeaponOn = "";
	WeaponOff = "";
	Default = "";
	JumpOff = "";
	StrokeFist = "";
	StrokeGun = "";
	SitDown = "";
	Salute = "";
	BinocOn = "";
	BinocOff = "";
	PutDown = "";
	Medic = "";
	Treated = "";
	LadderOnDown = "";
	LadderOnUp = "";
	LadderOff = "";
	LadderOffTop = "";
	LadderOffBottom = "";
	GetInCar = "";
	GetOutCar = "";
	GetInTank = "";
	GetOutTank = "";
	TakeFlag = "";
	HandGunOn = "";
};

#include "cfgMovesMC.h"

#include "cfgAmmo.h"

class CfgRecoils {
	access = 1;
	empty[] = {};
	impulse[] = {0.05,0.02,0.2,0.1,0.03,-0.1,0.3,0,0};
	riffleSingle[] = {0.05,0.02,0.04,0.05,0,0};
	riffleSilenced[] = {0.01,0.004,0.01,0.05,0,0};
	LAWSingle[] = {0.02,0,0,0.05,0.08,0.03,0.1,0.03,0.015,0.2,0,0};
	sniperSingle[] = {0.02,0,0,0.05,0.01,0.02,0.1,0.008,0.018,0.2,0,0};
	riffleBurst3[] = {0.05,0.02,0.04,0.05,0,0};
	mgunBurst3[] = {0.03,0.02,"0.04*1.35",0.03,0.01,"0.01*0.5",0.03,0.03,"0.04*1.35",0.03,0.02,"0.02*0.5",0.01,0,0};
};

#include "cfgWeapons.h"

#include "cfgCloudlets.h"

class CfgCloth {
	class Flag {
		stepSize = 0.005;
		colPoints = 9;
		rowPoints = 9;
		stretchCoef = 1000;
		fricCoef = 1;
		windCoef = 10;
		gravCoef = 1;
	};
};

#include "cfgVehicles.h"

class CfgCrew {
	drivers[] = {"driver","m113driver","m113driverout","m60driver","m60driverout","m1a1driver","m1a1driverout","bmpdriver","bmpdriverout","t72driver","t72driverout","t80driver","t80driverout","zsudriver","zsudriverout","tankdriver","pilot","uh60pilot","mi17pilot","mi24pilot","ah1pilot","a10pilot","traktorista","navy","jeepdriver","5tdriver","uazdriver","parasutista"};
	gunners[] = {"gunner","tankgunner","m113gunner","m113gunnerout","m60gunner","m60gunnerout","m1a1gunner","m1a1gunnerout","bmpgunner","bmpgunnerout","zsugunner","zsugunnerout","t72gunner","t72gunnerout","t80gunner","t80gunnerout","uh60copilot","mi17copilot","mi24gunner","uh60gunner","ah1gunner","ah1gunnerstat"};
	commanders[] = {"commander","tankcommander","tankcommandersit","m1a1commander","m1a1commanderout","m60commander","m60commanderout","bmpcommander","bmpcommanderout","zsucommander","zsucommanderout","t72commander","t72commanderout","t80commander","t80commanderout"};
	cargo[] = {"jeepcodriver","jeepcodriverback","5tcodriver","uazcodriver","m113medic","nemocnej","nemocnejstat","cargo","codriver","vojakw"};
};
class CfgNonAIVehicles {
	access = 1;
	class EmptyDetector {
		displayName = "$STR_DN_EMPTY";
		simulation = "detector";
		model = "empty.p3d";
		scope = 2;
	};
	class Track {
		model = "";
		simulation = "track";
	};
	class Mark {
		model = "";
		simulation = "mark";
	};
	class SmokeSource {
		model = "";
		simulation = "SmokeSource";
	};
	class ObjectDestructed {
		model = "";
		simulation = "ObjectDestructed";
	};
	class Explosion {
		model = "";
		simulation = "Explosion";
	};
	class Crater {
		model = "";
		simulation = "Crater";
	};
	class CraterOnVehicle {
		model = "";
		simulation = "CraterOnVehicle";
	};
	class Slop {
		model = "";
		simulation = "Slop";
	};
	class Smoke {
		model = "";
		simulation = "Smoke";
	};
	class DynamicSound {
		model = "";
		simulation = "DynamicSound";
	};
	class StreetLamp {
		model = "";
		destrType = "DestructTree";
		simulation = "StreetLamp";
		colorDiffuse[] = {0.9,0.8,0.6};
		colorAmbient[] = {0.1,0.1,0.1};
		brightness = 1;
		armorBulb = 1;
	};
	class StreetLampWood: StreetLamp {
		scope = 1;
		model = "lampadrevo";
	};
	class StreetLampMetal: StreetLamp {
		scope = 1;
		model = "lampazel";
	};
	class SoundOnVehicle {
		model = "";
		simulation = "SoundOnVehicle";
	};
	class ThunderBolt {
		model = "";
		simulation = "ThunderBolt";
	};
	class EditCursor {
		model = "";
		simulation = "EditCursor";
	};
	class ObjView {
		scope = 2;
		model = "";
		simulation = "ObjView";
	};
	class Temp {
		scope = 2;
		model = "";
		simulation = "Temp";
	};
	class SeaGull {
		scope = 2;
		model = "racekT";
		simulation = "SeaGull";
		reversed = 0;
	};
	class Camera {
		scope = 2;
		model = "camera";
		simulation = "Camera";
	};
	class ProxyWeapon {
		autocenter = 0;
		scope = 2;
		reversed = 0;
		model = "m16_proxy";
		simulation = "ProxyWeapon";
	};
	class ProxySecWeapon {
		autocenter = 0;
		scope = 2;
		model = "law_proxy";
		simulation = "ProxySecWeapon";
	};
	class ProxyAK_47_Proxy: ProxyWeapon {};
	class ProxyAK_47_v58_Proxy: ProxyWeapon {};
	class ProxyAK_47_granatomet_Proxy: ProxyWeapon {};
	class ProxyRPG7_Proxy: ProxySecWeapon {};
	class ProxyLAW_Proxy: ProxySecWeapon {};
	class ProxyStinger_Proxy: ProxySecWeapon {};
	class ProxyAT1_Proxy: ProxyWeapon {
		model = "AT1_Proxy";
		simulation = "alwaysshow";
	};
	class ProxyMaverik_Proxy: ProxyWeapon {
		model = "Maverik_Proxy";
		simulation = "maverickweapon";
	};
	class ProxyScud_Strela_Proxy: ProxyWeapon {
		model = "Scud_Strela_Proxy";
		simulation = "scud";
	};
	class ProxyCrew {
		autocenter = 0;
		scope = 1;
		model = "kursor";
		simulation = "proxycrew";
		crewPosition = "CPDriver";
	};
	class ProxyCommander: ProxyCrew {
		crewPosition = "CPCommander";
	};
	class ProxyDriver: ProxyCrew {
		crewPosition = "CPDriver";
	};
	class ProxyGunner: ProxyCrew {
		crewPosition = "CPGunner";
	};
	class ProxyCargo: ProxyCrew {
		crewPosition = "CPCargo";
	};
	class ProxyM60Commander: ProxyCommander {};
	class ProxyM60Driver: ProxyDriver {};
	class ProxyM60Gunner: ProxyGunner {};
	class ProxyM60CommanderOut: ProxyCommander {};
	class ProxyM60DriverOut: ProxyDriver {};
	class ProxyM60GunnerOut: ProxyGunner {};
	class ProxyM1A1Commander: ProxyCommander {};
	class ProxyM1A1Driver: ProxyDriver {};
	class ProxyM1A1Gunner: ProxyGunner {};
	class ProxyM1A1CommanderOut: ProxyCommander {};
	class ProxyM1A1DriverOut: ProxyDriver {};
	class ProxyM1A1GunnerOut: ProxyGunner {};
	class ProxyM113Commander: ProxyCommander {};
	class ProxyM113Driver: ProxyDriver {};
	class ProxyM113Gunner: ProxyGunner {};
	class ProxyM113CommanderOut: ProxyCommander {};
	class ProxyM113DriverOut: ProxyDriver {};
	class ProxyM113GunnerOut: ProxyGunner {};
	class ProxyBMPCommander: ProxyCommander {};
	class ProxyBMPDriver: ProxyDriver {};
	class ProxyBMPGunner: ProxyGunner {};
	class ProxyBMPCommanderOut: ProxyCommander {};
	class ProxyBMPDriverOut: ProxyDriver {};
	class ProxyBMPGunnerOut: ProxyGunner {};
	class ProxyT72Commander: ProxyCommander {};
	class ProxyT72Driver: ProxyDriver {};
	class ProxyT72Gunner: ProxyGunner {};
	class ProxyT72CommanderOut: ProxyCommander {};
	class ProxyT72DriverOut: ProxyDriver {};
	class ProxyT72GunnerOut: ProxyGunner {};
	class ProxyT80Commander: ProxyCommander {};
	class ProxyT80Driver: ProxyDriver {};
	class ProxyT80Gunner: ProxyGunner {};
	class ProxyT80CommanderOut: ProxyCommander {};
	class ProxyT80DriverOut: ProxyDriver {};
	class ProxyT80GunnerOut: ProxyGunner {};
	class ProxyZSUCommander: ProxyCommander {};
	class ProxyZSUDriver: ProxyDriver {};
	class ProxyZSUGunner: ProxyGunner {};
	class ProxyZSUCommanderOut: ProxyCommander {};
	class ProxyZSUDriverOut: ProxyDriver {};
	class ProxyZSUGunnerOut: ProxyGunner {};
	class ProxyT55Commander: ProxyCommander {};
	class ProxyT55Driver: ProxyDriver {};
	class ProxyT55Gunner: ProxyGunner {};
	class ProxyT55CommanderOut: ProxyCommander {};
	class ProxyT55DriverOut: ProxyDriver {};
	class ProxyT55GunnerOut: ProxyGunner {};
	class ProxyMedic: ProxyCargo {};
	class ProxyNemocnej: ProxyCargo {};
	class ProxyUH60Pilot: ProxyDriver {};
	class ProxyUH60CoPilot: ProxyGunner {};
	class ProxyUH60Gunner: ProxyGunner {};
	class ProxyMi17Pilot: ProxyDriver {};
	class ProxyMi17CoPilot: ProxyGunner {};
	class ProxyMi24Pilot: ProxyDriver {};
	class ProxyMi24Gunner: ProxyGunner {};
	class ProxyAH1Pilot: ProxyDriver {};
	class ProxyAH1Gunner: ProxyGunner {};
	class ProxyAH1GunnerStat: ProxyGunner {};
	class ProxyA10Pilot: ProxyDriver {};
	class ProxyCesnaPilot: ProxyDriver {};
	class ProxyCesnaCoPilot: ProxyCargo {};
	class ProxyCesnaCargo: ProxyCargo {};
	class ProxyTraktorDriver: ProxyDriver {};
	class ProxyJeepDriver: ProxyDriver {};
	class ProxyJeepGunner: ProxyGunner {};
	class ProxyJeepCoDriver: ProxyCargo {};
	class ProxyJeepCoDriverBack: ProxyCargo {};
	class Proxy5tDriver: ProxyDriver {};
	class Proxy5tCoDriver: ProxyCargo {};
	class ProxyUazDriver: ProxyDriver {};
	class ProxyUazCoDriver: ProxyCargo {};
	class ProxyUralDriver: ProxyDriver {};
	class ProxyUralCoDriver: ProxyCargo {};
	class ProxySkodaDriver: ProxyDriver {};
	class ProxySkodaCoDriver: ProxyCargo {};
	class ProxySkodaCoDriverBack: ProxyCargo {};
	class ProxyV3SDriver: ProxyDriver {};
	class ProxyV3SCoDriver: ProxyCargo {};
	class ProxyPBRDriver: ProxyDriver {};
	class ProxyPBRGunner: ProxyGunner {};
	class ProxyHRLDriver: ProxyDriver {};
	class ProxyHRLGunner: ProxyGunner {};
	class ProxySCUDDriver: ProxyDriver {};
	class ProxySCUDCoDriver: ProxyCargo {};
	class ProxyParasutista: ProxyDriver {};
	class ProxyM2Gunner: ProxyGunner {};
	class ProxyPKGunner: ProxyGunner {};
	class ProxyFlag {
		autocenter = 0;
		scope = 2;
		reversed = 0;
		model = "";
		simulation = "flag";
	};
	class ProxyFlag_Auto: ProxyFlag {
		model = "flag_auto";
	};
	class ProxyFlag_Alone: ProxyFlag {
		model = "flag_alone";
	};
	class ProxyFlag_Alone_Big: ProxyFlag {
		model = "flag_alone_big";
	};
	class ProxyFlag_Vojak: ProxyFlag {
		model = "flag_vojak";
	};
	class ProxyFlag_Stozar: ProxyFlag {
		model = "flag_stozar";
	};
	class ProxyFlag_Plane: ProxyFlag {
		model = "flag_plane";
	};
	class ProxyFlag_Plane_Big: ProxyFlag {
		model = "flag_plane_big";
	};
	class ProxyAmmoInTruck {
		autocenter = 0;
		scope = 2;
		reversed = 0;
		model = "";
		simulation = "alwaysshow";
	};
	class ProxyAmmo_Bedna_In: ProxyAmmoInTruck {
		model = "ammo_bedna_in";
	};
	class ProxyAmmo_Bedna2: ProxyAmmoInTruck {
		model = "ammo_bedna2";
	};
};
class CfgSurfaces {
	class Default {
		access = 2;
		files = "default";
		rough = 0.075;
		dust = 0.1;
		soundEnviron = "normalExt";
	};
	class Roadway {
		access = 2;
		files = "silnice*";
		rough = 0.005;
		dust = 0.01;
		soundEnviron = "road";
	};
	class Asfalt: Roadway {
		access = 2;
		files = "asfalt*";
		rough = 0.01;
		dust = 0.05;
		soundEnviron = "road";
	};
	class Cesta: Roadway {
		access = 2;
		files = "cesta*";
		rough = 0.08;
		dust = 0.15;
		soundEnviron = "gravel";
	};
	class Grass: Default {
		access = 2;
		files = "tn??????";
		rough = 0.11;
		dust = 0.1;
		soundEnviron = "normalExt";
	};
	class GrassAbel: Default {
		access = 2;
		files = "tt??????";
		rough = 0.11;
		dust = 0.25;
		soundEnviron = "grass";
	};
	class SandAbel: Default {
		access = 2;
		files = "pi??????";
		rough = 0.15;
		dust = 0.6;
		soundEnviron = "sand";
	};
	class RockAbel: Default {
		access = 2;
		files = "sh??????";
		rough = 0.2;
		dust = 0.2;
		soundEnviron = "rock";
	};
	class BetonAbel: Default {
		access = 2;
		files = "bt??????";
		rough = 0.05;
		dust = 0.03;
		soundEnviron = "rock";
	};
	class GrassHigh: Default {
		access = 2;
		files = "tv??????";
		rough = 0.12;
		dust = 0.05;
		soundEnviron = "grass";
	};
	class Forest {
		access = 2;
		files = "pl??????";
		rough = 0.12;
		dust = 0.05;
		soundEnviron = "forest";
	};
	class Sand: Default {
		access = 2;
		files = "ps??????";
		rough = 0.12;
		dust = 0.5;
		soundEnviron = "sand";
	};
	class Field: Default {
		access = 2;
		files = "pol";
		rough = 0.15;
		dust = 0.3;
		soundEnviron = "dirt";
	};
	class Village: Default {
		access = 2;
		files = "bah";
		rough = 0.08;
		dust = 0.2;
		soundEnviron = "normalExt";
	};
	class Runway: Roadway {
		access = 2;
		files = "rw*";
		rough = 0.001;
		dust = 0.006;
		soundEnviron = "road";
	};
	class Rock {
		access = 2;
		files = "s???????";
		rough = 0.15;
		dust = 0.1;
		soundEnviron = "rock";
	};
	class Water {
		access = 2;
		files = "more_anim*";
		rough = 0;
		dust = 0;
		soundEnviron = "water";
	};
	class Wood {
		access = 2;
		files = "podlaha_prkna*";
		rough = 0.15;
		dust = 0.1;
		soundEnviron = "wood";
	};
	class Metal {
		access = 2;
		files = "plechprolis*";
		rough = 0.15;
		dust = 0.1;
		soundEnviron = "metal";
	};
	class Beton {
		access = 2;
		files = "kameny.pac";
		rough = 0.15;
		dust = 0.1;
		soundEnviron = "rock";
	};
	class Carpet {
		access = 2;
		files = "dum_mesto_koberec*";
		rough = 0.15;
		dust = 0.1;
		soundEnviron = "wood";
	};
	class SandBuilding: Default {
		access = 2;
		files = "pisek01*";
		rough = 0.12;
		dust = 0.5;
		soundEnviron = "sand";
	};
	class MudBuilding: Default {
		access = 2;
		files = "hlinasterk*";
		rough = 0.12;
		dust = 0.5;
		soundEnviron = "rock";
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
	// Chinese trial
	class Chinese {
		TahomaB24 = "Chinese\Zeppelin3320";
		TahomaB36 = "Chinese\Zeppelin3320";
		TahomaB48 = "Chinese\Zeppelin3320";
		CourierNewB64 = "Chinese\Zeppelin3320";
		AudreysHandB48 = "Chinese\Zeppelin33-Italic20";
		AudreysHandI48 = "Chinese\Zeppelin33-Italic20";
		Garamond64 = "Chinese\Zeppelin3320";
		SteelfishB128 = "Chinese\Zeppelin3320";
		SteelfishB64 = "Chinese\Zeppelin3320";
		SteelfishB64CE = "Chinese\Zeppelin3320";
	};
};
class CfgWrapperUI {
	access = 1;
	class Colors {
		color1[] = {0.0,0.0,0.0,1.0};
		color2[] = {0.2,0.2,0.2,1.0};
		color3[] = {0.5,0.5,0.5,1.0};
		color4[] = {0.6,0.6,0.6,1.0};
		color5[] = {0.8,0.8,0.8,1.0};
	};
	class Background {
		alpha = 0.75;
		texture = "background.pac";
	};
	class TitleBar {
		alpha = 0.3;
		texture = "windowname.pac";
	};
	class GroupBox {
		alpha = 0.2;
	};
	class GroupBox2 {
		alpha = 0.5;
		texture = "windowdisplay.pac";
	};
	class Button {
		color1[] = {0.0,0.0,0.0,0.3};
		color2[] = {0.2,0.2,0.2,0.3};
		color3[] = {0.5,0.5,0.5,0.3};
		color4[] = {0.6,0.6,0.6,0.3};
		color5[] = {0.8,0.8,0.8,0.3};
	};
	class Cursors {
		class Arrow {
			texture = "kurzor_arrow";
			width = 16;
			height = 16;
			hotspotX = 0;
			hotspotY = 0;
			color[] = {0.8,0.8,0.8,1};
		};
		class Track {
			texture = "kurzor_track";
			width = 24;
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			color[] = {0.7,0.1,0.0,1};
		};
		class Move {
			texture = "kurzor_move";
			width = 24;
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			color[] = {0.0,0.6,0.0,1};
		};
		class Scroll {
			texture = "kurzor_scroll";
			width = 24;
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			color[] = {0.8,0.6,0.0,1};
		};
	};
};
class CfgInGameUI {
	access = 1;
	imageCornerElement = "cornern.paa";
	colorBackground[] = {0,0,0,0.8};
	colorBackgroundCommand[] = {0,0,0,0.3};
	colorBackgroundHelp[] = {0,0,0,0.2};
	colorText[] = {0.8,0.8,0.8,1};
	class SideColors {
		colorFriendly[] = {0.0,0.6,0.0,1};
		colorEnemy[] = {0.7,0.1,0.0,1};
		colorNeutral[] = {0.8,0.8,0.8,1};
		colorCivilian[] = {0.8,0.8,0.8,1};
		colorUnknown[] = {0.8,0.6,0.0,1};
	};
	class IslandMap {
		colorFriendly[] = {0,0.5,0,1};
		colorEnemy[] = {0.5,0,0,1};
		colorNeutral[] = {0.5,0.5,0.5,1};
		colorCivilian[] = {0,0,1,1};
		colorUnknown[] = {0.5,0.5,0,1};
		iconPlayer = "you.paa";
		iconCheckpoint = "target.paa";
		iconCamera = "camera.paa";
		iconSelect = "mkrouzek.paa";
		iconSensor = "vlajka.paa";
		colorMe[] = {0.7,0.1,0.0,1};
		colorPlayable[] = {0.7,0,0.7,1};
		colorSelect[] = {0.0,0.6,0.0,0.5};
		colorCamera[] = {0.1,0.1,0.9,1};
		colorSensor[] = {0.1,0.1,0.9,1};
		colorDragging[] = {0.8,0.8,0.8,1};
		colorInactive[] = {1,1,1,0.6};
		colorCountlines[] = {0,0,0,0.33};
		colorCountlinesWater[] = {0,0,1,1};
		colorExposureEnemy[] = {1.0,0.2,0.2,0.5};
		colorExposureUnknown[] = {0.8,0.8,0.2,0.5};
		colorRoads[] = {0.35,0.2,0.1,0.8};
		colorGrid[] = {0.25,0.25,0.1,0.75};
		colorGridMap[] = {0.25,0.25,0.1,0.75};
		colorCheckpoints[] = {0.2,0.2,0.2,1.0};
		colorMissions[] = {0.5,0.5,0.0,0.5};
		colorActiveMission[] = {0.0,0.0,0.0,1.0};
		colorPath[] = {0.0,0.0,1,0.9};
		colorInfoMove[] = {1.0,1.0,1.0,1.0};
		colorGroups[] = {0.0,0.5,0.5,0.5};
		colorActiveGroup[] = {0.0,1.0,1.0,1.0};
		colorSync[] = {0.0,0.0,1.0,1.0};
		colorDetectorSync = "{0,1,0,1}";
		colorLabelBackground[] = {0.0,0.0,0.0,1.0};
	};
	class MPTable {
		color[] = {1,1,1,1};
		colorBg[] = {0,0,0,0.75};
		colorSelected[] = {1,1,1,0.2};
		colorWest[] = {0,1,0,1};
		colorEast[] = {1,0,0,1};
		colorCiv[] = {0.8,0.8,0.8,1};
		colorRes[] = {0.47,0.47,0.94,1};
	};
	class TankDirection {
		left = 0.04;
		top = 0.007;
		width = 0.15;
		height = 0.195;
		color[] = {0.8,0.8,0.8,1};
		colorHalfDammage[] = {0.8,0.6,0.0,1};
		colorFullDammage[] = {0.7,0.1,0.0,1};
		imageTower = "vez_schema.paa";
		imageTurret = "T_schema_vez.paa";
		imageGun = "T_schema_kanon.paa";
		imageObsTurret = "T_schema_velite2.paa";
		imageEngine = "T_schema_motor.paa";
		imageHull = "T_schema_trup.paa";
		imageLTrack = "T_schema_Lpas";
		imageRTrack = "T_schema_Ppas";
	};
	class Capture {
		colorBackground[] = {0,0,0,0.93};
		colorText[] = {0.8,0.6,0.0,1};
		colorLine[] = {0.8,0.8,0.8,1};
	};
	class Picture {
		color[] = {0.8,0.8,0.8,1};
		colorProblems[] = {0.7,0.1,0.0,1};
		imageBusy = "busy.paa";
		imageWaiting = "orders.paa";
		imageCommand = "execute.paa";
	};
	class Bar {
		imageBar = "white.pac";
		colorBackground[] = {0.2,0.5,0.2,0.5};
		colorGreen[] = {0.0,0.6,0.0,0.6};
		colorYellow[] = {0.8,0.6,0.0,0.6};
		colorRed[] = {0.7,0.1,0.0,0.8};
		colorBlinkOn[] = {1,0.2,0.2,0.8};
		colorBlinkOff[] = {0.7,0.1,0.0,0.8};
		height = 0.01;
	};
	class Messages {
		color1[] = {0.8,0.6,0.0,1};
		color2[] = {0.0,0.6,0.0,1};
		color3[] = {0.8,0.8,0.8,1};
	};
	class TacticalDisplay: SideColors {
		left = 0.24;
		top = 0.053;
		width = 0.52;
		height = 0.1;
		colorCamera[] = {0.1,0.1,0.1,0.4};
		class Cursor {
			width = 0.015;
			height = 0.02;
			color[] = {0.8,0.8,0.8,1};
		};
	};
	class ProgressFont {
		font = "SteelfishB64";
	};
	class Compass {
		left = 0.24;
		top = 0.02;
		width = 0.52;
		height = 0.02;
		color[] = {0.8,0.8,0.8,1};
		dirColor[] = {0.8,0.8,0.8,1};
		turretDircolor[] = {0.8,0.6,0.0,1};
	};
	class Menu {
		left = 0.78;
		top = 0.02;
		width = 0.2;
		height = 0.28;
		colorChecked[] = {0.8,0.6,0,1};
		colorEnabled[] = {0.8,0.8,0.8,1};
		colorDisabled[] = {0.4,0.4,0.4,1};
		hideTime = 60;
	};
	class GameInfo {
		left = 0.78;
		top = 0.9;
		width = 0.2;
		height = 0.08;
	};
	class GroupDir {
		image = "grouporient.paa";
		left = 0.05;
		top = 0.62;
		width = 0.075;
		height = 0.1;
		dimmStartTime = 10;
		dimmEndTime = 15;
	};
	class PlayerInfo {
		colorTime[] = {0.8,0.8,0.8,1};
		left = 0.02;
		top = 0.02;
		width = 0.2;
		height = 0.28;
		class UnitPicture {
			width = 0.15;
			height = 0.16;
		};
		class Sign {
			height = 0.03;
			widthSector = 0.04;
			widthGroup = 0.02;
			widthUnit = 0.02;
		};
		class Side {
			height = 0.072;
			width = 0.06;
		};
		class HealthBar {
			width = 0.12;
		};
		class ArmorBar {
			width = 0.12;
		};
		class FuelBar {
			width = 0.12;
		};
		class ExperienceBar {
			width = 0.12;
			color[] = {0.8,0.8,0.8,1};
		};
		dimmStartTime = 5;
		dimmEndTime = 10;
	};
	class Hint {
		dimmStartTime = 30;
		dimmEndTime = 35;
		sound[] = {"ui\hint",3.162278,1};
	};
	class Chat {
		sound[] = {"ui\hint",0.316228,1};
	};
	class GroupInfo {
		left = 0.02;
		top = 0.9;
		width = 0.96;
		height = 0.08;
		colorIDNone[] = {0,0,0,1};
		colorIDNormal[] = {0.8,0.8,0.8,1};
		colorIDSelected[] = {0,0.6,0,1};
		colorIDPlayer[] = {0.8,0.6,0,1};
		class Semaphore {
			imageSemaphore = "white.pac";
			width = 0.0075;
			height = 0.01;
			colorHoldFire[] = {0.7,0.1,0,1};
		};
		imageDefaultWeapons = "ivojak";
		imageNoWeapons = "\misc\ibezezbrane.paa";
		dimm = 0.3;
	};
	class ConnectionLost {
		left = 0;
		top = 0.45;
		width = 1;
		height = 0.1;
		font = "tahomaB36";
		size = 0.03;
		color[] = {1,0.5,0.25,1};
	};
	class Cursor {
		aim = "W_weapon";
		weapon = "W_lock";
		outArrow = "UI_sipka.paa";
		select_target = "target_active.paa";
		lock_target = "target_locked.paa";
		me = "circle";
		meColor[] = {0.8,0.8,0.8,0.8};
		dimmMe = 0;
		dimmMeStartTime = 5;
		dimmMeEndTime = 10;
		dimmCmdStartTime = 5;
		dimmCmdEndTime = 10;
		select = "circle";
		selectcolor[] = {0.0,0.6,0.0,0.8};
		leader = "circle";
		leadercolor[] = {0.0,0.6,0.0,0.8};
		mission = "M_mission";
		missioncolor[] = {0.8,0.6,0.0,0.8};
		tactical = "T_tactical";
		move = "T_basic";
		selected = "T_select";
		attack = "T_attack";
		getIn = "T_getin";
		watch = "kurzor_scroll";
		color[] = {0.8,0.8,0.8,1};
		colorBackground[] = {0,0,0,0.6};
		colorLocked[] = {0.7,0.1,0,1};
		dimm = 0.15;
		class Sign {
			height = 0.015;
			widthSector = 0.02;
			widthGroup = 0.01;
			widthUnit = 0.01;
		};
		activeWidth = 0.6;
		activeHeight = 0.8;
		activeMinimum = 0.05;
		activeMaximum = 0.1;
		enemyActivecolor[] = {0.7,0.1,0.0,0.7};
	};
};
class CfgDetectors {
	objects[] = {"EmptyDetector"};
};
class CfgGlasses {
	class None {
		name = "$STR_CFG_GLASSES_NONE";
		texture = "";
	};
	class Spectacles {
		name = "$STR_CFG_GLASSES_SPECTACLES";
		texture = "civilista_bryle";
	};
	class Sunglasses {
		name = "$STR_CFG_GLASSES_SUNGLASSES";
		texture = "civilista_zrcadlovky";
	};
};

// 2.01 make faces name support stringtable
class CfgFaces {
	class Default {
		name = "$STR_CFG_FACES_DEFAULT";
		texture = "xicht_2f.paa";
		east = 0;
		west = 0;
	};
	class Face1 {
		name = "Peter P.";
		texture = "xicht_a.paa";
		east = 0;
		west = 0;
	};
	class Face2 {
		name = "Victor B.";
		texture = "xicht_b.paa";
		east = 0;
		west = 1;
	};
	class Face3 {
		name = "Bohous";
		texture = "xicht_c.paa";
		east = 0;
		west = 0;
	};
	class Face4 {
		name = "Mirek";
		texture = "xicht_d.paa";
		east = 0;
		west = 1;
	};
	class Face5 {
		name = "Peter S.";
		texture = "xicht_e.paa";
		east = 0;
		west = 0;
	};
	class Face6 {
		name = "Charles";
		texture = "xicht_f.paa";
		east = 0;
		west = 0;
	};
	class Face7 {
		name = "Peter V.";
		texture = "xicht_g.paa";
		east = 0;
		west = 0;
	};
	class Face8 {
		name = "Richard B.";
		texture = "xicht_h.paa";
		east = 0;
		west = 1;
	};
	class Face9 {
		name = "Charles M.";
		texture = "xicht_i.paa";
		east = 0;
		west = 1;
	};
	class Face10 {
		name = "Ian O'Hara";
		texture = "xicht_j.paa";
		east = 0;
		west = 1;
	};
	class Face11 {
		name = "Vojta N.";
		texture = "xicht_k.paa";
		east = 0;
		west = 1;
	};
	class Face12 {
		name = "Adam B.";
		texture = "xicht_l.paa";
		east = 0;
		west = 1;
	};
	class Face13 {
		name = "Peter B.";
		texture = "xicht_m.paa";
		east = 0;
		west = 0;
	};
	class Face14 {
		name = "Francesco F.";
		texture = "xicht_n.paa";
		east = 0;
		west = 0;
	};
	class Face15 {
		name = "Bill O.";
		texture = "xicht_o.paa";
		east = 0;
		west = 0;
	};
	class Face16 {
		name = "Colin F.";
		texture = "xicht_p.paa";
		east = 0;
		west = 0;
	};
	class Face17 {
		name = "Darren I.";
		texture = "xicht_q.paa";
		east = 0;
		west = 0;
	};
	class Face18 {
		name = "Eric J.";
		texture = "xicht_r.paa";
		east = 0;
		west = 0;
	};
	class Face19 {
		name = "Phill D.";
		texture = "xicht_s.paa";
		east = 0;
		west = 1;
	};
	class Face20 {
		name = "Graham U.";
		texture = "xicht_t.paa";
		east = 0;
		west = 1;
	};
	class Face21 {
		name = "Henry G.";
		texture = "xicht_u.paa";
		east = 0;
		west = 0;
	};
	class Face22 {
		name = "Ivan B.";
		texture = "xicht_v.paa";
		east = 0;
		west = 0;
	};
	class Face23 {
		name = "Ghulam K.";
		texture = "xicht_w.paa";
		east = 0;
		west = 0;
	};
	class Face24 {
		name = "Kevin B.";
		texture = "xicht_x.paa";
		east = 0;
		west = 0;
	};
	class Face25 {
		name = "Robert ";
		texture = "xicht_y.paa";
		east = 0;
		west = 1;
	};
	class Face26 {
		name = "Martin";
		texture = "xicht_z.paa";
		east = 0;
		west = 1;
	};
	class Face27 {
		name = "John A.";
		texture = "xicht_2a.paa";
		east = 0;
		west = 0;
	};
	class Face28 {
		name = "Bill G.";
		texture = "xicht_2b.paa";
		east = 0;
		west = 1;
	};
	class Face29 {
		name = "Peter O.";
		texture = "xicht_2c.paa";
		east = 0;
		west = 1;
	};
	class Face30 {
		name = "Henry H.";
		texture = "xicht_2d.paa";
		east = 0;
		west = 1;
	};
	class Face31 {
		name = "William G.";
		texture = "xicht_2e.paa";
		east = 0;
		west = 1;
	};
	class Face32 {
		name = "Arnold T.";
		texture = "xicht_2f.paa";
		east = 0;
		west = 1;
	};
	class Face33 {
		name = "Michael H.";
		texture = "xicht_2g.paa";
		east = 0;
		west = 0;
	};
	class Face34 {
		name = "John Fox";
		texture = "xicht_2h.paa";
		east = 0;
		west = 1;
	};
	class Face35 {
		name = "George McArthur";
		texture = "xicht_2i.paa";
		east = 0;
		west = 1;
	};
	class Face36 {
		name = "Peter Sun";
		texture = "xicht_2j.paa";
		east = 0;
		west = 1;
	};
	class Face37 {
		name = "Robert S.";
		texture = "xicht_2k.paa";
		east = 0;
		west = 1;
	};
	class Face38 {
		name = "John Way";
		texture = "xicht_2l.paa";
		east = 0;
		west = 1;
	};
	class Face39 {
		name = "Jack C.";
		texture = "xicht_2m.paa";
		east = 0;
		west = 1;
	};
	class Face40 {
		name = "J. C.";
		texture = "xicht_2n.paa";
		east = 0;
		west = 0;
	};
	class Face41 {
		name = "Mel D.";
		texture = "xicht_2o.paa";
		east = 0;
		west = 1;
	};
	class Face42 {
		name = "John Paul";
		texture = "xicht_2p.paa";
		east = 0;
		west = 1;
	};
	class Face43 {
		name = "Jirka M.";
		texture = "xicht_2q.paa";
		east = 0;
		west = 1;
	};
	class Face44 {
		name = "Honza K.";
		texture = "xicht_2r.paa";
		east = 1;
		west = 1;
	};
	class Face45 {
		name = "John A.";
		texture = "xicht_2s.paa";
		east = 1;
		west = 1;
	};
	class Face46 {
		name = "Ondrey N.";
		texture = "xicht_2t.paa";
		east = 1;
		west = 1;
	};
	class Face47 {
		name = "Ondrey S.";
		texture = "xicht_2u.paa";
		east = 1;
		west = 1;
	};
	class Face48 {
		name = "Gabriel K.";
		texture = "xicht_2v.paa";
		east = 1;
		west = 1;
	};
	class Face49 {
		name = "Oliver S.";
		texture = "xicht_2w.paa";
		east = 0;
		west = 1;
	};
	class Face50 {
		name = "Radan D.";
		texture = "xicht_2x.paa";
		east = 1;
		west = 1;
	};
	class Face51 {
		name = "George J.";
		texture = "xicht_2y.paa";
		east = 1;
		west = 1;
	};
	class Face52 {
		name = "Ota B.";
		texture = "xicht_2z.paa";
		east = 1;
		west = 1;
	};
	class Custom {
		name = "$STR_CFG_FACES_CUSTOM";
		texture = "white.pac";
		front = "white.pac";
		side = "white.pac";
		back = "white.pac";
		east = 0;
		west = 0;
	};
};
class CfgFaceWounds {
	access = 1;
	wounds[] = {"\o\char\faceR01.paa","\o\char\faceR01_d.pac","\o\misc\eva.pac","\o\misc\eva_d.pac","\o\misc\kamila.pac","\o\misc\kamila_d.pac","\o\misc\lada.pac","\o\misc\lada_d.pac","\o\misc\lucie.pac","\o\misc\lucie_d.pac","\o\misc\marketa.pac","\o\misc\marketa_d.pac","\o\misc\nada.pac","\o\misc\nada_d.pac","xicht_a.paa","xicht_a_zranen","xicht_b.paa","xicht_a_zranen","xicht_c.paa","xicht_a_zranen","xicht_d.paa","xicht_a_zranen","xicht_e.paa","xicht_e_zranen","xicht_f.paa","xicht_a_zranen","xicht_g.paa","xicht_a_zranen","xicht_h.paa","xicht_a_zranen","xicht_i.paa","xicht_a_zranen","xicht_j.paa","xicht_a_zranen","xicht_k.paa","xicht_a_zranen","xicht_l.paa","xicht_a_zranen","xicht_m.paa","xicht_a_zranen","xicht_n.paa","xicht_a_zranen","xicht_o.paa","xicht_o_zranen","xicht_p.paa","xicht_a_zranen","xicht_q.paa","xicht_a_zranen","xicht_r.paa","xicht_a_zranen","xicht_s.paa","xicht_a_zranen","xicht_t.paa","xicht_a_zranen","xicht_u.paa","xicht_a_zranen","xicht_v.paa","xicht_v_zranen","xicht_w.paa","xicht_w_zranen","xicht_x.paa","xicht_a_zranen","xicht_y.paa","xicht_a_zranen","xicht_z.paa","xicht_a_zranen","xicht_2a.paa","xicht_a_zranen","xicht_2b.paa","xicht_w_zranen","xicht_2c.paa","xicht_a_zranen","xicht_2d.paa","xicht_v_zranen","xicht_2e.paa","xicht_a_zranen","xicht_2f.paa","xicht_a_zranen","xicht_2g.paa","xicht_w_zranen","xicht_2h.paa","xicht_a_zranen","xicht_2i.paa","xicht_a_zranen","xicht_2j.paa","xicht_a_zranen","xicht_2k.paa","xicht_a_zranen","xicht_2l.paa","xicht_a_zranen","xicht_2m.paa","xicht_a_zranen","xicht_2n.paa","xicht_a_zranen","xicht_2o.paa","xicht_a_zranen","xicht_2p.paa","xicht_2p_zranen","xicht_2q.paa","xicht_a_zranen","xicht_2r.paa","xicht_e_zranen","xicht_2s.paa","xicht_a_zranen","xicht_2t.paa","xicht_a_zranen","xicht_2u.paa","xicht_a_zranen","xicht_2v.paa","xicht_a_zranen","xicht_2w.paa","xicht_w_zranen","xicht_2x.paa","xicht_a_zranen","xicht_2y.paa","xicht_a_zranen","xicht_2z.paa","xicht_a_zranen"};
};
class CfgMimics {
	access = 1;
	class HeadPreview {
		microMimics = "Micro";
	};
	class Micro {
		lBrow[] = {0.002,0.002,0.001,0.6,3};
		mBrow[] = {0.002,0.002,0.001,0.6,2.5};
		rBrow[] = {0.002,0.002,0.001,0.6,3};
		lMouth[] = {0.001,0.002,0.001,0.6,2};
		mMouth[] = {0,0,0,0.6,3};
		rMouth[] = {0.001,0.002,0.001,0.6,2};
	};
	class NoMicro {
		lBrow[] = {0,0,0,0.6,3};
		mBrow[] = {0,0,0,0.6,2.5};
		rBrow[] = {0,0,0,0.6,3};
		lMouth[] = {0,0,0,0.6,2};
		mMouth[] = {0,0,0,0.6,3};
		rMouth[] = {0,0,0,0.6,2};
	};
	class States {
		class Default {
			lBrow[] = {0,0};
			mBrow[] = {0,0};
			rBrow[] = {0,0};
			lMouth[] = {0,0};
			mMouth[] = {0,0};
			rMouth[] = {0,0};
		};
		class Normal {
			lBrow[] = {0,0};
			mBrow[] = {0,0};
			rBrow[] = {0,0};
			lMouth[] = {0,0};
			mMouth[] = {0,0};
			rMouth[] = {0,0};
		};
		class Smile {
			lBrow[] = {0,0.25};
			mBrow[] = {0,0.25};
			rBrow[] = {0,0.25};
			lMouth[] = {-0.5,0.6};
			mMouth[] = {0,0};
			rMouth[] = {0.5,0.6};
		};
		class Hurt {
			lBrow[] = {0,-0.35};
			mBrow[] = {0,-0.5};
			rBrow[] = {0,-0.6};
			lMouth[] = {0.5,-0.3};
			mMouth[] = {0,0.3};
			rMouth[] = {-0.5,-0.6};
		};
		class Ironic {
			lBrow[] = {0,-0.35};
			mBrow[] = {0,-0.35};
			rBrow[] = {0,-0.35};
			lMouth[] = {0.1,0.3};
			mMouth[] = {0,0.9};
			rMouth[] = {-0.1,0.3};
		};
		class Sad {
			lBrow[] = {0,0.2};
			mBrow[] = {0,0.2};
			rBrow[] = {0,0.2};
			lMouth[] = {0.1,-0.5};
			mMouth[] = {0,-0.5};
			rMouth[] = {-0.1,-0.5};
		};
		class Cynic {
			lBrow[] = {0,-0.35};
			mBrow[] = {0,0};
			rBrow[] = {0,0.05};
			lMouth[] = {0.2,-0.9};
			mMouth[] = {0,-0.2};
			rMouth[] = {0,0};
		};
		class Surprised {
			lBrow[] = {0,0.5};
			mBrow[] = {0,0.5};
			rBrow[] = {0,0.5};
			lMouth[] = {0,-0.3};
			mMouth[] = {0,0.3};
			rMouth[] = {0,-0.2};
		};
		class Agresive {
			lBrow[] = {0,-0.25};
			mBrow[] = {0,-0.4};
			rBrow[] = {0,-0.3};
			lMouth[] = {0.4,0.5};
			mMouth[] = {0,0.5};
			rMouth[] = {-0.4,-0.5};
		};
		class Angry {
			lBrow[] = {0.4,-0.5};
			mBrow[] = {0.1,-0.4};
			rBrow[] = {-0.4,-0.5};
			lMouth[] = {0.4,-0.9};
			mMouth[] = {0,-0.2};
			rMouth[] = {-0.4,-0.8};
		};
	};
	combat[] = {"Sad",0.1,"Surprised",0.1,"Cynic",0.3,"Angry",0.1,"Normal"};
	aware[] = {"Angry",0.2,"Normal"};
	safe[] = {"Smile",0.1,"Surprised",0.1,"Normal"};
	neutral[] = {"Surprised",0.1,"Sad",0.1,"Normal"};
	danger[] = {"Surprised",0.4,"Sad"};
	dead[] = {"Hurt"};
	hurt[] = {"Hurt"};
};

#include "cfgVoice.h"

class CfgHQIdentities {
	access = 1;
	class Base {
		name = "$STR_CFG_PAPABEAR";
		speaker = "Dan";
		pitch = 0.95;
	};
	class HQ {
		name = "$STR_CFG_PAPABEAR";
		speaker = "Greg";
		pitch = 1.05;
	};
	class PAPA_BEAR {
		name = "$STR_CFG_PAPABEAR";
		speaker = "Greg";
		pitch = 1.05;
	};
	class AirBase {
		name = "$STR_CFG_FIREFLYBASE";
		speaker = "Greg";
		pitch = 1.05;
	};
};
class CfgSFX {
	access = 1;
	seagull[] = {"animals\gulls1",0.031623,1,1,0.2,1,5};
	class Preview {
		effect[] = {"sound\weapons\m16burst.wss",1,1};
		speech[] = {"voice\adam\isayagain.wss",1,1};
		music[] = {"music\13.ogg",1,1};
	};
	class Church {
		smallBell[] = {"Objects\bell1",0.1,1};
		largeBell[] = {"Objects\bell2",0.316228,1};
	};
	class CA_AK {
		sounds[] = {"sound1","sound2"};
		name = "$STR_CFG_SFX_CA_AK";
		sound1[] = {"weapons\AK74single",0.1,1,0.5,0,2,5};
		sound2[] = {"weapons\AK74burst",0.1,1,0.4,0,1,10};
		empty[] = {"","","","",1,5,20};
	};
	class CA_M16 {
		sounds[] = {"sound1","sound2"};
		name = "$STR_CFG_SFX_CA_M16";
		sound1[] = {"weapons\M16single",0.1,1,0.5,0,2,5};
		sound2[] = {"weapons\M16burst",0.1,1,0.4,0,1,10};
		empty[] = {"","","","",1,5,20};
	};
	class CA_Expl1 {
		sounds[] = {"sound1"};
		name = "$STR_CFG_SFX_CA_EXPL1";
		sound1[] = {"weapons\explosion_large1",0.1,1,0.5,0,2,5};
		empty[] = {"","","","",1,5,30};
	};
	class hedgesparrow {
		sounds[] = {"sing1","sing2","sing3","sing4","sing5"};
		name = "$STR_CFG_SFX_HEDGESPARROW";
		sing1[] = {"animals\hedspar1",0.003162,1,0.1,0,0,0};
		sing2[] = {"animals\hedspar2",0.003162,1,0.2,0,0,0};
		sing3[] = {"animals\hedspar3",0.003162,1,0.1,0,0,0};
		sing4[] = {"animals\hedspar4",0.003162,1,0.2,0,0,0};
		sing5[] = {"animals\hedspar5",0.003162,1,0.3,0,0,0};
		empty[] = {"","","","",1,5,80};
	};
	class skylark {
		sounds[] = {"sing1","sing2","sing3","sing4","sing5","sing6","sing7"};
		name = "$STR_CFG_SFX_SKYLARK";
		sing1[] = {"animals\skylark7",0.01,1,0.1,0.2,0.4,1};
		sing2[] = {"animals\skylark6",0.01,1,0.2,0.2,0.3,1};
		sing3[] = {"animals\skylark5",0.01,1,0.1,0.1,0.2,1.2};
		sing4[] = {"animals\skylark4",0.01,1,0.2,0.1,0.2,1.2};
		sing5[] = {"animals\skylark3",0.01,1,0.1,0.3,0.4,0.75};
		sing6[] = {"animals\skylark2",0.01,1,0.1,0.2,0.4,0.8};
		sing7[] = {"animals\skylark1",0.01,1,0.1,0.1,0.5,0.8};
		empty[] = {"","","","",1,5,40};
	};
	class forestlark {
		sounds[] = {"sing1","sing2","sing3","sing4","sing5","sing6"};
		name = "$STR_CFG_SFX_FORESTLARK";
		sing1[] = {"animals\f_lark1",0.003162,1,0.1,0,0.1,0.2};
		sing2[] = {"animals\f_lark2",0.003162,1,0.1,0,0.1,0.2};
		sing3[] = {"animals\f_lark3",0.003162,1,0.1,0,0.1,0.2};
		sing4[] = {"animals\f_lark4",0.003162,1,0.1,0,0.1,0.2};
		sing5[] = {"animals\f_lark5",0.003162,1,0.2,0,0.1,0.2};
		sing6[] = {"animals\f_lark6",0.003162,1,0.2,0,0.1,0.2};
		sing7[] = {"animals\f_lark7",0.003162,1,0.2,0,0.1,0.2};
		empty[] = {"","","","",1,5,40};
	};
	class nightingale {
		sounds[] = {"sing1","sing2","sing3","sing4","sing5","sing6","sing7"};
		name = "$STR_CFG_SFX_NIGHTINGALE";
		sing1[] = {"animals\n_gale1",0.003162,1,0.2,0.1,0.2,0.3};
		sing2[] = {"animals\n_gale2",0.003162,1,0.1,0.1,0.2,0.3};
		sing3[] = {"animals\n_gale3",0.003162,1,0.2,0.1,0.2,0.3};
		sing4[] = {"animals\n_gale4",0.003162,1,0.1,0.1,0.2,0.3};
		sing5[] = {"animals\n_gale5",0.003162,1,0.1,0.1,0.2,0.3};
		sing6[] = {"animals\n_gale6",0.003162,1,0.2,0.1,0.2,0.3};
		sing7[] = {"animals\n_gale7",0.003162,1,0.1,0.1,0.2,0.3};
		empty[] = {"","","","",1,5,40};
	};
	class jay {
		sounds[] = {"sing1","sing2","sing3","sing4"};
		name = "$STR_CFG_SFX_JAY";
		sing1[] = {"animals\jay1",0.01,1,0.2,0.2,0.4,1};
		sing2[] = {"animals\jay2",0.01,1,0.2,0.2,0.3,1};
		sing3[] = {"animals\jay3",0.01,1,0.2,0.1,0.2,1.2};
		sing4[] = {"animals\jay4",0.01,1,0.2,0.1,0.2,1.2};
		empty[] = {"","","","",8,20,40};
	};
	class owl {
		sounds[] = {"sing1","sing2"};
		name = "$STR_CFG_SFX_OWL";
		sing1[] = {"animals\owl2_1",0.003162,1,0.2,0,0.5,1};
		sing2[] = {"animals\owl2_2",0.003162,1,0.2,0,0.5,1};
		empty[] = {"","","","",1,5,40};
	};
	class crow2 {
		sounds[] = {"sing1","sing2","sing3","sing4","sing5","sing6"};
		name = "$STR_CFG_SFX_CROW2";
		sing1[] = {"animals\crow2_1",0.01,1,0.1,0.2,0.4,1};
		sing2[] = {"animals\crow2_2",0.01,1,0.1,0.2,0.3,1};
		sing3[] = {"animals\crow2_3",0.01,1,0.1,0.1,0.2,1.2};
		sing4[] = {"animals\crow2_4",0.01,1,0.1,0.1,0.2,1.2};
		sing5[] = {"animals\crow2_5",0.01,1,0.1,0.1,0.2,1.2};
		sing6[] = {"animals\crow2_6",0.01,1,0.1,0.1,0.2,1.2};
		empty[] = {"","","","",1,5,50};
	};
	class frog2 {
		sounds[] = {"sing1","sing2","sing3"};
		name = "$STR_CFG_SFX_FROG2";
		sing1[] = {"animals\frog2_1",0.01,1,0.3,0,0.1,0.2};
		sing2[] = {"animals\frog2_2",0.01,1,0.3,0,0.1,0.2};
		sing3[] = {"animals\frog2_3",0.01,1,0.3,0,0.1,0.2};
		empty[] = {"","","","",1,5,40};
	};
	class SeagullSfx {
		sounds[] = {"seagull1","Seagull2","Seagull3","Seagull4","Seagull5"};
		name = "$STR_CFG_SFX_SEAGULL";
		seagull1[] = {"animals\gulls1",0.031623,1,0.15,0.1,0.5,5};
		seagull2[] = {"animals\gulls2",0.031623,1,0.2,0.1,0.5,5};
		seagull3[] = {"animals\gulls3",0.031623,1,0.15,0.1,0.5,5};
		seagull4[] = {"animals\gulls4",0.031623,1,0.24,0.1,0.5,5};
		seagull5[] = {"animals\gulls5",0.031623,1,0.2,0.1,0.5,5};
		empty[] = {"","","","",0.2,2,20};
	};
	class StreamSfx {
		sounds[] = {"Stream01"};
		name = "$STR_DN_STREAM";
		Stream01[] = {"objects\stream",0.00001,1,1,1,1,1};
		empty[] = {"","","","",0,0,0};
	};
	class AlarmSfx {
		sounds[] = {"Alarm"};
		name = "$STR_DN_ALARM";
		Alarm[] = {"objects\sirena",1,1,1,0,0,0};
		empty[] = {"","","","",0,0,0};
	};
	class Cricket1Sfx {
		sounds[] = {"Cricket01"};
		name = "$STR_DN_CRICKET1";
		Cricket01[] = {"animals\cricket01",0.001,1,0.96,0,0,0};
		empty[] = {"","","","",0,2,60};
	};
	class Cricket2Sfx {
		sounds[] = {"Cricket01"};
		name = "$STR_DN_CRICKET2";
		Cricket01[] = {"animals\cricket02",0.003162,1,0.97,0,0,0};
		empty[] = {"","","","",0,3,60};
	};
	class Cricket3Sfx {
		sounds[] = {"Cricket01"};
		name = "$STR_DN_CRICKET3";
		Cricket01[] = {"animals\crickets06",0.001,1,0.98,0,0,0};
		empty[] = {"","","","",0,6,60};
	};
	class CricketSfx {
		sounds[] = {"Cricket04"};
		name = "$STR_DN_CRICKET4";
		Cricket04[] = {"animals\crickets04",0.001,1,1,0,0,0};
		empty[] = {"","","","",0,2,8};
	};
	class FrogSfx {
		sounds[] = {"Frog01","Frog02"};
		name = "$STR_DN_FROG";
		Frog01[] = {"animals\frog1_1",0.000977,1,0.8,0,0,0};
		Frog02[] = {"animals\frog1_2",0.001,1,0.1,0,0,0};
		empty[] = {"","","","",0.1,0.5,12};
	};
	class FrogsSfx {
		sounds[] = {"Frog01"};
		name = "$STR_DN_FROGS";
		Frog01[] = {"animals\frogs",0.001,1,1,0,0,0};
		empty[] = {"","","","",0,0,0};
	};
	class OwlSfx {
		sounds[] = {"Owl1","Owl2"};
		name = "$STR_DN_OWL";
		Owl1[] = {"animals\owl1_1",0.001,1,0.6,0.1,0.5,5};
		Owl2[] = {"animals\owl1_2",0.001,1,0.2,0.1,0.5,5};
		empty[] = {"","","","",0.5,2,12};
	};
	class CowSfx {
		sounds[] = {"moo1","moo2"};
		name = "$STR_DN_COW";
		moo1[] = {"animals\cow_moo01",0.001,1,0.4,0.1,0.5,5};
		moo2[] = {"animals\cow_moo02",0.001,1,0.4,0.1,0.5,5};
		empty[] = {"","","","",0.1,0.5,2};
	};
	class WolfSfx {
		sounds[] = {"wolf1","wolf2","wolf3"};
		name = "$STR_DN_WOLF";
		wolf1[] = {"animals\wolf1",0.001,1,0.3,0.1,0.5,5};
		wolf2[] = {"animals\wolf2",0.001,1,0.3,0.1,0.5,5};
		wolf3[] = {"animals\wolf3",0.001,1,0.3,0.1,0.5,5};
		empty[] = {"","","","",0.5,4,50};
	};
	class CrowSfx {
		sounds[] = {"crow1","crow2","crow3"};
		name = "$STR_DN_CROW";
		crow1[] = {"animals\crow1_1",0.001,1,0.2,0.1,0.5,5};
		crow2[] = {"animals\crow1_2",0.001,1,0.2,0.1,0.5,5};
		crow3[] = {"animals\crow1_3",0.001,1,0.2,0.1,0.5,5};
		empty[] = {"","","","",2,10,30};
	};
	class DogSfx {
		sounds[] = {"dog1","dog2","dog3"};
		name = "$STR_DN_DOG";
		dog1[] = {"animals\dog_bark03",0.01,1,0.3,0.1,0.5,5};
		dog2[] = {"animals\dog_bark04",0.01,1,0.3,0.1,0.5,5};
		dog3[] = {"animals\dog_bark05",0.005623,1,0.3,0.1,0.5,5};
		empty[] = {"","","","",3,15,90};
	};
	class SorrowDogSfx {
		sounds[] = {"sorrowdog1","sorrowdog2","sorrowdog3","sorrowdog4"};
		name = "$STR_DN_SORROW_DOG";
		sorrowdog1[] = {"animals\dog_bark04",0.01,1,0.2,0.1,0.5,5};
		sorrowdog2[] = {"animals\dog_bark05",0.01,1,0.2,0.1,0.5,5};
		sorrowdog3[] = {"animals\dog_yelp02",0.005623,1,0.2,0.1,0.5,5};
		sorrowdog4[] = {"animals\dog_yelp03",0.003162,1,0.2,0.1,0.5,5};
		empty[] = {"","","","",0.2,3,8};
	};
	class BadDogSfx {
		sounds[] = {"baddog1","baddog2","baddog3"};
		name = "$STR_DN_BAD_DOG";
		baddog1[] = {"animals\dog_bark04",0.014125,1,0.3,0.1,0.5,5};
		baddog2[] = {"animals\dog_bark05",0.014125,1,0.3,0.1,0.5,5};
		baddog3[] = {"animals\dog_maul01",0.017783,1,0.3,0.1,0.5,5};
		empty[] = {"","","","",0.1,2,5};
	};
	class LittleDogSfx {
		sounds[] = {"littledog1"};
		name = "$STR_DN_LITTLE_DOG";
		littledog1[] = {"animals\dog_bark04",0.001778,1,0.8,0.1,0.5,5};
		empty[] = {"","","","",0.2,5,3,8};
	};
	class BirdSingingSfx {
		sounds[] = {"sing1","sing1a","sing2","sing2a","sing3","sing4","sing5","sing6","sing7","sing8","sing9"};
		name = "$STR_DN_BIRDSING";
		sing1[] = {"animals\birdsing01",0.003162,1,0.1,0.2,0.4,1};
		sing1a[] = {"animals\birdsing01",0.001778,1,0.08,0.2,0.3,1};
		sing2[] = {"animals\birdsing02",0.001,1,0.1,0.1,0.2,1.2};
		sing2a[] = {"animals\birdsing02",0.005623,1,0.08,0.1,0.2,1.2};
		sing3[] = {"animals\birdsing03",0.003162,1,0.08,0.3,0.4,0.75};
		sing4[] = {"animals\birdsing04",0.003162,1,0.08,0.2,0.4,0.8};
		sing5[] = {"animals\birdsing05",0.003162,1,0.08,0.1,0.5,0.8};
		sing6[] = {"animals\birdsing06",0.003162,1,0.08,0.1,0.3,0.8};
		sing7[] = {"animals\birdsing07",0.003162,1,0.08,0.1,0.6,0.8};
		sing8[] = {"animals\birdsing08",0.001778,1,0.08,0.1,0.6,0.8};
		sing9[] = {"animals\birdsing09",0.001778,1,0.08,0.1,0.6,0.8};
		empty[] = {"","","","",1,5,80};
	};
	class CockSfx {
		sounds[] = {"cock"};
		name = "$STR_DN_COCK";
		cock[] = {"animals\cock",0.01,1,0.5,0.1,0.5,5};
		empty[] = {"","","","","",1,30,90};
	};
	class ChickenSfx {
		sounds[] = {"chicken1","chicken2"};
		name = "$STR_DN_CHICKEN";
		chicken1[] = {"animals\chicken01",0.003162,1,0.3,0.1,0.5,5};
		chicken2[] = {"animals\chicken02",0.003162,1,0.3,0.1,0.5,5};
		empty[] = {"","","","","",1,20,60};
	};
	class FunMusicSfx {
		sounds[] = {"music1"};
		name = "'Music'";
		music1[] = {"Objects\Fun_music",0.003162,1,1,0,0,0};
		empty[] = {"","","","","",0,0,0};
	};
};
class CfgEnvSounds {
	access = 1;
	class Default {
		name = "$STR_CFG_ENVSOUNDS_DEFAULT";
		sound[] = {"$DEFAULT$",0,1};
		soundNight[] = {"$DEFAULT$",0,1};
	};
	class Rain {
		name = "$STR_DN_RAIN";
		sound[] = {"Environmental\Rain_hard",0.001778,1};
		soundNight[] = {"Environmental\Rain_hard",0.001778,1};
	};
	class Sea {
		name = "$STR_DN_SEA";
		sound[] = {"environmental\wave_break",0.000316,1};
		soundNight[] = {"environmental\wave_break",0.000316,1};
	};
	class Meadows {
		name = "$STR_DN_MEADOWS";
		sound[] = {"animals\crickets07",0.000056,1};
		soundNight[] = {"animals\crickets03",0.000056,1};
	};
	class Trees {
		name = "$STR_DN_TREES";
		sound[] = {"environmental\treesbirds",0.000178,1};
		soundNight[] = {"animals\crickets03",0.000178,1};
	};
	class Hills {
		name = "$STR_DN_HILLS";
		sound[] = {"environmental\wind_heavy",0.000178,1};
		soundNight[] = {"environmental\wind_whistle",0.000178,1};
	};
	class Combat {
		name = "$STR_CFG_ENVSOUNDS_COMBAT";
		sound[] = {"environmental\battle1",0.01,1};
		soundNight[] = {"environmental\battle2",0.01,1};
	};
};
class CfgDestroy {
	access = 1;
	class EngineHit {
		sound[] = {"Explosions\fuel_explosion",10,1};
	};
	class BuildingHit {
		sound[] = {"Explosions\BuildingHit",10,1};
	};
	class TreeHit {
		sound[] = {"Explosions\Treehit1",0.031623,1};
	};
};
class CfgHeads {
	access = 1;
	class Air {
		friction = 10;
		movement = 160;
		maxAmp = 0.05;
		maxSpeed = 3;
		radius = 0.2;
	};
	class Land {
		friction = 20;
		movement = 260;
		maxAmp = 0.1;
		maxSpeed = 4;
		radius = 0.3;
	};
};
class CfgEffects {
	access = 1;
	class ThunderboltNorm {
		model = "blesk1.p3d";
		soundNear[] = {"Environmental\thundershort",316.227783,1};
		soundFar[] = {"Environmental\thunderlong",316.227783,1};
	};
	class ThunderboltHeavy {
		model = "blesk2.p3d";
		soundNear[] = {"Environmental\thunderhard",316.227783,1};
		soundFar[] = {"Environmental\thunder",316.227783,1};
	};
	class Rain {
		texture = "desta.01.paa";
	};
};
class CfgWindows {
	access = 1;
	textureWindow = "oknozhas.pac";
	textureWindowShine = "oknosvit.pac";
	textureWindowBroken = "strepyzhas.pac";
	textuerWindowMan = "chlapvokne.pac";
	soundWindowBroken[] = {"43glass",1,1};
	soundDoor[] = {"door",0.7,1};
};
class CfgMusic {
	access = 1;
	class 7thDecide {
		name = "$STR_CFG_MUSIC_7TH_DECIDE";
		sound[] = {"\Music\Seventh_decide.ogg",1,1};
	};
	class 7thIAmGonaFly {
		name = "$STR_CFG_MUSIC_7TH_IAMGONAFLY";
		sound[] = {"\Music\Seventh_iamgonnafly.ogg",1,1};
	};
	class 7thLifeless {
		name = "$STR_CFG_MUSIC_7TH_LIFELESS";
		sound[] = {"\Music\Seventh_lifeless.ogg",1,1};
	};
	class 7thOverdose {
		name = "$STR_CFG_MUSIC_7TH_OVERDOSE";
		sound[] = {"\Music\Seventh_overdose.ogg",1,1};
	};
	class Track1 {
		name = "$STR_CFG_MUSIC_TRACK1";
		sound[] = {"\Music\01.ogg",1,1};
	};
	class Track2 {
		name = "$STR_CFG_MUSIC_TRACK2";
		sound[] = {"\Music\02.ogg",1,1};
	};
	class Track3 {
		name = "$STR_CFG_MUSIC_TRACK3";
		sound[] = {"\Music\03.ogg",1,1};
	};
	class Track4 {
		name = "$STR_CFG_MUSIC_TRACK4";
		sound[] = {"\Music\04.ogg",1,1};
	};
	class Track5 {
		name = "$STR_CFG_MUSIC_TRACK5";
		sound[] = {"\Music\05.ogg",1,1};
	};
	class Track6 {
		name = "$STR_CFG_MUSIC_TRACK6";
		sound[] = {"\Music\06.ogg",1,1};
	};
	class Track7 {
		name = "$STR_CFG_MUSIC_TRACK7";
		sound[] = {"\Music\07.ogg",1,1};
	};
	class Track8 {
		name = "$STR_CFG_MUSIC_TRACK8";
		sound[] = {"\Music\08.ogg",1,1};
	};
	class Track9 {
		name = "$STR_CFG_MUSIC_TRACK9";
		sound[] = {"\Music\09.ogg",1,1};
	};
	class Track10 {
		name = "$STR_CFG_MUSIC_TRACK10";
		sound[] = {"\Music\10.ogg",1,1};
	};
	class Track11 {
		name = "$STR_CFG_MUSIC_TRACK11";
		sound[] = {"\Music\11.ogg",1,1};
	};
	class Track12 {
		name = "$STR_CFG_MUSIC_TRACK12";
		sound[] = {"\Music\12.ogg",1,1};
	};
	class Track13 {
		name = "$STR_CFG_MUSIC_TRACK13";
		sound[] = {"\Music\13.ogg",1,1};
	};
	class Track14 {
		name = "$STR_CFG_MUSIC_TRACK14";
		sound[] = {"\Music\14.ogg",1,1};
	};
	class Track15 {
		name = "$STR_CFG_MUSIC_TRACK15";
		sound[] = {"\Music\15.ogg",1,1};
	};
	class Track16 {
		name = "$STR_CFG_MUSIC_TRACK16";
		sound[] = {"\Music\16.ogg",1,1};
	};
	class Frost {
		name = "$STR_CFG_MUSIC_FROST";
		sound[] = {"\Music\frost.ogg",1,1};
	};
};
class CfgSounds {
	access = 1;
	class Rus1 {
		name = "$STR_CFG_SOUNDS_RUS1";
		sound[] = {"voices\rus_amerikanskije",0.1,1};
		titles[] = {};
	};
	class Rus2 {
		name = "$STR_CFG_SOUNDS_RUS2";
		sound[] = {"voices\rus_begite",0.1,1};
		titles[] = {};
	};
	class Rus3 {
		name = "$STR_CFG_SOUNDS_RUS3";
		sound[] = {"voices\rus_cjerta",0.1,1};
		titles[] = {};
	};
	class Rus4 {
		name = "$STR_CFG_SOUNDS_RUS4";
		sound[] = {"voices\rus_cjort",0.1,1};
		titles[] = {};
	};
	class Rus5 {
		name = "$STR_CFG_SOUNDS_RUS5";
		sound[] = {"voices\rus_cjort",0.1,1};
		titles[] = {};
	};
	class Rus6 {
		name = "$STR_CFG_SOUNDS_RUS6";
		sound[] = {"voices\rus_hejty",0.1,1};
		titles[] = {};
	};
	class Rus7 {
		name = "$STR_CFG_SOUNDS_RUS7";
		sound[] = {"voices\rus_jazdajus",0.1,1};
		titles[] = {};
	};
	class Rus8 {
		name = "$STR_CFG_SOUNDS_RUS8";
		sound[] = {"voices\rus_mamocka",0.1,1};
		titles[] = {};
	};
	class Rus9 {
		name = "$STR_CFG_SOUNDS_RUS9";
		sound[] = {"voices\rus_nestrelajte",0.1,1};
		titles[] = {};
	};
	class Rus10 {
		name = "$STR_CFG_SOUNDS_RUS10";
		sound[] = {"voices\rus_ogon",0.1,1};
		titles[] = {};
	};
	class Rus11 {
		name = "$STR_CFG_SOUNDS_RUS11";
		sound[] = {"voices\rus_ostonovitogon",0.1,1};
		titles[] = {};
	};
	class Rus12 {
		name = "$STR_CFG_SOUNDS_RUS12";
		sound[] = {"voices\rus_otchodi",0.1,1};
		// in 2.01 path is rus_otchadi. Error of CWA?
		titles[] = {};
	};
	class Rus13 {
		name = "$STR_CFG_SOUNDS_RUS13";
		sound[] = {"voices\rus_pamagite",0.1,1};
		titles[] = {};
	};
	class Rus14 {
		name = "$STR_CFG_SOUNDS_RUS14";
		sound[] = {"voices\rus_stoj",0.1,1};
		titles[] = {};
	};
	class Rus15 {
		name = "$STR_CFG_SOUNDS_RUS15";
		sound[] = {"voices\rus_trevoga",0.1,1};
		titles[] = {};
	};
	class Rus16 {
		name = "$STR_CFG_SOUNDS_RUS16";
		sound[] = {"voices\rus_vodka1",0.1,1};
		titles[] = {};
	};
	class Rus17 {
		name = "$STR_CFG_SOUNDS_RUS17";
		sound[] = {"voices\rus_vodka2",0.1,1};
		titles[] = {};
	};
	class Rus18 {
		name = "$STR_CFG_SOUNDS_RUS18";
		sound[] = {"voices\rus_vperjod",0.1,1};
		titles[] = {};
	};
	class Rus19 {
		name = "$STR_CFG_SOUNDS_RUS19";
		sound[] = {"voices\rus_zdescisto",0.1,1};
		titles[] = {};
	};
	class Rus20 {
		name = "$STR_CFG_SOUNDS_RUS20";
		sound[] = {"voices\rus_zdochni",0.1,1};
		titles[] = {};
	};
	class Eng1 {
		name = "$STR_CFG_SOUNDS_ENG1";
		sound[] = {"voices\eng_bastards1",0.1,1};
		titles[] = {};
	};
	class Eng2 {
		name = "$STR_CFG_SOUNDS_ENG2";
		sound[] = {"voices\eng_bastards2",0.1,1};
		titles[] = {};
	};
	class Eng3 {
		name = "$STR_CFG_SOUNDS_ENG3";
		sound[] = {"voices\eng_bastards3",0.1,1};
		titles[] = {};
	};
	class Eng4 {
		name = "$STR_CFG_SOUNDS_ENG4";
		sound[] = {"voices\eng_commie1",0.1,1};
		titles[] = {};
	};
	class Eng5 {
		name = "$STR_CFG_SOUNDS_ENG5";
		sound[] = {"voices\eng_commie2",0.1,1};
		titles[] = {};
	};
	class Eng6 {
		name = "$STR_CFG_SOUNDS_ENG6";
		sound[] = {"voices\eng_coverme1",0.1,1};
		titles[] = {};
	};
	class Eng7 {
		name = "$STR_CFG_SOUNDS_ENG7";
		sound[] = {"voices\eng_coverme2",0.1,1};
		titles[] = {};
	};
	class Eng8 {
		name = "$STR_CFG_SOUNDS_ENG8";
		sound[] = {"voices\eng_die1",0.1,1};
		titles[] = {};
	};
	class Eng9 {
		name = "$STR_CFG_SOUNDS_ENG9";
		sound[] = {"voices\eng_die2",0.1,1};
		titles[] = {};
	};
	class Eng10 {
		name = "$STR_CFG_SOUNDS_ENG10";
		sound[] = {"voices\eng_die3",0.1,1};
		titles[] = {};
	};
	class Eng11 {
		name = "$STR_CFG_SOUNDS_ENG11";
		sound[] = {"voices\eng_dontshoot",0.1,1};
		titles[] = {};
	};
	class Eng12 {
		name = "$STR_CFG_SOUNDS_ENG12";
		sound[] = {"voices\eng_enemyspotted",0.1,1};
		titles[] = {};
	};
	class Eng13 {
		name = "$STR_CFG_SOUNDS_ENG13";
		sound[] = {"voices\eng_everyoneout1",0.1,1};
		titles[] = {};
	};
	class Eng14 {
		name = "$STR_CFG_SOUNDS_ENG14";
		sound[] = {"voices\eng_everyoneout2",0.1,1};
		titles[] = {};
	};
	class Eng15 {
		name = "$STR_CFG_SOUNDS_ENG15";
		sound[] = {"voices\eng_forward",0.1,1};
		titles[] = {};
	};
	class Eng16 {
		name = "$STR_CFG_SOUNDS_ENG16";
		sound[] = {"voices\eng_gettoutahere1",0.1,1};
		titles[] = {};
	};
	class Eng17 {
		name = "$STR_CFG_SOUNDS_ENG17";
		sound[] = {"voices\eng_gettoutahere2",0.1,1};
		titles[] = {};
	};
	class Eng18 {
		name = "$STR_CFG_SOUNDS_ENG18";
		sound[] = {"voices\eng_gettoyourpositions1",0.1,1};
		titles[] = {};
	};
	class Eng19 {
		name = "$STR_CFG_SOUNDS_ENG19";
		sound[] = {"voices\eng_gettoyourpositions2",0.1,1};
		titles[] = {};
	};
	class Eng20 {
		name = "$STR_CFG_SOUNDS_ENG20";
		sound[] = {"voices\eng_gogogo1",0.1,1};
		titles[] = {};
	};
	class Eng21 {
		name = "$STR_CFG_SOUNDS_ENG21";
		sound[] = {"voices\eng_gogogo2",0.1,1};
		titles[] = {};
	};
	class Eng22 {
		name = "$STR_CFG_SOUNDS_ENG22";
		sound[] = {"voices\eng_help1",0.1,1};
		titles[] = {};
	};
	class Eng23 {
		name = "$STR_CFG_SOUNDS_ENG23";
		sound[] = {"voices\eng_help2",0.1,1};
		titles[] = {};
	};
	class Eng24 {
		name = "$STR_CFG_SOUNDS_ENG24";
		sound[] = {"voices\eng_hey1",0.1,1};
		titles[] = {};
	};
	class Eng25 {
		name = "$STR_CFG_SOUNDS_ENG25";
		sound[] = {"voices\eng_hey2",0.1,1};
		titles[] = {};
	};
	class Eng26 {
		name = "$STR_CFG_SOUNDS_ENG26";
		sound[] = {"voices\eng_hey3",0.1,1};
		titles[] = {};
	};
	class Eng27 {
		name = "$STR_CFG_SOUNDS_ENG27";
		sound[] = {"voices\eng_letemhaveit1",0.1,1};
		titles[] = {};
	};
	class Eng28 {
		name = "$STR_CFG_SOUNDS_ENG28";
		sound[] = {"voices\eng_letemhaveit2",0.1,1};
		titles[] = {};
	};
	class Eng29 {
		name = "$STR_CFG_SOUNDS_ENG29";
		sound[] = {"voices\eng_lookout1",0.1,1};
		titles[] = {};
	};
	class Eng30 {
		name = "$STR_CFG_SOUNDS_ENG30";
		sound[] = {"voices\eng_lookout2",0.1,1};
		titles[] = {};
	};
	class Eng31 {
		name = "$STR_CFG_SOUNDS_ENG31";
		sound[] = {"voices\eng_lookout3",0.1,1};
		titles[] = {};
	};
	class Eng32 {
		name = "$STR_CFG_SOUNDS_ENG32";
		sound[] = {"voices\eng_medic1",0.1,1};
		titles[] = {};
	};
	class Eng33 {
		name = "$STR_CFG_SOUNDS_ENG33";
		sound[] = {"voices\eng_medic2",0.1,1};
		titles[] = {};
	};
	class Eng34 {
		name = "$STR_CFG_SOUNDS_ENG34";
		sound[] = {"voices\eng_medic3",0.1,1};
		titles[] = {};
	};
	class Eng35 {
		name = "$STR_CFG_SOUNDS_ENG35";
		sound[] = {"voices\eng_sectorclear1",0.1,1};
		titles[] = {};
	};
	class Eng36 {
		name = "$STR_CFG_SOUNDS_ENG36";
		sound[] = {"voices\eng_sectorclear2",0.1,1};
		titles[] = {};
	};
	class Eng37 {
		name = "$STR_CFG_SOUNDS_ENG37";
		sound[] = {"voices\eng_staysharp",0.1,1};
		titles[] = {};
	};
	class Eng38 {
		name = "$STR_CFG_SOUNDS_ENG38";
		sound[] = {"voices\eng_surrender",0.1,1};
		titles[] = {};
	};
	class Eng39 {
		name = "$STR_CFG_SOUNDS_ENG39";
		sound[] = {"voices\eng_underattack",0.1,1};
		titles[] = {};
	};
	class Eng40 {
		name = "$STR_CFG_SOUNDS_ENG40";
		sound[] = {"voices\eng_whosthere1",0.1,1};
		titles[] = {};
	};
	class Eng41 {
		name = "$STR_CFG_SOUNDS_ENG41";
		sound[] = {"voices\eng_whosthere2",0.1,1};
		titles[] = {};
	};
	class Alarm {
		name = "$STR_CFG_SOUNDS_ALARM";
		sound[] = {"objects\air_raid",1,1};
		titles[] = {};
	};
	class Explosion1 {
		name = "$STR_CFG_SOUNDS_EXPLOSION1";
		sound[] = {"Explosions\Explosion_Small2",1,1};
		titles[] = {};
	};
	class Explosion2 {
		name = "$STR_CFG_SOUNDS_EXPLOSION2";
		sound[] = {"Explosions\Building_Demolition",1,1};
		titles[] = {};
	};
	class Fountain {
		name = "$STR_CFG_SOUNDS_FOUNTAIN";
		sound[] = {"Objects\stream",0.0001,1};
		titles[] = {};
	};
	class Fire {
		name = "$STR_CFG_SOUNDS_FIRE";
		sound[] = {"Objects\fire",0.000251,1};
		titles[] = {};
	};
};
class CfgTitles {
	access = 1;
	titles[] = {"Sphere","BISLogo","TVSet"};
	class Sphere {
		name = "$STR_CFG_TITLES_SPHERE";
		model = "koule.p3d";
		duration = 5;
		camera[] = {0,0,-10};
	};
	class BISLogo {
		name = "$STR_CFG_TITLES_BISLOGO";
		model = "bohemiaolor2.p3d";
		duration = 3;
		camera[] = {0,0,-200};
	};
	class TVSet {
		name = "$STR_CFG_TITLES_TVSET";
		duration = 1000;
		model = "TVhi.p3d";
		camera[] = {0,0,-0.7};
	};
};
class CfgIntro {
	firstCampaign = "";
};
class CfgCredits {
	cutscene = "xxcredits.eden";
};
class CfgCutScenes {
	access = 1;
	class Refuel {
		sound[] = {"weapons\missload",0.5,0.2};
		titleType = 1;
		title = "$STR_CFG_CUTSCENES_REFUEL";
	};
	class Rearm {
		sound[] = {"weapons\missload",0.3,1};
		titleType = 1;
		title = "$STR_CFG_CUTSCENES_REARM";
	};
	class Repair {
		sound[] = {"weapons\missload",0.1,1};
		titleType = 1;
		title = "$STR_CFG_CUTSCENES_REPAIR";
	};
	class Heal {
		sound[] = {"weapons\missload",0.1,1};
		titleType = 1;
		title = "$STR_CFG_CUTSCENES_HEALING";
	};
	class TakeWeapon {
		sound[] = {"weapons\missload",0.1,1};
		titleType = 1;
		title = "$STR_CFG_CUTSCENES_TAKEWEAPON";
	};
	class TakeMagazine {
		sound[] = {"weapons\missload",0.1,1};
		titleType = 1;
		title = "$STR_CFG_CUTSCENES_TAKEMAGAZINE";
	};
	class DropWeapon {
		sound[] = {"weapons\missload",0.1,1};
		titleType = 1;
		title = "$STR_CFG_CUTSCENES_DROPWEAPON";
	};
	class DropMagazine {
		sound[] = {"weapons\missload",0.1,1};
		titleType = 1;
		title = "$STR_CFG_CUTSCENES_DROPMAGAZINE";
	};
};
class CfgCameraEffects {
	access = 1;
	class Interpolated {
		type = 0;
		scale = 0.1;
		duration = 5;
		spline = 1;
		show = 2;
	};
	class Exact: Interpolated {
		scale = -1;
	};
	class Chain {
		type = 3;
		show = 2;
	};
	class Array {
		class Terminate {
			name = "$STR_CFG_CAMEFFECTS_TERMINATE";
			type = 4;
			show = 0;
		};
		class Internal {
			name = "$STR_CFG_CAMEFFECTS_INTERNAL";
			type = 5;
			show = 2;
		};
		class ZoomIn: Interpolated {
			name = "$STR_CFG_CAMEFFECTS_ZOOMIN";
			file = "\anim\cam_zoom_in_front";
			scale = 0.1;
			duration = 5;
		};
		class ZoomInSlow: Interpolated {
			name = "$STR_CFG_CAMEFFECTS_ZOOMINSLOW";
			file = "\anim\cam_zoom_in_front";
			scale = 0.1;
			duration = 15;
		};
		class Around: Interpolated {
			name = "$STR_CFG_CAMEFFECTS_AROUND";
			file = "\anim\cam_360";
			duration = 10;
			scale = 0.3;
		};
		class AroundSlow: Interpolated {
			name = "$STR_CFG_CAMEFFECTS_AROUNDSLOW";
			file = "\anim\cam_360";
			duration = 20;
			scale = 0.3;
		};
		class ZoomAndAround: Chain {
			name = "$STR_CFG_CAMEFFECTS_ZOOMAROUND";
			chain[] = {"ZoomIn","Around"};
		};
		class AroundAndZoomINSlow: Chain {
			name = "$STR_CFG_CAMEFFECTS_AROUNDZOOMSLOW";
			chain[] = {"AroundSlow","ZoomInSlow"};
		};
		class ZoomInS: Interpolated {
			name = "$STR_CFG_CAMEFFECTS_ZOOMINS";
			file = "cam_s_zoom_in";
			duration = 5;
			scale = 1;
			show = 0;
		};
		class Fixed: Interpolated {
			name = "$STR_CFG_CAMEFFECTS_FIXED";
			type = 1;
			duration = 10;
		};
		class FixedWithZoom: Fixed {
			name = "$STR_CFG_CAMEFFECTS_FIXEDZOOM";
			type = 2;
			duration = 10;
		};
		class External: Fixed {
			name = "$STR_CFG_CAMEFFECTS_EXTERNAL";
			type = 0;
			duration = 5;
			file = "";
		};
	};
};

// in 2.01 there're too many flags.
class CfgMarkers {
	class Flag {
		name = "$STR_CFG_MARKERS_FLAG";
		icon = "marker_objective.paa";
		color[] = {0.7,0.1,0.0,0.8};
		size = 32;
	};
	class Flag1 {
		name = "$STR_CFG_MARKERS_FLAG1";
		icon = "marker_waypoint.paa";
		color[] = {0.7,0.1,0.0,0.8};
		size = 32;
	};
	class Dot {
		name = "$STR_CFG_MARKERS_DOT";
		icon = "marker_dot.paa";
		color[] = {0.7,0.1,0.0,0.8};
		size = 32;
	};
	class Destroy {
		name = "$STR_CFG_MARKERS_DESTROY";
		icon = "marker_destroy.paa";
		color[] = {0.7,0.1,0.0,0.8};
		size = 32;
	};
	class Start {
		name = "$STR_CFG_MARKERS_START";
		icon = "marker_start.paa";
		color[] = {0.0,0.6,0.0,0.8};
		size = 32;
	};
	class End {
		name = "$STR_CFG_MARKERS_END";
		icon = "marker_goal.paa";
		color[] = {0,0,0,0.8};
		size = 32;
	};
	class Warning {
		name = "$STR_CFG_MARKERS_WARNING";
		icon = "marker_exclamation.paa";
		color[] = {0,0,0,0.8};
		size = 32;
	};
	class Join {
		name = "$STR_CFG_MARKERS_JOIN";
		icon = "marker_join.paa";
		color[] = {0,0,0,0.8};
		size = 32;
	};
	class Pickup {
		name = "$STR_CFG_MARKERS_PICKUP";
		icon = "marker_pickup.paa";
		color[] = {0,0,0,0.8};
		size = 32;
	};
	class Unknown {
		name = "$STR_CFG_MARKERS_UNKNOWN";
		icon = "marker_question.paa";
		color[] = {0,0,0,0.8};
		size = 32;
	};
	class Marker {
		name = "$STR_CFG_MARKERS_MARKER";
		icon = "marker_x.paa";
		color[] = {0,0,0,0.8};
		size = 32;
	};
	class Arrow {
		name = "$STR_CFG_MARKERS_ARROW";
		icon = "marker_sipka.paa";
		color[] = {0.7,0.1,0.0,0.8};
		size = 32;
	};
	class Empty {
		name = "$STR_CFG_MARKERS_EMPTY";
		icon = "marker_empty.paa";
		color[] = {0.0,0.0,0.2,1.0};
		size = 0;
	};
};

class CfgMarkerColors {
	class Default {
		name = "$STR_CFG_MARKERCOL_DEFAULT";
		color[] = {0,0,0,0.8};
	};
	class ColorBlack {
		name = "$STR_CFG_MARKERCOL_BLACK";
		color[] = {0,0,0,0.8};
	};
	class ColorRed {
		name = "$STR_CFG_MARKERCOL_RED";
		color[] = {0.7,0.1,0.0,0.8};
	};
	class ColorRedAlpha {
		name = "$STR_CFG_MARKERCOL_REDALPHA";
		color[] = {0.7,0.1,0.0,0.65};
	};
	class ColorGreen {
		name = "$STR_CFG_MARKERCOL_GREEN";
		color[] = {0.0,0.6,0.0,0.8};
	};
	class ColorGreenAlpha {
		name = "$STR_CFG_MARKERCOL_GREENALPHA";
		color[] = {0.0,0.6,0.0,0.65};
	};
	class ColorBlue {
		name = "$STR_CFG_MARKERCOL_BLUE";
		color[] = {0.1,0.1,0.9,0.8};
	};
	class ColorYellow {
		name = "$STR_CFG_MARKERCOL_YELLOW";
		color[] = {0.8,0.6,0.0,0.8};
	};
	class ColorWhite {
		name = "$STR_CFG_MARKERCOL_WHITE";
		color[] = {0.8,0.8,0.8,1};
	};
};
class CfgMarkerBrushes {
	class Solid {
		name = "$STR_CFG_MARKERBR_SOLID";
		texture = "";
	};
	class Horizontal {
		name = "$STR_CFG_MARKERBR_HORIZONTAL";
		texture = "90_horizontal.paa";
	};
	class Vertical {
		name = "$STR_CFG_MARKERBR_VERTICAL";
		texture = "90_vertical.paa";
	};
	class Grid {
		name = "$STR_CFG_MARKERBR_GRID";
		texture = "90_mrizka.paa";
	};
	class FDiagonal {
		name = "$STR_CFG_MARKERBR_FDIAGONAL";
		texture = "45_lp.paa";
	};
	class BDiagonal {
		name = "$STR_CFG_MARKERBR_BDIAGONAL";
		texture = "45_pl.paa";
	};
	class DiagGrid {
		name = "$STR_CFG_MARKERBR_DIAGGRID";
		texture = "45_mrizka.paa";
	};
	class Cross {
		name = "$STR_CFG_MARKERBR_CROSS";
		texture = "krizek.paa";
	};
};

#include "cfgWorlds.h"

class CfgWorldList {
	access = 1;
	class Eden {};
	class Abel {};
	class Cain {};
	class Demo {};
	class Intro {};
};
class CfgGroups {
	class West {
		name = "$STR_WEST";
		class Armored {
			name = "$STR_CFG_GRP_ARMORED";
			class M1Platoon {
				name = "$STR_CFG_GRP_M1PLATOON";
				class Unit0 {
					side = 1;
					vehicle = "M1Abrams";
					rank = "CAPTAIN";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 1;
					vehicle = "M1Abrams";
					rank = "Lieutnant";
					position[] = {-20,0,0};
				};
				class Unit2 {
					side = 1;
					vehicle = "M1Abrams";
					rank = "Lieutnant";
					position[] = {20,0,0};
				};
				class Unit3 {
					side = 1;
					vehicle = "M1Abrams";
					rank = "Corporal";
					position[] = {40,0,0};
				};
			};
			class M60Platoon {
				name = "$STR_CFG_GRP_M60PLATOON";
				class Unit0 {
					side = 1;
					vehicle = "M60";
					rank = "CAPTAIN";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 1;
					vehicle = "M60";
					rank = "Lieutnant";
					position[] = {-20,0,0};
				};
				class Unit2 {
					side = 1;
					vehicle = "M60";
					rank = "Lieutnant";
					position[] = {20,0,0};
				};
				class Unit3 {
					side = 1;
					vehicle = "M60";
					rank = "Corporal";
					position[] = {40,0,0};
				};
			};
		};
		class Infantry {
			name = "$STR_CFG_GRP_INFANTRY";
			class BasicInfantry {
				name = "$STR_CFG_GRP_INFANTRY_BASIC";
				class Unit0 {
					side = 1;
					vehicle = "OfficerW";
					rank = "Sergeant";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 1;
					vehicle = "SoldierWMG";
					rank = "CORPORAL";
					position[] = {3,0,0};
				};
				class Unit2 {
					side = 1;
					vehicle = "SoldierWG";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3 {
					side = 1;
					vehicle = "SoldierWG";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
				class Unit4 {
					side = 1;
					vehicle = "SoldierWLAW";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit5 {
					side = 1;
					vehicle = "SoldierWMG";
					rank = "Private";
					position[] = {11,0,0};
				};
				class Unit6 {
					side = 1;
					vehicle = "SoldierWB";
					rank = "Private";
					position[] = {13,0,0};
				};
				class Unit7 {
					side = 1;
					vehicle = "SoldierWB";
					rank = "Private";
					position[] = {15,0,0};
				};
				class Unit8 {
					side = 1;
					vehicle = "SoldierWB";
					rank = "Private";
					position[] = {17,0,0};
				};
			};
			class MechanizedInfantry {
				name = "$STR_CFG_GRP_INFANTRY_MECHANIZED";
				class Unit0 {
					side = 1;
					vehicle = "OfficerW";
					rank = "Sergeant";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 1;
					vehicle = "M113";
					rank = "CORPORAL";
					position[] = {-5,0,0};
				};
				class Unit2 {
					side = 1;
					vehicle = "SoldierWG";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3 {
					side = 1;
					vehicle = "SoldierWG";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
				class Unit4 {
					side = 1;
					vehicle = "SoldierWLAW";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit5 {
					side = 1;
					vehicle = "SoldierWMG";
					rank = "Private";
					position[] = {11,0,0};
				};
				class Unit6 {
					side = 1;
					vehicle = "SoldierWB";
					rank = "Private";
					position[] = {13,0,0};
				};
				class Unit7 {
					side = 1;
					vehicle = "SoldierWB";
					rank = "Private";
					position[] = {15,0,0};
				};
			};
		};
	};
	class East {
		name = "$STR_EAST";
		class Armored {
			name = "$STR_CFG_GRP_ARMORED";
			class T80Platoon {
				name = "$STR_CFG_GRP_T80PLATOON";
				class Unit0 {
					side = 0;
					vehicle = "T80";
					rank = "CAPTAIN";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 0;
					vehicle = "T80";
					rank = "Lieutnant";
					position[] = {-20,0,0};
				};
				class Unit2 {
					side = 0;
					vehicle = "T80";
					rank = "Lieutnant";
					position[] = {20,0,0};
				};
				class Unit3 {
					side = 0;
					vehicle = "T80";
					rank = "Corporal";
					position[] = {40,0,0};
				};
			};
			class T72Platoon {
				name = "$STR_CFG_GRP_T72PLATOON";
				class Unit0 {
					side = 0;
					vehicle = "T72";
					rank = "CAPTAIN";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 0;
					vehicle = "T72";
					rank = "Lieutnant";
					position[] = {-20,0,0};
				};
				class Unit2 {
					side = 0;
					vehicle = "T72";
					rank = "Lieutnant";
					position[] = {20,0,0};
				};
				class Unit3 {
					side = 0;
					vehicle = "T72";
					rank = "Corporal";
					position[] = {40,0,0};
				};
			};
		};
		class Infantry {
			name = "$STR_CFG_GRP_INFANTRY";
			class BasicInfantry {
				name = "$STR_CFG_GRP_INFANTRY_BASIC";
				class Unit0 {
					side = 0;
					vehicle = "OfficerE";
					rank = "Sergeant";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 0;
					vehicle = "SoldierEMG";
					rank = "CORPORAL";
					position[] = {3,0,0};
				};
				class Unit2 {
					side = 0;
					vehicle = "SoldierEG";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3 {
					side = 0;
					vehicle = "SoldierEB";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
				class Unit4 {
					side = 0;
					vehicle = "SoldierELAW";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit5 {
					side = 0;
					vehicle = "SoldierEMG";
					rank = "Private";
					position[] = {11,0,0};
				};
				class Unit6 {
					side = 0;
					vehicle = "SoldierEB";
					rank = "Private";
					position[] = {13,0,0};
				};
				class Unit7 {
					side = 0;
					vehicle = "SoldierEB";
					rank = "Private";
					position[] = {15,0,0};
				};
				class Unit8 {
					side = 0;
					vehicle = "SoldierEB";
					rank = "Private";
					position[] = {17,0,0};
				};
			};
			class MechanizedInfantry {
				name = "$STR_CFG_GRP_INFANTRY_MECHANIZED";
				class Unit0 {
					side = 0;
					vehicle = "OfficerE";
					rank = "Sergeant";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 0;
					vehicle = "BMP";
					rank = "CORPORAL";
					position[] = {-5,0,0};
				};
				class Unit2 {
					side = 0;
					vehicle = "SoldierEG";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3 {
					side = 0;
					vehicle = "SoldierEB";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
				class Unit4 {
					side = 0;
					vehicle = "SoldierELAW";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit5 {
					side = 0;
					vehicle = "SoldierEMG";
					rank = "Private";
					position[] = {11,0,0};
				};
				class Unit6 {
					side = 0;
					vehicle = "SoldierEB";
					rank = "Private";
					position[] = {13,0,0};
				};
				class Unit7 {
					side = 0;
					vehicle = "SoldierEB";
					rank = "Private";
					position[] = {15,0,0};
				};
			};
		};
	};
};

// string contains '\' is contained by {} but not "" to make editor recongnizes them better
class CfgAddons {
	access = 2;
	class PreloadBanks {
		class WeaponBIStudio {
			list[] = {{LaserGuided\},{ABox\},{6G30\},{Kozl\},{G36A\},{MM-1\},{Steyr\},{Bizon\},{XMS\},{M41a\}};
		};
		class MiscBIStudio {
			list[] = {{Flags\},{VoiceRH\}};
		};
	};
	class PreloadAddons {
		class WeaponBIStudio {
			list[] = {"LaserGuided","6G30","Kozlice","G36A","MM1","Steyr","Bizon","XMS","M41a"};
		};
		class MiscBIStudio {
			list[] = {"Flags1","VoiceRH"};
		};
		class ResistanceBIStudio {
			list[] = {"Noe"};
		};
	};
};

// CfgPatches is added in 2.01. Not sure if origin CWA supports this
class CfgPatches {
	class VoiceRH {
		units[] = {};
		weapons[] = {};
	};
	class editorupdate102 {
		units[] = {};
		weapons[] = {};
	};
	class TZK_BIN_CONFIG_4_0_6 {
		units[] = {};
		weapons[] = {};
	};
	class TZK_BIN_CONFIG_4_0_5 {
		units[] = {};
		weapons[] = {};
	};
};
