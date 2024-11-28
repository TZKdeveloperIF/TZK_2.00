#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define true 1
#define false 0

#define private 0
#define protected 1
#define public 2

#define CanSeeRadar 1
#define CanSeeEye 2
#define CanSeeOptics 4
#define CanSeeEar 8
#define CanSeeCompass 16
#define CanSeeAll 31

class CfgPatches {
	class TZK_CONFIG_CWACE_203 {
		name = "TZK_CONFIG_CWACE_203";
		author = "IF";
		units[] = {};
		requiredAddons[] = {"TZK_CONFIG_406_Release_2"}; // IMPORTANT!
		requiredVersion = 1.99;
	};
};


class CfgAmmo {
	#include "TZK_CwaCe_Cfg_2_03\CfgAmmo_0.h"


	// #include "TZK_CwaCe_Cfg_2_03\cfgAmmo_aa.h"
	// #include "TZK_CwaCe_Cfg_2_03\cfgAmmo_at.h"

	// #include "TZK_CwaCe_Cfg_2_03\cfgAmmo_art.h"

	// #include "TZK_CwaCe_Cfg_2_03\cfgAmmo_cannon.h"
	// #include "TZK_CwaCe_Cfg_2_03\cfgAmmo_mg.h"

	// #include "TZK_CwaCe_Cfg_2_03\cfgAmmo_soldier.h"

	#include "TZK_CwaCe_Cfg_2_03\cfgAmmo_tank.h"
};
class CfgWeapons {
	#include "TZK_CwaCe_Cfg_2_03\CfgWeapon_0.h"


	// #include "TZK_CwaCe_Cfg_2_03\cfgWeapon_aa.h"
	// #include "TZK_CwaCe_Cfg_2_03\cfgWeapon_at.h"

	// #include "TZK_CwaCe_Cfg_2_03\cfgWeapon_art.h"

	// #include "TZK_CwaCe_Cfg_2_03\cfgWeapon_cannon.h"
	// #include "TZK_CwaCe_Cfg_2_03\cfgWeapon_mg.h"

	// #include "TZK_CwaCe_Cfg_2_03\cfgWeapon_soldier.h"

	#include "TZK_CwaCe_Cfg_2_03\cfgWeapon_tank.h"
};

#include "TZK_CwaCe_Cfg_2_03\cfgUserActions.h"

class WeaponFireGun {};
class WeaponCloudsGun {};

class CfgVehicles {
	#include "TZK_CwaCe_Cfg_2_03\cfgVehicles_0.h"


	// #include "TZK_CwaCe_Cfg_2_03\cfgVehicles_tank.h"
	// #include "TZK_CwaCe_Cfg_2_03\cfgVehicles_apc.h"
	// #include "TZK_CwaCe_Cfg_2_03\cfgVehicles_art.h"

	// #include "TZK_CwaCe_Cfg_2_03\cfgVehicles_car.h"
	// #include "TZK_CwaCe_Cfg_2_03\cfgVehicles_ship.h"

	// #include "TZK_CwaCe_Cfg_2_03\cfgVehicles_static.h"
	// #include "TZK_CwaCe_Cfg_2_03\cfgVehicles_defence.h"

	// #include "TZK_CwaCe_Cfg_2_03\cfgVehicles_heli.h"
	// #include "TZK_CwaCe_Cfg_2_03\cfgVehicles_plane.h"

	// #include "TZK_CwaCe_Cfg_2_03\cfgVehicles_proxy.h"

	// #include "TZK_CwaCe_Cfg_2_03\cfgVehicles_soldier.h"
};

class CfgMarkers {
	class UnknownVehicle_Marker_xj400 {};
	// class SmallHeli_Marker_xj400: UnknownVehicle_Marker_xj400 {
	// 	name = "SmallHeli";
	// 	icon = "\tzk_texture_4_0_6\ui\uiMi2.paa";
	// 	size = 28;
	// };
};

class CfgNonAIVehicles {
	class ProxyCrew {};
	class ProxyDriver: ProxyCrew {};
	class ProxyGunner: ProxyCrew {};
	class ProxyCommander: ProxyCrew {};
};

class CfgVehicleActions {
};
class CfgMovesMC_xj400 {
	class Default {};
	class DefaultDie: Default {};
	class StandBase: Default {};
	class States {
		class Driver: Default {};
		class Gunner: Driver {};
		class Commander: Driver {};
		class Cargo: Driver {};
	};
};

// EOF